// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142503e90 FUN_142503e90 body=52 status=ok
// SIG undefined FUN_142503e90(void)

void FUN_142503e90(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
    if ((lVar1 != 0) && (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0)) {
      *(undefined4 *)(param_1 + 0x40) = **(undefined4 **)(param_1 + 0x38);
    }
  }
  return;
}



// FUNCTION 142503f00 FUN_142503f00 body=309 status=ok
// SIG undefined FUN_142503f00(void)

void FUN_142503f00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 local_res10 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_2 != 0) {
    lVar3 = UInterpTrackFloatMaterialParam::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar7 = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      uVar5 = uVar7;
      if ((*(int *)(param_1 + 0x44) < 0) && (uVar5 = 0, *(int *)(param_1 + 0x44) != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x38);
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x40);
      }
      iVar4 = *(int *)(param_1 + 0x30) + (int)uVar5;
      *(int *)(param_1 + 0x40) = iVar4;
      if (*(int *)(param_1 + 0x44) < iVar4) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x38);
      }
      uVar5 = uVar7;
      uVar8 = uVar7;
      if (0 < *(int *)(param_1 + 0x30)) {
        do {
          plVar1 = *(longlong **)(uVar8 + *(longlong *)(param_1 + 0x28));
          local_res10[0] = 0;
          uVar9 = 0;
          if (plVar1 != (longlong *)0x0) {
            local_38 = *(undefined8 *)(param_2 + 0xa0);
            local_30 = 0x202ffff;
            local_2c = 0xffffffff;
            (**(code **)(*plVar1 + 1000))(plVar1,&local_38,local_res10,0);
            uVar9 = local_res10[0];
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          *(undefined4 *)(*(longlong *)(param_1 + 0x38) + uVar5) = uVar9;
          uVar5 = uVar5 + 4;
          uVar8 = uVar8 + 8;
        } while ((int)uVar6 < *(int *)(param_1 + 0x30));
      }
    }
  }
  return;
}



// FUNCTION 142504040 FUN_142504040 body=151 status=ok
// SIG undefined FUN_142504040(void)

void FUN_142504040(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) &&
     (lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))(), lVar3 != 0)) {
    lVar4 = AGPingUsable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x458) + 0x960))
                          (*(longlong **)(lVar3 + 0x458),*(undefined8 *)(param_2 + 0x90),
                           param_1 + 0x28), cVar2 == '\0')) {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  return;
}



// FUNCTION 1425040e0 FUN_1425040e0 body=54 status=ok
// SIG undefined FUN_1425040e0(void)

void FUN_1425040e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
    if ((lVar3 != 0) && (puVar1 = *(undefined8 **)(param_1 + 0x38), puVar1 != (undefined8 *)0x0)) {
      uVar2 = puVar1[1];
      *(undefined8 *)(param_1 + 0x40) = *puVar1;
      *(undefined8 *)(param_1 + 0x48) = uVar2;
    }
  }
  return;
}



// FUNCTION 142504120 FUN_142504120 body=46 status=ok
// SIG undefined FUN_142504120(void)

void FUN_142504120(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = UWorld::GetWorldSettings(uVar1,0,1);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar2 + 0x5e4);
  return;
}



// FUNCTION 142504150 FUN_142504150 body=261 status=ok
// SIG undefined FUN_142504150(void)

void FUN_142504150(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    lVar2 = 0;
LAB_1425041b9:
    lVar3 = 0;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
    if (lVar2 == 0) goto LAB_1425041b9;
    lVar3 = AGPingUsable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar3 = lVar2;
    if (!bVar1) goto LAB_1425041b9;
  }
  if (lVar2 != 0) {
    lVar4 = FUN_1429a6e30();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1425041f8;
  }
  lVar2 = 0;
LAB_1425041f8:
  uVar5 = *(uint *)(param_1 + 0x30) & 0xfffffffe;
  *(uint *)(param_1 + 0x30) = uVar5;
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      *(uint *)(param_1 + 0x30) = *(byte *)(*(longlong *)(lVar2 + 0x458) + 0x24c) >> 5 & 1 | uVar5;
    }
    return;
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(lVar3 + 0x460) >> 2 & 1 | uVar5;
  return;
}



// FUNCTION 142504260 FUN_142504260 body=413 status=ok
// SIG undefined FUN_142504260(void)

void FUN_142504260(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_2 != 0) {
    lVar3 = UInterpTrackVectorMaterialParam::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar7 = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      uVar5 = uVar7;
      if ((*(int *)(param_1 + 0x44) < 0) && (uVar5 = 0, *(int *)(param_1 + 0x44) != 0)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x38);
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x40);
      }
      iVar4 = *(int *)(param_1 + 0x30) + (int)uVar5;
      *(int *)(param_1 + 0x40) = iVar4;
      if (*(int *)(param_1 + 0x44) < iVar4) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x38);
      }
      uVar5 = uVar7;
      uVar8 = uVar7;
      if (0 < *(int *)(param_1 + 0x30)) {
        do {
          plVar1 = *(longlong **)(uVar8 + *(longlong *)(param_1 + 0x28));
          local_38 = DAT_1464aa6e0;
          local_34 = DAT_1464aa6e4;
          local_30 = DAT_1464aa6e8;
          local_2c = DAT_1464aa6ec;
          if (plVar1 != (longlong *)0x0) {
            local_28 = *(undefined8 *)(param_2 + 0xa0);
            local_20 = 0x202ffff;
            local_1c = 0xffffffff;
            (**(code **)(*plVar1 + 0x400))(plVar1,&local_28,&local_38,0);
          }
          lVar3 = *(longlong *)(param_1 + 0x38);
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          *(ulonglong *)(lVar3 + uVar5) = CONCAT44(local_34,local_38);
          *(undefined4 *)(lVar3 + 8 + uVar5) = local_30;
          uVar5 = uVar5 + 0xc;
          uVar8 = uVar8 + 8;
        } while ((int)uVar6 < *(int *)(param_1 + 0x30));
      }
    }
  }
  return;
}



// FUNCTION 142504400 FUN_142504400 body=62 status=ok
// SIG undefined FUN_142504400(void)

void FUN_142504400(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
    if ((lVar2 != 0) && (puVar1 = *(undefined8 **)(param_1 + 0x38), puVar1 != (undefined8 *)0x0)) {
      *(undefined8 *)(param_1 + 0x40) = *puVar1;
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(puVar1 + 1);
    }
  }
  return;
}



// FUNCTION 142504440 RestoreGroupActorState body=89 status=ok
// SIG undefined RestoreGroupActorState(void)

void UInterpGroupInst::RestoreGroupActorState(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + *(longlong *)(param_1 + 0x38));
      (**(code **)(*plVar1 + 0x278))
                (plVar1,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + lVar2)
                );
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 1425044a0 SelectGroupActor body=33 status=ok
// SIG undefined SelectGroupActor(void)

void UInterpGroup::SelectGroupActor(undefined8 param_1,longlong *param_2)

{
  DAT_146afbc84 = DAT_146afbc84 + '\x01';
  (**(code **)(*param_2 + 0x278))(param_2);
  DAT_146afbc84 = DAT_146afbc84 + -1;
  return;
}



// FUNCTION 1425044d0 FUN_1425044d0 body=199 status=ok
// SIG undefined FUN_1425044d0(void)

void FUN_1425044d0(longlong param_1,undefined8 param_2)

{
  FUN_142576050();
  FUN_1419e0a40(param_2,param_1 + 0x10);
  FUN_1419e0a40(param_2,param_1 + 0x16);
  FUN_1419e0a40(param_2,param_1 + 0x1c);
  FUN_1419e0a40(param_2,param_1 + 0x22);
  FUN_1419e0a40(param_2,param_1 + 0x28);
  FUN_1419e0a40(param_2,param_1 + 0x2e);
  FUN_1419e0a40(param_2,param_1 + 0x34);
  FUN_1419e0a40(param_2,param_1 + 0x3a);
  FUN_1419e0a40(param_2,param_1 + 0x40);
  FUN_1419e0b60(param_2,param_1 + 0x46);
  FUN_1419e0b60(param_2,param_1 + 0x4a);
  FUN_1419e0b60(param_2,param_1 + 0x4e);
  FUN_1419e0b60(param_2,param_1 + 0x52);
  FUN_1419e0b60(param_2,param_1 + 0x56);
  return;
}



// FUNCTION 1425045a0 FUN_1425045a0 body=3537 status=ok
// SIG undefined FUN_1425045a0(void)

void FUN_1425045a0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  ushort uVar2;
  longlong *plVar3;
  int *piVar4;
  bool bVar5;
  void *pvVar6;
  char cVar7;
  ulonglong uVar8;
  ushort *puVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  uint local_res18 [2];
  int *local_res20;
  undefined **ppuVar17;
  undefined **ppuVar18;
  uint *local_68;
  undefined8 local_60;
  undefined1 local_58;
  
  plVar3 = (longlong *)param_2[0xe];
  if (((plVar3 == (longlong *)0x0) || (*(char *)((longlong)param_1 + 0x34) == '\0')) ||
     (cVar7 = (**(code **)(*plVar3 + 0xc0))(plVar3,0xf), cVar7 != '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  puVar13 = (uint *)((longlong)param_1 + 0x34);
  if (bVar5) {
    local_res18[0] = local_res18[0] & 0xffffff00;
    puVar13 = local_res18;
  }
  (**(code **)(*param_2 + 8))(param_2,puVar13);
  piVar1 = (int *)(param_1 + 6);
  piVar4 = *(int **)param_2[1];
  local_res20 = piVar1;
  if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,piVar1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,piVar1,4);
    }
  }
  else {
    *piVar1 = *piVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FStaticMeshInstanceData::AllocateBuffers(param_1,*piVar1,0);
  }
  (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2);
  (**(code **)(*(longlong *)param_1[4] + 0x40))((longlong *)param_1[4],param_2);
  if (bVar5) {
    iVar15 = *piVar1;
    ppuVar17 = &PTR_FUN_144eec3c0;
    uVar8 = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    ppuVar18 = &PTR_GetBoundProgramCounterForTimerManager_144eec388;
    local_58 = 0;
    if (iVar15 != 0) {
      iVar11 = 0;
      if (0 < iVar15) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(&local_68,iVar15);
        uVar8 = local_60 & 0xffffffff;
        iVar11 = local_60._4_4_;
      }
      local_60 = CONCAT44(local_60._4_4_,iVar15);
      if (iVar11 < iVar15) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_68,uVar8);
      }
    }
    puVar9 = (ushort *)(**(code **)(*(longlong *)param_1[2] + 0x30))();
    pvVar6 = ThreadLocalStoragePointer;
    if (0 < *piVar1) {
      uVar8 = (ulonglong)_tls_index;
      iVar15 = 0;
      puVar13 = local_68;
      do {
        uVar2 = *puVar9;
        uVar14 = (uVar2 & 0xffff8000) << 0x10;
        if ((uVar2 & 0x7c00) == 0) {
          uVar12 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar8 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar12);
            iVar11 = 10 - (int)(fVar16 * DAT_1468509d8);
            uVar14 = uVar12 << ((char)iVar11 + 0xdU & 0x1f) & 0x7fffff |
                     (0x71U - iVar11 & 0xff) << 0x17 | uVar14;
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          uVar14 = uVar14 | 0x477fe000;
        }
        else {
          uVar14 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd | uVar14;
        }
        local_res18[0] = uVar14;
        *puVar13 = local_res18[0];
        uVar2 = puVar9[1];
        uVar14 = (uVar2 & 0xffff8000) << 0x10;
        if ((uVar2 & 0x7c00) == 0) {
          uVar12 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar8 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar12);
            iVar11 = 10 - (int)(fVar16 * DAT_1468509d8);
            uVar14 = uVar12 << ((char)iVar11 + 0xdU & 0x1f) & 0x7fffff |
                     (0x71U - iVar11 & 0xff) << 0x17 | uVar14;
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          uVar14 = uVar14 | 0x477fe000;
        }
        else {
          uVar14 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd | uVar14;
        }
        local_res18[0] = uVar14;
        puVar13[1] = local_res18[0];
        uVar2 = puVar9[2];
        uVar14 = (uVar2 & 0xffff8000) << 0x10;
        if ((uVar2 & 0x7c00) == 0) {
          uVar12 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar8 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar12);
            iVar11 = 10 - (int)(fVar16 * DAT_1468509d8);
            uVar14 = uVar12 << ((char)iVar11 + 0xdU & 0x1f) & 0x7fffff |
                     (0x71U - iVar11 & 0xff) << 0x17 | uVar14;
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          uVar14 = uVar14 | 0x477fe000;
        }
        else {
          uVar14 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd | uVar14;
        }
        local_res18[0] = uVar14;
        puVar13[2] = local_res18[0];
        uVar2 = puVar9[3];
        uVar14 = (uVar2 & 0xffff8000) << 0x10;
        if ((uVar2 & 0x7c00) == 0) {
          uVar12 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar8 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar12);
            iVar11 = 10 - (int)(fVar16 * DAT_1468509d8);
            uVar14 = uVar12 << ((char)iVar11 + 0xdU & 0x1f) & 0x7fffff |
                     (0x71U - iVar11 & 0xff) << 0x17 | uVar14;
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          uVar14 = uVar14 | 0x477fe000;
        }
        else {
          uVar14 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd | uVar14;
        }
        local_res18[0] = uVar14;
        puVar13[3] = local_res18[0];
        uVar2 = puVar9[4];
        uVar14 = (uVar2 & 0xffff8000) << 0x10;
        if ((uVar2 & 0x7c00) == 0) {
          uVar12 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar8 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar12);
            iVar11 = 10 - (int)(fVar16 * DAT_1468509d8);
            uVar14 = uVar12 << ((char)iVar11 + 0xdU & 0x1f) & 0x7fffff |
                     (0x71U - iVar11 & 0xff) << 0x17 | uVar14;
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          uVar14 = uVar14 | 0x477fe000;
        }
        else {
          uVar14 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd | uVar14;
        }
        local_res18[0] = uVar14;
        puVar13[4] = local_res18[0];
        uVar2 = puVar9[5];
        uVar14 = (uVar2 & 0xffff8000) << 0x10;
        if ((uVar2 & 0x7c00) == 0) {
          uVar12 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar8 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar12);
            iVar11 = 10 - (int)(fVar16 * DAT_1468509d8);
            uVar14 = uVar12 << ((char)iVar11 + 0xdU & 0x1f) & 0x7fffff |
                     (0x71U - iVar11 & 0xff) << 0x17 | uVar14;
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          uVar14 = uVar14 | 0x477fe000;
        }
        else {
          uVar14 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd | uVar14;
        }
        local_res18[0] = uVar14;
        puVar13[5] = local_res18[0];
        uVar2 = puVar9[6];
        uVar14 = (uVar2 & 0xffff8000) << 0x10;
        if ((uVar2 & 0x7c00) == 0) {
          uVar12 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar8 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar12);
            iVar11 = 10 - (int)(fVar16 * DAT_1468509d8);
            uVar14 = uVar12 << ((char)iVar11 + 0xdU & 0x1f) & 0x7fffff |
                     (0x71U - iVar11 & 0xff) << 0x17 | uVar14;
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          uVar14 = uVar14 | 0x477fe000;
        }
        else {
          uVar14 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd | uVar14;
        }
        local_res18[0] = uVar14;
        puVar13[6] = local_res18[0];
        uVar2 = puVar9[7];
        uVar14 = (uVar2 & 0xffff8000) << 0x10;
        if ((uVar2 & 0x7c00) == 0) {
          uVar12 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar8 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar12);
            iVar11 = 10 - (int)(fVar16 * DAT_1468509d8);
            uVar14 = uVar12 << ((char)iVar11 + 0xdU & 0x1f) & 0x7fffff |
                     (0x71U - iVar11 & 0xff) << 0x17 | uVar14;
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          uVar14 = uVar14 | 0x477fe000;
        }
        else {
          uVar14 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd | uVar14;
        }
        local_res18[0] = uVar14;
        puVar13[7] = local_res18[0];
        uVar2 = puVar9[8];
        uVar14 = (uVar2 & 0xffff8000) << 0x10;
        if ((uVar2 & 0x7c00) == 0) {
          uVar12 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar8 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar12);
            iVar11 = 10 - (int)(fVar16 * DAT_1468509d8);
            uVar14 = uVar12 << ((char)iVar11 + 0xdU & 0x1f) & 0x7fffff |
                     (0x71U - iVar11 & 0xff) << 0x17 | uVar14;
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          uVar14 = uVar14 | 0x477fe000;
        }
        else {
          uVar14 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd | uVar14;
        }
        local_res18[0] = uVar14;
        puVar13[8] = local_res18[0];
        uVar2 = puVar9[9];
        uVar14 = (uVar2 & 0xffff8000) << 0x10;
        if ((uVar2 & 0x7c00) == 0) {
          uVar12 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar8 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar12);
            iVar11 = 10 - (int)(fVar16 * DAT_1468509d8);
            uVar14 = uVar12 << ((char)iVar11 + 0xdU & 0x1f) & 0x7fffff |
                     (0x71U - iVar11 & 0xff) << 0x17 | uVar14;
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          uVar14 = uVar14 | 0x477fe000;
        }
        else {
          uVar14 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd | uVar14;
        }
        local_res18[0] = uVar14;
        puVar13[9] = local_res18[0];
        uVar2 = puVar9[10];
        uVar14 = (uVar2 & 0xffff8000) << 0x10;
        if ((uVar2 & 0x7c00) == 0) {
          uVar12 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar8 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar12);
            iVar11 = 10 - (int)(fVar16 * DAT_1468509d8);
            uVar14 = uVar12 << ((char)iVar11 + 0xdU & 0x1f) & 0x7fffff |
                     (0x71U - iVar11 & 0xff) << 0x17 | uVar14;
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          uVar14 = uVar14 | 0x477fe000;
        }
        else {
          uVar14 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd | uVar14;
        }
        local_res18[0] = uVar14;
        puVar13[10] = local_res18[0];
        uVar2 = puVar9[0xb];
        uVar14 = (uVar2 & 0xffff8000) << 0x10;
        if ((uVar2 & 0x7c00) == 0) {
          uVar12 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar8 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar12);
            iVar11 = 10 - (int)(fVar16 * DAT_1468509d8);
            uVar14 = uVar12 << ((char)iVar11 + 0xdU & 0x1f) & 0x7fffff |
                     (0x71U - iVar11 & 0xff) << 0x17 | uVar14;
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          uVar14 = uVar14 | 0x477fe000;
        }
        else {
          uVar14 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd | uVar14;
        }
        local_res18[0] = uVar14;
        puVar9 = puVar9 + 0xc;
        iVar15 = iVar15 + 1;
        puVar13[0xb] = local_res18[0];
        puVar13 = puVar13 + 0xc;
      } while (iVar15 < *local_res20);
    }
    FUN_141f02880(&local_68,param_2,0,param_4,ppuVar17,ppuVar18);
    if (local_68 != (uint *)0x0) {
      FMemory::Free();
    }
  }
  else {
    (**(code **)(*(longlong *)param_1[2] + 0x40))((longlong *)param_1[2],param_2);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    uVar10 = (**(code **)(*(longlong *)*param_1 + 0x30))();
    param_1[1] = uVar10;
    uVar10 = (**(code **)(*(longlong *)param_1[4] + 0x30))();
    param_1[5] = uVar10;
    uVar10 = (**(code **)(*(longlong *)param_1[2] + 0x30))();
    param_1[3] = uVar10;
  }
  return;
}



// FUNCTION 142505380 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0038);
  return;
}



// FUNCTION 1425053b0 FUN_1425053b0 body=298 status=ok
// SIG undefined FUN_1425053b0(void)

void FUN_1425053b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  char local_res8 [8];
  
  FUN_1423defc0();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0098);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0148);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0068);
  FArchive::UsingCustomVersion(param_2,&DAT_146533170);
  local_res8[0] = param_2[0xe] != 0;
  if (((0x14 < *(int *)((longlong)param_2 + 0x44)) || (*(int *)((longlong)param_2 + 0x44) == 0)) &&
     ((iVar1 = FArchive::CustomVer(param_2,&DAT_1464b0148), 10 < iVar1 ||
      (iVar1 = FArchive::CustomVer(param_2,&DAT_1464b0068), 0x17 < iVar1)))) {
    (**(code **)(*param_2 + 8))(param_2,local_res8);
  }
  FArchive::CustomVer(param_2,&DAT_1464b0098);
  FArchive::CustomVer(param_2,&DAT_1464b0098);
  FArchive::CustomVer(param_2,&DAT_146533170);
  FUN_1424e19b0(param_2,param_1 + 0x7a8);
  if ((local_res8[0] != '\0') &&
     ((0x14 < *(int *)((longlong)param_2 + 0x44) || (*(int *)((longlong)param_2 + 0x44) == 0)))) {
    iVar1 = FArchive::CustomVer(param_2,&DAT_1464b0148);
    if ((iVar1 < 0xb) && (iVar1 = FArchive::CustomVer(param_2,&DAT_1464b0068), iVar1 < 0x18)) {
      return;
    }
    FUN_1425055f0(param_1,param_2);
  }
  return;
}



// FUNCTION 1425054e0 Serialize body=222 status=ok
// SIG undefined Serialize(void)

void UInterpTrackFloatAnimBPParam::Serialize(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*(byte *)(param_2 + 0x28) & 2) != 0) && (*(int *)(param_2 + 0x40) < 0x1ed)) &&
     (*(longlong *)(param_1 + 0x90) != 0)) {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar2 = FUN_1428eccf0();
      for (lVar1 = *(longlong *)(param_1 + 0x98); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar2) {
          if (*(longlong *)(param_1 + 0x98) != 0) goto LAB_14250554a;
          break;
        }
      }
    }
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
  }
LAB_14250554a:
  FUN_141763960(param_1,param_2);
  if ((((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(int *)(param_2 + 0x40) < 0x1ed)) &&
     (*(longlong *)(param_1 + 0x90) != 0)) {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar2 = FUN_1428eccf0();
      for (lVar1 = *(longlong *)(param_1 + 0x98); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar2) {
          if (*(longlong *)(param_1 + 0x98) != 0) {
            return;
          }
          break;
        }
      }
    }
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
  }
  return;
}



// FUNCTION 1425055c0 Serialize body=43 status=ok
// SIG undefined Serialize(void)

void UStringTable::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_141763960();
  FUN_141614610(*(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



// FUNCTION 1425055f0 FUN_1425055f0 body=5784 status=ok
// SIG undefined FUN_1425055f0(void)

void FUN_1425055f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  code *pcVar12;
  longlong lVar13;
  void *pvVar14;
  ushort uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  longlong *plVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  float fVar26;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  longlong local_150;
  int local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128 [2];
  longlong *local_118;
  longlong local_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  
  local_138 = param_1;
  local_118 = param_2;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      uVar17 = (**(code **)(*param_2 + 0x90))(param_2);
      plVar16 = (longlong *)param_2[1];
      local_150 = 0;
      local_128[0] = uVar17;
      if ((longlong *)plVar16[1] < (longlong *)*plVar16 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_150,8);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&local_150,8);
        }
      }
      else {
        local_150 = *(longlong *)*plVar16;
        *plVar16 = *plVar16 + 8;
      }
      if ((*(byte *)(param_1 + 8) & 0x30) == 0) {
        lVar18 = (**(code **)(*param_2 + 0x90))(param_2);
        local_110 = lVar18;
        if ((0 < *(int *)(param_1 + 0x7b0)) &&
           ((*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x7e8) + 0x48) + 0x30) !=
             *(int *)(param_1 + 0x7b0) || (0 < *(int *)(param_1 + 0x80c))))) {
          FInstanceUpdateCmdBuffer::Reset(param_1 + 0x7f8);
          local_d8 = 0;
          local_d4 = 1;
          local_108 = (undefined8 *)0x0;
          uStack_100 = 0;
          local_f8 = (undefined8 *)0x0;
          uStack_f0 = 0;
          local_e8 = (undefined8 *)0x0;
          uStack_e0 = 0;
          FStaticMeshInstanceData::AllocateBuffers(&local_108,0,0);
          FUN_1424e67a0(param_1,&local_108,*(undefined8 *)(param_1 + 0x7e8));
          FUN_14250b800(*(undefined8 *)(param_1 + 0x7e8),&local_108);
          if (local_108 != (undefined8 *)0x0) {
            (**(code **)*local_108)(local_108,1);
          }
          if (local_e8 != (undefined8 *)0x0) {
            (**(code **)*local_e8)(local_e8,1);
          }
          if (local_f8 != (undefined8 *)0x0) {
            (**(code **)*local_f8)(local_f8,1);
          }
        }
        pvVar14 = ThreadLocalStoragePointer;
        if (((*(longlong *)(param_1 + 0x7e8) != 0) &&
            (lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x7e8) + 0x120), lVar20 != 0)) &&
           (iVar19 = *(int *)(lVar20 + 0x30), lVar20 = (longlong)iVar19, 0 < iVar19)) {
          uVar25 = (ulonglong)_tls_index;
          local_148 = 0;
          local_130 = 0;
          local_140 = lVar20;
          do {
            iVar19 = local_148;
            if ((-1 < local_148) && (local_148 < *(int *)(param_1 + 2000))) {
              iVar19 = *(int *)(*(longlong *)(param_1 + 0x7c8) + local_130 * 4);
            }
            if (iVar19 != -1) {
              lVar23 = (longlong)iVar19;
              lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x7e8) + 0x120);
              lVar20 = *(longlong *)(lVar18 + 0x18);
              pcVar12 = *(code **)(**(longlong **)(lVar18 + 0x10) + 0x28);
              if (*(char *)(lVar18 + 0x34) == '\0') {
                (*pcVar12)();
                (**(code **)(**(longlong **)(lVar18 + 0x10) + 0x20))();
                lVar13 = *(longlong *)(lVar18 + 0x18);
                uVar2 = *(undefined4 *)(lVar20 + lVar23 * 0x30);
                uVar3 = *(undefined4 *)(lVar20 + 4 + lVar23 * 0x30);
                uVar4 = *(undefined4 *)(lVar20 + 8 + lVar23 * 0x30);
                uVar5 = *(undefined4 *)(lVar20 + 0x10 + lVar23 * 0x30);
                uVar6 = *(undefined4 *)(lVar20 + 0x14 + lVar23 * 0x30);
                uVar7 = *(undefined4 *)(lVar20 + 0x18 + lVar23 * 0x30);
                uVar8 = *(undefined4 *)(lVar20 + 0x20 + lVar23 * 0x30);
                uVar9 = *(undefined4 *)(lVar20 + 0x24 + lVar23 * 0x30);
                uVar10 = *(undefined4 *)(lVar20 + 0x28 + lVar23 * 0x30);
                (**(code **)(**(longlong **)(lVar18 + 0x10) + 0x28))();
                (**(code **)(**(longlong **)(lVar18 + 0x10) + 0x20))();
                *(undefined4 *)(lVar13 + lVar23 * 0x30) = uVar2;
                *(undefined4 *)(lVar13 + 4 + lVar23 * 0x30) = uVar3;
                *(undefined4 *)(lVar13 + 8 + lVar23 * 0x30) = uVar4;
                *(undefined4 *)(lVar13 + 0xc + lVar23 * 0x30) = 0;
                *(undefined4 *)(lVar13 + 0x10 + lVar23 * 0x30) = uVar5;
                *(undefined4 *)(lVar13 + 0x14 + lVar23 * 0x30) = uVar6;
                *(undefined4 *)(lVar13 + 0x18 + lVar23 * 0x30) = uVar7;
                *(undefined4 *)(lVar13 + 0x1c + lVar23 * 0x30) = 0;
                *(undefined4 *)(lVar13 + 0x20 + lVar23 * 0x30) = uVar8;
                *(undefined4 *)(lVar13 + 0x24 + lVar23 * 0x30) = uVar9;
                *(undefined4 *)(lVar13 + 0x28 + lVar23 * 0x30) = uVar10;
                *(undefined4 *)(lVar13 + 0x2c + lVar23 * 0x30) = 0;
                lVar20 = local_140;
                param_1 = local_138;
              }
              else {
                (*pcVar12)();
                (**(code **)(**(longlong **)(lVar18 + 0x10) + 0x20))();
                uVar15 = *(ushort *)(lVar20 + lVar23 * 0x18);
                local_174 = (uVar15 & 0xffff8000) << 0x10;
                if ((uVar15 & 0x7c00) == 0) {
                  uVar21 = uVar15 & 0x3ff;
                  if ((uVar15 & 0x3ff) != 0) {
                    if ((*(int *)(*(longlong *)((longlong)pvVar14 + uVar25 * 8) + 0x38) <
                         DAT_1468509dc) &&
                       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                      DAT_1468509d8 = 1.442695;
                      _Init_thread_footer(&DAT_1468509dc);
                    }
                    fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar21);
                    iVar19 = 10 - (int)(fVar26 * DAT_1468509d8);
                    local_174 = uVar21 << ((char)iVar19 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar19 & 0xff) << 0x17 | local_174;
                  }
                }
                else if ((uVar15 & 0x7c00) == 0x7c00) {
                  local_174 = local_174 | 0x477fe000;
                }
                else {
                  local_174 = ((uVar15 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar15 & 0x3ff) << 0xd |
                              local_174;
                }
                uVar15 = *(ushort *)(lVar20 + 2 + lVar23 * 0x18);
                local_170 = (uVar15 & 0xffff8000) << 0x10;
                if ((uVar15 & 0x7c00) == 0) {
                  uVar21 = uVar15 & 0x3ff;
                  if ((uVar15 & 0x3ff) != 0) {
                    if ((*(int *)(*(longlong *)((longlong)pvVar14 + uVar25 * 8) + 0x38) <
                         DAT_1468509dc) &&
                       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                      DAT_1468509d8 = 1.442695;
                      _Init_thread_footer(&DAT_1468509dc);
                    }
                    fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar21);
                    iVar19 = 10 - (int)(fVar26 * DAT_1468509d8);
                    local_170 = uVar21 << ((char)iVar19 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar19 & 0xff) << 0x17 | local_170;
                  }
                }
                else if ((uVar15 & 0x7c00) == 0x7c00) {
                  local_170 = local_170 | 0x477fe000;
                }
                else {
                  local_170 = ((uVar15 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar15 & 0x3ff) << 0xd |
                              local_170;
                }
                uVar15 = *(ushort *)(lVar20 + 4 + lVar23 * 0x18);
                local_16c = (uVar15 & 0xffff8000) << 0x10;
                if ((uVar15 & 0x7c00) == 0) {
                  uVar21 = uVar15 & 0x3ff;
                  if ((uVar15 & 0x3ff) != 0) {
                    if ((*(int *)(*(longlong *)((longlong)pvVar14 + uVar25 * 8) + 0x38) <
                         DAT_1468509dc) &&
                       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                      DAT_1468509d8 = 1.442695;
                      _Init_thread_footer(&DAT_1468509dc);
                    }
                    fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar21);
                    iVar19 = 10 - (int)(fVar26 * DAT_1468509d8);
                    local_16c = uVar21 << ((char)iVar19 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar19 & 0xff) << 0x17 | local_16c;
                  }
                }
                else if ((uVar15 & 0x7c00) == 0x7c00) {
                  local_16c = local_16c | 0x477fe000;
                }
                else {
                  local_16c = ((uVar15 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar15 & 0x3ff) << 0xd |
                              local_16c;
                }
                uVar15 = *(ushort *)(lVar20 + 6 + lVar23 * 0x18);
                if (((((uVar15 & 0x7c00) == 0) && ((uVar15 & 0x3ff) != 0)) &&
                    (*(int *)(*(longlong *)((longlong)pvVar14 + uVar25 * 8) + 0x38) < DAT_1468509dc)
                    ) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                  DAT_1468509d8 = 1.442695;
                  _Init_thread_footer(&DAT_1468509dc);
                }
                uVar15 = *(ushort *)(lVar20 + 8 + lVar23 * 0x18);
                local_168 = (uVar15 & 0xffff8000) << 0x10;
                if ((uVar15 & 0x7c00) == 0) {
                  uVar21 = uVar15 & 0x3ff;
                  if ((uVar15 & 0x3ff) != 0) {
                    if ((*(int *)(*(longlong *)((longlong)pvVar14 + uVar25 * 8) + 0x38) <
                         DAT_1468509dc) &&
                       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                      DAT_1468509d8 = 1.442695;
                      _Init_thread_footer(&DAT_1468509dc);
                    }
                    fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar21);
                    iVar19 = 10 - (int)(fVar26 * DAT_1468509d8);
                    local_168 = uVar21 << ((char)iVar19 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar19 & 0xff) << 0x17 | local_168;
                  }
                }
                else if ((uVar15 & 0x7c00) == 0x7c00) {
                  local_168 = local_168 | 0x477fe000;
                }
                else {
                  local_168 = ((uVar15 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar15 & 0x3ff) << 0xd |
                              local_168;
                }
                uVar15 = *(ushort *)(lVar20 + 10 + lVar23 * 0x18);
                local_164 = (uVar15 & 0xffff8000) << 0x10;
                if ((uVar15 & 0x7c00) == 0) {
                  uVar21 = uVar15 & 0x3ff;
                  if ((uVar15 & 0x3ff) != 0) {
                    if ((*(int *)(*(longlong *)((longlong)pvVar14 + uVar25 * 8) + 0x38) <
                         DAT_1468509dc) &&
                       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                      DAT_1468509d8 = 1.442695;
                      _Init_thread_footer(&DAT_1468509dc);
                    }
                    fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar21);
                    iVar19 = 10 - (int)(fVar26 * DAT_1468509d8);
                    local_164 = uVar21 << ((char)iVar19 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar19 & 0xff) << 0x17 | local_164;
                  }
                }
                else if ((uVar15 & 0x7c00) == 0x7c00) {
                  local_164 = local_164 | 0x477fe000;
                }
                else {
                  local_164 = ((uVar15 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar15 & 0x3ff) << 0xd |
                              local_164;
                }
                uVar15 = *(ushort *)(lVar20 + 0xc + lVar23 * 0x18);
                local_160 = (uVar15 & 0xffff8000) << 0x10;
                if ((uVar15 & 0x7c00) == 0) {
                  uVar21 = uVar15 & 0x3ff;
                  if ((uVar15 & 0x3ff) != 0) {
                    if ((*(int *)(*(longlong *)((longlong)pvVar14 + uVar25 * 8) + 0x38) <
                         DAT_1468509dc) &&
                       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                      DAT_1468509d8 = 1.442695;
                      _Init_thread_footer(&DAT_1468509dc);
                    }
                    fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar21);
                    iVar19 = 10 - (int)(fVar26 * DAT_1468509d8);
                    local_160 = uVar21 << ((char)iVar19 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar19 & 0xff) << 0x17 | local_160;
                  }
                }
                else if ((uVar15 & 0x7c00) == 0x7c00) {
                  local_160 = local_160 | 0x477fe000;
                }
                else {
                  local_160 = ((uVar15 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar15 & 0x3ff) << 0xd |
                              local_160;
                }
                uVar15 = *(ushort *)(lVar20 + 0xe + lVar23 * 0x18);
                if (((((uVar15 & 0x7c00) == 0) && ((uVar15 & 0x3ff) != 0)) &&
                    (*(int *)(*(longlong *)((longlong)pvVar14 + uVar25 * 8) + 0x38) < DAT_1468509dc)
                    ) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                  DAT_1468509d8 = 1.442695;
                  _Init_thread_footer(&DAT_1468509dc);
                }
                uVar15 = *(ushort *)(lVar20 + 0x10 + lVar23 * 0x18);
                local_15c = (uVar15 & 0xffff8000) << 0x10;
                if ((uVar15 & 0x7c00) == 0) {
                  uVar21 = uVar15 & 0x3ff;
                  if ((uVar15 & 0x3ff) != 0) {
                    if ((*(int *)(*(longlong *)((longlong)pvVar14 + uVar25 * 8) + 0x38) <
                         DAT_1468509dc) &&
                       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                      DAT_1468509d8 = 1.442695;
                      _Init_thread_footer(&DAT_1468509dc);
                    }
                    fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar21);
                    iVar19 = 10 - (int)(fVar26 * DAT_1468509d8);
                    local_15c = uVar21 << ((char)iVar19 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar19 & 0xff) << 0x17 | local_15c;
                  }
                }
                else if ((uVar15 & 0x7c00) == 0x7c00) {
                  local_15c = local_15c | 0x477fe000;
                }
                else {
                  local_15c = ((uVar15 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar15 & 0x3ff) << 0xd |
                              local_15c;
                }
                uVar15 = *(ushort *)(lVar20 + 0x12 + lVar23 * 0x18);
                local_158 = (uVar15 & 0xffff8000) << 0x10;
                if ((uVar15 & 0x7c00) == 0) {
                  uVar21 = uVar15 & 0x3ff;
                  if ((uVar15 & 0x3ff) != 0) {
                    if ((*(int *)(*(longlong *)((longlong)pvVar14 + uVar25 * 8) + 0x38) <
                         DAT_1468509dc) &&
                       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                      DAT_1468509d8 = 1.442695;
                      _Init_thread_footer(&DAT_1468509dc);
                    }
                    fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar21);
                    iVar19 = 10 - (int)(fVar26 * DAT_1468509d8);
                    local_158 = uVar21 << ((char)iVar19 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar19 & 0xff) << 0x17 | local_158;
                  }
                }
                else if ((uVar15 & 0x7c00) == 0x7c00) {
                  local_158 = local_158 | 0x477fe000;
                }
                else {
                  local_158 = ((uVar15 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar15 & 0x3ff) << 0xd |
                              local_158;
                }
                uVar15 = *(ushort *)(lVar20 + 0x14 + lVar23 * 0x18);
                local_178 = (uVar15 & 0xffff8000) << 0x10;
                if ((uVar15 & 0x7c00) == 0) {
                  uVar21 = uVar15 & 0x3ff;
                  if ((uVar15 & 0x3ff) != 0) {
                    if ((*(int *)(*(longlong *)((longlong)pvVar14 + uVar25 * 8) + 0x38) <
                         DAT_1468509dc) &&
                       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                      DAT_1468509d8 = 1.442695;
                      _Init_thread_footer(&DAT_1468509dc);
                    }
                    fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar21);
                    iVar19 = 10 - (int)(fVar26 * DAT_1468509d8);
                    local_178 = uVar21 << ((char)iVar19 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar19 & 0xff) << 0x17 | local_178;
                  }
                }
                else if ((uVar15 & 0x7c00) == 0x7c00) {
                  local_178 = local_178 | 0x477fe000;
                }
                else {
                  local_178 = ((uVar15 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar15 & 0x3ff) << 0xd |
                              local_178;
                }
                uVar15 = *(ushort *)(lVar20 + 0x16 + lVar23 * 0x18);
                if (((((uVar15 & 0x7c00) == 0) && ((uVar15 & 0x3ff) != 0)) &&
                    (*(int *)(*(longlong *)((longlong)pvVar14 + uVar25 * 8) + 0x38) < DAT_1468509dc)
                    ) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                  DAT_1468509d8 = 1.442695;
                  _Init_thread_footer(&DAT_1468509dc);
                }
                lVar13 = *(longlong *)(lVar18 + 0x18);
                (**(code **)(**(longlong **)(lVar18 + 0x10) + 0x28))();
                (**(code **)(**(longlong **)(lVar18 + 0x10) + 0x20))();
                uVar15 = (ushort)(local_174 >> 0x10);
                uVar21 = local_174 >> 0x17 & 0xff;
                if (uVar21 < 0x71) {
                  *(ushort *)(lVar13 + lVar23 * 0x18) = uVar15 & 0x8000;
                  iVar19 = -uVar21 + 0x7e;
                  if (iVar19 < 0x19) {
                    uVar24 = local_174 & 0x7fffff | 0x800000;
                    uVar15 = (ushort)(uVar24 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar15 & 0x8000;
                    *(ushort *)(lVar13 + lVar23 * 0x18) = uVar15;
                    if ((uVar24 >> ((char)-uVar21 + 0x7dU & 0x1f) & 1) != 0) {
                      *(ushort *)(lVar13 + lVar23 * 0x18) = uVar15 + 1;
                    }
                  }
                }
                else if (uVar21 < 0x8f) {
                  *(ushort *)(lVar13 + lVar23 * 0x18) =
                       (ushort)(local_174 >> 0xd) & 0x3ff | ((uVar15 >> 7) - 0x10 & 0x1f) << 10 |
                       uVar15 & 0x8000;
                }
                else {
                  *(ushort *)(lVar13 + lVar23 * 0x18) =
                       uVar15 & 0x8000 | *(ushort *)(lVar13 + lVar23 * 0x18) & 0x7bff | 0x7bff;
                }
                uVar15 = (ushort)(local_170 >> 0x10);
                uVar21 = local_170 >> 0x17 & 0xff;
                if (uVar21 < 0x71) {
                  *(ushort *)(lVar13 + 2 + lVar23 * 0x18) = uVar15 & 0x8000;
                  iVar19 = -uVar21 + 0x7e;
                  if (iVar19 < 0x19) {
                    uVar24 = local_170 & 0x7fffff | 0x800000;
                    uVar15 = (ushort)(uVar24 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar15 & 0x8000;
                    *(ushort *)(lVar13 + 2 + lVar23 * 0x18) = uVar15;
                    if ((uVar24 >> ((char)-uVar21 + 0x7dU & 0x1f) & 1) != 0) {
                      uVar15 = uVar15 + 1;
                      goto LAB_1425062a9;
                    }
                  }
                }
                else if (uVar21 < 0x8f) {
                  uVar15 = ((uVar15 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(local_170 >> 0xd) & 0x3ff
                           | uVar15 & 0x8000;
LAB_1425062a9:
                  *(ushort *)(lVar13 + 2 + lVar23 * 0x18) = uVar15;
                }
                else {
                  *(ushort *)(lVar13 + 2 + lVar23 * 0x18) =
                       uVar15 & 0x8000 | *(ushort *)(lVar13 + 2 + lVar23 * 0x18) & 0x7bff | 0x7bff;
                }
                uVar15 = (ushort)(local_16c >> 0x10);
                uVar21 = local_16c >> 0x17 & 0xff;
                if (uVar21 < 0x71) {
                  *(ushort *)(lVar13 + 4 + lVar23 * 0x18) = uVar15 & 0x8000;
                  iVar19 = -uVar21 + 0x7e;
                  if (iVar19 < 0x19) {
                    uVar24 = local_16c & 0x7fffff | 0x800000;
                    uVar15 = (ushort)(uVar24 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar15 & 0x8000;
                    *(ushort *)(lVar13 + 4 + lVar23 * 0x18) = uVar15;
                    if ((uVar24 >> ((char)-uVar21 + 0x7dU & 0x1f) & 1) != 0) {
                      uVar15 = uVar15 + 1;
                      goto LAB_142506362;
                    }
                  }
                }
                else if (uVar21 < 0x8f) {
                  uVar15 = ((uVar15 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(local_16c >> 0xd) & 0x3ff
                           | uVar15 & 0x8000;
LAB_142506362:
                  *(ushort *)(lVar13 + 4 + lVar23 * 0x18) = uVar15;
                }
                else {
                  *(ushort *)(lVar13 + 4 + lVar23 * 0x18) =
                       uVar15 & 0x8000 | *(ushort *)(lVar13 + 4 + lVar23 * 0x18) & 0x7bff | 0x7bff;
                }
                uVar15 = (ushort)(local_168 >> 0x10);
                *(undefined2 *)(lVar13 + 6 + lVar23 * 0x18) = 0;
                uVar21 = local_168 >> 0x17 & 0xff;
                if (uVar21 < 0x71) {
                  *(ushort *)(lVar13 + 8 + lVar23 * 0x18) = uVar15 & 0x8000;
                  iVar19 = -uVar21 + 0x7e;
                  if (iVar19 < 0x19) {
                    uVar24 = local_168 & 0x7fffff | 0x800000;
                    uVar15 = (ushort)(uVar24 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar15 & 0x8000;
                    *(ushort *)(lVar13 + 8 + lVar23 * 0x18) = uVar15;
                    if ((uVar24 >> ((char)-uVar21 + 0x7dU & 0x1f) & 1) != 0) {
                      uVar15 = uVar15 + 1;
                      goto LAB_142506427;
                    }
                  }
                }
                else if (uVar21 < 0x8f) {
                  uVar15 = ((uVar15 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(local_168 >> 0xd) & 0x3ff
                           | uVar15 & 0x8000;
LAB_142506427:
                  *(ushort *)(lVar13 + 8 + lVar23 * 0x18) = uVar15;
                }
                else {
                  *(ushort *)(lVar13 + 8 + lVar23 * 0x18) =
                       uVar15 & 0x8000 | *(ushort *)(lVar13 + 8 + lVar23 * 0x18) & 0x7bff | 0x7bff;
                }
                uVar15 = (ushort)(local_164 >> 0x10);
                uVar21 = local_164 >> 0x17 & 0xff;
                if (uVar21 < 0x71) {
                  *(ushort *)(lVar13 + 10 + lVar23 * 0x18) = uVar15 & 0x8000;
                  iVar19 = -uVar21 + 0x7e;
                  if (iVar19 < 0x19) {
                    uVar24 = local_164 & 0x7fffff | 0x800000;
                    uVar15 = (ushort)(uVar24 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar15 & 0x8000;
                    *(ushort *)(lVar13 + 10 + lVar23 * 0x18) = uVar15;
                    if ((uVar24 >> ((char)-uVar21 + 0x7dU & 0x1f) & 1) != 0) {
                      uVar15 = uVar15 + 1;
                      goto LAB_1425064e5;
                    }
                  }
                }
                else if (uVar21 < 0x8f) {
                  uVar15 = ((uVar15 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(local_164 >> 0xd) & 0x3ff
                           | uVar15 & 0x8000;
LAB_1425064e5:
                  *(ushort *)(lVar13 + 10 + lVar23 * 0x18) = uVar15;
                }
                else {
                  *(ushort *)(lVar13 + 10 + lVar23 * 0x18) =
                       uVar15 & 0x8000 | *(ushort *)(lVar13 + 10 + lVar23 * 0x18) & 0x7bff | 0x7bff;
                }
                uVar15 = (ushort)(local_160 >> 0x10);
                uVar21 = local_160 >> 0x17 & 0xff;
                if (uVar21 < 0x71) {
                  *(ushort *)(lVar13 + 0xc + lVar23 * 0x18) = uVar15 & 0x8000;
                  iVar19 = -uVar21 + 0x7e;
                  if (iVar19 < 0x19) {
                    uVar24 = local_160 & 0x7fffff | 0x800000;
                    uVar15 = (ushort)(uVar24 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar15 & 0x8000;
                    *(ushort *)(lVar13 + 0xc + lVar23 * 0x18) = uVar15;
                    if ((uVar24 >> ((char)-uVar21 + 0x7dU & 0x1f) & 1) != 0) {
                      uVar15 = uVar15 + 1;
                      goto LAB_1425065a3;
                    }
                  }
                }
                else if (uVar21 < 0x8f) {
                  uVar15 = ((uVar15 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(local_160 >> 0xd) & 0x3ff
                           | uVar15 & 0x8000;
LAB_1425065a3:
                  *(ushort *)(lVar13 + 0xc + lVar23 * 0x18) = uVar15;
                }
                else {
                  *(ushort *)(lVar13 + 0xc + lVar23 * 0x18) =
                       uVar15 & 0x8000 | *(ushort *)(lVar13 + 0xc + lVar23 * 0x18) & 0x7bff | 0x7bff
                  ;
                }
                uVar15 = (ushort)(local_15c >> 0x10);
                *(undefined2 *)(lVar13 + 0xe + lVar23 * 0x18) = 0;
                uVar21 = local_15c >> 0x17 & 0xff;
                if (uVar21 < 0x71) {
                  *(ushort *)(lVar13 + 0x10 + lVar23 * 0x18) = uVar15 & 0x8000;
                  iVar19 = -uVar21 + 0x7e;
                  if (iVar19 < 0x19) {
                    uVar24 = local_15c & 0x7fffff | 0x800000;
                    uVar15 = (ushort)(uVar24 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar15 & 0x8000;
                    *(ushort *)(lVar13 + 0x10 + lVar23 * 0x18) = uVar15;
                    if ((uVar24 >> ((char)-uVar21 + 0x7dU & 0x1f) & 1) != 0) {
                      *(ushort *)(lVar13 + 0x10 + lVar23 * 0x18) = uVar15 + 1;
                    }
                  }
                }
                else if (uVar21 < 0x8f) {
                  *(ushort *)(lVar13 + 0x10 + lVar23 * 0x18) =
                       (ushort)(local_15c >> 0xd) & 0x3ff | ((uVar15 >> 7) - 0x10 & 0x1f) << 10 |
                       uVar15 & 0x8000;
                }
                else {
                  *(ushort *)(lVar13 + 0x10 + lVar23 * 0x18) =
                       uVar15 & 0x8000 | *(ushort *)(lVar13 + 0x10 + lVar23 * 0x18) & 0x7bff |
                       0x7bff;
                }
                uVar15 = (ushort)(local_158 >> 0x10);
                uVar21 = local_158 >> 0x17 & 0xff;
                if (uVar21 < 0x71) {
                  *(ushort *)(lVar13 + 0x12 + lVar23 * 0x18) = uVar15 & 0x8000;
                  iVar19 = -uVar21 + 0x7e;
                  if (iVar19 < 0x19) {
                    uVar24 = local_158 & 0x7fffff | 0x800000;
                    uVar15 = (ushort)(uVar24 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar15 & 0x8000;
                    *(ushort *)(lVar13 + 0x12 + lVar23 * 0x18) = uVar15;
                    if ((uVar24 >> ((char)-uVar21 + 0x7dU & 0x1f) & 1) != 0) {
                      *(ushort *)(lVar13 + 0x12 + lVar23 * 0x18) = uVar15 + 1;
                    }
                  }
                }
                else if (uVar21 < 0x8f) {
                  *(ushort *)(lVar13 + 0x12 + lVar23 * 0x18) =
                       (ushort)(local_158 >> 0xd) & 0x3ff | ((uVar15 >> 7) - 0x10 & 0x1f) << 10 |
                       uVar15 & 0x8000;
                }
                else {
                  *(ushort *)(lVar13 + 0x12 + lVar23 * 0x18) =
                       uVar15 & 0x8000 | *(ushort *)(lVar13 + 0x12 + lVar23 * 0x18) & 0x7bff |
                       0x7bff;
                }
                uVar15 = (ushort)(local_178 >> 0x10);
                uVar21 = local_178 >> 0x17 & 0xff;
                lVar20 = local_140;
                param_1 = local_138;
                if (uVar21 < 0x71) {
                  *(ushort *)(lVar13 + 0x14 + lVar23 * 0x18) = uVar15 & 0x8000;
                  iVar19 = -uVar21 + 0x7e;
                  if (iVar19 < 0x19) {
                    uVar24 = local_178 & 0x7fffff | 0x800000;
                    uVar15 = (ushort)(uVar24 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar15 & 0x8000;
                    *(ushort *)(lVar13 + 0x14 + lVar23 * 0x18) = uVar15;
                    if ((uVar24 >> ((char)-uVar21 + 0x7dU & 0x1f) & 1) != 0) {
                      *(ushort *)(lVar13 + 0x14 + lVar23 * 0x18) = uVar15 + 1;
                      *(undefined2 *)(lVar13 + 0x16 + lVar23 * 0x18) = 0;
                      goto LAB_1425068de;
                    }
                  }
                }
                else {
                  if (0x8e < uVar21) {
                    *(ushort *)(lVar13 + 0x14 + lVar23 * 0x18) =
                         uVar15 & 0x8000 | *(ushort *)(lVar13 + 0x14 + lVar23 * 0x18) & 0x7bff |
                         0x7bff;
                    *(undefined2 *)(lVar13 + 0x16 + lVar23 * 0x18) = 0;
                    goto LAB_1425068de;
                  }
                  *(ushort *)(lVar13 + 0x14 + lVar23 * 0x18) =
                       (ushort)(local_178 >> 0xd) & 0x3ff | ((uVar15 >> 7) - 0x10 & 0x1f) << 10 |
                       uVar15 & 0x8000;
                }
                *(undefined2 *)(lVar13 + 0x16 + lVar23 * 0x18) = 0;
              }
            }
LAB_1425068de:
            lVar18 = local_110;
            param_2 = local_118;
            uVar17 = local_128[0];
            local_148 = local_148 + 1;
            local_130 = local_130 + 1;
          } while (local_130 < lVar20);
          FUN_1425045a0(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x120),local_118);
        }
        lVar20 = (**(code **)(*param_2 + 0x90))(param_2);
        local_150 = lVar20 - lVar18;
        (**(code **)(*param_2 + 0xa8))(param_2,uVar17);
        plVar16 = (longlong *)param_2[1];
        if ((longlong *)plVar16[1] < (longlong *)*plVar16 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_150,8);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_150,8);
          }
        }
        else {
          local_150 = *(longlong *)*plVar16;
          *plVar16 = *plVar16 + 8;
        }
        (**(code **)(*param_2 + 0xa8))(param_2,lVar20);
      }
    }
    return;
  }
  plVar16 = (longlong *)param_2[1];
  plVar22 = (longlong *)0x0;
  local_150 = 0;
  if ((longlong *)plVar16[1] < (longlong *)*plVar16 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,&local_150,8);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,&local_150,8);
    }
  }
  else {
    local_150 = *(longlong *)*plVar16;
    *plVar16 = *plVar16 + 8;
  }
  if (local_150 == 0) {
    return;
  }
  plVar16 = (longlong *)operator_new(0x38);
  if (plVar16 != (longlong *)0x0) {
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[2] = 0;
    plVar16[3] = 0;
    plVar16[4] = 0;
    plVar16[5] = 0;
    *(undefined4 *)(plVar16 + 6) = 0;
    *(undefined1 *)((longlong)plVar16 + 0x34) = 0;
    plVar22 = plVar16;
  }
  puVar1 = (undefined8 *)(param_1 + 0x810);
  if (puVar1 == local_128) {
    if (plVar22 == (longlong *)0x0) goto LAB_14250575d;
    puVar11 = (undefined8 *)*plVar22;
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11,1);
    }
    puVar11 = (undefined8 *)plVar22[4];
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11,1);
    }
    puVar11 = (undefined8 *)plVar22[2];
    plVar16 = plVar22;
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11,1);
    }
  }
  else {
    plVar16 = (longlong *)*puVar1;
    *puVar1 = plVar22;
    if (plVar16 == (longlong *)0x0) goto LAB_14250575d;
    puVar11 = (undefined8 *)*plVar16;
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11,1);
    }
    puVar11 = (undefined8 *)plVar16[4];
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11,1);
    }
    puVar11 = (undefined8 *)plVar16[2];
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11,1);
    }
  }
  FMemory::operator_delete(plVar16,0x38);
LAB_14250575d:
  FUN_1425045a0(*puVar1,param_2);
  return;
}



// FUNCTION 142506c90 bpf__StartSelectBay__pf body=15 status=ok
// SIG undefined bpf__StartSelectBay__pf(void)

void ABP_SpaceCoffin_C__pf2313511024::bpf__StartSelectBay__pf
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x4a8) = param_2;
  *(undefined8 *)(param_1 + 0x4b0) = param_3;
  return;
}



// FUNCTION 142506ca0 FUN_142506ca0 body=18 status=ok
// SIG undefined FUN_142506ca0(void)

void FUN_142506ca0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x7bc) = param_2;
  *(undefined4 *)(param_1 + 0x7c0) = param_3;
  FUN_1423424e0();
  return;
}



// FUNCTION 142506cc0 SetKeyframeTime body=365 status=ok
// SIG undefined SetKeyframeTime(void)

uint UInterpTrackAnimControl::SetKeyframeTime
               (longlong param_1,uint param_2,float param_3,char param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  float *pfVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0xa0) <= (int)param_2)) {
    return param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x98);
  pfVar10 = (float *)((longlong)(int)param_2 * 0x20 + *plVar1);
  if (param_4 == '\0') {
    *pfVar10 = param_3;
    return param_2;
  }
  fVar5 = pfVar10[1];
  uVar8 = *(undefined8 *)(pfVar10 + 2);
  iVar3 = *(int *)(param_1 + 0xa0);
  uVar6 = *(undefined8 *)(pfVar10 + 4);
  uVar7 = *(undefined8 *)(pfVar10 + 6);
  iVar9 = (iVar3 - param_2) + -1;
  if (iVar9 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              (pfVar10,(void *)((longlong)(int)(param_2 + 1) * 0x20 + *plVar1),(longlong)iVar9 << 5)
    ;
    iVar3 = *(int *)(param_1 + 0xa0);
  }
  *(int *)(param_1 + 0xa0) = iVar3 + -1;
  TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar1);
  uVar11 = 0;
  uVar13 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    pfVar10 = (float *)*plVar1;
    uVar14 = uVar11;
    do {
      uVar13 = (uint)uVar14;
      if (param_3 < *pfVar10 || param_3 == *pfVar10) break;
      uVar13 = uVar13 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar11 = uVar11 + 1;
      pfVar10 = pfVar10 + 8;
    } while ((longlong)uVar11 < (longlong)*(int *)(param_1 + 0xa0));
  }
  iVar3 = *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0xa0) = iVar3 + 1;
  if (*(int *)(param_1 + 0xa4) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar1,iVar3);
  }
  lVar12 = (longlong)(int)uVar13 * 0x20;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*plVar1 + lVar12 + 0x20),(void *)(*plVar1 + lVar12),
             (longlong)(int)(iVar3 - uVar13) << 5);
  lVar4 = *plVar1;
  *(undefined8 *)(lVar12 + lVar4) = 0;
  *(undefined8 *)(lVar12 + 8 + lVar4) = 0;
  *(undefined8 *)(lVar12 + 0x10 + lVar4) = 0;
  *(undefined8 *)(lVar12 + 0x18 + lVar4) = 0;
  lVar4 = *plVar1;
  puVar2 = (undefined8 *)(lVar4 + lVar12);
  *puVar2 = CONCAT44(fVar5,param_3);
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar12);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  return uVar13;
}



// FUNCTION 142506e30 SetKeyframeTime body=315 status=ok
// SIG undefined SetKeyframeTime(void)

uint UInterpTrackBoolProp::SetKeyframeTime(longlong param_1,uint param_2,float param_3,char param_4)

{
  longlong *plVar1;
  void *_Src;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 local_28;
  ulonglong uVar9;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x78) <= (int)param_2)) {
    return param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  pfVar5 = (float *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)param_2 * 8);
  if (param_4 == '\0') {
    *pfVar5 = param_3;
    return param_2;
  }
  uVar3 = *(undefined8 *)pfVar5;
  iVar2 = *(int *)(param_1 + 0x78);
  iVar4 = (iVar2 - param_2) + -1;
  if (iVar4 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              (pfVar5,(void *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)(param_2 + 1) * 8),
               (longlong)iVar4 << 3);
    iVar2 = *(int *)(param_1 + 0x78);
  }
  *(int *)(param_1 + 0x78) = iVar2 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
  uVar6 = 0;
  uVar8 = 0;
  local_28 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),param_3);
  if (0 < *(int *)(param_1 + 0x78)) {
    pfVar5 = (float *)*plVar1;
    uVar9 = uVar6;
    do {
      uVar8 = (uint)uVar9;
      if (param_3 < *pfVar5 || param_3 == *pfVar5) break;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar6 = uVar6 + 1;
      pfVar5 = pfVar5 + 2;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x78));
  }
  iVar2 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar2 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar7 = (longlong)(int)uVar8;
  _Src = (void *)(*plVar1 + lVar7 * 8);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 8),_Src,(longlong)(int)(iVar2 - uVar8) << 3);
  *(undefined8 *)(*plVar1 + lVar7 * 8) = 0;
  *(undefined8 *)(*plVar1 + lVar7 * 8) = local_28;
  return uVar8;
}



// FUNCTION 142506f70 SetKeyframeTime body=321 status=ok
// SIG undefined SetKeyframeTime(void)

ulonglong UInterpTrackDirector::SetKeyframeTime
                    (longlong param_1,uint param_2,float param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x78) <= (int)param_2)) {
    return (ulonglong)param_2;
  }
  pfVar8 = (float *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)param_2 * 0x18);
  if (param_4 == '\0') {
    *pfVar8 = param_3;
    return (ulonglong)param_2;
  }
  iVar3 = *(int *)(param_1 + 0x78);
  fVar5 = pfVar8[1];
  uVar6 = *(undefined8 *)(pfVar8 + 2);
  uVar2 = *(undefined8 *)(pfVar8 + 4);
  iVar7 = (iVar3 - param_2) + -1;
  if (iVar7 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              (pfVar8,(void *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)(param_2 + 1) * 0x18),
               (longlong)iVar7 * 0x18);
    iVar3 = *(int *)(param_1 + 0x78);
  }
  *(int *)(param_1 + 0x78) = iVar3 + -1;
  TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1 + 0x70);
  uVar9 = 0;
  uVar11 = uVar9;
  if (0 < *(int *)(param_1 + 0x78)) {
    pfVar8 = *(float **)(param_1 + 0x70);
    do {
      if (param_3 < *pfVar8 || param_3 == *pfVar8) break;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar9 = uVar9 + 1;
      pfVar8 = pfVar8 + 6;
    } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x78));
  }
  TArray<FTabManager::FTab,FDefaultAllocator>::InsertUninitialized(param_1 + 0x70,uVar11,1);
  lVar10 = (longlong)(int)uVar11;
  lVar4 = *(longlong *)(param_1 + 0x70);
  *(undefined8 *)(lVar4 + lVar10 * 0x18) = 0;
  *(undefined8 *)(lVar4 + 8 + lVar10 * 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar10 * 0x18) = 0;
  lVar4 = *(longlong *)(param_1 + 0x70);
  puVar1 = (undefined8 *)(lVar4 + lVar10 * 0x18);
  *puVar1 = CONCAT44(fVar5,param_3);
  puVar1[1] = uVar6;
  *(undefined8 *)(lVar4 + 0x10 + lVar10 * 0x18) = uVar2;
  return uVar11;
}



// FUNCTION 1425070c0 SetKeyframeTime body=329 status=ok
// SIG undefined SetKeyframeTime(void)

uint UInterpTrackEvent::SetKeyframeTime(longlong param_1,uint param_2,float param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  float *pfVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x78) <= (int)param_2)) {
    return param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  pfVar7 = (float *)((longlong)(int)param_2 * 0x10 + *(longlong *)(param_1 + 0x70));
  if (param_4 == '\0') {
    *pfVar7 = param_3;
    return param_2;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  fVar4 = pfVar7[1];
  uVar5 = *(undefined8 *)(pfVar7 + 2);
  iVar6 = (iVar2 - param_2) + -1;
  if (iVar6 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              (pfVar7,(void *)((longlong)(int)(param_2 + 1) * 0x10 + *(longlong *)(param_1 + 0x70)),
               (longlong)iVar6 << 4);
    iVar2 = *(int *)(param_1 + 0x78);
  }
  *(int *)(param_1 + 0x78) = iVar2 + -1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
  uVar8 = 0;
  uVar10 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    pfVar7 = (float *)*plVar1;
    uVar11 = uVar8;
    do {
      uVar10 = (uint)uVar11;
      if (param_3 < *pfVar7 || param_3 == *pfVar7) break;
      uVar10 = uVar10 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar8 = uVar8 + 1;
      pfVar7 = pfVar7 + 4;
    } while ((longlong)uVar8 < (longlong)*(int *)(param_1 + 0x78));
  }
  iVar2 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar2 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar9 = (longlong)(int)uVar10 * 0x10;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*plVar1 + lVar9 + 0x10),(void *)(*plVar1 + lVar9),
             (longlong)(int)(iVar2 - uVar10) << 4);
  lVar3 = *plVar1;
  *(undefined8 *)(lVar9 + lVar3) = 0;
  *(undefined8 *)(lVar9 + 8 + lVar3) = 0;
  lVar3 = *plVar1;
  *(undefined8 *)(lVar3 + lVar9) = CONCAT44(fVar4,param_3);
  ((undefined8 *)(lVar3 + lVar9))[1] = uVar5;
  return uVar10;
}



// FUNCTION 142507210 SetKeyframeTime body=101 status=ok
// SIG undefined SetKeyframeTime(void)

ulonglong UInterpTrackFloatBase::SetKeyframeTime
                    (longlong param_1,int param_2,undefined4 param_3,char param_4)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_2;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    if (param_4 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x70) + uVar2 * 0x14) = param_3;
    }
    else {
      uVar1 = FInterpCurve<float>::MovePoint(param_1 + 0x70,param_2);
      uVar2 = (ulonglong)uVar1;
    }
    FInterpCurve<float>::AutoSetTangents(param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),1);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 142507280 SetKeyframeTime body=292 status=ok
// SIG undefined SetKeyframeTime(void)

ulonglong UInterpTrackLinearColorBase::SetKeyframeTime
                    (longlong param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar10 = (ulonglong)param_2;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    if (param_4 == '\0') {
      *(undefined4 *)(uVar10 * 0x38 + *(longlong *)(param_1 + 0x70)) = param_3;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x78);
      if (param_2 < iVar8) {
        _Dst = (void *)(uVar10 * 0x38 + *(longlong *)(param_1 + 0x70));
        local_48 = *(undefined4 *)((longlong)_Dst + 4);
        uStack_44 = *(undefined4 *)((longlong)_Dst + 8);
        uStack_40 = *(undefined4 *)((longlong)_Dst + 0xc);
        uStack_3c = *(undefined4 *)((longlong)_Dst + 0x10);
        uVar2 = *(undefined1 *)((longlong)_Dst + 0x34);
        uVar3 = *(undefined8 *)((longlong)_Dst + 0x14);
        uVar4 = *(undefined8 *)((longlong)_Dst + 0x1c);
        uVar5 = *(undefined8 *)((longlong)_Dst + 0x24);
        uVar6 = *(undefined8 *)((longlong)_Dst + 0x2c);
        iVar7 = (iVar8 - param_2) + -1;
        if (iVar7 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    (_Dst,(void *)((longlong)(param_2 + 1) * 0x38 + *(longlong *)(param_1 + 0x70)),
                     (longlong)iVar7 * 0x38);
          iVar8 = *(int *)(param_1 + 0x78);
        }
        *(int *)(param_1 + 0x78) = iVar8 + -1;
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeShrink(param_1 + 0x70);
        iVar8 = FInterpCurve<FLinearColor>::AddPoint(param_1 + 0x70,param_3,&local_48);
        uVar10 = (ulonglong)iVar8;
        lVar9 = uVar10 * 0x38;
        *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x34 + lVar9) = uVar2;
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x14 + lVar9);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x24 + lVar9);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
      }
    }
    FInterpCurve<FLinearColor>::AutoSetTangents(param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),1);
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 1425073b0 SetKeyframeTime body=250 status=ok
// SIG undefined SetKeyframeTime(void)

int UInterpTrackMove::SetKeyframeTime(longlong param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    if (param_4 == '\0') {
      lVar2 = (longlong)param_2 * 0x2c;
      *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x70)) = param_3;
      *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x88)) = param_3;
      *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 8 + (longlong)param_2 * 0x10) = param_3;
    }
    else {
      iVar1 = FInterpCurve<FVector>::MovePoint(param_1 + 0x70,param_2);
      FInterpCurve<FVector>::MovePoint(param_1 + 0x88,param_2,param_3);
      FInterpLookupTrack::MovePoint(param_1 + 0xa0,param_2,param_3);
      param_2 = iVar1;
    }
    FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x70,*(undefined4 *)(param_1 + 0xb8),1);
    FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x88,*(undefined4 *)(param_1 + 0xbc),1);
    return param_2;
  }
  return param_2;
}



// FUNCTION 1425074b0 SetKeyframeTime body=199 status=ok
// SIG undefined SetKeyframeTime(void)

int UInterpTrackMoveAxis::SetKeyframeTime
              (longlong param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    if (param_4 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)param_2 * 0x14) = param_3;
      *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 8 + (longlong)param_2 * 0x10) = param_3;
    }
    else {
      iVar1 = FInterpCurve<float>::MovePoint(param_1 + 0x70,param_2);
      FInterpLookupTrack::MovePoint(param_1 + 0x98,param_2,param_3);
      param_2 = iVar1;
    }
    FInterpCurve<float>::AutoSetTangents(param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),1);
    return param_2;
  }
  return param_2;
}



// FUNCTION 142507580 SetKeyframeTime body=315 status=ok
// SIG undefined SetKeyframeTime(void)

ulonglong UInterpTrackParticleReplay::SetKeyframeTime
                    (longlong param_1,uint param_2,float param_3,char param_4)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 local_28;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x78) <= (int)param_2)) {
    return (ulonglong)param_2;
  }
  pfVar6 = (float *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)param_2 * 0xc);
  if (param_4 == '\0') {
    *pfVar6 = param_3;
    return (ulonglong)param_2;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  uVar1 = *(undefined8 *)pfVar6;
  fVar3 = pfVar6[2];
  iVar5 = (iVar2 - param_2) + -1;
  if (iVar5 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              (pfVar6,(void *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)(param_2 + 1) * 0xc),
               (longlong)iVar5 * 0xc);
    iVar2 = *(int *)(param_1 + 0x78);
  }
  *(int *)(param_1 + 0x78) = iVar2 + -1;
  TArray<FVector,FDefaultAllocator>::ResizeShrink(param_1 + 0x70);
  uVar7 = 0;
  local_28 = CONCAT44((int)((ulonglong)uVar1 >> 0x20),param_3);
  uVar9 = uVar7;
  if (0 < *(int *)(param_1 + 0x78)) {
    pfVar6 = *(float **)(param_1 + 0x70);
    do {
      if (param_3 < *pfVar6 || param_3 == *pfVar6) break;
      uVar9 = (ulonglong)((int)uVar9 + 1);
      uVar7 = uVar7 + 1;
      pfVar6 = pfVar6 + 3;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x78));
  }
  TArray<FParticleReplayTrackKey,FDefaultAllocator>::InsertUninitialized(param_1 + 0x70,uVar9,1);
  lVar8 = (longlong)(int)uVar9;
  lVar4 = *(longlong *)(param_1 + 0x70);
  *(undefined8 *)(lVar4 + lVar8 * 0xc) = 0;
  *(undefined4 *)(lVar4 + 8 + lVar8 * 0xc) = 0;
  lVar4 = *(longlong *)(param_1 + 0x70);
  *(undefined8 *)(lVar4 + lVar8 * 0xc) = local_28;
  *(float *)(lVar4 + 8 + lVar8 * 0xc) = fVar3;
  return uVar9;
}



// FUNCTION 1425076c0 SetKeyframeTime body=326 status=ok
// SIG undefined SetKeyframeTime(void)

ulonglong UInterpTrackSound::SetKeyframeTime
                    (longlong param_1,uint param_2,float param_3,char param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  float *pfVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x98) <= (int)param_2)) {
    return (ulonglong)param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x90);
  pfVar9 = (float *)(*plVar1 + (longlong)(int)param_2 * 0x18);
  if (param_4 == '\0') {
    *pfVar9 = param_3;
    return (ulonglong)param_2;
  }
  iVar4 = *(int *)(param_1 + 0x98);
  fVar6 = pfVar9[1];
  uVar7 = *(undefined8 *)(pfVar9 + 2);
  uVar3 = *(undefined8 *)(pfVar9 + 4);
  iVar8 = (iVar4 - param_2) + -1;
  if (iVar8 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              (pfVar9,(void *)(*plVar1 + (longlong)(int)(param_2 + 1) * 0x18),(longlong)iVar8 * 0x18
              );
    iVar4 = *(int *)(param_1 + 0x98);
  }
  *(int *)(param_1 + 0x98) = iVar4 + -1;
  TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
  uVar10 = 0;
  uVar12 = uVar10;
  if (0 < *(int *)(param_1 + 0x98)) {
    pfVar9 = (float *)*plVar1;
    do {
      if (param_3 < *pfVar9 || param_3 == *pfVar9) break;
      uVar12 = (ulonglong)((int)uVar12 + 1);
      uVar10 = uVar10 + 1;
      pfVar9 = pfVar9 + 6;
    } while ((longlong)uVar10 < (longlong)*(int *)(param_1 + 0x98));
  }
  TArray<FTabManager::FTab,FDefaultAllocator>::InsertUninitialized(plVar1,uVar12,1);
  lVar11 = (longlong)(int)uVar12;
  lVar5 = *plVar1;
  *(undefined8 *)(lVar5 + lVar11 * 0x18) = 0;
  *(undefined8 *)(lVar5 + 8 + lVar11 * 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x10 + lVar11 * 0x18) = 0;
  lVar5 = *plVar1;
  puVar2 = (undefined8 *)(lVar5 + lVar11 * 0x18);
  *puVar2 = CONCAT44(fVar6,param_3);
  puVar2[1] = uVar7;
  *(undefined8 *)(lVar5 + 0x10 + lVar11 * 0x18) = uVar3;
  return uVar12;
}



// FUNCTION 142507810 SetKeyframeTime body=321 status=ok
// SIG undefined SetKeyframeTime(void)

uint UInterpTrackToggle::SetKeyframeTime(longlong param_1,uint param_2,float param_3,char param_4)

{
  longlong *plVar1;
  void *_Src;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x78) <= (int)param_2)) {
    return param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  pfVar6 = (float *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)param_2 * 8);
  if (param_4 == '\0') {
    *pfVar6 = param_3;
    return param_2;
  }
  iVar3 = *(int *)(param_1 + 0x78);
  uVar2 = *(undefined1 *)(pfVar6 + 1);
  iVar5 = (iVar3 - param_2) + -1;
  if (iVar5 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              (pfVar6,(void *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)(param_2 + 1) * 8),
               (longlong)iVar5 << 3);
    iVar3 = *(int *)(param_1 + 0x78);
  }
  *(int *)(param_1 + 0x78) = iVar3 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
  uVar7 = 0;
  uVar9 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    pfVar6 = (float *)*plVar1;
    uVar10 = uVar7;
    do {
      uVar9 = (uint)uVar10;
      if (param_3 < *pfVar6 || param_3 == *pfVar6) break;
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar7 = uVar7 + 1;
      pfVar6 = pfVar6 + 2;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x78));
  }
  iVar3 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar3 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  lVar8 = (longlong)(int)uVar9;
  _Src = (void *)(*plVar1 + lVar8 * 8);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 8),_Src,(longlong)(int)(iVar3 - uVar9) << 3);
  *(undefined8 *)(*plVar1 + lVar8 * 8) = 0;
  lVar4 = *plVar1;
  *(float *)(lVar4 + lVar8 * 8) = param_3;
  *(undefined1 *)(lVar4 + 4 + lVar8 * 8) = uVar2;
  return uVar9;
}



// FUNCTION 142507960 SetKeyframeTime body=101 status=ok
// SIG undefined SetKeyframeTime(void)

ulonglong UInterpTrackVectorBase::SetKeyframeTime
                    (longlong param_1,int param_2,undefined4 param_3,char param_4)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_2;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    if (param_4 == '\0') {
      *(undefined4 *)(uVar2 * 0x2c + *(longlong *)(param_1 + 0x70)) = param_3;
    }
    else {
      uVar1 = FInterpCurve<FVector>::MovePoint(param_1 + 0x70,param_2);
      uVar2 = (ulonglong)uVar1;
    }
    FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),1);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1425079d0 SetKeyframeTime body=337 status=ok
// SIG undefined SetKeyframeTime(void)

uint UInterpTrackVisibility::SetKeyframeTime
               (longlong param_1,uint param_2,float param_3,char param_4)

{
  longlong *plVar1;
  void *_Src;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  float *pfVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x78) <= (int)param_2)) {
    return param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  pfVar7 = (float *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)param_2 * 8);
  if (param_4 == '\0') {
    *pfVar7 = param_3;
    return param_2;
  }
  iVar4 = *(int *)(param_1 + 0x78);
  uVar2 = *(undefined1 *)(pfVar7 + 1);
  uVar3 = *(undefined1 *)((longlong)pfVar7 + 5);
  iVar6 = (iVar4 - param_2) + -1;
  if (iVar6 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              (pfVar7,(void *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)(param_2 + 1) * 8),
               (longlong)iVar6 << 3);
    iVar4 = *(int *)(param_1 + 0x78);
  }
  *(int *)(param_1 + 0x78) = iVar4 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
  uVar8 = 0;
  uVar10 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    pfVar7 = (float *)*plVar1;
    uVar11 = uVar8;
    do {
      uVar10 = (uint)uVar11;
      if (param_3 < *pfVar7 || param_3 == *pfVar7) break;
      uVar10 = uVar10 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar8 = uVar8 + 1;
      pfVar7 = pfVar7 + 2;
    } while ((longlong)uVar8 < (longlong)*(int *)(param_1 + 0x78));
  }
  iVar4 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar4 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  lVar9 = (longlong)(int)uVar10;
  _Src = (void *)(*plVar1 + lVar9 * 8);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 8),_Src,(longlong)(int)(iVar4 - uVar10) << 3);
  *(undefined8 *)(*plVar1 + lVar9 * 8) = 0;
  lVar5 = *plVar1;
  *(float *)(lVar5 + lVar9 * 8) = param_3;
  *(undefined1 *)(lVar5 + 4 + lVar9 * 8) = uVar2;
  *(undefined1 *)(lVar5 + 5 + lVar9 * 8) = uVar3;
  return uVar10;
}



// FUNCTION 142507b70 FUN_142507b70 body=6072 status=ok
// SIG undefined FUN_142507b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142507b70(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,undefined4 param_7)

{
  undefined4 uVar1;
  float fVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  void *_Dst;
  ulonglong uVar14;
  int iVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1f8 [32];
  ulonglong local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  uint local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8;
  undefined8 local_198;
  ulonglong uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 *local_168;
  ulonglong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_1c8 = param_7;
  local_1d0 = param_6;
  local_1d8 = param_5;
  local_1b0 = param_5;
  local_168 = param_2;
  FUN_1425783f0();
  lVar5 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  uVar13 = *(undefined8 *)(lVar5 + 0x38);
  local_1a8 = uVar13;
  if ((((*(char *)(param_4 + 0x339) != '\0') && (1 < *(int *)(param_5 + 0x1a38))) &&
      ((0x1d < DAT_146ab62cc || ((0x25e2efcaU >> (DAT_146ab62cc & 0x1f) & 1) == 0)))) &&
     (((0x1b < DAT_146ab62cc || ((0x8051000U >> (DAT_146ab62cc & 0x1f) & 1) == 0)) ||
      (uVar7 = RHIGetShaderLanguageVersion(DAT_146ab62cc,0x30), 1 < uVar7)))) {
    uVar6 = *(undefined8 *)(*(longlong *)(param_4 + 0x750) + 0xb8);
    if (*(short *)(param_1 + 0x48) != 0) {
      uVar4 = *(ushort *)(param_1 + 0x46);
      puVar12 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
      if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x30);
        puVar12 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar12 + 5;
      }
      *(undefined8 **)((longlong)param_2 + 0x30) = puVar9;
      *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
      **(undefined8 **)((longlong)param_2 + 8) = puVar12;
      *(undefined8 **)((longlong)param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_144165218;
      puVar12[2] = uVar13;
      *(uint *)(puVar12 + 3) = (uint)uVar4;
      puVar12[4] = uVar6;
    }
    uVar6 = *(undefined8 *)(*(longlong *)(param_4 + 0x750) + 0xc0);
    if (*(short *)(param_1 + 0x4c) != 0) {
      uVar4 = *(ushort *)(param_1 + 0x4a);
      puVar12 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
      if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x30);
        puVar12 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar12 + 5;
      }
      *(undefined8 **)((longlong)param_2 + 0x30) = puVar9;
      *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
      **(undefined8 **)((longlong)param_2 + 8) = puVar12;
      *(undefined8 **)((longlong)param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_144165218;
      puVar12[2] = local_1a8;
      *(uint *)(puVar12 + 3) = (uint)uVar4;
      puVar12[4] = uVar6;
      uVar13 = local_1a8;
    }
    uVar6 = *(undefined8 *)(param_4 + 0x7c0);
    if (*(short *)(param_1 + 0x50) != 0) {
      uVar4 = *(ushort *)(param_1 + 0x4e);
      puVar12 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
      if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x30);
        puVar12 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar12 + 5;
      }
      *(undefined8 **)((longlong)param_2 + 0x30) = puVar9;
      *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
      **(undefined8 **)((longlong)param_2 + 8) = puVar12;
      *(undefined8 **)((longlong)param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_144165218;
      puVar12[2] = local_1a8;
      *(uint *)(puVar12 + 3) = (uint)uVar4;
      puVar12[4] = uVar6;
      uVar13 = local_1a8;
    }
    uVar6 = *(undefined8 *)(param_4 + 0x7c8);
    if (*(short *)(param_1 + 0x54) != 0) {
      uVar4 = *(ushort *)(param_1 + 0x52);
      puVar12 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
      if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x30);
        puVar12 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar12 + 5;
      }
      *(undefined8 **)((longlong)param_2 + 0x30) = puVar9;
      *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
      **(undefined8 **)((longlong)param_2 + 8) = puVar12;
      *(undefined8 **)((longlong)param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_144165218;
      puVar12[2] = local_1a8;
      *(uint *)(puVar12 + 3) = (uint)uVar4;
      puVar12[4] = uVar6;
      uVar13 = local_1a8;
    }
    uVar6 = *(undefined8 *)(param_4 + 2000);
    param_5 = local_1b0;
    if (*(short *)(param_1 + 0x58) != 0) {
      uVar4 = *(ushort *)(param_1 + 0x56);
      puVar12 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
      if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x30);
        puVar12 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar12 + 5;
      }
      *(undefined8 **)((longlong)param_2 + 0x30) = puVar9;
      *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
      **(undefined8 **)((longlong)param_2 + 8) = puVar12;
      *(undefined8 **)((longlong)param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_144165218;
      puVar12[2] = local_1a8;
      *(uint *)(puVar12 + 3) = (uint)uVar4;
      puVar12[4] = uVar6;
      uVar13 = local_1a8;
      param_5 = local_1b0;
    }
  }
  iVar15 = 0;
  lVar5 = *(longlong *)(param_6 + 0x20);
  if (*(short *)(param_1 + 0x32) != 0) {
    local_148 = 0x80000000800000;
    uStack_140 = 0x3f8000007f7fffff;
    local_158 = 0;
    uStack_150 = 0;
    local_138 = 0x80000000800000;
    uStack_130 = 0x7f7fffff;
    local_188 = 0;
    uStack_180 = 0x3f80000000000000;
    local_178 = 0;
    uStack_170 = 0;
    if ((lVar5 != 0) && (*(char *)(param_6 + 0x65) != '\0')) {
      uVar7 = *(uint *)(lVar5 + 0x18);
      uVar11 = *(int *)(*(longlong *)(lVar5 + 8) + 8) - 1;
      if (*(int *)(DAT_146afbd80 + 4) <= (int)uVar11) {
        uVar11 = *(uint *)(DAT_146afbd80 + 4);
      }
      local_1b8 = uVar7;
      if ((-1 < (int)uVar11) && (local_1b8 = uVar11, (int)uVar11 <= (int)uVar7)) {
        local_1b8 = uVar7;
      }
      if (1.0 < *(float *)(param_5 + 0x3cc) || *(float *)(param_5 + 0x3cc) == 1.0) {
        fVar19 = 0.0;
      }
      else {
        fVar19 = *(float *)(DAT_146af9dd8 + 4);
      }
      fVar20 = *(float *)(DAT_146af9df0 + 4);
      uVar1 = *(undefined4 *)(DAT_146af9e08 + 4);
      lVar8 = FUN_1428742e0();
      uVar7 = local_1b8;
      fVar2 = *(float *)(lVar8 + 0x1c);
      if (*(char *)(param_6 + 100) == '\0') {
        uVar16 = 0;
      }
      else {
        uVar16 = 0xbf800000;
      }
      local_158 = CONCAT44(uVar16,uVar16) ^ 0x8000000000000000;
      uStack_150 = CONCAT44(uStack_150._4_4_,0x3f800000);
      do {
        fVar21 = 3.4028235e+38;
        puVar9 = &local_138;
        if (iVar15 == 0) {
          puVar9 = &local_148;
        }
        if (0.0 < fVar19) {
          fVar21 = (float)ComputeBoundsDrawDistance();
          fVar21 = fVar21 * fVar20;
        }
        fVar17 = fVar21;
        if ((0.0 < (float)*(int *)(lVar5 + 0x14)) &&
           (fVar17 = (float)*(int *)(lVar5 + 0x14) * fVar2, fVar21 <= fVar17)) {
          fVar17 = fVar21;
        }
        lVar8 = *(longlong *)(lVar5 + 8);
        bVar3 = *(byte *)(param_6 + 100);
        fVar17 = fVar17 * fVar2;
        *(float *)(puVar9 + 1) = fVar17;
        if ((int)(uint)bVar3 < *(int *)(lVar8 + 8) + -1) {
          fVar18 = (float)ComputeBoundsDrawDistance(bVar3,lVar8,param_5 + 0x390);
          bVar3 = *(byte *)(param_6 + 100);
          fVar21 = fVar18 * fVar20;
          if (fVar17 <= fVar18 * fVar20) {
            fVar21 = fVar17;
          }
          *(float *)(puVar9 + 1) = fVar21;
        }
        *(undefined4 *)puVar9 = 0x800000;
        if ((int)uVar7 < (int)(uint)bVar3) {
          fVar21 = (float)ComputeBoundsDrawDistance();
          fVar21 = fVar21 * fVar20;
          if (fVar17 <= fVar21) {
            *(undefined4 *)(puVar9 + 1) = 0x800000;
            goto LAB_142508121;
          }
        }
        else {
LAB_142508121:
          fVar21 = 1.1754944e-38;
        }
        uVar14 = local_1b0;
        iVar15 = iVar15 + 1;
        *(float *)((longlong)puVar9 + 4) = fVar21;
      } while (iVar15 < 2);
      puVar9 = (undefined8 *)FUN_14274fc40(local_1b0,&local_198,0,1);
      local_178 = *puVar9;
      uStack_170 = CONCAT44(uStack_170._4_4_,*(undefined4 *)(puVar9 + 1));
      puVar9 = (undefined8 *)FUN_14274fc40(uVar14,&local_198,1,1);
      local_188 = *puVar9;
      uStack_180 = CONCAT44(uStack_180._4_4_,*(undefined4 *)(puVar9 + 1));
      fVar19 = (float)FUN_14274fcb0(uVar14);
      uStack_140 = CONCAT44(uVar1,(undefined4)uStack_140);
      uStack_170 = CONCAT44(1.0 - fVar19,(undefined4)uStack_170);
      uStack_180 = CONCAT44(fVar19,(undefined4)uStack_180);
      uVar13 = local_1a8;
      param_2 = local_168;
    }
    local_1d8 = local_1d8 & 0xffffffff00000000;
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,uVar13,param_1 + 0x16,&local_148);
    local_1d8 = local_1d8 & 0xffffffff00000000;
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,uVar13,param_1 + 0x1c,&local_138);
    local_1d8 = local_1d8 & 0xffffffff00000000;
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,uVar13,param_1 + 0x22,&local_158);
    local_1d8 = local_1d8 & 0xffffffff00000000;
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,uVar13,param_1 + 0x28,&local_178);
    local_1d8 = local_1d8 & 0xffffffff00000000;
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,uVar13,param_1 + 0x2e,&local_188);
  }
  if (*(short *)(param_1 + 0x14) != 0) {
    local_198 = 0x7f7fffff;
    uStack_190 = 0x3f8000003f800000;
    if (lVar5 != 0) {
      lVar8 = FUN_1428742e0();
      fVar19 = (float)*(int *)(lVar5 + 0x14) * *(float *)(lVar8 + 0x1c);
      fVar20 = (float)*(int *)(lVar5 + 0x10) * *(float *)(lVar8 + 0x1c);
      local_198 = CONCAT44(local_198._4_4_,fVar20);
      if (0.0 < fVar19) {
        if (fVar19 <= fVar20) {
          local_198 = CONCAT44(0x3f800000,fVar20);
        }
        else {
          local_198 = CONCAT44(1.0 / (fVar19 - fVar20),fVar20);
        }
      }
      if (*(int *)(DAT_146afbd98 + 4) < 1) {
        if (*(char *)(lVar5 + 0x1c) == '\0') {
          uStack_190 = uStack_190 & 0xffffffff00000000;
        }
        if (*(char *)(lVar5 + 0x1d) == '\0') {
          uStack_190 = uStack_190 & 0xffffffff;
        }
      }
      else {
        uStack_190 = 0;
      }
    }
    local_1d8 = local_1d8 & 0xffffffff00000000;
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,uVar13,param_1 + 0x10,&local_198);
  }
  if ((DAT_1464c9c6c == '\0') && (*(short *)(param_1 + 0x38) != 0)) {
    uVar14 = (ulonglong)*(int *)(param_6 + 0x58);
    local_128 = 0;
    uStack_120 = 0x3f80000000000000;
    local_118 = 0;
    uStack_110 = 0x3f80000000000000;
    local_108 = 0;
    uStack_100 = 0x3f80000000000000;
    local_178 = 0;
    uStack_170 = 0x3f80000000000000;
    puVar9 = *(undefined8 **)(*(longlong *)(**(longlong **)(param_6 + 0x20) + 8) + 0x48);
    lVar5 = puVar9[3];
    local_1b0 = uVar14;
    local_168 = puVar9;
    if (*(char *)((longlong)puVar9 + 0x34) == '\0') {
      (**(code **)(*(longlong *)puVar9[2] + 0x28))();
      (**(code **)(*(longlong *)puVar9[2] + 0x20))();
      local_128 = CONCAT44(*(undefined4 *)(lVar5 + 4 + uVar14 * 0x30),
                           *(undefined4 *)(lVar5 + uVar14 * 0x30));
      uStack_120 = CONCAT44(*(undefined4 *)(lVar5 + 0xc + uVar14 * 0x30),
                            *(undefined4 *)(lVar5 + 8 + uVar14 * 0x30));
      local_118 = CONCAT44(*(undefined4 *)(lVar5 + 0x14 + uVar14 * 0x30),
                           *(undefined4 *)(lVar5 + 0x10 + uVar14 * 0x30));
      uStack_110 = CONCAT44(*(undefined4 *)(lVar5 + 0x1c + uVar14 * 0x30),
                            *(undefined4 *)(lVar5 + 0x18 + uVar14 * 0x30));
      local_108 = CONCAT44(*(undefined4 *)(lVar5 + 0x24 + uVar14 * 0x30),
                           *(undefined4 *)(lVar5 + 0x20 + uVar14 * 0x30));
      uStack_100 = CONCAT44(*(undefined4 *)(lVar5 + 0x2c + uVar14 * 0x30),
                            *(undefined4 *)(lVar5 + 0x28 + uVar14 * 0x30));
    }
    else {
      (**(code **)(*(longlong *)puVar9[2] + 0x28))();
      (**(code **)(*(longlong *)puVar9[2] + 0x20))();
      uVar4 = *(ushort *)(lVar5 + uVar14 * 0x18);
      uVar10 = (ulonglong)_tls_index;
      uVar7 = (uVar4 & 0xffff8000) << 0x10;
      if ((uVar4 & 0x7c00) == 0) {
        uVar11 = uVar4 & 0x3ff;
        if ((uVar4 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar11);
          iVar15 = 10 - (int)(fVar19 * DAT_1468509d8);
          uVar14 = local_1b0;
          uVar7 = uVar11 << ((char)iVar15 + 0xdU & 0x1f) & 0x7fffff |
                  (0x71U - iVar15 & 0xff) << 0x17 | uVar7;
        }
      }
      else if ((uVar4 & 0x7c00) == 0x7c00) {
        uVar7 = uVar7 | 0x477fe000;
      }
      else {
        uVar7 = ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar4 & 0x3ff) << 0xd | uVar7;
      }
      local_1b8 = uVar7;
      local_128 = CONCAT44(local_128._4_4_,local_1b8);
      uVar4 = *(ushort *)(lVar5 + 2 + uVar14 * 0x18);
      uVar7 = (uVar4 & 0xffff8000) << 0x10;
      if ((uVar4 & 0x7c00) == 0) {
        uVar11 = uVar4 & 0x3ff;
        if ((uVar4 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar11);
          iVar15 = 10 - (int)(fVar19 * DAT_1468509d8);
          uVar14 = local_1b0;
          uVar7 = uVar11 << ((char)iVar15 + 0xdU & 0x1f) & 0x7fffff |
                  (0x71U - iVar15 & 0xff) << 0x17 | uVar7;
        }
      }
      else if ((uVar4 & 0x7c00) == 0x7c00) {
        uVar7 = uVar7 | 0x477fe000;
      }
      else {
        uVar7 = ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar4 & 0x3ff) << 0xd | uVar7;
      }
      local_1b8 = uVar7;
      local_128 = CONCAT44(local_1b8,(undefined4)local_128);
      uVar4 = *(ushort *)(lVar5 + 4 + uVar14 * 0x18);
      uVar7 = (uVar4 & 0xffff8000) << 0x10;
      if ((uVar4 & 0x7c00) == 0) {
        uVar11 = uVar4 & 0x3ff;
        if ((uVar4 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar11);
          iVar15 = 10 - (int)(fVar19 * DAT_1468509d8);
          uVar14 = local_1b0;
          uVar7 = uVar11 << ((char)iVar15 + 0xdU & 0x1f) & 0x7fffff |
                  (0x71U - iVar15 & 0xff) << 0x17 | uVar7;
        }
      }
      else if ((uVar4 & 0x7c00) == 0x7c00) {
        uVar7 = uVar7 | 0x477fe000;
      }
      else {
        uVar7 = ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar4 & 0x3ff) << 0xd | uVar7;
      }
      local_1b8 = uVar7;
      uStack_120 = CONCAT44(uStack_120._4_4_,local_1b8);
      uVar4 = *(ushort *)(lVar5 + 6 + uVar14 * 0x18);
      uVar7 = (uVar4 & 0xffff8000) << 0x10;
      if ((uVar4 & 0x7c00) == 0) {
        uVar11 = uVar4 & 0x3ff;
        if ((uVar4 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar11);
          iVar15 = 10 - (int)(fVar19 * DAT_1468509d8);
          uVar14 = local_1b0;
          uVar7 = uVar11 << ((char)iVar15 + 0xdU & 0x1f) & 0x7fffff |
                  (0x71U - iVar15 & 0xff) << 0x17 | uVar7;
        }
      }
      else if ((uVar4 & 0x7c00) == 0x7c00) {
        uVar7 = uVar7 | 0x477fe000;
      }
      else {
        uVar7 = ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar4 & 0x3ff) << 0xd | uVar7;
      }
      local_1b8 = uVar7;
      uStack_120 = CONCAT44(local_1b8,(undefined4)uStack_120);
      uVar4 = *(ushort *)(lVar5 + 8 + uVar14 * 0x18);
      uVar7 = (uVar4 & 0xffff8000) << 0x10;
      if ((uVar4 & 0x7c00) == 0) {
        uVar11 = uVar4 & 0x3ff;
        if ((uVar4 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar11);
          iVar15 = 10 - (int)(fVar19 * DAT_1468509d8);
          uVar14 = local_1b0;
          uVar7 = uVar11 << ((char)iVar15 + 0xdU & 0x1f) & 0x7fffff |
                  (0x71U - iVar15 & 0xff) << 0x17 | uVar7;
        }
      }
      else if ((uVar4 & 0x7c00) == 0x7c00) {
        uVar7 = uVar7 | 0x477fe000;
      }
      else {
        uVar7 = ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar4 & 0x3ff) << 0xd | uVar7;
      }
      local_1b8 = uVar7;
      local_118 = CONCAT44(local_118._4_4_,local_1b8);
      uVar4 = *(ushort *)(lVar5 + 10 + uVar14 * 0x18);
      uVar7 = (uVar4 & 0xffff8000) << 0x10;
      if ((uVar4 & 0x7c00) == 0) {
        uVar11 = uVar4 & 0x3ff;
        if ((uVar4 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar11);
          iVar15 = 10 - (int)(fVar19 * DAT_1468509d8);
          uVar14 = local_1b0;
          uVar7 = uVar11 << ((char)iVar15 + 0xdU & 0x1f) & 0x7fffff |
                  (0x71U - iVar15 & 0xff) << 0x17 | uVar7;
        }
      }
      else if ((uVar4 & 0x7c00) == 0x7c00) {
        uVar7 = uVar7 | 0x477fe000;
      }
      else {
        uVar7 = ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar4 & 0x3ff) << 0xd | uVar7;
      }
      local_1b8 = uVar7;
      local_118 = CONCAT44(local_1b8,(undefined4)local_118);
      uVar4 = *(ushort *)(lVar5 + 0xc + uVar14 * 0x18);
      uVar7 = (uVar4 & 0xffff8000) << 0x10;
      if ((uVar4 & 0x7c00) == 0) {
        uVar11 = uVar4 & 0x3ff;
        if ((uVar4 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar11);
          iVar15 = 10 - (int)(fVar19 * DAT_1468509d8);
          uVar14 = local_1b0;
          uVar7 = uVar11 << ((char)iVar15 + 0xdU & 0x1f) & 0x7fffff |
                  (0x71U - iVar15 & 0xff) << 0x17 | uVar7;
        }
      }
      else if ((uVar4 & 0x7c00) == 0x7c00) {
        uVar7 = uVar7 | 0x477fe000;
      }
      else {
        uVar7 = ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar4 & 0x3ff) << 0xd | uVar7;
      }
      local_1b8 = uVar7;
      uStack_110 = CONCAT44(uStack_110._4_4_,local_1b8);
      uVar4 = *(ushort *)(lVar5 + 0xe + uVar14 * 0x18);
      uVar7 = (uVar4 & 0xffff8000) << 0x10;
      if ((uVar4 & 0x7c00) == 0) {
        uVar11 = uVar4 & 0x3ff;
        if ((uVar4 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar11);
          iVar15 = 10 - (int)(fVar19 * DAT_1468509d8);
          uVar14 = local_1b0;
          uVar7 = uVar11 << ((char)iVar15 + 0xdU & 0x1f) & 0x7fffff |
                  (0x71U - iVar15 & 0xff) << 0x17 | uVar7;
        }
      }
      else if ((uVar4 & 0x7c00) == 0x7c00) {
        uVar7 = uVar7 | 0x477fe000;
      }
      else {
        uVar7 = ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar4 & 0x3ff) << 0xd | uVar7;
      }
      local_1b8 = uVar7;
      uStack_110 = CONCAT44(local_1b8,(undefined4)uStack_110);
      uVar4 = *(ushort *)(lVar5 + 0x10 + uVar14 * 0x18);
      uVar7 = (uVar4 & 0xffff8000) << 0x10;
      if ((uVar4 & 0x7c00) == 0) {
        uVar11 = uVar4 & 0x3ff;
        if ((uVar4 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar11);
          iVar15 = 10 - (int)(fVar19 * DAT_1468509d8);
          uVar14 = local_1b0;
          uVar7 = uVar11 << ((char)iVar15 + 0xdU & 0x1f) & 0x7fffff |
                  (0x71U - iVar15 & 0xff) << 0x17 | uVar7;
        }
      }
      else if ((uVar4 & 0x7c00) == 0x7c00) {
        uVar7 = uVar7 | 0x477fe000;
      }
      else {
        uVar7 = ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar4 & 0x3ff) << 0xd | uVar7;
      }
      local_1b8 = uVar7;
      local_108 = CONCAT44(local_108._4_4_,local_1b8);
      uVar4 = *(ushort *)(lVar5 + 0x12 + uVar14 * 0x18);
      uVar7 = (uVar4 & 0xffff8000) << 0x10;
      if ((uVar4 & 0x7c00) == 0) {
        uVar11 = uVar4 & 0x3ff;
        if ((uVar4 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar11);
          iVar15 = 10 - (int)(fVar19 * DAT_1468509d8);
          uVar14 = local_1b0;
          uVar7 = uVar11 << ((char)iVar15 + 0xdU & 0x1f) & 0x7fffff |
                  (0x71U - iVar15 & 0xff) << 0x17 | uVar7;
        }
      }
      else if ((uVar4 & 0x7c00) == 0x7c00) {
        uVar7 = uVar7 | 0x477fe000;
      }
      else {
        uVar7 = ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar4 & 0x3ff) << 0xd | uVar7;
      }
      local_1b8 = uVar7;
      local_108 = CONCAT44(local_1b8,(undefined4)local_108);
      uVar4 = *(ushort *)(lVar5 + 0x14 + uVar14 * 0x18);
      uVar7 = (uVar4 & 0xffff8000) << 0x10;
      if ((uVar4 & 0x7c00) == 0) {
        uVar11 = uVar4 & 0x3ff;
        if ((uVar4 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar11);
          iVar15 = 10 - (int)(DAT_1468509d8 * fVar19);
          uVar14 = local_1b0;
          uVar7 = uVar11 << ((char)iVar15 + 0xdU & 0x1f) & 0x7fffff |
                  (0x71U - iVar15 & 0xff) << 0x17 | uVar7;
        }
      }
      else if ((uVar4 & 0x7c00) == 0x7c00) {
        uVar7 = uVar7 | 0x477fe000;
      }
      else {
        uVar7 = ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar4 & 0x3ff) << 0xd | uVar7;
      }
      local_1b8 = uVar7;
      uStack_100 = CONCAT44(uStack_100._4_4_,local_1b8);
      uVar4 = *(ushort *)(lVar5 + 0x16 + uVar14 * 0x18);
      uVar7 = (uVar4 & 0xffff8000) << 0x10;
      if ((uVar4 & 0x7c00) == 0) {
        uVar11 = uVar4 & 0x3ff;
        if ((uVar4 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar11);
          iVar15 = 10 - (int)(fVar19 * DAT_1468509d8);
          uVar7 = uVar11 << ((char)iVar15 + 0xdU & 0x1f) & 0x7fffff |
                  (0x71U - iVar15 & 0xff) << 0x17 | uVar7;
        }
      }
      else if ((uVar4 & 0x7c00) == 0x7c00) {
        uVar7 = uVar7 | 0x477fe000;
      }
      else {
        uVar7 = ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar4 & 0x3ff) << 0xd | uVar7;
      }
      local_1b8 = uVar7;
      uStack_100 = CONCAT44(local_1b8,(undefined4)uStack_100);
      puVar9 = local_168;
      uVar14 = local_1b0;
    }
    lVar5 = puVar9[5];
    (**(code **)(*(longlong *)puVar9[4] + 0x28))();
    (**(code **)(*(longlong *)puVar9[4] + 0x20))();
    local_188 = CONCAT44((float)(int)*(short *)(lVar5 + 2 + uVar14 * 8) * 3.051851e-05,
                         (float)(int)*(short *)(lVar5 + uVar14 * 8) * 3.051851e-05);
    uStack_180 = CONCAT44((float)(int)*(short *)(lVar5 + 6 + uVar14 * 8) * 3.051851e-05,
                          (float)(int)*(short *)(lVar5 + 4 + uVar14 * 8) * 3.051851e-05);
    lVar5 = puVar9[1];
    (**(code **)(*(longlong *)*puVar9 + 0x28))();
    (**(code **)(*(longlong *)*puVar9 + 0x20))();
    local_1d8 = local_1d8 & 0xffffffff00000000;
    puVar9 = (undefined8 *)(lVar5 + uVar14 * 0x10);
    local_178 = *puVar9;
    uStack_170 = puVar9[1];
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,local_1a8,param_1 + 0x34,&local_178);
    uVar7 = (uint)*(ushort *)(param_1 + 0x3e);
    if (0x2f < *(ushort *)(param_1 + 0x3e)) {
      uVar7 = 0x30;
    }
    uVar14 = (ulonglong)uVar7;
    if (uVar7 != 0) {
      uVar4 = *(ushort *)(param_1 + 0x3c);
      _Dst = (void *)(*(longlong *)((longlong)param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      local_1b8 = (uint)*(ushort *)(param_1 + 0x3a);
      uVar10 = uVar14 + (longlong)_Dst;
      if (*(ulonglong *)((longlong)param_2 + 0x38) < uVar10) {
        FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,uVar7 + 0x10);
        _Dst = (void *)(*(longlong *)((longlong)param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar10 = uVar14 + (longlong)_Dst;
      }
      *(ulonglong *)((longlong)param_2 + 0x30) = uVar10;
      _guard_xfg_dispatch_icall_nop(_Dst,&local_128,uVar14);
      puVar12 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 6;
      if (*(undefined8 **)((longlong)param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk((longlong)param_2 + 0x30,0x38);
        puVar12 = (undefined8 *)(*(longlong *)((longlong)param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar12 + 6;
      }
      *(undefined8 **)((longlong)param_2 + 0x30) = puVar9;
      *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
      **(undefined8 **)((longlong)param_2 + 8) = puVar12;
      *(undefined8 **)((longlong)param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_143f4d340;
      puVar12[2] = local_1a8;
      *(uint *)(puVar12 + 4) = local_1b8;
      puVar12[3] = _Dst;
      *(uint *)((longlong)puVar12 + 0x24) = (uint)uVar4;
      *(uint *)(puVar12 + 5) = uVar7;
    }
    local_1d8 = local_1d8 & 0xffffffff00000000;
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,local_1a8,param_1 + 0x40,&local_188);
  }
  return;
}



// FUNCTION 142509330 FUN_142509330 body=15 status=ok
// SIG undefined FUN_142509330(void)

void FUN_142509330(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x568) = param_2;
  *(undefined1 *)(param_1 + 0x570) = 1;
  return;
}



// FUNCTION 142509350 FUN_142509350 body=117 status=ok
// SIG undefined FUN_142509350(void)

void FUN_142509350(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x97);
  if ((~bVar1 & 1) != 0) {
    FUN_1424fb510();
  }
  FUN_14250cc70(param_1,param_2,0,param_3);
  if ((~bVar1 & 1) != 0) {
    FUN_14250ae20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001425093be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x720))(param_1,0);
  return;
}



// FUNCTION 1425093e0 FUN_1425093e0 body=16 status=ok
// SIG undefined FUN_1425093e0(void)

void FUN_1425093e0(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x460) = *(byte *)(param_1 + 0x460) & 0xfd;
  *(byte *)(param_1 + 0x460) = *(byte *)(param_1 + 0x460) | param_2 * '\x02';
  return;
}



// FUNCTION 1425093f0 SetTrackToSensibleDefault body=72 status=ok
// SIG undefined SetTrackToSensibleDefault(void)

void UInterpTrackAudioMaster::SetTrackToSensibleDefault(longlong param_1)

{
  undefined4 local_18;
  undefined8 local_14;
  
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
  }
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  FInterpCurve<FVector>::AddPoint(param_1 + 0x70,0,&local_18);
  return;
}



// FUNCTION 142509440 SetTrackToSensibleDefault body=79 status=ok
// SIG undefined SetTrackToSensibleDefault(void)

void UInterpTrackColorScale::SetTrackToSensibleDefault(longlong param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
  }
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  local_10 = 0x3f800000;
  FInterpCurve<FVector>::AddPoint(param_1 + 0x70,0,&local_18);
  return;
}



// FUNCTION 142509490 SetTrackToSensibleDefault body=69 status=ok
// SIG undefined SetTrackToSensibleDefault(void)

void UInterpTrackSlomo::SetTrackToSensibleDefault(longlong param_1)

{
  undefined4 local_res8 [8];
  
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x70,0);
  }
  local_res8[0] = 0x3f800000;
  FInterpCurve<float>::AddPoint(param_1 + 0x70,0,local_res8);
  return;
}



// FUNCTION 1425094e0 FUN_1425094e0 body=1001 status=ok
// SIG undefined FUN_1425094e0(void)

void FUN_1425094e0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  int local_res18;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0 [12];
  
  bVar13 = false;
  bVar14 = false;
  if ((((*(longlong *)(param_1 + 0x458) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x458) + 0x58) != 0)) &&
      (lVar8 = UInterpGroupDirector::GetDirectorTrack(), lVar8 != 0)) &&
     (iVar12 = *(int *)(lVar8 + 0x78), 0 < iVar12)) {
    if (*(int *)(param_1 + 0x4b4) < iVar12) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x4a8);
      iVar12 = *(int *)(lVar8 + 0x78);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x4bc);
    local_res18 = 0;
    if (0 < iVar12) {
      lVar16 = 0;
      do {
        lVar3 = *(longlong *)(lVar8 + 0x70);
        lVar11 = *(longlong *)(param_1 + 0x458);
        lVar4 = *(longlong *)(lVar16 + 8 + lVar3);
        if (lVar4 != 0) {
          iVar12 = 0;
          lVar15 = 0;
          if (0 < *(int *)(lVar11 + 0x38)) {
            do {
              if (*(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0x30) + lVar15 * 8) + 0x40) ==
                  lVar4) {
                if (lVar15 == -1) goto LAB_142509630;
                bVar13 = true;
                uVar10 = FName::ToString(lVar16 + lVar3 + 8,local_a0);
                lVar11 = FUN_1424efd90(param_1,uVar10);
                bVar14 = bVar13;
                goto LAB_142509633;
              }
              iVar12 = iVar12 + 1;
              lVar15 = lVar15 + 1;
            } while (iVar12 < *(int *)(lVar11 + 0x38));
          }
        }
        lVar15 = -1;
LAB_142509630:
        lVar11 = 0;
LAB_142509633:
        if (bVar13) {
          bVar14 = false;
          bVar13 = false;
          if (local_a0[0] != 0) {
            FMemory::Free();
          }
        }
        if ((lVar15 != -1) && (lVar11 != 0)) {
          iVar12 = 0;
          lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x458) + 0x30) + lVar15 * 8);
          bVar13 = bVar14;
          if (0 < *(int *)(lVar4 + 0x38)) {
            lVar15 = 0;
            do {
              plVar5 = *(longlong **)(lVar15 + *(longlong *)(lVar4 + 0x30));
              if (plVar5 != (longlong *)0x0) {
                lVar9 = UInterpTrackMove::GetPrivateStaticClass();
                if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                    lVar9 + 0x88)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (((bVar6) && ((*(uint *)(plVar5 + 0xd) >> 2 & 1) == 0)) &&
                   (iVar12 < *(int *)(lVar11 + 0x40))) {
                  local_b0 = 0;
                  uStack_a8 = 0;
                  uVar10 = *(undefined8 *)(lVar15 + *(longlong *)(lVar11 + 0x38));
                  FUN_14250cf30(param_1,*(float *)(lVar16 + lVar3) + 0.01,lVar11);
                  cVar7 = (**(code **)(*plVar5 + 0x390))
                                    (plVar5,uVar10,*(float *)(lVar16 + lVar3) + 0.01,&local_b0,
                                     local_c0);
                  FUN_14250cf30(param_1,uVar2,lVar11);
                  if (cVar7 != '\0') {
                    if (((0.0001 < ABS((float)local_b0)) || (0.0001 < ABS(local_b0._4_4_))) ||
                       (0.0001 < ABS((float)uStack_a8))) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = true;
                    }
                    if (!bVar6) {
                      iVar12 = *(int *)(param_1 + 0x4b0);
                      uStack_a8 = CONCAT44(*(undefined4 *)(lVar16 + lVar3),(float)uStack_a8);
                      *(int *)(param_1 + 0x4b0) = iVar12 + 1;
                      if (*(int *)(param_1 + 0x4b4) < iVar12 + 1) {
                        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x4a8,iVar12);
                      }
                      puVar1 = (undefined4 *)
                               (*(longlong *)(param_1 + 0x4a8) + (longlong)iVar12 * 0x10);
                      *puVar1 = (float)local_b0;
                      puVar1[1] = local_b0._4_4_;
                      puVar1[2] = (float)uStack_a8;
                      puVar1[3] = uStack_a8._4_4_;
                      break;
                    }
                  }
                }
              }
              iVar12 = iVar12 + 1;
              lVar15 = lVar15 + 8;
            } while (iVar12 < *(int *)(lVar4 + 0x38));
          }
        }
        lVar16 = lVar16 + 0x18;
        local_res18 = local_res18 + 1;
      } while (local_res18 < *(int *)(lVar8 + 0x78));
    }
  }
  return;
}



// FUNCTION 1425098d0 FUN_1425098d0 body=684 status=ok
// SIG undefined FUN_1425098d0(void)

void FUN_1425098d0(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *_Dst;
  undefined8 *_Src;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  cVar3 = DAT_1464c9c6c;
  param_4[0x14] = *(undefined8 *)(*(longlong *)(param_1 + 0x400) + (longlong)param_2 * 8);
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x3f0) + 0x48) + 0x30);
  puVar6 = (undefined8 *)param_4[0xf];
  if ((undefined8 *)param_4[0xf] == (undefined8 *)0x0) {
    puVar6 = param_4;
  }
  puVar6[4] = param_1 + 0x420;
  *(undefined1 *)((longlong)puVar6 + 0x66) = 0;
  *(char *)((longlong)puVar6 + 100) = (char)param_2;
  *(undefined4 *)(puVar6 + 0xb) = 0;
  *(char *)((longlong)puVar6 + 0x67) = cVar3;
  if (cVar3 != '\0') {
    *(int *)(puVar6 + 8) = iVar1;
    return;
  }
  iVar8 = param_3 * 0x40;
  uVar7 = iVar1 + param_3 * -0x40;
  uVar9 = 0x40;
  if (uVar7 < 0x41) {
    uVar9 = uVar7;
  }
  if (uVar9 != 0) {
    if (*(int *)((longlong)param_4 + 0x84) < (int)uVar9) {
      FUN_141f1bf20(param_4,uVar9);
    }
    puVar4 = (undefined8 *)param_4[0xf];
    if ((undefined8 *)param_4[0xf] == (undefined8 *)0x0) {
      puVar4 = param_4;
    }
    *(int *)(puVar4 + 0xb) = iVar8;
    while (uVar9 = uVar9 - 1, uVar9 != 0) {
      puVar4 = (undefined8 *)0x0;
      iVar8 = iVar8 + 1;
      iVar1 = *(int *)(param_4 + 0x10);
      *(int *)(param_4 + 0x10) = iVar1 + 1;
      if (*(int *)((longlong)param_4 + 0x84) < iVar1 + 1) {
        FUN_1408ca0e0(param_4,iVar1);
      }
      puVar5 = (undefined8 *)param_4[0xf];
      if ((undefined8 *)param_4[0xf] == (undefined8 *)0x0) {
        puVar5 = param_4;
      }
      puVar5 = puVar5 + (longlong)iVar1 * 0xf;
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
        puVar4 = puVar5;
      }
      *puVar4 = *puVar6;
      TRefCountPtr<FRHIIndexBuffer>::operator=(puVar4 + 1,puVar6[1]);
      puVar5 = puVar4 + 5;
      puVar4[2] = puVar6[2];
      puVar4[3] = puVar6[3];
      puVar4[3] = puVar6[3];
      puVar4[4] = puVar6[4];
      if (puVar5 != puVar6 + 5) {
        iVar1 = *(int *)(puVar6 + 7);
        _Src = (undefined8 *)puVar6[6];
        *(int *)(puVar4 + 7) = iVar1;
        if ((iVar1 == 0) && (*(int *)((longlong)puVar4 + 0x3c) == 0)) {
          *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
        }
        else {
          TArray<TRefCountPtr<FRHIUnorderedAccessView>,TInlineAllocator<1,FDefaultAllocator>_>::
          ResizeForCopy(puVar5,iVar1);
          if (_Src == (undefined8 *)0x0) {
            _Src = puVar6 + 5;
          }
          _Dst = (undefined8 *)puVar4[6];
          if ((undefined8 *)puVar4[6] == (undefined8 *)0x0) {
            _Dst = puVar5;
          }
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 << 3);
        }
      }
      *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(puVar6 + 8);
      *(undefined4 *)((longlong)puVar4 + 0x44) = *(undefined4 *)((longlong)puVar6 + 0x44);
      *(undefined4 *)(puVar4 + 9) = *(undefined4 *)(puVar6 + 9);
      *(undefined4 *)((longlong)puVar4 + 0x4c) = *(undefined4 *)((longlong)puVar6 + 0x4c);
      puVar4[10] = puVar6[10];
      *(undefined4 *)(puVar4 + 0xb) = *(undefined4 *)(puVar6 + 0xb);
      *(undefined4 *)((longlong)puVar4 + 0x5c) = *(undefined4 *)((longlong)puVar6 + 0x5c);
      *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar6 + 0xc);
      *(undefined1 *)((longlong)puVar4 + 100) = *(undefined1 *)((longlong)puVar6 + 100);
      *(undefined1 *)((longlong)puVar4 + 0x65) = *(undefined1 *)((longlong)puVar6 + 0x65);
      *(undefined1 *)((longlong)puVar4 + 0x66) = *(undefined1 *)((longlong)puVar6 + 0x66);
      *(undefined1 *)((longlong)puVar4 + 0x67) = *(undefined1 *)((longlong)puVar6 + 0x67);
      *(undefined1 *)(puVar4 + 0xd) = *(undefined1 *)(puVar6 + 0xd);
      *(undefined1 *)((longlong)puVar4 + 0x69) = *(undefined1 *)((longlong)puVar6 + 0x69);
      uVar2 = puVar6[0xe];
      *(int *)(puVar4 + 0xb) = iVar8;
      puVar4[0xe] = uVar2;
    }
  }
  return;
}



// FUNCTION 142509b80 FUN_142509b80 body=171 status=ok
// SIG undefined FUN_142509b80(void)

undefined8 FUN_142509b80(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x148))();
  iVar1 = FUN_1428cf800(uVar2);
  if (iVar1 == 3) {
    return 0;
  }
  if (((longlong *)param_1[4] != (longlong *)0x0) &&
     (lVar3 = (**(code **)(*(longlong *)param_1[4] + 0x278))(), lVar3 != 0)) {
    if (DAT_146b17150 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar4 = UEngine::GetFirstGamePlayer(DAT_146b17150,uVar2);
      if (lVar4 != 0) {
        uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar4 = UEngine::GetFirstGamePlayer(DAT_146b17150,uVar2);
        if (*(longlong *)(lVar4 + 0x30) == lVar3) {
          return 1;
        }
      }
    }
    return 0;
  }
  return 1;
}



// FUNCTION 142509c30 FUN_142509c30 body=99 status=ok
// SIG undefined FUN_142509c30(void)

undefined8 FUN_142509c30(int param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  if (param_1 == 8) {
    cVar1 = (**(code **)(*param_2 + 0x138))(param_2);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 200))(param_2), cVar1 == '\0')) {
      return 0;
    }
    cVar1 = BuildSettings::IsPromotedBuild(8,param_2,param_3);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142509ca0 ShouldCompilePermutation body=108 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8
FGeometryCollectionVertexFactory::ShouldCompilePermutation
          (undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x138))(param_2);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 200))(param_2), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = BuildSettings::IsPromotedBuild(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 142509d10 FUN_142509d10 body=68 status=ok
// SIG undefined FUN_142509d10(void)

undefined8 FUN_142509d10(longlong *param_1)

{
  int iVar1;
  
  if ((((*(byte *)(param_1 + 0x17) & 1) != 0) && ((*(byte *)(param_1 + 0x19) & 0x40) == 0)) &&
     (param_1[0xe5] != 0)) {
    if ((-1 < *(char *)((longlong)param_1 + 0x2ee)) &&
       (iVar1 = (**(code **)(*param_1 + 0x4e8))(), iVar1 == 0)) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142509da0 FUN_142509da0 body=278 status=ok
// SIG undefined FUN_142509da0(void)

void FUN_142509da0(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  longlong local_res10;
  
  bVar1 = *(byte *)(param_1 + 0x460);
  bVar3 = bVar1 >> 2 & 1;
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x460) = (~(bVar1 >> 2) << 2 ^ bVar1) & 4 ^ bVar1;
    goto LAB_142509e92;
  }
  if (param_2 == DAT_146afbcf8) {
    *(byte *)(param_1 + 0x468) = *(byte *)(param_1 + 0x468) ^ 1;
    goto LAB_142509e92;
  }
  local_res10 = param_2;
  if (param_2 == DAT_146afbcf0) {
    *(undefined4 *)(param_1 + 0x490) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x494)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x488,0);
    }
    *(byte *)(param_1 + 0x460) = *(byte *)(param_1 + 0x460) & 0xfb;
  }
  else {
    if (bVar3 == 0) {
LAB_142509e5e:
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x488,&local_res10);
    }
    else {
      iVar2 = TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x488,&local_res10);
      if (iVar2 == 0) goto LAB_142509e5e;
    }
    *(byte *)(param_1 + 0x460) = *(byte *)(param_1 + 0x460) | 4;
  }
  FUN_141761740(param_1,0x4000,0,DAT_1468b6148);
LAB_142509e92:
  if ((*(byte *)(param_1 + 0x460) >> 2 & 1) != bVar3) {
    *(undefined8 *)(param_1 + 0x4d0) = 0;
  }
  return;
}



// FUNCTION 142509ec0 FUN_142509ec0 body=389 status=ok
// SIG undefined FUN_142509ec0(void)

void FUN_142509ec0(longlong param_1,longlong *param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  undefined1 local_res10 [8];
  longlong *local_48;
  ulonglong local_40;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1415942e0(param_2,&local_48,&PTR_DAT_146533240,1,1);
  uVar7 = (ulonglong)(int)local_40;
  plVar4 = local_48 + uVar7 * 2;
  if (local_48 != plVar4) {
    plVar3 = local_48;
    do {
      local_30 = (int)plVar3[1];
      lVar5 = (longlong)local_30;
      _Src = (void *)*plVar3;
      local_38 = (undefined2 *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
        puVar8 = (undefined2 *)0x0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
        puVar8 = local_38;
        _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar5 * 2);
      }
      puVar2 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar2 = puVar8;
      }
      uVar1 = FName::FName(local_res10,puVar2);
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x548,uVar1);
      if (puVar8 != (undefined2 *)0x0) {
        FMemory::Free(puVar8);
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != plVar4);
    uVar7 = local_40 & 0xffffffff;
  }
  uVar6 = (uint)uVar7;
  plVar4 = local_48;
  while (uVar6 != 0) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
    uVar6 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar6;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14250a050 FUN_14250a050 body=389 status=ok
// SIG undefined FUN_14250a050(void)

void FUN_14250a050(longlong param_1,longlong *param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  undefined1 local_res10 [8];
  longlong *local_48;
  ulonglong local_40;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1415942e0(param_2,&local_48,&PTR_DAT_146533248,1,1);
  uVar7 = (ulonglong)(int)local_40;
  plVar4 = local_48 + uVar7 * 2;
  if (local_48 != plVar4) {
    plVar3 = local_48;
    do {
      local_30 = (int)plVar3[1];
      lVar5 = (longlong)local_30;
      _Src = (void *)*plVar3;
      local_38 = (undefined2 *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
        puVar8 = (undefined2 *)0x0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
        puVar8 = local_38;
        _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar5 * 2);
      }
      puVar2 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar2 = puVar8;
      }
      uVar1 = FName::FName(local_res10,puVar2);
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x558,uVar1);
      if (puVar8 != (undefined2 *)0x0) {
        FMemory::Free(puVar8);
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != plVar4);
    uVar7 = local_40 & 0xffffffff;
  }
  uVar6 = (uint)uVar7;
  plVar4 = local_48;
  while (uVar6 != 0) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
    uVar6 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar6;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14250a1e0 FUN_14250a1e0 body=74 status=ok
// SIG undefined FUN_14250a1e0(void)

void FUN_14250a1e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x550) = 0;
  if (*(int *)(param_1 + 0x554) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x548,0);
  }
  *(undefined4 *)(param_1 + 0x560) = 0;
  if (*(int *)(param_1 + 0x564) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x558,0);
    return;
  }
  return;
}



// FUNCTION 14250a230 FUN_14250a230 body=70 status=ok
// SIG undefined FUN_14250a230(void)

void FUN_14250a230(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x468);
  if (*(char *)(param_1 + 0x570) != '\0') {
    *(undefined1 *)(param_1 + 0x570) = 0;
    *(byte *)(param_1 + 0x468) = bVar1 | 8;
    return;
  }
  *(undefined8 *)(param_1 + 0x4c8) = param_2;
  *(byte *)(param_1 + 0x468) = (~(bVar1 >> 3) << 3 ^ bVar1) & 8 ^ bVar1;
  return;
}



// FUNCTION 14250a280 FUN_14250a280 body=1162 status=ok
// SIG undefined FUN_14250a280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14250a280(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 local_res8;
  undefined8 local_res20;
  ulonglong in_stack_ffffffffffffff40;
  undefined2 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  
  lVar9 = param_1[0x96];
  if (lVar9 != 0) {
    lVar13 = 0;
    local_68 = 0;
    uStack_60 = 0x3e4ccccd00000000;
    FUN_1428a8450(*(undefined8 *)(lVar9 + 0x260),0,0,*(undefined4 *)(lVar9 + 0x30),
                  *(undefined4 *)(lVar9 + 0x34),in_stack_ffffffffffffff40 & 0xffffffff00000000,0,0,0
                  ,&local_68,0,1);
    local_50 = (int)param_1[0x92];
    lVar9 = (longlong)local_50;
    pvVar2 = (void *)param_1[0x91];
    local_58 = (void *)0x0;
    if (local_50 == 0) {
      local_4c = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,local_50,0);
      _guard_xfg_dispatch_icall_nop(local_58,pvVar2,lVar9 << 3);
    }
    local_40 = (int)param_1[0x94];
    lVar9 = (longlong)local_40;
    pvVar2 = (void *)param_1[0x93];
    local_48 = (void *)0x0;
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,local_40,0);
      _guard_xfg_dispatch_icall_nop(local_48,pvVar2,lVar9 << 3);
    }
    lVar6 = (**(code **)(*param_1 + 0x750))(param_1);
    lVar9 = param_1[0x96];
    param_1[0x9a] = lVar6;
    local_78 = 0x3f800000;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0x3f800000;
    (**(code **)(*(longlong *)(lVar9 + 0x98) + 0x20))(lVar9 + 0x98,&local_78);
    local_res8 = (ulonglong)local_res8._4_4_ << 0x20;
    if (param_1[0x9a] == 0) {
      local_88 = (undefined2 *)0x0;
      local_80 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      FGenericPlatformString::Memcpy(local_88,&DAT_143f3edc8,10);
    }
    else {
      local_res20 = *(undefined8 *)(param_1[0x9a] + 0x18);
      FName::ToString(&local_res20,&local_88);
    }
    puVar11 = &DAT_143f3eda8;
    if ((int)local_80 != 0) {
      puVar11 = local_88;
    }
    FString::PrintfImpl(&local_78,
                        L"Showing Debug for %s, Press [PageUp] and [PageDown] to cycle between targets."
                        ,puVar11);
    FUN_1428a6fb0(lVar9 + 0x98,&local_78,&local_res8);
    if (CONCAT44(uStack_74,local_78) != 0) {
      FMemory::Free();
    }
    if (local_88 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if ((char)param_1[0xae] == '\0') {
      plVar12 = (longlong *)param_1[0x9a];
    }
    else {
      plVar12 = (longlong *)param_1[0xad];
      param_1[0x9a] = (longlong)plVar12;
    }
    if (plVar12 != (longlong *)0x0) {
      iVar1 = *(int *)((longlong)plVar12 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar5 = iVar1 + uVar7;
        lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                 (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
      }
      if ((((*(uint *)(lVar13 + 8) >> 0x1d & 1) == 0) &&
          ((**(code **)(*plVar12 + 0x640))(plVar12,param_1[0x96],&local_58,param_2,param_3),
          (*(byte *)(param_1 + 0x8d) & 8) == 0)) && (*(char *)(param_1[0x9a] + 0x128) == '\x01')) {
        (**(code **)(*(longlong *)param_1[0x8b] + 0x640))
                  ((longlong *)param_1[0x8b],param_1[0x96],&local_58,param_2,param_3);
      }
    }
    local_res8 = 0xdd;
    cVar4 = (**(code **)(*param_1 + 0x740))(param_1,&local_res8);
    if (cVar4 != '\0') {
      lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar12 = *(longlong **)(lVar9 + 0x140);
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x640))(plVar12,param_1[0x96],&local_58,param_2,param_3);
      }
    }
    if ((*(byte *)(param_1 + 0x8c) & 4) != 0) {
      lVar9 = param_1[0x96];
      DAT_146533144 = DAT_146533144 + 1;
      bVar3 = false;
      lVar13 = (longlong)(DAT_146533138 + -1);
      local_res8 = lVar9;
      if (-1 < DAT_146533138 + -1) {
        lVar6 = lVar13 << 4;
        bVar3 = false;
        do {
          if ((*(int *)(lVar6 + 8 + DAT_146533130) == 0) ||
             (plVar12 = *(longlong **)(lVar6 + DAT_146533130), plVar12 == (longlong *)0x0)) {
LAB_14250a605:
            bVar3 = true;
          }
          else {
            cVar4 = (**(code **)(*plVar12 + 0x40))(plVar12,param_1,lVar9,&local_58,param_2,param_3);
            if (cVar4 == '\0') goto LAB_14250a605;
          }
          lVar6 = lVar6 + -0x10;
          lVar13 = lVar13 + -1;
        } while (-1 < lVar13);
      }
      iVar1 = DAT_146533138;
      uVar8 = 0;
      DAT_146533144 = DAT_146533144 + -1;
      if ((bVar3) && (DAT_146533144 < 1)) {
        uVar10 = uVar8;
        if (0 < DAT_146533138) {
          do {
            if (((*(int *)(uVar10 + 8 + DAT_146533130) == 0) ||
                (*(longlong **)(uVar10 + DAT_146533130) == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(**(longlong **)(uVar10 + DAT_146533130) + 0x10))(),
               cVar4 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146533130,uVar8,1,1);
            }
            else {
              uVar8 = (ulonglong)((int)uVar8 + 1);
              uVar10 = uVar10 + 0x10;
            }
          } while ((int)uVar8 < DAT_146533138);
        }
        _DAT_146533140 = DAT_146533138 * 2;
        if (_DAT_146533140 < 3) {
          _DAT_146533140 = 2;
        }
        if ((_DAT_146533140 < iVar1) && (DAT_14653313c != DAT_146533138)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146533130);
        }
      }
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14250a710 FUN_14250a710 body=162 status=ok
// SIG undefined FUN_14250a710(void)

void FUN_14250a710(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong local_res10;
  
  plVar1 = (longlong *)(param_1 + 0x498);
  local_res10 = param_2;
  if (param_2 == DAT_146afbcf0) {
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    if ((*(int *)(param_1 + 0x4a4) < 0) && (*(int *)(param_1 + 0x4a4) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
  }
  else {
    iVar2 = TArray<FName,FDefaultAllocator>::Remove(plVar1,&local_res10);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x4a0);
      *(int *)(param_1 + 0x4a0) = iVar2 + 1;
      if (*(int *)(param_1 + 0x4a4) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = local_res10;
    }
  }
  FUN_141761740(param_1,0x4000,0,DAT_1468b6148);
  return;
}



// FUNCTION 14250a7c0 FUN_14250a7c0 body=40 status=ok
// SIG undefined FUN_14250a7c0(void)

void FUN_14250a7c0(longlong *param_1,int param_2)

{
  if (param_2 == -1) {
                    /* WARNING: Could not recover jumptable at 0x00014250a7dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x798))(param_1,~(*(byte *)(param_1 + 0x8c) >> 1) & 1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014250a7e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x798))(param_1,param_2 != 0);
  return;
}



// FUNCTION 14250a810 FUN_14250a810 body=950 status=ok
// SIG undefined FUN_14250a810(void)

void FUN_14250a810(longlong *param_1,float param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint local_res8 [2];
  
  if (((byte)(int)param_1[0x97] & 5) != 1) {
    return;
  }
  if (param_1[0x8b] == 0) {
    return;
  }
  uVar11 = 0;
  if (((byte)*(undefined4 *)((longlong)param_1 + 0x474) & 0x60) == 0x60) {
    uVar14 = 1;
    local_res8[0] = 0;
    uVar6 = uVar11;
    uVar16 = uVar11;
    if ((int)param_1[0x91] < 1) {
      return;
    }
    do {
      lVar1 = param_1[0x90];
      uVar10 = uVar11;
      uVar13 = uVar11;
      uVar15 = (uint)uVar6;
      if (0 < *(int *)(uVar16 + 0x10 + lVar1)) {
        do {
          uVar15 = local_res8[0];
          if ((char)uVar14 == '\0') break;
          plVar2 = *(longlong **)(uVar10 + *(longlong *)(uVar16 + 8 + lVar1));
          if (plVar2 != (longlong *)0x0) {
            fVar17 = (float)(**(code **)(*plVar2 + 0x5f0))(plVar2);
            lVar7 = (**(code **)(*plVar2 + 0x148))(plVar2);
            if (*(float *)(lVar7 + 0x790) - 1.0 < fVar17) {
              uVar14 = uVar11;
            }
          }
          uVar12 = (int)uVar13 + 1;
          uVar10 = uVar10 + 8;
          uVar13 = (ulonglong)uVar12;
          uVar15 = local_res8[0];
        } while ((int)uVar12 < *(int *)(uVar16 + 0x10 + lVar1));
      }
      local_res8[0] = uVar15 + 1;
      uVar6 = (ulonglong)local_res8[0];
      uVar16 = uVar16 + 0x18;
    } while ((int)local_res8[0] < (int)param_1[0x91]);
    if ((char)uVar14 != '\0') {
      return;
    }
  }
  bVar4 = false;
  bVar3 = false;
  if ((*(byte *)(param_1 + 0x97) & 2) == 0) {
    fVar17 = *(float *)((longlong)param_1 + 0x4bc) + param_2 * *(float *)(param_1 + 0x8d);
    fVar19 = *(float *)(param_1[0x8b] + 0x28);
    if (fVar17 <= fVar19) goto LAB_14250aa48;
    if (((*(byte *)((longlong)param_1 + 0x474) & 1) != 0) && (0.0 < fVar19)) {
      FUN_14250cc70(param_1,fVar19,param_3,0);
      FUN_14250cc70(param_1,0,param_3,1);
      for (; *(float *)(param_1[0x8b] + 0x28) < fVar17;
          fVar17 = fVar17 - *(float *)(param_1[0x8b] + 0x28)) {
      }
      bVar4 = true;
      goto LAB_14250aa48;
    }
  }
  else {
    fVar17 = *(float *)((longlong)param_1 + 0x4bc) - param_2 * *(float *)(param_1 + 0x8d);
    if (0.0 <= fVar17) goto LAB_14250aa48;
    if ((*(byte *)((longlong)param_1 + 0x474) & 1) != 0) {
      FUN_14250cc70(param_1,0,param_3,0);
      FUN_14250cc70(param_1,*(undefined4 *)(param_1[0x8b] + 0x28),param_3,1);
      do {
        fVar17 = fVar17 + *(float *)(param_1[0x8b] + 0x28);
      } while (fVar17 < 0.0);
      bVar4 = true;
      goto LAB_14250aa48;
    }
    fVar19 = 0.0;
  }
  fVar17 = fVar19;
  bVar3 = true;
LAB_14250aa48:
  FUN_14250cc70(param_1,fVar17,param_3,0);
  if (bVar3) {
    (**(code **)(*param_1 + 0x6f8))(param_1);
    lVar1 = *param_1;
    puVar8 = (undefined8 *)FName::FName(local_res8,L"Finished",1);
    (**(code **)(lVar1 + 0x728))(param_1,*puVar8,fVar17,0);
    if ((*(byte *)(param_1 + 0x97) & 1) != 0) {
      *(char *)((longlong)param_1 + 0x4c4) = *(char *)((longlong)param_1 + 0x4c4) + '\x01';
      (**(code **)(*param_1 + 0x720))(param_1,1);
    }
  }
  uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  cVar5 = UWorld::IsGameWorld(uVar9);
  if ((((cVar5 != '\0') && ((*(uint *)(param_1 + 0x97) & 1) != 0)) &&
      ((*(uint *)(param_1 + 0x97) & 2) == 0)) &&
     (((*(byte *)((longlong)param_1 + 0x474) & 1) == 0 &&
      (uVar6 = uVar11, fVar19 = DAT_14653311c, 0 < (int)param_1[0x96])))) {
    do {
      lVar1 = param_1[0x95];
      fVar18 = *(float *)(lVar1 + uVar11 + 0xc) - fVar17;
      if (fVar18 <= 0.0) {
        if (fVar19 <= fVar18) break;
      }
      else {
        if (fVar19 <= fVar18) break;
        uVar9 = IStreamingManager::Get();
        IStreamingManager::AddViewSlaveLocation(uVar9,lVar1 + uVar11,0x3f800000,0,0);
        fVar19 = DAT_14653311c;
      }
      uVar15 = (int)uVar6 + 1;
      uVar11 = uVar11 + 0x10;
      uVar6 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)param_1[0x96]);
  }
  if (bVar4) {
    (**(code **)(*param_1 + 0x720))(param_1,0);
  }
  else {
    *(float *)((longlong)param_1 + 0x4bc) = fVar17;
  }
  return;
}



// FUNCTION 14250abd0 FUN_14250abd0 body=137 status=ok
// SIG undefined FUN_14250abd0(void)

void FUN_14250abd0(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_142875430(DAT_146b17150);
  if (lVar3 != 0) {
    FAudioDevice::EnableRadioEffect(lVar3,1);
  }
  uVar2 = *(uint *)(param_1 + 0x97);
  if (((uVar2 & 1) != 0) && (0 < (int)param_1[0x9c])) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x9b,0);
    uVar2 = *(uint *)(param_1 + 0x97);
  }
  *(uint *)(param_1 + 0x97) = uVar2 & 0xfffffffa;
  AActor::SetActorTickEnabled(param_1,0);
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  cVar1 = UWorld::IsGameWorld(uVar4);
  if (cVar1 != '\0') {
    FUN_14250ae20(param_1);
    return;
  }
  return;
}



// FUNCTION 14250ac60 SupportsInputDelegate body=138 status=ok
// SIG undefined SupportsInputDelegate(void)

ulonglong UInputDelegateBinding::SupportsInputDelegate(longlong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    lVar2 = UDynamicClass::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX == '\0') {
      lVar2 = UBlueprintGeneratedClass::GetPrivateStaticClass();
      iVar1 = *(int *)(lVar2 + 0x90);
      uVar3 = (longlong)iVar1;
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
         (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
         *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
        in_RAX = uVar3 & 0xffffffffffffff00;
      }
      else {
        in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
      }
      if ((char)in_RAX == '\0') goto LAB_14250ace2;
    }
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_14250ace2:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14250acf0 FUN_14250acf0 body=297 status=ok
// SIG undefined FUN_14250acf0(void)

void FUN_14250acf0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar9 = 0;
  uVar8 = uVar9;
  uVar11 = uVar9;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      plVar5 = *(longlong **)(uVar8 + *(longlong *)(param_1 + 0x38));
      (**(code **)(*plVar5 + 0x290))
                (plVar5,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + uVar8)
                );
      uVar10 = (int)uVar11 + 1;
      uVar8 = uVar8 + 8;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  bVar3 = false;
  lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x38);
  if (0 < lVar7) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x30);
    bVar3 = false;
    do {
      lVar2 = *plVar5;
      plVar5 = plVar5 + 1;
      if ((*(byte *)(lVar2 + 0x68) & 0x10) != 0) {
        bVar3 = true;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  lVar7 = *(longlong *)(param_1 + 0x30);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar10 = iVar1 + uVar6;
      uVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
              (longlong)(int)((uVar10 & 0xffff) - uVar6) * 0x18;
    }
    if ((*(uint *)(uVar9 + 8) >> 0x1d & 1) == 0) {
      uVar4 = UMatineeAnimInterface::GetPrivateStaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar4);
      if ((plVar5 != (longlong *)0x0) && (bVar3)) {
        (**(code **)(*plVar5 + 0x50))(plVar5,*(undefined8 *)(param_1 + 0x28));
      }
    }
  }
  return;
}



// FUNCTION 14250ae20 FUN_14250ae20 body=202 status=ok
// SIG undefined FUN_14250ae20(void)

void FUN_14250ae20(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x4a0)) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x498);
      lVar1 = *(longlong *)(*(longlong *)(lVar4 + lVar2) + 0x30);
      if (lVar1 != 0) {
        FUN_14223ab80(lVar1,param_1);
        lVar2 = *(longlong *)(param_1 + 0x498);
      }
      (**(code **)(**(longlong **)(lVar4 + lVar2) + 0x2a0))(*(longlong **)(lVar4 + lVar2),1);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x4a0));
  }
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  if (*(int *)(param_1 + 0x4a4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x498,0);
  }
  lVar2 = FWeakObjectPtr::Get(DAT_146b17150 + 0x100);
  lVar4 = DAT_146b17150;
  if (lVar2 == param_1) {
    *(undefined4 *)(DAT_146b17150 + 0x100) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0x104) = 0;
  }
  FUN_1424ed050(param_1,0);
  return;
}



// FUNCTION 14250aef0 FUN_14250aef0 body=220 status=ok
// SIG undefined FUN_14250aef0(void)

void FUN_14250aef0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30);
  if (lVar2 != 0) {
    lVar5 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar5 = *(longlong *)(lVar2 + 0x528), lVar5 != 0)) {
      iVar1 = *(int *)(lVar5 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar7;
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
        *(uint *)(lVar5 + 0x2c40) = *(uint *)(lVar5 + 0x2c40) & 0xffffffef;
        lVar2 = *(longlong *)(lVar2 + 0x528);
        *(undefined8 *)(lVar2 + 0x498) = 0x3f8000003f800000;
        *(undefined4 *)(lVar2 + 0x4a0) = 0x3f800000;
      }
    }
  }
  return;
}



// FUNCTION 14250afd0 FUN_14250afd0 body=307 status=ok
// SIG undefined FUN_14250afd0(void)

void FUN_14250afd0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  plVar5 = (longlong *)(**(code **)(*plVar2 + 0x278))(plVar2);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = FUN_1429e18b0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar6 = plVar2[4];
      if (*(longlong *)(param_1 + 0x28) != 0) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar8 = iVar1 >> 0x1f & 0xffff;
          uVar4 = iVar1 + uVar8;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
          lVar7 = (**(code **)(*plVar5 + 0x758))(plVar5);
          if (lVar7 != *(longlong *)(param_1 + 0x28)) {
            local_c = local_c & 0xfffffffe;
            local_18 = 0;
            local_10 = 0x40000000;
            local_14 = 1;
            (**(code **)(*plVar5 + 0xe18))(plVar5,*(longlong *)(param_1 + 0x28),&local_18);
          }
        }
      }
      (**(code **)(*plVar5 + 0xc48))(plVar5,0,lVar6);
      FUN_142717380(plVar5,0,0);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14250b110 FUN_14250b110 body=354 status=ok
// SIG undefined FUN_14250b110(void)

void FUN_14250b110(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if (param_2 != 0) {
    lVar7 = UInterpTrackFade::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && ((*(byte *)(param_2 + 0x90) & 1) != 0)) {
      return;
    }
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x30);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  lVar7 = FUN_1429e18b0();
  if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    plVar3 = (longlong *)plVar2[0xa5];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    iVar1 = *(int *)((longlong)plVar3 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar6 = iVar1 + uVar8;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
      (**(code **)(*plVar3 + 0x858))(plVar3);
      if (((*(uint *)((longlong)plVar2 + 0x4cc) >> 1 & 1) == 0) ||
         (cVar4 = (**(code **)(*plVar2 + 0x768))(plVar2), cVar4 == '\0')) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) {
        FUN_1429e0fe0(plVar2,0,0,0,0,0);
      }
      return;
    }
    return;
  }
  return;
}



// FUNCTION 14250b280 TermTrackInst body=92 status=ok
// SIG undefined TermTrackInst(void)

void UInterpTrackInstFloatMaterialParam::TermTrackInst(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x48,0);
    return;
  }
  return;
}



// FUNCTION 14250b2f0 FUN_14250b2f0 body=103 status=ok
// SIG undefined FUN_14250b2f0(void)

void FUN_14250b2f0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  float fVar4;
  
  cVar1 = FUN_142509b80();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar3 = (longlong *)UWorld::GetWorldSettings(uVar2,0,1);
    fVar4 = *(float *)(param_1 + 5);
    if (fVar4 <= 0.0) {
      fVar4 = 1.0;
      *(undefined4 *)(param_1 + 5) = 0x3f800000;
    }
    *(float *)((longlong)plVar3 + 0x5e4) = fVar4;
                    /* WARNING: Could not recover jumptable at 0x00014250b34a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x600))(plVar3);
    return;
  }
  return;
}



// FUNCTION 14250b360 FUN_14250b360 body=89 status=ok
// SIG undefined FUN_14250b360(void)

void FUN_14250b360(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    if (((*(byte *)((longlong)plVar1 + 0xba) & 4) != 0) && ((*(byte *)(param_2 + 0xa0) & 2) != 0)) {
      *(byte *)(plVar1 + 0x5e) = *(byte *)(plVar1 + 0x5e) | 1;
      *(undefined8 *)(param_1 + 0x30) = 0;
      return;
    }
    (**(code **)(*plVar1 + 0x560))();
    FUN_142359580(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14250b3c0 TermTrackInst body=92 status=ok
// SIG undefined TermTrackInst(void)

void UInterpTrackInstVectorMaterialParam::TermTrackInst(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x38,0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x48,0);
    return;
  }
  return;
}



// FUNCTION 14250b420 FUN_14250b420 body=66 status=ok
// SIG undefined FUN_14250b420(void)

void FUN_14250b420(longlong param_1,undefined4 param_2)

{
  FUN_1422406d0();
  if (((*(byte *)(param_1 + 0x4b8) & 1) != 0) && (*(longlong *)(param_1 + 0x458) != 0)) {
    FUN_14250a810(param_1,param_2,0);
  }
  return;
}



// FUNCTION 14250b470 Tick body=99 status=ok
// SIG undefined Tick(void)

ulonglong FInGamePerformanceTracker::Tick(longlong *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (**(code **)(*DAT_146afbd10 + 0x68))();
  DAT_146afbc80 = (int)uVar3;
  if (DAT_146afbc80 != 0) {
    param_1[3] = param_1[3] + (longlong)*(int *)((longlong)param_1 + 0x24);
    param_1[3] = param_1[3] - (ulonglong)*(uint *)(*param_1 + (longlong)(int)param_1[2] * 4);
    *(int *)(*param_1 + (longlong)(int)param_1[2] * 4) = *(int *)((longlong)param_1 + 0x24);
    iVar1 = (int)param_1[1];
    iVar2 = (int)param_1[2] + 1;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    uVar3 = (longlong)iVar2 / (longlong)iVar1 & 0xffffffff;
    *(int *)(param_1 + 2) = iVar2 % iVar1;
    *(uint *)(param_1 + 4) = (int)param_1[4] + (uint)((int)param_1[4] != iVar1);
  }
  return uVar3;
}



// FUNCTION 14250b500 FUN_14250b500 body=366 status=ok
// SIG undefined FUN_14250b500(void)

ulonglong FUN_14250b500(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  ulonglong in_RAX;
  float *pfVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 local_res20 [8];
  undefined8 local_48;
  
  if ((param_3 == 0) || (param_3 == 3)) {
    iVar2 = (int)param_1[0x9c];
    bVar3 = true;
  }
  else {
    bVar3 = false;
    iVar2 = (int)param_1[0x9e];
  }
  if (iVar2 != 0) {
    pfVar5 = (float *)FUN_1424f17d0(param_1,local_res20);
    local_48._0_4_ = (float)param_2;
    uVar8 = 0;
    local_48._4_4_ = (float)((ulonglong)param_2 >> 0x20);
    local_48 = CONCAT44(local_48._4_4_ + pfVar5[1],(float)local_48 + *pfVar5);
    if (bVar3) {
      lVar6 = param_1[0x9b];
      lVar9 = (longlong)(int)param_1[0x9c] * 0x20 + lVar6;
      for (; lVar6 != lVar9; lVar6 = lVar6 + 0x20) {
        cVar4 = FHUDHitBox::Contains(lVar6,local_48);
        if (cVar4 != '\0') {
          uVar8 = 1;
          (**(code **)(*param_1 + 0x6f8))(param_1,*(undefined8 *)(lVar6 + 0x10));
          if (*(char *)(lVar6 + 0x18) != '\0') {
            return 1;
          }
        }
      }
    }
    else {
      plVar7 = (longlong *)param_1[0x9d];
      plVar1 = plVar7 + (int)param_1[0x9e];
      for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
        lVar6 = *plVar7;
        cVar4 = FHUDHitBox::Contains(lVar6,local_48);
        if (cVar4 != '\0') {
          uVar8 = 1;
          if (param_3 == 1) {
            (**(code **)(*param_1 + 0x700))(param_1,*(undefined8 *)(lVar6 + 0x10));
          }
          if (*(char *)(lVar6 + 0x18) == '\x01') {
            return 1;
          }
        }
      }
    }
    return uVar8;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14250b670 FUN_14250b670 body=371 status=ok
// SIG undefined FUN_14250b670(void)

void FUN_14250b670(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (-1 < param_3) {
    uVar2 = *(undefined1 *)(param_2 + 0x90);
    lVar5 = (longlong)param_3;
    if ((((param_3 < *(int *)(param_2 + 0x78)) &&
         (*(longlong **)(param_4 + 0x20) != (longlong *)0x0)) &&
        (lVar4 = (**(code **)(**(longlong **)(param_4 + 0x20) + 0x278))(), lVar4 != 0)) &&
       ((lVar4 = *(longlong *)(lVar4 + 0x168), lVar4 != 0 && ((*(byte *)(param_1 + 0xc0) & 4) == 0))
       )) {
      uVar1 = *(undefined8 *)(lVar4 + 0x1ec);
      uVar3 = *(undefined4 *)(lVar4 + 500);
      FRotator::Euler(lVar4 + 0x1f8,&local_18);
      switch(uVar2) {
      case 0:
        local_28 = (undefined4)uVar1;
        *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 4 + lVar5 * 0x14) = local_28;
        break;
      case 1:
        uStack_24 = (undefined4)((ulonglong)uVar1 >> 0x20);
        *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 4 + lVar5 * 0x14) = uStack_24;
        break;
      case 2:
        *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 4 + lVar5 * 0x14) = uVar3;
        break;
      case 3:
        *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 4 + lVar5 * 0x14) = local_18;
        break;
      case 4:
        *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 4 + lVar5 * 0x14) = local_14;
        break;
      case 5:
        *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 4 + lVar5 * 0x14) = local_10;
      }
      FInterpCurve<float>::AutoSetTangents(param_2 + 0x70,*(undefined4 *)(param_2 + 0x88),1);
    }
  }
  return;
}



// FUNCTION 14250b800 FUN_14250b800 body=1104 status=ok
// SIG undefined FUN_14250b800(void)

void FUN_14250b800(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined1 uVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  DWORD *pDVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  
  plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x38))();
  cVar5 = (**(code **)(*plVar8 + 0x20))(plVar8);
  if (cVar5 == '\0') {
    plVar8 = (longlong *)(**(code **)(*(longlong *)param_2[2] + 0x38))();
    cVar5 = (**(code **)(*plVar8 + 0x20))(plVar8);
    if (cVar5 == '\0') {
      plVar8 = (longlong *)(**(code **)(*(longlong *)param_2[4] + 0x38))();
      cVar5 = (**(code **)(*plVar8 + 0x20))(plVar8);
      if (cVar5 == '\0') {
        uVar6 = *(undefined1 *)(param_1 + 0x58);
        goto LAB_14250b866;
      }
    }
  }
  uVar6 = 1;
LAB_14250b866:
  *(undefined1 *)(param_1 + 0x58) = uVar6;
  plVar8 = (longlong *)param_2[4];
  lVar9 = (**(code **)(*(longlong *)param_2[2] + 0x48))();
  lVar10 = (**(code **)(*plVar8 + 0x48))(plVar8);
  lVar11 = (**(code **)(*(longlong *)*param_2 + 0x48))();
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  *(longlong *)(param_1 + 0x10) = lVar11 + lVar9 + lVar10;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x38))();
    (**(code **)(*plVar8 + 0x28))(plVar8,uVar6);
  }
  if ((longlong *)param_2[4] != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)(*(longlong *)param_2[4] + 0x38))();
    (**(code **)(*plVar8 + 0x28))(plVar8,uVar6);
  }
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)(*(longlong *)param_2[2] + 0x38))();
    (**(code **)(*plVar8 + 0x28))(plVar8,uVar6);
  }
  plVar12 = (longlong *)operator_new(0x48);
  plVar8 = (longlong *)0x0;
  plStack_60 = plVar8;
  if (plVar12 != (longlong *)0x0) {
    *(undefined4 *)(plVar12 + 1) = 1;
    *plVar12 = (longlong)&PTR_DestroyObject_1450e12e0;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    plVar12[2] = 0;
    plVar12[3] = 0;
    plVar12[4] = 0;
    plVar12[5] = 0;
    plVar12[6] = 0;
    plVar12[7] = 0;
    *(undefined4 *)(plVar12 + 8) = 0;
    *(undefined1 *)((longlong)plVar12 + 0x44) = 0;
    plStack_60 = plVar12;
  }
  local_68 = plStack_60 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
  local_78 = local_68;
  plStack_70 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(param_1 + 0x120);
  if (pplVar3 != &local_78) {
    *pplVar3 = local_68;
    local_78 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x128,&plStack_70);
  }
  plVar12 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  plVar12 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  FGenericPlatformMemory::MemswapGreaterThan8(param_2,*pplVar3,0x38);
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
    local_58 = *pplVar3;
    local_50 = *(longlong **)(param_1 + 0x128);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    local_48 = param_1 + 0x18;
    FUN_1424ea9c0(&local_58,2,local_res8);
    plVar8 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_50 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014250bae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*local_50 + 8))(local_50,1);
          return;
        }
      }
    }
  }
  else {
    pDVar13 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar12 = TlsGetValue(*pDVar13);
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)operator_new(0x18);
      if (plVar12 != (longlong *)0x0) {
        *plVar12 = 0;
        plVar12[1] = 0;
        *(undefined4 *)(plVar12 + 2) = 0;
        plVar8 = plVar12;
      }
      TlsSetValue(*pDVar13,plVar8);
      plVar12 = plVar8;
    }
    plVar8 = (longlong *)plVar12[1];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)*plVar12;
      if (plVar8 == (longlong *)0x0) {
        lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar13 + 2);
        plVar12[1] = lVar9;
        if (lVar9 == 0) {
          puVar14 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar12[1] = (longlong)puVar14;
          lVar9 = 0x1f;
          do {
            puVar4 = puVar14 + 0x20;
            *puVar14 = puVar4;
            lVar9 = lVar9 + -1;
            puVar14 = puVar4;
          } while (lVar9 != 0);
          *puVar4 = 0;
        }
        plVar8 = (longlong *)plVar12[1];
        iVar15 = 0x20;
        *(undefined4 *)(plVar12 + 2) = 0x20;
      }
      else {
        iVar15 = 0x20;
        plVar12[1] = (longlong)plVar8;
        *(undefined4 *)(plVar12 + 2) = 0x20;
        *plVar12 = 0;
      }
    }
    else {
      iVar15 = (int)plVar12[2];
    }
    plVar12[1] = *plVar8;
    *(int *)(plVar12 + 2) = iVar15 + -1;
    *plVar8 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar8 + 1) = 0xff;
    local_res18 = 0;
    local_res20 = 0;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_1450d5b48;
    *(undefined1 *)(plVar8 + 5) = 0;
    plVar8[6] = 0;
    plVar8[2] = (longlong)*pplVar3;
    lVar9 = *(longlong *)(param_1 + 0x128);
    plVar8[3] = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    plVar8[4] = param_1 + 0x18;
    lVar9 = plVar8[6];
    piVar2 = (int *)(lVar9 + 0x48);
    if (lVar9 != 0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    local_res10 = lVar9;
    FUN_14048a160(plVar8,0,0xff,1);
    if (lVar9 != 0) {
      LOCK();
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        FGraphEvent::Recycle(local_res10);
      }
    }
  }
  return;
}



// FUNCTION 14250bc50 UpdateGroup body=153 status=ok
// SIG undefined UpdateGroup(void)

void UInterpGroup::UpdateGroup
               (longlong param_1,undefined4 param_2,longlong param_3,char param_4,undefined1 param_5
               )

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = 0;
    do {
      if (*(int *)(param_3 + 0x40) == 0) {
        return;
      }
      plVar1 = *(longlong **)(lVar2 + *(longlong *)(param_1 + 0x30));
      if ((*(byte *)(plVar1 + 0xd) & 0x84) == 0) {
        if (param_4 == '\0') {
          (**(code **)(*plVar1 + 0x2f0))
                    (plVar1,param_2,*(undefined8 *)(lVar2 + *(longlong *)(param_3 + 0x38)),param_5);
        }
        else {
          (**(code **)(*plVar1 + 0x2e8))();
        }
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 14250bcf0 FUN_14250bcf0 body=1862 status=ok
// SIG undefined FUN_14250bcf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14250bcf0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  int iVar11;
  int *piVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  longlong *local_130;
  longlong *local_128;
  uint local_120;
  uint local_11c;
  int local_118;
  uint uStack_114;
  uint *puStack_110;
  int local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  longlong *local_f0;
  int iStack_e8;
  uint uStack_e4;
  uint *local_e0;
  uint uStack_d8;
  int iStack_d4;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *puStack_b8;
  uint uStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  longlong local_98;
  undefined8 local_90;
  uint local_88 [4];
  uint *local_78;
  undefined8 local_70;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar15 = param_1 + 0x9d;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  local_130 = param_2;
  local_f8 = param_1;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x4f4)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15,0);
  }
  uVar23 = param_1[0x9b];
  uVar22 = (longlong)(int)param_1[0x9c] * 0x20 + uVar23;
  plVar17 = param_1;
  local_138 = uVar22;
  if (uVar23 != uVar22) {
    iVar11 = (int)param_2[1];
    do {
      bVar5 = false;
      while (iVar11 = iVar11 + -1, -1 < iVar11) {
        cVar6 = FHUDHitBox::Contains(uVar23,*(undefined8 *)((longlong)iVar11 * 8 + *param_2));
        uVar22 = local_138;
        if (cVar6 != '\0') {
          if (!bVar5) {
            iVar8 = (int)param_1[0x9e];
            *(int *)(param_1 + 0x9e) = iVar8 + 1;
            if (*(int *)((longlong)param_1 + 0x4f4) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar8);
            }
            *(ulonglong *)(*plVar15 + (longlong)iVar8 * 8) = uVar23;
            bVar5 = true;
          }
          uVar22 = local_138;
          if (*(char *)(uVar23 + 0x18) == '\0') break;
          iVar8 = (int)param_2[1];
          iVar7 = (iVar8 - iVar11) + -1;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar11 * 8),
                       (void *)(*param_2 + (longlong)(iVar8 - iVar7) * 8),(longlong)iVar7 << 3);
            iVar8 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar8 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_2);
          uVar22 = local_138;
        }
      }
      iVar11 = (int)param_2[1];
      plVar17 = local_f8;
    } while ((iVar11 != 0) && (uVar23 = uVar23 + 0x20, uVar23 != uVar22));
  }
  plVar1 = plVar17 + 0x9f;
  local_98 = 0;
  local_90 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_68 = -1;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=(&local_98,plVar1);
  plVar15 = (longlong *)*plVar15;
  plVar16 = (longlong *)0x0;
  local_128 = (longlong *)0x0;
  local_138 = local_138 & 0xffffffff00000000;
  local_11c = 0;
  plVar13 = plVar15 + (int)param_1[0x9e];
  lVar20 = local_98;
  plVar21 = plVar16;
  plVar24 = plVar16;
  if (plVar15 != plVar13) {
LAB_14250bec0:
    lVar3 = *(longlong *)(*plVar15 + 0x10);
    if ((int)plVar17[0xa0] != *(int *)((longlong)plVar17 + 0x52c)) {
      iVar11 = (int)((ulonglong)lVar3 >> 0x20);
      plVar10 = (longlong *)plVar17[0xa7];
      if ((longlong *)plVar17[0xa7] == (longlong *)0x0) {
        plVar10 = plVar17 + 0xa6;
      }
      iVar8 = *(int *)((longlong)plVar10 +
                      ((longlong)(iVar11 + (int)lVar3) & (longlong)(int)plVar17[0xa8] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          if (*(longlong *)(*plVar1 + (longlong)iVar8 * 0x10) == lVar3) {
            if (iVar8 != -1) {
              if ((int)local_90 == local_64) goto LAB_14250bfc2;
              puVar14 = local_60;
              if (local_58 != (undefined1 *)0x0) {
                puVar14 = local_58;
              }
              iVar11 = *(int *)(puVar14 + (longlong)(int)(iVar11 + (int)lVar3 & local_50 - 1U) * 4);
              goto joined_r0x00014250bf92;
            }
            break;
          }
          iVar8 = *(int *)(*plVar1 + 8 + (longlong)iVar8 * 0x10);
        } while (iVar8 != -1);
      }
    }
    iVar11 = (int)plVar21;
    for (plVar10 = plVar16; plVar10 != plVar16 + iVar11; plVar10 = plVar10 + 1) {
      if (*plVar10 == lVar3) {
        if ((int)((longlong)plVar10 - (longlong)plVar16 >> 3) != -1) goto LAB_14250bfc2;
        break;
      }
    }
    local_120 = iVar11 + 1;
    local_138 = CONCAT44(local_138._4_4_,local_120);
    if ((int)plVar24 < (int)local_120) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_128,plVar21);
      plVar24 = (longlong *)(ulonglong)local_11c;
      local_138 = CONCAT44(local_138._4_4_,local_120);
      plVar16 = local_128;
    }
    plVar21 = (longlong *)(ulonglong)local_120;
    plVar16[iVar11] = lVar3;
    lVar20 = local_98;
    goto LAB_14250bfc2;
  }
LAB_14250bfcf:
  plVar15 = local_f8;
  iVar11 = (int)local_70;
  puStack_110 = local_88;
  local_118 = 0;
  uStack_114 = 1;
  iStack_104 = 0;
  iStack_100 = 0;
  if ((int)local_70 != 0) {
    puVar18 = local_88;
    if (local_78 != (uint *)0x0) {
      puVar18 = local_78;
    }
    uVar2 = *puVar18;
    while (uVar2 == 0) {
      iStack_100 = iStack_100 + 0x20;
      if ((int)((int)local_70 + -1 + ((int)local_70 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_118) {
        iStack_104 = (int)local_70;
        local_118 = local_118 + 1;
        goto LAB_14250c196;
      }
      uVar2 = puVar18[(longlong)local_118 + 1];
      local_118 = local_118 + 1;
    }
    uStack_114 = -uVar2 & uVar2;
    iVar8 = 0x1f;
    if (uStack_114 != 0) {
      for (; uStack_114 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_114 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_104 = (iStack_100 - iVar8) + 0x1f;
    if ((int)local_70 < iStack_104) {
      iStack_104 = (int)local_70;
    }
  }
LAB_14250c196:
  uStack_d8 = 0xffffffff;
  iStack_d4 = iStack_104;
  local_d0 = CONCAT44(uStack_fc,iStack_100);
  uStack_c0 = CONCAT44(uStack_114,local_118);
  iStack_104 = (int)local_70;
  local_108 = -1 << ((byte)local_70 & 0x1f);
  local_c8 = &local_98;
  uVar23 = 0;
  iStack_e8 = local_118;
  uStack_e4 = uStack_114;
  local_e0 = puStack_110;
  puStack_b8 = puStack_110;
  uStack_a8 = local_d0;
  uStack_b0 = uStack_d8;
  iStack_ac = iStack_d4;
  local_f0 = local_c8;
LAB_14250c1f0:
  plVar16 = local_128;
  plVar13 = local_130;
  if (((iStack_d4 == iVar11) && (local_e0 == local_88)) && (local_f0 == &local_98)) {
    uVar22 = (ulonglong)((longlong)(local_128 + (int)local_138) + (7 - (longlong)local_128)) >> 3;
    if (local_128 + (int)local_138 < local_128) {
      uVar22 = uVar23;
    }
    plVar17 = local_128;
    if (uVar22 != 0) {
      do {
        local_130 = (longlong *)*plVar17;
        (**(code **)(*plVar15 + 0x708))(plVar15);
        FUN_140800100(plVar1,&local_138,&local_130,0);
        uVar23 = uVar23 + 1;
        plVar17 = plVar17 + 1;
      } while (uVar23 != uVar22);
    }
    if (plVar16 != (longlong *)0x0) {
      FMemory::Free(plVar16);
    }
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    return;
  }
  lVar20 = *(longlong *)(*local_f0 + (longlong)iStack_d4 * 0x10);
  (**(code **)(*plVar15 + 0x710))(plVar15,lVar20);
  if ((int)plVar17[0xa0] != *(int *)((longlong)plVar17 + 0x52c)) {
    uVar22 = (longlong)(int)plVar17[0xa8] - 1;
    plVar13 = (longlong *)plVar17[0xa7];
    if ((longlong *)plVar17[0xa7] == (longlong *)0x0) {
      plVar13 = plVar17 + 0xa6;
    }
    iVar8 = *(int *)((longlong)plVar13 +
                    ((longlong)((int)((ulonglong)lVar20 >> 0x20) + (int)lVar20) & uVar22) * 4);
    if (iVar8 != -1) {
      lVar3 = *plVar1;
      do {
        lVar19 = (longlong)iVar8;
        if (*(longlong *)(lVar3 + lVar19 * 0x10) == lVar20) {
          uVar22 = (longlong)*(int *)(lVar3 + 0xc + lVar19 * 0x10) & uVar22;
          piVar12 = (int *)((longlong)plVar13 + uVar22 * 4);
          iVar7 = *(int *)((longlong)plVar13 + uVar22 * 4);
          goto joined_r0x00014250c2b8;
        }
        iVar8 = *(int *)(lVar3 + 8 + lVar19 * 0x10);
      } while (iVar8 != -1);
    }
  }
  goto LAB_14250c34c;
joined_r0x00014250bf92:
  if (iVar11 == -1) goto LAB_14250bfbd;
  lVar19 = (longlong)iVar11;
  if (*(longlong *)(lVar20 + lVar19 * 0x10) == lVar3) {
    piVar12 = (int *)(puVar14 +
                     (longlong)(int)(*(uint *)(lVar20 + 0xc + lVar19 * 0x10) & local_50 - 1U) * 4);
    iVar8 = *piVar12;
    goto joined_r0x00014250c090;
  }
  iVar11 = *(int *)(lVar20 + 8 + lVar19 * 0x10);
  goto joined_r0x00014250bf92;
joined_r0x00014250c090:
  if (iVar8 == -1) goto LAB_14250c0b6;
  if (iVar8 == iVar11) {
    *piVar12 = *(int *)(lVar20 + lVar19 * 0x10 + 8);
    lVar20 = local_98;
    goto LAB_14250c0b6;
  }
  piVar12 = (int *)(lVar20 + 8 + (longlong)iVar8 * 0x10);
  iVar8 = *piVar12;
  goto joined_r0x00014250c090;
LAB_14250c0b6:
  bVar4 = (byte)iVar11 & 0x1f;
  if (local_64 != 0) {
    *(int *)(lVar20 + (longlong)local_68 * 0x10) = iVar11;
    lVar20 = local_98;
  }
  *(undefined4 *)(lVar20 + lVar19 * 0x10) = 0xffffffff;
  iVar8 = -1;
  if (0 < local_64) {
    iVar8 = local_68;
  }
  *(int *)(lVar20 + 4 + lVar19 * 0x10) = iVar8;
  local_64 = local_64 + 1;
  local_68 = iVar11;
  puVar18 = local_88;
  if (local_78 != (uint *)0x0) {
    puVar18 = local_78;
  }
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0x1f;
  }
  puVar18[iVar11 >> 5] = puVar18[iVar11 >> 5] & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
  lVar20 = local_98;
  plVar16 = local_128;
LAB_14250bfbd:
  plVar21 = (longlong *)(local_138 & 0xffffffff);
LAB_14250bfc2:
  plVar15 = plVar15 + 1;
  if (plVar15 == plVar13) goto LAB_14250bfcf;
  goto LAB_14250bec0;
joined_r0x00014250c2b8:
  if (iVar7 == -1) goto LAB_14250c2df;
  if (iVar7 == iVar8) {
    *piVar12 = *(int *)(lVar3 + lVar19 * 0x10 + 8);
    goto LAB_14250c2df;
  }
  piVar12 = (int *)(lVar3 + 8 + (longlong)iVar7 * 0x10);
  iVar7 = *piVar12;
  goto joined_r0x00014250c2b8;
LAB_14250c2df:
  bVar4 = (byte)iVar8 & 0x1f;
  if (*(int *)((longlong)plVar17 + 0x52c) != 0) {
    *(int *)(*plVar1 + (longlong)(int)plVar17[0xa5] * 0x10) = iVar8;
  }
  lVar20 = *plVar1;
  *(undefined4 *)(lVar20 + lVar19 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)plVar17 + 0x52c) < 1) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = (undefined4)plVar17[0xa5];
  }
  *(undefined4 *)(lVar20 + 4 + lVar19 * 0x10) = uVar9;
  *(int *)((longlong)plVar17 + 0x52c) = *(int *)((longlong)plVar17 + 0x52c) + 1;
  *(int *)(plVar17 + 0xa5) = iVar8;
  plVar13 = (longlong *)plVar17[0xa3];
  if ((longlong *)plVar17[0xa3] == (longlong *)0x0) {
    plVar13 = plVar17 + 0xa1;
  }
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0x1f;
  }
  puVar18 = (uint *)((longlong)plVar13 + (longlong)(iVar8 >> 5) * 4);
  *puVar18 = *puVar18 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
LAB_14250c34c:
  uStack_d8 = uStack_d8 & ~uStack_e4;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_e8);
  goto LAB_14250c1f0;
}



// FUNCTION 14250c440 FUN_14250c440 body=79 status=ok
// SIG undefined FUN_14250c440(void)

void FUN_14250c440(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_1424e3000();
  *puVar2 = param_2;
  puVar2[1] = 1;
  uVar1 = param_3[1];
  *(undefined8 *)(puVar2 + 4) = *param_3;
  *(undefined8 *)(puVar2 + 6) = uVar1;
  uVar1 = param_3[3];
  *(undefined8 *)(puVar2 + 8) = param_3[2];
  *(undefined8 *)(puVar2 + 10) = uVar1;
  uVar1 = param_3[5];
  *(undefined8 *)(puVar2 + 0xc) = param_3[4];
  *(undefined8 *)(puVar2 + 0xe) = uVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}



// FUNCTION 14250c490 FUN_14250c490 body=306 status=ok
// SIG undefined FUN_14250c490(void)

void FUN_14250c490(longlong param_1,int param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  float local_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  local_18 = *(float *)(param_3 + 0x20);
  fStack_14 = *(float *)(param_3 + 0x24);
  fStack_10 = *(float *)(param_3 + 0x28);
  uStack_c = *(undefined4 *)(param_3 + 0x2c);
  lVar1 = *(longlong *)(param_1 + 0x818);
  lVar5 = (longlong)param_2;
  if (((0.0001 < ABS(local_18)) || (0.0001 < ABS(fStack_14))) || (0.0001 < ABS(fStack_10))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  lVar3 = *(longlong *)(lVar1 + lVar5 * 8);
  if (bVar2) {
    if (lVar3 != 0) {
      FUN_1426adfd0();
      lVar3 = *(longlong *)(lVar1 + lVar5 * 8);
      if (lVar3 != 0) {
        FUN_14061f570(lVar3);
        FMemory::operator_delete(lVar3,0x1b0);
      }
      *(undefined8 *)(lVar1 + lVar5 * 8) = 0;
    }
  }
  else if (lVar3 == 0) {
    lVar3 = operator_new(0x1b0);
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar4 = FUN_1426852e0(lVar3);
    }
    *(undefined8 *)(lVar1 + lVar5 * 8) = uVar4;
    FUN_1424faec0(param_1,param_2,uVar4);
  }
  else {
    FUN_1426a89c0(lVar3,param_3,param_4);
    local_18 = *(float *)(param_3 + 0x20);
    fStack_14 = *(float *)(param_3 + 0x24);
    fStack_10 = *(float *)(param_3 + 0x28);
    FUN_1426aef60(*(undefined8 *)(lVar1 + lVar5 * 8),&local_18,0);
  }
  return;
}



// FUNCTION 14250c5d0 FUN_14250c5d0 body=1683 status=ok
// SIG undefined FUN_14250c5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14250c5d0(longlong *param_1,int param_2,float *param_3,char param_4,char param_5,
             undefined1 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined8 uVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar12 [16];
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
  float fVar46;
  float fVar47;
  undefined1 auStack_188 [32];
  undefined4 local_168;
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
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if ((param_2 < 0) || ((int)param_1[0xf6] <= param_2)) {
    uVar6 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x70))(param_1,1);
    pfVar7 = (float *)((longlong)param_2 * 0x30 + param_1[0xf5]);
    if (param_4 == '\0') {
      fVar11 = *param_3;
      fVar16 = param_3[1];
      fVar14 = param_3[2];
      fVar18 = param_3[3];
      pfVar5 = &local_108;
      local_f8 = *(undefined8 *)(param_3 + 4);
      uStack_f0 = *(undefined8 *)(param_3 + 6);
      local_e8 = *(undefined8 *)(param_3 + 8);
      uStack_e0 = *(undefined8 *)(param_3 + 10);
      local_108 = fVar11;
      fStack_104 = fVar16;
      fStack_100 = fVar14;
      fStack_fc = fVar18;
    }
    else {
      pfVar5 = (float *)FUN_14162bcf0(param_3,&local_108,param_1 + 0x42);
      fVar11 = *pfVar5;
      fVar16 = pfVar5[1];
      fVar14 = pfVar5[2];
      fVar18 = pfVar5[3];
    }
    fVar37 = pfVar5[4];
    fVar41 = pfVar5[5];
    fVar42 = pfVar5[6];
    fVar43 = pfVar5[7];
    auVar8 = *(undefined1 (*) [16])(pfVar5 + 8);
    fVar27 = auVar8._0_4_;
    fVar32 = auVar8._4_4_;
    fVar33 = auVar8._8_4_;
    fVar36 = auVar8._12_4_;
    pfVar7[4] = fVar37;
    pfVar7[5] = fVar41;
    pfVar7[6] = fVar42;
    pfVar7[7] = fVar43;
    *(undefined1 (*) [16])(pfVar7 + 8) = auVar8;
    *pfVar7 = fVar11;
    pfVar7[1] = fVar16;
    pfVar7[2] = fVar14;
    pfVar7[3] = fVar18;
    fVar3 = fRam0000000146afbca8;
    fVar29 = fRam0000000146afbca4;
    fVar28 = _DAT_146afbca0;
    if ((*(byte *)(param_1 + 0x17) & 4) != 0) {
      if (param_4 == '\0') {
        auVar9 = *(undefined1 (*) [16])(param_1 + 0x46);
        fVar10 = auVar9._0_4_;
        fVar13 = auVar9._4_4_;
        fVar15 = auVar9._8_4_;
        fVar17 = auVar9._12_4_;
        fVar22 = *(float *)(param_1 + 0x42);
        fVar31 = *(float *)((longlong)param_1 + 0x214);
        fVar35 = *(float *)(param_1 + 0x43);
        fVar26 = *(float *)((longlong)param_1 + 0x21c);
        auVar8 = minps(auVar8,auVar9);
        auVar9._4_4_ = -(uint)(auVar8._4_4_ < fRam0000000146afc304);
        auVar9._0_4_ = -(uint)(auVar8._0_4_ < _DAT_146afc300);
        auVar9._8_4_ = -(uint)(auVar8._8_4_ < fRam0000000146afc308);
        auVar9._12_4_ = -(uint)(auVar8._12_4_ < fRam0000000146afc30c);
        iVar4 = movmskps((int)pfVar5,auVar9);
        if (iVar4 == 0) {
          fVar37 = fVar37 * fVar10;
          fVar41 = fVar41 * fVar13;
          fVar42 = fVar42 * fVar15;
          fVar43 = fVar43 * fVar17;
          fVar44 = fVar27 * fVar10;
          fVar45 = fVar32 * fVar13;
          fVar46 = fVar33 * fVar15;
          fVar47 = fVar36 * fVar17;
          fVar27 = fVar42 * fVar31 - fVar41 * fVar35;
          fVar36 = fVar37 * fVar35 - fVar42 * fVar22;
          fVar28 = fVar41 * fVar22 - fVar37 * fVar31;
          fVar29 = fVar43 * fVar26 - fVar43 * fVar26;
          fVar27 = fVar27 + fVar27;
          fVar36 = fVar36 + fVar36;
          fVar28 = fVar28 + fVar28;
          fVar29 = fVar29 + fVar29;
          fVar32 = (fVar28 * fVar31 - fVar36 * fVar35) + fVar27 * fVar26 + fVar37 +
                   *(float *)(param_1 + 0x44);
          fVar33 = (fVar27 * fVar35 - fVar28 * fVar22) + fVar36 * fVar26 + fVar41 +
                   *(float *)((longlong)param_1 + 0x224);
          fVar36 = (fVar36 * fVar22 - fVar27 * fVar31) + fVar28 * fVar26 + fVar42 +
                   *(float *)(param_1 + 0x45);
          fVar27 = (fVar29 * fVar26 - fVar29 * fVar26) + fVar29 * fVar26 + fVar43 +
                   *(float *)((longlong)param_1 + 0x22c);
          local_108 = fVar22 * fVar18 * _DAT_146afc2e0 + fVar11 * fVar26 +
                      fVar31 * fVar14 * _DAT_146afc2d0 + fVar35 * fVar16 * _DAT_146afc2c0;
          fStack_104 = fVar22 * fVar14 * fRam0000000146afc2e4 + fVar16 * fVar26 +
                       fVar31 * fVar18 * fRam0000000146afc2d4 +
                       fVar35 * fVar11 * fRam0000000146afc2c4;
          fStack_100 = fVar22 * fVar16 * fRam0000000146afc2e8 + fVar14 * fVar26 +
                       fVar31 * fVar11 * fRam0000000146afc2d8 +
                       fVar35 * fVar18 * fRam0000000146afc2c8;
          fStack_fc = fVar22 * fVar11 * fRam0000000146afc2ec + fVar18 * fVar26 +
                      fVar31 * fVar16 * fRam0000000146afc2dc +
                      fVar35 * fVar14 * fRam0000000146afc2cc;
        }
        else {
          fVar19 = fVar31 + fVar31;
          fVar23 = fVar35 + fVar35;
          fVar43 = *(float *)(param_1 + 0x44);
          fVar1 = *(float *)((longlong)param_1 + 0x224);
          fVar2 = *(float *)(param_1 + 0x45);
          fVar25 = (fVar22 + fVar22) * fVar22;
          fVar20 = (fVar22 + fVar22) * fVar26;
          fVar44 = fVar10 * fVar27;
          fVar45 = fVar13 * fVar32;
          fVar46 = fVar15 * fVar33;
          fVar47 = fVar17 * fVar36;
          fVar21 = fVar16 + fVar16;
          fVar24 = fVar14 + fVar14;
          fVar38 = (fVar23 * fVar26 + fVar19 * fVar22) * fVar10;
          fVar39 = (fVar20 + fVar23 * fVar31) * fVar13;
          fVar40 = (fVar19 * fVar26 + fVar23 * fVar22) * fVar15;
          fVar30 = fVar13 * (fVar19 * fVar22 - fVar23 * fVar26);
          fVar20 = fVar15 * (fVar23 * fVar31 - fVar20);
          fVar34 = fVar10 * (fVar23 * fVar22 - fVar19 * fVar26);
          fVar26 = (fVar11 + fVar11) * fVar11;
          fVar10 = (float)((uint)((_DAT_146afbca0 - (fVar23 * fVar35 + fVar19 * fVar31)) * fVar10) &
                          _DAT_146afbcb0);
          fVar13 = (float)((uint)((fRam0000000146afbca4 - (fVar23 * fVar35 + fVar25)) * fVar13) &
                          uRam0000000146afbcb4);
          fVar15 = (float)((uint)((fRam0000000146afbca8 - (fVar19 * fVar31 + fVar25)) * fVar15) &
                          uRam0000000146afbcb8);
          fVar17 = (float)((uint)((fRam0000000146afbcac - (fVar25 + fVar25)) * fVar17) &
                          uRam0000000146afbcbc);
          fVar22 = (fVar11 + fVar11) * fVar18;
          fVar19 = (fVar24 * fVar18 + fVar21 * fVar11) * fVar27;
          fVar23 = (fVar22 + fVar24 * fVar16) * fVar32;
          fVar25 = (fVar21 * fVar18 + fVar24 * fVar11) * fVar33;
          fVar31 = fVar32 * (fVar21 * fVar11 - fVar24 * fVar18);
          fVar22 = fVar33 * (fVar24 * fVar16 - fVar22);
          fVar35 = fVar27 * (fVar24 * fVar11 - fVar21 * fVar18);
          fVar11 = (float)((uint)((_DAT_146afbca0 - (fVar24 * fVar14 + fVar21 * fVar16)) * fVar27) &
                          _DAT_146afbcb0);
          fVar14 = (float)((uint)((fRam0000000146afbca4 - (fVar24 * fVar14 + fVar26)) * fVar32) &
                          uRam0000000146afbcb4);
          fVar16 = (float)((uint)((fRam0000000146afbca8 - (fVar21 * fVar16 + fVar26)) * fVar33) &
                          uRam0000000146afbcb8);
          fVar18 = (float)((uint)((fRam0000000146afbcac - (fVar26 + fVar26)) * fVar36) &
                          uRam0000000146afbcbc);
          local_158 = fVar19 * fVar30 + fVar11 * fVar10 + fVar35 * fVar40 + fVar18 * fVar43;
          fStack_154 = fVar19 * fVar13 + fVar11 * fVar38 + fVar35 * fVar20 + fVar18 * fVar1;
          fStack_150 = fVar19 * fVar39 + fVar11 * fVar34 + fVar35 * fVar15 + fVar18 * fVar2;
          fStack_14c = fVar19 * fVar17 + fVar11 * fVar17 + fVar35 * fVar17 +
                       fVar18 * fRam0000000146afbcac;
          local_148 = fVar14 * fVar30 + fVar31 * fVar10 + fVar23 * fVar40 + fVar18 * fVar43;
          fStack_144 = fVar14 * fVar13 + fVar31 * fVar38 + fVar23 * fVar20 + fVar18 * fVar1;
          fStack_140 = fVar14 * fVar39 + fVar31 * fVar34 + fVar23 * fVar15 + fVar18 * fVar2;
          fStack_13c = fVar14 * fVar17 + fVar31 * fVar17 + fVar23 * fVar17 +
                       fVar18 * fRam0000000146afbcac;
          local_138 = fVar22 * fVar30 + fVar25 * fVar10 + fVar16 * fVar40 + fVar18 * fVar43;
          fStack_134 = fVar22 * fVar13 + fVar25 * fVar38 + fVar16 * fVar20 + fVar18 * fVar1;
          fStack_130 = fVar22 * fVar39 + fVar25 * fVar34 + fVar16 * fVar15 + fVar18 * fVar2;
          fStack_12c = fVar22 * fVar17 + fVar25 * fVar17 + fVar16 * fVar17 +
                       fVar18 * fRam0000000146afbcac;
          local_128 = fVar41 * fVar30 + fVar37 * fVar10 + fVar42 * fVar40 +
                      fRam0000000146afbcac * fVar43;
          fStack_124 = fVar41 * fVar13 + fVar37 * fVar38 + fVar42 * fVar20 +
                       fRam0000000146afbcac * fVar1;
          fStack_120 = fVar41 * fVar39 + fVar37 * fVar34 + fVar42 * fVar15 +
                       fRam0000000146afbcac * fVar2;
          fStack_11c = fVar41 * fVar17 + fVar37 * fVar17 + fVar42 * fVar17 +
                       fRam0000000146afbcac * fRam0000000146afbcac;
          FMatrix::RemoveScaling(&local_158);
          fVar11 = (float)(-(uint)(_DAT_146afc300 <= fVar44) & (_DAT_146afc2f0 ^ (uint)fVar28) ^
                          _DAT_146afc2f0);
          fVar16 = (float)(-(uint)(fRam0000000146afc304 <= fVar45) &
                           (uRam0000000146afc2f4 ^ (uint)fVar29) ^ uRam0000000146afc2f4);
          fVar14 = (float)(-(uint)(fRam0000000146afc308 <= fVar46) &
                           (uRam0000000146afc2f8 ^ (uint)fVar3) ^ uRam0000000146afc2f8);
          local_158 = local_158 * fVar11;
          fStack_154 = fStack_154 * fVar11;
          fStack_150 = fStack_150 * fVar11;
          fStack_144 = fStack_144 * fVar16;
          fStack_140 = fStack_140 * fVar16;
          local_148 = local_148 * fVar16;
          fStack_134 = fStack_134 * fVar14;
          fStack_130 = fStack_130 * fVar14;
          local_138 = local_138 * fVar14;
          FQuat::FQuat(&local_118,&local_158);
          local_168 = 0x322bcc77;
          auVar12._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
          auVar12._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
          auVar12._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
          auVar12._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
          fVar32 = auVar12._4_4_ + auVar12._0_4_;
          fVar33 = auVar12._8_4_ + auVar12._4_4_;
          fVar36 = auVar12._12_4_ + auVar12._8_4_;
          fVar37 = auVar12._0_4_ + auVar12._12_4_;
          auVar8._4_4_ = fVar33;
          auVar8._0_4_ = fVar32;
          auVar8._8_4_ = fVar36;
          auVar8._12_4_ = fVar37;
          auVar8 = rsqrtps(auVar12,auVar8);
          fVar11 = auVar8._0_4_;
          fVar16 = auVar8._4_4_;
          fVar14 = auVar8._8_4_;
          fVar18 = auVar8._12_4_;
          fVar11 = (_DAT_146afbd30 - fVar11 * fVar11 * fVar32 * _DAT_146afbd30) * fVar11 + fVar11;
          fVar16 = (fRam0000000146afbd34 - fVar16 * fVar16 * fVar33 * fRam0000000146afbd34) * fVar16
                   + fVar16;
          fVar14 = (fRam0000000146afbd38 - fVar14 * fVar14 * fVar36 * fRam0000000146afbd38) * fVar14
                   + fVar14;
          fVar18 = (fRam0000000146afbd3c - fVar18 * fVar18 * fVar37 * fRam0000000146afbd3c) * fVar18
                   + fVar18;
          fVar27 = 0.0;
          local_108 = (float)(((uint)(((_DAT_146afbd30 - fVar11 * fVar11 * fVar32 * _DAT_146afbd30)
                                       * fVar11 + fVar11) * local_118) ^ _DAT_146afbd20) &
                              -(uint)(1e-08 <= fVar32) ^ _DAT_146afbd20);
          fStack_104 = (float)(((uint)(((fRam0000000146afbd34 -
                                        fVar16 * fVar16 * fVar33 * fRam0000000146afbd34) * fVar16 +
                                       fVar16) * fStack_114) ^ uRam0000000146afbd24) &
                               -(uint)(1e-08 <= fVar33) ^ uRam0000000146afbd24);
          fStack_100 = (float)(((uint)(((fRam0000000146afbd38 -
                                        fVar14 * fVar14 * fVar36 * fRam0000000146afbd38) * fVar14 +
                                       fVar14) * fStack_110) ^ uRam0000000146afbd28) &
                               -(uint)(1e-08 <= fVar36) ^ uRam0000000146afbd28);
          fStack_fc = (float)(((uint)(((fRam0000000146afbd3c -
                                       fVar18 * fVar18 * fVar37 * fRam0000000146afbd3c) * fVar18 +
                                      fVar18) * fStack_10c) ^ uRam0000000146afbd2c) &
                              -(uint)(1e-08 <= fVar37) ^ uRam0000000146afbd2c);
          fVar32 = local_128;
          fVar33 = fStack_124;
          fVar36 = fStack_120;
        }
      }
      else {
        local_108 = *param_3;
        fStack_104 = param_3[1];
        fStack_100 = param_3[2];
        fStack_fc = param_3[3];
        fVar27 = param_3[7];
        fVar44 = param_3[8];
        fVar45 = param_3[9];
        fVar46 = param_3[10];
        fVar47 = param_3[0xb];
        fVar32 = param_3[4];
        fVar33 = param_3[5];
        fVar36 = param_3[6];
      }
      local_f8 = CONCAT44(fVar33,fVar32);
      uStack_f0 = CONCAT44(fVar27,fVar36);
      local_e8 = CONCAT44(fVar45,fVar44);
      uStack_e0 = CONCAT44(fVar47,fVar46);
      FUN_14250c490(param_1,param_2,&local_108,param_6);
    }
    (**(code **)(*param_1 + 0x9c8))(param_1,param_2);
    *(int *)((longlong)param_1 + 0x80c) = *(int *)((longlong)param_1 + 0x80c) + 1;
    if (param_5 != '\0') {
      FUN_1423424e0(param_1);
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 14250cc70 FUN_14250cc70 body=696 status=ok
// SIG undefined FUN_14250cc70(void)

void FUN_14250cc70(longlong param_1,float param_2,undefined1 param_3,undefined1 param_4)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  int local_res8;
  longlong *local_58;
  int local_50;
  int local_4c;
  
  if (*(longlong *)(param_1 + 0x458) != 0) {
    if (0.0 <= param_2) {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x458) + 0x28);
      if (fVar1 <= param_2) {
        param_2 = fVar1;
      }
    }
    else {
      param_2 = 0.0;
    }
    lVar4 = (longlong)DAT_146533180;
    local_58 = (longlong *)0x0;
    local_4c = 0;
    local_50 = DAT_146533180;
    if (0 < DAT_146533180) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58);
    }
    iVar8 = local_50;
    plVar11 = local_58;
    _guard_xfg_dispatch_icall_nop(local_58,0,lVar4 << 4);
    local_res8 = 0;
    if (0 < *(int *)(param_1 + 0x4a0)) {
      lVar4 = 0;
      do {
        iVar9 = 0;
        lVar5 = 0;
        plVar7 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x498));
        lVar2 = (**(code **)(*plVar7 + 0x278))(plVar7);
        iVar10 = iVar9;
        if (lVar2 == 0) {
LAB_14250cd97:
          if (iVar8 <= iVar10) goto LAB_14250cd9b;
        }
        else {
          uVar3 = (**(code **)(*plVar7 + 0x278))(plVar7);
          lVar2 = FUN_14222e2a0(uVar3);
          iVar10 = 0;
          if (lVar2 == 0) goto LAB_14250cd97;
          do {
            iVar9 = iVar9 + 1;
            lVar5 = lVar5 + 1;
            lVar2 = FUN_14222e2a0(lVar2);
          } while (lVar2 != 0);
          iVar10 = iVar9;
          if (-1 < lVar5) goto LAB_14250cd97;
LAB_14250cd9b:
          DAT_146533180 = iVar10 + 1;
          lVar2 = (longlong)iVar8;
          iVar10 = DAT_146533180 - iVar8;
          local_50 = iVar8 + iVar10;
          if (local_4c < local_50) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58);
            plVar11 = local_58;
          }
          iVar8 = local_50;
          _guard_xfg_dispatch_icall_nop(plVar11 + lVar2 * 2,0,(longlong)iVar10 << 4);
        }
        plVar6 = plVar11 + lVar5 * 2;
        lVar2 = plVar6[1];
        iVar10 = (int)lVar2 + 1;
        *(int *)(plVar6 + 1) = iVar10;
        if (*(int *)((longlong)plVar6 + 0xc) < iVar10) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
        }
        local_res8 = local_res8 + 1;
        lVar4 = lVar4 + 8;
        *(longlong **)(*plVar6 + (longlong)(int)lVar2 * 8) = plVar7;
      } while (local_res8 < *(int *)(param_1 + 0x4a0));
    }
    iVar10 = 0;
    if (0 < iVar8) {
      plVar7 = plVar11 + 1;
      do {
        iVar9 = 0;
        if (0 < (int)*plVar7) {
          lVar4 = 0;
LAB_14250ce50:
          plVar6 = *(longlong **)(*(longlong *)(lVar4 + plVar7[-1]) + 0x28);
          (**(code **)(*plVar6 + 0x278))
                    (plVar6,param_2,*(longlong *)(lVar4 + plVar7[-1]),param_3,param_4);
          if (*(int *)(param_1 + 0x4a0) != 0) goto code_r0x00014250ce80;
          *(float *)(param_1 + 0x4bc) = param_2;
          plVar7 = plVar11;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            if (*plVar7 != 0) {
              FMemory::Free();
            }
            plVar7 = plVar7 + 2;
          }
          goto LAB_14250cebd;
        }
LAB_14250ce8b:
        iVar10 = iVar10 + 1;
        plVar7 = plVar7 + 2;
      } while (iVar10 < iVar8);
    }
    *(float *)(param_1 + 0x4bc) = param_2;
    plVar7 = plVar11;
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
LAB_14250cebd:
    if (plVar11 != (longlong *)0x0) {
      FMemory::Free(plVar11);
    }
  }
  return;
code_r0x00014250ce80:
  iVar9 = iVar9 + 1;
  lVar4 = lVar4 + 8;
  if ((int)*plVar7 <= iVar9) goto LAB_14250ce8b;
  goto LAB_14250ce50;
}



// FUNCTION 14250cf30 FUN_14250cf30 body=421 status=ok
// SIG undefined FUN_14250cf30(void)

void FUN_14250cf30(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *local_28;
  undefined8 local_20;
  
  lVar7 = (**(code **)(*param_3 + 0x278))(param_3);
  if ((lVar7 != 0) && (lVar7 = FUN_14222e2a0(lVar7), lVar7 != 0)) {
    iVar11 = *(int *)(lVar7 + 0xc);
    if (iVar11 < (int)DAT_1469e91c4) {
      uVar10 = iVar11 >> 0x1f & 0xffff;
      uVar6 = iVar11 + uVar10;
      lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
               (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
    }
    else {
      lVar13 = 0;
    }
    if (((*(uint *)(lVar13 + 8) >> 0x1d & 1) == 0) && (iVar11 = 0, 0 < *(int *)(param_1 + 0x4a0))) {
      lVar13 = 0;
      do {
        plVar1 = *(longlong **)(lVar13 + *(longlong *)(param_1 + 0x498));
        cVar5 = (**(code **)(*plVar1 + 0x290))(plVar1,lVar7);
        if (cVar5 != '\0') {
          lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x498) + (longlong)iVar11 * 8);
          if (lVar13 == 0) {
            return;
          }
          plVar12 = *(longlong **)(lVar13 + 0x38);
          plVar1 = plVar12 + *(int *)(lVar13 + 0x40);
          while( true ) {
            if (plVar12 == plVar1) {
              return;
            }
            lVar2 = *plVar12;
            plVar3 = *(longlong **)(lVar2 + 0x20);
            if (plVar3 == (longlong *)0x0) {
              lVar8 = 0;
            }
            else {
              lVar8 = (**(code **)(*plVar3 + 0x278))();
            }
            if (lVar8 == lVar7) break;
            plVar12 = plVar12 + 1;
          }
          if (*(longlong *)(lVar13 + 0x28) == 0) {
            return;
          }
          local_28 = (undefined8 *)0x0;
          local_20 = 0;
          uVar9 = UInterpTrackMove::GetPrivateStaticClass();
          UInterpGroup::FindTracksByClass(*(undefined8 *)(lVar13 + 0x28),uVar9,&local_28);
          puVar4 = local_28;
          if (0 < (int)local_20) {
            (**(code **)(*(longlong *)*local_28 + 0x2f0))((longlong *)*local_28,param_2,lVar2,1);
          }
          if (puVar4 == (undefined8 *)0x0) {
            return;
          }
          FMemory::Free(puVar4);
          return;
        }
        iVar11 = iVar11 + 1;
        lVar13 = lVar13 + 8;
      } while (iVar11 < *(int *)(param_1 + 0x4a0));
    }
  }
  return;
}



// FUNCTION 14250d130 UpdateKeyframe body=136 status=ok
// SIG undefined UpdateKeyframe(void)

void UInterpTrackColorProp::UpdateKeyframe(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_res18 [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (((*(undefined4 **)(param_3 + 0x38) != (undefined4 *)0x0) && (-1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x78))) {
    local_res18[0] = **(undefined4 **)(param_3 + 0x38);
    FLinearColor::FLinearColor(&local_18,local_res18);
    lVar1 = *(longlong *)(param_1 + 0x70);
    lVar2 = (longlong)param_2 * 0x2c;
    *(ulonglong *)(lVar2 + 4 + lVar1) = CONCAT44(local_14,local_18);
    *(undefined4 *)(lVar2 + 0xc + lVar1) = local_10;
    FInterpCurve<FVector>::AutoSetTangents
              ((longlong *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x88),
               CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
  }
  return;
}



// FUNCTION 14250d240 FUN_14250d240 body=514 status=ok
// SIG undefined FUN_14250d240(void)

void FUN_14250d240(longlong param_1,int param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_58;
  float fStack_54;
  float local_50;
  float local_40;
  
  if (((((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x90))) &&
       (*(longlong **)(param_3 + 0x20) != (longlong *)0x0)) &&
      ((lVar5 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))(), lVar5 != 0 &&
       (*(longlong *)(lVar5 + 0x168) != 0)))) && ((*(byte *)(param_1 + 0xc0) & 4) == 0)) {
    FRotator::Euler(*(longlong *)(lVar5 + 0x168) + 0x1f8,&local_58);
    lVar5 = *(longlong *)(lVar5 + 0x168);
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar6 = (longlong)param_2 * 0x2c;
    *(undefined8 *)(lVar2 + 4 + lVar6) = *(undefined8 *)(lVar5 + 0x1ec);
    *(undefined4 *)(lVar2 + 0xc + lVar6) = *(undefined4 *)(lVar5 + 500);
    if (1 < *(int *)(param_1 + 0x90)) {
      iVar4 = -1;
      if (param_2 < 1) {
        iVar4 = 1;
      }
      lVar5 = (longlong)(iVar4 + param_2) * 0x2c;
      uVar1 = *(undefined8 *)(lVar5 + 4 + *(longlong *)(param_1 + 0x88));
      local_40 = *(float *)(lVar5 + 0xc + *(longlong *)(param_1 + 0x88));
      fVar9 = local_58 - (float)uVar1;
      fVar8 = fStack_54 - (float)((ulonglong)uVar1 >> 0x20);
      fVar7 = -360.0;
      fVar3 = fVar7;
      if ((180.0 < fVar9) || (fVar3 = 360.0, fVar9 < -180.0)) {
        local_58 = local_58 + fVar3;
      }
      if ((180.0 < fVar8) || (fVar7 = 360.0, fVar8 < -180.0)) {
        fStack_54 = fStack_54 + fVar7;
      }
      if (local_50 - local_40 <= 180.0) {
        if (local_50 - local_40 < -180.0) {
          local_50 = local_50 + 360.0;
        }
      }
      else {
        local_50 = local_50 + -360.0;
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x88);
    *(ulonglong *)(lVar5 + 4 + lVar6) = CONCAT44(fStack_54,local_58);
    *(float *)(lVar5 + 0xc + lVar6) = local_50;
    FInterpCurve<FVector>::AutoSetTangents
              (param_1 + 0x70,*(undefined4 *)(param_1 + 0xb8),
               CONCAT71((int7)((ulonglong)lVar6 >> 8),1));
    FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x88,*(undefined4 *)(param_1 + 0xbc),1);
  }
  return;
}



// FUNCTION 14250d4c0 FUN_14250d4c0 body=475 status=ok
// SIG undefined FUN_14250d4c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14250d4c0(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x600))();
  if (((*(byte *)(param_1 + 0x97) & 1) == 0) && (param_2 == '\0')) {
    uVar1 = AActor::GetWorldTimerManager(param_1);
    FUN_142880530(uVar1,param_1 + 0x9f);
    param_1[0x9f] = 0;
  }
  else {
    uVar1 = AActor::GetWorldTimerManager(param_1);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      plVar2[2] = (longlong)&LAB_140a7e1dc;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_90 = 0xbf800000;
    local_98 = 1;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar1,param_1 + 0x9f,&local_88,0x3f800000);
    if (local_28 != 0) {
      plVar4 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar4 = local_38;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar3 = FMemory::Realloc(plVar2,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 14250d6a0 FUN_14250d6a0 body=1606 status=ok
// SIG undefined FUN_14250d6a0(void)

void FUN_14250d6a0(longlong *param_1,float param_2,ulonglong param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  float *pfVar11;
  byte bVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulonglong local_res18;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar28;
  undefined8 local_d8;
  longlong local_d0 [21];
  
  if ((*(longlong **)(param_3 + 0x20) != (longlong *)0x0) &&
     (local_res18 = param_3, lVar8 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))(),
     lVar8 != 0)) {
    uVar9 = UMatineeAnimInterface::GetPrivateStaticClass();
    plVar10 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar9);
    if (plVar10 != (longlong *)0x0) {
      plVar14 = param_1;
      uVar7 = UInterpTrackAnimControl::CalcChannelIndex();
      if ((((int)param_1[0x14] == 0) || (param_2 <= *(float *)(param_3 + 0x28))) ||
         (param_4 != '\0')) {
        local_d0[0] = 0;
        local_d8 = (ulonglong)local_d8._4_4_ << 0x20;
        local_res18 = local_res18 & 0xffffffffffffff00;
        UInterpTrackAnimControl::GetAnimForTime(param_1,param_2,local_d0,&local_d8,&local_res18);
        if (local_d0[0] != 0) {
          (**(code **)(*plVar10 + 0x48))
                    (plVar10,param_1[0x12],uVar7,local_d0[0],local_d8 & 0xffffffff,0,
                     (undefined1)local_res18);
        }
      }
      else {
        iVar15 = -1;
        iVar17 = (int)param_1[0x14] + -1;
        iVar16 = -1;
        if (-1 < iVar17) {
          pfVar11 = (float *)param_1[0x13];
          plVar14 = (longlong *)&DAT_ffffffffffffffff;
          do {
            if (*(float *)(param_3 + 0x28) < *pfVar11) break;
            iVar16 = iVar16 + 1;
            plVar14 = (longlong *)((longlong)plVar14 + 1);
            pfVar11 = pfVar11 + 8;
          } while ((longlong)plVar14 < (longlong)iVar17);
          if (-1 < iVar17) {
            pfVar11 = (float *)param_1[0x13];
            plVar14 = (longlong *)&DAT_ffffffffffffffff;
            do {
              if (param_2 < *pfVar11) break;
              iVar15 = iVar15 + 1;
              plVar14 = (longlong *)((longlong)plVar14 + 1);
              pfVar11 = pfVar11 + 8;
            } while ((longlong)plVar14 < (longlong)iVar17);
          }
        }
        lVar20 = (longlong)iVar16;
        lVar8 = (longlong)iVar15;
        lVar21 = lVar20;
        local_d8 = lVar20;
        local_d0[0] = lVar8;
        if (lVar20 <= lVar8) {
          do {
            uVar28 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
            uVar13 = (uint)plVar14;
            lVar5 = param_1[0x13];
            if (lVar21 == -1) {
              uVar13 = *(uint *)(lVar5 + 0x1c);
              plVar14 = (longlong *)(ulonglong)uVar13;
              fVar22 = *(float *)(lVar5 + 0x10);
              lVar6 = *(longlong *)(lVar5 + 8);
              bVar12 = (byte)uVar13;
              if ((uVar13 & 2) != 0) {
                if (lVar6 == 0) goto LAB_14250dbc8;
                fVar22 = (*(float *)(lVar6 + 0x90) - (fVar22 + *(float *)(lVar5 + 0x14))) + fVar22;
              }
joined_r0x00014250db9c:
              if (lVar6 != 0) {
                in_stack_ffffffffffffff08 = CONCAT44(uVar28,fVar22);
                plVar14 = plVar10;
                (**(code **)(*plVar10 + 0x48))
                          (plVar10,param_1[0x12],uVar7,lVar6,in_stack_ffffffffffffff08,0,bVar12 & 1)
                ;
                lVar20 = local_d8;
              }
            }
            else {
              lVar19 = lVar21 * 0x20;
              lVar6 = *(longlong *)(lVar19 + 8 + lVar5);
              fVar22 = *(float *)(lVar19 + lVar5);
              fVar1 = *(float *)(lVar19 + 0x10 + lVar5);
              fVar2 = *(float *)(lVar19 + 0x14 + lVar5);
              fVar26 = *(float *)(lVar19 + 0x18 + lVar5);
              fVar23 = fVar22;
              if (lVar21 == lVar20) {
                fVar23 = *(float *)(local_res18 + 0x28);
              }
              fVar25 = param_2;
              if (lVar21 != lVar8) {
                fVar25 = *(float *)(lVar19 + 0x20 + lVar5);
              }
              uVar4 = *(uint *)(lVar19 + 0x1c + lVar5);
              if ((uVar4 & 1) == 0) {
                fVar22 = (fVar25 - fVar22) * fVar26 + fVar1;
                if (lVar6 != 0) {
                  if (0.0 <= fVar22) {
                    fVar26 = (*(float *)(lVar6 + 0x90) - fVar2) + 0.0001;
                    if (fVar26 <= fVar22) {
                      fVar22 = fVar26;
                    }
                  }
                  else {
                    fVar22 = 0.0;
                  }
                }
                if ((uVar4 & 2) != 0) {
                  if (lVar6 == 0) goto LAB_14250db4f;
                  fVar22 = ((*(float *)(lVar6 + 0x90) - (fVar2 + fVar1)) - (fVar22 - fVar1)) + fVar1
                  ;
                }
                if (lVar6 != 0) {
                  if (fVar22 == fVar1) {
                    bVar12 = 0;
                  }
                  else {
                    bVar12 = ~(byte)(int)param_1[0x15] & 1;
                  }
                  in_stack_ffffffffffffff08 = CONCAT44(uVar28,fVar22);
                  plVar14 = plVar10;
                  (**(code **)(*plVar10 + 0x48))
                            (plVar10,param_1[0x12],uVar7,lVar6,in_stack_ffffffffffffff08,bVar12,0);
                }
              }
              else if (lVar6 != 0) {
                fVar3 = *(float *)(lVar6 + 0x90);
                fVar27 = fVar3 - (fVar2 + fVar1);
                if (fVar27 <= 0.01) {
                  fVar27 = 0.01;
                }
                if (((uVar4 & 2) == 0) &&
                   (fVar24 = ((fVar23 - fVar22) * fVar26 + fVar1) * (1.0 / fVar27),
                   fVar23 = ((fVar25 - fVar22) * fVar26 + fVar1) * (1.0 / fVar27),
                   uVar13 = ((int)ROUND((fVar23 + fVar23) - 0.5) >> 1) -
                            ((int)ROUND((fVar24 + fVar24) - 0.5) >> 1), 0 < (int)uVar13)) {
                  uVar18 = (ulonglong)uVar13;
                  do {
                    uVar9 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff08 >> 0x20),
                                     (fVar3 - fVar2) + 0.0001);
                    (**(code **)(*plVar10 + 0x48))(plVar10,param_1[0x12],uVar7,lVar6,uVar9,1,1);
                    in_stack_ffffffffffffff08 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),fVar1);
                    plVar14 = plVar10;
                    (**(code **)(*plVar10 + 0x48))
                              (plVar10,param_1[0x12],uVar7,lVar6,in_stack_ffffffffffffff08,0,1);
                    uVar28 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
                    uVar13 = (uint)plVar14;
                    uVar18 = uVar18 - 1;
                    lVar8 = local_d0[0];
                  } while (uVar18 != 0);
                }
                fVar26 = (fVar25 - fVar22) * fVar26;
                if (1e-08 < fVar27) {
                  fVar27 = (float)(int)(fVar26 / fVar27) * fVar27;
                  if (ABS(fVar26) < ABS(fVar27)) {
                    fVar27 = fVar26;
                  }
                  fVar26 = fVar26 - fVar27;
                }
                else {
                  AK::MemoryMgr::StartProfileThreadUsage(uVar13);
                  fVar26 = 0.0;
                }
                fVar26 = fVar26 + fVar1;
                if ((*(byte *)(lVar19 + 0x1c + lVar5) & 2) != 0) {
                  fVar22 = *(float *)(lVar19 + 0x10 + lVar5);
                  fVar26 = ((*(float *)(lVar6 + 0x90) - (fVar22 + *(float *)(lVar19 + 0x14 + lVar5))
                            ) - (fVar26 - fVar22)) + fVar22;
                }
                in_stack_ffffffffffffff08 = CONCAT44(uVar28,fVar26);
                plVar14 = plVar10;
                (**(code **)(*plVar10 + 0x48))
                          (plVar10,param_1[0x12],uVar7,lVar6,in_stack_ffffffffffffff08,
                           ~*(byte *)(param_1 + 0x15) & 1,1);
              }
LAB_14250db4f:
              uVar28 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
              lVar20 = local_d8;
              if (lVar21 < lVar8) {
                plVar14 = (longlong *)param_1[0x13];
                lVar5 = lVar21 + 1;
                uVar13 = *(uint *)(lVar5 * 0x20 + 0x1c + (longlong)plVar14);
                fVar22 = *(float *)(plVar14 + lVar5 * 4 + 2);
                lVar6 = plVar14[lVar5 * 4 + 1];
                bVar12 = (byte)uVar13;
                if ((uVar13 & 2) != 0) {
                  if (lVar6 == 0) goto LAB_14250dbc8;
                  fVar22 = (*(float *)(lVar6 + 0x90) -
                           (fVar22 + *(float *)(lVar5 * 0x20 + 0x14 + (longlong)plVar14))) + fVar22;
                }
                goto joined_r0x00014250db9c;
              }
            }
LAB_14250dbc8:
            lVar21 = lVar21 + 1;
            param_3 = local_res18;
          } while (lVar21 <= lVar8);
        }
      }
      *(float *)(param_3 + 0x28) = param_2;
    }
  }
  return;
}



// FUNCTION 14250dcf0 FUN_14250dcf0 body=274 status=ok
// SIG undefined FUN_14250dcf0(void)

void FUN_14250dcf0(longlong param_1,float param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  bool bVar10;
  
  if (*(longlong **)(param_3 + 0x20) == (longlong *)0x0) {
    return;
  }
  lVar5 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))();
  if (lVar5 == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_3 + 0x38);
  if (lVar5 == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_3 + 0x40);
  if (lVar2 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  lVar6 = (longlong)iVar1;
  bVar10 = false;
  if (iVar1 == 0) {
    bVar10 = (*(byte *)(lVar2 + 0x73) & *(byte *)((ulonglong)*(byte *)(lVar2 + 0x71) + lVar5)) != 0;
  }
  else {
    if ((iVar1 == 1) ||
       (pfVar3 = *(float **)(param_1 + 0x70), param_2 < *pfVar3 || param_2 == *pfVar3)) {
      bVar8 = *(byte *)(*(longlong *)(param_1 + 0x70) + 4);
    }
    else {
      if (param_2 < pfVar3[lVar6 * 2 + -2]) {
        iVar9 = 1;
        if (1 < iVar1) {
          lVar7 = 1;
          do {
            if (param_2 < pfVar3[lVar7 * 2]) {
              bVar8 = *(byte *)(pfVar3 + (longlong)iVar9 * 2 + -1);
              goto LAB_14250ddb6;
            }
            iVar9 = iVar9 + 1;
            lVar7 = lVar7 + 1;
          } while (lVar7 < lVar6);
        }
        goto LAB_14250ddb9;
      }
      bVar8 = *(byte *)(pfVar3 + lVar6 * 2 + -1);
    }
LAB_14250ddb6:
    bVar10 = (bool)(bVar8 & 1);
  }
LAB_14250ddb9:
  if (bVar10 == false) {
    bVar8 = 0;
  }
  else {
    bVar8 = *(byte *)(lVar2 + 0x72);
  }
  *(byte *)((ulonglong)*(byte *)(lVar2 + 0x71) + lVar5) =
       ~*(byte *)(lVar2 + 0x73) & *(byte *)((ulonglong)*(byte *)(lVar2 + 0x71) + lVar5) | bVar8;
  plVar4 = *(longlong **)(param_3 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4,*(undefined8 *)(param_3 + 0x28));
  }
  return;
}



// FUNCTION 14250de10 FUN_14250de10 body=272 status=ok
// SIG undefined FUN_14250de10(void)

void FUN_14250de10(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 local_res18 [4];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*(longlong **)(param_3 + 0x20) != (longlong *)0x0) {
    lVar2 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))();
    if ((lVar2 != 0) && (*(undefined4 **)(param_3 + 0x38) != (undefined4 *)0x0)) {
      local_res18[0] = **(undefined4 **)(param_3 + 0x38);
      FLinearColor::FLinearColor(&local_30,local_res18);
      local_50 = local_30;
      local_48 = local_28;
      local_4c = local_2c;
      FInterpCurve<FVector>::Eval(param_1 + 0x70,&local_40,param_2,&local_50);
      local_50 = local_40;
      local_4c = local_3c;
      local_48 = local_38;
      local_44 = 0x3f800000;
      FLinearColor::ToFColor(&local_50,local_58,1);
      **(undefined4 **)(param_3 + 0x38) = local_58[0];
      plVar1 = *(longlong **)(param_3 + 0x30);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined8 *)(param_3 + 0x28));
      }
    }
  }
  return;
}



// FUNCTION 14250df20 FUN_14250df20 body=297 status=ok
// SIG undefined FUN_14250df20(void)

void FUN_14250df20(longlong param_1,undefined4 param_2,longlong param_3)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  lVar5 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))();
  if (lVar5 != 0) {
    lVar6 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar6 = *(longlong *)(lVar5 + 0x528), lVar6 != 0)) {
      iVar2 = *(int *)(lVar6 + 0xc);
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar8 = iVar2 >> 0x1f & 0xffff;
        uVar4 = iVar2 + uVar8;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
        *(uint *)(lVar6 + 0x2c40) = *(uint *)(lVar6 + 0x2c40) | 0x10;
        local_38 = 0x3f800000;
        local_34 = 0x3f800000;
        local_30 = 0x3f800000;
        FInterpCurve<FVector>::Eval(param_1 + 0x70,&local_2c,param_2,&local_38);
        lVar6 = *(longlong *)(lVar5 + 0x528);
        *(undefined8 *)(lVar6 + 0x498) = local_2c;
        *(undefined4 *)(lVar6 + 0x4a0) = local_24;
        puVar1 = (uint *)(*(longlong *)(lVar5 + 0x528) + 0x2c40);
        *puVar1 = *puVar1 & 0xffffffdf;
      }
    }
  }
  return;
}



// FUNCTION 14250e050 FUN_14250e050 body=770 status=ok
// SIG undefined FUN_14250e050(void)

void FUN_14250e050(longlong param_1,float param_2,longlong param_3)

{
  uint *puVar1;
  int iVar2;
  float *pfVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  ulonglong local_res18;
  float local_48;
  undefined1 local_44;
  undefined4 local_40;
  uint local_3c;
  longlong local_38 [4];
  
  local_res18 = local_res18 & 0xffffffff00000000;
  plVar11 = *(longlong **)(param_3 + 0x20);
  plVar8 = (longlong *)(**(code **)(*plVar11 + 0x278))(plVar11);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  lVar9 = FUN_1429e18b0();
  if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  lVar9 = plVar11[4];
  if ((((char)plVar8[0x25] != '\x03') && ((*(byte *)(lVar9 + 0x474) & 0x20) == 0)) &&
     ((*(byte *)(param_1 + 0x80) & 1) == 0)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  iVar17 = -1;
  if (((0 < iVar2) &&
      (pfVar3 = *(float **)(param_1 + 0x70), *pfVar3 <= param_2 && param_2 != *pfVar3)) &&
     (pfVar15 = pfVar3, iVar5 = 0, 0 < iVar2)) {
    do {
      iVar6 = iVar5;
      if (param_2 < *pfVar15) break;
      pfVar15 = pfVar15 + 6;
      iVar5 = iVar6 + 1;
      iVar17 = iVar6;
    } while (iVar6 + 1 < iVar2);
    if (iVar17 != -1) {
      fVar18 = pfVar3[(longlong)iVar17 * 6 + 1];
      local_res18 = *(ulonglong *)(pfVar3 + (longlong)iVar17 * 6 + 2);
      goto LAB_14250e14e;
    }
  }
  fVar18 = 0.0;
  local_res18 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x40);
LAB_14250e14e:
  if (local_res18 != *(ulonglong *)(plVar11[5] + 0x40)) {
    uVar10 = FName::ToString(&local_res18,local_38);
    plVar11 = (longlong *)FUN_1424efd90(lVar9,uVar10);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  lVar12 = (**(code **)(*plVar8 + 0x758))(plVar8);
  if (((plVar11 == (longlong *)0x0) ||
      (lVar13 = (**(code **)(*plVar11 + 0x278))(plVar11), lVar13 == 0)) ||
     (plVar14 = (longlong *)(**(code **)(*plVar11 + 0x278))(plVar11), plVar14 == plVar8)) {
    lVar12 = *(longlong *)(param_3 + 0x28);
    if (lVar12 != 0) {
      iVar2 = *(int *)(lVar12 + 0xc);
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar16 = iVar2 >> 0x1f & 0xffff;
        uVar7 = iVar2 + uVar16;
        lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                 (longlong)(int)((uVar7 & 0xffff) - uVar16) * 0x18;
      }
      else {
        lVar13 = 0;
      }
      if ((*(uint *)(lVar13 + 8) >> 0x1d & 1) == 0) {
        local_3c = local_3c & 0xfffffffe;
        local_40 = 0x40000000;
        local_44 = 1;
        local_48 = fVar18;
        (**(code **)(*plVar8 + 0xe18))(plVar8,lVar12,&local_48);
      }
      (**(code **)(*plVar8 + 0xc48))(plVar8,0,lVar9);
      FUN_142717380(plVar8,0,0);
      *(undefined8 *)(param_3 + 0x28) = 0;
    }
  }
  else if (lVar12 != plVar11[6]) {
    if (*(longlong *)(param_3 + 0x28) == 0) {
      lVar13 = UPrimitiveComponent::GetLODParentPrimitive(plVar8);
      if ((lVar13 == 0) || (*(longlong *)(lVar13 + 0x28) == 0)) {
        *(longlong *)(param_3 + 0x28) = lVar12;
      }
      else {
        *(longlong *)(param_3 + 0x28) = *(longlong *)(lVar13 + 0x28);
      }
    }
    FUN_142717380(plVar8,param_3,*(byte *)(param_1 + 0x80) & 1);
    (**(code **)(*plVar8 + 0xc48))(plVar8,1,lVar9);
    uVar10 = *(undefined8 *)(param_3 + 0x28);
    local_3c = local_3c & 0xfffffffe;
    local_40 = 0x40000000;
    local_44 = 1;
    local_48 = fVar18;
    (**(code **)(*plVar8 + 0xe18))(plVar8,plVar11[6],&local_48);
    if (plVar8[0xa5] != 0) {
      puVar1 = (uint *)(plVar8[0xa5] + 0x2c40);
      *puVar1 = *puVar1 | 0x400;
    }
    *(undefined8 *)(param_3 + 0x28) = uVar10;
  }
  return;
}



// FUNCTION 14250e360 FUN_14250e360 body=387 status=ok
// SIG undefined FUN_14250e360(void)

void FUN_14250e360(longlong param_1,float param_2,longlong param_3,char param_4)

{
  float fVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  
  plVar2 = *(longlong **)(*(longlong *)(param_3 + 0x20) + 0x20);
  if ((((byte)*(uint *)(plVar2 + 0x97) & 3) == 3) ||
     (((param_4 != '\0' && ((*(uint *)(plVar2 + 0x97) & 1) == 0)) &&
      (param_2 < *(float *)(param_3 + 0x28))))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar7 = 0;
  bVar4 = true;
  bVar5 = true;
  if (param_4 == '\0') {
LAB_14250e3eb:
    bVar5 = bVar4;
    if (!bVar3) goto LAB_14250e3f0;
    fVar9 = *(float *)(param_3 + 0x28);
    fVar10 = param_2;
    if (param_2 == 0.0) {
      fVar10 = param_2 - 0.0001;
    }
    if ((*(byte *)(param_1 + 0x80) & 2) == 0) goto LAB_14250e4b2;
  }
  else {
    if (((*(byte *)(param_1 + 0x80) & 4) == 0) || (bVar3)) {
      bVar4 = false;
      goto LAB_14250e3eb;
    }
LAB_14250e3f0:
    fVar10 = *(float *)(param_3 + 0x28);
    fVar9 = param_2;
    if (param_2 == *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x28)) {
      fVar9 = param_2 + 0.0001;
    }
    bVar4 = false;
    if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
      bVar4 = bVar5;
    }
  }
  if ((bVar4) && (uVar8 = uVar7, 0 < *(int *)(param_1 + 0x78))) {
    do {
      fVar1 = *(float *)(uVar8 + *(longlong *)(param_1 + 0x70));
      if (bVar3) {
        if ((fVar10 < fVar1) && (fVar1 <= fVar9)) goto LAB_14250e477;
      }
      else if ((fVar10 <= fVar1) && (fVar1 < fVar9)) {
LAB_14250e477:
        (**(code **)(*plVar2 + 0x728))
                  (plVar2,*(undefined8 *)
                           (*(longlong *)(param_1 + 0x70) + 8 + (longlong)(int)uVar7 * 0x10),*plVar2
                   ,*(uint *)(param_1 + 0x80) >> 3 & 0xffffff01);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = uVar8 + 0x10;
      if (*(int *)(param_1 + 0x78) <= (int)uVar6) {
        *(float *)(param_3 + 0x28) = param_2;
        return;
      }
    } while( true );
  }
LAB_14250e4b2:
  *(float *)(param_3 + 0x28) = param_2;
  return;
}



// FUNCTION 14250e4f0 FUN_14250e4f0 body=316 status=ok
// SIG undefined FUN_14250e4f0(void)

void FUN_14250e4f0(longlong param_1,undefined4 param_2,longlong param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  undefined4 local_res20 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((param_4 == '\0') &&
     (lVar5 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))(), lVar5 != 0)) {
    lVar6 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (plVar2 = *(longlong **)(lVar5 + 0x528), plVar2 != (longlong *)0x0)) {
      iVar1 = *(int *)((longlong)plVar2 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar7;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
        local_38 = *(undefined4 *)(param_1 + 0x94);
        uStack_34 = *(undefined4 *)(param_1 + 0x98);
        uStack_30 = *(undefined4 *)(param_1 + 0x9c);
        uStack_2c = *(undefined4 *)(param_1 + 0xa0);
        local_res20[0] = 0;
        fVar8 = (float)FInterpCurve<float>::Eval(param_1 + 0x70,param_2,local_res20);
        if (0.0 <= fVar8) {
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
        }
        else {
          fVar8 = 0.0;
        }
        (**(code **)(*plVar2 + 0x860))
                  (plVar2,fVar8,&local_38,
                   CONCAT31((uint3)(*(uint *)(param_1 + 0x90) >> 9),
                            (char)(*(uint *)(param_1 + 0x90) >> 1)) & 0xffffff01);
      }
    }
  }
  return;
}



// FUNCTION 14250e630 UpdateTrack body=161 status=ok
// SIG undefined UpdateTrack(void)

void UInterpTrackFloatAnimBPParam::UpdateTrack(longlong param_1,undefined4 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_res18 [4];
  
  if (param_3 != 0) {
    lVar2 = UInterpTrackInstFloatAnimBPParam::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_res18[0] = 0;
      if (((*(longlong *)(param_3 + 0x28) != 0) && (*(longlong *)(param_3 + 0x38) != 0)) &&
         (puVar3 = (undefined4 *)
                   ((longlong)*(int *)(*(longlong *)(param_3 + 0x38) + 0x44) +
                   *(longlong *)(param_3 + 0x28)), puVar3 != (undefined4 *)0x0)) {
        uVar4 = FInterpCurve<float>::Eval(param_1 + 0x70,param_2,local_res18);
        *puVar3 = uVar4;
      }
    }
  }
  return;
}



// FUNCTION 14250e6e0 UpdateTrack body=209 status=ok
// SIG undefined UpdateTrack(void)

void UInterpTrackFloatMaterialParam::UpdateTrack
               (longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_res18 [2];
  
  if (param_3 != 0) {
    lVar3 = UInterpTrackInstFloatMaterialParam::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_res18[0] = 0;
      uVar5 = FInterpCurve<float>::Eval(param_1 + 0x70,param_2,local_res18);
      iVar4 = 0;
      if (0 < *(int *)(param_3 + 0x30)) {
        lVar3 = 0;
        do {
          lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_3 + 0x28));
          if (lVar1 != 0) {
            FUN_1425a2750(lVar1,*(undefined8 *)(param_1 + 0xa0),uVar5);
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 8;
        } while (iVar4 < *(int *)(param_3 + 0x30));
      }
    }
  }
  return;
}



// FUNCTION 14250e7c0 FUN_14250e7c0 body=162 status=ok
// SIG undefined FUN_14250e7c0(void)

void FUN_14250e7c0(longlong param_1,undefined4 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 local_res18 [4];
  
  if ((*(longlong **)(param_3 + 0x20) != (longlong *)0x0) &&
     (lVar2 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))(), lVar2 != 0)) {
    lVar3 = AGPingUsable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_res18[0] = 0;
      uVar4 = FInterpCurve<float>::Eval(param_1 + 0x70,param_2,local_res18);
      FUN_14260f0c0(*(undefined8 *)(lVar2 + 0x458),*(undefined8 *)(param_1 + 0x90),uVar4);
    }
  }
  return;
}



// FUNCTION 14250e870 FUN_14250e870 body=123 status=ok
// SIG undefined FUN_14250e870(void)

void FUN_14250e870(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (((*(longlong **)(param_3 + 0x20) != (longlong *)0x0) &&
      (lVar3 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))(), lVar3 != 0)) &&
     (puVar1 = *(undefined4 **)(param_3 + 0x38), puVar1 != (undefined4 *)0x0)) {
    uVar4 = FInterpCurve<float>::Eval(param_1 + 0x70,param_2,puVar1);
    *puVar1 = uVar4;
    plVar2 = *(longlong **)(param_3 + 0x30);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xb8))(plVar2,*(undefined8 *)(param_3 + 0x28));
    }
  }
  return;
}



// FUNCTION 14250e8f0 FUN_14250e8f0 body=130 status=ok
// SIG undefined FUN_14250e8f0(void)

void FUN_14250e8f0(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 local_28 [32];
  
  if (((*(longlong **)(param_3 + 0x20) != (longlong *)0x0) &&
      (lVar6 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))(), lVar6 != 0)) &&
     (puVar1 = *(undefined4 **)(param_3 + 0x38), puVar1 != (undefined4 *)0x0)) {
    puVar7 = (undefined4 *)FInterpCurve<FLinearColor>::Eval(param_1 + 0x70,local_28,param_2,puVar1);
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    *puVar1 = *puVar7;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    plVar2 = *(longlong **)(param_3 + 0x30);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xb8))(plVar2,*(undefined8 *)(param_3 + 0x28));
    }
  }
  return;
}



// FUNCTION 14250e980 FUN_14250e980 body=1127 status=ok
// SIG undefined FUN_14250e980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14250e980(longlong *param_1,undefined8 param_2,longlong param_3)

{
  float *pfVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  float fStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [32];
  
  uVar18 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar17 = (undefined4)param_2;
  if ((((*(longlong **)(param_3 + 0x20) != (longlong *)0x0) &&
       (lVar8 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))(), lVar8 != 0)) &&
      (plVar2 = *(longlong **)(lVar8 + 0x168), plVar2 != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(*plVar2 + 0x400))(plVar2,0), cVar7 == '\0')) {
    local_48 = *(undefined8 *)(*(longlong *)(lVar8 + 0x168) + 0x220);
    uStack_40 = *(undefined8 *)(*(longlong *)(lVar8 + 0x168) + 0x228);
    if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
      uVar17 = 0;
      uVar18 = 0;
    }
    if (((int)param_1[8] != 0) || ((int)param_1[0x12] != 0)) {
      (**(code **)(*param_1 + 0x388))(param_1,param_3,CONCAT44(uVar18,uVar17),&local_98,&local_58);
      fVar12 = (float)DAT_146afc370;
      fVar4 = DAT_146afc370._4_4_;
      fVar5 = DAT_146afc370._8_4_;
      if (*(char *)((longlong)param_1 + 0xc4) == '\x02') {
        lVar3 = *(longlong *)(lVar8 + 0x168);
        local_78 = local_98;
        pfVar1 = (float *)(lVar3 + 0x280);
        local_70 = local_90;
        if (((*(float *)(lVar3 + 0x1f8) != *pfVar1) ||
            (*(float *)(lVar3 + 0x1fc) != *(float *)(lVar3 + 0x284))) ||
           (*(float *)(lVar3 + 0x200) != *(float *)(lVar3 + 0x288))) {
          local_88 = *(undefined8 *)*(undefined1 (*) [12])(lVar3 + 0x1f8);
          auVar10._12_4_ = 0;
          auVar10._0_12_ = *(undefined1 (*) [12])(lVar3 + 0x1f8);
          auVar11 = divps(auVar10,_DAT_146afc370);
          fVar14 = (float)local_88 - (float)(int)auVar11._0_4_ * fVar12;
          fVar15 = (float)((ulonglong)local_88 >> 0x20) - (float)(int)auVar11._4_4_ * fVar4;
          fVar16 = *(float *)(lVar3 + 0x200) - (float)(int)auVar11._8_4_ * fVar5;
          fVar14 = (float)(((uint)(fVar14 + fVar12) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                          (uint)(fVar14 + fVar12));
          fVar15 = (float)(((uint)(fVar15 + fVar4) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                          (uint)(fVar15 + fVar4));
          fVar16 = (float)(((uint)(fVar16 + fVar5) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                          (uint)(fVar16 + fVar5));
          uVar13 = ((uint)(fVar16 - fVar5) ^ (uint)fVar16) & -(uint)(fRam0000000146afc368 < fVar16)
                   ^ (uint)fVar16;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar13);
          *(ulonglong *)pfVar1 =
               CONCAT44(((uint)(fVar15 - fVar4) ^ (uint)fVar15) &
                        -(uint)(fRam0000000146afc364 < fVar15) ^ (uint)fVar15,
                        ((uint)(fVar14 - fVar12) ^ (uint)fVar14) & -(uint)(_DAT_146afc360 < fVar14)
                        ^ (uint)fVar14);
          *(uint *)(lVar3 + 0x288) = uVar13;
          puVar9 = (undefined8 *)FRotator::Quaternion(pfVar1,&local_88);
          uVar6 = puVar9[1];
          *(undefined8 *)(lVar3 + 0x270) = *puVar9;
          *(undefined8 *)(lVar3 + 0x278) = uVar6;
        }
        local_68 = *(undefined8 *)(lVar3 + 0x270);
        uStack_60 = *(undefined8 *)(lVar3 + 0x278);
        FUN_142397be0(lVar3,&local_78,&local_68,0,0,0);
      }
      else if (*(char *)((longlong)param_1 + 0xc4) == '\x01') {
        lVar3 = *(longlong *)(lVar8 + 0x168);
        local_78 = local_98;
        pfVar1 = (float *)(lVar3 + 0x280);
        local_70 = local_90;
        if (((*(float *)(lVar3 + 0x1f8) != *pfVar1) ||
            (*(float *)(lVar3 + 0x1fc) != *(float *)(lVar3 + 0x284))) ||
           (*(float *)(lVar3 + 0x200) != *(float *)(lVar3 + 0x288))) {
          local_88 = *(undefined8 *)*(undefined1 (*) [12])(lVar3 + 0x1f8);
          auVar11._12_4_ = 0;
          auVar11._0_12_ = *(undefined1 (*) [12])(lVar3 + 0x1f8);
          auVar11 = divps(auVar11,_DAT_146afc370);
          fVar14 = (float)local_88 - (float)(int)auVar11._0_4_ * fVar12;
          fVar15 = (float)((ulonglong)local_88 >> 0x20) - (float)(int)auVar11._4_4_ * fVar4;
          fVar16 = *(float *)(lVar3 + 0x200) - (float)(int)auVar11._8_4_ * fVar5;
          fVar14 = (float)(((uint)(fVar14 + fVar12) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                          (uint)(fVar14 + fVar12));
          fVar15 = (float)(((uint)(fVar15 + fVar4) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                          (uint)(fVar15 + fVar4));
          fVar16 = (float)(((uint)(fVar16 + fVar5) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                          (uint)(fVar16 + fVar5));
          uVar13 = ((uint)(fVar16 - fVar5) ^ (uint)fVar16) & -(uint)(fRam0000000146afc368 < fVar16)
                   ^ (uint)fVar16;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar13);
          *(ulonglong *)pfVar1 =
               CONCAT44(((uint)(fVar15 - fVar4) ^ (uint)fVar15) &
                        -(uint)(fRam0000000146afc364 < fVar15) ^ (uint)fVar15,
                        ((uint)(fVar14 - fVar12) ^ (uint)fVar14) & -(uint)(_DAT_146afc360 < fVar14)
                        ^ (uint)fVar14);
          *(uint *)(lVar3 + 0x288) = uVar13;
          puVar9 = (undefined8 *)FRotator::Quaternion(pfVar1,local_38);
          uVar6 = puVar9[1];
          *(undefined8 *)(lVar3 + 0x270) = *puVar9;
          *(undefined8 *)(lVar3 + 0x278) = uVar6;
        }
        local_88 = *(undefined8 *)(lVar3 + 0x270);
        uStack_80 = *(undefined8 *)(lVar3 + 0x278);
        uVar19 = 0;
        FUN_142397be0(lVar3,&local_78,&local_88,0,0,0);
        (**(code **)(*param_1 + 0x3a0))(param_1,&local_68,param_3);
        local_78 = local_68;
        local_70 = (undefined4)uStack_60;
        FUN_142399b90(*(undefined8 *)(lVar8 + 0x168),&local_78,0,0,uVar19 & 0xffffffffffffff00);
      }
      else {
        local_68 = local_58;
        uStack_60 = CONCAT44(uStack_60._4_4_,fStack_50);
        local_78 = local_98;
        local_70 = local_90;
        FUN_1423982b0(*(undefined8 *)(lVar8 + 0x168),&local_78,&local_68,0,0,0);
      }
      lVar8 = *(longlong *)(lVar8 + 0x168);
      if (0.0 < DAT_1464a97d0) {
        local_58._0_4_ = (float)*(undefined8 *)(lVar8 + 0x220);
        local_58._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x220) >> 0x20);
        fVar12 = 1.0 / (float)DAT_1464a97d0;
        fStack_50 = (float)*(undefined8 *)(lVar8 + 0x228);
        *(ulonglong *)(lVar8 + 0x240) =
             CONCAT44((local_58._4_4_ - local_48._4_4_) * fVar12,
                      ((float)local_58 - (float)local_48) * fVar12);
        *(float *)(lVar8 + 0x248) = (fStack_50 - (float)uStack_40) * fVar12;
      }
    }
  }
  return;
}



// FUNCTION 14250edf0 FUN_14250edf0 body=513 status=ok
// SIG undefined FUN_14250edf0(void)

void FUN_14250edf0(longlong param_1,float param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  
  if ((*(longlong **)(param_3 + 0x20) != (longlong *)0x0) &&
     (lVar4 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))(), lVar4 != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x20) + 0x20);
    lVar5 = AGPingUsable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar5 = *(longlong *)(lVar4 + 0x458), lVar5 != 0)) {
      if ((*(float *)(param_3 + 0x28) <= param_2 && param_2 != *(float *)(param_3 + 0x28)) &&
         ((param_4 == '\0' && (iVar6 = 0, 0 < *(int *)(param_1 + 0x78))))) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(param_1 + 0x70);
          fVar7 = *(float *)(lVar5 + lVar2);
          if ((fVar7 < param_2) && (*(float *)(param_3 + 0x28) <= fVar7)) {
            *(undefined1 *)(*(longlong *)(lVar4 + 0x458) + 0x71f) = 2;
            *(undefined4 *)(*(longlong *)(lVar4 + 0x458) + 2000) =
                 *(undefined4 *)(lVar5 + 8 + lVar2);
            *(undefined4 *)(*(longlong *)(lVar4 + 0x458) + 0x7d4) = 0;
            (**(code **)(**(longlong **)(lVar4 + 0x458) + 0x290))(*(longlong **)(lVar4 + 0x458),1,0)
            ;
            fVar7 = *(float *)(lVar5 + lVar2);
          }
          fVar7 = fVar7 + *(float *)(lVar5 + 4 + lVar2);
          if ((fVar7 < param_2) && (*(float *)(param_3 + 0x28) <= fVar7)) {
            (**(code **)(**(longlong **)(lVar4 + 0x458) + 0x290))(*(longlong **)(lVar4 + 0x458),0);
            *(undefined1 *)(*(longlong *)(lVar4 + 0x458) + 0x71f) = 2;
            *(undefined4 *)(*(longlong *)(lVar4 + 0x458) + 2000) = 0xffffffff;
            *(undefined4 *)(*(longlong *)(lVar4 + 0x458) + 0x7d4) = 0xffffffff;
          }
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + 0xc;
        } while (iVar6 < *(int *)(param_1 + 0x78));
        lVar5 = *(longlong *)(lVar4 + 0x458);
      }
      if (*(char *)(lVar5 + 0x71f) == '\x02') {
        if ((*(byte *)(lVar1 + 0x4b8) & 2) == 0) {
          iVar6 = *(int *)(lVar5 + 0x7d4) + 1;
        }
        else {
          iVar6 = *(int *)(lVar5 + 0x7d4) + -1;
        }
        *(int *)(lVar5 + 0x7d4) = iVar6;
      }
    }
    *(float *)(param_3 + 0x28) = param_2;
  }
  return;
}



// FUNCTION 14250f000 FUN_14250f000 body=142 status=ok
// SIG undefined FUN_14250f000(void)

void FUN_14250f000(longlong param_1,undefined4 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  float fVar4;
  undefined4 local_28 [8];
  
  cVar1 = FUN_142509b80(param_3);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_3 + 0x148))(param_3);
    plVar3 = (longlong *)UWorld::GetWorldSettings(uVar2,0,1);
    local_28[0] = 0;
    fVar4 = (float)FInterpCurve<float>::Eval(param_1 + 0x70,param_2,local_28);
    if (fVar4 < 0.0001) {
      fVar4 = 0.0001;
    }
    *(float *)((longlong)plVar3 + 0x5e4) = fVar4;
    (**(code **)(*plVar3 + 0x600))(plVar3);
  }
  return;
}



// FUNCTION 14250f090 FUN_14250f090 body=2645 status=ok
// SIG undefined FUN_14250f090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14250f090(longlong param_1,float param_2,longlong *param_3,char param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  uint in_stack_fffffffffffffec8;
  float local_108;
  float fStack_104;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined1 local_d8 [160];
  
  if (*(int *)(param_1 + 0x98) < 1) {
    return;
  }
  lVar14 = *(longlong *)(param_1 + 0x20);
  plVar19 = (longlong *)0x0;
  plVar5 = plVar19;
  if ((longlong *)param_3[4] != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*(longlong *)param_3[4] + 0x278))();
  }
  bVar3 = true;
  lVar6 = UInterpGroupDirector::GetPrivateStaticClass();
  bVar24 = true;
  if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
      != lVar6 + 0x88)) {
    bVar24 = false;
  }
  if ((bVar24) && (plVar5 != (longlong *)0x0)) {
    lVar6 = FUN_1429e18b0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if (bVar24) {
      if (((*(uint *)((longlong)plVar5 + 0x4cc) >> 1 & 1) == 0) ||
         (cVar4 = (**(code **)(*plVar5 + 0x768))(), cVar4 == '\0')) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if (bVar24) {
        plVar12 = (longlong *)plVar5[0xa1];
        if (plVar12 == (longlong *)0x0) {
LAB_14250f200:
          plVar12 = plVar19;
        }
        else {
          lVar6 = ULocalPlayer::GetPrivateStaticClass();
          if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar24 = false;
          }
          else {
            bVar24 = true;
          }
          if (!bVar24) goto LAB_14250f200;
        }
        uVar7 = (**(code **)(*plVar5 + 0x148))(plVar5);
        puVar8 = (undefined8 *)FUN_1428749e0(DAT_146b17150,uVar7);
        puVar2 = (undefined8 *)*puVar8;
        for (puVar15 = puVar2; puVar15 != puVar2 + *(int *)(puVar8 + 1); puVar15 = puVar15 + 1) {
          if ((longlong *)*puVar15 == plVar12) {
            if (0 < (int)((longlong)puVar15 - (longlong)puVar2 >> 3)) goto LAB_14250f24c;
            break;
          }
        }
      }
      else {
LAB_14250f24c:
        bVar3 = false;
      }
    }
  }
  fVar26 = 1.0;
  fVar25 = *(float *)(param_3 + 5);
  fVar27 = 1.0;
  local_100 = 0x3f800000;
  uVar23 = *(uint *)(param_1 + 0xa0) & 1;
  if (uVar23 == 0) {
    bVar24 = param_2 < fVar25;
  }
  else {
    bVar24 = fVar25 < param_2;
  }
  uVar28 = 0;
  if (((bVar24 || fVar25 == param_2) || (param_4 != '\0')) || (!bVar3)) {
    if (((longlong *)param_3[6] != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*(longlong *)param_3[6] + 0x568))(), cVar4 != '\0')) {
      (**(code **)(*(longlong *)param_3[6] + 0x560))();
      *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xffffffdf;
    }
    goto LAB_14250f638;
  }
  uVar1 = *(uint *)(param_1 + 0x98);
  uVar22 = (ulonglong)(int)uVar1;
  uVar16 = 0xffffffff;
  if (uVar23 == 0) {
    uVar18 = 0xffffffff;
    if (-1 < (int)(uVar1 - 1)) {
      pfVar10 = *(float **)(param_1 + 0x90);
      do {
        if (fVar25 < *pfVar10 || fVar25 == *pfVar10) break;
        uVar18 = uVar18 + 1;
        pfVar10 = pfVar10 + 6;
      } while ((int)uVar18 < *(int *)(param_1 + 0x98) + -1);
    }
    uVar17 = 0xffffffff;
    if (-1 < (int)(uVar1 - 1)) {
      pfVar10 = *(float **)(param_1 + 0x90);
      uVar17 = 0xffffffff;
      do {
        if (param_2 < *pfVar10 || param_2 == *pfVar10) break;
        uVar17 = uVar17 + 1;
        pfVar10 = pfVar10 + 6;
      } while ((int)uVar17 < *(int *)(param_1 + 0x98) + -1);
    }
  }
  else {
    uVar18 = uVar1;
    if (0 < (int)uVar1) {
      pfVar10 = (float *)(*(longlong *)(param_1 + 0x90) + (uVar22 - 1) * 0x18);
      uVar21 = uVar22;
      uVar20 = uVar22;
      do {
        uVar18 = (uint)uVar21;
        if (*pfVar10 <= fVar25) break;
        uVar18 = uVar18 - 1;
        uVar21 = (ulonglong)uVar18;
        uVar20 = uVar20 - 1;
        pfVar10 = pfVar10 + -6;
      } while (0 < (longlong)uVar20);
    }
    uVar17 = uVar1;
    if (0 < (int)uVar1) {
      pfVar10 = (float *)(*(longlong *)(param_1 + 0x90) + (uVar22 - 1) * 0x18);
      uVar21 = uVar22;
      uVar20 = uVar22;
      do {
        uVar17 = (uint)uVar21;
        if (*pfVar10 <= param_2) break;
        uVar17 = uVar17 - 1;
        uVar21 = (ulonglong)uVar17;
        uVar20 = uVar20 - 1;
        pfVar10 = pfVar10 + -6;
      } while (0 < (longlong)uVar20);
    }
  }
  if (uVar23 == 0) {
    if (-1 < (int)(uVar1 - 1)) {
      pfVar10 = *(float **)(param_1 + 0x90);
      do {
        if (param_2 < *pfVar10 || param_2 == *pfVar10) break;
        uVar16 = uVar16 + 1;
        pfVar10 = pfVar10 + 6;
      } while ((int)uVar16 < (int)(uVar1 - 1));
      if (uVar16 != 0xffffffff) goto LAB_14250f3eb;
    }
    uVar16 = 0;
  }
  else {
    uVar16 = uVar1;
    if (0 < (int)uVar1) {
      pfVar10 = (float *)(*(longlong *)(param_1 + 0x90) + (uVar22 - 1) * 0x18);
      uVar21 = uVar22;
      do {
        uVar16 = (uint)uVar22;
        if (*pfVar10 <= param_2) break;
        uVar16 = uVar16 - 1;
        uVar22 = (ulonglong)uVar16;
        uVar21 = uVar21 - 1;
        pfVar10 = pfVar10 + -6;
      } while (0 < (longlong)uVar21);
    }
    if (uVar16 == uVar1) {
      uVar16 = uVar1 - 1;
    }
  }
LAB_14250f3eb:
  lVar6 = *(longlong *)(param_1 + 0x90);
  lVar9 = (longlong)(int)uVar16;
  local_100 = 0x3f800000;
  fVar27 = *(float *)(lVar6 + 8 + lVar9 * 0x18);
  fVar26 = *(float *)(lVar6 + 4 + lVar9 * 0x18);
  local_108 = fVar26;
  fStack_104 = fVar27;
  if (0 < *(int *)(param_1 + 0x78)) {
    pfVar10 = (float *)FInterpCurve<FVector>::Eval(param_1 + 0x70,&local_f8,param_2,&local_108);
    fVar26 = fVar26 * *pfVar10;
    fVar27 = fVar27 * pfVar10[1];
  }
  if (((((*(byte *)(param_1 + 0xa0) & 0x20) != 0) ||
       (lVar11 = *(longlong *)(lVar6 + 0x10 + lVar9 * 0x18), lVar11 == 0)) ||
      ((fVar25 = *(float *)(lVar6 + lVar9 * 0x18), param_2 < fVar25 ||
       (fVar25 + *(float *)(lVar11 + 0x50) < param_2)))) ||
     (((longlong *)param_3[6] != (longlong *)0x0 &&
      (cVar4 = (**(code **)(*(longlong *)param_3[6] + 0x568))(), cVar4 != '\0')))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((uVar18 == uVar17) && (!bVar3)) goto LAB_14250f638;
  uVar23 = *(uint *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = uVar23 | 0x20;
  uVar7 = *(undefined8 *)(lVar6 + 0x10 + lVar9 * 0x18);
  if (((uVar23 & 8) != 0) && (plVar5 != (longlong *)0x0)) {
    lVar11 = FUN_1429d7ab0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    plVar12 = plVar5;
    if (!bVar3) {
      lVar11 = FUN_14291fb80();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
          lVar11 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      plVar12 = plVar19;
      if (bVar3) {
        lVar11 = FUN_14291fb80();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
            != lVar11 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        plVar12 = plVar5;
        if (!bVar3) {
          plVar12 = plVar19;
        }
        plVar12 = (longlong *)plVar12[0x91];
      }
      if (plVar12 == (longlong *)0x0) goto LAB_14250f6bc;
    }
    lVar6 = plVar12[0x2d];
    if (lVar6 == 0) {
      local_108 = (float)_DAT_1468b5d90;
      fStack_104 = (float)((ulonglong)_DAT_1468b5d90 >> 0x20);
      local_100 = DAT_1468b5d98;
    }
    else {
      local_108 = *(float *)(lVar6 + 0x220);
      fStack_104 = *(float *)(lVar6 + 0x224);
      local_100 = *(undefined4 *)(lVar6 + 0x228);
    }
    local_e8 = DAT_1468b5da0;
    local_f8 = CONCAT44(fStack_104,local_108);
    local_e0 = DAT_1468b5da8;
    local_f0 = local_100;
    FUN_142458510(plVar5,uVar7,&local_f8,&local_e8,0x3f800000,0x3f800000,0,0,0,0);
    goto LAB_14250f638;
  }
LAB_14250f6bc:
  if (((*(byte *)(param_1 + 0xa0) & 8) != 0) && (plVar5 != (longlong *)0x0)) goto LAB_14250f638;
  fVar25 = param_2 - *(float *)(lVar6 + lVar9 * 0x18);
  if ((double)fVar25 <= DAT_1464a97d0) {
    fVar25 = 0.0;
  }
  if ((longlong *)param_3[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_3[6] + 0x560))();
    if (plVar5 != (longlong *)0x0) {
      if (((*(byte *)(param_1 + 0xa0) & 0x10) == 0) || (plVar5[0x2d] == 0)) {
        (**(code **)(*(longlong *)param_3[6] + 0x418))((longlong *)param_3[6],&DAT_14653218c);
        lVar6 = plVar5[0x2d];
        if (lVar6 == 0) {
          local_f0 = DAT_1468b5d98;
          pfVar10 = (float *)&local_f8;
          local_f8 = _DAT_1468b5d90;
        }
        else {
          pfVar10 = &local_108;
          local_108 = *(float *)(lVar6 + 0x220);
          local_100 = *(undefined4 *)(lVar6 + 0x228);
          fStack_104 = *(float *)(lVar6 + 0x224);
        }
        local_e8 = *(undefined8 *)pfVar10;
        local_e0 = pfVar10[2];
        FUN_1423990b0(param_3[6],&local_e8,0,0,in_stack_fffffffffffffec8 & 0xffffff00);
      }
      else {
        local_108 = 0.0;
        fStack_104 = 0.0;
        FUN_142382f60(param_3[6],plVar5[0x2d],&DAT_146af29ec,0);
      }
    }
    FUN_142351620(param_3[6],uVar7);
    FUN_142351eb0(param_3[6],fVar26);
    FUN_142351310(param_3[6],fVar27);
    if ((*(byte *)(param_1 + 0xa0) & 4) == 0) {
      uVar28 = 0x461c4000;
    }
    *(undefined4 *)(param_3[6] + 800) = uVar28;
    (**(code **)(*(longlong *)param_3[6] + 0x558))((longlong *)param_3[6],fVar25);
    goto LAB_14250f638;
  }
  uVar13 = (**(code **)(*param_3 + 0x148))(param_3);
  FAudioDevice::FCreateComponentParams::FCreateComponentParams(local_d8,uVar13,plVar5);
  lVar6 = FUN_1422c5640(uVar7,local_d8);
  param_3[6] = lVar6;
  if (lVar6 == 0) goto LAB_14250f638;
  if (plVar5 == (longlong *)0x0) {
LAB_14250f96a:
    *(byte *)(param_3[6] + 0x2f0) = *(byte *)(param_3[6] + 0x2f0) & 0xf7;
  }
  else {
    lVar6 = UInterpGroupDirector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14250f96a;
    if (((*(byte *)(param_1 + 0xa0) & 0x10) == 0) || (plVar5[0x2d] == 0)) {
      lVar6 = plVar5[0x2d];
      if (lVar6 == 0) {
        local_f0 = DAT_1468b5d98;
        pfVar10 = (float *)&local_f8;
        local_f8 = _DAT_1468b5d90;
      }
      else {
        pfVar10 = &local_108;
        local_108 = *(float *)(lVar6 + 0x220);
        local_100 = *(undefined4 *)(lVar6 + 0x228);
        fStack_104 = *(float *)(lVar6 + 0x224);
      }
      local_e8 = *(undefined8 *)pfVar10;
      local_e0 = pfVar10[2];
      FUN_1423990b0(param_3[6],&local_e8,0,0,in_stack_fffffffffffffec8 & 0xffffff00);
    }
    else {
      FUN_142382f60(param_3[6],plVar5[0x2d],&DAT_146af29ec,0);
    }
  }
  FUN_142351eb0(param_3[6],fVar26);
  FUN_142351310(param_3[6],fVar27);
  if ((*(byte *)(param_1 + 0xa0) & 4) == 0) {
    uVar28 = 0x461c4000;
  }
  *(undefined4 *)(param_3[6] + 800) = uVar28;
  (**(code **)(*(longlong *)param_3[6] + 0x558))((longlong *)param_3[6],fVar25);
LAB_14250f638:
  lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x20) + 0x58);
  if ((lVar14 != 0) && (plVar5 = plVar19, 0 < *(int *)(lVar14 + 0x38))) {
    do {
      lVar6 = *(longlong *)((longlong)plVar19 + *(longlong *)(lVar14 + 0x30));
      if (lVar6 != 0) {
        lVar9 = UInterpTrackAudioMaster::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && ((*(uint *)(lVar6 + 0x68) >> 2 & 1) == 0)) {
          local_108 = 1.0;
          fStack_104 = 1.0;
          local_100 = 0;
          pfVar10 = (float *)FInterpCurve<FVector>::Eval(lVar6 + 0x70,&local_f8,param_2,&local_108);
          local_108 = 1.0;
          fStack_104 = 1.0;
          local_100 = 0;
          fVar26 = fVar26 * *pfVar10;
          lVar14 = FInterpCurve<FVector>::Eval(lVar6 + 0x70,&local_f8,param_2,&local_108);
          fVar27 = fVar27 * *(float *)(lVar14 + 4);
          break;
        }
      }
      uVar23 = (int)plVar5 + 1;
      plVar19 = plVar19 + 1;
      plVar5 = (longlong *)(ulonglong)uVar23;
    } while ((int)uVar23 < *(int *)(lVar14 + 0x38));
  }
  if (param_3[6] != 0) {
    FUN_142351eb0(param_3[6],fVar26);
    FUN_142351310(param_3[6],fVar27);
  }
  *(float *)(param_3 + 5) = param_2;
  return;
}



// FUNCTION 14250faf0 FUN_14250faf0 body=1147 status=ok
// SIG undefined FUN_14250faf0(void)

void FUN_14250faf0(longlong param_1,float param_2,longlong param_3,char param_4)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  longlong local_res18;
  char local_res20;
  undefined8 local_78 [8];
  
  if (*(longlong **)(param_3 + 0x20) == (longlong *)0x0) {
    return;
  }
  local_res20 = param_4;
  plVar6 = (longlong *)(**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))();
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x20) + 0x20);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
  local_res18 = lVar9;
  lVar7 = AGPingUsable::GetPrivateStaticClass();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar5 = *(uint *)(param_1 + 0x80);
  plVar11 = (longlong *)0x0;
  plVar15 = plVar11;
  if ((bVar3) && (plVar15 = plVar6, (uVar5 & 1) != 0)) {
    if (((*(float *)(param_3 + 0x2c) < param_2) && (param_4 == '\0')) &&
       (0 < *(int *)(param_1 + 0x78))) {
      lVar9 = (longlong)*(int *)(param_1 + 0x78) + -1;
      pfVar10 = (float *)(*(longlong *)(param_1 + 0x70) + lVar9 * 8);
      do {
        if (*pfVar10 < param_2) {
          if (*(char *)(pfVar10 + 1) == '\x01') {
            FUN_1425fcab0(plVar6[0x8b],(byte)(uVar5 >> 1) & 1);
          }
          else if (*(char *)(pfVar10 + 1) == '\x03') {
            if (*(float *)(param_3 + 0x2c) <= *pfVar10) {
              (**(code **)(*(longlong *)plVar6[0x8b] + 0x290))
                        ((longlong *)plVar6[0x8b],CONCAT71((int7)((ulonglong)pfVar10 >> 8),1),
                         CONCAT31((uint3)(uVar5 >> 9),(char)(uVar5 >> 1)) & 0xffffff01);
            }
          }
          else {
            FUN_142600fa0(plVar6[0x8b]);
          }
          break;
        }
        pfVar10 = pfVar10 + -2;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
    goto LAB_14250ff3e;
  }
  uVar2 = *(uint *)(lVar9 + 0x4b8);
  if ((((byte)uVar2 & 3) == 3) ||
     (((local_res20 != '\0' && ((uVar2 & 1) == 0)) && (param_2 < *(float *)(param_3 + 0x2c))))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  bVar16 = true;
  if (local_res20 == '\0') {
LAB_14250fcc8:
    if (!bVar3) goto LAB_14250fccd;
    fVar18 = *(float *)(param_3 + 0x2c);
    fVar17 = param_2;
    if (param_2 == 0.0) {
      fVar17 = param_2 - 0.0001;
    }
    uVar5 = uVar5 & 8;
  }
  else {
    if (((uVar5 & 0x10) == 0) || (bVar3)) {
      bVar16 = false;
      goto LAB_14250fcc8;
    }
LAB_14250fccd:
    fVar17 = *(float *)(param_3 + 0x2c);
    fVar18 = param_2;
    if (param_2 == *(float *)(lVar8 + 0x28)) {
      fVar18 = param_2 + 0.0001;
    }
    uVar5 = uVar5 & 4;
  }
  if (((uVar5 != 0) && (bVar16)) &&
     (iVar12 = -1, plVar14 = plVar11, cVar4 = local_res20, 0 < *(int *)(param_1 + 0x78))) {
    do {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x70) + (longlong)plVar11);
      iVar13 = (int)plVar14;
      if (bVar3) {
        if ((fVar17 < fVar1) && (fVar1 <= fVar18)) goto LAB_14250fd64;
      }
      else if ((fVar17 <= fVar1) && (fVar1 < fVar18)) {
LAB_14250fd64:
        if ((*(char *)(*(longlong *)(param_1 + 0x70) + 4 + (longlong)plVar11) == '\x03') &&
           (plVar15 != (longlong *)0x0)) {
          if (cVar4 == '\0') {
            FUN_1425fcab0(plVar15[0x8b],
                          CONCAT31((uint3)(*(uint *)(param_1 + 0x80) >> 9),
                                   (char)(*(uint *)(param_1 + 0x80) >> 1)) & 0xffffff01);
            cVar4 = local_res20;
          }
        }
        else if (iVar12 == -1) {
LAB_14250fdab:
          iVar12 = iVar13;
        }
        else if (bVar3) {
          if (iVar13 < iVar12) goto LAB_14250fdab;
        }
        else if (iVar12 < iVar13) goto LAB_14250fdab;
      }
      plVar11 = plVar11 + 1;
      plVar14 = (longlong *)(ulonglong)(iVar13 + 1U);
    } while ((int)(iVar13 + 1U) < *(int *)(param_1 + 0x78));
    if (iVar12 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x70);
      lVar7 = (longlong)iVar12;
      lVar8 = FUN_1429a6e30();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      plVar11 = (longlong *)0x0;
      if (bVar16) {
        plVar11 = plVar6;
      }
      if (plVar15 == (longlong *)0x0) {
        if (plVar11 == (longlong *)0x0) {
          FName::FName(local_78,L"OnInterpToggle",1);
          lVar8 = UObject::FindFunction(plVar6,local_78[0]);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x8c) == '\x01')) {
            uVar5 = (uint)((*(char *)(lVar9 + 4 + lVar7 * 8) - 1U & 0xfd) == 0);
            if (bVar3) {
              uVar5 = (uint)(uVar5 == 0);
            }
            local_res18 = CONCAT44(local_res18._4_4_,uVar5);
            (**(code **)(*plVar6 + 0x208))(plVar6,lVar8,&local_res18);
          }
        }
        else {
          cVar4 = FUN_14254a3e0(plVar11);
          if (cVar4 != '\0') {
            cVar4 = *(char *)(lVar9 + 4 + lVar7 * 8);
            bVar16 = cVar4 == '\x01';
            if (bVar3) {
              bVar16 = cVar4 != '\x01';
            }
            FUN_142398ec0(plVar11[0x8b],bVar16,1);
          }
        }
      }
      else {
        cVar4 = *(char *)(lVar9 + 4 + lVar7 * 8);
        bVar16 = cVar4 == '\x01';
        if (bVar3) {
          bVar16 = cVar4 != '\x01';
        }
        (**(code **)(*(longlong *)plVar15[0x8b] + 0x290))
                  ((longlong *)plVar15[0x8b],bVar16,
                   CONCAT31((uint3)(*(uint *)(param_1 + 0x80) >> 9),
                            (char)(*(uint *)(param_1 + 0x80) >> 1)) & 0xffffff01);
        *(uint *)(plVar15 + 0x8c) = *(uint *)(plVar15 + 0x8c) & 0xfffffffb;
        *(uint *)(plVar15 + 0x8c) = *(uint *)(plVar15 + 0x8c) | (uint)bVar16 << 2;
        if ((*(byte *)(local_res18 + 0x474) & 0x20) == 0) {
          (**(code **)(*plVar15 + 0x5f8))(plVar15);
        }
      }
    }
  }
LAB_14250ff3e:
  *(float *)(param_3 + 0x2c) = param_2;
  return;
}



// FUNCTION 14250ff70 UpdateTrack body=284 status=ok
// SIG undefined UpdateTrack(void)

void UInterpTrackVectorMaterialParam::UpdateTrack
               (longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_48 [12];
  undefined4 local_3c;
  
  if (param_3 != 0) {
    lVar3 = UInterpTrackInstVectorMaterialParam::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FInterpCurve<FVector>::Eval(param_1 + 0x70,local_48,param_2,&DAT_1468b5d90);
      iVar4 = 0;
      if (0 < *(int *)(param_3 + 0x30)) {
        lVar3 = 0;
        do {
          lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_3 + 0x28));
          if (lVar1 != 0) {
            local_3c = 0x3f800000;
            FUN_1425a2be0(lVar1,*(undefined8 *)(param_1 + 0xa0),local_48);
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 8;
        } while (iVar4 < *(int *)(param_3 + 0x30));
      }
    }
  }
  return;
}



// FUNCTION 142510090 FUN_142510090 body=141 status=ok
// SIG undefined FUN_142510090(void)

void FUN_142510090(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined4 local_20;
  
  if (((*(longlong **)(param_3 + 0x20) != (longlong *)0x0) &&
      (lVar3 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))(), lVar3 != 0)) &&
     (puVar1 = *(undefined8 **)(param_3 + 0x38), puVar1 != (undefined8 *)0x0)) {
    FInterpCurve<FVector>::Eval(param_1 + 0x70,&local_28,param_2,puVar1);
    *puVar1 = local_28;
    *(undefined4 *)(puVar1 + 1) = local_20;
    plVar2 = *(longlong **)(param_3 + 0x30);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xb8))(plVar2,*(undefined8 *)(param_3 + 0x28));
    }
  }
  return;
}



// FUNCTION 142510120 FUN_142510120 body=555 status=ok
// SIG undefined FUN_142510120(void)

void FUN_142510120(longlong param_1,float param_2,longlong param_3,char param_4)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  byte bVar13;
  float fVar14;
  float fVar15;
  
  if (*(longlong **)(param_3 + 0x20) == (longlong *)0x0) {
    return;
  }
  plVar8 = (longlong *)(**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))();
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x80);
  lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x20) + 0x20);
  if ((((byte)*(uint *)(lVar4 + 0x4b8) & 3) == 3) ||
     (((param_4 != '\0' && ((*(uint *)(lVar4 + 0x4b8) & 1) == 0)) &&
      (param_2 < *(float *)(param_3 + 0x2c))))) {
    bVar13 = 1;
  }
  else {
    bVar13 = 0;
  }
  bVar6 = param_4 == '\0' || (uVar3 >> 2 & 1) != 0;
  iVar11 = 0;
  if (bVar13 == 0) {
    fVar14 = param_2;
    if (param_2 == *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x28)) {
      fVar14 = param_2 + 0.0001;
    }
    bVar6 = (uVar3 & 1) != 0 && bVar6;
    fVar15 = *(float *)(param_3 + 0x2c);
  }
  else {
    fVar15 = param_2;
    if (param_2 == 0.0) {
      fVar15 = param_2 - 0.0001;
    }
    fVar14 = *(float *)(param_3 + 0x2c);
    if ((uVar3 & 2) == 0) goto LAB_142510310;
  }
  if ((bVar6) && (iVar9 = *(int *)(param_1 + 0x78), 0 < iVar9)) {
    do {
      iVar7 = iVar11;
      if (bVar13 != 0) {
        iVar7 = (iVar9 - iVar11) + -1;
      }
      lVar5 = *(longlong *)(param_1 + 0x70);
      lVar12 = (longlong)iVar7;
      fVar1 = *(float *)(lVar5 + lVar12 * 8);
      if (bVar13 == 0) {
        if (fVar15 <= fVar1) {
LAB_14251027e:
          if (fVar1 <= fVar14) {
            cVar2 = *(char *)(lVar5 + 5 + lVar12 * 8);
            if (cVar2 == '\x01') {
              if ((*(byte *)(lVar4 + 0x490) & 1) != 0) {
LAB_1425102a5:
                cVar2 = *(char *)(lVar5 + 4 + lVar12 * 8);
                bVar10 = bVar13;
                if (cVar2 == '\x01') {
LAB_1425102d1:
                  (**(code **)(*plVar8 + 0x310))(plVar8,bVar10);
                }
                else {
                  if (cVar2 == '\0') {
                    bVar10 = bVar13 ^ 1;
                    goto LAB_1425102d1;
                  }
                  if (cVar2 == '\x02') {
                    bVar10 = ~*(byte *)(plVar8 + 0x10) & 1;
                    goto LAB_1425102d1;
                  }
                }
                if (((*(byte *)(lVar4 + 0x474) & 0x20) == 0) &&
                   (*(char *)(lVar5 + 5 + lVar12 * 8) == '\0')) {
                  (**(code **)(*plVar8 + 0x5f8))(plVar8);
                }
              }
            }
            else if ((cVar2 != '\x02') || ((*(byte *)(lVar4 + 0x490) & 1) == 0)) goto LAB_1425102a5;
          }
        }
      }
      else if (fVar15 < fVar1) goto LAB_14251027e;
      iVar9 = *(int *)(param_1 + 0x78);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar9);
  }
LAB_142510310:
  *(float *)(param_3 + 0x2c) = param_2;
  return;
}



// FUNCTION 142510350 FUN_142510350 body=176 status=ok
// SIG undefined FUN_142510350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142510350(undefined4 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar5;
  undefined1 auStack_448 [32];
  char local_428 [255];
  undefined1 local_329;
  ulonglong local_28;
  longlong lVar4;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  TCString<wchar_t>::SprintfImpl
            (local_428,"#?RADIANCE\nFORMAT=32-bit_rle_rgbe\n\n-Y %d +X %d\n",param_1[1],*param_1);
  local_329 = 0;
  lVar4 = -1;
  do {
    lVar3 = lVar4 + 1;
    lVar1 = lVar4 + 1;
    lVar4 = lVar3;
  } while (local_428[lVar1] != '\0');
  iVar2 = (int)lVar3;
  iVar5 = 0x100;
  if (iVar2 < 0x101) {
    iVar5 = iVar2;
  }
  (**(code **)(*param_3 + 0x50))(param_3,local_428,(longlong)iVar5);
  if (param_1[2] == 10) {
    FUN_1424dd850();
  }
  else {
    FUN_1424dd130(param_1,param_3,*param_2);
  }
  return;
}



// FUNCTION 142510400 ComputeConvexHull<FDefaultAllocator> body=849 status=ok
// SIG undefined ComputeConvexHull<FDefaultAllocator>(void)

void ConvexHull2D::ComputeConvexHull<FDefaultAllocator>(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_a8;
  float local_98;
  float fStack_84;
  
  iVar11 = (int)param_1[1];
  if (iVar11 != 0) {
    iVar17 = 1;
    iVar10 = 0;
    iVar9 = 0;
    if (1 < iVar11) {
      lVar18 = *param_1;
      lVar14 = 0;
      lVar12 = 0;
      lVar16 = 1;
      iVar19 = 0;
      iVar13 = 0;
      do {
        fVar20 = *(float *)(lVar18 + lVar16 * 0xc);
        pfVar1 = (float *)(lVar18 + lVar12 * 0xc);
        if (*pfVar1 <= fVar20) {
          if ((fVar20 != *pfVar1) ||
             (*(float *)(lVar18 + 4 + lVar12 * 0xc) <= *(float *)(lVar18 + 4 + lVar16 * 0xc))) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
        }
        else {
          bVar6 = true;
        }
        iVar9 = iVar17;
        lVar5 = lVar16;
        if (!bVar6) {
          iVar9 = iVar19;
          lVar5 = lVar12;
        }
        lVar12 = lVar5;
        fVar21 = *(float *)(lVar18 + lVar14 * 0xc);
        if (fVar20 <= fVar21) {
          if ((fVar20 < fVar21) ||
             (*(float *)(lVar18 + 4 + lVar16 * 0xc) <= *(float *)(lVar18 + 4 + lVar14 * 0xc))) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
        }
        else {
          bVar6 = true;
        }
        iVar10 = iVar17;
        lVar5 = lVar16;
        if (!bVar6) {
          iVar10 = iVar13;
          lVar5 = lVar14;
        }
        lVar14 = lVar5;
        iVar17 = iVar17 + 1;
        lVar16 = lVar16 + 1;
        iVar19 = iVar9;
        iVar13 = iVar10;
      } while (iVar17 < iVar11);
    }
    lVar18 = param_2[1];
    iVar11 = (int)lVar18 + 1;
    *(int *)(param_2 + 1) = iVar11;
    if (*(int *)((longlong)param_2 + 0xc) < iVar11) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
    }
    *(int *)(*param_2 + (longlong)(int)lVar18 * 4) = iVar9;
    if (iVar9 != iVar10) {
      iVar11 = (int)param_1[1];
      bVar6 = true;
      if ((int)param_2[1] <= iVar11) {
        lVar18 = (longlong)iVar10;
        iVar17 = iVar9;
        iVar19 = iVar10;
        do {
          iVar15 = 0;
          lVar12 = 0;
          iVar13 = iVar19;
          if (0 < iVar11) {
            lVar14 = lVar18;
            do {
              lVar16 = lVar14;
              iVar7 = iVar13;
              if ((lVar12 != lVar14) && (lVar12 != iVar17)) {
                lVar5 = *param_1;
                uVar2 = *(undefined8 *)(lVar5 + (longlong)iVar17 * 0xc);
                uVar3 = *(undefined8 *)(lVar5 + lVar14 * 0xc);
                fVar21 = (float)((ulonglong)uVar2 >> 0x20);
                uVar4 = *(undefined8 *)(lVar5 + lVar12 * 0xc);
                fVar20 = (float)((ulonglong)uVar4 >> 0x20);
                local_98 = (float)uVar4;
                fVar22 = (float)uVar3;
                local_a8 = (float)uVar2;
                fStack_84 = (float)((ulonglong)uVar3 >> 0x20);
                fVar21 = (fVar20 - fVar21) * (fVar22 - local_a8) -
                         (local_98 - local_a8) * (fStack_84 - fVar21);
                if (fVar21 < -0.001) {
LAB_14251066b:
                  lVar16 = lVar12;
                  iVar7 = iVar15;
                }
                else if (fVar21 < 0.001) {
                  if (bVar6) {
                    if (local_98 <= fVar22) {
                      if ((local_98 < fVar22) || (fVar20 <= fStack_84)) {
                        bVar8 = false;
                      }
                      else {
                        bVar8 = true;
                      }
                    }
                    else {
                      bVar8 = true;
                    }
                    lVar16 = lVar12;
                    iVar7 = iVar15;
                    if (!bVar8) {
                      lVar16 = lVar14;
                      iVar7 = iVar13;
                    }
                  }
                  else if ((local_98 < fVar22) || ((local_98 <= fVar22 && (fVar20 < fStack_84))))
                  goto LAB_14251066b;
                }
              }
              iVar13 = iVar7;
              iVar15 = iVar15 + 1;
              lVar12 = lVar12 + 1;
              lVar14 = lVar16;
            } while (iVar15 < iVar11);
          }
          lVar12 = (longlong)iVar9;
          if (iVar13 != iVar10) {
            lVar12 = lVar18;
          }
          iVar15 = iVar9;
          bVar8 = false;
          if (iVar13 != iVar10) {
            iVar15 = iVar19;
            bVar8 = bVar6;
          }
          bVar6 = bVar8;
          if (iVar13 == iVar9) {
            return;
          }
          lVar18 = param_2[1];
          iVar11 = (int)lVar18 + 1;
          *(int *)(param_2 + 1) = iVar11;
          if (*(int *)((longlong)param_2 + 0xc) < iVar11) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(int *)(*param_2 + (longlong)(int)lVar18 * 4) = iVar13;
          iVar11 = (int)param_1[1];
          lVar18 = lVar12;
          iVar17 = iVar13;
          iVar19 = iVar15;
        } while ((int)param_2[1] <= iVar11);
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_2,0);
      }
    }
  }
  return;
}



// FUNCTION 142510760 FUN_142510760 body=577 status=ok
// SIG undefined FUN_142510760(void)

int * FUN_142510760(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint *_Src;
  void *_Dst;
  bool local_res8;
  int local_res10 [2];
  uint local_res20;
  uint local_res24;
  
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
    iVar5 = *(int *)((longlong)iVar9 * 0x20 + 4 + *param_1);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar9;
  local_res8 = false;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar9 & 0x1f);
  puVar3 = (uint *)*param_3;
  _Src = (uint *)((longlong)iVar9 * 0x20 + *param_1);
  *_Src = *puVar3;
  _Src[1] = puVar3[1];
  _Src[2] = 0;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = 0;
  _Src[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res20 = *_Src;
    local_res24 = _Src[1];
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,&local_res20);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x20 + *param_1);
      plVar8 = *(longlong **)((longlong)_Dst + 0x10);
      iVar9 = local_res10[0];
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar9 = local_res10[0];
          if (iVar4 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
            iVar9 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar9;
      goto LAB_142510978;
    }
  }
  cVar7 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    uVar10 = (_Src[1] ^ *_Src) & (int)param_1[9] - 1U;
    _Src[7] = uVar10;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar8 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_142510978:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1425109b0 FUN_1425109b0 body=687 status=ok
// SIG undefined FUN_1425109b0(void)

int * FUN_1425109b0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint *puVar13;
  uint uVar14;
  void *_Dst;
  bool bVar15;
  int local_res10 [2];
  undefined8 *local_res18;
  undefined1 *local_res20;
  uint local_68;
  uint local_64;
  uint *local_60;
  uint local_58;
  uint local_54;
  
  uVar12 = 0xffffffff;
  local_res20 = param_4;
  local_res18 = param_3;
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
    iVar5 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  bVar15 = false;
  *puVar3 = *puVar3 | 1 << ((byte)iVar11 & 0x1f);
  puVar13 = (uint *)((longlong)iVar11 * 0x20 + *param_1);
  puVar3 = (uint *)*local_res18;
  *puVar13 = *puVar3;
  puVar13[1] = puVar3[1];
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[6] = 0xffffffff;
  local_60 = puVar13;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_68 = *puVar13;
    local_64 = puVar13[1];
    local_58 = local_68;
    local_54 = local_64;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,&local_68);
    bVar15 = local_res10[0] != -1;
    if (bVar15) {
      _Dst = (void *)((longlong)local_res10[0] * 0x20 + *param_1);
      plVar9 = *(longlong **)((longlong)_Dst + 0x10);
      iVar11 = local_res10[0];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar11 = local_res10[0];
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
            iVar11 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_60,0x18);
      iVar4 = *param_2;
      bVar6 = (byte)iVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar4;
      }
      puVar10 = (undefined4 *)((longlong)iVar4 * 0x20 + *param_1);
      *puVar10 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar10[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar4;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_142510c43;
    }
  }
  cVar8 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  local_res20 = param_4;
  if (cVar8 == '\0') {
    uVar14 = (puVar13[1] ^ *puVar13) & (int)param_1[9] - 1U;
    puVar13[7] = uVar14;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    puVar13[6] = *(uint *)((longlong)plVar9 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         *param_2;
  }
LAB_142510c43:
  if (local_res20 != (undefined1 *)0x0) {
    *local_res20 = bVar15;
  }
  return param_2;
}



// FUNCTION 142510c60 FUN_142510c60 body=139 status=ok
// SIG undefined FUN_142510c60(void)

longlong FUN_142510c60(longlong param_1,longlong param_2)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (((int)param_2 != 0) || ((int)((ulonglong)param_2 >> 0x20) != 0)) {
    if (param_1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_1 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_1;
    FUN_14252c680(&local_28);
    while (local_20 != 0) {
      if (*(longlong *)(local_20 + 0x18) == param_2) {
        return local_20;
      }
      local_20 = *(longlong *)(local_20 + 0x28);
      FUN_14252c680(&local_28);
    }
  }
  return 0;
}



// FUNCTION 142510cf0 FUN_142510cf0 body=139 status=ok
// SIG undefined FUN_142510cf0(void)

longlong FUN_142510cf0(longlong param_1,longlong param_2)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (((int)param_2 != 0) || ((int)((ulonglong)param_2 >> 0x20) != 0)) {
    if (param_1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_1 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_1;
    FUN_14252c760(&local_28);
    while (local_20 != 0) {
      if (*(longlong *)(local_20 + 0x18) == param_2) {
        return local_20;
      }
      local_20 = *(longlong *)(local_20 + 0x28);
      FUN_14252c760(&local_28);
    }
  }
  return 0;
}



// FUNCTION 142510d80 FUN_142510d80 body=139 status=ok
// SIG undefined FUN_142510d80(void)

longlong FUN_142510d80(longlong param_1,longlong param_2)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (((int)param_2 != 0) || ((int)((ulonglong)param_2 >> 0x20) != 0)) {
    if (param_1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_1 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_1;
    FUN_14252c920(&local_28);
    while (local_20 != 0) {
      if (*(longlong *)(local_20 + 0x18) == param_2) {
        return local_20;
      }
      local_20 = *(longlong *)(local_20 + 0x28);
      FUN_14252c920(&local_28);
    }
  }
  return 0;
}



// FUNCTION 142510e10 FUN_142510e10 body=69 status=ok
// SIG undefined FUN_142510e10(void)

ulonglong FUN_142510e10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UVoipListenerSynthComponent::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142510e60 Sort<AActor_*,FLevelSortUtils::FDepthSort> body=1058 status=ok
// SIG undefined Sort<AActor_*,FLevelSortUtils::FDepthSort>(void)

void TMergeSort<TRotationInPlaceMerge<TJugglingRotation<FEuclidDivisionGCD>_>,2>::
     Sort<AActor_*,FLevelSortUtils::FDepthSort>(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  int local_res20;
  int local_90;
  int local_8c;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  
  uVar12 = (ulonglong)(int)param_2;
  uVar8 = uVar12;
  local_58 = uVar12;
  if (0 < (int)param_2) {
    lVar10 = 0;
    iVar13 = 1;
    do {
      if (iVar13 < (int)uVar8) {
        uVar11 = *(undefined8 *)(param_1 + lVar10 * 8);
        uVar2 = *(undefined8 *)(param_1 + 8 + lVar10 * 8);
        cVar5 = FLevelSortUtils::FDepthSort::operator()(param_3,uVar2,uVar11);
        if (cVar5 != '\0') {
          *(undefined8 *)(param_1 + lVar10 * 8) = uVar2;
          *(undefined8 *)(param_1 + 8 + lVar10 * 8) = uVar11;
        }
        uVar8 = (ulonglong)param_2;
      }
      iVar13 = iVar13 + 2;
      lVar10 = lVar10 + 2;
    } while (lVar10 < (longlong)uVar12);
  }
  local_8c = 2;
  if (2 < (int)uVar8) {
    do {
      local_70 = local_8c * 2;
      local_90 = 0;
      local_6c = local_8c * 2;
      local_68 = 0;
      lVar10 = (longlong)local_8c * 2;
      lVar15 = (longlong)local_8c << 4;
      lVar19 = param_1;
      local_60 = lVar15;
      local_50 = lVar10;
      iVar13 = local_70;
      iVar14 = local_6c;
      do {
        iVar6 = (int)uVar8 - local_90;
        if (iVar13 <= iVar6) {
          iVar6 = iVar13;
        }
        local_res20 = 0;
        iVar18 = local_8c;
        if (0 < local_8c) {
          do {
            if (iVar6 <= iVar18) break;
            plVar3 = (longlong *)*param_3;
            lVar10 = 0;
            if (iVar18 - local_res20 != 0) {
              lVar15 = *(longlong *)(lVar19 + (longlong)iVar18 * 8);
              uVar8 = (longlong)(iVar18 - local_res20);
              do {
                uVar12 = uVar8 >> 1;
                lVar4 = *(longlong *)(lVar19 + (uVar12 + lVar10 + (longlong)local_res20) * 8);
                if (lVar15 == 0) {
                  iVar13 = 0x7fffffff;
                }
                else {
                  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  ::FindId(plVar3,&local_80,lVar15);
                  if ((local_80 == -1) || (lVar1 = *plVar3 + (longlong)local_80 * 0x18, lVar1 == 0))
                  {
                    iVar13 = 0;
                  }
                  else {
                    iVar13 = *(int *)(lVar1 + 8);
                  }
                }
                if (lVar4 == 0) {
                  iVar14 = 0x7fffffff;
                }
                else {
                  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  ::FindId(plVar3,&local_7c,lVar4);
                  if ((local_7c == -1) || (lVar4 = *plVar3 + (longlong)local_7c * 0x18, lVar4 == 0))
                  {
                    iVar14 = 0;
                  }
                  else {
                    iVar14 = *(int *)(lVar4 + 8);
                  }
                }
                if (iVar14 <= iVar13) {
                  lVar10 = (ulonglong)((uint)uVar8 & 1) + uVar12 + lVar10;
                }
                uVar8 = uVar12;
              } while (uVar12 != 0);
            }
            local_res20 = local_res20 + (int)lVar10;
            if (iVar18 <= local_res20) break;
            uVar8 = 0;
            if (iVar6 - iVar18 != 0) {
              lVar10 = *(longlong *)(lVar19 + (longlong)local_res20 * 8);
              uVar12 = (longlong)(iVar6 - iVar18);
              do {
                uVar20 = uVar12 >> 1;
                if (*(longlong *)(lVar19 + (uVar20 + uVar8 + (longlong)iVar18) * 8) == 0) {
                  iVar13 = 0x7fffffff;
                }
                else {
                  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  ::FindId(plVar3,&local_78);
                  if ((local_78 == -1) ||
                     (lVar15 = *plVar3 + (longlong)local_78 * 0x18, lVar15 == 0)) {
                    iVar13 = 0;
                  }
                  else {
                    iVar13 = *(int *)(lVar15 + 8);
                  }
                }
                if (lVar10 == 0) {
                  iVar14 = 0x7fffffff;
                }
                else {
                  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  ::FindId(plVar3,&local_74,lVar10);
                  if ((local_74 == -1) ||
                     (lVar15 = *plVar3 + (longlong)local_74 * 0x18, lVar15 == 0)) {
                    iVar14 = 0;
                  }
                  else {
                    iVar14 = *(int *)(lVar15 + 8);
                  }
                }
                if (iVar13 < iVar14) {
                  uVar8 = (ulonglong)((uint)uVar12 & 1) + uVar20 + uVar8;
                }
                uVar12 = uVar20;
              } while (uVar20 != 0);
            }
            iVar13 = (int)uVar8;
            if (iVar13 != 0) {
              uVar8 = uVar8 & 0xffffffff;
              iVar17 = (iVar13 - local_res20) + iVar18;
              iVar14 = iVar17;
              do {
                iVar7 = (int)uVar8;
                uVar9 = iVar14 % iVar7;
                uVar8 = (ulonglong)uVar9;
                iVar14 = iVar7;
              } while (uVar9 != 0);
              uVar8 = 0;
              if (0 < iVar7) {
                puVar16 = (undefined8 *)((longlong)local_res20 * 8 + lVar19);
                do {
                  uVar11 = *puVar16;
                  iVar14 = (int)uVar8;
                  uVar12 = (longlong)iVar17 / (longlong)iVar7 & 0xffffffff;
                  if (0 < (int)((longlong)iVar17 / (longlong)iVar7)) {
                    do {
                      uVar20 = (longlong)((int)uVar8 + iVar13) % (longlong)iVar17;
                      uVar8 = uVar20 & 0xffffffff;
                      lVar10 = (longlong)((int)uVar20 + local_res20);
                      uVar2 = *(undefined8 *)(lVar19 + lVar10 * 8);
                      *(undefined8 *)(lVar19 + lVar10 * 8) = uVar11;
                      uVar12 = uVar12 - 1;
                      uVar11 = uVar2;
                    } while (uVar12 != 0);
                  }
                  uVar9 = iVar14 + 1;
                  uVar8 = (ulonglong)uVar9;
                  puVar16 = puVar16 + 1;
                } while ((int)uVar9 < iVar7);
              }
            }
            local_res20 = local_res20 + 1 + iVar13;
            iVar18 = iVar18 + iVar13;
          } while (local_res20 < iVar18);
          uVar8 = (ulonglong)param_2;
          lVar10 = local_50;
          lVar15 = local_60;
          uVar12 = local_58;
          iVar13 = local_70;
          iVar14 = local_6c;
        }
        local_90 = local_90 + iVar14;
        local_68 = local_68 + lVar10;
        lVar19 = lVar19 + lVar15;
      } while (local_68 < (longlong)uVar12);
      local_8c = iVar13;
    } while (iVar13 < (int)uVar8);
  }
  return;
}



// FUNCTION 142511290 FUN_142511290 body=33 status=ok
// SIG undefined FUN_142511290(void)

undefined8 * FUN_142511290(undefined8 *param_1)

{
  FUN_1426d3840();
  *param_1 = &PTR__scalar_deleting_destructor__1450e7de8;
  return param_1;
}



// FUNCTION 1425112c0 FBufferArchive body=149 status=ok
// SIG undefined FBufferArchive(void)

undefined8 *
FBufferArchive::FBufferArchive(undefined8 *param_1,undefined1 param_2,undefined8 param_3)

{
  FArchive::FArchive();
  param_1[0x13] = param_1 + 0x15;
  *param_1 = &PTR_FUN_143f4a100;
  param_1[0x12] = 0;
  param_1[0x14] = param_3;
  FArchive::SetIsSaving(param_1,1);
  FArchive::SetIsPersistent(param_1,param_2);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14415b438;
  return param_1;
}



// FUNCTION 142511360 FLegacyScreenPercentageDriver body=38 status=ok
// SIG undefined FLegacyScreenPercentageDriver(void)

undefined8 *
FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
          undefined4 param_5)

{
  *param_1 = &PTR_FUN_1450e89a0;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_5;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 3) = param_4;
  return param_1;
}



// FUNCTION 142511390 FLevelSimplificationDetails body=95 status=ok
// SIG undefined FLevelSimplificationDetails(void)

undefined1 * FLevelSimplificationDetails::FLevelSimplificationDetails(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x428c0000;
  FUN_142429940(param_1 + 8);
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 7;
  FUN_142429940(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x138) = 0x10000;
  *(undefined4 *)(param_1 + 0x13c) = 0x10000;
  *(undefined2 *)(param_1 + 0x140) = 0;
  return param_1;
}



// FUNCTION 1425113f0 FUN_1425113f0 body=366 status=ok
// SIG undefined FUN_1425113f0(void)

undefined8 * FUN_1425113f0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong local_48 [3];
  undefined4 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *param_1 = &PTR_FUN_1450e8890;
  param_1[1] = *param_2;
  FString::FString(param_1 + 2,param_2 + 1);
  FUN_14282a800(param_1 + 4);
  puVar3 = param_1 + 0x1f;
  *puVar3 = 0;
  param_1[0x20] = 0;
  param_1[0x21] = *(undefined8 *)(param_3 + 2);
  *(undefined4 *)(param_1 + 0x22) = *param_3;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x114,*(undefined8 *)(param_3 + 4));
  local_48[0] = 0;
  local_48[1] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"RequestAsyncLoad SingleDelegate",0x40);
  local_48[2] = 0;
  local_30 = 0;
  puVar6 = (undefined8 *)
           FStreamableManager::RequestAsyncLoad
                     (param_1 + 4,local_28,param_1 + 1,local_48 + 2,0,0,0,local_48);
  if (puVar3 != puVar6) {
    *puVar3 = *puVar6;
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,puVar6 + 1);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142511560 UBlueprintAsyncActionBase body=66 status=ok
// SIG undefined UBlueprintAsyncActionBase(void)

undefined8 * UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450e8538;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x1000000;
  }
  return param_1;
}



// FUNCTION 1425115b0 UBlueprintPlatformLibrary body=202 status=ok
// SIG undefined UBlueprintPlatformLibrary(void)

undefined8 * UBlueprintPlatformLibrary::UBlueprintPlatformLibrary(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  longlong local_18;
  undefined8 local_10;
  
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary();
  *param_1 = &PTR_FUN_143f4b3b0;
  if (DAT_146afc4e8 == 0) {
    local_18 = 0;
    local_10 = 0;
    FConfigCacheIni::GetString
              (DAT_1468b6148,L"LocalNotification",L"DefaultPlatformService",&local_18,&DAT_1468e2360
              );
    if (((int)local_10 != 0) && (0 < (int)local_10 + -1)) {
      puVar2 = (undefined8 *)FName::FName(local_res8,local_18,1);
      uVar1 = *puVar2;
      uVar3 = FUN_14168dc80();
      plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
      if (plVar4 != (longlong *)0x0) {
        DAT_146afc4e8 = (**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 142511680 FUN_142511680 body=33 status=ok
// SIG undefined FUN_142511680(void)

undefined8 * FUN_142511680(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450e7b70;
  return param_1;
}



// FUNCTION 1425116b0 UKismetArrayLibrary body=1134 status=ok
// SIG undefined UKismetArrayLibrary(void)

undefined8 * UKismetArrayLibrary::UKismetArrayLibrary(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_158;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined8 local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined8 local_118;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary();
  *param_1 = &PTR_FUN_143f4b3b0;
  lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_98,L"Array read access out of bounds",L"UKismetArrayLibrary",
                     L"GetOutOfBoundsWarning");
  local_158 = DAT_146afc4f0;
  FText::FText(local_150,lVar5);
  plVar4 = *(longlong **)(lVar5 + 8);
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
  FBlueprintSupport::RegisterBlueprintWarning(&local_158);
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_148 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_148)(local_148);
      LOCK();
      piVar2 = (int *)((longlong)local_148 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_148 + 8))(local_148,1);
      }
    }
  }
  lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_80,L"Array assignment access out of bounds",L"UKismetArrayLibrary",
                     L"SetOutOfBoundsWarning");
  local_138 = DAT_146afc4f8;
  FText::FText(local_130,lVar5);
  plVar4 = *(longlong **)(lVar5 + 8);
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
  FBlueprintSupport::RegisterBlueprintWarning(&local_138);
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_128 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar2 = (int *)((longlong)local_128 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_68,L"Array insertion out of bounds",L"UKismetArrayLibrary",
                     L"InsertOutOfBoundsWarning");
  local_118 = DAT_146afc500;
  FText::FText(local_110,lVar5);
  plVar4 = *(longlong **)(lVar5 + 8);
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
  FBlueprintSupport::RegisterBlueprintWarning(&local_118);
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_108 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)local_108 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_50,L"Array removal out of bounds",L"UKismetArrayLibrary",
                     L"RemoveOutOfBoundsWarning");
  local_f8 = DAT_146afc508;
  FText::FText(local_f0,lVar5);
  plVar4 = *(longlong **)(lVar5 + 8);
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
  FBlueprintSupport::RegisterBlueprintWarning(&local_f8);
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_e8 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"Array resized to negative size",L"UKismetArrayLibrary",
                     L"ResizeArrayNegativeWarning");
  local_d8 = DAT_146afc510;
  FText::FText(local_d0,lVar5);
  plVar4 = *(longlong **)(lVar5 + 8);
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
  FBlueprintSupport::RegisterBlueprintWarning(&local_d8);
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_c8 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)local_c8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,L"Array swap access out of bounds",L"UKismetArrayLibrary",
                     L"SwapElementsInArrayWarning");
  local_b8 = DAT_146afc518;
  FText::FText(local_b0,lVar5);
  plVar4 = *(longlong **)(lVar5 + 8);
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
  FBlueprintSupport::RegisterBlueprintWarning(&local_b8);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a8 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142511b20 UKismetMathLibrary body=802 status=ok
// SIG undefined UKismetMathLibrary(void)

undefined8 * UKismetMathLibrary::UKismetMathLibrary(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined8 local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary();
  *param_1 = &PTR_FUN_143f4b3b0;
  lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_68,L"Divide by zero",L"UKismetMathLibrary",L"DivideByZeroWarning");
  local_e8 = DAT_146afc600;
  FText::FText(local_e0,lVar5);
  plVar4 = *(longlong **)(lVar5 + 8);
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
  FBlueprintSupport::RegisterBlueprintWarning(&local_e8);
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d8 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)local_d8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_50,L"Square root of negative number",L"UKismetMathLibrary",
                     L"NegativeSqrtWarning");
  local_c8 = DAT_146afc608;
  FText::FText(local_c0,lVar5);
  plVar4 = *(longlong **)(lVar5 + 8);
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
  FBlueprintSupport::RegisterBlueprintWarning(&local_c8);
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b8 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)local_b8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"Projection onto vector of zero length",L"UKismetMathLibrary",
                     L"ZeroLengthProjectionWarning");
  local_a8 = DAT_146afc610;
  FText::FText(local_a0,lVar5);
  plVar4 = *(longlong **)(lVar5 + 8);
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
  FBlueprintSupport::RegisterBlueprintWarning(&local_a8);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_98 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,L"Invalid date warning",L"UKismetMathLibrary",L"InvalidDateWarning");
  local_88 = DAT_146afc618;
  FText::FText(local_80,lVar5);
  plVar4 = *(longlong **)(lVar5 + 8);
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
  FBlueprintSupport::RegisterBlueprintWarning(&local_88);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_78 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142511e50 ULayer body=51 status=ok
// SIG undefined ULayer(void)

undefined8 * ULayer::ULayer(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__143fcec48;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 142511e90 FUN_142511e90 body=618 status=ok
// SIG undefined FUN_142511e90(void)

undefined8 * FUN_142511e90(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_18;
  longlong *local_10;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450e78c8;
  param_1[5] = &PTR_LAB_1450e7b40;
  FURL::FURL(param_1 + 6,0);
  plVar7 = (longlong *)0x0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  plVar3 = (longlong *)thunk_FUN_142873fe0();
  uVar4 = (**(code **)(*plVar3 + 8))(plVar3);
  param_1[0x28] = uVar4;
  plVar5 = (longlong *)operator_new(0x50);
  plVar3 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_1450e8a10;
    FUN_1426f5960(plVar5 + 2);
    plVar3 = plVar5;
  }
  plVar5 = plVar3 + 2;
  local_18 = plVar5;
  local_10 = plVar3;
  TSharedRef<FStringTable,1>::Init<FStringTable>(&local_18,plVar5);
  param_1[0x29] = plVar5;
  param_1[0x2a] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar3 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  lVar6 = operator_new(0x18);
  if (lVar6 != 0) {
    plVar7 = (longlong *)FPrecomputedVolumetricLightmap::FPrecomputedVolumetricLightmap(lVar6);
  }
  param_1[0x2b] = plVar7;
  *(int *)(param_1 + 0x2f) = DAT_146afc4e0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  DAT_146afc4e0 = DAT_146afc4e0 + 1;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 2;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 2;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  FUN_14255b410(param_1 + 0x52);
  FUN_14255b410(param_1 + 0x5b);
  *(byte *)((longlong)param_1 + 0x206) = *(byte *)((longlong)param_1 + 0x206) & 0xfb;
  *(byte *)((longlong)param_1 + 0x204) = *(byte *)((longlong)param_1 + 0x204) & 0xf7;
  return param_1;
}



// FUNCTION 142512100 ~TArray<FPrecomputedVisibilityBucket,FDefaultAllocator> body=104 status=ok
// SIG undefined ~TArray<FPrecomputedVisibilityBucket,FDefaultAllocator>(void)

void TArray<FPrecomputedVisibilityBucket,FDefaultAllocator>::
     ~TArray<FPrecomputedVisibilityBucket,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar2 + 2);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 5;
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



// FUNCTION 142512170 FUN_142512170 body=1230 status=ok
// SIG undefined FUN_142512170(void)

void FUN_142512170(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  uint *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  int iStack_78;
  uint uStack_74;
  uint *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(uint *)(param_1 + 5);
  puStack_98 = (uint *)(param_1 + 2);
  local_c8 = 0;
  uStack_c4 = 1;
  uStack_b4 = 0;
  iStack_b0 = 0;
  if (uVar1 != 0) {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puStack_98;
    }
    uVar2 = *puVar12;
    iStack_b0 = 0;
    local_c8 = 0;
    while (uVar2 == 0) {
      lVar6 = (longlong)local_c8;
      iStack_b0 = iStack_b0 + 0x20;
      iVar10 = local_c8 + 1;
      bVar5 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
      local_c8 = iVar10;
      if (bVar5) goto LAB_142512241;
      uVar2 = puVar12[lVar6 + 1];
    }
    uStack_c4 = -uVar2 & uVar2;
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
    if ((int)uVar1 < (int)uStack_b4) {
LAB_142512241:
      uStack_b4 = uVar1;
    }
  }
  uVar2 = *(uint *)(param_1 + 5);
  uStack_90 = CONCAT44(uStack_b4,0xffffffff);
  uStack_88 = CONCAT44(uStack_ac,iStack_b0);
  uStack_a0 = CONCAT44(uStack_c4,local_c8);
  uVar11 = uVar2 & 0xffffffe0;
  local_a8 = SUB84(param_1,0);
  uStack_a4 = (undefined4)((ulonglong)param_1 >> 0x20);
  local_80 = local_a8;
  uStack_7c = uStack_a4;
  iStack_78 = local_c8;
  uStack_74 = uStack_c4;
  local_70 = puStack_98;
  uStack_68 = uStack_90;
  local_60 = uStack_88;
  uStack_b4 = uVar2;
  if (uVar2 != uVar1) {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puStack_98;
    }
    uVar8 = puVar12[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
    iVar10 = (int)uVar2 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_142512315;
      uVar8 = puVar12[(longlong)iVar10 + 1];
      iVar10 = iVar10 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar10 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_b4 = (uVar11 - iVar10) + 0x1f;
    if ((int)uVar1 < (int)uStack_b4) {
LAB_142512315:
      uStack_b4 = uVar1;
    }
  }
  do {
    uVar1 = uStack_b4;
    if (((uStack_68._4_4_ == uStack_b4) && (local_70 == (uint *)(param_1 + 2))) &&
       ((longlong *)CONCAT44(uStack_7c,local_80) == param_1)) {
      *(undefined4 *)(param_1 + 0x1d) = 0;
      if (param_1[0x1c] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (param_1[0x12] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (param_1 + 10);
      *(undefined4 *)(param_1 + 9) = 0;
      if (param_1[8] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(param_1,0);
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      if (*param_1 != 0) {
        FMemory::Free();
      }
      return;
    }
    lVar6 = (longlong)(int)uStack_68._4_4_ * 0x20 + *(longlong *)CONCAT44(uStack_7c,local_80);
    plVar3 = *(longlong **)(lVar6 + 8);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = *(uint *)(plVar3 + 5);
      puVar12 = (uint *)(plVar3 + 2);
      local_c8 = 0;
      uStack_c4 = 1;
      uStack_b4 = 0;
      iStack_b0 = 0;
      if (uVar2 != 0) {
        puVar13 = (uint *)((ulonglong)(plVar3[4] != 0) - 1 & (ulonglong)puVar12 | plVar3[4]);
        uVar11 = *puVar13;
        iStack_b0 = 0;
        local_c8 = 0;
        while (uVar11 == 0) {
          lVar7 = (longlong)local_c8;
          iStack_b0 = iStack_b0 + 0x20;
          iVar10 = local_c8 + 1;
          bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
          local_c8 = iVar10;
          if (bVar5) goto LAB_142512421;
          uVar11 = puVar13[lVar7 + 1];
        }
        uStack_c4 = -uVar11 & uVar11;
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
        if ((int)uVar2 < (int)uStack_b4) {
LAB_142512421:
          uStack_b4 = uVar2;
        }
      }
      uVar11 = *(uint *)(plVar3 + 5);
      uStack_90 = CONCAT44(uStack_b4,0xffffffff);
      uStack_88 = CONCAT44(uStack_ac,iStack_b0);
      uStack_50 = CONCAT44(uStack_c4,local_c8);
      uVar8 = uVar11 & 0xffffffe0;
      uStack_a0 = CONCAT44(uStack_c4,local_c8);
      puStack_98 = puVar12;
      local_58 = plVar3;
      puStack_48 = puVar12;
      uStack_40 = uStack_90;
      uStack_38 = uStack_88;
      uStack_b4 = uVar11;
      if (uVar11 != uVar2) {
        uVar14 = (ulonglong)(plVar3[4] != 0) - 1 & (ulonglong)puVar12 | plVar3[4];
        uVar9 = *(uint *)(uVar14 + (longlong)((int)uVar11 >> 5) * 4) & -1 << ((byte)uVar11 & 0x1f);
        iVar10 = (int)uVar11 >> 5;
        while (uVar9 == 0) {
          uVar8 = uVar8 + 0x20;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
          goto LAB_1425124f6;
          uVar9 = *(uint *)(uVar14 + 4 + (longlong)iVar10 * 4);
          iVar10 = iVar10 + 1;
        }
        uVar9 = -uVar9 & uVar9;
        iVar10 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uVar9 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_b4 = (uVar8 - iVar10) + 0x1f;
        if ((int)uVar2 < (int)uStack_b4) {
LAB_1425124f6:
          uStack_b4 = uVar2;
        }
      }
      while( true ) {
        if ((uStack_90._4_4_ == uStack_b4) && (puStack_98 == puVar12)) break;
        puVar4 = *(undefined8 **)(*plVar3 + 8 + (longlong)(int)uStack_90._4_4_ * 0x18);
        *(undefined8 *)(*plVar3 + 8 + (longlong)(int)uStack_90._4_4_ * 0x18) = 0;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_a0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      }
      TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
      ::Reset(*(undefined8 *)(lVar6 + 8));
    }
    uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68 & ~uStack_74);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_78);
    uStack_b4 = uVar1;
  } while( true );
}



// FUNCTION 142512640 FUN_142512640 body=153 status=ok
// SIG undefined FUN_142512640(void)

void FUN_142512640(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1450e8890;
  if (param_1[0x1f] != 0) {
    FUN_14283ef20();
  }
  plVar4 = (longlong *)param_1[0x20];
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
  FUN_14282cc40(param_1 + 4);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcfaf0;
  return;
}



// FUNCTION 1425126e0 FUN_1425126e0 body=408 status=ok
// SIG undefined FUN_1425126e0(void)

void FUN_1425126e0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__1450e78c8;
  param_1[5] = &PTR_LAB_1450e7b40;
  plVar5 = (longlong *)thunk_FUN_142873fe0();
  (**(code **)(*plVar5 + 0x10))(plVar5,param_1[0x28]);
  param_1[0x28] = 0;
  if (param_1[0x50] != 0) {
    FMemory::Free();
  }
  if (param_1[0x4e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x4c] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x47);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x42);
  if (param_1[0x3a] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x3a] + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (param_1[0x38] != 0) {
    FMemory::Free();
  }
  TArray<FPrecomputedVisibilityBucket,FDefaultAllocator>::
  ~TArray<FPrecomputedVisibilityBucket,FDefaultAllocator>(param_1 + 0x30);
  plVar5 = (longlong *)param_1[0x2a];
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
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  FURL::~FURL(param_1 + 6);
  param_1[5] = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 142512880 FUN_142512880 body=373 status=ok
// SIG undefined FUN_142512880(void)

longlong * FUN_142512880(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x38,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x38);
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x49249 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1423c5480(param_1,(longlong)iVar4 * 0x38 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar2);
        }
        FUN_1423c5480(param_1,(longlong)iVar2 * 0x38 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142512a00 FUN_142512a00 body=393 status=ok
// SIG undefined FUN_142512a00(void)

longlong * FUN_142512a00(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x66666 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1423c5860(param_1,*param_2 + (longlong)iVar4 * 0x28);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_1423c5860(param_1,*param_2 + (longlong)iVar2 * 0x28);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142512b90 FUN_142512b90 body=457 status=ok
// SIG undefined FUN_142512b90(void)

longlong * FUN_142512b90(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  int local_res8 [2];
  ulonglong uVar9;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  uVar6 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar8 = (longlong *)param_1[1];
  if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  iVar3 = local_res8[0];
  bVar2 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar2) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0xaaaab)))) {
    if ((bVar2 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          FUN_142513b50(param_1,*param_2 + (longlong)(int)uVar6 * 0x18);
          uVar7 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar7;
        } while ((int)uVar7 < (int)param_2[1]);
      }
      return param_1;
    }
    iVar5 = (int)param_2[1];
    if (iVar5 != 0) {
      plVar8 = (longlong *)(*param_2 + 8);
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,iVar3);
    }
    uVar9 = uVar6;
    if (0 < local_res8[0]) {
      do {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar3);
        }
        uVar1 = *param_2 + (longlong)iVar3 * 0x18;
        uVar4 = uVar6;
        if (uVar1 != 0) {
          *(undefined8 *)(uVar1 + 8) = 0;
          *(undefined8 *)(uVar1 + 0x10) = 0;
          uVar4 = uVar1;
        }
        FUN_142513b50(param_1,uVar4);
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
      } while ((int)uVar7 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar2 | 0x80;
  return param_1;
}



// FUNCTION 142512d60 FUN_142512d60 body=424 status=ok
// SIG undefined FUN_142512d60(void)

longlong * FUN_142512d60(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
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
  if ((((char)bVar2 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x66666 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_142513ca0(param_1,*param_2 + (longlong)(int)uVar6 * 0x28);
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  TArray<FPrecomputedVisibilityBucket,FDefaultAllocator>::Empty(param_2,local_res8[0]);
  uVar8 = uVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    uVar1 = *param_2 + (longlong)iVar3 * 0x28;
    uVar5 = uVar6;
    if (uVar1 != 0) {
      *(undefined8 *)(uVar1 + 8) = 0;
      *(undefined8 *)(uVar1 + 0x10) = 0;
      *(undefined8 *)(uVar1 + 0x18) = 0;
      *(undefined8 *)(uVar1 + 0x20) = 0;
      uVar5 = uVar1;
    }
    FUN_142513ca0(param_1,uVar5);
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 142512f10 FUN_142512f10 body=375 status=ok
// SIG undefined FUN_142512f10(void)

longlong * FUN_142512f10(longlong *param_1,longlong *param_2)

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
        FUN_142513d30(param_1,(longlong)iVar4 * 0x10 + *param_2);
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
        FUN_142513d30(param_1,(longlong)iVar2 * 0x10 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142513090 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_142513300();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (uVar1 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
      }
    }
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}



// FUNCTION 142513160 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_1425135b0();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (uVar1 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
      }
    }
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}



// FUNCTION 142513230 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_142513860();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (uVar1 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
      }
    }
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}



// FUNCTION 142513300 FUN_142513300 body=677 status=ok
// SIG undefined FUN_142513300(void)

longlong * FUN_142513300(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
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
        lVar8 = (longlong)local_2c * 0x20 + *local_48;
        (**(code **)(*param_1 + 0x30))(param_1,lVar8);
        FUN_142512880(param_1,lVar8 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar3 = 0;
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
  TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + *param_2);
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        *(int *)(param_2 + 6) = iVar2;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)((longlong)iVar2 * 0x20 + *param_2) = 0xffffffff;
        }
      }
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      iVar5 = iVar4;
      if (iVar4 < 0) {
        iVar5 = iVar4 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
      puVar7 = (undefined8 *)((longlong)iVar4 * 0x20 + *param_2);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 3) = 0xffffffff;
      (**(code **)(*param_1 + 0x30))(param_1);
      FUN_142512880(param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1425135b0 FUN_1425135b0 body=677 status=ok
// SIG undefined FUN_1425135b0(void)

longlong * FUN_1425135b0(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
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
        lVar8 = (longlong)local_2c * 0x20 + *local_48;
        (**(code **)(*param_1 + 0x30))(param_1,lVar8);
        FUN_142512a00(param_1,lVar8 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar3 = 0;
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
  TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + *param_2);
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        *(int *)(param_2 + 6) = iVar2;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)((longlong)iVar2 * 0x20 + *param_2) = 0xffffffff;
        }
      }
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      iVar5 = iVar4;
      if (iVar4 < 0) {
        iVar5 = iVar4 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
      puVar7 = (undefined8 *)((longlong)iVar4 * 0x20 + *param_2);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 3) = 0xffffffff;
      (**(code **)(*param_1 + 0x30))(param_1);
      FUN_142512a00(param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 142513860 FUN_142513860 body=745 status=ok
// SIG undefined FUN_142513860(void)

longlong * FUN_142513860(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  plVar1 = param_2 + 2;
  iVar4 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar5 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar9 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar9;
      *plVar9 = *plVar9 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar3 = *local_48 + (longlong)local_2c * 0x18;
        (**(code **)(*param_1 + 0x30))(param_1,lVar3);
        (**(code **)(*param_1 + 8))(param_1,lVar3 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar4 = 0;
  local_res8[0] = 0;
  if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar9;
    *plVar9 = *plVar9 + 4;
  }
  iVar5 = local_res8[0];
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  uVar6 = iVar5 + 0x1f + (iVar5 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_2 + 0x2c) != uVar6) {
    *(uint *)((longlong)param_2 + 0x2c) = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar1,0);
  }
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar5 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar5);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
      }
      else {
        iVar5 = (int)param_2[6];
        iVar7 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar8 = *(int *)(*param_2 + 4 + (longlong)iVar5 * 0x18);
        *(int *)(param_2 + 6) = iVar8;
        *(int *)((longlong)param_2 + 0x34) = iVar7;
        if (iVar7 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar8 * 0x18) = 0xffffffff;
        }
      }
      plVar9 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      iVar8 = iVar5;
      if (iVar5 < 0) {
        iVar8 = iVar5 + 0x1f;
      }
      puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar8 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + (longlong)iVar5 * 0x18) = 0;
      lVar3 = lVar3 + (longlong)iVar5 * 0x18;
      *(undefined1 *)(lVar3 + 8) = 0;
      *(undefined4 *)(lVar3 + 0x10) = 0xffffffff;
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 8))(param_1,lVar3 + 8);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 142513b50 FUN_142513b50 body=335 status=ok
// SIG undefined FUN_142513b50(void)

longlong * FUN_142513b50(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 8))();
  puVar1 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 4,4);
    if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar3,param_2 + 4,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 4) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  (**(code **)(*plVar3 + 0x78))
            (plVar3,(longlong)*(int *)(param_2 + 0x10),(longlong)*(int *)(param_2 + 0x14));
  local_res8[0] = 0;
  if ((*(byte *)(plVar3 + 5) & 1) == 0) {
    local_res8[0] = *(int *)(param_2 + 0x10);
  }
  plVar2 = (longlong *)plVar3[1];
  if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,4);
    if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar3,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (((-1 < (char)*(byte *)(plVar3 + 5)) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)plVar3 + 0x2b) & 8) == 0 || (local_res8[0] < 0x1000001)))) {
    *(int *)(param_2 + 0x10) = local_res8[0];
    if (((local_res8[0] != 0) || (iVar4 = 0, *(int *)(param_2 + 0x14) != 0)) &&
       (iVar4 = local_res8[0], (*(byte *)(plVar3 + 5) & 1) != 0)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
                ((undefined8 *)(param_2 + 8),local_res8[0],*(undefined4 *)(param_2 + 0x14));
      iVar4 = *(int *)(param_2 + 0x10);
    }
    (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined8 *)(param_2 + 8),(longlong)iVar4);
    return param_1;
  }
  *(byte *)(plVar3 + 5) = *(byte *)(plVar3 + 5) | 0x80;
  return param_1;
}



// FUNCTION 142513ca0 FUN_142513ca0 body=133 status=ok
// SIG undefined FUN_142513ca0(void)

longlong * FUN_142513ca0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  uVar2 = FUN_142512f10(param_1,param_2 + 2);
  FUN_142512b90(uVar2,param_2 + 6);
  return param_1;
}



// FUNCTION 142513d30 FUN_142513d30 body=212 status=ok
// SIG undefined FUN_142513d30(void)

undefined8 FUN_142513d30(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1406da970();
  puVar1 = *(undefined2 **)plVar2[1];
  if ((undefined2 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar2 + 0x50))(plVar2,param_2 + 0xc,2);
    if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar2,param_2 + 0xc,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 2;
  }
  puVar1 = *(undefined2 **)plVar2[1];
  if ((undefined2 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar2 + 0x50))(plVar2,param_2 + 0xe,2);
    if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar2,param_2 + 0xe,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0xe) = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 2;
  }
  return param_1;
}



// FUNCTION 142513e10 FUN_142513e10 body=496 status=ok
// SIG undefined FUN_142513e10(void)

longlong * FUN_142513e10(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,4);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 3,4);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 4,4);
    }
  }
  else {
    param_2[4] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 5,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 5,4);
    }
  }
  else {
    param_2[5] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_142512d60(param_1,param_2 + 8);
  return param_1;
}



// FUNCTION 142514000 FUN_142514000 body=442 status=ok
// SIG undefined FUN_142514000(void)

longlong * FUN_142514000(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  uVar3 = FUN_1406da970(param_1);
  plVar4 = (longlong *)FUN_1406da970(uVar3,param_2 + 4);
  puVar2 = *(undefined1 **)plVar4[1];
  if ((undefined1 *)((undefined8 *)plVar4[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar4 + 0x50))(plVar4,param_2 + 7,1);
  }
  else {
    *(undefined1 *)(param_2 + 7) = *puVar2;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 1;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 8,4);
    }
  }
  else {
    param_2[8] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 9,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 9,4);
    }
  }
  else {
    param_2[9] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 10,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 10,4);
    }
  }
  else {
    param_2[10] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_140871d30(param_1,param_2 + 0xc);
  return param_1;
}



// FUNCTION 1425141c0 operator* body=477 status=ok
// SIG undefined operator*(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FDualQuat::operator*(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar15 = param_3[4];
  fVar24 = param_3[5];
  fVar32 = param_3[6];
  fVar5 = param_3[7];
  fVar6 = *param_3;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  fVar41 = fVar1 * fVar8 * fRam0000000146afc5b4;
  fVar42 = fVar1 * fVar7 * fRam0000000146afc5b8;
  fVar43 = fVar1 * fVar6 * fRam0000000146afc5bc;
  fVar16 = fVar2 * fVar9 * fRam0000000146afc5a4;
  fVar19 = fVar2 * fVar6 * fRam0000000146afc5a8;
  fVar22 = fVar2 * fVar7 * fRam0000000146afc5ac;
  fVar11 = fVar3 * fVar6 * fRam0000000146afc594;
  fVar12 = fVar3 * fVar9 * fRam0000000146afc598;
  fVar13 = fVar3 * fVar8 * fRam0000000146afc59c;
  fVar37 = fVar15 * fVar4 * _DAT_146afc5b0;
  fVar38 = fVar15 * fVar3 * fRam0000000146afc5b4;
  fVar39 = fVar15 * fVar2 * fRam0000000146afc5b8;
  fVar40 = fVar15 * fVar1 * fRam0000000146afc5bc;
  fVar14 = fVar24 * fVar3 * _DAT_146afc5a0;
  fVar17 = fVar24 * fVar4 * fRam0000000146afc5a4;
  fVar20 = fVar24 * fVar1 * fRam0000000146afc5a8;
  fVar23 = fVar24 * fVar2 * fRam0000000146afc5ac;
  fVar25 = fVar32 * fVar2 * _DAT_146afc590;
  fVar27 = fVar32 * fVar1 * fRam0000000146afc594;
  fVar29 = fVar32 * fVar4 * fRam0000000146afc598;
  fVar31 = fVar32 * fVar3 * fRam0000000146afc59c;
  fVar15 = param_1[4];
  fVar24 = param_1[5];
  fVar32 = param_1[6];
  fVar10 = param_1[7];
  fVar33 = fVar15 * fVar9 * _DAT_146afc5b0;
  fVar34 = fVar15 * fVar8 * fRam0000000146afc5b4;
  fVar35 = fVar15 * fVar7 * fRam0000000146afc5b8;
  fVar36 = fVar15 * fVar6 * fRam0000000146afc5bc;
  fVar15 = fVar24 * fVar8 * _DAT_146afc5a0;
  fVar18 = fVar24 * fVar9 * fRam0000000146afc5a4;
  fVar21 = fVar24 * fVar6 * fRam0000000146afc5a8;
  fVar24 = fVar24 * fVar7 * fRam0000000146afc5ac;
  fVar26 = fVar32 * fVar7 * _DAT_146afc590;
  fVar28 = fVar32 * fVar6 * fRam0000000146afc594;
  fVar30 = fVar32 * fVar9 * fRam0000000146afc598;
  fVar32 = fVar32 * fVar8 * fRam0000000146afc59c;
  *param_2 = fVar1 * fVar9 * _DAT_146afc5b0 + fVar4 * fVar6 + fVar2 * fVar8 * _DAT_146afc5a0 +
             fVar3 * fVar7 * _DAT_146afc590;
  param_2[2] = fVar42 + fVar4 * fVar8 + fVar19 + fVar12;
  param_2[1] = fVar41 + fVar4 * fVar7 + fVar16 + fVar11;
  param_2[3] = fVar43 + fVar4 * fVar9 + fVar22 + fVar13;
  param_2[7] = fVar40 + fVar5 * fVar4 + fVar23 + fVar31 + fVar36 + fVar10 * fVar9 + fVar24 + fVar32;
  param_2[4] = fVar33 + fVar10 * fVar6 + fVar15 + fVar26 + fVar37 + fVar5 * fVar1 + fVar14 + fVar25;
  param_2[5] = fVar34 + fVar10 * fVar7 + fVar18 + fVar28 + fVar38 + fVar5 * fVar2 + fVar17 + fVar27;
  param_2[6] = fVar35 + fVar10 * fVar8 + fVar21 + fVar30 + fVar39 + fVar5 * fVar3 + fVar20 + fVar29;
  return param_2;
}



// FUNCTION 1425143a0 FUN_1425143a0 body=395 status=ok
// SIG undefined FUN_1425143a0(void)

void FUN_1425143a0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined8 *)(*param_1 + 0x30);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)(*param_1 + 0x68) + 8))();
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar2 = (longlong *)*puVar3;
  puVar3 = puVar5 + 10;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 10;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar5 + 2) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0xffffffff;
  *(undefined4 *)(puVar5 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = 0xffffffff;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar5 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar5 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
  *(undefined4 *)(puVar5 + 7) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[8] = plVar2;
  puVar5[9] = uVar1;
  lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*(longlong *)puVar5[8] + 0x18))();
    if (lVar4 == 0) {
      (**(code **)(*(longlong *)puVar5[8] + 0x20))();
    }
  }
  lVar4 = (**(code **)(*(longlong *)puVar5[9] + 8))();
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*(longlong *)puVar5[9] + 0x18))();
    if (lVar4 == 0) {
      (**(code **)(*(longlong *)puVar5[9] + 0x20))();
    }
  }
  FMemory::operator_delete(param_1[1],1);
  return;
}



// FUNCTION 142514530 operator() body=125 status=ok
// SIG undefined operator()(void)

void <lambda_974a80fed04bdf4bc40e06b9f0d2621e>::operator()(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)(*param_1 + 0x68) + 8))();
  FUN_141a19150(param_2,*puVar1,0,1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  DrawClearQuadMRT(param_2,1,1,param_1 + 1,0,0,0,0);
  return;
}



// FUNCTION 1425145b0 operator() body=178 status=ok
// SIG undefined operator()(void)

bool FLevelSortUtils::FDepthSort::operator()(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int local_res10 [2];
  
  if (param_2 == 0) {
    iVar4 = 0x7fffffff;
  }
  else {
    plVar2 = (longlong *)*param_1;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(plVar2,local_res10,param_2);
    if (local_res10[0] != -1) {
      lVar1 = *plVar2 + (longlong)local_res10[0] * 0x18;
      if (lVar1 != 0) {
        iVar4 = *(int *)(lVar1 + 8);
        goto LAB_14251460c;
      }
    }
    iVar4 = 0;
  }
LAB_14251460c:
  if (param_3 == 0) {
    iVar3 = 0x7fffffff;
  }
  else {
    plVar2 = (longlong *)*param_1;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(plVar2,local_res10,param_3);
    iVar3 = 0;
    if (local_res10[0] != -1) {
      lVar1 = *plVar2 + (longlong)local_res10[0] * 0x18;
      iVar3 = 0;
      if (lVar1 != 0) {
        iVar3 = *(int *)(lVar1 + 8);
      }
    }
  }
  return iVar4 < iVar3;
}



// FUNCTION 142514670 FUN_142514670 body=97 status=ok
// SIG undefined FUN_142514670(void)

undefined8 * FUN_142514670(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450e89f0;
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



// FUNCTION 1425146e0 FUN_1425146e0 body=97 status=ok
// SIG undefined FUN_1425146e0(void)

undefined8 * FUN_1425146e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450e8a00;
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



// FUNCTION 142514750 FUN_142514750 body=97 status=ok
// SIG undefined FUN_142514750(void)

undefined8 * FUN_142514750(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450e89e0;
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



// FUNCTION 1425147c0 FUN_1425147c0 body=97 status=ok
// SIG undefined FUN_1425147c0(void)

undefined8 * FUN_1425147c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450e89d0;
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



// FUNCTION 142514830 FUN_142514830 body=97 status=ok
// SIG undefined FUN_142514830(void)

undefined8 * FUN_142514830(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450e89c0;
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



// FUNCTION 1425148a0 FUN_1425148a0 body=43 status=ok
// SIG undefined FUN_1425148a0(void)

undefined8 * FUN_1425148a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1425148d0 FUN_1425148d0 body=43 status=ok
// SIG undefined FUN_1425148d0(void)

undefined8 * FUN_1425148d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142514900 FUN_142514900 body=52 status=ok
// SIG undefined FUN_142514900(void)

undefined8 FUN_142514900(undefined8 param_1,ulonglong param_2)

{
  FUN_142512640();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 142514940 FUN_142514940 body=52 status=ok
// SIG undefined FUN_142514940(void)

undefined8 FUN_142514940(undefined8 param_1,ulonglong param_2)

{
  FUN_142512640();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 142514980 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFileIoStore::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1425126e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,800);
  }
  return param_1;
}



// FUNCTION 1425149c0 FUN_1425149c0 body=292 status=ok
// SIG undefined FUN_1425149c0(void)

void FUN_1425149c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_2 == (longlong *)0x0) {
    return;
  }
  plVar4 = (longlong *)UDamageType::GetPrivateStaticClass();
  lVar8 = plVar4[0x1f];
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar8 = plVar4[0x1f];
  }
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar5 != 0) && (lVar5 = UWorld::GetWorldSettings(lVar5,1), lVar5 != 0)) &&
     (*(longlong *)(lVar5 + 0x478) != 0)) {
    lVar6 = UDamageType::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar5 + 0x478);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar6) {
        if (lVar1 != 0) {
          if (lVar1 == 0) goto LAB_142514a9e;
          plVar7 = (longlong *)UDamageType::GetPrivateStaticClass();
          plVar4 = *(longlong **)(lVar5 + 0x478);
          plVar3 = plVar4;
          goto joined_r0x000142514a8d;
        }
        break;
      }
    }
  }
  goto LAB_142514abf;
joined_r0x000142514a8d:
  if (plVar3 == (longlong *)0x0) goto LAB_142514a9e;
  if (plVar3 == plVar7) goto LAB_142514aa0;
  plVar3 = (longlong *)plVar3[6];
  goto joined_r0x000142514a8d;
LAB_142514a9e:
  plVar4 = (longlong *)0x0;
LAB_142514aa0:
  lVar8 = plVar4[0x1f];
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar8 = plVar4[0x1f];
  }
LAB_142514abf:
  (**(code **)(*param_2 + 0x550))(param_2,lVar8);
  return;
}



// FUNCTION 142514af0 FUN_142514af0 body=344 status=ok
// SIG undefined FUN_142514af0(void)

void FUN_142514af0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)(param_2 + 0x10));
    if ((lVar1 != 0) && (lVar2 = (longlong)(int)param_1[0x48], (int)param_1[0x48] != 0)) {
      iVar7 = 0;
      bVar8 = *(longlong *)param_1[0x47] != lVar1;
      lVar4 = 0;
      iVar5 = 0;
      do {
        lVar4 = lVar4 + 1;
        iVar6 = iVar5 + 1;
        if (lVar4 < lVar2) {
          plVar3 = (longlong *)(param_1[0x47] + lVar4 * 8);
          do {
            if (bVar8 != (*plVar3 != lVar1)) break;
            iVar6 = iVar6 + 1;
            lVar4 = lVar4 + 1;
            plVar3 = plVar3 + 1;
          } while (lVar4 < lVar2);
        }
        if (bVar8 != false) {
          if (iVar7 != iVar5) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[0x47] + (longlong)iVar7 * 8),
                       (void *)(param_1[0x47] + (longlong)iVar5 * 8),(longlong)(iVar6 - iVar5) << 3)
            ;
          }
          iVar7 = iVar7 + (iVar6 - iVar5);
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar5 = iVar6;
      } while (lVar4 < lVar2);
      *(int *)(param_1 + 0x48) = iVar7;
    }
    iVar5 = (int)param_1[0x48];
    *(int *)(param_1 + 0x48) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0x244) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x47,iVar5);
    }
    *(longlong *)(param_1[0x47] + (longlong)iVar5 * 8) = param_2;
  }
  return;
}



// FUNCTION 142514c50 AddFloatHistorySample body=149 status=ok
// SIG undefined AddFloatHistorySample(void)

undefined8 *
UKismetSystemLibrary::AddFloatHistorySample
          (undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined4 local_res10 [2];
  
  local_res10[0] = param_2;
  FDebugFloatHistory::AddSample(param_3,local_res10);
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_3 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 3);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_3 + 0x1c);
  return param_1;
}



// FUNCTION 142514cf0 FUN_142514cf0 body=460 status=ok
// SIG undefined FUN_142514cf0(void)

void FUN_142514cf0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int local_res8 [4];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  int local_78;
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined4 *local_48;
  undefined8 *local_40;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  FWeakObjectPtr::operator=(&local_70);
  local_68 = local_70;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,&local_68);
  if ((local_res8[0] == -1) || (lVar5 = (longlong)local_res8[0] * 0x20 + *param_1, lVar5 == 0)) {
    local_60 = &local_70;
    FUN_142510760(param_1,&local_78,&local_60,0);
    lVar5 = (longlong)local_78 * 0x20 + *param_1;
  }
  pplVar1 = (longlong **)(lVar5 + 8);
  if (*(longlong *)(lVar5 + 8) == 0) {
    plVar4 = (longlong *)operator_new(0x50);
    plVar7 = (longlong *)0x0;
    plVar6 = plVar7;
    if (plVar4 != (longlong *)0x0) {
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[7] = 0;
      plVar4[9] = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      *(undefined4 *)(plVar4 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
      plVar4[8] = 0;
      plVar6 = plVar4;
    }
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      *plVar4 = (longlong)&PTR_DestroyObject_1450e8c60;
      plVar4[2] = (longlong)plVar6;
      plVar7 = plVar4;
    }
    local_58 = plVar6;
    local_50 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_58,plVar6,plVar6);
    if (pplVar1 != &local_58) {
      *pplVar1 = plVar6;
      local_58 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar5 + 0x10,&local_50);
      plVar7 = local_50;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  local_48 = local_res18;
  local_40 = &local_res20;
  FUN_1417a3590(*pplVar1,local_74,&local_48,0);
  TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(&DAT_146533320,param_2,1);
  return;
}



// FUNCTION 142514ec0 FUN_142514ec0 body=109 status=ok
// SIG undefined FUN_142514ec0(void)

void FUN_142514ec0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((DAT_1465332b0 == 0) || ((*(byte *)(param_1 + 0x206) & 4) == 0)) {
    lVar2 = *param_2;
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    uVar1 = *(undefined4 *)(param_1 + 0xa8);
  }
  else {
    lVar2 = *param_2;
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    uVar1 = *(undefined4 *)(param_1 + 0xb8);
  }
  (**(code **)(lVar2 + 0x40))(param_2,uVar3,uVar1,param_1,0);
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 142514f30 AddSample body=292 status=ok
// SIG undefined AddSample(void)

void FDebugFloatHistory::AddSample(longlong *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar6 = *(float *)((longlong)param_1 + 0x14);
  if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
    if ((fVar6 <= fVar1) && (fVar6 = *(float *)(param_1 + 3), fVar1 <= *(float *)(param_1 + 3))) {
      fVar6 = fVar1;
    }
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + 4),(void *)*param_1,(longlong)iVar2 << 2);
    *(float *)*param_1 = fVar6;
  }
  else {
    if (fVar6 <= fVar1) {
      fVar1 = fVar6;
    }
    *(float *)((longlong)param_1 + 0x14) = fVar1;
    fVar6 = *(float *)(param_1 + 3);
    if (*(float *)(param_1 + 3) <= *param_2) {
      fVar6 = *param_2;
    }
    *(float *)(param_1 + 3) = fVar6;
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + 4),(void *)*param_1,(longlong)iVar2 << 2);
    *(float *)*param_1 = *param_2;
  }
  iVar2 = (int)param_1[1];
  fVar6 = *(float *)(param_1 + 2);
  if (fVar6 < (float)iVar2) {
    iVar5 = (int)fVar6;
    iVar4 = (int)((float)iVar2 - fVar6);
    if (iVar4 != 0) {
      iVar3 = (iVar2 - iVar4) - iVar5;
      if (iVar3 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar5 * 4),
                   (void *)(*param_1 + (longlong)(iVar4 + iVar5) * 4),(longlong)iVar3 << 2);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar4;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142515060 AddToListSafe body=576 status=ok
// SIG undefined AddToListSafe(void)

void FLevelSortUtils::AddToListSafe(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  void *_Dst;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint local_res8;
  undefined8 local_res18 [2];
  ulonglong local_58;
  uint local_50;
  uint local_4c;
  void *local_48;
  undefined8 local_40;
  
  if (param_1 != 0) {
    plVar4 = (longlong *)*param_2;
    iVar5 = (int)param_2[1];
    plVar1 = plVar4 + iVar5;
    while( true ) {
      if (plVar4 == plVar1) {
        *(int *)(param_2 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(longlong *)(*param_2 + (longlong)iVar5 * 8) = param_1;
        return;
      }
      if (*plVar4 == param_1) break;
      plVar4 = plVar4 + 1;
    }
    uVar6 = 0;
    local_58 = 0;
    local_4c = 0;
    local_res8 = 0;
    uVar9 = uVar6;
    uVar10 = uVar6;
    uVar11 = uVar6;
    uVar12 = uVar6;
    if (0 < iVar5) {
      do {
        if (0 < (longlong)uVar12) {
          iVar5 = (int)uVar6;
          local_50 = (3 - (uint)(iVar5 != 0)) + iVar5;
          if ((int)uVar11 < (int)local_50) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar6);
            uVar11 = (ulonglong)local_4c;
            uVar10 = local_58;
          }
          uVar6 = (ulonglong)local_50;
          puVar2 = (undefined4 *)(uVar10 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
          *puVar2 = 0x20002c;
          *(undefined2 *)(puVar2 + 1) = 0;
        }
        lVar3 = *(longlong *)(*param_2 + uVar12 * 8);
        if (lVar3 == 0) {
          local_48 = (void *)0x0;
          local_40 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          FGenericPlatformString::Memcpy(local_48,&DAT_143f3edc8,10);
        }
        else {
          local_res18[0] = *(undefined8 *)(lVar3 + 0x18);
          FName::ToString(local_res18,&local_48);
        }
        _Src = local_48;
        if ((int)local_40 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)local_40 + -1;
        }
        uVar8 = (uint)uVar9;
        if (iVar5 != 0) {
          iVar7 = (int)uVar6;
          local_50 = (uint)(iVar7 == 0) + iVar5 + iVar7;
          if ((int)uVar11 < (int)local_50) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar6);
            uVar11 = (ulonglong)local_4c;
            uVar10 = local_58;
          }
          uVar6 = (ulonglong)local_50;
          _Dst = (void *)(uVar10 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
          ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
          *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
          uVar8 = local_res8;
        }
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        local_res8 = uVar8 + 1;
        uVar9 = (ulonglong)local_res8;
        uVar12 = uVar12 + 1;
      } while ((int)local_res8 < (int)param_2[1]);
      if (uVar10 != 0) {
        FMemory::Free(uVar10);
      }
    }
  }
  return;
}



// FUNCTION 1425152a0 FUN_1425152a0 body=211 status=ok
// SIG undefined FUN_1425152a0(void)

void FUN_1425152a0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  void *_Src;
  void **ppvVar2;
  void *local_28;
  ulonglong local_20;
  undefined1 local_18 [16];
  
  ppvVar2 = (void **)FString::FString(local_18);
  local_28 = (void *)0x0;
  local_20 = 0;
  if (&local_28 != ppvVar2) {
    _Src = *ppvVar2;
    uVar1 = *(uint *)(ppvVar2 + 1);
    local_20 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x158,&local_28);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  if (*ppvVar2 != (void *)0x0) {
    FMemory::Free();
  }
  if (*param_2 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1425153a0 FUN_1425153a0 body=253 status=ok
// SIG undefined FUN_1425153a0(void)

void FUN_1425153a0(longlong param_1,longlong *param_2,undefined4 param_3,undefined1 param_4)

{
  uint uVar1;
  void *_Src;
  void **ppvVar2;
  undefined1 local_48 [16];
  void *local_38;
  ulonglong local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  ppvVar2 = (void **)FString::FString(local_48);
  local_38 = (void *)0x0;
  local_30 = 0;
  if (&local_38 != ppvVar2) {
    _Src = *ppvVar2;
    uVar1 = *(uint *)(ppvVar2 + 1);
    local_30 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_28 = param_3;
  local_24 = param_4;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x178,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  if (*ppvVar2 != (void *)0x0) {
    FMemory::Free();
  }
  if (*param_2 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1425154a0 FUN_1425154a0 body=230 status=ok
// SIG undefined FUN_1425154a0(void)

void FUN_1425154a0(longlong param_1,longlong *param_2,undefined1 param_3)

{
  uint uVar1;
  void *_Src;
  void **ppvVar2;
  undefined1 local_48 [16];
  void *local_38;
  ulonglong local_30;
  undefined1 local_28;
  
  ppvVar2 = (void **)FString::FString(local_48);
  local_38 = (void *)0x0;
  local_30 = 0;
  if (&local_38 != ppvVar2) {
    _Src = *ppvVar2;
    uVar1 = *(uint *)(ppvVar2 + 1);
    local_30 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_28 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x168,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  if (*ppvVar2 != (void *)0x0) {
    FMemory::Free();
  }
  if (*param_2 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142515590 ApplicationReceivedScreenOrientationChangedNotificationDelegate_Handler body=30 status=ok
// SIG undefined ApplicationReceivedScreenOrientationChangedNotificationDelegate_Handler(void)

void UPlatformGameInstance::ApplicationReceivedScreenOrientationChangedNotificationDelegate_Handler
               (longlong param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x188,local_res10);
  return;
}



// FUNCTION 1425155b0 FUN_1425155b0 body=116 status=ok
// SIG undefined FUN_1425155b0(void)

void FUN_1425155b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&local_18);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x128,&local_18);
  plVar1 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 142515630 FUN_142515630 body=167 status=ok
// SIG undefined FUN_142515630(void)

void FUN_142515630(longlong param_1,void **param_2)

{
  uint uVar1;
  void *_Src;
  void *local_18;
  ulonglong local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  if (&local_18 != param_2) {
    _Src = *param_2;
    uVar1 = *(uint *)(param_2 + 1);
    local_10 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_18,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)(int)uVar1);
    }
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x138,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  if (*param_2 == (void *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1425156e0 ApplicationRegisteredForUserNotificationsDelegate_Handler body=30 status=ok
// SIG undefined ApplicationRegisteredForUserNotificationsDelegate_Handler(void)

void UPlatformGameInstance::ApplicationRegisteredForUserNotificationsDelegate_Handler
               (longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x148,local_res10);
  return;
}



// FUNCTION 142515740 ApplyWorldOffset body=145 status=ok
// SIG undefined ApplyWorldOffset(void)

void FPrecomputedVisibilityHandler::ApplyWorldOffset(float *param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  
  fVar2 = param_2[1];
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - fVar2;
  lVar5 = *(longlong *)(param_1 + 8);
  lVar1 = lVar5 + (longlong)(int)param_1[10] * 0x28;
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0x28) {
    pfVar3 = *(float **)(lVar5 + 8);
    pfVar4 = pfVar3 + (longlong)*(int *)(lVar5 + 0x10) * 4;
    for (; pfVar3 != pfVar4; pfVar3 = pfVar3 + 4) {
      *pfVar3 = *param_2 + *pfVar3;
      pfVar3[1] = param_2[1] + pfVar3[1];
      pfVar3[2] = pfVar3[2] + param_2[2];
    }
  }
  return;
}



// FUNCTION 1425157e0 FUN_1425157e0 body=2027 status=ok
// SIG undefined FUN_1425157e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425157e0(longlong param_1,float *param_2,char param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD *pDVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  float *pfVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  undefined8 local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  plVar14 = (longlong *)0x0;
  lVar19 = *(longlong *)(param_1 + 0x148);
  if ((lVar19 != 0) && (((*param_2 != 0.0 || (param_2[1] != 0.0)) || (param_2[2] != 0.0)))) {
    if (*(char *)(lVar19 + 0x18) == '\0') {
      if ((*(byte *)(param_1 + 0x205) & 0x10) != 0) {
        local_d8 = *(undefined8 *)(param_1 + 0x1f8);
        local_e0 = param_2[2] - (float)*(int *)(param_1 + 0x200);
        local_e8 = CONCAT44(param_2[1] - (float)(int)((ulonglong)local_d8 >> 0x20),
                            *param_2 - (float)(int)local_d8);
        FUN_1426fae60(lVar19,&local_e8);
      }
    }
    else if (param_3 == '\0') {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
        local_90 = *(undefined8 *)(param_1 + 0x148);
        local_88 = *(longlong **)(param_1 + 0x150);
        if (local_88 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_88 + 1) = (int)local_88[1] + 1;
          UNLOCK();
        }
        local_80 = *(undefined8 *)param_2;
        local_78 = param_2[2];
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_c0);
        FUN_1426fae60(local_90,&local_80);
        QueryPerformanceCounter(&local_c8);
        plVar10 = local_88;
        DAT_146ac3af4 = DAT_146ac3af4 + (local_c8.s.LowPart - local_c0._0_4_);
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_88 + 1;
          lVar19 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar19 == 1) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
      else {
        pDVar9 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar10 = TlsGetValue(*pDVar9);
        if (plVar10 == (longlong *)0x0) {
          plVar11 = (longlong *)operator_new(0x18);
          plVar10 = plVar14;
          if (plVar11 != (longlong *)0x0) {
            *plVar11 = 0;
            plVar11[1] = 0;
            *(undefined4 *)(plVar11 + 2) = 0;
            plVar10 = plVar11;
          }
          TlsSetValue(*pDVar9,plVar10);
        }
        plVar11 = (longlong *)plVar10[1];
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)*plVar10;
          if (plVar11 == (longlong *)0x0) {
            plVar11 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar9 + 2);
            plVar10[1] = (longlong)plVar11;
            if (plVar11 == (longlong *)0x0) {
              puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar10[1] = (longlong)puVar12;
              lVar19 = 0x1f;
              do {
                puVar2 = puVar12 + 0x20;
                *puVar12 = puVar2;
                lVar19 = lVar19 + -1;
                puVar12 = puVar2;
              } while (lVar19 != 0);
              *puVar2 = 0;
              plVar11 = (longlong *)plVar10[1];
            }
            *(undefined4 *)(plVar10 + 2) = 0x20;
            iVar7 = 0x20;
          }
          else {
            plVar10[1] = (longlong)plVar11;
            iVar7 = 0x20;
            *(undefined4 *)(plVar10 + 2) = 0x20;
            *plVar10 = 0;
          }
        }
        else {
          iVar7 = (int)plVar10[2];
        }
        plVar10[1] = *plVar11;
        *(int *)(plVar10 + 2) = iVar7 + -1;
        *plVar11 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar11 + 1) = 0xff;
        local_58 = 0;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        *plVar11 = (longlong)&PTR_FUN_1450e89c0;
        *(undefined1 *)(plVar11 + 6) = 0;
        plVar11[7] = 0;
        plVar11[2] = *(longlong *)(param_1 + 0x148);
        lVar19 = *(longlong *)(param_1 + 0x150);
        local_b8 = 0;
        plVar11[3] = lVar19;
        if (lVar19 != 0) {
          LOCK();
          *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
          UNLOCK();
        }
        lVar19 = *(longlong *)param_2;
        plVar11[4] = lVar19;
        *(float *)(plVar11 + 5) = param_2[2];
        lVar16 = plVar11[7];
        piVar1 = (int *)(lVar16 + 0x48);
        if (lVar16 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_14048a640(lVar19,0,0xff,1);
        if (lVar16 != 0) {
          LOCK();
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            FGraphEvent::Recycle(lVar16);
          }
        }
      }
    }
  }
  lVar19 = *(longlong *)(param_1 + 0x158);
  if ((lVar19 != 0) && (((*param_2 != 0.0 || (param_2[1] != 0.0)) || (param_2[2] != 0.0)))) {
    if (*(char *)(lVar19 + 8) == '\0') {
      if ((*(byte *)(param_1 + 0x205) & 0x10) != 0) {
        local_e8 = *(undefined8 *)(param_1 + 0x1f8);
        local_d0 = param_2[2] - (float)*(int *)(param_1 + 0x200);
        local_d8 = CONCAT44(param_2[1] - (float)(int)((ulonglong)local_e8 >> 0x20),
                            *param_2 - (float)(int)local_e8);
        FPrecomputedVolumetricLightmap::ApplyWorldOffset(lVar19,&local_d8);
      }
    }
    else if (param_3 == '\0') {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
        local_70 = *(undefined8 *)(param_1 + 0x158);
        local_68 = *(undefined8 *)param_2;
        local_60 = param_2[2];
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_a8);
        FPrecomputedVolumetricLightmap::ApplyWorldOffset(local_70,&local_68);
        QueryPerformanceCounter(&local_b0);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_b0.s.LowPart - local_a8._0_4_);
      }
      else {
        pDVar9 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar10 = TlsGetValue(*pDVar9);
        if (plVar10 == (longlong *)0x0) {
          plVar11 = (longlong *)operator_new(0x18);
          plVar10 = plVar14;
          if (plVar11 != (longlong *)0x0) {
            *plVar11 = 0;
            plVar11[1] = 0;
            *(undefined4 *)(plVar11 + 2) = 0;
            plVar10 = plVar11;
          }
          TlsSetValue(*pDVar9,plVar10);
        }
        plVar11 = (longlong *)plVar10[1];
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)*plVar10;
          if (plVar11 == (longlong *)0x0) {
            plVar11 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar9 + 2);
            plVar10[1] = (longlong)plVar11;
            if (plVar11 == (longlong *)0x0) {
              puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar10[1] = (longlong)puVar12;
              lVar19 = 0x1f;
              do {
                puVar2 = puVar12 + 0x20;
                *puVar12 = puVar2;
                lVar19 = lVar19 + -1;
                puVar12 = puVar2;
              } while (lVar19 != 0);
              *puVar2 = 0;
              plVar11 = (longlong *)plVar10[1];
            }
            iVar7 = 0x20;
            *(undefined4 *)(plVar10 + 2) = 0x20;
          }
          else {
            iVar7 = 0x20;
            plVar10[1] = (longlong)plVar11;
            *(undefined4 *)(plVar10 + 2) = 0x20;
            *plVar10 = 0;
          }
        }
        else {
          iVar7 = (int)plVar10[2];
        }
        plVar10[1] = *plVar11;
        *(int *)(plVar10 + 2) = iVar7 + -1;
        *plVar11 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar11 + 1) = 0xff;
        local_50 = 0;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        *plVar11 = (longlong)&PTR_FUN_1450e89d0;
        *(undefined1 *)(plVar11 + 5) = 0;
        plVar11[6] = 0;
        plVar11[2] = *(longlong *)(param_1 + 0x158);
        lVar19 = *(longlong *)param_2;
        plVar11[3] = lVar19;
        *(float *)(plVar11 + 4) = param_2[2];
        lVar16 = plVar11[6];
        piVar1 = (int *)(lVar16 + 0x48);
        if (lVar16 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_14048a160(lVar19,0,0xff,1);
        if (lVar16 != 0) {
          LOCK();
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            FGraphEvent::Recycle(lVar16);
          }
        }
      }
    }
  }
  plVar10 = plVar14;
  plVar11 = plVar14;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      plVar3 = *(longlong **)((longlong)plVar11 + *(longlong *)(param_1 + 0xa0));
      if (plVar3 != (longlong *)0x0) {
        if ((param_3 == '\0') ||
           (pfVar13 = (float *)&DAT_1468b5d90, (*(byte *)((longlong)plVar3 + 0x92) & 4) == 0)) {
          pfVar13 = param_2;
        }
        local_a0 = *(undefined8 *)pfVar13;
        local_98 = pfVar13[2];
        (**(code **)(*plVar3 + 0x3c0))(plVar3,&local_a0,param_3);
      }
      uVar15 = (int)plVar10 + 1;
      plVar10 = (longlong *)(ulonglong)uVar15;
      plVar11 = plVar11 + 1;
    } while ((int)uVar15 < *(int *)(param_1 + 0xa8));
  }
  plVar10 = plVar14;
  if (0 < *(int *)(param_1 + 0xd8)) {
    do {
      plVar11 = *(longlong **)((longlong)plVar10 + *(longlong *)(param_1 + 0xd0));
      (**(code **)(*plVar11 + 1000))(plVar11,param_2,param_3);
      uVar15 = (int)plVar14 + 1;
      plVar14 = (longlong *)(ulonglong)uVar15;
      plVar10 = plVar10 + 1;
    } while ((int)uVar15 < *(int *)(param_1 + 0xd8));
  }
  if (((*param_2 != 0.0) || (param_2[1] != 0.0)) || (param_2[2] != 0.0)) {
    plVar14 = (longlong *)IStreamingManager::Get();
    (**(code **)(*plVar14 + 0x58))(plVar14,param_1,param_2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  bVar5 = false;
  DAT_146535834 = DAT_146535834 + 1;
  lVar19 = (longlong)(DAT_146535828 + -1);
  if (-1 < DAT_146535828 + -1) {
    lVar16 = lVar19 << 4;
    bVar5 = false;
    do {
      if (((*(int *)(lVar16 + 8 + DAT_146535820) == 0) ||
          (plVar14 = *(longlong **)(lVar16 + DAT_146535820), plVar14 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar14 + 0x40))(plVar14,param_1,uVar4,param_2,param_3),
         cVar6 == '\0')) {
        bVar5 = true;
      }
      lVar16 = lVar16 + -0x10;
      lVar19 = lVar19 + -1;
    } while (-1 < lVar19);
  }
  iVar7 = DAT_146535828;
  uVar17 = 0;
  DAT_146535834 = DAT_146535834 + -1;
  if ((bVar5) && (DAT_146535834 < 1)) {
    uVar18 = uVar17;
    if (0 < DAT_146535828) {
      do {
        if (((*(int *)(uVar17 + 8 + DAT_146535820) == 0) ||
            (*(longlong **)(uVar17 + DAT_146535820) == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(**(longlong **)(uVar17 + DAT_146535820) + 0x10))(), cVar6 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146535820,uVar18,1,1);
        }
        else {
          uVar18 = (ulonglong)((int)uVar18 + 1);
          uVar17 = uVar17 + 0x10;
        }
      } while ((int)uVar18 < DAT_146535828);
    }
    _DAT_146535830 = DAT_146535828 * 2;
    if (_DAT_146535830 < 3) {
      _DAT_146535830 = 2;
    }
    if ((_DAT_146535830 < iVar7) && (DAT_14653582c != DAT_146535828)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146535820);
    }
  }
  return;
}



// FUNCTION 142515fd0 AsCurrencyBase body=129 status=ok
// SIG undefined AsCurrencyBase(void)

undefined8 UKismetTextLibrary::AsCurrencyBase(undefined8 param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *plStack_10;
  
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  FText::AsCurrencyBase(0,(longlong)param_2,param_3,&local_18);
  plVar5 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
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



// FUNCTION 142516060 AsCurrency_Float body=235 status=ok
// SIG undefined AsCurrency_Float(void)

undefined8
UKismetTextLibrary::AsCurrency_Float
          (undefined8 param_1,undefined4 param_2,byte *param_3,undefined1 param_4,undefined1 param_5
          ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined8 param_10)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_48;
  longlong *plStack_40;
  undefined1 local_38;
  undefined1 local_37;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_38);
  local_37 = param_5;
  local_34 = (uint)*param_3;
  local_30 = param_6;
  local_2c = param_7;
  local_28 = param_8;
  local_24 = param_9;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  local_38 = param_4;
  FText::AsCurrency(param_1,param_2,param_10,&local_38,&local_48);
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_40)(plStack_40);
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
  return param_1;
}



// FUNCTION 142516150 AsCurrency_Integer body=234 status=ok
// SIG undefined AsCurrency_Integer(void)

undefined8
UKismetTextLibrary::AsCurrency_Integer
          (undefined8 param_1,undefined4 param_2,byte *param_3,undefined1 param_4,undefined1 param_5
          ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined8 param_10)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28;
  undefined1 local_27;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  local_27 = param_5;
  local_24 = (uint)*param_3;
  local_20 = param_6;
  local_1c = param_7;
  local_18 = param_8;
  local_14 = param_9;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = param_4;
  FText::AsCurrency(param_1,param_2,param_10,&local_28,&local_38);
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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
  return param_1;
}



// FUNCTION 142516240 AsDateTime_DateTime body=176 status=ok
// SIG undefined AsDateTime_DateTime(void)

undefined8 UKismetTextLibrary::AsDateTime_DateTime(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_28;
  longlong *plStack_20;
  longlong local_18 [2];
  
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  uVar6 = FText::GetInvariantTimeZone(local_18);
  FUN_1415fc940(param_1,param_2,0,0,uVar6,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar5 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
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



// FUNCTION 1425162f0 FUN_1425162f0 body=171 status=ok
// SIG undefined FUN_1425162f0(void)

undefined8 FUN_1425162f0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_28;
  longlong *plStack_20;
  longlong local_18 [2];
  
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  uVar6 = FText::GetInvariantTimeZone(local_18);
  FUN_1415fc6d0(param_1,param_2,0,uVar6,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar5 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
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



// FUNCTION 1425163a0 AsPercent_Float body=220 status=ok
// SIG undefined AsPercent_Float(void)

undefined8
UKismetTextLibrary::AsPercent_Float
          (undefined8 param_1,undefined4 param_2,byte *param_3,undefined1 param_4,undefined1 param_5
          ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_48;
  longlong *plStack_40;
  undefined1 local_38;
  undefined1 local_37;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_38);
  local_37 = param_5;
  local_34 = (uint)*param_3;
  local_30 = param_6;
  local_2c = param_7;
  local_28 = param_8;
  local_24 = param_9;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  local_38 = param_4;
  FText::AsPercent(param_1,param_2,&local_38,&local_48);
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_40)(plStack_40);
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
  return param_1;
}



// FUNCTION 142516480 AsTimeZoneDateTime_DateTime body=142 status=ok
// SIG undefined AsTimeZoneDateTime_DateTime(void)

undefined8
UKismetTextLibrary::AsTimeZoneDateTime_DateTime
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *plStack_10;
  
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  FUN_1415fc940(0,param_2,0,0,param_3,&local_18);
  plVar5 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
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



// FUNCTION 142516510 FUN_142516510 body=137 status=ok
// SIG undefined FUN_142516510(void)

undefined8 FUN_142516510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *plStack_10;
  
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  FUN_1415fc6d0(0,param_2,0,param_3,&local_18);
  plVar5 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
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



// FUNCTION 1425165a0 FUN_1425165a0 body=137 status=ok
// SIG undefined FUN_1425165a0(void)

undefined8 FUN_1425165a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *plStack_10;
  
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  FUN_1415fcd50(0,param_2,0,param_3,&local_18);
  plVar5 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
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



// FUNCTION 142516630 FUN_142516630 body=171 status=ok
// SIG undefined FUN_142516630(void)

undefined8 FUN_142516630(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_28;
  longlong *plStack_20;
  longlong local_18 [2];
  
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  uVar6 = FText::GetInvariantTimeZone(local_18);
  FUN_1415fcd50(param_1,param_2,0,uVar6,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar5 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
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



// FUNCTION 1425166e0 AsTimespan_Timespan body=126 status=ok
// SIG undefined AsTimespan_Timespan(void)

undefined8 UKismetTextLibrary::AsTimespan_Timespan(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *plStack_10;
  
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  FUN_1415fcfc0(0,param_2,&local_18);
  plVar5 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
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



// FUNCTION 142516760 FUN_142516760 body=224 status=ok
// SIG undefined FUN_142516760(void)

void FUN_142516760(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  cVar1 = IStreamingManager::HasShutdown();
  if (cVar1 == '\0') {
    plVar2 = (longlong *)IStreamingManager::Get();
    (**(code **)(*plVar2 + 0x50))(plVar2,param_1);
  }
  FUN_1417502d0(param_1);
  if (*(longlong *)(param_1 + 600) != 0) {
    FUN_1428d4e30(*(longlong *)(param_1 + 600),param_1);
  }
  lVar3 = *(longlong *)(param_1 + 0xc0);
  if (((lVar3 != 0) && (param_1 == *(longlong *)(lVar3 + 0x30))) &&
     (plVar2 = *(longlong **)(lVar3 + 0x1b8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x150))(plVar2,0);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x1b8);
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    lVar3 = *(longlong *)(param_1 + 0xc0);
  }
  if (lVar3 != 0) {
    if (*(longlong *)(param_1 + 0x148) != 0) {
      FUN_1427142f0(*(longlong *)(param_1 + 0x148),*(undefined8 *)(lVar3 + 0x1b8));
      lVar3 = *(longlong *)(param_1 + 0xc0);
    }
    if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x158) != 0)) {
      FUN_1427143c0(*(longlong *)(param_1 + 0x158),*(undefined8 *)(lVar3 + 0x1b8));
    }
  }
  FUN_141edede0(param_1 + 0x1d0,0);
  return;
}



// FUNCTION 142516840 BeginDestroy body=217 status=ok
// SIG undefined BeginDestroy(void)

void UPlatformGameInstance::BeginDestroy(undefined8 param_1)

{
  FUN_140483870(&DAT_1464af370,param_1);
  FUN_140483870(&DAT_1464af388,param_1);
  FUN_140483870(&DAT_1464af3a0,param_1);
  FUN_140483870(&DAT_1464af3b8,param_1);
  FUN_140483870(&DAT_1464af3d0,param_1);
  FUN_140483870(&DAT_1464af400,param_1);
  FUN_140483870(&DAT_1464af418,param_1);
  FUN_140483870(&DAT_1464af430,param_1);
  FUN_140483870(&DAT_1464af448,param_1);
  FUN_140483870(&DAT_1464af460,param_1);
  FUN_140483870(&DAT_1464af478,param_1);
  FUN_140483870(&DAT_1464af490,param_1);
  FUN_140483870(&DAT_1464af4a8,param_1);
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142516920 BeginDrag body=106 status=ok
// SIG undefined BeginDrag(void)

void UInterpTrackAnimControl::BeginDrag(longlong param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (((*param_2 < 2) && (-1 < (int)param_2[1])) && ((int)param_2[1] < *(int *)(param_1 + 0x70))) {
    puVar5 = (undefined8 *)operator_new(0x20);
    if (puVar5 != (undefined8 *)0x0) {
      lVar3 = *(longlong *)(param_1 + 0x68);
      uVar2 = param_2[1];
      puVar1 = (undefined8 *)((longlong)(int)uVar2 * 0x20 + lVar3);
      uVar4 = puVar1[1];
      *puVar5 = *puVar1;
      puVar5[1] = uVar4;
      puVar1 = (undefined8 *)((longlong)(int)uVar2 * 0x20 + 0x10 + lVar3);
      uVar4 = puVar1[1];
      puVar5[2] = *puVar1;
      puVar5[3] = uVar4;
      *(undefined8 **)(param_2 + 2) = puVar5;
      return;
    }
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



// FUNCTION 142516990 BeginDrag body=112 status=ok
// SIG undefined BeginDrag(void)

void UInterpTrackParticleReplay::BeginDrag(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (((*param_2 - 10U < 2) && (-1 < param_2[1])) && (param_2[1] < *(int *)(param_1 + 0x48))) {
    puVar3 = (undefined8 *)operator_new(0xc);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
    }
    iVar1 = param_2[1];
    lVar2 = *(longlong *)(param_1 + 0x40);
    *puVar3 = *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc);
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc);
    *(undefined8 **)(param_2 + 2) = puVar3;
  }
  return;
}



// FUNCTION 142516a00 FUN_142516a00 body=1083 status=ok
// SIG undefined FUN_142516a00(void)

void FUN_142516a00(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 (*param_5) [16])

{
  int *piVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auVar13 [16];
  undefined1 local_res20 [8];
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar14;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [40];
  undefined1 local_98 [40];
  undefined1 local_70 [40];
  undefined1 local_48 [32];
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  lVar6 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  pauVar3 = param_5;
  auVar13._0_12_ = ZEXT812(0);
  auVar13._12_4_ = 0;
  lVar11 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = auVar13;
  if (lVar6 == 0) {
    FName::FName(&param_5,"Blueprint",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_108,L"BeginDrawCanvasToRenderTarget: WorldContextObject is not valid.",
                       L"KismetRenderingLibrary",
                       L"BeginDrawCanvasToRenderTarget_InvalidWorldContextObject");
    uVar8 = FUN_14161fb50(local_c0,&param_5);
    FMessageLog::Warning(uVar8,local_138,uVar7);
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_130 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_c0);
    local_d0 = local_100;
  }
  else if (param_2 == 0) {
    FName::FName(local_res20,"Blueprint",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_f0,
                       L"BeginDrawCanvasToRenderTarget: TextureRenderTarget must be non-null.",
                       L"KismetRenderingLibrary",
                       L"BeginDrawCanvasToRenderTarget_InvalidTextureRenderTarget");
    uVar8 = FUN_14161fb50(local_98,local_res20);
    FMessageLog::Warning(uVar8,local_128,uVar7);
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_120 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar1 = (int *)((longlong)local_120 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_98);
    local_d0 = local_e8;
  }
  else {
    if (*(longlong *)(param_2 + 0x60) != 0) {
      *(longlong *)*param_5 = param_2;
      uVar7 = UWorld::GetCanvasForRenderingToTarget(lVar6);
      *param_3 = uVar7;
      *param_4 = CONCAT44((float)*(int *)(param_2 + 0xc4),(float)*(int *)(param_2 + 0xc0));
      lVar9 = operator_new(0x1b0);
      if (lVar9 != 0) {
        lVar10 = FHdrImageWrapper::GetHeight(param_2);
        if (lVar10 != 0) {
          lVar11 = lVar10 + 0x68;
        }
        lVar11 = FUN_142899f20(lVar9,lVar11,0,lVar6,CONCAT44(uVar14,*(undefined4 *)(lVar6 + 0x1c0)),
                               1,0x3f800000);
      }
      FUN_1428af580(*param_3,*(undefined4 *)(param_2 + 0xc0),*(undefined4 *)(param_2 + 0xc4),0,
                    lVar11);
      FUN_1428be4f0(*param_3);
      uStack_140 = operator_new(1);
      *(undefined8 *)(*pauVar3 + 8) = uStack_140;
      local_148 = *(undefined8 *)(param_2 + 0x18);
      if (((DAT_146ac3ac6 == '\0') || (cVar4 = IsInRenderingThread(), cVar4 == '\0')) &&
         ((DAT_146ac3ac5 != '\0' ||
          (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 == '\0' && (DAT_1468c21ae != '\0')) &&
           (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)))))) {
        plVar12 = (longlong *)FUN_14251efc0(local_48,0,0xff);
        lVar11 = *plVar12;
        *(undefined8 *)(lVar11 + 0x10) = local_148;
        *(undefined8 *)(lVar11 + 0x18) = uStack_140;
        lVar11 = *plVar12;
        lVar10 = plVar12[2];
        lVar6 = plVar12[1];
        lVar9 = *(longlong *)(lVar11 + 0x28);
        piVar1 = (int *)(lVar9 + 0x48);
        if (lVar9 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_1409421c0(lVar11,lVar6,(int)lVar10,1);
        if (lVar9 == 0) {
          return;
        }
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 != 1) {
          return;
        }
        FGraphEvent::Recycle(lVar9);
        return;
      }
      FBaseGraphTask::GetSmallTaskAllocator();
      return;
    }
    FName::FName(&local_148,"Blueprint",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d8,L"BeginDrawCanvasToRenderTarget: render target has been released.",
                       L"KismetRenderingLibrary",
                       L"BeginDrawCanvasToRenderTarget_ReleasedTextureRenderTarget");
    uVar8 = FUN_14161fb50(local_70,&local_148);
    FMessageLog::Warning(uVar8,local_118,uVar7);
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_110 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_70);
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_d0 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  return;
}



// FUNCTION 142516e40 BitIsMarked body=27 status=ok
// SIG undefined BitIsMarked(void)

ulonglong UKismetNodeHelperLibrary::BitIsMarked(uint param_1,int param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if (param_2 < 0x20) {
    uVar1 = 1 << ((byte)param_2 & 0x1f);
    return (ulonglong)CONCAT31((int3)(uVar1 >> 8),0 < (int)(param_1 & uVar1));
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142516e60 BoxOverlapActors body=236 status=ok
// SIG undefined BoxOverlapActors(void)

bool UKismetSystemLibrary::BoxOverlapActors
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int iVar1;
  char cVar2;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28 [2];
  
  *(undefined4 *)(param_7 + 8) = 0;
  if (*(int *)(param_7 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_7,0);
  }
  local_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  local_30 = *(undefined4 *)(param_2 + 1);
  local_38 = *param_2;
  local_28[0] = 0;
  local_28[1] = 0;
  cVar2 = FUN_142516f50(param_1,&local_38,&local_48,param_4,0,param_6,local_28);
  if (cVar2 != '\0') {
    FUN_142525a60(local_28,param_5,param_7);
  }
  iVar1 = *(int *)(param_7 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return 0 < iVar1;
}



// FUNCTION 142516f50 FUN_142516f50 body=705 status=ok
// SIG undefined FUN_142516f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_142516f50(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4,
                  longlong param_5,undefined8 param_6,longlong *param_7)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_148 [32];
  uint *local_128;
  undefined4 *local_120;
  undefined1 *local_118;
  undefined1 local_108 [8];
  uint local_100;
  undefined1 local_fc;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8;
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  iVar8 = 0;
  *(undefined4 *)(param_7 + 1) = 0;
  local_d8 = param_2;
  if (*(int *)((longlong)param_7 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_7,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afc6f0) && (_Init_thread_header(&DAT_146afc6f0), DAT_146afc6f0 == -1))
  {
    FName::FName(&DAT_146afc6e8,"BoxOverlapComponents",1);
    _Init_thread_footer(&DAT_146afc6f0);
  }
  local_128 = (uint *)0x0;
  FUN_1422ffb20(local_c8,DAT_146afc6e8,local_108,0);
  local_b8 = 1;
  FCollisionQueryParams::AddIgnoredActors(local_c8,param_6);
  local_f8 = 0;
  local_f0 = 0;
  local_100 = 0;
  local_fc = 0;
  iVar9 = iVar8;
  while( true ) {
    if ((iVar9 < 0) || ((int)param_4[1] <= iVar9)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    uVar1 = *(undefined1 *)((longlong)iVar9 + *param_4);
    uVar5 = UCollisionProfile::Get();
    uVar4 = UCollisionProfile::ConvertToCollisionChannel(uVar5,0,uVar1);
    local_100 = local_100 | 1 << (uVar4 & 0x1f);
    iVar9 = iVar9 + 1;
  }
  lVar6 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar6 != 0) {
    local_e4 = *param_3;
    local_118 = local_c8;
    local_e0 = param_3[1];
    local_120 = &local_e8;
    local_128 = &local_100;
    local_dc = param_3[2];
    local_e8 = 1;
    UWorld::OverlapMultiByObjectType(lVar6,&local_f8,local_d8,&DAT_1464aa810);
  }
  if (0 < (int)local_f0) {
    do {
      lVar6 = local_f8 + ((longlong)iVar8 * 3 + 1) * 8;
      cVar3 = FWeakObjectPtr::IsValid(lVar6);
      if (cVar3 != '\0') {
        if (param_5 != 0) {
          lVar7 = FWeakObjectPtr::Get(lVar6);
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(param_5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(param_5 + 0x90) * 8) != param_5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_142517166;
        }
        uVar5 = FWeakObjectPtr::Get(lVar6);
        iVar9 = (int)param_7[1];
        *(int *)(param_7 + 1) = iVar9 + 1;
        if (*(int *)((longlong)param_7 + 0xc) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_7,iVar9);
        }
        *(undefined8 *)(*param_7 + (longlong)iVar9 * 8) = uVar5;
      }
LAB_142517166:
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)local_f0);
  }
  lVar6 = param_7[1];
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return 0 < (int)lVar6;
}



// FUNCTION 142517220 FUN_142517220 body=480 status=ok
// SIG undefined FUN_142517220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142517220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined4 *local_108;
  undefined1 *local_100;
  undefined *local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc750) {
    _Init_thread_header(&DAT_146afc750);
    if (DAT_146afc750 == -1) {
      FName::FName(&DAT_146afc748,L"BoxTraceMulti",1);
      _Init_thread_footer(&DAT_146afc750);
    }
  }
  local_118 = CONCAT71(local_118._1_7_,param_11);
  local_110 = param_1;
  FUN_14251be80(local_c8,DAT_146afc748,param_7,param_8);
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    local_e4 = *param_4;
    local_e0 = param_4[1];
    local_dc = param_4[2];
    local_e8 = 1;
    uVar2 = UEngineTypes::ConvertToCollisionChannel(param_6);
    local_118 = FRotator::Quaternion(param_5,local_d8);
    local_f8 = &DAT_146aefe68;
    local_100 = local_c8;
    local_108 = &local_e8;
    local_110 = CONCAT44(local_110._4_4_,uVar2);
    uVar1 = UWorld::SweepMultiByChannel(lVar3,param_10,param_2,param_3);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 142517400 FUN_142517400 body=458 status=ok
// SIG undefined FUN_142517400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142517400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc850) {
    _Init_thread_header(&DAT_146afc850);
    if (DAT_146afc850 == -1) {
      FName::FName(&DAT_146afc848,L"BoxTraceMultiByProfile",1);
      _Init_thread_footer(&DAT_146afc850);
    }
  }
  local_108 = CONCAT71(local_108._1_7_,param_11);
  local_100 = param_1;
  FUN_14251be80(local_c8,DAT_146afc848,param_7,param_8);
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_e4 = *param_4;
    local_e0 = param_4[1];
    local_dc = param_4[2];
    local_e8 = 1;
    local_108 = FRotator::Quaternion(param_5,local_d8);
    local_f0 = local_c8;
    local_f8 = &local_e8;
    local_100 = param_6;
    uVar1 = FUN_142357370(lVar2,param_10,param_2,param_3);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1425175d0 FUN_1425175d0 body=497 status=ok
// SIG undefined FUN_1425175d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1425175d0(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  int *local_110;
  undefined4 *local_108;
  undefined1 *local_100;
  int local_f8 [2];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_e0 = param_10;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc7f0) {
    _Init_thread_header(&DAT_146afc7f0);
    if (DAT_146afc7f0 == -1) {
      FName::FName(&DAT_146afc7e8,L"BoxTraceMultiForObjects",1);
      _Init_thread_footer(&DAT_146afc7f0);
    }
  }
  local_118 = CONCAT71(local_118._1_7_,param_11);
  local_110 = param_1;
  FUN_14251be80(local_c8,DAT_146afc7e8,param_7,param_8);
  FUN_14251bd40(local_f8,param_6);
  if (local_f8[0] != 0) {
    lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar2 != 0) {
      local_ec = *param_4;
      local_e8 = param_4[1];
      local_e4 = param_4[2];
      local_f0 = 1;
      local_118 = FRotator::Quaternion(param_5,local_d8);
      local_100 = local_c8;
      local_108 = &local_f0;
      local_110 = local_f8;
      uVar1 = UWorld::SweepMultiByObjectType(lVar2,local_e0,param_2,param_3);
      goto LAB_14251772c;
    }
  }
  uVar1 = 0;
LAB_14251772c:
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1425177d0 FUN_1425177d0 body=480 status=ok
// SIG undefined FUN_1425177d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1425177d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined4 *local_108;
  undefined1 *local_100;
  undefined *local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc740) {
    _Init_thread_header(&DAT_146afc740);
    if (DAT_146afc740 == -1) {
      FName::FName(&DAT_146afc738,L"BoxTraceSingle",1);
      _Init_thread_footer(&DAT_146afc740);
    }
  }
  local_118 = CONCAT71(local_118._1_7_,param_11);
  local_110 = param_1;
  FUN_14251be80(local_c8,DAT_146afc738,param_7,param_8);
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    local_e4 = *param_4;
    local_e0 = param_4[1];
    local_dc = param_4[2];
    local_e8 = 1;
    uVar2 = UEngineTypes::ConvertToCollisionChannel(param_6);
    local_118 = FRotator::Quaternion(param_5,local_d8);
    local_f8 = &DAT_146aefe68;
    local_100 = local_c8;
    local_108 = &local_e8;
    local_110 = CONCAT44(local_110._4_4_,uVar2);
    uVar1 = UWorld::SweepSingleByChannel(lVar3,param_10,param_2,param_3);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1425179b0 FUN_1425179b0 body=458 status=ok
// SIG undefined FUN_1425179b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1425179b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc840) {
    _Init_thread_header(&DAT_146afc840);
    if (DAT_146afc840 == -1) {
      FName::FName(&DAT_146afc838,L"BoxTraceSingleByProfile",1);
      _Init_thread_footer(&DAT_146afc840);
    }
  }
  local_108 = CONCAT71(local_108._1_7_,param_11);
  local_100 = param_1;
  FUN_14251be80(local_c8,DAT_146afc838,param_7,param_8);
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_e4 = *param_4;
    local_e0 = param_4[1];
    local_dc = param_4[2];
    local_e8 = 1;
    local_108 = FRotator::Quaternion(param_5,local_d8);
    local_f0 = local_c8;
    local_f8 = &local_e8;
    local_100 = param_6;
    uVar1 = FUN_1423577f0(lVar2,param_10,param_2,param_3);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 142517b80 FUN_142517b80 body=549 status=ok
// SIG undefined FUN_142517b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142517b80(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,longlong param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  int *local_110;
  undefined8 *local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  int local_f0;
  undefined4 local_ec;
  int local_e8 [2];
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_e0 = param_10;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc7e0) {
    _Init_thread_header(&DAT_146afc7e0);
    if (DAT_146afc7e0 == -1) {
      FName::FName(&DAT_146afc7d8,L"BoxTraceSingleForObjects",1);
      _Init_thread_footer(&DAT_146afc7e0);
    }
  }
  local_118 = CONCAT71(local_118._1_7_,param_11);
  local_110 = param_1;
  FUN_14251be80(local_c8,DAT_146afc7d8,param_7,param_8);
  local_f0 = *(int *)(param_6 + 8);
  local_f8 = 0;
  local_ec = 0;
  if (0 < local_f0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  }
  lVar1 = local_f8;
  FUN_14251bd40(local_e8,param_6);
  if (local_e8[0] != 0) {
    lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar3 != 0) {
      local_f0 = param_4[1];
      local_ec = param_4[2];
      local_f8 = CONCAT44(*param_4,1);
      local_118 = FRotator::Quaternion(param_5,local_d8);
      local_100 = local_c8;
      local_108 = &local_f8;
      local_110 = local_e8;
      uVar2 = UWorld::SweepSingleByObjectType(lVar3,local_e0,param_2,param_3);
      goto LAB_142517d03;
    }
  }
  uVar2 = 0;
LAB_142517d03:
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142517db0 BreakDateTime body=395 status=ok
// SIG undefined BreakDateTime(void)

void UKismetMathLibrary::BreakDateTime
               (longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               int *param_5,int *param_6,int *param_7,int *param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  
  local_res8 = param_1;
  uVar1 = FDateTime::GetYear(&local_res8);
  *param_2 = uVar1;
  local_res8 = param_1;
  uVar1 = FDateTime::GetMonth(&local_res8);
  *param_3 = uVar1;
  local_res8 = param_1;
  uVar1 = FDateTime::GetDay(&local_res8);
  *param_4 = uVar1;
  *param_5 = (int)(param_1 / 36000000000) + (int)((param_1 / 36000000000) / 0x18) * -0x18;
  lVar3 = param_1 / 600000000;
  lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
  *param_6 = (int)lVar3 + ((int)(lVar2 >> 5) - (int)(lVar2 >> 0x3f)) * -0x3c;
  lVar3 = param_1 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(param_1),8);
  lVar2 = (lVar3 >> 0x17) - (lVar3 >> 0x3f);
  lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
  *param_7 = (int)lVar2 + ((int)(lVar3 >> 5) - (int)(lVar3 >> 0x3f)) * -0x3c;
  *param_8 = (int)(param_1 / 10000) + (int)((param_1 / 10000) / 1000) * -1000;
  return;
}



// FUNCTION 142517f40 BreakImportanceTexture body=58 status=ok
// SIG undefined BreakImportanceTexture(void)

void UImportanceSamplingLibrary::BreakImportanceTexture
               (longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 0x40);
  *param_2 = uVar1;
  *param_3 = *(undefined1 *)(param_1 + 0x48);
  return;
}



// FUNCTION 142517f80 BreakRandomStream body=5 status=ok
// SIG undefined BreakRandomStream(void)

void UKismetMathLibrary::BreakRandomStream(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return;
}



// FUNCTION 142517f90 BreakRotIntoAxes body=106 status=ok
// SIG undefined BreakRotIntoAxes(void)

void UKismetMathLibrary::BreakRotIntoAxes
               (undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined1 local_48 [64];
  
  puVar1 = (undefined4 *)FRotationMatrix::FRotationMatrix(local_48,param_1);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  *param_3 = puVar1[4];
  param_3[1] = puVar1[5];
  param_3[2] = puVar1[6];
  *param_4 = puVar1[8];
  param_4[1] = puVar1[9];
  param_4[2] = puVar1[10];
  return;
}



// FUNCTION 142518000 BreakSkinWeightInfo body=62 status=ok
// SIG undefined BreakSkinWeightInfo(void)

void UKismetRenderingLibrary::BreakSkinWeightInfo
               (undefined8 param_1,undefined4 *param_2,undefined1 *param_3,undefined4 *param_4,
               undefined1 *param_5,undefined4 *param_6,undefined1 *param_7,undefined4 *param_8,
               undefined1 *param_9)

{
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  return;
}



// FUNCTION 142518040 BreakSoftClassPath body=124 status=ok
// SIG undefined BreakSoftClassPath(void)

void UKismetSystemLibrary::BreakSoftClassPath(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  plVar1 = (longlong *)FSoftObjectPath::ToString(param_1,local_18);
  if (param_2 != plVar1) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_2 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425180c0 BreakTimespan2 body=266 status=ok
// SIG undefined BreakTimespan2(void)

void UKismetMathLibrary::BreakTimespan2
               (longlong param_1,undefined4 *param_2,int *param_3,int *param_4,int *param_5,
               int *param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_2 = (int)(param_1 / 864000000000);
  *param_3 = (int)(param_1 / 36000000000) + (int)((param_1 / 36000000000) / 0x18) * -0x18;
  lVar2 = param_1 / 600000000;
  lVar1 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
  *param_4 = (int)lVar2 + ((int)(lVar1 >> 5) - (int)(lVar1 >> 0x3f)) * -0x3c;
  lVar2 = param_1 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(param_1),8);
  lVar1 = (lVar2 >> 0x17) - (lVar2 >> 0x3f);
  lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar1),8) + lVar1;
  *param_5 = (int)lVar1 + ((int)(lVar2 >> 5) - (int)(lVar2 >> 0x3f)) * -0x3c;
  *param_6 = ((int)param_1 + (int)lVar1 * -10000000) * 100;
  return;
}



// FUNCTION 1425181d0 BreakTimespan body=291 status=ok
// SIG undefined BreakTimespan(void)

void UKismetMathLibrary::BreakTimespan
               (longlong param_1,undefined4 *param_2,int *param_3,int *param_4,int *param_5,
               undefined4 *param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_2 = (int)(param_1 / 864000000000);
  *param_3 = (int)(param_1 / 36000000000) + (int)((param_1 / 36000000000) / 0x18) * -0x18;
  lVar2 = param_1 / 600000000;
  lVar1 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
  *param_4 = (int)lVar2 + ((int)(lVar1 >> 5) - (int)(lVar1 >> 0x3f)) * -0x3c;
  lVar2 = param_1 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(param_1),8);
  lVar1 = (lVar2 >> 0x17) - (lVar2 >> 0x3f);
  lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar1),8) + lVar1;
  *param_5 = (int)lVar1 + ((int)(lVar2 >> 5) - (int)(lVar2 >> 0x3f)) * -0x3c;
  *param_6 = (int)((param_1 + lVar1 * -10000000) / 10000);
  return;
}



// FUNCTION 142518300 FUN_142518300 body=64 status=ok
// SIG undefined FUN_142518300(void)

void FUN_142518300(void)

{
  LowLevelFatalErrorHandler
            ("Unknown",0x6be,L"ULevel::BuildStreamingData should not be called on a console");
  FDebug::AssertFailed
            (&DAT_1450e148e,"Unknown",0x6be,
             L"ULevel::BuildStreamingData should not be called on a console");
  return;
}



// FUNCTION 142518340 BuildString_Bool body=737 status=ok
// SIG undefined BuildString_Bool(void)

longlong *
UKismetStringLibrary::BuildString_Bool
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
          undefined8 *param_5)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  wchar_t *pwVar8;
  void *_Src;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  pwVar8 = L"Efalse";
  if (param_4 != '\0') {
    pwVar8 = L"Etrue";
  }
  pwVar8 = pwVar8 + 1;
  _Src = (void *)0x0;
  local_38 = (void *)0x0;
  iVar7 = 0;
  local_2c = 0;
  if (*pwVar8 != L'\0') {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pwVar8[lVar6] != L'\0');
    iVar5 = (int)lVar6 + 1;
    local_30 = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar7 = local_30;
    _Src = local_38;
    FGenericPlatformString::Memcpy(local_38,pwVar8,(longlong)iVar5 * 2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  iVar4 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar4 = 0;
  }
  iVar3 = *(int *)(param_5 + 1) + -1 + iVar4;
  if (*(int *)(param_5 + 1) == 0) {
    iVar3 = iVar4;
  }
  iVar4 = *(int *)(param_2 + 1) + -1 + iVar3 + iVar5;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = iVar3 + iVar5;
  }
  if (iVar4 != -1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1);
  }
  pvVar2 = (void *)*param_2;
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_3;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  if ((iVar7 != 0) && (iVar7 = iVar7 + -1, iVar7 != 0)) {
    iVar5 = (int)param_1[1];
    iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar7;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
    }
    pvVar2 = (void *)(*param_1 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar2,_Src,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar2) = 0;
  }
  pvVar2 = (void *)*param_5;
  iVar7 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar7 = 0;
  }
  if (iVar7 != 0) {
    iVar5 = (int)param_1[1];
    iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar7;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return param_1;
}



// FUNCTION 142518630 BuildString_Color body=695 status=ok
// SIG undefined BuildString_Color(void)

longlong *
UKismetStringLibrary::BuildString_Color
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
          undefined8 *param_5)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_38;
  int local_30;
  
  FString::PrintfImpl(&local_38,L"(R=%f,G=%f,B=%f,A=%f)",(double)*param_4,(double)param_4[1],
                      (double)param_4[2],(double)param_4[3]);
  *param_1 = 0;
  param_1[1] = 0;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  iVar4 = local_30 + -1;
  if (local_30 == 0) {
    iVar4 = 0;
  }
  iVar3 = *(int *)(param_5 + 1) + -1 + iVar4;
  if (*(int *)(param_5 + 1) == 0) {
    iVar3 = iVar4;
  }
  iVar4 = *(int *)(param_2 + 1) + -1 + iVar3 + iVar5;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = iVar3 + iVar5;
  }
  if (iVar4 + 1 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar4 + 1);
  }
  pvVar2 = (void *)*param_2;
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_3;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = local_38;
  iVar5 = local_30 + -1;
  if (local_30 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_5;
  iVar5 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return param_1;
}



// FUNCTION 1425188f0 BuildString_Float body=650 status=ok
// SIG undefined BuildString_Float(void)

longlong *
UKismetStringLibrary::BuildString_Float
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3,float param_4,
          undefined8 *param_5)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_38;
  int local_30;
  
  FString::SanitizeFloat(&local_38,(double)param_4,1);
  *param_1 = 0;
  param_1[1] = 0;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  iVar4 = local_30 + -1;
  if (local_30 == 0) {
    iVar4 = 0;
  }
  iVar3 = *(int *)(param_5 + 1) + -1 + iVar4;
  if (*(int *)(param_5 + 1) == 0) {
    iVar3 = iVar4;
  }
  iVar4 = *(int *)(param_2 + 1) + -1 + iVar3 + iVar5;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = iVar3 + iVar5;
  }
  if (iVar4 + 1 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar4 + 1);
  }
  pvVar2 = (void *)*param_2;
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_3;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = local_38;
  iVar5 = local_30 + -1;
  if (local_30 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_5;
  iVar5 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return param_1;
}



// FUNCTION 142518b80 BuildString_Int body=647 status=ok
// SIG undefined BuildString_Int(void)

longlong *
UKismetStringLibrary::BuildString_Int
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 *param_5)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_38;
  int local_30;
  
  FString::PrintfImpl(&local_38,&DAT_1450e13f4,param_4);
  *param_1 = 0;
  param_1[1] = 0;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  iVar4 = local_30 + -1;
  if (local_30 == 0) {
    iVar4 = 0;
  }
  iVar3 = *(int *)(param_5 + 1) + -1 + iVar4;
  if (*(int *)(param_5 + 1) == 0) {
    iVar3 = iVar4;
  }
  iVar4 = *(int *)(param_2 + 1) + -1 + iVar3 + iVar5;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = iVar3 + iVar5;
  }
  if (iVar4 + 1 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar4 + 1);
  }
  pvVar2 = (void *)*param_2;
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_3;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = local_38;
  iVar5 = local_30 + -1;
  if (local_30 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_5;
  iVar5 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return param_1;
}



// FUNCTION 142518e10 BuildString_IntVector body=661 status=ok
// SIG undefined BuildString_IntVector(void)

longlong *
UKismetStringLibrary::BuildString_IntVector
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
          undefined8 *param_5)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_38;
  int local_30;
  
  FString::PrintfImpl(&local_38,L"X=%d Y=%d Z=%d",*param_4,param_4[1],param_4[2]);
  *param_1 = 0;
  param_1[1] = 0;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  iVar4 = local_30 + -1;
  if (local_30 == 0) {
    iVar4 = 0;
  }
  iVar3 = *(int *)(param_5 + 1) + -1 + iVar4;
  if (*(int *)(param_5 + 1) == 0) {
    iVar3 = iVar4;
  }
  iVar4 = *(int *)(param_2 + 1) + -1 + iVar3 + iVar5;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = iVar3 + iVar5;
  }
  if (iVar4 + 1 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar4 + 1);
  }
  pvVar2 = (void *)*param_2;
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_3;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = local_38;
  iVar5 = local_30 + -1;
  if (local_30 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_5;
  iVar5 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return param_1;
}



// FUNCTION 1425190b0 BuildString_Name body=641 status=ok
// SIG undefined BuildString_Name(void)

longlong *
UKismetStringLibrary::BuildString_Name
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 *param_5)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res20;
  void *local_38;
  int local_30;
  
  local_res20 = param_4;
  FName::ToString(&local_res20,&local_38);
  *param_1 = 0;
  param_1[1] = 0;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  iVar4 = local_30 + -1;
  if (local_30 == 0) {
    iVar4 = 0;
  }
  iVar3 = *(int *)(param_5 + 1) + -1 + iVar4;
  if (*(int *)(param_5 + 1) == 0) {
    iVar3 = iVar4;
  }
  iVar4 = *(int *)(param_2 + 1) + -1 + iVar3 + iVar5;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = iVar3 + iVar5;
  }
  if (iVar4 + 1 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar4 + 1);
  }
  pvVar2 = (void *)*param_2;
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_3;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = local_38;
  iVar5 = local_30 + -1;
  if (local_30 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_5;
  iVar5 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return param_1;
}



// FUNCTION 142519340 BuildString_Object body=745 status=ok
// SIG undefined BuildString_Object(void)

longlong *
UKismetStringLibrary::BuildString_Object
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
          undefined8 *param_5)

{
  void *pvVar1;
  size_t _Size;
  void *_Src;
  void *pvVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  ulonglong local_res8;
  longlong local_48 [4];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  bVar8 = param_4 == 0;
  if (bVar8) {
    local_48[0] = 0;
    local_48[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"None",10);
    plVar5 = local_48;
  }
  else {
    local_res8 = *(ulonglong *)(param_4 + 0x18);
    FName::ToString(&local_res8,local_48 + 2);
    plVar5 = local_48 + 2;
  }
  _Src = (void *)*plVar5;
  *plVar5 = 0;
  iVar7 = (int)plVar5[1];
  plVar5[1] = 0;
  if ((bVar8) && (local_48[0] != 0)) {
    FMemory::Free();
  }
  if ((!bVar8) && (local_48[2] != 0)) {
    FMemory::Free();
  }
  *param_1 = 0;
  param_1[1] = 0;
  iVar6 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar6 = 0;
  }
  iVar4 = *(int *)(param_5 + 1) + -1 + iVar6;
  if (*(int *)(param_5 + 1) == 0) {
    iVar4 = iVar6;
  }
  iVar6 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar6 = 0;
  }
  iVar3 = *(int *)(param_2 + 1) + -1 + iVar4 + iVar6;
  if (*(int *)(param_2 + 1) == 0) {
    iVar3 = iVar4 + iVar6;
  }
  if (iVar3 != -1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1);
  }
  iVar6 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar6 = 0;
  }
  pvVar2 = (void *)*param_2;
  if (iVar6 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar6;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_3;
  iVar6 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar6;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if ((iVar7 != 0) && (iVar7 + -1 != 0)) {
    iVar6 = (int)param_1[1];
    iVar4 = (uint)(iVar6 == 0) + iVar6 + iVar7 + -1;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    _Size = (longlong)iVar7 * 2 - 2;
    pvVar2 = (void *)(*param_1 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar2,_Src,_Size);
    *(undefined2 *)(_Size + (longlong)pvVar2) = 0;
  }
  pvVar2 = (void *)*param_5;
  iVar7 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar7 = 0;
  }
  if (iVar7 != 0) {
    iVar6 = (int)param_1[1];
    iVar4 = (uint)(iVar6 == 0) + iVar6 + iVar7;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar7 * 2) = 0;
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return param_1;
}



// FUNCTION 142519630 BuildString_Rotator body=681 status=ok
// SIG undefined BuildString_Rotator(void)

longlong *
UKismetStringLibrary::BuildString_Rotator
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
          undefined8 *param_5)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_38;
  int local_30;
  
  FString::PrintfImpl(&local_38,L"P=%f Y=%f R=%f",(double)*param_4,(double)param_4[1],
                      (double)param_4[2]);
  *param_1 = 0;
  param_1[1] = 0;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  iVar4 = local_30 + -1;
  if (local_30 == 0) {
    iVar4 = 0;
  }
  iVar3 = *(int *)(param_5 + 1) + -1 + iVar4;
  if (*(int *)(param_5 + 1) == 0) {
    iVar3 = iVar4;
  }
  iVar4 = *(int *)(param_2 + 1) + -1 + iVar3 + iVar5;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = iVar3 + iVar5;
  }
  if (iVar4 + 1 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar4 + 1);
  }
  pvVar2 = (void *)*param_2;
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_3;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = local_38;
  iVar5 = local_30 + -1;
  if (local_30 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_5;
  iVar5 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return param_1;
}



// FUNCTION 1425198e0 BuildString_Vector2d body=677 status=ok
// SIG undefined BuildString_Vector2d(void)

longlong *
UKismetStringLibrary::BuildString_Vector2d
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 *param_5)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_res8;
  float fStackX_c;
  void *local_48;
  int local_40;
  
  fStackX_c = (float)((ulonglong)param_4 >> 0x20);
  local_res8 = (float)param_4;
  FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f",(double)local_res8,(double)fStackX_c);
  *param_1 = 0;
  param_1[1] = 0;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  iVar4 = local_40 + -1;
  if (local_40 == 0) {
    iVar4 = 0;
  }
  iVar3 = *(int *)(param_5 + 1) + -1 + iVar4;
  if (*(int *)(param_5 + 1) == 0) {
    iVar3 = iVar4;
  }
  iVar4 = *(int *)(param_2 + 1) + -1 + iVar3 + iVar5;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = iVar3 + iVar5;
  }
  if (iVar4 + 1 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar4 + 1);
  }
  pvVar2 = (void *)*param_2;
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_3;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = local_48;
  iVar5 = local_40 + -1;
  if (local_40 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_5;
  iVar5 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return param_1;
}



// FUNCTION 142519b90 BuildString_Vector body=681 status=ok
// SIG undefined BuildString_Vector(void)

longlong *
UKismetStringLibrary::BuildString_Vector
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
          undefined8 *param_5)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_38;
  int local_30;
  
  FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*param_4,(double)param_4[1],
                      (double)param_4[2]);
  *param_1 = 0;
  param_1[1] = 0;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  iVar4 = local_30 + -1;
  if (local_30 == 0) {
    iVar4 = 0;
  }
  iVar3 = *(int *)(param_5 + 1) + -1 + iVar4;
  if (*(int *)(param_5 + 1) == 0) {
    iVar3 = iVar4;
  }
  iVar4 = *(int *)(param_2 + 1) + -1 + iVar3 + iVar5;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = iVar3 + iVar5;
  }
  if (iVar4 + 1 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar4 + 1);
  }
  pvVar2 = (void *)*param_2;
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_3;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = local_38;
  iVar5 = local_30 + -1;
  if (local_30 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_5;
  iVar5 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return param_1;
}



// FUNCTION 142519e40 CalibrateTilt body=57 status=ok
// SIG undefined CalibrateTilt(void)

void UKismetInputLibrary::CalibrateTilt(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(DAT_146b17150 + 0x28);
  uVar2 = FUN_141672640();
                    /* WARNING: Could not recover jumptable at 0x000142519e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(DAT_146b17150 + 0x28,0,L"CALIBRATEMOTION",uVar2);
  return;
}



// FUNCTION 142519e80 FUN_142519e80 body=74 status=ok
// SIG undefined FUN_142519e80(void)

undefined8 FUN_142519e80(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  uVar2 = *param_2;
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// FUNCTION 142519ed0 FUN_142519ed0 body=71 status=ok
// SIG undefined FUN_142519ed0(void)

undefined8 FUN_142519ed0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  param_1 = (longlong *)*param_1;
  uVar2 = *param_2;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 142519f20 FUN_142519f20 body=82 status=ok
// SIG undefined FUN_142519f20(void)

undefined8 FUN_142519f20(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  FString::FString((longlong)iVar1 * 0x10 + *param_1,param_2);
  return 1;
}



// FUNCTION 142519f80 CanLaunchURL body=17 status=ok
// SIG undefined CanLaunchURL(void)

undefined1 UKismetSystemLibrary::CanLaunchURL(undefined8 *param_1)

{
  undefined1 uVar1;
  
  if (1 < *(int *)(param_1 + 1)) {
    uVar1 = FWindowsPlatformProcess::CanLaunchURL(*param_1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142519fa0 CancelLocalNotification body=23 status=ok
// SIG undefined CancelLocalNotification(void)

void UBlueprintPlatformLibrary::CancelLocalNotification(undefined8 param_1)

{
  if (DAT_146afc4e8 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142519fb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146afc4e8 + 0x20))(DAT_146afc4e8,param_1);
    return;
  }
  return;
}



// FUNCTION 142519fc0 CapsuleOverlapActors body=244 status=ok
// SIG undefined CapsuleOverlapActors(void)

bool UKismetSystemLibrary::CapsuleOverlapActors
               (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  char cVar2;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38 [6];
  
  *(undefined4 *)(param_8 + 8) = 0;
  if (*(int *)(param_8 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_8,0);
  }
  local_40 = *(undefined4 *)(param_2 + 1);
  local_48 = *param_2;
  local_38[0] = 0;
  local_38[1] = 0;
  cVar2 = FUN_14251a0c0(param_1,&local_48,param_3,param_4,param_5,0,param_7,local_38);
  if (cVar2 != '\0') {
    FUN_142525a60(local_38,param_6,param_8);
  }
  iVar1 = *(int *)(param_8 + 8);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return 0 < iVar1;
}



// FUNCTION 14251a0c0 FUN_14251a0c0 body=715 status=ok
// SIG undefined FUN_14251a0c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14251a0c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5,longlong param_6,undefined8 param_7,longlong *param_8)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_158 [32];
  uint *local_138;
  undefined4 *local_130;
  undefined1 *local_128;
  undefined1 local_118 [8];
  uint local_110;
  undefined1 local_10c;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8;
  longlong local_a0;
  longlong local_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  iVar8 = 0;
  *(undefined4 *)(param_8 + 1) = 0;
  if (*(int *)((longlong)param_8 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_8,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afc700) && (_Init_thread_header(&DAT_146afc700), DAT_146afc700 == -1))
  {
    FName::FName(&DAT_146afc6f8,"CapsuleOverlapComponents",1);
    _Init_thread_footer(&DAT_146afc700);
  }
  local_138 = (uint *)0x0;
  FUN_1422ffb20(local_e8,DAT_146afc6f8,local_118,0);
  local_d8 = 1;
  FCollisionQueryParams::AddIgnoredActors(local_e8,param_7);
  local_108 = 0;
  local_100 = 0;
  local_110 = 0;
  local_10c = 0;
  iVar9 = iVar8;
  while( true ) {
    if ((iVar9 < 0) || ((int)param_5[1] <= iVar9)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    uVar1 = *(undefined1 *)((longlong)iVar9 + *param_5);
    uVar5 = UCollisionProfile::Get();
    uVar4 = UCollisionProfile::ConvertToCollisionChannel(uVar5,0,uVar1);
    local_110 = local_110 | 1 << (uVar4 & 0x1f);
    iVar9 = iVar9 + 1;
  }
  lVar6 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar6 != 0) {
    local_128 = local_e8;
    local_130 = &local_f8;
    local_138 = &local_110;
    local_f8 = 3;
    local_f4 = param_3;
    local_f0 = param_4;
    UWorld::OverlapMultiByObjectType(lVar6,&local_108,param_2,&DAT_1464aa810);
  }
  if (0 < (int)local_100) {
    do {
      lVar6 = local_108 + ((longlong)iVar8 * 3 + 1) * 8;
      cVar3 = FWeakObjectPtr::IsValid(lVar6);
      if (cVar3 != '\0') {
        if (param_6 != 0) {
          lVar7 = FWeakObjectPtr::Get(lVar6);
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(param_6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(param_6 + 0x90) * 8) != param_6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_14251a2d6;
        }
        uVar5 = FWeakObjectPtr::Get(lVar6);
        iVar9 = (int)param_8[1];
        *(int *)(param_8 + 1) = iVar9 + 1;
        if (*(int *)((longlong)param_8 + 0xc) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_8,iVar9);
        }
        *(undefined8 *)(*param_8 + (longlong)iVar9 * 8) = uVar5;
      }
LAB_14251a2d6:
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)local_100);
  }
  lVar6 = param_8[1];
  if (local_108 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return 0 < (int)lVar6;
}



// FUNCTION 14251a390 FUN_14251a390 body=451 status=ok
// SIG undefined FUN_14251a390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14251a390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined8 local_110;
  undefined4 *local_108;
  undefined1 *local_100;
  undefined *local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar2 = UEngineTypes::ConvertToCollisionChannel(param_6);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc790) {
    _Init_thread_header(&DAT_146afc790);
    if (DAT_146afc790 == -1) {
      FName::FName(&DAT_146afc788,L"CapsuleTraceMulti",1);
      _Init_thread_footer(&DAT_146afc790);
    }
  }
  local_118 = (undefined4 *)CONCAT71(local_118._1_7_,param_11);
  local_110 = param_1;
  FUN_14251be80(local_d8,DAT_146afc788,param_7,param_8);
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    local_f8 = &DAT_146aefe68;
    local_100 = local_d8;
    local_108 = &local_e8;
    local_e0 = param_5;
    local_110 = CONCAT44(local_110._4_4_,uVar2);
    local_118 = &DAT_1464aa810;
    local_e8 = 3;
    local_e4 = param_4;
    uVar1 = UWorld::SweepMultiByChannel(lVar3,param_10,param_2,param_3);
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14251a560 FUN_14251a560 body=438 status=ok
// SIG undefined FUN_14251a560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14251a560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined4 *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc890) {
    _Init_thread_header(&DAT_146afc890);
    if (DAT_146afc890 == -1) {
      FName::FName(&DAT_146afc888,L"CapsuleTraceMultiByProfile",1);
      _Init_thread_footer(&DAT_146afc890);
    }
  }
  local_f8 = (undefined4 *)CONCAT71(local_f8._1_7_,param_11);
  local_f0 = param_1;
  FUN_14251be80(local_c8,DAT_146afc888,param_7,param_8);
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_e0 = local_c8;
    local_e8 = &local_d8;
    local_f0 = param_6;
    local_f8 = &DAT_1464aa810;
    local_d0 = param_5;
    local_d8 = 3;
    local_d4 = param_4;
    uVar1 = FUN_142357370(lVar2,param_10,param_2,param_3);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14251a720 FUN_14251a720 body=457 status=ok
// SIG undefined FUN_14251a720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14251a720(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  int *local_110;
  undefined4 *local_108;
  undefined1 *local_100;
  int local_f8 [2];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc810) {
    _Init_thread_header(&DAT_146afc810);
    if (DAT_146afc810 == -1) {
      FName::FName(&DAT_146afc808,L"CapsuleTraceMultiForObjects",1);
      _Init_thread_footer(&DAT_146afc810);
    }
  }
  local_118 = (undefined4 *)CONCAT71(local_118._1_7_,param_11);
  local_110 = param_1;
  FUN_14251be80(local_d8,DAT_146afc808,param_7,param_8);
  FUN_14251bd40(local_f8,param_6);
  if (local_f8[0] != 0) {
    lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar2 != 0) {
      local_100 = local_d8;
      local_108 = &local_f0;
      local_110 = local_f8;
      local_e8 = param_5;
      local_f0 = 3;
      local_118 = &DAT_1464aa810;
      local_ec = param_4;
      uVar1 = UWorld::SweepMultiByObjectType(lVar2,param_10,param_2,param_3);
      goto LAB_14251a855;
    }
  }
  uVar1 = 0;
LAB_14251a855:
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14251a8f0 FUN_14251a8f0 body=451 status=ok
// SIG undefined FUN_14251a8f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14251a8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined8 local_110;
  undefined4 *local_108;
  undefined1 *local_100;
  undefined *local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar2 = UEngineTypes::ConvertToCollisionChannel(param_6);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc780) {
    _Init_thread_header(&DAT_146afc780);
    if (DAT_146afc780 == -1) {
      FName::FName(&DAT_146afc778,L"CapsuleTraceSingle",1);
      _Init_thread_footer(&DAT_146afc780);
    }
  }
  local_118 = (undefined4 *)CONCAT71(local_118._1_7_,param_11);
  local_110 = param_1;
  FUN_14251be80(local_d8,DAT_146afc778,param_7,param_8);
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    local_f8 = &DAT_146aefe68;
    local_100 = local_d8;
    local_108 = &local_e8;
    local_e0 = param_5;
    local_110 = CONCAT44(local_110._4_4_,uVar2);
    local_118 = &DAT_1464aa810;
    local_e8 = 3;
    local_e4 = param_4;
    uVar1 = UWorld::SweepSingleByChannel(lVar3,param_10,param_2,param_3);
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14251aac0 FUN_14251aac0 body=438 status=ok
// SIG undefined FUN_14251aac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14251aac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined4 *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc880) {
    _Init_thread_header(&DAT_146afc880);
    if (DAT_146afc880 == -1) {
      FName::FName(&DAT_146afc878,L"CapsuleTraceSingleByProfile",1);
      _Init_thread_footer(&DAT_146afc880);
    }
  }
  local_f8 = (undefined4 *)CONCAT71(local_f8._1_7_,param_11);
  local_f0 = param_1;
  FUN_14251be80(local_c8,DAT_146afc878,param_7,param_8);
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_e0 = local_c8;
    local_e8 = &local_d8;
    local_f0 = param_6;
    local_f8 = &DAT_1464aa810;
    local_d0 = param_5;
    local_d8 = 3;
    local_d4 = param_4;
    uVar1 = FUN_1423577f0(lVar2,param_10,param_2,param_3);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14251ac80 FUN_14251ac80 body=457 status=ok
// SIG undefined FUN_14251ac80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14251ac80(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  int *local_110;
  undefined4 *local_108;
  undefined1 *local_100;
  int local_f8 [2];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc800) {
    _Init_thread_header(&DAT_146afc800);
    if (DAT_146afc800 == -1) {
      FName::FName(&DAT_146afc7f8,L"CapsuleTraceSingleForObjects",1);
      _Init_thread_footer(&DAT_146afc800);
    }
  }
  local_118 = (undefined4 *)CONCAT71(local_118._1_7_,param_11);
  local_110 = param_1;
  FUN_14251be80(local_d8,DAT_146afc7f8,param_7,param_8);
  FUN_14251bd40(local_f8,param_6);
  if (local_f8[0] != 0) {
    lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar2 != 0) {
      local_100 = local_d8;
      local_108 = &local_f0;
      local_110 = local_f8;
      local_e8 = param_5;
      local_f0 = 3;
      local_118 = &DAT_1464aa810;
      local_ec = param_4;
      uVar1 = UWorld::SweepSingleByObjectType(lVar2,param_10,param_2,param_3);
      goto LAB_14251adb5;
    }
  }
  uVar1 = 0;
LAB_14251adb5:
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14251ae50 ClampAxis body=85 status=ok
// SIG undefined ClampAxis(void)

float UKismetMathLibrary::ClampAxis(float param_1)

{
  float fVar1;
  
  fVar1 = (float)(int)(param_1 * 0.0027777778) * 360.0;
  if (ABS(param_1) < ABS(fVar1)) {
    fVar1 = param_1;
  }
  param_1 = param_1 - fVar1;
  if (param_1 < 0.0) {
    param_1 = param_1 + 360.0;
  }
  return param_1;
}



// FUNCTION 14251aeb0 ClampVectorSize body=259 status=ok
// SIG undefined ClampVectorSize(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * UKismetMathLibrary::ClampVectorSize
                  (float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_58;
  float fStack_54;
  undefined8 local_48;
  float local_40;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  local_40 = param_2[2];
  fVar4 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + local_40 * local_40);
  if (fVar4 <= 1e-08) {
    local_48 = _DAT_1468b5d90;
    local_40 = DAT_1468b5d98;
  }
  else {
    fVar3 = 1.0 / fVar4;
    local_40 = local_40 * fVar3;
    local_48 = CONCAT44(fVar2 * fVar3,fVar1 * fVar3);
  }
  if ((param_3 <= fVar4) && (param_3 = fVar4, param_4 <= fVar4)) {
    param_3 = param_4;
  }
  local_58 = (float)local_48;
  fStack_54 = (float)((ulonglong)local_48 >> 0x20);
  *param_1 = local_58 * param_3;
  param_1[1] = fStack_54 * param_3;
  param_1[2] = local_40 * param_3;
  return param_1;
}



// FUNCTION 14251afc0 ClassIsChildOf body=218 status=ok
// SIG undefined ClassIsChildOf(void)

undefined1 UKismetMathLibrary::ClassIsChildOf(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = UObject::GetPrivateStaticClass();
  lVar3 = param_2;
  while (lVar3 != lVar1) {
    lVar3 = *(longlong *)(lVar3 + 0x30);
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = UObject::GetPrivateStaticClass();
  lVar3 = param_1;
  while (lVar3 != lVar1) {
    lVar3 = *(longlong *)(lVar3 + 0x30);
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar1 = UObject::GetPrivateStaticClass();
  lVar3 = param_2;
  do {
    lVar4 = param_2;
    if (lVar3 == lVar1) break;
    lVar3 = *(longlong *)(lVar3 + 0x30);
    lVar4 = 0;
  } while (lVar3 != 0);
  lVar1 = UObject::GetPrivateStaticClass();
  lVar3 = param_1;
  do {
    lVar2 = param_1;
    if (lVar3 == lVar1) break;
    lVar3 = *(longlong *)(lVar3 + 0x30);
    lVar2 = 0;
  } while (lVar3 != 0);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if (lVar2 == lVar4) break;
    lVar2 = *(longlong *)(lVar2 + 0x30);
  }
  return 1;
}



// FUNCTION 14251b0c0 ClearBit body=13 status=ok
// SIG undefined ClearBit(void)

void UKismetNodeHelperLibrary::ClearBit(uint *param_1,uint param_2)

{
  if ((int)param_2 < 0x20) {
    *param_1 = *param_1 & ~(1 << (param_2 & 0x1f));
  }
  return;
}



// FUNCTION 14251b0d0 ClearCurrentAssetGroupCulture body=113 status=ok
// SIG undefined ClearCurrentAssetGroupCulture(void)

void UKismetInternationalizationLibrary::ClearCurrentAssetGroupCulture
               (undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  uVar1 = FInternationalization::Get();
  FInternationalization::ClearCurrentAssetGroupCulture(uVar1,local_res8);
  if (param_2 != '\0') {
    lVar2 = FConfigCacheIni::GetSectionPrivate
                      (DAT_1468b6148,L"Internationalization.AssetGroupCultures",0,0,&DAT_1468e2420);
    if (lVar2 != 0) {
      TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
      ::Remove(lVar2,local_res8[0]);
    }
    FConfigCacheIni::Flush(DAT_1468b6148,0,&DAT_1468e2420);
  }
  return;
}



// FUNCTION 14251b150 FUN_14251b150 body=235 status=ok
// SIG undefined FUN_14251b150(void)

void FUN_14251b150(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  *(byte *)(param_1 + 0x204) = *(byte *)(param_1 + 0x204) & 0xfe;
  uVar3 = 0;
  plVar2 = *(longlong **)(param_1 + 0xd0);
  uVar6 = (longlong)*(int *)(param_1 + 0xd8) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0xd8) < plVar2) {
    uVar6 = uVar3;
  }
  uVar4 = uVar3;
  if (uVar6 != 0) {
    do {
      if ((*plVar2 != 0) && ((*(byte *)(*plVar2 + 0xb8) & 1) != 0)) {
        FUN_142359580();
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  uVar6 = uVar3;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      plVar2 = *(longlong **)(uVar3 + *(longlong *)(param_1 + 0xa0));
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x4d8))(plVar2,0);
      }
      uVar5 = (int)uVar6 + 1;
      uVar3 = uVar3 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0xa8));
  }
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (((lVar1 != 0) && (param_1 == *(longlong *)(lVar1 + 0x30))) &&
     (*(longlong **)(lVar1 + 0x1b8) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(lVar1 + 0x1b8) + 0x248))();
  }
  return;
}



// FUNCTION 14251b240 FUN_14251b240 body=488 status=ok
// SIG undefined FUN_14251b240(void)

void FUN_14251b240(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 local_res10 [2];
  longlong local_res20;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  lVar8 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x60) != 0)) && (lVar8 != 0)) {
    lVar8 = FHdrImageWrapper::GetHeight(param_2);
    uStack_50 = *param_3;
    uStack_4c = param_3[1];
    uStack_48 = param_3[2];
    uStack_44 = param_3[3];
    if (DAT_146ac3ac6 != '\0') {
      cVar6 = IsInRenderingThread();
      if (cVar6 != '\0') {
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        local_res10[0] = 0;
        puVar10 = (undefined8 *)(**(code **)(*(longlong *)(lVar8 + 0x68) + 8))();
        FUN_141a19150(uVar9,*puVar10,0,1);
        TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res10);
        DrawClearQuadMRT(uVar9,1,1,&uStack_50,0,0,0,0);
        return;
      }
    }
    local_58 = (undefined4)lVar8;
    uStack_54 = (undefined4)((ulonglong)lVar8 >> 0x20);
    if (DAT_146ac3ac5 == '\0') {
      cVar6 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar6 != '\0') || (DAT_1468c21ae == '\0')) {
LAB_14251b362:
        local_30 = CONCAT44(uStack_44,uStack_48);
        local_40 = local_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        <lambda_974a80fed04bdf4bc40e06b9f0d2621e>::operator()(&local_40,uVar9);
        return;
      }
      DVar7 = GetCurrentThreadId();
      if (DVar7 == DAT_1468c21c0) goto LAB_14251b362;
    }
    plVar11 = (longlong *)FUN_14251f260(local_28,0,0xff);
    lVar8 = *plVar11;
    *(undefined4 *)(lVar8 + 0x10) = local_58;
    *(undefined4 *)(lVar8 + 0x14) = uStack_54;
    *(undefined4 *)(lVar8 + 0x18) = uStack_50;
    *(undefined4 *)(lVar8 + 0x1c) = uStack_4c;
    *(ulonglong *)(lVar8 + 0x20) = CONCAT44(uStack_44,uStack_48);
    lVar8 = *plVar11;
    lVar5 = plVar11[2];
    lVar3 = plVar11[1];
    lVar4 = *(longlong *)(lVar8 + 0x30);
    piVar1 = (int *)(lVar4 + 0x48);
    if (lVar4 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res20 = lVar4;
    FUN_14048a160(lVar8,lVar3,(int)lVar5,1);
    if (lVar4 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_res20);
      }
    }
  }
  return;
}



// FUNCTION 14251b440 FUN_14251b440 body=724 status=ok
// SIG undefined FUN_14251b440(void)

void FUN_14251b440(longlong param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
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
  
  lVar4 = *(longlong *)(param_1 + 200);
  if (*(char *)(lVar4 + 0x310) != '\0') {
    uVar5 = 0;
    if ((*(char *)(lVar4 + 0x311) == '\0') &&
       (uVar7 = uVar5, uVar10 = uVar5, 0 < *(int *)(param_1 + 0xd8))) {
      do {
        lVar4 = *(longlong *)(uVar10 + *(longlong *)(param_1 + 0xd0));
        if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0xb8) & 1) != 0)) {
          FUN_142359580();
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar10 = uVar10 + 8;
      } while ((int)uVar6 < *(int *)(param_1 + 0xd8));
      lVar4 = *(longlong *)(param_1 + 200);
    }
    FUN_1425b3ce0(lVar4);
    FUN_141ee24f0(0);
    TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 200) + 0x88,0);
    FUN_1425d5b40(*(undefined8 *)(param_1 + 200));
    uVar7 = uVar5;
    uVar10 = uVar5;
    if (0 < *(int *)(param_1 + 0xd8)) {
      do {
        if (*(longlong *)(uVar7 + *(longlong *)(param_1 + 0xd0)) != 0) {
          FUN_1423630e0();
        }
        uVar6 = (int)uVar10 + 1;
        uVar7 = uVar7 + 8;
        uVar10 = (ulonglong)uVar6;
      } while ((int)uVar6 < *(int *)(param_1 + 0xd8));
    }
    *(undefined1 *)(*(longlong *)(param_1 + 200) + 0x310) = 0;
    uVar7 = uVar5;
    uVar10 = uVar5;
    if (0 < *(int *)(param_1 + 0xd8)) {
      do {
        lVar4 = *(longlong *)(uVar10 + *(longlong *)(param_1 + 0xd0));
        if (lVar4 != 0) {
          if (*(char *)(*(longlong *)(param_1 + 200) + 0x311) == '\0') {
            FUN_14234b270(lVar4,*(undefined8 *)(param_1 + 0xc0));
          }
          else {
            FUN_1423424e0();
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar10 = uVar10 + 8;
      } while ((int)uVar6 < *(int *)(param_1 + 0xd8));
    }
    lVar4 = *(longlong *)(param_1 + 200);
    plVar9 = (longlong *)(lVar4 + 0x88);
    iVar1 = *(int *)(lVar4 + 0xb0);
    puStack_28 = (uint *)(lVar4 + 0x98);
    local_78 = 0;
    uStack_74 = 1;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar1 != 0) {
      puVar8 = *(uint **)(lVar4 + 0xa8);
      if (*(uint **)(lVar4 + 0xa8) == (uint *)0x0) {
        puVar8 = puStack_28;
      }
      uVar6 = *puVar8;
      uVar7 = uVar5;
      while (uVar6 == 0) {
        iVar3 = (int)uVar7;
        uStack_60 = (int)uVar5 + 0x20;
        uVar5 = (ulonglong)uStack_60;
        local_78 = iVar3 + 1;
        uVar7 = (ulonglong)local_78;
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_14251b63b;
        uVar6 = puVar8[(longlong)iVar3 + 1];
      }
      uStack_74 = -uVar6 & uVar6;
      iVar3 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      local_68._4_4_ = (uStack_60 - iVar3) + 0x1f;
      if (iVar1 < local_68._4_4_) {
LAB_14251b63b:
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
    local_10._0_4_ = SUB84(plVar9,0);
    local_10._4_4_ = (undefined4)((ulonglong)plVar9 >> 0x20);
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    uStack_70 = local_78;
    uStack_6c = uStack_74;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar2 = local_68._4_4_ < *(int *)(lVar4 + 0xb0);
    local_48 = plVar9;
    local_38 = plVar9;
    local_10 = plVar9;
    local_68 = puStack_28;
    if (bVar2) {
      do {
        FUN_141edf270(*(undefined8 *)(*plVar9 + 8 + (longlong)iStack_5c * 0x18));
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
    *(undefined1 *)(*(longlong *)(param_1 + 200) + 0x311) = 0;
  }
  return;
}



// FUNCTION 14251b720 ComponentOverlapActors body=187 status=ok
// SIG undefined ComponentOverlapActors(void)

bool UKismetSystemLibrary::ComponentOverlapActors
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,longlong param_6)

{
  int iVar1;
  char cVar2;
  longlong local_28 [2];
  
  *(undefined4 *)(param_6 + 8) = 0;
  if (*(int *)(param_6 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_6,0);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  cVar2 = FUN_14251b7e0(param_1,param_2,param_3,0,param_5,local_28);
  if (cVar2 != '\0') {
    FUN_142525a60(local_28,param_4,param_6);
  }
  iVar1 = *(int *)(param_6 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return 0 < iVar1;
}



// FUNCTION 14251b7e0 FUN_14251b7e0 body=701 status=ok
// SIG undefined FUN_14251b7e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14251b7e0(longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined1 *local_120;
  uint *local_118;
  undefined1 local_108 [8];
  uint local_100;
  undefined1 local_fc;
  undefined8 *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8;
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  iVar9 = 0;
  *(undefined4 *)(param_6 + 1) = 0;
  local_f8 = param_2;
  if (*(int *)((longlong)param_6 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_6,0);
  }
  if (param_1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146afc710) {
      _Init_thread_header(&DAT_146afc710);
      if (DAT_146afc710 == -1) {
        FName::FName(&DAT_146afc708,"ComponentOverlapComponents",1);
        _Init_thread_footer(&DAT_146afc710);
      }
    }
    local_128 = (undefined8 *)0x0;
    FUN_1422ffb20(local_c8,DAT_146afc708,local_108,0);
    local_b8 = 1;
    FCollisionQueryParams::AddIgnoredActors(local_c8,param_5);
    local_e8 = 0;
    local_e0 = 0;
    local_100 = 0;
    local_fc = 0;
    iVar10 = iVar9;
    while( true ) {
      if ((iVar10 < 0) || ((int)param_3[1] <= iVar10)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) break;
      uVar2 = *(undefined1 *)((longlong)iVar10 + *param_3);
      uVar6 = UCollisionProfile::Get();
      uVar5 = UCollisionProfile::ConvertToCollisionChannel(uVar6,0,uVar2);
      local_100 = local_100 | 1 << (uVar5 & 0x1f);
      iVar10 = iVar10 + 1;
    }
    puVar1 = local_f8 + 2;
    local_f0 = *(undefined4 *)(local_f8 + 3);
    local_d8 = *local_f8;
    uStack_d0 = local_f8[1];
    lVar7 = *(longlong *)(param_1 + 0x120);
    local_f8 = (undefined8 *)*puVar1;
    if (lVar7 == 0) {
      lVar7 = FUN_1423407b0(param_1);
    }
    local_118 = &local_100;
    local_120 = local_c8;
    local_128 = &local_d8;
    UWorld::ComponentOverlapMulti(lVar7,&local_e8,param_1,&local_f8);
    if (0 < (int)local_e0) {
      do {
        lVar7 = local_e8 + ((longlong)iVar9 * 3 + 1) * 8;
        cVar3 = FWeakObjectPtr::IsValid(lVar7);
        if (cVar3 != '\0') {
          if (param_4 != 0) {
            lVar8 = FWeakObjectPtr::Get(lVar7);
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(param_4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(param_4 + 0x90) * 8) != param_4 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_14251b9f6;
          }
          uVar6 = FWeakObjectPtr::Get(lVar7);
          iVar10 = (int)param_6[1];
          *(int *)(param_6 + 1) = iVar10 + 1;
          if (*(int *)((longlong)param_6 + 0xc) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_6,iVar10);
          }
          *(undefined8 *)(*param_6 + (longlong)iVar10 * 8) = uVar6;
        }
LAB_14251b9f6:
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)local_e0);
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  return 0 < (int)param_6[1];
}



// FUNCTION 14251baa0 ComposeRotators body=178 status=ok
// SIG undefined ComposeRotators(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
UKismetMathLibrary::ComposeRotators(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  pfVar9 = (float *)FRotator::Quaternion(param_2,&local_28);
  fVar1 = *pfVar9;
  fVar2 = pfVar9[1];
  fVar3 = pfVar9[2];
  fVar4 = pfVar9[3];
  pfVar9 = (float *)FRotator::Quaternion(param_3,&local_28);
  fVar5 = *pfVar9;
  fVar6 = pfVar9[1];
  fVar7 = pfVar9[2];
  fVar8 = pfVar9[3];
  local_28 = fVar4 * fVar5 * _DAT_146afc5b0 + fVar8 * fVar1 + fVar3 * fVar6 * _DAT_146afc5a0 +
             fVar2 * fVar7 * _DAT_146afc590;
  fStack_24 = fVar3 * fVar5 * fRam0000000146afc5b4 + fVar8 * fVar2 +
              fVar4 * fVar6 * fRam0000000146afc5a4 + fVar1 * fVar7 * fRam0000000146afc594;
  fStack_20 = fVar2 * fVar5 * fRam0000000146afc5b8 + fVar8 * fVar3 +
              fVar1 * fVar6 * fRam0000000146afc5a8 + fVar4 * fVar7 * fRam0000000146afc598;
  fStack_1c = fVar1 * fVar5 * fRam0000000146afc5bc + fVar8 * fVar4 +
              fVar2 * fVar6 * fRam0000000146afc5ac + fVar3 * fVar7 * fRam0000000146afc59c;
  FRotator::FRotator(param_1,&local_28);
  return param_1;
}



// FUNCTION 14251bbf0 Concat_StrStr body=321 status=ok
// SIG undefined Concat_StrStr(void)

longlong *
UKismetStringLibrary::Concat_StrStr(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar6 = 0;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = iVar6;
  }
  iVar4 = *(int *)(param_2 + 1);
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = 1;
  }
  if (iVar5 + iVar4 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
  }
  pvVar2 = (void *)*param_2;
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = iVar6;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_1[1];
    iVar3 = (uint)(iVar4 == 0) + iVar5 + iVar4;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  pvVar2 = (void *)*param_3;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = iVar6;
  }
  if (iVar5 != 0) {
    iVar6 = (int)param_1[1];
    iVar4 = (uint)(iVar6 == 0) + iVar5 + iVar6;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    pvVar1 = (void *)(*param_1 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  return param_1;
}



// FUNCTION 14251bd40 FUN_14251bd40 body=307 status=ok
// SIG undefined FUN_14251bd40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_14251bd40(uint *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong local_28;
  int local_20;
  undefined4 local_1c;
  
  iVar8 = 0;
  local_20 = (int)param_2[1];
  local_28 = 0;
  local_1c = 0;
  iVar7 = iVar8;
  iVar2 = local_20;
  lVar3 = local_28;
  if (0 < local_20) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_28,0);
    iVar2 = local_20;
    lVar3 = local_28;
  }
  for (; (pvVar4 = ThreadLocalStoragePointer, -1 < iVar7 && (iVar7 < (int)param_2[1]));
      iVar7 = iVar7 + 1) {
    uVar5 = UEngineTypes::ConvertToCollisionChannel(*(undefined1 *)((longlong)iVar7 + *param_2));
    *(undefined1 *)(iVar7 + lVar3) = uVar5;
  }
  uVar6 = (ulonglong)_tls_index;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  for (; (-1 < iVar8 && (iVar8 < iVar2)); iVar8 = iVar8 + 1) {
    bVar1 = *(byte *)(iVar8 + lVar3);
    if ((*(int *)(*(longlong *)((longlong)pvVar4 + uVar6 * 8) + 0x38) < DAT_146865d18) &&
       (_Init_thread_header(&DAT_146865d18), DAT_146865d18 == -1)) {
      DAT_146865d10 = 0xffffffff;
      _DAT_146865d14 = 1;
      _Init_thread_footer(&DAT_146865d18);
    }
    if ((DAT_146865d10 >> (bVar1 & 0x1f) & 1) != 0) {
      *param_1 = *param_1 | 1 << (bVar1 & 0x1f);
    }
  }
  if (lVar3 != 0) {
    FMemory::Free(lVar3);
  }
  return param_1;
}



// FUNCTION 14251be80 FUN_14251be80 body=292 status=ok
// SIG undefined FUN_14251be80(void)

longlong FUN_14251be80(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                      char param_5,longlong param_6)

{
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_1422ffb20(param_1,param_2,local_res8,param_3,0);
  *(undefined1 *)(param_1 + 0x14) = 1;
  plVar3 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  cVar1 = *(char *)(lVar4 + 0xab);
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(bool *)(param_1 + 0x13) = cVar1 == '\0';
  FCollisionQueryParams::AddIgnoredActors(param_1,param_4);
  if ((param_5 != '\0') && (param_6 != 0)) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      if (param_6 == 0) {
        return param_1;
      }
      do {
        param_6 = *(longlong *)(param_6 + 0x20);
        if (param_6 == 0) {
          return param_1;
        }
        lVar4 = FUN_1428dfc70();
        if ((*(int *)(*(longlong *)(param_6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      } while (!bVar2);
    }
    FCollisionQueryParams::AddIgnoredActor(param_1,param_6);
  }
  return param_1;
}



// FUNCTION 14251bfb0 FUN_14251bfb0 body=172 status=ok
// SIG undefined FUN_14251bfb0(void)

void FUN_14251bfb0(longlong *param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  void *_Dst;
  ulonglong uVar2;
  
  if ((int)((longlong *)param_1[1])[1] == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)((longlong)((int)param_1[2] * param_2) + *(longlong *)param_1[1]);
  }
  if ((*(uint *)(*param_1 + 0x38) >> 9 & 1) == 0) {
    if (0 < (int)param_3) {
      uVar2 = (ulonglong)param_3;
      do {
        plVar1 = (longlong *)*param_1;
        if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
          (**(code **)(*plVar1 + 0x330))();
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    (_Dst,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
        }
        _Dst = (void *)((longlong)_Dst + (longlong)(int)param_1[2]);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    return;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)(int)((int)param_1[2] * param_3));
  return;
}



// FUNCTION 14251c060 Contains body=58 status=ok
// SIG undefined Contains(void)

bool UKismetStringLibrary::Contains
               (undefined8 param_1,undefined8 *param_2,byte param_3,undefined1 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  iVar1 = FUN_141592950(param_1,puVar2,param_3 ^ 1,param_4,0xffffffff);
  return iVar1 != -1;
}



// FUNCTION 14251c0a0 Conv_BoolToString body=125 status=ok
// SIG undefined Conv_BoolToString(void)

undefined8 * UKismetStringLibrary::Conv_BoolToString(undefined8 *param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  
  pwVar3 = L"false";
  if (param_2 != '\0') {
    pwVar3 = L"true";
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (*pwVar3 != L'\0') {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (pwVar3[lVar2] != L'\0');
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_1 + 1) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,pwVar3,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14251c120 Conv_BoolToText body=278 status=ok
// SIG undefined Conv_BoolToText(void)

undefined8 UKismetTextLibrary::Conv_BoolToText(undefined8 param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  wchar_t *pwVar7;
  byte bVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  puVar6 = local_20;
  bVar8 = (param_2 ^ 1) + 1;
  pwVar10 = L"True";
  pwVar9 = L"Kismet";
  pwVar7 = L"true";
  if (param_2 == 0) {
    pwVar10 = L"False";
    pwVar9 = L"Kismet";
    pwVar7 = L"false";
    puVar6 = local_38;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (puVar6,pwVar7,pwVar9,pwVar10);
  FText::FText(param_1,uVar5);
  if (((bVar8 & 2) != 0) && (bVar8 = bVar8 & 0xfd, local_30 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (((bVar8 & 1) != 0) && (local_18 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14251c240 Conv_ByteToString body=34 status=ok
// SIG undefined Conv_ByteToString(void)

undefined8 UKismetStringLibrary::Conv_ByteToString(undefined8 param_1,undefined1 param_2)

{
  FString::PrintfImpl(param_1,&DAT_1450e13cc,param_2);
  return param_1;
}



// FUNCTION 14251c270 Conv_ByteToText body=143 status=ok
// SIG undefined Conv_ByteToText(void)

undefined8 UKismetTextLibrary::Conv_ByteToText(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_18;
  longlong *plStack_10;
  
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  uVar6 = FUN_141601df0();
  FText::AsNumber(param_1,param_2,uVar6,&local_18);
  plVar5 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
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



// FUNCTION 14251c300 Conv_ClassToSoftClassReference body=266 status=ok
// SIG undefined Conv_ClassToSoftClassReference(void)

undefined4 *
UKismetSystemLibrary::Conv_ClassToSoftClassReference(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_38 [32];
  
  lVar4 = 0;
  if (*param_2 != 0) {
    lVar2 = UObject::GetPrivateStaticClass();
    for (lVar1 = *param_2; (lVar4 = 0, lVar1 != 0 && (lVar4 = *param_2, lVar1 != lVar2));
        lVar1 = *(longlong *)(lVar1 + 0x30)) {
    }
  }
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (0x7fffffff < (uint)param_1[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  param_1[2] = 0;
  if (lVar4 == 0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[8] = 0;
    if (((int)param_1[9] < 0) && (param_1[9] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
    }
    if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 6) = 0;
    }
    param_1[2] = 0;
  }
  else {
    uVar3 = FSoftObjectPath::FSoftObjectPath(local_38,lVar4);
    FSoftObjectPath::operator=(param_1 + 4,uVar3);
    FWeakObjectPtr::operator=(param_1,lVar4);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[2] = DAT_1464b56f4;
  }
  return param_1;
}


