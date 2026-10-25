// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142724f20 FUN_142724f20 body=511 status=ok
// SIG undefined FUN_142724f20(void)

void FUN_142724f20(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 8;
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
              (param_2,(longlong)*(int *)(param_1 + 1) << 3,
               (longlong)*(int *)((longlong)param_1 + 0xc) << 3);
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
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
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
    FUN_14271f410(param_2,param_1);
  }
  return;
}



// FUNCTION 142725120 FUN_142725120 body=511 status=ok
// SIG undefined FUN_142725120(void)

void FUN_142725120(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 8;
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
              (param_2,(longlong)*(int *)(param_1 + 1) << 3,
               (longlong)*(int *)((longlong)param_1 + 0xc) << 3);
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
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
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
    FUN_14271f590(param_2,param_1);
  }
  return;
}



// FUNCTION 142725320 FUN_142725320 body=511 status=ok
// SIG undefined FUN_142725320(void)

void FUN_142725320(undefined8 *param_1,longlong *param_2,char param_3)

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
    FUN_14271f730(param_2,param_1);
  }
  return;
}



// FUNCTION 142725520 FUN_142725520 body=511 status=ok
// SIG undefined FUN_142725520(void)

void FUN_142725520(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 4;
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
              (param_2,(longlong)*(int *)(param_1 + 1) << 2,
               (longlong)*(int *)((longlong)param_1 + 0xc) << 2);
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
        TArray<float,FDefaultAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
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
    FUN_14271f8d0(param_2,param_1);
  }
  return;
}



// FUNCTION 142725720 FUN_142725720 body=511 status=ok
// SIG undefined FUN_142725720(void)

void FUN_142725720(undefined8 *param_1,longlong *param_2,char param_3)

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
    FUN_14271fa70(param_2,param_1);
  }
  return;
}



// FUNCTION 142725920 FUN_142725920 body=14 status=ok
// SIG undefined FUN_142725920(void)

undefined8 FUN_142725920(void)

{
  return CONCAT71((int7)((ulonglong)DAT_146b08f58 >> 8),*DAT_146b08f58 != 0);
}



// FUNCTION 142725940 Call body=75 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_ffb3a70632e8964638d4db8bc9dd31c4>,void___cdecl(void)>::Call
               (undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1[10];
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar2 = param_1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))();
    }
  }
  (*(code *)*param_1)(uVar1,local_res8);
  return;
}



// FUNCTION 142725990 FUN_142725990 body=474 status=ok
// SIG undefined FUN_142725990(void)

void FUN_142725990(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  void *_Dst;
  void *_Src;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  
  if (((*(int *)(param_1 + 0x98) != 0) && ((int)param_2[0xf] != 0)) &&
     (*(int *)(param_1 + 0x98) != 1)) {
    lVar2 = *param_2;
    uVar6 = 0;
    plVar10 = (longlong *)param_2[0xe];
    uVar9 = (longlong)(int)param_2[0xf] & 0x1fffffffffffffff;
    if (plVar10 + (int)param_2[0xf] < plVar10) {
      uVar9 = uVar6;
    }
    if (uVar9 != 0) {
      do {
        plVar3 = (longlong *)*plVar10;
        lVar4 = UObject::FindFunction(param_3,plVar3[9]);
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x8c) == '\0') {
            (**(code **)(*param_3 + 0x208))(param_3,lVar4,0);
          }
          else if (*(char *)(lVar4 + 0x8c) == '\x01') {
            plVar7 = *(longlong **)(param_1 + 0x10);
            plVar5 = plVar7 + (longlong)*(int *)(param_1 + 0x18) * 6;
            for (; plVar7 != plVar5; plVar7 = plVar7 + 6) {
              if ((longlong *)*plVar7 == plVar3) goto LAB_142725a90;
            }
            plVar7 = (longlong *)0x0;
LAB_142725a90:
            puVar8 = (undefined1 *)(*(int *)((longlong)plVar7 + 0x14) + lVar2);
            if (*(char *)((ulonglong)*(ushort *)(plVar7 + 3) * 0x20 + 0x1c +
                         *(longlong *)(param_1 + 0x20)) == '\x03') {
              pbVar1 = puVar8 + *(byte *)(*plVar7 + 0x71);
              puVar8 = local_res8;
              local_res8[0] = (*(byte *)(*plVar7 + 0x73) & *pbVar1) != 0;
            }
            (**(code **)(*param_3 + 0x208))(param_3,lVar4,puVar8);
            if ((*(byte *)((longlong)plVar7 + 0x2c) & 0x18) == 0) {
              _Src = (void *)((longlong)*(int *)((longlong)plVar3 + 0x44) + (longlong)param_3);
              _Dst = (void *)(*(int *)((longlong)plVar7 + 0x14) + lVar2);
              if (_Dst != _Src) {
                if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) == 0) {
                  (**(code **)(*plVar3 + 0x2e8))(plVar3,_Dst,_Src,(int)plVar3[6]);
                }
                else {
                  _guard_xfg_dispatch_icall_nop
                            (_Dst,_Src,
                             (longlong)(*(int *)((longlong)plVar3 + 0x34) * (int)plVar3[6]));
                }
              }
            }
          }
        }
        plVar10 = plVar10 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar9);
    }
    *(undefined4 *)(param_2 + 0xf) = 0;
    if (*(int *)((longlong)param_2 + 0x7c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 0xe,0);
    }
  }
  return;
}



// FUNCTION 142725b70 FUN_142725b70 body=1101 status=ok
// SIG undefined FUN_142725b70(void)

void FUN_142725b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined8 **ppuVar10;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined8 *local_50;
  undefined8 **local_48;
  undefined1 *local_40;
  undefined8 **local_38;
  undefined8 ***local_30;
  int local_28;
  
  local_28 = -1;
  local_38 = (undefined8 **)0x0;
  local_30 = (undefined8 ***)0x0;
  uVar4 = FUN_142a2f930();
  FUN_1417a5560(uVar4,&local_38,1,0x10,0);
  uVar7 = (ulonglong)local_30 & 0xffffffff;
  do {
    local_28 = local_28 + 1;
    ppuVar10 = local_38;
    if ((int)local_30 <= local_28) break;
  } while (local_38[local_28] == (undefined8 *)0x0);
  do {
    do {
      if ((local_28 < 0) || ((int)uVar7 <= local_28)) {
        if (ppuVar10 != (undefined8 **)0x0) {
          FMemory::Free(ppuVar10);
        }
        FUN_1419e4900(param_3);
        FUN_1425679e0(param_2);
        plVar5 = (longlong *)FUN_1419f19d0();
        plVar5 = (longlong *)*plVar5;
        if (plVar5 != (longlong *)0x0) {
          local_38 = &local_50;
          local_30 = &local_48;
          do {
            local_50 = (undefined8 *)plVar5[2];
            psVar1 = (short *)local_50[2];
            local_48 = (undefined8 **)0x0;
            local_40 = (undefined1 *)0x0;
            if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
              lVar6 = -1;
              do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
              } while (psVar1[lVar2] != 0);
              uVar9 = (int)lVar6 + 1;
              local_40 = (undefined1 *)(ulonglong)uVar9;
              if (0 < (int)uVar9) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
              }
              FGenericPlatformString::Memcpy(local_48,psVar1,(longlong)(int)uVar9 * 2);
            }
            FUN_14271c830(param_4,local_54,&local_38,0);
            if (local_48 != (undefined8 **)0x0) {
              FMemory::Free();
            }
            plVar5 = (longlong *)*plVar5;
          } while (plVar5 != (longlong *)0x0);
        }
        plVar5 = (longlong *)FUN_1419f19c0();
        plVar5 = (longlong *)*plVar5;
        if (plVar5 != (longlong *)0x0) {
          local_38 = &local_50;
          local_30 = &local_48;
          do {
            local_50 = (undefined8 *)plVar5[2];
            psVar1 = (short *)*local_50;
            local_48 = (undefined8 **)0x0;
            local_40 = (undefined1 *)0x0;
            if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
              lVar6 = -1;
              do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
              } while (psVar1[lVar2] != 0);
              uVar9 = (int)lVar6 + 1;
              local_40 = (undefined1 *)(ulonglong)uVar9;
              if (0 < (int)uVar9) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
              }
              FGenericPlatformString::Memcpy(local_48,psVar1,(longlong)(int)uVar9 * 2);
            }
            FUN_14271cff0(param_5,local_54,&local_38,0);
            if (local_48 != (undefined8 **)0x0) {
              FMemory::Free();
            }
            plVar5 = (longlong *)*plVar5;
          } while (plVar5 != (longlong *)0x0);
        }
        plVar5 = (longlong *)FUN_1419f19e0();
        plVar5 = (longlong *)*plVar5;
        if (plVar5 != (longlong *)0x0) {
          local_38 = &local_50;
          local_30 = &local_48;
          do {
            local_50 = (undefined8 *)plVar5[2];
            psVar1 = (short *)local_50[2];
            local_48 = (undefined8 **)0x0;
            local_40 = (undefined1 *)0x0;
            if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
              lVar6 = -1;
              do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
              } while (psVar1[lVar2] != 0);
              uVar9 = (int)lVar6 + 1;
              local_40 = (undefined1 *)(ulonglong)uVar9;
              if (0 < (int)uVar9) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
              }
              FGenericPlatformString::Memcpy(local_48,psVar1,(longlong)(int)uVar9 * 2);
            }
            FUN_14271c830(param_6,local_54,&local_38,0);
            if (local_48 != (undefined8 **)0x0) {
              FMemory::Free();
            }
            plVar5 = (longlong *)*plVar5;
          } while (plVar5 != (longlong *)0x0);
        }
        FSceneViewStateReference::DestroyAll();
        FValidationRHI::UnlockStagingBuffer_RenderThread(DAT_1469f4590);
        UninitializeShaderTypes();
        lVar6 = GetPendingCleanupObjects();
        if (lVar6 != 0) {
          FPendingCleanupObjects::~FPendingCleanupObjects(lVar6);
          FMemory::operator_delete(lVar6,0x10);
        }
        (**(code **)(**(longlong **)(DAT_146b17150 + 0x7a8) + 0x10))();
        FUN_142437910();
        return;
      }
      local_50 = ppuVar10[local_28];
      if (local_50[0x37] != 0) {
        local_58[0] = local_50[0xba] != 0;
        local_48 = &local_50;
        local_40 = local_58;
        FUN_14271cc20(param_1,local_54,&local_48);
        iVar3 = UWorld::GetNumLevels(local_50);
        iVar8 = 0;
        if (0 < iVar3) {
          do {
            uVar4 = UWorld::GetLevel(local_50,iVar8);
            FUN_142534f40(uVar4);
            iVar8 = iVar8 + 1;
            iVar3 = UWorld::GetNumLevels(local_50);
          } while (iVar8 < iVar3);
        }
        if (local_50[0xba] != 0) {
          FUN_1425e13b0(local_50[0xba]);
          local_50[0xba] = 0;
        }
        (**(code **)(*(longlong *)local_50[0x37] + 0x1f0))();
        local_50[0x37] = 0;
        uVar7 = (ulonglong)local_30 & 0xffffffff;
        ppuVar10 = local_38;
      }
      local_28 = local_28 + 1;
    } while ((int)uVar7 <= local_28);
    do {
      if (ppuVar10[local_28] != (undefined8 *)0x0) break;
      local_28 = local_28 + 1;
    } while (local_28 < (int)uVar7);
  } while( true );
}



// FUNCTION 142725fc0 FUN_142725fc0 body=136 status=ok
// SIG undefined FUN_142725fc0(void)

void FUN_142725fc0(longlong param_1)

{
  int iVar1;
  void *_Dst;
  
  if (*(char *)(param_1 + 0x70) != '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 100)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x58,0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x168))();
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x90) + 0x1f;
  _Dst = *(void **)(param_1 + 0x88);
  if (*(void **)(param_1 + 0x88) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x78);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}



// FUNCTION 142726050 FUN_142726050 body=449 status=ok
// SIG undefined FUN_142726050(void)

undefined8
FUN_142726050(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (1 < *(uint *)(param_1 + 0x98)) {
    *(int *)(param_3 + 0x818) = *(int *)(param_3 + 0x818) + 1;
    uVar2 = *(uint *)(param_3 + 0x814) & 0x8000003f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
    }
    lVar5 = (longlong)(int)uVar2 * 0x20 + param_3;
    plVar4 = (longlong *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x20) = 0;
    if (*(int *)(lVar5 + 0x24) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar4,0);
    }
    FUN_1427264c0(param_1,param_2,0,*(int *)(param_1 + 0x28) + -1,*(undefined8 *)(param_3 + 0x820),
                  param_4,plVar4,0,(byte)(*param_5 >> 1) & 1,0);
    iVar1 = *(int *)(lVar5 + 0x20);
    if (iVar1 != 0) {
      *(int *)(lVar5 + 0x20) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x24) < iVar1 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar4,iVar1);
      }
      lVar5 = *plVar4;
      *(int *)(param_3 + 0x814) = *(int *)(param_3 + 0x814) + 1;
      *(undefined2 *)(lVar5 + (longlong)iVar1 * 2) = 0;
      FUN_142738e40(param_3 + 0x830);
      uVar2 = *(uint *)(param_3 + 0x810);
      if (*(int *)(param_3 + 0x814) - uVar2 == 0x40) {
        *(uint *)(param_3 + 0x810) = uVar2 + 1;
        uVar3 = uVar2 & 0x8000003f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
        }
        uVar2 = uVar2 + 1 & 0x8000003f;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
        }
        plVar4 = (longlong *)(param_3 + 0x18 + (longlong)(int)uVar2 * 0x20);
        local_28 = *plVar4;
        *plVar4 = 0;
        local_20 = (undefined4)plVar4[1];
        local_1c = *(undefined4 *)((longlong)plVar4 + 0xc);
        plVar4[1] = 0;
        FUN_142730d60(param_1,param_4,param_3 + 0x18 + (longlong)(int)uVar3 * 0x20,&local_28,plVar4)
        ;
        if (local_28 != 0) {
          FMemory::Free();
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142726220 FUN_142726220 body=669 status=ok
// SIG undefined FUN_142726220(void)

void FUN_142726220(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,ushort param_6,undefined2 param_7,undefined1 param_8,
                  char param_9)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 uVar10;
  void *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  undefined4 local_48;
  
  uVar1 = *(ushort *)(param_3 + 1);
  plVar8 = (longlong *)((ulonglong)param_6 * 0x20 + *(longlong *)(param_1 + 0x20));
  uVar2 = *(ushort *)(param_4 + 1);
  local_58 = *(longlong *)(*plVar8 + 0x70);
  local_48 = *(undefined4 *)(local_58 + 0x34);
  local_50 = param_3;
  FUN_1404845d0(&local_58,(uint)uVar2);
  lVar9 = *param_4;
  iVar7 = 0;
  lVar3 = *param_3;
  uVar4 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  if (uVar2 != 0) {
    do {
      if ((param_9 == '\0') && (iVar7 < (int)(uint)uVar1)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      lVar6 = (longlong)(int)((uint)*(ushort *)((longlong)plVar8 + 10) * iVar7);
      uVar4 = FUN_1427264c0(param_1,param_2,param_6 + 1,*(ushort *)(plVar8 + 1) - 1,lVar6 + lVar3,
                            lVar6 + lVar9,&local_68,uVar4,param_8,uVar10);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)uVar2);
    if ((int)local_60 != 0) {
      lVar9 = param_5[1];
      iVar7 = (int)lVar9 + 1;
      *(int *)(param_5 + 1) = iVar7;
      if (*(int *)((longlong)param_5 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5);
      }
      *(undefined2 *)(*param_5 + (longlong)(int)lVar9 * 2) = param_7;
      lVar9 = param_5[1];
      uVar4 = (undefined2)local_60;
      iVar7 = (int)lVar9 + 1;
      *(int *)(param_5 + 1) = iVar7;
      if (*(int *)((longlong)param_5 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5);
      }
      *(undefined2 *)(*param_5 + (longlong)(int)lVar9 * 2) = uVar4;
      iVar7 = (int)local_60;
      lVar9 = (longlong)(int)local_60;
      if ((int)local_60 != 0) {
        iVar5 = (int)param_5[1];
        if (*(int *)((longlong)param_5 + 0xc) < iVar5 + (int)local_60) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5);
          iVar5 = (int)param_5[1];
        }
        _guard_xfg_dispatch_icall_nop((void *)(*param_5 + (longlong)iVar5 * 2),local_68,lVar9 * 2);
        *(int *)(param_5 + 1) = (int)param_5[1] + iVar7;
      }
      lVar9 = param_5[1];
      iVar7 = (int)lVar9 + 1;
      *(int *)(param_5 + 1) = iVar7;
      if (*(int *)((longlong)param_5 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5);
      }
      *(undefined2 *)(*param_5 + (longlong)(int)lVar9 * 2) = 0;
      goto LAB_142726493;
    }
  }
  if (uVar2 != uVar1) {
    iVar7 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar7 + 1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar7);
    }
    *(undefined2 *)(*param_5 + (longlong)iVar7 * 2) = param_7;
    iVar7 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar7 + 1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar7);
    }
    *(undefined2 *)(*param_5 + (longlong)iVar7 * 2) = 0;
    iVar7 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar7 + 1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar7);
    }
    *(undefined2 *)(*param_5 + (longlong)iVar7 * 2) = 0;
  }
LAB_142726493:
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1427264c0 FUN_1427264c0 body=1308 status=ok
// SIG undefined FUN_1427264c0(void)

short FUN_1427264c0(longlong param_1,longlong param_2,int param_3,int param_4,longlong param_5,
                   longlong param_6,longlong *param_7,short param_8,char param_9,char param_10)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  void *_Dst;
  void *_Src;
  float *pfVar10;
  float *pfVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  
  if (param_2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_2 + 0x80);
  }
  if (param_4 <= param_3) {
    return param_8;
  }
  do {
    param_8 = param_8 + 1;
    plVar12 = (longlong *)((longlong)param_3 * 0x20 + *(longlong *)(param_1 + 0x20));
    uVar1 = *(ushort *)((longlong)plVar12 + 0x16);
    lVar9 = (ulonglong)uVar1 * 0x30 + *(longlong *)(param_1 + 0x10);
    if ((lVar6 == 0) || ((*(byte *)(*(longlong *)(lVar6 + 8) + (ulonglong)uVar1 * 4) & 1) != 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((((*(byte *)(lVar9 + 0x2c) & 1) == 0) || (!bVar4)) ||
       ((*(int *)(lVar9 + 0x20) == 1 && (param_9 == '\0')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (*(char *)((longlong)plVar12 + 0x1c) == '\0') {
      if (bVar4) {
        param_3 = *(ushort *)(plVar12 + 1) - 1;
      }
      else {
        FUN_142726220(param_1,param_2,(int)plVar12[2] + param_5,
                      *(int *)((longlong)plVar12 + 0xc) + param_6,param_7,(short)param_3,param_8,
                      param_9,param_10);
        param_3 = *(ushort *)(plVar12 + 1) - 1;
      }
      goto LAB_142726960;
    }
    if (bVar4) goto LAB_142726960;
    if (param_2 != 0) {
      if ((uint)uVar1 == *(uint *)(param_1 + 0x48)) {
        iVar2 = *(int *)(*(int *)((longlong)plVar12 + 0xc) + param_6);
        if ((param_10 != '\0') || (*(int *)(param_2 + 0x4dc) != iVar2)) {
          *(int *)(param_2 + 0x4dc) = iVar2;
LAB_142726677:
          iVar2 = (int)param_7[1];
          *(int *)(param_7 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_7 + 0xc) < iVar2 + 1) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_7,iVar2);
          }
          *(short *)(*param_7 + (longlong)iVar2 * 2) = param_8;
        }
      }
      else {
        if ((uint)uVar1 != *(uint *)(param_1 + 0x4c)) goto LAB_1427266a7;
        iVar2 = *(int *)(*(int *)((longlong)plVar12 + 0xc) + param_6);
        if ((param_10 != '\0') || (*(int *)(param_2 + 0x4d8) != iVar2)) {
          *(int *)(param_2 + 0x4d8) = iVar2;
          goto LAB_142726677;
        }
      }
      goto LAB_142726960;
    }
LAB_1427266a7:
    if (param_10 != '\0') goto LAB_1427268d9;
    pfVar10 = (float *)(*(int *)((longlong)plVar12 + 0xc) + param_6);
    pfVar11 = (float *)((int)plVar12[2] + param_5);
    switch(*(char *)((longlong)plVar12 + 0x1c)) {
    case '\x02':
    case '\x03':
      cVar5 = (**(code **)(*(longlong *)*plVar12 + 0x2b8))((longlong *)*plVar12,pfVar11,pfVar10,0);
      break;
    case '\x04':
      if (*pfVar10 == *pfVar11) goto LAB_142726960;
      goto LAB_1427268d9;
    case '\x05':
    case '\t':
      cVar5 = *pfVar11 == *pfVar10;
      break;
    case '\x06':
    case '\x15':
      cVar5 = *(char *)pfVar11 == *(char *)pfVar10;
      break;
    case '\a':
    case '\x14':
      cVar5 = *(longlong *)pfVar11 == *(longlong *)pfVar10;
      break;
    case '\b':
      plVar3 = (longlong *)*plVar12;
      lVar9 = (**(code **)(*plVar3 + 0x378))(plVar3,pfVar11);
      lVar7 = (**(code **)(*plVar3 + 0x378))(plVar3,pfVar10);
      cVar5 = lVar9 == lVar7;
      break;
    case '\n':
    case '\v':
    case '\r':
    case '\x10':
    case '\x11':
    case '\x12':
      if (((*pfVar10 == *pfVar11) && (pfVar10[1] == pfVar11[1])) && (pfVar10[2] == pfVar11[2]))
      goto LAB_142726960;
      goto LAB_1427268d9;
    case '\f':
      cVar5 = FUN_14271c0f0(pfVar11,pfVar10);
      break;
    case '\x0e':
      cVar5 = FUniqueNetIdWrapper::operator==(pfVar11,pfVar10);
      break;
    case '\x0f':
      cVar5 = FUN_14271c120(pfVar11,pfVar10);
      break;
    case '\x13':
      cVar5 = UKismetStringLibrary::EqualEqual_StriStri(pfVar11,pfVar10);
      break;
    default:
      local_68 = *(undefined8 *)(*plVar12 + 0x18);
      FName::ToString(&local_68,&local_58);
      puVar8 = &DAT_143f3eda8;
      if (local_50 != 0) {
        puVar8 = local_58;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
                 *(undefined1 *)((longlong)plVar12 + 0x1c),puVar8);
      uVar13 = (undefined4)((ulonglong)puVar8 >> 0x20);
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_60 = *(undefined8 *)(*plVar12 + 0x18);
      FName::ToString(&local_60,&local_48);
      puVar8 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar8 = local_48;
      }
      FDebug::AssertFailed
                ((longlong)
                 L"Failed to get finished soundwave: write operation currently still in progress." +
                 0x9f,"Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
                 CONCAT44(uVar13,(uint)*(byte *)((longlong)plVar12 + 0x1c)),puVar8);
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      goto LAB_1427268d9;
    case -2:
      cVar5 = FUN_14247c3b0(pfVar11,pfVar10[1]);
      break;
    case -1:
      cVar5 = FUN_14247c3d0(pfVar11,pfVar10[1]);
    }
    if (cVar5 == '\0') {
LAB_1427268d9:
      _Src = (void *)(*(int *)((longlong)plVar12 + 0xc) + param_6);
      _Dst = (void *)((int)plVar12[2] + param_5);
      plVar12 = (longlong *)*plVar12;
      if (_Dst != _Src) {
        if ((*(uint *)(plVar12 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*plVar12 + 0x2e8))(plVar12,_Dst,_Src,1);
        }
        else {
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)*(int *)((longlong)plVar12 + 0x34));
        }
      }
      iVar2 = (int)param_7[1];
      *(int *)(param_7 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_7 + 0xc) < iVar2 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_7,iVar2);
      }
      *(short *)(*param_7 + (longlong)iVar2 * 2) = param_8;
    }
LAB_142726960:
    param_3 = param_3 + 1;
    if (param_4 <= param_3) {
      return param_8;
    }
  } while( true );
}



// FUNCTION 142726b20 FUN_142726b20 body=74 status=ok
// SIG undefined FUN_142726b20(void)

void FUN_142726b20(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 4) {
    iVar3 = DAT_1464c9c14;
  }
  if (1 < iVar3) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    return;
  }
  bVar2 = false;
  lVar4 = 0;
  do {
    if (*(int *)(param_1 + 0x48) <= lVar4) break;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x40) + lVar4 * 4);
    bVar2 = 0xffff < uVar1;
    lVar4 = lVar4 + 1;
  } while (uVar1 < 0x10000);
  *(bool *)(param_1 + 0x50) = bVar2;
  return;
}



// FUNCTION 142726b70 ComputeMirroredSSSKernel body=2278 status=ok
// SIG undefined ComputeMirroredSSSKernel(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ComputeMirroredSSSKernel
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
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
  float fVar42;
  float fVar43;
  undefined1 unaff_XMM7 [16];
  float fVar44;
  undefined1 auVar41 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auStack_4e8 [32];
  uint local_4c8;
  int local_4c4;
  undefined8 *local_4c0 [2];
  undefined8 *local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  float local_47c [249];
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_4e8;
  local_4c8 = param_2 * 2 - 1;
  if ((int)local_4c8 < 0x15) {
    fVar30 = 2.0;
  }
  else {
    fVar30 = 3.0;
  }
  iVar22 = param_2 * 2 + -2;
  uVar23 = 0;
  lVar24 = (longlong)(int)local_4c8;
  fVar39 = 0.0;
  if (0 < (int)local_4c8) {
    pfVar15 = (float *)((longlong)&uStack_490 + 4);
    uVar18 = uVar23;
    lVar20 = lVar24;
    do {
      fVar28 = (float)(int)uVar18 * ((fVar30 + fVar30) / (float)iVar22) - fVar30;
      fVar29 = 1.0 / fVar30;
      if (fVar28 < 0.0) {
        fVar29 = -1.0 / fVar30;
      }
      uVar18 = (ulonglong)((int)uVar18 + 1);
      *pfVar15 = fVar28 * fVar28 * fVar29;
      pfVar15 = pfVar15 + 4;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  if (0 < (int)local_4c8) {
    unaff_XMM8._0_12_ = ZEXT812(0x7fffffff);
    unaff_XMM8._12_4_ = 0.0;
    pfVar15 = (float *)((longlong)&uStack_490 + 4);
    unaff_XMM9._0_12_ = ZEXT812(0x3f000000);
    unaff_XMM9._12_4_ = 0.0;
    uVar18 = uVar23;
    uVar27 = uVar23;
    local_4c4 = param_2;
    local_4c0[0] = param_4;
    local_4b0 = param_1;
    do {
      fVar30 = *pfVar15;
      if ((longlong)uVar27 < 1) {
        fVar29 = 0.0;
      }
      else {
        fVar29 = (float)((uint)(fVar30 - pfVar15[-4]) & unaff_XMM8._0_4_);
      }
      if ((int)uVar18 < iVar22) {
        auVar41 = ZEXT416((uint)(fVar30 - pfVar15[4]) & unaff_XMM8._0_4_);
      }
      else {
        auVar41 = ZEXT816(0);
      }
      unaff_XMM7._4_12_ = auVar41._4_12_;
      local_4a8 = *param_4;
      uStack_4a0 = param_4[1];
      fVar29 = (auVar41._0_4_ + fVar29) * 0.5;
      pfVar14 = (float *)SeparableSSS_Profile(local_4c0,fVar30,&local_4a8);
      uVar18 = (ulonglong)((int)uVar18 + 1);
      uVar27 = uVar27 + 1;
      fVar30 = pfVar14[1];
      unaff_XMM7._0_4_ = fVar29 * pfVar14[2];
      pfVar15[-3] = fVar29 * *pfVar14;
      pfVar15[-2] = fVar29 * fVar30;
      pfVar15[-1] = unaff_XMM7._0_4_;
      pfVar15 = pfVar15 + 4;
      param_1 = local_4b0;
      param_2 = local_4c4;
    } while ((longlong)uVar27 < lVar24);
  }
  lVar20 = (longlong)((int)local_4c8 / 2);
  uVar11 = (&local_498)[lVar20 * 2];
  uVar12 = (&uStack_490)[lVar20 * 2];
  puVar13 = &local_498 + lVar20 * 2;
  for (; 0 < lVar20; lVar20 = lVar20 + -1) {
    *puVar13 = puVar13[-2];
    puVar13[1] = puVar13[-1];
    puVar13 = puVar13 + -2;
  }
  local_498 = uVar11;
  uStack_490 = uVar12;
  fVar30 = 0.0;
  fVar29 = 0.0;
  uVar26 = 0;
  uVar19 = uVar26;
  if ((0 < (int)local_4c8) && (7 < local_4c8)) {
    fVar40 = 0.0;
    fVar42 = 0.0;
    fVar43 = 0.0;
    fVar44 = 0.0;
    fVar30 = 0.0;
    fVar39 = 0.0;
    fVar29 = 0.0;
    fVar28 = 0.0;
    uVar17 = local_4c8 & 0x80000007;
    if ((int)uVar17 < 0) {
      uVar17 = (uVar17 - 1 | 0xfffffff8) + 1;
    }
    fVar35 = 0.0;
    fVar36 = 0.0;
    fVar37 = 0.0;
    fVar38 = 0.0;
    fVar31 = 0.0;
    fVar32 = 0.0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    pfVar15 = local_47c + 1;
    uVar18 = uVar23;
    uVar27 = uVar23;
    auVar41 = ZEXT816(0);
    auVar45 = ZEXT816(0);
    do {
      uVar19 = (int)uVar27 + 8;
      uVar27 = (ulonglong)uVar19;
      uVar18 = uVar18 + 8;
      fVar31 = fVar31 + pfVar15[-8];
      fVar32 = fVar32 + pfVar15[-4];
      fVar33 = fVar33 + *pfVar15;
      fVar34 = fVar34 + pfVar15[4];
      fVar35 = fVar35 + pfVar15[-7];
      fVar36 = fVar36 + pfVar15[-3];
      fVar37 = fVar37 + pfVar15[1];
      fVar38 = fVar38 + pfVar15[5];
      fVar40 = fVar40 + pfVar15[-6];
      fVar42 = fVar42 + pfVar15[-2];
      fVar43 = fVar43 + pfVar15[2];
      fVar44 = fVar44 + pfVar15[6];
      fVar30 = fVar30 + pfVar15[8];
      fVar39 = fVar39 + pfVar15[0xc];
      fVar29 = fVar29 + pfVar15[0x10];
      fVar28 = fVar28 + pfVar15[0x14];
      pfVar14 = pfVar15 + 0x12;
      pfVar1 = pfVar15 + 0x16;
      pfVar2 = pfVar15 + 0xe;
      unaff_XMM9._0_4_ = auVar45._0_4_ + pfVar15[9];
      unaff_XMM9._4_4_ = auVar45._4_4_ + pfVar15[0xd];
      unaff_XMM9._8_4_ = auVar45._8_4_ + pfVar15[0x11];
      unaff_XMM9._12_4_ = auVar45._12_4_ + pfVar15[0x15];
      pfVar3 = pfVar15 + 10;
      pfVar15 = pfVar15 + 0x20;
      unaff_XMM8._0_4_ = auVar41._0_4_ + *pfVar3;
      unaff_XMM8._4_4_ = auVar41._4_4_ + *pfVar2;
      unaff_XMM8._8_4_ = auVar41._8_4_ + *pfVar14;
      unaff_XMM8._12_4_ = auVar41._12_4_ + *pfVar1;
      auVar41 = unaff_XMM8;
      auVar45 = unaff_XMM9;
    } while ((longlong)uVar18 < (longlong)(int)(local_4c8 - uVar17));
    unaff_XMM7._0_4_ = fVar40 + unaff_XMM8._0_4_;
    unaff_XMM7._4_4_ = fVar42 + unaff_XMM8._4_4_;
    unaff_XMM7._8_4_ = fVar43 + unaff_XMM8._8_4_;
    unaff_XMM7._12_4_ = fVar44 + unaff_XMM8._12_4_;
    fVar39 = fVar33 + fVar29 + fVar31 + fVar30 + fVar34 + fVar28 + fVar32 + fVar39;
    fVar30 = fVar37 + unaff_XMM9._8_4_ + fVar35 + unaff_XMM9._0_4_ +
             fVar38 + unaff_XMM9._12_4_ + fVar36 + unaff_XMM9._4_4_;
    fVar29 = unaff_XMM7._8_4_ + unaff_XMM7._0_4_ + unaff_XMM7._12_4_ + unaff_XMM7._4_4_;
  }
  lVar20 = (longlong)(int)uVar19;
  if (lVar20 < lVar24) {
    if (3 < lVar24 - lVar20) {
      pfVar15 = (float *)((longlong)&local_498 + lVar20 * 0x10 + 4);
      lVar16 = ((lVar24 - lVar20) - 4U >> 2) + 1;
      lVar20 = lVar20 + lVar16 * 4;
      do {
        fVar39 = fVar39 + pfVar15[-1] + pfVar15[3] + pfVar15[7] + pfVar15[0xb];
        fVar30 = fVar30 + *pfVar15 + pfVar15[4] + pfVar15[8] + pfVar15[0xc];
        fVar29 = fVar29 + pfVar15[1] + pfVar15[5] + pfVar15[9] + pfVar15[0xd];
        pfVar15 = pfVar15 + 0x10;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    if (lVar20 < lVar24) {
      pfVar15 = (float *)((longlong)&local_498 + lVar20 * 0x10 + 4);
      lVar20 = lVar24 - lVar20;
      do {
        fVar39 = fVar39 + pfVar15[-1];
        fVar30 = fVar30 + *pfVar15;
        fVar29 = fVar29 + pfVar15[1];
        pfVar15 = pfVar15 + 4;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
  }
  if ((0 < (int)local_4c8) && (uVar26 = 0, 7 < local_4c8)) {
    uVar19 = local_4c8 & 0x80000007;
    if ((int)uVar19 < 0) {
      uVar19 = (uVar19 - 1 | 0xfffffff8) + 1;
    }
    auVar41._4_4_ = fVar39;
    auVar41._0_4_ = fVar39;
    auVar41._8_4_ = fVar39;
    auVar41._12_4_ = fVar39;
    auVar41 = rcpps(unaff_XMM7,auVar41);
    iVar22 = 4;
    auVar45._4_4_ = fVar30;
    auVar45._0_4_ = fVar30;
    auVar45._8_4_ = fVar30;
    auVar45._12_4_ = fVar30;
    auVar45 = rcpps(unaff_XMM8,auVar45);
    fVar28 = auVar41._0_4_;
    fVar40 = auVar41._4_4_;
    fVar42 = auVar41._8_4_;
    fVar43 = auVar41._12_4_;
    auVar10._4_4_ = fVar29;
    auVar10._0_4_ = fVar29;
    auVar10._8_4_ = fVar29;
    auVar10._12_4_ = fVar29;
    auVar41 = rcpps(unaff_XMM9,auVar10);
    fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar39;
    fVar40 = (fVar40 + fVar40) - fVar40 * fVar40 * fVar39;
    fVar42 = (fVar42 + fVar42) - fVar42 * fVar42 * fVar39;
    fVar43 = (fVar43 + fVar43) - fVar43 * fVar43 * fVar39;
    fVar44 = auVar45._0_4_;
    fVar31 = auVar45._4_4_;
    fVar32 = auVar45._8_4_;
    fVar33 = auVar45._12_4_;
    fVar44 = (fVar44 + fVar44) - fVar44 * fVar44 * fVar30;
    fVar31 = (fVar31 + fVar31) - fVar31 * fVar31 * fVar30;
    fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar30;
    fVar33 = (fVar33 + fVar33) - fVar33 * fVar33 * fVar30;
    fVar34 = auVar41._0_4_;
    fVar35 = auVar41._4_4_;
    fVar36 = auVar41._8_4_;
    fVar37 = auVar41._12_4_;
    fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar29;
    fVar35 = (fVar35 + fVar35) - fVar35 * fVar35 * fVar29;
    fVar36 = (fVar36 + fVar36) - fVar36 * fVar36 * fVar29;
    fVar37 = (fVar37 + fVar37) - fVar37 * fVar37 * fVar29;
    pfVar15 = local_47c + 1;
    uVar18 = uVar23;
    do {
      fVar38 = pfVar15[4];
      fVar4 = *pfVar15;
      fVar5 = pfVar15[-4];
      fVar6 = pfVar15[1];
      fVar7 = pfVar15[5];
      fVar8 = pfVar15[-3];
      lVar25 = (longlong)(int)uVar18;
      fVar9 = pfVar15[6];
      lVar21 = (longlong)iVar22 + -3;
      *(float *)(&local_498 + lVar25 * 2) = pfVar15[-8] * fVar28;
      lVar16 = (longlong)iVar22 + -2;
      lVar20 = (longlong)iVar22;
      *(float *)(&local_498 + lVar21 * 2) = fVar5 * fVar40;
      *(float *)(&local_498 + lVar16 * 2) = fVar4 * fVar42;
      *(float *)(&local_4a8 + lVar20 * 2) = fVar38 * fVar43;
      fVar38 = pfVar15[2];
      fVar4 = pfVar15[-2];
      fVar5 = pfVar15[0x14];
      *(float *)((longlong)&local_498 + lVar25 * 0x10 + 4) = pfVar15[-7] * fVar44;
      *(float *)((longlong)&local_498 + lVar21 * 0x10 + 4) = fVar8 * fVar31;
      *(float *)((longlong)&local_498 + lVar16 * 0x10 + 4) = fVar6 * fVar32;
      *(float *)((longlong)&local_4a8 + lVar20 * 0x10 + 4) = fVar7 * fVar33;
      fVar6 = pfVar15[0x10];
      fVar7 = pfVar15[0xc];
      *(float *)(&uStack_490 + lVar25 * 2) = pfVar15[-6] * fVar34;
      *(float *)(&uStack_490 + lVar21 * 2) = fVar4 * fVar35;
      *(float *)(&uStack_490 + lVar16 * 2) = fVar38 * fVar36;
      *(float *)(&uStack_4a0 + lVar20 * 2) = fVar9 * fVar37;
      lVar25 = (longlong)iVar22;
      lVar21 = (longlong)iVar22 + 1;
      lVar16 = (longlong)iVar22 + 2;
      lVar20 = (longlong)iVar22 + 3;
      *(float *)(&local_498 + lVar25 * 2) = pfVar15[8] * fVar28;
      *(float *)(&local_498 + lVar21 * 2) = fVar7 * fVar40;
      *(float *)(&local_498 + lVar16 * 2) = fVar6 * fVar42;
      *(float *)(&local_498 + lVar20 * 2) = fVar5 * fVar43;
      fVar38 = pfVar15[0x15];
      uVar26 = (int)uVar18 + 8;
      uVar18 = (ulonglong)uVar26;
      fVar4 = pfVar15[0x11];
      iVar22 = iVar22 + 8;
      fVar5 = pfVar15[0xd];
      fVar6 = pfVar15[0x12];
      fVar7 = pfVar15[0x16];
      fVar8 = pfVar15[0xe];
      *(float *)((longlong)&local_498 + lVar25 * 0x10 + 4) = pfVar15[9] * fVar44;
      *(float *)((longlong)&local_498 + lVar21 * 0x10 + 4) = fVar5 * fVar31;
      *(float *)((longlong)&local_498 + lVar16 * 0x10 + 4) = fVar4 * fVar32;
      *(float *)((longlong)&local_498 + lVar20 * 0x10 + 4) = fVar38 * fVar33;
      *(float *)(&uStack_490 + lVar25 * 2) = pfVar15[10] * fVar34;
      *(float *)(&uStack_490 + lVar21 * 2) = fVar8 * fVar35;
      *(float *)(&uStack_490 + lVar16 * 2) = fVar6 * fVar36;
      *(float *)(&uStack_490 + lVar20 * 2) = fVar7 * fVar37;
      pfVar15 = pfVar15 + 0x20;
    } while ((int)uVar26 < (int)(local_4c8 - uVar19));
  }
  lVar20 = (longlong)(int)uVar26;
  if (lVar20 < lVar24) {
    if (3 < lVar24 - lVar20) {
      lVar16 = lVar20 * 0x10;
      lVar21 = ((lVar24 - lVar20) - 4U >> 2) + 1;
      fVar28 = 1.0 / fVar39;
      lVar20 = lVar20 + lVar21 * 4;
      fVar40 = 1.0 / fVar30;
      fVar42 = 1.0 / fVar29;
      pfVar15 = (float *)((longlong)&local_498 + lVar16 + 4);
      do {
        pfVar15[-1] = fVar28 * pfVar15[-1];
        *pfVar15 = fVar40 * *pfVar15;
        pfVar15[1] = fVar42 * pfVar15[1];
        pfVar15[3] = fVar28 * pfVar15[3];
        pfVar15[4] = fVar40 * pfVar15[4];
        pfVar15[5] = fVar42 * pfVar15[5];
        pfVar15[7] = fVar28 * pfVar15[7];
        pfVar15[8] = fVar40 * pfVar15[8];
        pfVar15[9] = fVar42 * pfVar15[9];
        pfVar15[0xb] = fVar28 * pfVar15[0xb];
        pfVar15[0xc] = fVar40 * pfVar15[0xc];
        pfVar15[0xd] = fVar42 * pfVar15[0xd];
        lVar21 = lVar21 + -1;
        pfVar15 = pfVar15 + 0x10;
      } while (lVar21 != 0);
    }
    if (lVar20 < lVar24) {
      lVar24 = lVar24 - lVar20;
      pfVar15 = (float *)((longlong)&local_498 + lVar20 * 0x10 + 4);
      do {
        pfVar15[-1] = (1.0 / fVar39) * pfVar15[-1];
        *pfVar15 = (1.0 / fVar30) * *pfVar15;
        pfVar15[1] = (1.0 / fVar29) * pfVar15[1];
        lVar24 = lVar24 + -1;
        pfVar15 = pfVar15 + 4;
      } while (lVar24 != 0);
    }
  }
  *param_1 = local_498;
  param_1[1] = uStack_490;
  if (param_2 != 1) {
    do {
      uVar18 = (ulonglong)(uint)(param_2 + (int)uVar23);
      uVar19 = (int)uVar23 + 1;
      uVar23 = (ulonglong)uVar19;
      uVar11 = (&uStack_490)[uVar18 * 2];
      param_1[2] = (&local_498)[uVar18 * 2];
      param_1[3] = uVar11;
      param_1 = param_1 + 2;
    } while (uVar19 < param_2 - 1U);
  }
  return;
}



// FUNCTION 142727460 ComputeOptionFromPerfIndex body=1386 status=ok
// SIG undefined ComputeOptionFromPerfIndex(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 *
Scalability::ComputeOptionFromPerfIndex(undefined8 *param_1,float param_2,float param_3)

{
  float *pfVar1;
  void *pvVar2;
  uint uVar3;
  wint_t wVar4;
  wint_t wVar5;
  int iVar6;
  float *pfVar7;
  wchar_t *_Str;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  wint_t *pwVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  longlong lVar15;
  undefined2 *puVar16;
  int iVar17;
  int iVar18;
  undefined2 *puVar19;
  double dVar20;
  float fVar21;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined2 *local_b8;
  int local_b0;
  int local_ac;
  longlong *local_a0;
  undefined8 local_98;
  undefined2 *local_90;
  undefined8 local_88;
  float local_80 [4];
  float *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  puVar13 = (undefined2 *)0x0;
  iVar17 = 1;
  local_70 = (float *)0x0;
  fVar21 = param_2;
  if (param_3 <= param_2) {
    fVar21 = param_3;
  }
  local_68 = 1;
  TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_80,0);
  pfVar7 = local_80;
  if (local_70 != (float *)0x0) {
    pfVar7 = local_70;
  }
  *pfVar7 = 20.0;
  lVar10 = (longlong)(int)local_68;
  iVar6 = (int)local_68 + 1;
  if ((int)local_68._4_4_ < iVar6) {
    uVar8 = local_68 & 0xffffffff;
    local_68._0_4_ = iVar6;
    TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_80,uVar8);
    iVar6 = (int)local_68;
  }
  local_68._0_4_ = iVar6;
  pfVar7 = local_80;
  if (local_70 != (float *)0x0) {
    pfVar7 = local_70;
  }
  pfVar7[lVar10] = 50.0;
  iVar6 = (int)local_68;
  lVar10 = (longlong)(int)local_68;
  local_68._0_4_ = (int)local_68 + 1;
  if ((int)local_68._4_4_ < (int)local_68) {
    TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_80,iVar6);
  }
  pfVar7 = local_80;
  if (local_70 != (float *)0x0) {
    pfVar7 = local_70;
  }
  pfVar7[lVar10] = 70.0;
  if (DAT_1468b6148 == 0) goto LAB_142727946;
  local_90 = (undefined2 *)0x0;
  local_88 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
  puVar14 = local_90;
  FGenericPlatformString::Memcpy(local_90,L"PerfIndexThresholds_",0x2a);
  iVar6 = *(int *)(param_1 + 1);
  if ((int)local_88 < 2) {
    pvVar2 = (void *)*param_1;
    local_90 = (undefined2 *)0x0;
    local_88 = CONCAT44(local_88._4_4_,iVar6);
    if (iVar6 == 0) {
      puVar16 = puVar13;
      iVar18 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,iVar6,0);
      puVar16 = local_90;
      ::_guard_xfg_dispatch_icall_nop(local_90,pvVar2,(longlong)iVar6 * 2);
      iVar18 = (int)local_88;
    }
    if (puVar14 != (undefined2 *)0x0) {
      FMemory::Free(puVar14);
    }
  }
  else {
    iVar9 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar9 = 0;
    }
    if (((int)local_88 != 0) || (puVar16 = (undefined2 *)0x1, iVar9 == 0)) {
      puVar16 = puVar13;
    }
    local_b8 = puVar14;
    local_b0 = (int)local_88;
    local_ac = local_88._4_4_;
    if (local_88._4_4_ < iVar9 + (int)local_88 + (int)puVar16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
    }
    iVar6 = local_b0;
    pvVar2 = (void *)*param_1;
    puVar16 = local_b8;
    iVar18 = local_b0;
    if (iVar9 != 0) {
      lVar10 = (longlong)local_b0;
      local_b0 = local_b0 + (uint)(local_b0 == 0) + iVar9;
      if (local_ac < local_b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar6);
      }
      iVar18 = local_b0;
      puVar16 = local_b8;
      puVar14 = local_b8 + (lVar10 - (ulonglong)(iVar6 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar14,pvVar2,(longlong)iVar9 * 2);
      puVar14[iVar9] = 0;
    }
  }
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  puVar14 = &DAT_143f3eda8;
  if (iVar18 != 0) {
    puVar14 = puVar16;
  }
  local_c8 = &DAT_1468e23e0;
  FConfigCacheIni::GetSingleLineArray(DAT_1468b6148,L"ScalabilitySettings",puVar14,&local_a0);
  if (1 < (int)local_98) {
    local_b8 = (undefined2 *)0x0;
    local_b0 = (int)local_a0[1];
    lVar10 = (longlong)local_b0;
    pvVar2 = (void *)*local_a0;
    if (local_b0 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
      ::_guard_xfg_dispatch_icall_nop(local_b8,pvVar2,lVar10 * 2);
    }
    iVar6 = local_b0;
    pwVar11 = &DAT_14517fe38;
    puVar14 = &DAT_143f3eda8;
    if (local_b0 != 0) {
      puVar14 = local_b8;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar14 + -0xa28bff1c) + (longlong)pwVar11);
      if ((wVar4 == 0) && (puVar19 = local_b8, *pwVar11 == 0)) goto LAB_142727858;
      if (wVar4 != *pwVar11) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar11);
        if (wVar4 != wVar5) goto LAB_142727785;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
  goto LAB_1427278ef;
LAB_142727785:
  puVar19 = local_b8;
  if (wVar4 != wVar5) {
    pwVar11 = &DAT_14517feb0;
    puVar14 = &DAT_143f3eda8;
    if (iVar6 != 0) {
      puVar14 = local_b8;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar14 + -0xa28bff58) + (longlong)pwVar11);
      param_2 = param_3;
      if ((wVar4 == 0) && (puVar19 = local_b8, *pwVar11 == 0)) break;
      if (wVar4 != *pwVar11) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar11);
        puVar19 = local_b8;
        if (wVar4 != wVar5) goto LAB_1427277e6;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
  goto LAB_142727858;
LAB_142727849:
  if (wVar4 == wVar5) goto LAB_142727858;
  goto LAB_1427278e2;
LAB_1427277e6:
  if (wVar4 != wVar5) {
    pwVar11 = &DAT_14517ff30;
    puVar14 = &DAT_143f3eda8;
    if (iVar6 != 0) {
      puVar14 = local_b8;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar14 + -0xa28bff98) + (longlong)pwVar11);
      param_2 = fVar21;
      if ((wVar4 == 0) && (*pwVar11 == 0)) break;
      if (wVar4 != *pwVar11) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar11);
        if (wVar4 != wVar5) goto LAB_142727849;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_142727858:
  uVar8 = local_68;
  uVar3 = local_68._4_4_;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  if (((longlong)uVar8 < 0) && (uVar3 != 0)) {
    TArray<float,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(local_80,0);
  }
  fVar21 = param_2;
  if (1 < (int)local_98) {
    lVar10 = 0x10;
    do {
      if (*(int *)(lVar10 + 8 + (longlong)local_a0) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)(lVar10 + (longlong)local_a0);
      }
      dVar20 = _wtof(_Str);
      uVar8 = local_68;
      lVar15 = (longlong)(int)local_68;
      iVar6 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar6);
      if ((int)local_68._4_4_ < iVar6) {
        TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_80,uVar8 & 0xffffffff);
      }
      pfVar7 = local_80;
      if (local_70 != (float *)0x0) {
        pfVar7 = local_70;
      }
      iVar17 = iVar17 + 1;
      lVar10 = lVar10 + 0x10;
      pfVar7[lVar15] = (float)dVar20;
    } while (iVar17 < (int)local_98);
  }
LAB_1427278e2:
  if (puVar19 != (undefined2 *)0x0) {
    FMemory::Free(puVar19);
  }
LAB_1427278ef:
  plVar12 = local_a0;
  for (iVar17 = (int)local_98; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_a0 != (longlong *)0x0) {
    FMemory::Free(local_a0);
  }
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
LAB_142727946:
  pfVar7 = local_80;
  if (local_70 != (float *)0x0) {
    pfVar7 = local_70;
  }
  pfVar1 = pfVar7 + (int)local_68;
  for (; (pfVar7 != pfVar1 && (*pfVar7 <= fVar21)); pfVar7 = pfVar7 + 1) {
    puVar13 = (undefined2 *)(ulonglong)((int)puVar13 + 1);
  }
  if (local_70 != (float *)0x0) {
    FMemory::Free();
  }
  return puVar13;
}



// FUNCTION 1427279d0 ComputeTransmissionProfile body=865 status=ok
// SIG undefined ComputeTransmissionProfile(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComputeTransmissionProfile
               (undefined8 *param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
               float param_5)

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
  undefined8 uVar11;
  float *pfVar12;
  uint uVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_168;
  float local_164;
  float local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [12];
  undefined1 local_ec [12];
  undefined1 local_e0 [12];
  undefined1 local_d4 [12];
  undefined1 local_c8 [176];
  
  uVar13 = 0;
  if (param_2 != 0) {
    puVar14 = param_1;
    do {
      local_158 = *param_4;
      uStack_154 = param_4[1];
      uStack_150 = param_4[2];
      uStack_14c = param_4[3];
      fVar16 = (float)uVar13 * (1.0 / (float)param_2) * _DAT_146534c38;
      local_148 = local_158;
      uStack_144 = uStack_154;
      uStack_140 = uStack_150;
      uStack_13c = uStack_14c;
      local_138 = local_158;
      uStack_134 = uStack_154;
      uStack_130 = uStack_150;
      uStack_12c = uStack_14c;
      local_128 = local_158;
      uStack_124 = uStack_154;
      uStack_120 = uStack_150;
      uStack_11c = uStack_14c;
      local_118 = local_158;
      uStack_114 = uStack_154;
      uStack_110 = uStack_150;
      uStack_10c = uStack_14c;
      pfVar12 = (float *)FUN_14273a890(local_f8,0x40ed1eb8,fVar16,&local_158);
      fVar15 = pfVar12[2];
      fVar1 = *pfVar12;
      fVar2 = pfVar12[1];
      pfVar12 = (float *)FUN_14273a890(local_ec,0x3ffeb852,fVar16,&local_148);
      fVar17 = pfVar12[2];
      fVar3 = *pfVar12;
      fVar4 = pfVar12[1];
      pfVar12 = (float *)FUN_14273a890(local_e0,0x3f1126e9,fVar16,&local_138,fVar17);
      fVar5 = *pfVar12;
      fVar6 = pfVar12[1];
      fVar7 = pfVar12[2];
      pfVar12 = (float *)FUN_14273a890(local_d4,0x3e3f7cee,fVar16,&local_128);
      fVar8 = *pfVar12;
      fVar9 = pfVar12[1];
      fVar10 = pfVar12[2];
      pfVar12 = (float *)FUN_14273a890(local_c8,0x3d463f14,fVar16,&local_118);
      local_168 = *pfVar12 * 0.1 + fVar8 * 0.118 + fVar5 * 0.113 + fVar3 * 0.358 + fVar1 * 0.078;
      local_164 = pfVar12[1] * 0.1 + fVar9 * 0.118 + fVar6 * 0.113 + fVar4 * 0.358 + fVar2 * 0.078;
      local_160 = pfVar12[2] * 0.1 + fVar10 * 0.118 + fVar7 * 0.113 + fVar17 * 0.358 +
                  fVar15 * 0.078;
      FLinearColor::FLinearColor(&local_108,&local_168);
      *puVar14 = local_108;
      puVar14[1] = uStack_100;
      fVar15 = _guard_xfg_dispatch_icall_nop(-(fVar16 * param_5));
      uVar13 = uVar13 + 1;
      *(float *)((longlong)puVar14 + 0xc) = fVar15;
      puVar14 = puVar14 + 2;
    } while (uVar13 < param_2);
  }
  uVar11 = _DAT_1464aa6e8;
  if (DAT_146534c3c != '\0') {
    param_1[(ulonglong)(param_2 - 1) * 2] = _DAT_1464aa6e0;
    (param_1 + (ulonglong)(param_2 - 1) * 2)[1] = uVar11;
  }
  return;
}



// FUNCTION 142727d40 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
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



// FUNCTION 142727df0 Convert2PixelFormat body=14 status=ok
// SIG undefined Convert2PixelFormat(void)

undefined4 EDefaultBackBufferPixelFormat::Convert2PixelFormat(int param_1)

{
  return *(undefined4 *)(&DAT_146534c20 + (longlong)param_1 * 4);
}



// FUNCTION 142727e00 FUN_142727e00 body=911 status=ok
// SIG undefined FUN_142727e00(void)

void FUN_142727e00(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  float fVar12;
  uint local_res8;
  uint local_res10;
  
  plVar2 = *(longlong **)(param_1 + 0xb0);
  *(undefined1 *)(param_1 + 0xe0) = 1;
  plVar4 = (longlong *)operator_new(0x28);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2);
    *plVar4 = (longlong)&PTR_FUN_145188e98;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[1] = (longlong)&PTR_GetBoundProgramCounterForTimerManager_144eec268;
    *(undefined1 *)(plVar4 + 4) = uVar3;
  }
  uVar9 = 0;
  *(longlong **)(param_1 + 0xb0) = plVar4;
  (**(code **)(*plVar4 + 8))(plVar4,*(int *)(param_1 + 0xd8) * *(int *)(param_1 + 0xdc),0);
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))();
  *(undefined4 *)(param_1 + 0xd4) = 8;
  *(longlong *)(param_1 + 200) = lVar5;
  if (param_2 == (ushort *)0x0) {
    param_2 = (ushort *)(**(code **)(*plVar2 + 0x30))(plVar2);
  }
  if (*(int *)(param_1 + 0xd8) * *(int *)(param_1 + 0xdc) != 0) {
    uVar10 = (ulonglong)_tls_index;
    puVar11 = (uint *)(lVar5 + 4);
    pvVar7 = ThreadLocalStoragePointer;
    do {
      uVar1 = param_2[1];
      local_res10 = (uVar1 & 0xffff8000) << 0x10;
      if ((uVar1 & 0x7c00) == 0) {
        uVar8 = uVar1 & 0x3ff;
        if ((uVar1 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)pvVar7 + uVar10 * 8) + 0x38) < DAT_1468509dc) &&
             (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar12 = _guard_xfg_dispatch_icall_nop((float)uVar8);
          iVar6 = 10 - (int)(fVar12 * DAT_1468509d8);
          local_res10 = uVar8 << ((char)iVar6 + 0xdU & 0x1f) & 0x7fffff |
                        (0x71U - iVar6 & 0xff) << 0x17 | local_res10;
          pvVar7 = ThreadLocalStoragePointer;
        }
      }
      else if ((uVar1 & 0x7c00) == 0x7c00) {
        local_res10 = local_res10 | 0x477fe000;
      }
      else {
        local_res10 = ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd |
                      local_res10;
      }
      uVar1 = *param_2;
      local_res8 = (uVar1 & 0xffff8000) << 0x10;
      if ((uVar1 & 0x7c00) == 0) {
        uVar8 = uVar1 & 0x3ff;
        if ((uVar1 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)pvVar7 + uVar10 * 8) + 0x38) < DAT_1468509dc) &&
             (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar12 = _guard_xfg_dispatch_icall_nop((float)uVar8);
          iVar6 = 10 - (int)(fVar12 * DAT_1468509d8);
          local_res8 = uVar8 << ((char)iVar6 + 0xdU & 0x1f) & 0x7fffff |
                       (0x71U - iVar6 & 0xff) << 0x17 | local_res8;
        }
      }
      else if ((uVar1 & 0x7c00) == 0x7c00) {
        local_res8 = local_res8 | 0x477fe000;
      }
      else {
        local_res8 = ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd | local_res8;
      }
      pvVar7 = ThreadLocalStoragePointer;
      uVar9 = uVar9 + 1;
      puVar11[-1] = local_res8;
      *puVar11 = local_res10;
      puVar11 = puVar11 + 2;
      param_2 = param_2 + 2;
    } while (uVar9 < (uint)(*(int *)(param_1 + 0xd8) * *(int *)(param_1 + 0xdc)));
  }
  if (plVar2 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014272811d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar2)(plVar2,1);
  return;
}



// FUNCTION 142728190 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_145189480;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1427281e0 FUN_1427281e0 body=112 status=ok
// SIG undefined FUN_1427281e0(void)

void FUN_1427281e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 8) * 0xd8,(longlong)*(int *)(param_1 + 0xc) * 0xd8
            );
  iVar1 = *(int *)(param_1 + 0x2c) + 0x1f;
  iVar2 = *(int *)(param_1 + 0x28) + 0x1f;
                    /* WARNING: Could not recover jumptable at 0x00014272824c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  return;
}



// FUNCTION 142728250 FUN_142728250 body=984 status=ok
// SIG undefined FUN_142728250(void)

void FUN_142728250(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
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
  
  (**(code **)(*param_2 + 0x78))(param_2,0x510,0x510);
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 8),(longlong)*(int *)(param_1 + 0xc));
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_1427281e0(plVar1,param_2);
  lVar10 = (longlong)*(int *)(param_1 + 0x58) << 2;
  (**(code **)(*param_2 + 0x78))(param_2,lVar10,lVar10);
  uVar4 = *(uint *)(param_1 + 0x38);
  puVar2 = (uint *)(param_1 + 0x20);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar4 != 0) {
    puVar14 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar14 = puVar2;
    }
    uVar5 = *puVar14;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar5 == 0) {
      lVar10 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar6) goto LAB_14272836b;
      uVar5 = puVar14[lVar10 + 1];
    }
    uStack_94 = -uVar5 & uVar5;
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
    uStack_84 = (iStack_80 - iVar8) + 0x1f;
    if ((int)uVar4 < (int)uStack_84) {
LAB_14272836b:
      uStack_84 = uVar4;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x38);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar13 = uVar5 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar5;
  if (uVar5 != uVar4) {
    puVar14 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar14 = puVar2;
    }
    uVar9 = puVar14[(int)uVar5 >> 5] & -1 << ((byte)uVar5 & 0x1f);
    iVar8 = (int)uVar5 >> 5;
    while (uVar9 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_142728430;
      uVar9 = puVar14[(longlong)iVar8 + 1];
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
    uStack_84 = (uVar13 - iVar8) + 0x1f;
    if ((int)uVar4 < (int)uStack_84) {
LAB_142728430:
      uStack_84 = uVar4;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar12 = (longlong)(int)uStack_5c * 0xd8 + *plVar1;
    FUN_1423e92e0(lVar12 + 8,param_2);
    lVar10 = (longlong)*(int *)(lVar12 + 0x50) << 2;
    (**(code **)(*param_2 + 0x78))(param_2,lVar10,lVar10);
    FUN_1423e92e0(lVar12 + 0x58,param_2);
    lVar10 = (longlong)*(int *)(lVar12 + 0xa0) << 2;
    (**(code **)(*param_2 + 0x78))(param_2,lVar10,lVar10);
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(lVar12 + 0xb0),(longlong)*(int *)(lVar12 + 0xb4));
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0x78) << 3,(longlong)*(int *)(param_1 + 0x7c) << 3
            );
  if ((int *)(param_1 + 0x90) != (int *)(param_1 + 0x490)) {
    piVar11 = (int *)(param_1 + 0xa0);
    do {
      (**(code **)(*param_2 + 0x78))(param_2,(longlong)*piVar11 * 2,(longlong)piVar11[1] * 2);
      piVar3 = piVar11 + 4;
      piVar11 = piVar11 + 8;
    } while (piVar3 != (int *)(param_1 + 0x490));
  }
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0x4a8) << 5,
             (longlong)*(int *)(param_1 + 0x4ac) << 5);
  lVar10 = *(longlong *)(param_1 + 0x4a0);
  lVar12 = (longlong)*(int *)(param_1 + 0x4a8) * 0x20 + lVar10;
  for (; lVar10 != lVar12; lVar10 = lVar10 + 0x20) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(lVar10 + 0x10) * 2,(longlong)*(int *)(lVar10 + 0x14) * 2);
  }
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0x4c0) * 2,(longlong)*(int *)(param_1 + 0x4c4) * 2
            );
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0x4e8) * 2,(longlong)*(int *)(param_1 + 0x4ec) * 2
            );
  iVar8 = *(int *)(param_1 + 0x50c) + 0x1f;
  iVar7 = *(int *)(param_1 + 0x508) + 0x1f;
                    /* WARNING: Could not recover jumptable at 0x000142728624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) << 2);
  return;
}



// FUNCTION 142728630 FUN_142728630 body=58 status=ok
// SIG undefined FUN_142728630(void)

void FUN_142728630(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1451893f0;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145189438;
  }
  return;
}



// FUNCTION 142728670 FUN_142728670 body=58 status=ok
// SIG undefined FUN_142728670(void)

void FUN_142728670(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145189360;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1451893a8;
  }
  return;
}



// FUNCTION 1427286b0 FUN_1427286b0 body=133 status=ok
// SIG undefined FUN_1427286b0(void)

undefined1 FUN_1427286b0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  uVar2 = FPlatformFileManager::Get();
  plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar2);
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  cVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3,puVar4);
  if (cVar1 == '\0') {
    if (*(int *)(param_2 + 1) != 0) {
      puVar5 = (undefined2 *)*param_2;
    }
    cVar1 = (**(code **)(*plVar3 + 0x150))(plVar3,puVar5);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142728740 FUN_142728740 body=322 status=ok
// SIG undefined FUN_142728740(void)

undefined8 * FUN_142728740(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if (*(longlong *)(param_2 + 0x118) == 0) {
    return (undefined8 *)0x0;
  }
  lVar4 = FUN_14290cfd0();
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x118) + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    lVar5 = FUN_14290da60();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1427287f4;
    puVar6 = (undefined8 *)operator_new(0x38);
    if (puVar6 == (undefined8 *)0x0) goto LAB_14272883b;
    uVar7 = 1;
  }
  else {
LAB_1427287f4:
    puVar6 = (undefined8 *)operator_new(0x38);
    if (puVar6 == (undefined8 *)0x0) {
LAB_14272883b:
      puVar6 = (undefined8 *)0x0;
      goto LAB_14272883d;
    }
    uVar7 = 0;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  HHitProxy::HHitProxy(puVar6,uVar7);
  puVar6[6] = 0xffffffffffffffff;
  puVar6[5] = param_2;
  puVar6[4] = uVar2;
  *puVar6 = &PTR__scalar_deleting_destructor__145188468;
  if (puVar6 != (undefined8 *)0x0) {
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
  }
LAB_14272883d:
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
  }
  *(undefined8 **)(*param_3 + (longlong)iVar1 * 8) = puVar6;
  return puVar6;
}



// FUNCTION 142728890 FUN_142728890 body=637 status=ok
// SIG undefined FUN_142728890(void)

longlong * FUN_142728890(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  longlong local_78 [2];
  undefined1 local_68;
  int local_64;
  undefined4 local_60;
  undefined8 local_58;
  longlong local_50 [4];
  undefined1 local_30;
  
  puVar4 = (undefined8 *)operator_new(0x28);
  puVar9 = (undefined8 *)0x0;
  puVar7 = puVar9;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar7 = puVar4;
  }
  *param_2 = (longlong)puVar7;
  puVar5 = (undefined8 *)operator_new(0x18);
  puVar4 = puVar9;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &PTR_DestroyObject_144fe7dc8;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    puVar5[2] = puVar7;
    puVar4 = puVar5;
  }
  param_2[1] = (longlong)puVar4;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar7,puVar7);
  plVar2 = (longlong *)*param_2;
  plVar6 = (longlong *)UObjectBaseUtility::GetPathName(*(undefined8 *)(param_1 + 0x50),local_78,0);
  if (plVar2 != plVar6) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar6;
    *plVar6 = 0;
    *(int *)(plVar2 + 1) = (int)plVar6[1];
    *(undefined4 *)((longlong)plVar2 + 0xc) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  lVar3 = *param_2;
  iVar10 = *(int *)(param_1 + 0x28);
  iVar1 = *(int *)(lVar3 + 0x20);
  if (iVar1 < iVar10) {
    *(int *)(lVar3 + 0x20) = iVar10;
    iVar11 = iVar10 - iVar1;
    if (*(int *)(lVar3 + 0x24) < iVar10) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (lVar3 + 0x18,iVar1);
    }
    puVar8 = (undefined1 *)((longlong)iVar1 * 0x40 + *(longlong *)(lVar3 + 0x18));
    if (iVar11 != 0) {
      puVar7 = (undefined8 *)(puVar8 + 0x20);
      do {
        *puVar8 = 0;
        puVar8 = puVar8 + 0x40;
        *(undefined8 *)((longlong)puVar7 + -0x1c) = 0;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(undefined1 *)(puVar7 + 3) = 0;
        puVar7 = puVar7 + 8;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  else if (iVar10 < iVar1) {
    TArray<FNetFieldExport,FDefaultAllocator>::RemoveAtImpl(lVar3 + 0x18,iVar10,iVar1 - iVar10,1);
  }
  puVar7 = puVar9;
  puVar4 = puVar9;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)puVar7);
      if (lVar3 == 0) {
        local_58 = 0;
      }
      else {
        local_58 = *(undefined8 *)(lVar3 + 0x18);
      }
      local_60 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x18 + (longlong)puVar7);
      local_68 = 0;
      iVar10 = (int)puVar9;
      puVar8 = (undefined1 *)(*(longlong *)(*param_2 + 0x18) + (longlong)puVar4);
      local_50[0] = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      local_50[3] = 0;
      local_30 = 0;
      *puVar8 = 0;
      *(int *)(puVar8 + 4) = iVar10;
      *(undefined4 *)(puVar8 + 8) = local_60;
      *(undefined8 *)(puVar8 + 0x10) = local_58;
      local_64 = iVar10;
      FString::operator=(puVar8 + 0x18,local_50);
      FString::operator=(puVar8 + 0x28,local_50 + 2);
      puVar8[0x38] = local_30;
      if (local_50[2] != 0) {
        FMemory::Free();
      }
      if (local_50[0] != 0) {
        FMemory::Free();
      }
      puVar9 = (undefined8 *)(ulonglong)(iVar10 + 1U);
      puVar7 = puVar7 + 4;
      puVar4 = puVar4 + 8;
    } while ((int)(iVar10 + 1U) < *(int *)(param_1 + 0x28));
  }
  return param_2;
}



// FUNCTION 142728b10 FUN_142728b10 body=332 status=ok
// SIG undefined FUN_142728b10(void)

undefined8 * FUN_142728b10(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_145189310;
  *(undefined1 *)(plVar6 + 6) = 0;
  plVar6[7] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 142728c60 FUN_142728c60 body=332 status=ok
// SIG undefined FUN_142728c60(void)

undefined8 * FUN_142728c60(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_1451892f0;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 142728db0 FUN_142728db0 body=332 status=ok
// SIG undefined FUN_142728db0(void)

undefined8 * FUN_142728db0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_145189320;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 142728f00 FUN_142728f00 body=332 status=ok
// SIG undefined FUN_142728f00(void)

undefined8 * FUN_142728f00(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_145189300;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 142729050 FUN_142729050 body=332 status=ok
// SIG undefined FUN_142729050(void)

undefined8 * FUN_142729050(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_145189340;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1427291a0 FUN_1427291a0 body=332 status=ok
// SIG undefined FUN_1427291a0(void)

undefined8 * FUN_1427291a0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_145189330;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1427292f0 FUN_1427292f0 body=332 status=ok
// SIG undefined FUN_1427292f0(void)

undefined8 * FUN_1427292f0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_145189350;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 142729440 FUN_142729440 body=1800 status=ok
// SIG undefined FUN_142729440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142729440(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  float fVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_5e8 [32];
  wchar_t *local_5c8;
  int *local_5c0;
  undefined1 local_5b8;
  undefined1 local_5b0;
  int local_5a8 [4];
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  float local_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float local_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  float local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined4 local_514;
  uint local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined2 local_500;
  undefined4 local_4fc;
  undefined8 local_4f8;
  undefined1 local_4f0;
  wchar_t *local_4e8;
  undefined2 local_4e0;
  undefined8 local_4d8;
  ulonglong uStack_4d0;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  float local_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  float local_4a8;
  float local_4a4;
  float local_4a0;
  float local_49c;
  undefined1 local_498 [208];
  undefined1 local_3c8 [144];
  undefined1 local_338 [96];
  undefined1 local_2d8 [512];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_5e8;
  uVar3 = *(uint *)(param_1 + 0x38);
  local_518 = DAT_146ab6938;
  local_514 = 0x40;
  local_528 = _DAT_146ab6928;
  uStack_524 = uRam0000000146ab692c;
  uStack_520 = uRam0000000146ab6930;
  uStack_51c = uRam0000000146ab6934;
  local_510 = 0x40;
  if (0x3f < uVar3) {
    local_510 = uVar3;
  }
  local_50c = 0;
  local_508 = 1;
  local_504 = 0x10000;
  local_500 = 1;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4e8 = L"UnknownTexture2D";
  local_4e0 = 1;
  local_4fc = 0x13;
  plVar12 = (longlong *)GetRendererModule();
  local_5c8 = L"SSProfiles";
  (**(code **)(*plVar12 + 0x98))(plVar12,param_2,&local_528,&DAT_146b09040);
  local_5c0 = local_5a8;
  local_5b0 = 1;
  local_5b8 = 0;
  local_5c8 = (wchar_t *)CONCAT44(local_5c8._4_4_,1);
  lVar13 = (**(code **)(*DAT_146ab6358 + 0x580))
                     (DAT_146ab6358,param_2,*(undefined8 *)(DAT_146b09040 + 0x10),0);
  _guard_xfg_dispatch_icall_nop(local_498,0,0x3c0);
  uVar17 = 0;
  local_5a8[1] = 0x477fffff;
  if (uVar3 != 0) {
    do {
      lVar14 = (longlong)(int)uVar17 * 0x58;
      lVar18 = *(longlong *)(param_1 + 0x30);
      puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar18);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x20 + lVar18);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      pfVar16 = (float *)(lVar14 + lVar18);
      local_578 = *pfVar16;
      fStack_574 = pfVar16[1];
      fStack_570 = pfVar16[2];
      fStack_56c = pfVar16[3];
      local_568 = (float)uVar4;
      fStack_564 = (float)((ulonglong)uVar4 >> 0x20);
      fStack_560 = (float)uVar5;
      fStack_55c = (float)((ulonglong)uVar5 >> 0x20);
      puVar1 = (undefined8 *)(lVar14 + 0x30 + lVar18);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      local_558 = (float)uVar6;
      uStack_554 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_550 = (undefined4)uVar7;
      uStack_54c = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar1 = (undefined8 *)(lVar14 + 0x40 + lVar18);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      local_548 = (undefined4)uVar4;
      uStack_544 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uVar11 = uStack_544;
      if (0.0 <= fStack_574) {
        if (1.0 <= fStack_574) {
          fStack_574 = 1.0;
        }
      }
      else {
        fStack_574 = 0.0;
      }
      if (0.0 <= fStack_570) {
        if (1.0 <= fStack_570) {
          fStack_570 = 1.0;
        }
      }
      else {
        fStack_570 = 0.0;
      }
      if (0.0 <= fStack_56c) {
        if (1.0 <= fStack_56c) {
          fStack_56c = 1.0;
        }
      }
      else {
        fStack_56c = 0.0;
      }
      if (0.0 <= local_568) {
        if (1.0 <= local_568) {
          local_568 = 1.0;
        }
      }
      else {
        local_568 = 0.0;
      }
      if (0.009 <= fStack_564) {
        if (1.0 <= fStack_564) {
          fStack_564 = 1.0;
        }
      }
      else {
        fStack_564 = 0.009;
      }
      if (0.009 <= fStack_560) {
        if (1.0 <= fStack_560) {
          fStack_560 = 1.0;
        }
      }
      else {
        fStack_560 = 0.009;
      }
      if (0.009 <= fStack_55c) {
        if (1.0 <= fStack_55c) {
          fStack_55c = 1.0;
        }
      }
      else {
        fStack_55c = 0.009;
      }
      if (0.009 <= local_558) {
        if (1.0 <= local_558) {
          local_558 = 1.0;
        }
      }
      else {
        local_558 = 0.009;
      }
      uStack_530._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
      uVar4 = CONCAT44(fStack_570,fStack_574);
      uVar8 = CONCAT44(local_568,fStack_56c);
      local_4b8 = CONCAT44(uStack_550,uStack_554);
      uStack_4b0 = CONCAT44(local_548,uStack_54c);
      uStack_530._0_4_ = (float)uVar7;
      uStack_4d0 = (ulonglong)(uint)fStack_56c;
      local_538._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
      local_49c = (1.0 - uStack_530._4_4_) * local_538._4_4_ + (float)uStack_530 * uStack_530._4_4_;
      fVar24 = 1.0 / local_49c;
      local_4a8 = fVar24 * local_538._4_4_ * 0.5;
      if (0.0 <= local_4a8) {
        if (1.0 <= local_4a8) {
          local_4a8 = 1.0;
        }
      }
      else {
        local_4a8 = 0.0;
      }
      local_4a4 = fVar24 * (float)uStack_530 * 0.5;
      if (0.0 <= local_4a4) {
        if (1.0 <= local_4a4) {
          local_4a4 = 1.0;
        }
      }
      else {
        local_4a4 = 0.0;
      }
      local_49c = local_49c * 0.5;
      local_4a0 = uStack_530._4_4_;
      if (0.0 <= local_49c) {
        if (1.0 <= local_49c) {
          local_49c = 1.0;
        }
      }
      else {
        local_49c = 0.0;
      }
      uStack_540._0_4_ = (undefined4)uVar5;
      uStack_540._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uVar9 = CONCAT44(fStack_560,fStack_564);
      uVar10 = CONCAT44(local_558,fStack_55c);
      local_4c4 = (undefined4)uStack_540;
      local_538._0_4_ = (float)uVar6;
      local_4bc = 1.0 / (float)local_538;
      local_4c8 = uStack_544;
      local_4c0 = uStack_540._4_4_;
      local_598 = uVar9;
      uStack_590 = uVar10;
      local_588 = uVar4;
      uStack_580 = uVar8;
      uStack_540 = uVar5;
      local_538 = uVar6;
      uStack_530 = uVar7;
      local_4d8 = uVar4;
      ComputeMirroredSSSKernel(local_498,0xd,&local_588,&local_598);
      local_598 = uVar4;
      uStack_590 = uVar8;
      local_588 = uVar9;
      uStack_580 = uVar10;
      ComputeMirroredSSSKernel(local_3c8,9,&local_598,&local_588);
      local_598 = uVar4;
      uStack_590 = uVar8;
      local_588 = uVar9;
      uStack_580 = uVar10;
      ComputeMirroredSSSKernel(local_338,6,&local_598,&local_588);
      local_5c8 = (wchar_t *)CONCAT44(local_5c8._4_4_,uVar11);
      local_598 = uVar4;
      uStack_590 = uVar8;
      local_588 = uVar9;
      uStack_580 = uVar10;
      ComputeTransmissionProfile(local_2d8,0x20,&local_598,&local_588);
      pfVar16 = (float *)&uStack_4d0;
      lVar18 = 0;
      iVar19 = 2;
      uVar20 = 0xfffffffffffffffc;
      lVar14 = 0x10;
      do {
        fVar24 = pfVar16[-1];
        fVar22 = *pfVar16;
        fVar21 = pfVar16[1];
        if (uVar20 < 0x1c) {
          fVar21 = fVar21 * 0.33333334 * local_578 * 0.0009765625;
        }
        lVar15 = (ulonglong)(uVar17 * local_5a8[0]) + lVar13;
        fVar2 = pfVar16[2];
        *(short *)(lVar18 + lVar15) = (short)(int)(pfVar16[-2] * 65535.996);
        fVar23 = pfVar16[3];
        *(short *)(lVar18 + 2 + lVar15) = (short)(int)(fVar24 * 65535.996);
        fVar24 = pfVar16[4];
        *(short *)(lVar18 + 4 + lVar15) = (short)(int)(fVar22 * 65535.996);
        fVar22 = pfVar16[5];
        *(short *)(lVar18 + 6 + lVar15) = (short)(int)(fVar21 * 65535.996);
        if (iVar19 - 5U < 0x1c) {
          fVar22 = fVar22 * 0.33333334 * local_578 * 0.0009765625;
        }
        lVar15 = (ulonglong)(uVar17 * local_5a8[0]) + lVar13;
        fVar21 = pfVar16[6];
        *(short *)(lVar18 + 8 + lVar15) = (short)(int)(fVar2 * 65535.996);
        fVar2 = pfVar16[7];
        *(short *)(lVar18 + 10 + lVar15) = (short)(int)(fVar23 * 65535.996);
        fVar23 = pfVar16[8];
        *(short *)(lVar18 + 0xc + lVar15) = (short)(int)(fVar24 * 65535.996);
        fVar24 = pfVar16[9];
        *(short *)(lVar18 + 0xe + lVar15) = (short)(int)(fVar22 * 65535.996);
        if (iVar19 - 4U < 0x1c) {
          fVar24 = fVar24 * 0.33333334 * local_578 * 0.0009765625;
        }
        lVar15 = (ulonglong)(uVar17 * local_5a8[0]) + lVar13;
        fVar22 = pfVar16[10];
        *(short *)(lVar15 + 0x10 + lVar18) = (short)(int)(fVar21 * 65535.996);
        fVar21 = pfVar16[0xb];
        *(short *)(lVar18 + 0x12 + lVar15) = (short)(int)(fVar2 * 65535.996);
        fVar2 = pfVar16[0xc];
        *(short *)(lVar18 + 0x14 + lVar15) = (short)(int)(fVar23 * 65535.996);
        fVar23 = pfVar16[0xd];
        *(short *)(lVar18 + 0x16 + lVar15) = (short)(int)(fVar24 * 65535.996);
        if (iVar19 - 3U < 0x1c) {
          fVar23 = fVar23 * 0.33333334 * local_578 * 0.0009765625;
        }
        iVar19 = iVar19 + 4;
        uVar20 = uVar20 + 4;
        pfVar16 = pfVar16 + 0x10;
        lVar15 = (ulonglong)(uVar17 * local_5a8[0]) + lVar13;
        *(short *)(lVar15 + 0x18 + lVar18) = (short)(int)(fVar22 * 65535.996);
        *(short *)(lVar18 + 0x1a + lVar15) = (short)(int)(fVar21 * 65535.996);
        *(short *)(lVar18 + 0x1c + lVar15) = (short)(int)(fVar2 * 65535.996);
        *(short *)(lVar18 + 0x1e + lVar15) = (short)(int)(fVar23 * 65535.996);
        lVar18 = lVar18 + 0x20;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar3);
  }
  local_5c0 = (int *)CONCAT71(local_5c0._1_7_,1);
  local_5c8 = (wchar_t *)((ulonglong)local_5c8 & 0xffffffffffffff00);
  (**(code **)(*DAT_146ab6358 + 0x588))
            (DAT_146ab6358,param_2,*(undefined8 *)(DAT_146b09040 + 0x10),0);
  return;
}



// FUNCTION 142729b50 FUN_142729b50 body=142 status=ok
// SIG undefined FUN_142729b50(void)

void FUN_142729b50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  lVar1 = *param_2;
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x18) * 6;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 6) {
    if (((int)plVar3[2] == 0) &&
       (plVar2 = (longlong *)*plVar3, (~(byte)((ulonglong)plVar2[7] >> 0x24) & 1) != 0)) {
      (**(code **)(*plVar2 + 0x328))(plVar2,*(int *)((longlong)plVar3 + 0x14) + lVar1);
    }
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<unsigned_char,TAlignedHeapAllocator<16>_>::ResizeTo(param_2,0);
  }
  return;
}



// FUNCTION 142729c40 FUN_142729c40 body=37 status=ok
// SIG undefined FUN_142729c40(void)

void FUN_142729c40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  (**(code **)(*(longlong *)(param_1 + 0x40) + 0x28))(plVar1,0);
                    /* WARNING: Could not recover jumptable at 0x000142729c61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return;
}



// FUNCTION 142729c70 FUN_142729c70 body=131 status=ok
// SIG undefined FUN_142729c70(void)

void FUN_142729c70(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  iVar2 = (int)param_1[1];
  bVar1 = *(byte *)((longlong)param_1 + 0xc);
  lVar3 = *param_1;
  if (iVar2 == 0) {
    *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffffb;
    *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | (bVar1 & 1) << 2;
    return;
  }
  if (iVar2 == 1) {
    *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffff7;
    *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | (bVar1 & 1) << 3;
    return;
  }
  if (iVar2 == 2) {
    *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xffffffef;
    *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | (bVar1 & 1) << 4;
    return;
  }
  if (iVar2 == 3) {
    *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xffffffdf;
    *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | (bVar1 & 1) << 5;
  }
  return;
}



// FUNCTION 142729d00 FUN_142729d00 body=228 status=ok
// SIG undefined FUN_142729d00(void)

void FUN_142729d00(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  iVar8 = 1;
  if (1 < DAT_146534ba8) {
    plVar9 = (longlong *)(DAT_146534ba0 + 0xa8);
    do {
      if (*plVar9 == *param_1) {
        if (iVar8 != -1) {
          lVar10 = (longlong)iVar8 * 0x58;
          *(undefined8 *)(lVar10 + 0x50 + DAT_146534ba0) = 0;
          lVar7 = DAT_146534ba0;
          *(undefined4 *)(lVar10 + DAT_146534ba0) = 0;
          puVar1 = (undefined8 *)(lVar10 + 4 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0x3f80000000000000;
          puVar1 = (undefined8 *)(lVar10 + 0x14 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0x3f80000000000000;
          uVar6 = DAT_1464aa6cc;
          uVar5 = DAT_1464aa6c8;
          uVar4 = DAT_1464aa6c4;
          uVar3 = DAT_1464aa6c0;
          *(undefined4 *)(lVar10 + 0x34 + lVar7) = 0x3f800000;
          *(undefined4 *)(lVar10 + 0x3c + lVar7) = 0x3f6e147b;
          puVar2 = (undefined4 *)(lVar10 + 0x24 + lVar7);
          *puVar2 = uVar3;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          *(undefined4 *)(lVar10 + 0x38 + lVar7) = 0x3da3d70a;
          *(undefined4 *)(lVar10 + 0x40 + lVar7) = 0x3fc66666;
          *(undefined4 *)(lVar10 + 0x44 + lVar7) = 0x3f400000;
          *(undefined4 *)(lVar10 + 0x48 + lVar7) = 0x3fa66666;
          *(undefined4 *)(lVar10 + 0x4c + lVar7) = 0x3f59999a;
        }
        break;
      }
      iVar8 = iVar8 + 1;
      plVar9 = plVar9 + 0xb;
    } while (iVar8 < DAT_146534ba8);
  }
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 142729df0 FUN_142729df0 body=131 status=ok
// SIG undefined FUN_142729df0(void)

void FUN_142729df0(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  bVar1 = *(byte *)(param_1 + 1);
  bVar2 = *(byte *)((longlong)param_1 + 9);
  lVar3 = *param_1;
  if ((bVar1 == 0) && (bVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x1000000;
  }
  *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) & 0xfeffffff;
  *(uint *)(lVar3 + 0x18) =
       ((bVar2 & 1) * 2 | bVar1 & 1) << 0x19 | *(uint *)(lVar3 + 0x18) & 0xf9ffffff | uVar4;
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 142729e80 FUN_142729e80 body=202 status=ok
// SIG undefined FUN_142729e80(void)

void FUN_142729e80(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar7 = DAT_146534ba0;
  iVar8 = 1;
  if (1 < DAT_146534ba8) {
    plVar10 = (longlong *)(DAT_146534ba0 + 0xa8);
    do {
      if (*plVar10 == param_1[10]) {
        if (iVar8 != -1) {
          uVar6 = param_1[1];
          lVar9 = (longlong)iVar8 * 0x58;
          puVar1 = (undefined8 *)(lVar9 + DAT_146534ba0);
          *puVar1 = *param_1;
          puVar1[1] = uVar6;
          uVar6 = param_1[3];
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar7);
          *puVar1 = param_1[2];
          puVar1[1] = uVar6;
          uVar6 = param_1[5];
          puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar7);
          *puVar1 = param_1[4];
          puVar1[1] = uVar6;
          uVar3 = *(undefined4 *)((longlong)param_1 + 0x34);
          uVar4 = *(undefined4 *)(param_1 + 7);
          uVar5 = *(undefined4 *)((longlong)param_1 + 0x3c);
          puVar2 = (undefined4 *)(lVar9 + 0x30 + lVar7);
          *puVar2 = *(undefined4 *)(param_1 + 6);
          puVar2[1] = uVar3;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          uVar3 = *(undefined4 *)((longlong)param_1 + 0x44);
          uVar4 = *(undefined4 *)(param_1 + 9);
          uVar5 = *(undefined4 *)((longlong)param_1 + 0x4c);
          puVar2 = (undefined4 *)(lVar9 + 0x40 + lVar7);
          *puVar2 = *(undefined4 *)(param_1 + 8);
          puVar2[1] = uVar3;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          plVar10 = DAT_146b09040;
          DAT_146b09040 = (longlong *)0x0;
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x30))();
          }
        }
        break;
      }
      iVar8 = iVar8 + 1;
      plVar10 = plVar10 + 0xb;
    } while (iVar8 < DAT_146534ba8);
  }
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 142729f50 DoThreadedWork body=55 status=ok
// SIG undefined DoThreadedWork(void)

void FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker>::DoThreadedWork(longlong param_1)

{
  FUN_142729f90(param_1 + 0x10);
  LOCK();
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142729f7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 142729f90 FUN_142729f90 body=666 status=ok
// SIG undefined FUN_142729f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142729f90(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_138 [32];
  code *local_118 [2];
  undefined1 local_108 [32];
  undefined8 local_e8;
  undefined4 local_d8;
  code *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined8 local_78;
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  cVar1 = (char)param_1[1];
  if (cVar1 == '\0') {
    lVar4 = *param_1;
    if (*(longlong *)(lVar4 + 0x20) == 0) {
LAB_14272a0ab:
      *(undefined1 *)(lVar4 + 0x28) = 4;
      return;
    }
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    }
    *(undefined1 *)(*param_1 + 0x28) = 1;
    Audio::FSoundWavePCMWriter::ApplyBufferToSoundWave(*param_1);
    *(undefined1 *)(*param_1 + 0x28) = 3;
LAB_14272a0e2:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  }
  else {
    if (cVar1 == '\x01') {
      lVar4 = *param_1;
      if (*(longlong *)(lVar4 + 0x20) == 0) goto LAB_14272a0ab;
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      }
      *(undefined1 *)(*param_1 + 0x28) = 1;
      Audio::FSoundWavePCMWriter::ApplyBufferToSoundWave(*param_1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      }
      *(undefined1 *)(*param_1 + 0x28) = 2;
      FUN_14273bdb0(*param_1);
      goto LAB_14272a0e2;
    }
    if (cVar1 == '\x02') {
      lVar4 = *param_1;
      if (*(longlong *)(lVar4 + 0x20) == 0) goto LAB_14272a0ab;
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      }
      *(undefined1 *)(*param_1 + 0x28) = 2;
      FUN_14273bdb0(*param_1);
      goto LAB_14272a0e2;
    }
    if (cVar1 == '\x03') {
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      }
      *(undefined1 *)(*param_1 + 0x28) = 2;
      FUN_14273b2f0(*param_1);
      goto LAB_14272a0e2;
    }
  }
  uVar2 = *(undefined8 *)(*param_1 + 0x20);
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68,param_1 + 8);
  local_98 = (longlong *)0x0;
  local_88 = 0;
  if (local_28 != 0) {
    plVar5 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar5 = local_38;
    }
    if (plVar5 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)*plVar5)(plVar5,local_b8);
      (**(code **)(*plVar5 + 8))(plVar5);
      goto LAB_14272a141;
    }
  }
  local_68[0] = AK::MemoryMgr::StartProfileThreadUsage;
LAB_14272a141:
  local_e8 = 0;
  local_d8 = 0;
  local_c8[0] = local_68[0];
  local_78 = uVar2;
  puVar6 = (undefined8 *)FUN_140438ef0(0x70,local_108);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_CopyToEmptyStorage_144ed0d78;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar6 + 2,local_c8);
    puVar6[0xc] = local_78;
  }
  local_118[0] = UE4Function_Private::
                 TFunctionRefCaller<<lambda_ffb3a70632e8964638d4db8bc9dd31c4>,void___cdecl(void)>::
                 Call;
  FUN_14158fcd0(2,local_118);
  if (local_88 != 0) {
    plVar5 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar5 = local_98;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
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
  return;
}



// FUNCTION 14272a230 FUN_14272a230 body=667 status=ok
// SIG undefined FUN_14272a230(void)

void FUN_14272a230(longlong *param_1,float *param_2,float *param_3,float param_4,float param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8,byte param_9)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_d4;
  float fVar13;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  
  uVar3 = (uint)param_5;
  uVar4 = (ulonglong)(uint)param_5;
  if (param_5 != 0.0) {
    local_d4 = param_2[2];
    uVar5 = 1;
    fVar12 = param_3[2] - local_d4;
    fVar1 = *param_2;
    fVar10 = *param_3 - fVar1;
    fVar2 = param_2[1];
    fVar11 = param_3[1] - fVar2;
    if (param_5 != 0.0) {
      param_5 = fVar1;
      local_b8 = fVar2;
      fVar13 = local_d4;
      do {
        fVar7 = (float)uVar5 * (1.0 / (float)uVar4);
        fVar9 = fVar7 * fVar10 + fVar1;
        fVar6 = (fVar7 + fVar7) - 1.0;
        fVar8 = fVar7 * fVar11 + fVar2;
        local_b4 = local_d4;
        local_bc = param_5;
        local_d4 = (1.0 - fVar6 * fVar6) *
                   SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12) * param_4 +
                   fVar7 * fVar12 + fVar13;
        local_c8 = fVar9;
        local_c4 = fVar8;
        local_c0 = local_d4;
        (**(code **)(*param_1 + 0x38))
                  (param_1,&local_bc,&local_c8,param_6,0,param_8,(float)param_9,0,local_b8,fVar13);
        uVar5 = uVar5 + 1;
        param_5 = fVar9;
        local_b8 = fVar8;
      } while (uVar5 <= uVar3);
    }
  }
  return;
}



// FUNCTION 14272a4d0 FUN_14272a4d0 body=549 status=ok
// SIG undefined FUN_14272a4d0(void)

void FUN_14272a4d0(longlong *param_1,float *param_2,float *param_3,float param_4,undefined8 param_5,
                  undefined8 param_6,undefined4 param_7,byte param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float local_88;
  float local_84;
  float local_80;
  
  fVar5 = *param_3 - *param_2;
  fVar6 = param_3[2] - param_2[2];
  fVar7 = param_3[1] - param_2[1];
  fVar1 = fVar6 * fVar6;
  fVar2 = fVar7 * fVar7 + fVar5 * fVar5 + fVar1;
  if (1e-08 < fVar2) {
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar1 = fVar3 * fVar3;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar1);
    fVar5 = fVar5 * fVar3;
    fVar7 = fVar7 * fVar3;
    fVar6 = fVar6 * fVar3;
  }
  fVar6 = fVar6 * param_4;
  fVar2 = param_4 * fVar5 * -0.33333334;
  local_88 = fVar5 * param_4 + *param_2 + fVar6 * 0.33333334;
  local_84 = fVar7 * param_4 + param_2[1];
  local_80 = fVar6 + param_2[2] + fVar2;
  (**(code **)(*param_1 + 0x38))(local_80,fVar1,&local_88,param_5,0,param_7,(float)param_8,0);
  local_84 = fVar7 * param_4 + param_2[1];
  local_88 = (fVar5 * param_4 + *param_2) - fVar6 * 0.33333334;
  local_80 = (fVar6 + param_2[2]) - fVar2;
  (**(code **)(*param_1 + 0x38))(param_1,param_2,&local_88,param_5,0,param_7,(float)param_8,0);
  return;
}



// FUNCTION 14272a700 Empty body=456 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FMaterialShaderMap_*,TUniquePtr<TArray<unsigned_char,FDefaultAllocator>,TDefaultDelete<TArray<unsigned_char,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
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
    uVar5 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar4) goto LAB_14272a7d1;
      uVar5 = puVar8[lVar6 + 1];
    }
    uStack_64 = -uVar5 & uVar5;
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
LAB_14272a7d1:
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
      plVar3 = *(longlong **)(*param_1 + 8 + (longlong)iStack_2c * 0x18);
      if (plVar3 != (longlong *)0x0) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar3,0x10);
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14272a8f0 FUN_14272a8f0 body=25 status=ok
// SIG undefined FUN_14272a8f0(void)

void FUN_14272a8f0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
    return;
  }
  return;
}



// FUNCTION 14272a930 FUN_14272a930 body=20 status=ok
// SIG undefined FUN_14272a930(void)

undefined1 FUN_14272a930(longlong param_1)

{
  FUN_142720150(param_1 + 8);
  return 1;
}



// FUNCTION 14272a950 FUN_14272a950 body=20 status=ok
// SIG undefined FUN_14272a950(void)

undefined1 FUN_14272a950(longlong param_1)

{
  FUN_1427201e0(param_1 + 8);
  return 1;
}



// FUNCTION 14272a970 FUN_14272a970 body=290 status=ok
// SIG undefined FUN_14272a970(void)

void FUN_14272a970(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  DWORD *pDVar7;
  longlong *lpTlsValue;
  longlong *plVar8;
  longlong *plVar9;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  iVar2 = *(int *)(param_1 + 3);
  lVar3 = param_1[2];
  if (iVar2 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x24);
    uVar6 = *(undefined4 *)(param_1 + 5);
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)((longlong)param_1 + 0x1c);
    *(undefined4 *)(lVar3 + 0x34) = uVar4;
    *(undefined4 *)(lVar3 + 0x38) = uVar5;
    *(undefined4 *)(lVar3 + 0x3c) = uVar6;
  }
  else if (iVar2 == 1) {
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x24);
    uVar6 = *(undefined4 *)(param_1 + 5);
    *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)((longlong)param_1 + 0x1c);
    *(undefined4 *)(lVar3 + 0x44) = uVar4;
    *(undefined4 *)(lVar3 + 0x48) = uVar5;
    *(undefined4 *)(lVar3 + 0x4c) = uVar6;
  }
  else if (iVar2 == 2) {
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x24);
    uVar6 = *(undefined4 *)(param_1 + 5);
    *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)((longlong)param_1 + 0x1c);
    *(undefined4 *)(lVar3 + 0x54) = uVar4;
    *(undefined4 *)(lVar3 + 0x58) = uVar5;
    *(undefined4 *)(lVar3 + 0x5c) = uVar6;
  }
  else if (iVar2 == 3) {
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x24);
    uVar6 = *(undefined4 *)(param_1 + 5);
    *(undefined4 *)(lVar3 + 0x60) = *(undefined4 *)((longlong)param_1 + 0x1c);
    *(undefined4 *)(lVar3 + 100) = uVar4;
    *(undefined4 *)(lVar3 + 0x68) = uVar5;
    *(undefined4 *)(lVar3 + 0x6c) = uVar6;
  }
  *(undefined1 *)(param_1 + 6) = 0;
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
  pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar7);
  plVar9 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar8 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar9;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      plVar8[1] = 0;
      *(undefined4 *)(plVar8 + 2) = 0;
      lpTlsValue = plVar8;
    }
    TlsSetValue(*pDVar7,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar9 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar7 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar9;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14272aaa0 FUN_14272aaa0 body=245 status=ok
// SIG undefined FUN_14272aaa0(void)

void FUN_14272aaa0(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  puVar1 = (uint *)(param_1[2] + 0x20);
  *puVar1 = *puVar1 ^ ((uint)*(byte *)(param_1 + 3) * 2 ^ *(uint *)(param_1[2] + 0x20)) & 2;
  *param_1 = &PTR_FUN_1451892f0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_1[5] != 0) {
    LOCK();
    piVar2 = (int *)(param_1[5] + 0x48);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
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



// FUNCTION 14272aba0 FUN_14272aba0 body=237 status=ok
// SIG undefined FUN_14272aba0(void)

void FUN_14272aba0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142729c70(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
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



// FUNCTION 14272ac90 FUN_14272ac90 body=237 status=ok
// SIG undefined FUN_14272ac90(void)

void FUN_14272ac90(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  *(undefined1 *)(param_1[2] + 0x24) = *(undefined1 *)(param_1 + 3);
  *param_1 = &PTR_FUN_145189300;
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



// FUNCTION 14272ad80 FUN_14272ad80 body=277 status=ok
// SIG undefined FUN_14272ad80(void)

void FUN_14272ad80(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  *(undefined8 *)(param_1[2] + 0x150) = param_1[3];
  lVar3 = param_1[2];
  *(uint *)(lVar3 + 0x18) =
       -(uint)(*(longlong *)(lVar3 + 0x150) != 0) & 0x10000000 |
       *(uint *)(lVar3 + 0x18) & 0xefffffff;
  *(undefined1 *)(param_1 + 4) = 0;
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



// FUNCTION 14272aea0 FUN_14272aea0 body=280 status=ok
// SIG undefined FUN_14272aea0(void)

void FUN_14272aea0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = (longlong *)0x0;
  *(undefined8 *)(param_1[2] + 0x148) = param_1[3];
  lVar3 = param_1[2];
  uVar6 = 0;
  if ((*(longlong *)(lVar3 + 0x148) != 0) || (*(longlong *)(lVar3 + 0x150) != 0)) {
    uVar6 = 0x10000000;
  }
  *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) & 0xefffffff;
  *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) | uVar6;
  *param_1 = &PTR_FUN_145189330;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar7;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar7 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14272afc0 FUN_14272afc0 body=257 status=ok
// SIG undefined FUN_14272afc0(void)

void FUN_14272afc0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  DWORD *pDVar5;
  longlong *lpTlsValue;
  longlong *plVar6;
  longlong *plVar7;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  uVar3 = *(undefined4 *)(param_1 + 3);
  lVar4 = *(longlong *)(param_1[2] + 0x140);
  *(undefined4 *)(param_1[2] + 0x398) = uVar3;
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x100) = uVar3;
  }
  *(undefined1 *)(param_1 + 4) = 0;
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
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar5);
  plVar7 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      lpTlsValue = plVar6;
    }
    TlsSetValue(*pDVar5,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar7 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar5 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14272b0d0 FUN_14272b0d0 body=237 status=ok
// SIG undefined FUN_14272b0d0(void)

void FUN_14272b0d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142729d00(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
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



// FUNCTION 14272b1c0 FUN_14272b1c0 body=237 status=ok
// SIG undefined FUN_14272b1c0(void)

void FUN_14272b1c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142729df0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
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



// FUNCTION 14272b2b0 ExecuteTask body=237 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`USubsurfaceProfile::PostEditChangeProperty'::`2'::EURCMacro_UpdateSubsurfaceProfile>
     ::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142729e80(param_1 + 2,param_3,param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xd) = 0;
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



// FUNCTION 14272b3a0 FUN_14272b3a0 body=482 status=ok
// SIG undefined FUN_14272b3a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14272b3a0(longlong param_1,longlong *param_2)

{
  void *_Dst;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FString::PrintfImpl(&local_48,L"ColorVertexData(%i)=(",*(undefined4 *)(param_1 + 0x54));
  pvVar1 = local_48;
  uVar6 = 0;
  iVar4 = 0;
  if (local_40 != 0) {
    iVar4 = local_40 + -1;
  }
  if (iVar4 != 0) {
    iVar3 = (int)param_2[1];
    iVar2 = (uint)(iVar3 == 0) + iVar3 + iVar4;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    _Dst = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar4 * 2);
    *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  iVar4 = *(int *)(param_1 + 0x54);
  iVar3 = (int)param_2[1] + -1 + iVar4 * 9;
  if ((int)param_2[1] == 0) {
    iVar3 = iVar4 * 9;
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2);
    iVar4 = *(int *)(param_1 + 0x54);
  }
  if (iVar4 != 0) {
    do {
      TCString<wchar_t>::SprintfImpl
                (&local_48,L"%.8x,",
                 *(undefined4 *)
                  ((ulonglong)(*(int *)(param_1 + 0x50) * uVar6) + *(longlong *)(param_1 + 0x48)));
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)((longlong)&local_48 + lVar5 * 2) != 0);
      iVar4 = (int)lVar5;
      if (iVar4 != 0) {
        iVar3 = (int)param_2[1];
        iVar2 = (uint)(iVar3 == 0) + iVar3 + iVar4;
        *(int *)(param_2 + 1) = iVar2;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,&local_48,(longlong)iVar4 * 2);
        *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x54));
  }
  iVar4 = (int)param_2[1] + -2;
  if ((int)param_2[1] == 0) {
    iVar4 = -1;
  }
  *(undefined2 *)(*param_2 + (longlong)iVar4 * 2) = 0x29;
  return;
}



// FUNCTION 14272b590 FUN_14272b590 body=661 status=ok
// SIG undefined FUN_14272b590(void)

void FUN_14272b590(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  ushort uVar2;
  longlong **pplVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong *local_78;
  int local_70;
  longlong **local_68;
  longlong *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  int local_40;
  undefined2 local_3c;
  int local_38;
  
  local_68 = &local_78;
  plVar1 = (longlong *)(param_1 + 0x20);
  local_58 = param_1 + 0x30;
  local_70 = 0;
  local_50 = *(undefined4 *)(param_1 + 0x38);
  local_40 = *(int *)(param_1 + 0x28) + -1;
  local_4c = 0;
  local_48 = 1;
  *(undefined4 *)(param_4 + 1) = 0;
  local_78 = param_2;
  local_60 = plVar1;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0);
  }
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5,0);
  }
  cVar4 = FRepHandleIterator::NextHandle(&local_68);
  while (cVar4 != '\0') {
    iVar9 = 0;
    lVar8 = (longlong)local_38 * 0x20 + *plVar1;
    lVar6 = *(longlong *)(param_3 + 0x10);
    if (*(longlong *)(param_3 + 0x10) == 0) {
      lVar6 = param_3;
    }
    uVar2 = *(ushort *)(lVar8 + 0x16);
    plVar7 = param_5;
    if ((*(uint *)(lVar6 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
      plVar7 = param_4;
    }
    iVar10 = (int)plVar7[1];
    *(int *)(plVar7 + 1) = iVar10 + 1;
    if (*(int *)((longlong)plVar7 + 0xc) < iVar10 + 1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar7,iVar10);
    }
    *(undefined2 *)(*plVar7 + (longlong)iVar10 * 2) = local_3c;
    if (*(char *)(lVar8 + 0x1c) == '\0') {
      iVar10 = (int)plVar7[1];
      uVar2 = *(ushort *)(*local_78 + (longlong)local_70 * 2);
      *(int *)(plVar7 + 1) = iVar10 + 1;
      if (*(int *)((longlong)plVar7 + 0xc) < iVar10 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar7,iVar10);
      }
      *(ushort *)(*plVar7 + (longlong)iVar10 * 2) = uVar2;
      if (uVar2 != 0) {
        do {
          iVar5 = local_70 + iVar9;
          iVar10 = (int)plVar7[1];
          lVar6 = *local_78;
          *(int *)(plVar7 + 1) = iVar10 + 1;
          if (*(int *)((longlong)plVar7 + 0xc) < iVar10 + 1) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar7,iVar10);
          }
          iVar9 = iVar9 + 1;
          *(undefined2 *)(*plVar7 + (longlong)iVar10 * 2) =
               *(undefined2 *)(lVar6 + (longlong)iVar5 * 2 + 2);
        } while (iVar9 < (int)(uint)uVar2);
      }
      iVar9 = (int)plVar7[1];
      *(int *)(plVar7 + 1) = iVar9 + 1;
      if (*(int *)((longlong)plVar7 + 0xc) < iVar9 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar7,iVar9);
      }
      pplVar3 = local_68;
      *(undefined2 *)(*plVar7 + (longlong)iVar9 * 2) = 0;
      iVar9 = *(int *)(local_68 + 1);
      iVar10 = iVar9 + 1;
      *(int *)(local_68 + 1) = iVar10;
      iVar10 = (uint)*(ushort *)(**pplVar3 + (longlong)iVar9 * 2) + iVar10;
      *(int *)(pplVar3 + 1) = iVar10;
      if (*(short *)(**pplVar3 + (longlong)iVar10 * 2) == 0) {
        *(int *)(pplVar3 + 1) = iVar10 + 1;
      }
    }
    cVar4 = FRepHandleIterator::NextHandle(&local_68);
  }
  iVar9 = (int)param_4[1];
  *(int *)(param_4 + 1) = iVar9 + 1;
  if (*(int *)((longlong)param_4 + 0xc) < iVar9 + 1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar9);
  }
  *(undefined2 *)(*param_4 + (longlong)iVar9 * 2) = 0;
  iVar9 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar9 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
  }
  *(undefined2 *)(*param_5 + (longlong)iVar9 * 2) = 0;
  return;
}



// FUNCTION 14272b830 FUN_14272b830 body=584 status=ok
// SIG undefined FUN_14272b830(void)

void FUN_14272b830(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  longlong **pplVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong *local_78;
  int local_70;
  longlong **local_68;
  longlong *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  int local_40;
  undefined2 local_3c;
  int local_38;
  
  local_68 = &local_78;
  plVar1 = (longlong *)(param_1 + 0x20);
  local_58 = param_1 + 0x30;
  local_70 = 0;
  local_50 = *(undefined4 *)(param_1 + 0x38);
  local_40 = *(int *)(param_1 + 0x28) + -1;
  local_4c = 0;
  local_48 = 1;
  *(undefined4 *)(param_4 + 1) = 0;
  local_78 = param_2;
  local_60 = plVar1;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0);
  }
  cVar4 = FRepHandleIterator::NextHandle(&local_68);
  do {
    if (cVar4 == '\0') {
      iVar7 = (int)param_4[1];
      *(int *)(param_4 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
      }
      *(undefined2 *)(*param_4 + (longlong)iVar7 * 2) = 0;
      return;
    }
    lVar8 = (longlong)local_38 * 0x20 + *plVar1;
    lVar6 = *(longlong *)(param_3 + 0x10);
    if (*(longlong *)(param_3 + 0x10) == 0) {
      lVar6 = param_3;
    }
    if ((*(uint *)(lVar6 + (ulonglong)(*(ushort *)(lVar8 + 0x16) >> 5) * 4) >>
         (*(ushort *)(lVar8 + 0x16) & 0x1f) & 1) == 0) {
      iVar7 = (int)param_4[1];
      *(int *)(param_4 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
      }
      *(undefined2 *)(*param_4 + (longlong)iVar7 * 2) = local_3c;
      if (*(char *)(lVar8 + 0x1c) == '\0') {
        iVar7 = (int)param_4[1];
        uVar2 = *(ushort *)(*local_78 + (longlong)local_70 * 2);
        *(int *)(param_4 + 1) = iVar7 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
        }
        *(ushort *)(*param_4 + (longlong)iVar7 * 2) = uVar2;
        iVar7 = 0;
        if (uVar2 != 0) {
          do {
            iVar5 = local_70 + iVar7;
            iVar9 = (int)param_4[1];
            lVar6 = *local_78;
            *(int *)(param_4 + 1) = iVar9 + 1;
            if (*(int *)((longlong)param_4 + 0xc) < iVar9 + 1) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar9);
            }
            iVar7 = iVar7 + 1;
            *(undefined2 *)(*param_4 + (longlong)iVar9 * 2) =
                 *(undefined2 *)(lVar6 + (longlong)iVar5 * 2 + 2);
          } while (iVar7 < (int)(uint)uVar2);
        }
        iVar7 = (int)param_4[1];
        *(int *)(param_4 + 1) = iVar7 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
        }
        *(undefined2 *)(*param_4 + (longlong)iVar7 * 2) = 0;
LAB_14272b9d9:
        pplVar3 = local_68;
        iVar7 = *(int *)(local_68 + 1);
        iVar9 = iVar7 + 1;
        *(int *)(local_68 + 1) = iVar9;
        iVar9 = (uint)*(ushort *)(**pplVar3 + (longlong)iVar7 * 2) + iVar9;
        *(int *)(pplVar3 + 1) = iVar9;
        if (*(short *)(**pplVar3 + (longlong)iVar9 * 2) == 0) {
          *(int *)(pplVar3 + 1) = iVar9 + 1;
        }
      }
    }
    else if (*(char *)(lVar8 + 0x1c) == '\0') goto LAB_14272b9d9;
    cVar4 = FRepHandleIterator::NextHandle(&local_68);
  } while( true );
}



// FUNCTION 14272ba80 FindAllocationId body=62 status=ok
// SIG undefined FindAllocationId(void)

int FSubsurfaceProfileTexture::FindAllocationId(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 1;
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar2 = 1;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xa8);
    do {
      if (*plVar1 == param_2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 1;
      plVar1 = plVar1 + 0xb;
    } while (lVar2 < *(int *)(param_1 + 0x38));
  }
  return -1;
}



// FUNCTION 14272bac0 FromInt body=18 status=ok
// SIG undefined FromInt(void)

int EDefaultBackBufferPixelFormat::FromInt(int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    return 0;
  }
  iVar1 = 4;
  if (param_1 < 4) {
    iVar1 = param_1;
  }
  return iVar1;
}



// FUNCTION 14272bae0 FUN_14272bae0 body=19 status=ok
// SIG undefined FUN_14272bae0(void)

void FUN_14272bae0(longlong param_1,longlong param_2)

{
  if (*(int *)(param_1 + 0x98) == 2) {
    FRepLayout::GatherGuidReferences_r(param_1,param_2 + 0x10);
    return;
  }
  return;
}



// FUNCTION 14272bb00 GatherGuidReferences_r body=579 status=ok
// SIG undefined GatherGuidReferences_r(void)

void FRepLayout::GatherGuidReferences_r
               (undefined8 param_1,longlong *param_2,undefined8 param_3,int *param_4)

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
      if (bVar4) goto LAB_14272bbde;
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
LAB_14272bbde:
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
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_14272bca1;
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
LAB_14272bca1:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    lVar5 = (longlong)(int)uStack_5c * 0xd8 + *param_2;
    if (*(longlong *)(lVar5 + 0xc0) == 0) {
      *param_4 = *param_4 + *(int *)(lVar5 + 0xb0);
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>(param_3,lVar5 + 8);
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>(param_3,lVar5 + 0x58);
    }
    else {
      GatherGuidReferences_r(param_1,*(longlong *)(lVar5 + 0xc0),param_3,param_4);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 14272bd50 FUN_14272bd50 body=194 status=ok
// SIG undefined FUN_14272bd50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14272bd50(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b09298) {
    _Init_thread_header(&DAT_146b09298);
    if (DAT_146b09298 == -1) {
      _DAT_146534c04 = 1;
      _DAT_146534bf4 = 0x3dcccccd;
      _DAT_146534bec = 0x400000000000;
      _DAT_146534bfc = 0;
      _DAT_146534c0c = 0;
      _DAT_146534c14 = 0;
      _DAT_146534c1c = 0;
      atexit((_func_5014 *)&LAB_143eb89c0);
      _Init_thread_footer(&DAT_146b09298);
      return &DAT_146534bc0;
    }
  }
  return &DAT_146534bc0;
}



// FUNCTION 14272be20 GetAllocatedSize body=19 status=ok
// SIG undefined GetAllocatedSize(void)

undefined8 FColorVertexBuffer::GetAllocatedSize(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272be2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14272be40 FUN_14272be40 body=59 status=ok
// SIG undefined FUN_14272be40(void)

undefined8 * FUN_14272be40(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x50);
  *param_2 = *(undefined8 *)(param_1 + 0x48);
  *(char *)((longlong)param_2 + 0xc) = cVar1;
  iVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  if (cVar1 == '\0') {
    iVar3 = iVar2 / 2;
  }
  *(int *)(param_2 + 1) = iVar3;
  return param_2;
}



// FUNCTION 14272be80 FUN_14272be80 body=123 status=ok
// SIG undefined FUN_14272be80(void)

undefined8 * FUN_14272be80(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b092b8) {
    _Init_thread_header(&DAT_146b092b8);
    if (DAT_146b092b8 == -1) {
      FName::FName(&DAT_146b092b0,"Editor",1);
      _Init_thread_footer(&DAT_146b092b8);
    }
  }
  *param_2 = DAT_146b092b0;
  return param_2;
}



// FUNCTION 14272bf00 FUN_14272bf00 body=123 status=ok
// SIG undefined FUN_14272bf00(void)

undefined8 * FUN_14272bf00(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b092a8) {
    _Init_thread_header(&DAT_146b092a8);
    if (DAT_146b092a8 == -1) {
      FName::FName(&DAT_146b092a0,"Project",1);
      _Init_thread_footer(&DAT_146b092a8);
    }
  }
  *param_2 = DAT_146b092a0;
  return param_2;
}



// FUNCTION 14272bf80 FUN_14272bf80 body=201 status=ok
// SIG undefined FUN_14272bf80(void)

void FUN_14272bf80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar4 = *(int *)((longlong)param_2 + 0xc);
  iVar2 = (int)((*(int *)(param_1 + 0x50) >> 0x1f & 3U) + *(int *)(param_1 + 0x50)) >> 2;
  if (*(char *)(param_1 + 0x60) == '\0') {
    iVar2 = *(int *)(param_1 + 0x50) / 2;
  }
  uVar6 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uVar5 = uVar6;
  if (iVar4 != iVar2) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_2,iVar2);
    uVar5 = (ulonglong)*(uint *)(param_2 + 1);
    iVar4 = *(int *)((longlong)param_2 + 0xc);
  }
  iVar3 = iVar2 + (int)uVar5;
  *(int *)(param_2 + 1) = iVar3;
  if (iVar4 < iVar3) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2);
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x48);
    if (0 < iVar2) {
      do {
        *(uint *)(*param_2 + uVar6 * 4) = (uint)*(ushort *)(lVar1 + uVar6 * 2);
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)iVar2);
    }
  }
  else {
    _guard_xfg_dispatch_icall_nop
              ((void *)*param_2,*(void **)(param_1 + 0x48),(longlong)*(int *)(param_1 + 0x50));
  }
  return;
}



// FUNCTION 14272c060 GetEffectsQualityDirect body=18 status=ok
// SIG undefined GetEffectsQualityDirect(void)

undefined4 Scalability::GetEffectsQualityDirect(char param_1)

{
  if (param_1 != '\0') {
    return *DAT_146b091c0;
  }
  return DAT_146b091c0[1];
}



// FUNCTION 14272c080 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FColorVertexBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"ColorOnly Mesh Vertices",0x30);
  return param_2;
}



// FUNCTION 14272c0c0 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FSkeletalMeshVertexClothBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x39;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy
            (*param_2,L"Skeletal-mesh vertex APEX cloth mesh-mesh mapping buffer",0x72);
  return param_2;
}



// FUNCTION 14272c100 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FSkinWeightVertexBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x1c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"SkeletalMesh Vertex Weights",0x38);
  return param_2;
}



// FUNCTION 14272c140 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FStaticMeshVertexBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Static-mesh vertices",0x2a);
  return param_2;
}



// FUNCTION 14272c180 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 *
FStaticMeshVertexBuffer::FTangentsVertexBuffer::GetFriendlyName
          (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FTangentsVertexBuffer",0x2c);
  return param_2;
}



// FUNCTION 14272c1c0 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 *
FStaticMeshVertexBuffer::FTexcoordVertexBuffer::GetFriendlyName
          (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FTexcoordVertexBuffer",0x2c);
  return param_2;
}



// FUNCTION 14272c200 FUN_14272c200 body=222 status=ok
// SIG undefined FUN_14272c200(void)

void FUN_14272c200(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  uVar5 = uVar3;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      if ((*(byte *)(uVar3 + 0x2c + *(longlong *)(param_1 + 0x10)) & 8) != 0) {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(int *)(*param_2 + (longlong)iVar1 * 4) = (int)uVar5;
        iVar1 = (int)param_3[1];
        lVar2 = *(longlong *)(param_1 + 0x10);
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + 0x20 + uVar3);
      }
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 0x30;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 14272c2e0 FUN_14272c2e0 body=1651 status=ok
// SIG undefined FUN_14272c2e0(void)

void FUN_14272c2e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b09378) && (_Init_thread_header(&DAT_146b09378), DAT_146b09378 == -1)) {
    uVar1 = FUN_1429ba1d0();
    FUN_1429ba1d0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MatineeData",1);
    DAT_146b09370 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b09378);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b09370 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b09370 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b09370 + 0x30));
  }
  if ((*piVar5 < DAT_146b09388) && (_Init_thread_header(&DAT_146b09388), DAT_146b09388 == -1)) {
    uVar1 = FUN_1429ba1d0();
    FUN_1429ba1d0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GroupActorInfos",1);
    DAT_146b09380 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b09388);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b09380 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b09380 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b09380 + 0x30));
  }
  if ((*piVar5 < DAT_146b09398) && (_Init_thread_header(&DAT_146b09398), DAT_146b09398 == -1)) {
    uVar1 = FUN_1429ba1d0();
    FUN_1429ba1d0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsPlaying",1);
    DAT_146b09390 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b09398);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b09390 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b09390 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b09390 + 0x30));
  }
  if ((*piVar5 < DAT_146b093a8) && (_Init_thread_header(&DAT_146b093a8), DAT_146b093a8 == -1)) {
    uVar1 = FUN_1429ba1d0();
    FUN_1429ba1d0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bLooping",1);
    DAT_146b093a0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b093a8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b093a0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b093a0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b093a0 + 0x30));
  }
  if ((*piVar5 < DAT_146b093b8) && (_Init_thread_header(&DAT_146b093b8), DAT_146b093b8 == -1)) {
    uVar1 = FUN_1429ba1d0();
    FUN_1429ba1d0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bReversePlayback",1);
    DAT_146b093b0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b093b8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b093b0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b093b0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b093b0 + 0x30));
  }
  if ((*piVar5 < DAT_146b093c8) && (_Init_thread_header(&DAT_146b093c8), DAT_146b093c8 == -1)) {
    uVar1 = FUN_1429ba1d0();
    FUN_1429ba1d0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bPaused",1);
    DAT_146b093c0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b093c8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b093c0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b093c0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b093c0 + 0x30));
  }
  if ((*piVar5 < DAT_146b093d8) && (_Init_thread_header(&DAT_146b093d8), DAT_146b093d8 == -1)) {
    uVar1 = FUN_1429ba1d0();
    FUN_1429ba1d0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PlayRate",1);
    DAT_146b093d0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b093d8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b093d0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b093d0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b093d0 + 0x30));
  }
  if ((*piVar5 < DAT_146b093e8) && (_Init_thread_header(&DAT_146b093e8), DAT_146b093e8 == -1)) {
    uVar1 = FUN_1429ba1d0();
    FUN_1429ba1d0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InterpPosition",1);
    DAT_146b093e0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b093e8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b093e0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b093e0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b093e0 + 0x30));
  }
  if ((*piVar5 < DAT_146b093f8) && (_Init_thread_header(&DAT_146b093f8), DAT_146b093f8 == -1)) {
    uVar1 = FUN_1429ba1d0();
    FUN_1429ba1d0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicationForceIsPlaying",1);
    DAT_146b093f0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b093f8);
  }
  if (0 < *(int *)(DAT_146b093f0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b093f0 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b093f0 + 0x30));
  }
  return;
}



// FUNCTION 14272c960 FUN_14272c960 body=147 status=ok
// SIG undefined FUN_14272c960(void)

float FUN_14272c960(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  longlong in_stack_00000030;
  
  fVar2 = (float)FUN_142232670();
  if (in_stack_00000030 == 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    fVar2 = fVar2 + (1.0 - *(float *)((longlong)param_1 + 0xd4) / *(float *)(lVar1 + 0x790));
  }
  return fVar2;
}



// FUNCTION 14272ca00 GetQualityLevels body=118 status=ok
// SIG undefined GetQualityLevels(void)

undefined4 * Scalability::GetQualityLevels(undefined4 *param_1)

{
  FUN_14271e120();
  *param_1 = *DAT_146b09130;
  param_1[1] = *DAT_146b09148;
  param_1[2] = *DAT_146b09160;
  param_1[3] = *DAT_146b09178;
  param_1[4] = *DAT_146b09190;
  param_1[5] = *DAT_146b091a8;
  param_1[6] = *DAT_146b091c0;
  param_1[7] = *DAT_146b091d8;
  return param_1;
}



// FUNCTION 14272ca80 GetRenderScaleLevelFromQualityLevel body=256 status=ok
// SIG undefined GetRenderScaleLevelFromQualityLevel(void)

float Scalability::GetRenderScaleLevelFromQualityLevel(int param_1,int param_2)

{
  int iVar1;
  wchar_t *_Str;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  float fVar5;
  longlong *local_28;
  undefined8 local_20;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FConfigCacheIni::GetSingleLineArray
            (DAT_1468b6148,L"ScalabilitySettings",L"PerfIndexValues_ResolutionQuality",&local_28,
             &DAT_1468e23e0);
  if ((int)local_20 == 0) {
    fVar5 = 100.0;
  }
  else {
    if (param_1 < 1) {
      param_1 = 0;
    }
    if (param_2 == 1) {
      iVar1 = ((int)local_20 - param_1) + -1;
      iVar3 = 0;
      if (-1 < iVar1) {
        iVar3 = iVar1;
      }
    }
    else {
      iVar3 = 0;
      if ((-1 < param_1) && (iVar3 = (int)local_20 + -1, param_1 < (int)local_20 + -1)) {
        iVar3 = param_1;
      }
    }
    if ((int)(local_28 + (longlong)iVar3 * 2)[1] == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)local_28[(longlong)iVar3 * 2];
    }
    dVar4 = _wtof(_Str);
    fVar5 = (float)dVar4;
    plVar2 = local_28;
    for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return fVar5;
}



// FUNCTION 14272cb80 FUN_14272cb80 body=363 status=ok
// SIG undefined FUN_14272cb80(void)

undefined4 FUN_14272cb80(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong local_res10;
  undefined4 local_res18 [4];
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0xa4) & 1) == 0)) {
    return 0;
  }
  local_res10 = param_1[3];
  local_res18[0] = param_3;
  FName::ToString(&local_res10,&local_38);
  puVar2 = (undefined8 *)FString::ToLower(&local_38,local_28);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  uVar1 = FCrc::StrCrc32<wchar_t>(puVar4,param_4);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar3 = (**(code **)(*param_1 + 0x298))(param_1,&local_38,0,0);
  puVar2 = (undefined8 *)FString::ToLower(uVar3,local_28);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  uVar1 = FCrc::StrCrc32<wchar_t>(puVar4,uVar1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if ((param_2 == 0) || (3 < *(uint *)(param_2 + 0x15e8))) {
    uVar1 = FCrc::MemCrc32(local_res18,4,uVar1);
  }
  else {
    FString::PrintfImpl(&local_38,&DAT_14517c264,local_res18[0]);
    puVar4 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar4 = local_38;
    }
    uVar1 = FCrc::StrCrc32<wchar_t>(puVar4,uVar1);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free(local_38);
      return uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 14272cd10 GetSingleQualityLevel body=78 status=ok
// SIG undefined GetSingleQualityLevel(void)

float Scalability::FQualityLevels::GetSingleQualityLevel(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[1];
  if ((((fVar1 == param_1[2]) && (fVar1 == param_1[3])) && (fVar1 == param_1[4])) &&
     (((fVar1 == param_1[5] && (fVar1 == param_1[6])) &&
      ((fVar1 == param_1[7] &&
       (fVar2 = (float)GetRenderScaleLevelFromQualityLevel(fVar1,0), fVar2 == *param_1)))))) {
    return fVar1;
  }
  return -NAN;
}



// FUNCTION 14272cd60 GetSubsufaceProfileTexture_RT body=43 status=ok
// SIG undefined GetSubsufaceProfileTexture_RT(void)

longlong GetSubsufaceProfileTexture_RT(undefined8 param_1)

{
  if (DAT_146b09040 == 0) {
    FUN_142729440(&PTR_PTR_146534b70,param_1);
  }
  return DAT_146b09040;
}



// FUNCTION 14272cd90 GetTangentSize body=47 status=ok
// SIG undefined GetTangentSize(void)

int FStaticMeshVertexBuffer::GetTangentSize(longlong param_1)

{
  if (*(char *)(param_1 + 0xe1) != '\0') {
    *(undefined4 *)(param_1 + 0xd0) = 0x10;
    return *(int *)(param_1 + 0xdc) << 4;
  }
  *(undefined4 *)(param_1 + 0xd0) = 8;
  return *(int *)(param_1 + 0xdc) * 8;
}



// FUNCTION 14272cdc0 GetTexCoordSize body=58 status=ok
// SIG undefined GetTexCoordSize(void)

int FStaticMeshVertexBuffer::GetTexCoordSize(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xdc) * *(int *)(param_1 + 0xd8);
  if (*(char *)(param_1 + 0xe0) != '\0') {
    *(undefined4 *)(param_1 + 0xd4) = 8;
    return iVar1 * 8;
  }
  *(undefined4 *)(param_1 + 0xd4) = 4;
  return iVar1 * 4;
}



// FUNCTION 14272ce10 FUN_14272ce10 body=134 status=ok
// SIG undefined FUN_14272ce10(void)

void FUN_14272ce10(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  void *_Src;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) && (iVar1 = *(int *)(param_1 + 0x54), iVar1 != 0)) {
    iVar2 = *(int *)(param_2 + 1);
    if (iVar2 < iVar1) {
      *(int *)(param_2 + 1) = iVar1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2);
      }
    }
    else if ((iVar1 < iVar2) && (iVar1 != iVar2)) {
      *(int *)(param_2 + 1) = iVar1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_2);
    }
    _Dst = (void *)*param_2;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))();
    iVar1 = *(int *)(param_1 + 0x54);
    _Src = (void *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)(uint)(iVar2 * iVar1));
  }
  return;
}



// FUNCTION 14272cea0 FUN_14272cea0 body=628 status=ok
// SIG undefined FUN_14272cea0(void)

void FUN_14272cea0(longlong param_1,short *param_2)

{
  short *psVar1;
  ushort uVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  short sVar6;
  ushort uVar7;
  ushort *puVar8;
  uint uVar9;
  undefined4 local_res18 [4];
  
  cVar3 = FParse::Value(param_2,L"ColorVertexData(",local_res18);
  if (cVar3 != '\0') {
    sVar6 = *param_2;
    if (sVar6 != 0) {
      do {
        if (sVar6 == 0x29) break;
        sVar6 = param_2[1];
        param_2 = param_2 + 1;
      } while (sVar6 != 0);
      while ((sVar6 != 0 && (sVar6 != 0x28))) {
        psVar1 = param_2 + 1;
        param_2 = param_2 + 1;
        sVar6 = *psVar1;
      }
    }
    *(undefined4 *)(param_1 + 0x54) = local_res18[0];
    puVar8 = (ushort *)(param_2 + 1);
    FColorVertexBuffer::AllocateData(param_1,1);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 8))
              (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x54),0);
    pcVar4 = (char *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
    uVar9 = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      do {
        uVar7 = puVar8[6];
        if (9 < (ushort)(uVar7 - 0x30)) {
          if ((ushort)(uVar7 - 0x61) < 6) {
            uVar7 = (ushort)(byte)((char)uVar7 + 0xa9);
          }
          else if ((ushort)(uVar7 - 0x41) < 6) {
            uVar7 = (ushort)(byte)((char)uVar7 - 0x37);
          }
          else {
            uVar7 = 0;
          }
        }
        uVar2 = puVar8[7];
        cVar3 = (char)uVar2;
        if ((ushort)(uVar2 - 0x30) < 10) {
          cVar3 = cVar3 + -0x30;
        }
        else if ((ushort)(uVar2 - 0x61) < 6) {
          cVar3 = cVar3 + -0x57;
        }
        else if ((ushort)(uVar2 - 0x41) < 6) {
          cVar3 = cVar3 + -0x37;
        }
        else {
          cVar3 = '\0';
        }
        *pcVar4 = (char)uVar7 * '\x10' + cVar3;
        uVar7 = puVar8[4];
        if (9 < (ushort)(uVar7 - 0x30)) {
          if ((ushort)(uVar7 - 0x61) < 6) {
            uVar7 = (ushort)(byte)((char)uVar7 + 0xa9);
          }
          else if ((ushort)(uVar7 - 0x41) < 6) {
            uVar7 = (ushort)(byte)((char)uVar7 - 0x37);
          }
          else {
            uVar7 = 0;
          }
        }
        uVar2 = puVar8[5];
        cVar3 = (char)uVar2;
        if ((ushort)(uVar2 - 0x30) < 10) {
          cVar3 = cVar3 + -0x30;
        }
        else if ((ushort)(uVar2 - 0x61) < 6) {
          cVar3 = cVar3 + -0x57;
        }
        else if ((ushort)(uVar2 - 0x41) < 6) {
          cVar3 = cVar3 + -0x37;
        }
        else {
          cVar3 = '\0';
        }
        pcVar4[1] = (char)uVar7 * '\x10' + cVar3;
        uVar7 = puVar8[2];
        if (9 < (ushort)(uVar7 - 0x30)) {
          if ((ushort)(uVar7 - 0x61) < 6) {
            uVar7 = (ushort)(byte)((char)uVar7 + 0xa9);
          }
          else if ((ushort)(uVar7 - 0x41) < 6) {
            uVar7 = (ushort)(byte)((char)uVar7 - 0x37);
          }
          else {
            uVar7 = 0;
          }
        }
        uVar2 = puVar8[3];
        cVar3 = (char)uVar2;
        if ((ushort)(uVar2 - 0x30) < 10) {
          cVar3 = cVar3 + -0x30;
        }
        else if ((ushort)(uVar2 - 0x61) < 6) {
          cVar3 = cVar3 + -0x57;
        }
        else if ((ushort)(uVar2 - 0x41) < 6) {
          cVar3 = cVar3 + -0x37;
        }
        else {
          cVar3 = '\0';
        }
        pcVar4[2] = (char)uVar7 * '\x10' + cVar3;
        uVar7 = *puVar8;
        if (9 < (ushort)(uVar7 - 0x30)) {
          if ((ushort)(uVar7 - 0x61) < 6) {
            uVar7 = (ushort)(byte)((char)uVar7 + 0xa9);
          }
          else if ((ushort)(uVar7 - 0x41) < 6) {
            uVar7 = (ushort)(byte)((char)uVar7 - 0x37);
          }
          else {
            uVar7 = 0;
          }
        }
        uVar2 = puVar8[1];
        cVar3 = (char)uVar2;
        if ((ushort)(uVar2 - 0x30) < 10) {
          cVar3 = cVar3 + -0x30;
        }
        else if ((ushort)(uVar2 - 0x61) < 6) {
          cVar3 = cVar3 + -0x57;
        }
        else if ((ushort)(uVar2 - 0x41) < 6) {
          cVar3 = cVar3 + -0x37;
        }
        else {
          cVar3 = '\0';
        }
        puVar8 = puVar8 + 9;
        uVar9 = uVar9 + 1;
        pcVar4[3] = (char)uVar7 * '\x10' + cVar3;
        pcVar4 = pcVar4 + 4;
      } while (uVar9 < *(uint *)(param_1 + 0x54));
    }
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    FUN_141edf270(param_1);
  }
  return;
}



// FUNCTION 14272d120 FUN_14272d120 body=1762 status=ok
// SIG undefined FUN_14272d120(void)

void FUN_14272d120(undefined8 *param_1,int *param_2,longlong **param_3)

{
  void *pvVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  wchar_t *_Str;
  int iVar11;
  uint uVar12;
  void *pvVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined2 *puVar18;
  uint uVar19;
  wchar_t *pwVar20;
  float fVar21;
  double dVar22;
  longlong *local_118;
  undefined8 local_110;
  int local_108;
  int local_104;
  wchar_t *local_100;
  ulonglong local_f8;
  wchar_t *local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  int local_d0;
  longlong local_c8;
  undefined2 *local_c0;
  undefined8 local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined4 local_a4;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  void *local_88;
  ulonglong local_80;
  wchar_t *local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  
  local_e0 = (longlong *)0x0;
  local_d8 = 0;
  FConfigCacheIni::GetSectionNames(DAT_1468b6148,&DAT_1468e23e0,&local_e0);
  *param_2 = -1;
  local_104 = 0;
  iVar5 = (int)local_d8;
  plVar9 = local_e0;
  if (0 < (int)local_d8) {
    local_c8 = 0;
    do {
      plVar9 = local_e0;
      iVar5 = local_104;
      puVar18 = (undefined2 *)0x0;
      local_b0 = (undefined2 *)0x0;
      iVar6 = 0;
      local_a4 = 0;
      local_88 = (void *)0x0;
      bVar3 = false;
      local_80 = 0;
      local_78 = (wchar_t *)0x0;
      local_70 = 0;
      local_98 = 0;
      local_90 = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      lVar14 = local_98;
      FGenericPlatformString::Memcpy(local_98,&DAT_14517aca4,4);
      cVar4 = FUN_1404e14f0(plVar9 + (longlong)iVar5 * 2,&local_98,&local_88,&local_78,1,0);
      if (lVar14 != 0) {
        FMemory::Free(lVar14);
      }
      pwVar15 = local_78;
      pvVar1 = local_88;
      if (cVar4 != '\0') {
        lVar14 = (longlong)(int)local_80;
        local_a8 = (int)local_80;
        if ((int)local_80 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,local_80 & 0xffffffff,0);
          puVar18 = local_b0;
          _guard_xfg_dispatch_icall_nop(local_b0,pvVar1,lVar14 * 2);
        }
        iVar6 = local_a8;
        pwVar20 = L"";
        if ((int)local_70 != 0) {
          pwVar20 = pwVar15;
        }
        local_d0 = _wtoi(pwVar20);
        bVar3 = true;
      }
      if (pwVar15 != (wchar_t *)0x0) {
        FMemory::Free(pwVar15);
      }
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      if (bVar3) {
        pvVar13 = (void *)0x0;
        local_68 = (void *)0x0;
        local_60 = *(int *)(param_1 + 1);
        lVar14 = (longlong)local_60;
        pvVar1 = (void *)*param_1;
        if (local_60 == 0) {
          local_5c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
          pvVar13 = local_68;
          _guard_xfg_dispatch_icall_nop(local_68,pvVar1,lVar14 * 2);
        }
        puVar10 = &DAT_143f3eda8;
        if (iVar6 != 0) {
          puVar10 = puVar18;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10);
        if (pvVar13 != (void *)0x0) {
          FMemory::Free(pvVar13);
        }
        if (iVar5 == 0) {
          local_118 = (longlong *)0x0;
          local_110 = 0;
          if ((int)(local_e0 + local_c8 * 2)[1] == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = (undefined2 *)local_e0[local_c8 * 2];
          }
          FConfigCacheIni::GetSection(DAT_1468b6148,puVar18,&local_118,&DAT_1468e23e0);
          local_108 = 0;
          if (0 < (int)local_110) {
            local_a0 = 0;
            do {
              pwVar15 = (wchar_t *)0x0;
              puVar17 = (undefined8 *)((longlong)local_118 + local_a0);
              local_c0 = (undefined2 *)0x0;
              local_b8 = 2;
              uVar19 = 0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c0,0);
              puVar18 = local_c0;
              FGenericPlatformString::Memcpy(local_c0,&DAT_14517acf4,4);
              iVar5 = (int)local_b8;
              puVar10 = &DAT_143f3eda8;
              if ((int)local_b8 != 0) {
                puVar10 = puVar18;
              }
              iVar6 = FUN_141592950(puVar17,puVar10,1,0,0xffffffff);
              if (iVar6 < 0) {
                bVar3 = false;
                pwVar20 = pwVar15;
              }
              else {
                iVar7 = *(int *)(puVar17 + 1);
                if (iVar7 == 0) {
                  pwVar15 = L"";
                }
                else {
                  pwVar15 = (wchar_t *)*puVar17;
                }
                iVar11 = iVar7 + -1;
                local_100 = (wchar_t *)0x0;
                pwVar20 = (wchar_t *)0x0;
                if (iVar7 == 0) {
                  iVar11 = 0;
                }
                if (iVar6 < iVar11) {
                  iVar11 = iVar6;
                }
                uVar19 = iVar11 + 1;
                if (iVar11 == 0) {
                  uVar19 = 0;
                }
                local_f8 = (ulonglong)uVar19;
                if (0 < (int)uVar19) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
                  pwVar20 = local_100;
                  if (0 < (int)local_f8) {
                    wcsncpy(local_100,pwVar15,(longlong)iVar11);
                    pwVar20[iVar11] = L'\0';
                  }
                }
                local_100 = (wchar_t *)0x0;
                iVar7 = iVar5 + -1;
                local_f8 = 0;
                if (iVar5 == 0) {
                  iVar7 = 0;
                }
                iVar5 = *(int *)(puVar17 + 1);
                uVar8 = iVar7 + iVar6;
                uVar19 = uVar8 + 0x7fffffff;
                uVar2 = iVar5 - 1;
                if (iVar5 == 0) {
                  uVar2 = 0;
                }
                uVar12 = iVar5 - 1;
                if (uVar8 < uVar2) {
                  uVar2 = uVar8;
                }
                if (iVar5 == 0) {
                  uVar12 = 0;
                }
                uVar8 = uVar2;
                if ((uVar2 <= uVar19) && (uVar8 = uVar12, uVar19 < uVar12)) {
                  uVar8 = uVar19;
                }
                if (iVar5 == 0) {
                  puVar18 = &DAT_143f3eda8;
                }
                else {
                  puVar18 = (undefined2 *)*puVar17;
                }
                iVar5 = uVar8 - uVar2;
                local_f0 = (wchar_t *)0x0;
                pwVar15 = (wchar_t *)0x0;
                uVar19 = iVar5 + 1;
                if (iVar5 == 0) {
                  uVar19 = 0;
                }
                local_e8 = (ulonglong)uVar19;
                if (0 < (int)uVar19) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0,0);
                  pwVar15 = local_f0;
                  uVar19 = (uint)local_e8;
                  if (0 < (int)(uint)local_e8) {
                    wcsncpy(local_f0,puVar18 + (int)uVar2,(longlong)iVar5);
                    pwVar15[iVar5] = L'\0';
                  }
                }
                local_f0 = (wchar_t *)0x0;
                bVar3 = true;
                local_e8 = 0;
              }
              if (local_c0 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if (bVar3) {
                if (DAT_1468b1f88 == (longlong *)0x0) {
                  IConsoleManager::SetupSingleton();
                }
                plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
                if (plVar9 != (longlong *)0x0) {
                  fVar21 = (float)(**(code **)(*plVar9 + 0x70))(plVar9);
                  _Str = L"";
                  if (uVar19 != 0) {
                    _Str = pwVar15;
                  }
                  dVar22 = _wtof(_Str);
                  if ((float)dVar22 != fVar21) {
                    if (pwVar15 != (wchar_t *)0x0) {
                      FMemory::Free(pwVar15);
                    }
                    if (pwVar20 != (wchar_t *)0x0) {
                      FMemory::Free(pwVar20);
                    }
                    goto LAB_14272d728;
                  }
                }
              }
              if (pwVar15 != (wchar_t *)0x0) {
                FMemory::Free(pwVar15);
              }
              if (pwVar20 != (wchar_t *)0x0) {
                FMemory::Free(pwVar20);
              }
              local_108 = local_108 + 1;
              local_a0 = local_a0 + 0x10;
            } while (local_108 < (int)local_110);
          }
          iVar5 = local_d0;
          if (local_d0 <= *param_2) {
            iVar5 = *param_2;
          }
          *param_2 = iVar5;
          iVar5 = (int)local_110;
          plVar9 = local_118;
          if ((param_3 != (longlong **)0x0) && (param_3 != &local_118)) {
            iVar5 = *(int *)(param_3 + 1);
            plVar9 = *param_3;
            iVar6 = (int)local_110;
            if (iVar5 != 0) {
              do {
                if (*plVar9 != 0) {
                  FMemory::Free();
                }
                plVar9 = plVar9 + 2;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              iVar6 = (int)local_110;
            }
            plVar9 = local_118;
            *(int *)(param_3 + 1) = iVar6;
            if ((iVar6 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
              *(undefined4 *)((longlong)param_3 + 0xc) = 0;
              iVar5 = 0;
            }
            else {
              TArray<FString,FDefaultAllocator>::ResizeForCopy(param_3);
              plVar16 = *param_3;
              for (; iVar6 != 0; iVar6 = iVar6 + -1) {
                *plVar16 = 0;
                iVar5 = (int)plVar9[1];
                pvVar1 = (void *)*plVar9;
                *(int *)(plVar16 + 1) = iVar5;
                if (iVar5 == 0) {
                  *(undefined4 *)((longlong)plVar16 + 0xc) = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar16,iVar5,0);
                  _guard_xfg_dispatch_icall_nop((void *)*plVar16,pvVar1,(longlong)iVar5 * 2);
                }
                plVar16 = plVar16 + 2;
                plVar9 = plVar9 + 2;
              }
LAB_14272d728:
              iVar5 = (int)local_110;
              plVar9 = local_118;
            }
          }
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            if (*plVar9 != 0) {
              FMemory::Free();
            }
            plVar9 = plVar9 + 2;
          }
          if (local_118 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
      }
      if (local_b0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_c8 = local_c8 + 1;
      local_104 = local_104 + 1;
      iVar5 = (int)local_d8;
      plVar9 = local_e0;
    } while (local_104 < (int)local_d8);
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_e0 != (longlong *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}



// FUNCTION 14272d810 FUN_14272d810 body=395 status=ok
// SIG undefined FUN_14272d810(void)

void FUN_14272d810(longlong param_1,longlong *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char cVar13;
  longlong lVar14;
  char cVar15;
  undefined4 *puVar16;
  char cStackX_11;
  char cStackX_12;
  char cStackX_13;
  char cVar7;
  
  iVar9 = (int)param_2[1];
  uVar11 = 0;
  bVar5 = true;
  bVar4 = true;
  if (0 < iVar9) {
    uVar1 = *(undefined4 *)(*param_2 + ((longlong)param_3 + 0x1c) * 4);
    puVar16 = (undefined4 *)(*param_2 + ((longlong)param_3 + 0x1c) * 4);
    uVar12 = uVar11;
    do {
      uVar2 = *puVar16;
      cVar15 = (char)uVar2;
      cVar8 = (char)((uint)uVar2 >> 0x10);
      cVar6 = (char)((uint)uVar2 >> 8);
      cVar7 = (char)((uint)uVar2 >> 0x18);
      if ((((cVar8 != -1) || (cVar6 != -1)) || (cVar15 != -1)) ||
         (cVar15 = -1, cVar13 = -1, cVar7 != -1)) {
        bVar5 = false;
        cVar13 = cVar8;
      }
      cStackX_12 = (char)((uint)uVar1 >> 0x10);
      if (((cVar13 == cStackX_12) && (cStackX_11 = (char)((uint)uVar1 >> 8), cVar6 == cStackX_11))
         && ((cVar15 == (char)uVar1 &&
             (cStackX_13 = (char)((uint)uVar1 >> 0x18), cVar7 == cStackX_13)))) {
        if (!bVar4) goto LAB_14272d8d8;
      }
      else {
        bVar4 = false;
LAB_14272d8d8:
        if (!bVar5) break;
      }
      uVar12 = uVar12 + 1;
      puVar16 = puVar16 + 0x1e;
    } while ((longlong)uVar12 < (longlong)iVar9);
  }
  if (!bVar5) {
    *(int *)(param_1 + 0x54) = iVar9;
    FColorVertexBuffer::AllocateData(param_1,1);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 8))
              (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x54),0);
    uVar12 = uVar11;
    if (iVar9 != 0) {
      uVar12 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
    }
    *(ulonglong *)(param_1 + 0x48) = uVar12;
    if (0 < (int)param_2[1]) {
      lVar14 = (longlong)param_3 * 4 + 0x70;
      do {
        iVar9 = (int)uVar11;
        uVar10 = iVar9 + 1;
        uVar11 = (ulonglong)uVar10;
        *(undefined4 *)
         ((ulonglong)(uint)(*(int *)(param_1 + 0x50) * iVar9) + *(longlong *)(param_1 + 0x48)) =
             *(undefined4 *)(lVar14 + *param_2);
        lVar14 = lVar14 + 0x78;
      } while ((int)uVar10 < (int)param_2[1]);
    }
    return;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 14272d9a0 Init body=89 status=ok
// SIG undefined Init(void)

void FColorVertexBuffer::Init(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0x54) = param_2;
  AllocateData(param_1,1);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 8))
            (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x54),0);
  if (param_2 != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 14272da00 FUN_14272da00 body=2080 status=ok
// SIG undefined FUN_14272da00(void)

void FUN_14272da00(longlong param_1,longlong *param_2,undefined4 param_3)

{
  uint uVar1;
  float fVar2;
  longlong lVar3;
  ushort uVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  longlong local_res8;
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
  
  lVar13 = param_2[1];
  *(undefined4 *)(param_1 + 0xd8) = param_3;
  *(int *)(param_1 + 0xdc) = (int)lVar13;
  FUN_142721650(param_1,1);
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))
            (*(longlong **)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xdc),0);
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar8 = 0;
    iVar9 = 0;
  }
  else {
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x30))();
    iVar9 = *(int *)(param_1 + 0xdc);
  }
  *(undefined8 *)(param_1 + 0xc0) = uVar8;
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 8))
            (*(longlong **)(param_1 + 0xb0),*(int *)(param_1 + 0xd8) * iVar9,0);
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))();
  }
  uVar16 = 0;
  *(undefined8 *)(param_1 + 200) = uVar8;
  if (0 < (int)param_2[1]) {
    local_res8 = 0;
    do {
      lVar13 = *param_2 + local_res8;
      fVar2 = *(float *)(lVar13 + 0x2c);
      local_158 = (float)*(undefined8 *)(lVar13 + 0xc);
      local_110 = *(float *)(lVar13 + 0x14);
      local_100 = *(undefined4 *)(lVar13 + 0x20);
      fStack_154 = (float)((ulonglong)*(undefined8 *)(lVar13 + 0xc) >> 0x20);
      local_148 = (float)*(undefined8 *)(lVar13 + 0x24);
      fStack_144 = (float)((ulonglong)*(undefined8 *)(lVar13 + 0x24) >> 0x20);
      local_138 = (undefined4)*(undefined8 *)(lVar13 + 0x18);
      uStack_134 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x18) >> 0x20);
      local_f0 = fVar2;
      if (*(char *)(param_1 + 0xe1) == '\0') {
        lVar3 = *(longlong *)(param_1 + 0xc0);
        iVar9 = (int)ROUND(local_158 * 127.0 + local_158 * 127.0 + 0.5) >> 1;
        if (iVar9 < -0x80) {
          iVar7 = -0x80;
        }
        else {
          iVar7 = 0x7f;
          if (iVar9 < 0x7f) {
            iVar7 = iVar9;
          }
        }
        *(char *)(lVar3 + uVar16 * 8) = (char)iVar7;
        iVar9 = (int)ROUND(fStack_154 * 127.0 + fStack_154 * 127.0 + 0.5) >> 1;
        if (iVar9 < -0x80) {
          iVar7 = -0x80;
        }
        else {
          iVar7 = 0x7f;
          if (iVar9 < 0x7f) {
            iVar7 = iVar9;
          }
        }
        *(char *)(lVar3 + 1 + uVar16 * 8) = (char)iVar7;
        iVar9 = (int)ROUND(local_110 * 127.0 + local_110 * 127.0 + 0.5) >> 1;
        if (iVar9 < -0x80) {
          iVar7 = -0x80;
        }
        else {
          iVar7 = 0x7f;
          if (iVar9 < 0x7f) {
            iVar7 = iVar9;
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
        *(char *)(lVar3 + 2 + uVar16 * 8) = (char)iVar7;
        *(undefined1 *)(lVar3 + 3 + uVar16 * 8) = 0x7f;
        local_10c = 0;
        local_fc = 0;
        local_ec = 0;
        fVar17 = (float)FMatrix::Determinant(&local_118);
        if (0.0 <= fVar17) {
          fVar17 = 254.5;
        }
        else {
          fVar17 = -253.5;
        }
        iVar9 = (int)ROUND(local_148 * 127.0 + local_148 * 127.0 + 0.5) >> 1;
        if (iVar9 < -0x80) {
          iVar7 = -0x80;
        }
        else {
          iVar7 = 0x7f;
          if (iVar9 < 0x7f) {
            iVar7 = iVar9;
          }
        }
        *(char *)(lVar3 + 4 + uVar16 * 8) = (char)iVar7;
        iVar9 = (int)ROUND(fStack_144 * 127.0 + fStack_144 * 127.0 + 0.5) >> 1;
        if (iVar9 < -0x80) {
          iVar7 = -0x80;
        }
        else {
          iVar7 = 0x7f;
          if (iVar9 < 0x7f) {
            iVar7 = iVar9;
          }
        }
        *(char *)(lVar3 + 5 + uVar16 * 8) = (char)iVar7;
        iVar9 = (int)ROUND(fVar2 * 127.0 + fVar2 * 127.0 + 0.5) >> 1;
        if (iVar9 < -0x80) {
          iVar7 = -0x80;
        }
        else {
          iVar7 = 0x7f;
          if (iVar9 < 0x7f) {
            iVar7 = iVar9;
          }
        }
        *(char *)(lVar3 + 6 + uVar16 * 8) = (char)iVar7;
        iVar9 = (int)ROUND(fVar17) >> 1;
        if (iVar9 < -0x80) {
          iVar7 = -0x80;
        }
        else {
          iVar7 = 0x7f;
          if (iVar9 < 0x7f) {
            iVar7 = iVar9;
          }
        }
        *(char *)(lVar3 + 7 + uVar16 * 8) = (char)iVar7;
      }
      else {
        puVar11 = (undefined2 *)(uVar16 * 0x10 + *(longlong *)(param_1 + 0xc0));
        iVar9 = (int)ROUND(local_158 * 32767.0 + local_158 * 32767.0 + 0.5) >> 1;
        if (iVar9 < -0x8000) {
          uVar5 = 0x8000;
        }
        else {
          uVar5 = 0x7fff;
          if (iVar9 < 0x7fff) {
            uVar5 = (undefined2)iVar9;
          }
        }
        *puVar11 = uVar5;
        iVar9 = (int)ROUND(fStack_154 * 32767.0 + fStack_154 * 32767.0 + 0.5) >> 1;
        if (iVar9 < -0x8000) {
          iVar7 = -0x8000;
        }
        else {
          iVar7 = 0x7fff;
          if (iVar9 < 0x7fff) {
            iVar7 = iVar9;
          }
        }
        puVar11[1] = (short)iVar7;
        iVar9 = (int)ROUND(local_110 * 32767.0 + local_110 * 32767.0 + 0.5) >> 1;
        if (iVar9 < -0x8000) {
          iVar7 = -0x8000;
        }
        else {
          iVar7 = 0x7fff;
          if (iVar9 < 0x7fff) {
            iVar7 = iVar9;
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
        puVar11[2] = (short)iVar7;
        puVar11[3] = 0x7fff;
        local_10c = 0;
        local_fc = 0;
        local_ec = 0;
        fVar17 = (float)FMatrix::Determinant(&local_118);
        if (0.0 <= fVar17) {
          fVar17 = 65534.5;
        }
        else {
          fVar17 = -65533.5;
        }
        iVar9 = (int)ROUND(local_148 * 32767.0 + local_148 * 32767.0 + 0.5) >> 1;
        if (iVar9 < -0x8000) {
          iVar7 = -0x8000;
        }
        else {
          iVar7 = 0x7fff;
          if (iVar9 < 0x7fff) {
            iVar7 = iVar9;
          }
        }
        puVar11[4] = (short)iVar7;
        iVar9 = (int)ROUND(fStack_144 * 32767.0 + fStack_144 * 32767.0 + 0.5) >> 1;
        if (iVar9 < -0x8000) {
          iVar7 = -0x8000;
        }
        else {
          iVar7 = 0x7fff;
          if (iVar9 < 0x7fff) {
            iVar7 = iVar9;
          }
        }
        puVar11[5] = (short)iVar7;
        iVar9 = (int)ROUND(fVar2 * 32767.0 + fVar2 * 32767.0 + 0.5) >> 1;
        if (iVar9 < -0x8000) {
          iVar7 = -0x8000;
        }
        else {
          iVar7 = 0x7fff;
          if (iVar9 < 0x7fff) {
            iVar7 = iVar9;
          }
        }
        puVar11[6] = (short)iVar7;
        iVar9 = (int)ROUND(fVar17) >> 1;
        if (iVar9 < -0x8000) {
          puVar11[7] = 0x8000;
        }
        else {
          iVar7 = 0x7fff;
          if (iVar9 < 0x7fff) {
            iVar7 = iVar9;
          }
          puVar11[7] = (short)iVar7;
        }
      }
      uVar15 = *(uint *)(param_1 + 0xd8);
      uVar12 = 0;
      if (uVar15 != 0) {
        do {
          uVar10 = *(uint *)(lVar13 + 0x30 + uVar12 * 8);
          uVar1 = *(uint *)(lVar13 + 0x34 + uVar12 * 8);
          lVar3 = *(longlong *)(param_1 + 200);
          lVar14 = uVar15 * uVar16 + uVar12;
          if (*(char *)(param_1 + 0xe0) == '\0') {
            uVar4 = (ushort)(uVar10 >> 0x10);
            uVar6 = uVar4 & 0x8000;
            uVar15 = uVar10 >> 0x17 & 0xff;
            if (uVar15 < 0x71) {
              iVar9 = -uVar15 + 0x7e;
              if ((iVar9 < 0x19) &&
                 (uVar10 = uVar10 & 0x7fffff | 0x800000,
                 uVar6 = (ushort)(uVar10 >> ((byte)iVar9 & 0x1f)) & 0x3ff | uVar6,
                 (uVar10 >> ((char)-uVar15 + 0x7dU & 0x1f) & 1) != 0)) {
                uVar6 = uVar6 + 1;
              }
            }
            else if (uVar15 < 0x8f) {
              uVar6 = uVar6 | ((uVar4 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar10 >> 0xd) & 0x3ff;
            }
            else {
              uVar6 = uVar6 | 0x7bff;
            }
            *(ushort *)(lVar3 + lVar14 * 4) = uVar6;
            uVar4 = (ushort)(uVar1 >> 0x10);
            uVar6 = uVar4 & 0x8000;
            uVar15 = uVar1 >> 0x17 & 0xff;
            if (uVar15 < 0x71) {
              iVar9 = -uVar15 + 0x7e;
              if ((iVar9 < 0x19) &&
                 (uVar10 = uVar1 & 0x7fffff | 0x800000,
                 uVar6 = (ushort)(uVar10 >> ((byte)iVar9 & 0x1f)) & 0x3ff | uVar6,
                 (uVar10 >> ((char)-uVar15 + 0x7dU & 0x1f) & 1) != 0)) {
                uVar6 = uVar6 + 1;
              }
            }
            else if (uVar15 < 0x8f) {
              uVar6 = uVar6 | ((uVar4 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar1 >> 0xd) & 0x3ff;
            }
            else {
              uVar6 = uVar6 | 0x7bff;
            }
            *(ushort *)(lVar3 + 2 + lVar14 * 4) = uVar6;
          }
          else {
            *(uint *)(lVar3 + lVar14 * 8) = uVar10;
            *(uint *)(lVar3 + 4 + lVar14 * 8) = uVar1;
          }
          uVar15 = *(uint *)(param_1 + 0xd8);
          uVar10 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar10;
        } while (uVar10 < uVar15);
      }
      local_res8 = local_res8 + 0x78;
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14272e220 Init body=169 status=ok
// SIG undefined Init(void)

void FStaticMeshVertexBuffer::Init
               (longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xdc) = param_2;
  *(undefined4 *)(param_1 + 0xd8) = param_3;
  FUN_142721650(param_1,param_4);
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))
            (*(longlong **)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xdc),0);
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar1 = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x30))();
    iVar2 = *(int *)(param_1 + 0xdc);
  }
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 8))
            (*(longlong **)(param_1 + 0xb0),iVar2 * *(int *)(param_1 + 0xd8),0);
  if (*(int *)(param_1 + 0xdc) != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))();
    *(undefined8 *)(param_1 + 200) = uVar1;
    return;
  }
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}



// FUNCTION 14272e2d0 FUN_14272e2d0 body=199 status=ok
// SIG undefined FUN_14272e2d0(void)

void FUN_14272e2d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar5 = *(int *)(param_1 + 0x18);
  plVar1 = (longlong *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 < iVar5) {
    *(int *)(param_2 + 0x10) = iVar5;
    iVar4 = iVar5 - iVar3;
    if (*(int *)(param_2 + 0x14) < iVar5) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    puVar2 = (uint *)(*plVar1 + (longlong)iVar3 * 4);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar2 & 0xfffffffb | 3;
      puVar2 = puVar2 + 1;
    }
  }
  else if ((iVar5 < iVar3) && (iVar5 != iVar3)) {
    *(int *)(param_2 + 0x10) = iVar5;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar7 = 0;
    lVar6 = 0;
    do {
      lVar7 = lVar7 + 4;
      iVar5 = iVar5 + 1;
      puVar2 = (uint *)(*plVar1 + -4 + lVar7);
      *puVar2 = *puVar2 ^ (*(int *)(lVar6 + 0x2c + *(longlong *)(param_1 + 0x10)) * 2 ^
                          *(uint *)(*plVar1 + -4 + lVar7)) & 4;
      lVar6 = lVar6 + 0x30;
    } while (iVar5 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 14272e3a0 InitFromColorArray body=132 status=ok
// SIG undefined InitFromColorArray(void)

void FColorVertexBuffer::InitFromColorArray
               (longlong param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  *(uint *)(param_1 + 0x54) = param_3;
  AllocateData(param_1,1);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 8))(*(longlong **)(param_1 + 0x38),param_3,0);
  puVar2 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
  if (param_3 != 0) {
    uVar4 = (ulonglong)param_3;
    do {
      uVar1 = *param_2;
      param_2 = (undefined4 *)((longlong)param_2 + (ulonglong)param_4);
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  return;
}



// FUNCTION 14272e430 FUN_14272e430 body=732 status=ok
// SIG undefined FUN_14272e430(void)

void FUN_14272e430(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  iVar7 = 0;
  if (param_2 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = *(longlong *)(param_2 + 0x38);
  }
  local_48 = 0xffffffff;
  local_44 = 0x101;
  local_42 = 0;
  local_58 = param_2;
  FUN_140472e10(&local_58);
  lVar6 = local_50;
  iVar3 = iVar7;
  while ((local_50 = lVar6, lVar6 != 0 && ((*(uint *)(lVar6 + 0x38) & 0x480) == 0x80))) {
    iVar10 = iVar7;
    if (0 < *(int *)(lVar6 + 0x30)) {
      do {
        uVar1 = *(uint *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        if (*(int *)(param_1 + 0x1c) < (int)(uVar1 + 1)) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,uVar1);
        }
        lVar5 = *(longlong *)(param_1 + 0x10);
        lVar4 = (longlong)(int)uVar1;
        lVar8 = (ulonglong)(uVar1 & 0xffff) * 0x30;
        *(longlong *)(lVar5 + lVar4 * 0x30) = lVar6;
        *(undefined8 *)(lVar5 + 8 + lVar4 * 0x30) = *(undefined8 *)(lVar6 + 0x18);
        *(int *)(lVar5 + 0x10 + lVar4 * 0x30) = iVar10;
        *(undefined8 *)(lVar5 + 0x14 + lVar4 * 0x30) = 0;
        *(undefined4 *)(lVar5 + 0x1c + lVar4 * 0x30) = 0xffffffff;
        *(undefined8 *)(lVar5 + 0x20 + lVar4 * 0x30) = 0;
        *(undefined4 *)(lVar5 + 0x28 + lVar4 * 0x30) = 0xffffffff;
        *(undefined4 *)(lVar5 + 0x2c + lVar4 * 0x30) = 0;
        *(short *)(lVar8 + 0x18 + *(longlong *)(param_1 + 0x10)) =
             (short)*(undefined4 *)(param_1 + 0x28);
        iVar3 = FUN_14272ebb0(param_1,lVar6,*(int *)(lVar6 + 0x34) * iVar10,iVar3,uVar1 & 0xffff,0,
                              iVar10,param_3);
        *(short *)(lVar8 + 0x1a + *(longlong *)(param_1 + 0x10)) =
             (short)*(undefined4 *)(param_1 + 0x28);
        plVar9 = (longlong *)(lVar8 + *(longlong *)(param_1 + 0x10));
        lVar5 = *plVar9;
        if (lVar5 != 0) {
          lVar4 = UStructProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lVar5 = *(longlong *)(lVar5 + 0x70);
            uVar1 = *(uint *)((longlong)plVar9 + 0x2c);
            *(uint *)((longlong)plVar9 + 0x2c) = uVar1 | 0x20;
            if ((*(uint *)(lVar5 + 0x88) >> 10 & 1) != 0) {
              *(uint *)((longlong)plVar9 + 0x2c) = uVar1 | 0x30;
            }
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar6 + 0x30));
    }
    local_50 = *(longlong *)(lVar6 + 0x28);
    FUN_140472e10(&local_58);
    lVar6 = local_50;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  iVar10 = iVar3 + 1;
  *(int *)(param_1 + 0x28) = iVar10;
  if (*(int *)(param_1 + 0x2c) < iVar10) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 0x20);
  }
  lVar6 = *(longlong *)(param_1 + 0x20);
  lVar5 = (longlong)iVar3 * 0x20;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined8 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + 0x10 + lVar6) = 0;
  *(undefined8 *)(lVar5 + 0x18 + lVar6) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x1c + lVar5) = 1;
  FUN_142724370(param_1,0,*(int *)(param_1 + 0x28) + -1,param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x98) = 2;
  iVar3 = iVar7;
  while( true ) {
    if ((iVar3 < 0) || (*(int *)(param_1 + 0x18) <= iVar3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    plVar9 = (longlong *)((longlong)iVar3 * 0x30 + *(longlong *)(param_1 + 0x10));
    iVar3 = iVar3 + 1;
    *(undefined4 *)((longlong)plVar9 + 0x14) = *(undefined4 *)(*plVar9 + 0x44);
  }
  while( true ) {
    if ((iVar7 < 0) || (*(int *)(param_1 + 0x28) <= iVar7)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    lVar6 = (longlong)iVar7 * 0x20 + *(longlong *)(param_1 + 0x20);
    iVar7 = iVar7 + 1;
    *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar6 + 0xc);
  }
  *(longlong *)(param_1 + 0x50) = param_2;
  *(uint *)(param_1 + 0x98) = (*(int *)(param_1 + 0x18) != 0) + 1;
  return;
}



// FUNCTION 14272e710 FUN_14272e710 body=1170 status=ok
// SIG undefined FUN_14272e710(void)

void FUN_14272e710(longlong param_1,longlong *param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 local_res10;
  int local_res20;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar19;
  longlong local_68;
  longlong local_58;
  undefined8 local_50;
  
  plVar7 = (longlong *)FUN_1428dfc70();
  plVar14 = param_2;
  do {
    if (plVar14 == (longlong *)0x0) {
      bVar4 = false;
LAB_14272e76a:
      uVar13 = 0;
      *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
      local_res10 = 0;
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
      FUN_141726870(param_2);
      lVar9 = param_2[0x1c];
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (*(int *)(param_1 + 0x1c) != (int)lVar9) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(param_1 + 0x10);
      }
      local_res20 = 0;
      if (0 < (int)param_2[0x1c]) {
        local_68 = 0;
        do {
          uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
          lVar9 = *(longlong *)(local_68 + param_2[0x1b]);
          iVar2 = *(int *)(local_68 + 8 + param_2[0x1b]);
          uVar5 = FUN_142720d20(param_1,lVar9,iVar2);
          lVar15 = (ulonglong)uVar5 * 0x30;
          in_stack_ffffffffffffff68 = CONCAT44(uVar19,(uint)uVar5);
          *(short *)(*(longlong *)(param_1 + 0x10) + 0x18 + lVar15) =
               (short)*(undefined4 *)(param_1 + 0x28);
          local_res10 = FUN_14272ebb0(param_1,lVar9,*(int *)(lVar9 + 0x34) * iVar2,local_res10,
                                      in_stack_ffffffffffffff68,0,iVar2,param_3);
          *(short *)(*(longlong *)(param_1 + 0x10) + 0x1a + lVar15) =
               (short)*(undefined4 *)(param_1 + 0x28);
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0x2c + lVar15);
          *puVar1 = *puVar1 | 2;
          plVar14 = (longlong *)(*(longlong *)(param_1 + 0x10) + lVar15);
          lVar11 = *plVar14;
          if (lVar11 != 0) {
            lVar8 = UStructProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              lVar11 = *(longlong *)(lVar11 + 0x70);
              uVar16 = *(uint *)((longlong)plVar14 + 0x2c);
              uVar10 = uVar16 | 0x20;
              *(uint *)((longlong)plVar14 + 0x2c) = uVar10;
              uVar12 = *(uint *)(lVar11 + 0x88);
              if ((uVar12 >> 0x14 & 1) != 0) {
                uVar10 = uVar16 | 0x28;
                *(uint *)((longlong)plVar14 + 0x2c) = uVar10;
                uVar12 = *(uint *)(lVar11 + 0x88);
              }
              if ((uVar12 >> 10 & 1) != 0) {
                *(uint *)((longlong)plVar14 + 0x2c) = uVar10 | 0x10;
              }
            }
          }
          if ((*(uint *)(lVar9 + 0x38) >> 0xe & 1) != 0) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0x2c + lVar15);
            *puVar1 = *puVar1 | 4;
          }
          if (((*(int *)(param_1 + 0x44) == -1) && (*(int *)(lVar9 + 0x30) == 1)) &&
             ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c + lVar15) & 8) == 0)) {
            *(uint *)(param_1 + 0x44) = (uint)uVar5;
          }
          if (bVar4) {
            lVar11 = *(longlong *)(lVar9 + 0x18);
            if (lVar11 == 0xd7) {
              *(uint *)(param_1 + 0x48) = (uint)uVar5;
              lVar11 = *(longlong *)(lVar9 + 0x18);
            }
            if (lVar11 == 0xd8) {
              *(uint *)(param_1 + 0x4c) = (uint)uVar5;
            }
          }
          local_res20 = local_res20 + 1;
          local_68 = local_68 + 0x10;
        } while (local_res20 < (int)param_2[0x1c]);
      }
      if (*(int *)(param_1 + 0x48) != -1) {
        *(undefined4 *)
         (*(longlong *)(param_1 + 0x10) + 0x1c + (longlong)*(int *)(param_1 + 0x48) * 0x30) =
             *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)
         (*(longlong *)(param_1 + 0x10) + 0x1c + (longlong)*(int *)(param_1 + 0x4c) * 0x30) =
             *(undefined4 *)(param_1 + 0x48);
      }
      iVar2 = *(int *)(param_1 + 0x28);
      iVar6 = iVar2 + 1;
      *(int *)(param_1 + 0x28) = iVar6;
      if (*(int *)(param_1 + 0x2c) < iVar6) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_1 + 0x20);
      }
      lVar9 = *(longlong *)(param_1 + 0x20);
      lVar11 = (longlong)iVar2 * 0x20;
      *(undefined8 *)(lVar11 + lVar9) = 0;
      *(undefined8 *)(lVar11 + 8 + lVar9) = 0;
      *(undefined8 *)(lVar11 + 0x10 + lVar9) = 0;
      *(undefined8 *)(lVar11 + 0x18 + lVar9) = 0;
      *(undefined1 *)(lVar11 + 0x1c + *(longlong *)(param_1 + 0x20)) = 1;
      plVar14 = (longlong *)param_2[0x1f];
      local_58 = 0;
      local_50 = 0;
      if (plVar14 == (longlong *)0x0) {
        (**(code **)(*param_2 + 0x368))(param_2);
        plVar14 = (longlong *)param_2[0x1f];
      }
      (**(code **)(*plVar14 + 0x1b0))(plVar14,&local_58);
      uVar17 = uVar13;
      if (0 < (int)local_50) {
        do {
          uVar5 = *(ushort *)(local_58 + uVar13);
          uVar18 = (ulonglong)uVar5;
          if ((int)(uint)uVar5 < *(int *)(param_1 + 0x18)) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x20 + uVar18 * 0x30) =
                 *(undefined4 *)(local_58 + 4 + uVar13);
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x24 + uVar18 * 0x30) =
                 *(undefined4 *)(local_58 + 8 + uVar13);
            lVar9 = FUN_141719c60(param_2,*(undefined8 *)
                                           (*(longlong *)
                                             (*(longlong *)(param_1 + 0x10) + uVar18 * 0x30) + 0x48)
                                  ,1);
            if (lVar9 != 0) {
              *(uint *)(*(longlong *)(param_1 + 0x10) + 0x28 + uVar18 * 0x30) =
                   (uint)*(byte *)(lVar9 + 0x8c);
            }
            uVar16 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x2c + uVar18 * 0x30);
            if ((uVar16 & 8) == 0) {
              *(uint *)(*(longlong *)(param_1 + 0x10) + 0x2c + uVar18 * 0x30) = uVar16 | 1;
              if ((uint)uVar5 == *(uint *)(param_1 + 0x4c)) {
                *(undefined4 *)(local_58 + 4 + uVar13) = 8;
              }
              else if (*(int *)(local_58 + 4 + uVar13) == 0) {
                puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0x2c + uVar18 * 0x30);
                *puVar1 = *puVar1 & 0xfffffffd;
              }
            }
          }
          uVar16 = (int)uVar17 + 1;
          uVar13 = uVar13 + 0xc;
          uVar17 = (ulonglong)uVar16;
        } while ((int)uVar16 < (int)local_50);
      }
      FUN_142724370(param_1,0,*(int *)(param_1 + 0x28) + -1,param_1 + 0x30);
      FUN_14271ba40(param_2,param_1 + 0x10,param_1 + 0x20,param_1 + 0x40,param_1 + 0x98);
      *(longlong **)(param_1 + 0x50) = param_2;
      if (local_58 != 0) {
        FMemory::Free();
      }
      return;
    }
    if (plVar14 == plVar7) {
      bVar4 = true;
      goto LAB_14272e76a;
    }
    plVar14 = (longlong *)plVar14[6];
  } while( true );
}



// FUNCTION 14272ebb0 FUN_14272ebb0 body=991 status=ok
// SIG undefined FUN_14272ebb0(void)

int FUN_14272ebb0(longlong param_1,longlong param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint local_res10 [2];
  longlong *local_60;
  uint local_58;
  int local_54;
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  
  if (param_2 != 0) {
    lVar4 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_res10[0] = *(uint *)(param_1 + 0x28);
      iVar8 = *(int *)(param_2 + 0x44);
      lVar4 = (longlong)(int)local_res10[0];
      *(uint *)(param_1 + 0x28) = local_res10[0] + 1;
      if (*(int *)(param_1 + 0x2c) < (int)(local_res10[0] + 1)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_1 + 0x20);
      }
      lVar5 = *(longlong *)(param_1 + 0x20);
      lVar4 = lVar4 * 0x20;
      *(undefined8 *)(lVar4 + lVar5) = 0;
      *(undefined8 *)(lVar4 + 8 + lVar5) = 0;
      *(undefined8 *)(lVar4 + 0x10 + lVar5) = 0;
      *(undefined8 *)(lVar4 + 0x18 + lVar5) = 0;
      plVar9 = (longlong *)(*(longlong *)(param_1 + 0x20) + lVar4);
      *(undefined1 *)((longlong)plVar9 + 0x1c) = 0;
      *plVar9 = param_2;
      *(int *)((longlong)plVar9 + 0xc) = iVar8 + param_3;
      *(undefined2 *)((longlong)plVar9 + 10) = *(undefined2 *)(*(longlong *)(param_2 + 0x70) + 0x34)
      ;
      *(short *)((longlong)plVar9 + 0x14) = (short)(param_4 + 1);
      *(short *)((longlong)plVar9 + 0x16) = (short)param_5;
      uVar2 = FUN_14272cb80(param_2,param_8,param_7,param_6);
      *(undefined4 *)(plVar9 + 3) = uVar2;
      FUN_14272ebb0(param_1,*(undefined8 *)(param_2 + 0x70),0,0,param_5,uVar2,0,param_8);
      iVar8 = *(int *)(param_1 + 0x28);
      iVar3 = iVar8 + 1;
      *(int *)(param_1 + 0x28) = iVar3;
      if (*(int *)(param_1 + 0x2c) < iVar3) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_1 + 0x20);
      }
      lVar4 = *(longlong *)(param_1 + 0x20);
      lVar5 = (longlong)iVar8 * 0x20;
      *(undefined8 *)(lVar5 + lVar4) = 0;
      *(undefined8 *)(lVar5 + 8 + lVar4) = 0;
      *(undefined8 *)(lVar5 + 0x10 + lVar4) = 0;
      *(undefined8 *)(lVar5 + 0x18 + lVar4) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x1c + lVar5) = 1;
      *(undefined2 *)((longlong)(int)local_res10[0] * 0x20 + 8 + *(longlong *)(param_1 + 0x20)) =
           *(undefined2 *)(param_1 + 0x28);
      return param_4 + 1;
    }
    lVar4 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_50 = *(longlong *)(param_2 + 0x70);
      if ((*(uint *)(local_50 + 0x88) >> 0x14 & 1) != 0) {
        return param_4;
      }
      if ((*(uint *)(local_50 + 0x88) >> 10 & 1) == 0) {
        local_48 = *(longlong *)(local_50 + 0x38);
        uVar7 = 0;
        plVar9 = (longlong *)0x0;
        local_60 = (longlong *)0x0;
        local_54 = 0;
        local_40 = 0xffffffff;
        local_3c = 0x101;
        local_3a = 0;
        FUN_140472e10(&local_50);
        if (local_48 != 0) {
          iVar8 = 0;
          do {
            lVar4 = local_48;
            if ((*(uint *)(local_48 + 0x38) & 0x80000000) == 0) {
              local_58 = uVar7 + 1;
              if (iVar8 < (int)local_58) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,uVar7);
                plVar9 = local_60;
                iVar8 = local_54;
              }
              plVar9[(int)uVar7] = lVar4;
              uVar7 = local_58;
            }
            local_48 = *(longlong *)(lVar4 + 0x28);
            FUN_140472e10(&local_50);
          } while (local_48 != 0);
        }
        AlgoImpl::
        IntroSortInternal<UProperty_*,FIdentityFunctor,TDereferenceWrapper<UProperty_*,_FClassNetCacheMgr::SortProperties_::_2_::FCompareUFieldOffsets>_>
                  (plVar9,(longlong)(int)uVar7,(undefined1)local_res10[0],local_res10);
        local_res10[0] = FUN_14272cb80(param_2,param_8,param_7,param_6);
        plVar10 = plVar9;
        if (0 < (int)uVar7) {
          uVar6 = (ulonglong)uVar7;
          uVar7 = local_res10[0];
          do {
            lVar4 = *plVar9;
            iVar8 = 0;
            if (0 < *(int *)(lVar4 + 0x30)) {
              do {
                param_4 = FUN_14272ebb0(param_1,lVar4,
                                        *(int *)(lVar4 + 0x34) * iVar8 + *(int *)(param_2 + 0x44) +
                                        param_3,param_4,param_5,uVar7,iVar8,param_8);
                lVar4 = *plVar9;
                iVar8 = iVar8 + 1;
                uVar7 = local_res10[0];
              } while (iVar8 < *(int *)(lVar4 + 0x30));
            }
            plVar9 = plVar9 + 1;
            uVar6 = uVar6 - 1;
            plVar10 = local_60;
          } while (uVar6 != 0);
        }
        if (plVar10 == (longlong *)0x0) {
          return param_4;
        }
        FMemory::Free(plVar10);
        return param_4;
      }
    }
  }
  FUN_142720f50(param_1,param_2,*(int *)(param_2 + 0x44) + param_3,param_4 + 1,param_5,param_6,
                param_7,param_8);
  return param_4 + 1;
}



// FUNCTION 14272ef90 FUN_14272ef90 body=714 status=ok
// SIG undefined FUN_14272ef90(void)

void FUN_14272ef90(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  iVar10 = 0;
  if (param_2 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = *(longlong *)(param_2 + 0x38);
  }
  local_48 = 0xffffffff;
  local_44 = 0x101;
  local_42 = 0;
  local_58 = param_2;
  FUN_140472e10(&local_58);
  lVar6 = local_50;
  iVar3 = iVar10;
  while (local_50 = lVar6, lVar6 != 0) {
    if (((*(uint *)(lVar6 + 0x38) & 0x80000000) == 0) &&
       (iVar9 = iVar10, 0 < *(int *)(lVar6 + 0x30))) {
      do {
        uVar1 = *(uint *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        if (*(int *)(param_1 + 0x1c) < (int)(uVar1 + 1)) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,uVar1);
        }
        lVar5 = *(longlong *)(param_1 + 0x10);
        lVar4 = (longlong)(int)uVar1;
        lVar7 = (ulonglong)(uVar1 & 0xffff) * 0x30;
        *(longlong *)(lVar5 + lVar4 * 0x30) = lVar6;
        *(undefined8 *)(lVar5 + 8 + lVar4 * 0x30) = *(undefined8 *)(lVar6 + 0x18);
        *(int *)(lVar5 + 0x10 + lVar4 * 0x30) = iVar9;
        *(undefined8 *)(lVar5 + 0x14 + lVar4 * 0x30) = 0;
        *(undefined4 *)(lVar5 + 0x1c + lVar4 * 0x30) = 0xffffffff;
        *(undefined8 *)(lVar5 + 0x20 + lVar4 * 0x30) = 0;
        *(undefined4 *)(lVar5 + 0x28 + lVar4 * 0x30) = 0xffffffff;
        *(undefined4 *)(lVar5 + 0x2c + lVar4 * 0x30) = 0;
        *(short *)(lVar7 + 0x18 + *(longlong *)(param_1 + 0x10)) =
             (short)*(undefined4 *)(param_1 + 0x28);
        iVar3 = FUN_14272ebb0(param_1,lVar6,*(int *)(lVar6 + 0x34) * iVar9,iVar3,uVar1 & 0xffff,0,
                              iVar9,param_3);
        *(short *)(lVar7 + 0x1a + *(longlong *)(param_1 + 0x10)) =
             (short)*(undefined4 *)(param_1 + 0x28);
        plVar8 = (longlong *)(lVar7 + *(longlong *)(param_1 + 0x10));
        lVar5 = *plVar8;
        if (lVar5 != 0) {
          lVar4 = UStructProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lVar5 = *(longlong *)(lVar5 + 0x70);
            uVar1 = *(uint *)((longlong)plVar8 + 0x2c);
            *(uint *)((longlong)plVar8 + 0x2c) = uVar1 | 0x20;
            if ((*(uint *)(lVar5 + 0x88) >> 10 & 1) != 0) {
              *(uint *)((longlong)plVar8 + 0x2c) = uVar1 | 0x30;
            }
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar6 + 0x30));
    }
    local_50 = *(longlong *)(lVar6 + 0x28);
    FUN_140472e10(&local_58);
    lVar6 = local_50;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  iVar9 = iVar3 + 1;
  *(int *)(param_1 + 0x28) = iVar9;
  if (*(int *)(param_1 + 0x2c) < iVar9) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 0x20);
  }
  lVar6 = *(longlong *)(param_1 + 0x20);
  lVar5 = (longlong)iVar3 * 0x20;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined8 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + 0x10 + lVar6) = 0;
  *(undefined8 *)(lVar5 + 0x18 + lVar6) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x1c + lVar5) = 1;
  FUN_142724370(param_1,0,*(int *)(param_1 + 0x28) + -1,param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x98) = 2;
  iVar3 = iVar10;
  while( true ) {
    if ((iVar3 < 0) || (*(int *)(param_1 + 0x18) <= iVar3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    plVar8 = (longlong *)((longlong)iVar3 * 0x30 + *(longlong *)(param_1 + 0x10));
    iVar3 = iVar3 + 1;
    *(undefined4 *)((longlong)plVar8 + 0x14) = *(undefined4 *)(*plVar8 + 0x44);
  }
  while( true ) {
    if ((iVar10 < 0) || (*(int *)(param_1 + 0x28) <= iVar10)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    lVar6 = (longlong)iVar10 * 0x20 + *(longlong *)(param_1 + 0x20);
    iVar10 = iVar10 + 1;
    *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar6 + 0xc);
  }
  *(longlong *)(param_1 + 0x50) = param_2;
  return;
}



// FUNCTION 14272f260 FUN_14272f260 body=312 status=ok
// SIG undefined FUN_14272f260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14272f260(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
    iVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    if (iVar1 != 0) {
      local_58 = 0;
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_48 = 1;
      local_44 = _DAT_1468b5d78;
      uStack_40 = uRam00000001468b5d7c;
      uStack_3c = uRam00000001468b5d80;
      uStack_38 = uRam00000001468b5d84;
      local_50 = plVar3;
      uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
      local_70 = &local_58;
      local_78 = 0x201;
      (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_68,&DAT_146ab6e78,uVar2);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
      local_70 = (undefined8 *)CONCAT71(local_70._1_7_,0x25);
      local_78 = 4;
      (**(code **)(*DAT_146ab6358 + 0x4a8))
                (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x40,local_68);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
    }
  }
  return;
}



// FUNCTION 14272f3a0 FUN_14272f3a0 body=907 status=ok
// SIG undefined FUN_14272f3a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14272f3a0(longlong param_1)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  void **local_98;
  void *local_88;
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_68 = 1;
  local_54 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = &local_88;
  local_50 = 0;
  local_a0 = &local_78;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  local_48 = 0;
  local_40 = 0;
  local_88 = (void *)0x0;
  local_a8 = 0x201;
  (**(code **)(*DAT_146ab6358 + 0x480))
            (DAT_146ab6358,&local_80,&DAT_146ab6e78,*(int *)(param_1 + 0x6c) << 2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,&local_80);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_80);
  _guard_xfg_dispatch_icall_nop
            (local_88,*(void **)(param_1 + 0x60),(ulonglong)(uint)(*(int *)(param_1 + 0x6c) << 2));
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  local_a0 = (undefined8 *)CONCAT71(local_a0._1_7_,0x1c);
  local_a8 = 4;
  (**(code **)(*DAT_146ab6358 + 0x4a8))
            (DAT_146ab6358,&local_80,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,&local_80);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_80);
  local_68 = 1;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = &local_80;
  local_54 = 0;
  local_a0 = &local_78;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_80 = (void *)0x0;
  local_a8 = 0x201;
  (**(code **)(*DAT_146ab6358 + 0x480))
            (DAT_146ab6358,&local_88,&DAT_146ab6e78,*(int *)(param_1 + 0x7c) * 0xc);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x40,&local_88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
  _guard_xfg_dispatch_icall_nop
            (local_80,*(void **)(param_1 + 0x70),(ulonglong)(uint)(*(int *)(param_1 + 0x7c) * 0xc));
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x40));
  local_a0 = (undefined8 *)CONCAT71(local_a0._1_7_,0x15);
  local_a8 = 2;
  (**(code **)(*DAT_146ab6358 + 0x4a8))
            (DAT_146ab6358,&local_88,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x40));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x48,&local_88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
  local_98 = &local_80;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  local_a0 = &local_78;
  local_68 = 1;
  local_78 = 0;
  uStack_70 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_80 = (void *)0x0;
  local_a8 = 0x201;
  (**(code **)(*DAT_146ab6358 + 0x480))
            (DAT_146ab6358,&local_88,&DAT_146ab6e78,*(int *)(param_1 + 0x8c) << 2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x50,&local_88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
  _guard_xfg_dispatch_icall_nop
            (local_80,*(void **)(param_1 + 0x80),(ulonglong)(uint)(*(int *)(param_1 + 0x8c) << 2));
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x50));
  local_a0 = (undefined8 *)CONCAT71(local_a0._1_7_,0x1c);
  local_a8 = 4;
  (**(code **)(*DAT_146ab6358 + 0x4a8))
            (DAT_146ab6358,&local_88,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x50));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x58,&local_88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x80,0);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x60,0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x70,0);
  }
  return;
}



// FUNCTION 14272f730 FUN_14272f730 body=383 status=ok
// SIG undefined FUN_14272f730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14272f730(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 local_90;
  undefined8 *local_88;
  void **local_80;
  void *local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_1 + 0x48);
  iVar3 = 2;
  if (*(char *)(param_1 + 0x50) != '\0') {
    iVar3 = 4;
  }
  lVar4 = 0;
  uVar2 = iVar1 * iVar3;
  if (uVar2 != 0) {
    local_80 = &local_78;
    local_58 = 1;
    local_88 = &local_68;
    local_44 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (void *)0x0;
    local_54 = _DAT_1468b5d78;
    uStack_50 = uRam00000001468b5d7c;
    uStack_4c = uRam00000001468b5d80;
    uStack_48 = uRam00000001468b5d84;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_90 = 1;
    local_98 = uVar2;
    (**(code **)(*DAT_146ab6358 + 0x488))(DAT_146ab6358,local_70,&DAT_146ab6e78);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_70);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_70);
    if (*(char *)(param_1 + 0x50) == '\0') {
      if (0 < iVar1) {
        do {
          *(undefined2 *)((longlong)local_78 + lVar4 * 2) =
               *(undefined2 *)(*(longlong *)(param_1 + 0x40) + lVar4 * 4);
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar1);
      }
    }
    else {
      _guard_xfg_dispatch_icall_nop(local_78,*(void **)(param_1 + 0x40),(ulonglong)uVar2);
    }
    (**(code **)(*DAT_146ab6358 + 0x500))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  }
  if (DAT_1468b616c == '\0') {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
    }
  }
  return;
}



// FUNCTION 14272f8b0 FUN_14272f8b0 body=277 status=ok
// SIG undefined FUN_14272f8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14272f8b0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = *(int *)(param_1 + 0x50);
  if (local_88 != 0) {
    local_50 = param_1 + 0x40;
    local_58 = 0;
    local_34 = 0;
    uVar1 = 2;
    if (*(char *)(param_1 + 0x60) != '\0') {
      uVar1 = 4;
    }
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_48 = 1;
    local_78 = &local_58;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_80 = 0x201;
    (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_68,&DAT_146ab6e78,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
    (**(code **)(*DAT_146ab6358 + 0x4a0))
              (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  }
  return;
}



// FUNCTION 14272f9d0 FUN_14272f9d0 body=299 status=ok
// SIG undefined FUN_14272f9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14272f9d0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))();
  iVar1 = (**(code **)(*plVar3 + 8))(plVar3);
  if (iVar1 != 0) {
    local_58 = 0;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_48 = 1;
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_50 = plVar3;
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    local_70 = &local_58;
    local_78 = 0x201;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_68,&DAT_146ab6e78,uVar2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
    local_70 = (undefined8 *)CONCAT71(local_70._1_7_,1);
    local_78 = 0x10;
    (**(code **)(*DAT_146ab6358 + 0x4a8))
              (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  }
  return;
}



// FUNCTION 14272fb00 FUN_14272fb00 body=317 status=ok
// SIG undefined FUN_14272fb00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14272fb00(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))();
  iVar1 = (**(code **)(*plVar3 + 8))(plVar3);
  if (iVar1 != 0) {
    local_58 = 0;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_48 = 1;
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_50 = plVar3;
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    local_70 = &local_58;
    local_78 = 0x201;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_68,&DAT_146ab6e78,uVar2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
    if ((DAT_1464c9c12 != '\0') && (DAT_1464ca630 != '\0')) {
      local_70 = (undefined8 *)CONCAT71(local_70._1_7_,0x1c);
      local_78 = 4;
      (**(code **)(*DAT_146ab6358 + 0x4a8))
                (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_68);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
    }
  }
  return;
}



// FUNCTION 14272fc40 FUN_14272fc40 body=709 status=ok
// SIG undefined FUN_14272fc40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14272fc40(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xa0) + 0x38))();
  iVar3 = (**(code **)(*plVar6 + 8))(plVar6);
  if (iVar3 != 0) {
    local_78 = 0;
    local_64 = _DAT_1468b5d78;
    uStack_60 = uRam00000001468b5d7c;
    uStack_5c = uRam00000001468b5d80;
    uStack_58 = uRam00000001468b5d84;
    local_68 = 1;
    local_54 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_70 = plVar6;
    uVar4 = (**(code **)(*plVar6 + 8))(plVar6);
    local_90 = &local_78;
    local_98 = 0x201;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_88,&DAT_146ab6e78,uVar4);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x60,local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
    if ((((0x1d < DAT_146ab62cc) || ((0x25e2efcaU >> (DAT_146ab62cc & 0x1f) & 1) == 0)) &&
        ((0x1b < DAT_146ab62cc ||
         (((0x8051000U >> (DAT_146ab62cc & 0x1f) & 1) == 0 ||
          (uVar5 = RHIGetShaderLanguageVersion(), 1 < uVar5)))))) ||
       (cVar1 = DoSkeletalMeshIndexBuffersNeedSRV(), cVar1 != '\0')) {
      bVar7 = *(char *)(param_1 + 0xe1) != '\0';
      uVar2 = 0x3d;
      if (bVar7) {
        uVar2 = 0x3f;
      }
      local_98 = 4;
      if (bVar7) {
        local_98 = 8;
      }
      local_90 = (undefined8 *)CONCAT71(local_90._1_7_,uVar2);
      (**(code **)(*DAT_146ab6358 + 0x4a8))
                (DAT_146ab6358,local_88,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x60));
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xa8,local_88);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
    }
  }
  plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))();
  iVar3 = (**(code **)(*plVar6 + 8))(plVar6);
  if (iVar3 != 0) {
    local_78 = 0;
    local_64 = _DAT_1468b5d78;
    uStack_60 = uRam00000001468b5d7c;
    uStack_5c = uRam00000001468b5d80;
    uStack_58 = uRam00000001468b5d84;
    local_68 = 1;
    local_54 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_70 = plVar6;
    uVar4 = (**(code **)(*plVar6 + 8))(plVar6);
    local_90 = &local_78;
    local_98 = 0x201;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_88,&DAT_146ab6e78,uVar4);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x98,local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
    if ((0x1d < DAT_146ab62cc) || ((0x25e2efcaU >> (DAT_146ab62cc & 0x1f) & 1) == 0)) {
      if ((DAT_146ab62cc < 0x1c) &&
         (((0x8051000U >> (DAT_146ab62cc & 0x1f) & 1) != 0 &&
          (uVar5 = RHIGetShaderLanguageVersion(), uVar5 < 2)))) {
        return;
      }
      bVar7 = *(char *)(param_1 + 0xe0) != '\0';
      local_98 = 4;
      if (bVar7) {
        local_98 = 8;
      }
      uVar2 = 0xf;
      if (bVar7) {
        uVar2 = 0x11;
      }
      local_90 = (undefined8 *)CONCAT71(local_90._1_7_,uVar2);
      (**(code **)(*DAT_146ab6358 + 0x4a8))
                (DAT_146ab6358,local_88,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x98));
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xb8,local_88);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
    }
  }
  return;
}



// FUNCTION 14272ff10 FUN_14272ff10 body=345 status=ok
// SIG undefined FUN_14272ff10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14272ff10(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar7 = (longlong *)(param_2 + 0x80);
  uStack_60 = (longlong *)param_5[1];
  local_68 = *param_5;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
    UNLOCK();
  }
  if (&local_68 != plVar7) {
    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    lVar4 = *plVar7;
    plVar3 = *(longlong **)(param_2 + 0x88);
    local_50 = (undefined4)local_68;
    uStack_4c = local_68._4_4_;
    uStack_48 = (undefined4)uStack_60;
    uStack_44 = uStack_60._4_4_;
    *(undefined4 *)plVar7 = (undefined4)local_68;
    *(undefined4 *)(param_2 + 0x84) = local_68._4_4_;
    *(undefined4 *)(param_2 + 0x88) = (undefined4)uStack_60;
    *(undefined4 *)(param_2 + 0x8c) = uStack_60._4_4_;
    local_68 = lVar4;
    uStack_60 = plVar3;
  }
  plVar7 = uStack_60;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = uStack_60 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*uStack_60 + 8))(uStack_60,1);
      }
    }
  }
  if (*param_5 == 0) {
    FUN_142730600(param_1,param_2,param_3,param_4);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x508) = 0;
  iVar5 = (int)(iVar2 + 0x1f + (iVar2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
  iVar6 = iVar5 << 5;
  if (*(int *)(param_2 + 0x50c) != iVar6) {
    *(int *)(param_2 + 0x50c) = iVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((void *)(param_2 + 0x4f0));
  }
  if (iVar2 != 0) {
    *(int *)(param_2 + 0x508) = iVar2;
    _Dst = *(void **)(param_2 + 0x500);
    if (*(void **)(param_2 + 0x500) == (void *)0x0) {
      _Dst = (void *)(param_2 + 0x4f0);
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar5 << 2);
  }
  local_58[0] = 0;
  FUN_142735c80(param_1,param_2,local_58);
  return;
}



// FUNCTION 142730070 InitResource body=42 status=ok
// SIG undefined InitResource(void)

void FStaticMeshVertexBuffer::InitResource(longlong param_1)

{
  FRenderResource::InitResource();
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000142730096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x68) + 0x28))(param_1 + 0x68);
  return;
}



// FUNCTION 1427300a0 FUN_1427300a0 body=14 status=ok
// SIG undefined FUN_1427300a0(void)

void FUN_1427300a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  longlong *plVar10;
  undefined1 auStack_28 [32];
  
  plVar6 = *(longlong **)(param_1 + 8);
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  if (DAT_146ac3ac6 != '\0') {
    cVar8 = IsInRenderingThread();
    if (cVar8 != '\0') goto LAB_141edf2bf;
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar8 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar9 = GetCurrentThreadId();
      if (DVar9 != DAT_1468c21c0) goto LAB_141edf2ce;
    }
LAB_141edf2bf:
                    /* WARNING: Could not recover jumptable at 0x000141edf2ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x28))(plVar6);
    return;
  }
LAB_141edf2ce:
  plVar10 = (longlong *)FUN_141ee0610(auStack_28,0,0xff);
  *(longlong **)(*plVar10 + 0x10) = plVar6;
  lVar3 = *plVar10;
  lVar7 = plVar10[2];
  lVar4 = plVar10[1];
  lVar5 = *(longlong *)(lVar3 + 0x20);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_140445100(lVar3,lVar4,(int)lVar7,1);
  if (lVar5 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  return;
}



// FUNCTION 1427300b0 InitScalabilitySystem body=1358 status=ok
// SIG undefined InitScalabilitySystem(void)

void Scalability::InitScalabilitySystem(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_28;
  int local_20;
  
  plVar1 = DAT_146b09128;
  if (DAT_146b0940c != '\0') {
    return;
  }
  DAT_146b0940c = 1;
  local_28 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20,0);
  local_20 = 2;
  local_28 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)FUN_142731980;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  (**(code **)(*plVar1 + 0x80))(plVar1,&local_28);
  if (local_20 == 0) {
LAB_142730189:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_142730189;
  }
  plVar1 = DAT_146b09140;
  local_28 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_20 = 2;
  local_28 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)OnChangeViewDistanceQuality;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  (**(code **)(*plVar1 + 0x80))(plVar1,&local_28);
  if (local_20 == 0) {
LAB_142730225:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_142730225;
  }
  plVar1 = DAT_146b09158;
  local_28 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_20 = 2;
  local_28 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)OnChangeAntiAliasingQuality;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  (**(code **)(*plVar1 + 0x80))(plVar1,&local_28);
  if (local_20 == 0) {
LAB_1427302c1:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_1427302c1;
  }
  plVar1 = DAT_146b09170;
  local_28 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_20 = 2;
  local_28 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)OnChangeShadowQuality;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  (**(code **)(*plVar1 + 0x80))(plVar1,&local_28);
  if (local_20 == 0) {
LAB_14273035d:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_14273035d;
  }
  plVar1 = DAT_146b09188;
  local_28 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_20 = 2;
  local_28 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)OnChangePostProcessQuality;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  (**(code **)(*plVar1 + 0x80))(plVar1,&local_28);
  if (local_20 == 0) {
LAB_1427303f9:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_1427303f9;
  }
  plVar1 = DAT_146b091a0;
  local_28 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_20 = 2;
  local_28 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)OnChangeTextureQuality;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  (**(code **)(*plVar1 + 0x80))(plVar1,&local_28);
  if (local_20 == 0) {
LAB_142730495:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_142730495;
  }
  plVar1 = DAT_146b091b8;
  local_28 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_20 = 2;
  local_28 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)OnChangeEffectsQuality;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  (**(code **)(*plVar1 + 0x80))(plVar1,&local_28);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) goto LAB_14273053e;
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
LAB_14273053e:
  plVar1 = DAT_146b091d0;
  local_28 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_20 = 2;
  local_28 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)OnChangeFoliageQuality;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  (**(code **)(*plVar1 + 0x80))(plVar1,&local_28);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142730600 FUN_142730600 body=368 status=ok
// SIG undefined FUN_142730600(void)

void FUN_142730600(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  void *_Dst;
  longlong *plVar6;
  
  if ((*(int *)(param_1 + 0x40) != 0) || (*(int *)(param_1 + 0x98) == 1)) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      TArray<unsigned_char,TAlignedHeapAllocator<16>_>::ResizeTo(param_2);
    }
    if (*(int *)(param_1 + 0x98) == 2) {
      lVar5 = param_2[1];
      iVar3 = *(int *)(param_1 + 0x40);
      iVar2 = (int)lVar5 + iVar3;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<unsigned_char,TAlignedHeapAllocator<16>_>::ResizeGrow(param_2);
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)(int)lVar5 + *param_2),0,(longlong)iVar3);
      plVar4 = *(longlong **)(param_1 + 0x10);
      iVar3 = *(int *)(param_1 + 0x18);
      lVar5 = *param_2;
      plVar6 = plVar4 + (longlong)iVar3 * 6;
      if (plVar4 != plVar6) {
        do {
          if ((int)plVar4[2] == 0) {
            plVar1 = (longlong *)*plVar4;
            if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
              (**(code **)(*plVar1 + 0x330))();
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(int *)((longlong)plVar4 + 0x14) + lVar5),0,
                         (longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
            }
          }
          plVar4 = plVar4 + 6;
        } while (plVar4 != plVar6);
        lVar5 = *param_2;
        iVar3 = *(int *)(param_1 + 0x18);
      }
      plVar4 = *(longlong **)(param_1 + 0x10);
      plVar6 = plVar4 + (longlong)iVar3 * 6;
      for (; plVar4 != plVar6; plVar4 = plVar4 + 6) {
        if ((int)plVar4[2] == 0) {
          plVar1 = (longlong *)*plVar4;
          _Dst = (void *)(*(int *)((longlong)plVar4 + 0x14) + lVar5);
          _Src = (void *)(*(int *)((longlong)plVar1 + 0x44) + param_4);
          if (_Dst != _Src) {
            if ((*(uint *)(plVar1 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar1 + 0x2e8))(plVar1,_Dst,_Src,(int)plVar1[6]);
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (_Dst,_Src,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142730770 FUN_142730770 body=266 status=ok
// SIG undefined FUN_142730770(void)

void FUN_142730770(longlong param_1,int param_2,undefined2 *param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *_Dst;
  void *_Src;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_4 != 0) {
    iVar2 = *(int *)(param_1 + 0x50);
    iVar5 = 2;
    if (*(char *)(param_1 + 0x60) != '\0') {
      iVar5 = 4;
    }
    uVar3 = (ulonglong)param_4;
    uVar4 = iVar5 * param_4;
    iVar5 = iVar5 * param_2;
    *(uint *)(param_1 + 0x50) = iVar2 + uVar4;
    if (*(int *)(param_1 + 0x54) < (int)(iVar2 + uVar4)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x48,iVar2);
    }
    _Src = (void *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar5);
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)(int)uVar4 + (longlong)_Src),_Src,(longlong)(iVar2 - iVar5));
    _Dst = (undefined2 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar5);
    if (param_3 == (undefined2 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar4);
    }
    else {
      if (*(char *)(param_1 + 0x60) != '\0') {
        _guard_xfg_dispatch_icall_nop(_Dst,param_3,(ulonglong)uVar4);
        return;
      }
      if (param_4 != 0) {
        do {
          uVar1 = *param_3;
          param_3 = param_3 + 2;
          *_Dst = uVar1;
          _Dst = _Dst + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142730880 FUN_142730880 body=588 status=ok
// SIG undefined FUN_142730880(void)

undefined1 FUN_142730880(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint7 uVar7;
  undefined8 uVar8;
  
  if ((*(uint *)(param_1 + 0x1c) & 0x24) != 0) {
    if ((*(uint *)(param_1 + 0x1c) >> 9 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x18) & 2) != 0) {
        if (*(int *)(param_2 + 0xfc0) != *(int *)(param_2 + 0xfec)) {
          lVar4 = *(longlong *)(param_2 + 0xff8);
          if (*(longlong *)(param_2 + 0xff8) == 0) {
            lVar4 = param_2 + 0xff0;
          }
          iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_2 + 0x1000) - 1U &
                                   (longlong)*(int *)(param_1 + 0x138)) * 4);
          if (iVar3 != -1) {
            do {
              if (*(int *)(*(longlong *)(param_2 + 0xfb8) + (longlong)iVar3 * 0xc) ==
                  *(int *)(param_1 + 0x138)) {
                if (iVar3 != -1) {
                  return 0;
                }
                break;
              }
              iVar3 = *(int *)(*(longlong *)(param_2 + 0xfb8) + 4 + (longlong)iVar3 * 0xc);
            } while (iVar3 != -1);
          }
        }
        if (*(char *)(param_2 + 0x1058) == '\0') {
LAB_142730994:
          if ((*(byte *)(param_1 + 0x18) & 0x20) != 0) {
            plVar5 = *(longlong **)(param_1 + 0x120);
            plVar1 = plVar5 + *(int *)(param_1 + 0x128);
            if (plVar5 == plVar1) {
              return 0;
            }
            while (*plVar5 != *(longlong *)(param_2 + 0x350)) {
              plVar5 = plVar5 + 1;
              if (plVar5 == plVar1) {
                return 0;
              }
            }
          }
          if ((*(byte *)(param_1 + 0x18) & 0x40) != 0) {
            plVar5 = *(longlong **)(param_1 + 0x120);
            plVar1 = plVar5 + *(int *)(param_1 + 0x128);
            if (plVar5 != plVar1) {
              do {
                if (*plVar5 == *(longlong *)(param_2 + 0x350)) {
                  return 0;
                }
                plVar5 = plVar5 + 1;
              } while (plVar5 != plVar1);
            }
          }
          if (*(int *)(param_1 + 900) == 0) {
            return 1;
          }
          if (*(int *)(param_2 + 0x1a68) == 0) {
            return 1;
          }
          plVar5 = *(longlong **)(param_1 + 0x120);
          plVar1 = plVar5 + *(int *)(param_1 + 0x128);
          if (plVar5 != plVar1) {
            plVar6 = plVar5;
            do {
              if (*plVar6 == *(longlong *)(param_2 + 0x1a60)) {
                uVar8 = 1;
                goto LAB_142730a61;
              }
              plVar6 = plVar6 + 1;
            } while (plVar6 != plVar1);
          }
          uVar8 = 0;
LAB_142730a61:
          uVar7 = (uint7)((ulonglong)plVar1 >> 8);
          if (plVar5 != plVar1) {
            do {
              if (*plVar5 == *(longlong *)(param_2 + 0x350)) {
                lVar4 = CONCAT71(uVar7,1);
                goto LAB_142730a81;
              }
              plVar5 = plVar5 + 1;
            } while (plVar5 != plVar1);
          }
          lVar4 = (ulonglong)uVar7 << 8;
LAB_142730a81:
          cVar2 = FUN_142757950(param_2,*(int *)(param_1 + 900),lVar4,uVar8);
          if (cVar2 != '\0') {
            return 1;
          }
          return 0;
        }
        if (*(int *)(param_2 + 0x1010) != *(int *)(param_2 + 0x103c)) {
          lVar4 = *(longlong *)(param_2 + 0x1048);
          if (*(longlong *)(param_2 + 0x1048) == 0) {
            lVar4 = param_2 + 0x1040;
          }
          iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_2 + 0x1050) - 1U &
                                   (longlong)*(int *)(param_1 + 0x138)) * 4);
          if (iVar3 != -1) {
            do {
              if (*(int *)(*(longlong *)(param_2 + 0x1008) + (longlong)iVar3 * 0xc) ==
                  *(int *)(param_1 + 0x138)) {
                if (iVar3 == -1) {
                  return 0;
                }
                goto LAB_142730994;
              }
              iVar3 = *(int *)(*(longlong *)(param_2 + 0x1008) + 4 + (longlong)iVar3 * 0xc);
            } while (iVar3 != -1);
          }
        }
      }
    }
    else if (((*(int *)(param_1 + 900) == 0) || (*(int *)(param_2 + 0x1a68) == 0)) ||
            (cVar2 = FUN_142757930(param_2), cVar2 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142730ad0 FUN_142730ad0 body=279 status=ok
// SIG undefined FUN_142730ad0(void)

undefined8 FUN_142730ad0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  uint7 uVar8;
  longlong lVar7;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (((uVar2 & 2) != 0) && (((uVar2 >> 0x16 & 1) == 0 || ((uVar2 >> 0x17 & 1) != 0)))) {
    if ((uVar2 & 0x20) == 0) {
LAB_142730b2b:
      if ((uVar2 & 0x40) != 0) {
        plVar4 = *(longlong **)(param_1 + 0x120);
        plVar1 = plVar4 + *(int *)(param_1 + 0x128);
        if (plVar4 != plVar1) {
          do {
            if (*plVar4 == *(longlong *)(param_2 + 0x350)) {
              return 0;
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != plVar1);
        }
      }
      if ((*(int *)(param_1 + 900) != 0) && (*(int *)(param_2 + 0x1a68) != 0)) {
        plVar4 = *(longlong **)(param_1 + 0x120);
        plVar1 = plVar4 + *(int *)(param_1 + 0x128);
        uVar8 = (uint7)(uint3)(uVar2 >> 8);
        if (plVar4 != plVar1) {
          plVar5 = plVar4;
          do {
            if (*plVar5 == *(longlong *)(param_2 + 0x1a60)) {
              lVar7 = CONCAT71(uVar8,1);
              goto LAB_142730ba6;
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
        }
        lVar7 = (ulonglong)uVar8 << 8;
LAB_142730ba6:
        uVar8 = (uint7)((ulonglong)plVar1 >> 8);
        if (plVar4 != plVar1) {
          do {
            if (*plVar4 == *(longlong *)(param_2 + 0x350)) {
              lVar6 = CONCAT71(uVar8,1);
              goto LAB_142730bc3;
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != plVar1);
        }
        lVar6 = (ulonglong)uVar8 << 8;
LAB_142730bc3:
        cVar3 = FUN_142757950(param_2,*(int *)(param_1 + 900),lVar6,lVar7);
        if (cVar3 == '\0') {
          return 0;
        }
      }
      return 1;
    }
    plVar4 = *(longlong **)(param_1 + 0x120);
    plVar1 = plVar4 + *(int *)(param_1 + 0x128);
    if (plVar4 != plVar1) {
      do {
        if (*plVar4 == *(longlong *)(param_2 + 0x350)) goto LAB_142730b2b;
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
  }
  return 0;
}



// FUNCTION 142730bf0 LoadState body=366 status=ok
// SIG undefined LoadState(void)

void Scalability::LoadState(undefined8 param_1)

{
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [12];
  longlong local_30;
  longlong local_20;
  
  InitScalabilitySystem();
  FUN_14271e120(local_58);
  FConfigCacheIni::GetFloat
            (DAT_1468b6148,L"ScalabilityGroups",L"sg.ResolutionQuality",local_58,param_1);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"ScalabilityGroups",L"sg.ViewDistanceQuality",local_54,param_1);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"ScalabilityGroups",L"sg.AntiAliasingQuality",local_50,param_1);
  FConfigCacheIni::GetInt(DAT_1468b6148,L"ScalabilityGroups",L"sg.ShadowQuality",local_4c,param_1);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"ScalabilityGroups",L"sg.PostProcessQuality",local_48,param_1);
  FConfigCacheIni::GetInt(DAT_1468b6148,L"ScalabilityGroups",L"sg.TextureQuality",local_44,param_1);
  FConfigCacheIni::GetInt(DAT_1468b6148,L"ScalabilityGroups",L"sg.EffectsQuality",local_40,param_1);
  FConfigCacheIni::GetInt(DAT_1468b6148,L"ScalabilityGroups",L"sg.FoliageQuality",local_3c,param_1);
  FUN_14273cb50(local_58,0);
  if (local_20 != 0) {
    FMemory::Free();
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142730d60 FUN_142730d60 body=345 status=ok
// SIG undefined FUN_142730d60(void)

void FUN_142730d60(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  int local_80;
  longlong local_68;
  undefined4 local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  int local_30;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    *(undefined4 *)(param_5 + 1) = 0;
    if (*(int *)((longlong)param_5 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5,0);
    }
    if (*(int *)(param_1 + 0x98) == 2) {
      local_a0 = param_1 + 0x20;
      local_98 = param_1 + 0x30;
      local_b0 = 0;
      local_8c = 0;
      local_88 = 1;
      local_b8 = param_3;
      if (*(int *)(param_4 + 8) == 0) {
        local_90 = *(undefined4 *)(param_1 + 0x38);
        local_80 = *(int *)(param_1 + 0x28) + -1;
        local_a8 = &local_b8;
        FUN_142735a00(param_1,&local_a8,param_2,param_5);
      }
      else {
        local_80 = *(int *)(param_1 + 0x28) + -1;
        local_40 = *(undefined4 *)(param_1 + 0x38);
        local_a8 = &local_68;
        local_60 = 0;
        local_90 = *(undefined4 *)(param_1 + 0x38);
        local_3c = 0;
        local_38 = 1;
        local_68 = param_4;
        local_58 = &local_b8;
        local_50 = local_a0;
        local_48 = local_98;
        local_30 = local_80;
        FUN_142730ec0(param_1,&local_58,&local_a8,param_2,param_5);
      }
    }
    iVar1 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
    }
    *(undefined2 *)(*param_5 + (longlong)iVar1 * 2) = 0;
  }
  return;
}



// FUNCTION 142730ec0 FUN_142730ec0 body=918 status=ok
// SIG undefined FUN_142730ec0(void)

void FUN_142730ec0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong *param_5)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint local_res18;
  int local_e8;
  uint local_e4;
  int local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  undefined8 *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  
  while( true ) {
    plVar7 = (longlong *)0x0;
    uVar1 = *(ushort *)
             (**(longlong **)*param_2 + (longlong)*(int *)((undefined8 *)*param_2 + 1) * 2);
    uVar2 = *(ushort *)
             (**(longlong **)*param_3 + (longlong)*(int *)((undefined8 *)*param_3 + 1) * 2);
    if (uVar1 == 0) break;
    if (uVar2 == 0) goto LAB_142731225;
    if (uVar1 < uVar2) {
      cVar3 = FRepHandleIterator::NextHandle(param_2);
      if (cVar3 == '\0') {
        return;
      }
      iVar6 = (int)param_5[1];
      lVar9 = (longlong)iVar6;
      *(int *)(param_5 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
LAB_142730fed:
      *(ushort *)(*param_5 + lVar9 * 2) = uVar1;
      iVar6 = (int)param_2[7];
      iVar10 = (int)param_2[6];
      plVar8 = plVar7;
      plVar7 = param_2;
    }
    else {
      if (uVar1 <= uVar2) {
        cVar3 = FRepHandleIterator::NextHandle(param_2);
        if (cVar3 == '\0') {
          return;
        }
        cVar3 = FRepHandleIterator::NextHandle(param_3);
        if (cVar3 == '\0') {
          return;
        }
        iVar6 = (int)param_5[1];
        lVar9 = (longlong)iVar6;
        *(int *)(param_5 + 1) = iVar6 + 1;
        plVar7 = param_3;
        if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        goto LAB_142730fed;
      }
      cVar3 = FRepHandleIterator::NextHandle(param_3);
      if (cVar3 == '\0') {
        return;
      }
      iVar6 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
      *(ushort *)(*param_5 + (longlong)iVar6 * 2) = uVar2;
      iVar10 = (int)param_3[6];
      iVar6 = (int)param_3[7];
      plVar8 = param_3;
    }
    local_90 = (longlong *)(param_1 + 0x20);
    lVar9 = (longlong)iVar10 * 0x20 + *local_90;
    if (*(char *)(lVar9 + 0x1c) == '\0') {
      local_98 = (undefined8 *)((longlong)iVar6 + *(int *)(lVar9 + 0xc) + param_4);
      if (plVar7 != (longlong *)0x0) {
        iVar6 = *(int *)(*plVar7 + 8);
        *(int *)(*plVar7 + 8) = iVar6 + 1;
        local_e4 = (uint)*(ushort *)(**(longlong **)*plVar7 + (longlong)iVar6 * 2);
        local_e0 = *(int *)((undefined8 *)*plVar7 + 1);
      }
      if (plVar8 != (longlong *)0x0) {
        iVar6 = *(int *)(*plVar8 + 8);
        *(int *)(*plVar8 + 8) = iVar6 + 1;
        local_res18 = (uint)*(ushort *)(**(longlong **)*plVar8 + (longlong)iVar6 * 2);
        local_e8 = *(int *)((undefined8 *)*plVar8 + 1);
      }
      iVar6 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
      if (plVar7 == (longlong *)0x0) {
        plVar4 = (longlong *)plVar8[2];
      }
      else {
        plVar4 = (longlong *)plVar7[2];
      }
      local_b4 = iVar10 + 1;
      local_c8 = *(longlong *)(*plVar4 + -8 + (ulonglong)*(ushort *)(lVar9 + 0x14) * 0x10);
      local_d0 = local_90;
      if (plVar7 == (longlong *)0x0) {
        lVar5 = *plVar8;
LAB_1427310e8:
        local_c0 = *(undefined4 *)(local_c8 + 8);
        local_bc = (uint)*(ushort *)(lVar9 + 10);
        local_b8 = *(undefined4 *)(local_98 + 1);
        local_b0 = *(ushort *)(lVar9 + 8) - 1;
        local_d8 = lVar5;
        FUN_142735a00(param_1,&local_d8,*local_98);
      }
      else {
        lVar5 = *plVar7;
        if (plVar8 == (longlong *)0x0) goto LAB_1427310e8;
        local_b8 = *(undefined4 *)(local_98 + 1);
        local_b0 = *(ushort *)(lVar9 + 8) - 1;
        local_70 = *(undefined4 *)(local_c8 + 8);
        local_d8 = *plVar8;
        local_bc = (uint)*(ushort *)(lVar9 + 10);
        local_c0 = *(undefined4 *)(local_c8 + 8);
        local_88 = lVar5;
        local_80 = local_90;
        local_78 = local_c8;
        local_6c = local_bc;
        local_68 = local_b8;
        local_64 = local_b4;
        local_60 = local_b0;
        FUN_142730ec0(param_1,&local_88,&local_d8,*local_98,param_5);
      }
      *(short *)(*param_5 + (longlong)iVar6 * 2) = ((short)param_5[1] - (short)iVar6) + -1;
      iVar6 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
      *(undefined2 *)(*param_5 + (longlong)iVar6 * 2) = 0;
      if (plVar8 != (longlong *)0x0) {
        *(uint *)(*plVar8 + 8) = local_e8 + local_res18;
        *(int *)(*plVar8 + 8) = *(int *)(*plVar8 + 8) + 1;
      }
      if (plVar7 != (longlong *)0x0) {
        *(uint *)(*plVar7 + 8) = local_e0 + local_e4;
        *(int *)(*plVar7 + 8) = *(int *)(*plVar7 + 8) + 1;
      }
    }
  }
  param_2 = param_3;
  if (uVar2 != 0) {
LAB_142731225:
    FUN_142735a00(param_1,param_2,param_4,param_5);
  }
  return;
}



// FUNCTION 142731260 FUN_142731260 body=21 status=ok
// SIG undefined FUN_142731260(void)

undefined1 FUN_142731260(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    return 0;
  }
  uVar1 = FRepLayout::MoveMappedObjectToUnmapped_r(param_1,param_2 + 0x10);
  return uVar1;
}



// FUNCTION 142731280 MoveMappedObjectToUnmapped_r body=858 status=ok
// SIG undefined MoveMappedObjectToUnmapped_r(void)

undefined8
FRepLayout::MoveMappedObjectToUnmapped_r(undefined8 param_1,longlong *param_2,int *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint *puVar14;
  int iVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined1 local_res20 [8];
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
  
  uVar3 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  uStack_a4 = 1;
  uVar17 = 0;
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar14 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar4 = *puVar14;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar15 = local_a8 + 1;
      bVar5 = (int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= local_a8;
      local_a8 = iVar15;
      if (bVar5) goto LAB_14273135b;
      uVar4 = puVar14[lVar8 + 1];
    }
    uStack_a4 = -uVar4 & uVar4;
    iVar15 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uStack_94 = (iStack_90 - iVar15) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_14273135b:
      uStack_94 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_2 + 5);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = puVar1;
  local_60 = param_2;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_94 = uVar4;
  if (uVar4 != uVar3) {
    puVar14 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar11 = puVar14[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar15 = (int)uVar4 >> 5;
    while (uVar11 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar15)
      goto LAB_142731421;
      uVar11 = puVar14[(longlong)iVar15 + 1];
      iVar15 = iVar15 + 1;
    }
    uVar11 = -uVar11 & uVar11;
    iVar15 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uStack_94 = (uVar9 - iVar15) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_142731421:
      uStack_94 = uVar3;
    }
  }
LAB_142731430:
  if ((uStack_6c == uStack_94) && (local_78 == puVar1)) {
    return uVar17;
  }
  lVar8 = (longlong)(int)uStack_6c * 0xd8 + *param_2;
  if (*(longlong *)(lVar8 + 0xc0) != 0) {
    cVar6 = MoveMappedObjectToUnmapped_r(param_1,*(longlong *)(lVar8 + 0xc0),param_3);
    if (cVar6 == '\0') goto LAB_1427315a1;
    goto LAB_14273159e;
  }
  if (*(int *)(lVar8 + 0x60) != *(int *)(lVar8 + 0x8c)) {
    iVar15 = *param_3;
    lVar12 = *(longlong *)(lVar8 + 0x98);
    if (*(longlong *)(lVar8 + 0x98) == 0) {
      lVar12 = lVar8 + 0x90;
    }
    iVar7 = *(int *)(lVar12 + ((longlong)*(int *)(lVar8 + 0xa0) - 1U & (longlong)iVar15) * 4);
    if (iVar7 != -1) {
      lVar12 = *(longlong *)(lVar8 + 0x58);
      do {
        if (*(int *)(lVar12 + (longlong)iVar7 * 0xc) == iVar15) {
          if (iVar7 != -1) {
            lVar16 = *(longlong *)(lVar8 + 0x98);
            if (*(longlong *)(lVar8 + 0x98) == 0) {
              lVar16 = lVar8 + 0x90;
            }
            uVar13 = (longlong)*(int *)(lVar8 + 0xa0) - 1;
            iVar7 = *(int *)(lVar16 + (uVar13 & (longlong)iVar15) * 4);
            goto joined_r0x000142731512;
          }
          break;
        }
        iVar7 = *(int *)(lVar12 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  goto LAB_1427315a1;
joined_r0x000142731512:
  if (iVar7 == -1) goto LAB_14273158b;
  lVar10 = (longlong)iVar7;
  if (*(int *)(lVar12 + lVar10 * 0xc) == iVar15) {
    uVar13 = (longlong)*(int *)(lVar12 + 8 + lVar10 * 0xc) & uVar13;
    puVar2 = (undefined4 *)(lVar16 + uVar13 * 4);
    iVar15 = *(int *)(lVar16 + uVar13 * 4);
    goto joined_r0x000142731554;
  }
  iVar7 = *(int *)(lVar12 + 4 + lVar10 * 0xc);
  goto joined_r0x000142731512;
joined_r0x000142731554:
  if (iVar15 == -1) goto LAB_14273157c;
  if (iVar15 == iVar7) {
    *puVar2 = *(undefined4 *)(lVar12 + lVar10 * 0xc + 4);
    goto LAB_14273157c;
  }
  lVar16 = (longlong)iVar15 * 3 + 1;
  iVar15 = *(int *)(lVar12 + lVar16 * 4);
  puVar2 = (undefined4 *)(lVar12 + lVar16 * 4);
  goto joined_r0x000142731554;
LAB_14273157c:
  TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(lVar8 + 0x58,iVar7,1);
LAB_14273158b:
  FUN_140ac3dd0(lVar8 + 8,local_res20,param_3,0);
LAB_14273159e:
  uVar17 = 1;
LAB_1427315a1:
  uStack_70 = uStack_70 & ~uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  goto LAB_142731430;
}



// FUNCTION 1427315e0 FUN_1427315e0 body=122 status=ok
// SIG undefined FUN_1427315e0(void)

ulonglong FUN_1427315e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong in_RAX;
  
  lVar1 = DAT_146b08f70;
  if (*(longlong *)(param_1 + 0x140) == 0) goto LAB_142731652;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DAT_1468c21c0) goto LAB_142731631;
    in_RAX = 4;
  }
  else {
LAB_142731631:
    in_RAX = 0;
  }
  if (0 < *(int *)(in_RAX + lVar1)) {
    return (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x140) + 0xf9);
  }
LAB_142731652:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142731660 NextHandle body=211 status=ok
// SIG undefined NextHandle(void)

ulonglong FRepHandleIterator::NextHandle(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  puVar3 = (undefined8 *)*param_1;
  uVar2 = *(ushort *)(*(longlong *)*puVar3 + (longlong)*(int *)(puVar3 + 1) * 2);
  plVar7 = (longlong *)(ulonglong)uVar2;
  *(uint *)((longlong)param_1 + 0x2c) = (uint)uVar2;
  if (uVar2 != 0) {
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    plVar7 = (longlong *)*param_1;
    plVar1 = plVar7 + 1;
    if ((-1 < (int)*plVar1) && (plVar7 = (longlong *)*plVar7, (int)*plVar1 < *(int *)(plVar7 + 1)))
    {
      iVar10 = *(int *)((longlong)param_1 + 0x2c) + -1;
      if ((*(int *)((longlong)param_1 + 0x1c) < 1) || ((int)param_1[3] < 1)) {
        iVar8 = 0;
      }
      else {
        uVar4 = (longlong)iVar10 / (longlong)(int)param_1[3];
        plVar7 = (longlong *)(uVar4 & 0xffffffff);
        iVar8 = (int)uVar4;
      }
      *(int *)((longlong)param_1 + 0x34) = iVar8;
      if (iVar8 < (int)param_1[4]) {
        uVar5 = (int)param_1[3] * iVar8;
        plVar7 = (longlong *)(ulonglong)uVar5;
        *(int *)(param_1 + 7) = *(int *)((longlong)param_1 + 0x1c) * iVar8;
        uVar5 = iVar10 - uVar5;
        if ((-1 < (int)uVar5) && (plVar7 = (longlong *)param_1[2], (int)uVar5 < (int)plVar7[1])) {
          plVar7 = (longlong *)*plVar7;
          iVar10 = (int)plVar7[(longlong)(int)uVar5 * 2];
          *(int *)(param_1 + 6) = iVar10;
          if ((*(int *)((longlong)param_1 + 0x24) <= iVar10) && (iVar10 < (int)param_1[5])) {
            lVar9 = (longlong)iVar10 * 0x20 + *(longlong *)param_1[1];
            uVar6 = *(ushort *)(lVar9 + 0x14) - 1;
            plVar7 = (longlong *)(ulonglong)uVar6;
            if ((uVar6 == uVar5) && (*(char *)(lVar9 + 0x1c) != '\x01')) {
              return CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
            }
          }
        }
      }
    }
  }
  return (ulonglong)plVar7 & 0xffffffffffffff00;
}



// FUNCTION 142731740 OnChangeAntiAliasingQuality body=144 status=ok
// SIG undefined OnChangeAntiAliasingQuality(void)

void Scalability::OnChangeAntiAliasingQuality(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar1 = (**(code **)(*DAT_146b09200 + 0x68))();
  iVar1 = iVar1 + -1;
  iVar2 = (**(code **)(*param_1 + 0x68))(param_1);
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1;
    if (iVar2 < iVar1) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 == iVar1) {
    puVar4 = &DAT_143f3eda8;
    if (DAT_1468e23e8 != 0) {
      puVar4 = DAT_1468e23e0;
    }
    ApplyCVarSettingsGroupFromIni(L"AntiAliasingQuality",L"Cine",puVar4);
    return;
  }
  puVar4 = &DAT_143f3eda8;
  if (DAT_1468e23e8 != 0) {
    puVar4 = DAT_1468e23e0;
  }
  ApplyCVarSettingsGroupFromIni(L"AntiAliasingQuality",iVar3,puVar4,0x1000000);
  return;
}



// FUNCTION 1427317d0 OnChangeEffectsQuality body=144 status=ok
// SIG undefined OnChangeEffectsQuality(void)

void Scalability::OnChangeEffectsQuality(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar1 = (**(code **)(*DAT_146b09260 + 0x68))();
  iVar1 = iVar1 + -1;
  iVar2 = (**(code **)(*param_1 + 0x68))(param_1);
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1;
    if (iVar2 < iVar1) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 == iVar1) {
    puVar4 = &DAT_143f3eda8;
    if (DAT_1468e23e8 != 0) {
      puVar4 = DAT_1468e23e0;
    }
    ApplyCVarSettingsGroupFromIni(L"EffectsQuality",L"Cine",puVar4);
    return;
  }
  puVar4 = &DAT_143f3eda8;
  if (DAT_1468e23e8 != 0) {
    puVar4 = DAT_1468e23e0;
  }
  ApplyCVarSettingsGroupFromIni(L"EffectsQuality",iVar3,puVar4,0x1000000);
  return;
}



// FUNCTION 142731860 OnChangeFoliageQuality body=144 status=ok
// SIG undefined OnChangeFoliageQuality(void)

void Scalability::OnChangeFoliageQuality(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar1 = (**(code **)(*DAT_146b09278 + 0x68))();
  iVar1 = iVar1 + -1;
  iVar2 = (**(code **)(*param_1 + 0x68))(param_1);
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1;
    if (iVar2 < iVar1) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 == iVar1) {
    puVar4 = &DAT_143f3eda8;
    if (DAT_1468e23e8 != 0) {
      puVar4 = DAT_1468e23e0;
    }
    ApplyCVarSettingsGroupFromIni(L"FoliageQuality",L"Cine",puVar4);
    return;
  }
  puVar4 = &DAT_143f3eda8;
  if (DAT_1468e23e8 != 0) {
    puVar4 = DAT_1468e23e0;
  }
  ApplyCVarSettingsGroupFromIni(L"FoliageQuality",iVar3,puVar4,0x1000000);
  return;
}



// FUNCTION 1427318f0 OnChangePostProcessQuality body=144 status=ok
// SIG undefined OnChangePostProcessQuality(void)

void Scalability::OnChangePostProcessQuality(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar1 = (**(code **)(*DAT_146b09230 + 0x68))();
  iVar1 = iVar1 + -1;
  iVar2 = (**(code **)(*param_1 + 0x68))(param_1);
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1;
    if (iVar2 < iVar1) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 == iVar1) {
    puVar4 = &DAT_143f3eda8;
    if (DAT_1468e23e8 != 0) {
      puVar4 = DAT_1468e23e0;
    }
    ApplyCVarSettingsGroupFromIni(L"PostProcessQuality",L"Cine",puVar4);
    return;
  }
  puVar4 = &DAT_143f3eda8;
  if (DAT_1468e23e8 != 0) {
    puVar4 = DAT_1468e23e0;
  }
  ApplyCVarSettingsGroupFromIni(L"PostProcessQuality",iVar3,puVar4,0x1000000);
  return;
}



// FUNCTION 142731980 FUN_142731980 body=274 status=ok
// SIG undefined FUN_142731980(void)

void FUN_142731980(longlong *param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  float fVar3;
  float fVar4;
  undefined2 *local_28;
  int local_20;
  
  fVar3 = (float)(**(code **)(*param_1 + 0x70))();
  fVar4 = 10.0;
  if ((fVar3 < 10.0) || (fVar4 = 100.0, 100.0 <= fVar3)) {
    fVar3 = fVar4;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b09408) {
    _Init_thread_header(&DAT_146b09408);
    if (DAT_146b09408 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146b09400 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ScreenPercentage");
      _Init_thread_footer(&DAT_146b09408);
    }
  }
  plVar1 = DAT_146b09400;
  FString::PrintfImpl(&local_28,&DAT_144050d74,(double)fVar3);
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x1000000);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142731aa0 OnChangeShadowQuality body=144 status=ok
// SIG undefined OnChangeShadowQuality(void)

void Scalability::OnChangeShadowQuality(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar1 = (**(code **)(*DAT_146b09218 + 0x68))();
  iVar1 = iVar1 + -1;
  iVar2 = (**(code **)(*param_1 + 0x68))(param_1);
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1;
    if (iVar2 < iVar1) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 == iVar1) {
    puVar4 = &DAT_143f3eda8;
    if (DAT_1468e23e8 != 0) {
      puVar4 = DAT_1468e23e0;
    }
    ApplyCVarSettingsGroupFromIni(L"ShadowQuality",L"Cine",puVar4);
    return;
  }
  puVar4 = &DAT_143f3eda8;
  if (DAT_1468e23e8 != 0) {
    puVar4 = DAT_1468e23e0;
  }
  ApplyCVarSettingsGroupFromIni(L"ShadowQuality",iVar3,puVar4,0x1000000);
  return;
}



// FUNCTION 142731b30 OnChangeTextureQuality body=144 status=ok
// SIG undefined OnChangeTextureQuality(void)

void Scalability::OnChangeTextureQuality(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar1 = (**(code **)(*DAT_146b09248 + 0x68))();
  iVar1 = iVar1 + -1;
  iVar2 = (**(code **)(*param_1 + 0x68))(param_1);
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1;
    if (iVar2 < iVar1) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 == iVar1) {
    puVar4 = &DAT_143f3eda8;
    if (DAT_1468e23e8 != 0) {
      puVar4 = DAT_1468e23e0;
    }
    ApplyCVarSettingsGroupFromIni(L"TextureQuality",L"Cine",puVar4);
    return;
  }
  puVar4 = &DAT_143f3eda8;
  if (DAT_1468e23e8 != 0) {
    puVar4 = DAT_1468e23e0;
  }
  ApplyCVarSettingsGroupFromIni(L"TextureQuality",iVar3,puVar4,0x1000000);
  return;
}



// FUNCTION 142731bc0 OnChangeViewDistanceQuality body=144 status=ok
// SIG undefined OnChangeViewDistanceQuality(void)

void Scalability::OnChangeViewDistanceQuality(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar1 = (**(code **)(*DAT_146b091e8 + 0x68))();
  iVar1 = iVar1 + -1;
  iVar2 = (**(code **)(*param_1 + 0x68))(param_1);
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1;
    if (iVar2 < iVar1) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 == iVar1) {
    puVar4 = &DAT_143f3eda8;
    if (DAT_1468e23e8 != 0) {
      puVar4 = DAT_1468e23e0;
    }
    ApplyCVarSettingsGroupFromIni(L"ViewDistanceQuality",L"Cine",puVar4);
    return;
  }
  puVar4 = &DAT_143f3eda8;
  if (DAT_1468e23e8 != 0) {
    puVar4 = DAT_1468e23e0;
  }
  ApplyCVarSettingsGroupFromIni(L"ViewDistanceQuality",iVar3,puVar4,0x1000000);
  return;
}



// FUNCTION 142731c50 OpenAcked body=8 status=ok
// SIG undefined OpenAcked(void)

void FRepLayout::OpenAcked(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x4b0) = 1;
  return;
}



// FUNCTION 142731c60 FUN_142731c60 body=735 status=ok
// SIG undefined FUN_142731c60(void)

void FUN_142731c60(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  DWORD DVar9;
  int iVar10;
  DWORD *pDVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((DAT_146ac3ac5 != '\0') ||
     (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 == '\0' && (DAT_1468c21ae != '\0')) &&
      (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)))) {
    pDVar11 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar12 = TlsGetValue(*pDVar11);
    plVar13 = (longlong *)0x0;
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)operator_new(0x18);
      if (plVar12 != (longlong *)0x0) {
        *plVar12 = 0;
        plVar12[1] = 0;
        *(undefined4 *)(plVar12 + 2) = 0;
        plVar13 = plVar12;
      }
      TlsSetValue(*pDVar11,plVar13);
      plVar12 = plVar13;
    }
    plVar13 = (longlong *)plVar12[1];
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)*plVar12;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar11 + 2);
        plVar12[1] = (longlong)plVar13;
        if (plVar13 == (longlong *)0x0) {
          puVar14 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar12[1] = (longlong)puVar14;
          lVar16 = 0x1f;
          do {
            puVar2 = puVar14 + 0x20;
            *puVar14 = puVar2;
            lVar16 = lVar16 + -1;
            puVar14 = puVar2;
          } while (lVar16 != 0);
          *puVar2 = 0;
          plVar13 = (longlong *)plVar12[1];
        }
        iVar10 = 0x20;
        *(undefined4 *)(plVar12 + 2) = 0x20;
      }
      else {
        iVar10 = 0x20;
        plVar12[1] = (longlong)plVar13;
        *(undefined4 *)(plVar12 + 2) = 0x20;
        *plVar12 = 0;
      }
    }
    else {
      iVar10 = (int)plVar12[2];
    }
    plVar12[1] = *plVar13;
    *(int *)(plVar12 + 2) = iVar10 + -1;
    *plVar13 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar13 + 1) = 0xff;
    local_70 = 0;
    local_60 = 0;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *(undefined1 *)(plVar13 + 0xd) = 0;
    *plVar13 = (longlong)&PTR_FUN_1451892c8;
    plVar13[0xe] = 0;
    lVar16 = *(longlong *)(param_1 + 0x30);
    plVar13[2] = *(longlong *)(param_1 + 0x28);
    plVar13[3] = lVar16;
    lVar16 = *(longlong *)(param_1 + 0x40);
    plVar13[4] = *(longlong *)(param_1 + 0x38);
    plVar13[5] = lVar16;
    lVar16 = *(longlong *)(param_1 + 0x50);
    plVar13[6] = *(longlong *)(param_1 + 0x48);
    plVar13[7] = lVar16;
    uVar4 = *(undefined4 *)(param_1 + 0x5c);
    uVar5 = *(undefined4 *)(param_1 + 0x60);
    uVar6 = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(plVar13 + 8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)((longlong)plVar13 + 0x44) = uVar4;
    *(undefined4 *)(plVar13 + 9) = uVar5;
    *(undefined4 *)((longlong)plVar13 + 0x4c) = uVar6;
    uVar4 = *(undefined4 *)(param_1 + 0x68);
    uVar5 = *(undefined4 *)(param_1 + 0x6c);
    uVar6 = *(undefined4 *)(param_1 + 0x70);
    uVar7 = *(undefined4 *)(param_1 + 0x74);
    plVar13[0xc] = param_1;
    *(undefined4 *)(plVar13 + 10) = uVar4;
    *(undefined4 *)((longlong)plVar13 + 0x54) = uVar5;
    *(undefined4 *)(plVar13 + 0xb) = uVar6;
    *(undefined4 *)((longlong)plVar13 + 0x5c) = uVar7;
    lVar16 = plVar13[0xe];
    piVar1 = (int *)(lVar16 + 0x48);
    if (lVar16 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res20 = lVar16;
    FUN_141d4ea20(uVar4,0,0xff,1);
    if (lVar16 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(local_res20);
      }
    }
    return;
  }
  local_60 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  local_70 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = *(undefined8 *)(param_1 + 0x40);
  local_50 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  local_40 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = *(undefined8 *)(param_1 + 0x60);
  local_30 = *(undefined4 *)(param_1 + 0x68);
  uStack_2c = *(undefined4 *)(param_1 + 0x6c);
  uStack_28 = *(undefined4 *)(param_1 + 0x70);
  uStack_24 = *(undefined4 *)(param_1 + 0x74);
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_78);
  lVar16 = DAT_146534ba0;
  iVar10 = 1;
  if (1 < DAT_146534ba8) {
    plVar13 = (longlong *)(DAT_146534ba0 + 0xa8);
    do {
      if (*plVar13 == param_1) {
        if (iVar10 != -1) {
          lVar15 = (longlong)iVar10 * 0x58;
          puVar14 = (undefined8 *)(lVar15 + DAT_146534ba0);
          *puVar14 = local_60;
          puVar14[1] = uStack_58;
          puVar14 = (undefined8 *)(lVar15 + 0x10 + lVar16);
          *puVar14 = local_70;
          puVar14[1] = uStack_68;
          puVar14 = (undefined8 *)(lVar15 + 0x20 + lVar16);
          *puVar14 = local_50;
          puVar14[1] = uStack_48;
          puVar3 = (undefined4 *)(lVar15 + 0x30 + lVar16);
          *puVar3 = (undefined4)local_40;
          puVar3[1] = local_40._4_4_;
          puVar3[2] = (undefined4)uStack_38;
          puVar3[3] = uStack_38._4_4_;
          puVar3 = (undefined4 *)(lVar15 + 0x40 + lVar16);
          *puVar3 = local_30;
          puVar3[1] = uStack_2c;
          puVar3[2] = uStack_28;
          puVar3[3] = uStack_24;
          plVar13 = DAT_146b09040;
          DAT_146b09040 = (longlong *)0x0;
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x30))();
          }
        }
        break;
      }
      iVar10 = iVar10 + 1;
      plVar13 = plVar13 + 0xb;
    } while (iVar10 < DAT_146534ba8);
  }
  QueryPerformanceCounter(&local_res18);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_78._0_4_);
  return;
}



// FUNCTION 142731f40 PostInitProperties body=115 status=ok
// SIG undefined PostInitProperties(void)

void URendererSettings::PostInitProperties(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  FUN_1417931d0();
  uVar1 = *(uint *)(param_1 + 0x58);
  iVar3 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  iVar2 = 0x20;
  cVar4 = '\0';
  if (uVar1 != 0) {
    iVar2 = 0x1f - iVar3;
  }
  uVar1 = uVar1 - 1;
  iVar3 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  if (uVar1 != 0) {
    cVar4 = '\x1f' - (char)iVar3;
  }
  iVar3 = 1 << (0x20U - cVar4 & ~(byte)((iVar2 << 0x1a) >> 0x1f) & 0x1f);
  if (0x3f < iVar3) {
    iVar2 = 0x400;
    if (iVar3 < 0x400) {
      iVar2 = iVar3;
    }
    *(int *)(param_1 + 0x58) = iVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = 0x40;
  return;
}



// FUNCTION 142731fc0 FUN_142731fc0 body=1459 status=ok
// SIG undefined FUN_142731fc0(void)

void FUN_142731fc0(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  uint local_res8;
  uint local_res10;
  longlong *local_58;
  uint local_50;
  uint local_4c;
  longlong *local_48;
  uint local_40;
  uint local_3c;
  
  FUN_142238870();
  if (param_1[0x8b] == 0) {
    return;
  }
  plVar13 = (longlong *)0x0;
  local_res8 = 0;
  local_4c = 0;
  local_res10 = 0;
  local_58 = (longlong *)0x0;
  plVar8 = plVar13;
  plVar11 = plVar13;
  plVar6 = plVar13;
  plVar4 = plVar13;
  if (0 < (int)param_1[0x91]) {
    do {
      uVar12 = 0;
      lVar9 = param_1[0x90];
      uVar16 = uVar12;
      uVar15 = (uint)plVar13;
      if (0 < *(int *)((longlong)plVar4 + lVar9 + 0x10)) {
        do {
          lVar5 = *(longlong *)(uVar12 + *(longlong *)((longlong)plVar4 + lVar9 + 8));
          if (lVar5 != 0) {
            iVar7 = (int)plVar8;
            local_50 = iVar7 + 1;
            if ((int)plVar11 < (int)local_50) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,plVar8);
              plVar11 = (longlong *)(ulonglong)local_4c;
              plVar6 = local_58;
            }
            plVar8 = (longlong *)(ulonglong)local_50;
            plVar6[iVar7] = lVar5;
          }
          uVar15 = (int)uVar16 + 1;
          uVar12 = uVar12 + 8;
          uVar16 = (ulonglong)uVar15;
        } while ((int)uVar15 < *(int *)((longlong)plVar4 + lVar9 + 0x10));
        local_res8 = (uint)plVar8;
        uVar15 = local_res10;
      }
      local_res10 = uVar15 + 1;
      plVar13 = (longlong *)(ulonglong)local_res10;
      plVar4 = plVar4 + 3;
    } while ((int)local_res10 < (int)param_1[0x91]);
  }
  plVar8 = local_58;
  plVar11 = (longlong *)0x0;
  if (DAT_146b09288 == 0) {
    plVar6 = (longlong *)param_1[2];
    lVar9 = plVar6[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar9 = plVar6[0x1f];
    }
    DAT_146b09290 = *(byte *)(lVar9 + 0x4b8) & 1;
    DAT_146b09294 = *(float *)(lVar9 + 0x4bc);
    DAT_146b09291 = (byte)(*(uint *)(lVar9 + 0x4b8) >> 1) & 1;
  }
  bVar2 = DAT_146b09291;
  uVar15 = *(uint *)(param_1 + 0x97);
  if (DAT_146b09292 != *(char *)((longlong)param_1 + 0x4c4)) {
    uVar15 = uVar15 | 1;
    *(uint *)(param_1 + 0x97) = uVar15;
  }
  uVar16 = (ulonglong)local_res8;
  if (bVar2 == ((byte)(uVar15 >> 1) & 1)) {
LAB_142732196:
    if (DAT_146b09290 == 0) goto LAB_1427321a3;
  }
  else {
    if (DAT_146b09290 != 0) {
      if (((uVar15 & 1) != 0) && (plVar6 = plVar8, uVar12 = uVar16, 0 < (int)local_res8)) {
        do {
          lVar9 = *plVar6;
          if (lVar9 != 0) {
            uVar3 = UMatineeInterface::GetPrivateStaticClass();
            plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar3);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x20))(plVar4,param_1);
            }
          }
          uVar12 = uVar12 - 1;
          plVar6 = plVar6 + 1;
        } while (uVar12 != 0);
      }
      goto LAB_142732196;
    }
LAB_1427321a3:
    if (((*(byte *)(param_1 + 0x97) & 1) != 0) ||
       (DAT_146b09294 != *(float *)((longlong)param_1 + 0x4bc))) {
      FUN_1424fb510(param_1);
      if ((*(byte *)(param_1 + 0x97) & 2) == 0) {
        (**(code **)(*param_1 + 0x6f0))(param_1);
      }
      plVar6 = plVar8;
      uVar12 = uVar16;
      if (0 < (int)local_res8) {
        do {
          lVar9 = *plVar6;
          lVar5 = FUN_1424efe60(param_1,lVar9);
          if (lVar9 != 0) {
            uVar15 = *(uint *)(lVar9 + 0xc);
            plVar4 = plVar11;
            if ((int)uVar15 < (int)DAT_1469e91c4) {
              uVar10 = uVar15 & 0xffff;
              if ((int)uVar15 < 0) {
                uVar15 = uVar15 + 0xffff;
                uVar10 = uVar10 - 0x10000;
              }
              plVar4 = (longlong *)
                       (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar15 >> 0x10) * 8) +
                       (longlong)(int)uVar10 * 0x18);
            }
            if ((((*(uint *)(plVar4 + 1) >> 0x1d & 1) == 0) && (lVar5 != 0)) &&
               (FUN_1422222c0(lVar9,param_1), (*(byte *)(param_1 + 0x97) & 1) != 0)) {
              uVar3 = UMatineeInterface::GetPrivateStaticClass();
              plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar3);
              if (plVar4 != (longlong *)0x0) {
                (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
              }
            }
          }
          uVar12 = uVar12 - 1;
          plVar6 = plVar6 + 1;
        } while (uVar12 != 0);
      }
    }
  }
  if (DAT_146b09294 == *(float *)((longlong)param_1 + 0x4bc)) goto LAB_1427324bc;
  uVar15 = *(uint *)(param_1 + 0x97);
  plVar13 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_3c = 0;
  plVar6 = plVar11;
  plVar4 = plVar11;
  if ((((uVar15 & 1) == 0) && (plVar6 = plVar13, DAT_146b09290 == 0)) && (param_1[0x8b] != 0)) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    UEngine::GetLocalPlayerIterator(DAT_146b17150,&local_58,uVar3);
    for (; -1 < (int)local_50; local_50 = local_50 + 1) {
      plVar6 = plVar11;
      plVar14 = local_58;
      plVar17 = plVar11;
      if (((int)local_58[1] <= (int)local_50) ||
         (plVar6 = plVar13, plVar17 = (longlong *)0x0,
         *(longlong *)(*local_58 + (longlong)(int)local_50 * 8) != 0)) goto LAB_142732333;
    }
    goto LAB_142732406;
  }
  goto LAB_14273240c;
LAB_142732333:
  while ((plVar11 = plVar6, -1 < (int)local_50 && ((int)local_50 < (int)plVar14[1]))) {
    lVar9 = *(longlong *)(*(longlong *)(*plVar14 + (longlong)(int)local_50 * 8) + 0x30);
    if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x528) != 0)) {
      iVar7 = (int)plVar11;
      local_40 = iVar7 + 1;
      if ((int)plVar17 < (int)local_40) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_48,plVar11);
        plVar17 = (longlong *)(ulonglong)local_3c;
        plVar14 = local_58;
        plVar4 = local_48;
      }
      plVar11 = (longlong *)(ulonglong)local_40;
      plVar6 = plVar4 + (longlong)iVar7 * 3;
      if (plVar6 != (longlong *)0x0) {
        lVar9 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*plVar14 + (longlong)(int)local_50 * 8) + 0x30) +
                 0x528);
        *plVar6 = lVar9;
        *(byte *)(plVar6 + 1) = (byte)(*(uint *)(lVar9 + 0x2c40) >> 2) & 1;
        *(undefined4 *)((longlong)plVar6 + 0xc) = *(undefined4 *)(lVar9 + 0x494);
        *(undefined4 *)(plVar6 + 2) = *(undefined4 *)(lVar9 + 0x2b98);
        plVar14 = local_58;
      }
    }
    do {
      local_50 = local_50 + 1;
      if ((int)local_50 < 0) goto LAB_142732406;
      plVar6 = plVar11;
    } while (((int)local_50 < (int)plVar14[1]) &&
            (*(longlong *)(*plVar14 + (longlong)(int)local_50 * 8) == 0));
  }
LAB_142732406:
  uVar15 = *(uint *)(param_1 + 0x97);
  plVar6 = plVar11;
LAB_14273240c:
  if ((((uVar15 & 1) == 0) || (DAT_146b09294 == -1.0)) ||
     (*(float *)(param_1 + 0x98) <= ABS(*(float *)((longlong)param_1 + 0x4bc) - DAT_146b09294))) {
    FUN_14250cc70(param_1,*(undefined4 *)((longlong)param_1 + 0x4bc),0,0);
  }
  else {
    *(float *)((longlong)param_1 + 0x4bc) = DAT_146b09294;
  }
  uVar15 = (uint)plVar6;
  plVar11 = plVar4;
  while (uVar15 != 0) {
    puVar1 = (uint *)(*plVar11 + 0x2c40);
    *puVar1 = *puVar1 ^ ((uint)*(byte *)(plVar11 + 1) << 2 ^ *(uint *)(*plVar11 + 0x2c40)) & 4;
    *(undefined4 *)(*plVar11 + 0x494) = *(undefined4 *)((longlong)plVar11 + 0xc);
    *(int *)(*plVar11 + 0x2b98) = (int)plVar11[2];
    uVar15 = (int)plVar6 - 1;
    plVar6 = (longlong *)(ulonglong)uVar15;
    plVar11 = plVar11 + 3;
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
LAB_1427324bc:
  if (((DAT_146b09290 != 0) || (DAT_146b09294 != *(float *)((longlong)param_1 + 0x4bc))) &&
     (((*(byte *)(param_1 + 0x97) & 1) == 0 &&
      (FUN_14250ae20(param_1), plVar11 = plVar8, 0 < (int)local_res8)))) {
    do {
      lVar9 = *plVar11;
      if ((lVar9 != 0) && (FUN_14223ab80(lVar9,param_1), DAT_146b09290 != 0)) {
        uVar3 = UMatineeInterface::GetPrivateStaticClass();
        plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar3);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x18))(plVar6,param_1);
        }
      }
      uVar16 = uVar16 - 1;
      plVar11 = plVar11 + 1;
    } while (uVar16 != 0);
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  return;
}



// FUNCTION 142732580 FUN_142732580 body=242 status=ok
// SIG undefined FUN_142732580(void)

void FUN_142732580(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  if ((*(int *)(param_1 + 0x98) == 2) &&
     (uVar3 = *(uint *)(param_2 + 0x490), (int)uVar3 < *(int *)(param_2 + 0x494))) {
    do {
      uVar2 = uVar3 & 0x8000001f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
      }
      lVar4 = (longlong)(int)uVar2 * 0x20;
      if (((*(int *)(lVar4 + 0x90 + param_2) == -1) &&
          (*(undefined8 *)(lVar4 + 0x90 + param_2) = *param_3, param_4 == '\0')) &&
         (*(char *)(param_2 + 0x4b0) == '\0')) {
        iVar1 = *(int *)(param_2 + 0x4a8);
        *(int *)(param_2 + 0x4a8) = iVar1 + 1;
        if (*(int *)(param_2 + 0x4ac) < iVar1 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_2 + 0x4a0,iVar1);
        }
        FRepChangedHistory::FRepChangedHistory
                  ((longlong)iVar1 * 0x20 + *(longlong *)(param_2 + 0x4a0),param_2 + 0x90 + lVar4);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_2 + 0x494));
  }
  return;
}



// FUNCTION 142732680 FUN_142732680 body=99 status=ok
// SIG undefined FUN_142732680(void)

void FUN_142732680(longlong param_1)

{
  FUN_1422396c0();
  DAT_146b09288 = *(longlong *)(param_1 + 0x458);
  if (*(longlong *)(param_1 + 0x458) != 0) {
    DAT_146b09294 = *(undefined4 *)(param_1 + 0x4bc);
    DAT_146b09290 = *(byte *)(param_1 + 0x4b8) & 1;
    DAT_146b09291 = (byte)(*(uint *)(param_1 + 0x4b8) >> 1) & 1;
    DAT_146b09292 = *(undefined1 *)(param_1 + 0x4c4);
  }
  return;
}



// FUNCTION 1427326f0 PrepReceivedArray body=625 status=ok
// SIG undefined PrepReceivedArray(void)

int * PrepReceivedArray(int param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                       int param_5,longlong param_6,longlong *param_7,int param_8,
                       undefined8 *param_9,undefined8 *param_10,longlong param_11)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *local_res18 [2];
  longlong local_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  plVar1 = param_7;
  piVar8 = (int *)0x0;
  piVar10 = piVar8;
  if (param_4 != (longlong *)0x0) {
    if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
      plVar5 = (longlong *)param_4[8];
      if ((longlong *)param_4[8] == (longlong *)0x0) {
        plVar5 = param_4 + 7;
      }
      iVar4 = *(int *)((longlong)plVar5 + ((longlong)(int)param_4[9] - 1U & (longlong)param_5) * 4);
      if (iVar4 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar4 * 0xd8 + *param_4);
          if (*piVar9 == param_5) {
            if (iVar4 != -1) goto LAB_142732797;
            break;
          }
          iVar4 = piVar9[0x34];
        } while (iVar4 != -1);
      }
    }
    piVar9 = piVar8;
LAB_142732797:
    piVar10 = piVar9 + 2;
    if (piVar9 == (int *)0x0) {
      piVar10 = piVar8;
    }
    if (piVar10 == (int *)0x0) {
      if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
        plVar5 = (longlong *)param_4[8];
        if ((longlong *)param_4[8] == (longlong *)0x0) {
          plVar5 = param_4 + 7;
        }
        iVar4 = *(int *)((longlong)plVar5 + ((longlong)(int)param_4[9] - 1U & (longlong)param_5) * 4
                        );
        if (iVar4 != -1) {
          do {
            piVar9 = (int *)((longlong)iVar4 * 0xd8 + *param_4);
            if (*piVar9 == param_5) {
              if ((iVar4 != -1) && (piVar9 != (int *)0x0)) goto LAB_142732846;
              break;
            }
            iVar4 = piVar9[0x34];
          } while (iVar4 != -1);
        }
      }
      local_res18[0] = &param_5;
      TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>(param_4,&param_7,local_res18,0);
      piVar9 = (int *)((longlong)(int)param_7 * 0xd8 + *param_4);
LAB_142732846:
      piVar10 = piVar9 + 2;
      piVar6 = (int *)operator_new(0x50);
      piVar7 = piVar8;
      if (piVar6 != (int *)0x0) {
        piVar6[0] = 0;
        piVar6[1] = 0;
        piVar6[2] = 0;
        piVar6[3] = 0;
        piVar6[8] = 0;
        piVar6[9] = 0;
        piVar6[10] = 0;
        piVar6[0xb] = 0;
        piVar6[0xc] = -1;
        piVar6[0xd] = 0;
        piVar6[0x10] = 0;
        piVar6[0x11] = 0;
        piVar6[0x12] = 0;
        piVar7 = piVar6;
      }
      *(int **)(piVar9 + 0x30) = piVar7;
      piVar9[0x32] = (uint)*(ushort *)((longlong)plVar1 + 0x16);
      piVar9[0x33] = param_8;
    }
  }
  lVar3 = param_11;
  if (((param_11 != 0) && (*(int *)(param_6 + 0x28) != -1)) &&
     ((*(int *)(param_3 + 1) != param_1 || (*(int *)(param_6 + 0x24) == 1)))) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_11);
  }
  local_48 = *(longlong *)(*plVar1 + 0x70);
  local_38 = *(undefined4 *)(local_48 + 0x34);
  local_40 = param_3;
  FUN_1404845d0(&local_48,param_1);
  puVar2 = param_9;
  *param_10 = *param_3;
  *param_9 = 0;
  if (lVar3 != 0) {
    local_48 = *(longlong *)(*plVar1 + 0x70);
    local_38 = *(undefined4 *)(local_48 + 0x34);
    local_40 = param_2;
    FUN_1404845d0(&local_48,param_1);
    *puVar2 = *param_2;
  }
  if (piVar10 != (int *)0x0) {
    piVar8 = *(int **)(piVar10 + 0x2e);
  }
  return piVar8;
}



// FUNCTION 142732970 PrintGroupInfo body=382 status=ok
// SIG undefined PrintGroupInfo(void)

void Scalability::PrintGroupInfo(short *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  int local_res10 [2];
  longlong local_38;
  ulonglong local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_38 = 0;
  lVar4 = -1;
  local_res10[0] = -1;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  local_30 = 0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    do {
      lVar4 = lVar4 + 1;
    } while (param_1[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_30 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,param_1,(longlong)(int)uVar3 * 2);
  }
  FUN_14272d120(&local_38,local_res10,&local_18);
  if (local_38 != 0) {
    FMemory::Free();
  }
  bVar6 = local_res10[0] != -1;
  if (bVar6) {
    local_28 = 0;
    local_20 = 0;
    FString::AppendInt(&local_28);
    plVar2 = &local_28;
  }
  else {
    local_38 = 0;
    local_30 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"(custom)",0x12);
    plVar2 = &local_38;
  }
  lVar4 = *plVar2;
  *plVar2 = 0;
  plVar2[1] = 0;
  if ((bVar6) && (local_28 != 0)) {
    FMemory::Free();
  }
  if ((!bVar6) && (local_38 != 0)) {
    FMemory::Free();
  }
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  plVar1 = local_18;
  plVar2 = local_18;
  for (iVar5 = (int)local_10; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 142732af0 FUN_142732af0 body=441 status=ok
// SIG undefined FUN_142732af0(void)

void FUN_142732af0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,undefined8 param_6,int param_7)

{
  ushort uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined2 local_res8 [4];
  
  plVar2 = (longlong *)param_1[3];
  lVar4 = 0;
  iVar8 = 0;
  local_res8[0] = 0;
  puVar3 = *(undefined2 **)plVar2[1];
  if ((undefined2 *)((undefined8 *)plVar2[1])[1] < puVar3 + 1) {
    (**(code **)(*plVar2 + 0x50))(plVar2,local_res8,2);
    if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar2,local_res8,2);
    }
  }
  else {
    local_res8[0] = *puVar3;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 2;
  }
  FUN_142735bc0(param_1);
  if ((*(byte *)((longlong)param_1 + 0x2c) & 1) != 0) {
    lVar4 = param_1[4] + 0x70;
  }
  uVar5 = PrepReceivedArray(local_res8[0],*(undefined8 *)(param_3 + 8),
                            *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_2 + 0x28),
                            param_7 - *(int *)(param_2 + 0x20),
                            (ulonglong)*(ushort *)(param_4 + 0x16) * 0x30 + *(longlong *)*param_1,
                            param_4,param_5,(longlong *)(param_3 + 0x18),
                            (longlong *)(param_3 + 0x20),lVar4);
  *(undefined8 *)(param_3 + 0x28) = uVar5;
  iVar7 = 0;
  uVar1 = *(ushort *)((longlong)param_1 + 0x14);
  iVar6 = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  if (*(longlong *)(param_3 + 0x10) != 0) {
    iVar6 = *(int *)(*(longlong *)(param_3 + 0x10) + 8);
  }
  if (*(longlong *)(param_3 + 8) != 0) {
    iVar8 = *(int *)(*(longlong *)(param_3 + 8) + 8);
  }
  if (0 < iVar6) {
    do {
      lVar9 = 0;
      lVar4 = (longlong)(int)((uint)*(ushort *)(param_4 + 10) * iVar7);
      if (iVar7 < iVar8) {
        lVar9 = *(longlong *)(param_3 + 0x18) + lVar4;
      }
      TRepLayoutCmdIterator<FReceivePropertiesImpl,FReceivedPropertiesStackState>::ProcessCmds_r
                (param_1,param_3,lVar9,*(longlong *)(param_3 + 0x20) + lVar4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  *(uint *)((longlong)param_1 + 0x14) = (uint)uVar1;
  FUN_142735bc0(param_1);
  return;
}



// FUNCTION 142732cb0 FUN_142732cb0 body=802 status=ok
// SIG undefined FUN_142732cb0(void)

void FUN_142732cb0(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  void *_Dst;
  void *_Src;
  float *pfVar6;
  longlong *plVar7;
  float *pfVar8;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined4 uVar9;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  plVar7 = (longlong *)
           ((ulonglong)*(ushort *)((longlong)param_3 + 0x16) * 0x30 + *(longlong *)*param_1);
  if ((param_1[3] != 0) && (*(int *)((longlong)plVar7 + 0x24) == 1)) goto LAB_142732f3a;
  pfVar8 = (float *)(*(int *)((longlong)param_3 + 0xc) + param_5);
  pfVar6 = (float *)((int)param_3[2] + param_6);
  switch(*(undefined1 *)((longlong)param_3 + 0x1c)) {
  case 2:
  case 3:
    cVar2 = (**(code **)(*(longlong *)*param_3 + 0x2b8))((longlong *)*param_3,pfVar6,pfVar8,0);
    break;
  case 4:
    if (*pfVar8 == *pfVar6) {
      return;
    }
    goto LAB_142732f3a;
  case 5:
  case 9:
    cVar2 = *pfVar6 == *pfVar8;
    break;
  case 6:
  case 0x15:
    cVar2 = *(char *)pfVar6 == *(char *)pfVar8;
    break;
  case 7:
  case 0x14:
    cVar2 = *(longlong *)pfVar6 == *(longlong *)pfVar8;
    break;
  case 8:
    plVar1 = (longlong *)*param_3;
    lVar3 = (**(code **)(*plVar1 + 0x378))(plVar1,pfVar6);
    lVar4 = (**(code **)(*plVar1 + 0x378))(plVar1,pfVar8);
    cVar2 = lVar3 == lVar4;
    break;
  case 10:
  case 0xb:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x12:
    if (((*pfVar8 == *pfVar6) && (pfVar8[1] == pfVar6[1])) && (pfVar8[2] == pfVar6[2])) {
      return;
    }
    goto LAB_142732f3a;
  case 0xc:
    cVar2 = FUN_14271c0f0(pfVar6,pfVar8);
    break;
  case 0xe:
    cVar2 = FUniqueNetIdWrapper::operator==(pfVar6,pfVar8);
    break;
  case 0xf:
    cVar2 = FUN_14271c120(pfVar6,pfVar8);
    break;
  case 0x13:
    cVar2 = UKismetStringLibrary::EqualEqual_StriStri(pfVar6,pfVar8);
    break;
  default:
    local_res8 = *(undefined8 *)(*param_3 + 0x18);
    FName::ToString(&local_res8,&local_48);
    puVar5 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar5 = local_48;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
               *(undefined1 *)((longlong)param_3 + 0x1c),puVar5);
    uVar9 = (undefined4)((ulonglong)puVar5 >> 0x20);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res18[0] = *(undefined8 *)(*param_3 + 0x18);
    FName::ToString(local_res18,&local_38);
    puVar5 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar5 = local_38;
    }
    FDebug::AssertFailed
              ((longlong)
               L"Failed to get finished soundwave: write operation currently still in progress." +
               0x9f,"Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
               CONCAT44(uVar9,(uint)*(byte *)((longlong)param_3 + 0x1c)),puVar5);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    goto LAB_142732f3a;
  case 0xfe:
    cVar2 = FUN_14247c3b0(pfVar6,pfVar8[1]);
    break;
  case 0xff:
    cVar2 = FUN_14247c3d0(pfVar6,pfVar8[1]);
  }
  if (cVar2 == '\0') {
LAB_142732f3a:
    *(undefined1 *)(param_1 + 4) = 1;
    if (((*(byte *)(param_1 + 2) & 1) != 0) &&
       ((*(uint *)((longlong)param_1 + 0x14) & *(uint *)((longlong)plVar7 + 0x2c)) != 0)) {
      _Src = (void *)(*(int *)((longlong)param_3 + 0xc) + param_5);
      _Dst = (void *)((int)param_3[2] + param_6);
      param_3 = (longlong *)*param_3;
      if (_Dst != _Src) {
        if ((*(uint *)(param_3 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*param_3 + 0x2e8))(param_3,_Dst,_Src,1);
        }
        else {
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)*(int *)((longlong)param_3 + 0x34));
        }
      }
      if ((param_1[3] != 0) && ((*(ulonglong *)(*plVar7 + 0x38) & 0x100000000) != 0)) {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1[3],plVar7);
      }
    }
  }
  return;
}



// FUNCTION 142733110 FUN_142733110 body=802 status=ok
// SIG undefined FUN_142733110(void)

void FUN_142733110(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  void *_Dst;
  void *_Src;
  float *pfVar6;
  longlong *plVar7;
  float *pfVar8;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined4 uVar9;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  plVar7 = (longlong *)
           ((ulonglong)*(ushort *)((longlong)param_3 + 0x16) * 0x30 + *(longlong *)*param_1);
  if ((param_1[3] != 0) && (*(int *)((longlong)plVar7 + 0x24) == 1)) goto LAB_14273339a;
  pfVar8 = (float *)((int)param_3[2] + param_5);
  pfVar6 = (float *)(*(int *)((longlong)param_3 + 0xc) + param_6);
  switch(*(undefined1 *)((longlong)param_3 + 0x1c)) {
  case 2:
  case 3:
    cVar2 = (**(code **)(*(longlong *)*param_3 + 0x2b8))((longlong *)*param_3,pfVar6,pfVar8,0);
    break;
  case 4:
    if (*pfVar8 == *pfVar6) {
      return;
    }
    goto LAB_14273339a;
  case 5:
  case 9:
    cVar2 = *pfVar6 == *pfVar8;
    break;
  case 6:
  case 0x15:
    cVar2 = *(char *)pfVar6 == *(char *)pfVar8;
    break;
  case 7:
  case 0x14:
    cVar2 = *(longlong *)pfVar6 == *(longlong *)pfVar8;
    break;
  case 8:
    plVar1 = (longlong *)*param_3;
    lVar3 = (**(code **)(*plVar1 + 0x378))(plVar1,pfVar6);
    lVar4 = (**(code **)(*plVar1 + 0x378))(plVar1,pfVar8);
    cVar2 = lVar3 == lVar4;
    break;
  case 10:
  case 0xb:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x12:
    if (((*pfVar8 == *pfVar6) && (pfVar8[1] == pfVar6[1])) && (pfVar8[2] == pfVar6[2])) {
      return;
    }
    goto LAB_14273339a;
  case 0xc:
    cVar2 = FUN_14271c0f0(pfVar6,pfVar8);
    break;
  case 0xe:
    cVar2 = FUniqueNetIdWrapper::operator==(pfVar6,pfVar8);
    break;
  case 0xf:
    cVar2 = FUN_14271c120(pfVar6,pfVar8);
    break;
  case 0x13:
    cVar2 = UKismetStringLibrary::EqualEqual_StriStri(pfVar6,pfVar8);
    break;
  default:
    local_res8 = *(undefined8 *)(*param_3 + 0x18);
    FName::ToString(&local_res8,&local_48);
    puVar5 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar5 = local_48;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
               *(undefined1 *)((longlong)param_3 + 0x1c),puVar5);
    uVar9 = (undefined4)((ulonglong)puVar5 >> 0x20);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res18[0] = *(undefined8 *)(*param_3 + 0x18);
    FName::ToString(local_res18,&local_38);
    puVar5 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar5 = local_38;
    }
    FDebug::AssertFailed
              ((longlong)
               L"Failed to get finished soundwave: write operation currently still in progress." +
               0x9f,"Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
               CONCAT44(uVar9,(uint)*(byte *)((longlong)param_3 + 0x1c)),puVar5);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    goto LAB_14273339a;
  case 0xfe:
    cVar2 = FUN_14247c3b0(pfVar6,pfVar8[1]);
    break;
  case 0xff:
    cVar2 = FUN_14247c3d0(pfVar6,pfVar8[1]);
  }
  if (cVar2 == '\0') {
LAB_14273339a:
    *(undefined1 *)(param_1 + 4) = 1;
    if (((*(byte *)(param_1 + 2) & 1) != 0) &&
       ((*(uint *)((longlong)param_1 + 0x14) & *(uint *)((longlong)plVar7 + 0x2c)) != 0)) {
      _Src = (void *)((int)param_3[2] + param_5);
      _Dst = (void *)(*(int *)((longlong)param_3 + 0xc) + param_6);
      param_3 = (longlong *)*param_3;
      if (_Dst != _Src) {
        if ((*(uint *)(param_3 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*param_3 + 0x2e8))(param_3,_Dst,_Src,1);
        }
        else {
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)*(int *)((longlong)param_3 + 0x34));
        }
      }
      if ((param_1[3] != 0) && ((*(ulonglong *)(*plVar7 + 0x38) & 0x100000000) != 0)) {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1[3],plVar7);
      }
    }
  }
  return;
}



// FUNCTION 142733570 FUN_142733570 body=801 status=ok
// SIG undefined FUN_142733570(void)

void FUN_142733570(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  float *pfVar1;
  float *pfVar2;
  void *_Src;
  void *_Dst;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined4 uVar9;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  
  plVar8 = (longlong *)
           ((ulonglong)*(ushort *)((longlong)param_3 + 0x16) * 0x30 + *(longlong *)*param_1);
  if ((param_1[3] != 0) && (*(int *)((longlong)plVar8 + 0x24) == 1)) goto LAB_142733804;
  pfVar1 = (float *)(*(int *)((longlong)param_3 + 0xc) + param_5);
  pfVar2 = (float *)(*(int *)((longlong)param_3 + 0xc) + param_6);
  switch(*(undefined1 *)((longlong)param_3 + 0x1c)) {
  case 2:
  case 3:
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x2b8))((longlong *)*param_3,pfVar2,pfVar1,0);
    break;
  case 4:
    if (*pfVar1 == *pfVar2) {
      return;
    }
    goto LAB_142733804;
  case 5:
  case 9:
    cVar4 = *pfVar2 == *pfVar1;
    break;
  case 6:
  case 0x15:
    cVar4 = *(char *)pfVar2 == *(char *)pfVar1;
    break;
  case 7:
  case 0x14:
    cVar4 = *(longlong *)pfVar2 == *(longlong *)pfVar1;
    break;
  case 8:
    plVar3 = (longlong *)*param_3;
    lVar5 = (**(code **)(*plVar3 + 0x378))(plVar3,pfVar2);
    lVar6 = (**(code **)(*plVar3 + 0x378))(plVar3,pfVar1);
    cVar4 = lVar5 == lVar6;
    break;
  case 10:
  case 0xb:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x12:
    if (((*pfVar1 == *pfVar2) && (pfVar1[1] == pfVar2[1])) && (pfVar1[2] == pfVar2[2])) {
      return;
    }
    goto LAB_142733804;
  case 0xc:
    cVar4 = FUN_14271c0f0(pfVar2,pfVar1);
    break;
  case 0xe:
    cVar4 = FUniqueNetIdWrapper::operator==(pfVar2,pfVar1);
    break;
  case 0xf:
    cVar4 = FUN_14271c120(pfVar2,pfVar1);
    break;
  case 0x13:
    cVar4 = UKismetStringLibrary::EqualEqual_StriStri(pfVar2,pfVar1);
    break;
  default:
    local_res8 = *(undefined8 *)(*param_3 + 0x18);
    FName::ToString(&local_res8,&local_58);
    puVar7 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar7 = local_58;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
               *(undefined1 *)((longlong)param_3 + 0x1c),puVar7);
    uVar9 = (undefined4)((ulonglong)puVar7 >> 0x20);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res18[0] = *(undefined8 *)(*param_3 + 0x18);
    FName::ToString(local_res18,&local_48);
    puVar7 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar7 = local_48;
    }
    FDebug::AssertFailed
              ((longlong)
               L"Failed to get finished soundwave: write operation currently still in progress." +
               0x9f,"Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
               CONCAT44(uVar9,(uint)*(byte *)((longlong)param_3 + 0x1c)),puVar7);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    goto LAB_142733804;
  case 0xfe:
    cVar4 = FUN_14247c3b0(pfVar2,pfVar1[1]);
    break;
  case 0xff:
    cVar4 = FUN_14247c3d0(pfVar2,pfVar1[1]);
  }
  if (cVar4 == '\0') {
LAB_142733804:
    *(undefined1 *)(param_1 + 4) = 1;
    if (((*(byte *)(param_1 + 2) & 1) != 0) &&
       ((*(uint *)((longlong)param_1 + 0x14) & *(uint *)((longlong)plVar8 + 0x2c)) != 0)) {
      plVar3 = (longlong *)*param_3;
      _Src = (void *)(*(int *)((longlong)param_3 + 0xc) + param_5);
      _Dst = (void *)(*(int *)((longlong)param_3 + 0xc) + param_6);
      if (_Dst != _Src) {
        if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*plVar3 + 0x2e8))(plVar3,_Dst,_Src,1);
        }
        else {
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)*(int *)((longlong)plVar3 + 0x34));
        }
      }
      if ((param_1[3] != 0) && ((*(ulonglong *)(*plVar8 + 0x38) & 0x100000000) != 0)) {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1[3],plVar8);
      }
    }
  }
  return;
}



// FUNCTION 1427339d0 FUN_1427339d0 body=1084 status=ok
// SIG undefined FUN_1427339d0(void)

void FUN_1427339d0(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  void *_Dst;
  uint uVar10;
  void *_Src;
  float *pfVar11;
  longlong *plVar12;
  float *pfVar13;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined4 uVar14;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  pfVar13 = (float *)(*(int *)((longlong)param_3 + 0xc) + param_5);
  pfVar11 = (float *)((int)param_3[2] + param_6);
  plVar12 = (longlong *)
            ((ulonglong)*(ushort *)((longlong)param_3 + 0x16) * 0x30 + *(longlong *)*param_1);
  switch(*(undefined1 *)((longlong)param_3 + 0x1c)) {
  case 2:
  case 3:
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x2b8))((longlong *)*param_3,pfVar11,pfVar13,0);
    break;
  case 4:
    if (*pfVar13 == *pfVar11) {
      return;
    }
    goto LAB_142733c2c;
  case 5:
  case 9:
    cVar4 = *pfVar11 == *pfVar13;
    break;
  case 6:
  case 0x15:
    cVar4 = *(char *)pfVar11 == *(char *)pfVar13;
    break;
  case 7:
  case 0x14:
    cVar4 = *(longlong *)pfVar11 == *(longlong *)pfVar13;
    break;
  case 8:
    plVar2 = (longlong *)*param_3;
    lVar8 = (**(code **)(*plVar2 + 0x378))(plVar2,pfVar11);
    lVar7 = (**(code **)(*plVar2 + 0x378))(plVar2,pfVar13);
    cVar4 = lVar8 == lVar7;
    break;
  case 10:
  case 0xb:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x12:
    if (((*pfVar13 == *pfVar11) && (pfVar13[1] == pfVar11[1])) && (pfVar13[2] == pfVar11[2])) {
      return;
    }
    goto LAB_142733c2c;
  case 0xc:
    cVar4 = FUN_14271c0f0(pfVar11,pfVar13);
    break;
  case 0xe:
    cVar4 = FUniqueNetIdWrapper::operator==(pfVar11,pfVar13);
    break;
  case 0xf:
    cVar4 = FUN_14271c120(pfVar11,pfVar13);
    break;
  case 0x13:
    cVar4 = UKismetStringLibrary::EqualEqual_StriStri(pfVar11,pfVar13);
    break;
  default:
    local_res8 = *(undefined8 *)(*param_3 + 0x18);
    FName::ToString(&local_res8,&local_48);
    puVar6 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar6 = local_48;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
               *(undefined1 *)((longlong)param_3 + 0x1c),puVar6);
    uVar14 = (undefined4)((ulonglong)puVar6 >> 0x20);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res18[0] = *(undefined8 *)(*param_3 + 0x18);
    FName::ToString(local_res18,&local_38);
    puVar6 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar6 = local_38;
    }
    FDebug::AssertFailed
              ((longlong)
               L"Failed to get finished soundwave: write operation currently still in progress." +
               0x9f,"Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
               CONCAT44(uVar14,(uint)*(byte *)((longlong)param_3 + 0x1c)),puVar6);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    goto LAB_142733c2c;
  case 0xfe:
    cVar4 = FUN_14247c3b0(pfVar11,pfVar13[1]);
    break;
  case 0xff:
    cVar4 = FUN_14247c3d0(pfVar11,pfVar13[1]);
  }
  if (cVar4 == '\0') {
LAB_142733c2c:
    *(undefined1 *)(param_1 + 4) = 1;
    if (((*(byte *)((longlong)plVar12 + 0x2c) & 1) != 0) &&
       (plVar2 = (longlong *)*param_3, (*(uint *)(plVar2 + 7) >> 0xd & 1) == 0)) {
      if ((*(char *)((longlong)param_3 + 0x1c) == '\b') && (plVar2 != (longlong *)0x0)) {
        if (plVar2[0xe] != 0) {
          lVar7 = FUN_1428dfc70();
          for (lVar8 = plVar2[0xe]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
            if (lVar8 == lVar7) {
              return;
            }
          }
          lVar7 = FUN_1428e7a40();
          for (lVar8 = plVar2[0xe]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
            if (lVar8 == lVar7) {
              return;
            }
          }
        }
        lVar8 = (**(code **)(*plVar2 + 0x378))(plVar2,*(int *)((longlong)param_3 + 0xc) + param_5);
        if (lVar8 != 0) {
          if ((*(uint *)(lVar8 + 8) & 0xc0000) == 0) {
            iVar1 = *(int *)(lVar8 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar10 = iVar1 >> 0x1f & 0xffff;
              uVar5 = iVar1 + uVar10;
              lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                      (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
            }
            else {
              lVar7 = 0;
            }
            if (((*(uint *)(lVar7 + 8) >> 0x19 & 1) == 0) &&
               (cVar4 = FUN_141790310(lVar8), cVar4 == '\0')) {
              return;
            }
          }
          plVar2 = (longlong *)param_1[3];
          if (plVar2 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar2;
            iVar1 = (int)plVar2[1];
            for (plVar9 = plVar3; plVar9 != plVar3 + iVar1; plVar9 = plVar9 + 1) {
              if (*plVar9 == lVar8) {
                if ((int)((longlong)plVar9 - (longlong)plVar3 >> 3) != -1) goto LAB_142733d82;
                break;
              }
            }
            *(int *)(plVar2 + 1) = iVar1 + 1;
            if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
            }
            *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = lVar8;
          }
        }
      }
LAB_142733d82:
      _Src = (void *)(*(int *)((longlong)param_3 + 0xc) + param_5);
      _Dst = (void *)((int)param_3[2] + param_6);
      param_3 = (longlong *)*param_3;
      if (_Dst != _Src) {
        if ((*(uint *)(param_3 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*param_3 + 0x2e8))(param_3,_Dst,_Src,1);
        }
        else {
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)*(int *)((longlong)param_3 + 0x34));
        }
      }
      if ((param_1[2] != 0) && ((*(ulonglong *)(*plVar12 + 0x38) & 0x100000000) != 0)) {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1[2],plVar12);
      }
    }
  }
  return;
}



// FUNCTION 142733f50 FUN_142733f50 body=1084 status=ok
// SIG undefined FUN_142733f50(void)

void FUN_142733f50(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  void *_Dst;
  uint uVar10;
  void *_Src;
  float *pfVar11;
  longlong *plVar12;
  float *pfVar13;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined4 uVar14;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  pfVar13 = (float *)((int)param_3[2] + param_5);
  pfVar11 = (float *)(*(int *)((longlong)param_3 + 0xc) + param_6);
  plVar12 = (longlong *)
            ((ulonglong)*(ushort *)((longlong)param_3 + 0x16) * 0x30 + *(longlong *)*param_1);
  switch(*(undefined1 *)((longlong)param_3 + 0x1c)) {
  case 2:
  case 3:
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x2b8))((longlong *)*param_3,pfVar11,pfVar13,0);
    break;
  case 4:
    if (*pfVar13 == *pfVar11) {
      return;
    }
    goto LAB_1427341ac;
  case 5:
  case 9:
    cVar4 = *pfVar11 == *pfVar13;
    break;
  case 6:
  case 0x15:
    cVar4 = *(char *)pfVar11 == *(char *)pfVar13;
    break;
  case 7:
  case 0x14:
    cVar4 = *(longlong *)pfVar11 == *(longlong *)pfVar13;
    break;
  case 8:
    plVar2 = (longlong *)*param_3;
    lVar8 = (**(code **)(*plVar2 + 0x378))(plVar2,pfVar11);
    lVar7 = (**(code **)(*plVar2 + 0x378))(plVar2,pfVar13);
    cVar4 = lVar8 == lVar7;
    break;
  case 10:
  case 0xb:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x12:
    if (((*pfVar13 == *pfVar11) && (pfVar13[1] == pfVar11[1])) && (pfVar13[2] == pfVar11[2])) {
      return;
    }
    goto LAB_1427341ac;
  case 0xc:
    cVar4 = FUN_14271c0f0(pfVar11,pfVar13);
    break;
  case 0xe:
    cVar4 = FUniqueNetIdWrapper::operator==(pfVar11,pfVar13);
    break;
  case 0xf:
    cVar4 = FUN_14271c120(pfVar11,pfVar13);
    break;
  case 0x13:
    cVar4 = UKismetStringLibrary::EqualEqual_StriStri(pfVar11,pfVar13);
    break;
  default:
    local_res8 = *(undefined8 *)(*param_3 + 0x18);
    FName::ToString(&local_res8,&local_48);
    puVar6 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar6 = local_48;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
               *(undefined1 *)((longlong)param_3 + 0x1c),puVar6);
    uVar14 = (undefined4)((ulonglong)puVar6 >> 0x20);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res18[0] = *(undefined8 *)(*param_3 + 0x18);
    FName::ToString(local_res18,&local_38);
    puVar6 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar6 = local_38;
    }
    FDebug::AssertFailed
              ((longlong)
               L"Failed to get finished soundwave: write operation currently still in progress." +
               0x9f,"Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
               CONCAT44(uVar14,(uint)*(byte *)((longlong)param_3 + 0x1c)),puVar6);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    goto LAB_1427341ac;
  case 0xfe:
    cVar4 = FUN_14247c3b0(pfVar11,pfVar13[1]);
    break;
  case 0xff:
    cVar4 = FUN_14247c3d0(pfVar11,pfVar13[1]);
  }
  if (cVar4 == '\0') {
LAB_1427341ac:
    *(undefined1 *)(param_1 + 4) = 1;
    if (((*(byte *)((longlong)plVar12 + 0x2c) & 1) != 0) &&
       (plVar2 = (longlong *)*param_3, (*(uint *)(plVar2 + 7) >> 0xd & 1) == 0)) {
      if ((*(char *)((longlong)param_3 + 0x1c) == '\b') && (plVar2 != (longlong *)0x0)) {
        if (plVar2[0xe] != 0) {
          lVar7 = FUN_1428dfc70();
          for (lVar8 = plVar2[0xe]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
            if (lVar8 == lVar7) {
              return;
            }
          }
          lVar7 = FUN_1428e7a40();
          for (lVar8 = plVar2[0xe]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
            if (lVar8 == lVar7) {
              return;
            }
          }
        }
        lVar8 = (**(code **)(*plVar2 + 0x378))(plVar2,(int)param_3[2] + param_5);
        if (lVar8 != 0) {
          if ((*(uint *)(lVar8 + 8) & 0xc0000) == 0) {
            iVar1 = *(int *)(lVar8 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar10 = iVar1 >> 0x1f & 0xffff;
              uVar5 = iVar1 + uVar10;
              lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                      (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
            }
            else {
              lVar7 = 0;
            }
            if (((*(uint *)(lVar7 + 8) >> 0x19 & 1) == 0) &&
               (cVar4 = FUN_141790310(lVar8), cVar4 == '\0')) {
              return;
            }
          }
          plVar2 = (longlong *)param_1[3];
          if (plVar2 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar2;
            iVar1 = (int)plVar2[1];
            for (plVar9 = plVar3; plVar9 != plVar3 + iVar1; plVar9 = plVar9 + 1) {
              if (*plVar9 == lVar8) {
                if ((int)((longlong)plVar9 - (longlong)plVar3 >> 3) != -1) goto LAB_142734302;
                break;
              }
            }
            *(int *)(plVar2 + 1) = iVar1 + 1;
            if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
            }
            *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = lVar8;
          }
        }
      }
LAB_142734302:
      _Src = (void *)((int)param_3[2] + param_5);
      _Dst = (void *)(*(int *)((longlong)param_3 + 0xc) + param_6);
      param_3 = (longlong *)*param_3;
      if (_Dst != _Src) {
        if ((*(uint *)(param_3 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*param_3 + 0x2e8))(param_3,_Dst,_Src,1);
        }
        else {
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)*(int *)((longlong)param_3 + 0x34));
        }
      }
      if ((param_1[2] != 0) && ((*(ulonglong *)(*plVar12 + 0x38) & 0x100000000) != 0)) {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1[2],plVar12);
      }
    }
  }
  return;
}



// FUNCTION 1427344d0 ProcessCmds_r body=446 status=ok
// SIG undefined ProcessCmds_r(void)

void TRepLayoutCmdIterator<TDiffPropertiesImpl<1,0>,TCmdIteratorBaseStackState<1,0>_>::ProcessCmds_r
               (undefined8 *param_1,int *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_68;
  undefined8 *local_60;
  undefined4 local_58;
  int local_50;
  int local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar2 = *param_2;
  if (iVar2 < param_2[1]) {
    do {
      plVar3 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)param_1[1]);
      if (*(char *)((longlong)plVar3 + 0x1c) == '\0') {
        if (param_4 == 0) {
          local_40 = (undefined8 *)0x0;
        }
        else {
          local_40 = (undefined8 *)((int)plVar3[2] + param_4);
        }
        if (param_3 == 0) {
          local_48 = (undefined8 *)0x0;
        }
        else {
          local_48 = (undefined8 *)(*(int *)((longlong)plVar3 + 0xc) + param_3);
        }
        if (local_40 == (undefined8 *)0x0) {
          local_30 = 0;
        }
        else {
          local_30 = *local_40;
        }
        if (local_48 == (undefined8 *)0x0) {
          local_38 = 0;
        }
        else {
          local_38 = *local_48;
        }
        local_50 = iVar2 + 1;
        local_4c = *(ushort *)(plVar3 + 1) - 1;
        if (*(int *)(local_40 + 1) == *(int *)(local_48 + 1)) {
LAB_1427345e1:
          local_30 = *local_40;
          iVar1 = 0;
          local_38 = *local_48;
          iVar2 = *(int *)(local_40 + 1);
          if (0 < iVar2) {
            do {
              ProcessCmds_r();
              iVar1 = iVar1 + 1;
            } while (iVar1 < iVar2);
          }
        }
        else {
          *(undefined1 *)(param_1 + 4) = 1;
          if (((*(byte *)(param_1 + 2) & 1) != 0) &&
             ((*(uint *)((longlong)param_1 + 0x14) &
              *(uint *)(*(longlong *)*param_1 + 0x2c +
                       (ulonglong)*(ushort *)((longlong)plVar3 + 0x16) * 0x30)) != 0)) {
            local_68 = *(longlong *)(*plVar3 + 0x70);
            local_58 = *(undefined4 *)(local_68 + 0x34);
            local_60 = local_48;
            FUN_1404845d0(&local_68);
            goto LAB_1427345e1;
          }
        }
        iVar2 = *(ushort *)(plVar3 + 1) - 1;
      }
      else {
        FUN_142732cb0();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2[1]);
  }
  return;
}



// FUNCTION 142734690 ProcessCmds_r body=446 status=ok
// SIG undefined ProcessCmds_r(void)

void TRepLayoutCmdIterator<TDiffPropertiesImpl<0,1>,TCmdIteratorBaseStackState<0,1>_>::ProcessCmds_r
               (undefined8 *param_1,int *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_68;
  undefined8 *local_60;
  undefined4 local_58;
  int local_50;
  int local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar2 = *param_2;
  if (iVar2 < param_2[1]) {
    do {
      plVar3 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)param_1[1]);
      if (*(char *)((longlong)plVar3 + 0x1c) == '\0') {
        if (param_4 == 0) {
          local_40 = (undefined8 *)0x0;
        }
        else {
          local_40 = (undefined8 *)(*(int *)((longlong)plVar3 + 0xc) + param_4);
        }
        if (param_3 == 0) {
          local_48 = (undefined8 *)0x0;
        }
        else {
          local_48 = (undefined8 *)((int)plVar3[2] + param_3);
        }
        if (local_40 == (undefined8 *)0x0) {
          local_30 = 0;
        }
        else {
          local_30 = *local_40;
        }
        if (local_48 == (undefined8 *)0x0) {
          local_38 = 0;
        }
        else {
          local_38 = *local_48;
        }
        local_50 = iVar2 + 1;
        local_4c = *(ushort *)(plVar3 + 1) - 1;
        if (*(int *)(local_40 + 1) == *(int *)(local_48 + 1)) {
LAB_1427347a1:
          local_30 = *local_40;
          iVar1 = 0;
          local_38 = *local_48;
          iVar2 = *(int *)(local_40 + 1);
          if (0 < iVar2) {
            do {
              ProcessCmds_r();
              iVar1 = iVar1 + 1;
            } while (iVar1 < iVar2);
          }
        }
        else {
          *(undefined1 *)(param_1 + 4) = 1;
          if (((*(byte *)(param_1 + 2) & 1) != 0) &&
             ((*(uint *)((longlong)param_1 + 0x14) &
              *(uint *)(*(longlong *)*param_1 + 0x2c +
                       (ulonglong)*(ushort *)((longlong)plVar3 + 0x16) * 0x30)) != 0)) {
            local_68 = *(longlong *)(*plVar3 + 0x70);
            local_58 = *(undefined4 *)(local_68 + 0x34);
            local_60 = local_48;
            FUN_1404845d0(&local_68);
            goto LAB_1427347a1;
          }
        }
        iVar2 = *(ushort *)(plVar3 + 1) - 1;
      }
      else {
        FUN_142733110();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2[1]);
  }
  return;
}



// FUNCTION 142734850 ProcessCmds_r body=446 status=ok
// SIG undefined ProcessCmds_r(void)

void TRepLayoutCmdIterator<TDiffPropertiesImpl<0,0>,TCmdIteratorBaseStackState<0,0>_>::ProcessCmds_r
               (undefined8 *param_1,int *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_68;
  undefined8 *local_60;
  undefined4 local_58;
  int local_50;
  int local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar2 = *param_2;
  if (iVar2 < param_2[1]) {
    do {
      plVar3 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)param_1[1]);
      if (*(char *)((longlong)plVar3 + 0x1c) == '\0') {
        if (param_4 == 0) {
          local_40 = (undefined8 *)0x0;
        }
        else {
          local_40 = (undefined8 *)(*(int *)((longlong)plVar3 + 0xc) + param_4);
        }
        if (param_3 == 0) {
          local_48 = (undefined8 *)0x0;
        }
        else {
          local_48 = (undefined8 *)(*(int *)((longlong)plVar3 + 0xc) + param_3);
        }
        if (local_40 == (undefined8 *)0x0) {
          local_30 = 0;
        }
        else {
          local_30 = *local_40;
        }
        if (local_48 == (undefined8 *)0x0) {
          local_38 = 0;
        }
        else {
          local_38 = *local_48;
        }
        local_50 = iVar2 + 1;
        local_4c = *(ushort *)(plVar3 + 1) - 1;
        if (*(int *)(local_40 + 1) == *(int *)(local_48 + 1)) {
LAB_142734961:
          local_30 = *local_40;
          iVar1 = 0;
          local_38 = *local_48;
          iVar2 = *(int *)(local_40 + 1);
          if (0 < iVar2) {
            do {
              ProcessCmds_r();
              iVar1 = iVar1 + 1;
            } while (iVar1 < iVar2);
          }
        }
        else {
          *(undefined1 *)(param_1 + 4) = 1;
          if (((*(byte *)(param_1 + 2) & 1) != 0) &&
             ((*(uint *)((longlong)param_1 + 0x14) &
              *(uint *)(*(longlong *)*param_1 + 0x2c +
                       (ulonglong)*(ushort *)((longlong)plVar3 + 0x16) * 0x30)) != 0)) {
            local_68 = *(longlong *)(*plVar3 + 0x70);
            local_58 = *(undefined4 *)(local_68 + 0x34);
            local_60 = local_48;
            FUN_1404845d0(&local_68);
            goto LAB_142734961;
          }
        }
        iVar2 = *(ushort *)(plVar3 + 1) - 1;
      }
      else {
        FUN_142733570();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2[1]);
  }
  return;
}



// FUNCTION 142734a10 ProcessCmds_r body=432 status=ok
// SIG undefined ProcessCmds_r(void)

void TRepLayoutCmdIterator<TDiffStablePropertiesImpl<1,0>,TCmdIteratorBaseStackState<1,0>_>::
     ProcessCmds_r(undefined8 *param_1,int *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_68;
  undefined8 *local_60;
  undefined4 local_58;
  int local_50;
  int local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar2 = *param_2;
  if (iVar2 < param_2[1]) {
    do {
      plVar3 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)param_1[1]);
      if (*(char *)((longlong)plVar3 + 0x1c) == '\0') {
        if (param_4 == 0) {
          local_40 = (undefined8 *)0x0;
        }
        else {
          local_40 = (undefined8 *)((int)plVar3[2] + param_4);
        }
        if (param_3 == 0) {
          local_48 = (undefined8 *)0x0;
        }
        else {
          local_48 = (undefined8 *)(*(int *)((longlong)plVar3 + 0xc) + param_3);
        }
        if (local_40 == (undefined8 *)0x0) {
          local_30 = 0;
        }
        else {
          local_30 = *local_40;
        }
        if (local_48 == (undefined8 *)0x0) {
          local_38 = 0;
        }
        else {
          local_38 = *local_48;
        }
        local_50 = iVar2 + 1;
        local_4c = *(ushort *)(plVar3 + 1) - 1;
        if (*(int *)(local_40 + 1) == *(int *)(local_48 + 1)) {
LAB_142734b13:
          local_30 = *local_40;
          iVar1 = 0;
          local_38 = *local_48;
          iVar2 = *(int *)(local_40 + 1);
          if (0 < iVar2) {
            do {
              ProcessCmds_r();
              iVar1 = iVar1 + 1;
            } while (iVar1 < iVar2);
          }
        }
        else {
          *(undefined1 *)(param_1 + 4) = 1;
          if ((*(byte *)(*(longlong *)*param_1 + 0x2c +
                        (ulonglong)*(ushort *)((longlong)plVar3 + 0x16) * 0x30) & 1) != 0) {
            local_68 = *(longlong *)(*plVar3 + 0x70);
            local_58 = *(undefined4 *)(local_68 + 0x34);
            local_60 = local_40;
            FUN_1404845d0(&local_68);
            goto LAB_142734b13;
          }
        }
        iVar2 = *(ushort *)(plVar3 + 1) - 1;
      }
      else {
        FUN_1427339d0();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2[1]);
  }
  return;
}



// FUNCTION 142734bc0 ProcessCmds_r body=432 status=ok
// SIG undefined ProcessCmds_r(void)

void TRepLayoutCmdIterator<TDiffStablePropertiesImpl<0,1>,TCmdIteratorBaseStackState<0,1>_>::
     ProcessCmds_r(undefined8 *param_1,int *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_68;
  undefined8 *local_60;
  undefined4 local_58;
  int local_50;
  int local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar2 = *param_2;
  if (iVar2 < param_2[1]) {
    do {
      plVar3 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)param_1[1]);
      if (*(char *)((longlong)plVar3 + 0x1c) == '\0') {
        if (param_4 == 0) {
          local_40 = (undefined8 *)0x0;
        }
        else {
          local_40 = (undefined8 *)(*(int *)((longlong)plVar3 + 0xc) + param_4);
        }
        if (param_3 == 0) {
          local_48 = (undefined8 *)0x0;
        }
        else {
          local_48 = (undefined8 *)((int)plVar3[2] + param_3);
        }
        if (local_40 == (undefined8 *)0x0) {
          local_30 = 0;
        }
        else {
          local_30 = *local_40;
        }
        if (local_48 == (undefined8 *)0x0) {
          local_38 = 0;
        }
        else {
          local_38 = *local_48;
        }
        local_50 = iVar2 + 1;
        local_4c = *(ushort *)(plVar3 + 1) - 1;
        if (*(int *)(local_40 + 1) == *(int *)(local_48 + 1)) {
LAB_142734cc3:
          local_30 = *local_40;
          iVar1 = 0;
          local_38 = *local_48;
          iVar2 = *(int *)(local_40 + 1);
          if (0 < iVar2) {
            do {
              ProcessCmds_r();
              iVar1 = iVar1 + 1;
            } while (iVar1 < iVar2);
          }
        }
        else {
          *(undefined1 *)(param_1 + 4) = 1;
          if ((*(byte *)(*(longlong *)*param_1 + 0x2c +
                        (ulonglong)*(ushort *)((longlong)plVar3 + 0x16) * 0x30) & 1) != 0) {
            local_68 = *(longlong *)(*plVar3 + 0x70);
            local_58 = *(undefined4 *)(local_68 + 0x34);
            local_60 = local_40;
            FUN_1404845d0(&local_68);
            goto LAB_142734cc3;
          }
        }
        iVar2 = *(ushort *)(plVar3 + 1) - 1;
      }
      else {
        FUN_142733f50();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2[1]);
  }
  return;
}



// FUNCTION 142734d70 ProcessCmds_r body=436 status=ok
// SIG undefined ProcessCmds_r(void)

void TRepLayoutCmdIterator<FReceivePropertiesImpl,FReceivedPropertiesStackState>::ProcessCmds_r
               (undefined8 *param_1,int *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  int local_48;
  int local_44;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  iVar5 = *param_2;
  if (iVar5 < param_2[1]) {
    puVar6 = (undefined8 *)0x0;
    do {
      iVar2 = *(int *)((longlong)param_1 + 0x14) + 1;
      lVar4 = (longlong)iVar5 * 0x20 + *(longlong *)param_1[1];
      cVar1 = *(char *)(lVar4 + 0x1c);
      *(int *)((longlong)param_1 + 0x14) = iVar2;
      if (cVar1 == '\0') {
        if (iVar2 == *(int *)(param_1 + 2)) {
          local_38 = puVar6;
          if (param_4 != 0) {
            local_38 = (undefined8 *)(*(int *)(lVar4 + 0xc) + param_4);
          }
          local_40 = puVar6;
          if (param_3 != 0) {
            local_40 = (undefined8 *)(*(int *)(lVar4 + 0x10) + param_3);
          }
          local_28 = puVar6;
          if (local_38 != (undefined8 *)0x0) {
            local_28 = (undefined8 *)*local_38;
          }
          local_30 = puVar6;
          if (local_40 != (undefined8 *)0x0) {
            local_30 = (undefined8 *)*local_40;
          }
          local_48 = iVar5 + 1;
          local_44 = *(ushort *)(lVar4 + 8) - 1;
          local_20 = 0;
          FUN_142732af0(param_1,param_2,&local_48,lVar4,iVar5,local_40,local_38);
        }
        iVar5 = *(ushort *)(lVar4 + 8) - 1;
      }
      else if (iVar2 == *(int *)(param_1 + 2)) {
        puVar3 = puVar6;
        if ((*(byte *)((longlong)param_1 + 0x2c) & 1) != 0) {
          puVar3 = (undefined8 *)(param_1[4] + 0x70);
        }
        cVar1 = FUN_142736a00(param_1[3],*(undefined8 *)(param_2 + 10),(int)param_4 - param_2[8],
                              param_3,param_4,puVar3,*param_1,(longlong *)param_1[1],iVar5,
                              *(undefined1 *)(param_1 + 5),(longlong)param_1 + 0x2a,
                              (byte)(*(uint *)((longlong)param_1 + 0x2c) >> 1) & 1);
        if (cVar1 != '\0') {
          *(undefined1 *)((longlong)param_1 + 0x29) = 1;
        }
        FUN_142735bc0(param_1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2[1]);
  }
  return;
}



// FUNCTION 142734f30 FUN_142734f30 body=2766 status=ok
// SIG undefined FUN_142734f30(void)

void FUN_142734f30(undefined8 param_1)

{
  wchar_t _C;
  longlong *plVar1;
  char cVar2;
  wint_t wVar3;
  wint_t wVar4;
  longlong **pplVar5;
  wint_t *pwVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  wchar_t *pwVar12;
  byte bVar13;
  bool bVar14;
  undefined8 local_res8;
  int local_res18 [4];
  longlong *local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  longlong local_b0;
  longlong local_a0;
  undefined8 local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_res18[0] = 0;
  local_e8 = (wchar_t *)0x0;
  local_e0 = 0;
  local_res8 = param_1;
  cVar2 = FParse::Token(&local_res8,&local_e8,1);
  if (cVar2 != '\0') {
    pwVar6 = &DAT_145183068;
    pwVar12 = L"";
    if ((int)local_e0 != 0) {
      pwVar12 = local_e8;
    }
    do {
      wVar3 = *(wint_t *)((longlong)(pwVar12 + -0xa28c1834) + (longlong)pwVar6);
      if ((wVar3 == 0) && (*pwVar6 == 0)) goto LAB_142734fdb;
      if (wVar3 != *pwVar6) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar6);
        if (wVar3 != wVar4) goto LAB_142734fd1;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
  goto LAB_142735338;
LAB_142734fd1:
  if (wVar3 != wVar4) {
    pwVar7 = L"bench";
    pwVar12 = L"";
    if ((int)local_e0 != 0) {
      pwVar12 = local_e8;
    }
    do {
      _C = *(wchar_t *)((longlong)(pwVar12 + -0xa28c183c) + (longlong)pwVar7);
      if ((_C == L'\0') && (*pwVar7 == L'\0')) goto LAB_142735072;
      if (_C != *pwVar7) {
        wVar3 = towlower(_C);
        wVar4 = towlower(*pwVar7);
        if (wVar3 != wVar4) goto LAB_142735064;
      }
      pwVar7 = pwVar7 + 1;
    } while( true );
  }
LAB_142734fdb:
  FUN_1427234f0(&local_d8,10,0x3f800000,0x3f800000);
  FUN_14273cb50(&local_d8,0);
  Scalability::SaveState(&DAT_1468e2420);
  FUN_14273cec0(local_90);
  goto LAB_14273531c;
LAB_142735064:
  if (wVar3 != wVar4) {
    pwVar6 = &DAT_145183508;
    pwVar12 = L"";
    if ((int)local_e0 != 0) {
      pwVar12 = local_e8;
    }
    do {
      wVar3 = *(wint_t *)((longlong)(pwVar12 + -0xa28c1a84) + (longlong)pwVar6);
      if ((wVar3 == 0) && (*pwVar6 == 0)) goto LAB_1427351bb;
      if (wVar3 != *pwVar6) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar6);
        if (wVar3 != wVar4) goto LAB_1427351b1;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
LAB_142735072:
  local_88 = -1;
  lStack_80 = -1;
  local_78 = -1;
  uStack_70 = 0xffffffffffffffff;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if ((((DAT_146ab6358 != (longlong *)0x0) &&
       ((**(code **)(*DAT_146ab6358 + 0x1f0))(DAT_146ab6358,&local_88), -1 < local_88)) &&
      (-1 < lStack_80)) && (-1 < local_78)) {
    local_108 = (longlong *)0x0;
    local_100 = 0;
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    FUN_1416a0990(&local_108,&local_f8);
    FUN_1427234f0(&local_d8,10,0x3f800000,0x3f800000);
    if (local_a0 != 0) {
      FMemory::Free();
    }
    if (local_b0 != 0) {
      FMemory::Free();
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  goto LAB_1427359be;
LAB_1427352c8:
  cVar2 = FString::IsNumeric(&local_e8);
  if (cVar2 == '\0') goto LAB_1427359be;
  FUN_14271e120(&local_d8);
  pwVar12 = L"";
  if ((int)local_e0 != 0) {
    pwVar12 = local_e8;
  }
  iVar11 = _wtoi(pwVar12);
  Scalability::FQualityLevels::SetFromSingleQualityLevel(&local_d8,iVar11);
LAB_142735304:
  FUN_14273cb50(&local_d8,0);
  Scalability::SaveState(&DAT_1468e2420);
  goto LAB_14273531c;
LAB_1427351b1:
  if (wVar3 != wVar4) {
    pwVar6 = &DAT_145183518;
    pwVar12 = L"";
    if ((int)local_e0 != 0) {
      pwVar12 = local_e8;
    }
    do {
      wVar3 = *(wint_t *)((longlong)(pwVar12 + -0xa28c1a8c) + (longlong)pwVar6);
      if ((wVar3 == 0) && (*pwVar6 == 0)) {
        FUN_14271e120(&local_d8);
        local_d8 = Scalability::GetRenderScaleLevelFromQualityLevel(0x7fffffff,0);
        local_d4 = (**(code **)(*DAT_146b091e8 + 0x68))();
        local_d4 = local_d4 + -1;
        local_d0 = (**(code **)(*DAT_146b09200 + 0x68))();
        local_d0 = local_d0 + -1;
        local_cc = (**(code **)(*DAT_146b09218 + 0x68))();
        local_cc = local_cc + -1;
        local_c8 = (**(code **)(*DAT_146b09230 + 0x68))();
        local_c8 = local_c8 + -1;
        local_c4 = (**(code **)(*DAT_146b09248 + 0x68))();
        local_c4 = local_c4 + -1;
        local_c0 = (**(code **)(*DAT_146b09260 + 0x68))();
        local_c0 = local_c0 + -1;
        local_bc = (**(code **)(*DAT_146b09278 + 0x68))();
        local_bc = local_bc + -1;
        goto LAB_142735304;
      }
      if (wVar3 != *pwVar6) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar6);
        if (wVar3 != wVar4) goto LAB_1427352c8;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
LAB_1427351bb:
  Scalability::GetQualityLevels(&local_d8);
  FUN_14273cb50(&local_d8,0);
LAB_14273531c:
  if (local_a0 != 0) {
    FMemory::Free();
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
LAB_142735338:
  local_res18[0] = -1;
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  local_118 = (longlong *)0x0;
  local_110 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"ResolutionQuality",0x24);
  FUN_14272d120(&local_118,local_res18,&local_f8);
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_res18[0] == -1) {
    local_118 = (longlong *)0x0;
    local_110 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"(custom)",0x12);
    pplVar5 = &local_118;
    bVar13 = 4;
  }
  else {
    local_108 = (longlong *)0x0;
    local_100 = 0;
    FString::AppendInt(&local_108);
    pplVar5 = &local_108;
    bVar13 = 8;
  }
  plVar8 = *pplVar5;
  *pplVar5 = (longlong *)0x0;
  pplVar5[1] = (longlong *)0x0;
  if (((bVar13 & 8) != 0) && (bVar13 = bVar13 & 0xf7, local_108 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if (((bVar13 & 4) != 0) && (bVar13 = bVar13 & 0xfb, local_118 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  plVar1 = local_f8;
  plVar8 = local_f8;
  for (iVar11 = (int)local_f0; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  local_res18[0] = -1;
  local_108 = (longlong *)0x0;
  local_100 = 0;
  local_118 = (longlong *)0x0;
  local_110 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"ViewDistanceQuality",0x28);
  FUN_14272d120(&local_118,local_res18,&local_108);
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_res18[0] == -1) {
    local_118 = (longlong *)0x0;
    local_110 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"(custom)",0x12);
    pplVar5 = &local_118;
    bVar9 = 0x10;
  }
  else {
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    FString::AppendInt(&local_f8);
    pplVar5 = &local_f8;
    bVar9 = 0x20;
  }
  plVar8 = *pplVar5;
  bVar10 = bVar9 | bVar13;
  *pplVar5 = (longlong *)0x0;
  pplVar5[1] = (longlong *)0x0;
  if (((bVar9 & 0x20) != 0) && (bVar10 = bVar9 & 0xdf | bVar13, local_f8 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if (((bVar10 & 0x10) != 0) && (bVar10 = bVar10 & 0xef, local_118 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  plVar1 = local_108;
  plVar8 = local_108;
  for (iVar11 = (int)local_100; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  local_res18[0] = -1;
  local_108 = (longlong *)0x0;
  local_100 = 0;
  local_118 = (longlong *)0x0;
  local_110 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"AntiAliasingQuality",0x28);
  FUN_14272d120(&local_118,local_res18,&local_108);
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_res18[0] == -1) {
    local_118 = (longlong *)0x0;
    local_110 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"(custom)",0x12);
    pplVar5 = &local_118;
    bVar13 = 0x40;
  }
  else {
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    FString::AppendInt(&local_f8);
    pplVar5 = &local_f8;
    bVar13 = 0x80;
  }
  plVar8 = *pplVar5;
  bVar10 = bVar13 | bVar10;
  *pplVar5 = (longlong *)0x0;
  pplVar5[1] = (longlong *)0x0;
  if (((char)bVar10 < '\0') && (bVar10 = bVar13 & 0x7f, local_f8 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if (((bVar10 & 0x40) != 0) && (local_118 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  plVar1 = local_108;
  plVar8 = local_108;
  for (iVar11 = (int)local_100; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  local_res18[0] = -1;
  local_108 = (longlong *)0x0;
  local_100 = 0;
  local_118 = (longlong *)0x0;
  local_110 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"ShadowQuality",0x1c);
  FUN_14272d120(&local_118,local_res18,&local_108);
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  bVar14 = local_res18[0] != -1;
  if (bVar14) {
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    FString::AppendInt(&local_f8);
    pplVar5 = &local_f8;
  }
  else {
    local_118 = (longlong *)0x0;
    local_110 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"(custom)",0x12);
    pplVar5 = &local_118;
  }
  plVar8 = *pplVar5;
  *pplVar5 = (longlong *)0x0;
  pplVar5[1] = (longlong *)0x0;
  if ((bVar14) && (local_f8 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if ((!bVar14) && (local_118 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  plVar1 = local_108;
  plVar8 = local_108;
  for (iVar11 = (int)local_100; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  local_res18[0] = -1;
  local_108 = (longlong *)0x0;
  local_100 = 0;
  local_118 = (longlong *)0x0;
  local_110 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"PostProcessQuality",0x26);
  FUN_14272d120(&local_118,local_res18,&local_108);
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  bVar14 = local_res18[0] != -1;
  if (bVar14) {
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    FString::AppendInt(&local_f8);
    pplVar5 = &local_f8;
  }
  else {
    local_118 = (longlong *)0x0;
    local_110 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"(custom)",0x12);
    pplVar5 = &local_118;
  }
  plVar8 = *pplVar5;
  *pplVar5 = (longlong *)0x0;
  pplVar5[1] = (longlong *)0x0;
  if ((bVar14) && (local_f8 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if ((!bVar14) && (local_118 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  plVar1 = local_108;
  plVar8 = local_108;
  for (iVar11 = (int)local_100; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  Scalability::PrintGroupInfo(L"TextureQuality",0);
  Scalability::PrintGroupInfo(L"EffectsQuality",0);
  Scalability::PrintGroupInfo(L"FoliageQuality",0);
LAB_1427359be:
  if (local_e8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142735a00 FUN_142735a00 body=445 status=ok
// SIG undefined FUN_142735a00(void)

void FUN_142735a00(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  
  cVar6 = FRepHandleIterator::NextHandle(param_2);
  while (cVar6 != '\0') {
    iVar7 = (int)param_4[1];
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x2c);
    *(int *)(param_4 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
    }
    *(undefined2 *)(*param_4 + (longlong)iVar7 * 2) = uVar1;
    lVar5 = param_2[6];
    lVar8 = (longlong)(int)lVar5 * 0x20 + *(longlong *)(param_1 + 0x20);
    if (*(char *)(lVar8 + 0x1c) == '\0') {
      puVar9 = (undefined8 *)((longlong)(int)param_2[7] + *(int *)(lVar8 + 0xc) + param_3);
      iVar7 = *(int *)(*param_2 + 8);
      *(int *)(*param_2 + 8) = iVar7 + 1;
      iVar3 = (int)param_4[1];
      iVar4 = *(int *)((undefined8 *)*param_2 + 1);
      uVar2 = *(ushort *)(**(longlong **)*param_2 + (longlong)iVar7 * 2);
      *(int *)(param_4 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_4 + 0xc) < iVar3 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar3);
      }
      local_78 = *param_2;
      local_68 = *(longlong *)
                  (*(longlong *)param_2[2] + -8 + (ulonglong)*(ushort *)(lVar8 + 0x14) * 0x10);
      local_58 = *(undefined4 *)(puVar9 + 1);
      local_70 = param_1 + 0x20;
      local_60 = *(undefined4 *)(local_68 + 8);
      local_5c = (uint)*(ushort *)(lVar8 + 10);
      local_54 = (int)lVar5 + 1;
      local_50 = *(ushort *)(lVar8 + 8) - 1;
      FUN_142735a00(param_1,&local_78,*puVar9,param_4);
      *(short *)(*param_4 + (longlong)iVar3 * 2) = ((short)param_4[1] - (short)iVar3) + -1;
      lVar5 = param_4[1];
      iVar7 = (int)lVar5 + 1;
      *(int *)(param_4 + 1) = iVar7;
      if (*(int *)((longlong)param_4 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4);
      }
      *(undefined2 *)(*param_4 + (longlong)(int)lVar5 * 2) = 0;
      *(uint *)(*param_2 + 8) = (uint)uVar2 + iVar4;
      *(int *)(*param_2 + 8) = *(int *)(*param_2 + 8) + 1;
    }
    cVar6 = FRepHandleIterator::NextHandle(param_2);
  }
  return;
}



// FUNCTION 142735bc0 FUN_142735bc0 body=125 status=ok
// SIG undefined FUN_142735bc0(void)

void FUN_142735bc0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 local_res8 [8];
  
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x68))
            (*(longlong **)(param_1 + 0x18),param_1 + 0x10);
  if (*(char *)(param_1 + 0x28) != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x18);
    local_res8[0] = 0xabadf00d;
    plVar2 = (longlong *)plVar1[1];
    if (*plVar2 + 4U <= (ulonglong)plVar2[1]) {
      *plVar2 = *plVar2 + 4;
      return;
    }
    (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,4);
    if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar1,local_res8,4);
    }
  }
  return;
}



// FUNCTION 142735c40 ReadyForDormancy body=51 status=ok
// SIG undefined ReadyForDormancy(void)

ulonglong FRepLayout::ReadyForDormancy(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x494);
    in_RAX = (ulonglong)uVar1;
    if (((*(uint *)(param_2 + 0x490) == uVar1) && (*(int *)(param_2 + 0x498) < 1)) &&
       (*(char *)(param_2 + 0x4b0) != '\0')) {
      return (ulonglong)CONCAT31((int3)(uVar1 >> 8),*(int *)(param_2 + 0x4a8) < 1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142735c80 FUN_142735c80 body=281 status=ok
// SIG undefined FUN_142735c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142735c80(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_48 [32];
  ulonglong local_28 [2];
  
  local_28[1] = DAT_1468387a8 ^ (ulonglong)auStack_48;
  FRepState::BuildConditionMap(local_28,param_3);
  iVar7 = 0;
  iVar8 = 0;
  uVar6 = 1;
  if (0 < *(int *)(param_2 + 0x508)) {
    do {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x20 + (longlong)iVar8 * 0x30);
      lVar5 = *(longlong *)(param_2 + 0x500);
      if (*(longlong *)(param_2 + 0x500) == 0) {
        lVar5 = param_2 + 0x4f0;
      }
      puVar1 = (uint *)(lVar5 + (longlong)iVar7 * 4);
      uVar4 = *puVar1;
      if ((local_28[uVar2 >> 6] >> (uVar2 & 0x3f) & 1) == 0) {
        uVar4 = uVar4 | uVar6;
      }
      else {
        uVar4 = uVar4 & ~uVar6;
      }
      *puVar1 = uVar4;
      iVar8 = iVar8 + 1;
      uVar2 = uVar6 * 2;
      iVar3 = iVar7 + 1;
      if (uVar2 != 0) {
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      uVar6 = 1;
      if (uVar2 != 0) {
        uVar6 = uVar2;
      }
    } while (iVar8 < *(int *)(param_2 + 0x508));
  }
  *(undefined4 *)(param_2 + 0x4b4) = *param_3;
  *(ulonglong *)(param_2 + 0x4d0) = local_28[0];
  return;
}



// FUNCTION 142735da0 FUN_142735da0 body=505 status=ok
// SIG undefined FUN_142735da0(void)

ulonglong FUN_142735da0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                       undefined8 param_5,longlong *param_6,undefined1 *param_7,undefined1 *param_8,
                       undefined4 param_9)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  bool bVar5;
  undefined4 local_res8 [2];
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 *local_58;
  char local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    if ((*(byte *)(*(longlong *)(param_2 + 0x28) + 0xa4) & 1) != 0) {
      uVar4 = FUN_1427363f0(param_1,*(longlong *)(param_2 + 0x28),param_4,param_5,param_6,param_7,
                            (byte)param_9 & 1,param_8);
      return uVar4;
    }
    bVar5 = false;
    if (-1 < (char)param_6[5]) {
      lVar1 = param_6[0x15];
      if (lVar1 < param_6[0x14]) {
        bVar5 = (*(byte *)((longlong)(int)(lVar1 >> 3) + param_6[0x12]) &
                '\x01' << ((byte)lVar1 & 7)) != 0;
        param_6[0x15] = lVar1 + 1;
      }
      else {
        FUN_1416952d0(param_6,1);
      }
    }
    local_78 = param_1 + 0x10;
    local_70 = param_1 + 0x20;
    local_60 = param_6;
    local_4c = param_9;
    *param_7 = 0;
    local_68 = 0;
    local_4f = 0;
    local_58 = param_4;
    local_50 = bVar5;
    (**(code **)(*param_6 + 0x68))(param_6,&local_68);
    plVar3 = local_60;
    if (local_50 != '\0') {
      local_res8[0] = 0xabadf00d;
      plVar2 = (longlong *)local_60[1];
      if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
        (**(code **)(*local_60 + 0x50))(local_60,local_res8,4);
        if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar3,local_res8,4);
        }
      }
      else {
        local_res8[0] = *(undefined4 *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
    }
    local_30 = *param_4;
    local_48 = 0;
    local_44 = *(int *)(local_70 + 8) + -1;
    local_20 = local_58 + 2;
    local_40 = 0;
    uStack_38 = 0;
    local_28 = param_5;
    in_RAX = TRepLayoutCmdIterator<FReceivePropertiesImpl,FReceivedPropertiesStackState>::
             ProcessCmds_r(&local_78,&local_48);
    if ((int)local_68 == 0) {
      *param_7 = local_4f;
      *param_8 = local_4e;
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142735fa0 FUN_142735fa0 body=1103 status=ok
// SIG undefined FUN_142735fa0(void)

void FUN_142735fa0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined8 param_7)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  longlong *plVar4;
  bool bVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar13;
  ulonglong in_stack_ffffffffffffff80;
  ulonglong in_stack_ffffffffffffff88;
  undefined1 local_58;
  undefined1 local_57 [7];
  undefined8 local_50;
  longlong *local_48;
  longlong local_40 [3];
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  if (*(int *)(param_1 + 0x98) != 0) {
    uVar12 = 0;
    uVar9 = uVar12;
    uVar11 = uVar12;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        if ((*(int *)(uVar11 + 0x10 + *(longlong *)(param_1 + 0x10)) == 0) &&
           (plVar4 = *(longlong **)(uVar11 + *(longlong *)(param_1 + 0x10)),
           (*(uint *)(plVar4 + 7) >> 9 & 1) == 0)) {
          (**(code **)(*plVar4 + 0x330))(plVar4,*(int *)((longlong)plVar4 + 0x44) + param_6);
        }
        uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
        uVar10 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar10;
        uVar11 = uVar11 + 0x30;
      } while ((int)uVar10 < *(int *)(param_1 + 0x18));
    }
    lVar8 = *(longlong *)(param_5 + 0xb0);
    if ((*(byte *)(*(longlong *)(param_4 + 0x28) + 0xa4) & 1) == 0) {
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar8 + 0x30,0)
      ;
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar8 + 0x80,0)
      ;
      pvVar6 = ThreadLocalStoragePointer;
      uVar9 = (ulonglong)_tls_index;
      *(undefined1 *)(lVar8 + 0x29) = 1;
      if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar9 * 8) + 0x38) < DAT_146b09340) &&
         (_Init_thread_header(&DAT_146b09340), DAT_146b09340 == -1)) {
        lVar8 = operator_new(0xc0);
        uVar9 = uVar12;
        if (lVar8 != 0) {
          uVar9 = FNetBitWriter::FNetBitWriter(lVar8,0);
        }
        DAT_146b09338 = 0;
        DAT_146b09330 = uVar9;
        atexit(FUN_143eb8780);
        _Init_thread_footer(&DAT_146b09340);
      }
      if (*(int *)(param_1 + 0x98) == 2) {
        uVar9 = uVar12;
        if (0 < *(int *)(param_1 + 0x18)) {
          do {
            lVar8 = *(longlong *)(uVar12 + *(longlong *)(param_1 + 0x10));
            if (lVar8 == 0) {
LAB_142736253:
              if (-1 < *(char *)(param_5 + 0x28)) {
                lVar8 = *(longlong *)(param_5 + 0xa8);
                if (lVar8 < *(longlong *)(param_5 + 0xa0)) {
                  bVar3 = *(byte *)((longlong)(int)(lVar8 >> 3) + *(longlong *)(param_5 + 0x90));
                  *(longlong *)(param_5 + 0xa8) = lVar8 + 1;
                  if ((bVar3 & '\x01' << ((byte)lVar8 & 7)) != 0) goto LAB_1427362b2;
                }
                else {
                  FUN_1416952d0(param_5,1);
                }
              }
            }
            else {
              lVar7 = UBoolProperty::GetPrivateStaticClass();
              lVar8 = *(longlong *)(lVar8 + 0x10);
              if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
                  != lVar7 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (!bVar5) goto LAB_142736253;
LAB_1427362b2:
              in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000;
              local_57[0] = 0;
              in_stack_ffffffffffffff80 = in_stack_ffffffffffffff80 & 0xffffffff00000000;
              FUN_14273b7d0(param_1,param_5,*(undefined8 *)(param_5 + 0xb0),
                            *(undefined2 *)(uVar12 + 0x18 + *(longlong *)(param_1 + 0x10)),
                            *(undefined2 *)(uVar12 + 0x1a + *(longlong *)(param_1 + 0x10)),param_6,
                            local_57,in_stack_ffffffffffffff80,in_stack_ffffffffffffff88,
                            &DAT_146b09320);
              if (*(char *)(param_5 + 0x28) < '\0') {
                return;
              }
            }
            uVar10 = (int)uVar9 + 1;
            uVar12 = uVar12 + 0x30;
            uVar9 = (ulonglong)uVar10;
          } while ((int)uVar10 < *(int *)(param_1 + 0x18));
        }
        lVar8 = *(longlong *)(param_5 + 0xb0);
        if (0 < *(int *)(lVar8 + 0x38) - *(int *)(lVar8 + 100)) {
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
                    (param_7);
          lVar8 = *(longlong *)(param_5 + 0xb0);
        }
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty
                  (lVar8 + 0x30,0);
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty
                  (lVar8 + 0x80,0);
        *(undefined1 *)(lVar8 + 0x29) = 0;
      }
    }
    else {
      local_58 = 0;
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar8 + 0x30,0)
      ;
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar8 + 0x80,0)
      ;
      *(undefined1 *)(lVar8 + 0x29) = 1;
      lVar8 = *(longlong *)(param_4 + 0x28);
      if (-1 < *(char *)(param_5 + 0x28)) {
        if (*(longlong *)(param_5 + 0xa8) < *(longlong *)(param_5 + 0xa0)) {
          *(longlong *)(param_5 + 0xa8) = *(longlong *)(param_5 + 0xa8) + 1;
        }
        else {
          FUN_1416952d0(param_5,1);
        }
      }
      local_res8[0] = 0;
      UObjectBaseUtility::GetPathName(*(undefined8 *)(param_1 + 0x50),local_40,0);
      FUN_1425e5d60(*(undefined8 *)(lVar8 + 0x68),&local_50,local_40);
      FUN_142736560(param_1,0,local_50,param_5,0,CONCAT44(uVar13,*(int *)(param_1 + 0x28) + -1),0,
                    param_6,param_6,0,local_res8,&local_58);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_48 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      if (local_40[0] != 0) {
        FMemory::Free();
      }
      lVar8 = *(longlong *)(param_5 + 0xb0);
      if (0 < *(int *)(lVar8 + 0x38) - *(int *)(lVar8 + 100)) {
        local_res8[0] = 1;
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=(param_7);
        lVar8 = *(longlong *)(param_5 + 0xb0);
      }
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar8 + 0x30,0)
      ;
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar8 + 0x80,0)
      ;
      *(undefined1 *)(lVar8 + 0x29) = 0;
    }
  }
  return;
}



// FUNCTION 1427363f0 FUN_1427363f0 body=361 status=ok
// SIG undefined FUN_1427363f0(void)

undefined1
FUN_1427363f0(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
             longlong param_5,undefined1 *param_6,char param_7,undefined8 param_8)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  longlong *local_30;
  longlong local_28 [2];
  
  if (-1 < *(char *)(param_5 + 0x28)) {
    if (*(longlong *)(param_5 + 0xa8) < *(longlong *)(param_5 + 0xa0)) {
      *(longlong *)(param_5 + 0xa8) = *(longlong *)(param_5 + 0xa8) + 1;
    }
    else {
      FUN_1416952d0(param_5,1);
    }
  }
  *param_6 = 0;
  UObjectBaseUtility::GetPathName(*(undefined8 *)(param_1 + 0x50),local_28,0);
  FUN_1425e5d60(*(undefined8 *)(param_2 + 0x68),&local_38,local_28);
  lVar4 = 0;
  plVar5 = param_3 + 2;
  if (param_3 == (longlong *)0x0) {
    plVar5 = (longlong *)lVar4;
  }
  if ((param_7 != '\0') && (param_3 != (longlong *)0x0)) {
    lVar4 = *param_3;
  }
  uVar3 = FUN_142736560(param_1,param_3,local_38,param_5,0,*(int *)(param_1 + 0x28) + -1,lVar4,
                        param_4,param_4,plVar5,param_6,param_8);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 142736560 FUN_142736560 body=1177 status=ok
// SIG undefined FUN_142736560(void)

ulonglong FUN_142736560(ulonglong param_1,longlong param_2,longlong param_3,longlong *param_4,
                       int param_5,int param_6,longlong param_7,int param_8,longlong *param_9,
                       undefined8 param_10,undefined1 *param_11,ulonglong param_12)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong **pplVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong local_res8;
  longlong local_res10;
  longlong local_res18;
  uint local_res20 [2];
  longlong *in_stack_fffffffffffffe88;
  undefined4 uVar14;
  longlong *in_stack_fffffffffffffea0;
  undefined4 uVar15;
  longlong **in_stack_fffffffffffffeb0;
  ulonglong in_stack_fffffffffffffec0;
  uint local_138 [2];
  longlong *local_130;
  undefined4 local_128;
  int local_124;
  int local_120 [2];
  longlong local_118;
  longlong *local_110;
  undefined1 local_108 [40];
  byte local_e0;
  longlong local_78;
  int local_68;
  int local_60;
  longlong local_58;
  
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_3 == 0) {
    local_res8 = param_1 & 0xffffffff00000000;
    (**(code **)(*param_4 + 0x68))(param_4,&local_res8);
    uVar4 = 0;
    if (-1 < (char)*(byte *)(param_4 + 5)) {
      if ((int)local_res8 == 0) {
LAB_1427365d2:
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
      uVar4 = 0;
      *(byte *)(param_4 + 5) = *(byte *)(param_4 + 5) | 0x80;
    }
LAB_1427368e8:
    return uVar4 & 0xffffffffffffff00;
  }
  local_110 = (longlong *)(param_1 + 0x20);
  lVar13 = 0;
  local_res8 = param_1;
LAB_1427365f2:
  while( true ) {
    local_res20[0] = 0;
    uVar4 = (**(code **)(*param_4 + 0x68))(param_4,local_res20);
    if ((char)param_4[5] < '\0') break;
    uVar4 = (ulonglong)local_res20[0];
    if (local_res20[0] == 0) goto LAB_1427365d2;
    local_res20[0] = local_res20[0] - 1;
    uVar4 = (ulonglong)local_res20[0];
    if (*(uint *)(param_3 + 0x20) <= local_res20[0]) break;
    uVar4 = *(ulonglong *)(param_3 + 0x18);
    iVar1 = *(int *)((longlong)(int)local_res20[0] * 0x40 + 8 + uVar4);
    if (iVar1 == 0) break;
    local_128 = 0;
    uVar4 = (**(code **)(*param_4 + 0x68))(param_4,&local_128);
    if ((char)param_4[5] < '\0') break;
    FNetBitReader::FNetBitReader(local_108,0,0,0);
    local_58 = param_4[0x16];
    FUN_1416950d0(local_108,param_4);
    uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
    uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
    if ((char)param_4[5] < '\0') goto LAB_1427368d1;
    lVar10 = (longlong)(int)local_res20[0] * 0x40 + *(longlong *)(param_3 + 0x18);
    if (*(char *)(lVar10 + 0x38) == '\0') {
      if (param_5 < param_6) {
        iVar12 = param_5;
        do {
          lVar5 = (longlong)iVar12 * 0x20 + *local_110;
          if (*(int *)(lVar5 + 0x18) == iVar1) {
            if (iVar12 != -1) {
              lVar10 = (longlong)iVar12 * 0x20 + *local_110;
              if (*(char *)(lVar10 + 0x1c) != '\0') {
                in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
                in_stack_fffffffffffffeb0 =
                     (longlong **)((ulonglong)in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
                lVar10 = local_res10 + 0x70;
                if (param_7 == 0) {
                  lVar10 = lVar13;
                }
                in_stack_fffffffffffffe88 = param_9;
                in_stack_fffffffffffffea0 = local_110;
                cVar3 = FUN_142736a00(local_108,param_10,(int)param_9 - param_8,param_7,param_9,
                                      lVar10,local_res8 + 0x10,local_110,iVar12,
                                      in_stack_fffffffffffffeb0,param_12,in_stack_fffffffffffffec0);
                if (cVar3 != '\0') {
                  *param_11 = 1;
                }
                if (local_68 == local_60) goto LAB_1427369dd;
                goto LAB_1427368d1;
              }
              local_138[0] = 0;
              FUN_141694b60(local_108,local_138);
              if ((local_e0 & 0x80) != 0) goto LAB_1427368d1;
              lVar5 = lVar13;
              if ((param_7 == 0) || (lVar5 = *(int *)(lVar10 + 0x10) + param_7, lVar5 == 0)) {
                local_124 = -1;
              }
              else {
                local_124 = *(int *)(lVar5 + 8);
              }
              local_130 = param_9;
              local_118 = param_7;
              lVar9 = (ulonglong)*(ushort *)(lVar10 + 0x16) * 0x30 +
                      *(longlong *)(local_res8 + 0x10);
              lVar7 = local_res10 + 0x70;
              if (param_7 == 0) {
                lVar7 = lVar13;
              }
              in_stack_fffffffffffffeb0 = &local_130;
              in_stack_fffffffffffffea0 = (longlong *)CONCAT44(uVar15,iVar12);
              in_stack_fffffffffffffe88 =
                   (longlong *)CONCAT44(uVar14,((int)param_9 - param_8) + *(int *)(lVar10 + 0xc));
              pplVar6 = (longlong **)
                        PrepReceivedArray(local_138[0],lVar5,
                                          (longlong)param_9 + (longlong)*(int *)(lVar10 + 0xc),
                                          param_10,in_stack_fffffffffffffe88,lVar9,lVar10,
                                          in_stack_fffffffffffffea0,&local_118,
                                          in_stack_fffffffffffffeb0,lVar7);
              lVar5 = local_118;
              plVar2 = local_130;
              goto LAB_142736811;
            }
            break;
          }
          if (*(char *)(lVar5 + 0x1c) == '\0') {
            iVar12 = *(ushort *)(lVar5 + 8) - 1;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < param_6);
      }
      *(undefined1 *)(lVar10 + 0x38) = 1;
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_108);
  }
  goto LAB_1427368e8;
LAB_142736811:
  uVar14 = (undefined4)((ulonglong)lVar9 >> 0x20);
  local_130 = (longlong *)((ulonglong)local_130 & 0xffffffff00000000);
  FUN_141694b60(local_108,&local_130);
  if ((local_e0 & 0x80) != 0) goto LAB_1427368d1;
  if ((int)local_130 == 0) goto LAB_1427368fe;
  uVar8 = (int)local_130 - 1;
  local_130 = (longlong *)CONCAT44(local_130._4_4_,uVar8);
  if (local_138[0] <= uVar8) goto LAB_1427368d1;
  lVar11 = (longlong)(int)(*(ushort *)(lVar10 + 10) * uVar8);
  lVar7 = lVar11 + lVar5;
  if (lVar5 == 0) {
    lVar7 = lVar13;
  }
  lVar9 = CONCAT44(uVar14,*(ushort *)(lVar10 + 8) - 1);
  in_stack_fffffffffffffe88 =
       (longlong *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffe88 >> 0x20),iVar12 + 1);
  in_stack_fffffffffffffea0 = plVar2;
  in_stack_fffffffffffffeb0 = pplVar6;
  in_stack_fffffffffffffec0 = param_12;
  cVar3 = FUN_142736560(local_res8,local_res10,local_res18,local_108,in_stack_fffffffffffffe88,lVar9
                        ,lVar7,plVar2,lVar11 + (longlong)plVar2,pplVar6,param_11,param_12);
  if ((cVar3 == '\0') || ((local_e0 & 0x80) != 0)) goto LAB_1427368d1;
  goto LAB_142736811;
LAB_1427368fe:
  if (((local_68 - local_60 == 8) &&
      ((FUN_141694b60(local_108,local_120), local_120[0] != 0 || (local_124 <= (int)local_138[0]))))
     || (param_3 = local_res18, local_68 != local_60)) {
LAB_1427368d1:
    if (local_78 != 0) {
      FMemory::Free();
    }
    uVar4 = FArchive::~FArchive(local_108);
    goto LAB_1427368e8;
  }
LAB_1427369dd:
  if (local_78 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(local_108);
  goto LAB_1427365f2;
}



// FUNCTION 142736a00 FUN_142736a00 body=2831 status=ok
// SIG undefined FUN_142736a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142736a00(longlong param_1,longlong *param_2,int param_3,longlong param_4,
                       longlong param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                       int param_9,char param_10,char *param_11,char param_12)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *_Src;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  char *pcVar10;
  longlong *plVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  void *_Dst;
  float *pfVar16;
  longlong lVar17;
  uint uVar18;
  longlong *plVar19;
  float *pfVar20;
  undefined1 auStack_1f8 [32];
  undefined2 *local_1d8;
  longlong *local_1d0;
  byte local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  int local_190;
  int local_18c;
  char *local_188;
  longlong *local_180;
  longlong local_178;
  longlong *local_170;
  undefined8 local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined2 *local_150;
  int local_148;
  longlong *local_140;
  undefined8 *puStack_138;
  uint *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  uint local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_188 = param_11;
  plVar19 = (longlong *)((longlong)param_9 * 0x20 + *param_8);
  local_190 = param_9;
  local_1c0 = param_6;
  lVar17 = (ulonglong)*(ushort *)((longlong)plVar19 + 0x16) * 0x30 + *param_7;
  plVar7 = plVar19;
  if ((param_12 == '\0') && (*(int *)(lVar17 + 0x1c) != -1)) {
    plVar7 = (longlong *)
             ((ulonglong)*(ushort *)(*param_7 + 0x18 + (longlong)*(int *)(lVar17 + 0x1c) * 0x30) *
              0x20 + *param_8);
  }
  local_170 = (longlong *)(param_1 + 0xb0);
  local_18c = param_3;
  local_180 = plVar19;
  local_178 = param_1;
  local_160 = param_2;
  if (param_2 != (longlong *)0x0) {
    lVar4 = *local_170;
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar4 + 0x30,0);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar4 + 0x80,0);
    *(undefined1 *)(lVar4 + 0x29) = 1;
  }
  local_168 = *(undefined8 *)(local_178 + 0xa8);
  if ((param_6 == (longlong *)0x0) || (*(int *)(lVar17 + 0x28) == -1)) {
    local_1d8 = (undefined2 *)0x0;
    uVar6 = (**(code **)(*(longlong *)*plVar19 + 0x2c8))
                      ((longlong *)*plVar19,local_178,*local_170,
                       *(int *)((longlong)plVar7 + 0xc) + param_5);
    goto LAB_142736e0d;
  }
  _Src = (void *)(*(int *)((longlong)plVar7 + 0xc) + param_5);
  plVar9 = (longlong *)*plVar19;
  _Dst = (void *)((int)plVar19[2] + param_4);
  if (_Dst != _Src) {
    if ((*(uint *)(plVar9 + 7) >> 0x1e & 1) == 0) {
      (**(code **)(*plVar9 + 0x2e8))(plVar9,_Dst,_Src,1);
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)*(int *)((longlong)plVar9 + 0x34));
    }
  }
  local_1d8 = (undefined2 *)0x0;
  (**(code **)(*(longlong *)*plVar19 + 0x2c8))
            ((longlong *)*plVar19,local_178,*(undefined8 *)(local_178 + 0xb0),
             *(int *)((longlong)plVar7 + 0xc) + param_5);
  plVar19 = local_180;
  if (*(int *)(lVar17 + 0x24) == 1) goto LAB_142736dd8;
  pfVar20 = (float *)(*(int *)((longlong)plVar7 + 0xc) + param_5);
  pfVar16 = (float *)((int)local_180[2] + param_4);
  uVar6 = 0;
  switch(*(undefined1 *)((longlong)local_180 + 0x1c)) {
  case 2:
  case 3:
    uVar6 = (**(code **)(*(longlong *)*local_180 + 0x2b8))((longlong *)*local_180,pfVar16,pfVar20,0)
    ;
    break;
  case 4:
    if (*pfVar20 != *pfVar16) goto LAB_142736dd8;
    goto LAB_142736e0d;
  case 5:
  case 9:
    uVar6 = (ulonglong)CONCAT31((int3)((uint)*pfVar20 >> 8),*pfVar16 == *pfVar20);
    break;
  case 6:
  case 0x15:
    uVar6 = (ulonglong)(*(char *)pfVar16 == *(char *)pfVar20);
    break;
  case 7:
  case 0x14:
    uVar6 = CONCAT71((int7)((ulonglong)*(longlong *)pfVar20 >> 8),
                     *(longlong *)pfVar16 == *(longlong *)pfVar20);
    break;
  case 8:
    plVar19 = (longlong *)*local_180;
    lVar4 = (**(code **)(*plVar19 + 0x378))(plVar19,pfVar16);
    lVar5 = (**(code **)(*plVar19 + 0x378))(plVar19,pfVar20);
    uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),lVar4 == lVar5);
    param_6 = local_1c0;
    break;
  case 10:
  case 0xb:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x12:
    if (((*pfVar20 == *pfVar16) && (pfVar20[1] == pfVar16[1])) && (pfVar20[2] == pfVar16[2]))
    goto LAB_142736e0d;
    goto LAB_142736dd8;
  case 0xc:
    uVar6 = FUN_14271c0f0(pfVar16,pfVar20);
    break;
  case 0xe:
    uVar6 = FUniqueNetIdWrapper::operator==(pfVar16,pfVar20);
    break;
  case 0xf:
    uVar6 = FUN_14271c120(pfVar16,pfVar20);
    break;
  case 0x13:
    uVar6 = UKismetStringLibrary::EqualEqual_StriStri(pfVar16,pfVar20);
    break;
  default:
    local_1c0 = *(longlong **)(*local_180 + 0x18);
    FName::ToString(&local_1c0,&local_150);
    local_1d8 = &DAT_143f3eda8;
    if (local_148 != 0) {
      local_1d8 = local_150;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
               *(undefined1 *)((longlong)plVar19 + 0x1c));
    if (local_150 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_158 = *(undefined8 *)(*plVar19 + 0x18);
    FName::ToString(&local_158,&local_1b8);
    local_1d0 = (longlong *)&DAT_143f3eda8;
    if ((int)uStack_1b0 != 0) {
      local_1d0 = local_1b8;
    }
    local_1d8 = (undefined2 *)CONCAT44(local_1d8._4_4_,(uint)*(byte *)((longlong)plVar19 + 0x1c));
    FDebug::AssertFailed
              ((longlong)
               L"Failed to get finished soundwave: write operation currently still in progress." +
               0x9f,"Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)");
    if (local_1b8 != (longlong *)0x0) {
      FMemory::Free();
    }
LAB_142736dd8:
    uVar6 = TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_6,lVar17);
    goto LAB_142736e0d;
  case 0xfe:
    uVar6 = FUN_14247c3b0(pfVar16,pfVar20[1]);
    break;
  case 0xff:
    uVar6 = FUN_14247c3d0(pfVar16,pfVar20[1]);
  }
  if ((char)uVar6 == '\0') {
    uVar6 = TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_6,lVar17);
  }
LAB_142736e0d:
  plVar19 = (longlong *)0x0;
  if (param_10 != '\0') {
    uVar6 = FUN_14273b9a0(local_180,local_190,*(int *)((longlong)plVar7 + 0xc) + param_5,local_178);
  }
  if (local_160 == (longlong *)0x0) {
    return uVar6 & 0xffffffffffffff00;
  }
  local_18c = local_18c + *(int *)((longlong)plVar7 + 0xc);
  lVar17 = *local_170;
  local_1c0 = (longlong *)(lVar17 + 0x30);
  iVar15 = *(int *)(lVar17 + 0x38) - *(int *)(lVar17 + 100);
  local_1c8 = 0 < iVar15;
  if ((int)local_160[1] != *(int *)((longlong)local_160 + 0x34)) {
    plVar7 = (longlong *)local_160[8];
    if ((longlong *)local_160[8] == (longlong *)0x0) {
      plVar7 = local_160 + 7;
    }
    iVar2 = *(int *)((longlong)plVar7 + ((longlong)(int)local_160[9] - 1U & (longlong)local_18c) * 4
                    );
    if (iVar2 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar2 * 0xd8 + *local_160);
        if ((int)*plVar7 == local_18c) {
          if (iVar2 != -1) goto LAB_142736ed7;
          break;
        }
        iVar2 = (int)plVar7[0x1a];
      } while (iVar2 != -1);
    }
  }
  plVar7 = plVar19;
LAB_142736ed7:
  plVar9 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar9 = plVar19;
  }
  if ((iVar15 < 1) && (*(int *)(lVar17 + 0x88) - *(int *)(lVar17 + 0xb4) < 1)) {
    if (plVar9 == (longlong *)0x0) goto LAB_1427374b9;
    TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
    ::Remove(local_160,local_18c);
    pcVar10 = local_188;
  }
  else {
    if (plVar9 != (longlong *)0x0) {
      if ((int)plVar9[1] - *(int *)((longlong)plVar9 + 0x34) == iVar15) {
        uVar18 = *(uint *)(plVar9 + 5);
        puStack_130 = (uint *)(plVar9 + 2);
        local_1b8 = (undefined8 *)0x100000000;
        local_1a8._4_4_ = 0;
        uStack_1a0 = 0;
        if (uVar18 != 0) {
          puVar13 = (uint *)plVar9[4];
          if ((uint *)plVar9[4] == (uint *)0x0) {
            puVar13 = puStack_130;
          }
          uVar3 = *puVar13;
          plVar7 = plVar19;
          plVar11 = plVar19;
          while (uVar3 == 0) {
            iVar15 = (int)plVar7;
            uStack_1a0 = (int)plVar11 + 0x20;
            plVar11 = (longlong *)(ulonglong)uStack_1a0;
            plVar7 = (longlong *)(ulonglong)(iVar15 + 1U);
            local_1b8._4_4_ = (undefined4)((ulonglong)local_1b8 >> 0x20);
            local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,iVar15 + 1U);
            if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar15)
            goto LAB_142736fe1;
            uVar3 = puVar13[(longlong)iVar15 + 1];
          }
          uVar3 = -uVar3 & uVar3;
          iVar15 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar15 == 0; iVar15 = iVar15 + -1) {
            }
          }
          local_1b8 = (longlong *)CONCAT44(uVar3,(undefined4)local_1b8);
          if (uVar3 == 0) {
            iVar15 = 0x20;
          }
          else {
            iVar15 = 0x1f - iVar15;
          }
          local_1a8._4_4_ = (uStack_1a0 - iVar15) + 0x1f;
          if ((int)uVar18 < (int)local_1a8._4_4_) {
LAB_142736fe1:
            local_1a8._4_4_ = uVar18;
          }
        }
        uVar18 = *(uint *)(plVar9 + 5);
        uVar3 = *(uint *)(plVar9 + 5);
        uStack_128 = CONCAT44(local_1a8._4_4_,0xffffffff);
        local_198 = CONCAT44(uStack_19c,uStack_1a0);
        puStack_138 = local_1b8;
        uVar12 = uVar18 & 0xffffffe0;
        uStack_1b0 = local_1b8;
        uStack_1a0 = 0xffffffff;
        uStack_19c = local_1a8._4_4_;
        local_1b8 = plVar9;
        local_140 = plVar9;
        uStack_120 = local_198;
        local_1a8 = puStack_130;
        if (uVar18 != uVar3) {
          plVar7 = (longlong *)plVar9[4];
          if ((longlong *)plVar9[4] == (longlong *)0x0) {
            plVar7 = plVar9 + 2;
          }
          uVar8 = *(uint *)((longlong)plVar7 + (longlong)((int)uVar18 >> 5) * 4) &
                  -1 << ((byte)uVar18 & 0x1f);
          iVar15 = (int)uVar18 >> 5;
          while (uVar8 == 0) {
            uVar12 = uVar12 + 0x20;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar15)
            goto LAB_1427370ac;
            uVar8 = *(uint *)((longlong)plVar7 + (longlong)iVar15 * 4 + 4);
            iVar15 = iVar15 + 1;
          }
          uVar8 = -uVar8 & uVar8;
          iVar15 = 0x1f;
          if (uVar8 != 0) {
            for (; uVar8 >> iVar15 == 0; iVar15 = iVar15 + -1) {
            }
          }
          if (uVar8 == 0) {
            iVar15 = 0x20;
          }
          else {
            iVar15 = 0x1f - iVar15;
          }
          uVar18 = (uVar12 - iVar15) + 0x1f;
          if ((int)uVar3 < (int)uVar18) {
LAB_1427370ac:
            uVar18 = uVar3;
          }
        }
        while( true ) {
          if (((uStack_19c == uVar18) && (local_1a8 == (uint *)(plVar9 + 2))) &&
             (local_1b8 == plVar9)) {
            plVar7 = plVar9 + 10;
            if ((int)plVar9[0xb] - *(int *)((longlong)plVar9 + 0x84) !=
                *(int *)(lVar17 + 0x88) - *(int *)(lVar17 + 0xb4)) goto LAB_142737377;
            uVar18 = *(uint *)(plVar9 + 0xf);
            puVar13 = (uint *)(plVar9 + 0xc);
            local_1b8 = (undefined8 *)0x100000000;
            local_1a8._4_4_ = 0;
            uStack_1a0 = 0;
            if (uVar18 == 0) goto LAB_142737236;
            puVar14 = (uint *)plVar9[0xe];
            if ((uint *)plVar9[0xe] == (uint *)0x0) {
              puVar14 = puVar13;
            }
            uVar3 = *puVar14;
            plVar11 = plVar19;
            goto joined_r0x0001427371d8;
          }
          if ((int)local_1c0[1] == *(int *)((longlong)local_1c0 + 0x34)) break;
          iVar15 = *(int *)(*local_1b8 + (longlong)(int)uStack_19c * 0xc);
          plVar7 = (longlong *)local_1c0[8];
          if ((longlong *)local_1c0[8] == (longlong *)0x0) {
            plVar7 = local_1c0 + 7;
          }
          iVar2 = *(int *)((longlong)plVar7 +
                          ((longlong)(int)local_1c0[9] - 1U & (longlong)iVar15) * 4);
          if (iVar2 == -1) break;
          while (*(int *)(*local_1c0 + (longlong)iVar2 * 0xc) != iVar15) {
            iVar2 = *(int *)(*local_1c0 + 4 + (longlong)iVar2 * 0xc);
            if (iVar2 == -1) goto LAB_14273713a;
          }
          if (iVar2 == -1) break;
          uStack_1a0 = uStack_1a0 & ~uStack_1b0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1b0);
        }
      }
LAB_14273713a:
      *local_188 = '\x01';
    }
LAB_1427373be:
    pcVar10 = local_188;
    local_118 = 0;
    local_110 = 0;
    local_f8 = 0;
    uVar1 = *(ushort *)((longlong)local_180 + 0x16);
    local_f0 = 0;
    local_e8 = 0xffffffff;
    local_e4 = 0;
    local_d8 = 0;
    local_d0 = 0;
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
              (&local_118,local_1c0);
    local_c8 = 0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
              (&local_c8,(longlong *)(lVar17 + 0x80));
    local_54 = local_190;
    local_78 = 0;
    local_68 = *(int *)(local_178 + 0xa8) - (int)local_168;
    local_70 = 0;
    local_60 = 0;
    local_58 = (uint)uVar1;
    FBitReaderMark::Copy(&local_168,local_178,&local_78);
    local_1b8 = (longlong *)&local_18c;
    uStack_1b0 = &local_118;
    TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FGuidReferences_&&>_>(local_160,&local_190,&local_1b8,0);
    FGuidReferences::~FGuidReferences(&local_118);
  }
  *pcVar10 = '\x01';
LAB_1427374b9:
  lVar17 = *local_170;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar17 + 0x30,0);
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar17 + 0x80,0);
  *(undefined1 *)(lVar17 + 0x29) = 0;
  return (ulonglong)local_1c8;
joined_r0x0001427371d8:
  if (uVar3 != 0) goto LAB_142737204;
  iVar15 = (int)plVar19;
  uStack_1a0 = (int)plVar11 + 0x20;
  plVar11 = (longlong *)(ulonglong)uStack_1a0;
  plVar19 = (longlong *)(ulonglong)(iVar15 + 1U);
  local_1b8._4_4_ = (undefined4)((ulonglong)local_1b8 >> 0x20);
  local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,iVar15 + 1U);
  if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar15) goto LAB_142737231;
  uVar3 = puVar14[(longlong)iVar15 + 1];
  goto joined_r0x0001427371d8;
LAB_142737204:
  uVar3 = -uVar3 & uVar3;
  iVar15 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar15 == 0; iVar15 = iVar15 + -1) {
    }
  }
  local_1b8 = (longlong *)CONCAT44(uVar3,(undefined4)local_1b8);
  if (uVar3 == 0) {
    iVar15 = 0x20;
  }
  else {
    iVar15 = 0x1f - iVar15;
  }
  local_1a8._4_4_ = (uStack_1a0 - iVar15) + 0x1f;
  if ((int)uVar18 < (int)local_1a8._4_4_) {
LAB_142737231:
    local_1a8._4_4_ = uVar18;
  }
LAB_142737236:
  uVar3 = *(uint *)(plVar9 + 0xf);
  uStack_128 = CONCAT44(local_1a8._4_4_,0xffffffff);
  local_198 = CONCAT44(uStack_19c,uStack_1a0);
  puStack_138 = local_1b8;
  uVar12 = uVar3 & 0xffffffe0;
  uStack_1b0 = local_1b8;
  uStack_1a0 = 0xffffffff;
  uStack_19c = local_1a8._4_4_;
  local_1b8 = plVar7;
  local_140 = plVar7;
  puStack_130 = puVar13;
  uStack_120 = local_198;
  local_1a8 = puVar13;
  if (uVar3 != uVar18) {
    puVar14 = (uint *)plVar9[0xe];
    if ((uint *)plVar9[0xe] == (uint *)0x0) {
      puVar14 = puVar13;
    }
    uVar8 = puVar14[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar15 = (int)uVar3 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar15)
      goto LAB_1427372fb;
      uVar8 = puVar14[(longlong)iVar15 + 1];
      iVar15 = iVar15 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar15 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uVar3 = (uVar12 - iVar15) + 0x1f;
    if ((int)uVar18 < (int)uVar3) {
LAB_1427372fb:
      uVar3 = uVar18;
    }
  }
  while( true ) {
    if (((uStack_19c == uVar3) && (local_1a8 == puVar13)) && (local_1b8 == plVar7)) {
      if (*local_188 == '\0') goto LAB_1427374b9;
      goto LAB_1427373be;
    }
    if (*(int *)(lVar17 + 0x88) == *(int *)(lVar17 + 0xb4)) break;
    iVar15 = *(int *)(*local_1b8 + (longlong)(int)uStack_19c * 0xc);
    lVar4 = *(longlong *)(lVar17 + 0xc0);
    if (*(longlong *)(lVar17 + 0xc0) == 0) {
      lVar4 = lVar17 + 0xb8;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(lVar17 + 200) - 1U & (longlong)iVar15) * 4);
    if (iVar2 == -1) break;
    lVar4 = *(longlong *)(lVar17 + 0x80);
    while (*(int *)(lVar4 + (longlong)iVar2 * 0xc) != iVar15) {
      iVar2 = *(int *)(lVar4 + 4 + (longlong)iVar2 * 0xc);
      if (iVar2 == -1) goto LAB_142737377;
    }
    if (iVar2 == -1) break;
    uStack_1a0 = uStack_1a0 & ~uStack_1b0._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1b0);
  }
LAB_142737377:
  *local_188 = '\x01';
  goto LAB_1427373be;
}



// FUNCTION 142737650 FUN_142737650 body=113 status=ok
// SIG undefined FUN_142737650(void)

void FUN_142737650(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  if (((param_2 != 0) && (*(int *)(param_1 + 0x98) == 2)) &&
     (uVar3 = *(uint *)(param_2 + 0x490), (int)uVar3 < *(int *)(param_2 + 0x494))) {
    do {
      uVar1 = uVar3 & 0x8000001f;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xffffffe0) + 1;
      }
      lVar2 = (longlong)(int)uVar1 * 0x20;
      if (((*(char *)(lVar2 + 0xa8 + param_2) == '\0') &&
          (*(int *)(lVar2 + 0x90 + param_2) <= param_3)) &&
         (param_3 <= *(int *)(lVar2 + 0x94 + param_2))) {
        *(undefined1 *)(lVar2 + 0xa8 + param_2) = 1;
        *(int *)(param_2 + 0x498) = *(int *)(param_2 + 0x498) + 1;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_2 + 0x494));
  }
  return;
}



// FUNCTION 1427376d0 RecompileRenderer body=899 status=ok
// SIG undefined RecompileRenderer(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void RecompileRenderer(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_248 [32];
  undefined8 *local_228;
  undefined8 *local_220;
  undefined1 local_218 [8];
  LARGE_INTEGER local_210;
  LARGE_INTEGER local_208;
  LARGE_INTEGER local_200;
  LARGE_INTEGER local_1f8;
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  longlong local_1c8 [4];
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  longlong local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  longlong local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong alStack_20 [3];
  
  alStack_20[1] = DAT_1468387a8 ^ (ulonglong)auStack_248;
  FSlateApplication::DismissAllMenus(DAT_1469f4590);
  uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_1e0,L"Recompiling Rendering Module...",L"Renderer",
                     L"BeginRecompileRendererTask");
  FUN_141664530(DAT_1468b6160,uVar4,1,0);
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1d8 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar1 = (int *)((longlong)local_1d8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1d8 + 8))(local_1d8,1);
      }
    }
  }
  QueryPerformanceCounter(&local_210);
  FUN_142325c50(local_1f0);
  FUN_141edc760(local_218,1);
  local_58 = 0xffffffff;
  local_220 = &local_178;
  local_88 = 0;
  local_228 = &local_128;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_1c8[0] = 0;
  local_1c8[1] = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0xffffffff;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_d8 = 0;
  local_28 = 0;
  alStack_20[0] = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_128 = 0;
  local_120 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_178 = 0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0xffffffff;
  local_144 = 0;
  local_138 = 0;
  local_130 = 0;
  FUN_142725b70(&local_88,local_1c8,&local_38,&local_d8);
  QueryPerformanceCounter(&local_208);
  FUN_142737a60();
  QueryPerformanceCounter(&local_200);
  local_220 = &local_178;
  local_228 = &local_128;
  RestoreReferencesToRendererModuleClasses(&local_88,local_1c8,&local_38,&local_d8);
  local_130 = 0;
  if (local_138 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_178);
  local_e0 = 0;
  if (local_e8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_128);
  local_90 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_d8);
  lVar6 = 4;
  plVar5 = alStack_20 + 1;
  do {
    plVar3 = (longlong *)plVar5[0xffffffffffffffff];
    plVar5 = plVar5 + 0xffffffffffffffff;
    lVar6 = lVar6 + -1;
    if (plVar3 != (longlong *)0x0) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(plVar3,0x10);
    }
  } while (lVar6 != 0);
  local_180 = 0;
  if (local_188 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMaterialShaderMap_*,TUniquePtr<TArray<unsigned_char,FDefaultAllocator>,TDefaultDelete<TArray<unsigned_char,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_1c8,0);
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  if (local_1c8[0] != 0) {
    FMemory::Free();
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  FUN_141edd460(local_218);
  FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext(local_1f0);
  QueryPerformanceCounter(&local_1f8);
  FUN_14166aae0(DAT_1468b6160);
  return;
}



// FUNCTION 142737a60 FUN_142737a60 body=974 status=ok
// SIG undefined FUN_142737a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142737a60(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_110;
  undefined8 local_108 [2];
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [16];
  undefined1 local_60 [24];
  undefined4 local_48 [4];
  undefined1 local_38 [8];
  longlong *local_30;
  char local_20;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146850168) {
    _Init_thread_header(&DAT_146850168);
    if (DAT_146850168 == -1) {
      FName::FName(&DAT_146850160,"HotReload",1);
      _Init_thread_footer(&DAT_146850168);
    }
  }
  plVar7 = (longlong *)FModuleManager::GetModulePtr_Internal(DAT_146850160);
  if (plVar7 != (longlong *)0x0) {
    FName::FName(local_108,L"Renderer",1);
    uVar8 = FUN_14168dc80();
    FModuleManager::UnloadModule(uVar8,local_108[0],0);
    while( true ) {
      lVar9 = *plVar7;
      uVar8 = FUN_141672640();
      local_110 = 0;
      local_118 = 1;
      cVar6 = (**(code **)(lVar9 + 0x50))(plVar7,local_108[0],0,uVar8);
      if (cVar6 != '\0') break;
      lVar9 = FText::FromName(local_60,local_108);
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_88,
                         L"C++ compilation of module {0} failed!  Details in the log.  \r\nFix the error then click Ok to retry."
                         ,L"UnrealEd",L"Error_RetryCompilation");
      puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_70,uVar8);
      local_48[0] = 4;
      FText::FText(local_38,lVar9);
      local_e8 = *puVar10;
      local_f8 = local_48;
      puStack_f0 = local_18;
      local_e0 = puVar10[1];
      local_20 = '\x01';
      if (local_e0 != 0) {
        LOCK();
        *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
        UNLOCK();
      }
      local_d8 = local_f8;
      uStack_d0 = puStack_f0;
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_d8);
      uVar8 = FText::Format(local_a0,&local_e8,uVar8);
      FText::FText(local_b8,uVar8);
      plVar4 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_98)(local_98);
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
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8);
      plVar4 = local_30;
      if (local_20 != '\0') {
        local_20 = '\0';
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_30)(local_30);
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
      }
      plVar4 = (longlong *)puVar10[1];
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
      plVar4 = *(longlong **)(lVar9 + 8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
      puVar10 = (undefined8 *)FText::ToString(local_b8);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar10;
      }
      FUN_1416a4860(0,puVar11);
      plVar4 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_b0)(local_b0);
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
      plVar4 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_80)(local_80);
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
    }
    uVar8 = FUN_14168dc80();
    FUN_141690010(uVar8,local_108[0]);
  }
  return;
}



// FUNCTION 142737e30 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_142737f6f;
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
LAB_142737f6f:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0xd8 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0x35] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0x34] =
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



// FUNCTION 142738040 Rehash body=533 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FShaderPipelineType_const_*,FString>,TDefaultMapHashableKeyFuncs<FShaderPipelineType_const_*,FString,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
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
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
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
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar8 = *puVar13;
      local_58 = 0;
      iStack_40 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_14273817f;
        uVar8 = puVar13[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
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
      if (iVar3 < iStack_44) {
LAB_14273817f:
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
        plVar6 = (longlong *)((longlong)iStack_1c * 0x20 + *param_1);
        if (*plVar6 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(*plVar6 + 0x68);
        }
        uVar8 = (int)*plVar2 - 1U & uVar8;
        *(uint *)((longlong)plVar6 + 0x1c) = uVar8;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)(plVar6 + 3) =
             *(undefined4 *)
              ((longlong)plVar11 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 142738260 ReleaseRHI body=36 status=ok
// SIG undefined ReleaseRHI(void)

void FColorVertexBuffer::ReleaseRHI(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x40,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  return;
}



// FUNCTION 142738290 ReleaseRHI body=65 status=ok
// SIG undefined ReleaseRHI(void)

void FStaticMeshVertexBuffer::ReleaseRHI(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xa8,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xb8,0);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x20))(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001427382cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x68) + 0x20))(param_1 + 0x68);
  return;
}



// FUNCTION 1427382e0 ReleaseResource body=42 status=ok
// SIG undefined ReleaseResource(void)

void FStaticMeshVertexBuffer::ReleaseResource(longlong param_1)

{
  FRenderResource::ReleaseResource();
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x30))(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000142738306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x68) + 0x30))(param_1 + 0x68);
  return;
}



// FUNCTION 142738310 FUN_142738310 body=14 status=ok
// SIG undefined FUN_142738310(void)

void FUN_142738310(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  LARGE_INTEGER LStackX_10;
  longlong lStackX_18;
  LARGE_INTEGER LStackX_20;
  
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  if ((DAT_146ac3b1a != '\0') &&
     (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
    if (0xf < DAT_146ac3ce0) {
      FUN_141ee2000(&DAT_146ac3ce0);
    }
    *(longlong **)(&DAT_146ac3ce8 + (longlong)DAT_146ac3ce0 * 8) = plVar3;
    DAT_146ac3ce0 = DAT_146ac3ce0 + 1;
    return;
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
    QueryPerformanceCounter(&LStackX_20);
    (**(code **)(*plVar3 + 0x30))(plVar3);
    QueryPerformanceCounter(&LStackX_10);
    DAT_146ac3af4 = DAT_146ac3af4 + (LStackX_10.s.LowPart - LStackX_20._0_4_);
    return;
  }
  pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = TlsGetValue(*pDVar6);
  plVar10 = (longlong *)0x0;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      plVar10 = plVar7;
    }
    TlsSetValue(*pDVar6,plVar10);
    plVar7 = plVar10;
  }
  plVar10 = (longlong *)plVar7[1];
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)*plVar7;
    if (plVar10 == (longlong *)0x0) {
      lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
      plVar7[1] = lVar8;
      if (lVar8 == 0) {
        puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar7[1] = (longlong)puVar9;
        lVar8 = 0x1f;
        do {
          puVar2 = puVar9 + 0x20;
          *puVar9 = puVar2;
          lVar8 = lVar8 + -1;
          puVar9 = puVar2;
        } while (lVar8 != 0);
        *puVar2 = 0;
      }
      plVar10 = (longlong *)plVar7[1];
      iVar11 = 0x20;
      *(undefined4 *)(plVar7 + 2) = 0x20;
    }
    else {
      iVar11 = 0x20;
      plVar7[1] = (longlong)plVar10;
      *(undefined4 *)(plVar7 + 2) = 0x20;
      *plVar7 = 0;
    }
  }
  else {
    iVar11 = (int)plVar7[2];
  }
  plVar7[1] = *plVar10;
  *(int *)(plVar7 + 2) = iVar11 + -1;
  *plVar10 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar10 + 1) = 0xff;
  *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
  *(undefined1 *)(plVar10 + 3) = 0;
  *plVar10 = (longlong)&PTR_FUN_144edea18;
  plVar10[4] = 0;
  plVar10[2] = (longlong)plVar3;
  lVar8 = plVar10[4];
  piVar1 = (int *)(lVar8 + 0x48);
  if (lVar8 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lStackX_18 = lVar8;
  FUN_140445100(plVar10,0,0xff,1,0,0);
  if (lVar8 != 0) {
    LOCK();
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle(lStackX_18);
    }
  }
  return;
}



// FUNCTION 142738320 Remove body=263 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar7 + ((longlong)param_2 & uVar8) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0xd8;
      if (*(int *)(lVar3 + lVar2) == param_2) {
        lVar6 = (longlong)iVar5 * 0xd8;
        lVar3 = lVar6 + lVar2;
        uVar8 = (longlong)*(int *)(lVar3 + 0xd4) & uVar8;
        piVar4 = (int *)((longlong)plVar7 + uVar8 * 4);
        iVar1 = *(int *)((longlong)plVar7 + uVar8 * 4);
        goto joined_r0x0001427383ba;
      }
      iVar5 = *(int *)(lVar3 + 0xd0 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x0001427383ba:
  if (iVar1 == -1) {
LAB_1427383f0:
    FGuidReferences::~FGuidReferences(*param_1 + 8 + lVar6);
    TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + 0xd0);
    goto LAB_1427383f0;
  }
  piVar4 = (int *)((longlong)iVar1 * 0xd8 + 0xd0 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x0001427383ba;
}



// FUNCTION 142738430 Remove body=173 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar6 = (longlong)param_2 * 0xd8;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0xd4 + lVar2));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar6 + 0xd0 + lVar2);
        break;
      }
      piVar5 = (int *)(lVar2 + 0xd0 + (longlong)iVar1 * 0xd8);
      iVar1 = *piVar5;
    }
  }
  FGuidReferences::~FGuidReferences((longlong)param_2 * 0xd8 + 8 + *param_1);
  TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 1427384e0 FUN_1427384e0 body=124 status=ok
// SIG undefined FUN_1427384e0(void)

void FUN_1427384e0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 != 0) {
    iVar4 = 2;
    if (*(char *)(param_1 + 0x60) != '\0') {
      iVar4 = 4;
    }
    plVar1 = (longlong *)(param_1 + 0x48);
    param_3 = iVar4 * param_3;
    iVar4 = iVar4 * param_2;
    if (param_3 != 0) {
      iVar2 = *(int *)(param_1 + 0x50);
      iVar3 = (iVar2 - iVar4) - param_3;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar4 + *plVar1),
                   (void *)((longlong)(iVar4 + param_3) + *plVar1),(longlong)iVar3);
        iVar2 = *(int *)(param_1 + 0x50);
      }
      *(int *)(param_1 + 0x50) = iVar2 - param_3;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar1);
    }
  }
  return;
}



// FUNCTION 142738560 FUN_142738560 body=2268 status=ok
// SIG undefined FUN_142738560(void)

ulonglong FUN_142738560(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5,longlong param_6,longlong *param_7,int *param_8)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulonglong in_RAX;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  longlong *plVar14;
  longlong *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  ulonglong local_d8;
  undefined8 local_d0;
  int local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong **local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  int local_60;
  byte local_48 [8];
  longlong local_40;
  
  if (*(uint *)(param_1 + 0x98) < 2) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar11 = 0;
  uVar4 = *(ulonglong *)(param_2 + 0x80);
  local_c0 = 0;
  local_b8 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_d8 = uVar4;
  if (*(int *)(param_2 + 0x4b4) != *param_8) {
    FUN_142735c80();
    puVar1 = (undefined8 *)(param_2 + 0x4e0);
    local_e8 = (longlong *)*puVar1;
    *puVar1 = 0;
    local_e0 = *(undefined4 *)(param_2 + 0x4e8);
    local_dc = *(undefined4 *)(param_2 + 0x4ec);
    *(undefined8 *)(param_2 + 0x4e8) = 0;
    FUN_14272b590(param_1,&local_e8,param_2 + 0x4f0,puVar1,&local_c0);
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  lVar10 = *(longlong *)(param_6 + 0x28);
  if (*(char *)(lVar10 + 0x17e8) == '\0') {
    if ((*(char *)(param_2 + 0x4b0) == '\0') || (*(int *)(param_2 + 0x4a8) < 1)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    iVar7 = *(int *)(param_2 + 0x4cc);
    iVar3 = *(int *)(param_3 + 0x818);
    *(int *)(param_2 + 0x4cc) = iVar3;
    if ((((iVar7 != iVar3) && (*(int *)(param_2 + 0x4c8) != *(int *)(param_3 + 0x814))) ||
        (*(int *)(param_2 + 0x498) != 0)) || ((bVar5 || ((int)local_b8 != 0)))) {
      uVar8 = *(uint *)(param_3 + 0x810);
      uVar9 = *(uint *)(param_2 + 0x4c8);
      if ((int)*(uint *)(param_2 + 0x4c8) <= (int)uVar8) {
        *(uint *)(param_2 + 0x4c8) = uVar8;
        uVar9 = uVar8;
      }
      uVar8 = *(uint *)(param_2 + 0x494) & 0x8000001f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
      }
      plVar13 = (longlong *)(param_2 + 0x98 + (longlong)(int)uVar8 * 0x20);
      if ((int)uVar9 < *(int *)(param_3 + 0x814)) {
        do {
          local_e8 = (longlong *)*plVar13;
          *plVar13 = 0;
          local_e0 = (undefined4)plVar13[1];
          local_dc = *(undefined4 *)((longlong)plVar13 + 0xc);
          plVar13[1] = 0;
          uVar8 = uVar9 & 0x8000003f;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
          }
          FUN_142730d60(param_1,param_4,param_3 + 0x18 + (longlong)(int)uVar8 * 0x20,&local_e8,
                        plVar13);
          if (local_e8 != (longlong *)0x0) {
            FMemory::Free();
          }
          uVar9 = uVar9 + 1;
          param_2 = local_res10;
        } while ((int)uVar9 < *(int *)(param_3 + 0x814));
      }
      if (0 < (int)local_b8) {
        local_e8 = (longlong *)*plVar13;
        *plVar13 = 0;
        local_e0 = (undefined4)plVar13[1];
        local_dc = *(undefined4 *)((longlong)plVar13 + 0xc);
        plVar13[1] = 0;
        FUN_142730d60(param_1,param_4,&local_c0,&local_e8,plVar13);
        if (local_e8 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      *(undefined4 *)(param_2 + 0x4c8) = *(undefined4 *)(param_3 + 0x814);
      if (((0 < (int)plVar13[1]) || (0 < *(int *)(param_2 + 0x498))) || (bVar5)) {
        *(int *)(param_2 + 0x494) = *(int *)(param_2 + 0x494) + 1;
        plVar14 = plVar13;
        FUN_14273d690(param_1,param_2,param_5,param_4,*(undefined8 *)(param_6 + 0x28),plVar13);
        if (bVar5) {
          iVar7 = 0;
          if (0 < *(int *)(param_2 + 0x4a8)) {
            do {
              local_e8 = (longlong *)*plVar13;
              *plVar13 = 0;
              local_e0 = (undefined4)plVar13[1];
              local_dc = *(undefined4 *)((longlong)plVar13 + 0xc);
              plVar13[1] = 0;
              FUN_142730d60(param_1,param_4,
                            *(longlong *)(param_2 + 0x4a0) + (longlong)iVar7 * 0x20 + 8,&local_e8,
                            plVar13);
              if (local_e8 != (longlong *)0x0) {
                FMemory::Free();
              }
              iVar7 = iVar7 + 1;
              param_3 = local_res18;
            } while (iVar7 < *(int *)(param_2 + 0x4a8));
          }
          iVar7 = *(int *)(param_2 + 0x4a8);
          if (iVar7 != 0) {
            plVar12 = (longlong *)(*(longlong *)(param_2 + 0x4a0) + 8);
            do {
              if (*plVar12 != 0) {
                FMemory::Free();
              }
              plVar12 = plVar12 + 4;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          *(undefined4 *)(param_2 + 0x4a8) = 0;
          if (*(int *)(param_2 + 0x4ac) != 0) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
            ResizeTo(param_2 + 0x4a0,0);
          }
        }
        if ((((*(byte *)(*(longlong *)(param_6 + 0x28) + 0xa4) & 1) == 0) && (DAT_146534b60 != 0))
           && (*(char *)(param_3 + 0x848) == '\0')) {
          local_e0 = 0;
          local_88 = &local_e8;
          local_80 = param_1 + 0x20;
          local_78 = param_1 + 0x30;
          local_70 = *(undefined4 *)(param_1 + 0x38);
          local_60 = *(int *)(param_1 + 0x28) + -1;
          local_6c = 0;
          local_68 = 1;
          local_e8 = plVar13;
          FUN_142724870(param_1,&local_88,param_4,1,DAT_146b08f20 == 1,
                        (ulonglong)plVar14 & 0xffffffff00000000,param_3 + 0x830);
          *(undefined1 *)(param_3 + 0x848) = 1;
        }
        local_c8 = (int)param_7[0x14];
        local_a0 = *plVar13;
        *plVar13 = 0;
        local_98 = (undefined4)plVar13[1];
        local_94 = *(undefined4 *)((longlong)plVar13 + 0xc);
        plVar13[1] = 0;
        local_b0 = 0;
        local_a8 = 0;
        FUN_14272b590(param_1,&local_a0,param_2 + 0x4f0,&local_b0,plVar13);
        if (1 < (int)local_a8) {
          puVar1 = (undefined8 *)(param_2 + 0x4e0);
          local_e8 = (longlong *)*puVar1;
          *puVar1 = 0;
          local_e0 = *(undefined4 *)(param_2 + 0x4e8);
          local_dc = *(undefined4 *)(param_2 + 0x4ec);
          *(undefined8 *)(param_2 + 0x4e8) = 0;
          FUN_142730d60(param_1,param_4,&local_b0,&local_e8,puVar1);
          if (local_e8 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        if ((*(byte *)(*(longlong *)(param_6 + 0x28) + 0xa4) & 1) == 0) {
          if ((0 < (int)plVar13[1]) && (1 < *(uint *)(param_1 + 0x98))) {
            local_40 = param_7[0x14];
            local_res8[0] = CONCAT31(local_res8[0]._1_3_,DAT_146b08f20 == 1);
            local_48[0] = *(byte *)(param_7 + 5) >> 7;
            FBitWriter::WriteBit(param_7,DAT_146b08f20 == 1);
            local_88 = &local_e8;
            lVar10 = param_7[0x14];
            local_e0 = 0;
            local_80 = param_1 + 0x20;
            local_78 = param_1 + 0x30;
            local_70 = *(undefined4 *)(param_1 + 0x38);
            local_60 = *(int *)(param_1 + 0x28) + -1;
            local_6c = 0;
            local_68 = 1;
            cVar6 = (char)local_res8[0];
            local_e8 = plVar13;
            FUN_14273a480(param_1,param_2,local_d8,param_7,(char)local_res8[0],&local_88,param_4,0,
                          param_3 + 0x830);
            if ((longlong)(int)lVar10 == param_7[0x14]) {
              FBitWriterMark::Pop(local_48,param_7);
            }
            else {
              local_d8 = local_d8 & 0xffffffff00000000;
              (**(code **)(*param_7 + 0x68))(param_7,&local_d8);
              if (cVar6 != '\0') {
                plVar14 = (longlong *)param_7[1];
                local_res8[0] = 0xabadf00d;
                if ((undefined4 *)plVar14[1] < (undefined4 *)*plVar14 + 1) {
                  (**(code **)(*param_7 + 0x50))(param_7,local_res8,4);
                  if ((*(byte *)((longlong)param_7 + 0x29) & 0x10) != 0) {
                    FArchive::ByteSwap(param_7,local_res8,4);
                  }
                }
                else {
                  local_res8[0] = *(undefined4 *)*plVar14;
                  *plVar14 = *plVar14 + 4;
                }
              }
            }
          }
        }
        else {
          puVar1 = (undefined8 *)(param_2 + 0x4b8);
          local_e8 = (longlong *)*puVar1;
          *puVar1 = 0;
          local_e0 = *(undefined4 *)(param_2 + 0x4c0);
          local_dc = *(undefined4 *)(param_2 + 0x4c4);
          *(undefined8 *)(param_2 + 0x4c0) = 0;
          FUN_142730d60(param_1,param_4,&local_a0,&local_e8,puVar1);
          if (0 < (int)plVar13[1]) {
            FUN_142739d70(param_1,param_2,local_d8,param_4,*(undefined8 *)(param_6 + 0x28),param_7,
                          plVar13);
          }
          if (local_e8 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        uVar11 = (ulonglong)((longlong)local_c8 != param_7[0x14]);
        if ((longlong)local_c8 == param_7[0x14]) {
          *(undefined4 *)(plVar13 + 1) = 0;
          if (*(int *)((longlong)plVar13 + 0xc) != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar13,0);
          }
          *(int *)(param_2 + 0x494) = *(int *)(param_2 + 0x494) + -1;
        }
        if (local_b0 != 0) {
          FMemory::Free();
        }
        if (local_a0 != 0) {
          FMemory::Free();
        }
      }
      else {
        FUN_14273d690(param_1,param_2,param_5,param_4,*(undefined8 *)(param_6 + 0x28),0);
        uVar11 = 0;
      }
    }
    else {
      FUN_14273d690(param_1,param_2,param_5,param_4,lVar10,0);
    }
  }
  else {
    if (0 < *(int *)(param_2 + 0x4c0)) {
      local_d8 = 0;
      local_d0 = 0;
      if (*(int *)(param_1 + 0x98) != 0) {
        if (*(int *)(param_1 + 0x98) == 2) {
          local_e8 = (longlong *)(param_2 + 0x4b8);
          local_e0 = 0;
          local_88 = &local_e8;
          local_6c = 0;
          local_80 = param_1 + 0x20;
          local_68 = 1;
          local_78 = param_1 + 0x30;
          local_70 = *(undefined4 *)(param_1 + 0x38);
          local_60 = *(int *)(param_1 + 0x28) + -1;
          FUN_142735a00(param_1,&local_88,param_4,&local_d8);
        }
        uVar11 = local_d0;
        lVar10 = (longlong)(int)local_d0;
        iVar7 = (int)local_d0 + 1;
        local_d0 = CONCAT44(local_d0._4_4_,iVar7);
        if (local_d0._4_4_ < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,uVar11 & 0xffffffff);
        }
        *(undefined2 *)(local_d8 + lVar10 * 2) = 0;
      }
      puVar2 = (ulonglong *)(param_2 + 0x4b8);
      if (puVar2 != &local_d8) {
        if (*puVar2 != 0) {
          FMemory::Free();
        }
        *puVar2 = local_d8;
        *(int *)(param_2 + 0x4c0) = (int)local_d0;
        *(int *)(param_2 + 0x4c4) = local_d0._4_4_;
        local_d0 = 0;
        local_d8 = 0;
      }
      FUN_14272b830(param_1,puVar2,param_2 + 0x4f0,&local_d8);
      if (0 < (int)local_d0) {
        FUN_142739d70(param_1,param_2,uVar4,param_4,*(undefined8 *)(param_6 + 0x28),param_7,
                      &local_d8);
        if (local_d8 != 0) {
          FMemory::Free();
        }
        uVar11 = 1;
        goto LAB_142738e02;
      }
      if (local_d8 != 0) {
        FMemory::Free();
      }
    }
    uVar11 = 0;
  }
LAB_142738e02:
  if (local_c0 != 0) {
    FMemory::Free();
  }
  return uVar11;
}



// FUNCTION 142738e40 FUN_142738e40 body=58 status=ok
// SIG undefined FUN_142738e40(void)

void FUN_142738e40(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x168))();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 142738e80 FUN_142738e80 body=330 status=ok
// SIG undefined FUN_142738e80(void)

void FUN_142738e80(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x48);
  lVar5 = 0;
  if (lVar7 == 0) goto LAB_142738f59;
  plVar2 = *(longlong **)(lVar7 + 0xb0);
  if ((plVar2 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,lVar7), cVar3 == '\0')) {
    lVar7 = *(longlong *)(param_1 + 0x48);
    plVar2 = *(longlong **)(lVar7 + 0xb0);
    if (plVar2 == (longlong *)0x0) {
      LOCK();
      bVar8 = *(int *)(lVar7 + 0xa0) == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0xa0) = 0;
      }
      UNLOCK();
      if (!bVar8) {
        FUN_142729f90(lVar7 + 0x10);
        LOCK();
        *(int *)(lVar7 + 0xa0) = *(int *)(lVar7 + 0xa0) + -1;
        UNLOCK();
      }
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,lVar7);
      if (cVar3 != '\0') {
        FUN_142729f90(lVar7 + 0x10);
        goto LAB_142738eba;
      }
    }
    if (*(longlong *)(lVar7 + 0xb0) != 0) {
      (**(code **)(**(longlong **)(lVar7 + 0xa8) + 0x20))(*(longlong **)(lVar7 + 0xa8),0xffffffff,0)
      ;
      goto LAB_142738f3a;
    }
  }
  else {
LAB_142738eba:
    LOCK();
    *(int *)(lVar7 + 0xa0) = *(int *)(lVar7 + 0xa0) + -1;
    UNLOCK();
    if (*(longlong **)(lVar7 + 0xa8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar7 + 0xa8) + 0x10))();
    }
LAB_142738f3a:
    *(undefined8 *)(lVar7 + 0xb0) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,1);
  }
LAB_142738f59:
  *(undefined1 *)(param_1 + 0x28) = 5;
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(char *)(param_1 + 0x40) == '\0')) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) & 0xbfffffff;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x60) = 0;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 142738fd0 ResizeBuffer body=180 status=ok
// SIG undefined ResizeBuffer(void)

void TSkeletalMeshVertexData<FMeshToMeshVertData>::ResizeBuffer(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 < param_2) {
    if (*(int *)(param_1 + 0x1c) < (int)param_2) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0x10,param_2);
      uVar3 = *(uint *)(param_1 + 0x18);
    }
    iVar4 = *(int *)(param_1 + 0x18);
    iVar5 = (iVar4 - uVar3) + param_2;
    *(int *)(param_1 + 0x18) = iVar5;
    if (*(int *)(param_1 + 0x1c) < iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x10,iVar4);
      return;
    }
  }
  else if (param_2 < uVar3) {
    plVar1 = (longlong *)(param_1 + 0x10);
    iVar4 = uVar3 - param_2;
    if (iVar4 != 0) {
      iVar5 = *(int *)(param_1 + 0x18);
      iVar2 = (iVar5 - iVar4) - param_2;
      if (iVar2 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(int)param_2 * 0x40 + *plVar1),
                   (void *)((longlong)(int)uVar3 * 0x40 + *plVar1),(longlong)iVar2 << 6);
        iVar5 = *(int *)(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x18) = iVar5 - iVar4;
      TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(plVar1);
    }
  }
  return;
}



// FUNCTION 142739090 ResizeBuffer body=125 status=ok
// SIG undefined ResizeBuffer(void)

void TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_>::ResizeBuffer
               (longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (uint)param_2;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < uVar1) {
    if (((param_3 & 1) == 0) && (*(int *)(param_1 + 0x1c) < (int)uVar1)) {
      TArray<float,FDefaultAllocator>::ResizeTo();
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    iVar3 = (*(int *)(param_1 + 0x18) - uVar2) + uVar1;
    *(int *)(param_1 + 0x18) = iVar3;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
      return;
    }
  }
  else if (uVar1 < uVar2) {
    TArray<int,FDefaultAllocator>::RemoveAtImpl
              (param_1 + 0x10,param_2,uVar2 - uVar1,~(byte)(param_3 >> 1) & 1);
  }
  return;
}



// FUNCTION 142739110 ResizeGrow body=110 status=ok
// SIG undefined ResizeGrow(void)

void TArray<unsigned_char,TAlignedHeapAllocator<16>_>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  iVar2 = FMemory::QuantizeSize(lVar3,0x10);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar2,0x10);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 142739180 ResizeTo body=93 status=ok
// SIG undefined ResizeTo(void)

void TArray<unsigned_char,TAlignedHeapAllocator<16>_>::ResizeTo(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if ((param_2 != 0) && (iVar1 = FMemory::QuantizeSize((longlong)param_2,0x10), iVar1 < param_2)) {
    iVar1 = 0x7fffffff;
  }
  if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar1,0x10);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1427391e0 ResizeTo body=19 status=ok
// SIG undefined ResizeTo(void)

void TArray<FVertexStreamComponent,TFixedAllocator<4>_>::ResizeTo(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 4;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  if (iVar1 != *(int *)(param_1 + 0x44)) {
    *(int *)(param_1 + 0x44) = iVar1;
  }
  return;
}



// FUNCTION 142739200 RestoreReferencesToRendererModuleClasses body=762 status=ok
// SIG undefined RestoreReferencesToRendererModuleClasses(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RestoreReferencesToRendererModuleClasses
               (longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int local_a8;
  uint uStack_a4;
  int iStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  longlong local_80 [6];
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  FSlateAccessibleMessageHandler::OnDeactivate();
  InitializeShaderTypes();
  plVar3 = (longlong *)GetRendererModule();
  FSceneViewStateReference::AllocateAll();
  iVar2 = (int)param_1[5];
  puStack_40 = (uint *)(param_1 + 2);
  local_a8 = 0;
  uStack_a4 = 1;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puStack_40;
    }
    uVar10 = *puVar8;
    uStack_90 = 0;
    local_a8 = 0;
    while (uVar10 == 0) {
      lVar5 = (longlong)local_a8;
      uStack_90 = uStack_90 + 0x20;
      iVar9 = local_a8 + 1;
      bVar11 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar9;
      if (bVar11) goto LAB_1427392ed;
      uVar10 = puVar8[lVar5 + 1];
    }
    uStack_a4 = -uVar10 & uVar10;
    iVar9 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_98._4_4_ = (uStack_90 - iVar9) + 0x1f;
    if (iVar2 < local_98._4_4_) {
LAB_1427392ed:
      local_98._4_4_ = iVar2;
    }
  }
  uStack_38 = 0xffffffff;
  iStack_34 = local_98._4_4_;
  iStack_30 = uStack_90;
  uStack_2c = iStack_8c;
  iStack_48 = local_a8;
  uStack_44 = uStack_a4;
  iStack_a0 = local_a8;
  uStack_9c = uStack_a4;
  local_88 = uStack_90;
  uStack_84 = iStack_8c;
  uStack_90 = 0xffffffff;
  iStack_8c = local_98._4_4_;
  bVar11 = local_98._4_4_ < iVar2;
  local_50 = param_1;
  local_98 = puStack_40;
  if (bVar11) {
    do {
      lVar5 = *(longlong *)(*param_1 + (longlong)iStack_8c * 0x18);
      (**(code **)(*plVar3 + 0x50))
                (plVar3,lVar5,*(undefined1 *)(lVar5 + 0x3d8),
                 *(undefined1 *)(*param_1 + 8 + (longlong)iStack_8c * 0x18),
                 *(undefined4 *)(lVar5 + 0x1c0));
      iVar9 = 0;
      iVar2 = UWorld::GetNumLevels(lVar5);
      if (0 < iVar2) {
        do {
          uVar4 = UWorld::GetLevel(lVar5,iVar9);
          FUN_14252bcf0(uVar4);
          iVar9 = iVar9 + 1;
          iVar2 = UWorld::GetNumLevels(lVar5);
        } while (iVar9 < iVar2);
      }
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
    } while (iStack_8c < (int)local_98[6]);
  }
  FUN_141a0a6a0(param_3);
  FUN_142575d50(param_2);
  puVar6 = &DAT_1464c9c48;
  do {
    if (*param_3 != 0) {
      FUN_14258d3d0(*puVar6,param_4,param_5,param_6);
    }
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  } while ((longlong)puVar6 < 0x1464c9c58);
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  FShaderType::GetOutdatedTypes(local_80,local_80 + 4);
  uVar10 = 1 << ((byte)DAT_1464c9c14 & 0x1f) | _DAT_146afe3a0;
  if (uVar10 != 0) {
    do {
      uVar7 = -uVar10 & uVar10;
      iVar2 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar9 = 0;
      if (uVar7 != 0) {
        iVar9 = iVar2;
      }
      uVar1 = (&DAT_1464c9c48)[iVar9];
      AK::MemoryMgr::StartProfileThreadUsage((long)local_80);
      UMaterial::UpdateMaterialShaders(local_80,local_80 + 2,local_80 + 4,uVar1);
      bVar11 = uVar10 != uVar7;
      uVar10 = uVar10 ^ uVar7;
    } while (bVar11);
  }
  FinishRecompileGlobalShaders();
  if (local_80[2] != 0) {
    FMemory::Free();
  }
  if (local_80[4] != 0) {
    FMemory::Free();
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142739500 SaveState body=452 status=ok
// SIG undefined SaveState(void)

void Scalability::SaveState(undefined8 param_1)

{
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_30;
  longlong local_20;
  
  FUN_14271e120(&local_58);
  local_58 = *DAT_146b09130;
  local_54 = *DAT_146b09148;
  local_50 = *DAT_146b09160;
  local_4c = *DAT_146b09178;
  local_48 = *DAT_146b09190;
  local_44 = *DAT_146b091a8;
  local_40 = *DAT_146b091c0;
  local_3c = *DAT_146b091d8;
  FConfigCacheIni::SetFloat
            (DAT_1468b6148,L"ScalabilityGroups",L"sg.ResolutionQuality",local_58,param_1);
  FConfigCacheIni::SetInt
            (DAT_1468b6148,L"ScalabilityGroups",L"sg.ViewDistanceQuality",local_54,param_1);
  FConfigCacheIni::SetInt
            (DAT_1468b6148,L"ScalabilityGroups",L"sg.AntiAliasingQuality",local_50,param_1);
  FConfigCacheIni::SetInt(DAT_1468b6148,L"ScalabilityGroups",L"sg.ShadowQuality",local_4c,param_1);
  FConfigCacheIni::SetInt
            (DAT_1468b6148,L"ScalabilityGroups",L"sg.PostProcessQuality",local_48,param_1);
  FConfigCacheIni::SetInt(DAT_1468b6148,L"ScalabilityGroups",L"sg.TextureQuality",local_44,param_1);
  FConfigCacheIni::SetInt(DAT_1468b6148,L"ScalabilityGroups",L"sg.EffectsQuality",local_40,param_1);
  FConfigCacheIni::SetInt(DAT_1468b6148,L"ScalabilityGroups",L"sg.FoliageQuality",local_3c,param_1);
  if (local_20 != 0) {
    FMemory::Free();
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1427396d0 FUN_1427396d0 body=975 status=ok
// SIG undefined FUN_1427396d0(void)

void FUN_1427396d0(longlong param_1,longlong param_2,longlong *param_3,char param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,int param_8,longlong param_9)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 local_res20 [2];
  undefined4 local_1d8;
  undefined4 local_1d4;
  int local_1d0 [2];
  undefined4 local_1c8;
  undefined4 local_1c4 [3];
  undefined1 local_1b8 [144];
  longlong local_128;
  undefined4 local_118;
  undefined1 local_f8 [144];
  longlong local_68;
  undefined4 local_58;
  undefined8 local_40;
  
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,param_4);
  FNetBitWriter::FNetBitWriter(local_1b8,param_3[0x17],0);
  iVar3 = param_7;
  if (param_7 < param_8) {
    do {
      puVar4 = (undefined8 *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x20));
      FUN_1425f5f30(param_5,param_6,iVar3);
      local_1d0[0] = iVar3 + 1;
      (**(code **)(*param_3 + 0x68))(param_3,local_1d0);
      if (param_4 != '\0') {
        plVar2 = (longlong *)param_3[1];
        param_7 = -0x54520ff3;
        if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
          (**(code **)(*param_3 + 0x50))(param_3,&param_7,4);
          if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_3,&param_7,4);
          }
        }
        else {
          param_7 = *(int *)*plVar2;
          *plVar2 = *plVar2 + 4;
        }
      }
      plVar2 = (longlong *)(*(int *)((longlong)puVar4 + 0xc) + param_9);
      if (*(char *)((longlong)puVar4 + 0x1c) == '\0') {
        FUN_141693430(local_1b8);
        local_1c8 = (undefined4)plVar2[1];
        FUN_141694b60(local_1b8,&local_1c8);
        iVar5 = 0;
        if (0 < (int)plVar2[1]) {
          do {
            iVar1 = iVar5 + 1;
            param_7 = iVar1;
            FUN_141694b60(local_1b8,&param_7);
            FUN_1427396d0(param_1,param_2,local_1b8,(char)local_res20[0],param_5,param_6,iVar3 + 1,
                          *(ushort *)(puVar4 + 1) - 1,
                          (longlong)(int)((uint)*(ushort *)((longlong)puVar4 + 10) * iVar5) +
                          *plVar2);
            iVar5 = iVar1;
          } while (iVar1 < (int)plVar2[1]);
        }
        local_1c4[0] = 0;
        FUN_141694b60(local_1b8,local_1c4);
        local_1d8 = local_118;
        (**(code **)(*param_3 + 0x68))(param_3,&local_1d8);
        (**(code **)(*param_3 + 0x58))(param_3,local_128,local_1d8);
        iVar3 = *(ushort *)(puVar4 + 1) - 1;
      }
      else {
        if ((uint)*(ushort *)((longlong)puVar4 + 0x16) == *(uint *)(param_1 + 0x48)) {
          plVar2 = (longlong *)(param_2 + 0x4dc);
        }
        else if ((uint)*(ushort *)((longlong)puVar4 + 0x16) == *(uint *)(param_1 + 0x4c)) {
          plVar2 = (longlong *)(param_2 + 0x4d8);
        }
        FNetBitWriter::FNetBitWriter(local_f8,param_3[0x17],0);
        (**(code **)(*(longlong *)*puVar4 + 0x2c8))((longlong *)*puVar4,local_f8,local_40,plVar2,0);
        local_1d4 = local_58;
        (**(code **)(*param_3 + 0x68))(param_3,&local_1d4);
        (**(code **)(*param_3 + 0x58))(param_3,local_68,local_1d4);
        if ((char)local_res20[0] != '\0') {
          FUN_14273b9a0(puVar4,iVar3,plVar2,param_3);
        }
        if (local_68 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(local_f8);
      }
      iVar3 = iVar3 + 1;
      param_4 = (char)local_res20[0];
    } while (iVar3 < param_8);
  }
  param_8 = 0;
  (**(code **)(*param_3 + 0x68))(param_3,&param_8);
  if (param_4 != '\0') {
    plVar2 = (longlong *)param_3[1];
    local_res20[0] = 0xabadf00d;
    if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,local_res20,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,local_res20,4);
      }
    }
    else {
      local_res20[0] = *(undefined4 *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(local_1b8);
  return;
}



// FUNCTION 142739aa0 FUN_142739aa0 body=710 status=ok
// SIG undefined FUN_142739aa0(void)

void FUN_142739aa0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar11;
  ulonglong in_stack_ffffffffffffffa0;
  longlong local_38;
  int local_30;
  int local_2c;
  
  if (*(int *)(param_1 + 0x98) == 2) {
    uVar7 = 0;
    if ((*(byte *)(*(longlong *)(param_3 + 0x28) + 0xa4) & 1) == 0) {
      if (0 < *(int *)(param_1 + 0x18)) {
        uVar6 = 1;
        uVar9 = uVar7;
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar7);
          iVar8 = (int)uVar9;
          if (lVar5 == 0) {
LAB_142739c49:
            if (((DAT_146534b60 == 0) || (*(char *)(param_1 + 0x70) == '\0')) ||
               ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar7) + 0x38) >> 8 & 1) !=
                0)) {
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar7);
              cVar2 = (**(code **)(*plVar1 + 0x2b8))
                                (plVar1,(longlong)*(int *)((longlong)plVar1 + 0x44) +
                                        *(int *)((longlong)plVar1 + 0x34) *
                                        *(int *)(*(longlong *)(param_1 + 0x10) + 0x10 + uVar7) +
                                        param_5,0,0);
              bVar10 = cVar2 == '\0';
            }
            else {
              lVar5 = *(longlong *)(param_1 + 0x88);
              if (*(longlong *)(param_1 + 0x88) == 0) {
                lVar5 = param_1 + 0x78;
              }
              iVar3 = iVar8;
              if (iVar8 < 0) {
                iVar3 = iVar8 + 0x1f;
              }
              bVar10 = (*(uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4) & uVar6) != 0;
            }
            FBitWriter::WriteBit(param_4,bVar10);
            uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            if (bVar10 != false) goto LAB_142739cd8;
          }
          else {
            lVar4 = UBoolProperty::GetPrivateStaticClass();
            uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            lVar5 = *(longlong *)(lVar5 + 0x10);
            if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
                lVar4 + 0x88)) {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
            if (!bVar10) goto LAB_142739c49;
LAB_142739cd8:
            local_res8[0] = 0;
            in_stack_ffffffffffffff98 =
                 CONCAT44(uVar11,(uint)*(ushort *)(*(longlong *)(param_1 + 0x10) + 0x1a + uVar7));
            FUN_14273b7d0(param_1,param_4,*(undefined8 *)(param_4 + 0xb8),
                          *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0x18 + uVar7),
                          in_stack_ffffffffffffff98,param_5,local_res8,0,0,param_1 + 0x58);
          }
          uVar9 = (ulonglong)(iVar8 + 1U);
          uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
          uVar7 = uVar7 + 0x30;
        } while ((int)(iVar8 + 1U) < *(int *)(param_1 + 0x18));
      }
    }
    else {
      local_38 = 0;
      local_2c = 0;
      local_30 = 0;
      uVar9 = uVar7;
      iVar8 = 0;
      if (0 < *(int *)(param_1 + 0x18)) {
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar9);
          cVar2 = (**(code **)(*plVar1 + 0x2b8))
                            (plVar1,(longlong)*(int *)((longlong)plVar1 + 0x44) +
                                    *(int *)((longlong)plVar1 + 0x34) *
                                    *(int *)(*(longlong *)(param_1 + 0x10) + 0x10 + uVar9) + param_5
                             ,0,0);
          if (cVar2 == '\0') {
            in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffff00000000;
            FUN_142723fe0(param_1,param_1 + 0x30,
                          *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0x18 + uVar9),
                          *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0x1a + uVar9),param_5,
                          in_stack_ffffffffffffffa0,&local_38);
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          uVar9 = uVar9 + 0x30;
          iVar8 = local_30;
        } while ((int)uVar6 < *(int *)(param_1 + 0x18));
      }
      local_30 = iVar8 + 1;
      if (local_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar8);
      }
      *(undefined2 *)(local_38 + (longlong)iVar8 * 2) = 0;
      FUN_142739d70(param_1,0,0,param_5,*(undefined8 *)(param_3 + 0x28),param_4,&local_38);
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142739d70 FUN_142739d70 body=591 status=ok
// SIG undefined FUN_142739d70(void)

void FUN_142739d70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 in_stack_ffffffffffffff10;
  undefined4 uVar7;
  longlong local_d8;
  longlong *plStack_d0;
  longlong local_c8 [2];
  longlong local_b8;
  undefined4 local_b0;
  byte local_a8 [8];
  undefined8 local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  int local_70;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff10 >> 0x20);
  local_a0 = *(undefined8 *)(param_6 + 0xa0);
  local_a8[0] = *(byte *)(param_6 + 0x28) >> 7;
  bVar6 = DAT_146b08f20 == 1;
  FBitWriter::WriteBit(param_6,bVar6);
  uVar3 = *(undefined8 *)(param_5 + 0x68);
  UObjectBaseUtility::GetPathName(*(undefined8 *)(param_1 + 0x50),local_c8,0);
  FUN_1425e5d60(uVar3,&local_d8,local_c8);
  if (local_d8 == 0) {
    plVar5 = (longlong *)FUN_142728890(param_1,local_58);
    if (&local_d8 != plVar5) {
      local_d8 = *plVar5;
      *plVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_d0,plVar5 + 1);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    local_48 = local_d8;
    plStack_40 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
      UNLOCK();
    }
    FUN_1425db5d0(uVar3,local_c8,&local_48);
  }
  iVar2 = *(int *)(param_6 + 0xa0);
  if (*(int *)(param_7 + 8) == 0) {
    FUN_1427396d0(param_1,param_2,param_6,bVar6,uVar3,local_d8,0,
                  CONCAT44(uVar7,*(int *)(param_1 + 0x28) + -1));
  }
  else {
    local_b8 = param_7;
    local_b0 = 0;
    local_98 = &local_b8;
    local_90 = param_1 + 0x20;
    local_88 = param_1 + 0x30;
    local_80 = *(undefined4 *)(param_1 + 0x38);
    local_70 = *(int *)(param_1 + 0x28) + -1;
    local_7c = 0;
    local_78 = 1;
    FUN_142739fc0(param_1,param_2,uVar3,local_d8,param_3,param_6,bVar6,&local_98,param_4);
  }
  if ((longlong)iVar2 == *(longlong *)(param_6 + 0xa0)) {
    FBitWriterMark::Pop(local_a8,param_6);
  }
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_d0 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_d0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
      }
    }
  }
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142739fc0 FUN_142739fc0 body=1207 status=ok
// SIG undefined FUN_142739fc0(void)

void FUN_142739fc0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6,int param_7,longlong *param_8,
                  longlong param_9)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  int local_228 [2];
  undefined4 local_220;
  int local_21c;
  undefined4 local_218 [4];
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  undefined1 local_1c8 [144];
  longlong local_138;
  undefined4 local_128;
  undefined1 local_108 [144];
  longlong local_78;
  undefined4 local_68;
  undefined8 local_50;
  
  plVar5 = param_6;
  iVar9 = -1;
  FNetBitWriter::FNetBitWriter(local_1c8,param_6[0x17],0);
  plVar3 = param_8;
  cVar7 = FRepHandleIterator::NextHandle(param_8);
  cVar6 = (char)param_7;
  while (cVar7 != '\0') {
    puVar8 = (undefined8 *)((longlong)(int)plVar3[6] * 0x20 + *(longlong *)(param_1 + 0x20));
    puVar10 = (undefined8 *)((longlong)(int)plVar3[7] + *(int *)((longlong)puVar8 + 0xc) + param_9);
    FUN_1425f5f30(param_3,param_4);
    if ((0 < *(int *)((longlong)plVar3 + 0x1c)) && (*(int *)((longlong)plVar3 + 0x34) != iVar9)) {
      if (iVar9 != -1) {
        local_228[0] = 0;
        (**(code **)(*plVar5 + 0x68))(plVar5,local_228);
        if (cVar6 != '\0') {
          plVar1 = (longlong *)plVar5[1];
          param_7 = -0x54520ff3;
          if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
            (**(code **)(*plVar5 + 0x50))(plVar5,&param_7,4);
            if ((*(byte *)((longlong)plVar5 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(plVar5,&param_7,4);
            }
          }
          else {
            param_7 = *(int *)*plVar1;
            *plVar1 = *plVar1 + 4;
          }
        }
      }
      local_21c = *(int *)((longlong)plVar3 + 0x34) + 1;
      (**(code **)(*plVar5 + 0x68))(plVar5,&local_21c);
      iVar9 = *(int *)((longlong)plVar3 + 0x34);
    }
    local_228[0] = (int)plVar3[6] + 1;
    (**(code **)(*plVar5 + 0x68))(plVar5,local_228);
    if (cVar6 != '\0') {
      plVar1 = (longlong *)plVar5[1];
      param_7 = -0x54520ff3;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*plVar5 + 0x50))(plVar5,&param_7,4);
        if ((*(byte *)((longlong)plVar5 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar5,&param_7,4);
        }
      }
      else {
        param_7 = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
    }
    if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
      param_7 = *(int *)(puVar10 + 1);
      *(int *)(*plVar3 + 8) = *(int *)(*plVar3 + 8) + 1;
      uVar2 = *puVar10;
      local_208 = *plVar3;
      local_1f8 = *(longlong *)
                   (*(longlong *)plVar3[2] + -8 +
                   (ulonglong)*(ushort *)((longlong)puVar8 + 0x14) * 0x10);
      local_200 = param_1 + 0x20;
      local_1f0 = *(undefined4 *)(local_1f8 + 8);
      local_1ec = (uint)*(ushort *)((longlong)puVar8 + 10);
      local_1e4 = (int)plVar3[6] + 1;
      local_1e0 = *(ushort *)(puVar8 + 1) - 1;
      local_1e8 = param_7;
      FUN_141693430(local_1c8);
      FUN_141694b60(local_1c8,&param_7);
      if (param_7 != 0) {
        FUN_142739fc0(param_1,param_2,param_3,param_4,param_5,local_1c8,cVar6,&local_208,uVar2);
      }
      local_218[0] = 0;
      FUN_141694b60(local_1c8,local_218);
      param_6._0_4_ = local_128;
      (**(code **)(*plVar5 + 0x68))(plVar5,&param_6);
      (**(code **)(*plVar5 + 0x58))(plVar5,local_138,param_6._0_4_);
      *(int *)(*plVar3 + 8) = *(int *)(*plVar3 + 8) + 1;
    }
    else {
      if ((uint)*(ushort *)((longlong)puVar8 + 0x16) == *(uint *)(param_1 + 0x48)) {
        puVar10 = (undefined8 *)(param_2 + 0x4dc);
      }
      else if ((uint)*(ushort *)((longlong)puVar8 + 0x16) == *(uint *)(param_1 + 0x4c)) {
        puVar10 = (undefined8 *)(param_2 + 0x4d8);
      }
      lVar4 = plVar3[6];
      FNetBitWriter::FNetBitWriter(local_108,plVar5[0x17],0);
      (**(code **)(*(longlong *)*puVar8 + 0x2c8))((longlong *)*puVar8,local_108,local_50,puVar10,0);
      local_220 = local_68;
      (**(code **)(*plVar5 + 0x68))(plVar5,&local_220);
      (**(code **)(*plVar5 + 0x58))(plVar5,local_78,local_220);
      if (cVar6 != '\0') {
        FUN_14273b9a0(puVar8,(int)lVar4,puVar10,plVar5);
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_108);
    }
    cVar7 = FRepHandleIterator::NextHandle(plVar3);
  }
  param_6._0_4_ = 0;
  (**(code **)(*plVar5 + 0x68))(plVar5,&param_6);
  if (cVar6 != '\0') {
    plVar3 = (longlong *)plVar5[1];
    param_7 = -0x54520ff3;
    if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
      (**(code **)(*plVar5 + 0x50))(plVar5,&param_7,4);
      if ((*(byte *)((longlong)plVar5 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar5,&param_7,4);
      }
    }
    else {
      param_7 = *(int *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(local_1c8);
  return;
}



// FUNCTION 14273a480 FUN_14273a480 body=1031 status=ok
// SIG undefined FUN_14273a480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14273a480(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  char param_5,longlong *param_6,longlong param_7,int param_8,undefined8 *param_9)

{
  longlong *plVar1;
  char cVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  ushort local_98 [2];
  undefined4 local_94;
  uint local_90 [2];
  longlong local_88;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_50;
  
  cVar2 = FRepHandleIterator::NextHandle(param_6);
  if (cVar2 != '\0') {
    local_88 = param_1 + 0x20;
    do {
      puVar4 = (undefined8 *)((longlong)(int)param_6[6] * 0x20 + *(longlong *)(param_1 + 0x20));
      puVar5 = (undefined8 *)
               ((longlong)(int)param_6[7] + *(int *)((longlong)puVar4 + 0xc) + param_7);
      if (*(char *)((longlong)puVar4 + 0x1c) == '\0') {
        local_90[0] = (uint)*(ushort *)((longlong)param_6 + 0x2c);
        (**(code **)(*param_4 + 0x68))(param_4,local_90);
        if (param_5 != '\0') {
          plVar1 = (longlong *)param_4[1];
          local_94 = 0xabadf00d;
          if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
            (**(code **)(*param_4 + 0x50))(param_4,&local_94,4);
            if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_4,&local_94,4);
            }
          }
          else {
            local_94 = *(undefined4 *)*plVar1;
            *plVar1 = *plVar1 + 4;
          }
        }
        plVar1 = (longlong *)param_4[1];
        local_98[0] = *(ushort *)(puVar5 + 1);
        if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
          (**(code **)(*param_4 + 0x50))(param_4,local_98,2);
          if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_4,local_98,2);
          }
        }
        else {
          local_98[0] = *(ushort *)*plVar1;
          *plVar1 = *plVar1 + 2;
        }
        *(int *)(*param_6 + 8) = *(int *)(*param_6 + 8) + 1;
        local_78 = *param_6;
        local_68 = *(longlong *)
                    (*(longlong *)param_6[2] + -8 +
                    (ulonglong)*(ushort *)((longlong)puVar4 + 0x14) * 0x10);
        local_70 = local_88;
        local_60 = *(undefined4 *)(local_68 + 8);
        local_5c = (uint)*(ushort *)((longlong)puVar4 + 10);
        local_58 = (uint)local_98[0];
        local_54 = (int)param_6[6] + 1;
        local_50 = *(ushort *)(puVar4 + 1) - 1;
        FUN_14273a480(param_1,param_2,param_3,param_4,param_5,&local_78,*puVar5,param_8 + 1,param_9)
        ;
        local_90[0] = 0;
        *(int *)(*param_6 + 8) = *(int *)(*param_6 + 8) + 1;
        (**(code **)(*param_4 + 0x68))(param_4,local_90);
        if (param_5 != '\0') {
          plVar1 = (longlong *)param_4[1];
          local_94 = 0xabadf00d;
          if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
            (**(code **)(*param_4 + 0x50))(param_4,&local_94,4);
            if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_4,&local_94,4);
            }
          }
          else {
            local_94 = *(undefined4 *)*plVar1;
            *plVar1 = *plVar1 + 4;
          }
        }
      }
      else {
        if ((uint)*(ushort *)((longlong)puVar4 + 0x16) == *(uint *)(param_1 + 0x48)) {
          puVar5 = (undefined8 *)(param_2 + 0x4dc);
        }
        else if ((uint)*(ushort *)((longlong)puVar4 + 0x16) == *(uint *)(param_1 + 0x4c)) {
          puVar5 = (undefined8 *)(param_2 + 0x4d8);
        }
        if ((DAT_146534b60 != 0) && ((*(byte *)((longlong)puVar4 + 0x1d) & 1) != 0)) {
          piVar3 = (int *)*param_9;
          piVar6 = piVar3 + (longlong)*(int *)(param_9 + 1) * 8;
          for (; piVar3 != piVar6; piVar3 = piVar3 + 8) {
            if (((piVar3[2] == param_8 && piVar3[3] == (int)puVar5) &&
                piVar3[1] == *(int *)((longlong)param_6 + 0x34)) && *piVar3 == (int)param_6[6]) {
              if (piVar3 != (int *)0x0) {
                _DAT_146afefe0 = _DAT_146afefe0 + 1;
                (**(code **)(*param_4 + 0x1f0))
                          (param_4,*(undefined8 *)(param_9[2] + 0x90),piVar3[4],(longlong)piVar3[5])
                ;
                goto LAB_14273a83b;
              }
              break;
            }
          }
        }
        _DAT_146afefe4 = _DAT_146afefe4 + 1;
        local_90[0] = (uint)*(ushort *)((longlong)param_6 + 0x2c);
        (**(code **)(*param_4 + 0x68))(param_4,local_90);
        if (param_5 != '\0') {
          plVar1 = (longlong *)param_4[1];
          local_94 = 0xabadf00d;
          if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
            (**(code **)(*param_4 + 0x50))(param_4,&local_94,4);
            if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_4,&local_94,4);
            }
          }
          else {
            local_94 = *(undefined4 *)*plVar1;
            *plVar1 = *plVar1 + 4;
          }
        }
        (**(code **)(*(longlong *)*puVar4 + 0x2c8))
                  ((longlong *)*puVar4,param_4,param_4[0x17],puVar5,0);
        if (param_5 != '\0') {
          FUN_14273b9a0(puVar4,(int)param_6[6],puVar5,param_4);
        }
      }
LAB_14273a83b:
      cVar2 = FRepHandleIterator::NextHandle(param_6);
    } while (cVar2 != '\0');
  }
  return;
}



// FUNCTION 14273a890 FUN_14273a890 body=351 status=ok
// SIG undefined FUN_14273a890(void)

float * FUN_14273a890(float *param_1,float param_2,float param_3,longlong param_4)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = 0;
  lVar4 = 0;
  fVar6 = -0.5 / param_2;
  param_2 = 0.15923566 / param_2;
  do {
    fVar5 = param_3 / (*(float *)(param_4 + lVar4 * 4) + 0.001);
    fVar5 = _guard_xfg_dispatch_icall_nop(fVar5 * fVar5 * fVar6);
    pfVar2 = param_1;
    if ((lVar4 != 0) && (pfVar2 = param_1 + 1, lVar4 != 1)) {
      pfVar2 = param_1 + 2;
    }
    fVar1 = *(float *)(param_4 + 4 + lVar4 * 4);
    *pfVar2 = fVar5 * param_2;
    fVar5 = param_3 / (fVar1 + 0.001);
    fVar5 = _guard_xfg_dispatch_icall_nop(fVar5 * fVar5 * fVar6);
    pfVar2 = param_1;
    if ((iVar3 != -1) && (pfVar2 = param_1 + 1, iVar3 != 0)) {
      pfVar2 = param_1 + 2;
    }
    fVar1 = *(float *)(param_4 + 8 + lVar4 * 4);
    *pfVar2 = fVar5 * param_2;
    fVar5 = param_3 / (fVar1 + 0.001);
    fVar5 = _guard_xfg_dispatch_icall_nop(fVar5 * fVar5 * fVar6);
    pfVar2 = param_1;
    if ((iVar3 != -2) && (pfVar2 = param_1 + 1, iVar3 != -1)) {
      pfVar2 = param_1 + 2;
    }
    iVar3 = iVar3 + 3;
    lVar4 = lVar4 + 3;
    *pfVar2 = fVar5 * param_2;
  } while (lVar4 < 3);
  return param_1;
}



// FUNCTION 14273a9f0 SeparableSSS_Profile body=630 status=ok
// SIG undefined SeparableSSS_Profile(void)

float * SeparableSSS_Profile(float *param_1,undefined4 param_2,undefined4 *param_3)

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
  float *pfVar13;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined1 local_b8 [176];
  
  local_138 = *param_3;
  uStack_134 = param_3[1];
  uStack_130 = param_3[2];
  uStack_12c = param_3[3];
  local_128 = local_138;
  uStack_124 = uStack_134;
  uStack_120 = uStack_130;
  uStack_11c = uStack_12c;
  local_118 = local_138;
  uStack_114 = uStack_134;
  uStack_110 = uStack_130;
  uStack_10c = uStack_12c;
  local_108 = local_138;
  uStack_104 = uStack_134;
  uStack_100 = uStack_130;
  uStack_fc = uStack_12c;
  local_f8 = local_138;
  uStack_f4 = uStack_134;
  uStack_f0 = uStack_130;
  uStack_ec = uStack_12c;
  pfVar13 = (float *)FUN_14273a890(local_e8,0x40ed1eb8,param_2,&local_138);
  fVar1 = pfVar13[2];
  fVar2 = pfVar13[1];
  fVar3 = *pfVar13;
  pfVar13 = (float *)FUN_14273a890(local_dc,0x3ffeb852,param_2,&local_128);
  fVar4 = pfVar13[2];
  fVar5 = *pfVar13;
  fVar6 = pfVar13[1];
  pfVar13 = (float *)FUN_14273a890(local_d0,0x3f1126e9,param_2,&local_118);
  fVar7 = *pfVar13;
  fVar8 = pfVar13[1];
  fVar9 = pfVar13[2];
  pfVar13 = (float *)FUN_14273a890(local_c4,0x3e3f7cee,param_2,&local_108);
  fVar10 = *pfVar13;
  fVar11 = pfVar13[1];
  fVar12 = pfVar13[2];
  pfVar13 = (float *)FUN_14273a890(local_b8,0x3d463f14,param_2,&local_f8);
  *param_1 = *pfVar13 * 0.1 + fVar10 * 0.118 + fVar7 * 0.113 + fVar5 * 0.358 + fVar3 * 0.078;
  fVar3 = pfVar13[2];
  param_1[1] = pfVar13[1] * 0.1 + fVar11 * 0.118 + fVar8 * 0.113 + fVar6 * 0.358 + fVar2 * 0.078;
  param_1[2] = fVar3 * 0.1 + fVar12 * 0.118 + fVar9 * 0.113 + fVar4 * 0.358 + fVar1 * 0.078;
  return param_1;
}



// FUNCTION 14273ac80 FUN_14273ac80 body=12 status=ok
// SIG undefined FUN_14273ac80(void)

void FUN_14273ac80(longlong param_1,undefined8 param_2)

{
  FUN_142724d20(param_1 + 0x10,param_2,0);
  return;
}



// FUNCTION 14273ac90 FUN_14273ac90 body=12 status=ok
// SIG undefined FUN_14273ac90(void)

void FUN_14273ac90(longlong param_1,undefined8 param_2)

{
  FUN_142724f20(param_1 + 0x10,param_2,0);
  return;
}



// FUNCTION 14273acf0 FUN_14273acf0 body=495 status=ok
// SIG undefined FUN_14273acf0(void)

void FUN_14273acf0(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  byte local_res10 [16];
  undefined4 local_res20 [2];
  undefined4 local_28 [4];
  
  FUN_14242a0d0(local_res10,param_2,0,0x10d);
  if ((((*(byte *)(param_2 + 5) & 2) == 0) || (*(int *)(param_1 + 0x54) == 0)) ||
     (*(longlong *)(param_1 + 0x38) != 0)) {
    puVar2 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x50,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x50,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar2 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x54,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x54,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    if (((*(byte *)(param_2 + 5) & 1) != 0) && (*(int *)(param_1 + 0x54) != 0)) {
      FColorVertexBuffer::AllocateData(param_1,param_3);
    }
    if ((((local_res10[0] & 2) == 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 0x20) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))();
      if (0 < iVar3) {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
        *(undefined8 *)(param_1 + 0x48) = uVar4;
      }
    }
  }
  else {
    plVar1 = (longlong *)param_2[1];
    local_res20[0] = 0;
    local_28[0] = 0;
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res20,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res20,4);
      }
    }
    else {
      local_res20[0] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_2[1];
    if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
      *plVar1 = *plVar1 + 4;
      return;
    }
    (**(code **)(*param_2 + 0x50))(param_2,local_28,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_28,4);
      return;
    }
  }
  return;
}



// FUNCTION 14273aee0 FUN_14273aee0 body=319 status=ok
// SIG undefined FUN_14273aee0(void)

void FUN_14273aee0(char *param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  if ((int)param_2[8] < 0x11b) {
    local_res8[0] = 1;
    (**(code **)(*param_2 + 8))(param_2,local_res8);
  }
  pcVar2 = *(char **)param_2[1];
  if ((char *)((undefined8 *)param_2[1])[1] < pcVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,1);
  }
  else {
    *param_1 = *pcVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) goto LAB_14273b006;
  cVar1 = *param_1;
  plVar3 = (longlong *)operator_new(0x60);
  if (cVar1 == '\x02') {
    if (plVar3 == (longlong *)0x0) {
LAB_14273affe:
      plVar3 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar3 + 1) = 4;
      plVar3[2] = 0;
      plVar3[3] = 0;
      *(undefined1 *)(plVar3 + 5) = 0;
      plVar3[6] = 0;
      plVar3[7] = 0;
      *plVar3 = (longlong)&PTR_FUN_144ef08e8;
      plVar3[9] = 0;
      plVar3[10] = 0;
      plVar3[8] = (longlong)&PTR_GetBoundProgramCounterForTimerManager_144e09148;
      *(undefined1 *)(plVar3 + 0xb) = param_3;
    }
  }
  else {
    if (plVar3 == (longlong *)0x0) goto LAB_14273affe;
    *(undefined4 *)(plVar3 + 1) = 4;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 5) = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    *plVar3 = (longlong)&PTR_FUN_144ef0850;
    plVar3[9] = 0;
    plVar3[10] = 0;
    plVar3[8] = (longlong)&PTR_GetBoundProgramCounterForTimerManager_144ef0818;
    *(undefined1 *)(plVar3 + 0xb) = param_3;
  }
  *(longlong **)(param_1 + 8) = plVar3;
LAB_14273b006:
                    /* WARNING: Could not recover jumptable at 0x00014273b01b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x40))(plVar3,param_2);
  return;
}



// FUNCTION 14273b020 FUN_14273b020 body=272 status=ok
// SIG undefined FUN_14273b020(void)

void FUN_14273b020(longlong param_1,longlong *param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  void *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  (**(code **)(*(longlong *)(param_1 + 0x40) + 0x28))(param_1 + 0x40,param_3);
  if ((int)param_2[8] < 0x115) {
    iVar3 = 0;
    *(undefined1 *)(param_1 + 0x60) = 0;
    local_20 = (void *)0x0;
    local_18 = 0;
    local_10 = 0;
    FUN_141f02680(&local_20,param_2,0,param_4,&PTR_GetBoundProgramCounterForTimerManager_144e09148);
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar1 = (int)local_18 * 2;
    if (*(int *)(param_1 + 0x54) != iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x48,iVar1);
      iVar3 = *(int *)(param_1 + 0x50);
    }
    *(int *)(param_1 + 0x50) = iVar1 + iVar3;
    if (*(int *)(param_1 + 0x54) < iVar1 + iVar3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x48,iVar3);
    }
    pvVar2 = local_20;
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x48),local_20,(longlong)*(int *)(param_1 + 0x50));
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    return;
  }
  (**(code **)(*param_2 + 8))(param_2);
  FUN_142724a60(param_1 + 0x48,param_2,0);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  return;
}



// FUNCTION 14273b130 FUN_14273b130 body=434 status=ok
// SIG undefined FUN_14273b130(void)

void FUN_14273b130(longlong param_1,longlong *param_2,undefined1 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  byte local_res8 [8];
  
  FUN_14242a0d0(local_res8,param_2,0,0x10d);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xd8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xd8,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar1 = (int *)(param_1 + 0xdc);
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,piVar1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,piVar1,4);
    }
  }
  else {
    *piVar1 = *piVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xe0);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xe1);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_142721650(param_1,param_3);
  }
  if (((local_res8[0] & 2) == 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 0x20) != 0)) {
    plVar4 = *(longlong **)(param_1 + 0xa0);
    uVar6 = 0;
    iVar7 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
      uVar5 = uVar6;
      if (*piVar1 != 0) {
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x30))();
      }
      *(undefined8 *)(param_1 + 0xc0) = uVar5;
    }
    plVar4 = *(longlong **)(param_1 + 0xb0);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
      if (*piVar1 != 0) {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))();
        iVar7 = *piVar1;
      }
      *(undefined8 *)(param_1 + 200) = uVar6;
      if (((iVar7 != 0) && (*(char *)(param_1 + 0xe0) == '\0')) && (DAT_1464c9c7c == '\0')) {
        FUN_142727e00(param_1,0);
      }
    }
  }
  return;
}



// FUNCTION 14273b2f0 FUN_14273b2f0 body=380 status=ok
// SIG undefined FUN_14273b2f0(void)

void FUN_14273b2f0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  *(undefined1 *)(param_1 + 5) = 1;
  if ((*(int *)(param_1 + 1) != 0) &&
     (SerializeWaveFile(param_1 + 10,*param_1,*(int *)(param_1 + 1) * 2,*(undefined4 *)(param_1 + 2)
                        ,*(undefined4 *)((longlong)param_1 + 0x14)), *(int *)(param_1 + 0xb) != 0))
  {
    *(undefined1 *)(param_1 + 5) = 2;
    uVar3 = FPlatformFileManager::Get();
    plVar4 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar3);
    if (*(int *)(param_1 + 7) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)param_1[6];
    }
    plVar4 = (longlong *)(**(code **)(*plVar4 + 200))(plVar4,puVar5,0,0);
    if (plVar4 != (longlong *)0x0) {
      iVar6 = 0;
      fVar9 = (float)(*(int *)(param_1 + 0xb) / *(int *)((longlong)param_1 + 100));
      iVar8 = -((int)ROUND(-0.5 - (fVar9 + fVar9)) >> 1);
      if (0 < iVar8) {
        do {
          iVar1 = *(int *)((longlong)param_1 + 100);
          iVar7 = *(int *)(param_1 + 0xb) - iVar1 * iVar6;
          if (iVar1 <= iVar7) {
            iVar7 = iVar1;
          }
          cVar2 = (**(code **)(*plVar4 + 0x28))
                            (plVar4,(longlong)(iVar1 * iVar6) + param_1[10],(longlong)iVar7);
          if (cVar2 == '\0') {
            *(undefined4 *)(param_1 + 0xb) = 0;
            if ((*(int *)((longlong)param_1 + 0x5c) < 0) &&
               (*(int *)((longlong)param_1 + 0x5c) != 0)) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 10,0);
            }
            (**(code **)*plVar4)(plVar4,1);
            *(undefined1 *)(param_1 + 5) = 4;
            return;
          }
          LOCK();
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar7;
          UNLOCK();
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar8);
      }
      (**(code **)*plVar4)(plVar4,1);
      *(undefined1 *)(param_1 + 5) = 3;
      return;
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
    if ((*(int *)((longlong)param_1 + 0x5c) < 0) && (*(int *)((longlong)param_1 + 0x5c) != 0)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 10,0);
    }
  }
  *(undefined1 *)(param_1 + 5) = 4;
  return;
}



// FUNCTION 14273b470 FUN_14273b470 body=369 status=ok
// SIG undefined FUN_14273b470(void)

void FUN_14273b470(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    uVar4 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b09368) &&
       (_Init_thread_header(&DAT_146b09368), DAT_146b09368 == -1)) {
      lVar1 = operator_new(0xc0);
      uVar2 = uVar4;
      if (lVar1 != 0) {
        uVar2 = FNetBitWriter::FNetBitWriter(lVar1,0);
      }
      DAT_146b09360 = 0;
      DAT_146b09358 = uVar2;
      atexit(FUN_143eb8740);
      _Init_thread_footer(&DAT_146b09368);
    }
    uVar2 = uVar4;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        FUN_14273b7d0(param_1,param_3,param_4,
                      *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0x18 + uVar2),
                      *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0x1a + uVar2),param_5,param_6,
                      0,0,&DAT_146b09348);
        if (*(char *)(param_3 + 0x28) < '\0') {
          return;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        uVar2 = uVar2 + 0x30;
      } while ((int)uVar3 < *(int *)(param_1 + 0x18));
    }
  }
  return;
}



// FUNCTION 14273b5f0 FUN_14273b5f0 body=466 status=ok
// SIG undefined FUN_14273b5f0(void)

void FUN_14273b5f0(longlong param_1,longlong *param_2,undefined8 param_3,int param_4,
                  longlong *param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong local_58;
  longlong *local_50;
  undefined4 local_48;
  
  plVar3 = param_5;
  plVar1 = (longlong *)param_2[1];
  param_5._0_2_ = *(ushort *)(param_5 + 1);
  plVar10 = (longlong *)((longlong)param_4 * 0x20 + *(longlong *)(param_1 + 0x20));
  if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,&param_5,2);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,&param_5,2);
    }
  }
  else {
    param_5._0_2_ = *(ushort *)*plVar1;
    *plVar1 = *plVar1 + 2;
  }
  bVar7 = *(byte *)(param_2 + 5);
  uVar8 = (uint)(ushort)param_5;
  if ((bVar7 & 1) == 0) {
    uVar8 = *(uint *)(plVar3 + 1);
  }
  if ((DAT_146534b68 < (int)uVar8) ||
     (DAT_146534b6c < (int)(*(ushort *)((longlong)plVar10 + 10) * uVar8))) {
    bVar7 = bVar7 | 0x80;
    *(byte *)(param_2 + 5) = bVar7;
  }
  if (-1 < (char)bVar7) {
    if (((bVar7 & 1) != 0) && ((uint)(ushort)param_5 != *(uint *)(plVar3 + 1))) {
      local_58 = *(longlong *)(*plVar10 + 0x70);
      local_48 = *(undefined4 *)(local_58 + 0x34);
      local_50 = plVar3;
      FUN_1404845d0(&local_58);
    }
    uVar6 = param_8;
    uVar5 = param_7;
    uVar4 = param_6;
    lVar2 = *plVar3;
    iVar9 = 0;
    if (0 < (int)plVar3[1]) {
      do {
        if ((char)param_2[5] < '\0') {
          return;
        }
        FUN_14273b7d0(param_1,param_2,param_3,param_4 + 1,*(ushort *)(plVar10 + 1) - 1,
                      (int)((uint)*(ushort *)((longlong)plVar10 + 10) * iVar9) + lVar2,uVar4,iVar9,
                      uVar5,uVar6);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)plVar3[1]);
    }
  }
  return;
}



// FUNCTION 14273b7d0 FUN_14273b7d0 body=463 status=ok
// SIG undefined FUN_14273b7d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14273b7d0(longlong param_1,longlong *param_2,undefined8 param_3,int param_4,int param_5,
                  longlong param_6,undefined1 *param_7,int param_8,int param_9,undefined8 *param_10)

{
  char cVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  do {
    if ((param_5 <= param_4) || ((char)*(byte *)(param_2 + 5) < '\0')) {
      return;
    }
    puVar3 = (undefined8 *)((longlong)param_4 * 0x20 + *(longlong *)(param_1 + 0x20));
    if (*(char *)((longlong)puVar3 + 0x1c) == '\0') {
      FUN_14273b5f0(param_1,param_2,param_3,param_4,*(int *)((longlong)puVar3 + 0xc) + param_6,
                    param_7,param_9 + 1,param_10);
      param_4 = *(ushort *)(puVar3 + 1) - 1;
    }
    else {
      if (((DAT_146534b60 != 0) && ((*(byte *)(param_2 + 5) & 2) != 0)) &&
         ((*(byte *)((longlong)puVar3 + 0x1d) & 1) != 0)) {
        piVar2 = (int *)*param_10;
        piVar4 = piVar2 + (longlong)*(int *)(param_10 + 1) * 8;
        for (; piVar2 != piVar4; piVar2 = piVar2 + 8) {
          if (((piVar2[3] == *(int *)((longlong)puVar3 + 0xc) + (int)param_6 && piVar2[1] == param_8
               ) && piVar2[2] == param_9) && *piVar2 == param_4) {
            if (piVar2 != (int *)0x0) {
              _DAT_146afefe0 = _DAT_146afefe0 + 1;
              (**(code **)(*param_2 + 0x1f0))
                        (param_2,*(undefined8 *)(param_10[2] + 0x90),piVar2[6],(longlong)piVar2[7]);
              goto LAB_14273b92b;
            }
            break;
          }
        }
      }
      _DAT_146afefe4 = _DAT_146afefe4 + 1;
      cVar1 = (**(code **)(*(longlong *)*puVar3 + 0x2c8))
                        ((longlong *)*puVar3,param_2,param_3,
                         *(int *)((longlong)puVar3 + 0xc) + param_6,0);
      if (cVar1 == '\0') {
        *param_7 = 1;
      }
    }
LAB_14273b92b:
    param_4 = param_4 + 1;
  } while( true );
}



// FUNCTION 14273b9a0 FUN_14273b9a0 body=1026 status=ok
// SIG undefined FUN_14273b9a0(void)

void FUN_14273b9a0(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  bool bVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_1d8 [2];
  void *local_1d0;
  int local_1c8;
  undefined4 local_1c4;
  undefined2 *local_1c0;
  int local_1b8;
  undefined1 local_1a8 [144];
  longlong local_118;
  longlong local_108;
  undefined1 local_e8 [144];
  longlong local_58;
  
  local_1d0 = *(void **)(*param_1 + 0x18);
  local_res10[0] = param_2;
  FName::ToString(&local_1d0,&local_1c0);
  puVar8 = &DAT_143f3eda8;
  puVar9 = &DAT_143f3eda8;
  if (local_1b8 != 0) {
    puVar9 = local_1c0;
  }
  local_1d8[0] = FUN_140438070(puVar9);
  if (local_1c0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_res8[0] = FCrc::MemCrc_DEPRECATED(local_1d8,4);
  local_res8[0] = FCrc::MemCrc_DEPRECATED((longlong)param_1 + 0xc,4,local_res8[0]);
  iVar4 = FCrc::MemCrc_DEPRECATED(local_res10,4,local_res8[0]);
  plVar7 = (longlong *)param_4[1];
  if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
    local_res8[0] = iVar4;
    (**(code **)(*param_4 + 0x50))(param_4,local_res8,4);
    if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_4,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  if (local_res8[0] != iVar4) {
    puVar5 = (undefined8 *)UObjectBaseUtility::GetFullName(*param_1,&local_1c0,0);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar5;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x104,
               L"SerializeReadWritePropertyChecksum: Property checksum marker failed! [%s]",puVar9);
    if (local_1c0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    puVar5 = (undefined8 *)UObjectBaseUtility::GetFullName(*param_1,&local_1c0,0);
    if (*(int *)(puVar5 + 1) != 0) {
      puVar8 = (undefined2 *)*puVar5;
    }
    FDebug::AssertFailed
              (&DAT_14517a35a,"Unknown",0x104,
               L"SerializeReadWritePropertyChecksum: Property checksum marker failed! [%s]",puVar8);
    if (local_1c0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  lVar6 = UObjectPropertyBase::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(*param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
      != lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    FUN_1416884c0(local_1a8,0,CONCAT71((int7)((ulonglong)(lVar6 + 0x88) >> 8),1));
    (**(code **)(*(longlong *)*param_1 + 0x2c8))((longlong *)*param_1,local_1a8,0,param_3,0);
    if ((*(byte *)(param_4 + 5) & 2) != 0) {
      local_1d0 = (void *)0x0;
      local_1c4 = 0;
      uVar1 = *(undefined4 *)(*param_1 + 0x30);
      *(undefined4 *)(*param_1 + 0x30) = 1;
      iVar4 = *(int *)(*param_1 + 0x34) + 4;
      local_1c8 = iVar4;
      if (0 < iVar4) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_1d0);
      }
      iVar3 = local_1c8;
      _Dst = local_1d0;
      _guard_xfg_dispatch_icall_nop(local_1d0,0,(longlong)iVar4);
      *(undefined4 *)((longlong)(iVar3 + -4) + (longlong)_Dst) = 0xabadf00d;
      plVar7 = (longlong *)*param_1;
      if ((*(uint *)(plVar7 + 7) >> 9 & 1) == 0) {
        (**(code **)(*plVar7 + 0x330))(plVar7,_Dst);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  (_Dst,0,(longlong)(*(int *)((longlong)plVar7 + 0x34) * (int)plVar7[6]));
      }
      FUN_1416883a0(local_e8,local_118,local_108);
      (**(code **)(*(longlong *)*param_1 + 0x2c8))((longlong *)*param_1,local_e8,0,_Dst,0);
      FUN_141693430(local_1a8);
      (**(code **)(*(longlong *)*param_1 + 0x2c8))((longlong *)*param_1,local_1a8,0,_Dst,0);
      plVar7 = (longlong *)*param_1;
      if ((~(byte)((ulonglong)plVar7[7] >> 0x24) & 1) != 0) {
        (**(code **)(*plVar7 + 0x328))(plVar7,_Dst);
        plVar7 = (longlong *)*param_1;
      }
      *(undefined4 *)(plVar7 + 6) = uVar1;
      if (local_58 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_e8);
      if (_Dst != (void *)0x0) {
        FMemory::Free(_Dst);
      }
    }
    local_res20[0] = FCrc::MemCrc_DEPRECATED(local_118,local_108 + 7 >> 3,0);
    plVar7 = (longlong *)param_4[1];
    if ((undefined4 *)plVar7[1] < (undefined4 *)*plVar7 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_res20,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_4,local_res20,4);
      }
    }
    else {
      local_res20[0] = *(undefined4 *)*plVar7;
      *plVar7 = *plVar7 + 4;
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_1a8);
  }
  return;
}



// FUNCTION 14273bdb0 FUN_14273bdb0 body=272 status=ok
// SIG undefined FUN_14273bdb0(void)

void FUN_14273bdb0(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Dst;
  undefined8 *puVar2;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 5) = 1;
  if (*(int *)(param_1 + 1) == 0) {
    *(undefined1 *)(param_1 + 5) = 4;
    return;
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x5c)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 10,0);
  }
  SerializeWaveFile(param_1 + 10,*param_1,*(int *)(param_1 + 1) * 2,*(undefined4 *)(param_1 + 2),
                    *(undefined4 *)((longlong)param_1 + 0x14));
  FUN_14171efb0(param_1[4] + 0x140,2);
  _Dst = (void *)FUntypedBulkData::Realloc(param_1[4] + 0x140,*(undefined4 *)(param_1 + 0xb));
  _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[10],(longlong)*(int *)(param_1 + 0xb));
  FUntypedBulkData::Unlock(param_1[4] + 0x140);
  uVar1 = param_1[4];
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = uVar1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_142725930;
  FUN_14158fcd0(2,local_58);
  *(undefined1 *)(param_1 + 5) = 3;
  return;
}



// FUNCTION 14273bed0 FUN_14273bed0 body=564 status=ok
// SIG undefined FUN_14273bed0(void)

void FUN_14273bed0(longlong param_1,byte param_2,byte param_3)

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
  uint uVar11;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_30);
    if ((param_2 == 0) && (param_3 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0x1000000;
    }
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfeffffff;
    *(uint *)(param_1 + 0x18) =
         (param_2 & 0xfffffffd | (uint)param_3 * 2) << 0x19 |
         *(uint *)(param_1 + 0x18) & 0xf9ffffff | uVar11;
    QueryPerformanceCounter(&local_res20);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_30._0_4_);
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
  local_28 = 0;
  local_20 = 0;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 4) = 0;
  *plVar9 = (longlong)&PTR_FUN_145188490;
  plVar9[5] = 0;
  plVar9[2] = param_1;
  *(byte *)(plVar9 + 3) = param_2;
  *(byte *)((longlong)plVar9 + 0x19) = param_3;
  lVar7 = plVar9[5];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(plVar9,0,0xff,1);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(lVar7);
    }
  }
  return;
}



// FUNCTION 14273c110 FUN_14273c110 body=395 status=ok
// SIG undefined FUN_14273c110(void)

void FUN_14273c110(longlong param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  longlong *plVar10;
  undefined1 local_48 [24];
  undefined8 local_30;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_24 = *(undefined4 *)param_3;
  uStack_20 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_1c = *(undefined4 *)(param_3 + 1);
  uStack_18 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_30 = param_1;
  iStack_28 = param_2;
  if ((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) {
    if ((DAT_146ac3ac5 != '\0') ||
       (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 == '\0' && (DAT_1468c21ae != '\0')) &&
        (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)))) {
      plVar10 = (longlong *)FUN_142728b10(local_48,0,0xff);
      lVar3 = *plVar10;
      *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_30;
      *(undefined4 *)(lVar3 + 0x14) = local_30._4_4_;
      *(int *)(lVar3 + 0x18) = iStack_28;
      *(undefined4 *)(lVar3 + 0x1c) = uStack_24;
      *(undefined4 *)(lVar3 + 0x20) = uStack_20;
      *(undefined4 *)(lVar3 + 0x24) = uStack_1c;
      *(undefined4 *)(lVar3 + 0x28) = uStack_18;
      *(undefined4 *)(lVar3 + 0x2c) = uStack_14;
      lVar3 = *plVar10;
      lVar7 = plVar10[2];
      lVar4 = plVar10[1];
      lVar5 = *(longlong *)(lVar3 + 0x38);
      piVar1 = (int *)(lVar5 + 0x48);
      if (lVar5 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_14048a640(lVar3,lVar4,(int)lVar7,1);
      if (lVar5 == 0) {
        return;
      }
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return;
      }
      FGraphEvent::Recycle(lVar5);
      return;
    }
    FBaseGraphTask::GetSmallTaskAllocator();
  }
  else {
    FBaseGraphTask::GetSmallTaskAllocator();
  }
  if (param_2 == 0) {
    uVar6 = param_3[1];
    *(undefined8 *)(param_1 + 0x30) = *param_3;
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    return;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      uVar6 = param_3[1];
      *(undefined8 *)(param_1 + 0x50) = *param_3;
      *(undefined8 *)(param_1 + 0x58) = uVar6;
      return;
    }
    if (param_2 != 3) {
      return;
    }
    uVar6 = param_3[1];
    *(undefined8 *)(param_1 + 0x60) = *param_3;
    *(undefined8 *)(param_1 + 0x68) = uVar6;
    return;
  }
  uVar6 = param_3[1];
  *(undefined8 *)(param_1 + 0x40) = *param_3;
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  return;
}



// FUNCTION 14273c2a0 FUN_14273c2a0 body=239 status=ok
// SIG undefined FUN_14273c2a0(void)

void FUN_14273c2a0(longlong param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  uStack_30 = CONCAT31(uStack_30._1_3_,param_2);
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') goto LAB_14273c2ff;
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_14273c31c;
    }
LAB_14273c2ff:
    FBaseGraphTask::GetSmallTaskAllocator();
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffd;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)param_2 * 2;
    return;
  }
LAB_14273c31c:
  plVar9 = (longlong *)FUN_142728c60(local_28,0,0xff);
  local_38 = (undefined4)param_1;
  uStack_34 = (undefined4)((ulonglong)param_1 >> 0x20);
  lVar3 = *plVar9;
  *(undefined4 *)(lVar3 + 0x10) = local_38;
  *(undefined4 *)(lVar3 + 0x14) = uStack_34;
  *(undefined4 *)(lVar3 + 0x18) = uStack_30;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_2c;
  lVar3 = *plVar9;
  lVar6 = plVar9[2];
  lVar4 = plVar9[1];
  lVar5 = *(longlong *)(lVar3 + 0x28);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  return;
}



// FUNCTION 14273c390 FUN_14273c390 body=401 status=ok
// SIG undefined FUN_14273c390(void)

void FUN_14273c390(longlong param_1,int param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  uStack_2c = CONCAT31(uStack_2c._1_3_,param_3);
  if ((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) {
    if ((DAT_146ac3ac5 != '\0') ||
       (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 == '\0' && (DAT_1468c21ae != '\0')) &&
        (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)))) {
      plVar9 = (longlong *)FUN_142728db0(local_28,0,0xff);
      local_38 = (undefined4)param_1;
      uStack_34 = (undefined4)((ulonglong)param_1 >> 0x20);
      lVar3 = *plVar9;
      *(undefined4 *)(lVar3 + 0x10) = local_38;
      *(undefined4 *)(lVar3 + 0x14) = uStack_34;
      *(int *)(lVar3 + 0x18) = param_2;
      *(undefined4 *)(lVar3 + 0x1c) = uStack_2c;
      lVar3 = *plVar9;
      lVar6 = plVar9[2];
      lVar4 = plVar9[1];
      lVar5 = *(longlong *)(lVar3 + 0x28);
      piVar1 = (int *)(lVar5 + 0x48);
      if (lVar5 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_1409421c0(lVar3,lVar4,(int)lVar6,1);
      if (lVar5 == 0) {
        return;
      }
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return;
      }
      FGraphEvent::Recycle(lVar5);
      return;
    }
    FBaseGraphTask::GetSmallTaskAllocator();
  }
  else {
    FBaseGraphTask::GetSmallTaskAllocator();
  }
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffb;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)param_3 << 2;
    return;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffef;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)param_3 << 4;
      return;
    }
    if (param_2 != 3) {
      return;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffdf;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)param_3 << 5;
    return;
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffff7;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)param_3 << 3;
  return;
}



// FUNCTION 14273c530 FUN_14273c530 body=228 status=ok
// SIG undefined FUN_14273c530(void)

void FUN_14273c530(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') goto LAB_14273c58e;
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_14273c5a1;
    }
LAB_14273c58e:
    FBaseGraphTask::GetSmallTaskAllocator();
    *(char *)(param_1 + 0x24) = (char)param_2;
    return;
  }
LAB_14273c5a1:
  plVar9 = (longlong *)FUN_142728f00(local_28,0,0xff);
  local_38 = (undefined4)param_1;
  uStack_34 = (undefined4)((ulonglong)param_1 >> 0x20);
  lVar3 = *plVar9;
  *(undefined4 *)(lVar3 + 0x10) = local_38;
  *(undefined4 *)(lVar3 + 0x14) = uStack_34;
  *(undefined4 *)(lVar3 + 0x18) = param_2;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_2c;
  lVar3 = *plVar9;
  lVar6 = plVar9[2];
  lVar4 = plVar9[1];
  lVar5 = *(longlong *)(lVar3 + 0x28);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  return;
}



// FUNCTION 14273c620 FUN_14273c620 body=254 status=ok
// SIG undefined FUN_14273c620(void)

void FUN_14273c620(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') goto LAB_14273c680;
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_14273c6ab;
    }
LAB_14273c680:
    FBaseGraphTask::GetSmallTaskAllocator();
    *(longlong *)(param_1 + 0x150) = param_2;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xefffffff;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | -(uint)(param_2 != 0) & 0x10000000;
    return;
  }
LAB_14273c6ab:
  plVar9 = (longlong *)FUN_142729050(local_28,0,0xff);
  local_38 = (undefined4)param_1;
  uStack_34 = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_30 = (undefined4)param_2;
  uStack_2c = (undefined4)((ulonglong)param_2 >> 0x20);
  lVar3 = *plVar9;
  *(undefined4 *)(lVar3 + 0x10) = local_38;
  *(undefined4 *)(lVar3 + 0x14) = uStack_34;
  *(undefined4 *)(lVar3 + 0x18) = uStack_30;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_2c;
  lVar3 = *plVar9;
  lVar6 = plVar9[2];
  lVar4 = plVar9[1];
  lVar5 = *(longlong *)(lVar3 + 0x28);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  return;
}



// FUNCTION 14273c720 FUN_14273c720 body=286 status=ok
// SIG undefined FUN_14273c720(void)

void FUN_14273c720(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') goto LAB_14273c780;
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_14273c7cb;
    }
LAB_14273c780:
    FBaseGraphTask::GetSmallTaskAllocator();
    *(longlong *)(param_1 + 0x148) = param_2;
    if ((param_2 == 0) && (*(longlong *)(param_1 + 0x150) == 0)) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xefffffff;
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x18);
      return;
    }
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xefffffff;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
    return;
  }
LAB_14273c7cb:
  plVar9 = (longlong *)FUN_1427291a0(local_28,0,0xff);
  local_38 = (undefined4)param_1;
  uStack_34 = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_30 = (undefined4)param_2;
  uStack_2c = (undefined4)((ulonglong)param_2 >> 0x20);
  lVar3 = *plVar9;
  *(undefined4 *)(lVar3 + 0x10) = local_38;
  *(undefined4 *)(lVar3 + 0x14) = uStack_34;
  *(undefined4 *)(lVar3 + 0x18) = uStack_30;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_2c;
  lVar3 = *plVar9;
  lVar6 = plVar9[2];
  lVar4 = plVar9[1];
  lVar5 = *(longlong *)(lVar3 + 0x28);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  return;
}



// FUNCTION 14273c840 SetDefaults body=211 status=ok
// SIG undefined SetDefaults(void)

void Scalability::FQualityLevels::SetDefaults(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = GetRenderScaleLevelFromQualityLevel(1);
  *param_1 = uVar3;
  iVar1 = (**(code **)(*DAT_146b091e8 + 0x68))();
  iVar2 = 0;
  if (-1 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  param_1[1] = iVar2;
  iVar1 = (**(code **)(*DAT_146b09200 + 0x68))();
  iVar2 = 0;
  if (-1 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  param_1[2] = iVar2;
  iVar1 = (**(code **)(*DAT_146b09218 + 0x68))();
  iVar2 = 0;
  if (-1 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  param_1[3] = iVar2;
  iVar1 = (**(code **)(*DAT_146b09230 + 0x68))();
  iVar2 = 0;
  if (-1 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  param_1[4] = iVar2;
  iVar1 = (**(code **)(*DAT_146b09248 + 0x68))();
  iVar2 = 0;
  if (-1 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  param_1[5] = iVar2;
  iVar1 = (**(code **)(*DAT_146b09260 + 0x68))();
  iVar2 = 0;
  if (-1 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  param_1[6] = iVar2;
  iVar1 = (**(code **)(*DAT_146b09278 + 0x68))();
  iVar2 = 0;
  if (-1 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  param_1[7] = iVar2;
  return;
}



// FUNCTION 14273c920 FUN_14273c920 body=6 status=ok
// SIG undefined FUN_14273c920(void)

void FUN_14273c920(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  return;
}



// FUNCTION 14273c930 SetFromSingleQualityLevel body=270 status=ok
// SIG undefined SetFromSingleQualityLevel(void)

void Scalability::FQualityLevels::SetFromSingleQualityLevel(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = GetRenderScaleLevelFromQualityLevel(param_2,0);
  *param_1 = uVar3;
  iVar1 = (**(code **)(*DAT_146b091e8 + 0x68))();
  if (param_2 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 + -1;
    if (param_2 < iVar1 + -1) {
      iVar2 = param_2;
    }
  }
  param_1[1] = iVar2;
  iVar1 = (**(code **)(*DAT_146b09200 + 0x68))();
  if (param_2 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 + -1;
    if (param_2 < iVar1 + -1) {
      iVar2 = param_2;
    }
  }
  param_1[2] = iVar2;
  iVar1 = (**(code **)(*DAT_146b09218 + 0x68))();
  if (param_2 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 + -1;
    if (param_2 < iVar1 + -1) {
      iVar2 = param_2;
    }
  }
  param_1[3] = iVar2;
  iVar1 = (**(code **)(*DAT_146b09230 + 0x68))();
  if (param_2 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 + -1;
    if (param_2 < iVar1 + -1) {
      iVar2 = param_2;
    }
  }
  param_1[4] = iVar2;
  iVar1 = (**(code **)(*DAT_146b09248 + 0x68))();
  if (param_2 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 + -1;
    if (param_2 < iVar1 + -1) {
      iVar2 = param_2;
    }
  }
  param_1[5] = iVar2;
  iVar1 = (**(code **)(*DAT_146b09260 + 0x68))();
  if (param_2 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 + -1;
    if (param_2 < iVar1 + -1) {
      iVar2 = param_2;
    }
  }
  param_1[6] = iVar2;
  iVar1 = (**(code **)(*DAT_146b09278 + 0x68))();
  if (param_2 < 0) {
    param_1[7] = 0;
    return;
  }
  iVar2 = iVar1 + -1;
  if (param_2 < iVar1 + -1) {
    iVar2 = param_2;
  }
  param_1[7] = iVar2;
  return;
}



// FUNCTION 14273ca40 FUN_14273ca40 body=272 status=ok
// SIG undefined FUN_14273ca40(void)

void FUN_14273ca40(longlong param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  
  lVar2 = param_2[1];
  lVar8 = (longlong)(int)lVar2;
  bVar7 = false;
  uVar6 = 0;
  if (param_3 == 2) {
    bVar7 = true;
  }
  else {
    uVar5 = uVar6;
    if (param_3 == 3) {
      do {
        if (lVar8 <= (longlong)uVar5) break;
        uVar1 = *(uint *)(*param_2 + uVar5 * 4);
        bVar7 = 0xffff < uVar1;
        uVar5 = uVar5 + 1;
      } while (uVar1 < 0x10000);
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  iVar4 = (bVar7 + 1) * (int)lVar2 * 2;
  uVar5 = uVar6;
  if (*(int *)(param_1 + 0x54) != iVar4) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x48,iVar4);
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x50);
  }
  iVar4 = iVar4 + (int)uVar5;
  *(int *)(param_1 + 0x50) = iVar4;
  if (*(int *)(param_1 + 0x54) < iVar4) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x48);
  }
  if (bVar7 == false) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (0 < lVar8) {
      do {
        *(undefined2 *)(lVar2 + uVar6 * 2) = *(undefined2 *)(*param_2 + uVar6 * 4);
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < lVar8);
    }
    uVar3 = 0;
  }
  else {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x48),(void *)*param_2,(longlong)*(int *)(param_1 + 0x50));
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  return;
}



// FUNCTION 14273cb50 FUN_14273cb50 body=576 status=ok
// SIG undefined FUN_14273cb50(void)

void FUN_14273cb50(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = (**(code **)(*DAT_146b091e8 + 0x68))();
  iVar8 = 0;
  iVar1 = *(int *)(param_1 + 4);
  iVar9 = iVar8;
  if ((-1 < iVar1) && (iVar9 = iVar2 + -1, iVar1 < iVar2 + -1)) {
    iVar9 = iVar1;
  }
  iVar3 = (**(code **)(*DAT_146b09200 + 0x68))();
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = iVar8;
  if ((-1 < iVar1) && (iVar2 = iVar3 + -1, iVar1 < iVar3 + -1)) {
    iVar2 = iVar1;
  }
  iVar4 = (**(code **)(*DAT_146b09218 + 0x68))();
  iVar1 = *(int *)(param_1 + 0xc);
  iVar3 = iVar8;
  if ((-1 < iVar1) && (iVar3 = iVar4 + -1, iVar1 < iVar4 + -1)) {
    iVar3 = iVar1;
  }
  iVar5 = (**(code **)(*DAT_146b09230 + 0x68))();
  iVar1 = *(int *)(param_1 + 0x10);
  iVar4 = iVar8;
  if ((-1 < iVar1) && (iVar4 = iVar5 + -1, iVar1 < iVar5 + -1)) {
    iVar4 = iVar1;
  }
  iVar6 = (**(code **)(*DAT_146b09248 + 0x68))();
  iVar1 = *(int *)(param_1 + 0x14);
  iVar5 = iVar8;
  if ((-1 < iVar1) && (iVar5 = iVar6 + -1, iVar1 < iVar6 + -1)) {
    iVar5 = iVar1;
  }
  iVar7 = (**(code **)(*DAT_146b09260 + 0x68))();
  iVar1 = *(int *)(param_1 + 0x18);
  iVar6 = iVar8;
  if ((-1 < iVar1) && (iVar6 = iVar7 + -1, iVar1 < iVar7 + -1)) {
    iVar6 = iVar1;
  }
  iVar7 = (**(code **)(*DAT_146b09278 + 0x68))();
  iVar1 = *(int *)(param_1 + 0x1c);
  if ((-1 < iVar1) && (iVar8 = iVar7 + -1, iVar1 < iVar7 + -1)) {
    iVar8 = iVar1;
  }
  if ((DAT_146534bb0 == '\0') && (param_2 == '\0')) {
    IConsoleVariable::Set(DAT_146b09140,iVar9,0x1000000);
    IConsoleVariable::Set(DAT_146b09158,iVar2,0x1000000);
    IConsoleVariable::Set(DAT_146b09170,iVar3,0x1000000);
    IConsoleVariable::Set(DAT_146b09188,iVar4,0x1000000);
    IConsoleVariable::Set(DAT_146b091a0,iVar5,0x1000000);
    IConsoleVariable::Set(DAT_146b091b8,iVar6,0x1000000);
    IConsoleVariable::Set(DAT_146b091d0,iVar8,0x1000000);
  }
  else {
    IConsoleVariable::SetWithCurrentPriority(DAT_146b09140,iVar9);
    IConsoleVariable::SetWithCurrentPriority(DAT_146b09158,iVar2);
    IConsoleVariable::SetWithCurrentPriority(DAT_146b09170,iVar3);
    IConsoleVariable::SetWithCurrentPriority(DAT_146b09188,iVar4);
    IConsoleVariable::SetWithCurrentPriority(DAT_146b091a0,iVar5);
    IConsoleVariable::SetWithCurrentPriority(DAT_146b091b8,iVar6);
    IConsoleVariable::SetWithCurrentPriority(DAT_146b091d0,iVar8);
  }
  return;
}



// FUNCTION 14273cd90 FUN_14273cd90 body=253 status=ok
// SIG undefined FUN_14273cd90(void)

void FUN_14273cd90(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  if (((DAT_146ac3ac6 != '\0') && (cVar7 = IsInRenderingThread(), cVar7 != '\0')) ||
     ((DAT_146ac3ac5 == '\0' &&
      (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
       (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    *(undefined4 *)(param_1 + 0x398) = param_2;
    if (*(longlong *)(param_1 + 0x140) == 0) {
      return;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x100) = param_2;
    return;
  }
  plVar9 = (longlong *)FUN_1427292f0(local_28,0,0xff);
  local_38 = (undefined4)param_1;
  uStack_34 = (undefined4)((ulonglong)param_1 >> 0x20);
  lVar3 = *plVar9;
  *(undefined4 *)(lVar3 + 0x10) = local_38;
  *(undefined4 *)(lVar3 + 0x14) = uStack_34;
  *(undefined4 *)(lVar3 + 0x18) = param_2;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_2c;
  lVar3 = *plVar9;
  lVar6 = plVar9[2];
  lVar4 = plVar9[1];
  lVar5 = *(longlong *)(lVar3 + 0x28);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 == 0) {
    return;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return;
  }
  FGraphEvent::Recycle(lVar5);
  return;
}



// FUNCTION 14273cec0 FUN_14273cec0 body=649 status=ok
// SIG undefined FUN_14273cec0(void)

int FUN_14273cec0(longlong param_1)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  int local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b09418) && (_Init_thread_header(&DAT_146b09418), DAT_146b09418 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b09410 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Streaming.PoolSize");
    _Init_thread_footer(&DAT_146b09418);
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FConfigCacheIni::GetSingleLineArray
            (DAT_1468b6148,L"ScalabilitySettings",L"MemoryIndexValues_StreamingPoolLimits",&local_48
             ,&DAT_1468e23e0);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FConfigCacheIni::GetSingleLineArray
            (DAT_1468b6148,L"ScalabilitySettings",L"MemoryIndexValues_StreamingPoolValues",&local_38
             ,&DAT_1468e23e0);
  if ((((int)local_40 == 0) || ((int)local_30 == 0)) || ((int)local_40 != (int)local_30)) {
    iVar2 = -1;
  }
  else {
    iVar6 = (int)local_40 + -1;
    lVar4 = (longlong)iVar6;
    iVar2 = -1;
    if (-1 < iVar6) {
      lVar7 = lVar4 << 4;
      do {
        if (*(int *)(lVar7 + 8 + (longlong)local_48) == 0) {
          pwVar3 = L"";
        }
        else {
          pwVar3 = *(wchar_t **)(lVar7 + (longlong)local_48);
        }
        iVar1 = _wtoi(pwVar3);
        if ((longlong)iVar1 * 0x100000 < param_1) {
          if ((int)(local_38 + (longlong)iVar6 * 2)[1] == 0) {
            pwVar3 = L"";
          }
          else {
            pwVar3 = (wchar_t *)local_38[(longlong)iVar6 * 2];
          }
          iVar2 = _wtoi(pwVar3);
          break;
        }
        iVar6 = iVar6 + -1;
        lVar7 = lVar7 + -0x10;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    plVar5 = DAT_146b09410;
    FString::PrintfImpl(&local_28,&DAT_143f3edc0,iVar2);
    puVar8 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar8 = local_28;
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,puVar8,0x40);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  plVar5 = local_38;
  iVar6 = (int)local_40;
  iVar1 = (int)local_30;
  if ((int)local_30 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar6 = (int)local_40;
  }
  plVar5 = local_48;
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
    iVar6 = (int)local_40;
    plVar5 = local_48;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return iVar2;
}



// FUNCTION 14273d150 FUN_14273d150 body=535 status=ok
// SIG undefined FUN_14273d150(void)

void FUN_14273d150(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  
  lVar12 = param_2[1];
  param_1[0x10] = *param_2;
  param_1[0x11] = lVar12;
  lVar12 = param_2[3];
  param_1[0x12] = param_2[2];
  param_1[0x13] = lVar12;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar12 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 0x14) = (int)param_2[4];
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar1;
  *(int *)(param_1 + 0x15) = (int)lVar12;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar12 = param_2[7];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(param_1 + 0x16) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar1;
  *(int *)(param_1 + 0x17) = (int)lVar12;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar2;
  fVar13 = (float)FMatrix::Determinant();
  lVar11 = 0;
  *(uint *)(param_1 + 3) = (uint)(fVar13 < 0.0) | *(uint *)(param_1 + 3) & 0xfffffffe;
  lVar12 = param_3[1];
  param_1[0x18] = *param_3;
  param_1[0x19] = lVar12;
  param_1[0x1a] = param_3[2];
  *(int *)(param_1 + 0x1b) = (int)param_3[3];
  uVar4 = param_4[1];
  *(undefined8 *)((longlong)param_1 + 0xdc) = *param_4;
  *(undefined8 *)((longlong)param_1 + 0xe4) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0xec) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)(param_4 + 3);
  lVar12 = param_5[1];
  param_1[0x1f] = *param_5;
  *(int *)(param_1 + 0x20) = (int)lVar12;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *(undefined4 *)(param_1 + 0x22) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar1;
  *(undefined4 *)(param_1 + 0x23) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar3;
  lVar12 = DAT_146b08f70;
  if (param_1[0x28] != 0) {
    cVar6 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar7 = GetCurrentThreadId();
      if (DVar7 != DAT_1468c21c0) {
        lVar11 = 4;
      }
    }
    if (0 < *(int *)(lVar12 + lVar11)) {
      *(undefined2 *)(param_1[0x28] + 0xf9) = 0x101;
      goto LAB_14273d346;
    }
  }
  if (*(char *)(param_1[0x28] + 0xfa) != '\0') {
    FUN_14273d9c0(param_1);
    *(undefined1 *)(param_1[0x28] + 0xfa) = 0;
  }
  plVar8 = (longlong *)param_1[0x39];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)FMemory::Malloc(0x1a0,0x10);
    param_1[0x39] = (longlong)plVar8;
  }
  lVar12 = 3;
  plVar5 = param_1 + 0x3a;
  do {
    plVar10 = plVar5;
    plVar9 = plVar8;
    lVar11 = plVar10[1];
    *plVar9 = *plVar10;
    plVar9[1] = lVar11;
    lVar11 = plVar10[3];
    plVar9[2] = plVar10[2];
    plVar9[3] = lVar11;
    lVar11 = plVar10[5];
    plVar9[4] = plVar10[4];
    plVar9[5] = lVar11;
    lVar11 = plVar10[7];
    plVar9[6] = plVar10[6];
    plVar9[7] = lVar11;
    lVar11 = plVar10[9];
    plVar9[8] = plVar10[8];
    plVar9[9] = lVar11;
    lVar11 = plVar10[0xb];
    plVar9[10] = plVar10[10];
    plVar9[0xb] = lVar11;
    lVar11 = plVar10[0xd];
    plVar9[0xc] = plVar10[0xc];
    plVar9[0xd] = lVar11;
    lVar11 = plVar10[0xf];
    plVar9[0xe] = plVar10[0xe];
    plVar9[0xf] = lVar11;
    lVar12 = lVar12 + -1;
    plVar8 = plVar9 + 0x10;
    plVar5 = plVar10 + 0x10;
  } while (lVar12 != 0);
  uVar1 = *(undefined4 *)((longlong)plVar10 + 0x84);
  lVar12 = plVar10[0x11];
  uVar2 = *(undefined4 *)((longlong)plVar10 + 0x8c);
  *(int *)(plVar9 + 0x10) = (int)plVar10[0x10];
  *(undefined4 *)((longlong)plVar9 + 0x84) = uVar1;
  *(int *)(plVar9 + 0x11) = (int)lVar12;
  *(undefined4 *)((longlong)plVar9 + 0x8c) = uVar2;
  uVar1 = *(undefined4 *)((longlong)plVar10 + 0x94);
  lVar12 = plVar10[0x13];
  uVar2 = *(undefined4 *)((longlong)plVar10 + 0x9c);
  *(int *)(plVar9 + 0x12) = (int)plVar10[0x12];
  *(undefined4 *)((longlong)plVar9 + 0x94) = uVar1;
  *(int *)(plVar9 + 0x13) = (int)lVar12;
  *(undefined4 *)((longlong)plVar9 + 0x9c) = uVar2;
  FRenderResource::UpdateRHI(param_1 + 0x31);
  if (param_1[0x28] != 0) {
    *(undefined2 *)(param_1[0x28] + 0xf9) = 0;
  }
LAB_14273d346:
                    /* WARNING: Could not recover jumptable at 0x00014273d360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))(param_1);
  return;
}



// FUNCTION 14273d370 FUN_14273d370 body=126 status=ok
// SIG undefined FUN_14273d370(void)

void FUN_14273d370(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  LOCK();
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  UNLOCK();
  *(longlong *)(param_1 + 0xb0) = param_2;
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (param_2 != 0) {
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)FUN_1415ab270(1);
      *(longlong **)(param_1 + 0xa8) = plVar1;
    }
    (**(code **)(*plVar1 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00014273d3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))(*(longlong **)(param_1 + 0xb0),param_1);
    return;
  }
  FUN_1415b5910();
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_142729f90(param_1 + 0x10);
  LOCK();
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
  UNLOCK();
  return;
}



// FUNCTION 14273d3f0 FUN_14273d3f0 body=667 status=ok
// SIG undefined FUN_14273d3f0(void)

longlong FUN_14273d3f0(longlong *param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  void *_Dst;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar15;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  undefined8 *puVar14;
  
  if ((1 < (byte)(*(byte *)(param_1 + 5) - 1)) && (*(byte *)(param_1 + 5) < 6)) {
    *(undefined1 *)(param_1 + 5) = 1;
    uVar8 = GetTransientPackage();
    lVar9 = NewObject<USoundWave>(uVar8);
    param_1[4] = lVar9;
    iVar2 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)iVar2;
    uVar8 = SUB168(ZEXT816(2) * auVar4,0);
    if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    lVar10 = operator_new(uVar8);
    lVar9 = *param_1;
    *param_1 = lVar10;
    FMemory::operator_delete(lVar9);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,(void *)*param_2,(longlong)(int)param_1[1] * 2);
    puVar12 = (undefined8 *)0x0;
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
      puVar11 = puVar12;
      puVar15 = puVar12;
      if (0 < *(int *)((longlong)param_1 + 0xc)) {
        do {
          puVar14 = puVar12;
          if (0 < (int)param_1[2]) {
            do {
              uVar13 = (uint)puVar14;
              uVar7 = uVar13 & 0x80000001;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
              }
              psVar1 = (short *)((longlong)_Dst + (longlong)(int)(uVar7 + (int)puVar15) * 2);
              *psVar1 = *psVar1 + *(short *)(lVar9 + (longlong)
                                                     (int)((int)puVar11 * (int)param_1[2] + uVar13)
                                                     * 2);
              puVar14 = (undefined8 *)(ulonglong)(uVar13 + 1);
            } while ((int)(uVar13 + 1) < (int)param_1[2]);
          }
          uVar7 = (int)puVar11 + 1;
          puVar11 = (undefined8 *)(ulonglong)uVar7;
          puVar15 = (undefined8 *)(ulonglong)((int)puVar15 + 2);
        } while ((int)uVar7 < *(int *)((longlong)param_1 + 0xc));
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc) * 2;
      *(undefined4 *)(param_1 + 2) = 2;
      *(int *)(param_1 + 1) = iVar2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (longlong)iVar2;
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
      local_28 = 0;
      *puVar11 = &PTR_DoThreadedWork_1451892d8;
      local_18 = 0;
      puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_FUN_143f3f130;
      }
      local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
      Audio::FAsyncSoundWavePCMWriteWorker::FAsyncSoundWavePCMWriteWorker
                (puVar11 + 2,param_1,0,local_58);
      *(undefined4 *)(puVar11 + 0x14) = 0;
      puVar11[0x15] = 0;
      puVar11[0x16] = 0;
      puVar12 = puVar11;
    }
    plVar3 = (longlong *)param_1[9];
    param_1[9] = (longlong)puVar12;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,1);
      puVar12 = (undefined8 *)param_1[9];
    }
    LOCK();
    *(int *)(puVar12 + 0x14) = *(int *)(puVar12 + 0x14) + 1;
    UNLOCK();
    puVar12[0x16] = 0;
    FUN_1415b5910(puVar12[0x15]);
    puVar12[0x15] = 0;
    FUN_142729f90(puVar12 + 2);
    LOCK();
    *(int *)(puVar12 + 0x14) = *(int *)(puVar12 + 0x14) + -1;
    UNLOCK();
    return param_1[4];
  }
  return 0;
}



// FUNCTION 14273d690 FUN_14273d690 body=479 status=ok
// SIG undefined FUN_14273d690(void)

void FUN_14273d690(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar3 = *(int *)(param_2 + 0x494);
  uVar5 = *(uint *)(param_2 + 0x490);
  iVar1 = *(int *)(param_5 + 0x1574);
  iVar6 = iVar3 - uVar5;
  if ((int)uVar5 < iVar3) {
    do {
      uVar2 = uVar5 & 0x8000001f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
      }
      lVar4 = (longlong)(int)uVar2 * 0x20 + param_2;
      if (*(int *)(lVar4 + 0x90) != -1) {
        if (iVar1 < *(int *)(lVar4 + 0x94)) {
          if (*(char *)(lVar4 + 0xa8) == '\0') {
            if (iVar6 != 0x20) goto LAB_14273d80e;
            goto LAB_14273d735;
          }
LAB_14273d748:
          local_38 = *param_6;
          *param_6 = 0;
          local_30 = (undefined4)param_6[1];
          local_2c = *(undefined4 *)((longlong)param_6 + 0xc);
          param_6[1] = 0;
          FUN_142730d60(param_1,param_4,lVar4 + 0x98,&local_38,param_6);
          *(undefined4 *)(lVar4 + 0xa0) = 0;
          if (*(int *)(lVar4 + 0xa4) != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar4 + 0x98,0);
          }
          if (*(char *)(lVar4 + 0xa8) != '\0') {
            *(undefined1 *)(lVar4 + 0xa8) = 0;
            *(int *)(param_2 + 0x498) = *(int *)(param_2 + 0x498) + -1;
          }
          if (local_38 != 0) {
            FMemory::Free();
          }
        }
        else {
LAB_14273d735:
          if ((*(char *)(lVar4 + 0xa8) != '\0') || (iVar6 == 0x20)) goto LAB_14273d748;
        }
        *(undefined4 *)(lVar4 + 0xa0) = 0;
        if (*(int *)(lVar4 + 0xa4) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar4 + 0x98,0);
        }
        *(undefined8 *)(lVar4 + 0x90) = 0xffffffffffffffff;
        *(int *)(param_2 + 0x490) = *(int *)(param_2 + 0x490) + 1;
      }
LAB_14273d80e:
      iVar3 = *(int *)(param_2 + 0x494);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar3);
    uVar5 = *(uint *)(param_2 + 0x490);
  }
  uVar2 = uVar5 & 0x8000001f;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
  }
  *(uint *)(param_2 + 0x490) = uVar2;
  *(uint *)(param_2 + 0x494) = (uVar2 - uVar5) + iVar3;
  return;
}



// FUNCTION 14273d870 UpdateProfile body=95 status=ok
// SIG undefined UpdateProfile(void)

void FSubsurfaceProfileTexture::UpdateProfile(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  
  if (param_2 != -1) {
    uVar12 = param_3[1];
    uVar13 = param_3[2];
    uVar14 = param_3[3];
    lVar17 = (longlong)param_2 * 0x58;
    lVar3 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(lVar17 + lVar3) = *param_3;
    ((undefined8 *)(lVar17 + lVar3))[1] = uVar12;
    uVar12 = param_3[4];
    uVar15 = param_3[5];
    puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar3);
    *puVar1 = uVar13;
    puVar1[1] = uVar14;
    uVar4 = *(undefined4 *)(param_3 + 6);
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x34);
    uVar6 = *(undefined4 *)(param_3 + 7);
    uVar7 = *(undefined4 *)((longlong)param_3 + 0x3c);
    puVar1 = (undefined8 *)(lVar17 + 0x20 + lVar3);
    *puVar1 = uVar12;
    puVar1[1] = uVar15;
    uVar8 = *(undefined4 *)(param_3 + 8);
    uVar9 = *(undefined4 *)((longlong)param_3 + 0x44);
    uVar10 = *(undefined4 *)(param_3 + 9);
    uVar11 = *(undefined4 *)((longlong)param_3 + 0x4c);
    puVar2 = (undefined4 *)(lVar17 + 0x30 + lVar3);
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    puVar2 = (undefined4 *)(lVar17 + 0x40 + lVar3);
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
    plVar16 = DAT_146b09040;
    DAT_146b09040 = (longlong *)0x0;
    if (plVar16 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014273d8ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar16 + 0x30))();
      return;
    }
  }
  return;
}



// FUNCTION 14273d8d0 FUN_14273d8d0 body=237 status=ok
// SIG undefined FUN_14273d8d0(void)

void FUN_14273d8d0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if (*(char *)(*(longlong *)(param_1 + 0x140) + 0xfa) != '\0') {
    FUN_14273d9c0();
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0xfa) = 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x1c8);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FMemory::Malloc(0x1a0,0x10);
    *(undefined8 **)(param_1 + 0x1c8) = puVar6;
  }
  lVar9 = 3;
  puVar5 = (undefined8 *)(param_1 + 0x1d0);
  do {
    puVar8 = puVar5;
    puVar7 = puVar6;
    uVar4 = puVar8[1];
    *puVar7 = *puVar8;
    puVar7[1] = uVar4;
    uVar4 = puVar8[3];
    puVar7[2] = puVar8[2];
    puVar7[3] = uVar4;
    uVar4 = puVar8[5];
    puVar7[4] = puVar8[4];
    puVar7[5] = uVar4;
    uVar4 = puVar8[7];
    puVar7[6] = puVar8[6];
    puVar7[7] = uVar4;
    uVar4 = puVar8[9];
    puVar7[8] = puVar8[8];
    puVar7[9] = uVar4;
    uVar4 = puVar8[0xb];
    puVar7[10] = puVar8[10];
    puVar7[0xb] = uVar4;
    uVar4 = puVar8[0xd];
    puVar7[0xc] = puVar8[0xc];
    puVar7[0xd] = uVar4;
    uVar4 = puVar8[0xf];
    puVar7[0xe] = puVar8[0xe];
    puVar7[0xf] = uVar4;
    lVar9 = lVar9 + -1;
    puVar6 = puVar7 + 0x10;
    puVar5 = puVar8 + 0x10;
  } while (lVar9 != 0);
  uVar1 = *(undefined4 *)((longlong)puVar8 + 0x84);
  uVar2 = *(undefined4 *)(puVar8 + 0x11);
  uVar3 = *(undefined4 *)((longlong)puVar8 + 0x8c);
  *(undefined4 *)(puVar7 + 0x10) = *(undefined4 *)(puVar8 + 0x10);
  *(undefined4 *)((longlong)puVar7 + 0x84) = uVar1;
  *(undefined4 *)(puVar7 + 0x11) = uVar2;
  *(undefined4 *)((longlong)puVar7 + 0x8c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar8 + 0x94);
  uVar2 = *(undefined4 *)(puVar8 + 0x13);
  uVar3 = *(undefined4 *)((longlong)puVar8 + 0x9c);
  *(undefined4 *)(puVar7 + 0x12) = *(undefined4 *)(puVar8 + 0x12);
  *(undefined4 *)((longlong)puVar7 + 0x94) = uVar1;
  *(undefined4 *)(puVar7 + 0x13) = uVar2;
  *(undefined4 *)((longlong)puVar7 + 0x9c) = uVar3;
  FRenderResource::UpdateRHI(param_1 + 0x188);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    *(undefined2 *)(*(longlong *)(param_1 + 0x140) + 0xf9) = 0;
  }
  return;
}



// FUNCTION 14273d9c0 FUN_14273d9c0 body=2025 status=ok
// SIG undefined FUN_14273d9c0(void)

void FUN_14273d9c0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  byte bVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  uint uVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 uVar27;
  float fVar28;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_31c;
  undefined4 uStack_30c;
  undefined4 uStack_2fc;
  undefined4 uStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  undefined4 uStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  undefined4 uStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  uint local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  uint local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined1 local_278 [576];
  
  uVar16 = DAT_1468b5d98;
  uVar15 = DAT_1468b5d94;
  uVar29 = DAT_1468b5d90;
  uStack_33c = 0x3f800000;
  if (((*(byte *)(param_1 + 4) & 0x80) == 0) || (*(int *)(DAT_146b08f88 + 4) < 1)) {
    uStack_340 = 0x3f800000;
    local_348._4_4_ = 0x3f800000;
    local_348._0_4_ = 0;
    uStack_330 = uStack_340;
    uStack_32c = uStack_33c;
  }
  else {
    local_348._0_4_ = *(undefined4 *)(DAT_146b08fa0 + 4);
    local_348._4_4_ = *(undefined4 *)(DAT_146b08fb8 + 4);
    uStack_330 = *(undefined4 *)(DAT_146b08fd0 + 4);
    uStack_32c = *(undefined4 *)(DAT_146b08fe8 + 4);
  }
  fVar1 = *(float *)(param_1 + 0x22);
  fVar2 = *(float *)((longlong)param_1 + 0x114);
  fVar3 = *(float *)(param_1 + 0x23);
  fVar4 = *(float *)((longlong)param_1 + 0x11c);
  lVar14 = param_1[0x27];
  fVar28 = fVar3 + fVar3;
  _uStack_340 = CONCAT44(0x3f800000,(int)param_1[0x20]);
  fVar30 = fVar2 + fVar2;
  uStack_31c = 0;
  uStack_30c = 0;
  uStack_2fc = 0;
  fVar31 = fVar1 * (fVar1 + fVar1);
  uStack_2ec = 0x3f800000;
  fVar32 = fVar4 * (fVar1 + fVar1);
  uStack_334 = local_348._4_4_;
  local_338 = (undefined4)local_348;
  local_348 = param_1[0x1f];
  bVar17 = (**(code **)(*param_1 + 0x20))();
  local_298 = (uint)bVar17;
  local_294 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar21 = (**(code **)(*param_1 + 0x30))(param_1);
  dVar5 = (double)param_1[0x71];
  uStack_2dc = uStack_31c;
  uStack_2cc = uStack_30c;
  dVar6 = (double)param_1[0x72];
  uStack_2bc = uStack_2fc;
  lVar23 = (longlong)dVar5;
  local_2b8 = uVar29;
  uStack_2b4 = uVar15;
  uStack_2b0 = uVar16;
  uStack_2ac = uStack_2ec;
  dVar11 = dVar5;
  if ((lVar23 != -0x8000000000000000) && ((double)lVar23 != dVar5)) {
    auVar9._8_4_ = SUB84(dVar5,0);
    auVar9._0_8_ = dVar5;
    auVar9._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uVar21 = movmskpd(uVar21,auVar9);
    uVar21 = uVar21 & 1;
    dVar11 = (double)(longlong)(lVar23 - (ulonglong)uVar21);
  }
  lVar25 = (longlong)dVar11;
  dVar5 = (dVar5 - (double)lVar25) * 2147483647.0;
  lVar23 = (longlong)dVar5;
  if ((lVar23 != -0x8000000000000000) && ((double)lVar23 != dVar5)) {
    auVar13._8_4_ = SUB84(dVar5,0);
    auVar13._0_8_ = dVar5;
    auVar13._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uVar21 = movmskpd(uVar21,auVar13);
    dVar5 = (double)(longlong)(lVar23 - (ulonglong)(uVar21 & 1));
  }
  lVar24 = 0;
  lVar26 = (longlong)dVar5;
  lVar23 = lVar24;
  if ((-1 < lVar25) && (lVar23 = 0x7fffffff, lVar25 < 0x7fffffff)) {
    lVar23 = lVar25;
  }
  local_288 = (undefined4)lVar23;
  lVar23 = lVar24;
  if ((-1 < lVar26) && (lVar23 = 0x7fffffff, lVar26 < 0x7fffffff)) {
    lVar23 = lVar26;
  }
  lVar25 = (longlong)dVar6;
  local_284 = (uint)lVar23;
  uVar29 = 0;
  uVar21 = local_284;
  dVar5 = dVar6;
  if ((lVar25 != -0x8000000000000000) && (uVar29 = SUB84((double)lVar25,0), (double)lVar25 != dVar6)
     ) {
    auVar10._8_4_ = SUB84(dVar6,0);
    auVar10._0_8_ = dVar6;
    auVar10._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uVar21 = movmskpd(local_284,auVar10);
    uVar21 = uVar21 & 1;
    dVar5 = (double)(longlong)(lVar25 - (ulonglong)uVar21);
  }
  lVar25 = (longlong)dVar5;
  dVar5 = (dVar6 - (double)lVar25) * 2147483647.0;
  lVar23 = (longlong)dVar5;
  if ((lVar23 != -0x8000000000000000) && ((double)lVar23 != dVar5)) {
    auVar12._8_4_ = SUB84(dVar5,0);
    auVar12._0_8_ = dVar5;
    auVar12._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uVar21 = movmskpd(uVar21,auVar12);
    dVar5 = (double)(longlong)(lVar23 - (ulonglong)(uVar21 & 1));
  }
  lVar26 = (longlong)dVar5;
  lVar23 = lVar24;
  if ((-1 < lVar25) && (lVar23 = 0x7fffffff, lVar25 < 0x7fffffff)) {
    lVar23 = lVar25;
  }
  local_280 = (undefined4)lVar23;
  if ((-1 < lVar26) && (lVar24 = 0x7fffffff, lVar26 < 0x7fffffff)) {
    lVar24 = lVar26;
  }
  uVar21 = *(uint *)((longlong)param_1 + 0x1c);
  local_27c = (undefined4)lVar24;
  local_2a8 = local_338;
  uStack_2a4 = uStack_334;
  uStack_2a0 = uStack_330;
  uStack_29c = uStack_32c;
  if ((((*(uint *)((longlong)param_1 + 0x1c) & 0x20000) == 0) && (*(int *)(DAT_146b08f40 + 4) == 0))
     && (*(char *)((longlong)param_1 + 0x14) != '\x02')) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  uVar8 = *(uint *)(param_1 + 4);
  uVar7 = *(undefined1 *)((longlong)param_1 + 0x2c);
  local_2e8 = 1.0 - (fVar3 * fVar28 + fVar2 * fVar30);
  fStack_2e4 = fVar4 * fVar28 + fVar1 * fVar30;
  fStack_2e0 = fVar1 * fVar28 - fVar4 * fVar30;
  local_2d8 = fVar1 * fVar30 - fVar4 * fVar28;
  fStack_2d4 = 1.0 - (fVar3 * fVar28 + fVar31);
  fStack_2d0 = fVar32 + fVar2 * fVar28;
  local_2c8 = fVar4 * fVar30 + fVar1 * fVar28;
  fStack_2c4 = fVar2 * fVar28 - fVar32;
  fStack_2c0 = 1.0 - (fVar2 * fVar30 + fVar31);
  local_290 = extraout_XMM0_Da;
  local_28c = (int)lVar14;
  uVar18 = (**(code **)(*(longlong *)param_1[0x26] + 0x128))((longlong *)param_1[0x26],uVar29);
  uVar19 = (**(code **)(*param_1 + 0x118))(param_1);
  uVar20 = (**(code **)(*param_1 + 0x110))(param_1);
  plVar22 = (longlong *)
            FUN_1408c7250(local_278,param_1 + 0x10,&local_348,param_1 + 0x18,
                          (longlong)param_1 + 0xdc,(byte)(*(uint *)(param_1 + 3) >> 4) & 1,
                          (byte)(uVar8 >> 6) & 1,uVar20,uVar19,uVar27,uVar18,
                          (byte)(uVar21 >> 0x14) & 1,uVar7,(int)param_1[0xe],&local_2e8);
  lVar14 = plVar22[1];
  param_1[0x3a] = *plVar22;
  param_1[0x3b] = lVar14;
  lVar14 = plVar22[3];
  param_1[0x3c] = plVar22[2];
  param_1[0x3d] = lVar14;
  lVar14 = plVar22[5];
  param_1[0x3e] = plVar22[4];
  param_1[0x3f] = lVar14;
  lVar14 = plVar22[7];
  param_1[0x40] = plVar22[6];
  param_1[0x41] = lVar14;
  lVar14 = plVar22[9];
  param_1[0x42] = plVar22[8];
  param_1[0x43] = lVar14;
  lVar14 = plVar22[0xb];
  param_1[0x44] = plVar22[10];
  param_1[0x45] = lVar14;
  lVar14 = plVar22[0xd];
  param_1[0x46] = plVar22[0xc];
  param_1[0x47] = lVar14;
  lVar14 = plVar22[0xf];
  param_1[0x48] = plVar22[0xe];
  param_1[0x49] = lVar14;
  lVar14 = plVar22[0x11];
  param_1[0x4a] = plVar22[0x10];
  param_1[0x4b] = lVar14;
  param_1[0x4c] = plVar22[0x12];
  *(int *)(param_1 + 0x4d) = (int)plVar22[0x13];
  *(undefined4 *)((longlong)param_1 + 0x26c) = *(undefined4 *)((longlong)plVar22 + 0x9c);
  param_1[0x4e] = plVar22[0x14];
  *(int *)(param_1 + 0x4f) = (int)plVar22[0x15];
  *(undefined4 *)((longlong)param_1 + 0x27c) = *(undefined4 *)((longlong)plVar22 + 0xac);
  *(int *)(param_1 + 0x50) = (int)plVar22[0x16];
  *(undefined4 *)((longlong)param_1 + 0x284) = *(undefined4 *)((longlong)plVar22 + 0xb4);
  *(int *)(param_1 + 0x51) = (int)plVar22[0x17];
  *(undefined4 *)((longlong)param_1 + 0x28c) = *(undefined4 *)((longlong)plVar22 + 0xbc);
  *(int *)(param_1 + 0x52) = (int)plVar22[0x18];
  lVar14 = plVar22[0x1b];
  param_1[0x54] = plVar22[0x1a];
  param_1[0x55] = lVar14;
  lVar14 = plVar22[0x1d];
  param_1[0x56] = plVar22[0x1c];
  param_1[0x57] = lVar14;
  lVar14 = plVar22[0x1f];
  param_1[0x58] = plVar22[0x1e];
  param_1[0x59] = lVar14;
  lVar14 = plVar22[0x21];
  param_1[0x5a] = plVar22[0x20];
  param_1[0x5b] = lVar14;
  param_1[0x5c] = plVar22[0x22];
  *(int *)(param_1 + 0x5d) = (int)plVar22[0x23];
  param_1[0x5e] = plVar22[0x24];
  *(int *)(param_1 + 0x5f) = (int)plVar22[0x25];
  *(undefined4 *)((longlong)param_1 + 0x2fc) = *(undefined4 *)((longlong)plVar22 + 300);
  *(int *)(param_1 + 0x60) = (int)plVar22[0x26];
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)plVar22 + 0x134);
  *(int *)(param_1 + 0x61) = (int)plVar22[0x27];
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)plVar22 + 0x13c);
  lVar14 = plVar22[0x29];
  param_1[0x62] = plVar22[0x28];
  param_1[99] = lVar14;
  lVar14 = plVar22[0x2b];
  param_1[100] = plVar22[0x2a];
  param_1[0x65] = lVar14;
  lVar14 = plVar22[0x2d];
  param_1[0x66] = plVar22[0x2c];
  param_1[0x67] = lVar14;
  lVar14 = plVar22[0x2f];
  param_1[0x68] = plVar22[0x2e];
  param_1[0x69] = lVar14;
  *(int *)(param_1 + 0x6a) = (int)plVar22[0x30];
  *(int *)(param_1 + 0x6b) = (int)plVar22[0x31];
  *(undefined4 *)((longlong)param_1 + 0x35c) = *(undefined4 *)((longlong)plVar22 + 0x18c);
  *(int *)(param_1 + 0x6c) = (int)plVar22[0x32];
  *(undefined4 *)((longlong)param_1 + 0x364) = *(undefined4 *)((longlong)plVar22 + 0x194);
  return;
}



// FUNCTION 14273e1c0 FUN_14273e1c0 body=105 status=ok
// SIG undefined FUN_14273e1c0(void)

void FUN_14273e1c0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined1 *param_6)

{
  if (*(int *)(param_1 + 0x98) != 0) {
    *param_5 = 0;
    *param_6 = 0;
    if (*(int *)(param_1 + 0x98) == 2) {
      FUN_14273e230(param_1,param_2,param_2 + 2,param_4,param_3,*param_2,param_4,
                    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x40),param_5,param_6);
    }
  }
  return;
}



// FUNCTION 14273e230 FUN_14273e230 body=2030 status=ok
// SIG undefined FUN_14273e230(void)

void FUN_14273e230(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong param_6,longlong param_7,int param_8,char *param_9,
                  undefined1 *param_10)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined2 *puVar12;
  longlong lVar13;
  void *_Dst;
  void *_Src;
  undefined8 *puVar14;
  longlong *plVar15;
  float *pfVar16;
  uint *puVar17;
  int iVar18;
  float *pfVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined8 local_res18;
  longlong *local_res20;
  undefined4 uVar22;
  longlong *local_208;
  int local_200;
  uint uStack_1fc;
  uint *puStack_1f8;
  undefined4 local_1f0;
  int iStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  uint *puStack_1d8;
  undefined8 uStack_1d0;
  int iStack_1c8;
  int iStack_1c4;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  uint *local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  longlong *local_188;
  char local_180;
  char cStack_17f;
  longlong *local_178;
  undefined8 uStack_170;
  uint *local_168;
  undefined8 uStack_160;
  undefined1 local_158 [12];
  undefined4 uStack_14c;
  undefined1 local_148 [8];
  undefined2 *local_140;
  int local_138;
  longlong *local_130;
  longlong *plStack_128;
  uint *puStack_120;
  undefined4 uStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined1 local_108 [144];
  longlong local_78;
  
  iVar2 = (int)param_3[5];
  puStack_1f8 = (uint *)(param_3 + 2);
  uStack_1fc = 1;
  local_200 = 0;
  iStack_1ec = 0;
  iStack_1e8 = 0;
  if (iVar2 != 0) {
    puVar17 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar17 = puStack_1f8;
    }
    uVar9 = *puVar17;
    iStack_1e8 = 0;
    local_200 = 0;
    while (uVar9 == 0) {
      lVar13 = (longlong)local_200;
      iStack_1e8 = iStack_1e8 + 0x20;
      iVar18 = local_200 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_200;
      local_200 = iVar18;
      if (bVar4) goto LAB_14273e316;
      uVar9 = puVar17[lVar13 + 1];
    }
    uStack_1fc = -uVar9 & uVar9;
    iVar18 = 0x1f;
    if (uStack_1fc != 0) {
      for (; uStack_1fc >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    if (uStack_1fc == 0) {
      iVar18 = 0x20;
    }
    else {
      iVar18 = 0x1f - iVar18;
    }
    iStack_1ec = (iStack_1e8 - iVar18) + 0x1f;
    if (iVar2 < iStack_1ec) {
LAB_14273e316:
      iStack_1ec = iVar2;
    }
  }
  local_1f0 = 0xffffffff;
  uStack_1a0 = CONCAT44(iStack_1ec,0xffffffff);
  auVar5._8_4_ = iStack_1e8;
  auVar5._0_8_ = uStack_1a0;
  auVar5._12_4_ = uStack_1e4;
  puStack_1d8 = (uint *)CONCAT44(uStack_1fc,local_200);
  iStack_1c8 = -1;
  iStack_1c4 = iStack_1ec;
  uStack_1c0 = auVar5._8_8_;
  local_180 = '\0';
  cStack_17f = '\0';
  local_158._8_4_ = SUB84(param_3,0);
  uStack_14c = (undefined4)((ulonglong)param_3 >> 0x20);
  local_158._0_8_ = uStack_1c0;
  local_198._8_4_ = local_158._8_4_;
  local_198._0_8_ = uStack_1c0;
  local_198._12_4_ = uStack_14c;
  iVar2 = iStack_1ec;
  local_res20 = param_4;
  local_1e0 = param_3;
  local_1b8 = param_3;
  uStack_1b0 = puStack_1d8;
  local_1a8 = puStack_1f8;
  local_188 = param_3;
  uStack_1d0 = puStack_1f8;
  if (iStack_1ec < (int)param_3[5]) {
    do {
      iVar18 = *(int *)(*local_1b8 + (longlong)iVar2 * 0xd8);
      local_res18 = CONCAT44(local_res18._4_4_,iVar18);
      if (param_8 <= iVar18) {
        TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
        ::Remove(local_198._8_8_);
        local_180 = '\x01';
        goto LAB_14273e9b9;
      }
      plVar21 = (longlong *)(*local_1b8 + ((longlong)iVar2 * 0x36 + 2) * 4);
      plVar20 = (longlong *)
                ((longlong)*(int *)((longlong)plVar21 + 0xc4) * 0x20 + *(longlong *)(param_1 + 0x20)
                );
      local_208 = (longlong *)((longlong)(int)plVar21[0x18] * 0x30 + *(longlong *)(param_1 + 0x10));
      if (plVar21[0x17] != 0) {
        uVar1 = *(ushort *)((longlong)plVar20 + 10);
        puVar14 = (undefined8 *)((int)plVar20[2] + param_6);
        iVar2 = *(int *)((undefined8 *)(iVar18 + param_7) + 1);
        if ((int)(*(int *)(puVar14 + 1) * (uint)uVar1) <= (int)(iVar2 * (uint)uVar1)) {
          iVar2 = *(int *)(puVar14 + 1);
        }
        FUN_14273e230(param_1,param_2,plVar21[0x17],param_4,param_5,*puVar14,
                      *(undefined8 *)(iVar18 + param_7),iVar2 * (uint)uVar1,param_9,param_10);
        goto LAB_14273e9b9;
      }
      iVar2 = (int)plVar21[5];
      puStack_1d8 = (uint *)(plVar21 + 2);
      bVar4 = false;
      local_1e0 = (longlong *)0x100000000;
      uStack_1d0._4_4_ = 0;
      iStack_1c8 = 0;
      if (iVar2 != 0) {
        puVar17 = (uint *)plVar21[4];
        if ((uint *)plVar21[4] == (uint *)0x0) {
          puVar17 = puStack_1d8;
        }
        uVar9 = *puVar17;
        iVar10 = 0;
        iStack_1c8 = 0;
        while (uVar9 == 0) {
          iStack_1c8 = iStack_1c8 + 0x20;
          uVar6 = (ulonglong)local_1e0 >> 0x20;
          local_1e0 = (longlong *)CONCAT44((int)uVar6,iVar10 + 1);
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10) goto LAB_14273e541;
          uVar9 = puVar17[(longlong)iVar10 + 1];
          iVar10 = iVar10 + 1;
        }
        uVar9 = -uVar9 & uVar9;
        iVar10 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        local_1e0 = (longlong *)CONCAT44(uVar9,SUB84(local_1e0,0));
        if (uVar9 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_1d0._4_4_ = (iStack_1c8 - iVar10) + 0x1f;
        if (iVar2 < uStack_1d0._4_4_) {
LAB_14273e541:
          uStack_1d0._4_4_ = iVar2;
        }
      }
      uStack_1d0._0_4_ = 0xffffffff;
      uStack_118 = 0xffffffff;
      iStack_114 = uStack_1d0._4_4_;
      iStack_110 = iStack_1c8;
      iStack_10c = iStack_1c4;
      plStack_128 = local_1e0;
      uStack_160 = CONCAT44(uStack_1d0._4_4_,0xffffffff);
      uStack_170 = local_1e0;
      local_158._4_4_ = iStack_1c4;
      local_158._0_4_ = iStack_1c8;
      stack0xfffffffffffffeb0 = plVar21;
      plVar15 = plVar21;
      iVar10 = uStack_1d0._4_4_;
      local_178 = plVar21;
      local_168 = puStack_1d8;
      local_130 = plVar21;
      puStack_120 = puStack_1d8;
      bVar7 = false;
      if (uStack_1d0._4_4_ < iVar2) {
        while( true ) {
          bVar4 = bVar7;
          puVar17 = (uint *)(*local_178 + (longlong)iVar10 * 0xc);
          cVar8 = (**(code **)(*param_5 + 0x2e8))(param_5,puVar17,0);
          if (cVar8 == '\0') {
            lVar13 = (**(code **)(*param_5 + 0x2d8))(param_5,puVar17,0);
            if (lVar13 != 0) {
              if ((*puVar17 != 0) && ((*puVar17 & 1) == 0)) {
                FUN_140ac3dd0(plVar21 + 10,local_148,puVar17);
              }
              TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                        (plVar15,iVar10);
              bVar4 = true;
            }
          }
          else {
            TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                      (plVar15,iVar10);
          }
          uStack_160 = CONCAT44(uStack_160._4_4_,(uint)uStack_160 & ~uStack_170._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_170);
          if ((int)local_168[6] <= uStack_160._4_4_) break;
          plVar15 = stack0xfffffffffffffeb0;
          iVar10 = uStack_160._4_4_;
          bVar7 = bVar4;
        }
        iVar18 = (int)local_res18;
      }
      plVar15 = local_208;
      if (!bVar4) goto LAB_14273e974;
      if (*param_9 == '\0') {
        (**(code **)(*local_res20 + 0x1d8))();
        *param_9 = '\x01';
      }
      if ((*(ulonglong *)(*plVar15 + 0x38) & 0x100000000) != 0) {
        plVar3 = (longlong *)*plVar20;
        _Dst = (void *)((int)plVar20[2] + param_6);
        _Src = (void *)(iVar18 + param_7);
        if (_Dst != _Src) {
          if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) == 0) {
            (**(code **)(*plVar3 + 0x2e8))(plVar3,_Dst,_Src,1);
          }
          else {
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      FNetBitReader::FNetBitReader(local_108,param_5,plVar21[0x14],(longlong)(int)plVar21[0x16]);
      pfVar16 = (float *)(iVar18 + param_7);
      (**(code **)(*(longlong *)*plVar20 + 0x2c8))((longlong *)*plVar20,local_108,param_5,pfVar16,0)
      ;
      if ((*(ulonglong *)(*plVar15 + 0x38) & 0x100000000) == 0) goto LAB_14273e95a;
      if (*(int *)((longlong)plVar15 + 0x24) == 1) goto LAB_14273e947;
      pfVar19 = (float *)((int)plVar20[2] + param_6);
      switch(*(undefined1 *)((longlong)plVar20 + 0x1c)) {
      case 2:
      case 3:
        cVar8 = (**(code **)(*(longlong *)*plVar20 + 0x2b8))((longlong *)*plVar20,pfVar19,pfVar16);
        break;
      case 4:
        if (*pfVar16 != *pfVar19) goto LAB_14273e947;
        goto LAB_14273e95a;
      case 5:
      case 9:
        cVar8 = *pfVar19 == *pfVar16;
        break;
      case 6:
      case 0x15:
        cVar8 = *(char *)pfVar19 == *(char *)pfVar16;
        break;
      case 7:
      case 0x14:
        cVar8 = *(longlong *)pfVar19 == *(longlong *)pfVar16;
        break;
      case 8:
        plVar20 = (longlong *)*plVar20;
        lVar13 = (**(code **)(*plVar20 + 0x378))(plVar20,pfVar19);
        lVar11 = (**(code **)(*plVar20 + 0x378))(plVar20,pfVar16);
        cVar8 = lVar13 == lVar11;
        plVar15 = local_208;
        break;
      case 10:
      case 0xb:
      case 0xd:
      case 0x10:
      case 0x11:
      case 0x12:
        if (((*pfVar16 == *pfVar19) && (pfVar16[1] == pfVar19[1])) && (pfVar16[2] == pfVar19[2]))
        goto LAB_14273e95a;
        goto LAB_14273e947;
      case 0xc:
        cVar8 = FUN_14271c0f0(pfVar19,pfVar16);
        break;
      case 0xe:
        cVar8 = FUniqueNetIdWrapper::operator==(pfVar19,pfVar16);
        break;
      case 0xf:
        cVar8 = FUN_14271c120(pfVar19,pfVar16);
        break;
      case 0x13:
        cVar8 = UKismetStringLibrary::EqualEqual_StriStri(pfVar19,pfVar16);
        break;
      default:
        local_res18 = *(undefined8 *)(*plVar20 + 0x18);
        FName::ToString(&local_res18,&local_140);
        puVar12 = &DAT_143f3eda8;
        if (local_138 != 0) {
          puVar12 = local_140;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
                   *(undefined1 *)((longlong)plVar20 + 0x1c),puVar12);
        uVar22 = (undefined4)((ulonglong)puVar12 >> 0x20);
        if (local_140 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_208 = *(longlong **)(*plVar20 + 0x18);
        FName::ToString(&local_208,&local_200);
        puVar12 = &DAT_143f3eda8;
        if ((int)puStack_1f8 != 0) {
          puVar12 = (undefined2 *)CONCAT44(uStack_1fc,local_200);
        }
        FDebug::AssertFailed
                  ((longlong)
                   L"Failed to get finished soundwave: write operation currently still in progress."
                   + 0x9f,"Unknown",0xc5,L"PropertiesAreIdentical: Unsupported type! %i (%s)",
                   CONCAT44(uVar22,(uint)*(byte *)((longlong)plVar20 + 0x1c)),puVar12);
        if (CONCAT44(uStack_1fc,local_200) != 0) {
          FMemory::Free();
        }
        goto LAB_14273e947;
      case 0xfe:
        cVar8 = FUN_14247c3b0(pfVar19,pfVar16[1]);
        break;
      case 0xff:
        cVar8 = FUN_14247c3d0(pfVar19,pfVar16[1]);
      }
      if (cVar8 == '\0') {
LAB_14273e947:
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2 + 0x70,plVar15);
      }
LAB_14273e95a:
      if (local_78 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_108);
LAB_14273e974:
      if ((int)plVar21[1] - *(int *)((longlong)plVar21 + 0x34) < 1) {
        if (((int)plVar21[1] == *(int *)((longlong)plVar21 + 0x34)) &&
           ((int)plVar21[0xb] == *(int *)((longlong)plVar21 + 0x84))) {
          TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
          ::Remove(local_198._8_8_,uStack_1a0._4_4_);
          local_180 = '\x01';
        }
      }
      else {
        *param_10 = 1;
      }
      param_4 = local_res20;
LAB_14273e9b9:
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(uint)uStack_1a0 & ~uStack_1b0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1b0);
      iVar2 = uStack_1a0._4_4_;
    } while (uStack_1a0._4_4_ < (int)local_1a8[6]);
    if ((local_180 != '\0') && (cStack_17f != '\0')) {
      TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_188,(int)local_188[1] - *(int *)((longlong)local_188 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 14273eb60 FUN_14273eb60 body=34 status=ok
// SIG undefined FUN_14273eb60(void)

undefined8 FUN_14273eb60(longlong param_1)

{
  if ((((*(uint *)(param_1 + 0x1c) & 0x20000) == 0) && (*(int *)(DAT_146b08f40 + 4) == 0)) &&
     (*(char *)(param_1 + 0x14) != '\x02')) {
    return 0;
  }
  return 1;
}



// FUNCTION 14273eb90 WouldSetTransformBeRedundant body=383 status=ok
// SIG undefined WouldSetTransformBeRedundant(void)

undefined8
FPrimitiveSceneProxy::WouldSetTransformBeRedundant
          (longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = 0;
  lVar4 = param_1 - (longlong)param_2;
  do {
    lVar3 = 0;
    pfVar1 = param_2;
    do {
      if (*pfVar1 != *(float *)(lVar4 + 0x80 + (longlong)pfVar1)) {
        return 0;
      }
      lVar3 = lVar3 + 1;
      pfVar1 = pfVar1 + 1;
    } while (lVar3 < 4);
    lVar2 = lVar2 + 1;
    param_2 = param_2 + 4;
  } while (lVar2 < 4);
  if (((((((*param_3 == *(float *)(param_1 + 0xc0)) && (param_3[1] == *(float *)(param_1 + 0xc4)))
         && (param_3[2] == *(float *)(param_1 + 200))) &&
        ((param_3[3] == *(float *)(param_1 + 0xcc) && (param_3[4] == *(float *)(param_1 + 0xd0)))))
       && ((param_3[5] == *(float *)(param_1 + 0xd4) &&
           ((param_3[6] == *(float *)(param_1 + 0xd8) && (*param_4 == *(float *)(param_1 + 0xdc)))))
          )) && (param_4[1] == *(float *)(param_1 + 0xe0))) &&
     ((((param_4[2] == *(float *)(param_1 + 0xe4) && (param_4[3] == *(float *)(param_1 + 0xe8))) &&
       (param_4[4] == *(float *)(param_1 + 0xec))) &&
      (((param_4[5] == *(float *)(param_1 + 0xf0) && (param_4[6] == *(float *)(param_1 + 0xf4))) &&
       ((*param_5 == *(float *)(param_1 + 0xf8) &&
        ((param_5[1] == *(float *)(param_1 + 0xfc) && (param_5[2] == *(float *)(param_1 + 0x100)))))
       )))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14273ed10 FUN_14273ed10 body=494 status=ok
// SIG undefined FUN_14273ed10(void)

undefined8 FUN_14273ed10(longlong param_1)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  void *pvVar3;
  void *pvVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  void *local_48;
  int local_40;
  int local_3c;
  void *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  
  local_res8 = *(undefined8 *)(DAT_146b19a68 + 0x18);
  FName::ToString(&local_res8,&local_48);
  FUN_141671940(&local_28,&local_48,1);
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 4);
  puVar5 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar5 = local_28;
  }
  *(int *)(param_1 + 4) = iVar1 + 1;
  FString::PrintfImpl(&local_38,L"%03d_%s",iVar1,puVar5);
  iVar1 = local_30;
  pvVar3 = local_38;
  local_40 = local_30;
  local_48 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_48,(0xb - (uint)(local_30 != 0)) + local_30,0);
  pvVar4 = local_48;
  _guard_xfg_dispatch_icall_nop(local_48,pvVar3,(longlong)iVar1 * 2);
  iVar1 = local_40;
  lVar2 = (longlong)local_40;
  local_40 = (0xb - (uint)(local_40 != 0)) + local_40;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
    pvVar4 = local_48;
  }
  _Src = local_38;
  local_48 = (void *)0x0;
  lVar2 = lVar2 - (ulonglong)(iVar1 != 0);
  builtin_wcsncpy((wchar_t *)((longlong)pvVar4 + lVar2 * 2),L"_Leaks.t",8);
  *(undefined4 *)((longlong)pvVar4 + lVar2 * 2 + 0x10) = 0x740078;
  *(undefined2 *)((longlong)pvVar4 + lVar2 * 2 + 0x14) = 0;
  local_40 = local_30;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_48,(0xc - (uint)(local_30 != 0)) + local_30,0);
  pvVar3 = local_48;
  _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)local_30 * 2);
  iVar1 = local_40;
  lVar2 = (longlong)local_40;
  local_40 = (0xc - (uint)(local_40 != 0)) + local_40;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
    pvVar3 = local_48;
  }
  lVar2 = lVar2 - (ulonglong)(iVar1 != 0);
  builtin_wcsncpy((wchar_t *)((longlong)pvVar3 + lVar2 * 2),L"_Allocs.",8);
  *(undefined4 *)((longlong)pvVar3 + lVar2 * 2 + 0x10) = 0x780074;
  *(undefined2 *)((longlong)pvVar3 + lVar2 * 2 + 0x14) = 0x74;
  *(undefined2 *)((longlong)pvVar3 + lVar2 * 2 + 0x16) = 0;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 14273ef00 FUN_14273ef00 body=410 status=ok
// SIG undefined FUN_14273ef00(void)

undefined4 *
FUN_14273ef00(longlong *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4,
             ushort param_5,undefined8 param_6,uint param_7,undefined4 param_8)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  undefined4 *puVar10;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar9 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar9 + lVar2) = 0;
  *(undefined8 *)(lVar9 + 8 + lVar2) = 0;
  *(undefined8 *)(lVar9 + 0x10 + lVar2) = 0;
  *(undefined8 *)(lVar9 + 0x18 + lVar2) = 0;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  cVar8 = (char)param_8;
  puVar10 = (undefined4 *)(*param_1 + lVar9);
  *puVar10 = *param_3;
  puVar10[1] = uVar5;
  puVar10[2] = uVar6;
  puVar10[3] = uVar7;
  puVar10[4] = *(undefined4 *)(param_1[2] + 0xa0);
  if ((char)param_7 != '\0') {
    plVar3 = (longlong *)param_1[2];
    param_7 = (uint)param_5;
    (**(code **)(*plVar3 + 0x68))(plVar3,&param_7);
    if (cVar8 != '\0') {
      plVar4 = (longlong *)plVar3[1];
      param_8 = 0xabadf00d;
      if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
        (**(code **)(*plVar3 + 0x50))(plVar3,&param_8,4);
        if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar3,&param_8,4);
        }
      }
      else {
        param_8 = *(undefined4 *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
    }
  }
  puVar10[6] = *(undefined4 *)(param_1[2] + 0xa0);
  (**(code **)(*(longlong *)*param_2 + 0x2c8))((longlong *)*param_2,param_1[2],0,param_6,0);
  puVar10[7] = *(int *)(param_1[2] + 0xa0) - puVar10[6];
  if (cVar8 != '\0') {
    FUN_14273b9a0(param_2,param_4,param_6,param_1[2]);
  }
  puVar10[5] = *(int *)(param_1[2] + 0xa0) - puVar10[4];
  return puVar10;
}



// FUNCTION 14273f0a0 FUN_14273f0a0 body=389 status=ok
// SIG undefined FUN_14273f0a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_14273f0a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_168 [32];
  longlong local_148 [2];
  undefined2 local_138;
  undefined4 local_136;
  undefined2 local_132 [125];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_38 = 1;
  lVar9 = 0;
  TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,0);
  uVar4 = local_38;
  lVar8 = (longlong)(int)local_38;
  local_138 = 0;
  local_136 = 0x100002;
  local_132[0] = 0;
  iVar6 = (int)local_38 + 1;
  local_38 = CONCAT44(local_38._4_4_,iVar6);
  if (local_38._4_4_ < iVar6) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,uVar4 & 0xffffffff);
  }
  (&local_138)[lVar8 * 4] = 0x800;
  *(undefined4 *)((longlong)local_132 + (lVar8 * 2 + -1) * 4) = 0x100102;
  *(undefined2 *)((longlong)local_132 + lVar8 * 2 * 4) = 0;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_148,&DAT_146ab6e78,&local_138);
  plVar1 = (longlong *)(param_1 + 0x30);
  if (plVar1 != local_148) {
    puVar3 = (undefined8 *)*plVar1;
    *plVar1 = local_148[0];
    local_148[0] = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar3 + 1);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
            uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar7 != 0) {
              lVar9 = (&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar9 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_148);
  return;
}



// FUNCTION 14273f230 FUN_14273f230 body=74 status=ok
// SIG undefined FUN_14273f230(void)

undefined8 * FUN_14273f230(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145189648;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14273f280 FUN_14273f280 body=89 status=ok
// SIG undefined FUN_14273f280(void)

undefined8 * FUN_14273f280(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145198188;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_145189648;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14273f2e0 FUN_14273f2e0 body=104 status=ok
// SIG undefined FUN_14273f2e0(void)

undefined8 * FUN_14273f2e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145199f48;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_14509d958;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14273f350 FUN_14273f350 body=456 status=ok
// SIG undefined FUN_14273f350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14273f350(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_28c;
  undefined8 uStack_284;
  undefined8 local_27c;
  undefined4 local_274;
  undefined4 local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [416];
  
  local_268 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_258 = _DAT_1464aa7d0;
  uStack_250 = _DAT_1464aa7d8;
  local_238 = _DAT_1464aa7f0;
  uStack_230 = _DAT_1464aa7f8;
  local_248 = _DAT_1464aa7e0;
  uStack_240 = _DAT_1464aa7e8;
  local_218 = 0x3f80000000000000;
  uStack_210 = 0x3f8000003f800000;
  local_228 = _DAT_1464aa800;
  uStack_220 = uRam00000001464aa808;
  local_208 = 0;
  local_298 = 0;
  local_290 = 0;
  local_27c = 0;
  local_274 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_28c = 0;
  uStack_284 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_1e8 = 0x3f800000;
  uStack_1e0 = 0;
  local_1d8 = 0x3f80000000000000;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0x3f800000;
  uStack_1bc = 0;
  local_200 = 0x3f800000;
  local_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0x3f800000;
  puVar2 = (undefined8 *)
           FUN_1408c7250(local_1a8,&local_1e8,&local_2b8,&local_28c,&local_2a8,1,0,0,0,0,0,1,1,
                         0x3f800000,&local_258);
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FMemory::Malloc(0x1a0,0x10);
    *(undefined8 **)(param_1 + 0x40) = puVar3;
  }
  lVar5 = 3;
  do {
    puVar6 = puVar2;
    puVar4 = puVar3;
    uVar1 = puVar6[1];
    *puVar4 = *puVar6;
    puVar4[1] = uVar1;
    uVar1 = puVar6[3];
    puVar4[2] = puVar6[2];
    puVar4[3] = uVar1;
    uVar1 = puVar6[5];
    puVar4[4] = puVar6[4];
    puVar4[5] = uVar1;
    uVar1 = puVar6[7];
    puVar4[6] = puVar6[6];
    puVar4[7] = uVar1;
    uVar1 = puVar6[9];
    puVar4[8] = puVar6[8];
    puVar4[9] = uVar1;
    uVar1 = puVar6[0xb];
    puVar4[10] = puVar6[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar6[0xd];
    puVar4[0xc] = puVar6[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar6[0xf];
    puVar4[0xe] = puVar6[0xe];
    puVar4[0xf] = uVar1;
    lVar5 = lVar5 + -1;
    puVar3 = puVar4 + 0x10;
    puVar2 = puVar6 + 0x10;
  } while (lVar5 != 0);
  uVar1 = puVar6[0x11];
  puVar4[0x10] = puVar6[0x10];
  puVar4[0x11] = uVar1;
  uVar1 = puVar6[0x13];
  puVar4[0x12] = puVar6[0x12];
  puVar4[0x13] = uVar1;
  return;
}



// FUNCTION 14273f520 operator_new<FKilledEnemyCall,FDefaultAllocator> body=60 status=ok
// SIG undefined operator_new<FKilledEnemyCall,FDefaultAllocator>(void)

longlong operator_new<FKilledEnemyCall,FDefaultAllocator>(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    FUN_14275b460(param_2,iVar1);
  }
  return *param_2 + (longlong)iVar1 * 0x18;
}



// FUNCTION 14273f560 operator<int,FShaderMapFinalizeResults>_TTuple<int,FShaderMapFinalizeResults> body=251 status=ok
// SIG undefined operator<int,FShaderMapFinalizeResults>_TTuple<int,FShaderMapFinalizeResults>(void)

undefined4 *
TPairInitializer<int_const_&,FShaderMapFinalizeResults_&&>::
operator<int,FShaderMapFinalizeResults>_TTuple<int,FShaderMapFinalizeResults>
          (undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[1];
  *param_2 = *(undefined4 *)*param_1;
  param_2[2] = *puVar1;
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(puVar1 + 1);
  *(undefined1 *)((longlong)param_2 + 0xd) = *(undefined1 *)((longlong)puVar1 + 5);
  *(undefined1 *)((longlong)param_2 + 0xe) = *(undefined1 *)((longlong)puVar1 + 6);
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar1 + 2);
  *(undefined8 *)(puVar1 + 2) = 0;
  param_2[6] = puVar1[4];
  param_2[7] = puVar1[5];
  *(undefined8 *)(puVar1 + 4) = 0;
  param_2[8] = puVar1[6];
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  param_2[0x16] = 0xffffffff;
  param_2[0x17] = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  param_2[0x1c] = 0;
  TSparseArray<TSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 10,puVar1 + 8);
  if (*(longlong *)(puVar1 + 0x18) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 0x18,puVar1 + 0x16,4);
  }
  if (*(longlong *)(param_2 + 0x1a) != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_2 + 0x1a) = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = 0;
  param_2[0x1c] = puVar1[0x1a];
  puVar1[0x1a] = 0;
  return param_2;
}



// FUNCTION 14273f660 operator<int,FShaderMapFinalizeResults>_TTuple<int,FShaderMapFinalizeResults> body=113 status=ok
// SIG undefined operator<int,FShaderMapFinalizeResults>_TTuple<int,FShaderMapFinalizeResults>(void)

undefined4 *
TPairInitializer<int_const_&,FShaderMapFinalizeResults_const_&>::
operator<int,FShaderMapFinalizeResults>_TTuple<int,FShaderMapFinalizeResults>
          (undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *(undefined4 *)*param_1;
  FShaderMapCompileResults::FShaderMapCompileResults(param_2 + 2,lVar1);
  param_2[8] = *(undefined4 *)(lVar1 + 0x18);
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  param_2[0x16] = 0xffffffff;
  param_2[0x17] = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  param_2[0x1c] = 0;
  TSet<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::operator=(param_2 + 10,lVar1 + 0x20);
  return param_2;
}



// FUNCTION 14273f6e0 Append<FDefaultSetAllocator> body=556 status=ok
// SIG undefined Append<FDefaultSetAllocator>(void)

void TMap<int,FShaderMapFinalizeResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>_>
     ::Append<FDefaultSetAllocator>(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_98;
  longlong lStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) - *(int *)(param_1 + 0x34)) +
      *(int *)(param_1 + 8)) {
    FUN_14275b250();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  local_98._0_4_ = 0;
  local_98._4_4_ = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98._0_4_ = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)(int)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = (int)local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98._0_4_ = iVar5;
      if (bVar4) goto LAB_14273f7cd;
      uVar3 = puVar9[lVar7 + 1];
    }
    local_98._4_4_ = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (local_98._4_4_ != 0) {
      for (; local_98._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_98._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (iStack_80 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_14273f7cd:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  iStack_48 = (int)local_98;
  uStack_44 = local_98._4_4_;
  uVar8 = uVar3 & 0xffffffe0;
  local_50._0_4_ = SUB84(param_2,0);
  local_50._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_78 = (undefined4)local_50;
  uStack_74 = local_50._4_4_;
  iStack_70 = (int)local_98;
  uStack_6c = local_98._4_4_;
  uStack_84 = uVar3;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & local_88;
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14273f893;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      local_88 = 0xffffffff;
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
    uVar3 = uStack_84;
    if ((int)uVar2 < (int)uStack_84) {
LAB_14273f893:
      uStack_84 = uVar2;
      uVar3 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_5c == uVar3) && (local_68 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_74,local_78) == param_2)) break;
    local_98 = (longlong)(int)uStack_5c * 0x80 + *(longlong *)CONCAT44(uStack_74,local_78);
    lStack_90 = local_98 + 8;
    TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FShaderMapFinalizeResults_const_&>_>
              (param_1,local_res8,&local_98,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 14273f910 Emplace<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_const_&> body=443 status=ok
// SIG undefined Emplace<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_const_&>(void)

int * TSet<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::
      Emplace<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_const_&>
                (longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  bool bVar7;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>::
  TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>
            (local_30,param_3);
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  bVar7 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar7 = local_res8[0] != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14273faa8;
    }
  }
  cVar1 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
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
    *(uint *)((longlong)local_30 + 0x1c) = uVar3;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
         *param_2;
  }
LAB_14273faa8:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 14273fad0 FUN_14273fad0 body=569 status=ok
// SIG undefined FUN_14273fad0(void)

int * FUN_14273fad0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar9 = false;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar8 * 0x28);
  *puVar1 = *(uint *)*param_3;
  puVar1[2] = 0;
  *(undefined2 *)(puVar1 + 3) = 0x101;
  *(undefined1 *)((longlong)puVar1 + 0xe) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 != 1) {
    if (iVar8 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar6 * 0x28) == *puVar1) goto LAB_14273fc2b;
          iVar6 = *(int *)(*param_1 + 0x20 + (longlong)iVar6 * 0x28);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_14273fc2b:
    bVar9 = iVar6 != -1;
    if (bVar9) {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + (longlong)iVar6 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar2 + (longlong)iVar6 * 0x28),puVar1,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar6;
      goto LAB_14273fce0;
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
LAB_14273fce0:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 14273fd10 Emplace<TPairInitializer<int_const_&,FShaderMapFinalizeResults_&&>_> body=403 status=ok
// SIG undefined Emplace<TPairInitializer<int_const_&,FShaderMapFinalizeResults_&&>_>(void)

int * TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,FShaderMapFinalizeResults_&&>_>
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
  
  TSparseArray<TSetElement<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,0>___cdecl(FTextFormatString_const_&)>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  TPairInitializer<int_const_&,FShaderMapFinalizeResults_&&>::
  operator<int,FShaderMapFinalizeResults>_TTuple<int,FShaderMapFinalizeResults>(param_3,local_20);
  local_20[0x1e] = 0xffffffff;
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
          if (*(uint *)((longlong)iVar3 * 0x80 + *param_1) == *local_20) goto LAB_14273fdcb;
          iVar3 = *(int *)((longlong)iVar3 * 0x80 + 0x78 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_14273fdcb:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0x80 + *param_1);
      FShaderMapFinalizeResults::~FShaderMapFinalizeResults((longlong)_Dst + 8);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x78);
      FUN_140483a60(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_14273fe78;
    }
  }
  cVar1 = ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_20;
    local_20[0x1f] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_20[0x1e] =
         *(uint *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_14273fe78:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 14273feb0 Emplace<TPairInitializer<int_const_&,FShaderMapFinalizeResults_const_&>_> body=403 status=ok
// SIG undefined Emplace<TPairInitializer<int_const_&,FShaderMapFinalizeResults_const_&>_>(void)

int * TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,FShaderMapFinalizeResults_const_&>_>
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
  
  TSparseArray<TSetElement<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,0>___cdecl(FTextFormatString_const_&)>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  TPairInitializer<int_const_&,FShaderMapFinalizeResults_const_&>::
  operator<int,FShaderMapFinalizeResults>_TTuple<int,FShaderMapFinalizeResults>(param_3,local_20);
  local_20[0x1e] = 0xffffffff;
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
          if (*(uint *)((longlong)iVar3 * 0x80 + *param_1) == *local_20) goto LAB_14273ff6b;
          iVar3 = *(int *)((longlong)iVar3 * 0x80 + 0x78 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_14273ff6b:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0x80 + *param_1);
      FShaderMapFinalizeResults::~FShaderMapFinalizeResults((longlong)_Dst + 8);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x78);
      FUN_140483a60(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_142740018;
    }
  }
  cVar1 = ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_20;
    local_20[0x1f] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_20[0x1e] =
         *(uint *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_142740018:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 142740050 FUN_142740050 body=898 status=ok
// SIG undefined FUN_142740050(void)

uint * FUN_142740050(longlong *param_1,uint *param_2,longlong *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  char cVar17;
  uint uVar18;
  undefined4 uVar19;
  ulonglong *_Src;
  uint *puVar20;
  uint uVar21;
  bool bVar22;
  uint local_res8 [2];
  uint *local_res10;
  
  iVar16 = 1;
  uVar19 = 0xffffffff;
  local_res10 = param_2;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar15 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar15 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar15);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar15 = *(uint *)(param_1 + 6);
    iVar1 = *(int *)((longlong)(int)uVar15 * 0x20 + 4 + *param_1);
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = uVar15;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar9 = (longlong)((int)(uVar15 + ((int)uVar15 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar20 = (uint *)((longlong)plVar10 + lVar9);
  *puVar20 = *puVar20 | 1 << ((byte)uVar15 & 0x1f);
  puVar2 = (undefined4 *)*param_3;
  lVar12 = (longlong)(int)uVar15 * 0x20;
  _Src = (ulonglong *)(*param_1 + lVar12);
  puVar3 = (ulonglong *)param_3[1];
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  *(undefined4 *)_Src = *puVar2;
  *(undefined4 *)((longlong)_Src + 4) = uVar5;
  *(undefined4 *)(_Src + 1) = uVar6;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar7;
  _Src[2] = *puVar3;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar21 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar21 != 1) {
    TSet<TTuple<TShaderTypePermutation<FShaderType_const_>,FShaderCompileJob_*>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType_const_>,FShaderCompileJob_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar8 = local_res8[0];
    lVar14 = (longlong)(int)local_res8[0];
    bVar22 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar22);
    if (bVar22) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar14 * 0x20 + *param_1),_Src,0x18);
      bVar4 = (byte)uVar15 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar15;
      }
      lVar14 = *param_1;
      *(undefined4 *)(lVar12 + lVar14) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar19 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar12 + 4 + lVar14) = uVar19;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar15;
      plVar10 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar20 = (uint *)((longlong)plVar10 + lVar9);
      *local_res10 = uVar8;
      *puVar20 = *puVar20 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1427403a6;
    }
  }
  if (3 < uVar21) {
    uVar8 = (uVar21 >> 1) + 8;
    iVar16 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar17 = '\0';
    if (uVar8 != 0) {
      iVar11 = 0x1f - iVar16;
    }
    uVar8 = (uVar21 >> 1) + 7;
    iVar16 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar17 = '\x1f' - (char)iVar16;
    }
    iVar16 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar17 & 0x1f);
  }
  if (((int)uVar21 < 1) || (((int)param_1[9] != 0 && (iVar16 <= (int)param_1[9])))) {
    uVar21 = (uint)_Src[1];
    iVar16 = (int)(*_Src >> 4);
    uVar13 = 0x9e3779b9U - iVar16 ^ iVar16 << 8;
    uVar18 = -(uVar13 + iVar16) ^ uVar13 >> 0xd;
    uVar8 = (iVar16 - uVar13) - uVar18 ^ uVar18 >> 0xc;
    uVar13 = (uVar13 - uVar8) - uVar18 ^ uVar8 << 0x10;
    uVar18 = (uVar18 - uVar13) - uVar8 ^ uVar13 >> 5;
    uVar8 = (uVar8 - uVar13) - uVar18 ^ uVar18 >> 3;
    uVar13 = (uVar13 - uVar8) - uVar18 ^ uVar8 << 10;
    uVar8 = ((uVar18 - uVar13) - uVar8 ^ uVar13 >> 0xf) - uVar21 ^ uVar21 >> 0xd;
    uVar13 = (-0x61c88647 - uVar8) - uVar21 ^ uVar8 << 8;
    uVar21 = (uVar21 - uVar13) - uVar8 ^ uVar13 >> 0xd;
    uVar8 = (uVar8 - uVar13) - uVar21 ^ uVar21 >> 0xc;
    uVar13 = (uVar13 - uVar8) - uVar21 ^ uVar8 << 0x10;
    uVar21 = (uVar21 - uVar13) - uVar8 ^ uVar13 >> 5;
    uVar8 = (uVar8 - uVar13) - uVar21 ^ uVar21 >> 3;
    uVar13 = (uVar13 - uVar8) - uVar21 ^ uVar8 << 10;
    uVar21 = ((uVar21 - uVar13) - uVar8 ^ uVar13 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar21;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar21) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(uint *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar21) * 4) =
         uVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar16;
    TSet<TTuple<TShaderTypePermutation<FShaderType_const_>,FShaderCompileJob_*>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType_const_>,FShaderCompileJob_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1427403a6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return local_res10;
}



// FUNCTION 1427403e0 HeapSortInternal<TSharedRef<ISceneViewExtension,1>,FIdentityFunctor,TDereferenceWrapper<TSharedRef<ISceneViewExtension,1>,`FSceneViewExtensions::GatherActiveExtensions'::`2'::SortPriority>_> body=1246 status=ok
// SIG undefined HeapSortInternal<TSharedRef<ISceneViewExtension,1>,FIdentityFunctor,TDereferenceWrapper<TSharedRef<ISceneViewExtension,1>,`FSceneViewExtensions::GatherActiveExtensions'::`2'::SortPriority>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     HeapSortInternal<TSharedRef<ISceneViewExtension,1>,FIdentityFunctor,TDereferenceWrapper<TSharedRef<ISceneViewExtension,1>,_FSceneViewExtensions::GatherActiveExtensions_::_2_::SortPriority>_>
               (undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98 = ((int)param_2 + -2) / 2;
  local_90 = param_1;
  if (-1 < local_98) {
    local_88 = local_98 * 2 + 1;
    local_80 = param_2;
    do {
      iVar13 = local_98;
      if (local_88 < (int)param_2) {
        do {
          iVar14 = iVar13 * 2;
          iVar15 = iVar14 + 1;
          if (iVar14 + 2 < (int)param_2) {
            plVar3 = (longlong *)param_1[(longlong)iVar15 * 2 + 1];
            plVar4 = (longlong *)param_1[(longlong)iVar15 * 2];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            plVar5 = (longlong *)param_1[((longlong)iVar14 + 2) * 2];
            plVar6 = (longlong *)param_1[((longlong)iVar14 + 2) * 2 + 1];
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            iVar11 = (**(code **)(*plVar5 + 0x58))();
            iVar12 = (**(code **)(*plVar4 + 0x58))(plVar4);
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar6 + 1;
              lVar10 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
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
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar3 + 1;
              lVar10 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            if (iVar12 < iVar11) {
              iVar15 = iVar14;
            }
            iVar15 = iVar15 + 1;
            param_1 = local_90;
          }
          puVar17 = param_1 + (longlong)iVar13 * 2;
          puVar16 = param_1 + (longlong)iVar15 * 2;
          plVar3 = (longlong *)puVar16[1];
          plVar4 = (longlong *)*puVar16;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          plVar5 = (longlong *)puVar17[1];
          plVar6 = (longlong *)*puVar17;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          iVar13 = (**(code **)(*plVar6 + 0x58))();
          iVar14 = (**(code **)(*plVar4 + 0x58))(plVar4);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar5 + 1;
            lVar10 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar3 + 1;
            lVar10 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          param_2 = local_80;
          param_1 = local_90;
          if (iVar13 <= iVar14) break;
          if (puVar17 != puVar16) {
            local_78 = *puVar17;
            uStack_70 = puVar17[1];
            uVar7 = *(undefined4 *)((longlong)puVar16 + 4);
            uVar8 = *(undefined4 *)(puVar16 + 1);
            uVar9 = *(undefined4 *)((longlong)puVar16 + 0xc);
            *(undefined4 *)puVar17 = *(undefined4 *)puVar16;
            *(undefined4 *)((longlong)puVar17 + 4) = uVar7;
            *(undefined4 *)(puVar17 + 1) = uVar8;
            *(undefined4 *)((longlong)puVar17 + 0xc) = uVar9;
            *puVar16 = local_78;
            puVar16[1] = uStack_70;
          }
          iVar13 = iVar15;
        } while (iVar15 * 2 + 1 < (int)local_80);
      }
      local_98 = local_98 + -1;
      local_88 = local_88 + -2;
    } while (-1 < local_98);
  }
  local_98 = (int)param_2 + -1;
  if (0 < local_98) {
    local_80 = param_1 + (longlong)local_98 * 2;
    do {
      if (param_1 != local_80) {
        local_68 = *param_1;
        uStack_60 = param_1[1];
        uVar7 = *(undefined4 *)((longlong)local_80 + 4);
        uVar8 = *(undefined4 *)(local_80 + 1);
        uVar9 = *(undefined4 *)((longlong)local_80 + 0xc);
        *(undefined4 *)param_1 = *(undefined4 *)local_80;
        *(undefined4 *)((longlong)param_1 + 4) = uVar7;
        *(undefined4 *)(param_1 + 1) = uVar8;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar9;
        *local_80 = local_68;
        local_80[1] = uStack_60;
      }
      iVar13 = 0;
      if (1 < local_98) {
        do {
          iVar14 = iVar13 * 2;
          iVar15 = iVar14 + 1;
          if (iVar14 + 2 < local_98) {
            plVar3 = (longlong *)param_1[(longlong)iVar15 * 2 + 1];
            plVar4 = (longlong *)param_1[(longlong)iVar15 * 2];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            plVar5 = (longlong *)param_1[((longlong)iVar14 + 2) * 2];
            plVar6 = (longlong *)param_1[((longlong)iVar14 + 2) * 2 + 1];
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            iVar11 = (**(code **)(*plVar5 + 0x58))();
            iVar12 = (**(code **)(*plVar4 + 0x58))(plVar4);
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar6 + 1;
              lVar10 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
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
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar3 + 1;
              lVar10 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            if (iVar12 < iVar11) {
              iVar15 = iVar14;
            }
            iVar15 = iVar15 + 1;
            param_1 = local_90;
          }
          puVar17 = param_1 + (longlong)iVar13 * 2;
          puVar16 = param_1 + (longlong)iVar15 * 2;
          plVar3 = (longlong *)puVar16[1];
          plVar4 = (longlong *)*puVar16;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          plVar5 = (longlong *)puVar17[1];
          plVar6 = (longlong *)*puVar17;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          iVar13 = (**(code **)(*plVar6 + 0x58))();
          iVar14 = (**(code **)(*plVar4 + 0x58))(plVar4);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar5 + 1;
            lVar10 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar3 + 1;
            lVar10 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          param_1 = local_90;
          if (iVar13 <= iVar14) break;
          if (puVar17 != puVar16) {
            local_58 = *puVar17;
            uStack_50 = puVar17[1];
            uVar7 = *(undefined4 *)((longlong)puVar16 + 4);
            uVar8 = *(undefined4 *)(puVar16 + 1);
            uVar9 = *(undefined4 *)((longlong)puVar16 + 0xc);
            *(undefined4 *)puVar17 = *(undefined4 *)puVar16;
            *(undefined4 *)((longlong)puVar17 + 4) = uVar7;
            *(undefined4 *)(puVar17 + 1) = uVar8;
            *(undefined4 *)((longlong)puVar17 + 0xc) = uVar9;
            *puVar16 = local_58;
            puVar16[1] = uStack_50;
          }
          iVar13 = iVar15;
        } while (iVar15 * 2 + 1 < local_98);
      }
      local_98 = local_98 + -1;
      local_80 = local_80 + -2;
    } while (0 < local_98);
  }
  return;
}



// FUNCTION 1427408c0 IntroSortInternal<TSharedRef<ISceneViewExtension,1>,FIdentityFunctor,TDereferenceWrapper<TSharedRef<ISceneViewExtension,1>,`FSceneViewExtensions::GatherActiveExtensions'::`2'::SortPriority>_> body=1478 status=ok
// SIG undefined IntroSortInternal<TSharedRef<ISceneViewExtension,1>,FIdentityFunctor,TDereferenceWrapper<TSharedRef<ISceneViewExtension,1>,`FSceneViewExtensions::GatherActiveExtensions'::`2'::SortPriority>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSharedRef<ISceneViewExtension,1>,FIdentityFunctor,TDereferenceWrapper<TSharedRef<ISceneViewExtension,1>,_FSceneViewExtensions::GatherActiveExtensions_::_2_::SortPriority>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined1 auStack_3f8 [32];
  undefined1 local_3d8;
  longlong *local_3d0;
  undefined8 *local_3c8;
  int local_3c0;
  undefined8 *local_3b8;
  longlong *local_3b0;
  undefined8 local_3a8;
  longlong local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  undefined8 *puVar15;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
    lStack_340 = param_2 * 0x10 + -0x10 + param_1;
    fVar18 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar18 = fVar18 + 1.8446744e+19;
    }
    local_3d8 = param_3;
    local_3a8 = param_4;
    local_348 = param_1;
    fVar18 = ::_guard_xfg_dispatch_icall_nop(fVar18);
    local_338 = (undefined4)(longlong)(fVar18 + fVar18);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    local_3d0 = &local_348;
    do {
      local_3c8 = (undefined8 *)*local_3d0;
      local_3b8 = (undefined8 *)local_3d0[1];
      local_390 = local_3d0[2];
      local_3c0 = (int)local_390;
      lVar13 = ((longlong)local_3b8 - (longlong)local_3c8 >> 4) + 1;
      if ((int)local_390 != 0) {
LAB_1427409d0:
        puVar12 = local_3b8;
        puVar9 = local_3c8;
        if (8 < lVar13) {
          puVar17 = local_3c8 + (lVar13 / 2) * 2;
          if (puVar17 != local_3c8) {
            local_388 = *puVar17;
            uStack_380 = puVar17[1];
            uVar6 = *(undefined4 *)((longlong)local_3c8 + 4);
            uVar7 = *(undefined4 *)(local_3c8 + 1);
            uVar8 = *(undefined4 *)((longlong)local_3c8 + 0xc);
            *(undefined4 *)puVar17 = *(undefined4 *)local_3c8;
            *(undefined4 *)((longlong)puVar17 + 4) = uVar6;
            *(undefined4 *)(puVar17 + 1) = uVar7;
            *(undefined4 *)((longlong)puVar17 + 0xc) = uVar8;
            *local_3c8 = local_388;
            local_3c8[1] = uStack_380;
          }
          puVar17 = local_3b8 + 2;
          puVar14 = local_3c8;
LAB_142740a20:
          puVar15 = puVar14;
          puVar14 = puVar15 + 2;
          if (puVar14 <= puVar12) goto code_r0x000142740a2d;
          goto LAB_142740af1;
        }
        for (; puVar9 < local_3b8; local_3b8 = local_3b8 + -2) {
          puVar17 = puVar9 + 2;
          local_3c8 = puVar9;
          puVar12 = puVar9;
          if (puVar17 <= local_3b8) {
            do {
              plVar3 = (longlong *)puVar17[1];
              plVar4 = (longlong *)*puVar17;
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                UNLOCK();
              }
              plVar5 = (longlong *)local_3c8[1];
              local_3b0 = (longlong *)*local_3c8;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
              }
              iVar10 = (**(code **)(*plVar4 + 0x58))(plVar4);
              iVar11 = (**(code **)(*local_3b0 + 0x58))(local_3b0);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar4 = plVar5 + 1;
                lVar13 = *plVar4;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)lVar13 == 1) {
                  (**(code **)*plVar5)(plVar5);
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
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                plVar4 = plVar3 + 1;
                lVar13 = *plVar4;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)lVar13 == 1) {
                  (**(code **)*plVar3)(plVar3);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  iVar2 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar2 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                  }
                }
              }
              puVar12 = puVar17;
              if (iVar11 <= iVar10) {
                puVar12 = local_3c8;
              }
              puVar17 = puVar17 + 2;
              local_3c8 = puVar12;
            } while (puVar17 <= local_3b8);
          }
          if (puVar12 != local_3b8) {
            local_358 = *puVar12;
            uStack_350 = puVar12[1];
            uVar6 = *(undefined4 *)((longlong)local_3b8 + 4);
            uVar7 = *(undefined4 *)(local_3b8 + 1);
            uVar8 = *(undefined4 *)((longlong)local_3b8 + 0xc);
            *(undefined4 *)puVar12 = *(undefined4 *)local_3b8;
            *(undefined4 *)((longlong)puVar12 + 4) = uVar6;
            *(undefined4 *)(puVar12 + 1) = uVar7;
            *(undefined4 *)((longlong)puVar12 + 0xc) = uVar8;
            *local_3b8 = local_358;
            local_3b8[1] = uStack_350;
          }
        }
        goto LAB_142740cd9;
      }
LAB_142740cc5:
      HeapSortInternal<TSharedRef<ISceneViewExtension,1>,FIdentityFunctor,TDereferenceWrapper<TSharedRef<ISceneViewExtension,1>,_FSceneViewExtensions::GatherActiveExtensions_::_2_::SortPriority>_>
                (local_3c8,lVar13,param_3,param_4);
LAB_142740cd9:
      local_3d0 = local_3d0 + -3;
    } while (&local_348 <= local_3d0);
  }
  return;
code_r0x000142740a2d:
  plVar3 = (longlong *)puVar15[3];
  local_3b0 = (longlong *)*puVar14;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)puVar9[1];
  plVar5 = (longlong *)*puVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  iVar10 = (**(code **)(*plVar5 + 0x58))();
  iVar11 = (**(code **)(*local_3b0 + 0x58))(local_3b0);
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar13 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (iVar10 <= iVar11) goto LAB_142740a20;
LAB_142740af1:
  do {
    puVar16 = puVar17;
    puVar17 = puVar16 + -2;
    if (puVar17 <= puVar9) break;
    plVar3 = (longlong *)puVar9[1];
    local_3b0 = (longlong *)*puVar9;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)puVar16[-1];
    plVar5 = (longlong *)*puVar17;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    iVar10 = (**(code **)(*plVar5 + 0x58))();
    iVar11 = (**(code **)(*local_3b0 + 0x58))(local_3b0);
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
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar13 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  } while (iVar10 <= iVar11);
  if (puVar14 <= puVar17) {
    if (puVar14 != puVar17) {
      local_378 = *puVar14;
      uStack_370 = puVar15[3];
      uVar6 = *(undefined4 *)((longlong)puVar16 + -0xc);
      uVar7 = *(undefined4 *)(puVar16 + -1);
      uVar8 = *(undefined4 *)((longlong)puVar16 + -4);
      *(undefined4 *)puVar14 = *(undefined4 *)puVar17;
      *(undefined4 *)((longlong)puVar15 + 0x14) = uVar6;
      *(undefined4 *)(puVar15 + 3) = uVar7;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar8;
      *puVar17 = local_378;
      puVar16[-1] = uStack_370;
    }
    goto LAB_142740a20;
  }
  if (puVar9 != puVar17) {
    local_368 = *local_3c8;
    uStack_360 = local_3c8[1];
    uVar6 = *(undefined4 *)((longlong)puVar16 + -0xc);
    uVar7 = *(undefined4 *)(puVar16 + -1);
    uVar8 = *(undefined4 *)((longlong)puVar16 + -4);
    *(undefined4 *)local_3c8 = *(undefined4 *)puVar17;
    *(undefined4 *)((longlong)local_3c8 + 4) = uVar6;
    *(undefined4 *)(local_3c8 + 1) = uVar7;
    *(undefined4 *)((longlong)local_3c8 + 0xc) = uVar8;
    *puVar17 = local_368;
    puVar16[-1] = uStack_360;
  }
  local_3c0 = local_3c0 + -1;
  param_4 = local_3a8;
  param_3 = local_3d8;
  if ((longlong)((longlong)puVar17 + (-0x10 - (longlong)local_3c8) & 0xfffffffffffffff0U) <
      (longlong)((longlong)local_3b8 - (longlong)puVar14 & 0xfffffffffffffff0U)) {
    if (puVar14 < local_3b8) {
      *local_3d0 = (longlong)puVar14;
      local_3d0[1] = (longlong)local_3b8;
      *(int *)(local_3d0 + 2) = local_3c0;
      local_3d0 = local_3d0 + 3;
    }
    if (puVar17 <= local_3c8 + 2) goto LAB_142740cd9;
    local_3b8 = puVar16 + -4;
  }
  else {
    if (local_3c8 + 2 < puVar17) {
      *local_3d0 = (longlong)local_3c8;
      local_3d0[1] = (longlong)(puVar16 + -4);
      *(int *)(local_3d0 + 2) = local_3c0;
      local_3d0 = local_3d0 + 3;
    }
    local_3c8 = puVar14;
    if (local_3b8 <= puVar14) goto LAB_142740cd9;
  }
  lVar13 = ((longlong)local_3b8 - (longlong)local_3c8 >> 4) + 1;
  if (local_3c0 == 0) goto LAB_142740cc5;
  goto LAB_1427409d0;
}



// FUNCTION 142740e90 FUN_142740e90 body=431 status=ok
// SIG undefined FUN_142740e90(void)

longlong * FUN_142740e90(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(int *)(param_1 + 2) = param_2;
  uVar2 = (param_2 + 0x58) / 0x59;
  FUN_14274ad60(param_1,uVar2);
  if (0 < (int)uVar2) {
    uVar7 = (ulonglong)uVar2;
    do {
      uVar3 = FMemory::Malloc(0x3ff8,0);
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar3;
      lVar6 = *(longlong *)(*param_1 + (longlong)iVar1 * 8);
      if (lVar6 != 0) {
        lVar8 = 0x59;
        do {
          *(undefined8 *)(lVar6 + 0x78) = 0;
          lVar8 = lVar8 + -1;
          *(undefined8 *)(lVar6 + 0x80) = 0;
          *(undefined2 *)(lVar6 + 0x88) = 0xffff;
          *(undefined4 *)(lVar6 + 0x90) = 0;
          *(uint *)(lVar6 + 0x8c) = *(uint *)(lVar6 + 0x8c) & 0xf98000e0 | 0x18000e0;
          *(undefined8 *)(lVar6 + 0x98) = 0;
          *(undefined8 *)(lVar6 + 0xa0) = 0;
          *(undefined8 *)(lVar6 + 0xa8) = 0;
          *(undefined4 *)(lVar6 + 0xb0) = 0xffffffff;
          *(undefined4 *)(lVar6 + 0xb4) = 0;
          iVar1 = *(int *)(lVar6 + 0x80);
          *(int *)(lVar6 + 0x80) = iVar1 + 1;
          if (*(int *)(lVar6 + 0x84) < iVar1 + 1) {
            FUN_1408ca0e0(lVar6,iVar1);
          }
          lVar4 = *(longlong *)(lVar6 + 0x78);
          if (*(longlong *)(lVar6 + 0x78) == 0) {
            lVar4 = lVar6;
          }
          puVar5 = (undefined8 *)(lVar4 + (longlong)iVar1 * 0x78);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar5[8] = 1;
            puVar5[10] = 0;
            *(undefined4 *)(puVar5 + 0xb) = 0xffffffff;
            *(undefined4 *)((longlong)puVar5 + 0x5c) = 0;
            puVar5[0xc] = 0x3f800000;
            *(undefined2 *)(puVar5 + 0xd) = 0;
            puVar5[0xe] = 0;
          }
          lVar6 = lVar6 + 0xb8;
        } while (lVar8 != 0);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return param_1;
}



// FUNCTION 142741040 FUN_142741040 body=134 status=ok
// SIG undefined FUN_142741040(void)

undefined8 * FUN_142741040(undefined8 *param_1,undefined4 param_2)

{
  *(undefined2 *)(param_1 + 1) = 0x100;
  *param_1 = &PTR_FUN_14519cdf0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 1427410d0 TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_> body=112 status=ok
// SIG undefined TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>(void)

undefined8 *
TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>::
TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>
          (undefined8 *param_1,undefined8 *param_2)

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
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}


