// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e9e1d0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMiniMapComponent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  ULevelStreaming::~ULevelStreaming(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 140e9e220 FUN_140e9e220 body=122 status=ok
// SIG undefined FUN_140e9e220(void)

longlong FUN_140e9e220(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x9e0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  if (*(longlong *)(param_1 + 0x9c8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x988);
  FUN_140e9c810(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9f0);
  }
  return param_1;
}



// FUNCTION 140e9e2a0 FUN_140e9e2a0 body=90 status=ok
// SIG undefined FUN_140e9e2a0(void)

longlong FUN_140e9e2a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x9b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9a0) != 0) {
    FMemory::Free();
  }
  FUN_1407734e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9d0);
  }
  return param_1;
}



// FUNCTION 140e9e300 FUN_140e9e300 body=70 status=ok
// SIG undefined FUN_140e9e300(void)

longlong FUN_140e9e300(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 140e9e350 FUN_140e9e350 body=291 status=ok
// SIG undefined FUN_140e9e350(void)

longlong FUN_140e9e350(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x748) != 0) {
    FMemory::Free();
  }
  FUN_140e9c260(param_1 + 0x4e0);
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FMemory::Free();
  }
  FUN_140e9bf60(param_1 + 0x4c0);
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x398) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x328);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x310);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FMemory::Free();
  }
  FUN_140e9c8d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x758);
  }
  return param_1;
}



// FUNCTION 140e9e480 FUN_140e9e480 body=155 status=ok
// SIG undefined FUN_140e9e480(void)

longlong FUN_140e9e480(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1441b3948;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 140e9e520 FUN_140e9e520 body=128 status=ok
// SIG undefined FUN_140e9e520(void)

longlong FUN_140e9e520(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x1c8);
  FUN_1407e68c0(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_1440e9a70;
  FUN_1407be1b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 140e9e5a0 FUN_140e9e5a0 body=111 status=ok
// SIG undefined FUN_140e9e5a0(void)

longlong FUN_140e9e5a0(longlong param_1,ulonglong param_2)

{
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x1c8);
  FUN_1407e68c0(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_1440e9a70;
  FUN_1407be1b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 140e9e610 FUN_140e9e610 body=230 status=ok
// SIG undefined FUN_140e9e610(void)

longlong FUN_140e9e610(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  FUN_1409f57b0(param_1 + 0x238);
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
  ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(param_1 + 0x218);
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x1c8);
  FUN_1407e68c0(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_1440e9a70;
  FUN_1407be1b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a8);
  }
  return param_1;
}



// FUNCTION 140e9e700 FUN_140e9e700 body=128 status=ok
// SIG undefined FUN_140e9e700(void)

longlong FUN_140e9e700(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x1c8);
  FUN_1407e68c0(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_1440e9a70;
  FUN_1407be1b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 140e9e780 FUN_140e9e780 body=128 status=ok
// SIG undefined FUN_140e9e780(void)

longlong FUN_140e9e780(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x1c8);
  FUN_1407e68c0(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_1440e9a70;
  FUN_1407be1b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 140e9e800 FUN_140e9e800 body=128 status=ok
// SIG undefined FUN_140e9e800(void)

longlong FUN_140e9e800(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x1c8);
  FUN_1407e68c0(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_1440e9a70;
  FUN_1407be1b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 140e9e880 FUN_140e9e880 body=128 status=ok
// SIG undefined FUN_140e9e880(void)

longlong FUN_140e9e880(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x1c8);
  FUN_1407e68c0(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_1440e9a70;
  FUN_1407be1b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 140e9e900 FUN_140e9e900 body=174 status=ok
// SIG undefined FUN_140e9e900(void)

longlong FUN_140e9e900(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x228);
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x1c8);
  FUN_1407e68c0(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_1440e9a70;
  FUN_1407be1b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a0);
  }
  return param_1;
}



// FUNCTION 140e9e9b0 FUN_140e9e9b0 body=208 status=ok
// SIG undefined FUN_140e9e9b0(void)

longlong FUN_140e9e9b0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x220);
  lVar1 = *(longlong *)(param_1 + 0x218);
  if (iVar2 != 0) {
    do {
      FUN_1407e6930(lVar1);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x218);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x1c8);
  FUN_1407e68c0(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_1440e9a70;
  FUN_1407be1b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x228);
  }
  return param_1;
}



// FUNCTION 140e9ea80 FUN_140e9ea80 body=192 status=ok
// SIG undefined FUN_140e9ea80(void)

longlong FUN_140e9ea80(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1b8);
  plVar1 = *(longlong **)(param_1 + 0x1b0);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x1b0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 140e9eb40 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFBuildBokehLUTCS::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 140e9eb80 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FOpenXRARSystem::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 140e9ebc0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoEARangeAttack::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140e9ec30 FUN_140e9ec30 body=206 status=ok
// SIG undefined FUN_140e9ec30(void)

longlong FUN_140e9ec30(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x1b8);
  plVar1 = *(longlong **)(param_1 + 0x1b0);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x1b0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 140e9ed00 FUN_140e9ed00 body=538 status=ok
// SIG undefined FUN_140e9ed00(void)

void FUN_140e9ed00(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 local_48 [32];
  
  plVar4 = (longlong *)param_1[0x23];
  lVar10 = 0;
  if (plVar4 != (longlong *)0x0) {
    uVar9 = FUN_142e1a5a0();
    lVar10 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar9);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar12 = DAT_146b33f38;
  lVar16 = DAT_146b33f38 + 0x60;
  lVar11 = FWeakObjectPtr::Get(lVar16);
  if (lVar11 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar12 + 0x68)) {
      return;
    }
    if (*(longlong *)(lVar12 + 0x70) == 0) {
      return;
    }
    lVar11 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar16,lVar11);
    if ((lVar11 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar12 + 0x68) = DAT_1464b56f4;
    }
    lVar11 = FWeakObjectPtr::Get(lVar16);
    if (lVar11 == 0) {
      return;
    }
  }
  lVar12 = FUN_142e778a0();
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
      != lVar12 + 0x88)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((bVar8) && (lVar10 != 0)) {
    puVar14 = *(undefined8 **)(lVar11 + 0x30);
    puVar15 = puVar14 + (longlong)*(int *)(lVar11 + 0x38) * 8;
    for (; puVar14 != puVar15; puVar14 = puVar14 + 8) {
      if (puVar14[1] != 0) {
        plVar4 = param_1 + 0x98;
        iVar3 = (int)param_1[0x99];
        *(int *)(param_1 + 0x99) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0x4cc) < iVar3 + 1) {
          TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeGrow(plVar4,iVar3);
        }
        lVar12 = *plVar4;
        uVar9 = puVar14[1];
        lVar11 = (longlong)iVar3 * 0xf0;
        *(undefined8 *)(lVar11 + lVar12) = *puVar14;
        ((undefined8 *)(lVar11 + lVar12))[1] = uVar9;
        uVar9 = puVar14[3];
        puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar12);
        *puVar1 = puVar14[2];
        puVar1[1] = uVar9;
        uVar5 = *(undefined4 *)((longlong)puVar14 + 0x24);
        uVar6 = *(undefined4 *)(puVar14 + 5);
        uVar7 = *(undefined4 *)((longlong)puVar14 + 0x2c);
        puVar2 = (undefined4 *)(lVar11 + 0x20 + lVar12);
        *puVar2 = *(undefined4 *)(puVar14 + 4);
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        uVar5 = *(undefined4 *)((longlong)puVar14 + 0x34);
        uVar6 = *(undefined4 *)(puVar14 + 7);
        uVar7 = *(undefined4 *)((longlong)puVar14 + 0x3c);
        puVar2 = (undefined4 *)(lVar11 + 0x30 + lVar12);
        *puVar2 = *(undefined4 *)(puVar14 + 6);
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        *(undefined1 *)(lVar11 + 0x40 + lVar12) = 0xff;
        *(undefined8 *)(lVar11 + 0x48 + lVar12) = 0;
        *(undefined4 *)(lVar11 + 0x50 + lVar12) = 0;
        *(undefined1 *)(lVar11 + 0x58 + lVar12) = 0;
        *(undefined8 *)(lVar11 + 0xe0 + lVar12) = 0;
        *(undefined8 *)(lVar11 + 0xe8 + lVar12) = 0;
        lVar12 = *plVar4;
        puVar13 = (undefined4 *)FUN_142d5bb30(lVar10,local_48,puVar14[1],0);
        uVar5 = puVar13[1];
        uVar6 = puVar13[2];
        uVar7 = puVar13[3];
        puVar2 = (undefined4 *)(lVar11 + 0x40 + lVar12);
        *puVar2 = *puVar13;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        *(undefined8 *)(lVar11 + 0x50 + lVar12) = *(undefined8 *)(puVar13 + 4);
        (**(code **)(*param_1 + 0x260))(param_1);
      }
    }
  }
  return;
}



// FUNCTION 140e9ef20 FUN_140e9ef20 body=445 status=ok
// SIG undefined FUN_140e9ef20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e9ef20(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  undefined1 local_f8 [12];
  undefined4 local_ec;
  longlong local_a0;
  longlong *local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  iVar6 = 0;
  iVar3 = *(int *)(*param_2 + 0x10);
  if (0 < iVar3) {
    lVar5 = *(longlong *)(*param_2 + 8);
    lVar8 = 0;
    do {
      iVar2 = 0;
      iVar7 = -1;
      if (0 < *(int *)(lVar5 + 0x20)) {
        piVar4 = *(int **)(lVar5 + 0x18);
        do {
          iVar7 = iVar2;
          if (*piVar4 == *(int *)(param_3 + 0x14)) break;
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 2;
          iVar7 = -1;
        } while (iVar2 < *(int *)(lVar5 + 0x20));
      }
      if (iVar7 != -1) {
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
        FUN_1407bc410(local_f8,param_3);
        local_ec = *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 4 + (longlong)iVar7 * 8);
        FUN_1407bc590(local_108,param_2,
                      *(undefined8 *)(*(longlong *)(*param_2 + 8) + 8 + (longlong)iVar6 * 0x28));
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2b8))
                  (*(longlong **)(param_1 + 0x30),local_108,local_f8);
        iVar3 = *(int *)(lVar5 + 0x20);
        iVar6 = (iVar3 - iVar7) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar5 + 0x18) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(lVar5 + 0x18) + (longlong)(iVar7 + 1) * 8),
                     (longlong)iVar6 << 3);
          iVar3 = *(int *)(lVar5 + 0x20);
        }
        *(int *)(lVar5 + 0x20) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar5 + 0x18);
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar4 = (int *)((longlong)local_68 + 0xc);
            iVar3 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
        }
        if (local_a0 == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 1;
      lVar5 = lVar5 + 0x28;
    } while (lVar8 < iVar3);
  }
  return;
}



// FUNCTION 140e9f0e0 FUN_140e9f0e0 body=115 status=ok
// SIG undefined FUN_140e9f0e0(void)

void FUN_140e9f0e0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(*param_3 + 0x118);
  if (lVar1 != 0) {
    iVar4 = 0;
    lVar2 = *param_2;
    if (0 < *(int *)(lVar2 + 0x10)) {
      do {
        lVar3 = FWeakObjectPtr::Get(*(longlong *)(lVar2 + 8) + (longlong)iVar4 * 0x28);
        if (lVar3 == lVar1) {
          FUN_14223ed20(*param_3,1);
          return;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar2 + 0x10));
    }
  }
  return;
}



// FUNCTION 140e9f160 FUN_140e9f160 body=526 status=ok
// SIG undefined FUN_140e9f160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e9f160(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  char cVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_138 [32];
  longlong *local_118 [2];
  undefined1 local_108 [16];
  undefined1 local_f8 [12];
  undefined4 local_ec;
  longlong local_a0;
  longlong *local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar13 = 0;
  lVar4 = *param_2;
  lVar5 = *(longlong *)(*param_3 + 0x118);
  uVar12 = uVar13;
  local_118[0] = param_3;
  if (0 < *(int *)(lVar4 + 0x10)) {
    do {
      iVar11 = (int)uVar12;
      lVar3 = *(longlong *)(lVar4 + 8) + (longlong)iVar11 * 0x28;
      lVar9 = FWeakObjectPtr::Get(lVar3);
      if (lVar9 == lVar5) {
        *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
        *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
        FUN_1407bc590(local_108,param_2,
                      *(undefined8 *)(*(longlong *)(*param_2 + 8) + 8 + (longlong)iVar11 * 0x28));
        uVar8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2c8))
                          (*(longlong **)(param_1 + 0x30),local_108);
        iVar11 = *(int *)(lVar3 + 0x20);
        *(int *)(lVar3 + 0x20) = iVar11 + 1;
        if (*(int *)(lVar3 + 0x24) < iVar11 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 0x18,iVar11);
        }
        plVar1 = local_118[0];
        *(undefined8 *)((longlong)iVar11 * 8 + *(longlong *)(lVar3 + 0x18)) = 0;
        puVar10 = (undefined4 *)((longlong)iVar11 * 8 + *(longlong *)(lVar3 + 0x18));
        *puVar10 = *(undefined4 *)((longlong)local_118[0] + 0x14);
        puVar10[1] = uVar8;
        FUN_1407bc410(local_f8,local_118[0]);
        local_ec = uVar8;
        FUN_14223ed20(*plVar1,1);
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2a8))
                  (*(longlong **)(param_1 + 0x30),local_108,local_f8);
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)local_68 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
        }
        if (local_a0 != 0) {
          FMemory::Free();
        }
        break;
      }
      uVar12 = (ulonglong)(iVar11 + 1U);
    } while ((int)(iVar11 + 1U) < *(int *)(lVar4 + 0x10));
  }
  puVar6 = (undefined1 *)*param_2;
  *puVar6 = 1;
  uVar12 = uVar13;
  if (0 < *(int *)(puVar6 + 0x10)) {
    do {
      FUN_1407bc590(local_118,param_2,*(undefined8 *)(*(longlong *)(*param_2 + 8) + 8 + uVar13));
      cVar7 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x298))
                        (*(longlong **)(param_1 + 0x30),local_118);
      if (cVar7 == '\0') {
        *puVar6 = 0;
        return;
      }
      uVar14 = (int)uVar12 + 1;
      uVar13 = uVar13 + 0x28;
      uVar12 = (ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(puVar6 + 0x10));
  }
  return;
}



// FUNCTION 140e9f370 FUN_140e9f370 body=498 status=ok
// SIG undefined FUN_140e9f370(void)

void FUN_140e9f370(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res10 [8];
  undefined4 uStack_2c;
  
  if (param_2 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x28);
    plVar1 = plVar4 + iVar2;
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == param_2) {
        return;
      }
    }
    *(int *)(param_1 + 0x28) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x20);
    }
    *(longlong *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x20)) = param_2;
    uVar3 = *(undefined8 *)(param_1 + 8);
    plVar1 = (longlong *)(param_2 + 0x3b0);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar4 + 1,uVar3);
      *(undefined4 *)(plVar4 + 2) = 0x40eb3ba0;
      *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_2c;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
      iVar2 = *(int *)(param_2 + 0x3b8);
      *(int *)(param_2 + 0x3b8) = iVar2 + 1;
      if (*(int *)(param_2 + 0x3bc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    plVar1 = (longlong *)(param_2 + 0x3c8);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar4 + 1,uVar3);
      *(undefined4 *)(plVar4 + 2) = 0x40eb3da0;
      *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_2c;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
      iVar2 = *(int *)(param_2 + 0x3d0);
      *(int *)(param_2 + 0x3d0) = iVar2 + 1;
      if (*(int *)(param_2 + 0x3d4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 140e9f570 FUN_140e9f570 body=52 status=ok
// SIG undefined FUN_140e9f570(void)

void FUN_140e9f570(longlong *param_1,float param_2)

{
  *(float *)((longlong)param_1 + 0x204) = param_2 + *(float *)((longlong)param_1 + 0x204);
  (**(code **)(*param_1 + 0x358))(param_1,1);
  *(undefined4 *)(param_1 + 0x43) = 0;
  return;
}



// FUNCTION 140e9f5b0 FUN_140e9f5b0 body=218 status=ok
// SIG undefined FUN_140e9f5b0(void)

void FUN_140e9f5b0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_res10 [2];
  int local_res20 [2];
  longlong local_28;
  longlong *local_20;
  longlong *local_18;
  
  if ((param_2 != 0) && (param_3 != (longlong *)0x0)) {
    local_res10[0] = param_2;
    uVar1 = FUN_142e7dfd0();
    lVar2 = (**(code **)(*param_3 + 0x628))(param_3,uVar1);
    if (lVar2 != 0) {
      local_28 = lVar2;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x988,local_res20);
      plVar4 = (longlong *)0x0;
      if (local_res20[0] != -1) {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x988) + (longlong)local_res20[0] * 0x18);
      }
      plVar3 = plVar4 + 1;
      if (plVar4 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
      }
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = lVar2;
        return;
      }
      local_20 = local_res10;
      local_18 = &local_28;
      TSet<TTuple<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,UFlareSimulatedSpacecraft_*_const_&>_>
                (param_1 + 0x988,local_res20,&local_20,0);
    }
  }
  return;
}



// FUNCTION 140e9f690 FUN_140e9f690 body=254 status=ok
// SIG undefined FUN_140e9f690(void)

void FUN_140e9f690(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_2 + 0x48)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10);
  }
  uVar6 = 0;
  plVar3 = *(longlong **)(param_2 + 0x40);
  uVar5 = (longlong)*(int *)(param_2 + 0x48) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_2 + 0x48) < plVar3) {
    uVar5 = uVar6;
  }
  uVar4 = uVar6;
  if (uVar5 != 0) {
    do {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        iVar1 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar1 + 1;
        if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar1);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = lVar2;
      }
      plVar3 = plVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar5);
  }
  plVar3 = *(longlong **)(param_2 + 0x30);
  uVar5 = (longlong)*(int *)(param_2 + 0x38) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_2 + 0x38) < plVar3) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      if (*plVar3 != 0) {
        FUN_140e9f370(param_1);
      }
      plVar3 = plVar3 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
  }
  return;
}



// FUNCTION 140e9f7a0 FUN_140e9f7a0 body=170 status=ok
// SIG undefined FUN_140e9f7a0(void)

void FUN_140e9f7a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  
  if (((*param_2 != 0) && (iVar5 = FUN_14233f450(), iVar5 == 3)) && (lVar1 = *param_2, lVar1 != 0))
  {
    lVar6 = UUGJournalKey::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (cVar3 = FUN_142dc6710(param_1), cVar3 != '\0')) &&
       (cVar3 = FUN_1407c3030(param_1 + 0x6c0), cVar3 == '\0')) {
      uVar4 = FUN_140eac320(lVar1);
      *(undefined1 *)(param_1 + 0x6b5) = uVar4;
      *(int *)(param_1 + 0x6b8) = (int)param_2[6];
    }
  }
  return;
}



// FUNCTION 140e9f850 FUN_140e9f850 body=908 status=ok
// SIG undefined FUN_140e9f850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e9f850(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  float *pfVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  undefined1 local_270;
  undefined1 local_268 [8];
  float local_260;
  undefined1 local_258 [56];
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_19c [8];
  undefined1 local_194 [60];
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  float local_144;
  undefined8 local_140;
  float local_138;
  longlong local_108 [4];
  longlong *local_e8;
  int local_d8;
  longlong local_b8;
  undefined1 local_a4;
  undefined1 local_9c;
  undefined1 local_90;
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  lVar1 = *(longlong *)(param_1 + 0x5f8);
  if (lVar1 == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  lVar4 = FUN_1413f82e0();
  if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  pfVar5 = (float *)(**(code **)(*plVar2 + 0x308))(plVar2,local_268);
  fVar12 = SQRT(*pfVar5 * *pfVar5 + pfVar5[1] * pfVar5[1] + pfVar5[2] * pfVar5[2]);
  if (fVar12 < *(float *)(param_1 + 0x388) || fVar12 == *(float *)(param_1 + 0x388))
  goto LAB_140e9fb6a;
  plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x3b0);
  plVar8 = plVar2;
  if (plVar6 != (longlong *)0x0) {
    plVar8 = plVar6;
  }
  fVar9 = (float)FUN_142c98860(lVar1 + 0xd8,plVar8);
  fVar10 = (float)FUN_142c98860(param_1 + 0x350,plVar2);
  fVar11 = (float)FUN_142d9cad0(lVar1 + 0x110,plVar2);
  local_278 = (undefined8 *)((ulonglong)local_278 & 0xffffffffffffff00);
  FUN_140a7aa40(local_258,plVar2,plVar6,0);
  if (plVar6 == (longlong *)0x0) {
    local_220 = 0;
  }
  else {
    local_220 = (**(code **)(*plVar6 + 0x668))(plVar6);
  }
  local_210 = *(undefined8 *)(lVar1 + 200);
  local_218 = *(undefined8 *)(lVar1 + 0xd0);
  FWeakObjectPtr::operator=(local_19c,plVar2);
  lVar4 = plVar2[0x2d];
  if (lVar4 == 0) {
LAB_140e9fa42:
    lVar4 = 0;
  }
  else {
    lVar7 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140e9fa42;
  }
  FWeakObjectPtr::operator=(local_194,lVar4);
  local_1f4 = *(undefined8 *)(param_2 + 0x14);
  local_1ec = *(undefined4 *)(param_2 + 0x1c);
  local_1dc = *(undefined8 *)(param_2 + 0x2c);
  local_158 = *(undefined8 *)(param_2 + 0x14);
  local_1d4 = *(undefined4 *)(param_2 + 0x34);
  local_14c = *(undefined8 *)(param_2 + 0x2c);
  local_150 = *(undefined4 *)(param_2 + 0x1c);
  local_144 = *(float *)(param_2 + 0x34);
  local_260 = local_144 * fVar11;
  local_140 = CONCAT44((float)((ulonglong)local_14c >> 0x20) * fVar11,(float)local_14c * fVar11);
  local_1e8 = local_1f4;
  local_1e0 = local_1ec;
  local_1d0 = local_1dc;
  local_1c8 = local_1d4;
  local_138 = local_260;
  FUN_140a82f00(local_258,fVar9 * fVar12 * fVar10 + 1.0,1,0);
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_90 = 0;
  local_9c = 0;
  local_a4 = 0;
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    plVar8 = local_108;
    if (local_e8 != (longlong *)0x0) {
      plVar8 = local_e8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_140e9fb6a:
  if (*(longlong *)(lVar1 + 0x130) != 0) {
    local_270 = 0;
    local_278 = &DAT_1466ad4f0;
    FUN_142d68ea0(*(longlong *)(lVar1 + 0x130),plVar2,param_2,1);
  }
  if (plVar2[0x1cd] != 0) {
    *(undefined8 *)(plVar2[0x1cd] + 0x18c) = 0;
  }
  return;
}



// FUNCTION 140e9fbe0 FUN_140e9fbe0 body=149 status=ok
// SIG undefined FUN_140e9fbe0(void)

void FUN_140e9fbe0(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = FUN_140ea52e0();
  if (cVar1 != '\0') {
    pcVar2 = *(char **)(param_1 + 0x4c0);
    pcVar3 = pcVar2 + (longlong)*(int *)(param_1 + 0x4c8) * 0xf0;
    for (; pcVar2 != pcVar3; pcVar2 = pcVar2 + 0xf0) {
      if (*pcVar2 == param_3) {
        cVar1 = FUN_1407c3030(pcVar2 + 0x58);
        if (cVar1 != '\0') {
          return;
        }
        FUN_140e9fec0(param_1,pcVar2,param_2,param_4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e9fc80 FUN_140e9fc80 body=566 status=ok
// SIG undefined FUN_140e9fc80(void)

void FUN_140e9fc80(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  longlong local_res20;
  longlong *local_48;
  undefined8 uStack_40;
  
  local_res20 = param_4;
  cVar3 = FUN_140ea52e0();
  if (cVar3 != '\0') {
    lVar7 = *(longlong *)(param_1 + 0x4c0);
    lVar8 = (longlong)*(int *)(param_1 + 0x4c8) * 0xf0 + lVar7;
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0xf0) {
      if (*(longlong *)(lVar7 + 0x18) != 0) {
        lVar4 = FUN_142e49950();
        lVar9 = *(longlong *)(lVar7 + 0x18);
        for (lVar1 = lVar9; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == lVar4) goto LAB_140e9fd00;
        }
      }
      lVar9 = 0;
LAB_140e9fd00:
      if (local_res20 != 0) {
        lVar4 = FUN_142e49950();
        for (lVar1 = local_res20; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          lVar5 = local_res20;
          if (lVar1 == lVar4) goto LAB_140e9fd30;
        }
      }
      lVar5 = 0;
LAB_140e9fd30:
      if (lVar9 == lVar5) {
        if (lVar7 == 0) {
          return;
        }
        cVar3 = FUN_142d52a00(lVar7 + 0x40);
        if (cVar3 == '\0') {
          return;
        }
        cVar3 = FUN_1407c3030(lVar7 + 0x58);
        if (cVar3 != '\0') {
          return;
        }
        if ((param_3 == (longlong *)0x0) || (*(longlong *)(lVar7 + 0x20) == 0)) {
          fVar10 = 1.0;
        }
        else {
          uStack_40 = 0;
          local_48 = param_3;
          fVar10 = (float)FUN_142ca2f00(*(longlong *)(lVar7 + 0x20),&local_48,0x3f800000);
        }
        bVar2 = false;
        if (param_3 != (longlong *)0x0) {
          uVar6 = FUN_142e0a580();
          lVar8 = (**(code **)(*param_3 + 0x628))(param_3,uVar6);
          if ((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x2a8))) {
            cVar3 = FUN_142d3e570(*(undefined8 *)(param_1 + 0x118),&local_res20);
            bVar2 = false;
            if (cVar3 == '\0') {
              bVar2 = true;
            }
          }
        }
        if ((*(longlong **)(param_1 + 0x118) == (longlong *)0x0) ||
           (*(longlong *)(lVar7 + 0x28) == 0)) {
          fVar11 = 1.0;
        }
        else {
          uStack_40 = 0;
          local_48 = *(longlong **)(param_1 + 0x118);
          fVar11 = (float)FUN_142ca2f00(*(longlong *)(lVar7 + 0x28),&local_48,0x3f800000);
        }
        if ((bVar2) && (fVar11 < 1.0)) {
          fVar11 = 1.0;
        }
        FUN_140e9fec0(param_1,lVar7,param_2,-(fVar10 * param_5 * fVar11));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e9fec0 FUN_140e9fec0 body=509 status=ok
// SIG undefined FUN_140e9fec0(void)

void FUN_140e9fec0(longlong param_1,char *param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  cVar1 = FUN_142d52a00(param_2 + 0x40);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(param_2 + 0x40);
    uVar2 = FArchive::operator<<(uVar2);
    fVar5 = (float)FUN_142d5fea0(uVar2);
    local_c8 = *(undefined8 *)(param_2 + 0x40);
    uStack_c0 = *(undefined8 *)(param_2 + 0x48);
    local_b8 = *(undefined8 *)(param_2 + 0x50);
    FUN_142d55d50(&local_c8,param_4);
    lVar4 = *(longlong *)(param_1 + 0x118);
    if (lVar4 != 0) {
      uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar2);
      if ((plVar3 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3), lVar4 != 0)
         ) {
        local_a8 = (**(code **)(*plVar3 + 0x38))(plVar3);
        local_98 = *(undefined8 *)param_2;
        uStack_90 = *(undefined8 *)(param_2 + 8);
        local_88 = *(undefined8 *)(param_2 + 0x10);
        uStack_80 = *(undefined8 *)(param_2 + 0x18);
        local_78 = *(undefined4 *)(param_2 + 0x20);
        uStack_74 = *(undefined4 *)(param_2 + 0x24);
        uStack_70 = *(undefined4 *)(param_2 + 0x28);
        uStack_6c = *(undefined4 *)(param_2 + 0x2c);
        local_68 = *(undefined4 *)(param_2 + 0x30);
        uStack_64 = *(undefined4 *)(param_2 + 0x34);
        uStack_60 = *(undefined4 *)(param_2 + 0x38);
        uStack_5c = *(undefined4 *)(param_2 + 0x3c);
        local_a0 = param_3;
        local_58 = param_4;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar4,&local_a8)
        ;
      }
    }
    uVar2 = FUN_142d52a20(param_2 + 0x40);
    uVar2 = FArchive::operator<<(uVar2);
    fVar6 = (float)FUN_142d5fea0(uVar2);
    if ((((0.0 < fVar5) && (param_3 != 0)) && ((*(uint *)(param_3 + 0x4cc) >> 1 & 1) != 0)) &&
       ((fVar6 < 0.0001 && (lVar4 = *(longlong *)(param_3 + 0x488), lVar4 != 0)))) {
      uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined8 *)(param_1 + 0x118),*param_2);
      }
    }
    if (((*param_2 == '\0') && (param_3 != 0)) && ((0.0 < fVar5 && (fVar6 < 0.0001)))) {
      FWeakObjectPtr::operator=(param_1 + 0x3b0,*(undefined8 *)(param_3 + 0x488));
    }
  }
  return;
}



// FUNCTION 140ea00c0 FUN_140ea00c0 body=257 status=ok
// SIG undefined FUN_140ea00c0(void)

void FUN_140ea00c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = FUN_140b7fe10(param_2);
  if (lVar1 != 0) {
    local_48 = *(undefined4 *)(param_1 + 0x520);
    local_40 = *(undefined8 *)(param_1 + 0x528);
    uStack_38 = *(undefined8 *)(param_1 + 0x530);
    local_30 = *(undefined1 *)(param_1 + 0x538);
    local_c = *(undefined4 *)(param_1 + 0x55c);
    local_28 = *(undefined8 *)(param_1 + 0x540);
    local_20 = *(undefined4 *)(param_1 + 0x548);
    local_10 = *(undefined4 *)(param_1 + 0x558);
    local_1c = *(undefined1 *)(param_1 + 0x54c);
    local_44 = *(undefined4 *)(param_1 + 0x524);
    local_18 = *(undefined8 *)(param_1 + 0x550);
    FUN_1409f8550(lVar1,&local_48,0,*(undefined4 *)(param_1 + 0x518),0,0,0,0xc0000000,0xbf800000,0,0
                 );
  }
  return;
}



// FUNCTION 140ea01d0 FUN_140ea01d0 body=430 status=ok
// SIG undefined FUN_140ea01d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140ea01d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8 [16];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  (**(code **)(*(longlong *)(param_1 + 0x458) + 0x10))((longlong *)(param_1 + 0x458),local_b8);
  plVar3 = local_b8;
  if (local_38 != (longlong *)0x0) {
    plVar3 = local_38;
  }
  plVar6 = plVar3 + (int)local_30;
  for (; plVar3 != plVar6; plVar3 = plVar3 + 1) {
    lVar5 = *plVar3;
    if (lVar5 == 0) {
LAB_140ea0290:
      bVar1 = false;
    }
    else {
      lVar2 = FUN_141477600();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((!bVar1) || (*(longlong *)(lVar5 + 0x980) == 0)) goto LAB_140ea0290;
      bVar1 = true;
    }
    if (bVar1) {
      plVar3 = (longlong *)SMenuAnchor::GetChildren(param_1);
      plVar6 = (longlong *)*plVar3;
      plVar3 = plVar6 + (int)plVar3[1];
      goto joined_r0x000140ea0305;
    }
  }
  uVar4 = 1;
LAB_140ea02a9:
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return uVar4;
joined_r0x000140ea0305:
  if (plVar6 == plVar3) goto LAB_140ea0362;
  if (*plVar6 != 0) {
    lVar5 = *(longlong *)(*plVar6 + 0x118);
    if (lVar5 == 0) {
LAB_140ea0351:
      lVar5 = 0;
    }
    else {
      lVar2 = USoCharacterMovementComponent::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140ea0351;
    }
    if (lVar5 == 0) {
      uVar4 = 0;
      goto LAB_140ea02a9;
    }
  }
  plVar6 = plVar6 + 1;
  goto joined_r0x000140ea0305;
LAB_140ea0362:
  uVar4 = 1;
  goto LAB_140ea02a9;
}



// FUNCTION 140ea0380 FUN_140ea0380 body=2345 status=ok
// SIG undefined FUN_140ea0380(void)

void FUN_140ea0380(longlong param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  code *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  code *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  code *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  code *local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  code *local_128;
  longlong lStack_120;
  code *local_118;
  longlong lStack_110;
  undefined1 *local_108;
  longlong lStack_100;
  code *local_f8;
  longlong lStack_f0;
  code *local_e8;
  longlong lStack_e0;
  code *local_d8;
  longlong lStack_d0;
  code *local_c8;
  longlong lStack_c0;
  code *local_b8;
  longlong lStack_b0;
  code *local_a8;
  longlong lStack_a0;
  code *local_98;
  longlong lStack_90;
  code *local_88;
  longlong lStack_80;
  undefined1 local_78 [24];
  longlong *local_60;
  
  lVar12 = *(longlong *)(param_1 + 0x118);
  if (lVar12 == 0) {
    return;
  }
  if (*(char *)(lVar12 + 0x128) != '\x03') {
    return;
  }
  uVar6 = UGameplayTagAssetInterface::GetPrivateStaticClass();
  plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar12,uVar6);
  pwVar14 = (wchar_t *)0x0;
  if (plVar7 != (longlong *)0x0) {
    lVar8 = (**(code **)(*plVar7 + 0x30))(plVar7);
    if (lVar8 != 0) {
      uStack_190 = 0;
      local_198 = FUN_140eb7da0;
      lStack_120 = (ulonglong)uStack_18c << 0x20;
      local_128 = FUN_140eb7da0;
      pwVar9 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakStatusEffectManagerComponent::OnOwnerDied",L"::");
      pwVar4 = pwVar14;
      while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res10,pwVar4 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (lVar8,param_1,&local_128,local_res10);
    }
    lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if (lVar8 != 0) {
      uStack_190 = 0;
      local_198 = FUN_140eb8480;
      lStack_110 = (ulonglong)uStack_18c << 0x20;
      local_118 = FUN_140eb8480;
      pwVar9 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakStatusEffectManagerComponent::OnOwnerHealthy",L"::");
      pwVar4 = pwVar14;
      while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res18,pwVar4 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (lVar8,param_1,&local_118,local_res18);
    }
    lVar8 = (**(code **)(*plVar7 + 0x28))(plVar7);
    if (lVar8 != 0) {
      uStack_190 = 0;
      local_198 = (code *)&LAB_140eb84b0;
      lStack_100 = (ulonglong)uStack_18c << 0x20;
      local_108 = &LAB_140eb84b0;
      pwVar9 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakStatusEffectManagerComponent::OnOwnerInjured",L"::");
      pwVar4 = pwVar14;
      while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res20,pwVar4 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (lVar8,param_1,&local_108,local_res20);
    }
  }
  lVar8 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
      != lVar8 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar8 = *(longlong *)(lVar12 + 0x910);
  }
  else {
    lVar8 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140ea06d9;
    lVar8 = *(longlong *)(lVar12 + 0x520);
  }
  if (lVar8 != 0) {
    uStack_190 = 0;
    local_198 = FUN_140eb84c0;
    plVar7 = (longlong *)(lVar8 + 0x1e8);
    plVar10 = (longlong *)FMemory::Realloc(0,0x30);
    local_60 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      *plVar10 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar10 + 1,param_1);
      *(undefined4 *)(plVar10 + 2) = (undefined4)local_198;
      *(undefined4 *)((longlong)plVar10 + 0x14) = local_198._4_4_;
      *(undefined4 *)(plVar10 + 3) = uStack_190;
      *(uint *)((longlong)plVar10 + 0x1c) = uStack_18c;
      lVar11 = FDelegateHandle::GenerateNewID();
      plVar10[5] = lVar11;
      *plVar10 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_198);
      iVar1 = *(int *)(lVar8 + 0x1f0);
      *(int *)(lVar8 + 0x1f0) = iVar1 + 1;
      if (*(int *)(lVar8 + 500) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
      }
      lVar8 = *plVar7;
      *(longlong **)(lVar8 + (longlong)iVar1 * 0x10) = plVar10;
      *(undefined4 *)(lVar8 + 8 + (longlong)iVar1 * 0x10) = 3;
    }
  }
LAB_140ea06d9:
  lVar8 = FUN_140eae6d0(param_1,lVar12);
  if (lVar8 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x450) != '\0') {
    uVar6 = UUserObjectListEntry::GetPrivateStaticClass();
    plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar12,uVar6);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,local_78);
      cVar5 = FUN_142d52a00(local_78);
      if (cVar5 != '\0') {
        uVar6 = FUN_142d52a20(local_78);
        lVar12 = FArchive::operator<<(uVar6);
        lVar12 = FUN_142d62010(lVar8,*(undefined8 *)(*(longlong *)(lVar12 + 8) + 0x30));
        uStack_180 = 0;
        local_188 = FUN_140eb97e0;
        lStack_f0 = (ulonglong)uStack_17c << 0x20;
        local_f8 = FUN_140eb97e0;
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakStatusEffectManagerComponent::OnShieldNowFull",L"::");
        pwVar4 = pwVar14;
        while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(&local_148,pwVar4 + 2,1);
        FUN_1407260e0(lVar12 + 0x28,param_1,&local_f8,local_148);
        uStack_180 = 0;
        local_188 = FUN_140eb99a0;
        lStack_e0 = (ulonglong)uStack_17c << 0x20;
        local_e8 = FUN_140eb99a0;
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakStatusEffectManagerComponent::OnShieldNowNotFull",L"::");
        pwVar4 = pwVar14;
        while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(&local_178,pwVar4 + 2,1);
        FUN_1407260e0(lVar12 + 0x38,param_1,&local_e8,local_178);
        uStack_180 = 0;
        local_188 = FUN_140eb9740;
        lStack_d0 = (ulonglong)uStack_17c << 0x20;
        local_d8 = FUN_140eb9740;
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakStatusEffectManagerComponent::OnShieldNowDepleted",L"::");
        pwVar4 = pwVar14;
        while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(&local_168,pwVar4 + 2,1);
        FUN_1407260e0(lVar12 + 8,param_1,&local_d8,local_168);
        uStack_180 = 0;
        local_188 = FUN_140eb98f0;
        lStack_c0 = (ulonglong)uStack_17c << 0x20;
        local_c8 = FUN_140eb98f0;
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakStatusEffectManagerComponent::OnShieldNowNotDepleted",L"::");
        pwVar4 = pwVar14;
        while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(&local_158,pwVar4 + 2,1);
        FUN_1407260e0(lVar12 + 0x18,param_1,&local_c8,local_158);
      }
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar12 = DAT_146b33f38;
  lVar13 = DAT_146b33f38 + 0x60;
  lVar11 = FWeakObjectPtr::Get(lVar13);
  if (lVar11 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar12 + 0x68)) {
      return;
    }
    if (*(longlong *)(lVar12 + 0x70) == 0) {
      return;
    }
    lVar11 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar13,lVar11);
    if ((lVar11 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar12 + 0x68) = DAT_1464b56f4;
    }
    lVar11 = FWeakObjectPtr::Get(lVar13);
    if (lVar11 == 0) {
      return;
    }
  }
  lVar12 = FUN_142e778a0();
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
      != lVar12 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar12 = *(longlong *)(lVar11 + 0x30);
    lVar11 = (longlong)*(int *)(lVar11 + 0x38) * 0x40 + lVar12;
    for (; lVar12 != lVar11; lVar12 = lVar12 + 0x40) {
      if ((*(longlong *)(lVar12 + 8) != 0) && (*(longlong *)(*(longlong *)(lVar12 + 8) + 0x30) != 0)
         ) {
        lVar13 = FUN_142d62010(lVar8);
        local_198 = FUN_140eb9620;
        uStack_190 = 0;
        lStack_b0 = (ulonglong)uStack_18c << 0x20;
        local_b8 = FUN_140eb9620;
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakStatusEffectManagerComponent::OnResourceNowNotFilled",L"::");
        pwVar4 = pwVar14;
        while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(&local_140,pwVar4 + 2,1);
        FUN_1407260e0(lVar13 + 0x38,param_1,&local_b8,local_140);
        uStack_150 = 0;
        local_158 = AK::MemoryMgr::StartProfileThreadUsage;
        lStack_a0 = (ulonglong)uStack_14c << 0x20;
        local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakStatusEffectManagerComponent::OnResourceNowFilled",L"::");
        pwVar4 = pwVar14;
        while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(&local_138,pwVar4 + 2,1);
        FUN_1407260e0(lVar13 + 0x28,param_1,&local_a8,local_138);
        uStack_160 = 0;
        local_168 = FUN_140eb92a0;
        lStack_90 = (ulonglong)uStack_15c << 0x20;
        local_98 = FUN_140eb92a0;
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakStatusEffectManagerComponent::OnResourceNowDepleted",L"::");
        pwVar4 = pwVar14;
        while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(&local_130,pwVar4 + 2,1);
        FUN_1407260e0(lVar13 + 8,param_1,&local_98,local_130);
        uStack_170 = 0;
        local_178 = FUN_140eb9340;
        lStack_80 = (ulonglong)uStack_16c << 0x20;
        local_88 = FUN_140eb9340;
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakStatusEffectManagerComponent::OnResourceNowNotDepleted",L"::");
        pwVar4 = pwVar14;
        while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(&local_188,pwVar4 + 2,1);
        FUN_1407260e0(lVar13 + 0x18,param_1,&local_88,local_188);
      }
    }
  }
  return;
}



// FUNCTION 140ea0cb0 FUN_140ea0cb0 body=820 status=ok
// SIG undefined FUN_140ea0cb0(void)

void FUN_140ea0cb0(longlong *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  
  if (param_1[0xa6] != 0) {
    lVar9 = *(longlong *)(param_1[0xa6] + 0x408);
    if (lVar9 != 0) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        param_1[0xa8] = lVar9;
        if (*(char *)(param_1[0xa6] + 0x418) == '\x02') {
          uVar6 = FUN_142dfdf30();
          plVar7 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar6);
          if (plVar7 != (longlong *)0x0) {
            plVar8 = *(longlong **)(lVar9 + 0x10d8);
            if (plVar8 == (longlong *)0x0) {
              uVar2 = (**(code **)(*plVar7 + 0x400))(plVar7);
              uVar3 = (**(code **)(*plVar7 + 0x408))(plVar7);
            }
            else {
              uVar2 = (**(code **)(*plVar8 + 0x400))(plVar8);
              uVar3 = (**(code **)(*plVar8 + 0x408))(plVar8);
            }
            (**(code **)(*plVar7 + 0x3f8))(plVar7,uVar2);
            FUN_142ccf590(plVar7,uVar2);
            iVar4 = (**(code **)(param_1[0x99] + 0xe8))(param_1 + 0x99);
            uVar10 = 0;
            if (0 < iVar4) {
              do {
                plVar7 = (longlong *)
                         (**(code **)(param_1[0x99] + 0xf0))(param_1 + 0x99,uVar10 & 0xff);
                if (plVar7 != (longlong *)0x0) {
                  uVar6 = FUN_142dfdf30();
                  plVar8 = (longlong *)(**(code **)(*plVar7 + 0x628))(plVar7,uVar6);
                  if (plVar8 != (longlong *)0x0) {
                    (**(code **)(*plVar8 + 0x3f8))(plVar8,uVar2);
                    FUN_142ccf590(plVar8,uVar3);
                    uVar6 = FUN_1430bdfe0();
                    lVar9 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar6);
                    if (lVar9 != 0) {
                      FUN_14307ea10(lVar9);
                    }
                  }
                }
                uVar10 = uVar10 + 1;
              } while ((int)uVar10 < iVar4);
            }
          }
        }
        lVar9 = (**(code **)(*(longlong *)param_1[0xa8] + 0x670))();
        if (lVar9 != 0) {
          lVar5 = FUN_14145f370();
          iVar4 = *(int *)(lVar5 + 0x90);
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < iVar4) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)iVar4 * 8)
              != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_140d18a00(lVar9,CONCAT71((int7)(int3)((uint)iVar4 >> 8),1));
          }
        }
        goto LAB_140ea0f55;
      }
    }
    if ((*(char *)(param_1[0xa6] + 0x418) == '\0') && ((longlong *)param_1[0xa8] != (longlong *)0x0)
       ) {
      lVar9 = (**(code **)(*(longlong *)param_1[0xa8] + 0x670))();
      if (lVar9 != 0) {
        lVar5 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_140d18a00(lVar9,0);
        }
      }
      param_1[0xa8] = 0;
    }
  }
LAB_140ea0f55:
  if ((((char)param_1[0x25] == '\x03') && (param_1[0xa6] != 0)) && (param_1[0xa4] != 0)) {
    FUN_142df2b50(param_1[0xa4],0);
    plVar7 = (longlong *)FUN_142ceeb40(param_1[0xa6],0);
    if (plVar7 != (longlong *)0x0) {
      uVar6 = UCircularThrobber::GetPrivateStaticClass();
      lVar9 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar6);
      if (lVar9 != 0) {
        FUN_142df2b50(param_1[0xa4],lVar9);
        return;
      }
    }
    lVar9 = param_1[0xa4];
    if (lVar9 != 0) {
      FUN_142df2ca0(lVar9,*(undefined8 *)(lVar9 + 0x188));
    }
  }
  return;
}



// FUNCTION 140ea0ff0 FUN_140ea0ff0 body=2132 status=ok
// SIG undefined FUN_140ea0ff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ea0ff0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong local_res20;
  ulonglong in_stack_fffffffffffffec8;
  undefined8 in_stack_fffffffffffffed0;
  undefined4 uVar23;
  uint in_stack_fffffffffffffed8;
  uint in_stack_fffffffffffffee8;
  longlong local_f8 [3];
  undefined4 local_e0;
  longlong local_d8;
  int local_d0;
  uint uStack_cc;
  uint *puStack_c8;
  undefined4 local_c0;
  uint uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  ulonglong uVar16;
  
  uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
  lVar8 = *(longlong *)(param_1 + 0xb0);
  plVar17 = (longlong *)0x0;
  if (lVar8 != 0) {
    plVar17 = *(longlong **)(lVar8 + 0x118);
  }
  if (((plVar17 != (longlong *)0x0) && (lVar8 != 0)) && (param_2 != 0)) {
    *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xfe;
    *(longlong *)(param_1 + 0x118) = param_2;
    lVar8 = (**(code **)(*plVar17 + 0x148))(plVar17);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(lVar8 + 0x790);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x48);
    if (*(char *)(param_2 + 0x138) != '\0') {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(plVar17[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar17[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && ((char)plVar17[600] == '\0')) {
        *(undefined1 *)(plVar17 + 600) = 1;
        *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 2;
      }
    }
    FUN_142d8eef0(plVar17,DAT_146871b50);
    FUN_142d8ef90(plVar17,DAT_146871b50);
    FUN_142d6e060(plVar17,DAT_146871b50);
    if (*(longlong *)(param_2 + 0x58) != 0) {
      uVar9 = UScrollBox::GetPrivateStaticClass();
      lVar8 = (**(code **)(*plVar17 + 0x628))(plVar17,uVar9);
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x868) = *(undefined8 *)(param_2 + 0x58);
      }
    }
    lVar8 = FUN_1413f82e0();
    if ((*(int *)(plVar17[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar17[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      local_res20 = plVar17[0x98];
    }
    else {
      local_res20 = (**(code **)(*plVar17 + 0x3b8))(plVar17);
      if (((local_res20 != 0) &&
          (lVar8 = *(longlong *)(local_res20 + 0x10), lVar15 = FUN_1429ff160(), lVar8 == lVar15)) &&
         (local_res20 == plVar17[0x2d])) {
        local_d8 = FUN_1429bed90();
        lVar8 = (**(code **)(*plVar17 + 0x628))(plVar17,local_d8);
        if (lVar8 != 0) {
          local_res20 = lVar8;
        }
      }
    }
    if (*(longlong *)(param_2 + 0x38) != 0) {
      lVar10 = USafeZone::GetPrivateStaticClass();
      lVar8 = *(longlong *)(param_2 + 0x38);
      for (lVar15 = lVar8; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x30)) {
        if (lVar15 == lVar10) {
          if (lVar8 != 0) {
            local_f8[2] = _DAT_1468b5d90;
            local_e0 = DAT_1468b5d98;
            local_f8[0] = 0;
            local_f8[1] = 0;
            lVar15 = 0;
            if (lVar8 != 0) {
              lVar10 = USafeZone::GetPrivateStaticClass();
              for (lVar8 = *(longlong *)(param_2 + 0x38);
                  (lVar15 = 0, lVar8 != 0 &&
                  (lVar15 = *(longlong *)(param_2 + 0x38), lVar8 != lVar10));
                  lVar8 = *(longlong *)(lVar8 + 0x30)) {
              }
            }
            in_stack_fffffffffffffee8 = 0;
            in_stack_fffffffffffffed8 = 0;
            in_stack_fffffffffffffec8 = 0;
            FUN_1409e0430(local_50,lVar15,plVar17,2,0,
                          CONCAT44(uVar23,*(undefined4 *)(param_2 + 0x48)),0,local_f8 + 2,0,local_f8
                          ,0);
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_48 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar2 = (int *)((longlong)local_48 + 0xc);
                iVar12 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*local_48 + 8))(local_48,1);
                }
              }
            }
            if (local_f8[0] != 0) {
              FMemory::Free();
            }
          }
          break;
        }
      }
    }
    lVar8 = UMultiLineEditableTextBox::GetPrivateStaticClass();
    if (*(longlong *)(param_2 + 0x30) != 0) {
      lVar11 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
      lVar15 = *(longlong *)(param_2 + 0x30);
      for (lVar10 = lVar15; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
        if (lVar10 == lVar11) {
          if (lVar15 != 0) {
            lVar8 = lVar15;
          }
          break;
        }
      }
    }
    lVar15 = *(longlong *)(param_1 + 0xb0);
    uVar16 = 0;
    uVar14 = 0;
    uVar21 = uVar16;
    if (0 < *(int *)(lVar15 + 0x348)) {
LAB_140ea1360:
      uVar13 = (uint)uVar16;
      local_d8 = *(longlong *)(lVar15 + 0x340);
      if (*(longlong *)(local_d8 + uVar21) != 0) {
        local_f8[0] = 0;
        lVar15 = local_res20;
        if (*(longlong *)(local_d8 + 8 + uVar21) != 0) {
          plVar1 = plVar17 + 0x56;
          uStack_cc = 1;
          uVar13 = *(uint *)(plVar17 + 0x5b);
          puVar3 = (uint *)(plVar17 + 0x58);
          local_d0 = 0;
          uStack_bc = 0;
          iStack_b8 = 0;
          if (uVar13 != 0) {
            puVar20 = (uint *)plVar17[0x5a];
            if ((uint *)plVar17[0x5a] == (uint *)0x0) {
              puVar20 = puVar3;
            }
            uVar4 = *puVar20;
            while (uVar4 == 0) {
              lVar15 = (longlong)local_d0;
              iStack_b8 = iStack_b8 + 0x20;
              iVar12 = local_d0 + 1;
              bVar5 = (int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d0;
              local_d0 = iVar12;
              if (bVar5) goto LAB_140ea143f;
              uVar4 = puVar20[lVar15 + 1];
            }
            uStack_cc = uVar4 - 1 & uVar4 ^ uVar4;
            iVar12 = 0x1f;
            if (uStack_cc != 0) {
              for (; uStack_cc >> iVar12 == 0; iVar12 = iVar12 + -1) {
              }
            }
            if (uStack_cc == 0) {
              iVar12 = 0x20;
            }
            else {
              iVar12 = 0x1f - iVar12;
            }
            uStack_bc = (iStack_b8 - iVar12) + 0x1f;
            if ((int)uVar13 < (int)uStack_bc) {
LAB_140ea143f:
              uStack_bc = uVar13;
            }
          }
          local_c0 = 0xffffffff;
          uVar4 = *(uint *)(plVar17 + 0x5b);
          uStack_98 = CONCAT44(uStack_cc,local_d0);
          uStack_88 = CONCAT44(uStack_bc,0xffffffff);
          uStack_80 = CONCAT44(uStack_b4,iStack_b8);
          uVar18 = -1 << ((byte)uVar4 & 0x1f);
          uVar19 = uVar4 & 0xffffffe0;
          uStack_90 = CONCAT44(uVar4,uVar18);
          iStack_70 = local_d0;
          uStack_6c = uStack_cc;
          puStack_c8 = puVar3;
          local_a0 = plVar1;
          local_68 = puVar3;
          uStack_60 = uStack_88;
          local_58 = uStack_80;
          local_78 = plVar1;
          uVar9 = uStack_90;
          if (uVar4 != uVar13) {
            puVar20 = (uint *)plVar17[0x5a];
            if ((uint *)plVar17[0x5a] == (uint *)0x0) {
              puVar20 = puVar3;
            }
            uVar18 = puVar20[(int)uVar4 >> 5] & uVar18;
            iVar12 = (int)uVar4 >> 5;
            while (uVar18 == 0) {
              uVar19 = uVar19 + 0x20;
              if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
              goto LAB_140ea151a;
              uVar18 = puVar20[(longlong)iVar12 + 1];
              uStack_90 = 0xffffffff;
              iVar12 = iVar12 + 1;
            }
            uVar18 = uVar18 - 1 & uVar18 ^ uVar18;
            iVar12 = 0x1f;
            if (uVar18 != 0) {
              for (; uVar18 >> iVar12 == 0; iVar12 = iVar12 + -1) {
              }
            }
            if (uVar18 == 0) {
              iVar12 = 0x20;
            }
            else {
              iVar12 = 0x1f - iVar12;
            }
            iVar12 = (uVar19 - iVar12) + 0x1f;
            uStack_90 = CONCAT44(iVar12,(undefined4)uStack_90);
            uVar9 = uStack_90;
            if ((int)uVar13 < iVar12) {
LAB_140ea151a:
              uStack_90 = CONCAT44(uVar13,(undefined4)uStack_90);
              uVar9 = uStack_90;
            }
          }
          do {
            if ((uStack_60._4_4_ == (int)((ulonglong)uVar9 >> 0x20)) && (local_68 == puVar3)) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if ((bVar5) && (local_78 == plVar1)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            uVar13 = uVar14;
            if (!bVar5) goto LAB_140ea17f7;
            lVar15 = *(longlong *)(*local_78 + (longlong)uStack_60._4_4_ * 0x10);
            if (lVar15 != 0) {
              lVar10 = FUN_1429ff160();
              if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if ((bVar5) && (*(longlong *)(lVar15 + 0x18) == *(longlong *)(local_d8 + 8 + uVar21)))
              goto LAB_140ea15c1;
            }
            uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
          } while( true );
        }
        goto LAB_140ea1644;
      }
      goto LAB_140ea17f7;
    }
  }
  return;
LAB_140ea15c1:
  if ((*(byte *)(lVar15 + 0xb8) & 1) == 0) goto LAB_140ea17f7;
  lVar10 = UUGStartScreenUW::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
      != lVar10 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    if ((*(longlong *)(lVar15 + 0x2d8) == 0) ||
       (lVar10 = *(longlong *)(*(longlong *)(lVar15 + 0x2d8) + 0x168), lVar10 == 0))
    goto LAB_140ea17f7;
    cVar6 = FUN_142390860(lVar10,local_res20);
    if (cVar6 == '\0') goto LAB_140ea17f7;
  }
LAB_140ea1644:
  if (lVar15 != 0) {
    local_b0 = 0;
    if (lVar8 != 0) {
      lVar11 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
      lVar10 = lVar8;
      do {
        lVar22 = lVar8;
        if (lVar10 == lVar11) goto LAB_140ea167a;
        lVar10 = *(longlong *)(lVar10 + 0x30);
      } while (lVar10 != 0);
    }
    lVar22 = 0;
LAB_140ea167a:
    lVar10 = local_b0;
    local_f8[2] = 0;
    if (local_b0 == 0) {
      FUN_1417846f0(plVar17,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffff00;
    in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffff00;
    in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffffff00000000;
    lVar10 = FUN_1417985e0(lVar22,plVar17,lVar10,0,in_stack_fffffffffffffec8,0,
                           in_stack_fffffffffffffed8,0,in_stack_fffffffffffffee8);
    lVar11 = FUN_1413f82e0();
    if ((*(int *)(plVar17[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar17[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      bVar7 = UKeyLabel::GetDisplayNameVisibility_Implementation(plVar17);
    }
    else {
      bVar7 = 0;
    }
    *(uint *)(lVar10 + 0xc2c) = uVar14 << 0x18 | *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x3a8);
    local_a8 = 0;
    FUN_142382f60(lVar10,lVar15,&DAT_146532188);
    *(byte *)(lVar10 + 0xb6a) = bVar7 ^ 1;
    FUN_1431119b0(lVar10,*(undefined8 *)(local_d8 + uVar21),1);
    FUN_143110f60(lVar10,*(undefined4 *)(param_1 + 0x150));
    iVar12 = *(int *)(param_1 + 0x128);
    *(int *)(param_1 + 0x128) = iVar12 + 1;
    if (*(int *)(param_1 + 300) < iVar12 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x120),iVar12);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar12 * 8) = lVar10;
    lVar10 = FUN_1412e05a0();
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar13 = uVar14;
    if (bVar5) {
      *(undefined1 *)(lVar15 + 0x318) = 1;
    }
  }
LAB_140ea17f7:
  lVar15 = *(longlong *)(param_1 + 0xb0);
  uVar14 = uVar13 + 1;
  uVar16 = (ulonglong)uVar14;
  uVar21 = uVar21 + 0x10;
  if (*(int *)(lVar15 + 0x348) <= (int)uVar14) {
    return;
  }
  goto LAB_140ea1360;
}



// FUNCTION 140ea1850 FUN_140ea1850 body=50 status=ok
// SIG undefined FUN_140ea1850(void)

void FUN_140ea1850(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0x8b] = lVar2;
  FUN_142223710(param_1);
  return;
}



// FUNCTION 140ea1890 FUN_140ea1890 body=348 status=ok
// SIG undefined FUN_140ea1890(void)

void FUN_140ea1890(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  FUN_142223710();
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FName::FName(&local_res8,L"NotifyTriggerTouched",1);
    FWeakObjectPtr::operator=(&local_28,param_1);
    lVar2 = *(longlong *)(param_1 + 0x460);
    plVar4 = (longlong *)(lVar2 + 0x180);
    local_20 = local_res8;
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar4);
    iVar1 = *(int *)(lVar2 + 0x188);
    *(int *)(lVar2 + 0x188) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x18c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
    }
    puVar3 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar4);
    *puVar3 = local_28;
    puVar3[1] = local_24;
    *(undefined8 *)(puVar3 + 2) = local_20;
    FWeakObjectPtr::operator=(&local_18,0);
    local_10 = 0;
    FName::FName(&local_res8,L"NotifyTriggerUntouched",1);
    FWeakObjectPtr::operator=(&local_18,param_1);
    lVar2 = *(longlong *)(param_1 + 0x460);
    plVar4 = (longlong *)(lVar2 + 400);
    local_10 = local_res8;
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar4);
    iVar1 = *(int *)(lVar2 + 0x198);
    *(int *)(lVar2 + 0x198) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x19c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
    }
    puVar3 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar4);
    *puVar3 = local_18;
    puVar3[1] = local_14;
    *(undefined8 *)(puVar3 + 2) = local_10;
  }
  return;
}



// FUNCTION 140ea19f0 FUN_140ea19f0 body=348 status=ok
// SIG undefined FUN_140ea19f0(void)

void FUN_140ea19f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  FUN_142223710();
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FName::FName(&local_res8,L"NotifyTriggerTouched",1);
    FWeakObjectPtr::operator=(&local_28,param_1);
    lVar2 = *(longlong *)(param_1 + 0x460);
    plVar4 = (longlong *)(lVar2 + 0x180);
    local_20 = local_res8;
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar4);
    iVar1 = *(int *)(lVar2 + 0x188);
    *(int *)(lVar2 + 0x188) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x18c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
    }
    puVar3 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar4);
    *puVar3 = local_28;
    puVar3[1] = local_24;
    *(undefined8 *)(puVar3 + 2) = local_20;
    FWeakObjectPtr::operator=(&local_18,0);
    local_10 = 0;
    FName::FName(&local_res8,L"NotifyTriggerUntouched",1);
    FWeakObjectPtr::operator=(&local_18,param_1);
    lVar2 = *(longlong *)(param_1 + 0x460);
    plVar4 = (longlong *)(lVar2 + 400);
    local_10 = local_res8;
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar4);
    iVar1 = *(int *)(lVar2 + 0x198);
    *(int *)(lVar2 + 0x198) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x19c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
    }
    puVar3 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar4);
    *puVar3 = local_18;
    puVar3[1] = local_14;
    *(undefined8 *)(puVar3 + 2) = local_10;
  }
  return;
}



// FUNCTION 140ea1b50 FUN_140ea1b50 body=348 status=ok
// SIG undefined FUN_140ea1b50(void)

void FUN_140ea1b50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  FUN_142223710();
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FName::FName(&local_res8,L"NotifyTriggerTouched",1);
    FWeakObjectPtr::operator=(&local_28,param_1);
    lVar2 = *(longlong *)(param_1 + 0x460);
    plVar4 = (longlong *)(lVar2 + 0x180);
    local_20 = local_res8;
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar4);
    iVar1 = *(int *)(lVar2 + 0x188);
    *(int *)(lVar2 + 0x188) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x18c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
    }
    puVar3 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar4);
    *puVar3 = local_28;
    puVar3[1] = local_24;
    *(undefined8 *)(puVar3 + 2) = local_20;
    FWeakObjectPtr::operator=(&local_18,0);
    local_10 = 0;
    FName::FName(&local_res8,L"NotifyTriggerUntouched",1);
    FWeakObjectPtr::operator=(&local_18,param_1);
    lVar2 = *(longlong *)(param_1 + 0x460);
    plVar4 = (longlong *)(lVar2 + 400);
    local_10 = local_res8;
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar4);
    iVar1 = *(int *)(lVar2 + 0x198);
    *(int *)(lVar2 + 0x198) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x19c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
    }
    puVar3 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar4);
    *puVar3 = local_18;
    puVar3[1] = local_14;
    *(undefined8 *)(puVar3 + 2) = local_10;
  }
  return;
}



// FUNCTION 140ea1cb0 FUN_140ea1cb0 body=664 status=ok
// SIG undefined FUN_140ea1cb0(void)

void FUN_140ea1cb0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int *piVar9;
  longlong *plVar10;
  int *piVar11;
  undefined8 local_res8;
  longlong local_res10;
  int local_48;
  int local_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  FUN_142223710();
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FName::FName(&local_res8,L"NotifyTriggerTouched",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    lVar2 = *(longlong *)(param_1 + 0x490);
    plVar10 = (longlong *)(lVar2 + 0x180);
    local_30 = local_res8;
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
    iVar1 = *(int *)(lVar2 + 0x188);
    *(int *)(lVar2 + 0x188) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x18c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    puVar8 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar10);
    *puVar8 = local_38;
    puVar8[1] = local_34;
    *(undefined8 *)(puVar8 + 2) = local_30;
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FName::FName(&local_res8,L"NotifyTriggerUntouched",1);
    FWeakObjectPtr::operator=(&local_28,param_1);
    lVar2 = *(longlong *)(param_1 + 0x490);
    plVar10 = (longlong *)(lVar2 + 400);
    local_20 = local_res8;
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
    iVar1 = *(int *)(lVar2 + 0x198);
    *(int *)(lVar2 + 0x198) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x19c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    puVar8 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar10);
    *puVar8 = local_28;
    puVar8[1] = local_24;
    *(undefined8 *)(puVar8 + 2) = local_20;
    pwVar6 = _guard_xfg_dispatch_icall_nop
                       (L"&AOakTriggerVolume::NotifyAllPlayersTouchingTrigger",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x490);
    plVar10 = (longlong *)(lVar2 + 0x1a0);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_48), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_40);
    }
    piVar9 = (int *)*plVar10;
    iVar1 = *(int *)(lVar2 + 0x1a8);
    for (piVar11 = piVar9; piVar11 != piVar9 + (longlong)iVar1 * 4; piVar11 = piVar11 + 4) {
      if ((((*piVar11 == local_48) && (piVar11[1] == local_44)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar11), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) &&
         (*(longlong *)(piVar11 + 2) == local_40)) {
        if ((int)((longlong)piVar11 - (longlong)piVar9 >> 4) != -1) goto LAB_140ea1f24;
        break;
      }
    }
    iVar1 = *(int *)(lVar2 + 0x1a8);
    *(int *)(lVar2 + 0x1a8) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x1ac) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    piVar9 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
    *piVar9 = local_48;
    piVar9[1] = local_44;
    *(longlong *)(piVar9 + 2) = local_40;
LAB_140ea1f24:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
  }
  return;
}



// FUNCTION 140ea1f50 FUN_140ea1f50 body=186 status=ok
// SIG undefined FUN_140ea1f50(void)

void FUN_140ea1f50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined8 local_res8;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  FUN_142223710();
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FWeakObjectPtr::operator=(&local_18,0);
    local_10 = 0;
    FName::FName(&local_res8,L"NotifyTriggerUsed",1);
    FWeakObjectPtr::operator=(&local_18,param_1);
    lVar2 = *(longlong *)(param_1 + 0x460);
    plVar4 = (longlong *)(lVar2 + 0x318);
    local_10 = local_res8;
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar4);
    iVar1 = *(int *)(lVar2 + 800);
    *(int *)(lVar2 + 800) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x324) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
    }
    puVar3 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar4);
    *puVar3 = local_18;
    puVar3[1] = local_14;
    *(undefined8 *)(puVar3 + 2) = local_10;
  }
  return;
}



// FUNCTION 140ea2010 FUN_140ea2010 body=403 status=ok
// SIG undefined FUN_140ea2010(void)

void FUN_140ea2010(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_142223710();
  if (*(longlong *)(param_1 + 0x488) != 0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&AOakVehicleSpawnPoint::TriggerOnVehicleSpawned",L"::")
    ;
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x488);
    plVar10 = (longlong *)(lVar2 + 0x6f8);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_20);
    }
    piVar8 = (int *)*plVar10;
    iVar1 = *(int *)(lVar2 + 0x700);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_20)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140ea2186;
        break;
      }
    }
    iVar1 = *(int *)(lVar2 + 0x700);
    *(int *)(lVar2 + 0x700) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x704) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
    *piVar8 = local_28;
    piVar8[1] = local_24;
    *(longlong *)(piVar8 + 2) = local_20;
LAB_140ea2186:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
  }
  return;
}



// FUNCTION 140ea21b0 FUN_140ea21b0 body=480 status=ok
// SIG undefined FUN_140ea21b0(void)

void FUN_140ea21b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined8 local_res8;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  FUN_142223710();
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FName::FName(&local_res8,L"NotifyTriggerTouched",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    lVar2 = *(longlong *)(param_1 + 0x460);
    plVar4 = (longlong *)(lVar2 + 0x180);
    local_30 = local_res8;
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar4);
    iVar1 = *(int *)(lVar2 + 0x188);
    *(int *)(lVar2 + 0x188) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x18c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
    }
    puVar3 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar4);
    *puVar3 = local_38;
    puVar3[1] = local_34;
    *(undefined8 *)(puVar3 + 2) = local_30;
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FName::FName(&local_res8,L"NotifyTriggerUntouched",1);
    FWeakObjectPtr::operator=(&local_28,param_1);
    lVar2 = *(longlong *)(param_1 + 0x460);
    plVar4 = (longlong *)(lVar2 + 400);
    local_20 = local_res8;
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar4);
    iVar1 = *(int *)(lVar2 + 0x198);
    *(int *)(lVar2 + 0x198) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x19c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
    }
    puVar3 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar4);
    *puVar3 = local_28;
    puVar3[1] = local_24;
    *(undefined8 *)(puVar3 + 2) = local_20;
    if (*(longlong *)(param_1 + 0x460) != 0) {
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      FName::FName(&local_res8,L"VehicleTouched",1);
      FWeakObjectPtr::operator=(&local_28,param_1);
      lVar2 = *(longlong *)(param_1 + 0x460);
      plVar4 = (longlong *)(lVar2 + 0x180);
      local_20 = local_res8;
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar4);
      iVar1 = *(int *)(lVar2 + 0x188);
      *(int *)(lVar2 + 0x188) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x18c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
      }
      puVar3 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar4);
      *puVar3 = local_28;
      puVar3[1] = local_24;
      *(undefined8 *)(puVar3 + 2) = local_20;
    }
  }
  return;
}



// FUNCTION 140ea2390 FUN_140ea2390 body=1450 status=ok
// SIG undefined FUN_140ea2390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ea2390(longlong *param_1)

{
  wchar_t *pwVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  byte *pbVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  wchar_t *pwVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_8b8 [32];
  int local_898;
  int local_894;
  longlong local_890;
  int local_888;
  int local_884;
  longlong local_880;
  ulonglong local_878;
  undefined8 local_870;
  longlong local_868;
  longlong local_860;
  ulonglong local_858;
  longlong *local_850;
  int local_848;
  wchar_t local_838 [1024];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_8b8;
  FUN_140e71740();
  uVar4 = FUN_142912e90();
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar4);
  if (plVar5 != (longlong *)0x0) {
    local_870 = plVar5[3];
    pbVar6 = (byte *)FName::GetComparisonNameEntry(&local_870);
    if (pbVar6 != (byte *)0x0) {
      iVar15 = 0;
      local_878 = local_878 & 0xffffffff00000000;
      pwVar12 = L"Capsule";
      cVar2 = FName::SplitNameWithCheck(L"Capsule",local_838,0x400,&local_878);
      if (cVar2 != '\0') {
        pwVar12 = local_838;
        iVar15 = (int)local_878 + 1;
      }
      if (iVar15 == local_870._4_4_) {
        if ((*pbVar6 & 1) == 0) {
          iVar15 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(pwVar12,pbVar6 + 0x10);
        }
        else {
          iVar15 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
        }
        if (iVar15 == 0) {
          (**(code **)(*plVar5 + 0x830))(plVar5,3);
        }
      }
    }
  }
  uVar13 = 0;
  uVar4 = FUN_141448000();
  AActor::GetComponentsByClass(param_1,&local_850,uVar4);
  local_858 = (ulonglong)((longlong)(local_850 + local_848) + (7 - (longlong)local_850)) >> 3;
  if (local_850 + local_848 < local_850) {
    local_858 = uVar13;
  }
  plVar5 = local_850;
  if (local_858 != 0) {
    do {
      lVar9 = *plVar5;
      if ((*(byte *)(lVar9 + 0x544) & 1) == 0) {
        param_1[0xa7] = lVar9;
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ATurretSeatPawn::HijackStateChanged",L"::");
        pwVar12 = (wchar_t *)0x0;
        while (pwVar1 = pwVar7, pwVar1 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar12 = pwVar1;
        }
        FName::FName(&local_860,pwVar12 + 2,1);
        lVar8 = local_860;
        lVar9 = param_1[0xa7];
        plVar14 = (longlong *)(lVar9 + 0x3f0);
        FWeakObjectPtr::operator=(&local_888,0);
        local_880 = 0;
        FWeakObjectPtr::operator=(&local_888,param_1);
        local_878 = 0;
        local_880 = lVar8;
        if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_888), lVar8 != 0)) {
          UObject::FindFunction(lVar8,local_880);
        }
        piVar10 = (int *)*plVar14;
        iVar15 = *(int *)(lVar9 + 0x3f8);
        for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)iVar15 * 4; piVar11 = piVar11 + 4) {
          if ((((*piVar11 == local_888) && (piVar11[1] == local_884)) ||
              ((cVar2 = FWeakObjectPtr::IsValid(piVar11), cVar2 == '\0' &&
               (cVar2 = FWeakObjectPtr::IsValid(&local_888), cVar2 == '\0')))) &&
             (*(longlong *)(piVar11 + 2) == local_880)) {
            if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_140ea2790;
            break;
          }
        }
        iVar15 = *(int *)(lVar9 + 0x3f8);
        *(int *)(lVar9 + 0x3f8) = iVar15 + 1;
        if (*(int *)(lVar9 + 0x3fc) < iVar15 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar15);
        }
        piVar10 = (int *)((longlong)iVar15 * 0x10 + *plVar14);
        *piVar10 = local_888;
        piVar10[1] = local_884;
        lVar9 = local_880;
      }
      else {
        param_1[0xa6] = lVar9;
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ATurretSeatPawn::AttachStateChanged",L"::");
        pwVar12 = (wchar_t *)0x0;
        while (pwVar1 = pwVar7, pwVar1 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar12 = pwVar1;
        }
        FName::FName(&local_868,pwVar12 + 2,1);
        lVar8 = local_868;
        lVar9 = param_1[0xa6];
        plVar14 = (longlong *)(lVar9 + 0x3f0);
        FWeakObjectPtr::operator=(&local_898,0);
        local_890 = 0;
        FWeakObjectPtr::operator=(&local_898,param_1);
        local_870 = 0;
        local_890 = lVar8;
        if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_898), lVar8 != 0)) {
          UObject::FindFunction(lVar8,local_890);
        }
        piVar10 = (int *)*plVar14;
        iVar15 = *(int *)(lVar9 + 0x3f8);
        for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)iVar15 * 4; piVar11 = piVar11 + 4) {
          if ((((*piVar11 == local_898) && (piVar11[1] == local_894)) ||
              ((cVar2 = FWeakObjectPtr::IsValid(piVar11), cVar2 == '\0' &&
               (cVar2 = FWeakObjectPtr::IsValid(&local_898), cVar2 == '\0')))) &&
             (*(longlong *)(piVar11 + 2) == local_890)) {
            if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_140ea2790;
            break;
          }
        }
        iVar15 = *(int *)(lVar9 + 0x3f8);
        *(int *)(lVar9 + 0x3f8) = iVar15 + 1;
        if (*(int *)(lVar9 + 0x3fc) < iVar15 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar15);
        }
        piVar10 = (int *)((longlong)iVar15 * 0x10 + *plVar14);
        *piVar10 = local_898;
        piVar10[1] = local_894;
        lVar9 = local_890;
      }
      *(longlong *)(piVar10 + 2) = lVar9;
LAB_140ea2790:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
      plVar5 = plVar5 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != local_858);
  }
  uVar4 = FUN_1429bed90();
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar4);
  param_1[0xb1] = (longlong)plVar5;
  if (((((int)param_1[0xad] == 0) && (*(int *)((longlong)param_1 + 0x56c) == 0)) ||
      (plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar5 + 0x440))(plVar5,param_1[0xad]), cVar2 == '\0')) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) & 0xfe;
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | bVar3;
  if ((((int)param_1[0xae] == 0) && (*(int *)((longlong)param_1 + 0x574) == 0)) ||
     ((plVar5 = (longlong *)param_1[0xb1], plVar5 == (longlong *)0x0 ||
      (cVar2 = (**(code **)(*plVar5 + 0x440))(plVar5,param_1[0xae]), cVar2 == '\0')))) {
    bVar3 = 0;
  }
  else {
    bVar3 = 2;
  }
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) & 0xfd;
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | bVar3;
  if ((((int)param_1[0xaf] == 0) && (*(int *)((longlong)param_1 + 0x57c) == 0)) ||
     ((plVar5 = (longlong *)param_1[0xb1], plVar5 == (longlong *)0x0 ||
      (cVar2 = (**(code **)(*plVar5 + 0x440))(plVar5,param_1[0xaf]), cVar2 == '\0')))) {
    bVar3 = 0;
  }
  else {
    bVar3 = 4;
  }
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) & 0xfb;
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | bVar3;
  if (((((int)param_1[0xb0] == 0) && (*(int *)((longlong)param_1 + 0x584) == 0)) ||
      (plVar5 = (longlong *)param_1[0xb1], plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar5 + 0x440))(plVar5,param_1[0xb0]), cVar2 == '\0')) {
    bVar3 = 0;
  }
  else {
    bVar3 = 8;
  }
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) & 0xf7;
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | bVar3;
  if (local_850 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ea2940 FUN_140ea2940 body=354 status=ok
// SIG undefined FUN_140ea2940(void)

void FUN_140ea2940(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_140775440();
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UOakSpawnerComponent::OnWaveWarmupCallback",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  plVar1 = (longlong *)(param_1 + 0x7e8);
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_20);
  }
  piVar8 = (int *)*plVar1;
  iVar2 = *(int *)(param_1 + 0x7f0);
  piVar9 = piVar8;
  do {
    if (piVar9 == piVar8 + (longlong)iVar2 * 4) {
LAB_140ea2a54:
      iVar2 = *(int *)(param_1 + 0x7f0);
      *(int *)(param_1 + 0x7f0) = iVar2 + 1;
      if (*(int *)(param_1 + 0x7f4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar8 = local_28;
      piVar8[1] = local_24;
      *(longlong *)(piVar8 + 2) = local_20;
LAB_140ea2a8d:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      return;
    }
    if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
       (*(longlong *)(piVar9 + 2) == local_20)) {
      if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140ea2a8d;
      goto LAB_140ea2a54;
    }
    piVar9 = piVar9 + 4;
  } while( true );
}



// FUNCTION 140ea2ab0 FUN_140ea2ab0 body=207 status=ok
// SIG undefined FUN_140ea2ab0(void)

void FUN_140ea2ab0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 *puVar3;
  bool bVar4;
  ulonglong local_res8;
  longlong local_18 [2];
  
  bVar4 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_142330a70();
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 == 3) {
    FUN_140e9ed00(param_1);
  }
  FUN_140ea0380(param_1);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    local_res8 = *(ulonglong *)(*(longlong *)(param_1 + 0x118) + 0x18);
    FName::ToString(&local_res8,local_18);
    bVar4 = true;
    puVar3 = &DAT_143f3eda8;
    if (DAT_14629d3d8 != 0) {
      puVar3 = DAT_14629d3d0;
    }
    iVar2 = FUN_141592950(local_18,puVar3,1,0,0xffffffff);
    if (iVar2 != -1) {
      bVar1 = true;
      goto LAB_140ea2b4e;
    }
  }
  bVar1 = false;
LAB_140ea2b4e:
  if ((bVar4) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  if (bVar1) {
    *(byte *)(param_1 + 0x3ad) = *(byte *)(param_1 + 0x3ad) | 1;
  }
  return;
}



// FUNCTION 140ea2b80 FUN_140ea2b80 body=1620 status=ok
// SIG undefined FUN_140ea2b80(void)

void FUN_140ea2b80(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  bool bVar20;
  longlong local_res18;
  longlong local_res20;
  int local_d8;
  int local_d4;
  longlong local_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int local_a0;
  uint uStack_9c;
  uint *puStack_98;
  undefined4 local_90;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  longlong *local_80;
  undefined8 local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  FUN_142330a70();
  lVar9 = *(longlong *)(param_1 + 0x118);
  if (lVar9 != 0) {
    plVar10 = (longlong *)(lVar9 + 0x2b0);
    uVar2 = *(uint *)(lVar9 + 0x2d8);
    puStack_98 = (uint *)(lVar9 + 0x2c0);
    local_a0 = 0;
    uStack_9c = 1;
    uStack_8c = 0;
    iStack_88 = 0;
    if (uVar2 != 0) {
      puVar19 = *(uint **)(lVar9 + 0x2d0);
      if (*(uint **)(lVar9 + 0x2d0) == (uint *)0x0) {
        puVar19 = puStack_98;
      }
      uVar3 = *puVar19;
      iStack_88 = 0;
      local_a0 = 0;
      while (uVar3 == 0) {
        lVar11 = (longlong)local_a0;
        iStack_88 = iStack_88 + 0x20;
        iVar17 = local_a0 + 1;
        bVar20 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a0;
        local_a0 = iVar17;
        if (bVar20) goto LAB_140ea2c7b;
        uVar3 = puVar19[lVar11 + 1];
      }
      uStack_9c = uVar3 - 1 & uVar3 ^ uVar3;
      iVar17 = 0x1f;
      if (uStack_9c != 0) {
        for (; uStack_9c >> iVar17 == 0; iVar17 = iVar17 + -1) {
        }
      }
      if (uStack_9c == 0) {
        iVar17 = 0x20;
      }
      else {
        iVar17 = 0x1f - iVar17;
      }
      uStack_8c = (iStack_88 - iVar17) + 0x1f;
      if ((int)uVar2 < (int)uStack_8c) {
LAB_140ea2c7b:
        uStack_8c = uVar2;
      }
    }
    local_90 = 0xffffffff;
    uVar3 = *(uint *)(lVar9 + 0x2d8);
    lStack_c0 = CONCAT44(uStack_9c,local_a0);
    uStack_b0 = CONCAT44(uStack_8c,0xffffffff);
    uStack_a8 = CONCAT44(uStack_84,iStack_88);
    uVar16 = -1 << ((byte)uVar3 & 0x1f);
    uVar18 = uVar3 & 0xffffffe0;
    uStack_b8 = CONCAT44(uVar3,uVar16);
    iStack_70 = local_a0;
    uStack_6c = uStack_9c;
    local_c8 = plVar10;
    local_80 = plVar10;
    local_68 = puStack_98;
    uStack_60 = uStack_b0;
    local_58 = uStack_a8;
    local_78 = plVar10;
    uVar8 = uStack_b8;
    if (uVar3 != uVar2) {
      puVar19 = *(uint **)(lVar9 + 0x2d0);
      if (*(uint **)(lVar9 + 0x2d0) == (uint *)0x0) {
        puVar19 = puStack_98;
      }
      uVar16 = puVar19[(int)uVar3 >> 5] & uVar16;
      iVar17 = (int)uVar3 >> 5;
      while (uVar16 == 0) {
        uVar18 = uVar18 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar17)
        goto LAB_140ea2d46;
        uVar16 = puVar19[(longlong)iVar17 + 1];
        uStack_b8 = 0xffffffff;
        iVar17 = iVar17 + 1;
      }
      uVar16 = uVar16 - 1 & uVar16 ^ uVar16;
      iVar17 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar17 == 0; iVar17 = iVar17 + -1) {
        }
      }
      if (uVar16 == 0) {
        iVar17 = 0x20;
      }
      else {
        iVar17 = 0x1f - iVar17;
      }
      iVar17 = (uVar18 - iVar17) + 0x1f;
      uStack_b8 = CONCAT44(iVar17,(undefined4)uStack_b8);
      uVar8 = uStack_b8;
      if ((int)uVar2 < iVar17) {
LAB_140ea2d46:
        uStack_b8 = CONCAT44(uVar2,(undefined4)uStack_b8);
        uVar8 = uStack_b8;
      }
    }
    while( true ) {
      if ((uStack_60._4_4_ == (int)((ulonglong)uVar8 >> 0x20)) && (local_68 == puStack_98)) {
        bVar20 = true;
      }
      else {
        bVar20 = false;
      }
      if ((bVar20) && (local_78 == plVar10)) {
        bVar20 = false;
      }
      else {
        bVar20 = true;
      }
      if (!bVar20) break;
      lVar9 = *(longlong *)(*local_78 + (longlong)uStack_60._4_4_ * 0x10);
      if (lVar9 != 0) {
        lVar11 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        if (bVar20) {
          if (*(int *)(param_1 + 0x1e8) < 1) {
LAB_140ea2e23:
            pwVar7 = _guard_xfg_dispatch_icall_nop
                               (L"&UOakTriggerComponent::NotifyActorComponentBeginOverlap",L"::");
            pwVar5 = (wchar_t *)0x0;
            while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
              pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
              pwVar5 = pwVar4;
            }
            FName::FName(&local_res18,pwVar5 + 2,1);
            lVar11 = local_res18;
            plVar10 = (longlong *)(lVar9 + 0x570);
            FWeakObjectPtr::operator=(&local_d8,0);
            local_d0 = 0;
            FWeakObjectPtr::operator=(&local_d8,param_1);
            local_d0 = lVar11;
            if (lVar11 != 0) {
              lVar11 = FWeakObjectPtr::Get(&local_d8);
              if (lVar11 != 0) {
                UObject::FindFunction(lVar11,local_d0);
              }
            }
            piVar13 = (int *)*plVar10;
            iVar17 = *(int *)(lVar9 + 0x578);
            for (piVar15 = piVar13; piVar15 != piVar13 + (longlong)iVar17 * 4; piVar15 = piVar15 + 4
                ) {
              if ((*piVar15 == local_d8) && (piVar15[1] == local_d4)) {
LAB_140ea2ef8:
                bVar20 = true;
              }
              else {
                cVar6 = FWeakObjectPtr::IsValid(piVar15);
                if (cVar6 == '\0') {
                  cVar6 = FWeakObjectPtr::IsValid(&local_d8);
                  if (cVar6 == '\0') goto LAB_140ea2ef8;
                }
                bVar20 = false;
              }
              if ((bVar20) && (*(longlong *)(piVar15 + 2) == local_d0)) {
                bVar20 = true;
              }
              else {
                bVar20 = false;
              }
              if (bVar20) {
                if ((int)((longlong)piVar15 - (longlong)piVar13 >> 4) != -1) goto LAB_140ea2f63;
                break;
              }
            }
            iVar17 = *(int *)(lVar9 + 0x578);
            *(int *)(lVar9 + 0x578) = iVar17 + 1;
            if (*(int *)(lVar9 + 0x57c) < iVar17 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar17);
            }
            piVar13 = (int *)((longlong)iVar17 * 0x10 + *plVar10);
            *piVar13 = local_d8;
            piVar13[1] = local_d4;
            *(longlong *)(piVar13 + 2) = local_d0;
LAB_140ea2f63:
            TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
            pwVar7 = _guard_xfg_dispatch_icall_nop
                               (L"&UOakTriggerComponent::NotifyActorComponentEndOverlap",L"::");
            pwVar5 = (wchar_t *)0x0;
            while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
              pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
              pwVar5 = pwVar4;
            }
            FName::FName(&local_res20,pwVar5 + 2);
            lVar11 = local_res20;
            plVar10 = (longlong *)(lVar9 + 0x580);
            FWeakObjectPtr::operator=(&local_c8,0);
            lStack_c0 = 0;
            FWeakObjectPtr::operator=(&local_c8,param_1);
            lStack_c0 = lVar11;
            if (lVar11 != 0) {
              lVar11 = FWeakObjectPtr::Get(&local_c8);
              if (lVar11 != 0) {
                UObject::FindFunction(lVar11,lStack_c0);
              }
            }
            piVar13 = (int *)*plVar10;
            iVar17 = *(int *)(lVar9 + 0x588);
            for (piVar15 = piVar13; piVar15 != piVar13 + (longlong)iVar17 * 4; piVar15 = piVar15 + 4
                ) {
              if ((*piVar15 == (int)local_c8) &&
                 (local_c8._4_4_ = (int)((ulonglong)local_c8 >> 0x20),
                 bVar20 = piVar15[1] == local_c8._4_4_, bVar20)) {
LAB_140ea3048:
                bVar20 = true;
              }
              else {
                cVar6 = FWeakObjectPtr::IsValid(piVar15);
                if (cVar6 == '\0') {
                  cVar6 = FWeakObjectPtr::IsValid(&local_c8);
                  if (cVar6 == '\0') goto LAB_140ea3048;
                }
                bVar20 = false;
              }
              if ((bVar20) && (*(longlong *)(piVar15 + 2) == lStack_c0)) {
                bVar20 = true;
              }
              else {
                bVar20 = false;
              }
              if (bVar20) {
                if ((int)((longlong)piVar15 - (longlong)piVar13 >> 4) != -1) goto LAB_140ea30b3;
                break;
              }
            }
            iVar17 = *(int *)(lVar9 + 0x588);
            *(int *)(lVar9 + 0x588) = iVar17 + 1;
            if (*(int *)(lVar9 + 0x58c) < iVar17 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar17);
            }
            puVar14 = (undefined4 *)((longlong)iVar17 * 0x10 + *plVar10);
            *puVar14 = (int)local_c8;
            puVar14[1] = local_c8._4_4_;
            *(longlong *)(puVar14 + 2) = lStack_c0;
LAB_140ea30b3:
            TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
            iVar17 = *(int *)(param_1 + 0x200);
            *(int *)(param_1 + 0x200) = iVar17 + 1;
            if (*(int *)(param_1 + 0x204) < iVar17 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x1f8,iVar17);
            }
            *(longlong *)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar17 * 8) = lVar9;
            plVar10 = local_80;
          }
          else {
            plVar12 = *(longlong **)(param_1 + 0x1e0);
            plVar1 = plVar12 + *(int *)(param_1 + 0x1e8);
            for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
              if (*plVar12 == *(longlong *)(lVar9 + 0x18)) goto LAB_140ea2e23;
            }
          }
        }
      }
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    uVar8 = UNativeUserListEntry::GetPrivateStaticClass();
    cVar6 = UClass::ImplementsInterface
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x10),uVar8);
    if (cVar6 != '\0') {
      lVar9 = *(longlong *)(param_1 + 0x120);
      if (lVar9 == 0) {
        lVar9 = FUN_1423407b0(param_1);
      }
      plVar10 = (longlong *)FUN_142f6c9f0(lVar9);
      if (plVar10 != (longlong *)0x0) {
        lStack_c0 = 0;
        local_c8 = (longlong *)param_1;
        uVar8 = FUN_142f768a0();
        lStack_c0 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar8);
        FUN_142f690f0(plVar10,&local_c8,0);
        cVar6 = (**(code **)(*plVar10 + 0x700))(plVar10);
        if (cVar6 == '\0') {
          *(undefined1 *)(param_1 + 0x1d8) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 140ea31e0 FUN_140ea31e0 body=46 status=ok
// SIG undefined FUN_140ea31e0(void)

void FUN_140ea31e0(longlong param_1)

{
  FUN_142330a70();
  if ((*(char *)(param_1 + 0x1d4) != '\0') && (*(longlong *)(param_1 + 0x1e8) != 0)) {
    *(undefined1 *)(param_1 + 0x200) = 1;
  }
  return;
}



// FUNCTION 140ea3210 FUN_140ea3210 body=41 status=ok
// SIG undefined FUN_140ea3210(void)

void FUN_140ea3210(longlong param_1)

{
  FUN_142330a70();
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x1d0);
  FUN_140ec8f40(param_1,1);
  return;
}



// FUNCTION 140ea3240 FUN_140ea3240 body=245 status=ok
// SIG undefined FUN_140ea3240(void)

void FUN_140ea3240(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142330a70();
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x1d0);
  FUN_140ec8f40(param_1,1);
  if (*(longlong *)(param_1 + 0x220) != 0) {
    uVar2 = UUGStreamInteractConnectionUW::GetPrivateStaticClass();
    lVar3 = AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(param_1 + 0x220),uVar2);
    if (lVar3 == 0) {
LAB_140ea32c0:
      lVar3 = 0;
    }
    else {
      lVar4 = UUGStreamInteractConnectionUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140ea32c0;
    }
    *(longlong *)(param_1 + 0x238) = lVar3;
  }
  if (*(longlong *)(param_1 + 0x228) == 0) {
    return;
  }
  uVar2 = UUGStreamInteractConnectionUW::GetPrivateStaticClass();
  lVar3 = AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(param_1 + 0x228),uVar2);
  if (lVar3 != 0) {
    lVar4 = UUGStreamInteractConnectionUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140ea3323;
  }
  lVar3 = 0;
LAB_140ea3323:
  *(longlong *)(param_1 + 0x240) = lVar3;
  return;
}



// FUNCTION 140ea3340 FUN_140ea3340 body=1193 status=ok
// SIG undefined FUN_140ea3340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ea3340(longlong param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_142330a70();
  plVar8 = *(longlong **)(param_1 + 0x118);
  if (plVar8 != (longlong *)0x0) {
    uVar5 = UGNewsMenuItem::GetPrivateStaticClass();
    lVar6 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar5);
    *(longlong *)(param_1 + 0x1a8) = lVar6;
    if ((((lVar6 != 0) && (0.0 < *(float *)(param_1 + 0x188))) && (0 < *(int *)(param_1 + 0x180)))
       && ((char)plVar8[0x25] == '\x03')) {
      iVar9 = 0;
      uVar1 = *(undefined4 *)(param_1 + 0x18c);
      local_d8 = &LAB_140eb41a0;
      uStack_d0 = 0;
      uVar5 = AActor::GetWorldTimerManager(plVar8);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_d8;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_d8._4_4_;
        *(undefined4 *)(plVar7 + 3) = uStack_d0;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_cc;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar6;
        *plVar7 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_c8 = 0;
      local_c0 = 0;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_f0 = 0xbf800000;
      local_f8 = 0;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar5,param_1 + 0x1d0,&local_c8,uVar1);
      if (local_68 != 0) {
        plVar10 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar10 = local_78;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        lVar6 = FMemory::Realloc(plVar7,0,0);
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
      }
      uVar1 = *(undefined4 *)(param_1 + 0x188);
      local_d8 = &LAB_140eb41b0;
      uStack_d0 = 0;
      uVar5 = AActor::GetWorldTimerManager(plVar8);
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar8 + 1,param_1);
        *(undefined4 *)(plVar8 + 2) = (undefined4)local_d8;
        *(undefined4 *)((longlong)plVar8 + 0x14) = local_d8._4_4_;
        *(undefined4 *)(plVar8 + 3) = uStack_d0;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_cc;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar6;
        *plVar8 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_c8 = 0;
      local_c0 = 0;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_f0 = 0xbf800000;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_f8 = 1;
      FUN_142880850(uVar5,param_1 + 0x1c8,&local_c8,uVar1);
      if (local_68 != 0) {
        plVar7 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar7 = local_78;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        lVar6 = FMemory::Realloc(plVar8,0,0);
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
      }
      if (*(longlong *)(param_1 + 0x198) != 0) {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x168);
        if (lVar6 == 0) {
          local_e8 = _DAT_1468b5d90;
          local_e0 = DAT_1468b5d98;
        }
        else {
          local_e8 = *(undefined1 **)(lVar6 + 0x220);
          local_e0 = *(undefined4 *)(lVar6 + 0x228);
        }
        local_d8 = local_e8;
        uStack_d0 = local_e0;
        fVar11 = (float)FUN_1423ac1f0(*(undefined8 *)(param_1 + 0x1a8),&local_d8);
        iVar4 = FUN_14236d130(*(undefined8 *)(param_1 + 0x1a8));
        *(float *)(param_1 + 0x1d8) = fVar11 / (float)iVar4;
      }
      iVar4 = *(int *)(param_1 + 0x180);
      plVar8 = (longlong *)(param_1 + 0x1b0);
      iVar3 = *(int *)(param_1 + 0x1b8);
      if (iVar3 < iVar4) {
        *(int *)(param_1 + 0x1b8) = iVar4;
        if (*(int *)(param_1 + 0x1bc) < iVar4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar3 * 0x10 + *plVar8),0,(longlong)(iVar4 - iVar3) << 4);
      }
      else if (iVar4 < iVar3) {
        TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
                  (plVar8,iVar4,iVar3 - iVar4,1);
      }
      if (*(char *)(param_1 + 0x1a0) != '\0') {
        fVar11 = *(float *)(param_1 + 400);
        fVar2 = *(float *)(param_1 + 0x188);
        fVar12 = (float)FUN_1423b1370(*(undefined8 *)(param_1 + 0x1a8));
        fVar12 = (fVar11 * fVar2) / fVar12;
        iVar4 = (int)(1.0 / fVar12);
        if (-1 < iVar4) {
          do {
            FUN_140ec1b40(param_1,(float)iVar9 * fVar12);
            iVar9 = iVar9 + 1;
          } while (iVar9 <= iVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ea37f0 FUN_140ea37f0 body=691 status=ok
// SIG undefined FUN_140ea37f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ea37f0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar12 = (longlong *)0x0;
  plVar13 = plVar12;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x118);
  }
  if ((plVar13 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    lVar8 = (**(code **)(*plVar13 + 0x148))(plVar13);
    lVar4 = *(longlong *)(param_1 + 0x118);
    uVar2 = *(undefined4 *)(lVar8 + 0x790);
    *(undefined4 *)(param_1 + 0x150) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x14c) = uVar2;
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(lVar4 + 0x4c);
    if (*(longlong *)(lVar4 + 0x38) != 0) {
      lVar9 = USafeZone::GetPrivateStaticClass();
      for (lVar8 = *(longlong *)(lVar4 + 0x38); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
        if (lVar8 == lVar9) {
          if (*(longlong *)(lVar4 + 0x38) != 0) {
            lVar4 = *(longlong *)(param_1 + 0x118);
            plVar11 = plVar12;
            if (*(longlong *)(lVar4 + 0x38) != 0) {
              plVar10 = (longlong *)USafeZone::GetPrivateStaticClass();
              plVar5 = *(longlong **)(lVar4 + 0x38);
              for (plVar6 = plVar5;
                  (plVar11 = plVar12, plVar6 != (longlong *)0x0 &&
                  (plVar11 = plVar5, plVar6 != plVar10)); plVar6 = (longlong *)plVar6[6]) {
              }
            }
            FUN_142c84520(plVar11,plVar13);
          }
          break;
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(lVar4 + 0x40) != 0) {
      lVar9 = USafeZone::GetPrivateStaticClass();
      lVar4 = *(longlong *)(lVar4 + 0x40);
      for (lVar8 = lVar4; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
        if (lVar8 == lVar9) {
          if (lVar4 != 0) {
            lVar4 = *(longlong *)(param_1 + 0x118);
            local_28 = 0;
            local_20 = 0;
            local_38 = _DAT_1468b5d90;
            local_30 = DAT_1468b5d98;
            plVar11 = plVar12;
            if (*(longlong *)(lVar4 + 0x40) != 0) {
              plVar10 = (longlong *)USafeZone::GetPrivateStaticClass();
              plVar5 = *(longlong **)(lVar4 + 0x40);
              for (plVar6 = plVar5;
                  (plVar11 = plVar12, plVar6 != (longlong *)0x0 &&
                  (plVar11 = plVar5, plVar6 != plVar10)); plVar6 = (longlong *)plVar6[6]) {
              }
            }
            FUN_1409e0430(local_18,plVar11,plVar13,2,0,
                          *(undefined4 *)(*(longlong *)(param_1 + 0x118) + 0x4c),0,&local_38,0,
                          &local_28,0);
            if (local_10 != (longlong *)0x0) {
              LOCK();
              plVar13 = local_10 + 1;
              lVar4 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*local_10)(local_10);
                LOCK();
                piVar1 = (int *)((longlong)local_10 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_10 + 8))(local_10,1);
                }
              }
            }
            if (local_28 != 0) {
              FMemory::Free();
            }
          }
          break;
        }
      }
    }
    plVar12 = *(longlong **)(param_1 + 0x120);
    plVar13 = plVar12 + *(int *)(param_1 + 0x128);
    for (; plVar12 != plVar13; plVar12 = plVar12 + 1) {
      lVar4 = *plVar12;
      if (lVar4 != 0) {
        lVar8 = UMultiLineEditableTextBox::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          FUN_143112160(lVar4,*(undefined4 *)(param_1 + 0x150),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x118) + 0x50));
        }
      }
    }
  }
  return;
}



// FUNCTION 140ea3ac0 FUN_140ea3ac0 body=174 status=ok
// SIG undefined FUN_140ea3ac0(void)

void FUN_140ea3ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,void **param_4)

{
  uint uVar1;
  void *_Src;
  undefined8 local_28;
  undefined8 local_20;
  void *local_18;
  ulonglong local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  local_28 = param_2;
  local_20 = param_3;
  if (&local_18 != param_4) {
    _Src = *param_4;
    uVar1 = *(uint *)(param_4 + 1);
    local_10 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,&local_28);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  if (*param_4 == (void *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140ea3b70 TriggerOnSessionParticipantsChangeDelegates body=21 status=ok
// SIG undefined TriggerOnSessionParticipantsChangeDelegates(void)

void IOnlineSession::TriggerOnSessionParticipantsChangeDelegates(longlong param_1)

{
  FUN_140ec0f50(param_1 + 0x4e0);
  return;
}



// FUNCTION 140ea3b90 FUN_140ea3b90 body=1314 status=ok
// SIG undefined FUN_140ea3b90(void)

void FUN_140ea3b90(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 *local_28;
  undefined8 local_20;
  
  plVar7 = (longlong *)UNavModifierComponent::GetPrivateStaticClass();
  lVar16 = plVar7[0x1f];
  if (lVar16 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar16 = plVar7[0x1f];
    if (lVar16 == 0) {
      return;
    }
  }
  plVar7 = (longlong *)0x0;
  lVar2 = *(longlong *)(param_1 + 0x240);
  if (*(longlong *)(param_1 + 0x290) == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar8 = UUGStartScreenUW::GetPrivateStaticClass();
    uVar8 = FUN_1417985e0(uVar8,param_1,0,0,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x290) = uVar8;
  }
  if (*(longlong *)(param_1 + 0x298) == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar8 = FUN_14301f840();
    uVar8 = FUN_1417985e0(uVar8,param_1,0,0,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x298) = uVar8;
  }
  if ((lVar2 == 0) && (*(longlong *)(param_1 + 0x288) == 0)) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar8 = UUGJournalKey::GetPrivateStaticClass();
    uVar8 = FUN_1417985e0(uVar8,param_1,0,0,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x288) = uVar8;
  }
  plVar10 = plVar7;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    plVar9 = (longlong *)FUN_14148cad0();
    for (plVar13 = *(longlong **)(param_1 + 0x218);
        (plVar10 = plVar7, plVar13 != (longlong *)0x0 &&
        (plVar10 = *(longlong **)(param_1 + 0x218), plVar13 != plVar9));
        plVar13 = (longlong *)plVar13[6]) {
    }
  }
  FUN_140486980(*(undefined8 *)(param_1 + 0x290),plVar10);
  plVar10 = (longlong *)FUN_141796df0(lVar16 + 0x58);
  if (plVar10 != (longlong *)0x0) {
    lVar11 = FUN_1430228e0();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140ea3d69;
  }
  plVar10 = plVar7;
LAB_140ea3d69:
  *(longlong **)(*(longlong *)(param_1 + 0x290) + 0x1d8) = plVar10;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    lVar12 = FUN_14148cad0();
    for (lVar11 = *(longlong *)(param_1 + 0x218); lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)
        ) {
      if (lVar11 == lVar12) {
        if (*(longlong *)(param_1 + 0x218) != 0) {
          plVar13 = (longlong *)FUN_14148cad0();
          for (plVar10 = *(longlong **)(param_1 + 0x218);
              (plVar9 = plVar7, plVar10 != (longlong *)0x0 &&
              (plVar9 = *(longlong **)(param_1 + 0x218), plVar10 != plVar13));
              plVar10 = (longlong *)plVar10[6]) {
          }
          lVar11 = plVar9[0x1f];
          if (lVar11 == 0) {
            (**(code **)(*plVar9 + 0x368))(plVar9);
            lVar11 = plVar9[0x1f];
            if (lVar11 == 0) break;
          }
          lVar12 = FUN_14148cad0();
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar6) && (*(longlong *)(lVar11 + 0xcf0) != 0)) {
            FUN_143016430(*(undefined8 *)(param_1 + 0x290));
          }
        }
        break;
      }
    }
  }
  FUN_142a4c7e0(*(undefined8 *)(param_1 + 0x298),*(undefined8 *)(param_1 + 0x290));
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x298) + 0xf0);
  *puVar1 = *puVar1 & 0xfffffffe;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x298) + 0x124);
  *puVar1 = *puVar1 & 0xfffffffe;
  uVar8 = UComboBoxWidgetStyle::StaticClass();
  FUN_141721e10(*(undefined8 *)(param_1 + 0x298),uVar8);
  local_28 = (undefined8 *)0x0;
  local_20 = 1;
  TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar8 = *(undefined8 *)(lVar16 + 0x78);
  *local_28 = *(undefined8 *)(lVar16 + 0x70);
  local_28[1] = uVar8;
  uVar8 = *(undefined8 *)(lVar16 + 0x88);
  local_28[2] = *(undefined8 *)(lVar16 + 0x80);
  local_28[3] = uVar8;
  uVar8 = *(undefined8 *)(lVar16 + 0x98);
  local_28[4] = *(undefined8 *)(lVar16 + 0x90);
  local_28[5] = uVar8;
  uVar8 = *(undefined8 *)(lVar16 + 0xa8);
  local_28[6] = *(undefined8 *)(lVar16 + 0xa0);
  local_28[7] = uVar8;
  uVar8 = *(undefined8 *)(lVar16 + 0xb8);
  local_28[8] = *(undefined8 *)(lVar16 + 0xb0);
  local_28[9] = uVar8;
  uVar8 = *(undefined8 *)(lVar16 + 200);
  local_28[10] = *(undefined8 *)(lVar16 + 0xc0);
  local_28[0xb] = uVar8;
  uVar3 = *(undefined4 *)(lVar16 + 0xd4);
  uVar4 = *(undefined4 *)(lVar16 + 0xd8);
  uVar5 = *(undefined4 *)(lVar16 + 0xdc);
  *(undefined4 *)(local_28 + 0xc) = *(undefined4 *)(lVar16 + 0xd0);
  *(undefined4 *)((longlong)local_28 + 100) = uVar3;
  *(undefined4 *)(local_28 + 0xd) = uVar4;
  *(undefined4 *)((longlong)local_28 + 0x6c) = uVar5;
  uVar3 = *(undefined4 *)(lVar16 + 0xe4);
  uVar4 = *(undefined4 *)(lVar16 + 0xe8);
  uVar5 = *(undefined4 *)(lVar16 + 0xec);
  *(undefined4 *)(local_28 + 0xe) = *(undefined4 *)(lVar16 + 0xe0);
  *(undefined4 *)((longlong)local_28 + 0x74) = uVar3;
  *(undefined4 *)(local_28 + 0xf) = uVar4;
  *(undefined4 *)((longlong)local_28 + 0x7c) = uVar5;
  uVar8 = UEnum::GetPrivateStaticClass();
  uVar8 = FUN_141799410(uVar8,0xffffffffffffffff,L"EPartType_Vehicle");
  *(undefined8 *)(param_1 + 0x280) = uVar8;
  FUN_140ec85a0(param_1);
  if (lVar2 == 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x30) = *(undefined8 *)(lVar16 + 0xf0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x38) = *(undefined8 *)(param_1 + 0x280);
    lVar16 = *(longlong *)(param_1 + 0x288);
    iVar14 = *(int *)(lVar16 + 0x50);
    if (iVar14 != 0) {
      plVar10 = (longlong *)(*(longlong *)(lVar16 + 0x48) + 0x18);
      do {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 5;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    *(undefined4 *)(lVar16 + 0x50) = 0;
    if (*(int *)(lVar16 + 0x54) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (lVar16 + 0x48,0);
    }
    lVar16 = *(longlong *)(param_1 + 0x288);
    iVar14 = *(int *)(param_1 + 0x230);
    if (*(int *)(lVar16 + 0x54) < iVar14) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (lVar16 + 0x48,iVar14);
      iVar14 = *(int *)(param_1 + 0x230);
      lVar16 = *(longlong *)(param_1 + 0x288);
    }
    if (0 < iVar14) {
      do {
        lVar16 = *(longlong *)(param_1 + 0x288);
        lVar2 = *(longlong *)(param_1 + 0x228);
        iVar14 = *(int *)(lVar16 + 0x50);
        *(int *)(lVar16 + 0x50) = iVar14 + 1;
        if (*(int *)(lVar16 + 0x54) < iVar14 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(lVar16 + 0x48,iVar14);
        }
        FUN_140e9a010(*(longlong *)(lVar16 + 0x48) + (longlong)iVar14 * 0x28,
                      lVar2 + (longlong)(int)plVar7 * 0x28);
        uVar15 = (int)plVar7 + 1;
        plVar7 = (longlong *)(ulonglong)uVar15;
      } while ((int)uVar15 < *(int *)(param_1 + 0x230));
      lVar16 = *(longlong *)(param_1 + 0x288);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x298) + 0x38) = lVar16;
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 0x298) + 0x38) = *(undefined8 *)(param_1 + 0x240);
  }
  FUN_143015b70(*(undefined8 *)(param_1 + 0x298),&local_28);
  FUN_142d85250(*(undefined8 *)(param_1 + 0x298),1);
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ea40c0 FUN_140ea40c0 body=2576 status=ok
// SIG undefined FUN_140ea40c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ea40c0(longlong param_1,int param_2,float *param_3,undefined8 param_4,char param_5,
                  float param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar24 [16];
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
  float fVar52;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined8 local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  longlong local_148;
  undefined8 local_138;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [8];
  float fStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    plVar20 = (longlong *)0x0;
  }
  else {
    plVar20 = *(longlong **)(lVar2 + 0x118);
  }
  if ((((plVar20 != (longlong *)0x0) && (lVar2 != 0)) &&
      (lVar2 = *(longlong *)(param_1 + 0x118), lVar2 != 0)) && (0 < *(int *)(param_1 + 0x128))) {
    if (param_5 == '\0') {
      lVar2 = *(longlong *)(lVar2 + 0x68);
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x60);
    }
    if (lVar2 != 0) {
      plVar16 = (longlong *)(param_1 + 0x120);
      lVar2 = *(longlong *)*plVar16;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 400) != 0)) {
        local_148 = FUN_140626d60(lVar2);
        iVar18 = 0;
        if (-1 < param_2 + -1) {
          iVar18 = param_2 + -1;
        }
        iVar19 = iVar18 + -1;
        if ((param_2 < 0) ||
           (*(int *)((longlong)*(int *)(lVar2 + 0x770) * 0x10 + lVar2 + 0x730) <= param_2)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          if ((iVar19 < 0) || (*(int *)(local_148 + 0x450) <= iVar19)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 1;
            lVar12 = UMultiLineEditableTextBox::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              FUN_143111820(lVar2,iVar19,CONCAT71((int7)((ulonglong)(lVar12 + 0x88) >> 8),1));
            }
            lVar12 = *(longlong *)(param_1 + 0x118);
            local_118 = *(undefined8 *)(lVar12 + 0x70);
            uStack_110 = *(undefined8 *)(lVar12 + 0x78);
            _local_108 = *(undefined1 (*) [16])(lVar12 + 0x80);
            local_f8 = (float)*(undefined8 *)(lVar12 + 0x90);
            fStack_f4 = (float)((ulonglong)*(undefined8 *)(lVar12 + 0x90) >> 0x20);
            fStack_f0 = (float)*(undefined8 *)(lVar12 + 0x98);
            fStack_ec = (float)((ulonglong)*(undefined8 *)(lVar12 + 0x98) >> 0x20);
            uVar10 = FRotator::Quaternion(&DAT_1468b5da0,&local_138);
            fVar9 = fStack_ec;
            fVar8 = fStack_f0;
            fVar7 = fStack_f4;
            fVar6 = local_f8;
            fVar35 = fRam0000000146871748;
            fVar33 = fRam0000000146871744;
            fVar30 = _DAT_146871740;
            fVar52 = fRam00000001468716e8;
            fVar51 = fRam00000001468716e4;
            fVar50 = _DAT_1468716e0;
            auVar4._4_4_ = fStack_f4;
            auVar4._0_4_ = local_f8;
            auVar4._8_4_ = fStack_f0;
            auVar4._12_4_ = fStack_ec;
            auVar21._4_4_ = param_6;
            auVar21._0_4_ = param_6;
            auVar21._8_4_ = param_6;
            auVar21._12_4_ = 0;
            auVar21 = minps(auVar4,auVar21);
            auVar22._4_4_ = -(uint)(auVar21._4_4_ < fRam0000000146871744);
            auVar22._0_4_ = -(uint)(auVar21._0_4_ < _DAT_146871740);
            auVar22._8_4_ = -(uint)(auVar21._8_4_ < fRam0000000146871748);
            auVar22._12_4_ = -(uint)(auVar21._12_4_ < fRam000000014687174c);
            iVar11 = movmskps(uVar10,auVar22);
            if (iVar11 == 0) {
              fVar35 = param_6 * (float)local_108._0_4_;
              fVar23 = param_6 * (float)local_108._4_4_;
              fStack_100 = param_6 * fStack_100;
              fVar52 = (float)local_138 * local_118._4_4_;
              fVar30 = (float)local_138 * (float)local_118;
              fVar50 = local_138._4_4_ * (float)local_118;
              fVar51 = local_138._4_4_ * local_118._4_4_;
              local_118 = CONCAT44((float)local_138 * (float)uStack_110 * fRam0000000146871724 +
                                   fStack_12c * local_118._4_4_ +
                                   local_138._4_4_ * uStack_110._4_4_ * fRam0000000146871714 +
                                   fStack_130 * (float)local_118 * fRam0000000146871704,
                                   (float)local_138 * uStack_110._4_4_ * _DAT_146871720 +
                                   fStack_12c * (float)local_118 +
                                   local_138._4_4_ * (float)uStack_110 * _DAT_146871710 +
                                   fStack_130 * local_118._4_4_ * _DAT_146871700);
              uStack_110 = CONCAT44(fVar30 * fRam000000014687172c + fStack_12c * uStack_110._4_4_ +
                                    fVar51 * fRam000000014687171c +
                                    fStack_130 * (float)uStack_110 * fRam000000014687170c,
                                    fVar52 * fRam0000000146871728 + fStack_12c * (float)uStack_110 +
                                    fVar50 * fRam0000000146871718 +
                                    fStack_130 * uStack_110._4_4_ * fRam0000000146871708);
              fVar52 = fStack_100 * local_138._4_4_ - fVar23 * fStack_130;
              fVar30 = fVar35 * fStack_130 - fStack_100 * (float)local_138;
              fVar33 = fVar23 * (float)local_138 - fVar35 * local_138._4_4_;
              fVar52 = fVar52 + fVar52;
              fVar30 = fVar30 + fVar30;
              fVar33 = fVar33 + fVar33;
              fVar50 = (fVar33 * local_138._4_4_ - fVar30 * fStack_130) +
                       fVar52 * fStack_12c + fVar35 + DAT_1468b5d90;
              fVar51 = (fVar52 * fStack_130 - fVar33 * (float)local_138) +
                       fVar30 * fStack_12c + fVar23 + DAT_1468b5d94;
              fVar52 = (fVar30 * (float)local_138 - fVar52 * local_138._4_4_) +
                       fVar33 * fStack_12c + fStack_100 + DAT_1468b5d98;
            }
            else {
              fVar25 = local_138._4_4_ + local_138._4_4_;
              fVar27 = fStack_130 + fStack_130;
              fVar31 = ((float)local_138 + (float)local_138) * (float)local_138;
              fVar41 = fStack_12c * ((float)local_138 + (float)local_138);
              fVar47 = param_6 * local_f8;
              fVar48 = param_6 * fStack_f4;
              fVar49 = param_6 * fStack_f0;
              fVar44 = (fStack_12c * fVar27 + (float)local_138 * fVar25) * param_6;
              fVar45 = (fVar41 + local_138._4_4_ * fVar27) * param_6;
              fVar46 = (fStack_12c * fVar25 + (float)local_138 * fVar27) * param_6;
              fVar23 = (float)((uint)((_DAT_1468716e0 -
                                      (fVar27 * fStack_130 + fVar25 * local_138._4_4_)) * param_6) &
                              _DAT_1468716f0);
              fVar26 = (float)((uint)((fRam00000001468716e4 - (fVar27 * fStack_130 + fVar31)) *
                                     param_6) & uRam00000001468716f4);
              fVar28 = (float)((uint)((fRam00000001468716e8 - (fVar25 * local_138._4_4_ + fVar31)) *
                                     param_6) & uRam00000001468716f8);
              fVar29 = (float)((uint)((fRam00000001468716ec - (fVar31 + fVar31)) * 0.0) &
                              uRam00000001468716fc);
              fVar32 = param_6 * ((float)local_138 * fVar25 - fStack_12c * fVar27);
              fVar34 = param_6 * (local_138._4_4_ * fVar27 - fVar41);
              fVar36 = param_6 * ((float)local_138 * fVar27 - fStack_12c * fVar25);
              fVar31 = local_118._4_4_ + local_118._4_4_;
              fVar27 = (float)uStack_110 + (float)uStack_110;
              fVar41 = ((float)local_118 + (float)local_118) * (float)local_118;
              fVar25 = ((float)local_118 + (float)local_118) * uStack_110._4_4_;
              fVar40 = (fVar27 * uStack_110._4_4_ + fVar31 * (float)local_118) * local_f8;
              fVar42 = (fVar25 + fVar27 * local_118._4_4_) * fStack_f4;
              fVar43 = (fVar31 * uStack_110._4_4_ + fVar27 * (float)local_118) * fStack_f0;
              fVar37 = fStack_f4 * (fVar31 * (float)local_118 - fVar27 * uStack_110._4_4_);
              fVar38 = fStack_f0 * (fVar27 * local_118._4_4_ - fVar25);
              fVar39 = local_f8 * (fVar27 * (float)local_118 - fVar31 * uStack_110._4_4_);
              fVar25 = (float)((uint)((_DAT_1468716e0 -
                                      (fVar27 * (float)uStack_110 + fVar31 * local_118._4_4_)) *
                                     local_f8) & _DAT_1468716f0);
              fVar27 = (float)((uint)((fRam00000001468716e4 - (fVar27 * (float)uStack_110 + fVar41))
                                     * fStack_f4) & uRam00000001468716f4);
              fVar31 = (float)((uint)((fRam00000001468716e8 - (fVar31 * local_118._4_4_ + fVar41)) *
                                     fStack_f0) & uRam00000001468716f8);
              fVar41 = (float)((uint)((fRam00000001468716ec - (fVar41 + fVar41)) * fStack_ec) &
                              uRam00000001468716fc);
              local_188 = fVar40 * fVar32 + fVar25 * fVar23 + fVar39 * fVar46 +
                          fVar41 * DAT_1468b5d90;
              fStack_184 = fVar40 * fVar26 + fVar25 * fVar44 + fVar39 * fVar34 +
                           fVar41 * DAT_1468b5d94;
              fStack_180 = fVar40 * fVar45 + fVar25 * fVar36 + fVar39 * fVar28 +
                           fVar41 * DAT_1468b5d98;
              fStack_17c = fVar40 * fVar29 + fVar25 * fVar29 + fVar39 * fVar29 +
                           fVar41 * fRam00000001468716ec;
              local_178 = fVar27 * fVar32 + fVar37 * fVar23 + fVar42 * fVar46 +
                          fVar41 * DAT_1468b5d90;
              fStack_174 = fVar27 * fVar26 + fVar37 * fVar44 + fVar42 * fVar34 +
                           fVar41 * DAT_1468b5d94;
              fStack_170 = fVar27 * fVar45 + fVar37 * fVar36 + fVar42 * fVar28 +
                           fVar41 * DAT_1468b5d98;
              fStack_16c = fVar27 * fVar29 + fVar37 * fVar29 + fVar42 * fVar29 +
                           fVar41 * fRam00000001468716ec;
              local_168 = fVar38 * fVar32 + fVar43 * fVar23 + fVar31 * fVar46 +
                          fVar41 * DAT_1468b5d90;
              fStack_164 = fVar38 * fVar26 + fVar43 * fVar44 + fVar31 * fVar34 +
                           fVar41 * DAT_1468b5d94;
              fStack_160 = fVar38 * fVar45 + fVar43 * fVar36 + fVar31 * fVar28 +
                           fVar41 * DAT_1468b5d98;
              fStack_15c = fVar38 * fVar29 + fVar43 * fVar29 + fVar31 * fVar29 +
                           fVar41 * fRam00000001468716ec;
              local_158 = (float)local_108._4_4_ * fVar32 + (float)local_108._0_4_ * fVar23 +
                          fStack_100 * fVar46 + fRam00000001468716ec * DAT_1468b5d90;
              fStack_154 = (float)local_108._4_4_ * fVar26 + (float)local_108._0_4_ * fVar44 +
                           fStack_100 * fVar34 + fRam00000001468716ec * DAT_1468b5d94;
              fStack_150 = (float)local_108._4_4_ * fVar45 + (float)local_108._0_4_ * fVar36 +
                           fStack_100 * fVar28 + fRam00000001468716ec * DAT_1468b5d98;
              fStack_14c = (float)local_108._4_4_ * fVar29 + (float)local_108._0_4_ * fVar29 +
                           fStack_100 * fVar29 + fRam00000001468716ec * fRam00000001468716ec;
              FMatrix::RemoveScaling(&local_188);
              fVar50 = (float)(-(uint)(fVar30 <= fVar47) & (_DAT_146871730 ^ (uint)fVar50) ^
                              _DAT_146871730);
              fVar51 = (float)(-(uint)(fVar33 <= fVar48) & (uRam0000000146871734 ^ (uint)fVar51) ^
                              uRam0000000146871734);
              fVar52 = (float)(-(uint)(fVar35 <= fVar49) & (uRam0000000146871738 ^ (uint)fVar52) ^
                              uRam0000000146871738);
              local_188 = local_188 * fVar50;
              fStack_180 = fStack_180 * fVar50;
              fStack_184 = fStack_184 * fVar50;
              fStack_170 = fStack_170 * fVar51;
              fStack_174 = fStack_174 * fVar51;
              local_178 = local_178 * fVar51;
              fStack_160 = fStack_160 * fVar52;
              local_168 = local_168 * fVar52;
              fStack_164 = fStack_164 * fVar52;
              FQuat::FQuat(&local_128,&local_188);
              local_198 = CONCAT44(local_198._4_4_,0x322bcc77);
              auVar24._0_4_ = local_128 * local_128 + fStack_120 * fStack_120;
              auVar24._4_4_ = fStack_124 * fStack_124 + fStack_11c * fStack_11c;
              auVar24._8_4_ = fStack_120 * fStack_120 + local_128 * local_128;
              auVar24._12_4_ = fStack_11c * fStack_11c + fStack_124 * fStack_124;
              fVar33 = auVar24._4_4_ + auVar24._0_4_;
              fVar35 = auVar24._8_4_ + auVar24._4_4_;
              fVar23 = auVar24._12_4_ + auVar24._8_4_;
              fVar25 = auVar24._0_4_ + auVar24._12_4_;
              auVar3._4_4_ = fVar35;
              auVar3._0_4_ = fVar33;
              auVar3._8_4_ = fVar23;
              auVar3._12_4_ = fVar25;
              auVar21 = rsqrtps(auVar24,auVar3);
              fVar50 = auVar21._0_4_;
              fVar51 = auVar21._4_4_;
              fVar52 = auVar21._8_4_;
              fVar30 = auVar21._12_4_;
              fVar50 = (_DAT_1468716d0 - fVar50 * fVar50 * fVar33 * _DAT_1468716d0) * fVar50 +
                       fVar50;
              fVar51 = (fRam00000001468716d4 - fVar51 * fVar51 * fVar35 * fRam00000001468716d4) *
                       fVar51 + fVar51;
              fVar52 = (fRam00000001468716d8 - fVar52 * fVar52 * fVar23 * fRam00000001468716d8) *
                       fVar52 + fVar52;
              fVar30 = (fRam00000001468716dc - fVar30 * fVar30 * fVar25 * fRam00000001468716dc) *
                       fVar30 + fVar30;
              local_118 = CONCAT44(((uint)(((fRam00000001468716d4 -
                                            fVar51 * fVar51 * fVar35 * fRam00000001468716d4) *
                                            fVar51 + fVar51) * fStack_124) ^ uRam00000001468716c4) &
                                   -(uint)(1e-08 <= fVar35) ^ uRam00000001468716c4,
                                   ((uint)(((_DAT_1468716d0 -
                                            fVar50 * fVar50 * fVar33 * _DAT_1468716d0) * fVar50 +
                                           fVar50) * local_128) ^ _DAT_1468716c0) &
                                   -(uint)(1e-08 <= fVar33) ^ _DAT_1468716c0);
              uStack_110 = CONCAT44(((uint)(((fRam00000001468716dc -
                                             fVar30 * fVar30 * fVar25 * fRam00000001468716dc) *
                                             fVar30 + fVar30) * fStack_11c) ^ uRam00000001468716cc)
                                    & -(uint)(1e-08 <= fVar25) ^ uRam00000001468716cc,
                                    ((uint)(((fRam00000001468716d8 -
                                             fVar52 * fVar52 * fVar23 * fRam00000001468716d8) *
                                             fVar52 + fVar52) * fStack_120) ^ uRam00000001468716c8)
                                    & -(uint)(1e-08 <= fVar23) ^ uRam00000001468716c8);
              fVar50 = local_158;
              fVar51 = fStack_154;
              fVar52 = fStack_150;
            }
            fStack_ec = fVar9 * 0.0;
            fStack_f0 = param_6 * fVar8;
            fStack_f4 = param_6 * fVar7;
            local_f8 = param_6 * fVar6;
            local_108._4_4_ = fVar51 + param_3[1];
            local_108._0_4_ = fVar50 + *param_3;
            fStack_100 = fVar52 + param_3[2];
            unique0x10000186 = 0;
            if (param_5 == '\0') {
              local_198 = 0;
              uVar15 = FUN_142a232e0();
              local_138 = 0;
              FUN_1417846f0(plVar20,
                            L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                           );
              local_1a8 = 0;
              local_1b0 = 0;
              local_1b8 = local_1b8 & 0xffffffffffffff00;
              local_1c0 = 0;
              local_1c8 = (ulonglong)local_1c8._4_4_ << 0x20;
              plVar16 = (longlong *)FUN_1417985e0(uVar15,plVar20,0,0);
              (**(code **)(*plVar16 + 0x928))
                        (plVar16,*(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x68));
              *(byte *)((longlong)plVar16 + 0x24c) = *(byte *)((longlong)plVar16 + 0x24c) | 0xc;
              (**(code **)(*plVar16 + 0x638))(plVar16,0);
              local_1c8 = CONCAT71(local_1c8._1_7_,1);
              FUN_142399d60(plVar16,&local_118,0,0);
              FUN_142382f60(plVar16,*(undefined8 *)(lVar2 + 400),&DAT_146532180,
                            *(undefined8 *)
                             (*(longlong *)(local_148 + 0x448) + (longlong)iVar19 * 0x18));
              uVar15 = (**(code **)(*plVar20 + 0x148))(plVar20);
              FUN_14234b270(plVar16,uVar15);
              iVar18 = *(int *)(param_1 + 0x138);
              *(int *)(param_1 + 0x138) = iVar18 + 1;
              if (*(int *)(param_1 + 0x13c) < iVar18 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_1 + 0x130,iVar18);
              }
              *(longlong **)(*(longlong *)(param_1 + 0x130) + (longlong)iVar18 * 8) = plVar16;
            }
            else {
              lVar13 = UMultiLineEditableTextBox::GetPrivateStaticClass();
              lVar12 = *(longlong *)(param_1 + 0x118);
              if (*(longlong *)(lVar12 + 0x30) != 0) {
                lVar14 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
                lVar12 = *(longlong *)(lVar12 + 0x30);
                for (lVar17 = lVar12; lVar17 != 0; lVar17 = *(longlong *)(lVar17 + 0x30)) {
                  if (lVar17 == lVar14) {
                    if (lVar12 != 0) {
                      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x30);
                    }
                    break;
                  }
                }
              }
              local_198 = 0;
              lVar12 = 0;
              if (lVar13 != 0) {
                lVar14 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
                lVar17 = lVar13;
                do {
                  lVar12 = lVar13;
                  if (lVar17 == lVar14) break;
                  lVar17 = *(longlong *)(lVar17 + 0x30);
                  lVar12 = 0;
                } while (lVar17 != 0);
              }
              local_1b8 = 0;
              local_1c0 = local_1c0 & 0xffffffffffffff00;
              local_1c8 = 0;
              lVar12 = NewObject<USaveGame>(plVar20,lVar12,local_198,0);
              local_1c8 = CONCAT71(local_1c8._1_7_,1);
              iVar11 = *(int *)(*(longlong *)(param_1 + 0xb0) + 0x348);
              uVar1 = *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x3a8);
              *(byte *)(lVar12 + 0x24c) = *(byte *)(lVar12 + 0x24c) | 0xc;
              *(uint *)(lVar12 + 0xc2c) = iVar11 * 0x1000000 + 0x1000000U | uVar1;
              *(undefined1 *)(lVar12 + 0xb6a) = 1;
              FUN_142399d60(lVar12,&local_118,0,0);
              FUN_142382f60(lVar12,*(undefined8 *)(lVar2 + 400),&DAT_146532180,
                            *(undefined8 *)
                             (*(longlong *)(local_148 + 0x448) + (longlong)iVar19 * 0x18));
              FUN_1431119b0(lVar12,*(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x60),1);
              FUN_143110f60(lVar12);
              FUN_143111240(lVar12,lVar2,iVar18);
              iVar18 = *(int *)(param_1 + 0x128);
              *(int *)(param_1 + 0x128) = iVar18 + 1;
              if (*(int *)(param_1 + 300) < iVar18 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar18);
              }
              *(longlong *)(*plVar16 + (longlong)iVar18 * 8) = lVar12;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ea4ad0 FUN_140ea4ad0 body=1380 status=ok
// SIG undefined FUN_140ea4ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ea4ad0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *_Src;
  bool bVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  undefined1 auStack_1f8 [32];
  undefined4 *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined1 local_1c0 [8];
  void *local_1b8;
  ulonglong local_1b0;
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  longlong *local_170;
  longlong *local_158;
  longlong local_118;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  plVar3 = (longlong *)(param_1 + 0x750);
  *(undefined4 *)(param_1 + 0x758) = 0;
  if (*(int *)(param_1 + 0x75c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar3,0);
  }
  lVar11 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar11 == 0) {
LAB_140ea4b6e:
    lVar11 = 0;
  }
  else {
    lVar12 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140ea4b6e;
  }
  FUN_140ee5ed0(lVar11,plVar3);
  local_1d8 = (undefined4 *)0x0;
  local_1d0 = 0;
  lVar11 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar11 == 0) {
LAB_140ea4bcc:
    lVar11 = 0;
  }
  else {
    lVar12 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140ea4bcc;
  }
  uVar13 = FUN_140ee5e20(lVar11);
  lVar12 = *plVar3;
  lVar11 = lVar12 + (longlong)*(int *)(param_1 + 0x758) * 8;
  for (; lVar12 != lVar11; lVar12 = lVar12 + 8) {
    uVar14 = FWeakObjectPtr::Get(lVar12);
    FUN_1411e38c0(local_198,uVar14,uVar13);
    uVar7 = local_1d0;
    lVar15 = (longlong)(int)local_1d0;
    iVar9 = (int)local_1d0 + 1;
    local_1d0 = CONCAT44(local_1d0._4_4_,iVar9);
    if (local_1d0._4_4_ < iVar9) {
      TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeGrow
                (&local_1d8,uVar7 & 0xffffffff);
    }
    FUN_140e9a4f0(local_1d8 + lVar15 * 0x44,local_198);
    if (local_118 != 0) {
      FMemory::Free();
    }
    plVar18 = local_158;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_158 + 1;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_158)();
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
    }
    plVar18 = local_170;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_170 + 1;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_170)();
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
    }
    plVar18 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_190 + 1;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_190)();
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
    }
  }
  iVar9 = *(int *)(param_1 + 0x784);
  if ((iVar9 < 0) || (*(int *)(param_1 + 0x6f8) <= iVar9)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar6) {
    local_1b8 = (void *)0x0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_1c0[0] = *(undefined1 *)((longlong)iVar9 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x6f0));
    if (&local_1b8 != (void **)(param_1 + 0x700)) {
      uVar5 = *(uint *)(param_1 + 0x708);
      _Src = *(void **)(param_1 + 0x700);
      local_1b0 = (ulonglong)uVar5;
      if (uVar5 != 0) {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_1b8,uVar5,0);
        _guard_xfg_dispatch_icall_nop(local_1b8,_Src,(longlong)(int)uVar5 * 0x18);
      }
    }
    local_58 = (longlong *)0x0;
    local_88[0] = FRollingHash::GetWindowSize;
    local_48 = 0;
    FUN_1411fc8c0(&local_1d8,local_1c0,1,local_88);
    if (local_48 != 0) {
      plVar18 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar18 = local_58;
      }
      if (plVar18 != (longlong *)0x0) {
        (**(code **)(*plVar18 + 0x10))(plVar18,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_1b8 != (void *)0x0) {
      FMemory::Free();
    }
  }
  *(undefined4 *)(param_1 + 0x758) = 0;
  if (*(int *)(param_1 + 0x75c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar3,0);
  }
  puVar17 = local_1d8 + (longlong)(int)local_1d0 * 0x44;
  if (local_1d8 != puVar17) {
    puVar16 = local_1d8 + 0x37;
    do {
      cVar8 = FWeakObjectPtr::IsValid(puVar16);
      if (cVar8 != '\0') {
        iVar9 = *(int *)(param_1 + 0x758);
        *(int *)(param_1 + 0x758) = iVar9 + 1;
        if (*(int *)(param_1 + 0x75c) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar9);
        }
        lVar11 = *plVar3;
        *(undefined4 *)(lVar11 + (longlong)iVar9 * 8) = *puVar16;
        *(undefined4 *)(lVar11 + (longlong)iVar9 * 8 + 4) = puVar16[1];
      }
      puVar4 = puVar16 + 0xd;
      puVar16 = puVar16 + 0x44;
    } while (puVar4 != puVar17);
  }
  lVar11 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar11 != 0) {
    FUN_14145f370();
  }
  lVar11 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar11 != 0) {
    lVar12 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140ea4f3e;
  }
  lVar11 = 0;
LAB_140ea4f3e:
  iVar10 = FUN_140ee5dc0(lVar11);
  plVar18 = (longlong *)(param_1 + 0x760);
  iVar9 = *(int *)(param_1 + 0x768);
  if (iVar9 < iVar10) {
    *(int *)(param_1 + 0x768) = iVar10;
    if (*(int *)(param_1 + 0x76c) < iVar10) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar18);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar18 + (longlong)iVar9 * 8),0,(longlong)(iVar10 - iVar9) << 3);
  }
  else if ((iVar10 < iVar9) && (iVar9 - iVar10 != 0)) {
    *(int *)(param_1 + 0x768) = iVar9 - (iVar9 - iVar10);
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar18);
  }
  puVar16 = (undefined4 *)*plVar18;
  puVar17 = puVar16 + (longlong)*(int *)(param_1 + 0x768) * 2;
  do {
    if (puVar16 == puVar17) {
      FUN_140e9bfd0(&local_1d8);
      return;
    }
    lVar12 = *plVar3;
    lVar11 = lVar12 + (longlong)*(int *)(param_1 + 0x758) * 8;
    for (; lVar12 != lVar11; lVar12 = lVar12 + 8) {
      cVar8 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar12,puVar16);
      if (cVar8 != '\0') goto LAB_140ea4ff1;
    }
    FWeakObjectPtr::operator=(&local_1c8,0);
    *puVar16 = local_1c8;
    puVar16[1] = local_1c4;
LAB_140ea4ff1:
    puVar16 = puVar16 + 2;
  } while( true );
}



// FUNCTION 140ea5040 FUN_140ea5040 body=297 status=ok
// SIG undefined FUN_140ea5040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140ea5040(longlong param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_3;
  fVar8 = *param_4 - fVar1;
  fVar2 = param_3[1];
  fVar7 = param_4[1] - fVar2;
  fVar4 = (float)DAT_1468716b0;
  fVar3 = DAT_1468716b0._4_4_;
  auVar5._4_4_ = fVar7;
  auVar5._0_4_ = fVar8;
  auVar5._8_4_ = param_4[2] - param_3[2];
  auVar5._12_4_ = 0;
  auVar5 = divps(auVar5,_DAT_1468716b0);
  fVar8 = fVar8 - (float)(int)auVar5._0_4_ * fVar4;
  fVar7 = fVar7 - (float)(int)auVar5._4_4_ * fVar3;
  fVar8 = (float)(((uint)(fVar4 + fVar8) ^ (uint)fVar8) & -(uint)(0.0 <= fVar8) ^
                 (uint)(fVar4 + fVar8));
  fVar6 = (float)(((uint)(fVar3 + fVar7) ^ (uint)fVar7) & -(uint)(0.0 <= fVar7) ^
                 (uint)(fVar3 + fVar7));
  fVar7 = *(float *)(param_1 + 0x1c0);
  if (fVar7 <= 1.0) {
    fVar7 = 1.0;
  }
  fVar8 = (float)(((uint)(fVar8 - fVar4) ^ (uint)fVar8) & -(uint)(_DAT_1468716a0 < fVar8) ^
                 (uint)fVar8);
  fVar6 = (float)(((uint)(fVar6 - fVar3) ^ (uint)fVar6) & -(uint)(fRam00000001468716a4 < fVar6) ^
                 (uint)fVar6);
  param_5 = (*(float *)(param_1 + 0x1f8) / fVar7) * *(float *)(param_1 + 0x1d0) * param_5;
  fVar4 = -param_5;
  fVar7 = fVar4;
  if ((fVar4 <= fVar6) && (fVar7 = fVar6, param_5 <= fVar6)) {
    fVar7 = param_5;
  }
  if ((fVar4 <= fVar8) && (fVar4 = fVar8, param_5 <= fVar8)) {
    fVar4 = param_5;
  }
  param_2[2] = param_3[2];
  *param_2 = fVar1 + fVar4;
  param_2[1] = fVar2 + fVar7;
  return param_2;
}



// FUNCTION 140ea5170 GetWindowSize body=3 status=ok
// SIG undefined GetWindowSize(void)

undefined4 FRollingHash::GetWindowSize(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 140ea5180 FUN_140ea5180 body=77 status=ok
// SIG undefined FUN_140ea5180(void)

void FUN_140ea5180(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)param_1[1] + 0x400))();
  FUN_143014080(*param_1,param_2,uVar1,param_1[2],0,1,0);
  return;
}



// FUNCTION 140ea5250 FUN_140ea5250 body=108 status=ok
// SIG undefined FUN_140ea5250(void)

void FUN_140ea5250(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    lVar3 = FUN_141488730();
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
      FUN_1411f7b40(lVar1,**(undefined8 **)(param_1 + 0x10),**(undefined8 **)(param_1 + 8));
    }
  }
  return;
}



// FUNCTION 140ea52e0 FUN_140ea52e0 body=130 status=ok
// SIG undefined FUN_140ea52e0(void)

undefined8 FUN_140ea52e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  
  cVar2 = FUN_142dc6710();
  if ((cVar2 == '\0') || (cVar2 = FUN_1407c3030(param_1 + 0x6c0), cVar2 != '\0')) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (2 < *(byte *)(lVar1 + 0xec0))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140ea5370 FUN_140ea5370 body=116 status=ok
// SIG undefined FUN_140ea5370(void)

undefined1 FUN_140ea5370(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (*param_2 != 0) {
    lVar3 = UUGJournalKey::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(*param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = FUN_140ea52e0(param_1);
      if (cVar2 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 140ea53f0 FUN_140ea53f0 body=212 status=ok
// SIG undefined FUN_140ea53f0(void)

undefined8 FUN_140ea53f0(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x230) != '\0') {
      return 0;
    }
    cVar2 = FUN_1407c3030(param_1 + 0x238);
    if (cVar2 != '\0') {
      return 0;
    }
  }
  if ((1 < (byte)(*(char *)(param_1 + 0x3ae) - 1U)) &&
     (((*(byte *)(param_1 + 0x3ad) & 1) == 0 || (*(int *)(param_1 + 0x348) != 0)))) {
    plVar1 = *(longlong **)(param_1 + 0x118);
    uVar3 = UScrollBox::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    if ((lVar4 == 0) || ((*(uint *)(lVar4 + 0x840) >> 3 & 1) == 0)) {
      plVar1 = *(longlong **)(param_1 + 0x118);
      uVar3 = FUN_142e27720();
      lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
      if (lVar4 != 0) {
        uVar3 = UEnvQueryTest_Random::StaticClass();
        cVar2 = FUN_142c736c0(lVar4,uVar3);
        if (cVar2 != '\0') {
          return 0;
        }
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 140ea54d0 FUN_140ea54d0 body=105 status=ok
// SIG undefined FUN_140ea54d0(void)

undefined8 FUN_140ea54d0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  
  cVar1 = BuildSettings::IsPromotedBuild();
  if (cVar1 == '\0') {
    return 0;
  }
  if (param_2 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (cVar1 = FUN_14122f110(param_2), cVar1 != '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140ea5540 FUN_140ea5540 body=75 status=ok
// SIG undefined FUN_140ea5540(void)

undefined8 FUN_140ea5540(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x530) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x530) + 0x418) == '\x01')) {
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x4c8) + 0x110))((longlong *)(param_1 + 0x4c8),0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FUN_140e85b90(param_1,0);
  return uVar2;
}



// FUNCTION 140ea5590 FUN_140ea5590 body=54 status=ok
// SIG undefined FUN_140ea5590(void)

void FUN_140ea5590(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    uVar1 = FUN_142c48f90(*(longlong *)(param_1 + 0x1c0),param_1,0);
    FUN_140ea86c0(param_1,uVar1);
    return;
  }
  return;
}



// FUNCTION 140ea55d0 FUN_140ea55d0 body=107 status=ok
// SIG undefined FUN_140ea55d0(void)

void FUN_140ea55d0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x1f8);
  uVar2 = (longlong)*(int *)(param_1 + 0x200) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x200) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_1407da260(*plVar1,1);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 140ea5640 FUN_140ea5640 body=127 status=ok
// SIG undefined FUN_140ea5640(void)

void FUN_140ea5640(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x218);
  plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x220) * 3;
  for (; plVar3 != plVar1; plVar3 = plVar3 + 3) {
    plVar2 = (longlong *)*plVar3;
    plVar4 = plVar2 + (longlong)(int)plVar3[1] * 0x25;
    for (; plVar2 != plVar4; plVar2 = plVar2 + 0x25) {
      if (*plVar2 != 0) {
        FUN_1407da260(*plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 140ea56c0 FUN_140ea56c0 body=65 status=ok
// SIG undefined FUN_140ea56c0(void)

void FUN_140ea56c0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x980) == 0) {
    return;
  }
  cVar1 = FUN_142c48f90(*(longlong *)(param_1 + 0x980),param_1,0);
  if (cVar1 != '\0') {
    Z_Construct_UClass_AUGCharacter_Statics::NewProp_bCanFlinch_SetBit();
    return;
  }
  UEngine::InitHardwareSurvey(param_1);
  return;
}



// FUNCTION 140ea5710 FUN_140ea5710 body=491 status=ok
// SIG undefined FUN_140ea5710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ea5710(longlong param_1,longlong param_2)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x210) != 0) {
    cVar1 = UIndianaGameUserSettings::GetShowEnemyHealthBars();
    fVar3 = (float)FUN_1423b1370(*(undefined8 *)(param_1 + 0x210));
    if (cVar1 == '\0') {
      fVar4 = *(float *)(param_1 + 0x208);
      if (0.0 <= fVar4) {
        if (fVar4 <= fVar3) {
          fVar3 = fVar4;
        }
      }
      else {
        fVar3 = 0.0;
      }
    }
    else {
      lVar2 = (long)*(undefined8 *)(param_1 + 0x210);
      fVar4 = (float)FUN_1423b1370();
      fVar4 = fVar4 + *(float *)(param_1 + 0x208);
      if (1e-08 < ABS(fVar3)) {
        fVar3 = (float)(int)(fVar4 / fVar3) * fVar3;
        if (ABS(fVar4) < ABS(fVar3)) {
          fVar3 = fVar4;
        }
        fVar3 = fVar4 - fVar3;
      }
      else {
        AK::MemoryMgr::StartProfileThreadUsage(lVar2);
        fVar3 = 0.0;
      }
    }
    *(float *)(param_1 + 0x208) = fVar3;
    local_78 = 0;
    FUN_1423b1690(*(undefined8 *)(param_1 + 0x210),&local_68,fVar3,1);
    fVar4 = fStack_64 * 1.0 - fStack_60 * 0.0;
    fVar5 = fStack_60 * 0.0 - local_68 * 1.0;
    fVar6 = local_68 * 0.0 - fStack_64 * 0.0;
    fVar4 = fVar4 + fVar4;
    fVar5 = fVar5 + fVar5;
    fVar6 = fVar6 + fVar6;
    fVar3 = *(float *)(param_1 + 0x1fc);
    local_58 = local_58 +
               ((fVar6 * fStack_64 - fVar5 * fStack_60) + fStack_5c * fVar4 + 0.0) * fVar3;
    fStack_54 = fStack_54 +
                ((fVar4 * fStack_60 - fVar6 * local_68) + fStack_5c * fVar5 + 0.0) * fVar3;
    fStack_50 = fStack_50 +
                ((fVar5 * local_68 - fVar4 * fStack_64) + fStack_5c * fVar6 + 1.0) * fVar3;
    fStack_4c = fStack_4c + 0.0;
    if (param_2 != 0) {
      local_78 = 0;
      FUN_14223d270(param_2,&local_68,0,0);
    }
  }
  return;
}



// FUNCTION 140ea5900 FUN_140ea5900 body=53 status=ok
// SIG undefined FUN_140ea5900(void)

void FUN_140ea5900(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_141477fa0();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_140ebe510(lVar2);
    }
  }
  return;
}



// FUNCTION 140ea5940 FUN_140ea5940 body=271 status=ok
// SIG undefined FUN_140ea5940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ea5940(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ea5220;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ea5a50 FUN_140ea5a50 body=179 status=ok
// SIG undefined FUN_140ea5a50(void)

ulonglong FUN_140ea5a50(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint7 uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar2 = uVar7;
  if (*param_2 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x908))();
    iVar1 = (int)uVar2;
    if (0 < iVar1) {
      do {
        lVar3 = (**(code **)(*param_1 + 0x560))(param_1,uVar7);
        uVar2 = 0;
        if (lVar3 != 0) {
          lVar4 = FUN_1429ba110();
          uVar5 = (uint7)((ulonglong)(lVar4 + 0x88) >> 8);
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            uVar2 = (ulonglong)uVar5 << 8;
          }
          else {
            uVar2 = CONCAT71(uVar5,1);
          }
          if (((char)uVar2 != '\0') && (*(longlong **)(lVar3 + 0x20) == param_1)) {
            uVar2 = FUN_142588f70(lVar3,*param_2);
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < iVar1);
    }
  }
  return uVar2;
}



// FUNCTION 140ea5b10 FUN_140ea5b10 body=113 status=ok
// SIG undefined FUN_140ea5b10(void)

void FUN_140ea5b10(undefined8 param_1,ulonglong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = (longlong *)*param_2;
  uVar2 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar1 + (int)param_2[1] < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_140ea5a50(*plVar1,param_1);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 140ea5b90 FUN_140ea5b90 body=114 status=ok
// SIG undefined FUN_140ea5b90(void)

void FUN_140ea5b90(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = (longlong *)*param_2;
  uVar2 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar1 + (int)param_2[1] < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_140ea5a50(*plVar1,param_1 + 0x10);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 140ea5c10 FUN_140ea5c10 body=90 status=ok
// SIG undefined FUN_140ea5c10(void)

void FUN_140ea5c10(longlong param_1)

{
  FUN_140eaa550(param_1 + 0x4e0,*(byte *)(param_1 + 0x3ad) >> 4 & 1);
  if (((((*(byte *)(param_1 + 0x3ad) & 0x10) != 0) && (*(char *)(param_1 + 0x3ae) != '\0')) &&
      ((*(byte *)(param_1 + 0x6b4) & 8) == 0)) && (*(longlong *)(param_1 + 0x6a8) == 0)) {
    FUN_140ec6640(param_1);
    return;
  }
  return;
}



// FUNCTION 140ea5c70 FUN_140ea5c70 body=502 status=ok
// SIG undefined FUN_140ea5c70(void)

void FUN_140ea5c70(longlong param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar1 = *(char *)(param_1 + 0x3ae);
  if (cVar1 != param_2) {
    *(char *)(param_1 + 0x3ae) = param_2;
    if (param_2 == '\0') {
      if (cVar1 == '\x03') {
        FUN_140ebec00(param_1);
        FUN_140ec3be0(param_1 + 0x4e0);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x300,0);
        return;
      }
    }
    else if (param_2 == '\x01') {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar4 = DAT_146b33f38;
      lVar5 = DAT_146b33f38 + 0x60;
      lVar3 = FWeakObjectPtr::Get(lVar5);
      if (lVar3 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if (DAT_1464b56f4 == *(int *)(lVar4 + 0x68)) {
          return;
        }
        if (*(longlong *)(lVar4 + 0x70) == 0) {
          return;
        }
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar5,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar4 + 0x68) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(lVar5);
        if (lVar3 == 0) {
          return;
        }
      }
      lVar4 = FUN_142e778a0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar4 = *(longlong *)(lVar3 + 0x80 + (ulonglong)*(byte *)(param_1 + 0x3af) * 8);
        if (lVar4 != 0) {
          TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x328,*(byte *)(param_1 + 0x3af));
          FUN_140ea0ff0(param_1 + 0x4e0,lVar4);
          if ((*(byte *)(param_1 + 0x3ad) & 0x10) != 0) {
            FUN_140ea5c10(param_1);
          }
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x2d0,0);
        }
      }
    }
    else {
      if (param_2 == '\x02') {
        if ((*(byte *)(param_1 + 0x3ad) & 0x10) != 0) {
          FUN_140ea5c10(param_1);
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x2e0,0);
        return;
      }
      if (param_2 == '\x03') {
        FUN_140ebec00(param_1);
        FUN_140ea37f0(param_1 + 0x4e0);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x2f0,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ea5e70 FUN_140ea5e70 body=349 status=ok
// SIG undefined FUN_140ea5e70(void)

void FUN_140ea5e70(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  *(undefined1 *)(param_1 + 0xce) = 1;
  if (param_1[7] == 0) {
    return;
  }
  FUN_142088ee0(param_1[7],2);
  local_18[1] = 0xc;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xc,"ImageHolder",0xc,0x3f);
  plVar1 = param_1 + 0xc6;
  lVar3 = FWeakObjectPtr::Get(plVar1);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[199]) && (param_1[200] != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar1,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 199) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(plVar1);
      if (lVar3 != 0) goto LAB_140ea5f5c;
    }
  }
  else {
LAB_140ea5f5c:
    lVar4 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140ea5f95;
  }
  lVar3 = 0;
LAB_140ea5f95:
  (**(code **)(*param_1 + 0x2a0))(param_1,local_18,lVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ea5fd0 FUN_140ea5fd0 body=490 status=ok
// SIG undefined FUN_140ea5fd0(void)

ulonglong FUN_140ea5fd0(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_58;
  float local_50;
  
  fVar6 = *(float *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x118) == 0) {
    return (ulonglong)(uint)fVar6;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
  if (lVar1 == 0) {
    local_50 = (float)DAT_1464aa7b0;
    puVar2 = &local_58;
    local_58 = DAT_1464aa7a8;
  }
  else {
    puVar2 = (undefined8 *)FUN_142369f10(lVar1,&local_58);
  }
  local_50 = *(float *)(puVar2 + 1);
  fVar7 = -((float)DAT_1464aa798 * (float)*puVar2 +
            DAT_1464aa798._4_4_ * (float)((ulonglong)*puVar2 >> 0x20) + DAT_1464aa7a0 * local_50);
  fVar3 = -1.0;
  if ((-1.0 <= fVar7) && (fVar3 = fVar7, 1.0 <= fVar7)) {
    fVar3 = 1.0;
  }
  fVar3 = _guard_xfg_dispatch_icall_nop(fVar3);
  fVar5 = *(float *)(param_1 + 0x1e4) * 0.5;
  if ((fVar5 + 90.0 < fVar3 * 57.295776) || (fVar3 * 57.295776 < 90.0 - fVar5)) {
    fVar6 = fVar6 + fVar7 * *(float *)(param_1 + 0x1e0) * param_2;
  }
  fVar3 = _guard_xfg_dispatch_icall_nop(1.0 - *(float *)(param_1 + 0x1dc),param_2);
  fVar6 = fVar6 * fVar3;
  if (*(float *)(param_1 + 0x204) != 0.0) {
    fVar6 = fVar6 + *(float *)(param_1 + 0x204);
    *(undefined4 *)(param_1 + 0x204) = 0;
  }
  fVar3 = *(float *)(param_1 + 0x1d4);
  uVar4 = 0x80000000;
  fVar7 = -fVar3;
  if ((-fVar3 <= fVar6) && (uVar4 = 0, fVar7 = fVar3, fVar6 <= fVar3)) {
    uVar4 = 0;
    fVar7 = fVar6;
  }
  fVar6 = ABS(*(float *)(param_1 + 0x1d8));
  if ((ABS(fVar7) < fVar6) && (1e-08 < fVar6)) {
    return (ulonglong)(uint)*(float *)(param_1 + 0x1d8);
  }
  return CONCAT44(uVar4,fVar7);
}



// FUNCTION 140ea61c0 FUN_140ea61c0 body=1450 status=ok
// SIG undefined FUN_140ea61c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ea61c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined8 local_1c0;
  undefined4 *local_1b8;
  ulonglong *puStack_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [24];
  undefined4 local_80 [2];
  longlong local_78;
  longlong *local_68;
  char local_58;
  ulonglong local_50 [2];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if (*(char *)(param_1 + 0x747) != '\0') {
    local_1c8 = 0;
    local_1c0 = 0;
    *(undefined1 *)(param_1 + 0x747) = 0;
    FUN_140eae570(param_1,&local_1c8);
    local_188 = (ulonglong *)CONCAT44(local_188._4_4_,(undefined4)local_188);
    uStack_180 = (ulonglong *)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180);
    if ((*(longlong *)(param_1 + 0x7f8) != 0) &&
       (local_188 = (ulonglong *)CONCAT44(local_188._4_4_,(undefined4)local_188),
       uStack_180 = (ulonglong *)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180),
       *(longlong *)(param_1 + 0x800) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x800) + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      local_188 = (ulonglong *)CONCAT44(local_188._4_4_,(undefined4)local_188);
      uStack_180 = (ulonglong *)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180);
      if (0 < iVar5) {
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_100,L"BACKPACK ({0})",L"GFxGearUpExtractionMenu",
                           L"BackpackHeaderFormatText");
        puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_b8,uVar6);
        local_78 = (longlong)(int)local_1c0;
        local_1b8 = local_80;
        puStack_1b0 = local_50;
        local_1a8 = *puVar7;
        local_1a0 = puVar7[1];
        local_80[0] = 0;
        local_58 = '\0';
        if (local_1a0 != 0) {
          LOCK();
          *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
          UNLOCK();
        }
        local_188 = (ulonglong *)local_1b8;
        uStack_180 = puStack_1b0;
        uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_178,&local_188);
        uVar6 = FText::Format(local_118,&local_1a8,uVar6);
        FText::FText(local_148,uVar6);
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_110 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar1 = (int *)((longlong)local_110 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_110 + 8))(local_110,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_178);
        if ((local_58 != '\0') && (local_58 = '\0', local_68 != (longlong *)0x0)) {
          LOCK();
          plVar3 = local_68 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
        }
        plVar3 = (longlong *)puVar7[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_f8 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar1 = (int *)((longlong)local_f8 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_f8 + 8))(local_f8,1);
            }
          }
        }
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x7f0,local_148,1,0);
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_140 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar1 = (int *)((longlong)local_140 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_140 + 8))(local_140,1);
            }
          }
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x810) != 0) && (*(longlong *)(param_1 + 0x818) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x818) + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x808,&DAT_146871c00,1,0);
      }
    }
    local_168 = (ulonglong *)CONCAT44(local_168._4_4_,(undefined4)local_168);
    uStack_160 = (ulonglong *)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    if ((*(longlong *)(param_1 + 0x828) != 0) &&
       (local_168 = (ulonglong *)CONCAT44(local_168._4_4_,(undefined4)local_168),
       uStack_160 = (ulonglong *)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160),
       *(longlong *)(param_1 + 0x830) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x830) + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      local_168 = (ulonglong *)CONCAT44(local_168._4_4_,(undefined4)local_168);
      uStack_160 = (ulonglong *)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
      if (0 < iVar5) {
        iVar5 = *(int *)(param_1 + 0x784);
        if ((iVar5 < 0) || (*(int *)(param_1 + 0x6f8) <= iVar5)) {
          uVar6 = FUN_1404b03b0();
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x820,uVar6,1,0);
        }
        else {
          lVar8 = FText::FText(local_98,(longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x6f0));
          uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_d0,L"SORT BY: {0}",L"GFxGearUpExtractionMenu",L"SortByFormatText"
                            );
          puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_a8,uVar6);
          local_50[0]._0_4_ = 4;
          FText::FText(local_40,lVar8);
          local_198 = *puVar7;
          local_1b8 = (undefined4 *)local_50;
          puStack_1b0 = &local_20;
          local_190 = puVar7[1];
          local_28 = '\x01';
          if (local_190 != 0) {
            LOCK();
            *(int *)(local_190 + 8) = *(int *)(local_190 + 8) + 1;
            UNLOCK();
          }
          local_168 = (ulonglong *)local_1b8;
          uStack_160 = puStack_1b0;
          uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_168);
          uVar6 = FText::Format(local_e8,&local_198,uVar6);
          FText::FText(local_130,uVar6);
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_e0 + 1;
            lVar4 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar1 = (int *)((longlong)local_e0 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_e0 + 8))(local_e0,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_158);
          if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
            LOCK();
            plVar3 = local_38 + 1;
            lVar4 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_38)(local_38);
              LOCK();
              piVar1 = (int *)((longlong)local_38 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_38 + 8))(local_38,1);
              }
            }
          }
          plVar3 = (longlong *)puVar7[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar3 + 1;
            lVar4 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar3 = *(longlong **)(lVar8 + 8);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar3 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          if (local_c8 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_c8 + 1;
            lVar8 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_c8)(local_c8);
              LOCK();
              piVar1 = (int *)((longlong)local_c8 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_c8 + 8))(local_c8,1);
              }
            }
          }
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x820,local_130,1,0);
          if (local_128 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_128 + 1;
            lVar8 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_128)(local_128);
              LOCK();
              piVar1 = (int *)((longlong)local_128 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_128 + 8))(local_128,1);
              }
            }
          }
        }
      }
    }
    if (local_1c8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ea6770 FUN_140ea6770 body=685 status=ok
// SIG undefined FUN_140ea6770(void)

void FUN_140ea6770(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined *puVar13;
  longlong lVar14;
  int iVar15;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  if (*(char *)(param_1 + 0x749) == '\0') {
    return;
  }
  bVar4 = true;
  iVar15 = 0;
  *(undefined1 *)(param_1 + 0x749) = 0;
  lVar14 = *(longlong *)(param_1 + 0x760);
  lVar10 = lVar14 + (longlong)*(int *)(param_1 + 0x768) * 8;
  uVar9 = 0;
  for (; lVar14 != lVar10; lVar14 = lVar14 + 8) {
    cVar6 = FWeakObjectPtr::IsValid(lVar14);
    if (cVar6 != '\0') {
      uVar9 = (ulonglong)((int)uVar9 + 1);
    }
    iVar15 = (int)uVar9;
  }
  uVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (uVar9 != 0) {
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140ea6826;
  }
  uVar9 = 0;
LAB_140ea6826:
  lVar10 = FUN_140ee5fe0(uVar9);
  if (lVar10 != 0) {
    iVar7 = ASwitchActor::GetSelectedOption(lVar10);
    iVar8 = FUN_142b47070(lVar10);
    if (*(longlong *)(param_1 + 0x7a0) != 0) {
      if (iVar8 < iVar7 + iVar15) {
        bVar4 = iVar7 + iVar15 <= *(int *)(param_1 + 0x858) + iVar8;
        if (bVar4) {
          uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_40,L"Bank will exceed capacity. Clear space before next run.",
                              L"GFxGearUpExtractionMenu",L"AlertBodyText");
          FUN_140ec07f0(*(undefined8 *)(param_1 + 0x7a0),1,uVar11);
          plVar12 = local_38;
        }
        else {
          uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_58,L"Not enough bank space to extract items.",
                              L"GFxGearUpExtractionMenu",L"AlertBodyText");
          FUN_140ec07f0(*(undefined8 *)(param_1 + 0x7a0),1,uVar11);
          plVar12 = local_50;
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar12 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
      }
      else {
        FUN_1404b03b0();
        uVar11 = *(undefined8 *)(param_1 + 0x7a0);
        local_68 = 0;
        local_60 = 6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        FGenericPlatformString::Memcpy(local_68,L"space",0xc);
        FUN_142088cf0(uVar11,&local_68);
        if (local_68 != 0) {
          FMemory::Free();
        }
      }
      FUN_140ec0440(*(undefined8 *)(param_1 + 0x7a0),iVar7,iVar8);
    }
  }
  iVar7 = *(int *)(param_1 + 0x768);
  if (*(longlong *)(param_1 + 0x7c8) != 0) {
    puVar13 = &DAT_146871be8;
    if (0 < iVar7) {
      puVar13 = &DAT_146871bd0;
    }
    FUN_142ed3af0(*(longlong *)(param_1 + 0x7c8),puVar13,0);
    if (((iVar7 < 1) || (iVar15 < 1)) || (!bVar4)) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    plVar12 = (longlong *)(*(longlong *)(param_1 + 0x7c8) + 0x170);
    (**(code **)(*plVar12 + 0x38))(plVar12,uVar11);
  }
  return;
}



// FUNCTION 140ea6a20 FUN_140ea6a20 body=53 status=ok
// SIG undefined FUN_140ea6a20(void)

void FUN_140ea6a20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)puVar1 = 1;
  return;
}



// FUNCTION 140ea6a60 FUN_140ea6a60 body=31 status=ok
// SIG undefined FUN_140ea6a60(void)

void FUN_140ea6a60(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1e0,local_res8);
  return;
}



// FUNCTION 140ea6a80 BroadcastOnSeePawn body=31 status=ok
// SIG undefined BroadcastOnSeePawn(void)

void UPawnSensingComponent::BroadcastOnSeePawn(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1f0,local_res8);
  return;
}



// FUNCTION 140ea6aa0 FUN_140ea6aa0 body=31 status=ok
// SIG undefined FUN_140ea6aa0(void)

void FUN_140ea6aa0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x200,local_res8);
  return;
}



// FUNCTION 140ea6ac0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445ee7d8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1445ee820;
  }
  return;
}



// FUNCTION 140ea6b10 CreateCopy body=93 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<0,UVisualComponent,TTypeWrapper<void>___cdecl(void),FName,FName>
     ::CreateCopy(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1445ee748;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = uVar1;
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_FUN_1445ee790;
  }
  return;
}



// FUNCTION 140ea6b70 FUN_140ea6b70 body=608 status=ok
// SIG undefined FUN_140ea6b70(void)

void FUN_140ea6b70(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 local_res8;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  lVar4 = *(longlong *)(param_1 + 0xb0);
  plVar9 = (longlong *)0x0;
  if (lVar4 != 0) {
    plVar9 = *(longlong **)(lVar4 + 0x118);
  }
  if (((plVar9 != (longlong *)0x0) && (lVar4 != 0)) && (*(longlong *)(param_1 + 0x118) != 0)) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar5 = (longlong *)plVar9[0x98];
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar9 + 0x3b8))(plVar9);
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 0x118) + 0xa8) != 0) && (plVar5 != (longlong *)0x0))
    {
      local_30 = 0xbf800000;
      local_38 = 0;
      FVector::Rotation(&local_38,&local_28);
      uVar6 = (**(code **)(*plVar9 + 0x148))(plVar9);
      FUN_1417846f0(uVar6,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_res8 = 0;
      uVar7 = FUN_142923000();
      lVar4 = FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
      *(longlong *)(param_1 + 0x140) = lVar4;
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0xba) = *(byte *)(lVar4 + 0xba) | 1;
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0x140) + 0xba);
        *pbVar1 = *pbVar1 | 2;
        lVar4 = *(longlong *)(param_1 + 0x118);
        lVar2 = *(longlong *)(param_1 + 0x140);
        *(undefined8 *)(lVar2 + 0x70c) = *(undefined8 *)(lVar4 + 0xb0);
        *(undefined4 *)(lVar2 + 0x714) = *(undefined4 *)(lVar4 + 0xb8);
        FUN_1423516b0(*(undefined8 *)(param_1 + 0x140),
                      *(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0xa8));
        lVar4 = *(longlong *)(param_1 + 0x140);
        *(undefined8 *)(lVar4 + 0x1f8) = local_28;
        *(undefined4 *)(lVar4 + 0x200) = local_20;
        lVar4 = *plVar5;
        puVar8 = (undefined8 *)FName::FName(&local_res8,L"Root",1);
        puVar8 = (undefined8 *)(**(code **)(lVar4 + 0x428))(plVar5,&local_38,*puVar8);
        lVar4 = *(longlong *)(param_1 + 0x140);
        *(undefined8 *)(lVar4 + 0x1ec) = *puVar8;
        *(undefined4 *)(lVar4 + 500) = *(undefined4 *)(puVar8 + 1);
        uVar6 = (**(code **)(*plVar9 + 0x148))(plVar9);
        FUN_14234b270(*(undefined8 *)(param_1 + 0x140),uVar6);
        FUN_142376e80(*(undefined8 *)(param_1 + 0x140),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x118) + 0xbc),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x118) + 0xc0),0);
      }
    }
  }
  return;
}



// FUNCTION 140ea6dd0 FUN_140ea6dd0 body=717 status=ok
// SIG undefined FUN_140ea6dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140ea6dd0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 local_res10;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined8 local_b8;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0xb0) != 0)) &&
     (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x118), lVar11 != 0)) {
    local_110 = DAT_1468b5da8;
    local_118 = DAT_1468b5da0;
    local_100 = DAT_1468b5d98;
    local_108 = _DAT_1468b5d90;
    local_res10 = 0;
    lVar11 = FUN_1424600f0(param_2,*(undefined8 *)(lVar11 + 0x168),0,&local_108,&local_118,2,0,2,1,0
                          );
    uVar10 = DAT_1468b5d98;
    uVar9 = _DAT_1468b5d90;
    uVar8 = uRam00000001468b5b98;
    uVar7 = _DAT_1468b5b90;
    uVar6 = uRam00000001468b5b88;
    uVar5 = _DAT_1468b5b80;
    uVar4 = uRam00000001468b5b78;
    uVar3 = _DAT_1468b5b70;
    if (lVar11 != 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118);
      local_e4 = 0;
      local_dc = 0;
      uStack_d8 = 0;
      local_d4 = 0;
      uStack_d0 = 0;
      local_cc = 0;
      local_b8 = 0;
      FName::FName(&local_res10,L"FX_Status",1);
      iVar1 = *(int *)(lVar11 + 0x728);
      *(int *)(lVar11 + 0x728) = iVar1 + 1;
      if (*(int *)(lVar11 + 0x72c) < iVar1 + 1) {
        TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                  (lVar11 + 0x720,iVar1);
      }
      puVar12 = (undefined8 *)((longlong)iVar1 * 0x90 + *(longlong *)(lVar11 + 0x720));
      *puVar12 = local_res10;
      *(undefined1 *)(puVar12 + 1) = 6;
      *(undefined8 *)((longlong)puVar12 + 0x14) = local_e4;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = local_dc;
      puVar12[4] = CONCAT44(local_d4,uStack_d8);
      *(undefined4 *)(puVar12 + 5) = uStack_d0;
      *(undefined4 *)((longlong)puVar12 + 0x2c) = local_cc;
      puVar12[8] = local_b8;
      *(undefined8 *)((longlong)puVar12 + 0xc) = 0;
      puVar12[6] = uVar2;
      puVar12[7] = 0;
      puVar12[10] = uVar3;
      puVar12[0xb] = uVar4;
      puVar12[0xc] = uVar5;
      puVar12[0xd] = uVar6;
      puVar12[0xe] = uVar7;
      puVar12[0xf] = uVar8;
      puVar12[0x10] = uVar9;
      *(undefined4 *)(puVar12 + 0x11) = uVar10;
      *(undefined1 *)((longlong)puVar12 + 0x8c) = 0;
      FUN_142397540(lVar11,*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x118) + 0x80) &
                           1,1);
      iVar1 = *(int *)(param_1 + 0xd0);
      *(int *)(param_1 + 0xd0) = iVar1 + 1;
      if (*(int *)(param_1 + 0xd4) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 200,iVar1);
      }
      FUN_140e9a430(*(longlong *)(param_1 + 200) + (longlong)iVar1 * 0x18,lVar11);
      FUN_140e7ae90(*(undefined8 *)(param_1 + 0xb0));
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ea70a0 FUN_140ea70a0 body=8 status=ok
// SIG undefined FUN_140ea70a0(void)

void FUN_140ea70a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140eaa0c0(param_1,param_2,0);
  return;
}



// FUNCTION 140ea70b0 FUN_140ea70b0 body=125 status=ok
// SIG undefined FUN_140ea70b0(void)

void FUN_140ea70b0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *param_4;
  local_30 = *(undefined4 *)(param_4 + 1);
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  FUN_140eaadb0(param_6,&local_18,&local_28,&local_38,param_5,param_6,param_7);
  return;
}



// FUNCTION 140ea7130 FUN_140ea7130 body=156 status=ok
// SIG undefined FUN_140ea7130(void)

void FUN_140ea7130(longlong param_1,undefined8 *param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  if (((param_4 == '\0') || (iVar1 = FUN_14233f450(), iVar1 == 3)) &&
     (*(char *)(param_1 + 0x3ae) != '\0')) {
    if (param_4 != '\0') {
      local_28 = local_38;
      local_20 = local_30;
      FUN_14147cdc0(param_1,&local_28);
      return;
    }
    FUN_140ec0f50(param_1 + 0x4e0,&local_38,param_3);
  }
  return;
}



// FUNCTION 140ea71e0 FUN_140ea71e0 body=15 status=ok
// SIG undefined FUN_140ea71e0(void)

void FUN_140ea71e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 140ea71f0 FUN_140ea71f0 body=175 status=ok
// SIG undefined FUN_140ea71f0(void)

void FUN_140ea71f0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = FUN_14122f110(param_2), cVar2 != '\0')) {
      return;
    }
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_141217740(param_2);
    }
  }
  FUN_1407c49b0(param_1,param_2);
  return;
}



// FUNCTION 140ea72a0 FUN_140ea72a0 body=49 status=ok
// SIG undefined FUN_140ea72a0(void)

void FUN_140ea72a0(longlong param_1,undefined1 param_2)

{
  FUN_140eb7bb0(param_1 + 0x4e0);
  FUN_142339120(param_1,param_2);
  return;
}



// FUNCTION 140ea72e0 FUN_140ea72e0 body=451 status=ok
// SIG undefined FUN_140ea72e0(void)

void FUN_140ea72e0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  plVar5 = *(longlong **)(param_1 + 0x120);
  uVar6 = (longlong)*(int *)(param_1 + 0x128) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x128) < plVar5) {
    uVar6 = uVar8;
  }
  uVar7 = uVar8;
  if (uVar6 != 0) {
    do {
      plVar1 = (longlong *)*plVar5;
      if (plVar1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)plVar1 + 0xc);
        uVar3 = uVar8;
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar4 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 0xffff;
            uVar4 = uVar4 - 0x10000;
          }
          uVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)uVar4 * 0x18;
        }
        if ((*(uint *)(uVar3 + 8) >> 0x1d & 1) == 0) {
          (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
        }
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  plVar5 = *(longlong **)(param_1 + 0x130);
  uVar6 = (longlong)*(int *)(param_1 + 0x138) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x138) < plVar5) {
    uVar6 = uVar8;
  }
  uVar7 = uVar8;
  if (uVar6 != 0) {
    do {
      plVar1 = (longlong *)*plVar5;
      if (plVar1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)plVar1 + 0xc);
        uVar3 = uVar8;
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar4 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 0xffff;
            uVar4 = uVar4 - 0x10000;
          }
          uVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)uVar4 * 0x18;
        }
        if ((*(uint *)(uVar3 + 8) >> 0x1d & 1) == 0) {
          (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
        }
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 300)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x120,0);
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if ((*(int *)(param_1 + 0x13c) < 0) && (*(int *)(param_1 + 0x13c) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x130,0);
  }
  *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xfe;
  return;
}



// FUNCTION 140ea74b0 FUN_140ea74b0 body=978 status=ok
// SIG undefined FUN_140ea74b0(void)

void FUN_140ea74b0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
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
  
  lVar7 = *(longlong *)(param_1 + 0xb0);
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(longlong *)(lVar7 + 0x118);
  }
  if (((lVar9 == 0) || (lVar7 == 0)) || (iVar14 = 0, *(int *)(lVar7 + 0x348) < 1)) {
    return;
  }
  lVar15 = 0;
LAB_140ea7540:
  lVar7 = *(longlong *)(lVar7 + 0x340);
  if ((*(longlong *)(lVar7 + lVar15) != 0) && (*(longlong *)(lVar7 + 8 + lVar15) != 0)) {
    plVar2 = (longlong *)(lVar9 + 0x2b0);
    uStack_a4 = 1;
    uVar3 = *(uint *)(lVar9 + 0x2d8);
    puVar1 = (uint *)(lVar9 + 0x2c0);
    local_a8 = 0;
    uStack_94 = 0;
    iStack_90 = 0;
    if (uVar3 != 0) {
      puVar13 = *(uint **)(lVar9 + 0x2d0);
      if (*(uint **)(lVar9 + 0x2d0) == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar4 = *puVar13;
      iStack_90 = 0;
      local_a8 = 0;
      while (uVar4 == 0) {
        lVar11 = (longlong)local_a8;
        iStack_90 = iStack_90 + 0x20;
        iVar8 = local_a8 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
        local_a8 = iVar8;
        if (bVar5) goto LAB_140ea7610;
        uVar4 = puVar13[lVar11 + 1];
      }
      uStack_a4 = uVar4 - 1 & uVar4 ^ uVar4;
      iVar8 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_94 = (iStack_90 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_94) {
LAB_140ea7610:
        uStack_94 = uVar3;
      }
    }
    uVar4 = *(uint *)(lVar9 + 0x2d8);
    uStack_70 = 0xffffffff;
    uStack_6c = uStack_94;
    local_68 = CONCAT44(uStack_8c,iStack_90);
    uStack_58 = CONCAT44(uStack_a4,local_a8);
    uVar12 = uVar4 & 0xffffffe0;
    iStack_80 = local_a8;
    uStack_7c = uStack_a4;
    local_78 = puVar1;
    local_60 = plVar2;
    puStack_50 = puVar1;
    uStack_40 = local_68;
    uStack_48 = uStack_70;
    uStack_44 = uStack_6c;
    uStack_94 = uVar4;
    if (uVar4 != uVar3) {
      puVar13 = *(uint **)(lVar9 + 0x2d0);
      if (*(uint **)(lVar9 + 0x2d0) == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar10 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar8 = (int)uVar4 >> 5;
      while (uVar10 == 0) {
        uVar12 = uVar12 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_140ea76ea;
        uVar10 = puVar13[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar10 = uVar10 - 1 & uVar10 ^ uVar10;
      iVar8 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar10 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_94 = (uVar12 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_94) {
LAB_140ea76ea:
        uStack_94 = uVar3;
      }
    }
    do {
      if ((uStack_6c == uStack_94) && (local_78 == puVar1)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) break;
      lVar11 = *(longlong *)(*plVar2 + (longlong)(int)uStack_6c * 0x10);
      if (lVar11 != 0) {
        lVar6 = FUN_1429ff160();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && (*(longlong *)(lVar11 + 0x18) == *(longlong *)(lVar7 + 8 + lVar15)))
        goto LAB_140ea778e;
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    } while( true );
  }
  goto LAB_140ea7822;
LAB_140ea778e:
  if ((*(byte *)(lVar11 + 0xb8) & 1) != 0) {
    lVar7 = UUGStartScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar5) || (*(longlong *)(lVar11 + 0x2d8) != 0)) {
      lVar7 = FUN_1412e05a0();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        *(undefined1 *)(lVar11 + 0x318) = 1;
      }
    }
  }
LAB_140ea7822:
  iVar14 = iVar14 + 1;
  lVar15 = lVar15 + 0x10;
  lVar7 = *(longlong *)(param_1 + 0xb0);
  if (*(int *)(lVar7 + 0x348) <= iVar14) {
    return;
  }
  goto LAB_140ea7540;
}



// FUNCTION 140ea7890 FUN_140ea7890 body=22 status=ok
// SIG undefined FUN_140ea7890(void)

void FUN_140ea7890(longlong param_1)

{
  if (*(char *)(param_1 + 0x3ae) == '\0') {
    FUN_140ea74b0(param_1 + 0x4e0);
    return;
  }
  return;
}



// FUNCTION 140ea78b0 FUN_140ea78b0 body=150 status=ok
// SIG undefined FUN_140ea78b0(void)

void FUN_140ea78b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  lVar1 = *param_2;
  iVar2 = 0;
  if (0 < *(int *)(lVar1 + 0x10)) {
    lVar3 = 0;
    do {
      FUN_1407bc590(local_18,param_2,*(undefined8 *)(*(longlong *)(*param_2 + 8) + 8 + lVar3));
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2f0))
                (*(longlong **)(param_1 + 0x30),local_18);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x28;
    } while (iVar2 < *(int *)(lVar1 + 0x10));
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar1 + 8);
  FMemory::operator_delete(lVar1,0x18);
  return;
}



// FUNCTION 140ea7950 FUN_140ea7950 body=424 status=ok
// SIG undefined FUN_140ea7950(void)

void FUN_140ea7950(longlong param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  
  lVar4 = *(longlong *)(param_1 + 0x118);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x128) == '\x03')) {
    uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x30))(plVar3);
      pwVar7 = (wchar_t *)0x0;
      if (lVar4 != 0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakStatusEffectManagerComponent::OnOwnerDied",L"::");
        pwVar6 = pwVar7;
        while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar6 = pwVar1;
        }
        FName::FName(&local_res8,pwVar6 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4,param_1,local_res8);
      }
      lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      if (lVar4 != 0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakStatusEffectManagerComponent::OnOwnerHealthy",L"::");
        pwVar6 = pwVar7;
        while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar6 = pwVar1;
        }
        FName::FName(&local_res8,pwVar6 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4,param_1,local_res8);
      }
      lVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
      if (lVar4 != 0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakStatusEffectManagerComponent::OnOwnerInjured",L"::");
        while (pwVar5 = pwVar6, pwVar5 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
          pwVar7 = pwVar5;
        }
        FName::FName(&local_res8,pwVar7 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4,param_1,local_res8);
      }
    }
  }
  return;
}



// FUNCTION 140ea7b00 FUN_140ea7b00 body=132 status=ok
// SIG undefined FUN_140ea7b00(void)

void FUN_140ea7b00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_1407c5000();
  uVar1 = FUN_1407c93d0(param_2);
  FUN_140ebfad0(param_1,uVar1,param_2 + 8);
  plVar2 = (longlong *)FUN_1407c93d0(param_2);
  if ((plVar2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x218) != 0)) {
    uVar1 = FUN_14302d370();
    lVar3 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar1);
    if (lVar3 != 0) {
      FUN_143002cf0(lVar3,*(undefined8 *)(param_1 + 0x218));
    }
  }
  return;
}



// FUNCTION 140ea7b90 FUN_140ea7b90 body=64 status=ok
// SIG undefined FUN_140ea7b90(void)

void FUN_140ea7b90(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1407c5000();
  uVar1 = FUN_1407c93d0(param_2);
  FUN_140ebfad0(param_1,uVar1,param_2 + 8);
  return;
}



// FUNCTION 140ea7bd0 FUN_140ea7bd0 body=219 status=ok
// SIG undefined FUN_140ea7bd0(void)

void FUN_140ea7bd0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_1407c51d0();
  if (*(longlong *)(param_2 + 0x28) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x120);
    if (*(longlong *)(param_2 + 0x120) == 0) {
      lVar5 = param_2 + 0x60;
    }
    cVar2 = FUN_14044af00(lVar5,0);
    if ((cVar2 != '\0') && (lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 400), lVar5 != 0))
    {
      lVar3 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (*(longlong *)(lVar5 + 0x198) != 0)) &&
         (*(char *)(*(longlong *)(lVar5 + 0x198) + 0x33) != '\0')) {
        lVar5 = *(longlong *)(param_2 + 0x120);
        if (*(longlong *)(param_2 + 0x120) == 0) {
          lVar5 = param_2 + 0x60;
        }
        plVar4 = (longlong *)FWeakObjectPtr::Get(lVar5);
        (**(code **)(*plVar4 + 0x310))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 140ea7cb0 FUN_140ea7cb0 body=1715 status=ok
// SIG undefined FUN_140ea7cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ea7cb0(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *_Src;
  bool bVar4;
  longlong *plVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_418 [32];
  longlong **local_3f8;
  undefined8 local_3f0;
  longlong *local_3e8;
  ulonglong local_3e0;
  undefined2 *local_3d8;
  int local_3d0;
  undefined4 local_3cc;
  int local_3c8;
  uint local_3c4;
  undefined1 local_3c0 [4];
  float local_3bc;
  undefined1 local_3b8 [8];
  longlong *local_3b0;
  undefined8 local_3a0;
  float local_398;
  float local_394;
  undefined4 local_390;
  undefined4 local_38c;
  longlong local_388;
  undefined8 local_380;
  longlong *local_378;
  longlong *local_370;
  longlong local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  longlong *local_330;
  undefined8 local_328;
  int local_320;
  undefined1 local_31c;
  undefined4 local_318;
  undefined1 local_314;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [8];
  undefined1 local_2e8 [8];
  longlong *local_2e0;
  undefined1 local_2d0 [8];
  longlong *local_2c8;
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined1 local_2a0 [56];
  longlong *local_268;
  int local_258;
  undefined **local_250;
  float local_248;
  float local_244;
  undefined4 local_23c;
  undefined1 local_1c6;
  undefined8 local_1c4;
  undefined8 uStack_1bc;
  undefined1 local_120 [24];
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  int local_b8;
  undefined1 local_b4;
  undefined1 local_b0;
  ulonglong local_a8;
  
  if (param_3 == 0) {
    return;
  }
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_418;
  if (param_2 == 0) {
    return;
  }
  if (*param_1 == '\0') {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  puVar6 = (uint *)(**(code **)(**(longlong **)(param_2 + 0x58) + 0x20))
                             (*(longlong **)(param_2 + 0x58),local_2f8);
  local_3c4 = *puVar6;
  lVar7 = (**(code **)(**(longlong **)(param_2 + 0x58) + 0x20))
                    (*(longlong **)(param_2 + 0x58),local_2f0);
  fVar18 = DAT_14629d24c;
  uVar12 = *(uint *)(lVar7 + 4);
  local_3c8 = DAT_14629d248;
  uVar8 = FUN_1404b03b0();
  FText::FText(local_3b8,uVar8);
  if (*param_1 == '\x01') {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_2d0,L"Loading. Please Wait.",L"CutsceneSkip",L"StillLoading");
    FText::operator=(local_3b8,uVar8);
    plVar13 = local_2c8;
LAB_140ea7dfa:
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar13 + 1;
      lVar7 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
  }
  else if (*param_1 == '\x02') {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_2e8,L"Press any button to skip.",L"CutsceneSkip",L"PressToSkip");
    FText::operator=(local_3b8,uVar8);
    plVar13 = local_2e0;
    goto LAB_140ea7dfa;
  }
  puVar9 = (undefined8 *)FText::ToString(local_3b8);
  local_3d8 = (undefined2 *)0x0;
  local_3d0 = *(int *)(puVar9 + 1);
  lVar7 = (longlong)local_3d0;
  _Src = (void *)*puVar9;
  if (local_3d0 == 0) {
    local_3cc = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_3d8,local_3d0,0);
    _guard_xfg_dispatch_icall_nop(local_3d8,_Src,lVar7 * 2);
  }
  FUN_1417efd90(&local_368);
  local_318 = 0;
  local_314 = 0;
  local_310 = 0;
  fVar17 = (float)uVar12;
  fVar19 = fVar17 * 0.0013888889 * (float)local_3c8;
  local_308 = _DAT_1464aa6e0;
  uStack_300 = _DAT_1464aa6e8;
  local_320 = (int)ROUND((fVar19 + fVar19) - 0.5) >> 1;
  local_3f8 = (longlong **)&local_318;
  local_368 = param_3;
  FSlateFontInfo::FSlateFontInfo(local_2a0,param_3,*(undefined4 *)(param_3 + 0x13c),param_3 + 0x140)
  ;
  if (local_268 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_268 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_268)(local_268);
      LOCK();
      piVar1 = (int *)((longlong)local_268 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_268 + 8))(local_268,1);
      }
    }
  }
  FUN_1418388a0(*(undefined8 *)(param_4 + 8),&local_378);
  local_3f8 = (longlong **)CONCAT44(local_3f8._4_4_,0x3f800000);
  (**(code **)(*local_378 + 0x18))(local_378,local_3c0,&local_3d8,&local_368);
  if (local_370 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_370 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_370)(local_370);
      LOCK();
      piVar1 = (int *)((longlong)local_370 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_370 + 8))(local_370,1);
      }
    }
  }
  FCanvasTextItemBase::FCanvasTextItemBase(&local_250,&DAT_1468b5d88,&DAT_1464aa6c0);
  local_250 = &PTR_FUN_1444d5500;
  FText::FText(local_120,local_3b8);
  local_108 = local_368;
  if (local_368 != 0) {
    lVar10 = UFont::GetPrivateStaticClass();
    lVar7 = *(longlong *)(local_108 + 0x10);
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140ea8046;
  }
  local_108 = 0;
LAB_140ea8046:
  local_100 = local_368;
  local_f8 = local_360;
  local_d0 = local_338;
  local_c8 = local_330;
  local_f0 = local_358;
  uStack_e8 = uStack_350;
  local_e0 = local_348;
  uStack_d8 = uStack_340;
  if (local_330 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_330 + 1) = (int)local_330[1] + 1;
    UNLOCK();
  }
  local_c0 = local_328;
  puVar16 = &DAT_143f3eda8;
  if (local_3d0 != 0) {
    puVar16 = local_3d8;
  }
  local_394 = 1.0 / (fVar19 / (float)local_258);
  local_b8 = local_320;
  local_b4 = local_31c;
  uVar11 = (ulonglong)local_3c4;
  local_3f0 = 0;
  local_b0 = 1;
  local_23c = 0xb;
  local_1c6 = 1;
  local_3a0 = 0;
  local_390 = 0x3f800000;
  local_38c = 0x3f800000;
  local_380 = 0;
  local_3e8 = (longlong *)0x0;
  local_3e0 = 0;
  local_3f8 = &local_3e8;
  local_1c4 = _DAT_1464aa6e0;
  uStack_1bc = _DAT_1464aa6e8;
  local_398 = local_394 * (float)uVar11;
  local_394 = (1.0 - (fVar18 + fVar18)) * fVar17 * local_394;
  local_388 = param_3;
  FUN_1428bfb00(param_2,&local_3a0,0,puVar16);
  uVar14 = (ulonglong)(int)local_3e0;
  plVar13 = local_3e8 + uVar14 * 3;
  plVar15 = local_3e8;
  fVar18 = fVar17 * fVar18 - (float)(int)local_3e0 * local_3bc;
  if (local_3e8 != plVar13) {
    do {
      uVar8 = FText::FromString(local_2b8,plVar15);
      FText::operator=(local_120,uVar8);
      plVar5 = local_2b0;
      if (local_2b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_2b0 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_2b0)(local_2b0);
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
      fVar17 = fVar18 + local_3bc;
      local_248 = ((float)uVar11 - (fVar19 / (float)local_258) * *(float *)(plVar15 + 2)) * 0.5;
      local_244 = fVar18;
      FCanvas::DrawItem(param_2,&local_250);
      plVar15 = plVar15 + 3;
      fVar18 = fVar17;
    } while (plVar15 != plVar13);
    uVar14 = local_3e0 & 0xffffffff;
  }
  uVar12 = (uint)uVar14;
  plVar13 = local_3e8;
  while (uVar12 != 0) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 3;
    uVar12 = (int)uVar14 - 1;
    uVar14 = (ulonglong)uVar12;
  }
  if (local_3e8 != (longlong *)0x0) {
    FMemory::Free(local_3e8);
  }
  FUN_140c64b70(&local_250);
  if (local_330 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_330 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_330)(local_330);
      LOCK();
      piVar1 = (int *)((longlong)local_330 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_330 + 8))(local_330,1);
      }
    }
  }
  if (local_3d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_3b0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_3b0 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_3b0)(local_3b0);
      LOCK();
      piVar1 = (int *)((longlong)local_3b0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3b0 + 8))(local_3b0,1);
      }
    }
  }
  return;
}



// FUNCTION 140ea8370 FUN_140ea8370 body=530 status=ok
// SIG undefined FUN_140ea8370(void)

void FUN_140ea8370(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar7 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar7 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar4 = *puVar9;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar8 = local_78 + 1;
      bVar3 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar8;
      if (bVar3) goto LAB_140ea8441;
      uVar4 = puVar9[lVar5 + 1];
    }
    uStack_74 = -uVar4 & uVar4;
    iVar8 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_64 = (iStack_60 - iVar8) + 0x1f;
    if (iVar7 < iStack_64) {
LAB_140ea8441:
      iStack_64 = iVar7;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar7) {
    do {
      iVar7 = *(int *)(*param_1 + 0x18 + (longlong)iStack_3c * 0x28);
      plVar2 = (longlong *)(*param_1 + (longlong)iStack_3c * 0x28);
      plVar6 = (longlong *)plVar2[2];
      if (iVar7 != 0) {
        do {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        plVar6 = (longlong *)plVar2[2];
      }
      if (plVar6 != (longlong *)0x0) {
        FMemory::Free(plVar6);
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 140ea8590 FUN_140ea8590 body=151 status=ok
// SIG undefined FUN_140ea8590(void)

void FUN_140ea8590(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong local_res8 [2];
  ulonglong local_res18 [2];
  
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03')) {
    local_res18[0] = *(ulonglong *)(param_1 + 0x1c8);
    if (param_2 != '\0') {
      local_res8[0] = local_res18[0];
      lVar2 = AActor::GetWorldTimerManager();
      uVar1 = FTimerManager::FindTimerInList(lVar2,lVar2 + 0x20,local_res8);
      FUN_142880ca0(lVar2,uVar1);
      return;
    }
    uVar3 = AActor::GetWorldTimerManager();
    uVar4 = FTimerManager::FindTimer(uVar3,local_res18,local_res8);
    FUN_142880730(uVar3,uVar4,local_res8[0] & 0xffffffff);
  }
  return;
}



// FUNCTION 140ea8630 FUN_140ea8630 body=143 status=ok
// SIG undefined FUN_140ea8630(void)

void FUN_140ea8630(longlong *param_1,byte param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = URemnantQuestSubQuest::GetPrivateStaticClass();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_142ceeb40(param_1[0xa6],0);
    if (param_2 != 0) {
      FUN_140a54920(param_1[0xa6],uVar1);
    }
    *(byte *)(lVar2 + 0x25d) = param_2 ^ 1;
    (**(code **)(param_1[0x99] + 0x108))(param_1 + 0x99,DAT_146871288,0xffffffff,1);
  }
  return;
}



// FUNCTION 140ea86c0 FUN_140ea86c0 body=291 status=ok
// SIG undefined FUN_140ea86c0(void)

void FUN_140ea86c0(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *local_28;
  undefined8 local_20;
  
  if (((param_2 != *(char *)(param_1 + 0x1d8)) &&
      (*(char *)(param_1 + 0x1d8) = param_2, param_2 != '\0')) &&
     (*(longlong *)(param_1 + 0x118) != 0)) {
    plVar6 = *(longlong **)(param_1 + 0x1f8);
    plVar1 = plVar6 + *(int *)(param_1 + 0x200);
    if (plVar6 != plVar1) {
      do {
        if (*plVar6 != 0) {
          local_28 = (longlong *)0x0;
          local_20 = 0;
          FUN_14238c7d0(*plVar6,&local_28);
          uVar4 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
          if (local_28 + (int)local_20 < local_28) {
            uVar4 = 0;
          }
          plVar3 = local_28;
          uVar5 = 0;
          if (uVar4 != 0) {
            do {
              lVar2 = *plVar3;
              if (lVar2 != 0) {
                FUN_140eb0bc0(param_1,*(undefined8 *)(lVar2 + 0x118),0,lVar2);
              }
              plVar3 = plVar3 + 1;
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar4);
          }
          if (local_28 != (longlong *)0x0) {
            FMemory::Free(local_28);
          }
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
  }
  return;
}



// FUNCTION 140ea8800 FUN_140ea8800 body=84 status=ok
// SIG undefined FUN_140ea8800(void)

void FUN_140ea8800(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x460) + 0x180,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x460) + 400,param_1);
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 140ea8860 FUN_140ea8860 body=106 status=ok
// SIG undefined FUN_140ea8860(void)

void FUN_140ea8860(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x490) + 0x180,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x490) + 400,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x490) + 0x1a0,param_1);
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 140ea88d0 FUN_140ea88d0 body=62 status=ok
// SIG undefined FUN_140ea88d0(void)

void FUN_140ea88d0(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x460) + 0x318,param_1);
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 140ea8910 FUN_140ea8910 body=33 status=ok
// SIG undefined FUN_140ea8910(void)

void FUN_140ea8910(longlong param_1)

{
  FUN_142693630();
                    /* WARNING: Could not recover jumptable at 0x000140ea892d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x510) + 0x10))();
  return;
}



// FUNCTION 140ea8940 FUN_140ea8940 body=92 status=ok
// SIG undefined FUN_140ea8940(void)

void FUN_140ea8940(longlong param_1,int param_2)

{
  FUN_140ea7950();
  if ((param_2 - 2U & 0xfffffffd) != 0) {
    FUN_140eb7bb0(param_1 + 0x4e0);
    FUN_140ea72e0(param_1 + 0x4e0);
  }
  FUN_140ebec70(param_1);
  FUN_142dcab70(param_1,param_2);
  return;
}



// FUNCTION 140ea89a0 FUN_140ea89a0 body=1137 status=ok
// SIG undefined FUN_140ea89a0(void)

void FUN_140ea89a0(longlong *param_1,undefined4 param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  longlong lVar17;
  int local_d8;
  uint uStack_d4;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong local_80;
  undefined8 local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar8 = param_1[0x23];
  if (lVar8 != 0) {
    local_b8 = (longlong *)(lVar8 + 0x2b0);
    uVar3 = *(uint *)(lVar8 + 0x2d8);
    puVar1 = (uint *)(lVar8 + 0x2c0);
    local_d8 = 0;
    uStack_d4 = 1;
    uStack_c4 = 0;
    iStack_c0 = 0;
    if (uVar3 != 0) {
      puVar16 = *(uint **)(lVar8 + 0x2d0);
      if (*(uint **)(lVar8 + 0x2d0) == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar4 = *puVar16;
      iStack_c0 = 0;
      local_d8 = 0;
      while (uVar4 == 0) {
        lVar11 = (longlong)local_d8;
        iStack_c0 = iStack_c0 + 0x20;
        iVar14 = local_d8 + 1;
        bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
        local_d8 = iVar14;
        if (bVar6) goto LAB_140ea8a8b;
        uVar4 = puVar16[lVar11 + 1];
      }
      uStack_d4 = uVar4 - 1 & uVar4 ^ uVar4;
      iVar14 = 0x1f;
      if (uStack_d4 != 0) {
        for (; uStack_d4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (uStack_d4 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      uStack_c4 = (iStack_c0 - iVar14) + 0x1f;
      if ((int)uVar3 < (int)uStack_c4) {
LAB_140ea8a8b:
        uStack_c4 = uVar3;
      }
    }
    uVar4 = *(uint *)(lVar8 + 0x2d8);
    uStack_a0 = CONCAT44(uStack_d4,local_d8);
    uStack_90 = CONCAT44(uStack_c4,0xffffffff);
    uStack_88 = CONCAT44(uStack_bc,iStack_c0);
    uVar12 = -1 << ((byte)uVar4 & 0x1f);
    uVar15 = uVar4 & 0xffffffe0;
    uStack_98 = CONCAT44(uVar4,uVar12);
    iStack_70 = local_d8;
    uStack_6c = uStack_d4;
    if (uVar4 != uVar3) {
      puVar16 = *(uint **)(lVar8 + 0x2d0);
      if (*(uint **)(lVar8 + 0x2d0) == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar12 = puVar16[(int)uVar4 >> 5] & uVar12;
      iVar14 = (int)uVar4 >> 5;
      while (uVar12 == 0) {
        uVar15 = uVar15 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
        goto LAB_140ea8b52;
        uVar12 = puVar16[(longlong)iVar14 + 1];
        uStack_98 = 0xffffffff;
        iVar14 = iVar14 + 1;
      }
      uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
      iVar14 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      iVar14 = (uVar15 - iVar14) + 0x1f;
      uStack_98 = CONCAT44(iVar14,(undefined4)uStack_98);
      if ((int)uVar3 < iVar14) {
LAB_140ea8b52:
        uStack_98 = CONCAT44(uVar3,(undefined4)uStack_98);
      }
    }
    local_80 = uStack_98 >> 0x20;
    local_a8 = local_b8;
    local_68 = puVar1;
    uStack_60 = uStack_90;
    local_58 = uStack_88;
    local_78 = local_b8;
    while( true ) {
      if ((uStack_60._4_4_ == (int)local_80) && (local_68 == puVar1)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if ((bVar6) && (local_78 == local_b8)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) break;
      lVar8 = *(longlong *)(*local_78 + (longlong)uStack_60._4_4_ * 0x10);
      if (lVar8 != 0) {
        lVar11 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          plVar2 = (longlong *)(lVar8 + 0x570);
          iVar14 = *(int *)(lVar8 + 0x578) + -1;
          if (-1 < iVar14) {
            lVar17 = (longlong)iVar14 << 4;
            lVar11 = lVar17;
            do {
              lVar13 = *plVar2 + lVar17;
              plVar7 = (longlong *)FWeakObjectPtr::Get(lVar13);
              if (param_1 == plVar7) {
LAB_140ea8c51:
                iVar5 = *(int *)(lVar8 + 0x578);
                iVar10 = (iVar5 - iVar14) + -1;
                if (0 < iVar10) {
                  iVar10 = 1;
                }
                if (iVar10 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar11 + *plVar2),
                             (void *)((longlong)(iVar5 - iVar10) * 0x10 + *plVar2),
                             (longlong)iVar10 << 4);
                  iVar5 = *(int *)(lVar8 + 0x578);
                }
                *(int *)(lVar8 + 0x578) = iVar5 + -1;
                TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar2);
              }
              else {
                if (*(longlong *)(lVar13 + 8) == 0) {
LAB_140ea8c49:
                  bVar6 = true;
                }
                else {
                  lVar13 = FWeakObjectPtr::Get(lVar13,1);
                  if (lVar13 == 0) goto LAB_140ea8c49;
                  bVar6 = false;
                }
                if (bVar6) goto LAB_140ea8c51;
              }
              lVar11 = lVar11 + -0x10;
              lVar17 = lVar17 + -0x10;
              iVar14 = iVar14 + -1;
            } while (-1 < iVar14);
          }
          plVar2 = (longlong *)(lVar8 + 0x580);
          iVar14 = *(int *)(lVar8 + 0x588) + -1;
          if (-1 < iVar14) {
            lVar17 = (longlong)iVar14 << 4;
            lVar11 = lVar17;
            do {
              lVar13 = *plVar2 + lVar17;
              plVar7 = (longlong *)FWeakObjectPtr::Get(lVar13);
              if (param_1 == plVar7) {
LAB_140ea8d0d:
                iVar5 = *(int *)(lVar8 + 0x588);
                iVar10 = (iVar5 - iVar14) + -1;
                if (0 < iVar10) {
                  iVar10 = 1;
                }
                if (iVar10 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*plVar2 + lVar11),
                             (void *)((longlong)(iVar5 - iVar10) * 0x10 + *plVar2),
                             (longlong)iVar10 << 4);
                  iVar5 = *(int *)(lVar8 + 0x588);
                }
                *(int *)(lVar8 + 0x588) = iVar5 + -1;
                TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar2);
              }
              else {
                if (*(longlong *)(lVar13 + 8) == 0) {
LAB_140ea8d07:
                  bVar6 = true;
                }
                else {
                  lVar13 = FWeakObjectPtr::Get(lVar13,1);
                  if (lVar13 == 0) goto LAB_140ea8d07;
                  bVar6 = false;
                }
                if (bVar6) goto LAB_140ea8d0d;
              }
              lVar11 = lVar11 + -0x10;
              lVar17 = lVar17 + -0x10;
              iVar14 = iVar14 + -1;
            } while (-1 < iVar14);
          }
        }
      }
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
  }
  lVar8 = param_1[0x24];
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(param_1);
  }
  lVar8 = FUN_142f6c9f0(lVar8);
  if (lVar8 != 0) {
    local_b0 = 0;
    local_b8 = param_1;
    uVar9 = FUN_142f768a0();
    local_b0 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar9);
    FUN_142f6e000(lVar8,&local_b8);
  }
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 140ea8e20 FUN_140ea8e20 body=399 status=ok
// SIG undefined FUN_140ea8e20(void)

void FUN_140ea8e20(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  if ((*(longlong *)(param_2 + 8) != 0) && (*param_1 != 0)) {
    plVar2 = (longlong *)param_1[1];
    plVar3 = plVar2 + (int)param_1[2];
    if (plVar2 != plVar3) {
      while (*plVar2 != *(longlong *)(param_2 + 8)) {
        plVar2 = plVar2 + 1;
        if (plVar2 == plVar3) {
          return;
        }
      }
      puVar5 = *(undefined8 **)(param_2 + 0x20);
      puVar1 = puVar5 + *(int *)(param_2 + 0x28);
      for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        (**(code **)(*(longlong *)*param_1 + 0x958))((longlong *)*param_1,*puVar5,0);
      }
      lVar4 = (longlong)(int)param_1[2];
      if ((int)param_1[2] != 0) {
        iVar9 = 0;
        bVar10 = *(longlong *)param_1[1] != *(longlong *)(param_2 + 8);
        lVar6 = 0;
        iVar7 = 0;
        do {
          lVar6 = lVar6 + 1;
          iVar8 = iVar7 + 1;
          if (lVar6 < lVar4) {
            plVar3 = (longlong *)(param_1[1] + lVar6 * 8);
            do {
              if (bVar10 != (*plVar3 != *(longlong *)(param_2 + 8))) break;
              iVar8 = iVar8 + 1;
              lVar6 = lVar6 + 1;
              plVar3 = plVar3 + 1;
            } while (lVar6 < lVar4);
          }
          if (bVar10 != false) {
            if (iVar9 != iVar7) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(param_1[1] + (longlong)iVar9 * 8),
                         (void *)(param_1[1] + (longlong)iVar7 * 8),(longlong)(iVar8 - iVar7) << 3);
            }
            iVar9 = iVar9 + (iVar8 - iVar7);
          }
          bVar10 = (bool)(bVar10 ^ 1);
          iVar7 = iVar8;
        } while (lVar6 < lVar4);
        *(int *)(param_1 + 2) = iVar9;
      }
      if ((int)param_1[2] == 0) {
        (**(code **)(*(longlong *)*param_1 + 0x288))();
      }
    }
  }
  return;
}



// FUNCTION 140ea8fb0 FUN_140ea8fb0 body=308 status=ok
// SIG undefined FUN_140ea8fb0(void)

ulonglong FUN_140ea8fb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_2 == (longlong *)0x0) {
LAB_140ea9015:
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX == '\0') goto LAB_140ea9015;
    uVar4 = FUN_141477fa0();
    in_RAX = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    uVar3 = in_RAX;
  }
  if (*(longlong *)(param_1 + 0x88) == 0) {
    if (uVar3 == 0) goto LAB_140ea90d7;
    lVar2 = *(longlong *)(uVar3 + 0x598);
    lVar5 = (longlong)*(int *)(uVar3 + 0x5a0) * 0x40 + lVar2;
    if (lVar2 != lVar5) {
      while (*(longlong *)(lVar2 + 0x10) != *(longlong *)(param_1 + 0x90)) {
        lVar2 = lVar2 + 0x40;
        if (lVar2 == lVar5) {
          return 0;
        }
      }
LAB_140ea90bc:
      if ((lVar2 != 0) && (0.0 < *(float *)(lVar2 + 0x18))) {
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
    }
  }
  else {
    if (uVar3 == 0) {
LAB_140ea90d7:
      return in_RAX & 0xffffffffffffff00;
    }
    lVar2 = *(longlong *)(uVar3 + 0x598);
    lVar5 = (longlong)*(int *)(uVar3 + 0x5a0) * 0x40 + lVar2;
    for (; lVar2 != lVar5; lVar2 = lVar2 + 0x40) {
      if (*(longlong *)(lVar2 + 0x10) == *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x90))
      goto LAB_140ea90bc;
    }
  }
  return 0;
}



// FUNCTION 140ea90f0 FUN_140ea90f0 body=35 status=ok
// SIG undefined FUN_140ea90f0(void)

void FUN_140ea90f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    FUN_140ebe930(lVar1);
    return;
  }
  return;
}



// FUNCTION 140ea9120 FUN_140ea9120 body=62 status=ok
// SIG undefined FUN_140ea9120(void)

void FUN_140ea9120(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140ea915b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,*(undefined1 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 140ea9160 FUN_140ea9160 body=33 status=ok
// SIG undefined FUN_140ea9160(void)

undefined1 FUN_140ea9160(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    FUN_140ebe930(lVar1);
  }
  return 1;
}



// FUNCTION 140ea9190 FUN_140ea9190 body=98 status=ok
// SIG undefined FUN_140ea9190(void)

undefined8 FUN_140ea9190(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,*(undefined1 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
    return 1;
  }
  return 0;
}



// FUNCTION 140ea9200 FUN_140ea9200 body=125 status=ok
// SIG undefined FUN_140ea9200(void)

void FUN_140ea9200(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x1f8);
  plVar1 = plVar2 + *(int *)(param_1 + 0x200);
  if (plVar2 != plVar1) {
    while (*plVar2 != param_2) {
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar1) {
        return;
      }
    }
    FUN_140eb0bc0(param_1,param_3,0,param_2);
    FUN_140eb0bc0(param_1,param_3,1,param_2);
  }
  return;
}



// FUNCTION 140ea9280 FUN_140ea9280 body=821 status=ok
// SIG undefined FUN_140ea9280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140ea9280(longlong param_1,longlong *param_2,float *param_3)

{
  longlong *plVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_128 [32];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float *local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (((*(longlong *)(param_1 + 0xb0) == 0) ||
      (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x118) == 0)) ||
     (*(int *)(param_1 + 0x128) < 1)) {
    iVar7 = 0;
  }
  else {
    lVar3 = **(longlong **)(param_1 + 0x120);
    if (lVar3 != 0) {
      local_e8 = param_3;
      lVar8 = FUN_140626d60(lVar3);
      iVar7 = *(int *)(lVar3 + 0x770);
      fVar17 = 3.4028235e+38;
      iVar15 = -1;
      lVar10 = (longlong)*(int *)(lVar8 + 0x450);
      if (0 < lVar10) {
        uVar14 = 0;
        iVar11 = 2;
        uVar12 = uVar14;
        uVar13 = uVar14;
        do {
          if (param_2 == (longlong *)0x0) {
LAB_140ea9371:
            fVar16 = *(float *)(uVar12 + 0x78 +
                               *(longlong *)(lVar3 + 0x728 + (longlong)iVar7 * 0x10));
            if (fVar16 < fVar17) {
              fVar17 = fVar16;
              iVar15 = iVar11;
            }
          }
          else {
            plVar9 = (longlong *)*param_2;
            plVar1 = plVar9 + (int)param_2[1];
            if (plVar9 != plVar1) {
              do {
                if (*plVar9 == *(longlong *)(uVar13 + *(longlong *)(lVar8 + 0x448)))
                goto LAB_140ea9371;
                plVar9 = plVar9 + 1;
              } while (plVar9 != plVar1);
            }
          }
          iVar11 = iVar11 + 1;
          uVar13 = uVar13 + 0x18;
          uVar12 = uVar12 + 0x30;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        if (iVar15 != -1) {
          if (-1 < (int)(iVar15 - 1U)) {
            uVar14 = (ulonglong)(iVar15 - 1U);
          }
          FUN_140626530(lVar3,&local_108,uVar14);
          FUN_1406267b0(lVar3,&local_88,uVar14);
          local_d8 = -local_88;
          fStack_d4 = -fStack_84;
          fStack_d0 = -fStack_80;
          pfVar2 = (float *)(*(longlong *)(lVar3 + 0x728 + (longlong)iVar7 * 0x10) +
                            (longlong)iVar15 * 0x30);
          fVar16 = *pfVar2;
          fVar4 = pfVar2[1];
          fVar5 = pfVar2[2];
          fVar6 = pfVar2[3];
          fStack_cc = fStack_7c;
          local_108 = local_108 - local_78;
          local_104 = local_104 - fStack_74;
          local_b8 = fStack_7c * fVar16 * _DAT_146871720 + fVar6 * local_d8 +
                     fStack_d0 * fVar4 * _DAT_146871710 + fStack_d4 * fVar5 * _DAT_146871700;
          fStack_b4 = fStack_d0 * fVar16 * fRam0000000146871724 + fVar6 * fStack_d4 +
                      fStack_7c * fVar4 * fRam0000000146871714 +
                      local_d8 * fVar5 * fRam0000000146871704;
          fStack_b0 = fStack_d4 * fVar16 * fRam0000000146871728 + fVar6 * fStack_d0 +
                      local_d8 * fVar4 * fRam0000000146871718 +
                      fStack_7c * fVar5 * fRam0000000146871708;
          fStack_ac = local_d8 * fVar16 * fRam000000014687172c + fVar6 * fStack_7c +
                      fStack_d4 * fVar4 * fRam000000014687171c +
                      fStack_d0 * fVar5 * fRam000000014687170c;
          local_100 = local_100 - fStack_70;
          local_fc = local_fc - local_78;
          local_f8 = local_f8 - fStack_74;
          local_f4 = local_f4 - fStack_70;
          local_98 = _DAT_1468716e0 & _DAT_1468716f0;
          uStack_94 = uRam00000001468716e4 & uRam00000001468716f4;
          uStack_90 = uRam00000001468716e8 & uRam00000001468716f8;
          uStack_8c = uRam00000001468716ec & uRam00000001468716fc;
          local_a8 = 0;
          uStack_a0 = 0;
          lVar8 = FBox::TransformBy(&local_108,&local_d8,&local_b8);
          fVar16 = *(float *)(lVar8 + 8);
          if (0.0 <= fVar16) {
            fVar16 = 0.0;
          }
          fVar17 = (fVar16 + fVar17) * *(float *)(lVar3 + 0x238);
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          *local_e8 = fVar17;
          return iVar15;
        }
      }
    }
    iVar7 = -1;
  }
  return iVar7;
}



// FUNCTION 140ea95c0 FUN_140ea95c0 body=1106 status=ok
// SIG undefined FUN_140ea95c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140ea95c0(longlong param_1,int param_2,undefined8 *param_3,float *param_4)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  float *pfVar9;
  int iVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined8 *local_250;
  undefined *local_248;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined8 local_228;
  float local_220;
  undefined8 local_218;
  float local_210;
  undefined4 local_208;
  undefined4 local_204;
  float local_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1d8 [12];
  undefined4 local_1cc;
  float local_1c8;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  ushort local_134;
  undefined1 local_132;
  undefined4 local_130;
  undefined1 local_12c;
  undefined4 local_128;
  undefined2 local_124;
  longlong local_100;
  undefined8 local_f8;
  longlong local_e0;
  undefined8 local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  lVar2 = *(longlong *)(param_1 + 0xb0);
  plVar11 = (longlong *)0x0;
  if (lVar2 != 0) {
    plVar11 = *(longlong **)(lVar2 + 0x118);
  }
  if ((((plVar11 != (longlong *)0x0) && (lVar2 != 0)) && (0 < *(int *)(param_1 + 0x128))) &&
     (lVar2 = **(longlong **)(param_1 + 0x120), lVar2 != 0)) {
    FUN_140626d60(lVar2);
    iVar1 = *(int *)(lVar2 + 0x770);
    if ((-1 < param_2) && (param_2 < *(int *)(lVar2 + 0x730 + (longlong)iVar1 * 0x10))) {
      local_140 = 0;
      local_148 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_138 = 0x10000;
      local_130 = 0;
      local_218 = 0;
      local_134 = 0;
      local_124 = 0x101;
      local_12c = 0;
      local_132 = 0;
      local_128 = 0;
      FCollisionQueryParams::AddIgnoredActor(&local_148,plVar11);
      local_134 = local_134 & 0xff00;
      local_138._0_2_ = CONCAT11(1,(undefined1)local_138);
      lVar7 = FUN_1423acfd0(lVar2,&local_98,param_2);
      local_208 = *(undefined4 *)(lVar7 + 0x10);
      local_204 = *(undefined4 *)(lVar7 + 0x14);
      local_218 = *(undefined8 *)(lVar7 + 0x10);
      local_200 = *(float *)(lVar7 + 0x18);
      local_210 = local_200 - 500.0;
      _guard_xfg_dispatch_icall_nop(local_1d8,0,0x90);
      local_1cc = 0x3f800000;
      uVar8 = (**(code **)(*plVar11 + 0x148))(plVar11);
      local_248 = &DAT_146aefe68;
      local_250 = &local_148;
      local_258 = 3;
      cVar6 = UWorld::LineTraceSingleByChannel(uVar8,local_1d8,&local_208,&local_218);
      if (cVar6 != '\0') {
        *param_3 = local_1b8;
        *(undefined4 *)(param_3 + 1) = local_1b0;
        *param_4 = local_1c8;
        iVar10 = 0;
        if (-1 < param_2 + -1) {
          iVar10 = param_2 + -1;
        }
        FUN_140626530(lVar2,&local_238,iVar10);
        FUN_1406267b0(lVar2,&local_98,iVar10);
        local_1f8 = -local_98;
        fStack_1f4 = -fStack_94;
        fStack_1f0 = -fStack_90;
        pfVar9 = (float *)(*(longlong *)(lVar2 + 0x728 + (longlong)iVar1 * 0x10) +
                          (longlong)param_2 * 0x30);
        fVar12 = *pfVar9;
        fVar3 = pfVar9[1];
        fVar4 = pfVar9[2];
        fVar5 = pfVar9[3];
        fStack_1ec = fStack_8c;
        local_238 = local_238 - local_88;
        fStack_234 = fStack_234 - fStack_84;
        local_c8 = fStack_8c * fVar12 * _DAT_146871720 + fVar5 * local_1f8 +
                   fStack_1f0 * fVar3 * _DAT_146871710 + fStack_1f4 * fVar4 * _DAT_146871700;
        fStack_c4 = fStack_1f0 * fVar12 * fRam0000000146871724 + fVar5 * fStack_1f4 +
                    fStack_8c * fVar3 * fRam0000000146871714 +
                    local_1f8 * fVar4 * fRam0000000146871704;
        fStack_c0 = fStack_1f4 * fVar12 * fRam0000000146871728 + fVar5 * fStack_1f0 +
                    local_1f8 * fVar3 * fRam0000000146871718 +
                    fStack_8c * fVar4 * fRam0000000146871708;
        fStack_bc = local_1f8 * fVar12 * fRam000000014687172c + fVar5 * fStack_8c +
                    fStack_1f4 * fVar3 * fRam000000014687171c +
                    fStack_1f0 * fVar4 * fRam000000014687170c;
        fStack_230 = fStack_230 - fStack_80;
        fStack_22c = fStack_22c - local_88;
        local_a8 = _DAT_1468716e0 & _DAT_1468716f0;
        uStack_a4 = uRam00000001468716e4 & uRam00000001468716f4;
        uStack_a0 = uRam00000001468716e8 & uRam00000001468716f8;
        uStack_9c = uRam00000001468716ec & uRam00000001468716fc;
        local_228 = CONCAT44(local_228._4_4_ - fStack_80,(float)local_228 - fStack_84);
        local_b8 = 0;
        uStack_b0 = 0;
        pfVar9 = (float *)FBox::TransformBy(&local_238,&local_1f8,&local_c8);
        local_238 = *pfVar9;
        fStack_234 = pfVar9[1];
        fStack_230 = pfVar9[2];
        fStack_22c = pfVar9[3];
        local_228 = *(undefined8 *)(pfVar9 + 4);
        local_220 = pfVar9[6];
        fVar12 = fStack_230;
        if (0.0 <= fStack_230) {
          fVar12 = 0.0;
        }
        fVar12 = fVar12 * *(float *)(lVar2 + 0x238) + *param_4;
        *param_4 = fVar12;
        if (fVar12 < 0.0) {
          *param_4 = 0.0;
        }
        if (local_e0 != 0) {
          FMemory::Free();
        }
        if (local_100 != 0) {
          FMemory::Free();
        }
        return 1;
      }
      if (local_e0 != 0) {
        FMemory::Free();
      }
      if (local_100 != 0) {
        FMemory::Free();
      }
    }
  }
  return 0;
}



// FUNCTION 140ea9a20 FUN_140ea9a20 body=373 status=ok
// SIG undefined FUN_140ea9a20(void)

undefined8 FUN_140ea9a20(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float extraout_XMM0_Da;
  float fVar11;
  float fVar12;
  
  lVar8 = *(longlong *)(param_2 + 0x28);
  if (lVar8 != 0) {
    uVar6 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar6);
    if (plVar7 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
      goto LAB_140ea9a67;
    }
  }
  cVar3 = '\0';
LAB_140ea9a67:
  iVar5 = *(int *)(param_3 + 0x50) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar9 = lVar8 * 0x48;
    do {
      lVar10 = *(longlong *)(param_3 + 0x48) + lVar9;
      if (*(longlong *)(lVar10 + 0x20) == *(longlong *)(param_2 + 0x20)) {
        lVar2 = *(longlong *)(lVar10 + 0x28);
        if (lVar2 == 0) {
LAB_140ea9acb:
          cVar4 = '\0';
        }
        else {
          uVar6 = UGameplayTagAssetInterface::GetPrivateStaticClass();
          plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar6);
          if (plVar7 == (longlong *)0x0) goto LAB_140ea9acb;
          cVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
        }
        if (cVar3 == cVar4) {
          fVar11 = 3.4028235e+38;
          if (*(char *)(param_2 + 0x18) == '\0') {
            fVar12 = *(float *)(param_2 + 0x30) * *(float *)(param_2 + 0x1c);
          }
          else {
            fVar12 = 3.4028235e+38;
          }
          if (*(char *)(lVar10 + 0x18) == '\0') {
            FUN_142dcecd0(param_3,lVar10);
            fVar11 = extraout_XMM0_Da * *(float *)(lVar10 + 0x30);
          }
          if (fVar11 < fVar12) {
            uVar1 = *(uint *)(lVar10 + 0x38);
            iVar5 = (int)param_4[1];
            *(int *)(param_4 + 1) = iVar5 + 1;
            if (*(int *)((longlong)param_4 + 0xc) < iVar5 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_4,iVar5);
            }
            lVar8 = *param_4;
            *(ulonglong *)(lVar8 + (longlong)iVar5 * 0xc) = (ulonglong)uVar1;
            *(undefined4 *)(lVar8 + 8 + (longlong)iVar5 * 0xc) = 0;
            return 1;
          }
          return 0;
        }
      }
      lVar9 = lVar9 + -0x48;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  return 1;
}



// FUNCTION 140ea9ba0 FUN_140ea9ba0 body=1301 status=ok
// SIG undefined FUN_140ea9ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ea9ba0(longlong *param_1,char param_2,byte param_3,char param_4)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(char *)((longlong)param_1 + 0x3ae) != '\0') {
    return;
  }
  if (0 < (int)param_1[0x69]) {
    lVar5 = param_1[0x24];
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0();
    }
    lVar5 = FUN_143114ce0(lVar5);
    if ((lVar5 != 0) && (iVar4 = FUN_143114630(lVar5), (int)param_1[0x75] != iVar4)) {
      *(int *)(param_1 + 0x75) = iVar4;
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = DAT_146b33f38;
  lVar9 = DAT_146b33f38 + 0x60;
  lVar6 = FWeakObjectPtr::Get(lVar9);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar5 + 0x68)) {
      return;
    }
    local_d8 = (code *)0x0;
    if (*(longlong *)(lVar5 + 0x70) == 0) {
      return;
    }
    lVar6 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar9,lVar6);
    if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar5 + 0x68) = DAT_1464b56f4;
    }
    lVar6 = FWeakObjectPtr::Get(lVar9);
    if (lVar6 == 0) {
      return;
    }
  }
  lVar5 = FUN_142e778a0();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar5 = *(longlong *)(lVar6 + 0x80 + (ulonglong)param_3 * 8);
  if (lVar5 == 0) {
    return;
  }
  if (*(byte *)((longlong)param_1 + 0x3af) != param_3) {
    *(byte *)((longlong)param_1 + 0x3af) = param_3;
    TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x62,param_3);
  }
  if (*(char *)((longlong)param_1 + 0x3ae) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3ae) = 1;
    iVar4 = FUN_14233f450(param_1);
    if (iVar4 == 3) {
      *(byte *)((longlong)param_1 + 0x3ac) =
           *(char *)((longlong)param_1 + 0x3af) << 4 | *(byte *)((longlong)param_1 + 0x3ae);
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  if (param_1[0xd3] != 0) {
    lVar6 = param_1[0x24];
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar6 + 400) == 0) {
      uVar7 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    FUN_142880530(uVar7,param_1 + 0xd3);
    param_1[0xd3] = 0;
  }
  plVar8 = (longlong *)param_1[0x23];
  if (plVar8 == (longlong *)0x0) {
LAB_140ea9e2b:
    cVar3 = '\0';
  }
  else {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140ea9e2b;
    cVar3 = (**(code **)(*plVar8 + 0x950))(plVar8);
    if (cVar3 != '\0') goto LAB_140ea9e67;
  }
  lVar6 = param_1[0x23];
  if (lVar6 != 0) {
    uVar7 = FUN_1430a8880();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0xf8))(plVar8,0xffffffff,1);
    }
  }
LAB_140ea9e67:
  FUN_140ea0ff0(param_1 + 0x9c,lVar5);
  if (cVar3 == '\0') {
    *(byte *)((longlong)param_1 + 0x6b4) = *(byte *)((longlong)param_1 + 0x6b4) & 0xfb | 2;
    FUN_140ec7f60(param_1);
    FUN_140ec77a0(param_1);
  }
  else if (((param_4 != '\0') && ((*(byte *)((longlong)param_1 + 0x6b4) & 8) == 0)) &&
          (param_1[0xd5] == 0)) {
    FUN_140ec6640(param_1);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x5a,0);
  if ((param_2 != '\0') || (fVar1 = *(float *)(param_1 + 0xc6), fVar1 <= 0.0)) {
    FUN_140eaa630(param_1);
  }
  else {
    uStack_d0 = 0;
    local_d8 = FUN_140eaa630;
    lVar5 = param_1[0x24];
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar5 + 400) == 0) {
      uVar7 = *(undefined8 *)(lVar5 + 0x3f8);
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
    }
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      *(undefined4 *)(plVar8 + 2) = (undefined4)local_d8;
      *(undefined4 *)((longlong)plVar8 + 0x14) = local_d8._4_4_;
      *(undefined4 *)(plVar8 + 3) = uStack_d0;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_cc;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar5;
      *plVar8 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_c8 = 0;
    local_c0 = 0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x30))(plVar8,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_e0 = 0xbf800000;
    local_e8 = 0;
    local_b0 = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar7,param_1 + 0xd3,&local_c8,fVar1);
    if (local_68 != 0) {
      plVar10 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar10 = local_78;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      lVar5 = FMemory::Realloc(plVar8,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
    FUN_140e7ae90(param_1);
  }
  return;
}



// FUNCTION 140eaa0c0 FUN_140eaa0c0 body=1161 status=ok
// SIG undefined FUN_140eaa0c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eaa0c0(longlong *param_1,char param_2,byte param_3)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  iVar4 = FUN_14233f450();
  if (iVar4 != 3) {
    return;
  }
  cVar3 = FUN_140ea53f0(param_1,param_3);
  if (cVar3 == '\0') {
    return;
  }
  if (0 < (int)param_1[0x69]) {
    lVar5 = param_1[0x24];
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    lVar5 = FUN_143114ce0(lVar5);
    if ((lVar5 != 0) && (iVar4 = FUN_143114630(lVar5), (int)param_1[0x75] != iVar4)) {
      *(int *)(param_1 + 0x75) = iVar4;
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = DAT_146b33f38;
  lVar9 = DAT_146b33f38 + 0x60;
  lVar6 = FWeakObjectPtr::Get(lVar9);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar5 + 0x68)) {
      return;
    }
    local_c8 = (code *)0x0;
    if (*(longlong *)(lVar5 + 0x70) == 0) {
      return;
    }
    lVar6 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar9,lVar6);
    if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar5 + 0x68) = DAT_1464b56f4;
    }
    lVar6 = FWeakObjectPtr::Get(lVar9);
    if (lVar6 == 0) {
      return;
    }
  }
  lVar5 = FUN_142e778a0();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (lVar5 = *(longlong *)(lVar6 + 0x80 + (ulonglong)param_3 * 8), lVar5 != 0)) {
    TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x65,param_3);
    if (*(byte *)((longlong)param_1 + 0x3af) != param_3) {
      *(byte *)((longlong)param_1 + 0x3af) = param_3;
      TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x62,param_3);
    }
    FUN_140ebfa80(param_1,1);
    if (param_1[0xd3] != 0) {
      lVar6 = param_1[0x24];
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar6 + 400) == 0) {
        uVar7 = *(undefined8 *)(lVar6 + 0x3f8);
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
      }
      FUN_142880530(uVar7,param_1 + 0xd3);
      param_1[0xd3] = 0;
    }
    lVar6 = param_1[0x23];
    if (lVar6 != 0) {
      uVar7 = FUN_1430a8880();
      plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0xf8))(plVar8,0xffffffff,1);
      }
    }
    FUN_140ea0ff0(param_1 + 0x9c,lVar5);
    *(byte *)((longlong)param_1 + 0x6b4) = *(byte *)((longlong)param_1 + 0x6b4) & 0xfb | 2;
    FUN_140ec7f60(param_1);
    FUN_140ec77a0(param_1);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x5a,0);
    if ((param_2 != '\0') || (fVar1 = *(float *)(param_1 + 0xc6), fVar1 <= 0.0)) {
      FUN_140eaa630(param_1);
    }
    else {
      uStack_c0 = 0;
      local_c8 = FUN_140eaa630;
      lVar5 = param_1[0x24];
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar5 + 400) == 0) {
        uVar7 = *(undefined8 *)(lVar5 + 0x3f8);
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
      }
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar8 + 1,param_1);
        *(undefined4 *)(plVar8 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)plVar8 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(plVar8 + 3) = uStack_c0;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_bc;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar5;
        *plVar8 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_b8 = 0;
      local_b0 = 0;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8,&local_b8);
      }
      FWeakObjectPtr::operator=(local_a8,0);
      local_d0 = 0xbf800000;
      local_d8 = 0;
      local_a0 = 0;
      local_68 = (longlong *)0x0;
      local_58 = 0;
      local_98 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar7,param_1 + 0xd3,&local_b8,fVar1);
      if (local_58 != 0) {
        plVar10 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar10 = local_68;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        lVar5 = FMemory::Realloc(plVar8,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
      FUN_140e7ae90(param_1);
    }
  }
  return;
}



// FUNCTION 140eaa550 FUN_140eaa550 body=209 status=ok
// SIG undefined FUN_140eaa550(void)

void FUN_140eaa550(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x120);
  plVar1 = plVar5 + *(int *)(param_1 + 0x128);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    if ((*plVar5 != 0) && (lVar2 = *(longlong *)(*plVar5 + 400), lVar2 != 0)) {
      lVar4 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && ((*(byte *)(lVar2 + 0xb1c) >> 3 & 1) != param_2)) {
        *(byte *)(lVar2 + 0xb1a) = *(byte *)(lVar2 + 0xb1a) & 0xdf;
        *(byte *)(lVar2 + 0xb1a) = *(byte *)(lVar2 + 0xb1a) | (param_2 ^ 1) << 5;
        FUN_1423baf90(lVar2,param_2);
      }
    }
  }
  return;
}



// FUNCTION 140eaa630 FUN_140eaa630 body=88 status=ok
// SIG undefined FUN_140eaa630(void)

void FUN_140eaa630(longlong *param_1)

{
  int iVar1;
  
  if (*(char *)((longlong)param_1 + 0x3ae) != '\x02') {
    *(undefined1 *)((longlong)param_1 + 0x3ae) = 2;
    iVar1 = FUN_14233f450();
    if (iVar1 == 3) {
      *(byte *)((longlong)param_1 + 0x3ac) =
           *(char *)((longlong)param_1 + 0x3af) << 4 | *(byte *)((longlong)param_1 + 0x3ae);
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x5c,0);
  return;
}



// FUNCTION 140eaa690 FUN_140eaa690 body=1817 status=ok
// SIG undefined FUN_140eaa690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eaa690(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined2 *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint *puVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 local_140;
  longlong local_138;
  uint local_130;
  uint uStack_12c;
  uint *puStack_128;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  longlong *local_108 [2];
  undefined8 local_f8;
  undefined8 local_f0;
  uint uStack_e8;
  uint uStack_e4;
  uint *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong local_a0 [4];
  longlong *local_80;
  int local_78;
  int iStack_74;
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar15 = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x118);
  }
  if (lVar15 != 0) {
    plVar10 = *(longlong **)(param_1 + 0x140);
    local_138 = param_1;
    local_110 = param_4;
    local_108[0] = param_2;
    local_f8 = param_3;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x418))(plVar10,&DAT_146532190);
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    if (0 < *(int *)(param_1 + 0x128)) {
      local_80 = (longlong *)0x0;
      local_78 = 1;
      iStack_74 = 0;
      TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_a0,0);
      plVar10 = local_a0;
      if (local_80 != (longlong *)0x0) {
        plVar10 = local_80;
      }
      *plVar10 = lVar15;
      if (0 < local_78) {
        plVar10 = (longlong *)0x0;
        do {
          iVar21 = local_78 + -1;
          plVar20 = local_a0;
          if (local_80 != (longlong *)0x0) {
            plVar20 = plVar10;
          }
          lVar7 = *(longlong *)(((ulonglong)local_80 | (ulonglong)plVar20) + (longlong)iVar21 * 8);
          iVar6 = (local_78 - iVar21) + -1;
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(((ulonglong)local_80 | (ulonglong)plVar20) + (longlong)iVar21 * 8),
                       (void *)(((ulonglong)local_80 | (ulonglong)plVar20) + (longlong)local_78 * 8)
                       ,(longlong)iVar6 << 3);
          }
          local_78 = local_78 + -1;
          uStack_12c = 1;
          plVar20 = (longlong *)(lVar7 + 0x2b0);
          uVar2 = *(uint *)(lVar7 + 0x2d8);
          puVar1 = (uint *)(lVar7 + 0x2c0);
          local_130 = 0;
          uStack_11c = 0;
          uStack_118 = 0;
          if (uVar2 != 0) {
            puVar19 = *(uint **)(lVar7 + 0x2d0);
            if (*(uint **)(lVar7 + 0x2d0) == (uint *)0x0) {
              puVar19 = puVar1;
            }
            uVar3 = *puVar19;
            plVar11 = plVar10;
            plVar8 = plVar10;
            while (uVar3 == 0) {
              iVar21 = (int)plVar11;
              uStack_118 = (int)plVar8 + 0x20;
              plVar8 = (longlong *)(ulonglong)uStack_118;
              local_130 = iVar21 + 1;
              plVar11 = (longlong *)(ulonglong)local_130;
              if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar21)
              goto LAB_140eaa895;
              uVar3 = puVar19[(longlong)iVar21 + 1];
            }
            uStack_12c = uVar3 - 1 & uVar3 ^ uVar3;
            iVar21 = 0x1f;
            if (uStack_12c != 0) {
              for (; uStack_12c >> iVar21 == 0; iVar21 = iVar21 + -1) {
              }
            }
            if (uStack_12c == 0) {
              iVar21 = 0x20;
            }
            else {
              iVar21 = 0x1f - iVar21;
            }
            uStack_11c = (uStack_118 - iVar21) + 0x1f;
            if ((int)uVar2 < (int)uStack_11c) {
LAB_140eaa895:
              uStack_11c = uVar2;
            }
          }
          uVar3 = *(uint *)(lVar7 + 0x2d8);
          uStack_d8 = CONCAT44(uStack_11c,0xffffffff);
          local_d0 = CONCAT44(uStack_114,uStack_118);
          uStack_c0 = CONCAT44(uStack_12c,local_130);
          local_120 = -1 << ((byte)uVar3 & 0x1f);
          uVar18 = uVar3 & 0xffffffe0;
          uStack_e8 = local_130;
          uStack_e4 = uStack_12c;
          puStack_128 = puVar1;
          uStack_11c = uVar3;
          local_e0 = puVar1;
          local_c8 = plVar20;
          puStack_b8 = puVar1;
          uStack_b0 = uStack_d8;
          uStack_a8 = local_d0;
          local_f0 = plVar20;
          if (uVar3 != uVar2) {
            puVar19 = *(uint **)(lVar7 + 0x2d0);
            if (*(uint **)(lVar7 + 0x2d0) == (uint *)0x0) {
              puVar19 = puVar1;
            }
            uVar13 = puVar19[(int)uVar3 >> 5] & local_120;
            iVar21 = (int)uVar3 >> 5;
            while (uVar13 == 0) {
              uVar18 = uVar18 + 0x20;
              if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar21)
              goto LAB_140eaa96e;
              uVar13 = puVar19[(longlong)iVar21 + 1];
              local_120 = 0xffffffff;
              iVar21 = iVar21 + 1;
            }
            uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
            iVar21 = 0x1f;
            if (uVar13 != 0) {
              for (; uVar13 >> iVar21 == 0; iVar21 = iVar21 + -1) {
              }
            }
            if (uVar13 == 0) {
              iVar21 = 0x20;
            }
            else {
              iVar21 = 0x1f - iVar21;
            }
            uStack_11c = (uVar18 - iVar21) + 0x1f;
            uVar3 = uStack_11c;
            if ((int)uVar2 < (int)uStack_11c) {
LAB_140eaa96e:
              uStack_11c = uVar2;
              uVar3 = uVar2;
            }
          }
          while( true ) {
            if ((uStack_d8._4_4_ == uVar3) && (local_e0 == puVar1)) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if ((bVar5) && (local_f0 == plVar20)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) break;
            plVar11 = *(longlong **)(*local_f0 + (longlong)(int)uStack_d8._4_4_ * 0x10);
            if (plVar11 != (longlong *)0x0) {
              lVar7 = FUN_1429f11d0();
              if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                  lVar7 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                lVar7 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
                if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                    lVar7 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (!bVar5) {
                  (**(code **)(*plVar11 + 0x830))(plVar11,7);
                }
              }
              else {
                lVar7 = UUGStartScreenUW::GetPrivateStaticClass();
                iVar21 = local_78;
                if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                    lVar7 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) {
                  lVar7 = plVar11[0x5b];
                  for (lVar16 = lVar7; lVar16 != 0; lVar16 = *(longlong *)(lVar16 + 0x118)) {
                    if (lVar16 == lVar15) {
                      lVar16 = (longlong)local_78;
                      local_78 = local_78 + 1;
                      if (iStack_74 < local_78) {
                        TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>
                        ::ResizeGrow(local_a0,iVar21);
                      }
                      plVar11 = local_a0;
                      if (local_80 != (longlong *)0x0) {
                        plVar11 = local_80;
                      }
                      plVar11[lVar16] = lVar7;
                      break;
                    }
                  }
                }
              }
            }
            uStack_d8 = CONCAT44(uStack_d8._4_4_,(uint)uStack_d8 & ~uStack_e4);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e8);
          }
          param_1 = local_138;
          param_2 = local_108[0];
        } while (0 < local_78);
      }
      uVar4 = local_f8;
      plVar20 = *(longlong **)(param_1 + 0x120);
      plVar10 = plVar20 + *(int *)(param_1 + 0x128);
      plVar11 = (longlong *)(param_1 + 0x120);
      lVar15 = local_138;
      for (; local_138 = lVar15, local_108[0] = plVar11, plVar20 != plVar10; plVar20 = plVar20 + 1)
      {
        lVar15 = *plVar20;
        if (lVar15 != 0) {
          lVar7 = UMultiLineEditableTextBox::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            local_140 = param_7;
            local_148 = param_6;
            local_150 = param_5;
            local_158 = local_110;
            FUN_1431109e0(lVar15,param_8,param_2,uVar4);
          }
        }
        plVar11 = local_108[0];
        lVar15 = local_138;
      }
      uVar24 = 0;
      puVar23 = (ulonglong *)(lVar15 + 0x130);
      plVar10 = (longlong *)*puVar23;
      uVar22 = (longlong)*(int *)(lVar15 + 0x138) & 0x1fffffffffffffff;
      if (plVar10 + *(int *)(lVar15 + 0x138) < plVar10) {
        uVar22 = uVar24;
      }
      if (uVar22 != 0) {
        do {
          plVar20 = (longlong *)*plVar10;
          if (plVar20 != (longlong *)0x0) {
            if (*(int *)(lVar15 + 0x128) < 1) {
              (**(code **)(*plVar20 + 0x3b0))(plVar20,0);
            }
            else {
              lVar15 = plVar20[0x33];
              lVar7 = FUN_140626d60(*(undefined8 *)*plVar11);
              if (0 < *(int *)(lVar7 + 0x450)) {
                plVar8 = *(longlong **)(lVar7 + 0x448);
                uVar12 = 0;
                uVar17 = 0;
                do {
                  if (*plVar8 == lVar15) {
                    plVar8 = (longlong *)
                             FUN_1423acf90(*(undefined8 *)*plVar11,&local_f8,(int)uVar17 + 2);
                    lVar15 = *plVar8;
                    break;
                  }
                  uVar17 = (ulonglong)((int)uVar17 + 1);
                  uVar12 = uVar12 + 1;
                  plVar8 = plVar8 + 3;
                } while ((longlong)uVar12 < (longlong)*(int *)(lVar7 + 0x450));
              }
              FUN_142382f60(plVar20,*(undefined8 *)*plVar11,&DAT_146532180,lVar15);
              local_110 = plVar20[3];
              uVar4 = *(undefined8 *)(*(longlong *)*plVar11 + 0x118);
              puVar9 = (undefined8 *)FName::ToString(&local_110,local_108);
              if (*(int *)(puVar9 + 1) == 0) {
                puVar14 = &DAT_143f3eda8;
              }
              else {
                puVar14 = (undefined2 *)*puVar9;
              }
              (**(code **)(*plVar20 + 0x138))(plVar20,puVar14,uVar4,0x35);
              lVar15 = local_138;
              if (local_108[0] != (longlong *)0x0) {
                FMemory::Free();
                lVar15 = local_138;
              }
            }
          }
          plVar10 = plVar10 + 1;
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar22);
        puVar23 = (ulonglong *)(lVar15 + 0x130);
      }
      *(undefined4 *)(plVar11 + 1) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar11 + 0xc)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar11,0);
      }
      *(undefined4 *)(puVar23 + 1) = 0;
      if (0x7fffffff < *(uint *)((longlong)puVar23 + 0xc)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(puVar23,0);
      }
      *(byte *)(lVar15 + 0x148) = *(byte *)(lVar15 + 0x148) & 0xfe;
      if (local_80 != (longlong *)0x0) {
        FMemory::Free(local_80);
      }
    }
  }
  return;
}



// FUNCTION 140eaadb0 FUN_140eaadb0 body=456 status=ok
// SIG undefined FUN_140eaadb0(void)

void FUN_140eaadb0(longlong *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  float local_res8 [2];
  
  if (*(char *)((longlong)param_1 + 0x3ae) == '\0') {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x3ae) != '\x02') {
    *(undefined1 *)((longlong)param_1 + 0x3ae) = 2;
    iVar3 = FUN_14233f450();
    if (iVar3 == 3) {
      *(byte *)((longlong)param_1 + 0x3ac) =
           *(char *)((longlong)param_1 + 0x3af) << 4 | *(byte *)((longlong)param_1 + 0x3ae);
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  if (((*(byte *)((longlong)param_1 + 0x3ad) & 8) == 0) || ((*(byte *)(param_1 + 0xc5) & 1) != 0)) {
    if ((*param_2 == 0.0) && ((param_2[1] == 0.0 && (param_2[2] == 0.0)))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      bVar7 = false;
      if (((*(byte *)(param_1 + 0xc5) & 1) != 0) ||
         (plVar6 = (longlong *)param_1[0x23], plVar6 == (longlong *)0x0)) goto LAB_140eaaf1c;
      lVar4 = FUN_1413f82e0();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140eaaf1c;
      uVar5 = UMediaSoundComponent::GetPrivateStaticClass();
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,uVar5);
      if (plVar6 == (longlong *)0x0) goto LAB_140eaaf1c;
      cVar2 = (**(code **)(*plVar6 + 0x570))(plVar6);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*plVar6 + 0x558))(plVar6);
        if ((cVar2 != '\0') && (iVar3 = FUN_140ea9280(param_1 + 0x9c,0,local_res8), iVar3 != -1)) {
          bVar7 = *(float *)((longlong)param_1 + 0x38c) <= local_res8[0] &&
                  local_res8[0] != *(float *)((longlong)param_1 + 0x38c);
        }
        goto LAB_140eaaf1c;
      }
    }
  }
  bVar7 = true;
LAB_140eaaf1c:
  FUN_140eaa690(param_1 + 0x9c,param_2,param_3,param_4,param_5,param_6,param_7,bVar7);
  return;
}



// FUNCTION 140eaaf80 FUN_140eaaf80 body=38 status=ok
// SIG undefined FUN_140eaaf80(void)

void FUN_140eaaf80(char *param_1,float param_2)

{
  float fVar1;
  
  if ((*param_1 != '\0') &&
     (fVar1 = *(float *)(param_1 + 4), *(float *)(param_1 + 4) = fVar1 - param_2,
     fVar1 - param_2 <= 0.0)) {
    *param_1 = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  return;
}



// FUNCTION 140eaafb0 FUN_140eaafb0 body=769 status=ok
// SIG undefined FUN_140eaafb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eaafb0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char cVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  float fVar20;
  undefined1 auStack_938 [32];
  longlong local_918;
  undefined1 local_910 [40];
  undefined1 local_8e8 [8];
  float local_8e0;
  longlong local_8c8 [4];
  longlong *local_8a8;
  int local_898;
  undefined1 local_878 [2048];
  undefined1 *local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_938;
  lVar16 = 0;
  plVar18 = (longlong *)*param_1;
  fVar20 = 0.0;
  plVar19 = plVar18 + (longlong)(int)param_1[1] * 0x25;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_918 = param_2;
  if (plVar18 != plVar19) {
    do {
      if (*(int *)(param_3 + 0x50) == 0) {
LAB_140eab08f:
        FUN_1407bbe00(local_8e8,param_3,plVar18);
        if (0.0 < local_8e0) {
          plVar14 = (longlong *)*plVar18;
          fVar20 = fVar20 + local_8e0;
          if (plVar14 == (longlong *)0x0) {
            puVar10 = (undefined4 *)FUN_1407bbde0(local_910,0,local_8e8);
            uVar7 = local_70;
            lVar9 = (longlong)(int)local_70;
            iVar12 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar12);
            if (local_70._4_4_ < iVar12) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TInlineAllocator<64,FDefaultAllocator>_>
              ::ResizeGrow(local_878,uVar7 & 0xffffffff);
            }
            uVar3 = puVar10[1];
            uVar4 = puVar10[2];
            uVar5 = puVar10[3];
            puVar11 = local_878;
            if (local_78 != (undefined1 *)0x0) {
              puVar11 = local_78;
            }
            puVar1 = (undefined4 *)(puVar11 + lVar9 * 0x20);
            *puVar1 = *puVar10;
            puVar1[1] = uVar3;
            puVar1[2] = uVar4;
            puVar1[3] = uVar5;
            uVar6 = *(undefined8 *)(puVar10 + 6);
            *(undefined8 *)(puVar11 + lVar9 * 0x20 + 0x10) = *(undefined8 *)(puVar10 + 4);
            *(undefined8 *)((longlong)(puVar11 + lVar9 * 0x20 + 0x10) + 8) = uVar6;
          }
          else {
            (**(code **)(*plVar14 + 0x2c0))(plVar14,local_878);
          }
        }
        if (local_898 != 0) {
          plVar14 = local_8c8;
          if (local_8a8 != (longlong *)0x0) {
            plVar14 = local_8a8;
          }
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x10))(plVar14,0);
          }
        }
        if (local_8a8 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      else {
        plVar14 = *(longlong **)(param_3 + 0x40);
        lVar9 = lVar16;
        if (plVar14 == (longlong *)0x0) {
          lVar9 = param_3 + 0x20;
        }
        if (lVar9 == 0 && plVar14 == (longlong *)0x0) goto LAB_140eab08f;
        lVar9 = lVar16;
        if (*(int *)(param_3 + 0x50) != 0) {
          if (plVar14 == (longlong *)0x0) {
            plVar14 = (longlong *)(param_3 + 0x20);
          }
          if (plVar14 != (longlong *)0x0) {
            lVar9 = (**(code **)(*plVar14 + 8))();
          }
        }
        cVar8 = (**(code **)(param_3 + 0x10))(lVar9,plVar18);
        if (cVar8 != '\0') goto LAB_140eab08f;
      }
      plVar18 = plVar18 + 0x25;
    } while (plVar18 != plVar19);
    if (0.0 < fVar20) {
      fVar2 = *(float *)(param_3 + 8);
      puVar11 = local_878;
      if (local_78 != (undefined1 *)0x0) {
        puVar11 = local_78;
      }
      puVar15 = puVar11 + (longlong)(int)local_70 * 0x20;
      for (; puVar11 != puVar15; puVar11 = puVar11 + 0x20) {
        *(float *)(puVar11 + 8) = (fVar2 / fVar20) * *(float *)(puVar11 + 8);
      }
    }
  }
  lVar16 = local_918;
  iVar12 = (int)local_70;
  lVar9 = (longlong)(int)local_70;
  if ((int)local_70 != 0) {
    iVar13 = *(int *)(local_918 + 0x808);
    if (*(int *)(local_918 + 0x80c) < iVar13 + (int)local_70) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TInlineAllocator<64,FDefaultAllocator>_>
      ::ResizeTo(local_918);
      iVar13 = *(int *)(lVar16 + 0x808);
    }
    puVar11 = local_878;
    if (local_78 != (undefined1 *)0x0) {
      puVar11 = local_78;
    }
    lVar17 = *(longlong *)(lVar16 + 0x800);
    if (*(longlong *)(lVar16 + 0x800) == 0) {
      lVar17 = lVar16;
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar13 * 0x20 + lVar17),puVar11,lVar9 << 5);
    *(int *)(lVar16 + 0x808) = *(int *)(lVar16 + 0x808) + iVar12;
  }
  if (local_78 != (undefined1 *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}



// FUNCTION 140eab2c0 FUN_140eab2c0 body=535 status=ok
// SIG undefined FUN_140eab2c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eab2c0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_138 [32];
  undefined1 local_118 [16];
  code *local_108 [2];
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined1 local_b8 [32];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if ((longlong *)param_3[0xc] != (longlong *)0x0) {
    uVar10 = 0;
    lVar2 = *(longlong *)param_3[0xc];
    uVar12 = uVar10;
    if (0 < *(int *)(lVar2 + 0x10)) {
      do {
        FUN_1407bc590(local_118,(longlong *)param_3[0xc],
                      *(undefined8 *)(*(longlong *)(*(longlong *)param_3[0xc] + 8) + 8 + uVar12));
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x298))
                          (*(longlong **)(param_1 + 0x30),local_118);
        if ((cVar3 == '\0') &&
           (lVar4 = FWeakObjectPtr::Get(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar10 * 0x28),
           lVar4 != 0)) {
          local_d8 = 0;
          local_c8 = 0;
          if (*(int *)(param_3 + 10) == 0) {
LAB_140eab3b5:
            local_108[0] = FUN_1407c3030;
          }
          else {
            puVar7 = (undefined8 *)param_3[8];
            if ((undefined8 *)param_3[8] == (undefined8 *)0x0) {
              puVar7 = param_3 + 4;
            }
            if (puVar7 == (undefined8 *)0x0) goto LAB_140eab3b5;
            plVar5 = (longlong *)(**(code **)*puVar7)(puVar7,local_f8);
            (**(code **)(*plVar5 + 8))(plVar5);
            local_108[0] = (code *)param_3[2];
          }
          FUN_1407bbee0(local_b8,*param_3,local_108,local_118);
          iVar1 = *(int *)(param_2 + 0x808);
          uVar11 = (ulonglong)iVar1;
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2e0))
                    (*(longlong **)(param_1 + 0x30),param_2,local_b8);
          if (iVar1 < *(int *)(param_2 + 0x808)) {
            lVar6 = uVar11 << 5;
            do {
              lVar6 = lVar6 + 0x20;
              lVar8 = *(longlong *)(param_2 + 0x800);
              if (*(longlong *)(param_2 + 0x800) == 0) {
                lVar8 = param_2;
              }
              uVar9 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar9;
              *(longlong *)(lVar8 + -8 + lVar6) = lVar4;
            } while ((int)uVar9 < *(int *)(param_2 + 0x808));
          }
          if (local_68 != 0) {
            plVar5 = local_98;
            if (local_78 != (longlong *)0x0) {
              plVar5 = local_78;
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5,0);
            }
          }
          if (local_78 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar12 = uVar12 + 0x28;
      } while ((int)uVar9 < *(int *)(lVar2 + 0x10));
    }
  }
  return;
}



// FUNCTION 140eab4e0 FUN_140eab4e0 body=159 status=ok
// SIG undefined FUN_140eab4e0(void)

void FUN_140eab4e0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x68) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x408), lVar1 != 0)) {
    lVar3 = FUN_1413f82e0();
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
                    /* WARNING: Could not recover jumptable at 0x000140eab55d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0xd88) + 0x138))((longlong *)(lVar1 + 0xd88),param_2);
      return;
    }
  }
  FUN_140e7e720(param_1,param_2);
  return;
}



// FUNCTION 140eab580 FUN_140eab580 body=167 status=ok
// SIG undefined FUN_140eab580(void)

longlong * FUN_140eab580(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x378))();
  if (lVar1 == 0) {
    if (param_1[0x3e] != 0) {
      lVar2 = FUN_14148cad0();
      lVar1 = param_1[0x3e];
      for (lVar3 = lVar1; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar2) goto LAB_140eab5d0;
      }
    }
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x378))(param_1);
    lVar1 = *(longlong *)(lVar3 + 0xb0);
    if ((lVar1 != 0) ||
       ((*(longlong *)(lVar3 + 0x30) != 0 && (lVar1 = FUN_140eac160(), lVar1 != 0)))) {
      *param_2 = *(longlong *)(lVar1 + 0x90);
      return param_2;
    }
  }
  lVar1 = 0;
LAB_140eab5d0:
  *param_2 = lVar1;
  return param_2;
}



// FUNCTION 140eab630 FUN_140eab630 body=186 status=ok
// SIG undefined FUN_140eab630(void)

undefined4 * FUN_140eab630(longlong param_1,undefined4 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *param_2 = 0xffffffff;
  param_2[1] = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[8] = 0;
  if (0x7fffffff < (uint)param_2[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  if (*(undefined2 **)(param_2 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_2 + 6) = 0;
  }
  param_2[2] = 0;
  *param_2 = *(undefined4 *)(param_1 + 0x1e0);
  param_2[1] = *(undefined4 *)(param_1 + 0x1e4);
  param_2[2] = *(undefined4 *)(param_1 + 0x1e8);
  local_38 = *(undefined8 *)(param_1 + 0x1f0);
  FString::FString(local_30,param_1 + 0x1f8);
  FSoftObjectPath::operator=(param_2 + 4,&local_38);
  return param_2;
}



// FUNCTION 140eab6f0 FUN_140eab6f0 body=186 status=ok
// SIG undefined FUN_140eab6f0(void)

undefined4 * FUN_140eab6f0(longlong param_1,undefined4 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *param_2 = 0xffffffff;
  param_2[1] = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[8] = 0;
  if (0x7fffffff < (uint)param_2[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  if (*(undefined2 **)(param_2 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_2 + 6) = 0;
  }
  param_2[2] = 0;
  *param_2 = *(undefined4 *)(param_1 + 0x1e8);
  param_2[1] = *(undefined4 *)(param_1 + 0x1ec);
  param_2[2] = *(undefined4 *)(param_1 + 0x1f0);
  local_38 = *(undefined8 *)(param_1 + 0x1f8);
  FString::FString(local_30,param_1 + 0x200);
  FSoftObjectPath::operator=(param_2 + 4,&local_38);
  return param_2;
}



// FUNCTION 140eab7b0 FUN_140eab7b0 body=119 status=ok
// SIG undefined FUN_140eab7b0(void)

longlong FUN_140eab7b0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_1407c7d50();
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    iVar1 = *(int *)(param_2 + 0x88);
    iVar2 = iVar1 + 1;
    *(int *)(param_2 + 0x88) = iVar2;
    if (*(int *)(param_2 + 0x8c) < iVar2) {
      TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_2);
    }
    lVar3 = *(longlong *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x80) == 0) {
      lVar3 = param_2;
    }
    *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x1e0);
  }
  return param_2;
}



// FUNCTION 140eab830 FUN_140eab830 body=199 status=ok
// SIG undefined FUN_140eab830(void)

longlong FUN_140eab830(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  FUN_1407c7d50();
  uVar4 = 0;
  plVar5 = *(longlong **)(param_1 + 0x1f8);
  uVar6 = (longlong)*(int *)(param_1 + 0x200) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x200) < plVar5) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    do {
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        iVar1 = *(int *)(param_2 + 0x88);
        *(int *)(param_2 + 0x88) = iVar1 + 1;
        if (*(int *)(param_2 + 0x8c) < iVar1 + 1) {
          TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_2,iVar1);
        }
        lVar3 = *(longlong *)(param_2 + 0x80);
        if (*(longlong *)(param_2 + 0x80) == 0) {
          lVar3 = param_2;
        }
        *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar2;
      }
      plVar5 = plVar5 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  return param_2;
}



// FUNCTION 140eab900 FUN_140eab900 body=487 status=ok
// SIG undefined FUN_140eab900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140eab900(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FUN_1407c7d50();
  uVar5 = 0;
  plVar6 = *(longlong **)(param_1 + 0x1f8);
  uVar3 = (longlong)*(int *)(param_1 + 0x200) & 0x1fffffffffffffff;
  if (plVar6 + *(int *)(param_1 + 0x200) < plVar6) {
    uVar3 = uVar5;
  }
  if (uVar3 != 0) {
    do {
      lVar7 = *plVar6;
      if (lVar7 != 0) {
        iVar1 = *(int *)(param_2 + 0x88);
        *(int *)(param_2 + 0x88) = iVar1 + 1;
        if (*(int *)(param_2 + 0x8c) < iVar1 + 1) {
          TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_2,iVar1);
        }
        lVar9 = *(longlong *)(param_2 + 0x80);
        if (*(longlong *)(param_2 + 0x80) == 0) {
          lVar9 = param_2;
        }
        *(longlong *)(lVar9 + (longlong)iVar1 * 8) = lVar7;
      }
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar3);
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    uVar2 = FUN_1407c80f0(*(longlong *)(param_1 + 600),local_d8);
    FUN_140e9d930(param_2,uVar2);
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x248);
  lVar9 = (longlong)*(int *)(param_1 + 0x250) * 0x10 + lVar7;
  for (; lVar7 != lVar9; lVar7 = lVar7 + 0x10) {
    if (*(longlong *)(lVar7 + 8) != 0) {
      uVar3 = FUN_1407c80f0(*(longlong *)(lVar7 + 8),local_d8);
      iVar1 = *(int *)(uVar3 + 0x88);
      if (iVar1 != 0) {
        iVar8 = *(int *)(param_2 + 0x88);
        if (*(int *)(param_2 + 0x8c) < iVar8 + iVar1) {
          FUN_1407418a0(param_2);
          iVar8 = *(int *)(param_2 + 0x88);
        }
        lVar4 = *(longlong *)(param_2 + 0x80);
        if (*(longlong *)(param_2 + 0x80) == 0) {
          lVar4 = param_2;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar4 + (longlong)iVar8 * 8),
                   (void *)((ulonglong)(*(ulonglong *)(uVar3 + 0x80) != 0) - 1 & uVar3 |
                           *(ulonglong *)(uVar3 + 0x80)),(longlong)iVar1 << 3);
        *(undefined4 *)(uVar3 + 0x88) = 0;
        *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + iVar1;
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 140eabb10 FUN_140eabb10 body=833 status=ok
// SIG undefined FUN_140eabb10(void)

byte FUN_140eabb10(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  longlong lVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  bVar11 = 0;
  if ((*(char *)(param_1 + 0x3ae) != '\0') && (*(char *)(param_1 + 0x3af) == '\0')) {
    return 2;
  }
  cVar3 = FUN_140ea53f0(param_1,0);
  if (cVar3 != '\0') {
    pcVar7 = *(char **)(param_1 + 0x4c0);
    pcVar8 = pcVar7 + (longlong)*(int *)(param_1 + 0x4c8) * 0xf0;
    for (; pcVar7 != pcVar8; pcVar7 = pcVar7 + 0xf0) {
      if (*pcVar7 == '\0') {
        if (pcVar7 != (char *)0x0) {
          cVar3 = FUN_142d52a00(pcVar7 + 0x40);
          if (cVar3 != '\0') {
            uVar6 = FUN_142d52a20(pcVar7 + 0x40);
            uVar6 = FArchive::operator<<(uVar6);
            fVar12 = (float)FUN_142d5fea0(uVar6);
            goto LAB_140eabb95;
          }
        }
        break;
      }
    }
    fVar12 = 1.0;
LAB_140eabb95:
    if (fVar12 <= 0.0) {
      return 2;
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = DAT_146b33f38;
  lVar10 = DAT_146b33f38 + 0x60;
  lVar4 = FWeakObjectPtr::Get(lVar10);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar5 + 0x68)) && (*(longlong *)(lVar5 + 0x70) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar10,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar5 + 0x68) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(lVar10);
      if (lVar4 != 0) goto LAB_140eabc7c;
    }
  }
  else {
LAB_140eabc7c:
    lVar5 = FUN_142e778a0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140eabcb5;
  }
  lVar4 = 0;
LAB_140eabcb5:
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar6 = UScrollBox::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar6);
    if ((lVar5 != 0) && (lVar4 != 0)) {
      fVar12 = *(float *)(lVar4 + 0x68);
      fVar13 = (float)FUN_142d1b990(lVar5);
      fVar13 = fVar13 * *(float *)(lVar4 + 0x40);
      if (fVar13 <= 0.0) {
        return 0;
      }
      bVar9 = 1;
      fVar16 = 0.0;
      do {
        if (bVar9 != 2) {
          if (bVar9 == *(byte *)(param_1 + 0x6b5)) {
            fVar15 = *(float *)(param_1 + 0x6b8);
          }
          else {
            fVar15 = 0.0;
          }
          if (bVar9 == 1) {
            lVar5 = *(longlong *)(lVar4 + 0x58);
LAB_140eabd8b:
            if (lVar5 == 0) goto LAB_140eabde9;
            lVar5 = FUN_142dcec90(param_1);
            fVar14 = 0.0;
            if (lVar5 != 0) {
              lVar10 = *(longlong *)(lVar5 + 0x38);
              lVar5 = (longlong)*(int *)(lVar5 + 0x40) * 0x1c0 + lVar10;
              for (; lVar10 != lVar5; lVar10 = lVar10 + 0x1c0) {
                fVar14 = fVar14 + *(float *)(lVar10 + 0x1b0);
              }
            }
            fVar15 = (fVar14 + fVar15) / fVar13;
            if (fVar15 < 0.0) goto LAB_140eabde9;
            if (1.0 <= fVar15) {
              fVar15 = 1.0;
            }
          }
          else {
            if (bVar9 == 3) {
              lVar5 = *(longlong *)(lVar4 + 0x48);
              goto LAB_140eabd8b;
            }
            if (bVar9 == 4) {
              lVar5 = *(longlong *)(lVar4 + 0x50);
              goto LAB_140eabd8b;
            }
            if (bVar9 == 5) {
              lVar5 = *(longlong *)(lVar4 + 0x60);
              goto LAB_140eabd8b;
            }
LAB_140eabde9:
            fVar15 = 0.0;
          }
          if ((fVar16 < fVar15) && (fVar12 < fVar15)) {
            fVar16 = fVar15;
            bVar11 = bVar9;
          }
        }
        bVar9 = bVar9 + 1;
        if (5 < bVar9) {
          return bVar11;
        }
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 140eabe60 FUN_140eabe60 body=157 status=ok
// SIG undefined FUN_140eabe60(void)

undefined8 FUN_140eabe60(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(param_1 + 0x4c0);
  pcVar3 = pcVar4 + (longlong)*(int *)(param_1 + 0x4c8) * 0xf0;
  do {
    if (pcVar4 == pcVar3) {
LAB_140eabea1:
      if (param_2 != '\0') {
        return 0;
      }
      return 0x3f800000;
    }
    if (*pcVar4 == param_2) {
      if (pcVar4 != (char *)0x0) {
        cVar1 = FUN_142d52a00(pcVar4 + 0x40);
        if (cVar1 != '\0') {
          uVar2 = FUN_142d52a20(pcVar4 + 0x40);
          uVar2 = FArchive::operator<<(uVar2);
          uVar2 = FUN_142d5fea0(uVar2);
          return uVar2;
        }
      }
      goto LAB_140eabea1;
    }
    pcVar4 = pcVar4 + 0xf0;
  } while( true );
}



// FUNCTION 140eabf00 FUN_140eabf00 body=147 status=ok
// SIG undefined FUN_140eabf00(void)

float FUN_140eabf00(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x3ae) == '\x02') {
    return 1.0;
  }
  if ((*(char *)(param_1 + 0x3ae) == '\x01') && (fVar2 = *(float *)(param_1 + 0x630), 0.0 < fVar2))
  {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
      fVar2 = *(float *)(param_1 + 0x630);
    }
    fVar2 = (*(float *)(lVar1 + 0x790) - *(float *)(param_1 + 0x62c)) / fVar2;
    if (0.0 <= fVar2) {
      if (1.0 <= fVar2) {
        fVar2 = 1.0;
      }
      return fVar2;
    }
  }
  return 0.0;
}



// FUNCTION 140eabfa0 FUN_140eabfa0 body=181 status=ok
// SIG undefined FUN_140eabfa0(void)

float FUN_140eabfa0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  if ((byte)(*(char *)(param_1 + 0x3ae) - 1U) < 2) {
    return 0.0;
  }
  if (*(char *)(param_1 + 0x3ae) != '\x03') {
    return 1.0;
  }
  fVar2 = *(float *)(param_1 + 0x630);
  if (fVar2 <= 0.0) {
    return 1.0;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
    fVar2 = *(float *)(param_1 + 0x630);
  }
  fVar2 = (*(float *)(lVar1 + 0x790) - *(float *)(param_1 + 0x62c)) / fVar2;
  if (fVar2 < 0.0) {
    return 0.0;
  }
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  return fVar2;
}



// FUNCTION 140eac060 FUN_140eac060 body=97 status=ok
// SIG undefined FUN_140eac060(void)

undefined8 FUN_140eac060(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
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
      return *(undefined8 *)(lVar2 + 0x1850);
    }
  }
  return 0;
}



// FUNCTION 140eac0d0 GetMinCrosshairsScale body=9 status=ok
// SIG undefined GetMinCrosshairsScale(void)

undefined4 USBZGameUserSettings::GetMinCrosshairsScale(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1fc);
}



// FUNCTION 140eac0e0 FUN_140eac0e0 body=9 status=ok
// SIG undefined FUN_140eac0e0(void)

undefined4 FUN_140eac0e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1f8);
}



// FUNCTION 140eac0f0 FUN_140eac0f0 body=107 status=ok
// SIG undefined FUN_140eac0f0(void)

undefined8 FUN_140eac0f0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = FUN_142ceeb40(*(longlong *)(param_1 + 0x28),0);
    if (lVar2 != 0) {
      lVar3 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000140eac14f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*(longlong *)(lVar2 + 0x8e0) + 0x10))();
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 140eac160 FUN_140eac160 body=46 status=ok
// SIG undefined FUN_140eac160(void)

undefined8 FUN_140eac160(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  while( true ) {
    if (lVar1 != 0) {
      return *(undefined8 *)(param_1 + 0xb0);
    }
    param_1 = *(longlong *)(param_1 + 0x30);
    if (param_1 == 0) break;
    lVar1 = *(longlong *)(param_1 + 0xb0);
  }
  return 0;
}



// FUNCTION 140eac190 FUN_140eac190 body=390 status=ok
// SIG undefined FUN_140eac190(void)

undefined8 FUN_140eac190(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  lVar4 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar3 = UScrollBox::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = DAT_146b33f38;
  lVar7 = DAT_146b33f38 + 0x60;
  lVar5 = FWeakObjectPtr::Get(lVar7);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar6 + 0x68)) && (*(longlong *)(lVar6 + 0x70) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar7,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar6 + 0x68) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar7);
      if (lVar5 != 0) goto LAB_140eac271;
    }
LAB_140eac2a7:
    lVar5 = 0;
  }
  else {
LAB_140eac271:
    lVar6 = FUN_142e778a0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140eac2a7;
  }
  if ((lVar4 != 0) && (lVar5 != 0)) {
    fVar8 = (float)FUN_142d1b990(lVar4);
    fVar8 = fVar8 * *(float *)(lVar5 + 0x40);
    if (0.0 < fVar8) {
      uVar3 = FUN_140eafd80(param_1,param_2);
      uVar10 = (undefined4)((ulonglong)uVar3 >> 0x20);
      fVar8 = (float)uVar3 / fVar8;
      fVar9 = 0.0;
      uVar11 = 0;
      if ((0.0 <= fVar8) && (fVar9 = fVar8, uVar11 = uVar10, 1.0 <= fVar8)) {
        fVar9 = 1.0;
      }
      goto LAB_140eac302;
    }
  }
  fVar9 = 0.0;
  uVar11 = 0;
LAB_140eac302:
  return CONCAT44(uVar11,fVar9);
}



// FUNCTION 140eac320 FUN_140eac320 body=169 status=ok
// SIG undefined FUN_140eac320(void)

ulonglong FUN_140eac320(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar6 = *(longlong **)(param_1 + 0x50);
  if (plVar6 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_142e49950();
    plVar3 = plVar6;
    do {
      if (plVar3 == plVar2) goto LAB_140eac350;
      plVar3 = (longlong *)plVar3[6];
    } while (plVar3 != (longlong *)0x0);
  }
  plVar6 = (longlong *)0x0;
LAB_140eac350:
  lVar7 = plVar6[0x1f];
  if (lVar7 == 0) {
    uVar4 = (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar7 = plVar6[0x1f];
    if (lVar7 == 0) goto LAB_140eac3bc;
  }
  lVar5 = FUN_1414193b0();
  iVar1 = *(int *)(lVar5 + 0x90);
  uVar4 = (longlong)iVar1;
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < iVar1) ||
     (uVar4 = *(ulonglong *)(*(longlong *)(lVar7 + 0x10) + 0x88),
     *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  if ((char)uVar4 != '\0') {
    return (ulonglong)*(byte *)(lVar7 + 0x131);
  }
LAB_140eac3bc:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140eac3d0 FUN_140eac3d0 body=62 status=ok
// SIG undefined FUN_140eac3d0(void)

undefined8 * FUN_140eac3d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x29;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Adds the ammo type to the balance state.",0x52);
  return param_2;
}



// FUNCTION 140eac440 FUN_140eac440 body=186 status=ok
// SIG undefined FUN_140eac440(void)

undefined8 * FUN_140eac440(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 local_res18 [16];
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x2c0))(plVar1,local_res18);
    if (*plVar1 == 0) {
      *param_2 = 0;
      return param_2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146871c20) {
    _Init_thread_header(&DAT_146871c20);
    if (DAT_146871c20 == -1) {
      FName::FName(&DAT_146871c18,L"HasInvalidSpawner",1);
      _Init_thread_footer(&DAT_146871c20);
    }
  }
  *param_2 = DAT_146871c18;
  return param_2;
}



// FUNCTION 140eac520 FUN_140eac520 body=613 status=ok
// SIG undefined FUN_140eac520(void)

void FUN_140eac520(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146871df8) && (_Init_thread_header(&DAT_146871df8), DAT_146871df8 == -1)) {
    uVar1 = AMapFog::GetPrivateStaticClass();
    AMapFog::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CraneRecord",1);
    DAT_146871df0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871df8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871df0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146871df0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871df0 + 0x30));
  }
  if ((*piVar5 < DAT_146871e08) && (_Init_thread_header(&DAT_146871e08), DAT_146871e08 == -1)) {
    uVar1 = AMapFog::GetPrivateStaticClass();
    AMapFog::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SplineComponent",1);
    DAT_146871e00 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871e08);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871e00 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146871e00 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871e00 + 0x30));
  }
  if ((*piVar5 < DAT_146871e18) && (_Init_thread_header(&DAT_146871e18), DAT_146871e18 == -1)) {
    uVar1 = AMapFog::GetPrivateStaticClass();
    AMapFog::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedCurrentPosition",1);
    DAT_146871e10 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871e18);
  }
  if (0 < *(int *)(DAT_146871e10 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146871e10 + 0x40) + (short)iVar4;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146871e10 + 0x30));
  }
  return;
}



// FUNCTION 140eac790 FUN_140eac790 body=1476 status=ok
// SIG undefined FUN_140eac790(void)

void FUN_140eac790(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_28 [2];
  undefined8 local_24;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146871d78) && (_Init_thread_header(&DAT_146871d78), DAT_146871d78 == -1)) {
    uVar1 = FUN_141477fa0();
    FUN_141477fa0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PresentationManager",1);
    DAT_146871d70 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871d78);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871d70 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871d70 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871d70 + 0x30));
  }
  if ((*piVar5 < DAT_146871d88) && (_Init_thread_header(&DAT_146871d88), DAT_146871d88 == -1)) {
    uVar1 = FUN_141477fa0();
    FUN_141477fa0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ActiveResourceEffects",1);
    DAT_146871d80 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871d88);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871d80 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871d80 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871d80 + 0x30));
  }
  if ((*piVar5 < DAT_146871d98) && (_Init_thread_header(&DAT_146871d98), DAT_146871d98 == -1)) {
    uVar1 = FUN_141477fa0();
    FUN_141477fa0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DestructibleSyncID",1);
    DAT_146871d90 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871d98);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871d90 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871d90 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871d90 + 0x30));
  }
  if ((*piVar5 < DAT_146871da8) && (_Init_thread_header(&DAT_146871da8), DAT_146871da8 == -1)) {
    uVar1 = FUN_141477fa0();
    FUN_141477fa0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RepFreezeData",1);
    DAT_146871da0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871da8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871da0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871da0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871da0 + 0x30));
  }
  if ((*piVar5 < DAT_146871db8) && (_Init_thread_header(&DAT_146871db8), DAT_146871db8 == -1)) {
    uVar1 = FUN_141477fa0();
    FUN_141477fa0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bFreezePauseAnims",1);
    DAT_146871db0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871db8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871db0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871db0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871db0 + 0x30));
  }
  if ((*piVar5 < DAT_146871dc8) && (_Init_thread_header(&DAT_146871dc8), DAT_146871dc8 == -1)) {
    uVar1 = FUN_141477fa0();
    FUN_141477fa0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ShieldEffectState",1);
    DAT_146871dc0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871dc8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871dc0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871dc0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871dc0 + 0x30));
  }
  if ((*piVar5 < DAT_146871dd8) && (_Init_thread_header(&DAT_146871dd8), DAT_146871dd8 == -1)) {
    uVar1 = FUN_141477fa0();
    FUN_141477fa0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CSBoosterStatusState",1);
    DAT_146871dd0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871dd8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871dd0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871dd0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871dd0 + 0x30));
  }
  if ((*piVar5 < DAT_146871de8) && (_Init_thread_header(&DAT_146871de8), DAT_146871de8 == -1)) {
    uVar1 = FUN_141477fa0();
    FUN_141477fa0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"StreamerBoosterStatusState",1);
    DAT_146871de0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871de8);
  }
  if (0 < *(int *)(DAT_146871de0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871de0 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146871de0 + 0x30));
  }
  FUN_14233e8d0(param_1,param_2);
  return;
}



// FUNCTION 140eacd60 FUN_140eacd60 body=1826 status=ok
// SIG undefined FUN_140eacd60(void)

void FUN_140eacd60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146871c40) && (_Init_thread_header(&DAT_146871c40), DAT_146871c40 == -1)) {
    uVar1 = UTextBlock::GetPrivateStaticClass();
    UTextBlock::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxSpeed",1);
    DAT_146871c38 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871c40);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871c38 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871c38 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871c38 + 0x30));
  }
  if ((*piVar5 < DAT_146871c50) && (_Init_thread_header(&DAT_146871c50), DAT_146871c50 == -1)) {
    uVar1 = UTextBlock::GetPrivateStaticClass();
    UTextBlock::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Acceleration",1);
    DAT_146871c48 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871c50);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871c48 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871c48 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871c48 + 0x30));
  }
  if ((*piVar5 < DAT_146871c60) && (_Init_thread_header(&DAT_146871c60), DAT_146871c60 == -1)) {
    uVar1 = UTextBlock::GetPrivateStaticClass();
    UTextBlock::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SplineComponent",1);
    DAT_146871c58 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871c60);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871c58 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871c58 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871c58 + 0x30));
  }
  if ((*piVar5 < DAT_146871c70) && (_Init_thread_header(&DAT_146871c70), DAT_146871c70 == -1)) {
    uVar1 = UTextBlock::GetPrivateStaticClass();
    UTextBlock::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CurrentSpeed",1);
    DAT_146871c68 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871c70);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871c68 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871c68 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871c68 + 0x30));
  }
  if ((*piVar5 < DAT_146871c80) && (_Init_thread_header(&DAT_146871c80), DAT_146871c80 == -1)) {
    uVar1 = UTextBlock::GetPrivateStaticClass();
    UTextBlock::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CurrentDistanceOnSpline",1);
    DAT_146871c78 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871c80);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871c78 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871c78 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871c78 + 0x30));
  }
  if ((*piVar5 < DAT_146871c90) && (_Init_thread_header(&DAT_146871c90), DAT_146871c90 == -1)) {
    uVar1 = UTextBlock::GetPrivateStaticClass();
    UTextBlock::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bMoving",1);
    DAT_146871c88 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871c90);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871c88 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871c88 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871c88 + 0x30));
  }
  if ((*piVar5 < DAT_146871ca0) && (_Init_thread_header(&DAT_146871ca0), DAT_146871ca0 == -1)) {
    uVar1 = UTextBlock::GetPrivateStaticClass();
    UTextBlock::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bOnSpline",1);
    DAT_146871c98 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871ca0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871c98 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871c98 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871c98 + 0x30));
  }
  if ((*piVar5 < DAT_146871cb0) && (_Init_thread_header(&DAT_146871cb0), DAT_146871cb0 == -1)) {
    uVar1 = UTextBlock::GetPrivateStaticClass();
    UTextBlock::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bReverse",1);
    DAT_146871ca8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871cb0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871ca8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871ca8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871ca8 + 0x30));
  }
  if ((*piVar5 < DAT_146871cc0) && (_Init_thread_header(&DAT_146871cc0), DAT_146871cc0 == -1)) {
    uVar1 = UTextBlock::GetPrivateStaticClass();
    UTextBlock::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bUseMinSpeed",1);
    DAT_146871cb8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871cc0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871cb8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871cb8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871cb8 + 0x30));
  }
  if ((*piVar5 < DAT_146871cd0) && (_Init_thread_header(&DAT_146871cd0), DAT_146871cd0 == -1)) {
    uVar1 = UTextBlock::GetPrivateStaticClass();
    UTextBlock::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MinSpeed",1);
    DAT_146871cc8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871cd0);
  }
  if (0 < *(int *)(DAT_146871cc8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871cc8 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146871cc8 + 0x30));
  }
  return;
}



// FUNCTION 140ead490 FUN_140ead490 body=1126 status=ok
// SIG undefined FUN_140ead490(void)

void FUN_140ead490(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146871ce0) && (_Init_thread_header(&DAT_146871ce0), DAT_146871ce0 == -1)) {
    uVar1 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    UMaterialInstanceDynamic::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"VelocityCurrent",1);
    DAT_146871cd8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871ce0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871cd8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871cd8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871cd8 + 0x30));
  }
  if ((*piVar5 < DAT_146871cf0) && (_Init_thread_header(&DAT_146871cf0), DAT_146871cf0 == -1)) {
    uVar1 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    UMaterialInstanceDynamic::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ImpulseThisFrameAccumulator",1);
    DAT_146871ce8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871cf0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871ce8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871ce8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871ce8 + 0x30));
  }
  if ((*piVar5 < DAT_146871d00) && (_Init_thread_header(&DAT_146871d00), DAT_146871d00 == -1)) {
    uVar1 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    UMaterialInstanceDynamic::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TimeWithinSleepThreshold",1);
    DAT_146871cf8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871d00);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871cf8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871cf8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871cf8 + 0x30));
  }
  if ((*piVar5 < DAT_146871d10) && (_Init_thread_header(&DAT_146871d10), DAT_146871d10 == -1)) {
    uVar1 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    UMaterialInstanceDynamic::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxSpeed",1);
    DAT_146871d08 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871d10);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871d08 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871d08 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871d08 + 0x30));
  }
  if ((*piVar5 < DAT_146871d20) && (_Init_thread_header(&DAT_146871d20), DAT_146871d20 == -1)) {
    uVar1 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    UMaterialInstanceDynamic::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MinSpeed",1);
    DAT_146871d18 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871d20);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871d18 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871d18 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871d18 + 0x30));
  }
  if ((*piVar5 < DAT_146871d30) && (_Init_thread_header(&DAT_146871d30), DAT_146871d30 == -1)) {
    uVar1 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    UMaterialInstanceDynamic::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SplineComponentHolder",1);
    DAT_146871d28 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871d30);
  }
  if (0 < *(int *)(DAT_146871d28 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146871d28 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146871d28 + 0x30));
  }
  return;
}



// FUNCTION 140ead900 FUN_140ead900 body=433 status=ok
// SIG undefined FUN_140ead900(void)

void FUN_140ead900(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140ead490();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146871d40) && (_Init_thread_header(&DAT_146871d40), DAT_146871d40 == -1)) {
    uVar1 = UUGStreamInteractConnectionUW::GetPrivateStaticClass();
    UUGStreamInteractConnectionUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CartInFront",1);
    DAT_146871d38 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871d40);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146871d38 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146871d38 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871d38 + 0x30));
  }
  if ((*piVar5 < DAT_146871d50) && (_Init_thread_header(&DAT_146871d50), DAT_146871d50 == -1)) {
    uVar1 = UUGStreamInteractConnectionUW::GetPrivateStaticClass();
    UUGStreamInteractConnectionUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CartBehind",1);
    DAT_146871d48 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871d50);
  }
  if (0 < *(int *)(DAT_146871d48 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146871d48 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146871d48 + 0x30));
  }
  return;
}



// FUNCTION 140eadad0 FUN_140eadad0 body=173 status=ok
// SIG undefined FUN_140eadad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140eadad0(longlong param_1,undefined8 *param_2,float param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0x202) != '\0') {
    param_3 = -param_3;
  }
  param_3 = param_3 + *(float *)(param_1 + 0x1fc);
  if (*(char *)(param_1 + 500) != '\0') {
    fVar3 = *(float *)(param_1 + 0x1f0);
    if (param_3 < 0.0) {
      param_3 = param_3 + fVar3;
    }
    if (fVar3 < param_3) {
      param_3 = param_3 - fVar3;
    }
  }
  fVar3 = 0.0;
  if ((0.0 <= param_3) &&
     (fVar3 = *(float *)(param_1 + 0x1f0), param_3 <= *(float *)(param_1 + 0x1f0))) {
    fVar3 = param_3;
  }
  if (*(longlong *)(param_1 + 0x1e8) == 0) {
    local_10 = DAT_1468b5d98;
    puVar2 = &local_18;
    local_18 = _DAT_1468b5d90;
  }
  else {
    puVar2 = (undefined8 *)FUN_1423aee90(*(longlong *)(param_1 + 0x1e8),&local_18,fVar3,1);
  }
  uVar1 = *(undefined4 *)(puVar2 + 1);
  *param_2 = *puVar2;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140eadb80 FUN_140eadb80 body=71 status=ok
// SIG undefined FUN_140eadb80(void)

void FUN_140eadb80(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar1 = UNativeUserListEntry::GetPrivateStaticClass();
    cVar2 = UClass::ImplementsInterface(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10),uVar1)
    ;
    if (cVar2 != '\0') {
      FUN_142f78e20(*(undefined8 *)(param_1 + 0x48),param_2);
    }
  }
  return;
}



// FUNCTION 140eadbd0 FUN_140eadbd0 body=211 status=ok
// SIG undefined FUN_140eadbd0(void)

undefined8 * FUN_140eadbd0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar2 = (undefined8 *)FUN_142eb6e10(param_1 + 0x248,param_3);
  *param_2 = 0;
  iVar4 = *(int *)(puVar2 + 1);
  puVar2 = (undefined8 *)*puVar2;
  *(int *)(param_2 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar4,0);
  puVar3 = (undefined8 *)*param_2;
  do {
    *puVar3 = 0;
    iVar1 = *(int *)(puVar2 + 1);
    _Src = (void *)*puVar2;
    *(int *)(puVar3 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
    }
    puVar3 = puVar3 + 2;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return param_2;
}



// FUNCTION 140eadcb0 FUN_140eadcb0 body=677 status=ok
// SIG undefined FUN_140eadcb0(void)

float FUN_140eadcb0(longlong param_1,float param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong local_48;
  undefined8 local_40;
  
  if (*(char *)(param_1 + 0x202) != '\0') {
    param_2 = -param_2;
  }
  param_2 = param_2 + *(float *)(param_1 + 0x1fc);
  if (param_2 < 0.0) {
    if (*(char *)(param_1 + 500) == '\0') {
      if (param_3 == '\0') goto LAB_140eadd36;
      *(undefined1 *)(param_1 + 0x200) = 0;
    }
    else {
      param_2 = param_2 + *(float *)(param_1 + 0x1f0);
    }
    if (param_3 != '\0') {
      local_40 = *(undefined8 *)(param_1 + 0x118);
      local_48 = param_1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x178,&local_48);
    }
  }
LAB_140eadd36:
  if (*(float *)(param_1 + 0x1f0) < param_2) {
    if (*(char *)(param_1 + 500) == '\0') {
      if (param_3 == '\0') goto LAB_140eadf18;
      *(undefined1 *)(param_1 + 0x200) = 0;
    }
    else {
      param_2 = param_2 - *(float *)(param_1 + 0x1f0);
    }
    if (param_3 == '\0') goto LAB_140eadf18;
    local_40 = *(undefined8 *)(param_1 + 0x118);
    local_48 = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x178,&local_48);
  }
  if (param_3 != '\0') {
    fVar5 = (float)FUN_1423aead0(*(undefined8 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1fc));
    fVar6 = (float)FUN_1423aead0(*(undefined8 *)(param_1 + 0x1e8),param_2);
    fVar7 = *(float *)(param_1 + 0x1a8);
    if (*(char *)(param_1 + 0x202) == '\0') {
      if ((fVar5 < fVar7) && (fVar7 <= fVar6)) {
        local_40 = *(undefined8 *)(param_1 + 0x118);
        local_48 = param_1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x188,&local_48);
      }
      lVar4 = *(longlong *)(param_1 + 0x1b0);
      lVar1 = lVar4 + (longlong)*(int *)(param_1 + 0x1b8) * 0x18;
      for (; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
        fVar7 = *(float *)(lVar4 + 0x10);
        if ((fVar7 < param_2) &&
           (*(float *)(param_1 + 0x1fc) <= fVar7 && fVar7 != *(float *)(param_1 + 0x1fc))) {
          uVar2 = *(undefined8 *)(param_1 + 0x118);
          uVar3 = FString::FString(&local_48,lVar4);
          FUN_140ea3ac0(param_1 + 0x198,param_1,uVar2,uVar3);
        }
      }
    }
    else {
      if ((fVar6 < fVar7) && (fVar7 <= fVar5)) {
        local_40 = *(undefined8 *)(param_1 + 0x118);
        local_48 = param_1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x188,&local_48);
      }
      lVar4 = *(longlong *)(param_1 + 0x1b0);
      lVar1 = lVar4 + (longlong)*(int *)(param_1 + 0x1b8) * 0x18;
      for (; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
        if ((param_2 < *(float *)(lVar4 + 0x10)) &&
           (*(float *)(lVar4 + 0x10) < *(float *)(param_1 + 0x1fc))) {
          uVar2 = *(undefined8 *)(param_1 + 0x118);
          uVar3 = FString::FString(&local_48,lVar4);
          FUN_140ea3ac0(param_1 + 0x198,param_1,uVar2,uVar3);
        }
      }
    }
  }
LAB_140eadf18:
  if (0.0 <= param_2) {
    fVar7 = *(float *)(param_1 + 0x1f0);
    if (param_2 <= *(float *)(param_1 + 0x1f0)) {
      fVar7 = param_2;
    }
    return fVar7;
  }
  return 0.0;
}



// FUNCTION 140eadf60 FUN_140eadf60 body=471 status=ok
// SIG undefined FUN_140eadf60(void)

ulonglong FUN_140eadf60(longlong param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  float fVar9;
  ulonglong uVar10;
  
  if (param_2 == '\0') {
    return 0;
  }
  uVar10 = 0;
  if (param_2 == '\x02') {
    pcVar6 = *(char **)(param_1 + 0x4c0);
    pcVar7 = pcVar6 + (longlong)*(int *)(param_1 + 0x4c8) * 0xf0;
    while( true ) {
      if (pcVar6 == pcVar7) {
        return 0;
      }
      if (*pcVar6 == '\0') break;
      pcVar6 = pcVar6 + 0xf0;
    }
    if (pcVar6 == (char *)0x0) {
      return 0;
    }
    cVar2 = FUN_142d52a00(pcVar6 + 0x40);
    if (cVar2 == '\0') {
      return 0;
    }
    uVar3 = FUN_142d52a20(pcVar6 + 0x40);
    uVar3 = FArchive::operator<<(uVar3);
    fVar9 = (float)FUN_142d5fea0(uVar3);
    return (ulonglong)(uint)(1.0 - fVar9);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = DAT_146b33f38;
  lVar8 = DAT_146b33f38 + 0x60;
  lVar4 = FWeakObjectPtr::Get(lVar8);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar5 + 0x68)) {
      return 0;
    }
    if (*(longlong *)(lVar5 + 0x70) == 0) {
      return 0;
    }
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar8,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar5 + 0x68) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar8);
    if (lVar4 == 0) {
      return 0;
    }
  }
  lVar5 = FUN_142e778a0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if (param_2 == '\x01') {
      uVar3 = *(undefined8 *)(lVar4 + 0x58);
    }
    else if (param_2 == '\x03') {
      uVar3 = *(undefined8 *)(lVar4 + 0x48);
    }
    else if (param_2 == '\x04') {
      uVar3 = *(undefined8 *)(lVar4 + 0x50);
    }
    else {
      if (param_2 != '\x05') {
        return 0;
      }
      uVar3 = *(undefined8 *)(lVar4 + 0x60);
    }
    uVar10 = FUN_140eac190(param_1,uVar3);
  }
  return uVar10;
}



// FUNCTION 140eae140 FUN_140eae140 body=168 status=ok
// SIG undefined FUN_140eae140(void)

int FUN_140eae140(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_28 [16];
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    iVar3 = 0;
    iVar4 = 0;
    lVar1 = *param_2;
    if (0 < *(int *)(lVar1 + 0x10)) {
      lVar5 = 0;
      do {
        FUN_1407bc590(local_28,param_2,*(undefined8 *)(*(longlong *)(*param_2 + 8) + 8 + lVar5));
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2a0))
                          (*(longlong **)(param_1 + 0x30),local_28);
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 0x28;
        iVar3 = iVar3 + iVar2;
      } while (iVar4 < *(int *)(lVar1 + 0x10));
    }
    return iVar3;
  }
  return 0;
}



// FUNCTION 140eae1f0 FUN_140eae1f0 body=896 status=ok
// SIG undefined FUN_140eae1f0(void)

longlong FUN_140eae1f0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *local_res8;
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  
  FUN_1407ca120();
  lVar5 = (**(code **)(*param_1 + 0x378))(param_1);
  if ((lVar5 != 0) &&
     ((lVar6 = *(longlong *)(lVar5 + 0x38), lVar6 != 0 ||
      ((*(longlong *)(lVar5 + 0x30) != 0 && (lVar6 = FUN_140cb9700(), lVar6 != 0)))))) {
    plVar3 = *(longlong **)(lVar6 + 0x48);
    iVar2 = *(int *)(lVar6 + 0x50);
    if (plVar3 != plVar3 + (longlong)iVar2 * 5) {
      local_res8 = plVar3 + 3;
      do {
        plVar12 = (longlong *)*local_res8;
        plVar13 = plVar12 + (longlong)(int)local_res8[1] * 8;
        for (; plVar12 != plVar13; plVar12 = plVar12 + 8) {
          lVar5 = *plVar12;
          if (lVar5 != 0) {
            lVar6 = FUN_1430e5bb0();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              plVar14 = *(longlong **)(lVar5 + 0x208);
              plVar1 = plVar14 + *(int *)(lVar5 + 0x210);
              for (; plVar14 != plVar1; plVar14 = plVar14 + 1) {
                plVar10 = (longlong *)*plVar14;
                if (plVar10 != (longlong *)0x0) {
                  lVar5 = FUN_1414943e0();
                  if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                      lVar5 + 0x88)) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if (bVar4) {
                    puVar7 = (undefined8 *)(**(code **)(*plVar10 + 0x2d0))(plVar10,&local_58);
                    iVar11 = *(int *)(puVar7 + 1);
                    if (iVar11 != 0) {
                      iVar8 = *(int *)(param_2 + 200);
                      if (*(int *)(param_2 + 0xcc) < iVar8 + iVar11) {
                        TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>
                        ::ResizeTo(param_2);
                        iVar8 = *(int *)(param_2 + 200);
                      }
                      lVar5 = *(longlong *)(param_2 + 0xc0);
                      if (*(longlong *)(param_2 + 0xc0) == 0) {
                        lVar5 = param_2;
                      }
                      _guard_xfg_dispatch_icall_nop
                                ((void *)(lVar5 + (longlong)iVar8 * 0x18),(void *)*puVar7,
                                 (longlong)iVar11 * 0x18);
                      *(undefined4 *)(puVar7 + 1) = 0;
                      *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar11;
                    }
                    if (local_50 != 0) {
                      plVar9 = (longlong *)(local_58 + 8);
                      iVar11 = local_50;
                      do {
                        if (*plVar9 != 0) {
                          FMemory::Free();
                        }
                        plVar9 = plVar9 + 3;
                        iVar11 = iVar11 + -1;
                      } while (iVar11 != 0);
                    }
                    if (local_58 != 0) {
                      FMemory::Free();
                    }
                  }
                  lVar5 = FUN_141495ba0();
                  if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                      lVar5 + 0x88)) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if (bVar4) {
                    puVar7 = (undefined8 *)FUN_141223d20(plVar10,&local_48);
                    iVar11 = *(int *)(puVar7 + 1);
                    if (iVar11 != 0) {
                      iVar8 = *(int *)(param_2 + 200);
                      if (*(int *)(param_2 + 0xcc) < iVar8 + iVar11) {
                        TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>
                        ::ResizeTo(param_2);
                        iVar8 = *(int *)(param_2 + 200);
                      }
                      lVar5 = *(longlong *)(param_2 + 0xc0);
                      if (*(longlong *)(param_2 + 0xc0) == 0) {
                        lVar5 = param_2;
                      }
                      _guard_xfg_dispatch_icall_nop
                                ((void *)(lVar5 + (longlong)iVar8 * 0x18),(void *)*puVar7,
                                 (longlong)iVar11 * 0x18);
                      *(undefined4 *)(puVar7 + 1) = 0;
                      *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar11;
                    }
                    if (local_40 != 0) {
                      plVar10 = (longlong *)(local_48 + 8);
                      iVar11 = local_40;
                      do {
                        if (*plVar10 != 0) {
                          FMemory::Free();
                        }
                        plVar10 = plVar10 + 3;
                        iVar11 = iVar11 + -1;
                      } while (iVar11 != 0);
                    }
                    if (local_48 != 0) {
                      FMemory::Free();
                    }
                  }
                }
              }
            }
          }
        }
        plVar12 = local_res8 + 2;
        local_res8 = local_res8 + 5;
      } while (plVar12 != plVar3 + (longlong)iVar2 * 5);
    }
  }
  return param_2;
}



// FUNCTION 140eae570 FUN_140eae570 body=348 status=ok
// SIG undefined FUN_140eae570(void)

void FUN_140eae570(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int local_res8;
  
  TArray<FName,FDefaultAllocator>::operator=(param_2,param_1 + 0x750);
  iVar2 = (int)param_2[1];
  if (iVar2 != 0) {
    lVar3 = *param_2;
    local_res8 = 0;
    iVar7 = 0;
    cVar4 = FWeakObjectPtr::IsValid(lVar3);
    if ((cVar4 == '\0') || (cVar4 = FUN_140e96c30(param_1 + 0x760,lVar3), cVar4 == '\0')) {
      bVar10 = 1;
      iVar9 = 0;
      iVar8 = iVar7;
    }
    else {
      bVar10 = 0;
      iVar9 = 0;
      iVar7 = 0;
      iVar8 = 0;
    }
joined_r0x000140eae5fb:
    do {
      iVar7 = iVar7 + 1;
      if (iVar7 < iVar2) {
        lVar3 = *param_2 + (longlong)iVar7 * 8;
        cVar4 = FWeakObjectPtr::IsValid(lVar3);
        if (cVar4 != '\0') {
          lVar6 = *(longlong *)(param_1 + 0x760);
          lVar1 = lVar6 + (longlong)*(int *)(param_1 + 0x768) * 8;
          for (; lVar6 != lVar1; lVar6 = lVar6 + 8) {
            cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6,lVar3);
            if (cVar4 != '\0') {
              bVar5 = 0;
              goto LAB_140eae64e;
            }
          }
        }
        bVar5 = 1;
LAB_140eae64e:
        iVar9 = local_res8;
        if (bVar10 == bVar5) goto joined_r0x000140eae5fb;
      }
      if (bVar10 != 0) {
        if (iVar9 != iVar8) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 + (longlong)iVar9 * 8),
                     (void *)(*param_2 + (longlong)iVar8 * 8),(longlong)(iVar7 - iVar8) << 3);
        }
        iVar9 = iVar9 + (iVar7 - iVar8);
        local_res8 = iVar9;
      }
      bVar10 = bVar10 ^ 1;
      iVar8 = iVar7;
    } while (iVar7 < iVar2);
    *(int *)(param_2 + 1) = iVar9;
  }
  return;
}



// FUNCTION 140eae6d0 FUN_140eae6d0 body=160 status=ok
// SIG undefined FUN_140eae6d0(void)

undefined8 FUN_140eae6d0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_1413f82e0();
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
      uVar3 = FUN_140c453a0(param_2);
      return uVar3;
    }
    lVar2 = FUN_14148cad0();
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
      return *(undefined8 *)(param_2 + 0x660);
    }
  }
  return 0;
}



// FUNCTION 140eae790 FUN_140eae790 body=170 status=ok
// SIG undefined FUN_140eae790(void)

undefined8 * FUN_140eae790(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  FUN_1423b0180(*(undefined8 *)(param_1 + 0x1e8),&local_28,param_3,1);
  if (*(char *)(param_1 + 0x202) != '\0') {
    puVar1 = (uint *)FRotator::Vector(&local_28,local_18);
    local_30 = puVar1[2] ^ 0x80000000;
    local_34 = puVar1[1] ^ 0x80000000;
    local_38 = *puVar1 ^ 0x80000000;
    FVector::Rotation(&local_38,param_2);
    return param_2;
  }
  *param_2 = local_28;
  *(undefined4 *)(param_2 + 1) = local_20;
  return param_2;
}



// FUNCTION 140eae840 FUN_140eae840 body=225 status=ok
// SIG undefined FUN_140eae840(void)

longlong FUN_140eae840(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xe8);
  if (lVar2 != 0) {
    return lVar2;
  }
  if ((*(longlong *)(param_1 + 0xb0) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x118), lVar2 != 0)) {
    lVar3 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = *(longlong *)(lVar2 + 0x490), lVar2 != 0)) {
      lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar2 = *(longlong *)(lVar2 + 0x978);
        goto LAB_140eae908;
      }
    }
  }
  lVar2 = 0;
LAB_140eae908:
  FWeakObjectPtr::operator=(param_1 + 0xe8,lVar2);
  return lVar2;
}



// FUNCTION 140eae9a0 FUN_140eae9a0 body=495 status=ok
// SIG undefined FUN_140eae9a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140eae9a0(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined1 auStack_918 [32];
  code *local_8f8 [6];
  undefined8 local_8c8;
  undefined4 local_8b8;
  undefined1 local_8a8 [32];
  longlong local_888 [4];
  longlong *local_868;
  int local_858;
  undefined1 local_838 [2048];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_918;
  if (param_2 < *(int *)(param_1 + 0x220)) {
    uVar3 = 0;
    local_38 = (undefined1 *)0x0;
    local_30 = 0;
    local_8c8 = 0;
    local_8b8 = 0;
    lVar1 = *(longlong *)(param_1 + 0x218) + (longlong)param_2 * 0x18;
    local_8f8[0] = FUN_1407c3030;
    FUN_1407bbee0(local_8a8,param_3,local_8f8,0);
    FUN_140eaafb0(lVar1,local_838,local_8a8);
    if (*(float *)(lVar1 + 0x10) < 0.0) {
      iVar2 = rand();
      *(float *)(lVar1 + 0x10) = (float)iVar2 * 3.051851e-05;
    }
    iVar2 = FUN_1407d9c40(local_838,param_3,0);
    if ((iVar2 < 0) || ((int)local_30 <= iVar2)) {
      if (local_858 != 0) {
        plVar5 = local_888;
        if (local_868 != (longlong *)0x0) {
          plVar5 = local_868;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_868 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_38 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      puVar4 = local_838;
      if (local_38 != (undefined1 *)0x0) {
        puVar4 = local_38;
      }
      plVar5 = *(longlong **)(puVar4 + (longlong)iVar2 * 0x20);
      if (plVar5 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar5 + 0x2b8))(plVar5,param_3);
      }
      if (local_858 != 0) {
        plVar5 = local_888;
        if (local_868 != (longlong *)0x0) {
          plVar5 = local_868;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_868 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_38 != (undefined1 *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 140eaebf0 FUN_140eaebf0 body=105 status=ok
// SIG undefined FUN_140eaebf0(void)

longlong * FUN_140eaebf0(undefined8 param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < (int)param_3) {
    uVar2 = (ulonglong)param_3;
    do {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined1 *)((longlong)iVar1 + *param_2) = 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return param_2;
}



// FUNCTION 140eaec60 FUN_140eaec60 body=1088 status=ok
// SIG undefined FUN_140eaec60(void)

longlong * FUN_140eaec60(longlong param_1,longlong *param_2,int param_3)

{
  ulonglong uVar1;
  void *_Src;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 (*pauVar12) [16];
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  void *pvVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  int local_res20;
  undefined1 (*local_a0) [16];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 (*local_78) [16];
  int local_70;
  
  uVar20 = 0;
  local_88 = (void *)0x0;
  local_7c = 0;
  local_80 = param_3;
  if (0 < param_3) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_88);
  }
  pvVar19 = local_88;
  _guard_xfg_dispatch_icall_nop(local_88,0,(longlong)param_3);
  if (*(char *)(param_1 + 0x260) == '\0') {
    local_res20 = *(int *)(param_1 + 0x250);
  }
  else {
    local_res20 = *(int *)(param_1 + 0x264);
    iVar13 = *(int *)(param_1 + 0x268) - local_res20;
    if (iVar13 + 1 < 1) {
      if (param_3 <= local_res20) {
        local_res20 = param_3;
      }
    }
    else {
      iVar5 = rand();
      iVar5 = (int)((float)iVar5 * 3.051851e-05 * (float)(iVar13 + 1));
      if (iVar5 <= iVar13) {
        iVar13 = iVar5;
      }
      local_res20 = iVar13 + local_res20;
      if (param_3 <= local_res20) {
        local_res20 = param_3;
      }
    }
  }
  if (*(char *)(param_1 + 0x26c) != '\0') {
    if (*(int *)(param_1 + 0x278) == 0) goto LAB_140eaed73;
    lVar9 = *(longlong *)(param_1 + 0x270);
    fVar21 = 0.0;
    fVar22 = 0.0;
    lVar16 = lVar9 + (longlong)*(int *)(param_1 + 0x278) * 8;
    for (; lVar9 != lVar16; lVar9 = lVar9 + 8) {
      fVar22 = fVar22 + *(float *)(lVar9 + 4);
    }
    iVar13 = rand();
    iVar5 = *(int *)(param_1 + 0x278) + -1;
    uVar15 = uVar20;
    if (0 < iVar5) {
      pfVar7 = (float *)(*(longlong *)(param_1 + 0x270) + 4);
      uVar10 = uVar20;
      do {
        fVar21 = fVar21 + *pfVar7;
        if ((float)iVar13 * 3.051851e-05 * fVar22 < fVar21) break;
        uVar15 = (ulonglong)((int)uVar15 + 1);
        uVar10 = uVar10 + 1;
        pfVar7 = pfVar7 + 2;
      } while ((longlong)uVar10 < (longlong)iVar5);
    }
    local_res20 = *(int *)(*(longlong *)(param_1 + 0x270) + (longlong)(int)uVar15 * 8);
  }
  if (local_res20 != 0) {
    local_70 = *(int *)(param_1 + 0x250);
    lVar16 = (longlong)local_70;
    _Src = *(void **)(param_1 + 0x248);
    local_78 = (undefined1 (*) [16])0x0;
    if (local_70 != 0) {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
      _guard_xfg_dispatch_icall_nop(local_78,_Src,lVar16 << 4);
    }
    iVar13 = local_70;
    uVar15 = 0xffffffffffffffff;
    cVar3 = '\0';
    do {
      cVar4 = cVar3;
      uVar15 = uVar15 >> 1;
      cVar3 = cVar4 + -1;
    } while (0xffffffff < uVar15);
    pauVar12 = local_78 + local_70;
    if ((local_78 != pauVar12) && (local_a0 = local_78 + 1, local_a0 != pauVar12)) {
      uVar10 = 2;
      do {
        uVar1 = uVar10 - 1;
        do {
          uVar14 = uVar20;
          uVar17 = uVar20;
          if (uVar10 != 1) {
            do {
              do {
                uVar6 = std::_guard_xfg_dispatch_icall_nop();
              } while (uVar15 < uVar6);
              uVar14 = (uVar14 << (cVar4 - 2U & 0x3f)) * 2 | (ulonglong)uVar6;
              uVar17 = (uVar17 << (cVar4 - 2U & 0x3f)) * 2 | uVar15;
            } while (uVar17 < uVar1);
          }
        } while ((uVar17 / uVar10 <= uVar14 / uVar10) && (uVar17 % uVar10 != uVar1));
        uVar14 = uVar14 % uVar10;
        if (uVar14 != uVar1) {
          uVar2 = *(undefined8 *)(*local_a0 + 8);
          *local_a0 = local_78[uVar14];
          *(undefined8 *)local_78[uVar14] = *(undefined8 *)*local_a0;
          *(undefined8 *)(local_78[uVar14] + 8) = uVar2;
        }
        local_a0 = local_a0 + 1;
        uVar10 = uVar10 + 1;
        pvVar19 = local_88;
      } while (local_a0 != pauVar12);
    }
    uVar6 = 0;
    uVar15 = uVar20;
    do {
      uVar18 = (uint)uVar15;
      if ((local_res20 < 1) || (param_3 <= (int)uVar18)) break;
      puVar8 = *(uint **)(param_1 + 0x248);
      puVar11 = puVar8 + (longlong)*(int *)(param_1 + 0x250) * 4;
      for (; puVar8 != puVar11; puVar8 = puVar8 + 4) {
        if (*puVar8 == uVar18) {
          local_res20 = local_res20 + -1;
          *(undefined1 *)((longlong)(int)uVar18 + (longlong)pvVar19) = 1;
          uVar18 = uVar6;
          break;
        }
      }
      uVar6 = uVar18 + 1;
      uVar15 = (ulonglong)uVar6;
    } while ((int)uVar6 < 2);
    pauVar12 = local_78;
    if (0 < iVar13) {
      do {
        if (local_res20 < 1) break;
        iVar5 = *(int *)*pauVar12;
        if ((1 < iVar5) && (iVar5 < param_3)) {
          *(undefined1 *)((longlong)iVar5 + (longlong)pvVar19) = 1;
          local_res20 = local_res20 + -1;
        }
        uVar6 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar6;
        pauVar12 = pauVar12 + 1;
      } while ((int)uVar6 < iVar13);
    }
    *param_2 = (longlong)pvVar19;
    *(int *)(param_2 + 1) = local_80;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_7c;
    if (local_78 == (undefined1 (*) [16])0x0) {
      return param_2;
    }
    FMemory::Free(local_78);
    return param_2;
  }
LAB_140eaed73:
  *param_2 = (longlong)pvVar19;
  *(int *)(param_2 + 1) = local_80;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_7c;
  return param_2;
}



// FUNCTION 140eaf0a0 FUN_140eaf0a0 body=295 status=ok
// SIG undefined FUN_140eaf0a0(void)

undefined8 FUN_140eaf0a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float extraout_XMM0_Da;
  
  cVar1 = FUN_142dcfb60();
  if (((((cVar1 == '\0') && ((*(byte *)(param_1 + 0x6b4) & 0x20) == 0)) &&
       ((iVar2 = FUN_14233f450(param_1), iVar2 != 3 || (*(int *)(param_1 + 0x4b8) < 1)))) &&
      ((((*(int *)(param_1 + 0x5c0) < 1 && (*(float *)(param_1 + 0x5e0) <= 0.0)) &&
        (*(char *)(param_1 + 0x5f4) == '\0')) &&
       ((*(char *)(param_1 + 0x678) == '\0' && (*(float *)(param_1 + 0x690) <= 0.0)))))) &&
     (*(int *)(param_1 + 0x5b0) < 1)) {
    iVar2 = FUN_14233f450(param_1);
    if (iVar2 == 3) {
      lVar6 = *(longlong *)(param_1 + 0x4c0);
      lVar5 = (longlong)*(int *)(param_1 + 0x4c8) * 0xf0 + lVar6;
      if (lVar6 != lVar5) {
        lVar4 = lVar6 + 0x40;
        do {
          cVar1 = FUN_142d52a00(lVar4);
          if (cVar1 != '\0') {
            uVar3 = FUN_142d52a20(lVar4);
            uVar3 = FArchive::operator<<(uVar3);
            FUN_142d5fea0(uVar3);
            if (extraout_XMM0_Da < 1.0) {
              return 1;
            }
          }
          lVar6 = lVar6 + 0xf0;
          lVar4 = lVar4 + 0xf0;
        } while (lVar6 != lVar5);
      }
    }
    return 0;
  }
  return 1;
}



// FUNCTION 140eaf1d0 FUN_140eaf1d0 body=431 status=ok
// SIG undefined FUN_140eaf1d0(void)

undefined4 FUN_140eaf1d0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_108;
  longlong *local_100;
  undefined1 local_f8 [24];
  longlong local_e0;
  
  if (param_2 != 0) {
    local_res10 = 0;
    if ((*(longlong *)(param_1 + 0x8e0) != 0) &&
       (plVar3 = *(longlong **)(param_2 + 0x118), plVar3 != (longlong *)0x0)) {
      FUN_142c62180(local_f8);
      local_e0 = param_2;
      FUN_142c70760(param_2,&local_res10,*(undefined8 *)(param_1 + 0x8e0),local_f8);
      if (local_res10 != 0) {
        lVar5 = FUN_142e20fc0();
        for (lVar6 = local_res10; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
          if (lVar6 == lVar5) {
            local_res18 = FUN_142a07000();
            (**(code **)(*plVar3 + 0x628))(plVar3,local_res18);
            FUN_142c858a0(param_2,&local_108,local_res10,local_f8);
            if (local_108 == 0) goto LAB_140eaf31c;
            lVar6 = *(longlong *)(local_108 + 8);
            lVar5 = FUN_142e219b0();
            goto joined_r0x000140eaf2df;
          }
        }
      }
      uVar7 = 0;
      goto LAB_140eaf278;
    }
  }
  return 0;
joined_r0x000140eaf2df:
  if (lVar6 == 0) goto LAB_140eaf2ef;
  if (lVar6 == lVar5) {
    bVar4 = true;
    goto LAB_140eaf2f1;
  }
  lVar6 = *(longlong *)(lVar6 + 0x30);
  goto joined_r0x000140eaf2df;
LAB_140eaf2ef:
  bVar4 = false;
LAB_140eaf2f1:
  lVar6 = 0;
  if (bVar4) {
    lVar6 = local_108;
  }
  if ((lVar6 == 0) || (lVar6 = FUN_142c6f8e0(lVar6,1), lVar6 == 0)) {
LAB_140eaf31c:
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(lVar6 + 0x90);
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_100 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
LAB_140eaf278:
  FUN_142c63c50(local_f8);
  return uVar7;
}



// FUNCTION 140eaf380 FUN_140eaf380 body=244 status=ok
// SIG undefined FUN_140eaf380(void)

undefined8 * FUN_140eaf380(longlong *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float local_68;
  float local_64;
  float local_60;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [56];
  
  FUN_1407c3900(param_1,&local_68);
  lVar3 = (**(code **)(*param_1 + 0x290))(param_1,local_58);
  fVar1 = *(float *)(lVar3 + 8);
  lVar3 = (**(code **)(*param_1 + 0x290))(param_1,local_4c);
  fVar2 = *(float *)(lVar3 + 4);
  pfVar4 = (float *)(**(code **)(*param_1 + 0x290))(param_1,local_40);
  fVar5 = *pfVar4;
  if (*pfVar4 <= fVar2) {
    fVar5 = fVar2;
  }
  *(undefined1 *)(param_2 + 3) = 1;
  if (fVar5 <= fVar1) {
    fVar5 = fVar1;
  }
  *param_2 = CONCAT44(local_64 - fVar5,local_68 - fVar5);
  *(float *)(param_2 + 1) = local_60 - fVar5;
  *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(fVar5 + local_64,fVar5 + local_68);
  *(float *)((longlong)param_2 + 0x14) = fVar5 + local_60;
  return param_2;
}



// FUNCTION 140eaf480 FUN_140eaf480 body=184 status=ok
// SIG undefined FUN_140eaf480(void)

undefined4 FUN_140eaf480(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_res8;
  
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_res8);
  if (local_res8 != (longlong *)0x0) {
    plVar3 = (longlong *)FUN_1428dfc70();
    for (plVar1 = local_res8; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
      if (plVar1 == plVar3) {
        lVar5 = local_res8[0x1f];
        if (lVar5 == 0) {
          (**(code **)(*local_res8 + 0x368))(local_res8);
          lVar5 = local_res8[0x1f];
          if (lVar5 == 0) {
            return 0;
          }
        }
        lVar4 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          return 0;
        }
        return *(undefined4 *)(lVar5 + 0xa10);
      }
    }
  }
  return 0;
}



// FUNCTION 140eaf540 FUN_140eaf540 body=242 status=ok
// SIG undefined FUN_140eaf540(void)

int FUN_140eaf540(longlong *param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *local_res8;
  
  iVar2 = 0;
  if ((param_2 != '\0') && ((longlong *)param_1[0x3c] != (longlong *)0x0)) {
    iVar2 = (**(code **)(*(longlong *)param_1[0x3c] + 0x288))();
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_res8);
  if ((local_res8 != (longlong *)0x0) &&
     (plVar3 = (longlong *)FUN_1428dfc70(), plVar5 = local_res8, local_res8 != (longlong *)0x0)) {
    while (plVar5 != plVar3) {
      plVar5 = (longlong *)plVar5[6];
      if (plVar5 == (longlong *)0x0) {
        return iVar2;
      }
    }
    lVar6 = local_res8[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*local_res8 + 0x368))(local_res8);
      lVar6 = local_res8[0x1f];
      if (lVar6 == 0) {
        return iVar2;
      }
    }
    lVar4 = FUN_1414d8e60();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = iVar2 + *(int *)(lVar6 + 0x560);
    }
  }
  return iVar2;
}



// FUNCTION 140eaf640 FUN_140eaf640 body=281 status=ok
// SIG undefined FUN_140eaf640(void)

int FUN_140eaf640(longlong *param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong *local_res8;
  
  iVar9 = 0;
  if (param_2 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x358))();
    iVar7 = 0;
    if (0 < iVar2) {
      do {
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x350))(param_1,iVar7,0);
        if (plVar4 != (longlong *)0x0) {
          iVar3 = (**(code **)(*plVar4 + 0x288))(plVar4,param_2);
          iVar9 = iVar9 + iVar3;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_res8);
  if ((local_res8 != (longlong *)0x0) &&
     (plVar5 = (longlong *)FUN_1428dfc70(), plVar4 = local_res8, local_res8 != (longlong *)0x0)) {
    while (plVar4 != plVar5) {
      plVar4 = (longlong *)plVar4[6];
      if (plVar4 == (longlong *)0x0) {
        return iVar9;
      }
    }
    lVar8 = local_res8[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*local_res8 + 0x368))(local_res8);
      lVar8 = local_res8[0x1f];
      if (lVar8 == 0) {
        return iVar9;
      }
    }
    lVar6 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar9 = iVar9 + *(int *)(lVar8 + 0xf28);
    }
  }
  return iVar9;
}



// FUNCTION 140eaf760 FUN_140eaf760 body=8 status=ok
// SIG undefined FUN_140eaf760(void)

undefined8 FUN_140eaf760(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x210);
}



// FUNCTION 140eaf770 FUN_140eaf770 body=1204 status=ok
// SIG undefined FUN_140eaf770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140eaf770(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  undefined1 auStack_418 [32];
  longlong *local_3f8;
  undefined4 local_3f0;
  longlong *local_3e8;
  undefined4 local_3e0;
  undefined1 local_3d8 [896];
  char local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_418;
  if (param_2 == (longlong *)0x0) {
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x280))();
      return uVar4;
    }
    return 0;
  }
  plVar5 = (longlong *)(**(code **)(*param_2 + 0x678))(param_2);
  if (plVar5 == (longlong *)0x0) {
LAB_140eafbfe:
    plVar5 = *(longlong **)(param_1 + 0x40);
    if (plVar5 == (longlong *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar5 + 0x280))(plVar5,param_2);
    }
    return uVar4;
  }
  lVar6 = FUN_1413f82e0();
  if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140eafbfe;
  plVar9 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x100) != 0) ||
     (plVar10 = plVar9, *(longlong *)(param_1 + 0x48) != 0)) {
    plVar10 = (longlong *)plVar5[0x1cb];
  }
  if (plVar10 != (longlong *)0x0) {
    plVar9 = (longlong *)plVar10[0xad];
  }
  if ((((*(longlong *)(param_1 + 0x100) != 0) && (plVar10 != (longlong *)0x0)) &&
      ((longlong *)plVar10[0xbc] != (longlong *)0x0)) &&
     ((cVar2 = (**(code **)(*(longlong *)plVar10[0xbc] + 0xc80))(), cVar2 != '\0' &&
      (lVar6 = plVar5[0x124], lVar6 != 0)))) {
    uVar4 = UEnvQueryTest_Random::StaticClass();
    cVar2 = FUN_142c736c0(lVar6,uVar4);
    if ((cVar2 == '\0') &&
       ((cVar2 = FUN_142cc5d60(param_1 + 0x108,plVar9), cVar2 == '\0' ||
        (cVar2 = FUN_142cd4660(param_1 + 0x108,plVar9), cVar2 != '\0')))) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x280))
                        (*(longlong **)(param_1 + 0x100),param_2);
      return uVar4;
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x118);
  if ((plVar8 != (longlong *)0x0) && ((*(byte *)((longlong)plVar5 + 0x56c) & 1) != 0)) {
LAB_140eaf99d:
    uVar4 = (**(code **)(*plVar8 + 0x280))(plVar8,param_2);
    return uVar4;
  }
  if ((*(longlong *)(param_1 + 0x120) != 0) && (cVar2 = FUN_140c491e0(plVar5), cVar2 != '\0')) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x280))
                      (*(longlong **)(param_1 + 0x120),param_2);
    return uVar4;
  }
  if ((((*(longlong *)(param_1 + 0xe8) != 0) && (plVar10 != (longlong *)0x0)) &&
      (lVar6 = plVar10[0xbd], lVar6 != 0)) && (0 < *(int *)(lVar6 + 0x7540))) {
    FUN_142dc1ad0(local_3d8);
    cVar2 = FUN_142dcd6e0(lVar6,local_3d8,0);
    if (((cVar2 != '\0') && (local_58 == '\0')) &&
       ((cVar2 = FUN_142cc5d60(param_1 + 0xf0,plVar9), cVar2 == '\0' ||
        (cVar2 = FUN_142cd4660(param_1 + 0xf0,plVar9), cVar2 != '\0')))) {
      plVar8 = *(longlong **)(param_1 + 0xe8);
      goto LAB_140eaf99d;
    }
  }
  if ((*(longlong *)(param_1 + 0x48) != 0) && (plVar10 != (longlong *)0x0)) {
    cVar2 = (**(code **)(plVar10[0xb6] + 0x18))();
    uVar4 = FUN_142e7dfd0();
    lVar6 = (**(code **)(*plVar10 + 0x628))(plVar10,uVar4);
    if (lVar6 == 0) {
LAB_140eafac2:
      if (cVar2 == '\0') goto LAB_140eafb91;
      if (((*(longlong *)(param_1 + 0x60) != 0) && (cVar2 = FUN_1407604f0(plVar10), cVar2 == '\0'))
         && ((cVar2 = FUN_142deefb0(param_1 + 0x68), cVar2 == '\0' ||
             (local_3f8 = plVar9, fVar11 = (float)FUN_142de77e0(param_1 + 0x68,plVar5,0,&local_3f8),
             0.5 <= fVar11)))) {
        plVar5 = *(longlong **)(param_1 + 0x60);
        goto LAB_140eafb18;
      }
    }
    else {
      lVar7 = plVar5[0x2d];
      if (lVar7 == 0) {
        local_3f8 = _DAT_1468b5d90;
        local_3f0 = DAT_1468b5d98;
      }
      else {
        local_3f8 = *(longlong **)(lVar7 + 0x220);
        local_3f0 = *(undefined4 *)(lVar7 + 0x228);
      }
      local_3e8 = local_3f8;
      local_3e0 = local_3f0;
      cVar3 = FUN_142df43c0(lVar6,0,&local_3e8);
      if (cVar3 != '\0') goto LAB_140eafac2;
      uVar4 = FUN_142e75af0();
      lVar6 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar4);
      lVar7 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x280))
                        (*(longlong **)(param_1 + 0x48),param_2);
      if (((lVar6 == 0) || (lVar7 == 0)) || (cVar3 = FUN_142dd3710(lVar6,lVar7), cVar3 == '\0'))
      goto LAB_140eafac2;
    }
    if ((*(int *)(param_1 + 0x50) == 0) && (*(int *)(param_1 + 0x54) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) || (cVar2 = FUN_142cd4660(param_1 + 0x50,plVar9), cVar2 != '\0')) {
      plVar5 = *(longlong **)(param_1 + 0x48);
      goto LAB_140eafb18;
    }
  }
LAB_140eafb91:
  if (((*(longlong *)(param_1 + 0x128) != 0) || (*(longlong *)(param_1 + 0x130) != 0)) &&
     ((char)plVar5[0x1d8] == '\x03')) {
    if ((*(longlong *)(param_1 + 0x130) == 0) || (cVar2 = FUN_140c491e0(plVar5), cVar2 == '\0')) {
      plVar5 = *(longlong **)(param_1 + 0x128);
      if (plVar5 == (longlong *)0x0) goto LAB_140eafbde;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x130);
    }
LAB_140eafb18:
    uVar4 = (**(code **)(*plVar5 + 0x280))(plVar5,param_2);
    return uVar4;
  }
LAB_140eafbde:
  plVar5 = *(longlong **)(param_1 + 0x40);
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  uVar4 = (**(code **)(*plVar5 + 0x280))(plVar5,param_2);
  return uVar4;
}



// FUNCTION 140eafc50 FUN_140eafc50 body=117 status=ok
// SIG undefined FUN_140eafc50(void)

void FUN_140eafc50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  plVar1 = *(longlong **)(param_1 + 0x1e0);
  if (plVar1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x2c8))(plVar1,local_res8);
    plVar1 = (longlong *)*plVar1;
    if (plVar1 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = plVar1[0x1f];
      if (lVar2 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        lVar2 = plVar1[0x1f];
      }
    }
    lVar2 = FUN_142df3580(lVar2);
    if (lVar2 != 0) {
      return;
    }
  }
  FUN_1407cbf40(param_1);
  return;
}



// FUNCTION 140eafcd0 FUN_140eafcd0 body=135 status=ok
// SIG undefined FUN_140eafcd0(void)

ulonglong FUN_140eafcd0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  iVar1 = (**(code **)(*param_1 + 0x358))();
  uVar3 = uVar5;
  if (0 < iVar1) {
    do {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x350))(param_1,uVar5,0);
      if ((plVar2 != (longlong *)0x0) &&
         (uVar3 = (**(code **)(*plVar2 + 0x2e0))(plVar2), uVar3 != 0)) {
        return uVar3;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < iVar1);
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  uVar3 = FUN_1407cbf40(param_1);
  return uVar3;
}



// FUNCTION 140eafd80 FUN_140eafd80 body=73 status=ok
// SIG undefined FUN_140eafd80(void)

float FUN_140eafd80(void)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = FUN_142dcec90();
  fVar3 = 0.0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x38);
    lVar1 = (longlong)*(int *)(lVar1 + 0x40) * 0x1c0 + lVar2;
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x1c0) {
      fVar3 = fVar3 + *(float *)(lVar2 + 0x1b0);
    }
  }
  return fVar3;
}



// FUNCTION 140eafdd0 FUN_140eafdd0 body=450 status=ok
// SIG undefined FUN_140eafdd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eafdd0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar6 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_1444f8620;
  }
  local_88[0] = &LAB_140ea52d0;
  FUN_142cf0870(*(undefined8 *)(param_1 + 0x28),param_1 + 0x40,local_88);
  plVar7 = *(longlong **)(param_1 + 0x40);
  uVar8 = (longlong)*(int *)(param_1 + 0x48) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x48) < plVar7) {
    uVar8 = uVar6;
  }
  if (uVar8 != 0) {
    do {
      if (*plVar7 != 0) {
        plVar2 = *(longlong **)(param_1 + 0x30);
        iVar1 = *(int *)(param_1 + 0x38);
        lVar3 = *(longlong *)(*plVar7 + 0x118);
        for (plVar5 = plVar2; plVar5 != plVar2 + iVar1; plVar5 = plVar5 + 1) {
          if (*plVar5 == lVar3) {
            if ((int)((longlong)plVar5 - (longlong)plVar2 >> 3) != -1) goto LAB_140eafefa;
            break;
          }
        }
        *(int *)(param_1 + 0x38) = iVar1 + 1;
        if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x30);
        }
        *(longlong *)((longlong)iVar1 * 8 + *(longlong *)(param_1 + 0x30)) = lVar3;
      }
LAB_140eafefa:
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar8);
  }
  if (local_48 != 0) {
    plVar7 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar7 = local_58;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140eaffa0 FUN_140eaffa0 body=431 status=ok
// SIG undefined FUN_140eaffa0(void)

void FUN_140eaffa0(longlong *param_1,longlong *param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  fVar7 = (float)DAT_1468b5d88;
  fVar8 = DAT_1468b5d88._4_4_;
  if (*(char *)(lVar1 + 0xd0) != '\0') {
    if (*param_2 == *(longlong *)(lVar1 + 0xd8)) {
      if (*(float *)(lVar1 + 0xe8) <= ABS(param_3) && ABS(param_3) != *(float *)(lVar1 + 0xe8)) {
        if (param_3 <= 0.0) {
          fVar7 = 0.0;
          if (param_3 < 0.0) {
            fVar7 = -1.0;
          }
        }
        else {
          fVar7 = 1.0;
        }
      }
      goto LAB_140eb0116;
    }
    if (*param_2 == *(longlong *)(lVar1 + 0xe0)) {
      if (*(float *)(lVar1 + 0xe8) <= ABS(param_3) && ABS(param_3) != *(float *)(lVar1 + 0xe8)) {
        if (param_3 <= 0.0) {
          if (0.0 <= param_3) {
            fVar8 = -0.0;
          }
          else {
            fVar8 = 1.0;
          }
        }
        else {
          fVar8 = -1.0;
        }
      }
      goto LAB_140eb0116;
    }
  }
  lVar2 = *param_2;
  if (*(int *)(lVar1 + 0x88) != *(int *)(lVar1 + 0xb4)) {
    lVar4 = *(longlong *)(lVar1 + 0xc0);
    if (*(longlong *)(lVar1 + 0xc0) == 0) {
      lVar4 = lVar1 + 0xb8;
    }
    fVar3 = *(float *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                               (longlong)*(int *)(lVar1 + 200) - 1U) * 4);
    if (fVar3 != -NAN) {
      do {
        pfVar6 = (float *)(*(longlong *)(lVar1 + 0x80) + (longlong)(int)fVar3 * 0x18);
        if (*(longlong *)(*(longlong *)(lVar1 + 0x80) + (longlong)(int)fVar3 * 0x18) == lVar2) {
          if (fVar3 != -NAN) goto LAB_140eb00f3;
          break;
        }
        fVar3 = pfVar6[4];
      } while (fVar3 != -NAN);
    }
  }
  pfVar6 = (float *)0x0;
LAB_140eb00f3:
  pfVar5 = pfVar6 + 2;
  if (pfVar6 == (float *)0x0) {
    pfVar5 = (float *)0x0;
  }
  if (pfVar5 != (float *)0x0) {
    fVar7 = param_3 * *pfVar5;
    fVar8 = param_3 * pfVar5[1];
  }
LAB_140eb0116:
  if (ABS(*(float *)((longlong)param_1 + 0x14)) <= ABS(fVar7)) {
    *(float *)((longlong)param_1 + 0x14) = fVar7;
  }
  if (ABS(*(float *)(param_1 + 3)) <= ABS(fVar8)) {
    *(float *)(param_1 + 3) = fVar8;
  }
  return;
}



// FUNCTION 140eb0150 FUN_140eb0150 body=710 status=ok
// SIG undefined FUN_140eb0150(void)

void FUN_140eb0150(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  longlong local_58 [7];
  ulonglong local_20;
  
  if ((int)param_1[0xe8] == 0) {
    if (param_2 == param_1[0xf8]) {
      *(int *)(param_1 + 0xee) = param_3;
      *(undefined4 *)(param_1 + 0xe8) = 1;
      if (param_1[0xc0] != 0) {
        local_58[0] = 0;
        local_58[1] = 0xe;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
        FGenericPlatformString::Memcpy(local_58[0],L"focusBackpack",0x1c);
        FUN_142088910(param_1[0xc0],local_58);
        if (local_58[0] != 0) {
          FMemory::Free();
        }
      }
      if (param_1[0xfd] != 0) {
        FUN_1411f93d0(param_1[0xfd],1);
      }
      if (param_1[0xf8] != 0) {
        UOnCausedDamage::SetTriggerOnZeroDamage(param_1[0xf8],(int)param_1[0xe8] == 0);
      }
      if (param_1[0xfd] != 0) {
        UOnCausedDamage::SetTriggerOnZeroDamage(param_1[0xfd],(int)param_1[0xe8] == 1);
      }
      LOCK();
      *(undefined4 *)(param_1 + 0xb1) = 1;
      UNLOCK();
      lVar1 = *param_1;
      *(undefined1 *)((longlong)param_1 + 0x74d) = 1;
      local_58[2] = 0;
      local_58[3] = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,"Confirm",1);
      (**(code **)(lVar1 + 0x4e8))(param_1,*puVar3,local_58 + 2);
    }
  }
  else if (((int)param_1[0xe8] == 1) && (lVar1 = param_1[0xfd], param_2 == lVar1)) {
    uVar5 = 0;
    if ((-1 < param_3) && (param_3 < *(int *)(lVar1 + 0xf0))) {
      FWeakObjectPtr::Get(*(longlong *)(lVar1 + 0xe8) + (longlong)param_3 * 8);
    }
    iVar6 = (int)param_1[0xee];
    if ((-1 < iVar6) && (iVar6 < (int)param_1[0xed])) {
      FWeakObjectPtr::operator=(param_1[0xec] + (longlong)iVar6 * 8);
    }
    FUN_140ebdb90(param_1,0);
    FUN_140ec3580(param_1,0);
    lVar1 = *param_1;
    local_58[4] = 0;
    local_58[5] = 0;
    puVar3 = (undefined8 *)FName::FName(local_res20,"Confirm",1);
    (**(code **)(lVar1 + 0x4e8))(param_1,*puVar3,local_58 + 4);
    if (param_1[0xf8] != 0) {
      uVar7 = uVar5;
      if (0 < (int)param_1[0xed]) {
        do {
          iVar6 = (int)uVar7;
          cVar2 = FWeakObjectPtr::IsValid(param_1[0xec] + (longlong)iVar6 * 8);
          if (cVar2 == '\0') {
            if ((-1 < iVar6) && (iVar6 < (int)param_1[0xed])) {
              FUN_1411f9bb0(param_1[0xf8],uVar7,1,1);
              goto LAB_140eb03b5;
            }
            break;
          }
          uVar7 = (ulonglong)(iVar6 + 1U);
        } while ((int)(iVar6 + 1U) < (int)param_1[0xed]);
      }
      FUN_1411f9bb0(param_1[0xf8],0xffffffff,0);
      lVar1 = param_1[0xf9];
      local_58[6] = lVar1;
      if (lVar1 != 0) {
        uVar4 = UBlendableInterface::GetPrivateStaticClass();
        uVar5 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar4);
      }
      local_20 = uVar5;
      FUN_142ed36d0(param_1,local_58 + 6,0);
    }
LAB_140eb03b5:
    *(undefined4 *)(param_1 + 0xee) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0x74b) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x744) = 1;
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  *(undefined1 *)((longlong)param_1 + 0x749) = 1;
  return;
}



// FUNCTION 140eb0420 FUN_140eb0420 body=203 status=ok
// SIG undefined FUN_140eb0420(void)

void FUN_140eb0420(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar1 = *param_2;
    if (*(int *)(lVar5 + 0x38) != *(int *)(lVar5 + 100)) {
      lVar4 = *(longlong *)(lVar5 + 0x70);
      if (*(longlong *)(lVar5 + 0x70) == 0) {
        lVar4 = lVar5 + 0x68;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                               (longlong)*(int *)(lVar5 + 0x78) - 1U) * 4);
      if (iVar3 != -1) {
        do {
          puVar6 = (undefined1 *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 0x18);
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 0x18) == lVar1) {
            if (iVar3 != -1) goto LAB_140eb04a4;
            break;
          }
          iVar3 = *(int *)(puVar6 + 0x10);
        } while (iVar3 != -1);
      }
    }
    puVar6 = (undefined1 *)0x0;
LAB_140eb04a4:
    puVar7 = puVar6 + 8;
    if (puVar6 == (undefined1 *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    if ((puVar7 != (undefined1 *)0x0) &&
       (cVar2 = FWeakObjectPtr::IsValid((longlong)param_1 + 0xc), cVar2 != '\0')) {
      lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0xc);
      FUN_140e5d360(lVar5 + 0x26f0,*puVar7,1);
    }
  }
  return;
}



// FUNCTION 140eb04f0 FUN_140eb04f0 body=712 status=ok
// SIG undefined FUN_140eb04f0(void)

ulonglong FUN_140eb04f0(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong local_138 [4];
  undefined1 local_118 [220];
  undefined1 local_3c [52];
  
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (in_RAX = *param_2, DAT_146b3e2a0 == in_RAX))
  {
    uVar7 = CONCAT71((int7)(in_RAX >> 8),1);
    bVar2 = true;
  }
  else {
    uVar7 = in_RAX & 0xffffffffffffff00;
    bVar2 = false;
  }
  if ((!bVar2) || (param_1[0xea] == 0)) {
    return uVar7 & 0xffffffffffffff00;
  }
  lVar4 = FUN_140eac060();
  uVar7 = 0;
  if (lVar4 == 0) {
LAB_140eb0757:
    return uVar7 & 0xffffffffffffff00;
  }
  lVar5 = FUN_1412faff0();
  iVar1 = *(int *)(lVar5 + 0x90);
  uVar7 = (longlong)iVar1;
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
     (uVar7 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x88),
     *(longlong *)(uVar7 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
    uVar7 = uVar7 & 0xffffffffffffff00;
    bVar2 = false;
  }
  else {
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
    bVar2 = true;
  }
  if (!bVar2) goto LAB_140eb0757;
  uVar6 = (**(code **)(*(longlong *)param_1[0xea] + 0x340))();
  FUN_140e9a4f0(local_118,uVar6);
  lVar4 = FWeakObjectPtr::Get(local_3c);
  if ((lVar4 == 0) || (lVar5 = FUN_140e971d0(param_1), lVar5 == 0)) goto LAB_140eb0732;
  cVar3 = FUN_140cef310(lVar5,lVar4);
  if (cVar3 != '\x01') {
    local_138[0] = 0;
    local_138[1] = 0;
    local_138[2] = 0;
    local_138[3] = 0;
    FUN_14145fb70(lVar5,lVar4,local_138,0);
    if (local_138[2] != 0) {
      FMemory::Free();
    }
    if (local_138[0] != 0) {
      FMemory::Free();
    }
    goto LAB_140eb0732;
  }
  if (param_1[0xda] != 0) {
    local_138[0] = 0;
    local_138[1] = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138,0);
    FGenericPlatformString::Memcpy(local_138[0],&DAT_1445cb9d0,6);
    FUN_142088910(param_1[0xda],local_138);
    if (local_138[0] != 0) {
      FMemory::Free();
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146871e28) && (_Init_thread_header(&DAT_146871e28), DAT_146871e28 == -1))
  {
    FName::FName(&DAT_146871e20,L"NoMoney",1);
    _Init_thread_footer(&DAT_146871e28);
  }
  local_138[0] = 0;
  local_138[1] = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146871e20,local_138);
  lVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar4 == 0) {
LAB_140eb06d3:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140eb06d3;
  }
  FUN_140ab72e0(lVar4,4);
LAB_140eb0732:
  uVar7 = FUN_140e9c360(local_118);
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 140eb07c0 FUN_140eb07c0 body=475 status=ok
// SIG undefined FUN_140eb07c0(void)

undefined8 FUN_140eb07c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_18 [2];
  
  cVar2 = FUN_140eb04f0();
  if (cVar2 != '\0') {
    return 1;
  }
  lVar5 = param_1[0xea];
  if (lVar5 != 0) {
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      param_1[0xea] = 0;
      FUN_140f08820(param_1 + 0xeb,1);
      lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
      if (lVar5 != 0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_141461050(lVar5,0);
        }
      }
      local_18[0] = 0;
      local_18[1] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"fadeOut",0x10);
      FUN_142088910(param_1[0xc0],local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0x8f4) = 1;
      UNLOCK();
      LOCK();
      *(undefined4 *)(param_1 + 0x11e) = 1;
      UNLOCK();
      (**(code **)(*param_1 + 0x540))(param_1);
      return 1;
    }
  }
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_1468718f0 == *param_2)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    if (lVar5 != 0) {
      return 1;
    }
    plVar1 = param_1 + 0x122;
    *(int *)plVar1 = (int)*plVar1 + 1;
    iVar4 = (int)param_1[0x122];
    if (((int)*plVar1 < 0) || ((int)param_1[0x121] <= iVar4)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      iVar4 = 0;
    }
  }
  else {
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_1468718f8 == *param_2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      return 0;
    }
    if (lVar5 != 0) {
      return 1;
    }
    plVar1 = param_1 + 0x122;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if (-1 < (int)*plVar1) goto LAB_140eb0947;
    iVar4 = (int)param_1[0x121] + -1;
  }
  *(int *)(param_1 + 0x122) = iVar4;
LAB_140eb0947:
  FUN_140ebbdd0(param_1);
  return 1;
}



// FUNCTION 140eb09a0 FUN_140eb09a0 body=530 status=ok
// SIG undefined FUN_140eb09a0(void)

void FUN_140eb09a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong local_res18;
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FText::FText(local_38);
  cVar6 = FUN_140eb26a0(param_1,local_38);
  if (cVar6 == '\0') {
    FWeakObjectPtr::operator=(local_48,0);
    local_40 = 0;
    uVar10 = FUN_140e971d0(param_1);
    FUN_1410f3960(uVar10,param_1 + 0xd9,local_38,local_48,0,0,0);
    cVar6 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x71c);
    if (cVar6 != '\0') {
      lVar9 = FWeakObjectPtr::Get((longlong)param_1 + 0x71c);
      FUN_140e58580(lVar9 + 0x26f0);
    }
  }
  else {
    lVar9 = *param_1;
    local_58 = 0;
    local_50 = 0;
    puVar7 = (undefined8 *)FName::FName(local_res20,"Confirm",1);
    (**(code **)(lVar9 + 0x4e8))(param_1,*puVar7,&local_58);
    FWeakObjectPtr::operator=(local_68,0);
    local_60 = 0;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnConfirmExtraction",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res18,pwVar5 + 2,1);
    FWeakObjectPtr::operator=(local_68,param_1);
    local_60 = local_res18;
    if ((local_res18 != 0) && (lVar9 = FWeakObjectPtr::Get(local_68), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_60);
    }
    uVar10 = FUN_140e971d0(param_1);
    FUN_1410f47a0(uVar10,param_1 + 0xd9,param_1 + 0xd6,local_68,0,0,0,0,0);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return;
}



// FUNCTION 140eb0bc0 FUN_140eb0bc0 body=520 status=ok
// SIG undefined FUN_140eb0bc0(void)

void FUN_140eb0bc0(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 500) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 500) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x118);
  if ((*(char *)(param_1 + 0x1d8) != '\0') && (iVar2 = FUN_142340f30(), iVar2 != 3)) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    if (lVar3 == 0) {
      fVar7 = 0.0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      fVar7 = *(float *)(lVar3 + 0x790);
    }
    if ((((*(float *)(param_1 + 0x1b8) <= 0.0) || (*(float *)(param_1 + 0x1f0) <= 0.0)) ||
        (*(float *)(param_1 + 0x1f0) + *(float *)(param_1 + 0x1b8) <= fVar7)) &&
       ((*(int *)(param_1 + 0x1b0) < 1 || (*(int *)(param_1 + 0x1b4) < *(int *)(param_1 + 0x1b0)))))
    {
      if (*(longlong *)(param_1 + 0x1d0) != 0) {
        uVar6 = 0;
        if (*(char *)(param_1 + 0x1c9) != '\0') {
          uVar6 = uVar4;
        }
        cVar1 = FUN_142c48f90(*(longlong *)(param_1 + 0x1d0),param_2,uVar6);
        if (cVar1 == '\0') goto LAB_140eb0da5;
      }
      cVar1 = FUN_140eb24f0(param_1,param_2);
      if ((*(char *)(param_1 + 0x1c8) == '\0') || (cVar1 != '\0')) {
        if (param_3 == '\0') {
          lVar3 = param_1 + 0x180;
          local_38 = param_4;
        }
        else {
          lVar3 = param_1 + 400;
        }
        local_40 = cVar1 != '\0';
        local_48 = param_2;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar3,&local_48)
        ;
        if (*(int *)(param_1 + 0x1b0) != 0) {
          *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
        }
        if (0.0 < *(float *)(param_1 + 0x1b8)) {
          *(float *)(param_1 + 0x1f0) = fVar7;
        }
        if (*(longlong *)(param_1 + 0x1c0) != 0) {
          uVar4 = UNativeUserListEntry::GetPrivateStaticClass();
          cVar1 = UClass::ImplementsInterface
                            (*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x10),uVar4);
          if (cVar1 != '\0') {
            lVar3 = *(longlong *)(param_1 + 0x120);
            if (lVar3 == 0) {
              lVar3 = FUN_1423407b0(param_1);
            }
            plVar5 = (longlong *)FUN_142f6c9f0(lVar3);
            if ((plVar5 == (longlong *)0x0) ||
               (cVar1 = (**(code **)(*plVar5 + 0x700))(plVar5), cVar1 == '\0')) goto LAB_140eb0da5;
          }
          FUN_140ea5590(param_1);
        }
      }
    }
  }
LAB_140eb0da5:
  *(undefined1 *)(param_1 + 500) = 0;
  return;
}



// FUNCTION 140eb0dd0 FUN_140eb0dd0 body=66 status=ok
// SIG undefined FUN_140eb0dd0(void)

void FUN_140eb0dd0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xc);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0xc);
    FUN_140e3c160(uVar2,0,0,1);
    return;
  }
  return;
}



// FUNCTION 140eb0e20 FUN_140eb0e20 body=157 status=ok
// SIG undefined FUN_140eb0e20(void)

void FUN_140eb0e20(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x538) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x538) + 0x408);
    if (lVar1 != 0) {
      lVar3 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(longlong *)(param_1 + 0x548) = lVar1;
        return;
      }
    }
    if ((*(char *)(*(longlong *)(param_1 + 0x538) + 0x418) == '\0') &&
       (*(longlong *)(param_1 + 0x548) != 0)) {
      *(undefined8 *)(param_1 + 0x548) = 0;
    }
  }
  return;
}



// FUNCTION 140eb0ec0 FUN_140eb0ec0 body=81 status=ok
// SIG undefined FUN_140eb0ec0(void)

void FUN_140eb0ec0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 1);
  if (*(char *)(param_1 + 1) != '\x02') {
    lVar1 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar1 + 0x790);
    if (*(char *)(param_1 + 1) == '\x02') {
      *(undefined4 *)(param_1 + 4) = 0x3f800000;
      *(undefined4 *)(param_1 + 3) = 0xbf800000;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



// FUNCTION 140eb0f20 FUN_140eb0f20 body=183 status=ok
// SIG undefined FUN_140eb0f20(void)

void FUN_140eb0f20(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140eb0f7e;
  }
  param_2 = 0;
LAB_140eb0f7e:
  param_1 = param_1 + 0xc;
  FWeakObjectPtr::operator=(param_1,param_2);
  cVar2 = FWeakObjectPtr::IsValid(param_1);
  if (cVar2 != '\0') {
    uVar4 = FWeakObjectPtr::Get(param_1);
    FUN_140e36a90(uVar4,param_3,0);
    uVar4 = FWeakObjectPtr::Get(param_1);
    FUN_140e36a80(uVar4,*param_4);
  }
  return;
}



// FUNCTION 140eb0fe0 FUN_140eb0fe0 body=1735 status=ok
// SIG undefined FUN_140eb0fe0(void)

void FUN_140eb0fe0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  wchar_t *pwVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined8 uVar12;
  wchar_t *pwVar13;
  undefined4 *puVar14;
  int *piVar15;
  bool bVar16;
  wchar_t *local_res10;
  undefined8 local_168;
  wchar_t *local_160;
  wchar_t *local_158;
  uint local_150;
  int local_14c;
  undefined4 local_144;
  undefined1 local_da;
  undefined1 local_d8;
  undefined4 local_ac;
  undefined4 *local_a0;
  uint local_98;
  int local_94;
  wchar_t *local_90;
  uint local_88;
  int local_84;
  undefined8 local_80;
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [20];
  
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x58c);
  bVar5 = true;
  local_144 = 2;
  if (lVar8 != 0) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (bVar4 = bVar5,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
       != lVar9 + 0x88)) {
      bVar4 = false;
    }
    if (bVar4) {
      cVar7 = FUN_142dcfc60(lVar8);
      local_144 = 2;
      if (cVar7 == '\x03') {
        local_144 = 1;
      }
    }
  }
  FUN_140e9a1b0(&local_158);
  local_d8 = 1;
  local_da = 1;
  FWeakObjectPtr::operator=(local_54,param_1);
  pwVar10 = (wchar_t *)FWeakObjectPtr::Get(param_1 + 0x58c);
  pwVar13 = (wchar_t *)0x0;
  if (pwVar10 != (wchar_t *)0x0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar10 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    if (bVar5) goto LAB_140eb10d6;
  }
  pwVar10 = pwVar13;
LAB_140eb10d6:
  FWeakObjectPtr::operator=(local_5c,pwVar10);
  FWeakObjectPtr::operator=(local_4c,*(undefined8 *)(param_1 + 0x6d8));
  local_80 = FUN_1413565b0();
  if (local_a0 != (undefined4 *)&DAT_1445ddab0) {
    local_98 = 0;
    pwVar10 = pwVar13;
    if (local_94 != 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a0,9);
      pwVar10 = (wchar_t *)(ulonglong)local_98;
    }
    local_98 = (int)pwVar10 + 9;
    if (local_94 < (int)local_98) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0);
    }
    *local_a0 = 0x720047;
    local_a0[1] = 0x640069;
    local_a0[2] = 0x740049;
    local_a0[3] = 0x6d0065;
    *(undefined2 *)(local_a0 + 4) = 0;
  }
  if (local_90 != L"GridItem") {
    local_88 = 0;
    pwVar10 = pwVar13;
    if (local_84 != 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_90,9);
      pwVar10 = (wchar_t *)(ulonglong)local_88;
    }
    local_88 = (int)pwVar10 + 9;
    if (local_84 < (int)local_88) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90);
    }
    builtin_wcsncpy(local_90,L"GridItem",9);
  }
  if (local_158 != L"backpackGrid") {
    local_150 = 0;
    pwVar10 = pwVar13;
    if (local_14c != 0xd) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_158,0xd);
      pwVar10 = (wchar_t *)(ulonglong)local_150;
    }
    local_150 = (int)pwVar10 + 0xd;
    if (local_14c < (int)local_150) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158);
    }
    builtin_wcsncpy(local_158,L"backpackGrid",0xd);
  }
  cVar7 = FUN_142ebdd70(param_1);
  if (cVar7 == '\0') {
    local_ac = *(undefined4 *)(param_1 + 0x91c);
  }
  else {
    local_ac = *(undefined4 *)(param_1 + 0x920);
  }
  plVar1 = (longlong *)(param_1 + 0x758);
  FUN_140eeb880(plVar1,&local_158,*(undefined8 *)(param_1 + 0x738));
  FUN_140f0b0e0(plVar1,0);
  lVar8 = *(longlong *)(param_1 + 0x8c8);
  if (lVar8 != 0) {
    *(undefined1 *)(lVar8 + 0x240) = 2;
    *(undefined1 *)(lVar8 + 0x242) = 1;
    *(undefined8 *)(lVar8 + 0x244) = *(undefined8 *)(param_1 + 0x914);
    *(undefined8 *)(lVar8 + 0x1e8) = 0;
  }
  FUN_140f08820(plVar1,1);
  pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSelectedBackpackItemChanged",L"::");
  pwVar10 = pwVar13;
  while (pwVar6 = pwVar11, pwVar6 != (wchar_t *)0x0) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
    pwVar10 = pwVar6;
  }
  FName::FName(&local_res10,pwVar10 + 2,1);
  pwVar10 = local_res10;
  FWeakObjectPtr::operator=(&local_168,0);
  local_160 = (wchar_t *)0x0;
  FWeakObjectPtr::operator=(&local_168,param_1);
  local_160 = pwVar10;
  if ((pwVar10 != (wchar_t *)0x0) && (lVar8 = FWeakObjectPtr::Get(&local_168), lVar8 != 0)) {
    UObject::FindFunction(lVar8,local_160);
  }
  piVar3 = (int *)*plVar1;
  iVar2 = *(int *)(param_1 + 0x760);
  bVar5 = true;
  for (piVar15 = piVar3; piVar15 != piVar3 + (longlong)iVar2 * 4; piVar15 = piVar15 + 4) {
    bVar4 = bVar5;
    if (((*piVar15 != (int)local_168) ||
        (local_168._4_4_ = (int)((ulonglong)local_168 >> 0x20),
        bVar16 = piVar15[1] != local_168._4_4_, bVar16)) &&
       ((cVar7 = FWeakObjectPtr::IsValid(piVar15), cVar7 != '\0' ||
        (cVar7 = FWeakObjectPtr::IsValid(&local_168), cVar7 != '\0')))) {
      bVar4 = false;
    }
    if ((!bVar4) || (bVar4 = bVar5, *(wchar_t **)(piVar15 + 2) != local_160)) {
      bVar4 = false;
    }
    if (bVar4) {
      if ((int)((longlong)piVar15 - (longlong)piVar3 >> 4) != -1) goto LAB_140eb13f3;
      break;
    }
  }
  iVar2 = *(int *)(param_1 + 0x760);
  *(int *)(param_1 + 0x760) = iVar2 + 1;
  if (*(int *)(param_1 + 0x764) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  puVar14 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
  *puVar14 = (int)local_168;
  puVar14[1] = local_168._4_4_;
  *(wchar_t **)(puVar14 + 2) = local_160;
LAB_140eb13f3:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBackpackItemClicked",L"::");
  pwVar10 = pwVar13;
  while (pwVar6 = pwVar11, pwVar6 != (wchar_t *)0x0) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
    pwVar10 = pwVar6;
  }
  FName::FName(&local_res10,pwVar10 + 2,1);
  plVar1 = (longlong *)(param_1 + 0x768);
  FWeakObjectPtr::operator=(&local_168,0);
  local_160 = (wchar_t *)0x0;
  FWeakObjectPtr::operator=(&local_168,param_1);
  local_160 = local_res10;
  if ((local_res10 != (wchar_t *)0x0) && (lVar8 = FWeakObjectPtr::Get(&local_168), lVar8 != 0)) {
    UObject::FindFunction(lVar8,local_160);
  }
  piVar3 = (int *)*plVar1;
  iVar2 = *(int *)(param_1 + 0x770);
  piVar15 = piVar3;
  do {
    if (piVar15 == piVar3 + (longlong)iVar2 * 4) {
LAB_140eb1525:
      iVar2 = *(int *)(param_1 + 0x770);
      *(int *)(param_1 + 0x770) = iVar2 + 1;
      if (*(int *)(param_1 + 0x774) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar14 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar14 = (int)local_168;
      puVar14[1] = local_168._4_4_;
      *(wchar_t **)(puVar14 + 2) = local_160;
LAB_140eb1560:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      lVar8 = *(longlong *)(param_1 + 0x5b0);
      if (lVar8 != 0) {
        lVar9 = *(longlong *)(param_1 + 0x698);
        pwVar10 = pwVar13;
        local_168 = lVar9;
        if (lVar9 != 0) {
          uVar12 = UBlendableInterface::GetPrivateStaticClass();
          pwVar10 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar12);
          lVar8 = *(longlong *)(param_1 + 0x5b0);
        }
        local_160 = pwVar10;
        FUN_142f05530(lVar8,&local_168,DAT_1468718f8);
        lVar8 = *(longlong *)(param_1 + 0x6a0);
        pwVar10 = pwVar13;
        local_168 = lVar8;
        if (lVar8 != 0) {
          uVar12 = UBlendableInterface::GetPrivateStaticClass();
          pwVar10 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar12);
        }
        local_160 = pwVar10;
        FUN_142f05530(*(undefined8 *)(param_1 + 0x5b0),&local_168,DAT_1468718f0);
        lVar8 = *(longlong *)(param_1 + 0x6b0);
        pwVar10 = pwVar13;
        local_168 = lVar8;
        if (lVar8 != 0) {
          uVar12 = UBlendableInterface::GetPrivateStaticClass();
          pwVar10 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar12);
        }
        local_160 = pwVar10;
        FUN_142f05530(*(undefined8 *)(param_1 + 0x5b0),&local_168,DAT_146b3e2a0);
        lVar8 = *(longlong *)(param_1 + 0x6a8);
        local_168 = lVar8;
        if (lVar8 != 0) {
          uVar12 = UBlendableInterface::GetPrivateStaticClass();
          pwVar13 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar12);
        }
        local_160 = pwVar13;
        FUN_142f05530(*(undefined8 *)(param_1 + 0x5b0),&local_168,DAT_146b3e2b8);
      }
      FUN_140e9c100(&local_158);
      return;
    }
    bVar4 = bVar5;
    if (((*piVar15 != (int)local_168) ||
        (local_168._4_4_ = (int)((ulonglong)local_168 >> 0x20),
        bVar16 = piVar15[1] != local_168._4_4_, bVar16)) &&
       ((cVar7 = FWeakObjectPtr::IsValid(piVar15), cVar7 != '\0' ||
        (cVar7 = FWeakObjectPtr::IsValid(&local_168), cVar7 != '\0')))) {
      bVar4 = false;
    }
    if ((!bVar4) || (bVar4 = bVar5, *(wchar_t **)(piVar15 + 2) != local_160)) {
      bVar4 = false;
    }
    if (bVar4) {
      if ((int)((longlong)piVar15 - (longlong)piVar3 >> 4) != -1) goto LAB_140eb1560;
      goto LAB_140eb1525;
    }
    piVar15 = piVar15 + 4;
  } while( true );
}



// FUNCTION 140eb16b0 FUN_140eb16b0 body=560 status=ok
// SIG undefined FUN_140eb16b0(void)

void FUN_140eb16b0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *_Src;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  if (param_2 != (longlong *)0x0) {
    uVar5 = ALevelScriptActor::GetPrivateStaticClass();
    lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
    if (lVar6 != 0) {
      FUN_1409f8cd0(lVar6);
      FUN_140a117b0(lVar6);
      if (*(longlong *)(param_1 + 0x208) != 0) {
        FUN_140a14ab0(lVar6,*(longlong *)(param_1 + 0x208),*(undefined1 *)(param_1 + 0x210),
                      *(undefined1 *)(param_1 + 0x211));
      }
      if (*(char *)(param_1 + 0x212) != '\0') {
        puVar3 = *(undefined4 **)(param_1 + 0x238);
        iVar2 = *(int *)(param_1 + 0x240);
        if (puVar3 != puVar3 + (longlong)iVar2 * 8) {
          puVar8 = puVar3 + 2;
          do {
            local_38[0] = 0;
            FUN_1409f0400(local_38,*(undefined8 *)(puVar8 + -2),*puVar8,0,0);
            local_20 = puVar8[4];
            lVar6 = (longlong)local_20;
            _Src = *(void **)(puVar8 + 2);
            local_28 = (void *)0x0;
            if (local_20 == 0) {
              local_1c = 0;
            }
            else {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (&local_28,local_20,0);
              _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar6 << 3);
            }
            local_48 = 0;
            local_40 = 0;
            FUN_142ffa740(local_38,&local_48);
            if (0 < (int)local_40) {
              lVar6 = FUN_1413f82e0();
              if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                  lVar6 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                FUN_140c33040(param_2,&local_48,*(undefined1 *)(param_1 + 0x248),1,1);
              }
            }
            if ((int)local_40 != 0) {
              plVar7 = (longlong *)(local_48 + 0x78);
              iVar9 = (int)local_40;
              do {
                if (*plVar7 != 0) {
                  FMemory::Free();
                }
                plVar7 = plVar7 + 0x11;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            if (local_48 != 0) {
              FMemory::Free();
            }
            if (local_28 != (void *)0x0) {
              FMemory::Free();
            }
            TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
            ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(local_38);
            puVar1 = puVar8 + 6;
            puVar8 = puVar8 + 8;
          } while (puVar1 != puVar3 + (longlong)iVar2 * 8);
        }
      }
    }
  }
  return;
}



// FUNCTION 140eb18e0 FUN_140eb18e0 body=511 status=ok
// SIG undefined FUN_140eb18e0(void)

void FUN_140eb18e0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int local_res10;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar3 = (**(code **)(*param_2 + 0x678))(param_2);
  if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x4c0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x358))(plVar1,1);
  }
  lVar3 = FUN_1429d7ab0();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (param_2 = (longlong *)param_2[0x92], param_2 == (longlong *)0x0)) {
    return;
  }
  lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_3 + 0x38) == 0) {
    return;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x38) + 0x118);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar3 = *(longlong *)(param_3 + 0x40);
  if (lVar3 == 0) {
LAB_140eb1a53:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_141477600();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((!bVar2) || (*(longlong *)(param_3 + 0x38) == 0)) goto LAB_140eb1a53;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x988);
    if ((local_res10 == -1) ||
       ((lVar3 = *(longlong *)(lVar3 + 0x988) + (longlong)local_res10 * 0x18, lVar3 == 0 ||
        (plVar6 = (longlong *)(lVar3 + 8), plVar6 == (longlong *)0x0)))) goto LAB_140eb1a53;
    lVar3 = *plVar6;
  }
  if (lVar3 == 0) {
    uVar5 = FUN_142e7dfd0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
    if (lVar3 == 0) goto LAB_140eb1a84;
  }
  FUN_14076b300(param_2,lVar3);
LAB_140eb1a84:
  uVar5 = UCircularThrobber::GetPrivateStaticClass();
  lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
  if (((lVar3 != 0) && (lVar4 = param_2[0xbf], lVar4 != 0)) &&
     ((*(longlong *)(lVar4 + 0x180) == *(longlong *)(lVar4 + 0x188) ||
      (*(longlong *)(lVar3 + 0x180) != *(longlong *)(lVar4 + 0x188))))) {
    FUN_142dedd30(lVar4,*(undefined8 *)(lVar3 + 0x180));
  }
  return;
}



// FUNCTION 140eb1ae0 FUN_140eb1ae0 body=541 status=ok
// SIG undefined FUN_140eb1ae0(void)

void FUN_140eb1ae0(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 local_res10;
  code *local_28;
  undefined8 uStack_20;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x4e0) != 0) {
      uVar4 = FUN_14072e0d0(param_2,*(longlong *)(param_1 + 0x4e0),0,0,
                            *(undefined4 *)(param_1 + 0x4e8),0,0,0,0,
                            *(undefined8 *)(param_1 + 0x4f0));
      FWeakObjectPtr::operator=(param_1 + 0x564,uVar4);
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x564);
      if (cVar3 != '\0') {
        uVar4 = FWeakObjectPtr::Get(param_1 + 0x564);
        FUN_142b7b2b0(uVar4);
        uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
        local_28 = FUN_140ebd240;
        pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AOakVehicleSpawnPoint::PostSpawnIntro",L"::");
        pwVar2 = (wchar_t *)0x0;
        while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(&local_res10,pwVar2 + 2,1);
        lVar6 = FWeakObjectPtr::Get(param_1 + 0x564);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                  (lVar6 + 0xc0,param_1,&local_28,local_res10);
        uStack_20 = uStack_20 & 0xffffffff00000000;
        local_28 = FUN_140ebd240;
        pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AOakVehicleSpawnPoint::PostSpawnIntro",L"::");
        pwVar2 = (wchar_t *)0x0;
        while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(&local_res10,pwVar2 + 2,1);
        lVar6 = FWeakObjectPtr::Get(param_1 + 0x564);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                  (lVar6 + 0xd0,param_1,&local_28,local_res10);
      }
      if (*(char *)(param_1 + 0x560) != '\0') {
        FUN_140ea00c0(param_1,param_2);
      }
    }
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x564);
    if (cVar3 == '\0') {
      FUN_140ebd240(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140eb1d00 FUN_140eb1d00 body=450 status=ok
// SIG undefined FUN_140eb1d00(void)

void FUN_140eb1d00(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  undefined8 local_res10;
  
  uVar6 = ULevelStreaming::GetWorld();
  cVar5 = UWorld::IsGameWorld(uVar6);
  if ((cVar5 != '\0') && ((*(uint *)(param_1 + 8) >> 4 & 1) == 0)) {
    ULevelStreaming::SetShouldBeVisible(param_1,1);
    if (*(char *)(param_1 + 0x140) == '\0') {
      lVar7 = ULevelStreaming::GetWorld(param_1);
      plVar10 = *(longlong **)(lVar7 + 0x88);
      plVar1 = plVar10 + *(int *)(lVar7 + 0x90);
      for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
        lVar7 = *plVar10;
        if (lVar7 != 0) {
          lVar8 = USoundNodeEnveloper::StaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && (*(char *)(lVar7 + 0x141) == *(char *)(param_1 + 0x141))) &&
             (*(char *)(lVar7 + 0x140) != '\0')) {
            FUN_140e96bb0(param_1 + 0x148);
          }
        }
      }
    }
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnLevelLoadedChanged",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    FUN_14074ba20(param_1 + 0xe0,param_1,FUN_140eb70f0,local_res10);
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnLevelLoadedChanged",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    FUN_14074ba20(param_1 + 0xf0,param_1,FUN_140eb70f0,local_res10);
  }
  return;
}



// FUNCTION 140eb1ed0 FUN_140eb1ed0 body=131 status=ok
// SIG undefined FUN_140eb1ed0(void)

void FUN_140eb1ed0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1407ccc40();
  if ((*(longlong *)(param_1 + 0x980) != 0) && (lVar1 = *param_2, lVar1 != 0)) {
    lVar3 = FUN_1413f82e0();
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
      *(undefined1 *)(lVar1 + 0x21fd) = 1;
    }
  }
  FUN_140ec6330(param_1,*param_2);
  return;
}



// FUNCTION 140eb1f60 FUN_140eb1f60 body=265 status=ok
// SIG undefined FUN_140eb1f60(void)

void FUN_140eb1f60(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  FUN_14077c5d0();
  lVar7 = *param_2;
  if (lVar7 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if (*(longlong *)(param_1 + 0x9c8) != 0) {
        lVar5 = FUN_1413d5810();
        lVar4 = *(longlong *)(param_1 + 0x9c8);
        for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar5) goto LAB_140eb1ff1;
        }
      }
      lVar4 = 0;
LAB_140eb1ff1:
      FUN_140c57710(lVar7,*(undefined4 *)(param_1 + 0x9c4),lVar4);
      if (*(char *)(param_1 + 0x9c1) != '\0') {
        uVar6 = ALevelScriptActor::GetPrivateStaticClass();
        lVar7 = AGameStateBase::OnRep_GameModeClass(lVar7,uVar6);
        if (lVar7 != 0) {
          lVar4 = ALevelScriptActor::GetPrivateStaticClass();
          iVar1 = *(int *)(lVar4 + 0x90);
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < iVar1) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)iVar1 * 8)
              != lVar4 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FUN_140a166b0(lVar7,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140eb2070 FUN_140eb2070 body=183 status=ok
// SIG undefined FUN_140eb2070(void)

void FUN_140eb2070(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong local_28 [2];
  longlong local_18 [2];
  
  FUN_142340f20();
  *(longlong *)(param_1 + 0x590) = param_1;
  plVar1 = (longlong *)(param_1 + 0x648);
  *(undefined1 *)(param_1 + 0x638) = 0;
  uVar2 = 0;
  *(longlong *)(param_1 + 0x640) = param_1;
  if (plVar1 != local_28) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x650) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x658);
  if (plVar1 != local_18) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x660) = 0;
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x590) + 0x118);
  }
  *(undefined8 *)(param_1 + 0x670) = uVar2;
  *(longlong *)(param_1 + 0x458) = param_1;
  *(longlong *)(param_1 + 0x478) = param_1;
  *(longlong *)(param_1 + 0x490) = param_1;
  return;
}



// FUNCTION 140eb2130 FUN_140eb2130 body=55 status=ok
// SIG undefined FUN_140eb2130(void)

void FUN_140eb2130(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar1 = FUN_142c48f90(*(longlong *)(param_1 + 0x48),param_1 + -0x178,0);
    FUN_140ea86c0(param_1 + -0x178,uVar1);
    return;
  }
  return;
}



// FUNCTION 140eb2170 FUN_140eb2170 body=125 status=ok
// SIG undefined FUN_140eb2170(void)

void FUN_140eb2170(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong local_res10 [3];
  
  FUN_140e7ae90();
  local_res10[0] = *(longlong *)(param_2 + 8);
  if (local_res10[0] != 0) {
    lVar2 = UUGJournalKey::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(local_res10[0] + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res10[0] + 0x10) + 0x88) +
         (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x4b0,local_res10);
      FUN_140e7ae90(param_1);
    }
  }
  return;
}



// FUNCTION 140eb21f0 FUN_140eb21f0 body=270 status=ok
// SIG undefined FUN_140eb21f0(void)

void FUN_140eb21f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18;
  
  if ((param_2 != 0) && (lVar4 = *(longlong *)(param_2 + 0x118), lVar4 != 0)) {
    uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar2);
    if ((plVar3 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3), lVar4 != 0))
    {
      uVar1 = FUN_140eac320(param_1);
      local_58 = (**(code **)(*plVar3 + 0x38))(plVar3);
      local_50 = *param_3;
      local_34 = *(undefined4 *)((longlong)param_3 + 0x1c);
      local_3c = *(undefined4 *)((longlong)param_3 + 0x14);
      local_48 = *(undefined4 *)(param_3 + 1);
      local_38 = *(undefined1 *)(param_3 + 3);
      local_44 = *(undefined4 *)((longlong)param_3 + 0xc);
      local_30 = param_3[4];
      local_40 = *(undefined4 *)(param_3 + 2);
      local_28 = param_3[5];
      local_20 = *(undefined4 *)(param_3 + 6);
      local_18 = uVar1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar4,&local_58);
    }
  }
  return;
}



// FUNCTION 140eb2300 FUN_140eb2300 body=117 status=ok
// SIG undefined FUN_140eb2300(void)

void FUN_140eb2300(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong local_res10 [3];
  
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 != 0) {
    lVar3 = UUGJournalKey::GetPrivateStaticClass();
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
      local_res10[0] = lVar1;
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x4b0,local_res10);
      FUN_140e7ae90(param_1);
    }
  }
  return;
}



// FUNCTION 140eb2380 FUN_140eb2380 body=368 status=ok
// SIG undefined FUN_140eb2380(void)

void FUN_140eb2380(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28;
  
  if (param_2 != 0) {
    lVar4 = *(longlong *)(param_2 + 0x118);
    if (lVar4 != 0) {
      uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar2);
      if (((plVar3 != (longlong *)0x0) &&
          (lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3), lVar4 != 0)) &&
         (lVar6 = *(longlong *)(param_1 + 0x50), lVar6 != 0)) {
        lVar5 = FUN_142e49950();
        do {
          if (lVar6 == lVar5) {
            uVar1 = FUN_140eac320(param_1);
            local_68 = (**(code **)(*plVar3 + 0x38))(plVar3);
            local_60 = *param_3;
            local_44 = *(undefined4 *)((longlong)param_3 + 0x1c);
            local_4c = *(undefined4 *)((longlong)param_3 + 0x14);
            local_58 = *(undefined4 *)(param_3 + 1);
            local_48 = *(undefined1 *)(param_3 + 3);
            local_54 = *(undefined4 *)((longlong)param_3 + 0xc);
            local_40 = param_3[4];
            local_50 = *(undefined4 *)(param_3 + 2);
            local_38 = param_3[5];
            local_30 = *(undefined4 *)(param_3 + 6);
            local_28 = uVar1;
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (lVar4,&local_68);
            break;
          }
          lVar6 = *(longlong *)(lVar6 + 0x30);
        } while (lVar6 != 0);
      }
    }
    if ((param_3[4] != 0) && (lVar4 = *(longlong *)(param_3[4] + 0x488), lVar4 != 0)) {
      uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,*(undefined8 *)(param_2 + 0x118),param_3);
      }
    }
  }
  return;
}



// FUNCTION 140eb24f0 FUN_140eb24f0 body=101 status=ok
// SIG undefined FUN_140eb24f0(void)

undefined8 FUN_140eb24f0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(*param_2 + 0x670))(param_2);
  if (lVar2 == 0) {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140eb2560 FUN_140eb2560 body=233 status=ok
// SIG undefined FUN_140eb2560(void)

undefined8 FUN_140eb2560(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_140604cc0();
  lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
  if (lVar4 != 0) {
    if ((*(longlong *)(lVar4 + 0x1b8) != 0) && (cVar2 = FUN_1405ebb60(), cVar2 != '\0')) {
      return 1;
    }
    if ((*(longlong *)(lVar4 + 0x218) != 0) && (cVar2 = FUN_1405ebb60(), cVar2 != '\0')) {
      return 1;
    }
  }
  lVar4 = FUN_142ddddc0(param_2);
  if ((lVar4 != 0) && (cVar2 = FUN_142dd3b80(lVar4,0,0), cVar2 != '\0')) {
    return 1;
  }
  lVar4 = FUN_1413f82e0();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (lVar4 = FUN_140c41820(param_2), lVar4 != 0)) {
    return 1;
  }
  uVar3 = FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  return uVar3;
}



// FUNCTION 140eb2650 FUN_140eb2650 body=49 status=ok
// SIG undefined FUN_140eb2650(void)

bool FUN_140eb2650(undefined8 param_1,char param_2,float param_3)

{
  float fVar1;
  
  if (param_2 == '\0') {
    return false;
  }
  fVar1 = (float)FUN_140eadf60();
  return param_3 < fVar1;
}



// FUNCTION 140eb2690 FUN_140eb2690 body=11 status=ok
// SIG undefined FUN_140eb2690(void)

bool FUN_140eb2690(longlong param_1)

{
  return *(char *)(param_1 + 0x3ae) == '\x02';
}



// FUNCTION 140eb26a0 FUN_140eb26a0 body=251 status=ok
// SIG undefined FUN_140eb26a0(void)

undefined1 FUN_140eb26a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140eb270c;
  }
  lVar6 = 0;
LAB_140eb270c:
  uVar8 = FUN_140eac060(param_1);
  uVar5 = FUN_140ee6090(lVar6,uVar8,param_1 + 0x760,local_28,*(undefined4 *)(param_1 + 0x858));
  if (param_2 != 0) {
    FText::operator=(param_2,local_28);
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
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 140eb27a0 FUN_140eb27a0 body=25 status=ok
// SIG undefined FUN_140eb27a0(void)

undefined8 FUN_140eb27a0(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x3ae) != '\x02') &&
     ((param_2 == '\0' || (*(char *)(param_1 + 0x3ae) != '\x01')))) {
    return 0;
  }
  return 1;
}



// FUNCTION 140eb27c0 FUN_140eb27c0 body=102 status=ok
// SIG undefined FUN_140eb27c0(void)

undefined1 FUN_140eb27c0(longlong param_1)

{
  char cVar1;
  float fVar2;
  
  fVar2 = (float)FUN_140ea5fd0();
  if (((fVar2 < 0.0) || (*(float *)(param_1 + 0x1d8) <= 0.0 && *(float *)(param_1 + 0x1d8) != 0.0))
     && (*(longlong *)(param_1 + 0x240) == 0)) {
    if (*(longlong *)(param_1 + 0x238) == 0) {
      return 1;
    }
    if ((ABS(*(float *)(*(longlong *)(param_1 + 0x238) + 0x1d8)) <= 1e-08) &&
       (cVar1 = FUN_140eb2d60(), cVar1 == '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140eb2830 FUN_140eb2830 body=102 status=ok
// SIG undefined FUN_140eb2830(void)

undefined1 FUN_140eb2830(longlong param_1)

{
  char cVar1;
  float fVar2;
  
  fVar2 = (float)FUN_140ea5fd0();
  if (((0.0 < fVar2) || (0.0 < *(float *)(param_1 + 0x1d8))) &&
     (*(longlong *)(param_1 + 0x238) == 0)) {
    if (*(longlong *)(param_1 + 0x240) == 0) {
      return 1;
    }
    if ((ABS(*(float *)(*(longlong *)(param_1 + 0x240) + 0x1d8)) <= 1e-08) &&
       (cVar1 = FUN_140ec5ea0(), cVar1 == '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140eb28a0 FUN_140eb28a0 body=299 status=ok
// SIG undefined FUN_140eb28a0(void)

ulonglong FUN_140eb28a0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  ulonglong in_RAX;
  undefined8 *puVar4;
  int iVar5;
  float fStackX_c;
  float fStackX_14;
  undefined1 local_18 [16];
  
  if (param_1 != 0) {
    in_RAX = UMovieSceneSequencePlayer::IsPlaying();
    if ((((char)in_RAX != '\0') && (in_RAX = *(ulonglong *)(param_1 + 0x8a0), in_RAX != 0)) &&
       (*(char *)(in_RAX + 0x5fc) == '\0')) {
      puVar4 = (undefined8 *)FUN_141f52130(param_1,local_18);
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      puVar4 = (undefined8 *)FUN_141f520f0(param_1,local_18);
      in_RAX = (ulonglong)(int)*puVar4;
      iVar5 = (int)((ulonglong)puVar4[1] >> 0x20);
      fStackX_c = (float)((ulonglong)*puVar4 >> 0x20);
      fVar3 = ((float)iVar5 * fStackX_c + (float)(longlong)((longlong)iVar5 * in_RAX)) /
              (float)(int)puVar4[1];
      if ((2.0 <= fVar3) &&
         (iVar5 = (int)((ulonglong)uVar2 >> 0x20), in_RAX = (ulonglong)iVar5,
         fStackX_14 = (float)((ulonglong)uVar1 >> 0x20),
         1.0 <= ((float)(longlong)((longlong)(int)uVar1 * in_RAX) + (float)iVar5 * fStackX_14) /
                (float)(int)uVar2 - fVar3)) {
        return CONCAT71((int7)(int3)((ulonglong)uVar2 >> 0x28),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140eb29d0 FUN_140eb29d0 body=12 status=ok
// SIG undefined FUN_140eb29d0(void)

bool FUN_140eb29d0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x980) != 0;
}



// FUNCTION 140eb29e0 IsValidToEvaluate body=8 status=ok
// SIG undefined IsValidToEvaluate(void)

undefined1 FAnimNode_PowerIK::IsValidToEvaluate(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x200);
}



// FUNCTION 140eb29f0 FUN_140eb29f0 body=123 status=ok
// SIG undefined FUN_140eb29f0(void)

ulonglong FUN_140eb29f0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1429d7ab0();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(plVar2[2] + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(plVar2[2] + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      in_RAX = (**(code **)(*plVar2 + 0x780))(plVar2);
      if ((char)in_RAX != '\0') {
        in_RAX = (**(code **)(*plVar2 + 0x778))(plVar2);
        if ((char)in_RAX != '\0') {
          return 1;
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140eb2a70 FUN_140eb2a70 body=67 status=ok
// SIG undefined FUN_140eb2a70(void)

ulonglong FUN_140eb2a70(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x598);
  uVar2 = (longlong)*(int *)(param_1 + 0x5a0) * 0x40 + uVar1;
  do {
    if (uVar1 == uVar2) {
LAB_140eb2a9f:
      return uVar1 & 0xffffffffffffff00;
    }
    if (*(longlong *)(uVar1 + 0x10) == param_2) {
      if ((uVar1 != 0) && (0.0 < *(float *)(uVar1 + 0x18))) {
        return CONCAT71((int7)(uVar1 >> 8),1);
      }
      goto LAB_140eb2a9f;
    }
    uVar1 = uVar1 + 0x40;
  } while( true );
}



// FUNCTION 140eb2ac0 FUN_140eb2ac0 body=388 status=ok
// SIG undefined FUN_140eb2ac0(void)

bool FUN_140eb2ac0(undefined8 param_1,char param_2)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float extraout_XMM0_Da;
  
  if (param_2 == '\0') {
    return false;
  }
  uVar2 = 0;
  if (param_2 == '\x02') {
    FUN_140eadf60(param_1,2);
    return 0.0 < extraout_XMM0_Da;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = DAT_146b33f38;
  lVar5 = DAT_146b33f38 + 0x60;
  lVar3 = FWeakObjectPtr::Get(lVar5);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar4 + 0x68)) {
      return false;
    }
    if (*(longlong *)(lVar4 + 0x70) == 0) {
      return false;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 0x68) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar5);
    if (lVar3 == 0) {
      return false;
    }
  }
  lVar4 = FUN_142e778a0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if (param_2 == '\x01') {
      lVar4 = *(longlong *)(lVar3 + 0x58);
    }
    else if (param_2 == '\x03') {
      lVar4 = *(longlong *)(lVar3 + 0x48);
    }
    else if (param_2 == '\x04') {
      lVar4 = *(longlong *)(lVar3 + 0x50);
    }
    else {
      if (param_2 != '\x05') {
        return false;
      }
      lVar4 = *(longlong *)(lVar3 + 0x60);
    }
    uVar2 = FUN_140eb2a70(param_1,*(undefined8 *)(lVar4 + 0x90));
  }
  return (bool)uVar2;
}



// FUNCTION 140eb2c60 FUN_140eb2c60 body=253 status=ok
// SIG undefined FUN_140eb2c60(void)

undefined8 FUN_140eb2c60(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = BuildSettings::IsPromotedBuild();
  if (cVar1 != '\0') {
    cVar1 = FUN_140ea01d0(param_1);
    if (cVar1 != '\0') {
      return 1;
    }
    if ((wchar_t *)*param_2 !=
        L"Has OnMissionLoadedEnabledCondition but not connected to OakMissionSpawner.") {
      iVar2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0x4c) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x4c);
        iVar2 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = iVar2 + 0x4c;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 0x4c) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,
                      L"Has OnMissionLoadedEnabledCondition but not connected to OakMissionSpawner."
                      ,0x4c);
    }
  }
  return 0;
}



// FUNCTION 140eb2d60 FUN_140eb2d60 body=63 status=ok
// SIG undefined FUN_140eb2d60(void)

undefined1 FUN_140eb2d60(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x238) == 0) {
    return 0;
  }
  if ((ABS(*(float *)(*(longlong *)(param_1 + 0x238) + 0x1d8)) <= 1e-08) &&
     (cVar1 = FUN_140eb2d60(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 140eb2db0 AddToBuildPartList body=31 status=ok
// SIG undefined AddToBuildPartList(void)

void ARawbotsBuildModePawn::AddToBuildPartList(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_142dafbc0(param_1 + 0x3b8,local_res10);
  return;
}



// FUNCTION 140eb2dd0 FUN_140eb2dd0 body=219 status=ok
// SIG undefined FUN_140eb2dd0(void)

void FUN_140eb2dd0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res18;
  
  lVar4 = *(longlong *)(param_1 + 0x4c0);
  lVar5 = (longlong)*(int *)(param_1 + 0x4c8) * 0xf0 + lVar4;
  local_res18 = param_3;
  if (lVar4 == lVar5) {
    return;
  }
  do {
    if (*(longlong *)(lVar4 + 0x18) != 0) {
      lVar2 = FUN_142e49950();
      lVar6 = *(longlong *)(lVar4 + 0x18);
      for (lVar1 = lVar6; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar2) goto LAB_140eb2e38;
      }
    }
    lVar6 = 0;
LAB_140eb2e38:
    if (param_2 != 0) {
      lVar2 = FUN_142e49950();
      for (lVar1 = param_2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        lVar3 = param_2;
        if (lVar1 == lVar2) goto LAB_140eb2e60;
      }
    }
    lVar3 = 0;
LAB_140eb2e60:
    if (lVar6 == lVar3) {
      if (lVar4 == 0) {
        return;
      }
      FUN_142dafbc0(lVar4 + 0x58,&local_res18);
      return;
    }
    lVar4 = lVar4 + 0xf0;
    if (lVar4 == lVar5) {
      return;
    }
  } while( true );
}



// FUNCTION 140eb2eb0 FUN_140eb2eb0 body=78 status=ok
// SIG undefined FUN_140eb2eb0(void)

void FUN_140eb2eb0(longlong param_1,char param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 local_res18 [2];
  
  pcVar1 = *(char **)(param_1 + 0x4c0);
  pcVar2 = pcVar1 + (longlong)*(int *)(param_1 + 0x4c8) * 0xf0;
  if (pcVar1 != pcVar2) {
    while (*pcVar1 != param_2) {
      pcVar1 = pcVar1 + 0xf0;
      if (pcVar1 == pcVar2) {
        return;
      }
    }
    local_res18[0] = param_3;
    FUN_142dafbc0(pcVar1 + 0x58,local_res18);
  }
  return;
}



// FUNCTION 140eb2f00 FUN_140eb2f00 body=31 status=ok
// SIG undefined FUN_140eb2f00(void)

void FUN_140eb2f00(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_142dafbc0(param_1 + 0x6c0,local_res10);
  return;
}



// FUNCTION 140eb2f20 FUN_140eb2f20 body=212 status=ok
// SIG undefined FUN_140eb2f20(void)

void FUN_140eb2f20(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *(undefined1 *)(param_1 + 0x188) = 1;
  piVar3 = *(int **)(param_1 + 0xb8);
  piVar2 = piVar3 + (longlong)*(int *)(param_1 + 0xc0) * 0x10;
  for (; piVar3 != piVar2; piVar3 = piVar3 + 0x10) {
    if ((float)piVar3[6] != 0.0) {
      piVar3[6] = 0;
      FUN_140eb4310(piVar3,param_1,0);
      if (*piVar3 == -1) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        *piVar3 = *(int *)(param_1 + 0x50);
        iVar1 = *(int *)(param_1 + 0x50);
        if (iVar1 == -1) {
          iVar1 = 0;
        }
        *(int *)(param_1 + 0x50) = iVar1;
      }
      piVar3[1] = piVar3[1] + 1;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                (param_1);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      if (*(int *)(param_1 + 0x54) == -1) {
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
      if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x260))();
      }
    }
  }
  return;
}



// FUNCTION 140eb3000 FUN_140eb3000 body=599 status=ok
// SIG undefined FUN_140eb3000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eb3000(longlong param_1,char param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FUN_140ec1b40(param_1,0);
  if ((param_2 != '\0') && (*(longlong *)(param_1 + 0x118) != 0)) {
    local_d8 = *(ulonglong *)(param_1 + 0x1c8);
    uVar3 = AActor::GetWorldTimerManager();
    lVar4 = FTimerManager::FindTimer(uVar3,&local_d8,0);
    if ((lVar4 == 0) || (*(char *)(lVar4 + 1) != '\x02')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x188);
    local_d0 = &LAB_140eb41b0;
    uStack_c8 = 0;
    uVar3 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_d0;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_d0._4_4_;
      *(undefined4 *)(plVar5 + 3) = uStack_c8;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_c4;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar4;
      *plVar5 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_b8 = 0;
    local_b0 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_b8);
    }
    FWeakObjectPtr::operator=(local_a8,0);
    local_e0 = 0xbf800000;
    local_e8 = 1;
    local_a0 = 0;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    local_98 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_1 + 0x1c8,&local_b8,uVar1);
    if (local_58 != 0) {
      plVar7 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar7 = local_68;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar4 = FMemory::Realloc(plVar5,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    if (bVar2) {
      local_d0 = *(undefined1 **)(param_1 + 0x1c8);
      uVar3 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
      uVar6 = FTimerManager::FindTimer(uVar3,&local_d0,&local_d8);
      FUN_142880730(uVar3,uVar6,local_d8 & 0xffffffff);
    }
  }
  return;
}



// FUNCTION 140eb3260 FUN_140eb3260 body=120 status=ok
// SIG undefined FUN_140eb3260(void)

void FUN_140eb3260(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_140eb0bc0(param_1,param_3,0,param_2);
  if ((0 < *(int *)(param_1 + 0x1a8)) && (*(char *)(param_1 + 0x1d8) != '\0')) {
    iVar2 = FUN_142340f30(param_1);
    if (iVar2 != 3) {
      cVar1 = FUN_140eb24f0(param_1,param_3);
      if (cVar1 != '\0') {
        cVar1 = FUN_142d815d0(param_1,*(undefined8 *)(param_1 + 0x118));
        if (cVar1 != '\0') {
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x1a0,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140eb32e0 FUN_140eb32e0 body=535 status=ok
// SIG undefined FUN_140eb32e0(void)

void FUN_140eb32e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_38;
  undefined1 local_30;
  
  plVar6 = *(longlong **)(param_1 + 0x1f8);
  plVar5 = plVar6 + *(int *)(param_1 + 0x200);
  for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
    if ((*plVar6 != 0) && (cVar1 = FUN_142390930(*plVar6,param_3), cVar1 != '\0')) {
      return;
    }
  }
  if (*(char *)(param_1 + 500) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 500) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x118);
  if ((*(char *)(param_1 + 0x1d8) != '\0') && (iVar2 = FUN_142340f30(param_1), iVar2 != 3)) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    if (lVar3 == 0) {
      fVar8 = 0.0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      fVar8 = *(float *)(lVar3 + 0x790);
    }
    if ((((*(float *)(param_1 + 0x1b8) <= 0.0) || (*(float *)(param_1 + 0x1f0) <= 0.0)) ||
        (*(float *)(param_1 + 0x1f0) + *(float *)(param_1 + 0x1b8) <= fVar8)) &&
       ((*(int *)(param_1 + 0x1b0) < 1 || (*(int *)(param_1 + 0x1b4) < *(int *)(param_1 + 0x1b0)))))
    {
      if (*(longlong *)(param_1 + 0x1d0) != 0) {
        uVar7 = 0;
        if (*(char *)(param_1 + 0x1c9) != '\0') {
          uVar7 = uVar4;
        }
        cVar1 = FUN_142c48f90(*(longlong *)(param_1 + 0x1d0),param_3,uVar7);
        if (cVar1 == '\0') goto LAB_140eb34db;
      }
      cVar1 = FUN_140eb24f0(param_1,param_3);
      if ((*(char *)(param_1 + 0x1c8) == '\0') || (cVar1 != '\0')) {
        local_30 = cVar1 != '\0';
        local_38 = param_3;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 400,&local_38);
        if (*(int *)(param_1 + 0x1b0) != 0) {
          *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
        }
        if (0.0 < *(float *)(param_1 + 0x1b8)) {
          *(float *)(param_1 + 0x1f0) = fVar8;
        }
        if (*(longlong *)(param_1 + 0x1c0) != 0) {
          uVar4 = UNativeUserListEntry::GetPrivateStaticClass();
          cVar1 = UClass::ImplementsInterface
                            (*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x10),uVar4);
          if (cVar1 != '\0') {
            lVar3 = *(longlong *)(param_1 + 0x120);
            if (lVar3 == 0) {
              lVar3 = FUN_1423407b0(param_1);
            }
            plVar5 = (longlong *)FUN_142f6c9f0(lVar3);
            if ((plVar5 == (longlong *)0x0) ||
               (cVar1 = (**(code **)(*plVar5 + 0x700))(plVar5), cVar1 == '\0')) goto LAB_140eb34db;
          }
          FUN_140ea5590(param_1);
        }
      }
    }
  }
LAB_140eb34db:
  *(undefined1 *)(param_1 + 500) = 0;
  return;
}



// FUNCTION 140eb3510 FUN_140eb3510 body=77 status=ok
// SIG undefined FUN_140eb3510(void)

void FUN_140eb3510(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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



// FUNCTION 140eb3560 FUN_140eb3560 body=130 status=ok
// SIG undefined FUN_140eb3560(void)

void FUN_140eb3560(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(longlong *)(param_1 + 0x590) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x590) + 0x118), lVar3 != 0)) {
    plVar4 = *(longlong **)(param_1 + 0x5a8);
    bVar2 = *(byte *)(lVar3 + 0x80);
    plVar1 = plVar4 + (longlong)*(int *)(param_1 + 0x5b0) * 3;
    for (; plVar4 != plVar1; plVar4 = plVar4 + 3) {
      if (*plVar4 != 0) {
        FUN_142397540(*plVar4,bVar2 & 1,1);
      }
    }
  }
  return;
}



// FUNCTION 140eb35f0 FUN_140eb35f0 body=30 status=ok
// SIG undefined FUN_140eb35f0(void)

void FUN_140eb35f0(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && ((*(uint *)(param_2 + 0x4cc) >> 1 & 1) != 0)) {
    *(byte *)(param_1 + 0x6b4) = *(byte *)(param_1 + 0x6b4) | 0x20;
    FUN_140e7ae90();
    return;
  }
  return;
}



// FUNCTION 140eb3610 FUN_140eb3610 body=638 status=ok
// SIG undefined FUN_140eb3610(void)

void FUN_140eb3610(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_68 [64];
  
  lVar12 = *(longlong *)(param_1 + 0xb8);
  lVar13 = (longlong)*(int *)(param_1 + 0xc0) * 0x40 + lVar12;
  if (lVar12 != lVar13) {
    do {
      if (*(longlong *)(lVar12 + 0x10) != 0) {
        FUN_140ec8200(lVar12,param_1);
        FUN_140ec88a0(lVar12,param_1);
        if (*(char *)(*(longlong *)(lVar12 + 0x10) + 0x68) != '\0') {
          plVar8 = (longlong *)(param_1 + 0xd8);
          plVar9 = (longlong *)*plVar8;
          plVar1 = plVar9 + (longlong)*(int *)(param_1 + 0xe0) * 5;
          for (; (plVar11 = (longlong *)0x0, plVar9 != plVar1 &&
                 ((*plVar9 != *(longlong *)(lVar12 + 0x10) ||
                  (plVar11 = plVar9, *(char *)((longlong)plVar9 + 0x1c) != '\x02'))));
              plVar9 = plVar9 + 5) {
          }
          if (((*(float *)(lVar12 + 0x18) <= 0.0) || (*(longlong *)(param_1 + 0xb0) == 0)) ||
             (cVar7 = FUN_140eb29f0(), cVar7 == '\0')) {
            if (plVar11 != (longlong *)0x0) {
              *(undefined2 *)((longlong)plVar11 + 0x24) = 0x100;
            }
          }
          else {
            if (plVar11 == (longlong *)0x0) {
              iVar3 = *(int *)(param_1 + 0xe0);
              lVar10 = (longlong)iVar3;
              uVar4 = *(undefined8 *)(lVar12 + 0x10);
              *(int *)(param_1 + 0xe0) = iVar3 + 1;
              if (*(int *)(param_1 + 0xe4) < iVar3 + 1) {
                TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar3);
              }
              lVar5 = *plVar8;
              *(undefined8 *)(lVar5 + lVar10 * 0x28) = uVar4;
              *(undefined8 *)(lVar5 + 8 + lVar10 * 0x28) = 0;
              *(undefined8 *)(lVar5 + 0x10 + lVar10 * 0x28) = 0;
              lVar6 = *(longlong *)(lVar5 + lVar10 * 0x28);
              *(undefined4 *)(lVar5 + 0x18 + lVar10 * 0x28) = 0;
              *(undefined1 *)(lVar5 + 0x1c + lVar10 * 0x28) = 2;
              *(undefined4 *)(lVar5 + 0x20 + lVar10 * 0x28) = 0;
              *(undefined2 *)(lVar5 + 0x24 + lVar10 * 0x28) = 0;
              *(undefined4 *)(lVar5 + 0x18 + lVar10 * 0x28) = *(undefined4 *)(lVar6 + 0x74);
              *(undefined8 *)(lVar5 + 0x10 + lVar10 * 0x28) = *(undefined8 *)(lVar6 + 0x78);
              plVar11 = (longlong *)(*plVar8 + lVar10 * 0x28);
            }
            *(undefined2 *)((longlong)plVar11 + 0x24) = 0x101;
            FUN_140e7ae90(*(undefined8 *)(param_1 + 0xb0));
          }
        }
        lVar10 = *(longlong *)(lVar12 + 0x10);
        if (*(char *)(lVar10 + 0xc0) != '\0') {
          fVar2 = *(float *)(lVar12 + 0x18);
          cVar7 = FUN_14059ee90(lVar12 + 0x20);
          if (fVar2 <= 0.0) {
            if (cVar7 != '\0') {
              if (((*(longlong *)(param_1 + 0xb0) != 0) &&
                  (plVar8 = (longlong *)
                            FUN_14059b7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118),1),
                  plVar8 != (longlong *)0x0)) &&
                 (lVar10 = *(longlong *)(lVar10 + 0xd8), lVar10 != 0)) goto LAB_140eb380e;
              FUN_1405ac8f0(lVar12 + 0x20,0,4);
            }
          }
          else if ((cVar7 == '\0') && (*(longlong *)(lVar10 + 0xd0) != 0)) {
            plVar8 = (longlong *)0x0;
            if (*(longlong *)(param_1 + 0xb0) != 0) {
              plVar8 = (longlong *)
                       FUN_14059b7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118),1);
            }
            if (plVar8 != (longlong *)0x0) {
              lVar10 = *(longlong *)(lVar10 + 0xd0);
LAB_140eb380e:
              lVar10 = FUN_1405a3150(plVar8,local_68,lVar10,0);
              FUN_1405913a0(lVar12 + 0x20,lVar10);
              *(undefined4 *)(lVar12 + 0x30) = *(undefined4 *)(lVar10 + 0x10);
              FUN_140591060(local_68);
            }
          }
        }
        *(undefined4 *)(lVar12 + 0x38) = *(undefined4 *)(lVar12 + 0x18);
      }
      lVar12 = lVar12 + 0x40;
    } while (lVar12 != lVar13);
  }
  return;
}



// FUNCTION 140eb3890 FUN_140eb3890 body=575 status=ok
// SIG undefined FUN_140eb3890(void)

void FUN_140eb3890(longlong param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_50 = CONCAT31(local_50._1_3_,param_3);
  plVar9 = (longlong *)0x0;
  local_48 = 0;
  local_58 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x498,&local_58);
  if (param_3 != '\0') {
    iVar8 = 0;
    local_68 = (longlong *)0x0;
    local_60 = 0;
    local_58 = (longlong *)0x0;
    local_4c = 0;
    FUN_140b81060(param_1,&local_68);
    plVar3 = (longlong *)
             ((ulonglong)((longlong)(local_68 + (int)local_60) + (7 - (longlong)local_68)) >> 3);
    if (local_68 + (int)local_60 < local_68) {
      plVar3 = plVar9;
    }
    plVar7 = local_68;
    plVar10 = plVar9;
    plVar11 = plVar9;
    plVar12 = plVar9;
    if (plVar3 != (longlong *)0x0) {
      do {
        lVar4 = *plVar7;
        cVar2 = FUN_142235c20(param_1,lVar4);
        if (cVar2 != '\0') {
          iVar8 = (int)plVar9;
          local_50 = iVar8 + 1;
          if ((int)plVar10 < (int)local_50) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,plVar9);
            plVar10 = (longlong *)(ulonglong)local_4c;
            plVar11 = local_58;
          }
          plVar9 = (longlong *)(ulonglong)local_50;
          plVar11[iVar8] = lVar4;
        }
        iVar8 = (int)plVar9;
        plVar7 = plVar7 + 1;
        plVar12 = (longlong *)((longlong)plVar12 + 1);
      } while (plVar12 != plVar3);
    }
    if (((0 < (int)local_60 - iVar8) &&
        (local_58 = param_2, local_50 = (int)local_60 - iVar8,
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x4c8,&local_58), DAT_146b17150 != 0)) &&
       (lVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1), lVar4 != 0)) {
      UWorld::GetPlayerControllerIterator(lVar4,&local_58);
      while( true ) {
        if (((int)local_50 < 0) || ((int)local_58[1] <= (int)local_50)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar4 = FWeakObjectPtr::Get();
        if (lVar4 != 0) {
          lVar5 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            for (plVar9 = plVar11; plVar9 != plVar11 + iVar8; plVar9 = plVar9 + 1) {
              if (*plVar9 == *(longlong *)(lVar4 + 0x488)) {
                uVar6 = CONCAT71((int7)((ulonglong)(plVar11 + iVar8) >> 8),1);
                goto LAB_140eb3a80;
              }
            }
            uVar6 = 0;
LAB_140eb3a80:
            FUN_14145e5c0(lVar4,uVar6);
          }
        }
        local_50 = local_50 + 1;
      }
    }
    if (plVar11 != (longlong *)0x0) {
      FMemory::Free(plVar11);
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
  return;
}



// FUNCTION 140eb3ad0 FUN_140eb3ad0 body=45 status=ok
// SIG undefined FUN_140eb3ad0(void)

void FUN_140eb3ad0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = param_2;
  local_20 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x468,&local_28);
  return;
}



// FUNCTION 140eb3b00 FUN_140eb3b00 body=45 status=ok
// SIG undefined FUN_140eb3b00(void)

void FUN_140eb3b00(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = param_2;
  local_20 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x498,&local_28);
  return;
}



// FUNCTION 140eb3b30 FUN_140eb3b30 body=36 status=ok
// SIG undefined FUN_140eb3b30(void)

void FUN_140eb3b30(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x478,&local_18);
  return;
}



// FUNCTION 140eb3b60 FUN_140eb3b60 body=36 status=ok
// SIG undefined FUN_140eb3b60(void)

void FUN_140eb3b60(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x4a8,&local_18);
  return;
}



// FUNCTION 140eb3b90 FUN_140eb3b90 body=9 status=ok
// SIG undefined FUN_140eb3b90(void)

void FUN_140eb3b90(undefined8 param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong alStack_48 [8];
  
  if (param_2 == '\0') {
    return;
  }
  FUN_140ebec70();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = DAT_146b33f38;
  lVar4 = DAT_146b33f38 + 0x60;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar3 + 0x68)) {
      return;
    }
    if (*(longlong *)(lVar3 + 0x70) == 0) {
      return;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0x68) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar4);
    if (lVar2 == 0) {
      return;
    }
  }
  lVar3 = FUN_142e778a0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    alStack_48[0] = 0;
    alStack_48[1] = 0;
    alStack_48[2] = 0;
    alStack_48[3] = 0;
    alStack_48[4] = 0;
    alStack_48[5] = 0;
    alStack_48[6] = 0;
    alStack_48[7] = 0;
    FUN_1421d3220(alStack_48 + 4,lVar2 + 0x90);
    FUN_142dd9a90(param_1,alStack_48);
    if (alStack_48[6] != 0) {
      FMemory::Free();
    }
    if (alStack_48[4] != 0) {
      FMemory::Free();
    }
    if (alStack_48[2] != 0) {
      FMemory::Free();
    }
    if (alStack_48[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140eb3ba0 FUN_140eb3ba0 body=497 status=ok
// SIG undefined FUN_140eb3ba0(void)

void FUN_140eb3ba0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  float fVar7;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  
  if (*(char *)(param_1 + 0x668) == '\0') {
    local_78 = *(undefined8 *)(param_1 + 0x590);
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_70 = param_2;
    FUN_140eafdd0(&local_98);
    plVar4 = local_58;
    if (0 < (int)local_50) {
      FUN_140e9f690(param_1 + 0x638,&local_98);
      lVar2 = *(longlong *)(param_1 + 0x5b8);
      lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x5c0) * 0x28;
      plVar4 = local_58;
      for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
        uVar6 = (ulonglong)((longlong)(plVar4 + (int)local_50) + (7 - (longlong)plVar4)) >> 3;
        if (plVar4 + (int)local_50 < plVar4) {
          uVar6 = 0;
        }
        uVar3 = 0;
        plVar5 = plVar4;
        if (uVar6 != 0) {
          do {
            if (*plVar4 != 0) {
              if (*(float *)(lVar2 + 0x18) <= 0.0) {
                if (*(char *)(lVar2 + 0x24) == '\0') {
                  fVar7 = 0.0;
                }
                else {
                  fVar7 = 1.0;
                }
              }
              else {
                fVar7 = *(float *)(lVar2 + 0x20) / *(float *)(lVar2 + 0x18);
              }
              FUN_140ebff60(*plVar4,lVar2 + 0x10,fVar7);
            }
            plVar4 = plVar4 + 1;
            uVar3 = uVar3 + 1;
            plVar5 = local_58;
          } while (uVar3 != uVar6);
        }
        plVar4 = plVar5;
      }
      if ((0.0 < *(float *)(param_1 + 0x5e0)) || (*(char *)(param_1 + 0x5f4) != '\0')) {
        FUN_140ebdd80(param_1 + 0x5d0,&local_58);
        plVar4 = local_58;
      }
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140eb3da0 FUN_140eb3da0 body=296 status=ok
// SIG undefined FUN_140eb3da0(void)

void FUN_140eb3da0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x668) == '\0') {
    local_38 = *(undefined8 *)(param_1 + 0x590);
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_30 = param_2;
    FUN_140eafdd0(&local_58);
    if (0 < (int)local_10) {
      FUN_140ebe320(param_1 + 0x638,&local_58);
      lVar2 = *(longlong *)(param_1 + 0x5b8);
      lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x5c0) * 0x28;
      for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
        FUN_140ea5b90(lVar2,&local_18);
      }
      if ((0.0 < *(float *)(param_1 + 0x5e0)) || (*(char *)(param_1 + 0x5f4) != '\0')) {
        FUN_140ea5b10(param_1 + 0x5d0,&local_18);
      }
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140eb3ed0 FUN_140eb3ed0 body=107 status=ok
// SIG undefined FUN_140eb3ed0(void)

undefined1 FUN_140eb3ed0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  
  FUN_140eaffa0(param_1 + 0x238,param_2 + 8,*(undefined4 *)(param_2 + 4));
  if ((*(longlong *)(param_1 + 0x2c8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2c8) + 0x1e8), lVar1 != 0)) {
    cVar2 = FUN_142f0b080(lVar1,param_2);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  uVar3 = FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  return uVar3;
}



// FUNCTION 140eb3f40 FUN_140eb3f40 body=58 status=ok
// SIG undefined FUN_140eb3f40(void)

void FUN_140eb3f40(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x750) == 0) {
    lVar1 = FUN_140ee71c0(param_1 + 0x758);
    if (lVar1 != 0) {
      FUN_140ec3360(param_1,lVar1);
      return;
    }
  }
  return;
}


