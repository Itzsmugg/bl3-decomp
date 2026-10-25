// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140a52da0 FUN_140a52da0 body=184 status=ok
// SIG undefined FUN_140a52da0(void)

longlong FUN_140a52da0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x560);
  iVar2 = *(int *)(param_1 + 0x568);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x30;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x40;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x560);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x550) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x578);
  }
  return param_1;
}



// FUNCTION 140a52e60 FUN_140a52e60 body=90 status=ok
// SIG undefined FUN_140a52e60(void)

longlong FUN_140a52e60(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b0);
  }
  return param_1;
}



// FUNCTION 140a52ec0 FUN_140a52ec0 body=104 status=ok
// SIG undefined FUN_140a52ec0(void)

longlong FUN_140a52ec0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fcb7e0;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x488);
  }
  return param_1;
}



// FUNCTION 140a52f30 FUN_140a52f30 body=195 status=ok
// SIG undefined FUN_140a52f30(void)

longlong FUN_140a52f30(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x708);
  plVar4 = *(longlong **)(param_1 + 0x700);
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
  if (*(longlong *)(param_1 + 0x6a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x660) = &PTR_FUN_143fcb7e0;
  FUN_140a51170(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x720);
  }
  return param_1;
}



// FUNCTION 140a53000 FUN_140a53000 body=124 status=ok
// SIG undefined FUN_140a53000(void)

longlong FUN_140a53000(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x588) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x550) != 0) {
    FMemory::Free();
  }
  FUN_1409c4a20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5b8);
  }
  return param_1;
}



// FUNCTION 140a53080 FUN_140a53080 body=133 status=ok
// SIG undefined FUN_140a53080(void)

longlong FUN_140a53080(longlong param_1,ulonglong param_2)

{
  FUN_140a513a0(param_1 + 0x4a0);
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fcb7e0;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x588);
  }
  return param_1;
}



// FUNCTION 140a53110 FUN_140a53110 body=104 status=ok
// SIG undefined FUN_140a53110(void)

longlong FUN_140a53110(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x6a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x660) = &PTR_FUN_143fcb7e0;
  FUN_140a51170(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6b8);
  }
  return param_1;
}



// FUNCTION 140a53180 FUN_140a53180 body=124 status=ok
// SIG undefined FUN_140a53180(void)

longlong FUN_140a53180(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x520) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FMemory::Free();
  }
  FUN_140a51270(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x578);
  }
  return param_1;
}



// FUNCTION 140a53200 FUN_140a53200 body=119 status=ok
// SIG undefined FUN_140a53200(void)

longlong FUN_140a53200(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x2300) = 0;
  if (*(longlong *)(param_1 + 0x22f8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x22b8);
  *(undefined ***)(param_1 + 0x2298) = &PTR_FUN_143fe0658;
  FUN_1409c4bb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2320);
  }
  return param_1;
}



// FUNCTION 140a53280 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FScene::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140a512e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2480);
  }
  return param_1;
}



// FUNCTION 140a532c0 FUN_140a532c0 body=67 status=ok
// SIG undefined FUN_140a532c0(void)

longlong FUN_140a532c0(longlong param_1,ulonglong param_2)

{
  FUN_1406d8b70(param_1 + 0x2478);
  FUN_140a512e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2560);
  }
  return param_1;
}



// FUNCTION 140a53310 FUN_140a53310 body=105 status=ok
// SIG undefined FUN_140a53310(void)

longlong FUN_140a53310(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x468);
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b8);
  }
  return param_1;
}



// FUNCTION 140a53380 FUN_140a53380 body=52 status=ok
// SIG undefined FUN_140a53380(void)

undefined8 FUN_140a53380(undefined8 param_1,ulonglong param_2)

{
  FUN_14083e560();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6e0);
  }
  return param_1;
}



// FUNCTION 140a533c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TCompositeObjectDistanceFieldsCS<1,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_142328530();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 140a53400 FUN_140a53400 body=52 status=ok
// SIG undefined FUN_140a53400(void)

undefined8 FUN_140a53400(undefined8 param_1,ulonglong param_2)

{
  FUN_1423286f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 140a53440 FUN_140a53440 body=143 status=ok
// SIG undefined FUN_140a53440(void)

undefined8 * FUN_140a53440(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  lVar2 = 4;
  puVar3 = param_1 + 0x14;
  do {
    plVar1 = puVar3 + -4;
    puVar3 = puVar3 + -4;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 140a534d0 FUN_140a534d0 body=52 status=ok
// SIG undefined FUN_140a534d0(void)

undefined8 FUN_140a534d0(undefined8 param_1,ulonglong param_2)

{
  FUN_142328700();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x390);
  }
  return param_1;
}



// FUNCTION 140a53510 FUN_140a53510 body=43 status=ok
// SIG undefined FUN_140a53510(void)

undefined8 * FUN_140a53510(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1442046d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140a53540 FUN_140a53540 body=67 status=ok
// SIG undefined FUN_140a53540(void)

longlong FUN_140a53540(longlong param_1,ulonglong param_2)

{
  FUN_14083e560(param_1 + 0x440);
  FUN_14083eff0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb30);
  }
  return param_1;
}



// FUNCTION 140a53590 FUN_140a53590 body=73 status=ok
// SIG undefined FUN_140a53590(void)

longlong FUN_140a53590(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x7c0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7e0);
  }
  return param_1;
}



// FUNCTION 140a535e0 FUN_140a535e0 body=218 status=ok
// SIG undefined FUN_140a535e0(void)

longlong FUN_140a535e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 6;
  lVar2 = 6;
  lVar1 = param_1 + 0x10b0;
  do {
    lVar2 = lVar2 + -1;
    FUN_140a50ee0(lVar1 + -0xa0);
    FUN_1409c5510(lVar1 + -0x150);
    if (*(longlong *)(lVar1 + -0x1a8) != 0) {
      FMemory::Free();
    }
    lVar1 = lVar1 + -0x150;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x8d0;
  do {
    lVar3 = lVar3 + -1;
    FUN_140a50ee0(lVar1 + -0xa0);
    FUN_1409c5510(lVar1 + -0x150);
    if (*(longlong *)(lVar1 + -0x1a8) != 0) {
      FMemory::Free();
    }
    lVar1 = lVar1 + -0x150;
  } while (lVar3 != 0);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1090);
  }
  return param_1;
}



// FUNCTION 140a536c0 FUN_140a536c0 body=235 status=ok
// SIG undefined FUN_140a536c0(void)

longlong FUN_140a536c0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 140a537b0 FUN_140a537b0 body=186 status=ok
// SIG undefined FUN_140a537b0(void)

longlong FUN_140a537b0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x148);
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
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  FUN_140a51930(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 140a53870 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAkAndroidPlatformInfo::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140a538e0 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTimeSynchronizableMediaSource::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 140a53940 FUN_140a53940 body=52 status=ok
// SIG undefined FUN_140a53940(void)

undefined8 FUN_140a53940(undefined8 param_1,ulonglong param_2)

{
  FUN_14061f760();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x730);
  }
  return param_1;
}



// FUNCTION 140a53980 FUN_140a53980 body=70 status=ok
// SIG undefined FUN_140a53980(void)

longlong FUN_140a53980(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140a539d0 FUN_140a539d0 body=380 status=ok
// SIG undefined FUN_140a539d0(void)

longlong FUN_140a539d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2f70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2ed0) != 0) {
    FMemory::Free();
  }
  FUN_140a51410(param_1 + 0x2da0);
  FUN_140a51410(param_1 + 0x2cb8);
  FUN_140a51410(param_1 + 0x2bd0);
  if (*(longlong *)(param_1 + 0x2bb0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2b58);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2b40);
  if (*(longlong *)(param_1 + 0x2b30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2b20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2b10) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2b00) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2af0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2ae0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2ab0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2a18) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x2980);
  thunk_FUN_142478640(param_1 + 0x28f0);
  thunk_FUN_142478640(param_1 + 0x28e4);
  thunk_FUN_142478640(param_1 + 0x28d8);
  thunk_FUN_142478640(param_1 + 0x28cc);
  if (*(longlong *)(param_1 + 0x2700) != 0) {
    FMemory::Free();
  }
  FUN_140a51510(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2f90);
  }
  return param_1;
}



// FUNCTION 140a53b50 FUN_140a53b50 body=52 status=ok
// SIG undefined FUN_140a53b50(void)

undefined8 FUN_140a53b50(undefined8 param_1,ulonglong param_2)

{
  FUN_140a51490();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8a8);
  }
  return param_1;
}



// FUNCTION 140a53b90 FUN_140a53b90 body=100 status=ok
// SIG undefined FUN_140a53b90(void)

longlong FUN_140a53b90(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x1c8);
  FRichCurve::~FRichCurve(param_1 + 0x150);
  FRichCurve::~FRichCurve(param_1 + 0xd8);
  FRichCurve::~FRichCurve(param_1 + 0x60);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,600);
  }
  return param_1;
}



// FUNCTION 140a53c00 FUN_140a53c00 body=67 status=ok
// SIG undefined FUN_140a53c00(void)

longlong FUN_140a53c00(longlong param_1,ulonglong param_2)

{
  FUN_140591060(param_1 + 0x690);
  FUN_140a51ae0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6c8);
  }
  return param_1;
}



// FUNCTION 140a53c50 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FNiagaraScriptExecutionParameterStore::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 140a53ca0 FUN_140a53ca0 body=52 status=ok
// SIG undefined FUN_140a53ca0(void)

undefined8 FUN_140a53ca0(undefined8 param_1,ulonglong param_2)

{
  FUN_1423c53e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x840);
  }
  return param_1;
}



// FUNCTION 140a53ce0 FUN_140a53ce0 body=52 status=ok
// SIG undefined FUN_140a53ce0(void)

undefined8 FUN_140a53ce0(undefined8 param_1,ulonglong param_2)

{
  FUN_1405911f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 140a53d20 FUN_140a53d20 body=144 status=ok
// SIG undefined FUN_140a53d20(void)

longlong FUN_140a53d20(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 140a53db0 FUN_140a53db0 body=71 status=ok
// SIG undefined FUN_140a53db0(void)

void FUN_140a53db0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140c32990();
  if ((param_2 != 0) && (*(char *)(param_1 + -0xc60) == '\x03')) {
    lVar1 = FUN_140a66090(param_1 + -0xd88);
    if (lVar1 != 0) {
      FUN_1409a6d70(lVar1);
    }
  }
  return;
}



// FUNCTION 140a53e00 FUN_140a53e00 body=334 status=ok
// SIG undefined FUN_140a53e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140a53e00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong *local_68;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (((param_2 != (longlong *)0x0) &&
      (lVar1 = (**(code **)(*param_2 + 0x148))(param_2), lVar1 != 0)) &&
     (*(longlong *)(param_1 + 0x30) != 0)) {
    lVar2 = AAIControllerGunfire::GetPrivateStaticClass();
    for (lVar5 = *(longlong *)(param_1 + 0x30); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar2) {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          return 0;
        }
        FActorSpawnParameters::FActorSpawnParameters(local_78);
        local_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        lVar5 = param_2[0x2d];
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        local_50 = 1;
        uStack_3c = uRam000000014686676c;
        if (lVar5 != 0) {
          local_48 = *(undefined4 *)(lVar5 + 0x210);
          uStack_44 = *(undefined4 *)(lVar5 + 0x214);
          uStack_40 = *(undefined4 *)(lVar5 + 0x218);
          uStack_3c = *(undefined4 *)(lVar5 + 0x21c);
          local_38 = *(undefined4 *)(lVar5 + 0x220);
          uStack_34 = *(undefined4 *)(lVar5 + 0x224);
          uStack_30 = *(undefined4 *)(lVar5 + 0x228);
          uStack_2c = *(undefined4 *)(lVar5 + 0x22c);
        }
        local_28._4_4_ = DAT_1464aa788._4_4_;
        local_28._0_4_ = (undefined4)DAT_1464aa788;
        local_28._8_4_ = DAT_1464aa790;
        local_28._12_4_ = 0;
        local_68 = param_2;
        if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_140a53f35;
        lVar3 = AAIControllerGunfire::GetPrivateStaticClass();
        lVar5 = *(longlong *)(param_1 + 0x30);
        lVar2 = lVar5;
        goto joined_r0x000140a53f25;
      }
    }
  }
  return 0;
joined_r0x000140a53f25:
  if (lVar2 == 0) {
LAB_140a53f35:
    lVar5 = 0;
LAB_140a53f37:
    uVar4 = FUN_142550d00(lVar1,lVar5,&local_48,local_78);
    return uVar4;
  }
  if (lVar2 == lVar3) goto LAB_140a53f37;
  lVar2 = *(longlong *)(lVar2 + 0x30);
  goto joined_r0x000140a53f25;
}



// FUNCTION 140a53f50 FUN_140a53f50 body=260 status=ok
// SIG undefined FUN_140a53f50(void)

void FUN_140a53f50(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int local_res8 [2];
  undefined4 *local_res10;
  undefined4 **local_res18 [2];
  
  plVar1 = (longlong *)(param_1 + 0x468);
  local_res10 = param_2;
  if (*(int *)(param_1 + 0x470) != *(int *)(param_1 + 0x49c)) {
    lVar4 = *(longlong *)(param_1 + 0x4a8);
    if (*(longlong *)(param_1 + 0x4a8) == 0) {
      lVar4 = param_1 + 0x4a0;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x4b0) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0x20 + *plVar1);
        if ((undefined4 *)*plVar5 == param_2) {
          if ((iVar3 != -1) && (plVar5 != (longlong *)0x0)) goto LAB_140a53fff;
          break;
        }
        iVar3 = (int)plVar5[3];
      } while (iVar3 != -1);
    }
  }
  local_res18[0] = &local_res10;
  FUN_140a4c510(plVar1,local_res8,local_res18,0);
  plVar5 = (longlong *)((longlong)local_res8[0] * 0x20 + *plVar1);
LAB_140a53fff:
  lVar4 = param_3[1];
  plVar5[1] = *param_3;
  *(int *)(plVar5 + 2) = (int)lVar4;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x45c);
  if ((cVar2 == '\0') && (*(int *)(param_1 + 0x470) - *(int *)(param_1 + 0x49c) < 1)) {
    AActor::SetActorTickEnabled(param_1,0);
    return;
  }
  AActor::SetActorTickEnabled(param_1,1);
  return;
}



// FUNCTION 140a54060 FUN_140a54060 body=787 status=ok
// SIG undefined FUN_140a54060(void)

void FUN_140a54060(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 *puVar13;
  
  if ((*(char *)(param_1 + 0x570) != '\0') && (param_2 != (longlong *)0x0)) {
    FUN_142e80f20();
    lVar5 = (**(code **)(*param_2 + 0x628))();
    if (lVar5 != 0) {
      bVar3 = *(byte *)(param_1 + 0x578);
      if ((bVar3 & 1) != 0) {
        *(byte *)(param_1 + 0x598) =
             *(byte *)(param_1 + 0x598) ^
             (*(byte *)(param_1 + 0x598) ^ *(byte *)(lVar5 + 0x1e8)) & 1;
        *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(lVar5 + 0x1f0);
        *(byte *)(lVar5 + 0x1e8) = *(byte *)(lVar5 + 0x1e8) | 1;
        *(undefined8 *)(lVar5 + 0x1f0) = *(undefined8 *)(param_1 + 0x580);
        bVar3 = *(byte *)(param_1 + 0x578);
      }
      if ((bVar3 & 2) != 0) {
        plVar11 = (longlong *)(param_1 + 0x5a8);
        *(byte *)(param_1 + 0x598) =
             *(byte *)(param_1 + 0x598) ^
             (*(byte *)(lVar5 + 0x1e8) ^ *(byte *)(param_1 + 0x598)) & 2;
        *(undefined4 *)(param_1 + 0x5b0) = 0;
        if (*(int *)(param_1 + 0x5b4) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
        }
        plVar1 = (longlong *)(lVar5 + 0x1f8);
        puVar10 = (undefined8 *)*plVar1;
        puVar13 = puVar10 + (longlong)*(int *)(lVar5 + 0x200) * 2;
        for (; puVar10 != puVar13; puVar10 = puVar10 + 2) {
          iVar7 = *(int *)(param_1 + 0x5b0);
          lVar9 = (longlong)iVar7;
          *(int *)(param_1 + 0x5b0) = iVar7 + 1;
          if (*(int *)(param_1 + 0x5b4) < iVar7 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar7);
          }
          lVar6 = *plVar11;
          *(undefined8 *)(lVar6 + lVar9 * 0x10) = 0;
          *(undefined8 *)(lVar6 + 8 + lVar9 * 0x10) = 0;
          if ((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0x5b0))) {
            *(undefined8 *)(*plVar11 + lVar9 * 0x10) = *puVar10;
            *(undefined8 *)(*plVar11 + 8 + lVar9 * 0x10) = puVar10[1];
          }
        }
        *(undefined4 *)(lVar5 + 0x200) = 0;
        if (*(int *)(lVar5 + 0x204) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1);
        }
        plVar11 = *(longlong **)(param_1 + 0x588);
        plVar8 = plVar11 + (longlong)*(int *)(param_1 + 0x590) * 2;
        for (; plVar11 != plVar8; plVar11 = plVar11 + 2) {
          if ((*plVar11 != 0) && (plVar11[1] != 0)) {
            iVar7 = *(int *)(lVar5 + 0x200);
            lVar9 = (longlong)iVar7;
            iVar12 = iVar7 + 1;
            *(int *)(lVar5 + 0x200) = iVar12;
            if (*(int *)(lVar5 + 0x204) < iVar12) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
            }
            lVar6 = *plVar1;
            *(undefined8 *)(lVar6 + lVar9 * 0x10) = 0;
            *(undefined8 *)(lVar6 + 8 + lVar9 * 0x10) = 0;
            if ((-1 < iVar7) && (iVar7 < *(int *)(lVar5 + 0x200))) {
              lVar6 = plVar11[1];
              uVar2 = *(undefined8 *)(lVar6 + 0x10);
              FUN_1417846f0(lVar5,
                            L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                           );
              lVar6 = FUN_1417985e0(uVar2,lVar5,0,0x41,0,lVar6,0,0,0);
              if (lVar6 == 0) {
                iVar4 = *(int *)(lVar5 + 0x200);
                iVar7 = (iVar4 - iVar7) + -1;
                if (iVar7 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*plVar1 + lVar9 * 0x10),
                             (void *)((longlong)iVar12 * 0x10 + *plVar1),(longlong)iVar7 << 4);
                  iVar4 = *(int *)(lVar5 + 0x200);
                }
                *(int *)(lVar5 + 0x200) = iVar4 + -1;
                TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
              }
              else {
                *(longlong *)(*plVar1 + lVar9 * 0x10) = *plVar11;
                *(longlong *)(*plVar1 + 8 + lVar9 * 0x10) = lVar6;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140a54380 FUN_140a54380 body=1421 status=ok
// SIG undefined FUN_140a54380(void)

void FUN_140a54380(longlong param_1,float *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined8 local_fc;
  float local_f4;
  float local_e8;
  undefined1 local_e4 [12];
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  iVar8 = *(int *)(param_1 + 0x2bb8);
  if (iVar8 == 0) {
    return;
  }
  lVar11 = *(longlong *)(param_1 + 0x178);
  if (lVar11 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x2b78) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x248) != '\x01') {
    return;
  }
  if (*(char *)(param_1 + 0x13a0) != '\0') {
    return;
  }
  iVar10 = iVar8 + -1;
  fVar15 = *(float *)(param_1 + 0x288c);
  local_d8 = *(undefined8 *)(lVar11 + 0x220);
  uStack_d0 = *(undefined8 *)(lVar11 + 0x228);
  fVar23 = DAT_1468b5d90;
  fVar24 = DAT_1468b5d94;
  fVar25 = DAT_1468b5d98;
  fVar14 = fVar15;
  if (-1 < iVar10) {
    lVar11 = (longlong)iVar10 * 8;
    lVar12 = (longlong)iVar8 << 3;
    lVar13 = lVar11;
    fVar16 = fVar15;
    do {
      lVar1 = *(longlong *)(param_1 + 0x2bb0);
      plVar2 = *(longlong **)(lVar1 + lVar11);
      fVar14 = fVar16;
      if (plVar2 == (longlong *)0x0) {
LAB_140a546e9:
        iVar8 = *(int *)(param_1 + 0x2bb8);
        iVar4 = (iVar8 - iVar10) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar1 + lVar13),(void *)(lVar1 + lVar12),(longlong)iVar4 << 3);
          iVar8 = *(int *)(param_1 + 0x2bb8);
        }
        *(int *)(param_1 + 0x2bb8) = iVar8 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x2bb0);
      }
      else {
        uVar3 = *(uint *)((longlong)plVar2 + 0xc);
        if ((int)uVar3 < (int)DAT_1469e91c4) {
          uVar9 = uVar3 & 0xffff;
          if ((int)uVar3 < 0) {
            uVar3 = uVar3 + 0xffff;
            uVar9 = uVar9 - 0x10000;
          }
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                  (longlong)(int)uVar9 * 0x18;
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) != 0) goto LAB_140a546e9;
        lVar5 = plVar2[0x2d];
        if (lVar5 == 0) {
          local_f4 = DAT_1468b5d98;
          puVar6 = &local_fc;
          local_fc = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          puVar6 = (undefined8 *)&local_108;
          local_108 = *(undefined4 *)(lVar5 + 0x220);
          local_100 = *(undefined4 *)(lVar5 + 0x228);
          uStack_104 = *(undefined4 *)(lVar5 + 0x224);
        }
        fVar18 = (float)local_d8 - (float)*puVar6;
        local_e8 = *(float *)(puVar6 + 1);
        fVar19 = local_d8._4_4_ - (float)((ulonglong)*puVar6 >> 0x20);
        fVar21 = (float)uStack_d0 - local_e8;
        fVar22 = fVar19 * fVar19 + fVar18 * fVar18;
        fVar26 = SQRT(fVar22);
        fVar14 = fVar26;
        if (fVar16 <= fVar26) {
          fVar14 = fVar16;
        }
        if (fVar15 <= fVar26) goto LAB_140a546e9;
        pfVar7 = (float *)(**(code **)(*plVar2 + 0x308))(plVar2,local_e4);
        if (SQRT(*pfVar7 * *pfVar7 + pfVar7[1] * pfVar7[1]) < 0.0001) {
          if (fVar22 == 1.0) {
            fVar16 = fVar18;
            fVar20 = fVar19;
            if (fVar21 != 0.0) {
LAB_140a546a2:
              fVar16 = fVar18;
              fVar20 = fVar19;
              fVar21 = 0.0;
            }
          }
          else {
            fVar16 = DAT_1468b5d90;
            fVar20 = DAT_1468b5d94;
            fVar21 = DAT_1468b5d98;
            if (1e-08 <= fVar22) {
              auVar17 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
              fVar16 = auVar17._0_4_;
              fVar16 = fVar16 + fVar16 * (0.5 - fVar22 * 0.5 * fVar16 * fVar16);
              fVar16 = fVar16 + fVar16 * (0.5 - fVar22 * 0.5 * fVar16 * fVar16);
              fVar19 = fVar16 * fVar19;
              fVar18 = fVar16 * fVar18;
              goto LAB_140a546a2;
            }
          }
          fVar18 = 1.0 / fVar15;
          fVar26 = fVar15 - fVar26;
          fVar23 = fVar23 + fVar16 * fVar26 * fVar18;
          fVar24 = fVar24 + fVar20 * fVar26 * fVar18;
          fVar25 = fVar25 + fVar21 * fVar26 * fVar18;
        }
      }
      lVar12 = lVar12 + -8;
      lVar13 = lVar13 + -8;
      lVar11 = lVar11 + -8;
      iVar10 = iVar10 + -1;
      fVar16 = fVar14;
    } while (-1 < iVar10);
  }
  fVar16 = param_2[1];
  fVar21 = *param_2;
  if (0.0001 <= SQRT(fVar21 * fVar21 + fVar16 * fVar16)) {
    return;
  }
  fVar18 = fVar24 * fVar24 + fVar23 * fVar23;
  if (fVar18 == 1.0) {
    fVar26 = fVar23;
    fVar19 = fVar24;
    if (fVar25 == 0.0) goto LAB_140a5486f;
  }
  else {
    fVar26 = DAT_1468b5d90;
    fVar19 = DAT_1468b5d94;
    fVar25 = DAT_1468b5d98;
    if (fVar18 < 1e-08) goto LAB_140a5486f;
    auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar25 = auVar17._0_4_;
    fVar25 = fVar25 + fVar25 * (0.5 - fVar18 * 0.5 * fVar25 * fVar25);
    fVar25 = fVar25 + fVar25 * (0.5 - fVar18 * 0.5 * fVar25 * fVar25);
    fVar23 = fVar23 * fVar25;
    fVar24 = fVar24 * fVar25;
  }
  fVar26 = fVar23;
  fVar19 = fVar24;
  fVar25 = 0.0;
LAB_140a5486f:
  fVar15 = ((fVar15 - fVar14) / fVar15) * *(float *)(param_1 + 0x2888);
  *(ulonglong *)param_2 = CONCAT44(fVar19 * fVar15 + fVar16,fVar26 * fVar15 + fVar21);
  param_2[2] = fVar25 * fVar15 + param_2[2];
  return;
}



// FUNCTION 140a54920 FUN_140a54920 body=73 status=ok
// SIG undefined FUN_140a54920(void)

void FUN_140a54920(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142ceeb40(param_1,1);
  if (lVar1 == param_2) {
    if (*(char *)(param_1 + 0x418) == '\x01') {
      uVar2 = 2;
    }
    else {
      if (*(char *)(param_1 + 0x418) != '\x03') {
        return;
      }
      uVar2 = 0;
    }
    FUN_140a56940(param_1,param_2,uVar2);
  }
  return;
}



// FUNCTION 140a54970 FUN_140a54970 body=303 status=ok
// SIG undefined FUN_140a54970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a54970(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  _Dst = (undefined8 *)operator_new(0x390);
  if (_Dst == (undefined8 *)0x0) {
    _Dst = (undefined8 *)0x0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x390);
    FUN_142326600(_Dst);
    *_Dst = &PTR_FUN_144204b70;
    *(undefined4 *)((longlong)_Dst + 0x334) = 0xffffffff;
    *(undefined4 *)(_Dst + 0x67) = 0;
    *(undefined4 *)((longlong)_Dst + 0x33c) = 0xffffffff;
    *(undefined4 *)(_Dst + 0x68) = 0;
    _Dst[0x69] = 0;
    *(undefined1 *)(_Dst + 0x6a) = 0;
    *(undefined8 *)((longlong)_Dst + 0x354) = _DAT_1468b5d90;
    *(undefined4 *)((longlong)_Dst + 0x35c) = DAT_1468b5d98;
    _Dst[0x6c] = _DAT_1468b5d90;
    *(undefined4 *)(_Dst + 0x6d) = DAT_1468b5d98;
    *(undefined8 *)((longlong)_Dst + 0x36c) = _DAT_1468b5d90;
    *(undefined4 *)((longlong)_Dst + 0x374) = DAT_1468b5d98;
    *_Dst = &PTR_FUN_14420cce0;
  }
  *param_2 = _Dst;
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = _Dst;
  }
  param_2[1] = puVar1;
  SharedPointerInternals::EnableSharedFromThis(param_2,_Dst,_Dst);
  return param_2;
}



// FUNCTION 140a54aa0 FUN_140a54aa0 body=1164 status=ok
// SIG undefined FUN_140a54aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a54aa0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_168 [32];
  float local_148;
  undefined8 local_140 [32];
  undefined8 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar7 + 0x38) < DAT_146866d88) {
    _Init_thread_header(&DAT_146866d88);
    if (DAT_146866d88 == -1) {
      FName::FName(&DAT_146866d80,L"Color_Primary1",1);
      _Init_thread_footer(&DAT_146866d88);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146866d98) {
    _Init_thread_header(&DAT_146866d98);
    if (DAT_146866d98 == -1) {
      FName::FName(&DAT_146866d90,L"Color_Primary2",1);
      _Init_thread_footer(&DAT_146866d98);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146866da8) {
    _Init_thread_header(&DAT_146866da8);
    if (DAT_146866da8 == -1) {
      FName::FName(&DAT_146866da0,L"Color_Secondary1",1);
      _Init_thread_footer(&DAT_146866da8);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146866db8) {
    _Init_thread_header(&DAT_146866db8);
    if (DAT_146866db8 == -1) {
      FName::FName(&DAT_146866db0,L"Color_Secondary2",1);
      _Init_thread_footer(&DAT_146866db8);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146866dc8) {
    _Init_thread_header(&DAT_146866dc8);
    if (DAT_146866dc8 == -1) {
      FName::FName(&DAT_146866dc0,L"Color_Tertiary1",1);
      _Init_thread_footer(&DAT_146866dc8);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146866dd8) {
    _Init_thread_header(&DAT_146866dd8);
    if (DAT_146866dd8 == -1) {
      FName::FName(&DAT_146866dd0,L"Color_Tertiary2",1);
      _Init_thread_footer(&DAT_146866dd8);
    }
  }
  local_38 = 1;
  local_40 = (undefined8 *)0x0;
  TArray<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationPtrs>,TInlineAllocator<8,FDefaultAllocator>_>
  ::ResizeGrow(local_140,0);
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  puVar6 = local_140;
  if (local_40 != (undefined8 *)0x0) {
    puVar6 = local_40;
  }
  *puVar6 = DAT_146866d80;
  *(undefined1 *)(puVar6 + 1) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((longlong)puVar6 + 0xc) = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar6 + 0x14) = uVar2;
  lVar7 = (longlong)(int)local_38;
  iVar3 = (int)local_38 + 1;
  if (local_38._4_4_ < iVar3) {
    uVar5 = local_38 & 0xffffffff;
    local_38._0_4_ = iVar3;
    TArray<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationPtrs>,TInlineAllocator<8,FDefaultAllocator>_>
    ::ResizeGrow(local_140,uVar5);
    iVar3 = (int)local_38;
  }
  local_38._0_4_ = iVar3;
  uVar1 = *(undefined1 *)(param_1 + 0x38);
  puVar6 = local_140;
  if (local_40 != (undefined8 *)0x0) {
    puVar6 = local_40;
  }
  puVar6 = puVar6 + lVar7 * 4;
  *puVar6 = DAT_146866d90;
  *(undefined1 *)(puVar6 + 1) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)((longlong)puVar6 + 0xc) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)((longlong)puVar6 + 0x14) = uVar2;
  iVar3 = (int)local_38;
  lVar7 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationPtrs>,TInlineAllocator<8,FDefaultAllocator>_>
    ::ResizeGrow(local_140,iVar3);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x4c);
  puVar6 = local_140;
  if (local_40 != (undefined8 *)0x0) {
    puVar6 = local_40;
  }
  puVar6 = puVar6 + lVar7 * 4;
  *puVar6 = DAT_146866da0;
  *(undefined1 *)(puVar6 + 1) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)((longlong)puVar6 + 0xc) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)((longlong)puVar6 + 0x14) = uVar2;
  iVar3 = (int)local_38;
  lVar7 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationPtrs>,TInlineAllocator<8,FDefaultAllocator>_>
    ::ResizeGrow(local_140,iVar3);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x60);
  puVar6 = local_140;
  if (local_40 != (undefined8 *)0x0) {
    puVar6 = local_40;
  }
  puVar6 = puVar6 + lVar7 * 4;
  *puVar6 = DAT_146866db0;
  *(undefined1 *)(puVar6 + 1) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)((longlong)puVar6 + 0xc) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)((longlong)puVar6 + 0x14) = uVar2;
  iVar3 = (int)local_38;
  lVar7 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationPtrs>,TInlineAllocator<8,FDefaultAllocator>_>
    ::ResizeGrow(local_140,iVar3);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x74);
  puVar6 = local_140;
  if (local_40 != (undefined8 *)0x0) {
    puVar6 = local_40;
  }
  puVar6 = puVar6 + lVar7 * 4;
  *puVar6 = DAT_146866dc0;
  *(undefined1 *)(puVar6 + 1) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x6c);
  *(undefined8 *)((longlong)puVar6 + 0xc) = *(undefined8 *)(param_1 + 100);
  *(undefined8 *)((longlong)puVar6 + 0x14) = uVar2;
  iVar3 = (int)local_38;
  lVar7 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationPtrs>,TInlineAllocator<8,FDefaultAllocator>_>
    ::ResizeGrow(local_140,iVar3);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x88);
  puVar6 = local_140;
  if (local_40 != (undefined8 *)0x0) {
    puVar6 = local_40;
  }
  puVar6 = puVar6 + lVar7 * 4;
  *puVar6 = DAT_146866dd0;
  *(undefined1 *)(puVar6 + 1) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)((longlong)puVar6 + 0xc) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)((longlong)puVar6 + 0x14) = uVar2;
  uVar4 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
  *(uint *)(param_3 + 4) = uVar4;
  local_148 = (float)(uVar4 & 0x7fffff | 0x3f800000);
  FUN_140a56f20(param_1,param_2,local_140,local_148 - (float)(int)local_148);
  if (local_40 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a54f30 FUN_140a54f30 body=2349 status=ok
// SIG undefined FUN_140a54f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a54f30(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  longlong local_298;
  longlong lStack_290;
  undefined8 local_288;
  longlong *local_280;
  ulonglong local_278;
  longlong *local_270;
  ulonglong local_268 [2];
  longlong local_258 [16];
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8 [8];
  longlong *local_188;
  undefined8 local_180;
  undefined8 local_178 [32];
  undefined8 *local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  if (param_2 != 0) {
    local_68 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
    if ((((((char)param_1[2] != '\0') || ((char)param_1[10] != '\0')) ||
         (*(char *)((longlong)param_1 + 0x7c) != '\0')) ||
        (((char)param_1[0x15] != '\0' || ((char)param_1[0x18] != '\0')))) ||
       (((char)param_1[0x1c] != '\0' || ((char)param_1[0x1f] != '\0')))) {
      uVar11 = 0;
      local_188 = (longlong *)0x0;
      local_180 = 0;
      local_2a8 = param_3;
      local_270 = param_1;
      FUN_140a4d360(param_2,local_1c8,0);
      local_1d8 = (longlong *)0x0;
      plVar4 = local_1c8;
      if (local_188 != (longlong *)0x0) {
        plVar4 = local_188;
      }
      local_1d0 = 0;
      local_278 = 0;
      uVar8 = (longlong)(int)local_180 & 0x1fffffffffffffff;
      if (plVar4 + (int)local_180 < plVar4) {
        uVar8 = uVar11;
      }
      local_280 = plVar4;
      local_268[0] = uVar8;
      if (uVar8 != 0) {
        do {
          uVar10 = local_278;
          plVar5 = (longlong *)*plVar4;
          if (plVar5 != (longlong *)0x0) {
            local_280 = plVar4;
            (**(code **)(*plVar5 + 0x8e8))(plVar5);
            if (0 < (int)lStack_290) {
              local_288 = 0;
              uVar14 = uVar11;
              uVar16 = uVar11;
              do {
                lVar3 = (**(code **)(*plVar5 + 0x5a8))
                                  (plVar5,uVar14,*(undefined8 *)(local_298 + uVar16),0);
                uVar8 = local_1d0;
                lVar13 = (longlong)(int)local_1d0;
                iVar6 = (int)local_1d0 + 1;
                local_1d0 = CONCAT44(local_1d0._4_4_,iVar6);
                if (local_1d0._4_4_ < iVar6) {
                  TArray<FName,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
                            (local_258,uVar8 & 0xffffffff);
                }
                plVar4 = local_258;
                if (local_1d8 != (longlong *)0x0) {
                  plVar4 = local_1d8;
                }
                uVar9 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar9;
                uVar16 = uVar16 + 8;
                plVar4[lVar13] = lVar3;
                uVar8 = local_268[0];
                plVar4 = local_280;
                uVar10 = local_278;
              } while ((int)uVar9 < (int)lStack_290);
            }
            if (local_298 != 0) {
              FMemory::Free();
            }
          }
          plVar4 = plVar4 + 1;
          local_278 = uVar10 + 1;
        } while (local_278 != uVar8);
        lVar3 = (longlong)(int)local_1d0;
        param_1 = local_270;
        local_280 = plVar4;
        if ((int)local_1d0 != 0) {
          plVar4 = local_258;
          if (local_1d8 != (longlong *)0x0) {
            plVar4 = local_1d8;
          }
          bVar17 = *plVar4 != 0;
          uVar8 = uVar11;
          uVar10 = uVar11;
          uVar14 = uVar11;
          do {
            iVar6 = (int)uVar10;
            uVar8 = uVar8 + 1;
            uVar10 = (ulonglong)(iVar6 + 1);
            if ((longlong)uVar8 < lVar3) {
              plVar4 = local_258;
              if (local_1d8 != (longlong *)0x0) {
                plVar4 = local_1d8;
              }
              plVar4 = plVar4 + uVar8;
              do {
                if (bVar17 != (*plVar4 != 0)) break;
                uVar10 = (ulonglong)((int)uVar10 + 1);
                uVar8 = uVar8 + 1;
                plVar4 = plVar4 + 1;
              } while ((longlong)uVar8 < lVar3);
            }
            iVar15 = (int)uVar10 - iVar6;
            if (bVar17 != false) {
              iVar12 = (int)uVar14;
              if (iVar12 != iVar6) {
                plVar4 = local_258;
                if (local_1d8 != (longlong *)0x0) {
                  plVar4 = local_1d8;
                }
                _guard_xfg_dispatch_icall_nop(plVar4 + iVar12,plVar4 + iVar6,(longlong)iVar15 << 3);
              }
              uVar14 = (ulonglong)(uint)(iVar12 + iVar15);
            }
            bVar17 = (bool)(bVar17 ^ 1);
          } while ((longlong)uVar8 < lVar3);
          local_1d0 = CONCAT44(local_1d0._4_4_,(int)uVar14);
          param_1 = local_270;
        }
      }
      uVar8 = local_2a8;
      if (((char)param_1[2] != '\0') && (0 < (int)param_1[1])) {
        uVar9 = *(int *)(local_2a8 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(local_2a8 + 4) = uVar9;
        FUN_140a54aa0((longlong)(int)(uVar9 % *(uint *)(param_1 + 1)) * 0x8c + *param_1,local_258,
                      local_2a8);
      }
      if ((char)param_1[10] != '\0') {
        FUN_140a55f80(param_1 + 3,local_258,uVar8);
      }
      uVar10 = (ulonglong)_tls_index;
      if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
             DAT_146866e38) && (_Init_thread_header(&DAT_146866e38), DAT_146866e38 == -1)) {
          FName::FName(&DAT_146866e30,L"Skin_Tone",1);
          _Init_thread_footer(&DAT_146866e38);
        }
        local_78 = (undefined8 *)0x0;
        local_70 = 1;
        TArray<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationPtrs>,TInlineAllocator<8,FDefaultAllocator>_>
        ::ResizeGrow(local_178,0);
        lVar3 = param_1[0xf];
        puVar7 = local_178;
        if (local_78 != (undefined8 *)0x0) {
          puVar7 = local_78;
        }
        *puVar7 = DAT_146866e30;
        *(char *)(puVar7 + 1) = (char)lVar3;
        lVar3 = param_1[0xe];
        *(longlong *)((longlong)puVar7 + 0xc) = param_1[0xd];
        *(longlong *)((longlong)puVar7 + 0x14) = lVar3;
        iVar6 = *(int *)(uVar8 + 4) * 0xbb38435 + 0x3619636b;
        *(int *)(uVar8 + 4) = iVar6;
        local_2a8 = CONCAT44(local_2a8._4_4_,iVar6) & 0xffffffff007fffff | 0x3f800000;
        FUN_140a56f20((longlong)param_1 + 0x54,local_258,local_178,
                      (float)local_2a8 - (float)(int)(float)local_2a8);
        if (local_78 != (undefined8 *)0x0) {
          FMemory::Free();
        }
      }
      if ((char)param_1[0x15] != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
             DAT_146866e48) && (_Init_thread_header(&DAT_146866e48), DAT_146866e48 == -1)) {
          FName::FName(&DAT_146866e40,L"Tats_Color",1);
          _Init_thread_footer(&DAT_146866e48);
        }
        local_78 = (undefined8 *)0x0;
        local_70 = 1;
        TArray<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationPtrs>,TInlineAllocator<8,FDefaultAllocator>_>
        ::ResizeGrow(local_178,0);
        uVar1 = *(undefined1 *)((longlong)param_1 + 0xa4);
        puVar7 = local_178;
        if (local_78 != (undefined8 *)0x0) {
          puVar7 = local_78;
        }
        *puVar7 = DAT_146866e40;
        *(undefined1 *)(puVar7 + 1) = uVar1;
        uVar2 = *(undefined8 *)((longlong)param_1 + 0x9c);
        *(undefined8 *)((longlong)puVar7 + 0xc) = *(undefined8 *)((longlong)param_1 + 0x94);
        *(undefined8 *)((longlong)puVar7 + 0x14) = uVar2;
        iVar6 = *(int *)(uVar8 + 4) * 0xbb38435 + 0x3619636b;
        *(int *)(uVar8 + 4) = iVar6;
        local_2a8 = CONCAT44(local_2a8._4_4_,iVar6) & 0xffffffff007fffff | 0x3f800000;
        FUN_140a56f20(param_1 + 0x10,local_258,local_178,
                      (float)local_2a8 - (float)(int)(float)local_2a8);
        if (local_78 != (undefined8 *)0x0) {
          FMemory::Free();
        }
      }
      if (((char)param_1[0x18] != '\0') && (0 < (int)param_1[0x17])) {
        uVar9 = *(int *)(uVar8 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(uVar8 + 4) = uVar9;
        FUN_140a55cb0((longlong)(int)(uVar9 % *(uint *)(param_1 + 0x17)) * 0x50 + param_1[0x16],
                      local_258,uVar8);
      }
      if ((char)param_1[0x1c] != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
             DAT_146866e88) && (_Init_thread_header(&DAT_146866e88), DAT_146866e88 == -1)) {
          FName::FName(&DAT_146866e80,L"Iris_BaseColor_Multiply",1);
          _Init_thread_footer(&DAT_146866e88);
        }
        if (((char)param_1[0x1b] != '\0') && (0 < (int)param_1[0x1a])) {
          uVar9 = *(int *)(uVar8 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(uVar8 + 4) = uVar9;
          plVar4 = local_258;
          if (local_1d8 != (longlong *)0x0) {
            plVar4 = local_1d8;
          }
          local_2a8 = CONCAT44(local_2a8._4_4_,
                               *(undefined4 *)
                                (param_1[0x19] +
                                (longlong)(int)(uVar9 % *(uint *)(param_1 + 0x1a)) * 4));
          uVar10 = (longlong)(int)local_1d0 & 0x1fffffffffffffff;
          if (plVar4 + (int)local_1d0 < plVar4) {
            uVar10 = uVar11;
          }
          uVar14 = uVar11;
          if (uVar10 != 0) {
            do {
              lVar3 = *plVar4;
              if (lVar3 != 0) {
                plVar5 = (longlong *)FLinearColor::FLinearColor(local_268,&local_2a8);
                local_298 = *plVar5;
                lStack_290 = plVar5[1];
                FUN_1425a2be0(lVar3,DAT_146866e80,&local_298);
              }
              plVar4 = plVar4 + 1;
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar10);
          }
          uVar10 = (ulonglong)_tls_index;
        }
      }
      if (((char)param_1[0x1f] != '\0') && (0 < (int)param_1[0x1e])) {
        uVar9 = *(int *)(uVar8 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(uVar8 + 4) = uVar9;
        FUN_140a55860((longlong)(int)(uVar9 % *(uint *)(param_1 + 0x1e)) * 0x70 + param_1[0x1d],
                      local_258,uVar8);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8);
      if ((*(int *)(lVar3 + 0x38) < DAT_146866d68) &&
         (_Init_thread_header(&DAT_146866d68), DAT_146866d68 == -1)) {
        FName::FName(&DAT_146866d60,L"Randomize_Tattoos",1);
        _Init_thread_footer(&DAT_146866d68);
      }
      if ((*(int *)(lVar3 + 0x38) < DAT_146866d78) &&
         (_Init_thread_header(&DAT_146866d78), DAT_146866d78 == -1)) {
        FName::FName(&DAT_146866d70,L"Randomize_ColorBreaks",1);
        _Init_thread_footer(&DAT_146866d78);
      }
      iVar6 = *(int *)(uVar8 + 4) * 0xbb38435 + 0x3619636b;
      uVar10 = CONCAT44(local_2a8._4_4_,iVar6) & 0xffffffff007fffff;
      local_2a8._0_4_ = (float)((uint)uVar10 | 0x3f800000);
      iVar6 = iVar6 * 0xbb38435 + 0x3619636b;
      *(int *)(uVar8 + 4) = iVar6;
      fVar18 = (float)local_2a8 - (float)(int)(float)local_2a8;
      local_2a8._4_4_ = (undefined4)(uVar10 >> 0x20);
      local_2a8 = CONCAT44(local_2a8._4_4_,iVar6) & 0xffffffff007fffff | 0x3f800000;
      plVar4 = local_258;
      if (local_1d8 != (longlong *)0x0) {
        plVar4 = local_1d8;
      }
      fVar19 = (float)local_2a8 - (float)(int)(float)local_2a8;
      uVar8 = (longlong)(int)local_1d0 & 0x1fffffffffffffff;
      if (plVar4 + (int)local_1d0 < plVar4) {
        uVar8 = uVar11;
      }
      if (uVar8 != 0) {
        do {
          lVar3 = *plVar4;
          if (lVar3 != 0) {
            FUN_1425a2750(lVar3,DAT_146866d60,((fVar18 - 0.5) + fVar18) - 0.5);
            FUN_1425a2750(lVar3,DAT_146866d70,((fVar19 - 0.5) + fVar19) - 0.5);
          }
          plVar4 = plVar4 + 1;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar8);
      }
      if (local_1d8 != (longlong *)0x0) {
        FMemory::Free(local_1d8);
      }
      if (local_188 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140a55860 FUN_140a55860 body=1092 status=ok
// SIG undefined FUN_140a55860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a55860(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_178 [32];
  float local_158;
  undefined8 local_150 [32];
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar7 + 0x38) < DAT_146866e98) {
    _Init_thread_header(&DAT_146866e98);
    if (DAT_146866e98 == -1) {
      FName::FName(&DAT_146866e90,L"Decal_Strength",1);
      _Init_thread_footer(&DAT_146866e98);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146866ea8) {
    _Init_thread_header(&DAT_146866ea8);
    if (DAT_146866ea8 == -1) {
      FName::FName(&DAT_146866ea0,L"Decal_BaseColor_Base",1);
      _Init_thread_footer(&DAT_146866ea8);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146866eb8) {
    _Init_thread_header(&DAT_146866eb8);
    if (DAT_146866eb8 == -1) {
      FName::FName(&DAT_146866eb0,L"Decal_BaseColor_Highlight",1);
      _Init_thread_footer(&DAT_146866eb8);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146866ec8) {
    _Init_thread_header(&DAT_146866ec8);
    if (DAT_146866ec8 == -1) {
      FName::FName(&DAT_146866ec0,L"Decal_Comp",1);
      _Init_thread_footer(&DAT_146866ec8);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146866ed8) {
    _Init_thread_header(&DAT_146866ed8);
    if (DAT_146866ed8 == -1) {
      FName::FName(&DAT_146866ed0,L"Decal_Normal",1);
      _Init_thread_footer(&DAT_146866ed8);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146866ee8) {
    _Init_thread_header(&DAT_146866ee8);
    if (DAT_146866ee8 == -1) {
      FName::FName(&DAT_146866ee0,L"Decal_BaseColor",1);
      _Init_thread_footer(&DAT_146866ee8);
    }
  }
  uVar10 = 0;
  if (*(char *)(param_1 + 0x18) != '\0') {
    plVar6 = (longlong *)param_2[0x10];
    if ((longlong *)param_2[0x10] == (longlong *)0x0) {
      plVar6 = param_2;
    }
    uVar9 = (longlong)(int)param_2[0x11] & 0x1fffffffffffffff;
    if (plVar6 + (int)param_2[0x11] < plVar6) {
      uVar9 = uVar10;
    }
    uVar8 = uVar10;
    if (uVar9 != 0) {
      do {
        if (*plVar6 != 0) {
          FUN_1425a2750(*plVar6,DAT_146866e90,*(undefined4 *)(param_1 + 0x14));
        }
        plVar6 = plVar6 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar9);
    }
  }
  local_50 = (undefined8 *)0x0;
  local_48 = 1;
  TArray<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationPtrs>,TInlineAllocator<8,FDefaultAllocator>_>
  ::ResizeGrow(local_150,0);
  uVar1 = *(undefined1 *)(param_1 + 0x2c);
  puVar5 = local_150;
  if (local_50 != (undefined8 *)0x0) {
    puVar5 = local_50;
  }
  *puVar5 = DAT_146866ea0;
  *(undefined1 *)(puVar5 + 1) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar2;
  uVar9 = local_48;
  lVar7 = (longlong)(int)local_48;
  iVar3 = (int)local_48 + 1;
  local_48 = CONCAT44(local_48._4_4_,iVar3);
  if (local_48._4_4_ < iVar3) {
    TArray<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationPtrs>,TInlineAllocator<8,FDefaultAllocator>_>
    ::ResizeGrow(local_150,uVar9 & 0xffffffff);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x40);
  puVar5 = local_150;
  if (local_50 != (undefined8 *)0x0) {
    puVar5 = local_50;
  }
  puVar5 = puVar5 + lVar7 * 4;
  *puVar5 = DAT_146866eb0;
  *(undefined1 *)(puVar5 + 1) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar2;
  uVar4 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
  *(uint *)(param_3 + 4) = uVar4;
  local_158 = (float)(uVar4 & 0x7fffff | 0x3f800000);
  FUN_140a56f20(param_1,param_2,local_150,local_158 - (float)(int)local_158);
  plVar6 = (longlong *)param_2[0x10];
  if ((longlong *)param_2[0x10] == (longlong *)0x0) {
    plVar6 = param_2;
  }
  uVar9 = (longlong)(int)param_2[0x11] & 0x1fffffffffffffff;
  if (plVar6 + (int)param_2[0x11] < plVar6) {
    uVar9 = uVar10;
  }
  if (uVar9 != 0) {
    do {
      lVar7 = *plVar6;
      if (lVar7 != 0) {
        FUN_1425a28b0(lVar7,DAT_146866ec0,*(undefined8 *)(param_1 + 0x48));
        FUN_1425a28b0(lVar7,DAT_146866ed0,*(undefined8 *)(param_1 + 0x50));
        FUN_1425a28b0(lVar7,DAT_146866ee0,*(undefined8 *)(param_1 + 0x58));
      }
      plVar6 = plVar6 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  if (local_50 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a55cb0 FUN_140a55cb0 body=706 status=ok
// SIG undefined FUN_140a55cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a55cb0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_168 [32];
  float local_148;
  undefined8 local_140 [32];
  undefined8 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar7 + 0x38) < DAT_146866e58) {
    _Init_thread_header(&DAT_146866e58);
    if (DAT_146866e58 == -1) {
      FName::FName(&DAT_146866e50,L"Hair_BaseColor_Inner_Mult",1);
      _Init_thread_footer(&DAT_146866e58);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146866e68) {
    _Init_thread_header(&DAT_146866e68);
    if (DAT_146866e68 == -1) {
      FName::FName(&DAT_146866e60,L"Hair_BaseColor_Outer_Mult",1);
      _Init_thread_footer(&DAT_146866e68);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146866e78) {
    _Init_thread_header(&DAT_146866e78);
    if (DAT_146866e78 == -1) {
      FName::FName(&DAT_146866e70,L"Hair_SSS_Color",1);
      _Init_thread_footer(&DAT_146866e78);
    }
  }
  local_38 = 1;
  local_40 = (undefined8 *)0x0;
  TArray<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationPtrs>,TInlineAllocator<8,FDefaultAllocator>_>
  ::ResizeGrow(local_140,0);
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  puVar6 = local_140;
  if (local_40 != (undefined8 *)0x0) {
    puVar6 = local_40;
  }
  *puVar6 = DAT_146866e50;
  *(undefined1 *)(puVar6 + 1) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((longlong)puVar6 + 0xc) = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar6 + 0x14) = uVar2;
  lVar7 = (longlong)(int)local_38;
  iVar3 = (int)local_38 + 1;
  if (local_38._4_4_ < iVar3) {
    uVar5 = local_38 & 0xffffffff;
    local_38._0_4_ = iVar3;
    TArray<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationPtrs>,TInlineAllocator<8,FDefaultAllocator>_>
    ::ResizeGrow(local_140,uVar5);
    iVar3 = (int)local_38;
  }
  local_38._0_4_ = iVar3;
  uVar1 = *(undefined1 *)(param_1 + 0x38);
  puVar6 = local_140;
  if (local_40 != (undefined8 *)0x0) {
    puVar6 = local_40;
  }
  puVar6 = puVar6 + lVar7 * 4;
  *puVar6 = DAT_146866e60;
  *(undefined1 *)(puVar6 + 1) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)((longlong)puVar6 + 0xc) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)((longlong)puVar6 + 0x14) = uVar2;
  iVar3 = (int)local_38;
  lVar7 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationPtrs>,TInlineAllocator<8,FDefaultAllocator>_>
    ::ResizeGrow(local_140,iVar3);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x4c);
  puVar6 = local_140;
  if (local_40 != (undefined8 *)0x0) {
    puVar6 = local_40;
  }
  puVar6 = puVar6 + lVar7 * 4;
  *puVar6 = DAT_146866e70;
  *(undefined1 *)(puVar6 + 1) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)((longlong)puVar6 + 0xc) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)((longlong)puVar6 + 0x14) = uVar2;
  uVar4 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
  *(uint *)(param_3 + 4) = uVar4;
  local_148 = (float)(uVar4 & 0x7fffff | 0x3f800000);
  FUN_140a56f20(param_1,param_2,local_140,local_148 - (float)(int)local_148);
  if (local_40 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a55f80 FUN_140a55f80 body=1279 status=ok
// SIG undefined FUN_140a55f80(void)

void FUN_140a55f80(undefined4 *param_1,longlong *param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x38) < DAT_146866de8) &&
     (_Init_thread_header(&DAT_146866de8), DAT_146866de8 == -1)) {
    FName::FName(&DAT_146866de0,L"Pattern_Primary_Strength",1);
    _Init_thread_footer(&DAT_146866de8);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_146866df8) &&
     (_Init_thread_header(&DAT_146866df8), DAT_146866df8 == -1)) {
    FName::FName(&DAT_146866df0,L"Pattern_Secondary_Strength",1);
    _Init_thread_footer(&DAT_146866df8);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_146866e08) &&
     (_Init_thread_header(&DAT_146866e08), DAT_146866e08 == -1)) {
    FName::FName(&DAT_146866e00,L"Pattern_Tertiary_Strength",1);
    _Init_thread_footer(&DAT_146866e08);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_146866e18) &&
     (_Init_thread_header(&DAT_146866e18), DAT_146866e18 == -1)) {
    FName::FName(&DAT_146866e10,L"T_Pattern_CompMap",1);
    _Init_thread_footer(&DAT_146866e18);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_146866e28) &&
     (_Init_thread_header(&DAT_146866e28), DAT_146866e28 == -1)) {
    FName::FName(&DAT_146866e20,L"T_Pattern_NormalMap",1);
    _Init_thread_footer(&DAT_146866e28);
  }
  uVar10 = 0x3f800000;
  uVar7 = 0;
  if (*(char *)(param_1 + 1) != '\0') {
    fVar1 = (float)param_1[8];
    uVar9 = *param_1;
    if (*(char *)((longlong)param_1 + 0x1d) != '\0') {
      uVar3 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_3 + 4) = uVar3;
      fVar4 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      if (fVar1 < fVar4 - (float)(int)fVar4) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x3f800000;
      }
    }
    plVar5 = (longlong *)param_2[0x10];
    if ((longlong *)param_2[0x10] == (longlong *)0x0) {
      plVar5 = param_2;
    }
    uVar6 = (longlong)(int)param_2[0x11] & 0x1fffffffffffffff;
    if (plVar5 + (int)param_2[0x11] < plVar5) {
      uVar6 = uVar7;
    }
    uVar8 = uVar7;
    if (uVar6 != 0) {
      do {
        if (*plVar5 != 0) {
          FUN_1425a2750(*plVar5,DAT_146866de0,uVar9);
        }
        plVar5 = plVar5 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar6);
    }
  }
  if (*(char *)(param_1 + 3) != '\0') {
    fVar1 = (float)param_1[8];
    uVar9 = param_1[2];
    if (*(char *)((longlong)param_1 + 0x1d) != '\0') {
      uVar3 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_3 + 4) = uVar3;
      fVar4 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      if (fVar1 < fVar4 - (float)(int)fVar4) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x3f800000;
      }
    }
    plVar5 = (longlong *)param_2[0x10];
    if ((longlong *)param_2[0x10] == (longlong *)0x0) {
      plVar5 = param_2;
    }
    uVar6 = (longlong)(int)param_2[0x11] & 0x1fffffffffffffff;
    if (plVar5 + (int)param_2[0x11] < plVar5) {
      uVar6 = uVar7;
    }
    uVar8 = uVar7;
    if (uVar6 != 0) {
      do {
        if (*plVar5 != 0) {
          FUN_1425a2750(*plVar5,DAT_146866df0,uVar9);
        }
        plVar5 = plVar5 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar6);
    }
  }
  if (*(char *)(param_1 + 5) != '\0') {
    fVar1 = (float)param_1[8];
    if (*(char *)((longlong)param_1 + 0x1d) == '\0') {
      uVar10 = param_1[4];
    }
    else {
      uVar3 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_3 + 4) = uVar3;
      fVar4 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      if (fVar1 < fVar4 - (float)(int)fVar4) {
        uVar10 = 0;
      }
    }
    plVar5 = (longlong *)param_2[0x10];
    if ((longlong *)param_2[0x10] == (longlong *)0x0) {
      plVar5 = param_2;
    }
    uVar6 = (longlong)(int)param_2[0x11] & 0x1fffffffffffffff;
    if (plVar5 + (int)param_2[0x11] < plVar5) {
      uVar6 = uVar7;
    }
    uVar8 = uVar7;
    if (uVar6 != 0) {
      do {
        if (*plVar5 != 0) {
          FUN_1425a2750(*plVar5,DAT_146866e00,uVar10);
        }
        plVar5 = plVar5 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar6);
    }
  }
  uVar3 = 0;
  if (0 < (int)param_1[0xc]) {
    if (*(char *)(param_1 + 9) != '\0') {
      uVar3 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_3 + 4) = uVar3;
      uVar3 = uVar3 % (uint)param_1[0xc];
    }
    plVar5 = (longlong *)param_2[0x10];
    if ((longlong *)param_2[0x10] == (longlong *)0x0) {
      plVar5 = param_2;
    }
    uVar6 = (longlong)(int)param_2[0x11] & 0x1fffffffffffffff;
    if (plVar5 + (int)param_2[0x11] < plVar5) {
      uVar6 = uVar7;
    }
    if (uVar6 != 0) {
      do {
        lVar2 = *plVar5;
        if (lVar2 != 0) {
          FUN_1425a28b0(lVar2,DAT_146866e10,
                        *(undefined8 *)(*(longlong *)(param_1 + 10) + (longlong)(int)uVar3 * 0x10));
          FUN_1425a28b0(lVar2,DAT_146866e20,
                        *(undefined8 *)
                         (*(longlong *)(param_1 + 10) + 8 + (longlong)(int)uVar3 * 0x10));
        }
        plVar5 = plVar5 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar6);
    }
  }
  return;
}



// FUNCTION 140a56480 FUN_140a56480 body=1079 status=ok
// SIG undefined FUN_140a56480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a56480(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_2[0x98];
    uVar14 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x930))(plVar3,*param_1,1);
      local_38 = param_1[1];
      pfVar1 = (float *)(plVar3 + 0x50);
      local_30 = (undefined4)param_1[2];
      if (((*(float *)(plVar3 + 0x3f) == *pfVar1) &&
          (*(float *)((longlong)plVar3 + 0x1fc) == *(float *)((longlong)plVar3 + 0x284))) &&
         (*(float *)(plVar3 + 0x40) == *(float *)(plVar3 + 0x51))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        local_48 = *(longlong *)*(undefined1 (*) [12])(plVar3 + 0x3f);
        auVar18._12_4_ = 0;
        auVar18._0_12_ = *(undefined1 (*) [12])(plVar3 + 0x3f);
        auVar18 = divps(auVar18,_DAT_146866750);
        fVar19 = (float)DAT_146866750;
        fVar20 = DAT_146866750._4_4_;
        fVar21 = DAT_146866750._8_4_;
        fVar23 = (float)local_48 - (float)(int)auVar18._0_4_ * fVar19;
        fVar24 = (float)((ulonglong)local_48 >> 0x20) - (float)(int)auVar18._4_4_ * fVar20;
        fVar25 = *(float *)(plVar3 + 0x40) - (float)(int)auVar18._8_4_ * fVar21;
        fVar23 = (float)((uint)(fVar23 + fVar19) ^
                        ((uint)(fVar23 + fVar19) ^ (uint)fVar23) & -(uint)(0.0 <= fVar23));
        fVar24 = (float)((uint)(fVar24 + fVar20) ^
                        ((uint)(fVar24 + fVar20) ^ (uint)fVar24) & -(uint)(0.0 <= fVar24));
        fVar25 = (float)((uint)(fVar25 + fVar21) ^
                        ((uint)(fVar25 + fVar21) ^ (uint)fVar25) & -(uint)(0.0 <= fVar25));
        uVar22 = (uint)fVar25 ^
                 ((uint)(fVar25 - fVar21) ^ (uint)fVar25) & -(uint)(fRam0000000146866748 < fVar25);
        lStack_40 = CONCAT44(lStack_40._4_4_,uVar22);
        *(ulonglong *)pfVar1 =
             CONCAT44((uint)fVar24 ^
                      ((uint)(fVar24 - fVar20) ^ (uint)fVar24) &
                      -(uint)(fRam0000000146866744 < fVar24),
                      (uint)fVar23 ^
                      ((uint)(fVar23 - fVar19) ^ (uint)fVar23) & -(uint)(_DAT_146866740 < fVar23));
        *(uint *)(plVar3 + 0x51) = uVar22;
        plVar8 = (longlong *)FRotator::Quaternion(pfVar1,local_28);
        lVar9 = plVar8[1];
        plVar3[0x4e] = *plVar8;
        plVar3[0x4f] = lVar9;
      }
      local_48 = plVar3[0x4e];
      lStack_40 = plVar3[0x4f];
      FUN_142397be0(plVar3,&local_38,&local_48,0,0,0);
      if (param_1[3] != 0) {
        lVar9 = FUN_142e5c1e0();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          FUN_142cac740(plVar3,param_1[3]);
        }
      }
      if (param_1[4] != 0) {
        lVar10 = FUN_1428eccf0();
        lVar9 = param_1[4];
        for (lVar4 = lVar9; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          if (lVar4 == lVar10) {
            if ((lVar9 != 0) && (lVar4 = param_2[0x1cd], lVar4 != 0)) {
              uVar17 = uVar14;
              if (lVar9 != 0) {
                uVar11 = FUN_1428eccf0();
                for (uVar13 = param_1[4];
                    (uVar17 = uVar14, uVar13 != 0 && (uVar17 = param_1[4], uVar13 != uVar11));
                    uVar13 = *(ulonglong *)(uVar13 + 0x30)) {
                }
              }
              FUN_142cec150(lVar4,plVar3,uVar17);
            }
            break;
          }
        }
      }
      if (param_2[0x126] != 0) {
        FUN_142db7aa0(param_2[0x126],plVar3);
      }
      puVar15 = (undefined8 *)param_1[7];
      puVar16 = puVar15 + (int)param_1[8];
      for (; puVar15 != puVar16; puVar15 = puVar15 + 1) {
        FUN_1423a95e0(plVar3,*puVar15);
      }
      puVar15 = (undefined8 *)param_1[5];
      puVar16 = puVar15 + (int)param_1[6];
      for (; puVar15 != puVar16; puVar15 = puVar15 + 1) {
        FUN_1423aa350(plVar3,*puVar15);
      }
      puVar16 = (undefined8 *)param_1[0xb];
      uVar17 = (longlong)(int)param_1[0xc] & 0x1fffffffffffffff;
      if (puVar16 + (int)param_1[0xc] < puVar16) {
        uVar17 = uVar14;
      }
      uVar13 = uVar14;
      if (uVar17 != 0) {
        do {
          FUN_1423a9590(plVar3,*puVar16);
          uVar13 = uVar13 + 1;
          puVar16 = puVar16 + 1;
        } while (uVar13 != uVar17);
      }
      puVar16 = (undefined8 *)param_1[9];
      uVar17 = (longlong)(int)param_1[10] & 0x1fffffffffffffff;
      if (puVar16 + (int)param_1[10] < puVar16) {
        uVar17 = uVar14;
      }
      uVar13 = uVar14;
      if (uVar17 != 0) {
        do {
          FUN_1423aa300(plVar3,*puVar16);
          uVar13 = uVar13 + 1;
          puVar16 = puVar16 + 1;
        } while (uVar13 != uVar17);
      }
      uVar17 = uVar14;
      if (0 < (int)param_1[0xe]) {
        do {
          (**(code **)(*plVar3 + 0x568))(plVar3,uVar17,*(undefined8 *)(param_1[0xd] + uVar14));
          uVar22 = (int)uVar17 + 1;
          uVar14 = uVar14 + 8;
          uVar17 = (ulonglong)uVar22;
        } while ((int)uVar22 < (int)param_1[0xe]);
      }
    }
    if (0 < (int)param_1[0x10]) {
      uVar12 = FUN_140604cc0();
      lVar9 = (**(code **)(*param_2 + 0x628))(param_2,uVar12);
      if (lVar9 != 0) {
        iVar2 = (int)param_1[0x10];
        iVar6 = 0;
        if (0 < iVar2) {
          iVar6 = rand();
          iVar7 = (int)((float)iVar6 * 3.051851e-05 * (float)iVar2);
          iVar6 = iVar2 + -1;
          if (iVar7 <= iVar2 + -1) {
            iVar6 = iVar7;
          }
        }
        FUN_1405f14d0(lVar9,*(undefined8 *)(param_1[0xf] + (longlong)iVar6 * 8));
      }
    }
    if ((param_1[0x11] != 0) && (param_2[0x1d2] != 0)) {
      FUN_140ec0320();
    }
    if ((-1 < (int)param_1[0x12]) && (param_2[0x1cf] != 0)) {
      *(int *)(param_2[0x1cf] + 0x980) = (int)param_1[0x12];
    }
  }
  return;
}



// FUNCTION 140a568c0 FUN_140a568c0 body=128 status=ok
// SIG undefined FUN_140a568c0(void)

void FUN_140a568c0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x6d8);
  if (lVar1 != 0) {
    lVar3 = FUN_142a07000();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(param_1 + 0x6d0) != 0)) {
      FUN_1423b5fe0(lVar1,*(longlong *)(param_1 + 0x6d0),param_2);
    }
  }
  return;
}



// FUNCTION 140a56940 FUN_140a56940 body=770 status=ok
// SIG undefined FUN_140a56940(void)

void FUN_140a56940(longlong param_1,longlong param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 local_48;
  undefined4 local_40;
  uint local_3c;
  
  plVar3 = (longlong *)FUN_142ceefb0();
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar4 = FUN_14145f370();
  if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  cVar2 = (**(code **)(*plVar3 + 0x768))(plVar3);
  if (cVar2 == '\0') {
    return;
  }
  lVar4 = plVar3[0xa5];
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_142fd5420();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  piVar6 = (int *)(param_1 + 0x678);
  uVar7 = 0;
  uVar10 = uVar7;
  do {
    if (*piVar6 == *(int *)(param_2 + 0xc)) {
      if ((int)uVar10 != 2) goto LAB_140a56a54;
      break;
    }
    uVar9 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar9;
    piVar6 = piVar6 + 2;
  } while (uVar9 < 2);
  uVar10 = (ulonglong)(*(char *)(param_1 + 0x67c) != '\0');
  *(int *)(param_1 + 0x678 + uVar10 * 8) = *(int *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x67c + uVar10 * 8) = 0;
LAB_140a56a54:
  if (*(char *)(param_1 + 0x67c + uVar10 * 8) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x67c + uVar10 * 8) = param_3;
  if ((*(longlong *)(param_1 + 0x650) != 0) && (param_3 == '\x01')) {
    FUN_142fc8b90(lVar4);
  }
  uVar11 = 0xbf800000;
  local_48 = 0;
  if (param_3 == '\0') {
    lVar5 = *(longlong *)(param_1 + 0x648);
    uVar11 = *(undefined4 *)(param_1 + 0x634);
  }
  else {
    if (param_3 == '\x01') {
      lVar8 = *(longlong *)(param_1 + 0x638);
      uVar11 = *(undefined4 *)(param_1 + 0x628);
      lVar5 = 0;
      goto LAB_140a56b2c;
    }
    if (param_3 == '\x02') {
      lVar5 = *(longlong *)(param_1 + 0x638);
      lVar8 = *(longlong *)(param_1 + 0x640);
      uVar11 = *(undefined4 *)(param_1 + 0x62c);
      goto LAB_140a56b2c;
    }
    if (param_3 == '\x03') {
      lVar5 = *(longlong *)(param_1 + 0x640);
      lVar8 = *(longlong *)(param_1 + 0x648);
      uVar11 = *(undefined4 *)(param_1 + 0x630);
      goto LAB_140a56b2c;
    }
    lVar5 = 0;
  }
  lVar8 = 0;
LAB_140a56b2c:
  if (param_3 == '\x02') {
    uVar7 = *(ulonglong *)(param_1 + 0x640);
  }
  plVar3[0x287] = uVar7;
  if (lVar5 != lVar8) {
    if (lVar8 != 0) {
      if (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) != '\x03') {
        local_48 = 0;
        local_40 = 0xbf800000;
        FUN_142fcd6d0(lVar4,&local_48);
      }
      FUN_142fccb00(lVar4,lVar8,uVar11,0);
    }
    FUN_142fcc0b0(lVar4,lVar5,uVar11,0);
    if ((param_3 == '\0') &&
       (lVar5 = *(longlong *)(param_1 + 0x118), lVar8 = (**(code **)(*plVar3 + 0x758))(plVar3),
       lVar8 == lVar5)) {
      local_3c = local_3c & 0xfffffffe;
      local_40 = 0x40000000;
      local_48 = CONCAT35((int3)((ulonglong)local_48 >> 0x28),0x100000000);
      (**(code **)(*plVar3 + 0xe18))(plVar3,param_2,&local_48);
    }
  }
  if ((*(longlong *)(param_1 + 0x650) != 0) && (param_3 == '\0')) {
    FUN_142fccd40(lVar4);
  }
  return;
}



// FUNCTION 140a56c50 FUN_140a56c50 body=180 status=ok
// SIG undefined FUN_140a56c50(void)

void FUN_140a56c50(longlong param_1)

{
  char cVar1;
  float fVar2;
  longlong lVar3;
  int local_res10;
  uint local_res14;
  
  local_res10 = *(int *)(param_1 + 0x21f8);
  local_res14 = local_res10 * 0xbb38435 + 0x3619636b;
  fVar2 = (float)(local_res14 & 0x7fffff | 0x3f800000);
  if (*(char *)(param_1 + 0x1e7a) != '\0') {
    cVar1 = *(char *)(param_1 + 0x1e79);
    if (cVar1 == '\x02') {
      if (fVar2 - (float)(int)fVar2 <= 0.5) {
        *(undefined1 *)(param_1 + 0x1e79) = 1;
        cVar1 = '\x01';
      }
      else {
        *(undefined1 *)(param_1 + 0x1e79) = 0;
        cVar1 = '\0';
      }
    }
    if (cVar1 == '\0') {
      lVar3 = param_1 + 0x1e80;
    }
    else {
      if (cVar1 != '\x01') goto LAB_140a56cea;
      lVar3 = param_1 + 0x1f18;
    }
    FUN_140a56480(lVar3,param_1);
  }
LAB_140a56cea:
  FUN_140a54f30(param_1 + 0x1fb0,param_1,&local_res10);
  return;
}



// FUNCTION 140a56d10 FUN_140a56d10 body=89 status=ok
// SIG undefined FUN_140a56d10(void)

void FUN_140a56d10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    *(undefined8 *)(param_1 + 0x6c8) = param_2;
    FUN_140a57a50();
    lVar1 = *(longlong *)(param_1 + 0x698);
    if (lVar1 != 0) {
      lVar2 = 0;
      if (*(longlong *)(lVar1 + 0x508) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x508) + 0x2c70);
      }
      if (lVar2 != 0) {
        FUN_140a6de60(lVar1,lVar2 + 0x1918);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a56d70 FUN_140a56d70 body=261 status=ok
// SIG undefined FUN_140a56d70(void)

void FUN_140a56d70(longlong param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if ((*(byte *)(param_1 + 0x620) & 0x10) == 0) {
    return;
  }
  plVar4 = (longlong *)FUN_142ceefb0();
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  lVar5 = FUN_14145f370();
  if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  cVar3 = (**(code **)(*plVar4 + 0x768))(plVar4);
  if (cVar3 == '\0') {
    return;
  }
  lVar5 = FUN_140cff1b0(plVar4);
  if (lVar5 == 0) {
    return;
  }
  if (param_3 == '\0') {
LAB_140a56e2d:
    plVar4 = (longlong *)FUN_140cff1b0(plVar4);
    uVar6 = 1;
  }
  else {
    if (param_3 == '\x01') {
      uVar1 = *(uint *)(param_1 + 0x620);
      plVar4 = (longlong *)FUN_140cff1b0(plVar4);
      lVar5 = *plVar4;
      if ((uVar1 & 0x20) == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
      goto LAB_140a56e3d;
    }
    if (param_3 == '\x02') {
      if ((*(byte *)(param_1 + 0x620) & 0x20) == 0) {
        return;
      }
      goto LAB_140a56e2d;
    }
    if (param_3 != '\x03') {
      return;
    }
    if ((*(byte *)(param_1 + 0x620) & 0x40) == 0) {
      return;
    }
    plVar4 = (longlong *)FUN_140cff1b0(plVar4);
    uVar6 = 0;
  }
  lVar5 = *plVar4;
LAB_140a56e3d:
  (**(code **)(lVar5 + 0x7a8))(plVar4,uVar6);
  return;
}



// FUNCTION 140a56e80 FUN_140a56e80 body=154 status=ok
// SIG undefined FUN_140a56e80(void)

void FUN_140a56e80(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_2 + 0x6c);
  if (lVar2 != 0) {
    lVar3 = FUN_1430e5840();
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
      return;
    }
  }
  FUN_14232d8c0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140a56f20 FUN_140a56f20 body=724 status=ok
// SIG undefined FUN_140a56f20(void)

void FUN_140a56f20(char *param_1,longlong *param_2,undefined8 *param_3,float param_4)

{
  longlong *plVar1;
  float fVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  
  puVar5 = (undefined8 *)param_3[0x20];
  if ((undefined8 *)param_3[0x20] == (undefined8 *)0x0) {
    puVar5 = param_3;
  }
  puVar6 = puVar5 + (longlong)*(int *)(param_3 + 0x21) * 4;
  for (; puVar5 != puVar6; puVar5 = puVar5 + 4) {
    cVar3 = *param_1;
    if ((cVar3 != '\0') || (*(char *)(puVar5 + 1) != '\0')) {
      local_c8 = *(float *)((longlong)puVar5 + 0xc);
      fStack_c4 = *(float *)(puVar5 + 2);
      fStack_c0 = *(float *)((longlong)puVar5 + 0x14);
      uStack_bc = *(undefined4 *)(puVar5 + 3);
      if ((*(char *)(puVar5 + 1) == '\0') && (0 < (int)param_2[0x11])) {
        plVar4 = (longlong *)param_2[0x10];
        if ((longlong *)param_2[0x10] == (longlong *)0x0) {
          plVar4 = param_2;
        }
        plVar4 = (longlong *)*plVar4;
        if (plVar4 != (longlong *)0x0) {
          local_b8 = *puVar5;
          local_b0 = 0x202ffff;
          local_ac = 0xffffffff;
          (**(code **)(*plVar4 + 0x400))(plVar4,&local_b8,&local_c8,0);
          cVar3 = *param_1;
        }
      }
      if (cVar3 != '\0') {
        local_e8 = local_c8;
        local_e4 = fStack_c4;
        local_e0 = fStack_c0;
        FVector::RotateAngleAxis
                  (&local_e8,&local_d8,
                   *(float *)(param_1 + 4) * 720.0 * param_4 - *(float *)(param_1 + 4) * 360.0);
        fVar8 = *(float *)(param_1 + 8);
        fVar8 = (fVar8 + fVar8) * param_4 - fVar8;
        if (-1.0 <= fVar8) {
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
        }
        else {
          fVar8 = -1.0;
        }
        fVar2 = *(float *)(param_1 + 0x10);
        fVar7 = local_d4;
        if (local_d4 <= local_d0) {
          fVar7 = local_d0;
        }
        if (fVar7 <= local_d8) {
          fVar7 = local_d8;
        }
        fStack_c0 = ((fVar2 + fVar2) * param_4 - fVar2) + *(float *)(param_1 + 0xc);
        local_c8 = ((fVar7 - local_d8) * fVar8 + local_d8) * fStack_c0;
        fStack_c4 = ((fVar7 - local_d4) * fVar8 + local_d4) * fStack_c0;
        fStack_c0 = ((fVar7 - local_d0) * fVar8 + local_d0) * fStack_c0;
      }
      plVar4 = (longlong *)param_2[0x10];
      if ((longlong *)param_2[0x10] == (longlong *)0x0) {
        plVar4 = param_2;
      }
      plVar1 = plVar4 + (int)param_2[0x11];
      for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 != 0) {
          local_a8 = local_c8;
          fStack_a4 = fStack_c4;
          fStack_a0 = fStack_c0;
          uStack_9c = uStack_bc;
          FUN_1425a2be0(*plVar4,*puVar5,&local_a8);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a57200 FUN_140a57200 body=1098 status=ok
// SIG undefined FUN_140a57200(void)

void FUN_140a57200(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong local_res8;
  longlong *local_res10;
  longlong local_res18;
  ulonglong uVar16;
  undefined1 local_148 [16];
  code *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined1 local_128 [16];
  code *local_118;
  longlong lStack_110;
  undefined1 local_f8 [32];
  longlong local_d8;
  longlong local_c8;
  longlong local_b8;
  longlong local_a8;
  undefined1 local_88 [16];
  undefined1 local_78 [40];
  undefined1 local_50;
  
  if ((char)param_1[0x25] == '\x03') {
    if ((param_1[0x8c] == 0) || (lVar7 = *(longlong *)(param_1[0x8c] + 0x508), lVar7 == 0)) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x2c70);
    }
    if (lVar7 != 0) {
      lVar15 = *(longlong *)(lVar7 + 0x1940);
      local_res18 = (longlong)*(int *)(lVar7 + 0x1948) * 0x88 + lVar15;
      if (lVar15 != local_res18) {
LAB_140a572b2:
        lVar7 = FUN_140a66460(lVar15);
        if (lVar7 != 0) {
          plVar1 = (longlong *)param_1[0x8d];
          for (plVar11 = plVar1; plVar11 != plVar1 + (int)param_1[0x8e]; plVar11 = plVar11 + 1) {
            if (*plVar11 == lVar7) {
              lVar13 = (longlong)plVar11 - (longlong)plVar1 >> 3;
              if ((((int)lVar13 != -1) &&
                  (plVar1 = (longlong *)param_1[0x2d], plVar1 != (longlong *)0x0)) &&
                 (cVar6 = (**(code **)(*plVar1 + 0x440))(plVar1), cVar6 != '\0')) {
                _guard_xfg_dispatch_icall_nop(local_f8,0,0x68);
                if (0 < *(int *)(lVar15 + 8)) {
                  uVar8 = FUN_142fde6b0(&local_118,lVar15,1);
                  FUN_143001780(local_f8,uVar8);
                  if (lStack_110 != 0) {
                    FMemory::Free();
                  }
                }
                uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
                lVar9 = FUN_143019ed0(uVar8,local_f8,1,0);
                if (lVar9 == 0) goto LAB_140a575bb;
                local_res10 = (longlong *)FUN_140e7fd70(param_1 + 0x94,lVar7);
                (**(code **)(*plVar1 + 0x428))(plVar1,local_128,*(undefined8 *)(lVar7 + 0x30));
                (**(code **)(*plVar1 + 0x430))(plVar1,local_148,*(undefined8 *)(lVar7 + 0x30));
                FRotator::Quaternion(local_148,local_88);
                FActorSpawnParameters::FActorSpawnParameters(local_78);
                local_50 = 1;
                if (param_1[0x8f] == 0) goto LAB_140a57423;
                lVar10 = FUN_143025260();
                lVar14 = param_1[0x8f];
                lVar2 = lVar14;
                goto joined_r0x000140a57413;
              }
              break;
            }
          }
        }
        goto LAB_140a575f3;
      }
    }
  }
  return;
joined_r0x000140a57413:
  if (lVar2 == 0) goto LAB_140a57423;
  if (lVar2 == lVar10) goto LAB_140a57425;
  lVar2 = *(longlong *)(lVar2 + 0x30);
  goto joined_r0x000140a57413;
LAB_140a57423:
  lVar14 = 0;
LAB_140a57425:
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar16 = *(ulonglong *)(lVar7 + 0x70);
  plVar11 = (longlong *)
            FUN_142ff1380(uVar8,lVar14,1,lVar9,uVar16,0,&DAT_1468b5d90,local_128,local_148,0,0);
  if (plVar11 != (longlong *)0x0) {
    lVar9 = FUN_1413b9340();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uStack_130 = 0;
      local_138 = FUN_140a5de70;
      lStack_110 = (ulonglong)uStack_12c << 0x20;
      local_118 = FUN_140a5de70;
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ACrewQuartersGunRack::CreateEmptyPickup",L"::");
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar12, pwVar4 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(&local_res8,pwVar5 + 2,1);
      FUN_1407260e0(plVar11 + 0xe7,param_1,&local_118,local_res8);
      plVar11[0xea] = lVar7;
      *(char *)(plVar11 + 0xe9) = (char)lVar13;
    }
    (**(code **)(*plVar11 + 0x3a0))(plVar11,0);
    (**(code **)(*plVar11 + 0x448))(plVar11,param_1);
    (**(code **)(*plVar11 + 0x818))(plVar11,plVar1,*(undefined8 *)(lVar7 + 0x30),2);
    FUN_140e7b7b0(param_1 + 0x94,lVar7,plVar11,1,uVar16 & 0xffffffffffffff00);
    if (local_res10 != (longlong *)0x0) {
      (**(code **)(*local_res10 + 0x6d0))(local_res10,0);
    }
  }
LAB_140a575bb:
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
LAB_140a575f3:
  lVar15 = lVar15 + 0x88;
  if (lVar15 == local_res18) {
    return;
  }
  goto LAB_140a572b2;
}



// FUNCTION 140a57650 FUN_140a57650 body=266 status=ok
// SIG undefined FUN_140a57650(void)

void FUN_140a57650(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if (((0 < *(int *)(param_1 + 0x11f8)) &&
      (plVar2 = *(longlong **)(param_1 + 0x4c0), plVar2 != (longlong *)0x0)) &&
     ((*(uint *)(param_1 + 0xf60) & 4) == 0)) {
    *(uint *)(param_1 + 0xf60) = *(uint *)(param_1 + 0xf60) | 4;
    (**(code **)(*plVar2 + 0x5b8))(plVar2,1);
    uVar3 = (ulonglong)_tls_index;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x4c0) + 0xb1a);
    *pbVar1 = *pbVar1 & 0xdf;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x38) <
        DAT_146866cb8) {
      _Init_thread_header(&DAT_146866cb8);
      if (DAT_146866cb8 == -1) {
        FName::FName(&DAT_146866cb0,L"PhysicalAnimation",1);
        _Init_thread_footer(&DAT_146866cb8);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x640))
              (*(longlong **)(param_1 + 0x4c0),DAT_146866cb0);
    if (*(longlong **)(param_1 + 0x910) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x910) + 0x418))();
    }
    FUN_142db2b80(param_1 + 0x11f0,*(undefined8 *)(param_1 + 0x4c0));
    FUN_140a60500(param_1);
    return;
  }
  return;
}



// FUNCTION 140a57760 FUN_140a57760 body=573 status=ok
// SIG undefined FUN_140a57760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a57760(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (((char)param_1[0x25] == '\x03') && (param_1[0xa1] == param_2)) {
    local_b8 = 0;
    local_b0 = 0;
    (**(code **)(*param_1 + 0x708))(param_1,&local_b8);
    if ((*(float *)((longlong)param_1 + 0x4fc) <= 0.0) || ((int)local_b0 < 1)) {
      if (((char)param_1[0x25] == '\x03') && (param_1[0xa1] == param_2)) {
        FUN_140a67790(param_1,param_2,param_3);
      }
    }
    else {
      param_1[0xac] = param_2;
      param_1[0xad] = param_3;
      lVar4 = param_1[0xa0];
      *(int *)(param_1 + 0xab) = (int)*(float *)((longlong)param_1 + 0x4fc);
      uVar1 = AActor::GetWorldTimerManager(param_1);
      plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        plVar2[2] = (longlong)FUN_140a6b870;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar2[4] = lVar3;
        *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar1,param_1 + 0xaa,&local_a8,(int)lVar4);
      if (local_48 != 0) {
        plVar5 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar5 = local_58;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        lVar4 = FMemory::Realloc(plVar2,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140a579a0 FUN_140a579a0 body=161 status=ok
// SIG undefined FUN_140a579a0(void)

void FUN_140a579a0(longlong *param_1,undefined4 param_2,float param_3,float param_4)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  float fVar4;
  
  lVar2 = *param_1;
  fVar4 = (float)(**(code **)(lVar2 + 0x400))();
  cVar3 = (**(code **)(lVar2 + 0x428))(param_1,fVar4 * *(float *)(param_1 + 0x55a));
  if (cVar3 != '\0') {
    bVar1 = *(byte *)(param_1 + 0x49);
    param_3 = param_3 + *(float *)((longlong)param_1 + 0x2ad4);
    if (bVar1 != 0) {
      if (bVar1 < 3) {
        param_4 = param_4 + *(float *)(param_1 + 0x55b);
      }
      else if (bVar1 == 3) {
        param_4 = param_4 + *(float *)((longlong)param_1 + 0x2adc);
      }
    }
  }
  FUN_14232f660(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140a57a50 FUN_140a57a50 body=683 status=ok
// SIG undefined FUN_140a57a50(void)

void FUN_140a57a50(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48 [2];
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar4 = *(longlong **)(param_1 + 0x6d8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3b0))(plVar4,1);
    *(undefined8 *)(param_1 + 0x6d8) = 0;
  }
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    local_58 = FUN_140a6a460;
    pplVar2 = (longlong **)(param_1 + 0x708);
    uStack_50 = 0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_48[0] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_58;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_58._4_4_;
      *(undefined4 *)(plVar4 + 3) = uStack_50;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_4c;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    }
    if (local_48 != pplVar2) {
      if (plVar4 == (longlong *)0x0) {
        if ((*(int *)(param_1 + 0x710) != 0) && (plVar6 = *pplVar2, plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          if (*pplVar2 != (longlong *)0x0) {
            plVar6 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
            *pplVar2 = plVar6;
          }
          *(undefined4 *)(param_1 + 0x710) = 0;
        }
      }
      else {
        (**(code **)(*plVar4 + 0x30))(plVar4,pplVar2);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      local_48[0] = (longlong *)FMemory::Realloc(plVar4,0,0);
      if (local_48[0] != (longlong *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x6c8);
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    lVar7 = FUN_1422ca050();
    local_res8 = *(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0x18);
    FName::ToString(&local_res8,local_38);
    local_58 = (code *)0x0;
    uStack_50 = 0;
    if (((pplVar2 != (longlong **)&local_58) && (*(int *)(param_1 + 0x710) != 0)) &&
       (plVar4 = *pplVar2, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
    }
    puVar8 = (undefined8 *)
             FStreamableManager::RequestAsyncLoad
                       (lVar7 + 0x178,local_28,lVar5 + 0x90,&local_58,0,0,0,local_38);
    if (&local_68 != puVar8) {
      local_68 = *puVar8;
      *puVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_60,puVar8 + 1);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_20 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if ((undefined8 *)(param_1 + 0x6f8) != &local_68) {
      *(undefined8 *)(param_1 + 0x6f8) = local_68;
      local_68 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x700,&plStack_60);
    }
    plVar4 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_60 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a57d00 FUN_140a57d00 body=228 status=ok
// SIG undefined FUN_140a57d00(void)

void FUN_140a57d00(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142ce19b0();
  lVar4 = *(longlong *)(param_1 + 0x408);
  if (lVar4 != 0) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a57d56;
  }
  lVar4 = 0;
LAB_140a57d56:
  if ((((*(byte *)(param_1 + 0x620) & 4) != 0) && (lVar4 != 0)) &&
     (lVar2 = *(longlong *)(param_1 + 0x118), lVar2 != 0)) {
    lVar3 = FUN_1413f82e0();
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
      FUN_140c58600(lVar2,lVar4);
    }
  }
  *(undefined1 *)(param_1 + 0x6a8) = 0;
  *(undefined1 *)(param_1 + 0x6ba) = 0;
  if (lVar4 != 0) {
    FUN_140c520b0(lVar4,param_1);
  }
  return;
}



// FUNCTION 140a57df0 FUN_140a57df0 body=248 status=ok
// SIG undefined FUN_140a57df0(void)

void FUN_140a57df0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  FUN_142ce1e90();
  plVar1 = *(longlong **)(param_1 + 0x408);
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)(param_1 + 0x620) & 0x300) != 0)) {
    uVar3 = FUN_141477fa0();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    if (lVar4 != 0) {
      uVar6 = *(uint *)(param_1 + 0x620);
      if ((uVar6 >> 8 & 1) != 0) {
        FUN_140ebe510(lVar4);
        uVar6 = *(uint *)(param_1 + 0x620);
      }
      if ((uVar6 >> 9 & 1) != 0) {
        FUN_140eb2f00(lVar4,DAT_146b31760);
      }
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x118);
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x620) & 0x80) != 0)) {
    uVar3 = FUN_141477fa0();
    (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x408);
  if (lVar4 != 0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140c520b0(lVar4,param_1);
    }
  }
  return;
}



// FUNCTION 140a57ef0 FUN_140a57ef0 body=451 status=ok
// SIG undefined FUN_140a57ef0(void)

void FUN_140a57ef0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong local_res8;
  longlong local_38 [3];
  undefined1 local_20 [24];
  
  FUN_142137510();
  if (*(longlong *)(param_1 + 0x668) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x408);
    cVar3 = '\0';
    if (((plVar1 == (longlong *)0x0) || (1 < (byte)(*(char *)(param_1 + 0x418) - 1U))) ||
       ((*(char *)(param_1 + 0x664) != '\0' &&
        ((cVar2 = (**(code **)(*plVar1 + 0x778))(plVar1), cVar2 == '\0' ||
         (cVar2 = (**(code **)(*plVar1 + 0x780))(plVar1), cVar2 == '\0')))))) {
      cVar3 = FUN_14059f160(param_1 + 0x690);
    }
    else {
      cVar2 = FUN_14059ee90(param_1 + 0x690);
      if ((cVar2 == '\0') && (lVar4 = FUN_14059b7e0(*(undefined8 *)(param_1 + 0x118),1), lVar4 != 0)
         ) {
        lVar4 = FUN_1405a3150(lVar4,local_38,*(undefined8 *)(param_1 + 0x668),0);
        FUN_1405913a0(param_1 + 0x690,lVar4);
        *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(lVar4 + 0x10);
        FUN_140591060(local_38);
      }
    }
    lVar4 = param_1 + 0x690;
    if (cVar3 != '\0') {
      if ((*(longlong *)(param_1 + 0x670) == 0) || (cVar3 = FUN_14059f160(lVar4), cVar3 == '\0')) {
        cVar3 = FUN_14059ee90(lVar4);
        if (cVar3 != '\0') {
          FUN_1405ac8f0(lVar4,0,4);
        }
      }
      else {
        FUN_14058f8a0(&local_res8,lVar4);
        local_38[0] = 0;
        local_38[1] = 0;
        FUN_1405a2d20(local_res8,local_20,*(undefined8 *)(param_1 + 0x670),0,0,local_38);
        FUN_140591060(local_20);
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        if (local_res8 != 0) {
          FUN_1405a53f0();
        }
      }
      FUN_1405913a0(lVar4,&DAT_1461fcfe0);
      *(undefined4 *)(param_1 + 0x6a0) = DAT_1461fcff0;
    }
  }
  return;
}



// FUNCTION 140a580c0 FUN_140a580c0 body=475 status=ok
// SIG undefined FUN_140a580c0(void)

undefined8 FUN_140a580c0(longlong param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar1 = FUN_140a5abf0();
  if ((cVar1 != '\0') && (lVar6 = *(longlong *)(param_1 + 0x2978), lVar6 != 0)) {
    if ((param_2 < 0) || (*(int *)(lVar6 + 0x38) <= param_2)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 8 + (longlong)param_2 * 0x28),
       lVar6 != 0)) {
      lVar4 = FUN_142e07420();
      lVar5 = lVar6;
      do {
        if (lVar5 == lVar4) {
          if (((*(longlong *)(param_1 + 0x1778) == 0) || ((*(byte *)(param_1 + 0x18cc) & 2) != 0))
             || (*(longlong *)(param_1 + 0x178) == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((((bVar2) && (iVar3 = FUN_14233f450(param_1), 1 < iVar3)) &&
              ((lVar5 = *(longlong *)(param_1 + 0x1778), lVar5 != 0 &&
               (((*(byte *)(param_1 + 0x18cc) & 2) == 0 && ((*(uint *)(lVar5 + 0x2c) & 0x800) == 0))
               )))) && (lVar5 != 0)) {
            lVar4 = FUN_141410cb0();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((bVar2) && ((*(byte *)(lVar5 + 0x8a0) & 8) == 0)) {
              *(uint *)(param_1 + 0x18cc) = *(uint *)(param_1 + 0x18cc) | 0x100;
              FUN_142d01010(param_1,*(undefined8 *)(lVar5 + 0x10),0,1);
              *(uint *)(param_1 + 0x18cc) = *(uint *)(param_1 + 0x18cc) & 0xfffffeff;
            }
          }
          cVar1 = FUN_142d00590(param_1,lVar6,0);
          if (cVar1 == '\0') {
            return 0;
          }
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x2b78) + 0x490);
          if (lVar6 != 0) {
            lVar5 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) goto LAB_140a5826a;
          }
          lVar6 = 0;
LAB_140a5826a:
          if (DAT_14686b358 == '\0') {
            FUN_140c18430(&DAT_14686b350);
          }
          FUN_140c29220(DAT_14686b350,lVar6);
          return 1;
        }
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
  }
  return 0;
}



// FUNCTION 140a582a0 HandleNgheDaDestroyed body=31 status=ok
// SIG undefined HandleNgheDaDestroyed(void)

void ATDMGameplayBase::HandleNgheDaDestroyed(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140a64690();
  if (lVar1 != 0) {
    FUN_14149ad00(lVar1);
    return;
  }
  return;
}



// FUNCTION 140a582c0 thunk_FUN_142223710 body=5 status=ok
// SIG undefined thunk_FUN_142223710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_142223710(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [16];
  code *pcStack_108;
  undefined1 *puStack_100;
  longlong lStack_f8;
  longlong alStack_f0 [24];
  longlong *plStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  
  uStack_20 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  (**(code **)(*param_1 + 0x3a0))(param_1,*(undefined4 *)((longlong)param_1 + 0xcc));
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  uVar6 = 0;
  if ((cVar2 == '\0') && ((*(byte *)((longlong)param_1 + 0x93) & 0x10) == 0)) {
    puStack_100 = auStack_118;
    auStack_118[0] = 0;
    pcStack_108 = FUN_142224910;
    lVar3 = FUN_1415d8310(&pcStack_108,&DAT_1465318e0);
    (**(code **)(*param_1 + 0x540))(param_1,1);
    *(byte *)((longlong)param_1 + 0x93) = *(byte *)((longlong)param_1 + 0x93) | 0x10;
    *(undefined8 *)(lVar3 + 0x18) = 0;
  }
  plStack_30 = (longlong *)0x0;
  uStack_28 = 0;
  FUN_140a4ca80(param_1,alStack_f0,0);
  if ((((*(byte *)(param_1 + 0x80) & 4) != 0) &&
      (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x970) != 0)) {
    FUN_1424a97c0(*(longlong *)(lVar3 + 0x970),param_1);
  }
  if ((*(byte *)(param_1 + 0x68) & 2) != 0) {
    plVar4 = alStack_f0;
    if (plStack_30 != (longlong *)0x0) {
      plVar4 = plStack_30;
    }
    uVar7 = (longlong)(int)uStack_28 & 0x1fffffffffffffff;
    if (plVar4 + (int)uStack_28 < plVar4) {
      uVar7 = uVar6;
    }
    uVar5 = uVar6;
    if (uVar7 != 0) {
      do {
        pcStack_108 = (code *)*plVar4;
        if (pcStack_108[0x98] != (code)0x0) {
          FUN_14058c5a0(param_1 + 0x69,&lStack_f8,&pcStack_108,0);
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar7);
    }
  }
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xef;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) | 8;
  plVar4 = alStack_f0;
  if (plStack_30 != (longlong *)0x0) {
    plVar4 = plStack_30;
  }
  uVar7 = (longlong)(int)uStack_28 & 0x1fffffffffffffff;
  if (plVar4 + (int)uStack_28 < plVar4) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    do {
      plVar1 = (longlong *)*plVar4;
      if (((*(byte *)(plVar1 + 0x17) & 1) != 0) && ((*(byte *)(plVar1 + 0x19) & 0x20) == 0)) {
        FUN_14234b0f0(plVar1,1);
        (**(code **)(*plVar1 + 0x338))(plVar1);
      }
      plVar4 = plVar4 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  FUN_1428e03f0(param_1);
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xf7 | 0x10;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x81,0);
  if (plStack_30 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a582d0 FUN_140a582d0 body=1926 status=ok
// SIG undefined FUN_140a582d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a582d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float *pfVar17;
  float *pfVar18;
  wchar_t *pwVar19;
  undefined4 *puVar20;
  int *piVar21;
  longlong lVar22;
  int *piVar23;
  longlong *plVar24;
  undefined4 uVar25;
  undefined8 local_res8;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_a8;
  undefined4 local_a0;
  int local_98;
  int local_94;
  longlong local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  
  FUN_142223710();
  lVar22 = *(longlong *)(param_1 + 0x118);
  if (lVar22 != 0) {
    lVar12 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_140a58333;
  }
  lVar22 = 0;
LAB_140a58333:
  *(longlong *)(param_1 + 0x4c8) = lVar22;
  if (lVar22 != 0) {
    puVar13 = (undefined8 *)FName::FName(&local_res8,L"WheelLeverB_00",1);
    puVar14 = (undefined8 *)FName::FName(&local_res10,L"WheelLeverB_02",1);
    puVar15 = (undefined8 *)FName::FName(local_res18,L"WheelB_00",1);
    puVar16 = (undefined8 *)FName::FName(local_res20,L"WheelB_02",1);
    uVar3 = *puVar15;
    plVar24 = (longlong *)(param_1 + 0x560);
    uVar4 = *puVar14;
    uVar5 = *puVar13;
    uVar6 = *puVar16;
    local_88 = 0;
    local_58 = 0;
    local_50 = 0;
    iVar1 = *(int *)(param_1 + 0x568);
    local_60 = 0x42700000;
    local_5c = 0x459c4000;
    *(int *)(param_1 + 0x568) = iVar1 + 1;
    local_80 = uVar6;
    local_78 = uVar3;
    local_70 = uVar4;
    local_68 = uVar5;
    if (*(int *)(param_1 + 0x56c) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar24,iVar1);
    }
    puVar20 = (undefined4 *)((longlong)iVar1 * 0x40 + *plVar24);
    *puVar20 = 0;
    *(undefined8 *)(puVar20 + 2) = uVar6;
    *(undefined8 *)(puVar20 + 4) = uVar3;
    *(undefined8 *)(puVar20 + 6) = uVar4;
    *(undefined8 *)(puVar20 + 8) = uVar5;
    puVar20[10] = 0x42700000;
    puVar20[0xb] = 0x459c4000;
    *(undefined8 *)(puVar20 + 0xc) = 0;
    puVar20[0xe] = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar20 + 0xc,&local_58);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
    puVar13 = (undefined8 *)FName::FName(&local_res8,L"WheelLeverA_00",1);
    puVar14 = (undefined8 *)FName::FName(&local_res10,L"WheelLeverA_02",1);
    puVar15 = (undefined8 *)FName::FName(local_res18,L"WheelA_00",1);
    puVar16 = (undefined8 *)FName::FName(local_res20,L"WheelA_02",1);
    uVar3 = *puVar15;
    uVar4 = *puVar14;
    uVar5 = *puVar13;
    uVar6 = *puVar16;
    local_58 = 0;
    local_50 = 0;
    iVar1 = *(int *)(param_1 + 0x568);
    local_88 = 1;
    local_60 = 0x42700000;
    local_5c = 0x459c4000;
    *(int *)(param_1 + 0x568) = iVar1 + 1;
    local_80 = uVar6;
    local_78 = uVar3;
    local_70 = uVar4;
    local_68 = uVar5;
    if (*(int *)(param_1 + 0x56c) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar24,iVar1);
    }
    puVar20 = (undefined4 *)((longlong)iVar1 * 0x40 + *plVar24);
    *puVar20 = 1;
    *(undefined8 *)(puVar20 + 2) = uVar6;
    *(undefined8 *)(puVar20 + 4) = uVar3;
    *(undefined8 *)(puVar20 + 6) = uVar4;
    *(undefined8 *)(puVar20 + 8) = uVar5;
    puVar20[10] = 0x42700000;
    puVar20[0xb] = 0x459c4000;
    *(undefined8 *)(puVar20 + 0xc) = 0;
    puVar20[0xe] = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar20 + 0xc,&local_58);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
    puVar13 = (undefined8 *)FName::FName(&local_res8,L"WheelLeverB_01",1);
    puVar14 = (undefined8 *)FName::FName(&local_res10,L"WheelLeverB_03",1);
    puVar15 = (undefined8 *)FName::FName(local_res18,L"WheelB_01",1);
    puVar16 = (undefined8 *)FName::FName(local_res20,L"WheelB_03",1);
    uVar3 = *puVar15;
    uVar4 = *puVar14;
    uVar5 = *puVar13;
    uVar6 = *puVar16;
    local_58 = 0;
    local_50 = 0;
    iVar1 = *(int *)(param_1 + 0x568);
    local_88 = 2;
    local_60 = 0x42700000;
    local_5c = 0x459c4000;
    *(int *)(param_1 + 0x568) = iVar1 + 1;
    local_80 = uVar6;
    local_78 = uVar3;
    local_70 = uVar4;
    local_68 = uVar5;
    if (*(int *)(param_1 + 0x56c) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar24,iVar1);
    }
    puVar20 = (undefined4 *)((longlong)iVar1 * 0x40 + *plVar24);
    *puVar20 = 2;
    *(undefined8 *)(puVar20 + 2) = uVar6;
    *(undefined8 *)(puVar20 + 4) = uVar3;
    *(undefined8 *)(puVar20 + 6) = uVar4;
    *(undefined8 *)(puVar20 + 8) = uVar5;
    puVar20[10] = 0x42700000;
    puVar20[0xb] = 0x459c4000;
    *(undefined8 *)(puVar20 + 0xc) = 0;
    puVar20[0xe] = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar20 + 0xc,&local_58);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
    puVar13 = (undefined8 *)FName::FName(&local_res8,L"WheelLeverA_01",1);
    puVar14 = (undefined8 *)FName::FName(&local_res10,L"WheelLeverA_03",1);
    puVar15 = (undefined8 *)FName::FName(local_res18,L"WheelA_01",1);
    puVar16 = (undefined8 *)FName::FName(local_res20,L"WheelA_03",1);
    uVar3 = *puVar15;
    uVar4 = *puVar14;
    uVar5 = *puVar13;
    uVar6 = *puVar16;
    local_58 = 0;
    local_50 = 0;
    iVar1 = *(int *)(param_1 + 0x568);
    local_88 = 3;
    local_60 = 0x42700000;
    local_5c = 0x459c4000;
    *(int *)(param_1 + 0x568) = iVar1 + 1;
    local_80 = uVar6;
    local_78 = uVar3;
    local_70 = uVar4;
    local_68 = uVar5;
    if (*(int *)(param_1 + 0x56c) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar24,iVar1);
    }
    puVar20 = (undefined4 *)((longlong)iVar1 * 0x40 + *plVar24);
    *(undefined8 *)(puVar20 + 8) = uVar5;
    *puVar20 = 3;
    *(undefined8 *)(puVar20 + 2) = uVar6;
    *(undefined8 *)(puVar20 + 4) = uVar3;
    *(undefined8 *)(puVar20 + 6) = uVar4;
    puVar20[10] = 0x42700000;
    puVar20[0xb] = 0x459c4000;
    *(undefined8 *)(puVar20 + 0xc) = 0;
    puVar20[0xe] = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=();
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
    iVar1 = *(int *)(param_1 + 0x568);
    iVar2 = *(int *)(param_1 + 0x4c0);
    iVar11 = iVar2 + iVar1;
    *(int *)(param_1 + 0x4c0) = iVar11;
    if (*(int *)(param_1 + 0x4c4) < iVar11) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x4b8);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x4b8) + (longlong)iVar2 * 4),0,(longlong)iVar1 << 2
              );
    uVar25 = FUN_1423b1370(*(undefined8 *)(param_1 + 0x460));
    FUN_140a367d0(param_1 + 0x46c,uVar25);
    lVar22 = *(longlong *)(param_1 + 0x168);
    if (lVar22 == 0) {
      local_a8 = _DAT_1468b5d90;
      local_a0 = DAT_1468b5d98;
    }
    else {
      local_a8 = *(undefined8 *)(lVar22 + 0x220);
      local_a0 = *(undefined4 *)(lVar22 + 0x228);
    }
    *(undefined8 *)(param_1 + 0x4d0) = local_a8;
    *(undefined4 *)(param_1 + 0x4d8) = local_a0;
    FUN_140a77860(param_1,0);
    puVar13 = (undefined8 *)FName::FName(&local_res8,L"WheelB_02",1);
    pfVar17 = (float *)FUN_1423acae0(*(undefined8 *)(param_1 + 0x480),&local_a8,*puVar13,0);
    puVar13 = (undefined8 *)FName::FName(&local_res10,L"WheelLeverB_02",1);
    pfVar18 = (float *)FUN_1423acae0(*(undefined8 *)(param_1 + 0x480),&local_98,*puVar13,0);
    *(float *)(param_1 + 0x4b0) =
         SQRT((*pfVar18 - *pfVar17) * (*pfVar18 - *pfVar17) +
              (pfVar18[1] - pfVar17[1]) * (pfVar18[1] - pfVar17[1]) +
              (pfVar18[2] - pfVar17[2]) * (pfVar18[2] - pfVar17[2]));
    pwVar19 = _guard_xfg_dispatch_icall_nop(L"&ACarnivoraTread::OnComponentHitCallback",L"::");
    pwVar9 = (wchar_t *)0x0;
    while (pwVar8 = pwVar19, pwVar8 != (wchar_t *)0x0) {
      pwVar19 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
      pwVar9 = pwVar8;
    }
    FName::FName(&local_res10,pwVar9 + 2,1);
    lVar22 = *(longlong *)(param_1 + 0x480);
    plVar24 = (longlong *)(lVar22 + 0x560);
    FWeakObjectPtr::operator=(&local_98,0);
    local_90 = 0;
    FWeakObjectPtr::operator=(&local_98,param_1);
    local_90 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar12 = FWeakObjectPtr::Get(&local_98), lVar12 != 0)) {
      UObject::FindFunction(lVar12,local_90);
    }
    piVar21 = (int *)*plVar24;
    iVar1 = *(int *)(lVar22 + 0x568);
    for (piVar23 = piVar21; piVar23 != piVar21 + (longlong)iVar1 * 4; piVar23 = piVar23 + 4) {
      if (((*piVar23 == local_98) && (piVar23[1] == local_94)) ||
         ((cVar10 = FWeakObjectPtr::IsValid(piVar23), cVar10 == '\0' &&
          (cVar10 = FWeakObjectPtr::IsValid(&local_98), cVar10 == '\0')))) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if ((bVar7) && (*(longlong *)(piVar23 + 2) == local_90)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        if ((int)((longlong)piVar23 - (longlong)piVar21 >> 4) != -1) goto LAB_140a58a28;
        break;
      }
    }
    iVar1 = *(int *)(lVar22 + 0x568);
    *(int *)(lVar22 + 0x568) = iVar1 + 1;
    if (*(int *)(lVar22 + 0x56c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar24,iVar1);
    }
    piVar21 = (int *)((longlong)iVar1 * 0x10 + *plVar24);
    *piVar21 = local_98;
    piVar21[1] = local_94;
    *(longlong *)(piVar21 + 2) = local_90;
LAB_140a58a28:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar24);
  }
  return;
}



// FUNCTION 140a58a60 FUN_140a58a60 body=108 status=ok
// SIG undefined FUN_140a58a60(void)

void FUN_140a58a60(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_142223710();
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar1 = UWorld::IsGameWorld(uVar3);
    if ((cVar1 != '\0') && ((longlong *)param_1[0x2d] != (longlong *)0x0)) {
      cVar1 = (**(code **)(*(longlong *)param_1[0x2d] + 0x460))();
      if (cVar1 != '\0') {
        FUN_142398ec0(param_1[0x2d],0,2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a58ad0 FUN_140a58ad0 body=656 status=ok
// SIG undefined FUN_140a58ad0(void)

void FUN_140a58ad0(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  uint uVar9;
  wchar_t *pwVar10;
  undefined8 local_res8;
  code *local_28;
  undefined8 uStack_20;
  
  FUN_142223710();
  FUN_140e8e630(param_1 + 0x94,param_1);
  pwVar10 = (wchar_t *)0x0;
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  local_28 = FUN_140a6ad50;
  pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ACrewQuartersGunRack::OnInventoryEquippedOnSlot",L"::");
  pwVar8 = pwVar10;
  while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar8 = pwVar2;
  }
  FName::FName(&local_res8,pwVar8 + 2,1);
  FUN_1407260e0(param_1 + 0x90,param_1,&local_28,local_res8);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  local_28 = AK::MemoryMgr::StartProfileThreadUsage;
  pwVar4 = _guard_xfg_dispatch_icall_nop
                     (L"&ACrewQuartersGunRack::OnInventoryUnequippedFromSlot",L"::");
  pwVar8 = pwVar10;
  while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar8 = pwVar2;
  }
  FName::FName(&local_res8,pwVar8 + 2,1);
  FUN_1407260e0(param_1 + 0x92,param_1,&local_28,local_res8);
  FUN_140e8e480(param_1 + 0x94,param_1 + 0x90,param_1 + 0x92,0,0);
  if ((char)param_1[0x25] == '\x03') {
    plVar7 = (longlong *)param_1[0x8d];
    pwVar8 = (wchar_t *)((longlong)(int)param_1[0x8e] & 0x1fffffffffffffff);
    if (plVar7 + (int)param_1[0x8e] < plVar7) {
      pwVar8 = pwVar10;
    }
    pwVar4 = pwVar10;
    if (pwVar8 != (wchar_t *)0x0) {
      do {
        if (*plVar7 != 0) {
          FUN_140e6fa10(param_1 + 0x94);
        }
        plVar7 = plVar7 + 1;
        pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
      } while (pwVar4 != pwVar8);
    }
  }
  if ((param_1[0x23] != 0) &&
     (pwVar8 = *(wchar_t **)(param_1[0x23] + 0x118), pwVar8 != (wchar_t *)0x0)) {
    lVar5 = FUN_1412fa9e0();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a58cc8;
  }
  pwVar8 = pwVar10;
LAB_140a58cc8:
  if (pwVar8 != (wchar_t *)param_1[0x8c]) {
    (**(code **)(param_1[0x8b] + 0x18))(param_1 + 0x8b,pwVar8);
  }
  iVar3 = FUN_142235230(param_1);
  if (((iVar3 != 3) && (lVar5 = (**(code **)(*param_1 + 0x148))(param_1), lVar5 != 0)) &&
     (pwVar8 = pwVar10, 0 < (int)param_1[0x8e])) {
    do {
      lVar5 = *(longlong *)((longlong)pwVar8 + param_1[0x8d]);
      if ((lVar5 != 0) && (lVar6 = FUN_140e7fd70(param_1 + 0x94,lVar5), lVar6 == 0)) {
        FUN_140a5de70(param_1,lVar5);
      }
      uVar9 = (int)pwVar10 + 1;
      pwVar10 = (wchar_t *)(ulonglong)uVar9;
      pwVar8 = pwVar8 + 4;
    } while ((int)uVar9 < (int)param_1[0x8e]);
  }
  return;
}



// FUNCTION 140a58d60 FUN_140a58d60 body=584 status=ok
// SIG undefined FUN_140a58d60(void)

void FUN_140a58d60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_98 [2];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  longlong local_70 [3];
  undefined4 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x118), lVar6 != 0)) {
    lVar5 = FUN_1412fa9e0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      (**(code **)(*(longlong *)(param_1 + 0x660) + 0x18))((longlong *)(param_1 + 0x660),lVar6);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x668);
  if (lVar6 != 0) {
    lVar5 = UPawnAction_Sequence::StaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_70[0] = 0;
      local_78 = 0;
      local_88 = *(undefined4 *)(lVar6 + 0x48);
      local_84 = *(undefined4 *)(lVar6 + 0x4c);
      local_80 = *(undefined4 *)(lVar6 + 0x50);
      local_40 = *(undefined8 *)(lVar6 + 0x58);
      local_70[1] = 0;
      FString::FString(local_38,lVar6 + 0x60);
      FSoftObjectPath::operator=(&local_78,&local_40);
      *(undefined4 *)(param_1 + 0x670) = local_88;
      *(undefined4 *)(param_1 + 0x674) = local_84;
      *(undefined4 *)(param_1 + 0x678) = local_80;
      local_28 = local_78;
      FString::FString(local_20,local_70);
      FSoftObjectPath::operator=(param_1 + 0x680,&local_28);
      if (local_70[0] != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_1 + 0x680) != 0) {
        local_98[0] = 0;
        local_98[1] = 0x20;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
        FGenericPlatformString::Memcpy(local_98[0],L"RequestAsyncLoad SingleDelegate",0x40);
        local_70[2] = 0;
        local_58 = 0;
        lVar6 = FUN_1422ca050();
        FStreamableManager::RequestAsyncLoad
                  (lVar6 + 0x178,local_50,param_1 + 0x680,local_70 + 2,0,0,0,local_98);
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)local_48 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_48 + 8))(local_48,1);
            }
          }
        }
        if (local_98[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  FUN_140acba80(param_1);
  return;
}



// FUNCTION 140a58fb0 FUN_140a58fb0 body=61 status=ok
// SIG undefined FUN_140a58fb0(void)

void FUN_140a58fb0(longlong param_1)

{
  FUN_1430f31d0();
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(longlong *)(param_1 + 0x560) != 0)) {
    FUN_140a67790(param_1,*(longlong *)(param_1 + 0x560),*(undefined8 *)(param_1 + 0x568));
    return;
  }
  return;
}



// FUNCTION 140a58ff0 FUN_140a58ff0 body=394 status=ok
// SIG undefined FUN_140a58ff0(void)

void FUN_140a58ff0(longlong param_1)

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
  
  FUN_140c36110();
  if (*(char *)(param_1 + 0x128) == '\x03') {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter_Default::OnStartInjured_Common",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    plVar1 = (longlong *)(param_1 + 0xf08);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_20);
    }
    piVar8 = (int *)*plVar1;
    iVar2 = *(int *)(param_1 + 0xf10);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar2 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_20)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140a5915d;
        break;
      }
    }
    iVar2 = *(int *)(param_1 + 0xf10);
    *(int *)(param_1 + 0xf10) = iVar2 + 1;
    if (*(int *)(param_1 + 0xf14) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar8 = local_28;
    piVar8[1] = local_24;
    *(longlong *)(piVar8 + 2) = local_20;
LAB_140a5915d:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  }
  return;
}



// FUNCTION 140a59180 FUN_140a59180 body=2154 status=ok
// SIG undefined FUN_140a59180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a59180(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  char cVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  wchar_t *pwVar16;
  undefined *puVar17;
  int *piVar18;
  wchar_t *pwVar19;
  int *piVar20;
  bool bVar21;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  FUN_140c36110();
  pwVar19 = (wchar_t *)0x0;
  if ((char)param_1[0x25] == '\x03') {
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::HandleOnDead",L"::");
    pwVar16 = pwVar19;
    while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar16 = pwVar5;
    }
    FName::FName(&local_res10,pwVar16 + 2,1);
    uVar6 = local_res10;
    plVar11 = param_1 + 0x1e3;
    FWeakObjectPtr::operator=(&local_68,0);
    uStack_60 = 0;
    FWeakObjectPtr::operator=(&local_68,param_1);
    uStack_60 = uVar6;
    local_res8 = 0;
    if ((uVar6 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_68), lVar9 != 0)) {
      UObject::FindFunction(lVar9,uStack_60);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    iVar1 = (int)param_1[0x1e4];
    lVar9 = (longlong)iVar1;
    *(int *)(param_1 + 0x1e4) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xf24) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
    }
    lVar13 = *plVar11;
    *(int *)(lVar13 + lVar9 * 0x10) = (int)local_68;
    *(int *)(lVar13 + 4 + lVar9 * 0x10) = local_68._4_4_;
    *(ulonglong *)(lVar13 + 8 + lVar9 * 0x10) = uStack_60;
    if (param_1[0x1ce] != 0) {
      if (param_1[0x477] != 0) {
        lVar9 = FUN_142d62010();
        uStack_60 = uStack_60 & 0xffffffff00000000;
        local_68 = FUN_140a69fb0;
        pwVar8 = _guard_xfg_dispatch_icall_nop
                           (L"&AOakCharacter_IronBear::OnBubbleShieldResourceNowDepleted",L"::");
        pwVar16 = pwVar19;
        while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
          pwVar16 = pwVar5;
        }
        FName::FName(&local_res8,pwVar16 + 2,1);
        FUN_1407260e0(lVar9 + 8,param_1,&local_68,local_res8);
        uStack_60 = uStack_60 & 0xffffffff00000000;
        local_68 = thunk_FUN_140a770f0;
        pwVar8 = _guard_xfg_dispatch_icall_nop
                           (L"&AOakCharacter_IronBear::OnBubbleShieldResourceNowNotDepleted",L"::");
        pwVar16 = pwVar19;
        while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
          pwVar16 = pwVar5;
        }
        FName::FName(&local_res8,pwVar16 + 2,1);
        FUN_1407260e0(lVar9 + 0x18,param_1,&local_68,local_res8);
        puVar10 = (undefined4 *)FUN_142d62190(param_1[0x1ce],&local_58,param_1[0x477]);
        uVar2 = puVar10[1];
        uVar3 = puVar10[2];
        uVar4 = puVar10[3];
        *(undefined4 *)(param_1 + 0x483) = *puVar10;
        *(undefined4 *)((longlong)param_1 + 0x241c) = uVar2;
        *(undefined4 *)(param_1 + 0x484) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0x2424) = uVar4;
        param_1[0x485] = *(longlong *)(puVar10 + 4);
      }
      piVar20 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if ((*piVar20 < DAT_146866ca8) && (_Init_thread_header(&DAT_146866ca8), DAT_146866ca8 == -1))
      {
        DAT_146866c90 = 0xff;
        _DAT_146866c98 = 0;
        DAT_146866ca0._0_4_ = 0;
        _Init_thread_footer(&DAT_146866ca8);
      }
      lVar9 = param_1[0x122];
      puVar10 = (undefined4 *)&DAT_146866c70;
      if (lVar9 == 0) {
        puVar17 = &DAT_146866c90;
      }
      else {
        if ((*piVar20 < DAT_146866c88) && (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)
           ) {
          DAT_146866c70 = 0xff;
          _DAT_146866c78 = 0;
          DAT_146866c80._0_4_ = 0;
          _Init_thread_footer(&DAT_146866c88);
        }
        if (*(int *)(lVar9 + 0x680) < 1) {
          puVar17 = &DAT_146866c70;
        }
        else {
          puVar17 = (undefined *)(*(longlong *)(lVar9 + 0x678) + 0x60);
        }
      }
      cVar7 = FUN_142d52a00(puVar17);
      if (cVar7 != '\0') {
        if ((*piVar20 < DAT_146866ca8) && (_Init_thread_header(&DAT_146866ca8), DAT_146866ca8 == -1)
           ) {
          DAT_146866c90 = 0xff;
          _DAT_146866c98 = 0;
          DAT_146866ca0._0_4_ = 0;
          _Init_thread_footer(&DAT_146866ca8);
        }
        lVar9 = param_1[0x122];
        if (lVar9 == 0) {
          puVar10 = (undefined4 *)&DAT_146866c90;
        }
        else {
          if ((*piVar20 < DAT_146866c88) &&
             (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)) {
            DAT_146866c70 = 0xff;
            _DAT_146866c78 = 0;
            DAT_146866c80._0_4_ = 0;
            _Init_thread_footer(&DAT_146866c88);
          }
          if (0 < *(int *)(lVar9 + 0x680)) {
            puVar10 = (undefined4 *)(*(longlong *)(lVar9 + 0x678) + 0x60);
          }
        }
        local_58 = *puVar10;
        uStack_54 = puVar10[1];
        uStack_50 = puVar10[2];
        uStack_4c = puVar10[3];
        local_48 = *(undefined8 *)(puVar10 + 4);
        lVar9 = FUN_142d52a20(&local_58);
        if ((*(longlong *)(lVar9 + 8) != 0) &&
           (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 8) + 0x30), lVar9 != 0)) {
          local_68 = thunk_FUN_140a6aca0;
          uStack_60 = uStack_60 & 0xffffffff00000000;
          plVar11 = (longlong *)FUN_142d62250(param_1[0x1ce],lVar9);
          plVar12 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar12 != (longlong *)0x0) {
            *plVar12 = (longlong)&PTR_FUN_144213d80;
            FWeakObjectPtr::operator=(plVar12 + 1,param_1);
            *(int *)(plVar12 + 2) = (int)local_68;
            *(int *)((longlong)plVar12 + 0x14) = local_68._4_4_;
            *(undefined4 *)(plVar12 + 3) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_60._4_4_;
            lVar13 = FDelegateHandle::GenerateNewID();
            plVar12[5] = lVar13;
            *plVar12 = (longlong)&PTR_FUN_144213dc8;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
            (**(code **)(*plVar12 + 0x20))(plVar12,&local_res8);
            iVar1 = (int)plVar11[1];
            *(int *)(plVar11 + 1) = iVar1 + 1;
            if (*(int *)((longlong)plVar11 + 0xc) < iVar1 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
            }
            puVar14 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar11);
            *puVar14 = plVar12;
            *(undefined4 *)(puVar14 + 1) = 3;
          }
          local_68 = thunk_FUN_140a6aca0;
          uStack_60 = uStack_60 & 0xffffffff00000000;
          plVar11 = (longlong *)FUN_142d623c0(param_1[0x1ce],lVar9);
          plVar12 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar12 != (longlong *)0x0) {
            *plVar12 = (longlong)&PTR_FUN_144213e10;
            FWeakObjectPtr::operator=(plVar12 + 1,param_1);
            *(int *)(plVar12 + 2) = (int)local_68;
            *(int *)((longlong)plVar12 + 0x14) = local_68._4_4_;
            *(undefined4 *)(plVar12 + 3) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_60._4_4_;
            lVar9 = FDelegateHandle::GenerateNewID();
            plVar12[5] = lVar9;
            *plVar12 = (longlong)&PTR_FUN_144213e58;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
            (**(code **)(*plVar12 + 0x20))(plVar12,&local_res8);
            iVar1 = (int)plVar11[1];
            *(int *)(plVar11 + 1) = iVar1 + 1;
            if (*(int *)((longlong)plVar11 + 0xc) < iVar1 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
            }
            puVar14 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar11);
            *puVar14 = plVar12;
            *(undefined4 *)(puVar14 + 1) = 3;
          }
        }
      }
    }
    if (param_1[0x21b] != 0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerLevelChanged",L"::");
      pwVar16 = pwVar19;
      while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar16 = pwVar5;
      }
      FName::FName(&local_res10,pwVar16 + 2,1);
      lVar9 = param_1[0x21b];
      plVar11 = (longlong *)(lVar9 + 0x1b0);
      FWeakObjectPtr::operator=(&local_68,0);
      uStack_60 = 0;
      FWeakObjectPtr::operator=(&local_68,param_1);
      uStack_60 = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar13 = FWeakObjectPtr::Get(&local_68), lVar13 != 0)) {
        UObject::FindFunction(lVar13,uStack_60);
      }
      piVar20 = (int *)*plVar11;
      iVar1 = *(int *)(lVar9 + 0x1b8);
      for (piVar18 = piVar20; piVar18 != piVar20 + (longlong)iVar1 * 4; piVar18 = piVar18 + 4) {
        if ((((*piVar18 == (int)local_68) &&
             (local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20),
             bVar21 = piVar18[1] == local_68._4_4_, bVar21)) ||
            ((cVar7 = FWeakObjectPtr::IsValid(piVar18), cVar7 == '\0' &&
             (cVar7 = FWeakObjectPtr::IsValid(&local_68), cVar7 == '\0')))) &&
           (*(ulonglong *)(piVar18 + 2) == uStack_60)) {
          if ((int)((longlong)piVar18 - (longlong)piVar20 >> 4) != -1) goto LAB_140a59776;
          break;
        }
      }
      iVar1 = *(int *)(lVar9 + 0x1b8);
      *(int *)(lVar9 + 0x1b8) = iVar1 + 1;
      if (*(int *)(lVar9 + 0x1bc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
      }
      puVar10 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar11);
      *puVar10 = (int)local_68;
      puVar10[1] = local_68._4_4_;
      *(ulonglong *)(puVar10 + 2) = uStack_60;
LAB_140a59776:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    }
    FUN_142d2ad60(param_1[0x487]);
  }
  else {
    (**(code **)(*param_1 + 0x310))(param_1,1);
    if (param_1[0x98] != 0) {
      FUN_1423970c0(param_1[0x98],0);
    }
  }
  uVar15 = FUN_142e6b880();
  lVar9 = (**(code **)(*param_1 + 0x628))(param_1,uVar15);
  param_1[0x481] = lVar9;
  if (lVar9 != 0) {
    uStack_60 = uStack_60 & 0xffffffff00000000;
    local_68 = FUN_140a6a630;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnDriverAttachFinished",L"::");
    pwVar16 = pwVar19;
    while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar16 = pwVar5;
    }
    FName::FName(&local_res8,pwVar16 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (param_1[0x481] + 0x3c0,param_1,&local_68,local_res8);
    uStack_60 = uStack_60 & 0xffffffff00000000;
    local_68 = FUN_140a6a750;
    pwVar16 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnDriverDetachFinished",L"::");
    while (pwVar8 = pwVar16, pwVar8 != (wchar_t *)0x0) {
      pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
      pwVar19 = pwVar8;
    }
    FName::FName(&local_res8,pwVar19 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (param_1[0x481] + 0x3e0,param_1,&local_68,local_res8);
  }
  return;
}



// FUNCTION 140a599f0 FUN_140a599f0 body=394 status=ok
// SIG undefined FUN_140a599f0(void)

void FUN_140a599f0(longlong param_1)

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
  
  FUN_140a59180();
  if (*(char *)(param_1 + 0x128) != '\x03') {
    pwVar6 = _guard_xfg_dispatch_icall_nop
                       (L"&AOakCharacter_IronCub::UpdateOutlineOnWeaponChange",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    plVar1 = (longlong *)(param_1 + 0x1050);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_20);
    }
    piVar8 = (int *)*plVar1;
    iVar2 = *(int *)(param_1 + 0x1058);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar2 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_20)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140a59b5d;
        break;
      }
    }
    iVar2 = *(int *)(param_1 + 0x1058);
    *(int *)(param_1 + 0x1058) = iVar2 + 1;
    if (*(int *)(param_1 + 0x105c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar8 = local_28;
    piVar8[1] = local_24;
    *(longlong *)(piVar8 + 2) = local_20;
LAB_140a59b5d:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  }
  return;
}



// FUNCTION 140a59b80 FUN_140a59b80 body=126 status=ok
// SIG undefined FUN_140a59b80(void)

void FUN_140a59b80(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_142223710();
  uVar2 = FUN_142e5c1e0();
  uVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x45c,uVar2);
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x45c);
  if ((cVar1 == '\0') && ((int)param_1[0x8e] - *(int *)((longlong)param_1 + 0x49c) < 1)) {
    AActor::SetActorTickEnabled(param_1,0);
    return;
  }
  AActor::SetActorTickEnabled(param_1,1);
  return;
}



// FUNCTION 140a59c00 FUN_140a59c00 body=405 status=ok
// SIG undefined FUN_140a59c00(void)

void FUN_140a59c00(longlong *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  longlong local_res10;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  FUN_142385110();
  pwVar7 = _guard_xfg_dispatch_icall_nop
                     (L"&UCarnivoraDamageZoneComponent::OnActorComponentHit",L"::");
  pwVar6 = (wchar_t *)0x0;
  while (pwVar5 = pwVar7, pwVar5 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
    pwVar6 = pwVar5;
  }
  FName::FName(&local_res10,pwVar6 + 2,1);
  plVar9 = param_1 + 0xac;
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_28), lVar8 != 0)) {
    UObject::FindFunction(lVar8,local_20);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
  iVar1 = (int)param_1[0xad];
  *(int *)(param_1 + 0xad) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x56c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
  }
  puVar10 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar9);
  *puVar10 = local_28;
  puVar10[1] = local_24;
  *(longlong *)(puVar10 + 2) = local_20;
  param_1[0xe4] = param_1[0x32];
  plVar9 = (longlong *)FRotator::Quaternion(param_1 + 0x3f,&local_28);
  lVar8 = *plVar9;
  lVar4 = plVar9[1];
  auVar2._12_4_ = 0;
  auVar2._0_12_ = *(undefined1 (*) [12])((longlong)param_1 + 0x204);
  *(undefined1 (*) [16])(param_1 + 0xea) = auVar2;
  param_1[0xe6] = lVar8;
  param_1[0xe7] = lVar4;
  auVar3._12_4_ = 0;
  auVar3._0_12_ = *(undefined1 (*) [12])((longlong)param_1 + 0x1ec);
  *(undefined1 (*) [16])(param_1 + 0xe8) = auVar3;
  (**(code **)(*param_1 + 0x418))(param_1,&DAT_146532190);
  FUN_140a723c0(param_1);
  return;
}



// FUNCTION 140a59da0 FUN_140a59da0 body=214 status=ok
// SIG undefined FUN_140a59da0(void)

void FUN_140a59da0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_142f8f5c0();
  lVar5 = *(longlong *)(param_1 + 0x1188);
  if (lVar5 != 0) {
    lVar3 = UUGLoadoutBarUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140a59df6;
  }
  lVar5 = 0;
LAB_140a59df6:
  *(longlong *)(param_1 + 0x2b70) = lVar5;
  plVar1 = *(longlong **)(param_1 + 0xfd8);
  if (plVar1 != (longlong *)0x0) {
    uVar4 = FUN_141477fa0();
    uVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
    plVar1 = *(longlong **)(param_1 + 0xfd8);
    *(undefined8 *)(param_1 + 0x2b88) = uVar4;
    uVar4 = FUN_1407a6820();
    uVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
    plVar1 = *(longlong **)(param_1 + 0xfd8);
    *(undefined8 *)(param_1 + 0x2b80) = uVar4;
    uVar4 = FUN_141312e30();
    uVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
    *(undefined8 *)(param_1 + 0x2b90) = uVar4;
  }
  return;
}



// FUNCTION 140a59e80 FUN_140a59e80 body=55 status=ok
// SIG undefined FUN_140a59e80(void)

void FUN_140a59e80(longlong param_1)

{
  int iVar1;
  
  thunk_FUN_142de5970();
  iVar1 = FUN_14233f450(param_1);
  if ((iVar1 == 3) && ((*(byte *)(param_1 + 0x544) & 1) != 0)) {
    FUN_140a5e210(param_1);
    return;
  }
  return;
}



// FUNCTION 140a59ec0 FUN_140a59ec0 body=618 status=ok
// SIG undefined FUN_140a59ec0(void)

void FUN_140a59ec0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  
  FUN_142385110();
  if ((*(longlong **)(param_1 + 0x118) != (longlong *)0x0) &&
     (plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x118) + 0x668))(),
     plVar2 != (longlong *)0x0)) {
    uVar3 = FUN_142e71aa0();
    uVar3 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    *(undefined8 *)(param_1 + 0x820) = uVar3;
    uVar3 = UMaterialInstanceDynamic::Create(*(undefined8 *)(param_1 + 0x7e0),param_1);
    *(undefined8 *)(param_1 + 0x828) = uVar3;
    uVar3 = UMaterialInstanceDynamic::Create(*(undefined8 *)(param_1 + 0x7e8),param_1);
    *(undefined8 *)(param_1 + 0x830) = uVar3;
  }
  *(undefined1 *)(param_1 + 0x808) = 0;
  FUN_140a68ad0(param_1,1);
  FUN_142397970(param_1,1);
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  lVar4 = FUN_140c12480(lVar4);
  if ((lVar4 != 0) && (lVar4 = UNiagaraSystem::GetEffectType(lVar4), lVar4 != 0)) {
    uVar7 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    uVar3 = uVar7;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_144213ea0;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = 0x40a6a930;
      *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar5;
      *plVar2 = (longlong)&PTR_FUN_144213ee8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0x68,1);
      puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
      iVar1 = *(int *)(lVar4 + 0x70);
      uVar3 = *puVar6;
      *(int *)(lVar4 + 0x70) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x74) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x68,iVar1);
      }
      puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar4 + 0x68));
      *puVar6 = plVar2;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x810) = uVar3;
    plVar8 = (longlong *)(lVar4 + 0x80);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_144060be0;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = 0x40a6a8a0;
      *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar5;
      *plVar2 = (longlong)&PTR_FUN_144060c28;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
      puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
      iVar1 = *(int *)(lVar4 + 0x88);
      uVar7 = *puVar6;
      *(int *)(lVar4 + 0x88) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x8c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
      }
      puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
      *puVar6 = plVar2;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x818) = uVar7;
  }
  return;
}



// FUNCTION 140a5a130 FUN_140a5a130 body=518 status=ok
// SIG undefined FUN_140a5a130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_140a5a130(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FUN_142f92040();
  if (*(longlong *)(param_1 + 0x2b78) != 0) {
    plVar5 = (longlong *)FUN_140c41820();
    if (plVar5 != (longlong *)0x0) {
      *(longlong **)(param_2 + 0x1a) = plVar5;
      *param_2 = (int)plVar5[0x1b1];
      param_2[1] = *(float *)((longlong)plVar5 + 0xd8c) * 0.5;
      lVar1 = plVar5[0x2d];
      if (lVar1 == 0) {
        local_48 = _DAT_1468b5d90;
        local_40 = DAT_1468b5d98;
      }
      else {
        local_48 = *(undefined8 *)(lVar1 + 0x220);
        local_40 = *(undefined4 *)(lVar1 + 0x228);
      }
      local_3c = local_48;
      local_34 = local_40;
      FUN_142fb32b0(param_2,&local_3c);
      puVar6 = (undefined4 *)FUN_141223660(plVar5,&local_18);
      uVar8 = puVar6[1];
      uVar9 = puVar6[2];
      uVar3 = puVar6[3];
      param_2[0x14] = *puVar6;
      param_2[0x15] = uVar8;
      param_2[0x16] = uVar9;
      param_2[0x17] = uVar3;
      param_2[2] = *(undefined4 *)((longlong)plVar5 + 0xd94);
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x308))(plVar5,&local_3c);
      *(undefined8 *)(param_2 + 0x20) = *puVar7;
      uVar8 = *(undefined4 *)(puVar7 + 1);
      param_2[0x22] = uVar8;
      lVar1 = plVar5[0x2d];
      if (lVar1 == 0) {
        uVar8 = (undefined4)DAT_1468b5da0;
        uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_40 = DAT_1468b5da8;
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
        iVar4 = movmskps(uVar8,auVar2);
        if (iVar4 != 0) {
          *(float *)(lVar1 + 0x250) = local_18;
          *(float *)(lVar1 + 0x254) = fStack_14;
          *(float *)(lVar1 + 600) = fStack_10;
          *(float *)(lVar1 + 0x25c) = fStack_c;
          puVar7 = (undefined8 *)FQuat::Rotator(&local_18,local_30);
          *(undefined8 *)(lVar1 + 0x260) = *puVar7;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar7 + 1);
        }
        uVar8 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
        uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
        local_40 = *(undefined4 *)(lVar1 + 0x268);
      }
      local_48 = CONCAT44(uVar9,uVar8);
      local_3c = local_48;
      local_34 = local_40;
      puVar7 = (undefined8 *)FRotator::Vector(&local_48,local_24);
      *(undefined8 *)(param_2 + 0x23) = *puVar7;
      param_2[0x25] = *(undefined4 *)(puVar7 + 1);
      *(undefined1 *)(param_2 + 0x26) = 1;
      lVar1 = plVar5[0x1be];
      *(longlong *)(param_2 + 5) = plVar5[0x1bd];
      *(longlong *)(param_2 + 7) = lVar1;
      lVar1 = plVar5[0x1c0];
      *(longlong *)(param_2 + 9) = plVar5[0x1bf];
      *(longlong *)(param_2 + 0xb) = lVar1;
      lVar1 = plVar5[0x1c2];
      *(longlong *)(param_2 + 0xd) = plVar5[0x1c1];
      *(longlong *)(param_2 + 0xf) = lVar1;
      *(longlong *)(param_2 + 0x11) = plVar5[0x1c3];
    }
  }
  return param_2;
}



// FUNCTION 140a5a340 FUN_140a5a340 body=160 status=ok
// SIG undefined FUN_140a5a340(void)

undefined8 FUN_140a5a340(longlong param_1,undefined1 param_2)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  if (*(longlong *)(param_1 + 0x2b78) != 0) {
    plVar3 = (longlong *)FUN_140c41820();
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x6e8))(plVar3);
      uVar6 = 0;
      if (lVar4 != 0) {
        lVar5 = FUN_142fbec90();
        iVar1 = *(int *)(lVar5 + 0x90);
        uVar6 = (longlong)iVar1;
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
           (uVar6 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x88),
           *(longlong *)(uVar6 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
          uVar6 = uVar6 & 0xffffffffffffff00;
          bVar2 = false;
        }
        else {
          uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
          bVar2 = true;
        }
        if (bVar2) {
          return CONCAT71((int7)(uVar6 >> 8),2);
        }
      }
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
  uVar7 = FUN_142f92c70(param_1,param_2);
  return uVar7;
}



// FUNCTION 140a5a3e0 FUN_140a5a3e0 body=59 status=ok
// SIG undefined FUN_140a5a3e0(void)

void FUN_140a5a3e0(longlong *param_1)

{
  char cVar1;
  
  param_1 = (longlong *)*param_1;
  if (param_1[0x525] != 0) {
    cVar1 = (**(code **)(*param_1 + 0xbf0))(param_1);
    if (cVar1 != '\0') {
      FUN_142d00f90(param_1,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 140a5a490 FUN_140a5a490 body=106 status=ok
// SIG undefined FUN_140a5a490(void)

void FUN_140a5a490(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar2 = *param_1;
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_140a5a540;
  uVar2 = FUN_14247f500();
  FUN_14247d5a0(uVar2,*param_1,local_58);
  return;
}



// FUNCTION 140a5a570 FUN_140a5a570 body=83 status=ok
// SIG undefined FUN_140a5a570(void)

void FUN_140a5a570(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(*param_1 + 0x2b78) != 0) &&
     (cVar1 = FWeakObjectPtr::IsValid(param_1 + 1), cVar1 != '\0')) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 1);
    FUN_140c3c260(*(undefined8 *)(*param_1 + 0x2b78),uVar2,(int)param_1[2]);
  }
  return;
}



// FUNCTION 140a5a5d0 FUN_140a5a5d0 body=106 status=ok
// SIG undefined FUN_140a5a5d0(void)

void FUN_140a5a5d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar2 = *param_1;
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = FUN_140a5a3e0;
  uVar2 = FUN_14247f500();
  FUN_14247d5a0(uVar2,*param_1,local_58);
  return;
}



// FUNCTION 140a5a670 FUN_140a5a670 body=52 status=ok
// SIG undefined FUN_140a5a670(void)

undefined1 FUN_140a5a670(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x248) != '\x06') || (*(char *)(param_1 + 0x249) != '\x02')) {
    cVar1 = FUN_1407c3030(param_1 + 0x948);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140a5a6b0 FUN_140a5a6b0 body=69 status=ok
// SIG undefined FUN_140a5a6b0(void)

undefined1 FUN_140a5a6b0(longlong param_1)

{
  char cVar1;
  
  if (((*(char *)(param_1 + 0x248) != '\x06') || (*(char *)(param_1 + 0x249) != '\x02')) &&
     (cVar1 = FUN_1407c3030(param_1 + 0x948), cVar1 == '\0')) {
    return 1;
  }
  cVar1 = FUN_140a67bc0(param_1);
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}



// FUNCTION 140a5a750 FUN_140a5a750 body=137 status=ok
// SIG undefined FUN_140a5a750(void)

undefined8 FUN_140a5a750(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x2b78) != 0) {
    lVar2 = FUN_142ceefa0();
    if (lVar2 != 0) {
      lVar3 = FUN_1414e0f70();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (*(char *)(lVar2 + 0x770) != '\0')) && (*(char *)(lVar2 + 0x418) != '\x03')) {
        return CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1);
      }
    }
  }
  uVar4 = FUN_142ce44f0(param_1);
  return uVar4;
}



// FUNCTION 140a5a7e0 FUN_140a5a7e0 body=69 status=ok
// SIG undefined FUN_140a5a7e0(void)

ulonglong FUN_140a5a7e0(longlong *param_1)

{
  ulonglong in_RAX;
  
  if (param_1[0x52f] != 0) {
    in_RAX = (**(code **)(*param_1 + 0x558))();
    if ((((char)in_RAX != '\0') && (in_RAX = param_1[0x56f], in_RAX != 0)) &&
       (*(byte *)(in_RAX + 0xec0) < 3)) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a5a830 FUN_140a5a830 body=85 status=ok
// SIG undefined FUN_140a5a830(void)

undefined8 FUN_140a5a830(longlong *param_1)

{
  char cVar1;
  
  if (((param_1[0x525] != 0) && (param_1[0x56f] != 0)) && (*(byte *)(param_1[0x56f] + 0xec0) < 3)) {
    cVar1 = (**(code **)(*param_1 + 0x560))();
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x558))(param_1), cVar1 == '\0')) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 140a5a890 FUN_140a5a890 body=856 status=ok
// SIG undefined FUN_140a5a890(void)

char FUN_140a5a890(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  float *pfVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 local_98 [144];
  
  cVar5 = FUN_1407c3030(param_1 + 0x532);
  if ((cVar5 != '\0') || (cVar5 = FUN_140c4ac20(param_1[0x56f]), cVar5 != '\0')) {
    return '\x02';
  }
  cVar5 = (**(code **)(*param_1 + 0x558))(param_1);
  if ((cVar5 == '\0') && (cVar6 = (**(code **)(*param_1 + 0x560))(param_1), cVar6 == '\0')) {
    if ((*(byte *)(param_1 + 0x32d) & 1) == 0) {
      return '\x02';
    }
    if ((*(byte *)((longlong)param_1 + 0x2904) & 2) != 0) {
      return '\x02';
    }
  }
  cVar6 = (**(code **)(*param_1 + 0x550))(param_1);
  if ((cVar6 != '\0') && (*(char *)(param_1[0x56f] + 0xec0) != '\x03')) {
    return ((*(uint *)((longlong)param_1 + 0x4b4) & 0x800) != 0) + '\x01';
  }
  if (((param_1[0x2ef] == 0) || ((*(byte *)((longlong)param_1 + 0x18cc) & 2) != 0)) ||
     (param_1[0x2f] == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((!bVar7) && ((char)param_1[0x217] == '\0')) {
    if ((0.0001 < ABS(*(float *)(param_1 + 0x6a))) ||
       ((0.0001 < ABS(*(float *)((longlong)param_1 + 0x354)) ||
        (0.0001 < ABS(*(float *)(param_1 + 0x6b)))))) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((!bVar7) &&
       (*(float *)(param_1 + 0x520) < *(float *)(param_1 + 0x76) ||
        *(float *)(param_1 + 0x520) == *(float *)(param_1 + 0x76))) {
      fVar10 = _guard_xfg_dispatch_icall_nop(*(float *)((longlong)param_1 + 0x28fc) * 0.017453292);
      pfVar8 = (float *)(**(code **)(*(longlong *)param_1[0x56f] + 0x9b8))
                                  ((longlong *)param_1[0x56f],local_98);
      fVar1 = *(float *)((longlong)param_1 + 0x354);
      fVar2 = *(float *)(param_1 + 0x6a);
      fVar3 = *(float *)(param_1 + 0x6b);
      fVar11 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
      auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
      fVar12 = auVar13._0_4_;
      fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
      fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
      if (fVar10 <= *pfVar8 * fVar2 * fVar12 + fVar1 * fVar12 * pfVar8[1] +
                    fVar3 * fVar12 * pfVar8[2]) {
        if (cVar5 != '\0') {
          return '\x01';
        }
        cVar5 = FUN_1407c3030(param_1 + 0x545);
        if (cVar5 != '\0') {
          return '\x01';
        }
        cVar5 = FUN_140c39c10(param_1[0x56f]);
        return cVar5;
      }
    }
    lVar4 = *(longlong *)(param_1[0x56f] + 0x490);
    if (lVar4 != 0) {
      lVar9 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((bVar7) && (cVar5 = FUN_140d01c90(lVar4), cVar5 != '\0')) {
        return '\x01';
      }
    }
    return ((*(byte *)(param_1 + 0x558) & 2) == 0) + '\x01';
  }
  return '\x01';
}



// FUNCTION 140a5abf0 FUN_140a5abf0 body=238 status=ok
// SIG undefined FUN_140a5abf0(void)

undefined8 FUN_140a5abf0(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong *)param_1[0x56f] == (longlong *)0x0) {
    return 0;
  }
  cVar1 = (**(code **)(*(longlong *)param_1[0x56f] + 0xc48))();
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(int *)((longlong)param_1 + 0x2ac4) != -1) {
    return 0;
  }
  cVar1 = FUN_140a5a7e0(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if (((param_1[0x2ef] == 0) || ((*(byte *)((longlong)param_1 + 0x18cc) & 2) != 0)) ||
     (param_1[0x2f] == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return 1;
  }
  lVar4 = param_1[0x2ef];
  if (lVar4 != 0) {
    lVar3 = FUN_141410cb0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140a5aca6;
  }
  lVar4 = 0;
LAB_140a5aca6:
  cVar1 = (**(code **)(*param_1 + 0xbf0))(param_1);
  if ((cVar1 == '\0') && ((lVar4 == 0 || ((*(byte *)(lVar4 + 0x8a0) & 8) != 0)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 140a5ace0 FUN_140a5ace0 body=117 status=ok
// SIG undefined FUN_140a5ace0(void)

undefined8 FUN_140a5ace0(longlong *param_1)

{
  char cVar1;
  
  if (((param_1[0x525] == 0) || (param_1[0x56f] == 0)) || (2 < *(byte *)(param_1[0x56f] + 0xec0))) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x560))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x558))(param_1), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x560))(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x558))(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 140a5ad60 FUN_140a5ad60 body=218 status=ok
// SIG undefined FUN_140a5ad60(void)

void FUN_140a5ad60(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(char *)(param_1 + 0x2470) == '\0') && (lVar5 = *(longlong *)(param_1 + 0x150), lVar5 != 0))
  {
    lVar4 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = *(longlong **)(lVar5 + 0x9c0), plVar1 != (longlong *)0x0)) {
      lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (cVar3 = (**(code **)(*plVar1 + 0x768))(plVar1), cVar3 != '\0')) &&
         (plVar1 = (longlong *)plVar1[0xa5], plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x858))(plVar1);
        *(undefined4 *)((longlong)plVar1 + 0x494) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140a5ae40 FUN_140a5ae40 body=65 status=ok
// SIG undefined FUN_140a5ae40(void)

void FUN_140a5ae40(longlong param_1)

{
  if (*(char *)(param_1 + 0x2458) != '\0') {
    *(undefined1 *)(param_1 + 0x2458) = 0;
    *(undefined4 *)(param_1 + 0x245c) = 0;
    FUN_141400510();
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x22b8,0);
    return;
  }
  return;
}



// FUNCTION 140a5ae90 FUN_140a5ae90 body=169 status=ok
// SIG undefined FUN_140a5ae90(void)

void FUN_140a5ae90(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  bool bVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x31c) != '\0') && (param_3 != 0)) {
    lVar2 = FUN_1430e5840();
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
      return;
    }
  }
  FUN_142333430(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 140a5af40 FUN_140a5af40 body=410 status=ok
// SIG undefined FUN_140a5af40(void)

void FUN_140a5af40(byte *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (((*param_1 & 1) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    cVar1 = FUN_1407c3030(param_1 + 0x20);
    if ((cVar1 == '\0') &&
       (((iVar2 = FUN_142235230(*(undefined8 *)(param_1 + 0x10)), iVar2 == 0 ||
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x90) & 0x20) != 0)) || ((*param_1 & 2) == 0)))
       ) {
      FUN_140a67070(param_1);
      return;
    }
    if ((*(uint *)(param_1 + 0x18) & 1) != 0) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
      if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
         (lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x148))(), lVar3 != 0)) {
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        FUN_142880530(uVar4,param_1 + 0xb8);
        param_1[0xb8] = 0;
        param_1[0xb9] = 0;
        param_1[0xba] = 0;
        param_1[0xbb] = 0;
        param_1[0xbc] = 0;
        param_1[0xbd] = 0;
        param_1[0xbe] = 0;
        param_1[0xbf] = 0;
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        FUN_142880530(uVar4,param_1 + 0xc0);
        param_1[0xc0] = 0;
        param_1[0xc1] = 0;
        param_1[0xc2] = 0;
        param_1[0xc3] = 0;
        param_1[0xc4] = 0;
        param_1[0xc5] = 0;
        param_1[0xc6] = 0;
        param_1[199] = 0;
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        FUN_142880530(uVar4,param_1 + 200);
        param_1[200] = 0;
        param_1[0xc9] = 0;
        param_1[0xca] = 0;
        param_1[0xcb] = 0;
        param_1[0xcc] = 0;
        param_1[0xcd] = 0;
        param_1[0xce] = 0;
        param_1[0xcf] = 0;
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        FUN_142880530(uVar4,param_1 + 0xd0);
        param_1[0xd0] = 0;
        param_1[0xd1] = 0;
        param_1[0xd2] = 0;
        param_1[0xd3] = 0;
        param_1[0xd4] = 0;
        param_1[0xd5] = 0;
        param_1[0xd6] = 0;
        param_1[0xd7] = 0;
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        FUN_142880530(uVar4,param_1 + 0xe0);
        param_1[0xe0] = 0;
        param_1[0xe1] = 0;
        param_1[0xe2] = 0;
        param_1[0xe3] = 0;
        param_1[0xe4] = 0;
        param_1[0xe5] = 0;
        param_1[0xe6] = 0;
        param_1[0xe7] = 0;
      }
    }
  }
  return;
}



// FUNCTION 140a5b0e0 FUN_140a5b0e0 body=807 status=ok
// SIG undefined FUN_140a5b0e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a5b0e0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined4 local_120;
  undefined1 *local_118;
  undefined8 *local_110;
  undefined1 local_108 [8];
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  longlong local_d8;
  longlong lStack_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [21];
  undefined1 local_93;
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar4 = *(longlong *)(param_1 + 0x120);
  if ((((lVar4 != 0) || (lVar4 = FUN_1423407b0(), lVar4 != 0)) &&
      (*(longlong *)(param_1 + 0x180) != 0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x180) + 0x2ef) & 1) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146866f58) &&
       (_Init_thread_header(&DAT_146866f58), DAT_146866f58 == -1)) {
      FName::FName(&DAT_146866f50,L"CheckForActorsToPushAwayFrom",1);
      _Init_thread_footer(&DAT_146866f58);
    }
    local_128 = *(longlong **)(param_1 + 0x220);
    FUN_1422ffb20(local_a8,DAT_146866f50,local_108,0);
    local_93 = 1;
    FUN_1426d3dd0(local_c8);
    FUN_1426ea8d0(local_c8,2);
    (**(code **)(**(longlong **)(param_1 + 0x180) + 0x740))
              (*(longlong **)(param_1 + 0x180),local_a8,local_c8);
    plVar9 = *(longlong **)(param_1 + 0x180);
    local_100 = 0;
    local_f8 = 0;
    local_d8 = plVar9[0x42];
    lStack_d0 = plVar9[0x43];
    local_f0 = (undefined4)plVar9[0x44];
    local_ec = *(undefined4 *)((longlong)plVar9 + 0x224);
    local_e8 = (undefined4)plVar9[0x45];
    local_120 = (**(code **)(*plVar9 + 0x4f8))();
    local_110 = &DAT_146aefe88;
    local_118 = local_a8;
    local_128 = &local_d8;
    (**(code **)(**(longlong **)(param_1 + 0x180) + 0x558))
              (*(longlong **)(param_1 + 0x180),&local_100,lVar4,&local_f0);
    plVar9 = (longlong *)(param_1 + 0x2bb0);
    *(undefined4 *)(param_1 + 0x2bb8) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x2bbc)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar9,0);
    }
    lVar4 = local_100 + (longlong)(int)local_f8 * 0x18;
    for (lVar10 = local_100; lVar10 != lVar4; lVar10 = lVar10 + 0x18) {
      lVar5 = FWeakObjectPtr::Get(lVar10 + 8);
      lVar6 = FUN_1423111a0(lVar10);
      if (lVar6 != 0) {
        lVar7 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (((bVar3) && (*(char *)(lVar6 + 0x1121) != '\0')) &&
           (*(longlong *)(lVar6 + 0x4d0) == lVar5)) {
          plVar2 = (longlong *)*plVar9;
          iVar1 = *(int *)(param_1 + 0x2bb8);
          for (plVar8 = plVar2; plVar8 != plVar2 + iVar1; plVar8 = plVar8 + 1) {
            if (*plVar8 == lVar6) {
              if ((int)((longlong)plVar8 - (longlong)plVar2 >> 3) != -1) goto LAB_140a5b35a;
              break;
            }
          }
          *(int *)(param_1 + 0x2bb8) = iVar1 + 1;
          if (*(int *)(param_1 + 0x2bbc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar1);
          }
          *(longlong *)(*plVar9 + (longlong)iVar1 * 8) = lVar6;
        }
      }
LAB_140a5b35a:
    }
    if (local_100 != 0) {
      FMemory::Free(local_100);
    }
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140a5b410 FUN_140a5b410 body=2861 status=ok
// SIG undefined FUN_140a5b410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a5b410(longlong *param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_358 [32];
  undefined8 *local_338;
  undefined8 *local_330;
  undefined4 *local_328;
  undefined8 *local_320;
  undefined4 *local_318;
  longlong local_308;
  float local_300;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  undefined8 local_2e8;
  float local_2e0;
  longlong local_2d8;
  float local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  float local_290;
  undefined1 local_288 [16];
  undefined4 local_278 [8];
  undefined1 local_258 [16];
  byte local_248 [12];
  undefined4 local_23c;
  float local_238;
  float local_210;
  float local_20c;
  float local_208;
  undefined1 local_1dc [8];
  undefined1 local_1d4 [28];
  byte local_1b8 [12];
  undefined4 local_1ac;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined2 local_114;
  undefined1 local_112;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined2 local_104;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_c0;
  undefined8 local_b8;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  cVar2 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = (**(code **)(*param_1 + 0xbf0))(param_1);
  if (cVar2 == '\0') {
    return;
  }
  if (param_1[0x525] == 0) {
    return;
  }
  lVar7 = param_1[0x2f];
  if (lVar7 == 0) {
    local_308 = DAT_146295368;
    local_300 = DAT_146295370;
  }
  else {
    local_308 = *(longlong *)(lVar7 + 0x220);
    local_300 = *(float *)(lVar7 + 0x228) - *(float *)(lVar7 + 0x1e4);
  }
  local_2e8 = local_308;
  local_290 = *(float *)((longlong)param_1 + 0x234) * 0.5;
  local_2e0 = local_300;
  local_298 = 3;
  local_294 = 0x3f800000;
  lVar7 = *(longlong *)(param_1[0x44] + 0x168);
  local_2d0 = DAT_1468b5da8;
  local_2d8 = DAT_1468b5da0;
  if (lVar7 != 0) {
    fVar14 = *(float *)(lVar7 + 0x210);
    local_2c8 = *(undefined8 *)(lVar7 + 0x210);
    fVar18 = *(float *)(lVar7 + 0x218);
    uStack_2c0 = *(undefined8 *)(lVar7 + 0x218);
    auVar11._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != *(float *)(lVar7 + 0x214));
    auVar11._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != fVar14);
    auVar11._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fVar18);
    auVar11._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != *(float *)(lVar7 + 0x21c));
    iVar3 = movmskps((int)param_1[0x44],auVar11);
    if (iVar3 != 0) {
      *(float *)(lVar7 + 0x250) = fVar14;
      *(float *)(lVar7 + 0x254) = *(float *)(lVar7 + 0x214);
      *(float *)(lVar7 + 600) = fVar18;
      *(float *)(lVar7 + 0x25c) = *(float *)(lVar7 + 0x21c);
      puVar5 = (undefined8 *)FQuat::Rotator(&local_2c8,local_258);
      *(undefined8 *)(lVar7 + 0x260) = *puVar5;
      *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar5 + 1);
    }
    local_2d0 = *(float *)(lVar7 + 0x268);
    local_2d8 = *(longlong *)(lVar7 + 0x260);
  }
  local_308 = local_2d8;
  local_300 = local_2d0;
  pfVar6 = (float *)FRotator::Vector(&local_2d8,local_288);
  fVar14 = pfVar6[1];
  fVar18 = *pfVar6;
  fVar13 = fVar18 * fVar18 + fVar14 * fVar14;
  if (fVar13 == 1.0) {
    if (pfVar6[2] == 0.0) {
      local_300 = pfVar6[2];
      local_308._0_4_ = (float)*(undefined8 *)pfVar6;
      fVar17 = (float)((ulonglong)*(undefined8 *)pfVar6 >> 0x20);
      fVar16 = (float)local_308;
      fVar15 = local_300;
    }
    else {
LAB_140a5b6f2:
      fVar17 = fVar14;
      fVar16 = fVar18;
      fVar15 = 0.0;
    }
  }
  else {
    fVar17 = DAT_1468b5d94;
    fVar16 = DAT_1468b5d90;
    fVar15 = DAT_1468b5d98;
    if (1e-08 <= fVar13) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar17 = auVar11._0_4_;
      fVar17 = fVar17 + fVar17 * (0.5 - fVar13 * 0.5 * fVar17 * fVar17);
      fVar17 = fVar17 + fVar17 * (0.5 - fVar13 * 0.5 * fVar17 * fVar17);
      fVar18 = fVar18 * fVar17;
      fVar14 = fVar14 * fVar17;
      goto LAB_140a5b6f2;
    }
  }
  fVar14 = *(float *)(param_1[0x525] + 0x1058);
  local_2a8 = (fVar17 * DAT_1464aa7a0 - fVar15 * DAT_1464aa798._4_4_) * fVar14 + (float)local_2e8;
  local_2a4 = (fVar15 * (float)DAT_1464aa798 - fVar16 * DAT_1464aa7a0) * fVar14 + local_2e8._4_4_;
  local_2a0 = (fVar16 * DAT_1464aa798._4_4_ - fVar17 * (float)DAT_1464aa798) * fVar14 +
              *(float *)((longlong)param_1 + 0x234) * 1.5 + local_2e0;
  fVar14 = *(float *)(param_1[0x525] + 0x1054);
  local_120 = 0;
  local_e0 = 0;
  local_2b8 = fVar16 * fVar14 + local_2a8;
  local_d8 = 0;
  local_c0 = 0;
  local_2b4 = fVar17 * fVar14 + local_2a4;
  local_b8 = 0;
  local_118 = 0x10000;
  local_110 = 0;
  local_308 = 0;
  local_128 = 0;
  local_2b0 = fVar15 * fVar14 + local_2a0;
  local_114 = 0;
  local_104 = 0x101;
  local_10c = 0;
  local_112 = 0;
  local_108 = 0;
  FUN_1426d3dd0(local_278);
  FUN_1426ea8d0(local_278,2);
  (**(code **)(*param_1 + 0x478))(param_1,&local_128,local_278);
  FCollisionQueryParams::AddIgnoredActor(&local_128);
  local_128 = DAT_146866bf8;
  _guard_xfg_dispatch_icall_nop(local_248,0,0x90);
  local_23c = 0x3f800000;
  local_2c8 = *(undefined8 *)(param_1[0x2f] + 0x210);
  uStack_2c0 = *(undefined8 *)(param_1[0x2f] + 0x218);
  lVar7 = param_1[0x24];
  if (lVar7 == 0) {
    lVar7 = FUN_1423407b0(param_1);
  }
  local_318 = local_278;
  local_320 = &local_128;
  local_328 = &local_298;
  local_338 = &local_2c8;
  local_330 = (undefined8 *)CONCAT44(local_330._4_4_,2);
  UWorld::SweepSingleByChannel(lVar7,local_248,&local_2a8,&local_2b8);
  fVar14 = local_20c * local_20c + local_210 * local_210;
  if (fVar14 == 1.0) {
    local_2f8 = local_210;
    local_2f4 = local_20c;
    if (local_208 == 0.0) {
      local_2f0 = local_208;
      goto LAB_140a5b9ff;
    }
  }
  else {
    if (fVar14 < 1e-08) {
      local_2f8 = DAT_1468b5d90;
      local_2f0 = DAT_1468b5d98;
      local_2f4 = DAT_1468b5d94;
      goto LAB_140a5b9ff;
    }
    auVar11 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar18 = auVar11._0_4_;
    fVar18 = fVar18 + fVar18 * (0.5 - fVar14 * 0.5 * fVar18 * fVar18);
    fVar18 = fVar18 + fVar18 * (0.5 - fVar14 * 0.5 * fVar18 * fVar18);
    local_2f8 = local_210 * fVar18;
    local_2f4 = local_20c * fVar18;
    local_308 = CONCAT44(local_308._4_4_,fVar18);
  }
  local_2f0 = 0.0;
LAB_140a5b9ff:
  bVar1 = false;
  lVar7 = FWeakObjectPtr::Get(local_1dc);
  if ((((lVar7 != 0) || (lVar8 = FWeakObjectPtr::Get(local_1d4), lVar8 != 0)) &&
      ((local_248[0] & 1) != 0)) &&
     (((local_248[0] & 2) == 0 && (local_208 < *(float *)((longlong)param_1 + 0x244))))) {
    fVar19 = *(float *)((longlong)param_1 + 0x234) + 1.0;
    fVar14 = (float)local_2e8;
    fVar18 = local_2e8._4_4_;
    local_308 = local_2e8;
    fVar20 = *(float *)((longlong)param_1 + 0x234) + fVar19 + local_2e0;
    local_300 = fVar20;
    fVar13 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x48) * 0.017453292);
    local_238 = fVar19 / fVar13 + local_238;
    local_2e8 = CONCAT44(fVar17 * local_238 + fVar18,fVar16 * local_238 + fVar14);
    local_2e0 = fVar15 * local_238 + fVar20;
    _guard_xfg_dispatch_icall_nop(local_1b8,0,0x90);
    lVar8 = param_1[0x24];
    local_1ac = 0x3f800000;
    if (lVar8 == 0) {
      lVar8 = FUN_1423407b0(param_1);
    }
    local_328 = local_278;
    local_330 = &local_128;
    local_338 = (undefined8 *)CONCAT44(local_338._4_4_,2);
    UWorld::LineTraceSingleByChannel(lVar8,local_1b8,&local_308,&local_2e8);
    if (((local_1b8[0] & 1) != 0) && ((local_1b8[0] & 2) == 0)) {
      fVar14 = local_2f4 * fVar17 + local_2f8 * fVar16 + local_2f0 * fVar15;
      pfVar6 = (float *)(param_1[0x525] + 0x1060);
      if ((fVar14 < *pfVar6 || fVar14 == *pfVar6) ||
         (fVar14 = *(float *)(param_1[0x525] + 0x1064), bVar1 = true,
         *(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
         *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) +
         *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194) <
         fVar14 * fVar14)) {
        thunk_FUN_142ccbbf0(param_1 + 0x2ee,lVar7,&local_2f8);
        bVar1 = true;
      }
    }
  }
  if ((((local_2f8 != 0.0) || (local_2f4 != 0.0)) || (local_2f0 != 0.0)) && (bVar1)) {
    local_2d0 = local_2f8 * DAT_1464aa798._4_4_ - local_2f4 * (float)DAT_1464aa798;
    param_1[0x5d1] =
         CONCAT44(local_2f0 * (float)DAT_1464aa798 - local_2f8 * DAT_1464aa7a0,
                  local_2f4 * DAT_1464aa7a0 - local_2f0 * DAT_1464aa798._4_4_);
    *(float *)(param_1 + 0x5d2) = local_2d0;
    if (fVar17 * *(float *)((longlong)param_1 + 0x2e8c) + *(float *)(param_1 + 0x5d1) * fVar16 +
        fVar15 * *(float *)(param_1 + 0x5d2) < 0.0) {
      *(float *)(param_1 + 0x5d1) = -*(float *)(param_1 + 0x5d1);
      *(uint *)((longlong)param_1 + 0x2e8c) = *(uint *)((longlong)param_1 + 0x2e8c) ^ 0x80000000;
      *(uint *)(param_1 + 0x5d2) = *(uint *)(param_1 + 0x5d2) ^ 0x80000000;
    }
  }
  pfVar6 = (float *)(param_1 + 0x5d1);
  if (((*pfVar6 != 0.0) || (*(float *)((longlong)param_1 + 0x2e8c) != 0.0)) ||
     (*(float *)(param_1 + 0x5d2) != 0.0)) {
    uVar4 = FVector::Rotation(pfVar6,&local_2e8);
    lVar7 = param_1[0x2f];
    fVar14 = *(float *)(lVar7 + 0x210);
    local_2c8 = *(undefined8 *)(lVar7 + 0x210);
    fVar18 = *(float *)(lVar7 + 0x218);
    uStack_2c0 = *(undefined8 *)(lVar7 + 0x218);
    auVar9._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != *(float *)(lVar7 + 0x214));
    auVar9._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != fVar14);
    auVar9._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fVar18);
    auVar9._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != *(float *)(lVar7 + 0x21c));
    iVar3 = movmskps(uVar4,auVar9);
    if (iVar3 != 0) {
      *(float *)(lVar7 + 0x250) = fVar14;
      *(float *)(lVar7 + 0x254) = *(float *)(lVar7 + 0x214);
      *(float *)(lVar7 + 600) = fVar18;
      *(float *)(lVar7 + 0x25c) = *(float *)(lVar7 + 0x21c);
      puVar5 = (undefined8 *)FQuat::Rotator(&local_2c8,local_288);
      *(undefined8 *)(lVar7 + 0x260) = *puVar5;
      *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar5 + 1);
    }
    local_2d8 = *(longlong *)(lVar7 + 0x260);
    local_2d0 = *(float *)(lVar7 + 0x268);
    fVar16 = (float)local_2e8 - (float)local_2d8;
    fVar15 = local_2e8._4_4_ - (float)((ulonglong)local_2d8 >> 0x20);
    local_308 = CONCAT44(local_308._4_4_,0x38d1b717);
    fVar14 = (float)DAT_146866750;
    fVar18 = DAT_146866750._4_4_;
    fVar13 = DAT_146866750._8_4_;
    fVar17 = DAT_146866750._12_4_;
    auVar10._4_4_ = fVar15;
    auVar10._0_4_ = fVar16;
    auVar10._8_4_ = local_2e0 - local_2d0;
    auVar10._12_4_ = 0;
    auVar11 = divps(auVar10,_DAT_146866750);
    fVar16 = fVar16 - (float)(int)auVar11._0_4_ * fVar14;
    fVar15 = fVar15 - (float)(int)auVar11._4_4_ * fVar18;
    fVar19 = (local_2e0 - local_2d0) - (float)(int)auVar11._8_4_ * fVar13;
    fVar20 = 0.0 - (float)(int)auVar11._12_4_ * fVar17;
    fVar16 = (float)(((uint)(fVar16 + fVar14) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                    (uint)(fVar16 + fVar14));
    fVar15 = (float)(((uint)(fVar15 + fVar18) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                    (uint)(fVar15 + fVar18));
    fVar19 = (float)(((uint)(fVar19 + fVar13) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                    (uint)(fVar19 + fVar13));
    fVar20 = (float)(((uint)(fVar20 + fVar17) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                    (uint)(fVar20 + fVar17));
    auVar12._4_4_ =
         -(uint)(0.0001 < (float)((((uint)(fVar15 - fVar18) ^ (uint)fVar15) &
                                   -(uint)(fRam0000000146866744 < fVar15) ^ (uint)fVar15) &
                                 uRam00000001468667f4));
    auVar12._0_4_ =
         -(uint)(0.0001 < (float)((((uint)(fVar16 - fVar14) ^ (uint)fVar16) &
                                   -(uint)(_DAT_146866740 < fVar16) ^ (uint)fVar16) & _DAT_1468667f0
                                 ));
    auVar12._8_4_ =
         -(uint)(0.0001 < (float)((((uint)(fVar19 - fVar13) ^ (uint)fVar19) &
                                   -(uint)(fRam0000000146866748 < fVar19) ^ (uint)fVar19) &
                                 uRam00000001468667f8));
    auVar12._12_4_ =
         -(uint)(0.0001 < (float)((((uint)(fVar20 - fVar17) ^ (uint)fVar20) &
                                   -(uint)(fRam000000014686674c < fVar20) ^ (uint)fVar20) &
                                 uRam00000001468667fc));
    iVar3 = movmskps(local_2d0,auVar12);
    if (iVar3 == 0) {
      *(ulonglong *)pfVar6 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      *(float *)(param_1 + 0x5d2) = DAT_1468b5d98;
    }
    else {
      local_2d0 = 0.0;
      local_2d8 = (ulonglong)(uint)(param_2 * *(float *)(param_1[0x525] + 0x1068)) << 0x20;
      local_308 = local_2e8;
      local_300 = local_2e0;
      FUN_142d069f0(param_1,&local_308,&local_2d8);
    }
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  if (local_e0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a5bf40 FUN_140a5bf40 body=603 status=ok
// SIG undefined FUN_140a5bf40(void)

void FUN_140a5bf40(longlong *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float local_a8;
  float fStack_a4;
  undefined1 local_98 [16];
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  if ((((param_1[0x44] != 0) && ((*(byte *)(param_1[0x44] + 0x56c) & 8) == 0)) &&
      (cVar3 = FUN_142cf3980(), cVar3 != '\0')) &&
     (cVar3 = (**(code **)(*param_1 + 0xbf0))(param_1), cVar3 == '\0')) {
    if ((*(byte *)(param_1 + 0x558) & 8) == 0) {
      if (param_1[0x525] == 0) {
        return;
      }
      cVar3 = FUN_140a68900(param_1);
      if (cVar3 == '\0') {
        return;
      }
      if ((char)param_1[0x49] != '\x01') {
        return;
      }
      pfVar5 = (float *)FUN_140a5c8b0(param_1,local_98);
      fVar1 = pfVar5[1];
      fVar2 = *pfVar5;
      fVar7 = fVar2 * fVar2 + fVar1 * fVar1;
      if (fVar7 == 1.0) {
        fVar8 = fVar1;
        fVar10 = fVar2;
        if (pfVar5[2] == 0.0) {
          local_a8 = (float)*(undefined8 *)pfVar5;
          fVar8 = (float)((ulonglong)*(undefined8 *)pfVar5 >> 0x20);
          fVar10 = local_a8;
        }
      }
      else {
        fVar8 = DAT_1468b5d94;
        fVar10 = DAT_1468b5d90;
        if (1e-08 <= fVar7) {
          auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
          fVar8 = auVar9._0_4_;
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          fVar10 = fVar2 * fVar8;
          fVar8 = fVar1 * fVar8;
        }
      }
      if (0.0 < *(float *)(param_1[0x525] + 0x1088)) {
        local_a8 = (float)*(undefined8 *)((longlong)param_1 + 0x18c);
        fStack_a4 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x18c) >> 0x20);
        if (local_a8 * fVar10 + fStack_a4 * fVar8 < *(float *)(param_1[0x525] + 0x1088)) {
          return;
        }
      }
    }
    cVar3 = FUN_140a5ace0(param_1);
    if (cVar3 != '\0') {
      *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) | 0x800;
      *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x558) | 8;
      FUN_140a73340(param_1);
      iVar4 = FUN_14233f450(param_1);
      if (iVar4 == 2) {
        (**(code **)(*param_1 + 0xa98))(param_1);
        local_58 = 0;
        local_48 = 0;
        puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_78);
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[1] = param_1;
          *puVar6 = &PTR_FUN_143f77b70;
        }
        local_88[0] = &LAB_140a5a520;
        FUN_14234b4d0(param_1,local_88);
      }
    }
  }
  return;
}



// FUNCTION 140a5c1a0 FUN_140a5c1a0 body=37 status=ok
// SIG undefined FUN_140a5c1a0(void)

void FUN_140a5c1a0(longlong param_1)

{
  FUN_142ce6280();
  *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  return;
}



// FUNCTION 140a5c1d0 FUN_140a5c1d0 body=96 status=ok
// SIG undefined FUN_140a5c1d0(void)

void FUN_140a5c1d0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x1d0) == param_2) {
    *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      FUN_142600fa0();
    }
    FUN_14288e3d0(param_1 + 0x30,0);
    return;
  }
  return;
}



// FUNCTION 140a5c230 FUN_140a5c230 body=748 status=ok
// SIG undefined FUN_140a5c230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a5c230(longlong *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  uVar3 = (**(code **)(*param_1 + 0x148))();
  lVar4 = FUN_142f429c0(uVar3);
  lVar8 = param_1[0x2d];
  if (lVar8 == 0) {
    local_88 = _DAT_1468b5d90;
    local_80 = DAT_1468b5d98;
  }
  else {
    local_88 = *(undefined8 *)(lVar8 + 0x220);
    local_80 = *(undefined4 *)(lVar8 + 0x228);
  }
  local_78 = local_88;
  local_70 = local_80;
  if (lVar4 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar5 = (longlong *)FUN_142f3fe10(lVar4,uVar3,&local_78,0);
    if ((plVar5 != (longlong *)0x0) && ((longlong *)param_1[0xae] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[0xae] + 0x8e8))();
      puVar6 = (undefined8 *)UAssetRegistryImpl::OnInMemoryAssetDeleted(param_1[0xae]);
      puVar11 = (undefined4 *)*puVar6;
      puVar1 = puVar11 + (longlong)*(int *)(puVar6 + 1) * 2;
      for (; puVar11 != puVar1; puVar11 = puVar11 + 2) {
        local_res8 = *puVar11;
        local_resc = puVar11[1];
        plVar7 = (longlong *)FWeakObjectPtr::Get(&local_res8);
        if (plVar7 != (longlong *)0x0) {
          lVar8 = FUN_14145f370();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            plVar9 = (longlong *)(**(code **)(*plVar7 + 0x688))(plVar7);
            plVar7 = (longlong *)plVar7[0x109];
            if (plVar7 == (longlong *)0x0) {
LAB_140a5c3e7:
              plVar7 = (longlong *)0x0;
            }
            else {
              lVar8 = FUN_1413f82e0();
              if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
                  lVar8 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_140a5c3e7;
            }
            if ((plVar9 == (longlong *)0x0) || (plVar9 == plVar7)) {
              if ((plVar7 != (longlong *)0x0) &&
                 (((**(code **)(*plVar5 + 0x8f8))(plVar5,&local_28,plVar7,0,0), local_28 != 0 &&
                  (local_20 != (longlong *)0x0)))) {
                (**(code **)(*local_20 + 0x20))(local_20,local_48);
                plVar9 = (longlong *)0x0;
                if (local_28 != 0) {
                  plVar9 = local_20;
                }
                (**(code **)(*plVar9 + 0x28))(plVar9,local_58);
                (**(code **)(*plVar7 + 0xc90))(plVar7,local_48,local_58);
                plVar10 = (longlong *)0x0;
                plVar9 = plVar7;
                if (local_28 != 0) {
                  plVar10 = local_20;
                }
                goto LAB_140a5c4e6;
              }
            }
            else {
              (**(code **)(*plVar5 + 0x8f8))(plVar5,&local_38,plVar9,0,0);
              if ((local_38 != 0) && (local_30 != (longlong *)0x0)) {
                (**(code **)(*local_30 + 0x20))(local_30,local_68);
                plVar7 = (longlong *)0x0;
                if (local_38 != 0) {
                  plVar7 = local_30;
                }
                (**(code **)(*plVar7 + 0x28))(plVar7,&local_88);
                (**(code **)(*plVar9 + 0x500))(plVar9,local_68,&local_88,0,1);
                plVar10 = (longlong *)0x0;
                if (local_38 != 0) {
                  plVar10 = local_30;
                }
LAB_140a5c4e6:
                (**(code **)(*plVar10 + 0x18))(plVar10,plVar9);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140a5c520 FUN_140a5c520 body=62 status=ok
// SIG undefined FUN_140a5c520(void)

void FUN_140a5c520(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x610);
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x218) + 0x28))();
  }
  if ((param_3 <= *(uint *)(lVar1 + 0x158)) && (*(uint *)(lVar1 + 0x15c) < param_3)) {
    *(uint *)(lVar1 + 0x15c) = param_3;
  }
  return;
}



// FUNCTION 140a5c560 FUN_140a5c560 body=250 status=ok
// SIG undefined FUN_140a5c560(void)

void FUN_140a5c560(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  cVar1 = (**(code **)(*param_1 + 0x558))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined1)param_1[0x575];
  }
  lVar3 = param_1[0xc2];
  *(undefined1 *)((longlong)param_1 + 0x2ba9) = uVar2;
  if (lVar3 == 0) {
    lVar3 = (**(code **)(param_1[0x43] + 0x28))();
  }
  if (*(int *)(lVar3 + 0x158) == *(int *)(lVar3 + 0x15c)) {
    local_30 = *(undefined4 *)(param_4 + 1);
    local_38 = *param_4;
    local_20 = *(undefined4 *)(param_3 + 1);
    local_28 = *param_3;
    FUN_142ce6770(param_1,param_2,&local_28,&local_38,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}



// FUNCTION 140a5c660 FUN_140a5c660 body=129 status=ok
// SIG undefined FUN_140a5c660(void)

void FUN_140a5c660(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_20;
  
  local_20 = 0;
  local_30 = 0;
  local_38 = (ulonglong)param_2 << 0x20;
  (**(code **)(*param_1 + 0x7b0))(0,&local_38,0);
  plVar1 = (longlong *)param_1[0x92];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x720))(plVar1,&local_38);
    local_38 = CONCAT44(param_2,(undefined4)local_38);
    (**(code **)(*(longlong *)param_1[0x92] + 0x728))((longlong *)param_1[0x92],&local_38,1);
  }
  return;
}



// FUNCTION 140a5c720 FUN_140a5c720 body=307 status=ok
// SIG undefined FUN_140a5c720(void)

ulonglong FUN_140a5c720(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  
  uVar4 = (**(code **)(*param_1 + 0x5c0))();
  if ((char)uVar4 != '\0') {
    uVar4 = FUN_14233f840(param_1);
    if ((*(byte *)(uVar4 + 0xa0) & 1) != 0) {
      uVar1 = *(uint *)(param_1 + 0x558);
      if (((0 < *(int *)(uVar4 + 0x18)) && ((char)param_1[0x49] == '\x03')) &&
         (lVar2 = **(longlong **)(uVar4 + 0x10), (*(byte *)(lVar2 + 0x388) & 8) != 0)) {
        (**(code **)(*param_1 + 0x260))(param_1);
        *(undefined1 *)(param_1 + 0x578) = 1;
        *(undefined1 *)(param_1 + 0x579) = 1;
        *(undefined4 *)((longlong)param_1 + 0x2bc4) = *(undefined4 *)(lVar2 + 0x38c);
      }
      bVar3 = FUN_142ce6880(param_1);
      if ((uVar1 >> 2 & 1) == 0) {
        if ((*(uint *)(param_1 + 0x558) & 4) != 0) {
          FUN_140a69270(param_1);
        }
      }
      else if ((*(uint *)(param_1 + 0x558) & 4) == 0) {
        FUN_140a692d0(param_1);
      }
      *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x558) & 0xffffffe6;
      *(uint *)(param_1 + 0x558) =
           *(uint *)(param_1 + 0x558) | ((uVar1 >> 4 & 1) * 2 | uVar1 >> 3 & 1) << 3 | uVar1 & 1;
      return (ulonglong)bVar3;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140a5c860 FUN_140a5c860 body=79 status=ok
// SIG undefined FUN_140a5c860(void)

void FUN_140a5c860(undefined8 param_1,longlong param_2,longlong param_3)

{
  FUN_142ce6a60();
  if (((*(byte *)(param_2 + 0x388) & 8) != 0) &&
     (*(char *)(*(longlong *)(param_3 + 0xe68) + 0x2bc0) != '\0')) {
    *(undefined4 *)(*(longlong *)(param_3 + 0xe68) + 0x2bc4) = *(undefined4 *)(param_2 + 0x38c);
  }
  return;
}



// FUNCTION 140a5c8b0 FUN_140a5c8b0 body=157 status=ok
// SIG undefined FUN_140a5c8b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_140a5c8b0(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float local_18;
  
  uVar1 = DAT_1468b5d98;
  if (((byte)*(undefined4 *)(param_1 + 0x410) & 3) == 3) {
    fVar2 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20);
    local_18 = (float)*(undefined8 *)(param_1 + 0x458);
    fVar3 = fVar2 * -1.0;
    *param_2 = CONCAT44(fVar3 * *(float *)(param_1 + 0x460),local_18 * *(float *)(param_1 + 0x460))
               ^ 0x8000000000000000;
    *(float *)(param_2 + 1) = fVar3 * fVar2 - local_18 * local_18;
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140a5c950 FUN_140a5c950 body=614 status=ok
// SIG undefined FUN_140a5c950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140a5c950(longlong param_1,float *param_2)

{
  float *pfVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0x2ba8) != '\x04') {
    if (*(longlong *)(param_1 + 0x1358) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x1360);
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_58);
    if ((*(byte *)(param_1 + 0x2ac0) & 0x20) != 0) {
      fVar4 = *(float *)(param_1 + 0x290c);
      *param_2 = -(fVar4 * local_58);
      param_2[1] = -(fVar4 * local_54);
      param_2[2] = -(fVar4 * local_50);
      return param_2;
    }
    plVar3 = *(longlong **)(param_1 + 0x220);
    if ((plVar3 != (longlong *)0x0) &&
       (((pfVar1 = (float *)(param_1 + 0x350), *pfVar1 != 0.0 ||
         (*(float *)(param_1 + 0x354) != 0.0)) || (*(float *)(param_1 + 0x358) != 0.0)))) {
      lVar2 = (**(code **)(*plVar3 + 0x738))(plVar3,local_28);
      local_34 = *(undefined4 *)(lVar2 + 4);
      local_38 = 0;
      local_30 = 0;
      FRotator::UnrotateVector(&local_38,&local_48,pfVar1);
      fVar4 = local_44 * local_44 + local_48 * local_48;
      if (fVar4 <= 1e-08) {
        local_48 = 0.0;
      }
      else {
        auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
        fVar5 = auVar6._0_4_;
        fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
        local_48 = (fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5)) * local_48;
      }
      if ((*(longlong *)(param_1 + 0x2b70) == 0) ||
         (*(float *)(*(longlong *)(param_1 + 0x2b70) + 0x250) <= ABS(local_48))) {
        fVar4 = SQRT(*pfVar1 * *pfVar1 + *(float *)(param_1 + 0x354) * *(float *)(param_1 + 0x354) +
                     *(float *)(param_1 + 0x358) * *(float *)(param_1 + 0x358));
        if (local_48 < 0.0) {
          *param_2 = -(local_58 * fVar4);
          param_2[1] = -(local_54 * fVar4);
          param_2[2] = -(local_50 * fVar4);
          return param_2;
        }
        *param_2 = local_58 * fVar4;
        param_2[2] = local_50 * fVar4;
        param_2[1] = local_54 * fVar4;
        return param_2;
      }
    }
  }
  fVar4 = DAT_1468b5d98;
  *(undefined8 *)param_2 = _DAT_1468b5d90;
  param_2[2] = fVar4;
  return param_2;
}



// FUNCTION 140a5cbc0 FUN_140a5cbc0 body=1350 status=ok
// SIG undefined FUN_140a5cbc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140a5cbc0(longlong *param_1,undefined8 *param_2,char param_3,longlong param_4,
             undefined8 *param_5,float param_6,float *param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  ulonglong uVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_168 [12];
  undefined4 local_15c;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_130;
  float local_128;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  longlong local_90;
  undefined8 local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (param_3 == '\0') {
    if (param_4 == 0) {
      local_1a0 = (float)*(undefined4 *)(param_5 + 1);
      puVar9 = &local_1a8;
      local_1a8 = *param_5;
    }
    else {
      lVar2 = *(longlong *)(param_4 + 0x168);
      if (lVar2 == 0) {
        local_1a8 = _DAT_1468b5d90;
        local_1a0 = (float)DAT_1468b5d98;
      }
      else {
        local_1a0 = (float)*(undefined4 *)(lVar2 + 0x228);
        local_1a8 = *(undefined8 *)(lVar2 + 0x220);
      }
      local_190 = local_1a0;
      puVar9 = &local_198;
      local_198 = local_1a8;
    }
    uVar1 = *(undefined4 *)(puVar9 + 1);
    *param_2 = *puVar9;
    *(undefined4 *)(param_2 + 1) = uVar1;
    if (param_4 == 0) {
      if (((*param_7 == 0.0) && (param_7[1] == 0.0)) && (param_7[2] == 0.0)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) {
        return param_2;
      }
    }
LAB_140a5d0cf:
    *(undefined8 *)param_7 = DAT_1464aa798;
    param_7[2] = DAT_1464aa7a0;
    return param_2;
  }
  if (param_3 != '\x01') {
    if (param_3 != '\x02') {
      return param_2;
    }
    if (param_4 == 0) {
      uVar1 = *(undefined4 *)(param_5 + 1);
      *param_2 = *param_5;
      *(undefined4 *)(param_2 + 1) = uVar1;
    }
    else {
      lVar2 = *(longlong *)(param_4 + 0x168);
      if (lVar2 == 0) {
        local_1a0 = (float)DAT_1468b5d98;
        puVar9 = &local_1a8;
        local_1a8 = _DAT_1468b5d90;
      }
      else {
        puVar9 = &local_198;
        local_190 = (float)*(undefined4 *)(lVar2 + 0x228);
        local_198 = *(undefined8 *)(lVar2 + 0x220);
      }
      uVar1 = *(undefined4 *)(puVar9 + 1);
      *param_2 = *puVar9;
      *(undefined4 *)(param_2 + 1) = uVar1;
      lVar2 = *(longlong *)(param_4 + 0x168);
      if (lVar2 != 0) {
        lVar10 = FUN_142912e90();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          uVar13 = *(uint *)(lVar2 + 0x230) & _DAT_1468667f0;
          uVar14 = *(uint *)(lVar2 + 0x234) & uRam00000001468667f4;
          uVar15 = *(uint *)(lVar2 + 0x238) & uRam00000001468667f8;
          uVar16 = *(uint *)(lVar2 + 0x23c) & uRam00000001468667fc;
          auVar17._4_4_ = uVar14;
          auVar17._0_4_ = uVar13;
          auVar17._8_4_ = uVar15;
          auVar17._12_4_ = uVar16;
          auVar3._4_4_ = uVar15;
          auVar3._0_4_ = uVar14;
          auVar3._8_4_ = uVar13;
          auVar3._12_4_ = uVar16;
          auVar18 = minps(auVar17,auVar3);
          auVar4._4_4_ = uVar13;
          auVar4._0_4_ = uVar15;
          auVar4._8_4_ = uVar14;
          auVar4._12_4_ = uVar16;
          auVar18 = minps(auVar18,auVar4);
          *(float *)(param_2 + 1) =
               *(float *)(param_2 + 1) - auVar18._0_4_ * *(float *)(lVar2 + 0x710);
        }
      }
    }
    goto LAB_140a5d0cf;
  }
  local_1a0 = *(float *)(param_5 + 1);
  *param_2 = *param_5;
  *(float *)(param_2 + 1) = local_1a0;
  if (param_4 == 0) {
    if (0.5 < param_7[2] || param_7[2] == 0.5) {
      return param_2;
    }
    puVar11 = &local_1a8;
    local_1a8 = *param_5;
  }
  else {
    lVar2 = *(longlong *)(param_4 + 0x168);
    if (lVar2 == 0) {
      local_1a0 = (float)DAT_1468b5d98;
      puVar9 = &local_1a8;
      local_1a8 = _DAT_1468b5d90;
    }
    else {
      puVar9 = &local_198;
      local_190 = (float)*(undefined4 *)(lVar2 + 0x228);
      local_198 = *(undefined8 *)(lVar2 + 0x220);
    }
    local_178 = *(undefined4 *)(puVar9 + 1);
    puVar11 = &local_180;
    local_180 = *puVar9;
  }
  local_1a8 = *puVar11;
  local_190 = *(float *)(puVar11 + 1);
  local_1a0 = local_190;
  local_198 = local_1a8;
  if ((param_4 != 0) && (lVar2 = *(longlong *)(param_4 + 0x168), lVar2 != 0)) {
    lVar10 = FUN_142912e90();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      uVar13 = *(uint *)(lVar2 + 0x230) & _DAT_1468667f0;
      uVar14 = *(uint *)(lVar2 + 0x234) & uRam00000001468667f4;
      uVar15 = *(uint *)(lVar2 + 0x238) & uRam00000001468667f8;
      uVar16 = *(uint *)(lVar2 + 0x23c) & uRam00000001468667fc;
      auVar19._4_4_ = uVar14;
      auVar19._0_4_ = uVar13;
      auVar19._8_4_ = uVar15;
      auVar19._12_4_ = uVar16;
      auVar18._4_4_ = uVar15;
      auVar18._0_4_ = uVar14;
      auVar18._8_4_ = uVar13;
      auVar18._12_4_ = uVar16;
      auVar18 = minps(auVar19,auVar18);
      auVar5._4_4_ = uVar13;
      auVar5._0_4_ = uVar15;
      auVar5._8_4_ = uVar14;
      auVar5._12_4_ = uVar16;
      auVar18 = minps(auVar18,auVar5);
      local_190 = local_190 - auVar18._0_4_ * *(float *)(lVar2 + 0x710);
    }
  }
  local_d0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_c8 = 0x10000;
  local_c0 = 0;
  local_188 = 0;
  local_d8 = 0;
  local_c4 = 0;
  local_b4 = 0x101;
  local_bc = 0;
  local_c2 = 0;
  local_b8 = 0;
  local_190 = local_190 - param_6;
  if (param_4 != 0) {
    FCollisionQueryParams::AddIgnoredActor(&local_d8);
  }
  uVar7 = (ulonglong)local_180 >> 0x20;
  local_180 = CONCAT44((uint)uVar7 & 0xffffff00,1);
  _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
  local_15c = 0x3f800000;
  uVar12 = (**(code **)(*param_1 + 0x148))(param_1);
  local_1b8 = &local_180;
  local_1b0 = &local_d8;
  cVar8 = UWorld::LineTraceSingleByObjectType(uVar12,local_168,&local_1a8,&local_198);
  if (cVar8 == '\0') {
    *param_2 = local_198;
    *(float *)(param_2 + 1) = local_190;
    if (param_4 == 0) {
      if (((*param_7 == 0.0) && (param_7[1] == 0.0)) && (param_7[2] == 0.0)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) goto LAB_140a5cfef;
    }
    *(undefined8 *)param_7 = DAT_1464aa798;
    local_128 = DAT_1464aa7a0;
  }
  else {
    *param_2 = local_154;
    *(undefined4 *)(param_2 + 1) = local_14c;
    if (param_4 == 0) {
      if (((*param_7 == 0.0) && (param_7[1] == 0.0)) && (param_7[2] == 0.0)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) goto LAB_140a5cfef;
    }
    *(undefined8 *)param_7 = local_130;
  }
  param_7[2] = local_128;
LAB_140a5cfef:
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 == 0) {
    return param_2;
  }
  FMemory::Free();
  return param_2;
}



// FUNCTION 140a5d110 FUN_140a5d110 body=236 status=ok
// SIG undefined FUN_140a5d110(void)

void FUN_140a5d110(float *param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_3 = -1.0;
  *param_4 = *(float *)(param_2 + 0x238);
  plVar5 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar6 = plVar5[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x368))();
    lVar6 = plVar5[0x1f];
  }
  fVar1 = *(float *)(lVar6 + 0x38);
  if (fVar1 < 0.0) {
    if ((((uint)param_1[2] & 1) == 0) || (*param_1 <= 0.0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((((uint)param_1[2] & 2) == 0) || (param_1[1] <= 0.0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar3) {
      fVar2 = *param_1;
      if (bVar4) {
        *param_3 = ((-0.5 / param_1[1]) * fVar2 * fVar2) / fVar1;
        *param_4 = *param_1;
      }
      else {
        *param_4 = fVar2;
      }
    }
    else if (bVar4) {
      *param_4 = SQRT(fVar1 * -2.0 * param_1[1]);
    }
  }
  return;
}



// FUNCTION 140a5d200 FUN_140a5d200 body=897 status=ok
// SIG undefined FUN_140a5d200(void)

undefined8 *
FUN_140a5d200(longlong *param_1,undefined8 *param_2,byte param_3,longlong param_4,
             undefined8 *param_5,float *param_6)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_c8;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  switch(param_3) {
  case 0:
    break;
  case 1:
    FQuat::FindBetweenNormals(local_b8,&DAT_1464aa798,param_6);
    param_5 = (undefined8 *)FQuat::Rotator(local_b8,&local_c8);
    break;
  case 2:
    (**(code **)(*param_1 + 0x610))(param_1,local_b8,param_2);
    uVar3 = FRotationMatrix::FRotationMatrix(&local_a8,param_2);
    FMatrix::GetUnitAxis(uVar3,&local_c8,2);
    local_80 = param_6[2];
    local_84 = param_6[1];
    local_88 = *param_6;
    fVar10 = local_80 * local_c8._4_4_ - local_84 * fStack_c0;
    fVar11 = local_88 * fStack_c0 - local_80 * (float)local_c8;
    fVar12 = local_84 * (float)local_c8 - local_88 * local_c8._4_4_;
    fVar7 = fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12;
    local_a8 = fVar10;
    local_a4 = fVar11;
    local_a0 = fVar12;
    if ((fVar7 != 1.0) &&
       (local_a8 = DAT_1468b5d90, local_a4 = DAT_1468b5d94, local_a0 = DAT_1468b5d98, 1e-08 <= fVar7
       )) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      local_a8 = fVar10 * fVar8;
      local_a4 = fVar11 * fVar8;
      local_a0 = fVar12 * fVar8;
    }
    local_9c = 0;
    local_8c = 0;
    local_7c = 0;
    local_98 = local_84 * local_a0 - local_80 * local_a4;
    local_94 = local_80 * local_a8 - local_88 * local_a0;
    local_90 = local_88 * local_a4 - local_84 * local_a8;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0x3f800000;
    param_5 = (undefined8 *)FMatrix::Rotator(&local_a8,&local_c8);
    break;
  case 3:
    (**(code **)(*param_1 + 0x610))(param_1,local_b8,param_2);
    return param_2;
  case 4:
    (**(code **)(*param_1 + 0x610))(param_1,local_b8,param_2);
    *(undefined4 *)param_2 = 0;
    return param_2;
  case 5:
    if (param_4 == 0) {
      return param_2;
    }
    lVar1 = *(longlong *)(param_4 + 0x168);
    if (lVar1 == 0) {
      uVar5 = (undefined4)DAT_1468b5da0;
      uVar6 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      fStack_c0 = (float)DAT_1468b5da8;
    }
    else {
      fVar7 = *(float *)(lVar1 + 0x210);
      local_c8 = *(undefined8 *)(lVar1 + 0x210);
      fStack_c0 = *(float *)(lVar1 + 0x218);
      fStack_bc = *(float *)(lVar1 + 0x21c);
      auVar9._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
      auVar9._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar7);
      auVar9._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_c0);
      auVar9._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_bc);
      iVar2 = movmskps((uint)param_3,auVar9);
      if (iVar2 != 0) {
        *(float *)(lVar1 + 0x250) = fVar7;
        *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
        *(float *)(lVar1 + 600) = fStack_c0;
        *(float *)(lVar1 + 0x25c) = fStack_bc;
        puVar4 = (undefined8 *)FQuat::Rotator(&local_c8,local_b8);
        *(undefined8 *)(lVar1 + 0x260) = *puVar4;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar4 + 1);
      }
      uVar5 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      fStack_c0 = (float)*(undefined4 *)(lVar1 + 0x268);
    }
    param_5 = &local_c8;
    local_c8 = CONCAT44(uVar6,uVar5);
    break;
  default:
    goto switchD_140a5d241_default;
  }
  *param_2 = *param_5;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_5 + 1);
switchD_140a5d241_default:
  return param_2;
}



// FUNCTION 140a5d5a0 FUN_140a5d5a0 body=216 status=ok
// SIG undefined FUN_140a5d5a0(void)

void FUN_140a5d5a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar7 = *(uint *)(param_1 + 0x1520);
  uVar6 = (ulonglong)uVar7;
  plVar1 = (longlong *)(param_1 + 0x2440);
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x2448) = 0;
  if (*(uint *)(param_1 + 0x244c) != uVar7) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,uVar7);
  }
  if (0 < (int)uVar7) {
    do {
      iVar3 = *(int *)(param_1 + 0x2448);
      *(int *)(param_1 + 0x2448) = iVar3 + 1;
      if (*(int *)(param_1 + 0x244c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar8;
  uVar9 = uVar8;
  if (0 < *(int *)(param_1 + 0x1520)) {
    do {
      lVar4 = *plVar1;
      uVar5 = FUN_141400440(param_1,*(undefined8 *)(uVar9 + *(longlong *)(param_1 + 0x1518)));
      *(undefined8 *)(uVar6 + lVar4) = uVar5;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar6 = uVar6 + 8;
      uVar9 = uVar9 + 0xf8;
    } while ((int)uVar7 < *(int *)(param_1 + 0x1520));
  }
  return;
}



// FUNCTION 140a5d680 FUN_140a5d680 body=719 status=ok
// SIG undefined FUN_140a5d680(void)

undefined8 * FUN_140a5d680(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_68;
  float fStack_64;
  float local_60;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined1 local_48 [64];
  
  lVar2 = *(longlong *)(param_1 + 0x2928);
  uVar1 = *(undefined4 *)(param_3 + 1);
  *param_2 = *param_3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  if (lVar2 == 0) {
    return param_2;
  }
  if (((byte)*(undefined4 *)(param_1 + 0x410) & 3) == 3) {
    fVar4 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20);
    local_68 = (float)*(undefined8 *)(param_1 + 0x458);
    fVar6 = fVar4 * -1.0;
    local_50 = fVar6 * fVar4 - local_68 * local_68;
    fStack_64 = -(fVar6 * *(float *)(param_1 + 0x460));
    local_60 = local_50;
    local_68 = local_68 * *(float *)(param_1 + 0x460);
  }
  else {
    local_68 = DAT_1468b5d90;
    fStack_64 = DAT_1468b5d94;
    local_60 = DAT_1468b5d98;
  }
  fVar4 = local_68 * local_68 + fStack_64 * fStack_64;
  if (fVar4 == 1.0) {
    if (local_60 == 0.0) goto LAB_140a5d83f;
  }
  else {
    if (fVar4 < 1e-08) {
      local_60 = DAT_1468b5d98;
      local_68 = DAT_1468b5d90;
      fStack_64 = DAT_1468b5d94;
      goto LAB_140a5d83f;
    }
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    local_68 = local_68 * fVar6;
    fStack_64 = fStack_64 * fVar6;
  }
  local_60 = 0.0;
LAB_140a5d83f:
  lVar2 = FVector::Rotation(&local_68,&local_58);
  fVar4 = *(float *)(lVar2 + 4);
  lVar2 = FVector::Rotation(param_3,&local_58);
  local_54 = *(float *)(lVar2 + 4);
  fVar5 = fVar4 - local_54;
  fVar6 = (float)(int)(fVar5 * 0.0027777778) * 360.0;
  if (ABS(fVar5) < ABS(fVar6)) {
    fVar6 = fVar5;
  }
  fVar5 = fVar5 - fVar6;
  if (fVar5 < 0.0) {
    fVar5 = fVar5 + 360.0;
  }
  if (180.0 < fVar5) {
    fVar5 = fVar5 - 360.0;
  }
  fVar6 = *(float *)(*(longlong *)(param_1 + 0x2928) + 0x108c);
  if (fVar5 <= fVar6) {
    if (fVar5 < -fVar6) {
      local_54 = fVar6 + fVar4;
    }
  }
  else {
    local_54 = fVar4 - fVar6;
  }
  local_58 = 0;
  local_50 = 0.0;
  puVar3 = (undefined8 *)FRotator::Vector(&local_58,local_48);
  uVar1 = *(undefined4 *)(puVar3 + 1);
  *param_2 = *puVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140a5d950 FUN_140a5d950 body=619 status=ok
// SIG undefined FUN_140a5d950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a5d950(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  puVar3 = (undefined8 *)operator_new(0xb0);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[2] = 0xffffffffffffffff;
    *puVar3 = &PTR_FUN_144210780;
    puVar7 = puVar3 + 3;
    lVar9 = 4;
    do {
      FUN_142d979c0(puVar7);
      puVar7 = puVar7 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
  }
  lVar9 = *(longlong *)(param_1 + -0x968);
  if (lVar9 != 0) {
    lVar4 = FUN_142e5c1e0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar2 = FUN_142ca0ce0(lVar9);
      *(undefined4 *)(puVar3 + 2) = uVar2;
    }
  }
  uVar8 = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x13d0);
  do {
    plVar5 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0xa0) + 0xf0))(param_1 + -0xa0,uVar8)
    ;
    if (plVar5 != (longlong *)0x0) {
      APlayArea::GetPrivateStaticClass();
      lVar9 = (**(code **)(*plVar5 + 0x628))(plVar5);
      if (lVar9 != 0) {
        _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
        FUN_142ff3000(lVar9,local_78);
        FUN_142ff5940(local_78,puVar3 + uVar8 * 4 + 3,1);
        if (local_28 != 0) {
          FMemory::Free();
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
        if (local_58 != 0) {
          FMemory::Free();
        }
      }
    }
    bVar6 = (char)uVar8 + 1;
    uVar8 = (ulonglong)bVar6;
  } while (bVar6 < 4);
  FUN_140a51e70(puVar3 + 0x13,param_1 + 0x13d8);
  if (((*(char *)(param_1 + 0x13d5) != '\0') && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (lVar9 = AIndianaUI::GetArmorComponent(), lVar9 != 0)) {
    lVar4 = *(longlong *)(param_1 + -0xcc0);
    if (lVar4 == 0) {
      local_98 = _DAT_1468b5d90;
      local_90 = DAT_1468b5d98;
    }
    else {
      local_98 = *(undefined8 *)(lVar4 + 0x220);
      local_90 = *(undefined4 *)(lVar4 + 0x228);
    }
    local_80 = local_90;
    local_88 = local_98;
    FUN_1423990b0(lVar9,&local_88,0,0,1);
  }
  return puVar3;
}



// FUNCTION 140a5dbc0 FUN_140a5dbc0 body=81 status=ok
// SIG undefined FUN_140a5dbc0(void)

undefined8 * FUN_140a5dbc0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144213c48;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140a5dc20 FUN_140a5dc20 body=80 status=ok
// SIG undefined FUN_140a5dc20(void)

void FUN_140a5dc20(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144213c30;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    return;
  }
  return;
}



// FUNCTION 140a5dc70 FUN_140a5dc70 body=8 status=ok
// SIG undefined FUN_140a5dc70(void)

longlong FUN_140a5dc70(longlong param_1)

{
  return param_1 + 0x440;
}



// FUNCTION 140a5dc80 FUN_140a5dc80 body=101 status=ok
// SIG undefined FUN_140a5dc80(void)

void FUN_140a5dc80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144213cf0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar1 = &PTR_GetPoolName_144213d38;
  }
  return;
}



// FUNCTION 140a5dcf0 FUN_140a5dcf0 body=90 status=ok
// SIG undefined FUN_140a5dcf0(void)

void FUN_140a5dcf0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144213c60;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_144213ca8;
  }
  return;
}



// FUNCTION 140a5dd50 FUN_140a5dd50 body=84 status=ok
// SIG undefined FUN_140a5dd50(void)

void FUN_140a5dd50(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144213d80;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144213dc8;
  }
  return;
}



// FUNCTION 140a5ddb0 FUN_140a5ddb0 body=84 status=ok
// SIG undefined FUN_140a5ddb0(void)

void FUN_140a5ddb0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144213e10;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144213e58;
  }
  return;
}



// FUNCTION 140a5de10 FUN_140a5de10 body=84 status=ok
// SIG undefined FUN_140a5de10(void)

void FUN_140a5de10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144213ea0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144213ee8;
  }
  return;
}



// FUNCTION 140a5de70 FUN_140a5de70 body=923 status=ok
// SIG undefined FUN_140a5de70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a5de70(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined4 local_110;
  undefined4 *local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [40];
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (lVar7 == 0) {
    return;
  }
  if (param_1[0x8c] == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0x78) == 0) {
    return;
  }
  lVar8 = FUN_1428dfc70();
  lVar1 = *(longlong *)(param_2 + 0x78);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (lVar1 == lVar8) break;
    lVar1 = *(longlong *)(lVar1 + 0x30);
  }
  if (*(longlong *)(param_2 + 0x78) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1[0x8c] + 0x508);
  if (lVar1 == 0) {
    return;
  }
  plVar2 = (longlong *)param_1[0x2d];
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  cVar6 = (**(code **)(*plVar2 + 0x440))(plVar2,*(undefined8 *)(param_2 + 0x30));
  if (cVar6 == '\0') {
    return;
  }
  (**(code **)(*plVar2 + 0x428))(plVar2,&local_d8,*(undefined8 *)(param_2 + 0x30));
  (**(code **)(*plVar2 + 0x430))(plVar2,local_c8,*(undefined8 *)(param_2 + 0x30));
  FRotator::Quaternion(local_c8,&local_b8);
  local_78 = local_b8;
  uStack_70 = uStack_b0;
  local_68._8_4_ = local_d0;
  local_68._0_8_ = local_d8;
  local_68._12_4_ = 0;
  local_58._4_4_ = DAT_1464aa788._4_4_;
  local_58._0_4_ = (undefined4)DAT_1464aa788;
  local_58._8_4_ = DAT_1464aa790;
  local_58._12_4_ = 0;
  FActorSpawnParameters::FActorSpawnParameters(local_a8);
  local_80 = 1;
  if (*(longlong *)(param_2 + 0x78) != 0) {
    lVar9 = FUN_1428dfc70();
    lVar8 = *(longlong *)(param_2 + 0x78);
    for (lVar3 = lVar8; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar9) goto LAB_140a5e036;
    }
  }
  lVar8 = 0;
LAB_140a5e036:
  lVar7 = FUN_142550d00(lVar7,lVar8,&local_78,local_a8);
  if (lVar7 != 0) {
    if (param_1[0x8f] != 0) {
      lVar9 = FUN_143025260();
      lVar8 = param_1[0x8f];
      for (lVar3 = lVar8; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar9) goto LAB_140a5e090;
      }
    }
    lVar8 = 0;
LAB_140a5e090:
    uVar10 = FUN_140c46b40(lVar1);
    uVar11 = (**(code **)(*param_1 + 0x148))(param_1);
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = local_c8;
    local_100 = &local_d8;
    local_108 = &DAT_1468b5d90;
    local_110 = 0;
    local_118 = uVar10;
    plVar12 = (longlong *)FUN_142ff1380(uVar11,lVar8,1,lVar7);
    if (plVar12 != (longlong *)0x0) {
      lVar7 = FUN_1413b9340();
      if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        plVar12[0xea] = param_2;
        *(undefined1 *)(plVar12 + 0xe9) = 0;
        plVar4 = (longlong *)param_1[0x8d];
        for (plVar13 = plVar4; plVar13 != plVar4 + (int)param_1[0x8e]; plVar13 = plVar13 + 1) {
          if (*plVar13 == param_2) {
            lVar7 = (longlong)plVar13 - (longlong)plVar4 >> 3;
            if ((int)lVar7 != -1) {
              *(char *)(plVar12 + 0xe9) = (char)lVar7;
            }
            break;
          }
        }
      }
      (**(code **)(*plVar12 + 0x3a0))(plVar12,0);
      (**(code **)(*plVar12 + 0x448))(plVar12,param_1);
      (**(code **)(*plVar12 + 0x818))(plVar12,plVar2,*(undefined8 *)(param_2 + 0x30),2);
      local_118 = local_118 & 0xffffffffffffff00;
      FUN_140e7b7b0(param_1 + 0x94,param_2,plVar12,1);
    }
  }
  return;
}



// FUNCTION 140a5e210 FUN_140a5e210 body=620 status=ok
// SIG undefined FUN_140a5e210(void)

void FUN_140a5e210(longlong param_1)

{
  uint *puVar1;
  void *_Src;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined2 *local_68;
  int local_60;
  int local_5c;
  undefined2 *local_58;
  undefined8 local_50;
  longlong local_48 [2];
  
  local_res8 = *(undefined8 *)(param_1 + 0x18);
  puVar8 = (undefined2 *)0x0;
  local_58 = (undefined2 *)0x0;
  local_50 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  puVar5 = local_58;
  FGenericPlatformString::Memcpy(local_58,L"Hijack",0xe);
  puVar3 = (undefined8 *)FName::ToString(&local_res8,local_48);
  if ((int)local_50 < 2) {
    puVar10 = (undefined2 *)*puVar3;
    *puVar3 = 0;
    iVar7 = *(int *)(puVar3 + 1);
    puVar3[1] = 0;
    puVar8 = puVar5;
  }
  else {
    iVar9 = *(int *)(puVar3 + 1) + -1;
    if (*(int *)(puVar3 + 1) == 0) {
      iVar9 = 0;
    }
    if (((int)local_50 != 0) || (iVar7 = 1, iVar9 == 0)) {
      iVar7 = 0;
    }
    local_68 = puVar5;
    local_60 = (int)local_50;
    local_5c = local_50._4_4_;
    if (local_50._4_4_ < iVar9 + iVar7 + (int)local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    }
    iVar2 = local_60;
    _Src = (void *)*puVar3;
    puVar10 = local_68;
    iVar7 = local_60;
    if (iVar9 != 0) {
      lVar6 = (longlong)local_60;
      local_60 = iVar9 + (uint)(local_60 == 0) + local_60;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar2);
      }
      iVar7 = local_60;
      puVar10 = local_68;
      puVar5 = local_68 + (lVar6 - (ulonglong)(iVar2 != 0));
      _guard_xfg_dispatch_icall_nop(puVar5,_Src,(longlong)iVar9 * 2);
      puVar5[iVar9] = 0;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x118);
  puVar5 = &DAT_143f3eda8;
  if (iVar7 != 0) {
    puVar5 = puVar10;
  }
  puVar3 = (undefined8 *)FName::FName(local_res10,puVar5,1);
  uVar4 = FUN_142227070(uVar4,param_1,*puVar3);
  *(undefined8 *)(param_1 + 0x6c0) = uVar4;
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  FUN_14234f960(*(undefined8 *)(param_1 + 0x6c0),param_1);
  FUN_1423511e0(*(undefined8 *)(param_1 + 0x6c0));
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x6c0) + 0x544);
  *puVar1 = *puVar1 & 0xfffffffe;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x6c0) + 0x544);
  *puVar1 = *puVar1 & 0xfffffff7;
  *(undefined1 *)(*(longlong *)(param_1 + 0x6c0) + 0x540) = 1;
  lVar6 = *(longlong *)(param_1 + 0x6c0);
  *(undefined4 *)(lVar6 + 0x248) = 0;
  if (*(int *)(lVar6 + 0x24c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar6 + 0x240,0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x4e8))();
  *(undefined1 *)(*(longlong *)(param_1 + 0x6c0) + 0x688) = 1;
  FUN_14234b150(*(undefined8 *)(param_1 + 0x6c0));
  return;
}



// FUNCTION 140a5e480 FUN_140a5e480 body=51 status=ok
// SIG undefined FUN_140a5e480(void)

undefined8 FUN_140a5e480(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x2380) != 0) {
    cVar1 = FUN_1409ae9a0();
    if (cVar1 != '\0') {
      return 0;
    }
  }
  uVar2 = FUN_140c3c1e0(param_1);
  return uVar2;
}



// FUNCTION 140a5e4c0 FUN_140a5e4c0 body=113 status=ok
// SIG undefined FUN_140a5e4c0(void)

void FUN_140a5e4c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0x204);
    param_1[0x204] = 0;
  }
  (**(code **)(*param_1 + 0x288))(param_1);
  FUN_140a5af40(param_1 + 0x1e9);
  return;
}



// FUNCTION 140a5e540 FUN_140a5e540 body=90 status=ok
// SIG undefined FUN_140a5e540(void)

void FUN_140a5e540(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    fVar3 = *(float *)(lVar1 + 0x790);
    fVar2 = (float)(**(code **)(*param_1 + 0x5f0))(param_1);
    fVar3 = fVar3 - fVar2;
    if (*(float *)((longlong)param_1 + 0xf64) <= fVar3 &&
        fVar3 != *(float *)((longlong)param_1 + 0xf64)) {
      FUN_142227350(param_1,0,1);
      return;
    }
  }
  return;
}



// FUNCTION 140a5e5a0 FUN_140a5e5a0 body=10 status=ok
// SIG undefined FUN_140a5e5a0(void)

void FUN_140a5e5a0(undefined8 param_1)

{
  FUN_142227350(param_1,0,1);
  return;
}



// FUNCTION 140a5e5b0 FUN_140a5e5b0 body=36 status=ok
// SIG undefined FUN_140a5e5b0(void)

void FUN_140a5e5b0(longlong param_1)

{
  FUN_140e75b80(param_1 + 0x4a0,1);
  FUN_142227880(param_1);
  return;
}



// FUNCTION 140a5e5e0 Destroyed body=31 status=ok
// SIG undefined Destroyed(void)

void APawn::Destroyed(longlong *param_1)

{
  (**(code **)(*param_1 + 0x6f8))();
  thunk_FUN_142227880(param_1);
  return;
}



// FUNCTION 140a5e600 FUN_140a5e600 body=63 status=ok
// SIG undefined FUN_140a5e600(void)

void FUN_140a5e600(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x23a0) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0x23a0),0,1);
    *(undefined8 *)(param_1 + 0x23a0) = 0;
  }
  FUN_140a5ad60(param_1);
  FUN_140c3c7c0(param_1);
  return;
}



// FUNCTION 140a5e640 FUN_140a5e640 body=112 status=ok
// SIG undefined FUN_140a5e640(void)

void FUN_140a5e640(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(longlong *)(param_1 + 0x2430) != 0) {
    FUN_1405973c0();
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x2430) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 0x20000000;
    *(undefined8 *)(param_1 + 0x2430) = 0;
  }
  return;
}



// FUNCTION 140a5e6b0 FUN_140a5e6b0 body=270 status=ok
// SIG undefined FUN_140a5e6b0(void)

void FUN_140a5e6b0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_142ce84c0();
  if (((*(byte *)(param_1 + 0x620) & 4) != 0) &&
     (lVar5 = *(longlong *)(param_1 + 0x118), lVar5 != 0)) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140c58600(lVar5,0);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x408);
  *(undefined1 *)(param_1 + 0x6a8) = 0;
  *(undefined1 *)(param_1 + 0x6ba) = 0;
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)(param_1 + 0x620) & 0x200) != 0)) {
    uVar4 = FUN_141477fa0();
    lVar5 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
    if (lVar5 != 0) {
      FUN_140ec6d00(lVar5,DAT_146b31760);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x408);
  if (lVar5 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140c520b0(lVar5,param_1);
    }
  }
  return;
}



// FUNCTION 140a5e7c0 FUN_140a5e7c0 body=106 status=ok
// SIG undefined FUN_140a5e7c0(void)

void FUN_140a5e7c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142ce8b40();
  lVar1 = *(longlong *)(param_1 + 0x408);
  if (lVar1 != 0) {
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
      FUN_140c520b0(lVar1,param_1);
    }
  }
  return;
}



// FUNCTION 140a5e830 FUN_140a5e830 body=956 status=ok
// SIG undefined FUN_140a5e830(void)

void FUN_140a5e830(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  void *pvVar2;
  float fVar3;
  void *_Src;
  float *pfVar4;
  longlong lVar5;
  void *pvVar6;
  void **ppvVar7;
  void **ppvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void **ppvVar12;
  float fVar13;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  void *local_a8;
  undefined8 local_a0;
  void **local_98;
  undefined8 local_90;
  void *local_88;
  ulonglong local_80;
  longlong local_78 [8];
  
  FUN_142ce8c90(param_1,param_2,param_3,param_4,param_5);
  local_98 = (void **)0x0;
  local_90 = 0;
  ppvVar8 = (void **)0x0;
  if ((0.0 < *(float *)(param_1 + 0x28bc)) &&
     (ppvVar8 = (void **)0x0, *(char *)(param_1 + 0x2bc0) != '\0')) {
    local_a8 = (void *)0x0;
    local_a0 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    _Src = local_a8;
    FGenericPlatformString::Memcpy(local_a8,L"DelayedFallTimeRemaining",0x32);
    FString::PrintfImpl(&local_88,L"%.2f",
                        (double)(*(float *)(param_1 + 0x28bc) - *(float *)(param_1 + 0x2bc4)));
    local_90 = CONCAT44(local_90._4_4_,1);
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(&local_98,0);
    ppvVar8 = local_98;
    if (local_98 != (void **)0x0) {
      lVar5 = (longlong)(int)local_a0;
      *local_98 = (void *)0x0;
      *(int *)(local_98 + 1) = (int)local_a0;
      if ((int)local_a0 == 0) {
        *(undefined4 *)((longlong)local_98 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(local_98,local_a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(*ppvVar8,_Src,lVar5 * 2);
      }
      pvVar2 = local_88;
      ppvVar8[2] = (void *)0x0;
      iVar9 = (int)local_80;
      *(int *)(ppvVar8 + 3) = iVar9;
      if (iVar9 == 0) {
        *(undefined4 *)((longlong)ppvVar8 + 0x1c) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar8 + 2,local_80 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(ppvVar8[2],pvVar2,(longlong)iVar9 * 2);
      }
      iVar9 = *(int *)(ppvVar8 + 1);
      pvVar2 = *ppvVar8;
      local_a8 = (void *)0x0;
      local_a0._0_4_ = iVar9;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,(3 - (uint)(iVar9 != 0)) + iVar9,0)
      ;
      pvVar6 = local_a8;
      _guard_xfg_dispatch_icall_nop(local_a8,pvVar2,(longlong)iVar9 * 2);
      iVar9 = (int)local_a0;
      lVar5 = (longlong)(int)local_a0;
      iVar10 = (3 - (uint)((int)local_a0 != 0)) + (int)local_a0;
      local_a0 = CONCAT44(local_a0._4_4_,iVar10);
      iVar11 = local_a0._4_4_;
      if (local_a0._4_4_ < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        pvVar6 = local_a8;
        iVar11 = local_a0._4_4_;
        iVar10 = (int)local_a0;
      }
      lVar5 = lVar5 - (ulonglong)(iVar9 != 0);
      *(undefined4 *)((longlong)pvVar6 + lVar5 * 2) = 0x20003a;
      *(undefined2 *)((longlong)pvVar6 + lVar5 * 2 + 4) = 0;
      if (ppvVar8 == &local_a8) {
        if (pvVar6 != (void *)0x0) {
          FMemory::Free(pvVar6);
        }
      }
      else {
        if (*ppvVar8 != (void *)0x0) {
          FMemory::Free();
        }
        *ppvVar8 = pvVar6;
        *(int *)(ppvVar8 + 1) = iVar10;
        *(int *)((longlong)ppvVar8 + 0xc) = iVar11;
      }
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free();
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
  }
  lVar5 = param_2 + 0x98;
  ppvVar12 = ppvVar8 + (longlong)(int)local_90 * 4;
  fVar3 = 0.0;
  for (ppvVar7 = ppvVar8; ppvVar7 != ppvVar12; ppvVar7 = ppvVar7 + 4) {
    FString::FString(&local_88,ppvVar7);
    FString::FString(local_78,ppvVar7 + 2);
    pfVar4 = (float *)FUN_1428adeb0(lVar5,local_res8,&local_88);
    fVar13 = *pfVar4;
    if (*pfVar4 <= fVar3) {
      fVar13 = fVar3;
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free();
    }
    fVar3 = fVar13;
  }
  for (; ppvVar8 != ppvVar12; ppvVar8 = ppvVar8 + 4) {
    FString::FString(&local_88,ppvVar8);
    FString::FString(local_78,ppvVar8 + 2);
    fVar13 = *(float *)(param_2 + 0x240);
    uVar1 = *(undefined4 *)(param_2 + 0x244);
    FUN_1428adeb0(lVar5,local_res10,&local_88);
    local_res8[0] = 0;
    FUN_1428a6fb0(lVar5,&local_88,local_res8);
    *(undefined4 *)(param_2 + 0x244) = uVar1;
    local_res8[0] = 0;
    *(float *)(param_2 + 0x240) = fVar13 + fVar3;
    FUN_1428a6fb0(lVar5,local_78,local_res8);
    *(float *)(param_2 + 0x240) = fVar13;
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free();
    }
  }
  TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
            (&local_98);
  return;
}



// FUNCTION 140a5ebf0 FUN_140a5ebf0 body=873 status=ok
// SIG undefined FUN_140a5ebf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a5ebf0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStack_298 [32];
  undefined1 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined1 local_248 [49];
  undefined1 local_217;
  undefined1 local_178 [208];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 == 0) {
    return;
  }
  fVar12 = 0.0;
  local_258 = FUN_142e27720();
  lVar4 = (**(code **)(*param_1 + 0x628))(param_1,local_258);
  if (lVar4 != 0) {
    if (param_1[0x3a5] != 0) {
      lVar5 = USafeZone::GetPrivateStaticClass();
      lVar9 = param_1[0x3a5];
      for (lVar8 = lVar9; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
        if (lVar8 == lVar5) {
          if (lVar9 != 0) goto LAB_140a5ecdb;
          break;
        }
      }
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar9 = 0;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar9 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x500);
    }
LAB_140a5ecdb:
    if (lVar9 != 0) {
      lVar5 = USafeZone::GetPrivateStaticClass();
      lVar8 = lVar9;
      do {
        if (lVar8 == lVar5) {
          FUN_142c62180(local_248);
          local_217 = 2;
          lVar5 = USafeZone::GetPrivateStaticClass();
          lVar8 = lVar9;
          goto LAB_140a5ed20;
        }
        lVar8 = *(longlong *)(lVar8 + 0x30);
      } while (lVar8 != 0);
    }
  }
  goto LAB_140a5edac;
  while (lVar8 = *(longlong *)(lVar8 + 0x30), lVar10 = 0, lVar8 != 0) {
LAB_140a5ed20:
    lVar10 = lVar9;
    if (lVar8 == lVar5) break;
  }
  uVar6 = FUN_1405e0fd0(local_178,local_248);
  local_278 = 0;
  FUN_142c7bb40(lVar4,&local_268,lVar10,uVar6);
  if (local_268 != (code *)0x0) {
    fVar12 = (float)(**(code **)(*(longlong *)local_268 + 0x58))();
  }
  plVar7 = (longlong *)CONCAT44(uStack_25c,uStack_260);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar7 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  FUN_142c63c50(local_248);
LAB_140a5edac:
  if (fVar12 <= 1.1754944e-38) {
    fVar12 = 1.1754944e-38;
  }
  uStack_260 = 0;
  local_268 = FUN_140a5e5a0;
  if (*(longlong *)(lVar3 + 400) == 0) {
    uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
  }
  else {
    uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar7 + 1,param_1);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_268;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_268._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_260;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_25c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar3;
    *plVar7 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_a8 = 0;
  local_a0 = 0;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_a8);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_270 = 0xbf800000;
  local_278 = 0;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar6,param_1 + 0x203,&local_a8,fVar12);
  if (local_48 != 0) {
    plVar11 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar11 = local_58;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar3 = FMemory::Realloc(plVar7,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140a5ef60 FUN_140a5ef60 body=81 status=ok
// SIG undefined FUN_140a5ef60(void)

longlong FUN_140a5ef60(longlong param_1)

{
  int iVar1;
  uint7 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x570);
  *(int *)(param_1 + 0x570) = iVar1 + 1;
  FUN_140a681b0(param_1,(longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x560));
  uVar2 = (uint7)(uint3)((uint)*(int *)(param_1 + 0x568) >> 8);
  if (*(int *)(param_1 + 0x570) == *(int *)(param_1 + 0x568)) {
    *(undefined4 *)(param_1 + 0x570) = 0;
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 140a5efc0 FUN_140a5efc0 body=1611 status=ok
// SIG undefined FUN_140a5efc0(void)

ulonglong FUN_140a5efc0(longlong *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float local_88;
  float fStack_84;
  float local_78;
  
  uVar8 = (**(code **)(*param_1 + 0xb70))();
  if (((char)uVar8 == '\0') ||
     (uVar8 = (**(code **)(*param_1 + 0xbd8))(param_1,param_2), (char)uVar8 != '\0')) {
    return uVar8 & 0xffffffffffffff00;
  }
  fVar4 = *(float *)((longlong)param_1 + 0x194);
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x18c);
  (**(code **)(*param_1 + 0x260))(param_1);
  lVar10 = param_1[0x44];
  if (((lVar10 == 0) || ((*(byte *)(lVar10 + 0x56c) & 8) == 0)) ||
     (cVar6 = *(char *)((longlong)param_1 + 0x2ba9), cVar6 == '\0')) {
    if ((param_1[0x525] == 0) || (*(char *)((longlong)param_1 + 0x2baa) == '\0')) {
      if (((*(byte *)(param_1 + 0x558) & 1) != 0) ||
         (((char)param_1[0x578] != '\0' && (*(char *)((longlong)param_1 + 0x2bc1) != '\0')))) {
        if ((param_1[0x56f] == 0) || (lVar9 = 0x28dc, *(char *)(param_1[0x56f] + 0xec0) != '\x03'))
        {
          lVar9 = 0x28d0;
        }
        cVar6 = '\x02';
        fVar13 = *(float *)(param_1 + 0x226) * *(float *)(lVar9 + (longlong)param_1);
        if (fVar13 * fVar13 * *(float *)(param_1 + 0x513) <=
            *(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
            *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32)) goto LAB_140a5f14a;
      }
    }
    else {
      if ((param_1[0x56f] == 0) || (lVar9 = 0x28dc, *(char *)(param_1[0x56f] + 0xec0) != '\x03')) {
        lVar9 = 0x28d0;
      }
      fVar13 = *(float *)(param_1 + 0x226) * *(float *)(lVar9 + (longlong)param_1);
      if (fVar13 * fVar13 * *(float *)(param_1[0x525] + 0x106c) <=
          *(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
          *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32)) {
        cVar6 = '\x03';
        goto LAB_140a5f14a;
      }
    }
    cVar6 = '\x01';
  }
LAB_140a5f14a:
  *(char *)(param_1 + 0x575) = cVar6;
  lVar9 = FUN_140a64a80(param_1);
  if (((lVar9 == 0) || (lVar10 == 0)) || (cVar6 = thunk_FUN_142912390(lVar10), cVar6 == '\0')) {
    bVar7 = FUN_142ce9010(param_1,param_2);
    if (bVar7 == 0) goto LAB_140a5f5ab;
  }
  else {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x194);
    FUN_140a5d110(lVar9,param_1,(longlong)param_1 + 0x2ba4,puVar1);
    if ((char)param_1[0x575] != '\x01') {
      if ((param_1[0x525] == 0) || ((char)param_1[0x575] != '\x03')) {
        fVar13 = *(float *)((longlong)param_1 + 0x289c);
      }
      else {
        fVar13 = *(float *)(param_1[0x525] + 0x107c);
      }
      fVar18 = SQRT(*(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
                    *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32));
      fVar11 = (float)(**(code **)(*param_1 + 0x400))(param_1);
      fVar16 = *(float *)(param_1 + 0x32);
      if (fVar11 <= fVar18) {
        fVar18 = fVar11;
      }
      fVar11 = *(float *)((longlong)param_1 + 0x18c);
      fVar12 = fVar11 * fVar11 + fVar16 * fVar16;
      if (fVar12 == 1.0) {
        if (*(float *)((longlong)param_1 + 0x194) == 0.0) {
          local_78 = (float)*(undefined8 *)((longlong)param_1 + 0x18c);
          fVar15 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x18c) >> 0x20);
          fVar14 = *(float *)((longlong)param_1 + 0x194);
        }
        else {
LAB_140a5f323:
          fVar15 = fVar16;
          fVar14 = 0.0;
          local_78 = fVar11;
        }
      }
      else {
        fVar15 = DAT_1468b5d94;
        fVar14 = DAT_1468b5d98;
        local_78 = DAT_1468b5d90;
        if (1e-08 <= fVar12) {
          auVar17 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
          fVar15 = auVar17._0_4_;
          fVar15 = fVar15 + fVar15 * (0.5 - fVar12 * 0.5 * fVar15 * fVar15);
          fVar15 = fVar15 + fVar15 * (0.5 - fVar12 * 0.5 * fVar15 * fVar15);
          fVar11 = fVar15 * fVar11;
          fVar16 = fVar15 * fVar16;
          goto LAB_140a5f323;
        }
      }
      uVar2 = *puVar1;
      fVar18 = fVar18 * fVar13;
      *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(fVar15 * fVar18,local_78 * fVar18);
      *(float *)((longlong)param_1 + 0x194) = fVar14 * fVar18;
      *puVar1 = uVar2;
    }
    (**(code **)(*param_1 + 0x5a0))(param_1,3);
    bVar7 = 1;
  }
  if (((char)param_1[0x575] != '\x03') && (*(float *)(param_1 + 0x517) != 1.0)) {
    if ((*(float *)(param_1 + 0x6a) == 0.0) &&
       ((*(float *)((longlong)param_1 + 0x354) == 0.0 && (*(float *)(param_1 + 0x6b) == 0.0)))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      local_88 = (float)uVar3;
      fStack_84 = (float)((ulonglong)uVar3 >> 0x20);
      *(float *)((longlong)param_1 + 0x18c) = *(float *)((longlong)param_1 + 0x18c) - local_88;
      *(float *)(param_1 + 0x32) = *(float *)(param_1 + 0x32) - fStack_84;
      *(float *)((longlong)param_1 + 0x194) = *(float *)((longlong)param_1 + 0x194) - fVar4;
      fVar18 = fStack_84 * fStack_84 + local_88 * local_88;
      fVar13 = fStack_84;
      fVar16 = local_88;
      if ((fVar18 != 1.0) && (fVar13 = DAT_1468b5d94, fVar16 = DAT_1468b5d90, 1e-08 <= fVar18)) {
        auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
        fVar16 = auVar17._0_4_;
        fVar16 = fVar16 + fVar16 * (0.5 - fVar18 * 0.5 * fVar16 * fVar16);
        fVar16 = fVar16 + fVar16 * (0.5 - fVar18 * 0.5 * fVar16 * fVar16);
        fVar13 = fStack_84 * fVar16;
        fVar16 = local_88 * fVar16;
      }
      *(float *)((longlong)param_1 + 0x194) = fVar4 + *(float *)((longlong)param_1 + 0x194);
      *(float *)(param_1 + 0x32) =
           fVar13 * SQRT(fVar18) * *(float *)(param_1 + 0x517) + *(float *)(param_1 + 0x32);
      *(float *)((longlong)param_1 + 0x18c) =
           fVar16 * SQRT(fVar18) * *(float *)(param_1 + 0x517) +
           *(float *)((longlong)param_1 + 0x18c);
    }
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  *(undefined1 *)(param_1 + 0x578) = 0;
  *(undefined1 *)(param_1 + 0x579) = 0;
  if ((param_1[0x44] != 0) && ((*(byte *)(param_1[0x44] + 0x56c) & 8) == 0)) {
    *(undefined4 *)(param_1 + 0x519) = 0xbf800000;
  }
  lVar10 = *(longlong *)(param_1[0x56f] + 0x490);
  if (lVar10 == 0) {
LAB_140a5f585:
    lVar10 = 0;
  }
  else {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140a5f585;
  }
  if (DAT_14686b358 == '\0') {
    FUN_140c18430(&DAT_14686b350);
  }
  FUN_140c291c0(DAT_14686b350,lVar10);
LAB_140a5f5ab:
  return (ulonglong)bVar7;
}



// FUNCTION 140a5f610 FUN_140a5f610 body=696 status=ok
// SIG undefined FUN_140a5f610(void)

undefined8 FUN_140a5f610(longlong *param_1,undefined1 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  float *pfVar6;
  undefined8 uVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_res8 [2];
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  undefined1 local_58 [80];
  
  if ((char)param_1[0x575] == '\x04') {
    return 1;
  }
  if (((((((char)param_1[0x49] == '\x06') && (*(char *)((longlong)param_1 + 0x249) == '\0')) &&
        (param_1[0x2f] != 0)) && ((param_1[0x26b] != 0 && (param_1[0x26c] != 0)))) &&
      ((param_1[0x44] != 0 && (cVar4 = thunk_FUN_142912390(), cVar4 != '\0')))) &&
     ((((*(float *)(param_1 + 0x6a) != 0.0 || (*(float *)((longlong)param_1 + 0x354) != 0.0)) ||
       (*(float *)(param_1 + 0x6b) != 0.0)) && (param_1[0x56e] != 0)))) {
    lVar5 = (**(code **)(*(longlong *)param_1[0x44] + 0x738))((longlong *)param_1[0x44],local_58);
    local_74 = *(undefined4 *)(lVar5 + 4);
    local_78 = 0;
    local_70 = 0.0;
    FRotator::Vector(&local_78,&local_68);
    fVar1 = *(float *)((longlong)param_1 + 0x354);
    fVar2 = *(float *)(param_1 + 0x6a);
    fVar3 = *(float *)(param_1 + 0x6b);
    fVar9 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    auVar10 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    local_res8[0] = auVar10._0_4_;
    local_res8[0] =
         local_res8[0] + local_res8[0] * (0.5 - fVar9 * 0.5 * local_res8[0] * local_res8[0]);
    local_res8[0] =
         local_res8[0] + local_res8[0] * (0.5 - fVar9 * 0.5 * local_res8[0] * local_res8[0]);
    if (0.0 < local_68 * fVar2 * local_res8[0] + local_64 * fVar1 * local_res8[0] +
              local_60 * fVar3 * local_res8[0]) {
      FUN_140a5d110(param_1[0x56e] + 0x240,param_1,(longlong)param_1 + 0x2ba4,local_res8);
      if (param_1[0x26b] == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)param_1[0x26c];
      }
      pfVar6 = (float *)(**(code **)(*plVar8 + 0x10))(plVar8,local_58);
      local_70 = local_res8[0] * pfVar6[2];
      *(ulonglong *)((longlong)param_1 + 0x18c) =
           CONCAT44(local_res8[0] * pfVar6[1],local_res8[0] * *pfVar6);
      *(float *)((longlong)param_1 + 0x194) = local_70;
      (**(code **)(*param_1 + 0x260))(param_1);
      *(undefined1 *)(param_1 + 0x575) = 4;
      return 1;
    }
  }
  uVar7 = FUN_142ce9070(param_1,param_2);
  return uVar7;
}



// FUNCTION 140a5f8d0 FUN_140a5f8d0 body=2269 status=ok
// SIG undefined FUN_140a5f8d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a5f8d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  float *pfVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_548 [32];
  longlong local_528;
  undefined1 local_520;
  float local_518;
  float local_514;
  float local_510;
  longlong local_508;
  float local_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  float local_4e8;
  undefined4 uStack_4e4;
  longlong local_4e0;
  uint local_4d8;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  float local_4c0;
  float local_4bc;
  float local_4b8;
  float local_4b0;
  float fStack_4ac;
  float local_4a8;
  undefined8 local_4a4;
  float local_49c;
  undefined8 local_498;
  undefined4 local_490;
  undefined8 local_48c;
  undefined4 local_484;
  undefined8 local_480;
  float local_478;
  undefined8 local_468;
  undefined4 local_460;
  longlong local_458;
  undefined4 local_450;
  longlong local_448;
  undefined4 local_440;
  undefined8 local_438;
  undefined4 local_430;
  longlong local_42c;
  undefined4 local_424;
  longlong local_420;
  undefined4 local_410;
  undefined4 local_404;
  undefined1 local_400 [24];
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  undefined1 local_3c8 [12];
  undefined1 local_3bc [12];
  undefined1 local_3b0 [24];
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined1 local_380 [120];
  undefined1 local_308 [120];
  undefined8 local_290;
  float local_288;
  undefined8 local_284;
  float local_27c;
  undefined8 local_278;
  float local_270;
  undefined8 local_26c;
  undefined4 local_264;
  undefined1 local_258 [128];
  undefined1 local_1d8 [128];
  undefined1 local_158 [128];
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_548;
  local_4f8 = 0;
  if (param_1[0x1fb] == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x5a0))(param_1,6,5);
  if ((param_1[0x5d9] != 0) && (lVar14 = *(longlong *)(param_1[0x5d9] + 0x160), lVar14 != 0)) {
    lVar8 = FUN_142e20fc0();
    lVar10 = lVar14;
    do {
      if (lVar10 == lVar8) {
        FUN_142cfaa20(param_1,&local_4f0,lVar14);
        plVar5 = (longlong *)CONCAT44(uStack_4e4,local_4e8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        break;
      }
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  iVar7 = FUN_14233f450(param_1);
  if (((iVar7 == 3) && (param_1[0x5d9] != 0)) && (*(char *)(param_1[0x5d9] + 0x68) != '\0')) {
    FUN_140a768c0(param_1[0x1fb],param_1 + 0x5d6);
  }
  lVar14 = param_1[0x1fb];
  lVar10 = *(longlong *)(lVar14 + 0x168);
  if (lVar10 == 0) {
    puVar11 = &local_4a4;
    local_4a4 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_49c = DAT_1468b5d98;
  }
  else {
    puVar11 = (undefined8 *)&local_4d0;
    local_4d0 = *(undefined4 *)(lVar10 + 0x220);
    local_4c8 = *(undefined4 *)(lVar10 + 0x228);
    uStack_4cc = *(undefined4 *)(lVar10 + 0x224);
  }
  local_4f0 = *puVar11;
  local_4e8 = *(float *)(puVar11 + 1);
  if (lVar10 == 0) {
    puVar9 = &local_48c;
    local_48c = DAT_1468b5da0;
    local_484 = DAT_1468b5da8;
  }
  else {
    local_3e8 = *(float *)(lVar10 + 0x210);
    fStack_3e4 = *(float *)(lVar10 + 0x214);
    fStack_3e0 = *(float *)(lVar10 + 0x218);
    fStack_3dc = *(float *)(lVar10 + 0x21c);
    auVar19._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != fStack_3e4);
    auVar19._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != local_3e8);
    auVar19._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_3e0);
    auVar19._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_3dc);
    iVar7 = movmskps(local_4e8,auVar19);
    if (iVar7 != 0) {
      *(float *)(lVar10 + 0x250) = local_3e8;
      *(float *)(lVar10 + 0x254) = fStack_3e4;
      *(float *)(lVar10 + 600) = fStack_3e0;
      *(float *)(lVar10 + 0x25c) = fStack_3dc;
      puVar9 = (undefined8 *)FQuat::Rotator(&local_3e8,local_3c8);
      *(undefined8 *)(lVar10 + 0x260) = *puVar9;
      *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar9 + 1);
      lVar14 = param_1[0x1fb];
    }
    puVar9 = &local_498;
    local_498 = *(undefined8 *)(lVar10 + 0x260);
    local_490 = *(undefined4 *)(lVar10 + 0x268);
  }
  uVar17 = *(undefined4 *)(puVar11 + 1);
  *(undefined8 *)((longlong)param_1 + 0x2ea4) = *puVar11;
  *(undefined4 *)((longlong)param_1 + 0x2eac) = uVar17;
  *(undefined2 *)(param_1 + 0x5d3) = 0x101;
  if (param_1[0x5d9] == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = FUN_142c98860(param_1[0x5d9] + 0x30,lVar14);
  }
  *(undefined4 *)((longlong)param_1 + 0x2e9c) = uVar17;
  cVar6 = FUN_142cf3980(param_1);
  if (cVar6 == '\0') {
    local_468 = *puVar9;
    local_460 = *(undefined4 *)(puVar9 + 1);
    local_458 = param_1[0x5d6];
    local_450 = (undefined4)param_1[0x5d7];
    local_520 = 1;
    local_528 = 0;
    FUN_14223ca30(param_1[0x1fb],&local_458,&local_468,0);
    goto LAB_140a6009d;
  }
  lVar10 = FUN_142cc1670();
  lVar14 = *(longlong *)(param_1[0x1fb] + 0x4c0);
  local_4e0 = lVar14;
  if (lVar14 == 0) {
    local_4d8 = local_4d8 & 0xfffffff8;
  }
  else {
    bVar3 = *(byte *)(lVar14 + 0x24c);
    uVar15 = 0;
    local_4d8 = (bVar3 >> 2 ^ local_4d8) & 7 ^ local_4d8;
    if (((byte)local_4d8 & 7) != 7) {
      uVar15 = 8;
    }
    local_4d8 = uVar15 | local_4d8 & 0xfffffff7;
    *(byte *)(lVar14 + 0x24c) = bVar3 | 0x1c;
    if ((uVar15 != 0) && (*(longlong *)(lVar14 + 400) != 0)) {
      if ((bVar3 & 1) == 0) {
        FUN_140942fb0(lVar14,0,0);
      }
      local_410 = *(undefined4 *)(lVar14 + 0x228);
      local_3d8 = *(float *)(lVar14 + 0x210);
      fStack_3d4 = *(float *)(lVar14 + 0x214);
      fStack_3d0 = *(float *)(lVar14 + 0x218);
      fStack_3cc = *(float *)(lVar14 + 0x21c);
      *(undefined4 *)(lVar14 + 0x1ec) = *(undefined4 *)(lVar14 + 0x220);
      *(undefined4 *)(lVar14 + 0x1f0) = *(undefined4 *)(lVar14 + 0x224);
      *(undefined4 *)(lVar14 + 500) = local_410;
      auVar4._4_4_ = -(uint)(*(float *)(lVar14 + 0x254) != fStack_3d4);
      auVar4._0_4_ = -(uint)(*(float *)(lVar14 + 0x250) != local_3d8);
      auVar4._8_4_ = -(uint)(*(float *)(lVar14 + 600) != fStack_3d0);
      auVar4._12_4_ = -(uint)(*(float *)(lVar14 + 0x25c) != fStack_3cc);
      iVar7 = movmskps(local_410,auVar4);
      if (iVar7 != 0) {
        *(float *)(lVar14 + 0x250) = local_3d8;
        *(float *)(lVar14 + 0x254) = fStack_3d4;
        *(float *)(lVar14 + 600) = fStack_3d0;
        *(float *)(lVar14 + 0x25c) = fStack_3cc;
        puVar11 = (undefined8 *)FQuat::Rotator(&local_3d8,local_3bc);
        *(undefined8 *)(lVar14 + 0x260) = *puVar11;
        *(undefined4 *)(lVar14 + 0x268) = *(undefined4 *)(puVar11 + 1);
      }
      local_404 = *(undefined4 *)(lVar14 + 0x238);
      *(undefined8 *)(lVar14 + 0x1f8) = *(undefined8 *)(lVar14 + 0x260);
      *(undefined4 *)(lVar14 + 0x200) = *(undefined4 *)(lVar14 + 0x268);
      *(undefined4 *)(lVar14 + 0x204) = *(undefined4 *)(lVar14 + 0x230);
      *(undefined4 *)(lVar14 + 0x208) = *(undefined4 *)(lVar14 + 0x234);
      *(undefined4 *)(lVar14 + 0x20c) = local_404;
    }
  }
  local_508 = param_1[0x5d6];
  local_500 = (float)param_1[0x5d7];
  local_528 = CONCAT71(local_528._1_7_,1);
  FUN_1423990b0(param_1[0x2f],&local_508,0,0);
  FUN_14237fa30(&local_4e0);
  local_500 = *(float *)(param_1 + 0x5d7);
  local_4bc = (float)((ulonglong)param_1[0x5d6] >> 0x20) - local_4f0._4_4_;
  local_4c0 = (float)param_1[0x5d6] - (float)local_4f0;
  local_4b8 = local_500 - local_4e8;
  fVar18 = local_4bc * local_4bc + local_4c0 * local_4c0;
  if (fVar18 == 1.0) {
    local_518 = local_4c0;
    local_514 = local_4bc;
    local_510 = local_4b8;
    if (local_4b8 != 0.0) {
LAB_140a5fe05:
      local_510 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar18) {
      auVar19 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
      local_518 = auVar19._0_4_;
      local_518 = local_518 + local_518 * (0.5 - fVar18 * 0.5 * local_518 * local_518);
      local_518 = local_518 + local_518 * (0.5 - fVar18 * 0.5 * local_518 * local_518);
      local_514 = local_518 * local_4bc;
      local_518 = local_518 * local_4c0;
      goto LAB_140a5fe05;
    }
    local_518 = DAT_1468b5d90;
    local_510 = DAT_1468b5d98;
    local_514 = DAT_1468b5d94;
  }
  FVector::Rotation(&local_518,local_400);
  if (lVar10 == 0) {
    local_480 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    pfVar16 = (float *)&local_480;
    local_478 = DAT_1468b5d98;
  }
  else {
    local_500 = *(float *)(lVar10 + 0x4a4);
    uVar13 = *(undefined8 *)(lVar10 + 0x49c);
    pfVar12 = (float *)FRotator::UnrotateVector(local_400,local_3b0,&local_4c0);
    pfVar16 = &local_4b0;
    local_4b0 = (float)uVar13 - *pfVar12;
    fStack_4ac = (float)((ulonglong)uVar13 >> 0x20) - pfVar12[1];
    local_4a8 = local_500 - pfVar12[2];
  }
  if (lVar14 == 0) {
    puVar11 = (undefined8 *)&DAT_1468b5d90;
  }
  else {
    puVar11 = (undefined8 *)(lVar14 + 0x1ec);
  }
  uVar13 = *puVar11;
  uVar17 = *(undefined4 *)(puVar11 + 1);
  local_398 = 0;
  local_390 = 0;
  local_388 = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(local_380);
  FRuntimeFloatCurve::FRuntimeFloatCurve(local_308);
  local_290 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  local_278 = *(undefined8 *)pfVar16;
  lVar14 = param_1[0x5d9];
  local_288 = DAT_1468b5d98;
  local_27c = DAT_1468b5d98;
  local_270 = pfVar16[2];
  local_398 = CONCAT44(local_398._4_4_,*(undefined4 *)((longlong)param_1 + 0x2e9c));
  local_284 = local_290;
  local_26c = uVar13;
  local_264 = uVar17;
  if (lVar14 == 0) {
    uVar13 = FRuntimeFloatCurve::FRuntimeFloatCurve(local_258);
  }
  else {
    uVar13 = FRuntimeFloatCurve::FRuntimeFloatCurve(local_1d8,lVar14 + 0x70);
  }
  FRuntimeFloatCurve::operator=(local_380,uVar13);
  if (lVar14 == 0) {
    FRichCurve::~FRichCurve(local_258);
  }
  else {
    FRichCurve::~FRichCurve(local_1d8);
  }
  lVar14 = param_1[0x5d9];
  if (lVar14 == 0) {
    uVar13 = FRuntimeFloatCurve::FRuntimeFloatCurve(local_158);
  }
  else {
    uVar13 = FRuntimeFloatCurve::FRuntimeFloatCurve(local_d8,lVar14 + 0xe8);
  }
  FRuntimeFloatCurve::operator=(local_308,uVar13);
  if (lVar14 == 0) {
    FRichCurve::~FRichCurve(local_158);
  }
  else {
    FRichCurve::~FRichCurve(local_d8);
  }
  FUN_142d00de0(param_1,&local_398);
  FRichCurve::~FRichCurve(local_308);
  FRichCurve::~FRichCurve(local_380);
LAB_140a6009d:
  *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  fVar18 = DAT_1468b5d98;
  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) | 0x20;
  *(float *)((longlong)param_1 + 0x194) = fVar18;
  if (*(char *)(param_1[0x1fb] + 0x128) == '\x02') {
    lVar14 = param_1[0xc2];
    if (lVar14 == 0) {
      lVar14 = (**(code **)(param_1[0x43] + 0x28))();
    }
    *(int *)(lVar14 + 0x158) = *(int *)(lVar14 + 0x158) + 1;
    local_440 = (undefined4)param_1[0x5d7];
    local_448 = param_1[0x5d6];
    local_528 = param_1[0x5d9];
    FUN_141405e10(param_1,&local_448,*(undefined4 *)(lVar14 + 0xc),*(undefined4 *)(lVar14 + 0x158));
  }
  local_430 = *(undefined4 *)((longlong)param_1 + 0x2eac);
  local_438 = *(undefined8 *)((longlong)param_1 + 0x2ea4);
  local_424 = (undefined4)param_1[0x5d7];
  local_420 = param_1[0x5d9];
  local_42c = param_1[0x5d6];
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x568,&local_438);
  return;
}



// FUNCTION 140a601b0 HandleNgheDaDestroyed body=31 status=ok
// SIG undefined HandleNgheDaDestroyed(void)

void ATDMGameplayBase::HandleNgheDaDestroyed(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140a64690();
  if (lVar1 != 0) {
    FUN_14149b0c0(lVar1);
    return;
  }
  return;
}



// FUNCTION 140a601d0 FUN_140a601d0 body=133 status=ok
// SIG undefined FUN_140a601d0(void)

void FUN_140a601d0(longlong param_1,int param_2)

{
  FUN_140c3f320();
  if (((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x2470) == '\0')) &&
     (param_2 == 1)) {
    FUN_141400260(param_1,5);
  }
  FUN_1405ac8f0(param_1 + 0x23c0,0,4);
  FUN_1405ac8f0(param_1 + 0x23d8,0,4);
  FUN_1405ac8f0(param_1 + 0x23f0,0,4);
  FUN_140a5e640(param_1);
  FUN_140a5ad60(param_1);
  return;
}



// FUNCTION 140a60260 FUN_140a60260 body=245 status=ok
// SIG undefined FUN_140a60260(void)

void FUN_140a60260(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (((param_2 < 2) && (lVar2 = *(longlong *)(param_1 + 0x2388), lVar2 != 0)) &&
     ((*(byte *)(lVar2 + 0x94) & 2) == 0)) {
    iVar1 = *(int *)(lVar2 + 0xc);
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
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar2 + 0x2c50,0);
    }
  }
  FUN_140c3f320(param_1,param_2);
  if (((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x2470) == '\0')) &&
     (param_2 == 1)) {
    FUN_141400260(param_1,5);
  }
  FUN_1405ac8f0(param_1 + 0x23c0,0,4);
  FUN_1405ac8f0(param_1 + 0x23d8,0,4);
  FUN_1405ac8f0(param_1 + 0x23f0,0,4);
  FUN_140a5e640(param_1);
  FUN_140a5ad60(param_1);
  return;
}



// FUNCTION 140a60360 FUN_140a60360 body=408 status=ok
// SIG undefined FUN_140a60360(void)

void FUN_140a60360(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  lVar1 = FUN_140c12480(lVar1);
  if ((lVar1 != 0) && (lVar1 = UNiagaraSystem::GetEffectType(lVar1), lVar1 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x810);
    iVar4 = 0;
    if (0 < *(int *)(lVar1 + 0x70)) {
      lVar6 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x68) + lVar6);
        if ((((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == lVar3)
           ) {
          if (((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar5 != 0) {
              lVar3 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar3;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 0x10;
      } while (iVar4 < *(int *)(lVar1 + 0x70));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x68,0);
    lVar3 = *(longlong *)(param_1 + 0x818);
    iVar4 = 0;
    if (0 < *(int *)(lVar1 + 0x88)) {
      lVar6 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x80) + lVar6);
        if ((((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == lVar3)
           ) {
          if (((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar5 != 0) {
              lVar3 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar3;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 0x10;
      } while (iVar4 < *(int *)(lVar1 + 0x88));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x80,0);
  }
  return;
}



// FUNCTION 140a60500 FUN_140a60500 body=744 status=ok
// SIG undefined FUN_140a60500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a60500(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0 [24];
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar10 = (longlong *)param_1[0x120];
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x5a0))(plVar10,0,0);
  }
  if ((longlong *)param_1[0x122] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x122] + 0x418))();
  }
  if (((*(byte *)(param_1 + 0x1e9) & 2) == 0) &&
     (lVar6 = (**(code **)(*param_1 + 0x148))(param_1), lVar6 != 0)) {
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar4 = FUN_1428cf800(uVar7);
    if (iVar4 != 3) {
      *(undefined1 *)(param_1 + 0x240) = 1;
      FUN_142db7510(param_1 + 0x23e,param_1[0x98]);
      (**(code **)(*param_1 + 0x600))(param_1);
      FUN_14223e980(param_1,2);
    }
  }
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  lVar6 = 0;
  if (iVar4 < (int)DAT_1469e91c4) {
    uVar9 = iVar4 >> 0x1f & 0xffff;
    uVar5 = iVar4 + uVar9;
    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
            (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
  }
  if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
    AActor::SetActorTickEnabled(param_1,0);
    local_30 = (longlong *)0x0;
    local_28 = 0;
    FUN_140a4ca80(param_1,local_f0,0);
    plVar10 = local_f0;
    if (local_30 != (longlong *)0x0) {
      plVar10 = local_30;
    }
    plVar1 = plVar10 + (int)local_28;
    for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
      plVar2 = (longlong *)*plVar10;
      if (plVar2 != (longlong *)0x0) {
        lVar8 = FUN_142a07000();
        lVar6 = plVar2[2];
        if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_1423baf90(plVar2,CONCAT71((int7)((ulonglong)lVar6 >> 8),1));
          (**(code **)(*plVar2 + 0x820))(plVar2);
        }
        else {
          lVar6 = FUN_1429bed90();
          if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            local_f8 = 0;
            FUN_142713d20(plVar2,0);
          }
          else {
            lVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
            if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                lVar6 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) goto LAB_140a60756;
          }
        }
        (**(code **)(*plVar2 + 0x358))(plVar2,0);
      }
LAB_140a60756:
    }
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar6 != 0) {
      if (*(longlong *)(lVar6 + 400) == 0) {
        uVar7 = *(undefined8 *)(lVar6 + 0x3f8);
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
      }
      FUN_142880530(uVar7,param_1 + 0x200);
      param_1[0x200] = 0;
    }
    if (local_30 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140a607f0 FUN_140a607f0 body=349 status=ok
// SIG undefined FUN_140a607f0(void)

void FUN_140a607f0(longlong param_1,longlong param_2,longlong *param_3,undefined1 param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined4 in_EAX;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((param_2 == 0) || (param_3 == (longlong *)0x0)) {
    FUN_142227350(param_1,0,1);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x168);
    if (lVar5 == 0) {
      uVar6 = (undefined4)DAT_1468b5da0;
      uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      fStack_20 = (float)DAT_1468b5da8;
    }
    else {
      fVar2 = *(float *)(lVar5 + 0x210);
      local_28 = *(undefined8 *)(lVar5 + 0x210);
      fStack_20 = *(float *)(lVar5 + 0x218);
      fStack_1c = *(float *)(lVar5 + 0x21c);
      auVar1._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != *(float *)(lVar5 + 0x214));
      auVar1._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != fVar2);
      auVar1._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_20);
      auVar1._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_1c);
      iVar3 = movmskps(in_EAX,auVar1);
      if (iVar3 != 0) {
        *(float *)(lVar5 + 0x250) = fVar2;
        *(float *)(lVar5 + 0x254) = *(float *)(lVar5 + 0x214);
        *(float *)(lVar5 + 600) = fStack_20;
        *(float *)(lVar5 + 0x25c) = fStack_1c;
        puVar4 = (undefined8 *)FQuat::Rotator(&local_28,&local_18);
        *(undefined8 *)(lVar5 + 0x260) = *puVar4;
        *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar4 + 1);
      }
      uVar6 = (undefined4)*(undefined8 *)(lVar5 + 0x260);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
      fStack_20 = (float)*(undefined4 *)(lVar5 + 0x268);
    }
    local_28 = CONCAT44(uVar7,uVar6);
    local_18 = local_28;
    local_10 = fStack_20;
    (**(code **)(*param_3 + 0x7b0))(param_3,&local_18,0);
    *(longlong *)(param_1 + 0x2380) = param_2;
    *(undefined1 *)(param_1 + 0x2390) = param_4;
    FUN_140a72780(param_1);
    FUN_140a72830(param_1);
    FUN_140a733f0(param_1);
    FUN_141400d30(param_1);
    FUN_1414007e0(param_1,param_3);
    lVar5 = FUN_142ceefa0(param_3);
    if (lVar5 != *(longlong *)(param_1 + 0x2408)) {
      thunk_FUN_1409add40(*(undefined8 *)(param_1 + 0x2380));
    }
  }
  return;
}



// FUNCTION 140a60950 FUN_140a60950 body=356 status=ok
// SIG undefined FUN_140a60950(void)

undefined8 FUN_140a60950(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (param_2 != 0) {
    lVar3 = AHeoCon::GetPrivateStaticClass();
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
      uVar7 = FUN_142c98860(param_1 + 0x88,param_2);
      uVar4 = FWeakObjectPtr::Get(param_1 + 0xc0);
      cVar2 = FUN_140a679f0(param_1,uVar7,param_2,uVar4);
      if (cVar2 != '\0') {
        return 1;
      }
      FWeakObjectPtr::operator=(&local_res10,0);
      *(undefined4 *)(param_1 + 0xc0) = local_res10;
      *(undefined4 *)(param_1 + 0xc4) = local_res14;
      lVar3 = *(longlong *)(param_2 + 0x938);
      if (lVar3 != 0) {
        uVar5 = (ulonglong)(*(ulonglong *)(lVar3 + 0x7538) != 0) - 1 & lVar3 + 0x338U |
                *(ulonglong *)(lVar3 + 0x7538);
        uVar6 = (longlong)*(int *)(lVar3 + 0x7540) * 0x390 + uVar5;
        for (; uVar5 != uVar6; uVar5 = uVar5 + 0x390) {
          uVar4 = FWeakObjectPtr::Get(uVar5);
          cVar2 = FUN_140a679f0(param_1,uVar7,param_2,uVar4);
          if (cVar2 != '\0') {
            FWeakObjectPtr::operator=(param_1 + 0xc0,uVar4);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140a60ac0 FUN_140a60ac0 body=422 status=ok
// SIG undefined FUN_140a60ac0(void)

ulonglong FUN_140a60ac0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong in_RAX;
  longlong lVar5;
  longlong lVar6;
  uint7 uVar8;
  ulonglong uVar7;
  char local_48 [16];
  longlong *local_38;
  
  if (param_2 == (longlong *)0x0) {
LAB_140a60c59:
    return in_RAX & 0xffffffffffffff00;
  }
  lVar5 = FUN_1428dfc70();
  iVar2 = *(int *)(lVar5 + 0x90);
  uVar7 = (longlong)iVar2;
  if ((*(int *)(param_2[2] + 0x90) < iVar2) ||
     (uVar7 = *(ulonglong *)(param_2[2] + 0x88),
     *(longlong *)(uVar7 + (longlong)iVar2 * 8) != lVar5 + 0x88)) {
    in_RAX = uVar7 & 0xffffffffffffff00;
  }
  else {
    in_RAX = CONCAT71((int7)(uVar7 >> 8),1);
  }
  if ((char)in_RAX == '\0') goto LAB_140a60c59;
  lVar5 = (**(code **)(*param_2 + 0x678))(param_2);
  in_RAX = 0;
  if (lVar5 == 0) goto LAB_140a60c59;
  lVar6 = FUN_1413f82e0();
  uVar8 = (uint7)((ulonglong)(lVar6 + 0x88) >> 8);
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    in_RAX = (ulonglong)uVar8 << 8;
  }
  else {
    in_RAX = CONCAT71(uVar8,1);
  }
  if (((char)in_RAX == '\0') || (param_3 == (longlong *)0x0)) goto LAB_140a60c59;
  lVar6 = FUN_1428dfc70();
  iVar2 = *(int *)(lVar6 + 0x90);
  uVar7 = (longlong)iVar2;
  if ((*(int *)(param_3[2] + 0x90) < iVar2) ||
     (uVar7 = *(ulonglong *)(param_3[2] + 0x88),
     *(longlong *)(uVar7 + (longlong)iVar2 * 8) != lVar6 + 0x88)) {
    in_RAX = uVar7 & 0xffffffffffffff00;
  }
  else {
    in_RAX = CONCAT71((int7)(uVar7 >> 8),1);
  }
  if ((char)in_RAX == '\0') goto LAB_140a60c59;
  in_RAX = (**(code **)(*param_3 + 0x668))(param_3);
  if ((in_RAX == 0) || (*(char *)(lVar5 + 0xec0) != '\x03')) goto LAB_140a60c59;
  FUN_142de2fd0(local_48);
  plVar3 = *(longlong **)(lVar5 + 0x10e0);
  if (plVar3 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar3 + 0x420))(plVar3,in_RAX,0,local_48);
    if ((cVar4 != '\0') && (local_48[0] != '\0')) {
      uVar7 = 1;
      goto LAB_140a60c0c;
    }
  }
  uVar7 = 0;
LAB_140a60c0c:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 140a60c70 FUN_140a60c70 body=319 status=ok
// SIG undefined FUN_140a60c70(void)

ulonglong FUN_140a60c70(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar6;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 local_28 [32];
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar5 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar5 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar5 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      lVar2 = (**(code **)(*param_2 + 0x678))(param_2);
      in_RAX = 0;
      if (lVar2 != 0) {
        lVar3 = APostProcessVolume::GetPrivateStaticClass();
        uVar6 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          in_RAX = (ulonglong)uVar6 << 8;
        }
        else {
          in_RAX = CONCAT71(uVar6,1);
        }
        if ((char)in_RAX != '\0') {
          uVar4 = FUN_142e1a5a0();
          lVar2 = AGameStateBase::OnRep_GameModeClass(lVar2,uVar4);
          in_RAX = 0;
          if (lVar2 != 0) {
            lVar3 = FUN_142e1a5a0();
            uVar6 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
            if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
              in_RAX = (ulonglong)uVar6 << 8;
            }
            else {
              in_RAX = CONCAT71(uVar6,1);
            }
            if ((char)in_RAX != '\0') {
              FUN_142d62190(lVar2,local_28,*(undefined8 *)(param_1 + 0x88));
              in_RAX = FUN_142d52a00(local_28);
              if ((char)in_RAX != '\0') {
                uVar4 = FUN_142d52a20(local_28);
                uVar5 = FUN_142d639f0(uVar4,*(undefined1 *)(param_1 + 0x90));
                return uVar5;
              }
            }
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a60db0 FUN_140a60db0 body=256 status=ok
// SIG undefined FUN_140a60db0(void)

ulonglong FUN_140a60db0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  ulonglong in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  if (param_2 != (longlong *)0x0) {
    lVar4 = FUN_143025260();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      in_RAX = ATrap::GetActivationShapeComponent(param_2);
    }
    else {
      lVar4 = FUN_1428dfc70();
      iVar2 = *(int *)(lVar4 + 0x90);
      uVar5 = (longlong)iVar2;
      if ((*(int *)(param_2[2] + 0x90) < iVar2) ||
         (uVar5 = *(ulonglong *)(param_2[2] + 0x88),
         *(longlong *)(uVar5 + (longlong)iVar2 * 8) != lVar4 + 0x88)) {
        in_RAX = uVar5 & 0xffffffffffffff00;
      }
      else {
        in_RAX = CONCAT71((int7)(uVar5 >> 8),1);
      }
      if ((char)in_RAX == '\0') goto LAB_140a60e96;
      uVar6 = FUN_14301f8f0();
      in_RAX = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
    }
    if (in_RAX != 0) {
      lVar4 = 0;
      if (*(longlong *)(in_RAX + 0x210) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(in_RAX + 0x210) + 0xb8);
      }
      if (lVar4 != 0) {
        plVar7 = *(longlong **)(param_1 + 0x88);
        in_RAX = (ulonglong)*(int *)(param_1 + 0x90);
        plVar1 = plVar7 + in_RAX;
        for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
          if (*plVar7 == lVar4) {
            return CONCAT71((int7)(int3)((uint)*(int *)(param_1 + 0x90) >> 8),1);
          }
        }
      }
    }
  }
LAB_140a60e96:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a60eb0 FUN_140a60eb0 body=224 status=ok
// SIG undefined FUN_140a60eb0(void)

undefined8 FUN_140a60eb0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if ((*(longlong *)(param_1 + 0x88) != 0) && (param_2 != (longlong *)0x0)) {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      UNavigateHomeCharacterWidget::GetPrivateStaticClass();
      lVar2 = (**(code **)(*param_2 + 0x628))(param_2);
      if (lVar2 != 0) {
        local_28 = *(undefined8 *)(param_1 + 0x88);
        local_18 = 0;
        local_20 = 0;
        if (*(char *)(param_1 + 0x94) != '\0') {
          local_20 = param_3;
        }
        piVar3 = (int *)FUN_142dd6dc0(lVar2,local_38,&local_28);
        if (*(int *)(param_1 + 0x90) <= *piVar3) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140a60f90 FUN_140a60f90 body=188 status=ok
// SIG undefined FUN_140a60f90(void)

bool FUN_140a60f90(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar2 = FUN_1428e7a40();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = *(longlong *)(param_3 + 0x118), lVar2 != 0)) {
      lVar3 = FUN_1413ffd50();
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
        return *(char *)(lVar2 + 0x2390) == *(char *)(param_1 + 0x88);
      }
    }
  }
  return false;
}



// FUNCTION 140a61050 FUN_140a61050 body=105 status=ok
// SIG undefined FUN_140a61050(void)

undefined8 FUN_140a61050(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(param_2 + 0xec0) == '\x03')) {
      cVar2 = FUN_140c491e0(param_2);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140a610c0 FUN_140a610c0 body=219 status=ok
// SIG undefined FUN_140a610c0(void)

ulonglong FUN_140a610c0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1429e18b0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
LAB_140a61170:
                    /* WARNING: Could not recover jumptable at 0x000140a61187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x280))
                        (*(longlong **)(param_1 + 0x88),param_2);
      return uVar3;
    }
    lVar2 = FUN_1429d7ab0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_2 = (longlong *)(**(code **)(*param_2 + 0x670))(param_2);
      if (param_2 != (longlong *)0x0) goto LAB_140a61170;
    }
  }
  return 0;
}



// FUNCTION 140a611a0 FUN_140a611a0 body=705 status=ok
// SIG undefined FUN_140a611a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a611a0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  uint *local_180;
  undefined8 *local_178;
  undefined1 *local_170;
  undefined1 local_168 [4];
  undefined8 local_164;
  float local_15c;
  uint local_150;
  undefined1 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  undefined8 local_138;
  float local_130;
  undefined1 local_128 [12];
  undefined4 local_11c;
  undefined1 local_98 [72];
  longlong local_50;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
  lVar4 = APostProcessVolume::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    plVar6 = (longlong *)param_2[0x99];
  }
  else {
    param_2 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  if ((((lVar3 != 0) && (param_2 != (longlong *)0x0)) && (plVar6 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar6 + 0x558))(), cVar2 != '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146866f68) &&
       (_Init_thread_header(&DAT_146866f68), DAT_146866f68 == -1)) {
      FName::FName(&DAT_146866f60,L"IsMaybeFallingOffACliff",1);
      _Init_thread_footer(&DAT_146866f68);
    }
    local_188 = (undefined4 *)0x0;
    FUN_1422ffb20(local_98,DAT_146866f60,local_168,0);
    lVar5 = FUN_140a05dc0();
    lVar4 = param_2[0x2d];
    local_150 = *(uint *)(lVar5 + 4) | 2;
    local_14c = 0;
    if (lVar4 == 0) {
      local_164 = _DAT_1468b5d90;
      local_15c = DAT_1468b5d98;
    }
    else {
      local_164 = *(undefined8 *)(lVar4 + 0x220);
      local_15c = *(float *)(lVar4 + 0x228);
    }
    local_148 = (undefined4)local_164;
    local_144 = (undefined4)((ulonglong)local_164 >> 0x20);
    local_130 = local_15c;
    local_140 = local_15c - *(float *)(param_1 + 0x88);
    local_138 = local_164;
    _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
    local_170 = local_98;
    local_178 = &local_164;
    local_11c = 0x3f800000;
    local_180 = &local_150;
    local_15c = 0.0;
    local_188 = &DAT_1464aa810;
    local_164 = CONCAT44(*(undefined4 *)(param_1 + 0x8c),3);
    cVar2 = UWorld::SweepSingleByObjectType(lVar3,local_128,&local_138,&local_148);
    if (cVar2 == '\0') {
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_50 != 0) {
        FMemory::Free();
      }
      return 1;
    }
    if (local_30 != 0) {
      FMemory::Free();
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 140a61470 FUN_140a61470 body=113 status=ok
// SIG undefined FUN_140a61470(void)

undefined8 FUN_140a61470(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
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
      plVar4 = *(longlong **)(param_2 + 0x4c8);
      goto LAB_140a614bf;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_140a614bf:
  if (plVar4 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar4 + 0x560))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140a614f0 FUN_140a614f0 body=93 status=ok
// SIG undefined FUN_140a614f0(void)

ulonglong FUN_140a614f0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_1413ffe00();
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
    if (((char)in_RAX != '\0') && (*(char *)(param_2 + 0x2bc0) != '\0')) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a61550 FUN_140a61550 body=549 status=ok
// SIG undefined FUN_140a61550(void)

ulonglong FUN_140a61550(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *in_RAX;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 local_18;
  longlong *local_10;
  
  if (param_2 != (longlong *)0x0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
LAB_140a6172a:
      lVar5 = param_2[0x1b1];
      if (*(char *)((longlong)param_1 + 0x89) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140a61760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(lVar5 + 0x88))();
        return uVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x000140a61751. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(lVar5 + 0x70))(param_2 + 0x1b1,(char)param_1[0x11]);
      return uVar7;
    }
    lVar5 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      lVar5 = FUN_1428e7a40();
      iVar3 = *(int *)(lVar5 + 0x90);
      uVar7 = (longlong)iVar3;
      if ((*(int *)(param_2[2] + 0x90) < iVar3) ||
         (uVar7 = *(ulonglong *)(param_2[2] + 0x88),
         *(longlong *)(uVar7 + (longlong)iVar3 * 8) != lVar5 + 0x88)) {
        in_RAX = (longlong *)(uVar7 & 0xffffffffffffff00);
      }
      else {
        in_RAX = (longlong *)CONCAT71((int7)(uVar7 >> 8),1);
      }
      if ((char)in_RAX == '\0') {
        lVar5 = FUN_142e20fc0();
        iVar3 = *(int *)(lVar5 + 0x90);
        uVar7 = (longlong)iVar3;
        if ((*(int *)(param_2[2] + 0x90) < iVar3) ||
           (uVar7 = *(ulonglong *)(param_2[2] + 0x88),
           *(longlong *)(uVar7 + (longlong)iVar3 * 8) != lVar5 + 0x88)) {
          in_RAX = (longlong *)(uVar7 & 0xffffffffffffff00);
        }
        else {
          in_RAX = (longlong *)CONCAT71((int7)(uVar7 >> 8),1);
        }
        if ((char)in_RAX == '\0') goto LAB_140a61767;
        uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        uVar6 = FUN_142c71720(uVar6);
        FUN_142c6e490(uVar6,&local_18,param_2);
        param_2 = (longlong *)FUN_142c6f130(local_18);
        in_RAX = param_2;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            in_RAX = (longlong *)(**(code **)*local_10)(local_10);
            LOCK();
            piVar2 = (int *)((longlong)local_10 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              in_RAX = (longlong *)(**(code **)(*local_10 + 8))(local_10,1);
            }
          }
        }
      }
      else {
        param_2 = (longlong *)param_2[0x23];
      }
      if (param_2 == (longlong *)0x0) goto LAB_140a61767;
    }
    param_2 = (longlong *)(**(code **)(*param_2 + 0x678))(param_2);
    in_RAX = (longlong *)0x0;
    if (param_2 != (longlong *)0x0) {
      lVar5 = FUN_1413f82e0();
      iVar3 = *(int *)(lVar5 + 0x90);
      uVar7 = (longlong)iVar3;
      if ((*(int *)(param_2[2] + 0x90) < iVar3) ||
         (uVar7 = *(ulonglong *)(param_2[2] + 0x88),
         *(longlong *)(uVar7 + (longlong)iVar3 * 8) != lVar5 + 0x88)) {
        in_RAX = (longlong *)(uVar7 & 0xffffffffffffff00);
      }
      else {
        in_RAX = (longlong *)CONCAT71((int7)(uVar7 >> 8),1);
      }
      if ((char)in_RAX != '\0') goto LAB_140a6172a;
    }
  }
LAB_140a61767:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a61780 FUN_140a61780 body=626 status=ok
// SIG undefined FUN_140a61780(void)

undefined8 FUN_140a61780(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float extraout_XMM0_Da;
  float fVar8;
  float fVar9;
  undefined1 local_48 [64];
  
  fVar9 = *(float *)(param_1 + 0x94);
  if ((*(byte *)(param_1 + 0x90) & 2) == 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      fVar9 = *(float *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x238);
    }
  }
  if (param_2 != (longlong *)0x0) {
    lVar5 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar5 = FUN_14291fb80();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        param_2 = (longlong *)param_2[0x91];
      }
      if (param_2 != (longlong *)0x0) {
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar5 = FUN_1430b3b80();
          if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) {
            uVar6 = FUN_1430a8880();
            plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar6);
            if (plVar7 == (longlong *)0x0) {
              return 0;
            }
            param_2 = (longlong *)(**(code **)(*plVar7 + 0xf0))(plVar7,0);
            if (param_2 == (longlong *)0x0) {
              return 0;
            }
          }
          plVar7 = (longlong *)
                   (**(code **)(param_2[0x8c] + 0x10))(param_2 + 0x8c,(char)param_2[0xd2]);
          if (plVar7 == (longlong *)0x0) {
            return 0;
          }
          if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
            uVar6 = (**(code **)(*plVar7 + 0x478))(plVar7,fVar9);
            return uVar6;
          }
          iVar3 = (**(code **)(*plVar7 + 0x440))(plVar7);
          if ((float)iVar3 <= 0.0) {
            return 0;
          }
          iVar4 = (**(code **)(*plVar7 + 0x448))(plVar7);
          fVar8 = (float)iVar4 / (float)iVar3;
        }
        else {
          uVar6 = FUN_142e1a5a0();
          lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
          if (lVar5 == 0) {
            return 0;
          }
          FUN_142d62190(lVar5,local_48,*(undefined8 *)(param_1 + 0x88));
          cVar2 = FUN_142d52a00(local_48);
          if (cVar2 == '\0') {
            return 0;
          }
          uVar6 = FUN_142d52a20(local_48);
          uVar6 = FArchive::operator<<(uVar6);
          FUN_142d5fea0(uVar6);
          fVar8 = extraout_XMM0_Da;
        }
        if ((fVar8 < fVar9) || (ABS(fVar8 - fVar9) <= 1e-08)) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140a61a00 FUN_140a61a00 body=178 status=ok
// SIG undefined FUN_140a61a00(void)

bool FUN_140a61a00(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x148), lVar2 != 0)) {
      lVar3 = FUN_141424d10();
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
        pcVar4 = (char *)FUN_140cb7100(lVar2);
        if (*pcVar4 == *(char *)(param_1 + 0x89)) {
          if (*(char *)(param_1 + 0x88) != '\0') {
            return pcVar4[1] == *(char *)(param_1 + 0x88);
          }
          return true;
        }
      }
    }
  }
  return false;
}



// FUNCTION 140a61ac0 FUN_140a61ac0 body=234 status=ok
// SIG undefined FUN_140a61ac0(void)

ulonglong FUN_140a61ac0(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint7 uVar5;
  
  if (param_2 != (longlong *)0x0) {
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
    if ((char)in_RAX != '\0') {
      lVar2 = (**(code **)(*param_2 + 0x678))(param_2);
      in_RAX = 0;
      if (lVar2 != 0) {
        lVar4 = FUN_1413f82e0();
        uVar5 = (uint7)((ulonglong)(lVar4 + 0x88) >> 8);
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          in_RAX = (ulonglong)uVar5 << 8;
        }
        else {
          in_RAX = CONCAT71(uVar5,1);
        }
        if (((char)in_RAX != '\0') && (lVar2 = *(longlong *)(lVar2 + 0xe68), lVar2 != 0)) {
          if (*(char *)(param_1 + 0x88) == '\0') {
            return CONCAT71((int7)(in_RAX >> 8),*(int *)(lVar2 + 0x2ac4) != -1);
          }
          if (*(char *)(param_1 + 0x88) == '\x01') {
            return (ulonglong)*(byte *)(lVar2 + 0x2ac8);
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a61bb0 FUN_140a61bb0 body=89 status=ok
// SIG undefined FUN_140a61bb0(void)

ulonglong FUN_140a61bb0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = ALandscapeStreamingProxy::StaticClass();
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
    if ((char)in_RAX != '\0') {
      return (ulonglong)*(byte *)(param_2 + 0x620);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a61c10 FUN_140a61c10 body=536 status=ok
// SIG undefined FUN_140a61c10(void)

undefined8 FUN_140a61c10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (((*(longlong *)(param_1 + 0x98) != 0) && (*(longlong *)(param_1 + 0xa0) != 0)) &&
     (param_2 != (longlong *)0x0)) {
    lVar4 = FUN_14291fb80();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar4 = (**(code **)(*param_2 + 0x688))(param_2), lVar4 != 0)) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar4 = FUN_140a63ba0(lVar4), lVar4 != 0)) {
        lVar5 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          uVar6 = AGFireballProjectile::GetPrivateStaticClass();
          lVar4 = AGameStateBase::OnRep_GameModeClass(lVar4,uVar6);
          if (lVar4 != 0) {
            lVar5 = AGFireballProjectile::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (((bVar2) &&
                (lVar5 = FUN_1409a6100(lVar4,*(undefined8 *)(param_1 + 0x88)), lVar5 != 0)) &&
               (cVar3 = FUN_1409ae0e0(lVar4,*(undefined8 *)(param_1 + 0x88),
                                      *(undefined8 *)(param_1 + 0xa0),
                                      *(undefined8 *)(param_1 + 0x98)), cVar3 != '\0')) {
              puVar7 = *(undefined8 **)(param_1 + 0xa8);
              puVar1 = puVar7 + *(int *)(param_1 + 0xb0);
              for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
                cVar3 = FUN_1409ae0e0(lVar4,*(undefined8 *)(param_1 + 0x88),*puVar7,
                                      *(undefined8 *)(param_1 + 0x90));
                if (cVar3 != '\0') {
                  return 1;
                }
              }
              if ((*(char *)(param_1 + 0xb8) != '\0') &&
                 (lVar4 = FUN_1409a72d0(lVar4,*(undefined8 *)(param_1 + 0x88),
                                        *(undefined8 *)(param_1 + 0x90)), lVar4 == 0)) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140a61e30 FUN_140a61e30 body=161 status=ok
// SIG undefined FUN_140a61e30(void)

ulonglong FUN_140a61e30(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_1413f82e0();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if (((char)in_RAX != '\0') && (lVar2 = *(longlong *)(param_2 + 0xe90), lVar2 != 0)) {
      lVar3 = FUN_141477fa0();
      iVar1 = *(int *)(lVar3 + 0x90);
      uVar4 = (longlong)iVar1;
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
         (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
         *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
        in_RAX = uVar4 & 0xffffffffffffff00;
      }
      else {
        in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
      }
      if ((char)in_RAX != '\0') {
        uVar4 = FUN_140eb27a0(lVar2,0);
        return uVar4;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a61ee0 FUN_140a61ee0 body=100 status=ok
// SIG undefined FUN_140a61ee0(void)

bool FUN_140a61ee0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_141220430(param_2);
  if (lVar3 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = FUN_140b81310(lVar3);
      return iVar2 == 2;
    }
  }
  return false;
}



// FUNCTION 140a61f50 FUN_140a61f50 body=296 status=ok
// SIG undefined FUN_140a61f50(void)

ulonglong FUN_140a61f50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    uVar2 = FUN_140b60d90(param_2);
    return uVar2;
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    iVar1 = FUN_140b5d0c0(param_2);
    fVar4 = (float)iVar1;
    fVar3 = (float)FUN_142c98860(param_1 + 0x90,param_2);
    switch(*(undefined1 *)(param_1 + 0x89)) {
    case 0:
      if (fVar4 == fVar3) {
        return 1;
      }
      break;
    case 1:
      if (fVar4 != fVar3) {
        return 1;
      }
      break;
    case 2:
      return (ulonglong)(fVar4 < fVar3);
    case 3:
      return (ulonglong)(fVar4 <= fVar3);
    case 4:
      return (ulonglong)(fVar3 < fVar4);
    case 5:
      return (ulonglong)(fVar3 <= fVar4);
    }
    return 0;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a62090 FUN_140a62090 body=397 status=ok
// SIG undefined FUN_140a62090(void)

undefined8 FUN_140a62090(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
LAB_140a620db:
    param_2 = 0;
  }
  else {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140a620db;
  }
  if (param_3 != 0) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a6211a;
  }
  param_3 = 0;
LAB_140a6211a:
  if (((param_2 != 0) && (param_3 != 0)) && (*(longlong *)(param_3 + 0x938) != 0)) {
    lVar2 = FUN_142dcd660(*(longlong *)(param_3 + 0x938),0);
    if ((lVar2 == 0) || (param_2 != lVar2)) {
      return 1;
    }
    uVar3 = AGFireballProjectile::GetPrivateStaticClass();
    lVar2 = AGameStateBase::OnRep_GameModeClass(param_2,uVar3);
    if (lVar2 != 0) {
      lVar4 = AGFireballProjectile::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar3 = USkeletalBodySetup::GetPrivateStaticClass();
        lVar2 = FUN_1409a6100(lVar2,uVar3);
        if (lVar2 != 0) {
          lVar4 = USkeletalBodySetup::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (((bVar1) && (*(longlong *)(lVar2 + 0x270) != 0)) &&
             (lVar2 = FUN_1409d4d70(), lVar2 == param_3)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140a62220 FUN_140a62220 body=242 status=ok
// SIG undefined FUN_140a62220(void)

ulonglong FUN_140a62220(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint7 uVar5;
  
  if (param_2 != (longlong *)0x0) {
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
    if ((char)in_RAX != '\0') {
      lVar2 = (**(code **)(*param_2 + 0x690))(param_2);
      in_RAX = 0;
      if (lVar2 != 0) {
        lVar4 = FUN_14148cad0();
        uVar5 = (uint7)((ulonglong)(lVar4 + 0x88) >> 8);
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          in_RAX = (ulonglong)uVar5 << 8;
        }
        else {
          in_RAX = CONCAT71(uVar5,1);
        }
        if ((char)in_RAX != '\0') {
          lVar2 = FUN_141227a00(lVar2,0);
          in_RAX = 0;
          if (lVar2 != 0) {
            lVar4 = FUN_1413f82e0();
            uVar5 = (uint7)((ulonglong)(lVar4 + 0x88) >> 8);
            if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              in_RAX = (ulonglong)uVar5 << 8;
            }
            else {
              in_RAX = CONCAT71(uVar5,1);
            }
            if ((char)in_RAX != '\0') {
              return CONCAT71((int7)(in_RAX >> 8),*(char *)(lVar2 + 0x13c1) == '\0');
            }
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a62320 FUN_140a62320 body=453 status=ok
// SIG undefined FUN_140a62320(void)

void FUN_140a62320(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1c);
  if (cVar2 != '\0') {
    if (*(int *)(param_3 + 0x108) == 0) {
      lVar3 = FWeakObjectPtr::Get(param_1 + 0x1c);
      if (((*(byte *)(lVar3 + 0x420) & 1) == 0) || ((*(byte *)(lVar3 + 0x420) & 2) != 0)) {
        _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
        lVar3 = *(longlong *)(param_1 + 8);
        *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) & 0xfc;
        *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) & 0xfffffffe;
        *(undefined4 *)(lVar3 + 0x24) = local_94;
        *(undefined4 *)(lVar3 + 0x30) = local_88;
        *(undefined8 *)(lVar3 + 0x40) = local_78;
        *(undefined8 *)(lVar3 + 0x4c) = local_6c;
        *(undefined8 *)(lVar3 + 0x58) = local_60;
        *(undefined8 *)(lVar3 + 100) = local_54;
        *(undefined8 *)(lVar3 + 0x70) = local_48;
        *(undefined8 *)(lVar3 + 0x34) = local_84;
        *(undefined4 *)(lVar3 + 0x3c) = local_7c;
        *(undefined4 *)(lVar3 + 0x48) = local_70;
        *(undefined4 *)(lVar3 + 0x54) = local_64;
        *(undefined4 *)(lVar3 + 0x60) = local_58;
        *(undefined4 *)(lVar3 + 0x6c) = local_4c;
        *(undefined4 *)(lVar3 + 0x78) = local_40;
        *(undefined4 *)(lVar3 + 0x80) = local_38;
        *(undefined4 *)(lVar3 + 0x7c) = local_3c;
        *(undefined4 *)(lVar3 + 0x2c) = 0x3f800000;
        *(undefined4 *)(lVar3 + 0x84) = local_34;
        *(undefined4 *)(lVar3 + 0x88) = local_30;
        *(undefined4 *)(lVar3 + 0x8c) = local_2c;
        *(undefined4 *)(lVar3 + 0x90) = local_28;
        *(undefined4 *)(lVar3 + 0x94) = local_24;
        *(undefined4 *)(lVar3 + 0x98) = local_20;
        *(undefined8 *)(lVar3 + 0xa0) = local_18;
        *(undefined8 *)(lVar3 + 0xa8) = local_10;
      }
      else {
        lVar3 = FWeakObjectPtr::Get(param_1 + 0x1c);
        FUN_140729f20(*(longlong *)(param_1 + 8) + 0x20,lVar3 + 0x420);
        lVar3 = *(longlong *)(param_1 + 8);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        *(undefined8 *)(lVar3 + 0x34) = *(undefined8 *)(param_1 + 0x10);
        *(undefined4 *)(lVar3 + 0x3c) = uVar1;
        lVar3 = *(longlong *)(param_1 + 8);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(param_1 + 0x10);
        *(undefined4 *)(lVar3 + 0x48) = uVar1;
      }
    }
    else {
      FUN_140729f20(*(longlong *)(param_1 + 8) + 0x20,*(undefined8 *)(param_3 + 0x100));
    }
  }
  return;
}



// FUNCTION 140a624f0 FUN_140a624f0 body=68 status=ok
// SIG undefined FUN_140a624f0(void)

void FUN_140a624f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140a62531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 140a62540 Execute body=85 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,TTypeWrapper<void>___cdecl(UAudioComponent_const_*,float)>
     ::Execute(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140a62592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 140a625a0 FUN_140a625a0 body=101 status=ok
// SIG undefined FUN_140a625a0(void)

void FUN_140a625a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140a62602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140a62610 FUN_140a62610 body=125 status=ok
// SIG undefined FUN_140a62610(void)

void FUN_140a62610(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140a6268a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140a62690 FUN_140a62690 body=455 status=ok
// SIG undefined FUN_140a62690(void)

undefined8 FUN_140a62690(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1c);
  if (cVar2 != '\0') {
    if (*(int *)(param_3 + 0x108) == 0) {
      lVar3 = FWeakObjectPtr::Get(param_1 + 0x1c);
      if (((*(byte *)(lVar3 + 0x420) & 1) == 0) || ((*(byte *)(lVar3 + 0x420) & 2) != 0)) {
        _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
        lVar3 = *(longlong *)(param_1 + 8);
        *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) & 0xfc;
        *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) & 0xfffffffe;
        *(undefined4 *)(lVar3 + 0x24) = local_94;
        *(undefined4 *)(lVar3 + 0x30) = local_88;
        *(undefined8 *)(lVar3 + 0x40) = local_78;
        *(undefined8 *)(lVar3 + 0x4c) = local_6c;
        *(undefined8 *)(lVar3 + 0x58) = local_60;
        *(undefined8 *)(lVar3 + 100) = local_54;
        *(undefined8 *)(lVar3 + 0x70) = local_48;
        *(undefined8 *)(lVar3 + 0x34) = local_84;
        *(undefined4 *)(lVar3 + 0x3c) = local_7c;
        *(undefined4 *)(lVar3 + 0x48) = local_70;
        *(undefined4 *)(lVar3 + 0x54) = local_64;
        *(undefined4 *)(lVar3 + 0x60) = local_58;
        *(undefined4 *)(lVar3 + 0x6c) = local_4c;
        *(undefined4 *)(lVar3 + 0x78) = local_40;
        *(undefined4 *)(lVar3 + 0x80) = local_38;
        *(undefined4 *)(lVar3 + 0x7c) = local_3c;
        *(undefined4 *)(lVar3 + 0x2c) = 0x3f800000;
        *(undefined4 *)(lVar3 + 0x84) = local_34;
        *(undefined4 *)(lVar3 + 0x88) = local_30;
        *(undefined4 *)(lVar3 + 0x8c) = local_2c;
        *(undefined4 *)(lVar3 + 0x90) = local_28;
        *(undefined4 *)(lVar3 + 0x94) = local_24;
        *(undefined4 *)(lVar3 + 0x98) = local_20;
        *(undefined8 *)(lVar3 + 0xa0) = local_18;
        *(undefined8 *)(lVar3 + 0xa8) = local_10;
      }
      else {
        lVar3 = FWeakObjectPtr::Get(param_1 + 0x1c);
        FUN_140729f20(*(longlong *)(param_1 + 8) + 0x20,lVar3 + 0x420);
        lVar3 = *(longlong *)(param_1 + 8);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        *(undefined8 *)(lVar3 + 0x34) = *(undefined8 *)(param_1 + 0x10);
        *(undefined4 *)(lVar3 + 0x3c) = uVar1;
        lVar3 = *(longlong *)(param_1 + 8);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(param_1 + 0x10);
        *(undefined4 *)(lVar3 + 0x48) = uVar1;
      }
    }
    else {
      FUN_140729f20(*(longlong *)(param_1 + 8) + 0x20,*(undefined8 *)(param_3 + 0x100));
    }
  }
  return 1;
}



// FUNCTION 140a62860 FUN_140a62860 body=95 status=ok
// SIG undefined FUN_140a62860(void)

undefined1 FUN_140a62860(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,*(undefined4 *)(param_1 + 0x18));
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140a628c0 ExecuteIfSafe body=111 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float)>::
     ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3);
  }
  return lVar1 != 0;
}



// FUNCTION 140a62930 FUN_140a62930 body=127 status=ok
// SIG undefined FUN_140a62930(void)

bool FUN_140a62930(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 140a629b0 FUN_140a629b0 body=160 status=ok
// SIG undefined FUN_140a629b0(void)

bool FUN_140a629b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,param_5,param_6,
               param_7);
  }
  return lVar1 != 0;
}



// FUNCTION 140a62a50 FUN_140a62a50 body=341 status=ok
// SIG undefined FUN_140a62a50(void)

void FUN_140a62a50(longlong *param_1,undefined1 param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if (*(char *)((longlong)param_1 + 0x2413) != '\0') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x2391) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x2413) = 1;
  lVar4 = (**(code **)(*param_1 + 0x788))(param_1,&local_38);
  uVar6 = *(undefined4 *)(lVar4 + 4);
  (**(code **)(*param_1 + 0xca0))(param_1,uVar6);
  cVar3 = (**(code **)(*param_1 + 0x778))(param_1);
  if (cVar3 == '\0') {
    FUN_141400070(param_1,uVar6);
  }
  lVar4 = param_1[0x470];
  if (lVar4 != 0) {
    local_38 = *(undefined4 *)(lVar4 + 0x1d8);
    uStack_34 = *(undefined4 *)(lVar4 + 0x1dc);
    uStack_30 = *(undefined4 *)(lVar4 + 0x1e0);
    uStack_2c = *(undefined4 *)(lVar4 + 0x1e4);
    local_28 = *(undefined8 *)(lVar4 + 0x1e8);
    cVar3 = FUN_142d52a00(&local_38);
    if (cVar3 != '\0') {
      uVar5 = FUN_142d52a20(&local_38);
      uVar5 = FArchive::operator<<(uVar5);
      uVar6 = FUN_142d5fed0(uVar5);
      *(undefined4 *)((longlong)param_1 + 0x2394) = uVar6;
    }
    FUN_1409bce70(param_1[0x470]);
  }
  bVar1 = *(byte *)((longlong)param_1 + 0x2391);
  if (bVar1 != 0) {
    if (bVar1 < 4) {
      FUN_1414008a0(param_1,0);
      FUN_140a68e70(param_1);
      return;
    }
    if (bVar1 != 5) goto LAB_140a62b7b;
  }
  if ((param_1[0x474] != 0) &&
     (plVar2 = *(longlong **)(param_1[0x474] + 0x4d8), plVar2 != (longlong *)0x0)) {
    FUN_142ce8a30(plVar2,1);
    (**(code **)(*plVar2 + 0x290))(plVar2,0,0);
  }
  FUN_1414008a0(param_1,1);
LAB_140a62b7b:
  FUN_140a68e70(param_1);
  return;
}



// FUNCTION 140a62bb0 FUN_140a62bb0 body=662 status=ok
// SIG undefined FUN_140a62bb0(void)

void FUN_140a62bb0(longlong *param_1,float param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 *puVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined8 local_78;
  float local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [84];
  
  cVar4 = (**(code **)(*param_1 + 0xbf0))();
  if (cVar4 == '\0') {
    return;
  }
  cVar4 = FUN_140a68900(param_1);
  if (cVar4 == '\0') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x2e94) = 1;
  cVar4 = FUN_142cf3980(param_1);
  if (cVar4 == '\0') goto LAB_140a62de1;
  puVar1 = (undefined8 *)((longlong)param_1 + 0x1824);
  puVar5 = (undefined8 *)FUN_140a5d680(param_1,&local_68,puVar1);
  *puVar1 = *puVar5;
  *(undefined4 *)((longlong)param_1 + 0x182c) = *(undefined4 *)(puVar5 + 1);
  if (*(float *)(param_1 + 0x316) != 0.0) goto LAB_140a62de1;
  pfVar6 = (float *)FUN_140a5c8b0(param_1,&local_68);
  fVar8 = pfVar6[1];
  fVar12 = *pfVar6;
  fVar9 = fVar12 * fVar12 + fVar8 * fVar8;
  if (fVar9 == 1.0) {
    if (pfVar6[2] == 0.0) {
      local_78 = *(undefined8 *)pfVar6;
      local_70 = pfVar6[2];
    }
    else {
LAB_140a62d37:
      local_78 = CONCAT44(fVar8,fVar12);
      local_70 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar9) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar11._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      fVar12 = fVar12 * fVar10;
      fVar8 = fVar8 * fVar10;
      goto LAB_140a62d37;
    }
    local_70 = DAT_1468b5d98;
    local_78 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  lVar7 = FVector::Rotation(&local_78,&local_68);
  uVar2 = *(undefined4 *)(lVar7 + 4);
  lVar7 = FVector::Rotation(puVar1,&local_68);
  uVar3 = *(undefined4 *)(lVar7 + 4);
  local_68 = 0;
  fVar8 = (float)FUN_142c98860(param_1[0x2ef] + 0x548,param_1[0x23]);
  local_64 = FMath::FixedTurn(uVar3,uVar2,fVar8 * param_2);
  local_60 = 0;
  puVar5 = (undefined8 *)FRotator::Vector(&local_68,local_5c);
  *puVar1 = *puVar5;
  *(undefined4 *)((longlong)param_1 + 0x182c) = *(undefined4 *)(puVar5 + 1);
LAB_140a62de1:
  fVar8 = (float)FUN_142cb6c60(param_1 + 0x2ee,(int)param_1[0x2f1]);
  *(ulonglong *)((longlong)param_1 + 0x1854) =
       CONCAT44(fVar8 * *(float *)(param_1 + 0x305),fVar8 * *(float *)((longlong)param_1 + 0x1824));
  *(float *)((longlong)param_1 + 0x185c) = fVar8 * *(float *)((longlong)param_1 + 0x182c);
  return;
}



// FUNCTION 140a62e50 FUN_140a62e50 body=326 status=ok
// SIG undefined FUN_140a62e50(void)

void FUN_140a62e50(longlong *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 local_48 [8];
  float local_40;
  
  cVar3 = (**(code **)(*param_1 + 0xbf0))();
  if (cVar3 != '\0') {
    cVar3 = FUN_140a68900(param_1);
    if (cVar3 != '\0') {
      fVar1 = *(float *)((longlong)param_1 + 0x18c);
      if (((fVar1 != 0.0) || (*(float *)(param_1 + 0x32) != 0.0)) ||
         (*(float *)((longlong)param_1 + 0x194) != 0.0)) {
        local_40 = *(float *)((longlong)param_1 + 0x194);
        fVar2 = *(float *)(param_1 + 0x32);
        fVar5 = fVar1 * fVar1 + fVar2 * fVar2 + local_40 * local_40;
        auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar6 = auVar7._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        local_40 = local_40 * fVar6;
        *param_2 = CONCAT44(fVar2 * fVar6,fVar1 * fVar6);
        *(float *)(param_2 + 1) = local_40;
      }
      puVar4 = (undefined8 *)FUN_140a5d680(param_1,local_48,param_2);
      *param_2 = *puVar4;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar4 + 1);
    }
  }
  return;
}



// FUNCTION 140a62fa0 FUN_140a62fa0 body=842 status=ok
// SIG undefined FUN_140a62fa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140a62fa0(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_d8 [32];
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  uint local_98 [2];
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_78;
  char local_74;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar17 = 0;
  local_b0 = 0;
  lVar8 = (**(code **)(*param_1 + 0x148))();
  if (lVar8 != 0) {
    local_b8 = -1;
    local_a8 = FUN_1412fa9e0();
    if (local_a8 != 0) {
      lVar9 = FUN_1412fa9e0();
      lVar10 = local_a8;
      do {
        if (lVar10 == lVar9) goto LAB_140a63020;
        lVar10 = *(longlong *)(lVar10 + 0x30);
      } while (lVar10 != 0);
    }
    local_a8 = 0;
LAB_140a63020:
    local_98[0] = 5;
    local_40 = '\0';
    local_a0 = lVar8;
    FUN_14044bc80(&local_90,&local_a0,&local_a8);
    FUN_14045a130(local_98);
    iVar15 = -1;
    if (local_74 == '\0') {
LAB_140a63077:
      lVar17 = local_90;
      if ((local_68 != 0) && ((iVar15 == -1 || (*(int *)(local_68 + 0x4f8) < iVar15)))) {
        local_b8 = *(int *)(local_68 + 0x4f8);
        local_b0 = local_68;
      }
      iVar16 = local_78 + 1;
      if (iVar16 < local_58 + local_80) {
        lVar8 = (longlong)iVar16 * 8;
        iVar15 = local_58;
        iVar13 = local_80;
        do {
          if (iVar16 < iVar13) {
            lVar10 = *(longlong *)(local_88 + lVar8);
          }
          else {
            lVar10 = *(longlong *)(local_60 + (longlong)(iVar16 - iVar13) * 8);
          }
          local_70 = local_70 + 1;
          if ((lVar10 != 0) &&
             (lVar9 = AActor::GetLevel(lVar10), iVar15 = local_58, iVar13 = local_80, lVar9 != 0)) {
            if ((local_98[0] & 1) != 0) {
              iVar1 = *(int *)(lVar10 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar14 = iVar1 >> 0x1f & 0xffff;
                uVar7 = iVar1 + uVar14;
                lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                         (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
              }
              else {
                lVar11 = 0;
              }
              if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_140a63236;
            }
            if (((local_98[0] >> 1 & 1) == 0) ||
               (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar10), iVar15 = local_58,
               iVar13 = local_80, cVar6 != '\0')) {
              if ((local_98[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                piVar2 = *(int **)(lVar9 + 600);
                if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                    (piVar12 = (int *)UWorld::GetActiveLevelCollection(), piVar12 == (int *)0x0)) ||
                   (piVar2 == piVar12)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((bVar3) || (bVar3 = false, bVar4)) {
                  bVar3 = true;
                }
                iVar15 = local_58;
                iVar13 = local_80;
                if ((!bVar5) || (!bVar3)) goto LAB_140a63236;
              }
              lVar9 = ULevel::GetWorld(lVar9);
              iVar15 = local_58;
              iVar13 = local_80;
              if (lVar9 == lVar17) {
                lVar9 = AActor::GetLevel(lVar10);
                if (lVar9 == *(longlong *)(lVar17 + 0x30)) goto LAB_140a632d0;
                lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                iVar15 = local_58;
                iVar13 = local_80;
                if (!bVar5) goto LAB_140a632d0;
              }
            }
          }
LAB_140a63236:
          iVar16 = iVar16 + 1;
          lVar8 = lVar8 + 8;
          if (iVar15 + iVar13 <= iVar16) break;
        } while( true );
      }
      local_68 = 0;
      local_74 = '\x01';
      lVar17 = local_b0;
    }
LAB_140a63272:
    if (local_40 != '\0') {
      local_40 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
    }
  }
  return lVar17;
LAB_140a632d0:
  lVar17 = local_b0;
  iVar15 = local_b8;
  local_78 = iVar16;
  local_68 = lVar10;
  if (local_74 != '\0') goto LAB_140a63272;
  goto LAB_140a63077;
}



// FUNCTION 140a632f0 FUN_140a632f0 body=506 status=ok
// SIG undefined FUN_140a632f0(void)

void FUN_140a632f0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  uint local_58;
  undefined8 local_50;
  longlong *local_48;
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined4 uStack_30;
  int iStack_2c;
  uint uStack_28;
  
  plVar10 = (longlong *)(param_1 + 0x560);
  iVar1 = *(int *)(param_1 + 0x588);
  puStack_38 = (uint *)(param_1 + 0x570);
  uVar9 = 0;
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x580);
    if (*(uint **)(param_1 + 0x580) == (uint *)0x0) {
      puVar12 = puStack_38;
    }
    uVar2 = *puVar12;
    uVar7 = uVar9;
    uVar11 = uVar9;
    while (uVar2 == 0) {
      iVar5 = (int)uVar7;
      uStack_60 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uStack_60;
      local_78 = iVar5 + 1;
      uVar7 = (ulonglong)local_78;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140a633bf;
      uVar2 = puVar12[(longlong)iVar5 + 1];
    }
    uStack_74 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_68._4_4_ = (uStack_60 - iVar5) + 0x1f;
    if (iVar1 < local_68._4_4_) {
LAB_140a633bf:
      local_68._4_4_ = iVar1;
    }
  }
  uStack_30 = 0xffffffff;
  iStack_2c = local_68._4_4_;
  uStack_28 = uStack_60;
  uStack_40 = local_78;
  uStack_3c = uStack_74;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58 = uStack_60;
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  bVar3 = local_68._4_4_ < iVar1;
  local_48 = plVar10;
  local_68 = puStack_38;
  if (bVar3) {
    do {
      lVar6 = (longlong)iStack_5c;
      cVar4 = FWeakObjectPtr::IsValid(lVar6 * 0x14 + *plVar10);
      if (cVar4 != '\0') {
        local_50 = FWeakObjectPtr::Get(*plVar10 + lVar6 * 0x14);
        uVar7 = uVar9;
        if (*(int *)(param_2 + 8) != 0) {
          plVar8 = (longlong *)param_2[6];
          if ((longlong *)param_2[6] == (longlong *)0x0) {
            plVar8 = param_2 + 2;
          }
          if (plVar8 != (longlong *)0x0) {
            uVar7 = (**(code **)(*plVar8 + 8))();
          }
        }
        (*(code *)*param_2)(uVar7,&local_50);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar10 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar10 = param_2 + 2;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a634f0 ForcePositionUpdate body=83 status=ok
// SIG undefined ForcePositionUpdate(void)

void INetworkPredictionInterface::ForcePositionUpdate(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x21,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::ForcePositionUpdate");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x21,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::ForcePositionUpdate");
  return;
}



// FUNCTION 140a63550 FUN_140a63550 body=55 status=ok
// SIG undefined FUN_140a63550(void)

void FUN_140a63550(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140a67e20(param_1 + -0x218);
  if (cVar1 == '\0') {
    FUN_14233c110(param_1,param_2);
  }
  return;
}



// FUNCTION 140a63590 FUN_140a63590 body=102 status=ok
// SIG undefined FUN_140a63590(void)

ulonglong FUN_140a63590(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if ((int)(uint)param_2 < *(int *)(param_1 + 0x16c0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x16b8) + (ulonglong)param_2 * 8);
    if (lVar1 != 0) {
      return (ulonglong)*(uint *)(lVar1 + 0x8a8);
    }
  }
  lVar1 = FUN_140e7e760(param_1 + 0x790);
  if (lVar1 != 0) {
    uVar2 = FUN_142d52a20(lVar1);
    uVar2 = FArchive::operator<<(uVar2);
    uVar3 = FUN_142d5fed0(uVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140a63600 FUN_140a63600 body=215 status=ok
// SIG undefined FUN_140a63600(void)

void FUN_140a63600(longlong param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  if (((int)((uint)param_2 & 0xff) < *(int *)(param_1 + 0x16c0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x16b8) + (param_2 & 0xff) * 8), lVar1 != 0)) {
    FUN_140778c50(lVar1,param_3,param_4,param_5);
    return;
  }
  lVar1 = FUN_140e7e760(param_1 + 0x790);
  if (lVar1 != 0) {
    uVar2 = FUN_142d52a20(lVar1);
    lVar3 = FArchive::operator<<(uVar2);
    *param_3 = *(undefined4 *)(lVar3 + 0x14);
    uVar2 = FUN_142d52a20(lVar1);
    lVar3 = FArchive::operator<<(uVar2);
    *param_4 = *(undefined4 *)(lVar3 + 0x20);
    uVar2 = FUN_142d52a20(lVar1);
    uVar2 = FArchive::operator<<(uVar2);
    uVar4 = FUN_142d5fed0(uVar2);
    *param_5 = uVar4;
  }
  return;
}



// FUNCTION 140a636e0 FUN_140a636e0 body=100 status=ok
// SIG undefined FUN_140a636e0(void)

void FUN_140a636e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x688))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140a63721. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x648))(plVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140a6373d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x610))(param_1,param_2,param_3);
  return;
}



// FUNCTION 140a63750 FUN_140a63750 body=95 status=ok
// SIG undefined FUN_140a63750(void)

void FUN_140a63750(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x688))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140a63791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x610))(plVar1);
    return;
  }
  FUN_14222dac0(param_1,param_2,param_3);
  return;
}



// FUNCTION 140a637b0 FUN_140a637b0 body=288 status=ok
// SIG undefined FUN_140a637b0(void)

undefined8
FUN_140a637b0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 local_58;
  undefined4 local_50;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_38 [48];
  
  local_58 = *param_3;
  local_50 = *(undefined4 *)(param_3 + 1);
  if ((((char)param_1[0x575] == '\x04') && (param_1[0x26b] != 0)) && (param_1[0x26c] != 0)) {
    plVar1 = (longlong *)param_1[0x26c];
    fVar4 = (float)(**(code **)(*param_1 + 0x3f8))();
    pfVar2 = (float *)(**(code **)(*plVar1 + 0x10))(plVar1,local_38);
    local_40 = fVar4 * pfVar2[2];
    local_44 = fVar4 * pfVar2[1];
    local_48 = fVar4 * *pfVar2;
    puVar3 = (undefined8 *)
             (**(code **)(*param_1 + 0x678))(param_1,local_38,param_3,&local_48,param_4);
    local_58 = *puVar3;
    local_50 = *(undefined4 *)(puVar3 + 1);
  }
  FUN_142cec450(param_1,param_2,&local_58,param_4);
  return param_2;
}



// FUNCTION 140a638d0 FUN_140a638d0 body=292 status=ok
// SIG undefined FUN_140a638d0(void)

float * FUN_140a638d0(longlong param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 param_5)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  undefined1 local_48 [64];
  
  fVar8 = 1.0;
  if (((*(longlong **)(param_1 + 0x220) != (longlong *)0x0) &&
      (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x220) + 0x780))(), cVar4 != '\0')) &&
     (lVar5 = AActor::GetWorldSettings(*(undefined8 *)(param_1 + 0x220)), lVar5 != 0)) {
    lVar5 = AActor::GetWorldSettings(*(undefined8 *)(param_1 + 0x220));
    lVar5 = *(longlong *)(lVar5 + 0x658);
    if (lVar5 != 0) {
      lVar6 = FUN_141437aa0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        fVar8 = *(float *)(lVar5 + 0x40);
      }
    }
  }
  pfVar7 = (float *)FUN_142cec690(param_1,local_48,param_3,param_4,param_5);
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  param_2[2] = fVar8 * pfVar7[2];
  *param_2 = fVar8 * fVar1;
  param_2[1] = fVar8 * fVar2;
  return param_2;
}



// FUNCTION 140a63a00 FUN_140a63a00 body=129 status=ok
// SIG undefined FUN_140a63a00(void)

undefined8 * FUN_140a63a00(longlong param_1,undefined8 *param_2,char param_3)

{
  if (*(float *)(param_1 + 0x194) <= 0.0 && *(float *)(param_1 + 0x194) != 0.0) {
    if ((*(float *)(param_1 + 0x2908) * *(float *)(param_1 + 0x2908) * 0.98 <=
         *(float *)(param_1 + 0x18c) * *(float *)(param_1 + 0x18c) +
         *(float *)(param_1 + 400) * *(float *)(param_1 + 400) +
         *(float *)(param_1 + 0x194) * *(float *)(param_1 + 0x194)) && (param_3 == '\x02')) {
      *param_2 = *(undefined8 *)(param_1 + 0x2918);
      return param_2;
    }
  }
  FUN_142cec890();
  return param_2;
}



// FUNCTION 140a63a90 FUN_140a63a90 body=208 status=ok
// SIG undefined FUN_140a63a90(void)

longlong FUN_140a63a90(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  plVar2 = (longlong *)FString::FString(local_38,param_1 + 0x130);
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_48 = *plVar2;
  *plVar2 = 0;
  local_40 = (undefined4)plVar2[1];
  local_3c = *(undefined4 *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  FUN_1417978e0(&local_28,&local_48);
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  lVar3 = FSoftObjectPath::TryLoad(&local_28);
  if (lVar3 != 0) {
    lVar4 = FUN_1412faf40();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a63b43;
  }
  lVar3 = 0;
LAB_140a63b43:
  if (local_20 != 0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 140a63ba0 FUN_140a63ba0 body=8 status=ok
// SIG undefined FUN_140a63ba0(void)

undefined8 FUN_140a63ba0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



// FUNCTION 140a63bf0 FUN_140a63bf0 body=126 status=ok
// SIG undefined FUN_140a63bf0(void)

longlong FUN_140a63bf0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*param_1 != 0) && (param_1[1] != 0)) && (param_3 != 0)) {
    lVar1 = FUN_1405ab470(*(undefined8 *)(*param_1 + 0x118),param_4,1,param_3);
    if (lVar1 != 0) {
      if (*(longlong *)(param_2 + 8) != 0) {
        lVar2 = FUN_142db9220(*(undefined1 *)(*(longlong *)(param_2 + 8) + 0x50));
        if (lVar2 != 0) {
          FUN_1405aaf50(lVar1,lVar2);
        }
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140a63c70 FUN_140a63c70 body=554 status=ok
// SIG undefined FUN_140a63c70(void)

void FUN_140a63c70(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong local_38 [2];
  
  uVar11 = 0;
  if ((param_3 != 0) || (param_3 = *(longlong *)(param_1 + 0x698), param_3 != 0)) {
    uVar13 = uVar11;
    if (*(longlong *)(param_3 + 0x508) != 0) {
      uVar13 = *(ulonglong *)(*(longlong *)(param_3 + 0x508) + 0x2c70);
    }
    lVar2 = *(longlong *)(param_3 + 0x4f0);
    if ((uVar13 != 0) && (lVar2 != 0)) {
      puVar6 = (ulonglong *)FUN_140a63ea0(lVar2);
      plVar12 = (longlong *)*puVar6;
      uVar15 = (longlong)(int)puVar6[1] & 0x1fffffffffffffff;
      if (plVar12 + (int)puVar6[1] < plVar12) {
        uVar15 = uVar11;
      }
      uVar10 = uVar11;
      if (uVar15 != 0) {
        do {
          lVar3 = *plVar12;
          if ((lVar3 != 0) && (*(char *)(lVar3 + 0x60) != '\0')) {
            plVar14 = (longlong *)*param_2;
            iVar1 = (int)param_2[1];
            for (plVar7 = plVar14; plVar7 != plVar14 + iVar1; plVar7 = plVar7 + 1) {
              if (*plVar7 == lVar3) {
                if ((int)((longlong)plVar7 - (longlong)plVar14 >> 3) != -1) goto LAB_140a63d8f;
                break;
              }
            }
            *(int *)(param_2 + 1) = iVar1 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
            }
            *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar3;
          }
LAB_140a63d8f:
          plVar12 = plVar12 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar15);
      }
      plVar12 = *(longlong **)(uVar13 + 0x1880);
      plVar14 = plVar12 + (longlong)*(int *)(uVar13 + 0x1888) * 2;
      for (; plVar12 != plVar14; plVar12 = plVar12 + 2) {
        lVar3 = *plVar12;
        if (lVar3 != 0) {
          plVar7 = (longlong *)FUN_140a63ea0(lVar2);
          plVar9 = (longlong *)*plVar7;
          plVar7 = plVar9 + (int)plVar7[1];
          for (; plVar9 != plVar7; plVar9 = plVar9 + 1) {
            if ((*plVar9 == 0) || (lVar3 == 0)) {
LAB_140a63e26:
              bVar4 = false;
            }
            else {
              uVar11 = 1;
              uVar8 = FSoftObjectPath::ToString(*plVar9 + 0x90,local_38);
              cVar5 = FString::StartsWith(uVar8,lVar3 + 0x130,1);
              if (cVar5 == '\0') goto LAB_140a63e26;
              bVar4 = true;
            }
            if ((uVar11 != 0) && (uVar11 = 0, local_38[0] != 0)) {
              FMemory::Free();
            }
            if (bVar4) {
              if (*plVar9 != 0) {
                TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
                AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,plVar9);
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



// FUNCTION 140a63ea0 FUN_140a63ea0 body=156 status=ok
// SIG undefined FUN_140a63ea0(void)

longlong FUN_140a63ea0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x60,0);
    }
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x68);
      if (*(int *)(param_1 + 0x6c) < iVar2 + iVar1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x60);
        iVar2 = *(int *)(param_1 + 0x68);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 8),
                 *(void **)(param_1 + 0x50),(longlong)iVar1 << 3);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar1;
    }
    FUN_140a6eeb0(param_1);
    *(undefined1 *)(param_1 + 0x70) = 1;
    return param_1 + 0x60;
  }
  return param_1 + 0x60;
}



// FUNCTION 140a63f40 FUN_140a63f40 body=120 status=ok
// SIG undefined FUN_140a63f40(void)

void FUN_140a63f40(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x4f0);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x38);
    if (iVar1 != 0) {
      iVar3 = (int)param_2[1];
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + iVar1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
        iVar3 = (int)param_2[1];
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_2 + (longlong)iVar3 * 8),*(void **)(lVar2 + 0x30),
                 (longlong)iVar1 << 3);
      *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
    }
    return;
  }
  FUN_1430f3200();
  return;
}



// FUNCTION 140a63fc0 FUN_140a63fc0 body=204 status=ok
// SIG undefined FUN_140a63fc0(void)

ulonglong FUN_140a63fc0(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((param_1[0x56f] != 0) && (*(char *)(param_1[0x56f] + 0xec0) == '\x03')) {
    if ((*(byte *)(param_1 + 0x558) & 4) != 0) {
      return (ulonglong)*(uint *)((longlong)param_1 + 0x28dc);
    }
    if (param_1[0x572] != 0) {
      cVar1 = FUN_140ada920();
      if (cVar1 != '\0') {
        return (ulonglong)*(uint *)((longlong)param_1 + 0x28f4);
      }
    }
    return (ulonglong)*(uint *)(param_1 + 0x51d);
  }
  cVar1 = (**(code **)(*param_1 + 0x560))();
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x558) & 4) != 0)) {
LAB_140a6403c:
    return (ulonglong)*(uint *)(param_1 + 0x51a);
  }
  cVar1 = (**(code **)(*param_1 + 0x558))(param_1);
  if (cVar1 != '\0') {
    if ((char)param_1[0x575] == '\x02') {
      return (ulonglong)(uint)(*(float *)(param_1 + 0x51a) * *(float *)((longlong)param_1 + 0x289c))
      ;
    }
    if ((char)param_1[0x575] == '\x03') goto LAB_140a6403c;
  }
  uVar2 = FUN_142cecca0(param_1);
  return uVar2;
}



// FUNCTION 140a64090 GetGeometryCache body=8 status=ok
// SIG undefined GetGeometryCache(void)

undefined8 UGeometryCacheComponent::GetGeometryCache(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x478);
}



// FUNCTION 140a640a0 FUN_140a640a0 body=77 status=ok
// SIG undefined FUN_140a640a0(void)

float * FUN_140a640a0(float *param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_2 + 0x18);
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x10);
  param_1[2] = fVar1;
  lVar2 = *(longlong *)(param_2 + 8);
  if (lVar2 != 0) {
    fVar1 = *(float *)(lVar2 + 0x224);
    fVar3 = *(float *)(lVar2 + 0x228);
    *param_1 = *(float *)(lVar2 + 0x220) + *param_1;
    param_1[1] = fVar1 + param_1[1];
    param_1[2] = fVar3 + param_1[2];
  }
  return param_1;
}



// FUNCTION 140a640f0 FUN_140a640f0 body=58 status=ok
// SIG undefined FUN_140a640f0(void)

byte FUN_140a640f0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = FUN_142cecf80();
  if ((*(uint *)(param_1 + 0x388) & 2) != 0) {
    bVar2 = bVar2 | 0x20;
  }
  bVar1 = bVar2 | 0x40;
  if ((*(uint *)(param_1 + 0x388) & 4) == 0) {
    bVar1 = bVar2;
  }
  return bVar1;
}



// FUNCTION 140a64130 FUN_140a64130 body=205 status=ok
// SIG undefined FUN_140a64130(void)

longlong FUN_140a64130(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  plVar2 = (longlong *)FString::FString(local_38,param_1 + 8);
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_48 = *plVar2;
  *plVar2 = 0;
  local_40 = (undefined4)plVar2[1];
  local_3c = *(undefined4 *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  FUN_1417978e0(&local_28,&local_48);
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  lVar3 = FSoftObjectPath::TryLoad(&local_28);
  if (lVar3 != 0) {
    lVar4 = UARTrackedObject::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a641e0;
  }
  lVar3 = 0;
LAB_140a641e0:
  if (local_20 != 0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 140a64200 FUN_140a64200 body=205 status=ok
// SIG undefined FUN_140a64200(void)

longlong FUN_140a64200(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  plVar2 = (longlong *)FString::FString(local_38,param_1 + 0x18);
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_48 = *plVar2;
  *plVar2 = 0;
  local_40 = (undefined4)plVar2[1];
  local_3c = *(undefined4 *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  FUN_1417978e0(&local_28,&local_48);
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  lVar3 = FSoftObjectPath::TryLoad(&local_28);
  if (lVar3 != 0) {
    lVar4 = FUN_1430f4f00();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a642b0;
  }
  lVar3 = 0;
LAB_140a642b0:
  if (local_20 != 0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 140a642d0 FUN_140a642d0 body=157 status=ok
// SIG undefined FUN_140a642d0(void)

undefined4 FUN_140a642d0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar4 = FUN_1413f82e0();
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
      cVar3 = FUN_140c48c60(lVar1);
      if (cVar3 != '\0') {
        return *(undefined4 *)(param_1 + 0x558);
      }
      if ((*(byte *)(lVar1 + 0x56c) & 1) != 0) {
        return *(undefined4 *)(param_1 + 0x25c);
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x260);
}



// FUNCTION 140a64370 FUN_140a64370 body=52 status=ok
// SIG undefined FUN_140a64370(void)

void FUN_140a64370(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  if (param_1[0x355] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a6439a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1[0x355] + 0x8e0) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 140a643b0 FUN_140a643b0 body=90 status=ok
// SIG undefined FUN_140a643b0(void)

longlong FUN_140a643b0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = FUN_1412fb190();
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140a64410 FUN_140a64410 body=83 status=ok
// SIG undefined FUN_140a64410(void)

undefined8 FUN_140a64410(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14046e540();
  if ((*(byte *)(param_1 + 0x1968) & 1) != 0) {
    uVar2 = 0;
  }
  if (*(longlong *)(param_1 + 0x2b80) != 0) {
    cVar1 = FUN_14072bbc0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return uVar2;
}



// FUNCTION 140a64470 FUN_140a64470 body=71 status=ok
// SIG undefined FUN_140a64470(void)

undefined8 FUN_140a64470(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_142ced4c0();
  if ((*(longlong *)(param_1 + 0x2b80) != 0) && (cVar1 = FUN_14072bc40(), cVar1 == '\0')) {
    return 0;
  }
  return uVar2;
}



// FUNCTION 140a64510 FUN_140a64510 body=128 status=ok
// SIG undefined FUN_140a64510(void)

float FUN_140a64510(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)FUN_142ced540();
  if (param_2 != 0) {
    lVar2 = FUN_141410cb0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && ((*(byte *)(param_2 + 0x8a0) & 1) != 0)) {
      fVar4 = (float)FUN_140a66530(param_1);
      fVar3 = fVar3 * fVar4;
    }
  }
  return fVar3;
}



// FUNCTION 140a64590 FUN_140a64590 body=135 status=ok
// SIG undefined FUN_140a64590(void)

float FUN_140a64590(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x118);
  fVar5 = 1.0;
  if (lVar3 != 0) {
    uVar1 = FUN_1430a8880();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0xf0))(plVar2,0);
      if (lVar3 != 0) {
        lVar3 = FUN_14307d8d0(lVar3,*(undefined1 *)(lVar3 + 0x690));
        if (lVar3 != 0) {
          fVar5 = *(float *)(lVar3 + 0x1a8);
        }
      }
    }
  }
  fVar4 = (float)FUN_142cc16e0(param_1);
  return fVar4 * fVar5;
}



// FUNCTION 140a64620 FUN_140a64620 body=97 status=ok
// SIG undefined FUN_140a64620(void)

float FUN_140a64620(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_142ced750();
  if ((0.0 < *(float *)(param_1 + 0x2ba4)) &&
     ((((*(longlong *)(param_1 + 0x1778) == 0 || ((*(byte *)(param_1 + 0x18cc) & 2) != 0)) ||
       (*(longlong *)(param_1 + 0x178) == 0)) ||
      (*(char *)(*(longlong *)(param_1 + 0x1778) + 0x408) == '\0')))) {
    fVar1 = fVar1 * *(float *)(param_1 + 0x2ba4);
  }
  if (*(char *)(param_1 + 0x2bc0) != '\0') {
    fVar1 = fVar1 * *(float *)(param_1 + 0x28c0);
  }
  return fVar1;
}



// FUNCTION 140a64690 FUN_140a64690 body=146 status=ok
// SIG undefined FUN_140a64690(void)

longlong FUN_140a64690(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x2298);
    plVar2 = plVar5 + (longlong)*(int *)(param_1 + 0x22a0) * 4;
    for (; plVar5 != plVar2; plVar5 = plVar5 + 4) {
      if (*plVar5 == param_2) {
        lVar3 = FUN_140c46a10(param_1,plVar5[2]);
        if (lVar3 != 0) {
          lVar4 = FUN_141499e60();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            return lVar3;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 140a64730 FUN_140a64730 body=65 status=ok
// SIG undefined FUN_140a64730(void)

undefined8 FUN_140a64730(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x2298);
  puVar1 = puVar3 + (longlong)*(int *)(param_1 + 0x22a0) * 4;
  while( true ) {
    if (puVar3 == puVar1) {
      return 0;
    }
    if (*(char *)(puVar3 + 3) == param_2) break;
    puVar3 = puVar3 + 4;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  uVar2 = FUN_140a64690(param_1,*puVar3);
  return uVar2;
}



// FUNCTION 140a64780 FUN_140a64780 body=31 status=ok
// SIG undefined FUN_140a64780(void)

undefined8 FUN_140a64780(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x688) == '\0') &&
     (param_1 = *(longlong *)(param_1 + 0x6c0), param_1 == 0)) {
    return 0;
  }
  uVar1 = FUN_142ceeb40(param_1,1);
  return uVar1;
}



// FUNCTION 140a647a0 FUN_140a647a0 body=17 status=ok
// SIG undefined FUN_140a647a0(void)

float FUN_140a647a0(longlong param_1)

{
  return *(float *)(param_1 + 0x245c) / *(float *)(param_1 + 0x22f4);
}



// FUNCTION 140a647c0 FUN_140a647c0 body=509 status=ok
// SIG undefined FUN_140a647c0(void)

float * FUN_140a647c0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  
  FUN_14233e630();
  if ((*(longlong *)(param_1 + 0x2b78) != 0) &&
     (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x2b78) + 0x4d8), plVar3 != (longlong *)0x0))
  {
    lVar5 = FUN_140afb350(plVar3);
    if ((lVar5 == 0) || (*(char *)(lVar5 + 0x580) == '\0')) {
      cVar4 = (**(code **)(*plVar3 + 0x400))(plVar3,0);
      if (cVar4 == '\0') {
        return param_2;
      }
      fVar9 = *(float *)(param_1 + 0x2890);
      if (0.0001 <= fVar9) {
        fVar1 = *param_2;
        fVar2 = param_2[1];
        fVar11 = param_2[2];
        fVar7 = fVar1 * fVar1 + fVar2 * fVar2 + fVar11 * fVar11;
        if (fVar7 <= fVar9 * fVar9) {
          uVar6 = *(undefined8 *)param_2;
          fVar11 = param_2[2];
        }
        else {
          auVar10 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
          fVar8 = auVar10._0_4_;
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          fVar9 = (fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8)) * fVar9;
          fVar11 = fVar11 * fVar9;
          uVar6 = CONCAT44(fVar2 * fVar9,fVar1 * fVar9);
        }
      }
      else {
        uVar6 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        fVar11 = DAT_1468b5d98;
      }
      *(undefined8 *)param_2 = uVar6;
    }
    else {
      *(ulonglong *)param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      fVar11 = DAT_1468b5d98;
    }
    param_2[2] = fVar11;
  }
  return param_2;
}



// FUNCTION 140a649c0 FUN_140a649c0 body=20 status=ok
// SIG undefined FUN_140a649c0(void)

undefined8 FUN_140a649c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x2380) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x2380) + 0x1d8;
  cVar2 = FUN_142d52a00(lVar1);
  if (cVar2 != '\0') {
    uVar3 = FUN_142d52a20(lVar1);
    uVar3 = FArchive::operator<<(uVar3);
    uVar3 = FUN_142d5fea0(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140a649e0 FUN_140a649e0 body=151 status=ok
// SIG undefined FUN_140a649e0(void)

undefined8 FUN_140a649e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x2928) == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2928) + 0x38);
  if (*(longlong *)(param_1 + 0x1778) == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x18cc) & 2) != 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x178) == 0) {
    return 0;
  }
  if (lVar4 == 0) {
    return 0;
  }
  lVar1 = FUN_142e07420();
  lVar3 = lVar4;
  while (lVar3 != lVar1) {
    lVar3 = *(longlong *)(lVar3 + 0x30);
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1778) + 0x10);
  lVar2 = FUN_142e07420();
  lVar1 = lVar4;
  do {
    if (lVar1 == lVar2) goto LAB_140a64a65;
    lVar1 = *(longlong *)(lVar1 + 0x30);
  } while (lVar1 != 0);
  lVar4 = 0;
LAB_140a64a65:
  if (lVar3 != lVar4) {
    return 0;
  }
  return 1;
}



// FUNCTION 140a64a80 FUN_140a64a80 body=102 status=ok
// SIG undefined FUN_140a64a80(void)

longlong FUN_140a64a80(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x2894) != '\0') {
    if (param_2 == '\x01') {
      return param_1 + 0x28a0;
    }
    if (param_2 == '\x02') {
      return param_1 + 0x28ac;
    }
    if (param_2 == '\x03') {
      lVar1 = *(longlong *)(param_1 + 0x2928) + 0x1070;
      if (*(longlong *)(param_1 + 0x2928) == 0) {
        lVar1 = 0;
      }
      return lVar1;
    }
    if (param_2 == '\x04') {
      lVar1 = *(longlong *)(param_1 + 0x2b70) + 0x240;
      if (*(longlong *)(param_1 + 0x2b70) == 0) {
        lVar1 = 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140a64af0 FUN_140a64af0 body=304 status=ok
// SIG undefined FUN_140a64af0(void)

ulonglong FUN_140a64af0(longlong param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  float fVar8;
  
  if (*(char *)(param_1 + 0x2894) != '\0') {
    cVar1 = *(char *)(param_1 + 0x2ba8);
    if (cVar1 == '\x01') {
      pfVar6 = (float *)(param_1 + 0x28a0);
    }
    else if (cVar1 == '\x02') {
      pfVar6 = (float *)(param_1 + 0x28ac);
    }
    else if (cVar1 == '\x03') {
      pfVar6 = (float *)(*(longlong *)(param_1 + 0x2928) + 0x1070);
      if (*(longlong *)(param_1 + 0x2928) == 0) {
        pfVar6 = (float *)0x0;
      }
    }
    else {
      if (cVar1 != '\x04') goto LAB_140a64c16;
      pfVar6 = (float *)(*(longlong *)(param_1 + 0x2b70) + 0x240);
      if (*(longlong *)(param_1 + 0x2b70) == 0) {
        pfVar6 = (float *)0x0;
      }
    }
    if (pfVar6 != (float *)0x0) {
      fVar8 = *(float *)(param_1 + 0x238);
      plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
      lVar5 = plVar4[0x1f];
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x368))();
        lVar5 = plVar4[0x1f];
      }
      if (*(float *)(lVar5 + 0x38) < 0.0) {
        if ((((uint)pfVar6[2] & 1) == 0) || (*pfVar6 <= 0.0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((((uint)pfVar6[2] & 2) == 0) || (pfVar6[1] <= 0.0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar2) {
          return (ulonglong)(uint)*pfVar6;
        }
        if (bVar3) {
          fVar8 = SQRT(*(float *)(lVar5 + 0x38) * -2.0 * pfVar6[1]);
        }
      }
      return (ulonglong)(uint)fVar8;
    }
  }
LAB_140a64c16:
  uVar7 = FUN_142ced850();
  return uVar7;
}



// FUNCTION 140a64c70 FUN_140a64c70 body=433 status=ok
// SIG undefined FUN_140a64c70(void)

void FUN_140a64c70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140ad4e60();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146866f98) && (_Init_thread_header(&DAT_146866f98), DAT_146866f98 == -1)) {
    uVar1 = FUN_1412fc140();
    FUN_1412fc140();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OwningRoom",1);
    DAT_146866f90 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866f98);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146866f90 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146866f90 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866f90 + 0x30));
  }
  if ((*piVar5 < DAT_146866f78) && (_Init_thread_header(&DAT_146866f78), DAT_146866f78 == -1)) {
    uVar1 = FUN_1412fc200();
    FUN_1412fc200();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CurrentDecoration",1);
    DAT_146866f70 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866f78);
  }
  if (0 < *(int *)(DAT_146866f70 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146866f70 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146866f70 + 0x30));
  }
  return;
}



// FUNCTION 140a64e30 FUN_140a64e30 body=232 status=ok
// SIG undefined FUN_140a64e30(void)

void FUN_140a64e30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146866f88) && (_Init_thread_header(&DAT_146866f88), DAT_146866f88 == -1))
  {
    uVar1 = AGBattleRoyaleGameState::GetPrivateStaticClass();
    AGBattleRoyaleGameState::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"EquippedInventory",1);
    DAT_146866f80 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866f88);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146866f80 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146866f80 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866f80 + 0x30));
  }
  return;
}



// FUNCTION 140a64f20 FUN_140a64f20 body=232 status=ok
// SIG undefined FUN_140a64f20(void)

void FUN_140a64f20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140ad4e60();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146866f98) && (_Init_thread_header(&DAT_146866f98), DAT_146866f98 == -1))
  {
    uVar1 = FUN_1412fc140();
    FUN_1412fc140();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OwningRoom",1);
    DAT_146866f90 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866f98);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146866f90 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146866f90 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866f90 + 0x30));
  }
  return;
}



// FUNCTION 140a65010 FUN_140a65010 body=433 status=ok
// SIG undefined FUN_140a65010(void)

void FUN_140a65010(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_1430f3280();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146866fa8) && (_Init_thread_header(&DAT_146866fa8), DAT_146866fa8 == -1)) {
    uVar1 = FUN_1412fa9e0();
    FUN_1412fa9e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OwningPlayer",1);
    DAT_146866fa0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866fa8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146866fa0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146866fa0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866fa0 + 0x30));
  }
  if ((*piVar5 < DAT_146866fb8) && (_Init_thread_header(&DAT_146866fb8), DAT_146866fb8 == -1)) {
    uVar1 = FUN_1412fa9e0();
    FUN_1412fa9e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RoomChangeCountdown",1);
    DAT_146866fb0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866fb8);
  }
  if (0 < *(int *)(DAT_146866fb0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146866fb0 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146866fb0 + 0x30));
  }
  return;
}



// FUNCTION 140a651d0 FUN_140a651d0 body=1651 status=ok
// SIG undefined FUN_140a651d0(void)

void FUN_140a651d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_140c433e0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146866cc8) && (_Init_thread_header(&DAT_146866cc8), DAT_146866cc8 == -1)) {
    uVar1 = FUN_1413ffd50();
    FUN_1413ffd50();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"IronBearActionAbility",1);
    DAT_146866cc0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866cc8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146866cc0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866cc0 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866cc0 + 0x30));
  }
  if ((*piVar5 < DAT_146866cd8) && (_Init_thread_header(&DAT_146866cd8), DAT_146866cd8 == -1)) {
    uVar1 = FUN_1413ffd50();
    FUN_1413ffd50();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ActiveCoreTypes",1);
    DAT_146866cd0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866cd8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146866cd0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866cd0 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866cd0 + 0x30));
  }
  if ((*piVar5 < DAT_146866ce8) && (_Init_thread_header(&DAT_146866ce8), DAT_146866ce8 == -1)) {
    uVar1 = FUN_1413ffd50();
    FUN_1413ffd50();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GunnersNest",1);
    DAT_146866ce0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866ce8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146866ce0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866ce0 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866ce0 + 0x30));
  }
  if ((*piVar5 < DAT_146866cf8) && (_Init_thread_header(&DAT_146866cf8), DAT_146866cf8 == -1)) {
    uVar1 = FUN_1413ffd50();
    FUN_1413ffd50();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Gunner",1);
    DAT_146866cf0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866cf8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146866cf0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866cf0 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866cf0 + 0x30));
  }
  if ((*piVar5 < DAT_146866d08) && (_Init_thread_header(&DAT_146866d08), DAT_146866d08 == -1)) {
    uVar1 = FUN_1413ffd50();
    FUN_1413ffd50();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CurrentDamageLevel",1);
    DAT_146866d00 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866d08);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146866d00 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866d00 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866d00 + 0x30));
  }
  if ((*piVar5 < DAT_146866d18) && (_Init_thread_header(&DAT_146866d18), DAT_146866d18 == -1)) {
    uVar1 = FUN_1413ffd50();
    FUN_1413ffd50();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bBubbleShieldEnabled",1);
    DAT_146866d10 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866d18);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146866d10 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866d10 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866d10 + 0x30));
  }
  if ((*piVar5 < DAT_146866d28) && (_Init_thread_header(&DAT_146866d28), DAT_146866d28 == -1)) {
    uVar1 = FUN_1413ffd50();
    FUN_1413ffd50();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bBubbleShieldFiring",1);
    DAT_146866d20 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866d28);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146866d20 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866d20 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866d20 + 0x30));
  }
  if ((*piVar5 < DAT_146866d38) && (_Init_thread_header(&DAT_146866d38), DAT_146866d38 == -1)) {
    uVar1 = FUN_1413ffd50();
    FUN_1413ffd50();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"BubbleShieldResourcePool",1);
    DAT_146866d30 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866d38);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146866d30 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866d30 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866d30 + 0x30));
  }
  if ((*piVar5 < DAT_146866d48) && (_Init_thread_header(&DAT_146866d48), DAT_146866d48 == -1)) {
    uVar1 = FUN_1413ffd50();
    FUN_1413ffd50();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsExiting",1);
    DAT_146866d40 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866d48);
  }
  if (0 < *(int *)(DAT_146866d40 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866d40 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146866d40 + 0x30));
  }
  return;
}



// FUNCTION 140a65850 FUN_140a65850 body=1130 status=ok
// SIG undefined FUN_140a65850(void)

void FUN_140a65850(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_142fa3250();
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar4 < DAT_146866ef8) && (_Init_thread_header(&DAT_146866ef8), DAT_146866ef8 == -1)) {
    uVar1 = FUN_141403c70();
    FUN_141403c70();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxSprintSpeed",1);
    DAT_146866ef0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866ef8);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146866ef0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866ef0 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866ef0 + 0x30));
  }
  if ((*piVar4 < DAT_146866f08) && (_Init_thread_header(&DAT_146866f08), DAT_146866f08 == -1)) {
    uVar1 = FUN_141403c70();
    FUN_141403c70();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsSprinting",1);
    DAT_146866f00 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866f08);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146866f00 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866f00 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866f00 + 0x30));
  }
  if ((*piVar4 < DAT_146866f18) && (_Init_thread_header(&DAT_146866f18), DAT_146866f18 == -1)) {
    uVar1 = FUN_141403c70();
    FUN_141403c70();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsSlidingDownLadder",1);
    DAT_146866f10 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866f18);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146866f10 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866f10 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866f10 + 0x30));
  }
  if ((*piVar4 < DAT_146866f28) && (_Init_thread_header(&DAT_146866f28), DAT_146866f28 == -1)) {
    uVar1 = FUN_141403c70();
    FUN_141403c70();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CurrentJumpType",1);
    DAT_146866f20 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866f28);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146866f20 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866f20 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866f20 + 0x30));
  }
  if ((*piVar4 < DAT_146866f38) && (_Init_thread_header(&DAT_146866f38), DAT_146866f38 == -1)) {
    uVar1 = FUN_141403c70();
    FUN_141403c70();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bRepInDelayedFall",1);
    DAT_146866f30 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866f38);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146866f30 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866f30 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866f30 + 0x30));
  }
  if ((*piVar4 < DAT_146866f48) && (_Init_thread_header(&DAT_146866f48), DAT_146866f48 == -1)) {
    uVar1 = FUN_141403c70();
    FUN_141403c70();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GroundSlamHeightScalar",1);
    DAT_146866f40 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866f48);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146866f40 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146866f40 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866f40 + 0x30));
  }
  return;
}



// FUNCTION 140a65cd0 FUN_140a65cd0 body=115 status=ok
// SIG undefined FUN_140a65cd0(void)

undefined4 FUN_140a65cd0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (param_1[0x56f] != 0) {
    lVar2 = FUN_140c41820();
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x810) != '\0')) {
      return 0x43340000;
    }
    if (param_1[0x525] != 0) {
      cVar1 = (**(code **)(*param_1 + 0xbf0))(param_1);
      if (cVar1 != '\0') {
        return *(undefined4 *)(param_1[0x525] + 0x1050);
      }
    }
  }
  return (int)param_1[0x28c];
}



// FUNCTION 140a65d50 FUN_140a65d50 body=156 status=ok
// SIG undefined FUN_140a65d50(void)

ulonglong FUN_140a65d50(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  ulonglong uVar3;
  
  if ((*(char *)(param_1 + 0x2894) != '\0') &&
     (pfVar1 = (float *)FUN_140a64a80(param_1,*(undefined1 *)(param_1 + 0x2ba8)),
     pfVar1 != (float *)0x0)) {
    if ((((uint)pfVar1[2] & 2) != 0) && (0.0 < pfVar1[1])) {
      return (ulonglong)(uint)pfVar1[1];
    }
    if (((((uint)pfVar1[2] & 1) != 0) && (0.0 < *pfVar1)) &&
       (fVar2 = (float)FUN_142ced750(param_1), fVar2 != 0.0)) {
      return (ulonglong)(uint)(*pfVar1 * *pfVar1 * (-0.5 / fVar2));
    }
  }
  uVar3 = FUN_14233ef10(param_1);
  return uVar3;
}



// FUNCTION 140a65e20 GetNumOverrideMaterials body=7 status=ok
// SIG undefined GetNumOverrideMaterials(void)

undefined4 UMeshComponent::GetNumOverrideMaterials(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x568);
}



// FUNCTION 140a65e30 FUN_140a65e30 body=103 status=ok
// SIG undefined FUN_140a65e30(void)

float FUN_140a65e30(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  if ((*(longlong *)(param_1 + 0x2b88) == 0) || (*(longlong *)(param_1 + 0x2920) == 0)) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = (float)FUN_140eabe60(*(longlong *)(param_1 + 0x2b88),0);
    fVar1 = (float)UCurveFloat::GetFloatValue(*(undefined8 *)(param_1 + 0x2920),1.0 - fVar1);
  }
  fVar2 = (float)FUN_142fa3560(param_1);
  return fVar2 * fVar1;
}



// FUNCTION 140a65ea0 FUN_140a65ea0 body=74 status=ok
// SIG undefined FUN_140a65ea0(void)

void FUN_140a65ea0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_142697490();
  if ((((lVar2 == 0) && (param_1[0x92] == 0)) && ((char)param_1[0x48e] == '\0')) &&
     ((plVar1 = (longlong *)param_1[0x2a], plVar1 != (longlong *)0x0 && (plVar1 != param_1)))) {
                    /* WARNING: Could not recover jumptable at 0x000140a65edd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4a8))();
    return;
  }
  return;
}



// FUNCTION 140a65ef0 FUN_140a65ef0 body=68 status=ok
// SIG undefined FUN_140a65ef0(void)

void FUN_140a65ef0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((((char)param_1[0x48e] == '\0') &&
      (plVar1 = (longlong *)param_1[0x2a], plVar1 != (longlong *)0x0)) && (plVar1 != param_1)) {
    lVar2 = (**(code **)(*plVar1 + 0x4a0))();
    if (lVar2 != 0) {
      return;
    }
  }
  FUN_1426974c0(param_1);
  return;
}



// FUNCTION 140a65f40 FUN_140a65f40 body=63 status=ok
// SIG undefined FUN_140a65f40(void)

undefined8 FUN_140a65f40(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    puVar2 = (undefined8 *)
             ((longlong)*(int *)(param_1 + 0xc0) * 0x30 + *(longlong *)(param_1 + 0xb8) + -0x30);
    uVar1 = FUN_140a63bf0(param_1,puVar2,*puVar2,0);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140a65f80 FUN_140a65f80 body=262 status=ok
// SIG undefined FUN_140a65f80(void)

longlong * FUN_140a65f80(longlong param_1,longlong *param_2)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  void *local_28;
  undefined8 local_20;
  
  FUN_142cc2890();
  if ((*(char *)(param_1 + 0x40) != '\0') && ((*(byte *)(param_1 + 0x38) & 2) == 0)) {
    local_28 = (void *)0x0;
    local_20 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    _Src = local_28;
    FGenericPlatformString::Memcpy(local_28,L" [Advance Camera]",0x24);
    if (((int)local_20 != 0) && (iVar3 = (int)local_20 + -1, iVar3 != 0)) {
      iVar1 = (int)param_2[1];
      iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar3;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 140a66090 FUN_140a66090 body=101 status=ok
// SIG undefined FUN_140a66090(void)

longlong FUN_140a66090(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x2380) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2380) + 0x90), lVar1 != 0)) {
    lVar3 = AGFireballProjectile::GetPrivateStaticClass();
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



// FUNCTION 140a66100 FUN_140a66100 body=328 status=ok
// SIG undefined FUN_140a66100(void)

void FUN_140a66100(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(longlong **)(param_1 + 0x570) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x570) + 0x8e8))();
    puVar4 = (undefined8 *)
             UAssetRegistryImpl::OnInMemoryAssetDeleted(*(undefined8 *)(param_1 + 0x570));
    puVar7 = (undefined4 *)*puVar4;
    puVar1 = puVar7 + (longlong)*(int *)(puVar4 + 1) * 2;
    for (; puVar7 != puVar1; puVar7 = puVar7 + 2) {
      local_res8 = *puVar7;
      local_resc = puVar7[1];
      lVar5 = FWeakObjectPtr::Get(&local_res8);
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
        if ((bVar3) && (lVar5 = *(longlong *)(lVar5 + 0x848), lVar5 != 0)) {
          lVar6 = AHeoCon::GetPrivateStaticClass();
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
            iVar2 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar2 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
            }
            *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar5;
          }
        }
      }
    }
    return;
  }
  FUN_1430f3370(param_1);
  return;
}



// FUNCTION 140a66250 GetPredictionData_Client body=85 status=ok
// SIG undefined GetPredictionData_Client(void)

undefined8 INetworkPredictionInterface::GetPredictionData_Client(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x2f,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::GetPredictionData_Client");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x2f,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::GetPredictionData_Client");
  return 0;
}



// FUNCTION 140a662b0 FUN_140a662b0 body=117 status=ok
// SIG undefined FUN_140a662b0(void)

void FUN_140a662b0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x3f8) == 0) {
    puVar1 = (undefined8 *)operator_new(0x160);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      FUN_142cdd430(puVar1,param_1 + -0x218);
      puVar1[0x2b] = 0;
      *puVar1 = &PTR__scalar_deleting_destructor__14420cd38;
    }
    *(undefined8 **)(param_1 + 0x3f8) = puVar1;
  }
  FUN_142cef910(param_1);
  return;
}



// FUNCTION 140a66330 GetPredictionData_Server body=85 status=ok
// SIG undefined GetPredictionData_Server(void)

undefined8 INetworkPredictionInterface::GetPredictionData_Server(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x32,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::GetPredictionData_Server");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x32,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::GetPredictionData_Server");
  return 0;
}



// FUNCTION 140a66390 FUN_140a66390 body=162 status=ok
// SIG undefined FUN_140a66390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a66390(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x400);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new(200);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_142cdd460(puVar1,param_1 + -0x218);
      *puVar1 = &PTR_FUN_14420cd58;
      puVar1[0x15] = _DAT_1468b5d90;
      *(undefined4 *)(puVar1 + 0x16) = DAT_1468b5d98;
      *(undefined8 *)((longlong)puVar1 + 0xb4) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xbc) = 0xffffffff;
      *(undefined4 *)(puVar1 + 0x18) = 0;
    }
    *(undefined8 **)(param_1 + 0x400) = puVar1;
  }
  return puVar1;
}



// FUNCTION 140a66460 FUN_140a66460 body=205 status=ok
// SIG undefined FUN_140a66460(void)

longlong FUN_140a66460(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  plVar2 = (longlong *)FString::FString(local_38,param_1 + 0x78);
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_48 = *plVar2;
  *plVar2 = 0;
  local_40 = (undefined4)plVar2[1];
  local_3c = *(undefined4 *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  FUN_1417978e0(&local_28,&local_48);
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  lVar3 = FSoftObjectPath::TryLoad(&local_28);
  if (lVar3 != 0) {
    lVar4 = FUN_1413b9490();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a66510;
  }
  lVar3 = 0;
LAB_140a66510:
  if (local_20 != 0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 140a66530 FUN_140a66530 body=81 status=ok
// SIG undefined FUN_140a66530(void)

undefined8 FUN_140a66530(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x2b88) != 0) && (*(longlong *)(param_1 + 0x2920) != 0)) {
    fVar1 = (float)FUN_140eabe60(*(longlong *)(param_1 + 0x2b88),0);
    uVar2 = UCurveFloat::GetFloatValue(*(undefined8 *)(param_1 + 0x2920),1.0 - fVar1);
    return uVar2;
  }
  return 0x3f800000;
}



// FUNCTION 140a66590 FUN_140a66590 body=31 status=ok
// SIG undefined FUN_140a66590(void)

byte FUN_140a66590(longlong param_1)

{
  return -(*(char *)(param_1 + 0x6ba) != '\0') & 2U | *(char *)(param_1 + 0x6a8) != '\0';
}



// FUNCTION 140a665b0 FUN_140a665b0 body=69 status=ok
// SIG undefined FUN_140a665b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a665b0(longlong param_1,undefined8 *param_2)

{
  if (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x308))();
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 140a66600 FUN_140a66600 body=807 status=ok
// SIG undefined FUN_140a66600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a66600(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  float *pfVar8;
  undefined1 (*pauVar9) [12];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_78;
  uint local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  plVar7 = *(longlong **)(param_1 + 0x118);
  local_78 = DAT_1468b5da0;
  local_70 = DAT_1468b5da8;
  uVar4 = URemnantQuestSubQuest::GetPrivateStaticClass();
  lVar5 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar4);
  if (lVar5 == 0) {
    lVar5 = FUN_142ceeb40(param_1,0);
    if (lVar5 == 0) {
      plVar7 = (longlong *)
               FUN_14222b250(*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x448),0);
      if (plVar7 != (longlong *)0x0) {
        puVar6 = (undefined8 *)
                 (**(code **)(*plVar7 + 0x430))(plVar7,&local_68,*(undefined8 *)(param_1 + 0x448));
        local_78 = *puVar6;
        local_70 = *(uint *)(puVar6 + 1);
      }
    }
    else {
      plVar7 = (longlong *)FUN_142ceeb40(param_1,0);
      puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x738))(plVar7,&local_68);
      local_78 = *puVar6;
      local_70 = *(uint *)(puVar6 + 1);
    }
  }
  else {
    if (param_3 == '\0') {
      uVar1 = *(undefined4 *)(lVar5 + 0x218);
      *param_2 = *(undefined8 *)(lVar5 + 0x210);
      *(undefined4 *)(param_2 + 1) = uVar1;
      return param_2;
    }
    puVar6 = (undefined8 *)FUN_1430d5dc0(lVar5,&local_68);
    local_78 = *puVar6;
    local_70 = *(uint *)(puVar6 + 1);
  }
  if ((param_3 == '\0') &&
     (lVar5 = FUN_142ceca60(param_1,*(undefined1 *)(param_1 + 0x440)), lVar5 != 0)) {
    lVar5 = *(longlong *)(lVar5 + 0x168);
    if (lVar5 == 0) {
      fVar11 = 1.0;
      fVar14 = 0.0;
      fVar16 = 0.0;
      fVar18 = 0.0;
    }
    else {
      fVar14 = *(float *)(lVar5 + 0x210);
      fVar16 = *(float *)(lVar5 + 0x214);
      fVar18 = *(float *)(lVar5 + 0x218);
      fVar11 = *(float *)(lVar5 + 0x21c);
    }
    fVar15 = -fVar14;
    fVar17 = -fVar16;
    fVar18 = -fVar18;
    pfVar8 = (float *)FRotator::Quaternion(&local_78,&local_68);
    fVar12 = *pfVar8;
    fVar13 = pfVar8[1];
    fVar2 = pfVar8[2];
    fVar3 = pfVar8[3];
    local_68 = -fVar14;
    fStack_64 = -fVar16;
    local_58 = fVar3 * fVar15 * _DAT_1468667a0 + fVar11 * fVar12 + fVar2 * fVar17 * _DAT_146866790 +
               fVar13 * fVar18 * _DAT_146866780;
    fStack_54 = fVar2 * fVar15 * fRam00000001468667a4 + fVar11 * fVar13 +
                fVar3 * fVar17 * fRam0000000146866794 + fVar12 * fVar18 * fRam0000000146866784;
    fStack_50 = fVar13 * fVar15 * fRam00000001468667a8 + fVar11 * fVar2 +
                fVar12 * fVar17 * fRam0000000146866798 + fVar3 * fVar18 * fRam0000000146866788;
    fStack_4c = fVar12 * fVar15 * fRam00000001468667ac + fVar11 * fVar3 +
                fVar13 * fVar17 * fRam000000014686679c + fVar2 * fVar18 * fRam000000014686678c;
    fStack_60 = fVar18;
    fStack_5c = fVar11;
    pauVar9 = (undefined1 (*) [12])FQuat::Rotator(&local_58,&local_68);
    fVar14 = (float)DAT_146866750;
    fVar16 = DAT_146866750._4_4_;
    fVar18 = DAT_146866750._8_4_;
    auVar10._12_4_ = 0;
    auVar10._0_12_ = *pauVar9;
    auVar10 = divps(auVar10,_DAT_146866750);
    fVar11 = (float)*(undefined8 *)*pauVar9 - (float)(int)auVar10._0_4_ * fVar14;
    fVar12 = (float)((ulonglong)*(undefined8 *)*pauVar9 >> 0x20) -
             (float)(int)auVar10._4_4_ * fVar16;
    fVar13 = *(float *)(*pauVar9 + 8) - (float)(int)auVar10._8_4_ * fVar18;
    fVar11 = (float)(((uint)(fVar11 + fVar14) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar11 + fVar14));
    fVar12 = (float)(((uint)(fVar12 + fVar16) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                    (uint)(fVar12 + fVar16));
    fVar13 = (float)(((uint)(fVar13 + fVar18) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                    (uint)(fVar13 + fVar18));
    local_70 = ((uint)(fVar13 - fVar18) ^ (uint)fVar13) & -(uint)(fRam0000000146866748 < fVar13) ^
               (uint)fVar13;
    local_78 = CONCAT44(((uint)(fVar12 - fVar16) ^ (uint)fVar12) &
                        -(uint)(fRam0000000146866744 < fVar12) ^ (uint)fVar12,
                        ((uint)(fVar11 - fVar14) ^ (uint)fVar11) & -(uint)(_DAT_146866740 < fVar11)
                        ^ (uint)fVar11);
  }
  *param_2 = local_78;
  *(uint *)(param_2 + 1) = local_70;
  return param_2;
}



// FUNCTION 140a66930 FUN_140a66930 body=216 status=ok
// SIG undefined FUN_140a66930(void)

void FUN_140a66930(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x490);
  if (plVar1 == (longlong *)0x0) {
    FUN_140a5e640(param_1);
  }
  else if (((*(longlong *)(param_1 + 0x2370) != 0) &&
           ((*(uint *)((longlong)plVar1 + 0x4cc) >> 1 & 1) != 0)) &&
          (cVar2 = (**(code **)(*plVar1 + 0x768))(), cVar2 != '\0')) {
    lVar3 = FUN_1405966a0(*(undefined8 *)(param_1 + 0x2370),0,*(undefined4 *)(param_1 + 0x2378),
                          *(undefined8 *)(param_1 + 0x490));
    *(longlong *)(param_1 + 0x2430) = lVar3;
    if (lVar3 != 0) {
      FUN_140593970(lVar3);
    }
  }
  if (((*(byte *)(param_1 + 0x128) < 3) && (*(longlong *)(param_1 + 0x490) != 0)) &&
     (uVar4 = 0, 0 < *(int *)(param_1 + 0x1520))) {
    do {
      plVar1 = *(longlong **)((longlong)(int)uVar4 * 0xf8 + 8 + *(longlong *)(param_1 + 0x1518));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 2000))(plVar1,param_1,uVar4 & 0xff,1);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 0x1520));
  }
  return;
}



// FUNCTION 140a66a10 FUN_140a66a10 body=100 status=ok
// SIG undefined FUN_140a66a10(void)

void FUN_140a66a10(longlong param_1)

{
  longlong *plVar1;
  
  if (((((*(byte *)(param_1 + 0x13a0) & 0xfc) == 0) && (*(byte *)(param_1 + 0x13a0) != 2)) &&
      (*(char *)(param_1 + 0x248) == '\x06')) &&
     (((*(char *)(param_1 + 0x249) == '\0' && (*(longlong *)(param_1 + 0x178) != 0)) &&
      (*(longlong *)(param_1 + 0x2b78) != 0)))) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x2b78) + 0xd88);
    (**(code **)(*plVar1 + 0x78))(plVar1,DAT_146866bf0,0);
  }
  FUN_142cf0f50(param_1);
  return;
}


