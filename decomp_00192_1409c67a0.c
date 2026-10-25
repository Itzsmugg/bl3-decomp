// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1409c67a0 FUN_1409c67a0 body=165 status=ok
// SIG undefined FUN_1409c67a0(void)

longlong FUN_1409c67a0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x5f8) = 0;
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x5b0);
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FMemory::Free();
  }
  FUN_14099adc0(param_1 + 0x4c8);
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_144191f28;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x610);
  }
  return param_1;
}



// FUNCTION 1409c6850 FUN_1409c6850 body=304 status=ok
// SIG undefined FUN_1409c6850(void)

longlong FUN_1409c6850(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x9a0) = 0;
  if (*(longlong *)(param_1 + 0x998) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x958);
  if (*(longlong *)(param_1 + 0x948) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7e8) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x7d8);
  if (*(longlong *)(param_1 + 0x790) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x780) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x778);
  lVar2 = *(longlong *)(param_1 + 0x770);
  if (iVar1 != 0) {
    lVar2 = lVar2 + 0x38;
    do {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar2);
      lVar2 = lVar2 + 0x48;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0x770);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  FUN_1406d8b70(param_1 + 0x568);
  *(undefined ***)(param_1 + 0x560) = &PTR_FUN_144191f28;
  *(undefined ***)(param_1 + 0x558) = &PTR_FUN_1441b56f0;
  *(undefined ***)(param_1 + 0x550) = &PTR_FUN_143fe0658;
  FUN_1409c4a20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9a8);
  }
  return param_1;
}



// FUNCTION 1409c6980 FUN_1409c6980 body=66 status=ok
// SIG undefined FUN_1409c6980(void)

longlong FUN_1409c6980(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_144191f28;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x488);
  }
  return param_1;
}



// FUNCTION 1409c69d0 FUN_1409c69d0 body=89 status=ok
// SIG undefined FUN_1409c69d0(void)

undefined8 * FUN_1409c69d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b8a80;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x8f);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x8d);
  FUN_1407af170(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x538);
  }
  return param_1;
}



// FUNCTION 1409c6a30 FUN_1409c6a30 body=62 status=ok
// SIG undefined FUN_1409c6a30(void)

undefined8 * FUN_1409c6a30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b8360;
  FUN_1407af170();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4f0);
  }
  return param_1;
}



// FUNCTION 1409c6a70 FUN_1409c6a70 body=122 status=ok
// SIG undefined FUN_1409c6a70(void)

undefined8 * FUN_1409c6a70(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_1441b8bb0;
  puVar1 = (undefined8 *)param_1[0xb2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = &PTR_FUN_1441b8a80;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x8f);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x8d);
  FUN_1407af170(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x598);
  }
  return param_1;
}



// FUNCTION 1409c6af0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FSystemTextures>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1441b9608;
  FUN_1409ceb40();
  FUN_142c63c50(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1409c6b40 FUN_1409c6b40 body=66 status=ok
// SIG undefined FUN_1409c6b40(void)

undefined8 * FUN_1409c6b40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b3a38;
  FUN_1406d8b70(param_1 + 4);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1409c6b90 FUN_1409c6b90 body=66 status=ok
// SIG undefined FUN_1409c6b90(void)

undefined8 * FUN_1409c6b90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b3a38;
  FUN_1406d8b70(param_1 + 4);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1409c6be0 FUN_1409c6be0 body=43 status=ok
// SIG undefined FUN_1409c6be0(void)

undefined8 * FUN_1409c6be0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b4a50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409c6c10 FUN_1409c6c10 body=43 status=ok
// SIG undefined FUN_1409c6c10(void)

undefined8 * FUN_1409c6c10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b39d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409c6c40 FUN_1409c6c40 body=43 status=ok
// SIG undefined FUN_1409c6c40(void)

undefined8 * FUN_1409c6c40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_CanBeUsedOnAnyThread_1441b4b88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409c6c70 FUN_1409c6c70 body=43 status=ok
// SIG undefined FUN_1409c6c70(void)

undefined8 * FUN_1409c6c70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b49f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409c6ca0 FUN_1409c6ca0 body=43 status=ok
// SIG undefined FUN_1409c6ca0(void)

undefined8 * FUN_1409c6ca0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b4ba0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409c6cd0 FUN_1409c6cd0 body=43 status=ok
// SIG undefined FUN_1409c6cd0(void)

undefined8 * FUN_1409c6cd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_1441b4b58;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409c6d00 FUN_1409c6d00 body=43 status=ok
// SIG undefined FUN_1409c6d00(void)

undefined8 * FUN_1409c6d00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b3948;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409c6d30 FUN_1409c6d30 body=43 status=ok
// SIG undefined FUN_1409c6d30(void)

undefined8 * FUN_1409c6d30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b39a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409c6d60 FUN_1409c6d60 body=43 status=ok
// SIG undefined FUN_1409c6d60(void)

undefined8 * FUN_1409c6d60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b56f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409c6d90 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FIndexedCurve::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1441b4bf0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1409c6e00 FUN_1409c6e00 body=43 status=ok
// SIG undefined FUN_1409c6e00(void)

undefined8 * FUN_1409c6e00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b4c68;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409c6e30 FUN_1409c6e30 body=43 status=ok
// SIG undefined FUN_1409c6e30(void)

undefined8 * FUN_1409c6e30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b4c28;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409c6e60 FUN_1409c6e60 body=43 status=ok
// SIG undefined FUN_1409c6e60(void)

undefined8 * FUN_1409c6e60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b39f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1409c6e90 FUN_1409c6e90 body=43 status=ok
// SIG undefined FUN_1409c6e90(void)

undefined8 * FUN_1409c6e90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441b4f70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409c6ec0 FUN_1409c6ec0 body=124 status=ok
// SIG undefined FUN_1409c6ec0(void)

longlong FUN_1409c6ec0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x418);
  }
  return param_1;
}



// FUNCTION 1409c6f40 FUN_1409c6f40 body=107 status=ok
// SIG undefined FUN_1409c6f40(void)

longlong FUN_1409c6f40(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 1409c6fb0 FUN_1409c6fb0 body=124 status=ok
// SIG undefined FUN_1409c6fb0(void)

longlong FUN_1409c6fb0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2f0);
  }
  return param_1;
}



// FUNCTION 1409c7030 FUN_1409c7030 body=131 status=ok
// SIG undefined FUN_1409c7030(void)

longlong FUN_1409c7030(longlong param_1,ulonglong param_2)

{
  FUN_1406d8b70(param_1 + 0x7e8);
  FUN_1406d8b70(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb90);
  }
  return param_1;
}



// FUNCTION 1409c70c0 FUN_1409c70c0 body=124 status=ok
// SIG undefined FUN_1409c70c0(void)

longlong FUN_1409c70c0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3f0);
  }
  return param_1;
}



// FUNCTION 1409c7140 FUN_1409c7140 body=124 status=ok
// SIG undefined FUN_1409c7140(void)

longlong FUN_1409c7140(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x410);
  }
  return param_1;
}



// FUNCTION 1409c71c0 FUN_1409c71c0 body=52 status=ok
// SIG undefined FUN_1409c71c0(void)

undefined8 FUN_1409c71c0(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 1409c7200 FUN_1409c7200 body=73 status=ok
// SIG undefined FUN_1409c7200(void)

longlong FUN_1409c7200(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FMemory::Free();
  }
  FUN_14099b280(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x290);
  }
  return param_1;
}



// FUNCTION 1409c7250 FUN_1409c7250 body=116 status=ok
// SIG undefined FUN_1409c7250(void)

longlong FUN_1409c7250(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x2c8);
  *(undefined ***)(param_1 + 600) = &PTR_FUN_1441b56f0;
  FUN_14099b280(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x308);
  }
  return param_1;
}



// FUNCTION 1409c72d0 FUN_1409c72d0 body=52 status=ok
// SIG undefined FUN_1409c72d0(void)

undefined8 FUN_1409c72d0(undefined8 param_1,ulonglong param_2)

{
  FUN_14099b280();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 1409c7310 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFGatherCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142c63cd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 1409c7350 FUN_1409c7350 body=101 status=ok
// SIG undefined FUN_1409c7350(void)

longlong FUN_1409c7350(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x260) = &PTR_FUN_1441b56f0;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x218) = &PTR_FUN_144191f28;
  FUN_142c63cd0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2b0);
  }
  return param_1;
}



// FUNCTION 1409c73c0 FUN_1409c73c0 body=66 status=ok
// SIG undefined FUN_1409c73c0(void)

longlong FUN_1409c73c0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x218) = &PTR_FUN_1441b56f0;
  FUN_142c63cd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 1409c7410 FUN_1409c7410 body=141 status=ok
// SIG undefined FUN_1409c7410(void)

longlong FUN_1409c7410(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x140);
  plVar1 = *(longlong **)(param_1 + 0x138);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x138);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_14099b020(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 1409c74a0 FUN_1409c74a0 body=107 status=ok
// SIG undefined FUN_1409c74a0(void)

longlong FUN_1409c74a0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1409c7510 FUN_1409c7510 body=201 status=ok
// SIG undefined FUN_1409c7510(void)

longlong FUN_1409c7510(longlong param_1,ulonglong param_2)

{
  FUN_1409c5510(param_1 + 0x820);
  if (*(longlong *)(param_1 + 0x7c8) != 0) {
    FMemory::Free();
  }
  FUN_1409c5510(param_1 + 0x6c0);
  if (*(longlong *)(param_1 + 0x668) != 0) {
    FMemory::Free();
  }
  FUN_1409c5510(param_1 + 0x560);
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FMemory::Free();
  }
  FUN_1409c5510(param_1 + 0x400);
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    FMemory::Free();
  }
  FUN_1409c5510(param_1 + 0x2a0);
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  FUN_1409c5600(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8f0);
  }
  return param_1;
}



// FUNCTION 1409c75e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UWaterSplineComponent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8e10();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x610);
  }
  return param_1;
}



// FUNCTION 1409c7620 FUN_1409c7620 body=107 status=ok
// SIG undefined FUN_1409c7620(void)

longlong FUN_1409c7620(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  FUN_1406d8e10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x310);
  }
  return param_1;
}



// FUNCTION 1409c7690 FUN_1409c7690 body=119 status=ok
// SIG undefined FUN_1409c7690(void)

longlong FUN_1409c7690(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  FUN_1409c46c0(param_1 + 0x130);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  FUN_1406d8e10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3c8);
  }
  return param_1;
}



// FUNCTION 1409c7710 FUN_1409c7710 body=73 status=ok
// SIG undefined FUN_1409c7710(void)

longlong FUN_1409c7710(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  FUN_142c63cd0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 1409c7760 FUN_1409c7760 body=85 status=ok
// SIG undefined FUN_1409c7760(void)

longlong FUN_1409c7760(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  FUN_1409c46c0(param_1 + 0x218);
  FUN_142c63cd0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 1409c77c0 FUN_1409c77c0 body=90 status=ok
// SIG undefined FUN_1409c77c0(void)

longlong FUN_1409c77c0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::Free();
  }
  FUN_1409c5680(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x478);
  }
  return param_1;
}



// FUNCTION 1409c7820 FUN_1409c7820 body=118 status=ok
// SIG undefined FUN_1409c7820(void)

longlong FUN_1409c7820(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x1b0) = &PTR_FUN_1441b56f0;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_143fe0658;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FUN_14099ae30(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 1409c78a0 FUN_1409c78a0 body=55 status=ok
// SIG undefined FUN_1409c78a0(void)

void FUN_1409c78a0(longlong param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(byte *)(param_1 + 0xac2) & 8) != 0) {
    local_18 = *param_2;
    *(byte *)(param_1 + 0xac2) = *(byte *)(param_1 + 0xac2) & 0xf7;
    local_10 = *(undefined4 *)(param_2 + 1);
    FUN_14141c5e0(local_18,&local_18);
  }
  return;
}



// FUNCTION 1409c78e0 FUN_1409c78e0 body=903 status=ok
// SIG undefined FUN_1409c78e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409c78e0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FUN_142880530(*(longlong *)(param_1 + 0x578),param_1 + 0x580);
    *(undefined8 *)(param_1 + 0x580) = 0;
    iVar4 = *(int *)(param_1 + 0x5b8);
    if (iVar4 < *(int *)(param_1 + 0x570)) {
      lVar6 = *(longlong *)(param_1 + 0x550);
      lVar5 = (longlong)*(int *)(param_1 + 0x558) * 0x68 + lVar6;
      if (lVar6 != lVar5) {
        do {
          FUN_1409e7990(param_1,lVar6,
                        (longlong)*(int *)(param_1 + 0x5b8) * 0x70 + *(longlong *)(lVar6 + 8));
          lVar6 = lVar6 + 0x68;
        } while (lVar6 != lVar5);
        iVar4 = *(int *)(param_1 + 0x5b8);
        lVar6 = *(longlong *)(param_1 + 0x550);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x500);
      uVar2 = *(undefined8 *)(param_1 + 0x578);
      lVar6 = *(longlong *)(lVar6 + 8);
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        plVar3[2] = (longlong)FUN_1409e0bf0;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar3[4] = lVar5;
        *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_c8 = 0;
      local_c0 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_d0 = 0xbf800000;
      local_d8 = 0;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar2,(longlong)iVar4 * 0x70 + lVar6 + 0x48,&local_c8,uVar1);
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
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar6 = FMemory::Realloc(plVar3,0,0);
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
      }
      uVar1 = *(undefined4 *)(param_1 + 0x514);
      uVar2 = *(undefined8 *)(param_1 + 0x578);
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        plVar3[2] = (longlong)FUN_1409c78e0;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar3[4] = lVar6;
        *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_c8 = 0;
      local_c0 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_d0 = 0xbf800000;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_d8 = 0;
      FUN_142880850(uVar2,param_1 + 0x580,&local_c8,uVar1);
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
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar6 = FMemory::Realloc(plVar3,0,0);
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
      }
      *(int *)(param_1 + 0x5b8) = *(int *)(param_1 + 0x5b8) + 1;
    }
    else {
      FUN_1409ddea0(param_1);
    }
  }
  return;
}



// FUNCTION 1409c7c70 FUN_1409c7c70 body=975 status=ok
// SIG undefined FUN_1409c7c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409c7c70(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
  if (lVar6 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
  }
  else {
    uVar3 = *(undefined8 *)(lVar6 + 0x90);
  }
  FUN_142880530(uVar3,param_1 + 0x610);
  *(undefined8 *)(param_1 + 0x610) = 0;
  iVar4 = *(int *)(param_1 + 0x648);
  if (iVar4 < *(int *)(param_1 + 0x600)) {
    lVar6 = *(longlong *)(param_1 + 0x5e0);
    lVar5 = (longlong)*(int *)(param_1 + 0x5e8) * 0x68 + lVar6;
    if (lVar6 != lVar5) {
      do {
        FUN_1409e7c30(param_1,lVar6,
                      (longlong)*(int *)(param_1 + 0x648) * 0x68 + *(longlong *)(lVar6 + 8));
        lVar6 = lVar6 + 0x68;
      } while (lVar6 != lVar5);
      lVar6 = *(longlong *)(param_1 + 0x5e0);
      iVar4 = *(int *)(param_1 + 0x648);
    }
    lVar6 = *(longlong *)(lVar6 + 8);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
    if (lVar5 == 0) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(lVar5 + 0x90);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x590);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      plVar2[2] = (longlong)FUN_1409e0dc0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar5;
      *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_c8 = 0;
    local_c0 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_d0 = 0xbf800000;
    local_d8 = 0;
    local_b0 = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,(longlong)iVar4 * 0x68 + lVar6 + 0x40,&local_c8,uVar1);
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
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar6 = FMemory::Realloc(plVar2,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
    if (lVar6 == 0) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(lVar6 + 0x90);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x5ac);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      plVar2[2] = (longlong)FUN_1409c7c70;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar6;
      *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_c8 = 0;
    local_c0 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_d0 = 0xbf800000;
    local_b0 = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_d8 = 0;
    FUN_142880850(uVar3,param_1 + 0x610,&local_c8,uVar1);
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
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar6 = FMemory::Realloc(plVar2,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
    *(int *)(param_1 + 0x648) = *(int *)(param_1 + 0x648) + 1;
  }
  else if (*(longlong *)(param_1 + 0x630) != 0) {
    FUN_1409dddd0();
  }
  return;
}



// FUNCTION 1409c8040 FUN_1409c8040 body=115 status=ok
// SIG undefined FUN_1409c8040(void)

void FUN_1409c8040(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong local_18;
  undefined8 local_10;
  
  cVar5 = FUN_1409da1f0();
  if (cVar5 != '\0') {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    local_10 = 0;
    *(undefined4 *)(param_1 + 0x1d0) = *param_2;
    *(undefined4 *)(param_1 + 0x1d4) = uVar2;
    *(undefined4 *)(param_1 + 0x1d8) = uVar3;
    *(undefined4 *)(param_1 + 0x1dc) = uVar4;
    *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 4);
    local_18 = param_1;
    uVar1 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    uVar1 = FUN_1430ec7a0(param_1);
    FUN_140e93b10(uVar1,&local_18);
  }
  return;
}



// FUNCTION 1409c80c0 FUN_1409c80c0 body=514 status=ok
// SIG undefined FUN_1409c80c0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1409c80c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  longlong local_88 [4];
  longlong local_68 [3];
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  plVar1 = (longlong *)(param_1 + 0x770);
  iVar5 = *(int *)(param_1 + 0x778);
  lVar9 = (longlong)iVar5;
  plVar6 = (longlong *)*plVar1;
  plVar11 = plVar6;
  do {
    if (plVar11 == plVar6 + lVar9 * 9) {
LAB_1409c8127:
      *(int *)(param_1 + 0x778) = iVar5 + 1;
      if (*(int *)(param_1 + 0x77c) < iVar5 + 1) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
      }
      lVar10 = *plVar1;
      lVar2 = lVar10 + lVar9 * 0x48;
      *(undefined8 *)(lVar10 + lVar9 * 0x48) = 0;
      FAudioDeviceHandle::FAudioDeviceHandle(lVar2 + 8);
      lVar3 = lVar10 + lVar9 * 0x48;
      FAudioDeviceHandle::FAudioDeviceHandle(lVar3 + 0x20);
      *(undefined8 *)(lVar10 + 0x38 + lVar9 * 0x48) = 0;
      lVar4 = lVar10 + lVar9 * 0x48;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(longlong *)(lVar10 + lVar9 * 0x48) = param_2;
      if ((*(byte *)(param_1 + 0x800) & 8) != 0) {
        lVar9 = FUN_1409d4c70(param_1);
        local_88[1] = 0;
        lVar10 = 0x790;
        if (param_2 == lVar9) {
          lVar10 = 0x780;
        }
        local_88[0] = param_2;
        FUN_142c90ad0(lVar10 + param_1,lVar4 + 0x38,0,local_88,0,local_res8);
      }
      if ((*(longlong *)(param_1 + 0x620) != 0) && ((*(byte *)(param_1 + 0x800) & 1) != 0)) {
        local_50 = 1;
        local_4c = 0;
        local_68[1] = 0xffffffff;
        local_68[2] = 0xffffffff;
        local_38 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_68[0] = *(longlong *)(param_1 + 0x620);
        FWeakObjectPtr::operator=(local_68 + 1,param_1);
        local_50 = 1;
        puVar8 = (undefined8 *)FUN_142dc4b70(local_88,param_2,local_68);
        uVar7 = puVar8[1];
        *(undefined8 *)(lVar2 + 8) = *puVar8;
        *(undefined8 *)(lVar2 + 0x10) = uVar7;
        *(undefined8 *)(lVar2 + 0x18) = puVar8[2];
      }
      puVar8 = (undefined8 *)FUN_1409ed4e0(param_1,local_88,0,param_2);
      uVar7 = puVar8[1];
      *(undefined8 *)(lVar3 + 0x20) = *puVar8;
      *(undefined8 *)(lVar3 + 0x28) = uVar7;
      *(undefined8 *)(lVar3 + 0x30) = puVar8[2];
      return;
    }
    if (*plVar11 == param_2) {
      if ((int)(((longlong)plVar11 - (longlong)plVar6) / 0x48) != -1) {
        return;
      }
      goto LAB_1409c8127;
    }
    plVar11 = plVar11 + 9;
  } while( true );
}



// FUNCTION 1409c82d0 FUN_1409c82d0 body=234 status=ok
// SIG undefined FUN_1409c82d0(void)

void FUN_1409c82d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*param_2 == 0) {
    return;
  }
  if ((longlong *)param_2[1] == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  cVar1 = (**(code **)(*(longlong *)param_2[1] + 0x10))();
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar2 + 1;
    if (*(int *)(param_1 + 0x54) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x48,iVar2);
    }
    plVar4 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x48));
  }
  else {
    if ((cVar1 != '\x01') || (iVar2 = FUN_14233f450(), iVar2 != 3)) goto LAB_1409c8394;
    iVar2 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar2 + 1;
    if (*(int *)(param_1 + 0x44) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x38,iVar2);
    }
    plVar4 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  lVar3 = 0;
  *plVar4 = 0;
  plVar4[1] = 0;
  *plVar4 = *param_2;
  if (*param_2 != 0) {
    lVar3 = param_2[1];
  }
  plVar4[1] = lVar3;
LAB_1409c8394:
  FUN_1409eeeb0(param_1);
  FUN_140e7ae90(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 1409c83c0 FUN_1409c83c0 body=244 status=ok
// SIG undefined FUN_1409c83c0(void)

void FUN_1409c83c0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (param_2 != 0) {
    lVar9 = *param_3;
    lVar1 = lVar9 + (longlong)(int)param_3[1] * 8;
    for (; lVar9 != lVar1; lVar9 = lVar9 + 8) {
      cVar4 = FUN_14058c1e0(lVar9,param_2);
      if (cVar4 != '\0') {
        return;
      }
    }
    FWeakObjectPtr::operator=(&local_res10,param_2);
    iVar3 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar3);
    }
    puVar2 = (undefined4 *)(*param_3 + (longlong)iVar3 * 8);
    *puVar2 = local_res10;
    puVar2[1] = local_res14;
    uVar5 = UBaseDynamicMeshComponent::GetNumMaterials(param_2);
    uVar8 = 0;
    if (uVar5 != 0) {
      do {
        plVar6 = (longlong *)FUN_14075edf0(param_2,uVar8);
        uVar7 = 0;
        if (plVar6 != (longlong *)0x0) {
          uVar7 = AUGWeapon_Hook::GetPrivateStaticClass();
          uVar7 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
        }
        FUN_1409c83c0(param_1,uVar7,param_3);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
    }
  }
  return;
}



// FUNCTION 1409c84c0 FUN_1409c84c0 body=59 status=ok
// SIG undefined FUN_1409c84c0(void)

void FUN_1409c84c0(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x518,0,0);
  FUN_142c662c0(param_1,param_2);
  return;
}



// FUNCTION 1409c8500 FUN_1409c8500 body=81 status=ok
// SIG undefined FUN_1409c8500(void)

void FUN_1409c8500(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x520,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x518,0,0);
  FUN_142c662c0(param_1,param_2);
  return;
}



// FUNCTION 1409c8560 FUN_1409c8560 body=81 status=ok
// SIG undefined FUN_1409c8560(void)

void FUN_1409c8560(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x498,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x4a0,0,0);
  FUN_142c662c0(param_1,param_2);
  return;
}



// FUNCTION 1409c85c0 FUN_1409c85c0 body=59 status=ok
// SIG undefined FUN_1409c85c0(void)

void FUN_1409c85c0(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x568,0,0);
  FUN_1406dcb70(param_1,param_2);
  return;
}



// FUNCTION 1409c8600 FUN_1409c8600 body=103 status=ok
// SIG undefined FUN_1409c8600(void)

void FUN_1409c8600(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x538,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x540,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x548,0,0);
  FUN_142c662c0(param_1,param_2);
  return;
}



// FUNCTION 1409c8670 FUN_1409c8670 body=94 status=ok
// SIG undefined FUN_1409c8670(void)

void FUN_1409c8670(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x500,0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x508),*(undefined4 *)(param_1 + 0x510),0,0);
  FUN_142c662c0(param_1,param_2);
  return;
}



// FUNCTION 1409c86d0 FUN_1409c86d0 body=362 status=ok
// SIG undefined FUN_1409c86d0(void)

void FUN_1409c86d0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  
  cVar1 = FUN_1430ef9c0();
  if (((cVar1 != '\0') && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (*(longlong *)(param_2 + 0x10) != 0)) {
    FWeakObjectPtr::operator=(&local_28);
    FWeakObjectPtr::operator=(&local_20,*(undefined8 *)(param_2 + 0x18));
    lVar5 = *(longlong *)(param_1 + 0x18);
    iVar6 = *(int *)(param_1 + 0x20);
    local_18 = 0;
    lVar7 = lVar5 + (longlong)iVar6 * 0x14;
    if (lVar5 != lVar7) {
      do {
        lVar2 = FWeakObjectPtr::Get(lVar5);
        lVar3 = FWeakObjectPtr::Get(&local_28);
        if (lVar2 == lVar3) {
          lVar2 = FWeakObjectPtr::Get(lVar5 + 8);
          lVar3 = FWeakObjectPtr::Get(&local_20);
          if (lVar2 == lVar3) {
            return;
          }
        }
        lVar5 = lVar5 + 0x14;
      } while (lVar5 != lVar7);
      iVar6 = *(int *)(param_1 + 0x20);
    }
    *(int *)(param_1 + 0x20) = iVar6 + 1;
    if (*(int *)(param_1 + 0x24) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x18,iVar6);
    }
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 0x14);
    *puVar4 = local_28;
    puVar4[1] = local_24;
    puVar4[2] = local_20;
    puVar4[3] = local_1c;
    *(undefined1 *)(puVar4 + 4) = local_18;
    lVar7 = *(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 0x14;
    if ((*(char *)(lVar7 + 0x10) == '\0') && (lVar5 = *(longlong *)(param_1 + 8), lVar5 != 0)) {
      *(undefined1 *)(lVar7 + 0x10) = 1;
      lVar2 = FWeakObjectPtr::Get(lVar7);
      lVar7 = FWeakObjectPtr::Get(lVar7 + 8);
      if ((lVar2 != 0) && (lVar7 != 0)) {
        FUN_140e6f900(lVar2,lVar5,lVar7);
      }
    }
  }
  return;
}



// FUNCTION 1409c8840 FUN_1409c8840 body=474 status=ok
// SIG undefined FUN_1409c8840(void)

void FUN_1409c8840(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong local_res10;
  code *local_38;
  undefined4 uStack_30;
  
  if (param_2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x580);
    lVar4 = (longlong)*(int *)(param_1 + 0x588) * 0x60 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x60) {
      if (*(longlong *)(lVar3 + 0x10) == param_2) {
        if (lVar3 != 0) {
          return;
        }
        break;
      }
    }
  }
  local_res10 = param_2;
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x580);
    iVar2 = *(int *)(param_1 + 0x588);
    *(int *)(param_1 + 0x588) = iVar2 + 1;
    if (*(int *)(param_1 + 0x58c) < iVar2 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar5 = (undefined8 *)(*plVar1 + (longlong)iVar2 * 0x60);
    *puVar5 = 0xffffffffffffffff;
    *(undefined4 *)(puVar5 + 1) = 0xffffffff;
    puVar5[2] = param_2;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    FWeakObjectPtr::operator=(puVar5 + 7,0);
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    lVar4 = *plVar1 + (longlong)iVar2 * 0x60;
    lVar3 = *(longlong *)(param_2 + 0x910);
    if (lVar3 != 0) {
      local_38 = FUN_1409de6a0;
      uStack_30 = 0;
      puVar5 = (undefined8 *)
               TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                         (lVar3 + 0x1e8,&local_res10,*(undefined8 *)(param_1 + 0x578),&local_38);
      *(undefined8 *)(lVar4 + 0x50) = *puVar5;
      local_38 = FUN_1409de620;
      uStack_30 = 0;
      puVar5 = (undefined8 *)
               TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                         (lVar3 + 0x268,&local_res10,*(undefined8 *)(param_1 + 0x578),&local_38);
      *(undefined8 *)(lVar4 + 0x58) = *puVar5;
    }
    FUN_1409cfe60(param_1 + 0x4c8,lVar4);
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
              (param_1 + 0x4c8);
    iVar2 = *(int *)(param_1 + 0x51c) + 1;
    *(int *)(param_1 + 0x51c) = iVar2;
    if (iVar2 == -1) {
      *(undefined4 *)(param_1 + 0x51c) = 0;
    }
    *(undefined8 *)(param_1 + 0x570) = 0xffffffffffffffff;
  }
  FUN_14144c000(param_1,param_2);
  return;
}



// FUNCTION 1409c8a20 FUN_1409c8a20 body=212 status=ok
// SIG undefined FUN_1409c8a20(void)

void FUN_1409c8a20(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  undefined8 local_res8;
  
  lVar3 = FUN_142c6f130();
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) {
    FUN_1409e08d0(param_1,lVar2 + 0xb8,2);
    return;
  }
  if (*(char *)(lVar3 + 0x128) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x468);
  if (cVar1 != '\0') {
    if ((cVar1 != '\x01') && (cVar1 != '\x02')) goto LAB_1409c8ac5;
    local_res8 = 0xffffffffffffffff;
    fVar4 = (float)FUN_142de77e0(lVar2 + 400,lVar3,0,&local_res8);
    *(undefined1 *)(param_1 + 0x468) = 0;
    *(float *)(param_1 + 0x4a8) = (float)((int)ROUND(fVar4 * 2.0 + 0.5) >> 1);
  }
  FUN_1409e08d0(param_1,lVar2 + 0xb8,2);
LAB_1409c8ac5:
  FUN_142c76980(param_1);
  return;
}



// FUNCTION 1409c8b20 FUN_1409c8b20 body=571 status=ok
// SIG undefined FUN_1409c8b20(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1409c8b20(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *local_98;
  uint local_90;
  uint local_8c;
  longlong *local_88;
  undefined8 local_80;
  longlong local_70 [3];
  undefined1 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  if ((*(char *)(param_1 + 0x128) == '\x03') && ((param_2[1] != 0 || (*param_2 != 0)))) {
    plVar4 = (longlong *)0x0;
    iVar6 = 0;
    local_98 = (longlong *)0x0;
    local_8c = 0;
    plVar8 = plVar4;
    if (*(longlong *)(param_1 + 0x758) != 0) {
      local_88 = (longlong *)0x0;
      local_80 = 0;
      uVar2 = FUN_1413f82e0();
      FUN_14238c280(*(undefined8 *)(param_1 + 0x758),&local_88,uVar2);
      plVar3 = (longlong *)
               ((ulonglong)((longlong)(local_88 + (int)local_80) + (7 - (longlong)local_88)) >> 3);
      if (local_88 + (int)local_80 < local_88) {
        plVar3 = plVar4;
      }
      plVar7 = local_88;
      plVar9 = plVar4;
      plVar12 = plVar4;
      iVar6 = 0;
      if (plVar3 != (longlong *)0x0) {
        do {
          lVar5 = *plVar7;
          cVar1 = FUN_1409da5c0(param_1,lVar5);
          if (cVar1 != '\0') {
            iVar6 = (int)plVar4;
            local_90 = iVar6 + 1;
            if ((int)plVar9 < (int)local_90) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,plVar4);
              plVar9 = (longlong *)(ulonglong)local_8c;
              plVar8 = local_98;
            }
            plVar4 = (longlong *)(ulonglong)local_90;
            plVar8[iVar6] = lVar5;
          }
          iVar6 = (int)plVar4;
          plVar7 = plVar7 + 1;
          plVar12 = (longlong *)((longlong)plVar12 + 1);
        } while (plVar12 != plVar3);
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free(local_88);
      }
    }
    uVar10 = 0;
    local_70[1] = 0xffffffff;
    local_70[2] = 0xffffffff;
    local_70[0] = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    local_54 = (undefined4)param_2[2];
    local_40 = 0;
    plVar4 = (longlong *)FUN_1409d4c70(param_1);
    uVar11 = (ulonglong)((longlong)(plVar8 + iVar6) + (7 - (longlong)plVar8)) >> 3;
    if (plVar8 + iVar6 < plVar8) {
      uVar11 = uVar10;
    }
    plVar3 = plVar8;
    if (uVar11 != 0) {
      do {
        plVar3 = (longlong *)*plVar8;
        if (plVar3 != (longlong *)0x0) {
          uVar2 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
          lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar2);
          if (lVar5 != 0) {
            if (plVar3 == plVar4) {
              local_70[0] = *param_2;
            }
            else {
              local_70[0] = param_2[1];
            }
            FWeakObjectPtr::operator=(local_70 + 1,plVar3);
            FUN_142dc49a0(lVar5,&local_88,local_70);
          }
        }
        plVar8 = plVar8 + 1;
        uVar10 = uVar10 + 1;
        plVar3 = local_98;
      } while (uVar10 != uVar11);
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
  }
  return;
}



// FUNCTION 1409c8d60 FUN_1409c8d60 body=417 status=ok
// SIG undefined FUN_1409c8d60(void)

void FUN_1409c8d60(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  FUN_14099f080();
  lVar7 = *(longlong *)(param_1 + 0x110);
  if (lVar7 != 0) {
    lVar3 = (**(code **)(*(longlong *)(lVar7 + 0x8e0) + 0x10))();
    if (lVar3 != 0) {
      plVar1 = (longlong *)(lVar3 + 0x208);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f4d290;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        plVar4[2] = (longlong)FUN_1409ddcf0;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar5;
        *plVar4 = (longlong)&PTR_FUN_143f4d2d8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
        iVar2 = *(int *)(lVar3 + 0x210);
        *(int *)(lVar3 + 0x210) = iVar2 + 1;
        if (*(int *)(lVar3 + 0x214) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar6 = plVar4;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
    }
    lVar7 = FUN_1409aa9f0(lVar7);
    if (lVar7 != 0) {
      plVar1 = (longlong *)(lVar7 + 0x58);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        plVar4[2] = (longlong)FUN_1409ddcf0;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar3;
        *plVar4 = (longlong)&PTR_FUN_143f4d1b8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
        iVar2 = *(int *)(lVar7 + 0x60);
        *(int *)(lVar7 + 0x60) = iVar2 + 1;
        if (*(int *)(lVar7 + 100) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar6 = plVar4;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 1409c8f10 FUN_1409c8f10 body=43 status=ok
// SIG undefined FUN_1409c8f10(void)

void FUN_1409c8f10(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_14099f080();
  if (*(longlong *)(param_1 + 0x110) != 0) {
    uVar1 = FUN_142dd0770();
    *(undefined4 *)(param_1 + 0x268) = uVar1;
  }
  return;
}



// FUNCTION 1409c8f40 FUN_1409c8f40 body=814 status=ok
// SIG undefined FUN_1409c8f40(void)

void FUN_1409c8f40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char cVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  longlong local_res18 [2];
  int local_48;
  int local_44;
  longlong local_40;
  
  if (param_2 != 0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTargetDestroyed",L"::");
    pwVar6 = (wchar_t *)0x0;
    while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(local_res18,pwVar6 + 2,1);
    lVar9 = local_res18[0];
    plVar1 = (longlong *)(param_2 + 0x290);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = lVar9;
    if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_40);
    }
    piVar10 = (int *)*plVar1;
    iVar2 = *(int *)(param_2 + 0x298);
    for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)iVar2 * 4; piVar11 = piVar11 + 4) {
      if (((*piVar11 == local_48) && (piVar11[1] == local_44)) ||
         ((cVar7 = FWeakObjectPtr::IsValid(piVar11), cVar7 == '\0' &&
          (cVar7 = FWeakObjectPtr::IsValid(&local_48), cVar7 == '\0')))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) && (*(longlong *)(piVar11 + 2) == local_40)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_1409c90b7;
        break;
      }
    }
    iVar2 = *(int *)(param_2 + 0x298);
    lVar9 = (longlong)iVar2;
    *(int *)(param_2 + 0x298) = iVar2 + 1;
    if (*(int *)(param_2 + 0x29c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    lVar3 = *plVar1;
    *(int *)(lVar3 + lVar9 * 0x10) = local_48;
    *(int *)(lVar3 + 4 + lVar9 * 0x10) = local_44;
    *(longlong *)(lVar3 + 8 + lVar9 * 0x10) = local_40;
LAB_1409c90b7:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
         ) != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTargetDied",L"::");
      pwVar6 = (wchar_t *)0x0;
      while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar6 = pwVar5;
      }
      FName::FName(local_res18,pwVar6 + 2,1);
      plVar1 = (longlong *)(param_2 + 0xf18);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = local_res18[0];
      if ((local_res18[0] != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_40);
      }
      piVar10 = (int *)*plVar1;
      iVar2 = *(int *)(param_2 + 0xf20);
      for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)iVar2 * 4; piVar11 = piVar11 + 4) {
        if (((*piVar11 == local_48) && (piVar11[1] == local_44)) ||
           ((cVar7 = FWeakObjectPtr::IsValid(piVar11), cVar7 == '\0' &&
            (cVar7 = FWeakObjectPtr::IsValid(&local_48), cVar7 == '\0')))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((bVar4) && (*(longlong *)(piVar11 + 2) == local_40)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_1409c9243;
          break;
        }
      }
      iVar2 = *(int *)(param_2 + 0xf20);
      *(int *)(param_2 + 0xf20) = iVar2 + 1;
      if (*(int *)(param_2 + 0xf24) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar10 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar10 = local_48;
      piVar10[1] = local_44;
      *(longlong *)(piVar10 + 2) = local_40;
LAB_1409c9243:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    }
  }
  return;
}



// FUNCTION 1409c9270 FUN_1409c9270 body=763 status=ok
// SIG undefined FUN_1409c9270(void)

void FUN_1409c9270(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int *piVar11;
  int *piVar12;
  undefined8 local_res8;
  int local_78;
  int local_74;
  longlong local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  longlong *local_50;
  
  lVar4 = param_1[2];
  if (*(char *)(lVar4 + 0x1d9) != '\0') {
    FUN_1409e4c50(param_1,1);
  }
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x46c);
  if (*(char *)(lVar4 + 0x1dd) != '\0') {
    *(undefined4 *)((longlong)param_1 + 0x46c) = *(undefined4 *)(lVar4 + 0x1e0);
  }
  FUN_142c675e0(param_1);
  if (*(char *)(lVar4 + 0x1dd) != '\0') {
    *(undefined4 *)((longlong)param_1 + 0x46c) = uVar2;
  }
  cVar6 = (**(code **)(*param_1 + 0x38))(param_1);
  if ((cVar6 == '\0') && (lVar7 = FUN_142c6f130(param_1), lVar7 != 0)) {
    if (((*(char *)(lVar4 + 0x1da) != '\0') && ((*(uint *)(param_1 + 0xa0) & 0x200) == 0)) &&
       ((((*(char *)(lVar7 + 0x128) == '\x03' ||
          (cVar6 = *(char *)((longlong)param_1 + 0x31), cVar6 == '\x02')) ||
         ((cVar6 == '\x03' && (*(char *)(lVar7 + 0x128) == '\x02')))) || (cVar6 == '\x01')))) {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x200;
        FWeakObjectPtr::operator=(&local_78,0);
        local_70 = 0;
        uVar9 = FUN_142c86b70(param_1,local_68);
        FUN_1409c0470(local_58,uVar9);
        FUN_1409beed0(lVar7 + 0x1040,local_58);
        plVar10 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar11 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        plVar10 = (longlong *)FName::FName(&local_res8,L"OnZoomedNotifyActions",1);
        FWeakObjectPtr::operator=(&local_78,lVar7);
        local_70 = *plVar10;
        plVar10 = (longlong *)(lVar7 + 0x1030);
        piVar11 = (int *)*plVar10;
        iVar3 = *(int *)(lVar7 + 0x1038);
        for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)iVar3 * 4; piVar12 = piVar12 + 4) {
          if (((*piVar12 == local_78) && (piVar12[1] == local_74)) ||
             ((cVar6 = FWeakObjectPtr::IsValid(piVar12), cVar6 == '\0' &&
              (cVar6 = FWeakObjectPtr::IsValid(&local_78), cVar6 == '\0')))) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if ((bVar5) && (*(longlong *)(piVar12 + 2) == local_70)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (bVar5) {
            if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_1409c950c;
            break;
          }
        }
        iVar3 = *(int *)(lVar7 + 0x1038);
        *(int *)(lVar7 + 0x1038) = iVar3 + 1;
        if (*(int *)(lVar7 + 0x103c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar3);
        }
        piVar11 = (int *)((longlong)iVar3 * 0x10 + *plVar10);
        *piVar11 = local_78;
        piVar11[1] = local_74;
        *(longlong *)(piVar11 + 2) = local_70;
LAB_1409c950c:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
      }
    }
    local_res8 = 0;
    if (*(longlong *)(lVar4 + 0x1e8) != 0) {
      FUN_1409e4a70(param_1,*(undefined8 *)(lVar4 + 0x1e8),*(undefined4 *)(lVar4 + 0x1f0));
    }
  }
  return;
}



// FUNCTION 1409c9570 FUN_1409c9570 body=98 status=ok
// SIG undefined FUN_1409c9570(void)

void FUN_1409c9570(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  FUN_14099fdc0();
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x268) != '\0') {
    local_10 = 0;
    local_18 = lVar1;
    uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    uVar2 = FUN_142c6f130(param_1);
    FUN_140e93b10(uVar2,&local_18);
  }
  return;
}



// FUNCTION 1409c95e0 FUN_1409c95e0 body=100 status=ok
// SIG undefined FUN_1409c95e0(void)

void FUN_1409c95e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  FUN_1409c9270();
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = FUN_142c6f130(param_1);
  FUN_142c6c710(lVar1);
  local_18 = lVar1;
  if (lVar1 == 0) {
    local_10 = 0;
  }
  else {
    uVar3 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
  }
  FUN_140e93b10(uVar2,&local_18);
  return;
}



// FUNCTION 1409c9650 FUN_1409c9650 body=27 status=ok
// SIG undefined FUN_1409c9650(void)

void FUN_1409c9650(undefined8 param_1)

{
  FUN_1409c9270();
  FUN_1409ce720(param_1);
  return;
}



// FUNCTION 1409c9670 FUN_1409c9670 body=127 status=ok
// SIG undefined FUN_1409c9670(void)

void FUN_1409c9670(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142c6f130();
  if (lVar2 != 0) {
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
    if (bVar1) goto LAB_1409c96be;
  }
  lVar2 = 0;
LAB_1409c96be:
  *(longlong *)(param_1 + 200) = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_142ceefa0(lVar2);
    if (lVar2 != 0) {
      FUN_142ce8a30(lVar2,0,0);
    }
  }
  return;
}



// FUNCTION 1409c96f0 FUN_1409c96f0 body=1335 status=ok
// SIG undefined FUN_1409c96f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409c96f0(longlong param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  char cVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined1 auStack_128 [32];
  uint local_108;
  undefined8 *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  uint local_b8 [4];
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FUN_142c678a0();
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  plVar7 = (longlong *)FUN_142c6f130(param_1);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  lVar14 = *(longlong *)(param_1 + 0x10);
  lVar11 = *(longlong *)(lVar14 + 0x68);
  plVar9 = plVar7;
  if (lVar11 != 0) {
    lVar12 = plVar7[0x2d];
    if (lVar12 == 0) {
      local_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      local_58 = _DAT_146864db0 & _DAT_146864dc0;
      uStack_54 = uRam0000000146864db4 & uRam0000000146864dc4;
      uStack_50 = uRam0000000146864db8 & uRam0000000146864dc8;
      uStack_4c = uRam0000000146864dbc & uRam0000000146864dcc;
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = uRam0000000146864dbc;
    }
    else {
      local_68 = *(undefined4 *)(lVar12 + 0x220);
      uStack_64 = *(undefined4 *)(lVar12 + 0x224);
      uStack_60 = *(undefined4 *)(lVar12 + 0x228);
      uStack_5c = *(undefined4 *)(lVar12 + 0x22c);
      local_58 = *(uint *)(lVar12 + 0x230);
      uStack_54 = *(uint *)(lVar12 + 0x234);
      uStack_50 = *(uint *)(lVar12 + 0x238);
      uStack_4c = *(uint *)(lVar12 + 0x23c);
      local_78 = *(undefined4 *)(lVar12 + 0x210);
      uStack_74 = *(undefined4 *)(lVar12 + 0x214);
      uStack_70 = *(undefined4 *)(lVar12 + 0x218);
      uStack_6c = *(uint *)(lVar12 + 0x21c);
    }
    uVar8 = (**(code **)(*plVar7 + 0x148))(plVar7);
    local_100 = (undefined8 *)0x0;
    local_108 = local_108 & 0xffffff00;
    plVar9 = (longlong *)FUN_14245f910(uVar8,lVar11,&local_78,1);
  }
  if (*(longlong *)(lVar14 + 0x70) != 0) {
    lVar11 = plVar7[0x2d];
    if (lVar11 == 0) {
      uVar16 = (undefined4)DAT_1468b5da0;
      uVar18 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_d0 = DAT_1468b5da8;
    }
    else {
      fVar3 = *(float *)(lVar11 + 0x210);
      local_98 = *(undefined8 *)(lVar11 + 0x210);
      fStack_90 = *(float *)(lVar11 + 0x218);
      fStack_8c = *(float *)(lVar11 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar11 + 0x214) != *(float *)(lVar11 + 0x254));
      auVar2._0_4_ = -(uint)(fVar3 != *(float *)(lVar11 + 0x250));
      auVar2._8_4_ = -(uint)(fStack_90 != *(float *)(lVar11 + 600));
      auVar2._12_4_ = -(uint)(fStack_8c != *(float *)(lVar11 + 0x25c));
      iVar6 = movmskps((int)plVar9,auVar2);
      lVar12 = lVar11;
      if (iVar6 != 0) {
        *(float *)(lVar11 + 0x250) = fVar3;
        *(float *)(lVar11 + 0x254) = *(float *)(lVar11 + 0x214);
        *(float *)(lVar11 + 600) = fStack_90;
        *(float *)(lVar11 + 0x25c) = fStack_8c;
        puVar10 = (undefined8 *)FQuat::Rotator(&local_98,&local_c8);
        *(undefined8 *)(lVar11 + 0x260) = *puVar10;
        *(undefined4 *)(lVar11 + 0x268) = *(undefined4 *)(puVar10 + 1);
        lVar12 = plVar7[0x2d];
      }
      uVar16 = (undefined4)*(undefined8 *)(lVar11 + 0x260);
      uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x260) >> 0x20);
      pfVar1 = (float *)(lVar11 + 0x268);
      lVar11 = lVar12;
      local_d0 = *pfVar1;
    }
    local_d8 = CONCAT44(uVar18,uVar16);
    if (lVar11 == 0) {
      local_e8 = _DAT_1468b5d90;
      local_e0 = DAT_1468b5d98;
    }
    else {
      local_e8 = *(undefined8 *)(lVar11 + 0x220);
      local_e0 = *(float *)(lVar11 + 0x228);
    }
    local_a0 = local_e0;
    local_a8 = local_e8;
    (**(code **)(*plVar7 + 0x578))(plVar7,local_b8,local_88);
    local_100 = &local_d8;
    local_108 = local_b8[0];
    FUN_1405a1e30(&local_78,plVar7,*(undefined8 *)(lVar14 + 0x70),&local_a8);
    FUN_140591060(&local_78);
  }
  uVar8 = FUN_141477fa0();
  lVar11 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
  if (lVar11 == 0) goto LAB_1409c9b26;
  FUN_142d61350(&local_d8,param_1);
  FUN_142d61120(&local_e8,param_1,0);
  uVar17 = FUN_142d60a40(param_1);
  local_d8 = CONCAT44(local_d8._4_4_ - local_e8._4_4_ * 100.0,
                      (float)local_d8 - (float)local_e8 * 100.0);
  local_d0 = local_d0 - local_e0 * 100.0;
  lVar12 = FUN_1413f82e0();
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
      lVar12 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    cVar15 = *(char *)((longlong)plVar7 + 0xec2);
  }
  else {
    cVar15 = '\0';
  }
  lVar12 = FUN_1422312c0(plVar7);
  if (lVar12 == 0) {
LAB_1409c9a4f:
    cVar15 = '\x01';
  }
  else {
    lVar13 = FUN_142e4e4a0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((!bVar4) || (cVar5 = FUN_142d6fcd0(lVar12), cVar5 != '\0')) goto LAB_1409c9a4f;
  }
  if (*(char *)(lVar11 + 0x3ae) == '\0') {
    FUN_140ea9ba0(lVar11,1,0);
  }
  if ((*(char *)(lVar14 + 0x60) == '\0') && (cVar15 == '\0')) {
    local_f8 = FUN_142d5fbc0(param_1);
    local_a8 = local_e8;
    local_a0 = local_e0;
    local_98 = local_d8;
    fStack_90 = local_d0;
    local_c8 = _DAT_1468b5d90;
    local_c0 = DAT_1468b5d98;
    local_100 = (undefined8 *)((ulonglong)local_100 & 0xffffffff00000000);
    local_108 = uVar17;
    FUN_140eaadb0(lVar11,&local_c8,&local_98,&local_a8);
  }
  else {
    local_c8 = local_d8;
    local_c0 = local_d0;
    FUN_140ec1100(lVar11,&local_c8,uVar17,0);
  }
LAB_1409c9b26:
  (**(code **)(*plVar7 + 0x310))(plVar7,1);
  (**(code **)(*plVar7 + 0x3a0))(plVar7,0x3f800000);
  uVar8 = UScrollBox::GetPrivateStaticClass();
  lVar14 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
  if (lVar14 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468654d0) &&
       (_Init_thread_header(&DAT_1468654d0), DAT_1468654d0 == -1)) {
      FName::FName(&DAT_1468654c8,L"Frozen",1);
      _Init_thread_footer(&DAT_1468654d0);
    }
    FUN_142dafbc0(lVar14 + 0x3d0,&DAT_1468654c8);
    FUN_142dafbc0(lVar14 + 0x468,&DAT_1468654c8);
    FUN_142d5aad0(lVar14 + 0x3d0);
  }
  return;
}



// FUNCTION 1409c9c30 FUN_1409c9c30 body=419 status=ok
// SIG undefined FUN_1409c9c30(void)

void FUN_1409c9c30(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 uVar8;
  float local_38;
  float fStack_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_18;
  float local_10;
  
  plVar3 = (longlong *)FUN_142c6f130();
  uVar4 = FUN_141477fa0();
  lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
  if (lVar5 == 0) goto LAB_1409c9d7f;
  cVar2 = FUN_140eb27a0(lVar5,1);
  if (cVar2 == '\0') {
    plVar6 = (longlong *)FUN_142c6f130(param_1);
    if (plVar6 == (longlong *)0x0) goto LAB_1409c9d7f;
    uVar4 = AGFreezeCharacterCue::GetPrivateStaticClass();
    lVar7 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar4);
    if ((lVar7 == 0) || (*(char *)(lVar7 + 0x974) != '\x02')) goto LAB_1409c9d7f;
  }
  FUN_142d61120(&local_28,param_1,0);
  FUN_142d61350(&local_38,param_1);
  local_38 = local_38 - local_28 * 100.0;
  fStack_34 = fStack_34 - local_24 * 100.0;
  local_30 = local_30 - local_20 * 100.0;
  if (*(char *)(lVar5 + 0x3ae) == '\0') {
    FUN_140ea9ba0(lVar5,1,0);
  }
  local_18 = CONCAT44(fStack_34,local_38);
  local_10 = local_30;
  uVar8 = FUN_142d60a40(param_1);
  FUN_140ec1100(lVar5,&local_18,uVar8,0);
LAB_1409c9d7f:
  lVar5 = FUN_1413f82e0();
  if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *(undefined1 *)(plVar3 + 0x3ac) = 1;
  }
  FUN_142d57370(param_1);
  return;
}



// FUNCTION 1409c9de0 FUN_1409c9de0 body=799 status=ok
// SIG undefined FUN_1409c9de0(void)

void FUN_1409c9de0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_res10;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_142c68170();
  plVar2 = (longlong *)FUN_142c6f130(param_1);
  if (plVar2 != (longlong *)0x0) {
    local_res10 = 0xffffffffffffffff;
    lVar3 = *(longlong *)(param_1 + 0x10);
    uVar7 = FUN_142de77e0(lVar3 + 0x110,plVar2,0,&local_res10);
    *(undefined4 *)(param_1 + 0x4a8) = uVar7;
    *(undefined4 *)(param_1 + 0x4d4) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x4bc) = 0;
    *(undefined4 *)(param_1 + 0x4c4) = 0;
    local_res10 = 0xffffffffffffffff;
    uVar7 = FUN_142de77e0(lVar3 + 0x290,plVar2,0,&local_res10);
    *(undefined4 *)(param_1 + 0x4b0) = uVar7;
    local_res10 = 0xffffffffffffffff;
    uVar7 = FUN_142de77e0(lVar3 + 0x310,plVar2,0,&local_res10);
    *(undefined4 *)(param_1 + 0x4b4) = uVar7;
    local_res10 = 0xffffffffffffffff;
    uVar7 = FUN_142de77e0(lVar3 + 0x390,plVar2,0,&local_res10);
    *(undefined4 *)(param_1 + 0x4b8) = uVar7;
    local_res10 = 0xffffffffffffffff;
    uVar7 = FUN_142de77e0(lVar3 + 0x210,plVar2,0,&local_res10);
    *(undefined4 *)(param_1 + 0x4ac) = uVar7;
    local_res10 = 0xffffffffffffffff;
    uVar7 = FUN_142de77e0(lVar3 + 0x410,plVar2,0,&local_res10);
    *(undefined4 *)(param_1 + 0x4cc) = uVar7;
    local_res10 = 0xffffffffffffffff;
    uVar7 = FUN_142de77e0(lVar3 + 0x490,plVar2,0,&local_res10);
    *(undefined4 *)(param_1 + 0x4e4) = uVar7;
    *(undefined1 *)(param_1 + 0x468) = 0;
    FUN_1409e08d0(param_1,lVar3 + 0xb8,2);
    lVar3 = (**(code **)(*plVar2 + 0x668))(plVar2);
    if (lVar3 != 0) {
      lVar4 = ARemnantWeaponMod::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) &&
         (lVar3 = *(longlong *)(lVar3 + 0x568), *(longlong *)(param_1 + 0x498) = lVar3, lVar3 == 0))
      {
        plVar5 = (longlong *)UBlackboardKeyType_Float::GetPrivateStaticClass();
        if (plVar5 == (longlong *)0x0) {
          lVar3 = 0;
        }
        else {
          lVar3 = plVar5[0x1f];
          if (lVar3 == 0) {
            (**(code **)(*plVar5 + 0x368))(plVar5);
            lVar3 = plVar5[0x1f];
          }
        }
        FUN_142bb3d50(*(undefined8 *)(param_1 + 0x498),*(undefined8 *)(param_1 + 0x478),lVar3);
        plVar5 = (longlong *)UBlackboardKeyType_Object::GetPrivateStaticClass();
        if (plVar5 == (longlong *)0x0) {
          lVar3 = 0;
        }
        else {
          lVar3 = plVar5[0x1f];
          if (lVar3 == 0) {
            (**(code **)(*plVar5 + 0x368))(plVar5);
            lVar3 = plVar5[0x1f];
          }
        }
        FUN_142bb3d50(*(undefined8 *)(param_1 + 0x498),*(undefined8 *)(param_1 + 0x488),lVar3);
        if (*(longlong *)(param_1 + 0x498) != 0) {
          FUN_142cd0820(param_1 + 0x478,*(longlong *)(param_1 + 0x498),0);
          local_18 = 0;
          local_10 = 0;
          FUN_142cd0df0(param_1 + 0x488,*(undefined8 *)(param_1 + 0x498),&local_18);
        }
      }
    }
    plVar2 = (longlong *)FUN_14222e2a0(plVar2);
    if (plVar2 != (longlong *)0x0) {
      uVar6 = UCircularThrobber::GetPrivateStaticClass();
      uVar6 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar6);
      *(undefined8 *)(param_1 + 0x4a0) = uVar6;
    }
  }
  return;
}



// FUNCTION 1409ca100 FUN_1409ca100 body=1129 status=ok
// SIG undefined FUN_1409ca100(void)

void FUN_1409ca100(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  float *pfVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong local_res10;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  float local_90;
  undefined1 local_8c [12];
  undefined1 local_80 [24];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [64];
  
  lVar7 = FUN_142c6f130();
  if (lVar7 != 0) {
    lVar8 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar9 = (longlong *)FUN_1409d7000(param_1);
      if (plVar9 != (longlong *)0x0) {
        cVar4 = UObjectBase::IsValidLowLevel(plVar9);
        if (cVar4 != '\0') {
          local_b8 = DAT_146294670;
          local_b0 = DAT_146294678;
          local_b4 = DAT_146294674;
          local_res10 = 0;
          cVar4 = FUN_1409d36d0(param_1,plVar9,&local_res10,&local_b8);
          lVar8 = local_res10;
          if (cVar4 != '\0') {
            lVar1 = *(longlong *)(param_1 + 0x10);
            if (*(char *)(lVar1 + 0x309) == '\x04') {
              cVar4 = FUN_14122a870(plVar9,local_res10,lVar7);
              if (cVar4 == '\0') goto LAB_1409ca53d;
            }
            local_b0 = local_b0 + *(float *)(lVar1 + 0x2fc);
            cVar4 = FUN_142cf39b0(lVar8,0);
            if (cVar4 == '\0') {
              cVar4 = FWeakObjectPtr::IsValid(lVar8 + 0x77c);
              if (cVar4 == '\0') {
                *(longlong *)(param_1 + 0x568) = lVar8;
                puVar10 = (undefined8 *)FUN_142f9e160(&local_98,lVar7);
                local_a8 = *puVar10;
                local_a0 = *(undefined4 *)(puVar10 + 1);
                puVar10 = (undefined8 *)FUN_142f9e160(local_8c,plVar9);
                lVar8 = *(longlong *)(param_1 + 0x10);
                local_d8 = *puVar10;
                fVar5 = *(float *)(puVar10 + 1);
                local_d0 = fVar5;
                if (0.0 < *(float *)(lVar8 + 0x27c)) {
                  uVar11 = (**(code **)(*plVar9 + 0x308))(plVar9,&local_c8);
                  if (((0.0001 < ABS((float)local_c8)) || (0.0001 < ABS(local_c8._4_4_))) ||
                     (0.0001 < ABS(local_c0))) {
                    fVar5 = (float)((int)((ulonglong)uVar11 >> 8) << 8);
                  }
                  else {
                    fVar5 = (float)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
                  }
                  if (SUB41(fVar5,0) == '\0') {
                    uVar11 = (**(code **)(*plVar9 + 0x148))(plVar9);
                    uVar13 = FUN_1428cc5b0(uVar11);
                    puVar10 = (undefined8 *)
                              FUN_1424c9180(local_80,&local_a8,&local_d8,&local_c8,uVar13,
                                            *(undefined4 *)(lVar8 + 0x274),
                                            *(undefined4 *)(lVar8 + 0x278),
                                            *(undefined4 *)(lVar8 + 0x27c));
                    local_d8 = *puVar10;
                    fVar5 = *(float *)(puVar10 + 1);
                    local_d0 = fVar5;
                  }
                }
                lVar8 = plVar9[0x2d];
                if (lVar8 == 0) {
                  uVar13 = (undefined4)DAT_1468b5da0;
                  uVar14 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
                  local_c0 = DAT_1468b5da8;
                }
                else {
                  local_68 = *(float *)(lVar8 + 0x210);
                  fStack_64 = *(float *)(lVar8 + 0x214);
                  fStack_60 = *(float *)(lVar8 + 0x218);
                  fStack_5c = *(float *)(lVar8 + 0x21c);
                  auVar2._4_4_ = -(uint)(fStack_64 != *(float *)(lVar8 + 0x254));
                  auVar2._0_4_ = -(uint)(local_68 != *(float *)(lVar8 + 0x250));
                  auVar2._8_4_ = -(uint)(fStack_60 != *(float *)(lVar8 + 600));
                  auVar2._12_4_ = -(uint)(fStack_5c != *(float *)(lVar8 + 0x25c));
                  iVar6 = movmskps(fVar5,auVar2);
                  if (iVar6 != 0) {
                    *(float *)(lVar8 + 0x250) = local_68;
                    *(float *)(lVar8 + 0x254) = fStack_64;
                    *(float *)(lVar8 + 600) = fStack_60;
                    *(float *)(lVar8 + 0x25c) = fStack_5c;
                    puVar10 = (undefined8 *)FQuat::Rotator(&local_68,local_80);
                    *(undefined8 *)(lVar8 + 0x260) = *puVar10;
                    *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar10 + 1);
                  }
                  uVar13 = (undefined4)*(undefined8 *)(lVar8 + 0x260);
                  uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x260) >> 0x20);
                  local_c0 = *(float *)(lVar8 + 0x268);
                }
                local_c8 = CONCAT44(uVar14,uVar13);
                local_98 = local_c8;
                local_90 = local_c0;
                pfVar12 = (float *)FRotator::RotateVector(&local_98,local_8c,&local_b8);
                local_d8 = CONCAT44(local_d8._4_4_ + pfVar12[1],(float)local_d8 + *pfVar12);
                local_d0 = local_d0 + pfVar12[2];
                uVar11 = FUN_142c62590(local_58,&DAT_146858368,(undefined4)local_a8);
                FUN_142c67550(param_1,uVar11);
                uVar11 = FUN_142c62590(local_58,&DAT_146858440,local_a8._4_4_);
                FUN_142c67550(param_1,uVar11);
                uVar11 = FUN_142c62590(local_58,&DAT_146858448,local_a0);
                FUN_142c67550(param_1,uVar11);
                uVar11 = FUN_142c62590(local_58,&DAT_146858450,(float)local_d8);
                FUN_142c67550(param_1,uVar11);
                uVar11 = FUN_142c62590(local_58,&DAT_146858458,local_d8._4_4_);
                FUN_142c67550(param_1,uVar11);
                uVar11 = FUN_142c62590(local_58,&DAT_146858460,local_d0);
                FUN_142c67550(param_1,uVar11);
                FUN_1406f66a0(param_1,plVar9,&local_b8);
                if (*(longlong *)(param_1 + 0x568) != 0) {
                  FUN_14127c6d0(*(longlong *)(param_1 + 0x568),lVar7);
                }
                lVar8 = FUN_1413f82e0();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  FUN_142dafbc0(lVar7 + 0x1228,&DAT_1468651d8);
                }
                goto LAB_1409ca544;
              }
            }
          }
        }
      }
    }
  }
LAB_1409ca53d:
  *(undefined1 *)(param_1 + 0x4f8) = 4;
LAB_1409ca544:
  FUN_1406dd140(param_1);
  return;
}



// FUNCTION 1409ca570 FUN_1409ca570 body=757 status=ok
// SIG undefined FUN_1409ca570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409ca570(longlong param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_28;
  undefined4 local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FUN_142c67c00();
  lVar5 = FUN_142c6d3b0(param_1,&DAT_146865228,3);
  if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x18), lVar5 == 0)) {
LAB_1409ca5d8:
    lVar5 = 0;
  }
  else {
    lVar6 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1409ca5d8;
  }
  *(longlong *)(param_1 + 0x538) = lVar5;
  lVar5 = FUN_142c6d3b0(param_1,&DAT_146865210,3);
  if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x18), lVar5 == 0)) {
LAB_1409ca637:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1409ca637;
  }
  *(longlong *)(param_1 + 0x540) = lVar5;
  lVar5 = FUN_142c6d3b0(param_1,&DAT_146865218,3);
  if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x18), lVar5 != 0)) {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1409ca698;
  }
  lVar5 = 0;
LAB_1409ca698:
  *(longlong *)(param_1 + 0x548) = lVar5;
  *(bool *)(param_1 + 0x550) = lVar5 != 0;
  FUN_142c703a0(param_1,&DAT_1468651e0,param_1 + 0x56c);
  FUN_142c703a0(param_1,&DAT_1468651e8,param_1 + 0x570);
  FUN_142c703a0(param_1,&DAT_1468651f0,param_1 + 0x574);
  FUN_142c703a0(param_1,&DAT_1468651f8,param_1 + 0x578);
  FUN_142c703a0(param_1,&DAT_146865200,param_1 + 0x57c);
  FUN_142c703a0(param_1,&DAT_146865208,param_1 + 0x580);
  FUN_142c703a0(param_1,&DAT_146865220,param_1 + 0x584);
  lVar5 = *(longlong *)(param_1 + 0x540);
  *(undefined4 *)(param_1 + 0x588) = 0;
  if (lVar5 != 0) {
    lVar6 = *(longlong *)(lVar5 + 0x168);
    if (lVar6 == 0) {
      local_28 = _DAT_1468b5d90;
      local_20 = DAT_1468b5d98;
    }
    else {
      local_28 = *(undefined8 *)(lVar6 + 0x220);
      local_20 = *(undefined4 *)(lVar6 + 0x228);
    }
    *(undefined8 *)(param_1 + 0x554) = local_28;
    *(undefined4 *)(param_1 + 0x55c) = local_20;
    lVar5 = *(longlong *)(lVar5 + 0x168);
    if (lVar5 == 0) {
      uVar8 = (undefined4)DAT_1468b5da0;
      uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      uVar4 = DAT_1468b5da8;
    }
    else {
      local_18 = *(float *)(lVar5 + 0x210);
      fStack_14 = *(float *)(lVar5 + 0x214);
      fStack_10 = *(float *)(lVar5 + 0x218);
      fStack_c = *(float *)(lVar5 + 0x21c);
      auVar1._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != fStack_14);
      auVar1._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != local_18);
      auVar1._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_10);
      auVar1._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_c);
      iVar3 = movmskps(local_20,auVar1);
      if (iVar3 != 0) {
        *(float *)(lVar5 + 0x250) = local_18;
        *(float *)(lVar5 + 0x254) = fStack_14;
        *(float *)(lVar5 + 600) = fStack_10;
        *(float *)(lVar5 + 0x25c) = fStack_c;
        puVar7 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
        *(undefined8 *)(lVar5 + 0x260) = *puVar7;
        *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar7 + 1);
      }
      uVar8 = (undefined4)*(undefined8 *)(lVar5 + 0x260);
      uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
      uVar4 = *(undefined4 *)(lVar5 + 0x268);
    }
    *(ulonglong *)(param_1 + 0x560) = CONCAT44(uVar9,uVar8);
    *(undefined4 *)(param_1 + 0x568) = uVar4;
  }
  return;
}



// FUNCTION 1409ca870 FUN_1409ca870 body=913 status=ok
// SIG undefined FUN_1409ca870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409ca870(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [12];
  undefined1 local_2c [20];
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  bVar3 = false;
  bVar2 = false;
  plVar6 = (longlong *)FUN_142c6f130();
  if (plVar6 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    uVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
    lVar8 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
    if (lVar8 != 0) {
      uVar7 = FUN_141477fa0();
      lVar9 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
      bVar2 = bVar3;
      if ((*(char *)(lVar8 + 0x974) == '\x02') && (lVar9 != 0)) {
        if (*(char *)(lVar9 + 0x3ae) == '\0') {
          lVar10 = FUN_142c6f640(param_1,1);
          FUN_140ea9ba0(lVar9,1,0,lVar10 != 0);
          if (*(char *)(lVar9 + 0x3ae) == '\0') goto LAB_1409caad1;
        }
        lVar10 = FUN_1422312c0(plVar6);
        if (lVar10 == 0) {
LAB_1409caa16:
          puVar12 = (undefined8 *)FUN_142c71180(param_1,local_2c);
          local_48 = *puVar12;
          local_40 = *(undefined4 *)(puVar12 + 1);
          uVar13 = thunk_FUN_142d60a40(param_1);
          FUN_140ec1100(lVar9,&local_48,uVar13,0);
        }
        else {
          lVar11 = FUN_142e4e4a0();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) || (cVar4 = FUN_142d6fcd0(lVar10), cVar4 != '\0')) goto LAB_1409caa16;
          puVar12 = (undefined8 *)UCreditsWidget::GetDefaultUserFocus(param_1,local_38);
          local_68 = *puVar12;
          local_60 = *(undefined4 *)(puVar12 + 1);
          puVar12 = (undefined8 *)FUN_142c71180(param_1,local_2c);
          local_58 = *puVar12;
          local_50 = *(undefined4 *)(puVar12 + 1);
          local_48 = _DAT_1468b5d90;
          local_40 = DAT_1468b5d98;
          uVar13 = thunk_FUN_142d60a40(param_1);
          FUN_140eaadb0(lVar9,&local_48,&local_58,&local_68,uVar13,0,0xffffffff);
        }
        bVar2 = true;
        (**(code **)(*plVar6 + 0x310))(plVar6,1);
        (**(code **)(*plVar6 + 0x3a0))(plVar6,0x3f800000);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_1468654e0) &&
           (_Init_thread_header(&DAT_1468654e0), DAT_1468654e0 == -1)) {
          FName::FName(&DAT_1468654d8,L"Frozen",1);
          _Init_thread_footer(&DAT_1468654e0);
        }
        FUN_142dafbc0(lVar8 + 0x3d0,&DAT_1468654d8);
        FUN_142dafbc0(lVar8 + 0x468,&DAT_1468654d8);
        FUN_142d5aad0(lVar8 + 0x3d0);
      }
LAB_1409caad1:
      if ((*(char *)(lVar1 + 0x1f0) == '\0') && (cVar4 = FUN_140a8f220(lVar8), cVar4 != '\0')) {
        FUN_140a9a570(lVar8);
      }
    }
  }
  FUN_142d57630(param_1);
  if (bVar2) {
    *(undefined4 *)(param_1 + 0x518) = 0x3e800000;
  }
  if (*(char *)(param_1 + 0x510) != '\0') {
    return;
  }
  if (bVar2) {
    return;
  }
  if (lVar8 == 0) {
    return;
  }
  cVar4 = FUN_140a8e5b0(lVar8,*(undefined4 *)(lVar1 + 500));
  cVar5 = FUN_140a8f220(lVar8);
  if (((cVar5 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x10) + 0x1f8) == '\0')) &&
     (plVar6 = (longlong *)FUN_142c6f130(param_1), plVar6 != (longlong *)0x0)) {
    uVar7 = UMediaSoundComponent::GetPrivateStaticClass();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
    if ((plVar6 != (longlong *)0x0) &&
       (cVar5 = (**(code **)(*plVar6 + 0x560))(plVar6), cVar5 == '\0')) {
      bVar2 = true;
      goto LAB_1409cab90;
    }
  }
  bVar2 = false;
LAB_1409cab90:
  if ((cVar4 != '\0') || (bVar2)) {
    FUN_142d554e0(param_1);
  }
  return;
}



// FUNCTION 1409cac10 FUN_1409cac10 body=109 status=ok
// SIG undefined FUN_1409cac10(void)

void FUN_1409cac10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  FUN_1409c9270();
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = FUN_142c6f130(param_1);
  FUN_142c6c710(lVar1);
  if (*(char *)(lVar1 + 0x220) != '\0') {
    local_10 = 0;
    local_18 = lVar1;
    uVar3 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
    FUN_140e93b10(uVar2,&local_18);
  }
  return;
}



// FUNCTION 1409cac80 FUN_1409cac80 body=377 status=ok
// SIG undefined FUN_1409cac80(void)

void FUN_1409cac80(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int local_res10 [2];
  
  cVar8 = FUN_142c711a0(param_1,&DAT_146865230,local_res10);
  if (cVar8 == '\0') goto LAB_1409cadeb;
  lVar11 = *(longlong *)(param_1 + 0x10);
  if (lVar11 == 0) {
LAB_1409cace6:
    lVar11 = 0;
  }
  else {
    lVar9 = FUN_1413dd0f0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1409cace6;
  }
  if ((local_res10[0] < 0) || (*(int *)(lVar11 + 0x220) <= local_res10[0])) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (bVar7) {
    puVar10 = (undefined8 *)((longlong)local_res10[0] * 0xb0 + *(longlong *)(lVar11 + 0x218));
    puVar1 = (undefined8 *)(param_1 + 0x4d8);
    uVar6 = puVar10[1];
    *(undefined8 *)(param_1 + 0x478) = *puVar10;
    *(undefined8 *)(param_1 + 0x480) = uVar6;
    *(undefined8 *)(param_1 + 0x488) = puVar10[2];
    uVar6 = puVar10[4];
    *(undefined8 *)(param_1 + 0x490) = puVar10[3];
    *(undefined8 *)(param_1 + 0x498) = uVar6;
    *(undefined8 *)(param_1 + 0x4a0) = puVar10[5];
    uVar6 = puVar10[7];
    *(undefined8 *)(param_1 + 0x4a8) = puVar10[6];
    *(undefined8 *)(param_1 + 0x4b0) = uVar6;
    *(undefined8 *)(param_1 + 0x4b8) = puVar10[8];
    uVar3 = *(undefined4 *)((longlong)puVar10 + 0x4c);
    uVar4 = *(undefined4 *)(puVar10 + 10);
    uVar5 = *(undefined4 *)((longlong)puVar10 + 0x54);
    *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(puVar10 + 9);
    *(undefined4 *)(param_1 + 0x4c4) = uVar3;
    *(undefined4 *)(param_1 + 0x4c8) = uVar4;
    *(undefined4 *)(param_1 + 0x4cc) = uVar5;
    *(undefined8 *)(param_1 + 0x4d0) = puVar10[0xb];
    if (puVar1 != puVar10 + 0xc) {
      iVar2 = *(int *)(puVar10 + 0xd);
      _Src = (void *)puVar10[0xc];
      *(int *)(param_1 + 0x4e0) = iVar2;
      if ((iVar2 == 0) && (*(int *)(param_1 + 0x4e4) == 0)) {
        *(undefined4 *)(param_1 + 0x4e4) = 0;
      }
      else {
        TArray<FPropChildSocketData,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
        _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 6);
      }
    }
    *(undefined2 *)(param_1 + 0x4e8) = *(undefined2 *)(puVar10 + 0xe);
  }
LAB_1409cadeb:
  FUN_1409c9270(param_1);
  return;
}



// FUNCTION 1409cae00 FUN_1409cae00 body=27 status=ok
// SIG undefined FUN_1409cae00(void)

void FUN_1409cae00(undefined8 param_1)

{
  FUN_1409c9270();
  FUN_1409ce990(param_1);
  return;
}



// FUNCTION 1409cae20 FUN_1409cae20 body=1013 status=ok
// SIG undefined FUN_1409cae20(void)

void FUN_1409cae20(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [8];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [8];
  
  *(undefined1 *)(param_1 + 0xd8) = 1;
  plVar2 = (longlong *)FUN_142c6f130();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x668))(plVar2);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_141442a00();
    lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar5 + 0x38) < DAT_1468654f0) &&
         (_Init_thread_header(&DAT_1468654f0), DAT_1468654f0 == -1)) {
        FName::FName(&DAT_1468654e8,L"ExitX",1);
        _Init_thread_footer(&DAT_1468654f0);
      }
      if ((*(int *)(lVar5 + 0x38) < DAT_146865500) &&
         (_Init_thread_header(&DAT_146865500), DAT_146865500 == -1)) {
        FName::FName(&DAT_1468654f8,L"ExitY",1);
        _Init_thread_footer(&DAT_146865500);
      }
      if ((*(int *)(lVar5 + 0x38) < DAT_146865510) &&
         (_Init_thread_header(&DAT_146865510), DAT_146865510 == -1)) {
        FName::FName(&DAT_146865508,L"ExitZ",1);
        _Init_thread_footer(&DAT_146865510);
      }
      if ((*(int *)(lVar5 + 0x38) < DAT_146865520) &&
         (_Init_thread_header(&DAT_146865520), DAT_146865520 == -1)) {
        FName::FName(&DAT_146865518,L"EntryX",1);
        _Init_thread_footer(&DAT_146865520);
      }
      if ((*(int *)(lVar5 + 0x38) < DAT_146865530) &&
         (_Init_thread_header(&DAT_146865530), DAT_146865530 == -1)) {
        FName::FName(&DAT_146865528,L"EntryY",1);
        _Init_thread_footer(&DAT_146865530);
      }
      if ((*(int *)(lVar5 + 0x38) < DAT_146865540) &&
         (_Init_thread_header(&DAT_146865540), DAT_146865540 == -1)) {
        FName::FName(&DAT_146865538,L"EntryZ",1);
        _Init_thread_footer(&DAT_146865540);
      }
      FUN_142c703a0(param_1,&DAT_1468654e8,local_28);
      FUN_142c703a0(param_1,&DAT_1468654f8,local_24);
      FUN_142c703a0(param_1,&DAT_146865508,local_20);
      FUN_142c703a0(param_1,&DAT_146865518,local_38);
      FUN_142c703a0(param_1,&DAT_146865528,local_34);
      FUN_142c703a0(param_1,&DAT_146865538,local_30);
      lVar5 = *(longlong *)(param_1 + 0x10);
      FUN_140a166d0(lVar4,local_28,local_38,*(undefined4 *)(lVar5 + 0x60),
                    *(undefined4 *)(lVar5 + 100),*(undefined1 *)(lVar5 + 0x68),
                    *(undefined1 *)(lVar5 + 0x69),*(undefined4 *)(lVar5 + 0x6c),
                    *(undefined4 *)(lVar5 + 0x70),0);
      *(longlong *)(param_1 + 200) = lVar4;
      plVar7 = (longlong *)(lVar4 + 0xaf8);
      plVar2 = (longlong *)FMemory::Realloc(0,0x20);
      if (plVar2 != (longlong *)0x0) {
        plVar2[1] = param_1;
        *plVar2 = (longlong)&PTR_GetPoolName_1441c0048;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar2[3] = lVar5;
        *plVar2 = (longlong)&PTR_GetPoolName_1441c0090;
      }
      uVar3 = 0;
      if (plVar2 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
        puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
        iVar1 = *(int *)(lVar4 + 0xb00);
        uVar3 = *puVar6;
        *(int *)(lVar4 + 0xb00) = iVar1 + 1;
        if (*(int *)(lVar4 + 0xb04) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
        }
        puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
        *puVar6 = plVar2;
        *(undefined4 *)(puVar6 + 1) = 2;
      }
      *(undefined8 *)(param_1 + 0xd0) = uVar3;
      *(undefined1 *)(param_1 + 0xd8) = 0;
    }
  }
  return;
}



// FUNCTION 1409cb220 FUN_1409cb220 body=469 status=ok
// SIG undefined FUN_1409cb220(void)

void FUN_1409cb220(longlong param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  undefined1 local_res8 [8];
  undefined **local_58;
  longlong local_50;
  undefined ***local_20;
  
  FUN_1407c2140();
  plVar4 = (longlong *)FUN_142c6f130(param_1);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_14148cad0();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1409cb276;
  }
  plVar4 = (longlong *)0x0;
LAB_1409cb276:
  *(longlong **)(param_1 + 0x500) = plVar4;
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x148))(plVar4);
    if (lVar5 != 0) {
      local_58 = &PTR_LAB_1441c00d8;
      local_20 = &local_58;
      local_50 = param_1;
      FUN_142c6db40(param_1,&local_58);
      FUN_14123df40(*(undefined8 *)(param_1 + 0x500),1);
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x500) + 0x148))();
      lVar5 = FUN_1407c74b0(uVar6);
      if (lVar5 != 0) {
        FUN_1407c7790(lVar5,local_res8,*(undefined8 *)(param_1 + 0x500));
        cVar3 = FUN_1407ce070(local_res8);
        if (cVar3 != '\0') {
          lVar5 = FUN_1407cb620(lVar5,local_res8);
          if (lVar5 != 0) {
            lVar5 = FUN_1407caf90(lVar5,0);
            if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x118), lVar5 != 0)) {
              lVar7 = ASoundManager::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((bVar2) &&
                 (cVar3 = *(char *)(lVar5 + 0x4da), *(char *)(param_1 + 0x4f8) = cVar3,
                 cVar3 != '\0')) {
                lVar5 = (**(code **)(**(longlong **)(param_1 + 0x500) + 0x148))();
                fVar1 = *(float *)(lVar5 + 0x790);
                uVar6 = FUN_1413da7b0();
                fVar8 = (float)FUN_142c70310(param_1,1,uVar6);
                *(float *)(param_1 + 0x4fc) = fVar8 + fVar1;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1409cb400 FUN_1409cb400 body=180 status=ok
// SIG undefined FUN_1409cb400(void)

void FUN_1409cb400(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  uVar3 = FUN_140a58ff0();
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    uVar6 = (undefined4)DAT_1468b5da0;
    uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    uVar3 = DAT_1468b5da8;
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
    iVar4 = movmskps(uVar3,auVar2);
    if (iVar4 != 0) {
      *(float *)(lVar1 + 0x250) = local_18;
      *(float *)(lVar1 + 0x254) = fStack_14;
      *(float *)(lVar1 + 600) = fStack_10;
      *(float *)(lVar1 + 0x25c) = fStack_c;
      puVar5 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
      *(undefined8 *)(lVar1 + 0x260) = *puVar5;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
    }
    uVar6 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    uVar3 = *(undefined4 *)(lVar1 + 0x268);
  }
  *(ulonglong *)(param_1 + 0x231c) = CONCAT44(uVar7,uVar6);
  *(undefined4 *)(param_1 + 0x2324) = uVar3;
  return;
}



// FUNCTION 1409cb4c0 FUN_1409cb4c0 body=143 status=ok
// SIG undefined FUN_1409cb4c0(void)

void FUN_1409cb4c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142223710();
  lVar2 = FUN_1422312c0(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      local_18 = param_1;
      if (param_1 == 0) {
        local_10 = 0;
      }
      else {
        uVar4 = UGameplayTagAssetInterface::GetPrivateStaticClass();
        local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
      }
      FUN_140be6c80(lVar2,&local_18);
    }
  }
  return;
}



// FUNCTION 1409cb550 FUN_1409cb550 body=78 status=ok
// SIG undefined FUN_1409cb550(void)

void FUN_1409cb550(longlong *param_1)

{
  longlong lVar1;
  
  FUN_142223710();
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(longlong *)(lVar1 + 400) != 0) {
    param_1[0xaf] = *(longlong *)(*(longlong *)(lVar1 + 400) + 0x90);
    return;
  }
  param_1[0xaf] = *(longlong *)(lVar1 + 0x3f8);
  return;
}



// FUNCTION 1409cb5a0 FUN_1409cb5a0 body=263 status=ok
// SIG undefined FUN_1409cb5a0(void)

void FUN_1409cb5a0(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 local_28;
  undefined4 local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  uVar3 = FUN_142223710();
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    uVar3 = (undefined4)DAT_1468b5da0;
    uVar6 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_20 = DAT_1468b5da8;
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
    iVar4 = movmskps(uVar3,auVar2);
    if (iVar4 != 0) {
      *(float *)(lVar1 + 0x250) = local_18;
      *(float *)(lVar1 + 0x254) = fStack_14;
      *(float *)(lVar1 + 600) = fStack_10;
      *(float *)(lVar1 + 0x25c) = fStack_c;
      puVar5 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
      *(undefined8 *)(lVar1 + 0x260) = *puVar5;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
    }
    uVar3 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
    uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    local_20 = *(undefined4 *)(lVar1 + 0x268);
  }
  local_28 = CONCAT44(uVar6,uVar3);
  *(undefined8 *)(param_1 + 0x480) = local_28;
  *(undefined4 *)(param_1 + 0x488) = local_20;
  FUN_142398ec0(*(undefined8 *)(param_1 + 0x468),0,1);
  FUN_142398ec0(*(undefined8 *)(param_1 + 0x460),0,1);
  local_28 = *(undefined8 *)(param_1 + 0x480);
  local_20 = *(undefined4 *)(param_1 + 0x488);
  AActor::SetActorRotation(param_1,&local_28,0);
  AActor::SetActorTickEnabled(param_1,0);
  return;
}



// FUNCTION 1409cb6b0 FUN_1409cb6b0 body=46 status=ok
// SIG undefined FUN_1409cb6b0(void)

void FUN_1409cb6b0(longlong *param_1)

{
  longlong lVar1;
  
  FUN_142223710();
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  param_1[0xc1] = lVar1;
  FUN_1409d94c0(param_1);
  return;
}



// FUNCTION 1409cb6e0 FUN_1409cb6e0 body=797 status=ok
// SIG undefined FUN_1409cb6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409cb6e0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined4 local_100;
  undefined8 *local_f8;
  undefined *local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  longlong local_d8;
  float local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  longlong local_60;
  undefined8 local_58;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FUN_142223710();
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar3 != 0) {
    plVar6 = param_1 + 0x92;
    if ((((int)param_1[0x93] == 0) || ((longlong *)*plVar6 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)*plVar6 + 0x18))(), cVar2 == '\0')) {
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_1441c0108;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        plVar4[2] = (longlong)FUN_1409de5f0;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar3;
        *plVar4 = (longlong)&PTR_FUN_1441c0150;
      }
      if (&local_d8 != plVar6) {
        if (plVar4 == (longlong *)0x0) {
          if (((int)param_1[0x93] != 0) && (plVar1 = (longlong *)*plVar6, plVar1 != (longlong *)0x0)
             ) {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*plVar6 != 0) {
              lVar3 = FMemory::Realloc(*plVar6,0,0);
              *plVar6 = lVar3;
            }
            *(undefined4 *)(param_1 + 0x93) = 0;
          }
        }
        else {
          (**(code **)(*plVar4 + 0x30))(plVar4,plVar6);
        }
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        lVar3 = FMemory::Realloc(plVar4,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
    }
    lVar3 = param_1[0x2d];
    local_a8 = 0;
    local_88 = 0;
    local_a0 = 0;
    local_60 = 0;
    local_58 = 0;
    local_40 = 0;
    local_38 = 0;
    local_98 = 0x10000;
    local_90 = 0;
    local_94 = 0;
    local_84 = 0x101;
    local_8c = 0;
    local_92 = 0;
    if (lVar3 == 0) {
      local_d8 = _DAT_1468b5d90;
      local_d0 = DAT_1468b5d98;
    }
    else {
      local_d8 = *(longlong *)(lVar3 + 0x220);
      local_d0 = *(float *)(lVar3 + 0x228);
    }
    local_b8 = (undefined4)local_d8;
    local_b4 = (undefined4)((ulonglong)local_d8 >> 0x20);
    local_b0 = local_d0 + 500.0;
    if (lVar3 == 0) {
      local_d8 = _DAT_1468b5d90;
      local_d0 = DAT_1468b5d98;
    }
    else {
      local_d8 = *(longlong *)(lVar3 + 0x220);
      local_d0 = *(float *)(lVar3 + 0x228);
    }
    local_c8 = (undefined4)local_d8;
    local_c4 = (undefined4)((ulonglong)local_d8 >> 0x20);
    local_c0 = local_d0 - 500.0;
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    local_e0 = 0;
    local_f0 = &DAT_146aefe68;
    local_f8 = &local_a8;
    local_108 = &local_c8;
    local_100 = 3;
    local_e8 = plVar6;
    plVar6 = (longlong *)FUN_142330010(uVar5,&local_d8,1,&local_b8);
    param_1[0x91] = *plVar6;
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1409cba00 FUN_1409cba00 body=526 status=ok
// SIG undefined FUN_1409cba00(void)

void FUN_1409cba00(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  FUN_140af1d80();
  FUN_14223ef90(param_1,1);
  uVar4 = AGFreezeCharacterCue::GetPrivateStaticClass();
  uVar5 = AGameStateBase::OnRep_GameModeClass(param_1,uVar4);
  uVar10 = 0;
  if (uVar5 != 0) {
    lVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1409cba7a;
  }
  uVar5 = uVar10;
LAB_1409cba7a:
  *(ulonglong *)(param_1 + 0x590) = uVar5;
  if (uVar5 != 0) {
    iStack_30 = 0;
    local_38 = FUN_1409dfb50;
    plVar1 = (longlong *)(uVar5 + 0x1e8);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_38._4_4_;
      *(int *)(plVar7 + 3) = iStack_30;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2c;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar6;
      *plVar7 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
      iVar3 = *(int *)(uVar5 + 0x1f0);
      *(int *)(uVar5 + 0x1f0) = iVar3 + 1;
      if (*(int *)(uVar5 + 500) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
      }
      puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar1);
      *puVar8 = plVar7;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
  }
  uVar4 = AUGCompanionAIController::GetPrivateStaticClass();
  AActor::GetComponentsByClass(param_1,&local_38,uVar4);
  uVar5 = (ulonglong)(local_38 + (longlong)iStack_30 * 8 + (7 - (longlong)local_38)) >> 3;
  if (local_38 + (longlong)iStack_30 * 8 < local_38) {
    uVar5 = uVar10;
  }
  pcVar9 = local_38;
  if (uVar5 != 0) {
    do {
      lVar6 = *(longlong *)pcVar9;
      if (lVar6 != 0) {
        iVar3 = FUN_1424f4b20(lVar6);
        *(int *)(param_1 + 0x598) = *(int *)(param_1 + 0x598) + iVar3;
        iVar3 = *(int *)(param_1 + 0x588);
        *(int *)(param_1 + 0x588) = iVar3 + 1;
        if (*(int *)(param_1 + 0x58c) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x580,iVar3);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x580) + (longlong)iVar3 * 8) = lVar6;
      }
      uVar10 = uVar10 + 1;
      pcVar9 = pcVar9 + 8;
    } while (uVar10 != uVar5);
  }
  if (local_38 != (code *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 1409cbc10 FUN_1409cbc10 body=2303 status=ok
// SIG undefined FUN_1409cbc10(void)

void FUN_1409cbc10(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  wchar_t *pwVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int *piVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined4 uVar24;
  float fVar25;
  undefined8 local_res8;
  longlong local_res10;
  int local_68;
  int iStack_64;
  longlong local_60;
  undefined2 *local_58;
  int local_50;
  
  FUN_1409fa090();
  uVar18 = 0;
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_1409b6fe0(param_1 + 0x730);
    *(byte *)(param_1 + 0xac2) = *(byte *)(param_1 + 0xac2) | 2;
    if (*(longlong *)(param_1 + 0xa50) != 0) {
      FUN_140e16190(*(longlong *)(param_1 + 0xa50),param_1,0);
    }
    if (*(longlong *)(param_1 + 0xa48) != 0) {
      *(undefined4 *)(param_1 + 0xa60) = *(undefined4 *)(*(longlong *)(param_1 + 0xa48) + 0x278);
      FUN_14141c870(param_1);
    }
    uVar24 = FUN_142c98860(param_1 + 0x758,param_1);
    uVar21 = *(uint *)(param_1 + 0xa60);
    if ((uVar21 & 4) != 0) {
      local_res8 = *(undefined8 *)(param_1 + 0x18);
      FName::ToString(&local_res8,&local_58);
      puVar11 = &DAT_143f3eda8;
      if (local_50 != 0) {
        puVar11 = local_58;
      }
      FString::PrintfImpl(&local_68,L"%s_STATIC_SHIELD",puVar11);
      puVar11 = &DAT_143f3eda8;
      if ((int)local_60 != 0) {
        puVar11 = (undefined2 *)CONCAT44(iStack_64,local_68);
      }
      uVar7 = FName::FName(&local_res10,puVar11,1);
      FUN_1409d8bd0(param_1 + 0xad0,param_1,uVar7,uVar24,param_1 + 0x7a0);
      if (CONCAT44(iStack_64,local_68) != 0) {
        FMemory::Free();
      }
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      iVar16 = *(int *)(param_1 + 0xca8);
      *(int *)(param_1 + 0xca8) = iVar16 + 1;
      if (*(int *)(param_1 + 0xcac) < iVar16 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xca0,iVar16);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xca0) + (longlong)iVar16 * 8) = param_1 + 0xad0;
      *(byte *)(param_1 + 0xba8) = *(byte *)(param_1 + 0xba8) | 2;
      uVar21 = *(uint *)(param_1 + 0xa60);
    }
    if ((uVar21 & 1) != 0) {
      fVar25 = (float)FUN_142c98860(param_1 + 0x8c8,param_1);
      iVar16 = (int)fVar25;
      if (0 < iVar16) {
        plVar17 = (longlong *)(param_1 + 0xbf0);
        iVar3 = *(int *)(param_1 + 0xbf8);
        *(int *)(param_1 + 0xbf8) = iVar3 + iVar16;
        if (*(int *)(param_1 + 0xbfc) < iVar3 + iVar16) {
          TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeGrow(plVar17,iVar3);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar16 * 0xf8 + *plVar17),(void *)*plVar17,
                   (longlong)iVar3 * 0xf8);
        puVar13 = (undefined8 *)*plVar17;
        do {
          FUN_1409c2890(puVar13);
          *puVar13 = &PTR_FUN_1441b3a80;
          puVar13 = puVar13 + 0x1f;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        uVar22 = uVar18;
        if (0 < *(int *)(param_1 + 0xbf8)) {
          do {
            local_res8 = *(undefined8 *)(param_1 + 0x18);
            FName::ToString(&local_res8,&local_68);
            puVar11 = &DAT_143f3eda8;
            if ((int)local_60 != 0) {
              puVar11 = (undefined2 *)CONCAT44(iStack_64,local_68);
            }
            FString::PrintfImpl(&local_58,L"%s_BAD_DOSE_%d",puVar11,uVar22);
            lVar20 = *plVar17;
            puVar11 = &DAT_143f3eda8;
            if (local_50 != 0) {
              puVar11 = local_58;
            }
            uVar7 = FName::FName(&local_res10,puVar11,1);
            FUN_1409d8bd0((longlong)(int)uVar22 * 0xf8 + lVar20,param_1,uVar7,uVar24,param_1 + 0x900
                         );
            if (local_58 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (CONCAT44(iStack_64,local_68) != 0) {
              FMemory::Free();
            }
            iVar16 = *(int *)(param_1 + 0xca8);
            lVar20 = *plVar17 + uVar18;
            *(int *)(param_1 + 0xca8) = iVar16 + 1;
            if (*(int *)(param_1 + 0xcac) < iVar16 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0xca0,iVar16);
            }
            uVar21 = (int)uVar22 + 1;
            uVar18 = uVar18 + 0xf8;
            *(longlong *)(*(longlong *)(param_1 + 0xca0) + (longlong)iVar16 * 8) = lVar20;
            pbVar1 = (byte *)(lVar20 + 0xd8);
            *pbVar1 = *pbVar1 | 2;
            uVar22 = (ulonglong)uVar21;
          } while ((int)uVar21 < *(int *)(param_1 + 0xbf8));
        }
      }
    }
    *(byte *)(param_1 + 0xac2) = *(byte *)(param_1 + 0xac2) & 0xef;
    bVar5 = 0;
    if ((*(byte *)(param_1 + 0xa60) & 0x20) != 0) {
      bVar5 = 0x10;
    }
    *(byte *)(param_1 + 0xac2) = *(byte *)(param_1 + 0xac2) | bVar5;
    FUN_142d2ad60(*(undefined8 *)(param_1 + 0x738));
  }
  pwVar19 = (wchar_t *)0x0;
  plVar17 = *(longlong **)(param_1 + 0xa38);
  iVar16 = *(int *)(param_1 + 0xa40);
  if (plVar17 != plVar17 + (longlong)iVar16 * 0x2d) {
    plVar14 = plVar17 + 0x27;
    do {
      *plVar14 = param_1;
      lVar20 = *(longlong *)(param_1 + 0xa50);
      if (lVar20 == 0) {
        lVar20 = *(longlong *)(param_1 + 0x118);
        if (lVar20 == 0) {
LAB_1409cbfe1:
          lVar20 = 0;
        }
        else {
          lVar8 = FUN_1413ffe00();
          if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          if (!bVar23) goto LAB_1409cbfe1;
        }
        *(longlong *)(param_1 + 0xa50) = lVar20;
        if (lVar20 != 0) goto LAB_1409cbff0;
      }
      else {
LAB_1409cbff0:
        if (*(char *)((longlong)plVar14 + -0x137) == '\0') {
          bVar23 = true;
        }
        else {
          bVar23 = (*(uint *)(*plVar14 + 0xa60) &
                   1 << (*(byte *)((longlong)plVar14 + -0x136) & 0x1f)) != 0;
        }
        *(bool *)(plVar14 + 1) = bVar23;
        uVar24 = FUN_142c98860(plVar14 + -0x26,lVar20);
        *(undefined4 *)((longlong)plVar14 + 0xc) = uVar24;
        fVar25 = (float)FUN_142c98860(plVar14 + -0x1f,lVar20);
        *(int *)(plVar14 + 2) = (int)fVar25;
        uVar24 = FUN_142c98860(plVar14 + -0x18,lVar20);
        *(undefined4 *)((longlong)plVar14 + 0x14) = uVar24;
        uVar24 = FUN_142c98860(plVar14 + -0x11,lVar20);
        *(undefined4 *)(plVar14 + 3) = uVar24;
      }
      plVar2 = plVar14 + 6;
      plVar14 = plVar14 + 0x2d;
    } while (plVar2 != plVar17 + (longlong)iVar16 * 0x2d);
  }
  if (*(longlong *)(param_1 + 0x740) != 0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop
                       (L"&AOakDroneProjectile_GRMLN::NotifyActorComponentBeginOverlap",L"::");
    pwVar10 = pwVar19;
    while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar10 = pwVar4;
    }
    FName::FName(&local_res10,pwVar10 + 2,1);
    lVar8 = local_res10;
    lVar20 = *(longlong *)(param_1 + 0x740);
    plVar17 = (longlong *)(lVar20 + 0x570);
    FWeakObjectPtr::operator=(&local_68,0);
    local_60 = 0;
    FWeakObjectPtr::operator=(&local_68,param_1);
    local_res8 = 0;
    local_60 = lVar8;
    if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_68), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_60);
    }
    piVar12 = (int *)*plVar17;
    iVar16 = *(int *)(lVar20 + 0x578);
    for (piVar15 = piVar12; piVar15 != piVar12 + (longlong)iVar16 * 4; piVar15 = piVar15 + 4) {
      if (((*piVar15 == local_68) && (piVar15[1] == iStack_64)) ||
         ((cVar6 = FWeakObjectPtr::IsValid(piVar15), cVar6 == '\0' &&
          (cVar6 = FWeakObjectPtr::IsValid(&local_68), cVar6 == '\0')))) {
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
      if ((bVar23) && (*(longlong *)(piVar15 + 2) == local_60)) {
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
      if (bVar23) {
        if ((int)((longlong)piVar15 - (longlong)piVar12 >> 4) != -1) goto LAB_1409cc1e7;
        break;
      }
    }
    iVar16 = *(int *)(lVar20 + 0x578);
    lVar8 = (longlong)iVar16;
    *(int *)(lVar20 + 0x578) = iVar16 + 1;
    if (*(int *)(lVar20 + 0x57c) < iVar16 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar16);
    }
    lVar20 = *plVar17;
    *(int *)(lVar20 + lVar8 * 0x10) = local_68;
    *(int *)(lVar20 + 4 + lVar8 * 0x10) = iStack_64;
    *(longlong *)(lVar20 + 8 + lVar8 * 0x10) = local_60;
LAB_1409cc1e7:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar17);
    pwVar9 = _guard_xfg_dispatch_icall_nop
                       (L"&AOakDroneProjectile_GRMLN::NotifyActorComponentEndOverlap",L"::");
    pwVar10 = pwVar19;
    while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar10 = pwVar4;
    }
    FName::FName(&local_res10,pwVar10 + 2,1);
    lVar8 = local_res10;
    lVar20 = *(longlong *)(param_1 + 0x740);
    plVar17 = (longlong *)(lVar20 + 0x580);
    FWeakObjectPtr::operator=(&local_68,0);
    local_60 = 0;
    FWeakObjectPtr::operator=(&local_68,param_1);
    local_res8 = 0;
    local_60 = lVar8;
    if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_68), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_60);
    }
    piVar12 = (int *)*plVar17;
    iVar16 = *(int *)(lVar20 + 0x588);
    for (piVar15 = piVar12; piVar15 != piVar12 + (longlong)iVar16 * 4; piVar15 = piVar15 + 4) {
      if (((*piVar15 == local_68) && (piVar15[1] == iStack_64)) ||
         ((cVar6 = FWeakObjectPtr::IsValid(piVar15), cVar6 == '\0' &&
          (cVar6 = FWeakObjectPtr::IsValid(&local_68), cVar6 == '\0')))) {
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
      if ((bVar23) && (*(longlong *)(piVar15 + 2) == local_60)) {
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
      if (bVar23) {
        if ((int)((longlong)piVar15 - (longlong)piVar12 >> 4) != -1) goto LAB_1409cc347;
        break;
      }
    }
    iVar16 = *(int *)(lVar20 + 0x588);
    lVar8 = (longlong)iVar16;
    *(int *)(lVar20 + 0x588) = iVar16 + 1;
    if (*(int *)(lVar20 + 0x58c) < iVar16 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar16);
    }
    lVar20 = *plVar17;
    *(int *)(lVar20 + lVar8 * 0x10) = local_68;
    *(int *)(lVar20 + 4 + lVar8 * 0x10) = iStack_64;
    *(longlong *)(lVar20 + 8 + lVar8 * 0x10) = local_60;
LAB_1409cc347:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar17);
  }
  if ((*(longlong **)(param_1 + 0x118) != (longlong *)0x0) &&
     (lVar20 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x668))(), lVar20 != 0)) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    if (bVar23) {
      pwVar10 = _guard_xfg_dispatch_icall_nop
                          (L"&AOakDroneProjectile_GRMLN::OnCinematicModeChanged",L"::");
      while (pwVar9 = pwVar10, pwVar9 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
        pwVar19 = pwVar9;
      }
      FName::FName(&local_res10,pwVar19 + 2,1);
      plVar17 = (longlong *)(lVar20 + 0x1b00);
      FWeakObjectPtr::operator=(&local_68,0);
      local_60 = 0;
      FWeakObjectPtr::operator=(&local_68,param_1);
      local_res8 = 0;
      local_60 = local_res10;
      if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_68), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_60);
      }
      piVar12 = (int *)*plVar17;
      iVar16 = *(int *)(lVar20 + 0x1b08);
      for (piVar15 = piVar12; piVar15 != piVar12 + (longlong)iVar16 * 4; piVar15 = piVar15 + 4) {
        if (((*piVar15 == local_68) && (piVar15[1] == iStack_64)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar15), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_68), cVar6 == '\0')))) {
          bVar23 = true;
        }
        else {
          bVar23 = false;
        }
        if ((bVar23) && (*(longlong *)(piVar15 + 2) == local_60)) {
          bVar23 = true;
        }
        else {
          bVar23 = false;
        }
        if (bVar23) {
          if ((int)((longlong)piVar15 - (longlong)piVar12 >> 4) != -1) goto LAB_1409cc4fa;
          break;
        }
      }
      iVar16 = *(int *)(lVar20 + 0x1b08);
      *(int *)(lVar20 + 0x1b08) = iVar16 + 1;
      if (*(int *)(lVar20 + 0x1b0c) < iVar16 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar16);
      }
      piVar12 = (int *)((longlong)iVar16 * 0x10 + *plVar17);
      *piVar12 = local_68;
      piVar12[1] = iStack_64;
      *(longlong *)(piVar12 + 2) = local_60;
LAB_1409cc4fa:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar17);
    }
  }
  return;
}



// FUNCTION 1409cc510 FUN_1409cc510 body=970 status=ok
// SIG undefined FUN_1409cc510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409cc510(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong local_res10;
  int local_48;
  int local_44;
  longlong local_40;
  
  FUN_1409ccdf0();
  if (*(char *)(param_1 + 0x128) == '\x03') {
    *(longlong *)(param_1 + 0x598) = param_1;
    cVar8 = '\0';
    if (*(longlong *)(param_1 + 0x490) != 0) {
      cVar8 = *(char *)(*(longlong *)(param_1 + 0x490) + 0xa0);
    }
    *(bool *)(param_1 + 0x600) = cVar8 == '\x02';
  }
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 != (longlong *)0x0) {
    uVar9 = UCircularThrobber::GetPrivateStaticClass();
    uVar9 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar9);
    *(undefined8 *)(param_1 + 0x4c0) = uVar9;
  }
  lVar3 = *(longlong *)(param_1 + 0x168);
  if (lVar3 != 0) {
    lVar10 = FUN_142a175e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBeginActorOverlap",L"::");
      pwVar7 = (wchar_t *)0x0;
      while (pwVar6 = pwVar11, pwVar6 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar7 = pwVar6;
      }
      FName::FName(&local_res10,pwVar7 + 2,1);
      lVar10 = local_res10;
      plVar2 = (longlong *)(lVar3 + 0x570);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = lVar10;
      if ((lVar10 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_48), lVar10 != 0)) {
        UObject::FindFunction(lVar10,local_40);
      }
      piVar12 = (int *)*plVar2;
      iVar1 = *(int *)(lVar3 + 0x578);
      for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar1 * 4; piVar13 = piVar13 + 4) {
        if (((*piVar13 == local_48) && (piVar13[1] == local_44)) ||
           ((cVar8 = FWeakObjectPtr::IsValid(piVar13), cVar8 == '\0' &&
            (cVar8 = FWeakObjectPtr::IsValid(&local_48), cVar8 == '\0')))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((bVar5) && (*(longlong *)(piVar13 + 2) == local_40)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_1409cc723;
          break;
        }
      }
      iVar1 = *(int *)(lVar3 + 0x578);
      *(int *)(lVar3 + 0x578) = iVar1 + 1;
      if (*(int *)(lVar3 + 0x57c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
      }
      piVar12 = (int *)((longlong)iVar1 * 0x10 + *plVar2);
      *piVar12 = local_48;
      piVar12[1] = local_44;
      *(longlong *)(piVar12 + 2) = local_40;
LAB_1409cc723:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar2);
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnEndActorOverlap",L"::");
      pwVar7 = (wchar_t *)0x0;
      while (pwVar6 = pwVar11, pwVar6 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar7 = pwVar6;
      }
      FName::FName(&local_res10,pwVar7 + 2,1);
      plVar2 = (longlong *)(lVar3 + 0x580);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = local_res10;
      if ((local_res10 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_48), lVar10 != 0)) {
        UObject::FindFunction(lVar10,local_40);
      }
      piVar12 = (int *)*plVar2;
      iVar1 = *(int *)(lVar3 + 0x588);
      for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar1 * 4; piVar13 = piVar13 + 4) {
        if (((*piVar13 == local_48) && (piVar13[1] == local_44)) ||
           ((cVar8 = FWeakObjectPtr::IsValid(piVar13), cVar8 == '\0' &&
            (cVar8 = FWeakObjectPtr::IsValid(&local_48), cVar8 == '\0')))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((bVar5) && (*(longlong *)(piVar13 + 2) == local_40)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_1409cc877;
          break;
        }
      }
      iVar1 = *(int *)(lVar3 + 0x588);
      *(int *)(lVar3 + 0x588) = iVar1 + 1;
      if (*(int *)(lVar3 + 0x58c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
      }
      piVar12 = (int *)((longlong)iVar1 * 0x10 + *plVar2);
      *piVar12 = local_48;
      piVar12[1] = local_44;
      *(longlong *)(piVar12 + 2) = local_40;
LAB_1409cc877:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar2);
      uVar14 = *(uint *)(lVar3 + 0x230) & _DAT_146864e50;
      uVar15 = *(uint *)(lVar3 + 0x234) & uRam0000000146864e54;
      uVar16 = *(uint *)(lVar3 + 0x238) & uRam0000000146864e58;
      uVar17 = *(uint *)(lVar3 + 0x23c) & uRam0000000146864e5c;
      auVar18._4_4_ = uVar15;
      auVar18._0_4_ = uVar14;
      auVar18._8_4_ = uVar16;
      auVar18._12_4_ = uVar17;
      auVar19._4_4_ = uVar16;
      auVar19._0_4_ = uVar15;
      auVar19._8_4_ = uVar14;
      auVar19._12_4_ = uVar17;
      auVar19 = minps(auVar18,auVar19);
      auVar4._4_4_ = uVar14;
      auVar4._0_4_ = uVar16;
      auVar4._8_4_ = uVar15;
      auVar4._12_4_ = uVar17;
      auVar19 = minps(auVar19,auVar4);
      *(float *)(param_1 + 0x60c) =
           auVar19._0_4_ * *(float *)(lVar3 + 0x710) + *(float *)(param_1 + 0x4b4);
    }
  }
  return;
}



// FUNCTION 1409cc8e0 FUN_1409cc8e0 body=27 status=ok
// SIG undefined FUN_1409cc8e0(void)

void FUN_1409cc8e0(undefined8 param_1)

{
  FUN_1409a00d0();
  FUN_1409e5700(param_1);
  return;
}



// FUNCTION 1409cc900 FUN_1409cc900 body=1249 status=ok
// SIG undefined FUN_1409cc900(void)

void FUN_1409cc900(longlong *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  wchar_t *pwVar5;
  char cVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  int *piVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_140af1d80();
  uVar16 = FUN_142c98860(param_1 + 0xcd,param_1);
  FUN_14246fd50(param_1 + 0xfb,uVar16);
  uVar16 = FUN_142c98860(param_1 + 0xd4,param_1);
  *(undefined4 *)(param_1 + 0xf6) = uVar16;
  uVar16 = FUN_142c98860(param_1 + 0xdb,param_1);
  pwVar14 = (wchar_t *)0x0;
  *(undefined4 *)(param_1 + 0xf9) = uVar16;
  if (((char)param_1[0x25] == '\x03') && (param_1[0xeb] != 0)) {
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_1409dc9f0;
    pwVar7 = _guard_xfg_dispatch_icall_nop
                       (L"&AOperativeBarrier::NotifyActorComponentBeginOverlap",L"::");
    pwVar10 = pwVar14;
    while (pwVar5 = pwVar7, pwVar5 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar10 = pwVar5;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    FUN_1407260e0(param_1[0xeb] + 0x570,param_1,&local_38,local_res8);
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_1409dcb90;
    pwVar7 = _guard_xfg_dispatch_icall_nop
                       (L"&AOperativeBarrier::NotifyActorComponentEndOverlap",L"::");
    pwVar10 = pwVar14;
    while (pwVar5 = pwVar7, pwVar5 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar10 = pwVar5;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    FUN_1407260e0(param_1[0xeb] + 0x580,param_1,&local_38,local_res8);
  }
  lVar11 = param_1[0xe9];
  if (lVar11 != 0) {
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_1409dd290;
    plVar13 = (longlong *)(lVar11 + 0x1e8);
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      *(int *)(plVar8 + 2) = (int)local_38;
      *(int *)((longlong)plVar8 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar8 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_30._4_4_;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar9;
      *plVar8 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar13,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_res8);
      iVar2 = *(int *)(lVar11 + 0x1f0);
      *(int *)(lVar11 + 0x1f0) = iVar2 + 1;
      if (*(int *)(lVar11 + 500) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar2);
      }
      lVar11 = *plVar13;
      *(longlong **)(lVar11 + (longlong)iVar2 * 0x10) = plVar8;
      *(undefined4 *)(lVar11 + 8 + (longlong)iVar2 * 0x10) = 3;
    }
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AOperativeBarrier::OnBarrierAbsorbedDamage",L"::");
    while (pwVar7 = pwVar10, pwVar7 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar14 = pwVar7;
    }
    FName::FName(&local_res10,pwVar14 + 2,1);
    lVar11 = param_1[0xe9];
    plVar8 = (longlong *)(lVar11 + 0x8f8);
    FWeakObjectPtr::operator=(&local_38,0);
    uStack_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    uStack_30 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_38), lVar9 != 0)) {
      UObject::FindFunction(lVar9,uStack_30);
    }
    piVar4 = (int *)*plVar8;
    iVar2 = *(int *)(lVar11 + 0x900);
    for (piVar12 = piVar4; piVar12 != piVar4 + (longlong)iVar2 * 4; piVar12 = piVar12 + 4) {
      if (((*piVar12 == (int)local_38) &&
          (local_38._4_4_ = (int)((ulonglong)local_38 >> 0x20),
          bVar15 = piVar12[1] == local_38._4_4_, bVar15)) ||
         ((cVar6 = FWeakObjectPtr::IsValid(piVar12), cVar6 == '\0' &&
          (cVar6 = FWeakObjectPtr::IsValid(&local_38), cVar6 == '\0')))) {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      if ((bVar15) && (*(ulonglong *)(piVar12 + 2) == uStack_30)) {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      if (bVar15) {
        if ((int)((longlong)piVar12 - (longlong)piVar4 >> 4) != -1) goto LAB_1409ccc8e;
        break;
      }
    }
    iVar2 = *(int *)(lVar11 + 0x900);
    lVar9 = (longlong)iVar2;
    *(int *)(lVar11 + 0x900) = iVar2 + 1;
    if (*(int *)(lVar11 + 0x904) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar2);
    }
    lVar11 = *plVar8;
    *(int *)(lVar11 + lVar9 * 0x10) = (int)local_38;
    *(int *)(lVar11 + lVar9 * 0x10 + 4) = local_38._4_4_;
    *(ulonglong *)(lVar11 + (lVar9 * 2 + 1) * 8) = uStack_30;
LAB_1409ccc8e:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
  }
  if ((char)param_1[0x25] == '\x03') {
    FUN_1409b6fe0(param_1 + 0xac);
    if (((param_1[0xff] != 0) &&
        (uVar3 = *(uint *)(param_1[0xff] + 600), *(uint *)(param_1 + 0x100) = uVar3,
        (uVar3 & 8) != 0)) && (lVar11 = param_1[0x2a], lVar11 != 0)) {
      lVar9 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if ((bVar15) && (lVar11 = FUN_140c42950(lVar11), lVar11 != 0)) {
        FUN_1409d0110(param_1,lVar11);
      }
    }
    if ((param_1[0xed] != 0) && ((*(byte *)(param_1 + 0x100) & 0x20) != 0)) {
      FUN_1409e2ad0(param_1);
    }
    FUN_14149eca0(param_1);
    if ((char)param_1[0x105] != '\x02') {
      cVar6 = '\x02';
      *(undefined1 *)(param_1 + 0x105) = 2;
      if (*(char *)((longlong)param_1 + 0x821) != '\0') {
        FUN_1409ee840(param_1);
        cVar6 = (char)param_1[0x105];
      }
      cVar1 = *(char *)((longlong)param_1 + 0x845);
      if (cVar6 != cVar1) {
        *(char *)((longlong)param_1 + 0x845) = cVar6;
        if (cVar6 == '\x03') {
          FUN_1409ee050(param_1);
          cVar6 = *(char *)((longlong)param_1 + 0x845);
        }
        FUN_14149eb20(param_1,cVar1,cVar6);
      }
      FUN_1409ef4c0(param_1);
      (**(code **)(*param_1 + 0x600))(param_1);
    }
    FUN_142d2ad60(param_1[0xea]);
  }
  return;
}



// FUNCTION 1409ccdf0 FUN_1409ccdf0 body=496 status=ok
// SIG undefined FUN_1409ccdf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409ccdf0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_142223710();
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_1409b6fe0(param_1 + 0x458);
    *(undefined1 *)(param_1 + 0x479) = 1;
    local_a8 = &LAB_1409dfcf0;
    uStack_a0 = 0;
    uVar5 = FUN_1414a2b10(param_1);
    uVar1 = AActor::GetWorldTimerManager(param_1);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_9c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar1,param_1 + 0x480,&local_98,uVar5);
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
      lVar3 = FMemory::Realloc(plVar2,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 1409ccfe0 FUN_1409ccfe0 body=42 status=ok
// SIG undefined FUN_1409ccfe0(void)

void FUN_1409ccfe0(longlong param_1)

{
  FUN_1409ccdf0();
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_1414a5e30(param_1);
    return;
  }
  return;
}



// FUNCTION 1409cd010 FUN_1409cd010 body=124 status=ok
// SIG undefined FUN_1409cd010(void)

void FUN_1409cd010(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1409fada0();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = UComboBoxString::GetPrivateStaticClass();
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
      *(longlong *)(param_1 + 0x468) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x468) = 0;
  return;
}



// FUNCTION 1409cd090 FUN_1409cd090 body=136 status=ok
// SIG undefined FUN_1409cd090(void)

void FUN_1409cd090(longlong *param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_1 != 0) {
    *param_2 = *(undefined1 *)(*param_1 + 0xa0);
    *param_3 = *(undefined8 *)(*param_1 + 0xa8);
    lVar1 = *param_1;
    uVar2 = *(undefined8 *)(lVar1 + 0xc0);
    *param_4 = *(undefined8 *)(lVar1 + 0xb8);
    param_4[1] = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0xd0);
    param_4[2] = *(undefined8 *)(lVar1 + 200);
    param_4[3] = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0xe0);
    param_4[4] = *(undefined8 *)(lVar1 + 0xd8);
    param_4[5] = uVar2;
    param_4[6] = *(undefined8 *)(lVar1 + 0xe8);
    lVar1 = *param_1;
    uVar2 = *(undefined8 *)(lVar1 + 0xf8);
    *param_5 = *(undefined8 *)(lVar1 + 0xf0);
    param_5[1] = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0x108);
    param_5[2] = *(undefined8 *)(lVar1 + 0x100);
    param_5[3] = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0x118);
    param_5[4] = *(undefined8 *)(lVar1 + 0x110);
    param_5[5] = uVar2;
    param_5[6] = *(undefined8 *)(lVar1 + 0x120);
  }
  return;
}



// FUNCTION 1409cd120 FUN_1409cd120 body=72 status=ok
// SIG undefined FUN_1409cd120(void)

void FUN_1409cd120(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    *param_2 = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0xa0);
    lVar1 = *(longlong *)(param_1 + 8);
    uVar2 = *(undefined8 *)(lVar1 + 0xb0);
    *param_3 = *(undefined8 *)(lVar1 + 0xa8);
    param_3[1] = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0xc0);
    param_3[2] = *(undefined8 *)(lVar1 + 0xb8);
    param_3[3] = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0xd0);
    param_3[4] = *(undefined8 *)(lVar1 + 200);
    param_3[5] = uVar2;
    param_3[6] = *(undefined8 *)(lVar1 + 0xd8);
  }
  return;
}



// FUNCTION 1409cd170 FUN_1409cd170 body=86 status=ok
// SIG undefined FUN_1409cd170(void)

void FUN_1409cd170(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *param_2 = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xa0);
    *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(lVar1 + 0xb8);
    *param_4 = *(undefined8 *)(lVar1 + 0xb0);
    param_4[1] = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 200);
    param_4[2] = *(undefined8 *)(lVar1 + 0xc0);
    param_4[3] = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0xd8);
    param_4[4] = *(undefined8 *)(lVar1 + 0xd0);
    param_4[5] = uVar2;
    param_4[6] = *(undefined8 *)(lVar1 + 0xe0);
  }
  return;
}



// FUNCTION 1409cd1d0 FUN_1409cd1d0 body=293 status=ok
// SIG undefined FUN_1409cd1d0(void)

bool FUN_1409cd1d0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  lVar4 = FUN_142c728d0();
  if (((lVar4 != 0) && (lVar7 = *(longlong *)(param_1 + 0x540), lVar7 != 0)) &&
     ((*(byte *)(lVar7 + 0x94) & 2) == 0)) {
    iVar1 = *(int *)(lVar7 + 0xc);
    lVar7 = 0;
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      if (*(char *)(param_1 + 0x550) != '\0') {
        lVar6 = *(longlong *)(param_1 + 0x548);
        if (lVar6 == 0) {
          return true;
        }
        if ((*(byte *)(lVar6 + 0x94) & 2) != 0) {
          return true;
        }
        iVar1 = *(int *)(lVar6 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar5 = iVar1 >> 0x1f & 0xffff;
          uVar3 = iVar1 + uVar5;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                  (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) {
          return true;
        }
      }
      if ((*(longlong **)(param_1 + 0x538) != (longlong *)0x0) &&
         (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x950))(), cVar2 == '\0')) {
        fVar8 = *(float *)(param_1 + 0x588) + *(float *)(param_1 + 0x584);
        return fVar8 < *(float *)(lVar4 + 0x790) || fVar8 == *(float *)(lVar4 + 0x790);
      }
    }
  }
  return true;
}



// FUNCTION 1409cd300 FUN_1409cd300 body=651 status=ok
// SIG undefined FUN_1409cd300(void)

undefined1 * FUN_1409cd300(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  undefined8 local_res8;
  undefined1 local_e8 [4];
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined4 local_94;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  
  lVar8 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_3[1];
  lVar7 = FWeakObjectPtr::Get(lVar2 + 0x60 + lVar8);
  if (lVar7 == 0) {
    FUN_142f89530(param_2);
  }
  else {
    pfVar9 = (float *)(lVar2 + 0x68 + lVar8);
    if (((DAT_146294670 == *pfVar9) && (DAT_146294674 == pfVar9[1])) && (DAT_146294678 == pfVar9[2])
       ) {
      FUN_142f894f0(local_e8,lVar7);
      local_97 = 0;
      local_c8 = *(undefined4 *)(lVar7 + 0x704);
      local_res8 = 0xffffffffffffffff;
      local_c4 = (float)FUN_142de77e0(param_1 + 0x100,*param_3,0,&local_res8);
      local_c4 = local_c4 + *(float *)(lVar7 + 0x708);
      lVar8 = FUN_14076aaa0(lVar7);
      *param_2 = local_e8[0];
      *(undefined8 *)(param_2 + 4) = local_e4;
      *(undefined4 *)(param_2 + 0xc) = local_dc;
      *(undefined4 *)(param_2 + 0x10) = local_d8;
      *(undefined4 *)(param_2 + 0x14) = local_d4;
      *(undefined4 *)(param_2 + 0x18) = local_d0;
      *(undefined4 *)(param_2 + 0x1c) = local_cc;
      param_2[0x50] = local_98;
      param_2[0x51] = local_97;
      *(undefined4 *)(param_2 + 0x54) = local_94;
      *(undefined4 *)(param_2 + 0x20) = local_c8;
      param_2[0x58] = local_90;
      *(undefined8 *)(param_2 + 0x28) = local_c0;
      *(undefined8 *)(param_2 + 0x30) = uStack_b8;
      param_2[0x59] = local_8f;
      *(float *)(param_2 + 0x24) = local_c4;
      *(undefined8 *)(param_2 + 0x38) = local_b0;
      *(undefined8 *)(param_2 + 0x40) = uStack_a8;
      *(undefined8 *)(param_2 + 0x48) = local_a0;
    }
    else {
      FUN_142f89470(local_88);
      local_68 = *(undefined4 *)(param_1 + 0x24c);
      local_res8 = 0xffffffffffffffff;
      local_37 = 0;
      local_64 = (float)FUN_142de77e0(param_1 + 0x100,*param_3,0,&local_res8);
      local_64 = *(float *)(param_1 + 0x250) * 0.5 + local_64;
      lVar8 = FUN_14076aaa0(lVar7);
      uVar3 = *(undefined8 *)(param_1 + 600);
      uVar4 = *(undefined8 *)(param_1 + 0x260);
      uVar5 = *(undefined8 *)(param_1 + 0x268);
      uVar6 = *(undefined8 *)(param_1 + 0x270);
      uVar1 = *(undefined8 *)(param_1 + 0x278);
      *param_2 = local_88[0];
      *(undefined8 *)(param_2 + 4) = local_84;
      *(undefined4 *)(param_2 + 0xc) = local_7c;
      *(undefined4 *)(param_2 + 0x10) = local_78;
      *(undefined4 *)(param_2 + 0x14) = local_74;
      *(undefined4 *)(param_2 + 0x18) = local_70;
      *(undefined4 *)(param_2 + 0x1c) = local_6c;
      param_2[0x50] = local_38;
      param_2[0x51] = local_37;
      *(undefined4 *)(param_2 + 0x54) = local_34;
      param_2[0x58] = local_30;
      *(undefined8 *)(param_2 + 0x28) = uVar3;
      *(undefined8 *)(param_2 + 0x30) = uVar4;
      param_2[0x59] = local_2f;
      *(undefined8 *)(param_2 + 0x38) = uVar5;
      *(undefined8 *)(param_2 + 0x40) = uVar6;
      *(undefined4 *)(param_2 + 0x20) = local_68;
      *(float *)(param_2 + 0x24) = local_64;
      *(undefined8 *)(param_2 + 0x48) = uVar1;
      local_8e = local_2e;
    }
    param_2[0x5a] = local_8e;
    param_2[0x52] = lVar8 == 0;
  }
  return param_2;
}



// FUNCTION 1409cd590 FUN_1409cd590 body=38 status=ok
// SIG undefined FUN_1409cd590(void)

void FUN_1409cd590(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FWeakObjectPtr::Get();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001409cd5aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x6d0))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 1409cd5c0 FUN_1409cd5c0 body=128 status=ok
// SIG undefined FUN_1409cd5c0(void)

void FUN_1409cd5c0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1[0x4c] != 0) {
    FUN_14223e980(param_1[0x4c],1);
    FUN_1409e4ba0(param_1,0);
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      cVar1 = UWorld::IsInSeamlessTravel(uVar3);
      if (cVar1 != '\0') {
        FUN_142227350(param_1[0x4c],0,1);
      }
    }
  }
  param_1[0x4c] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001409cd639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 1409cd640 FUN_1409cd640 body=520 status=ok
// SIG undefined FUN_1409cd640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409cd640(longlong param_1,longlong param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auStack_288 [32];
  undefined4 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined1 local_23c;
  undefined2 local_23b;
  undefined1 local_239;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  lVar4 = *(longlong *)(param_1 + 0x5a0);
  if (lVar4 == 0) {
    return;
  }
  lVar6 = 0;
  if ((*(byte *)(lVar4 + 0x94) & 2) == 0) {
    iVar3 = *(int *)(lVar4 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar8 = iVar3 >> 0x1f & 0xffff;
      uVar2 = iVar3 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar8) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      bVar1 = false;
      goto LAB_1409cd6d6;
    }
  }
  bVar1 = true;
LAB_1409cd6d6:
  if ((!bVar1) && (param_2 != 0)) {
    lVar4 = FUN_1429d7ab0();
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
      uVar5 = FUN_142e79d90();
      lVar4 = AGameStateBase::OnRep_GameModeClass(param_2,uVar5);
      if (lVar4 != 0) {
        lVar6 = FUN_142e79d90();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          iVar3 = FUN_142dec980(lVar4,*(undefined8 *)(param_1 + 0x458));
          local_23b = 0;
          local_239 = 0;
          local_248 = 0xbf800000;
          local_244 = 0xbf800000;
          local_240 = 0xbf800000;
          local_23c = 0;
          local_238 = 0x3f800000;
          local_234 = 0x3f800000;
          local_230 = 0x3f800000;
          if (iVar3 == 2) {
            uVar7 = FUN_142d0a300(local_228);
            uVar5 = *(undefined8 *)(param_1 + 0x470);
          }
          else {
            uVar7 = FUN_142d0a300(local_228);
            uVar5 = *(undefined8 *)(param_1 + 0x468);
          }
          local_268 = &local_248;
          local_258 = 0;
          local_260 = 0;
          FUN_140a86fb0(*(undefined8 *)(param_1 + 0x5a0),uVar5,param_2,uVar7);
          FUN_1409c53c0(local_228);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409cd850 FUN_1409cd850 body=490 status=ok
// SIG undefined FUN_1409cd850(void)

undefined8 FUN_1409cd850(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar2 = FUN_1406de560();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(*param_2 + 0x488);
    if (lVar1 == 0) {
      return 0;
    }
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar4 = FUN_141224040(lVar1,*param_2), lVar4 != 0)) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_1409cd905;
    }
    lVar4 = FUN_1414bbb50();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((((bVar3) && (lVar4 = *(longlong *)(lVar1 + 0x4d8), lVar4 != 0)) &&
        (*(char *)(lVar4 + 0x418) == '\x02')) &&
       ((*(longlong *)(lVar4 + 0x410) == *param_2 &&
        (lVar4 = *(longlong *)(lVar4 + 0x408), lVar4 != 0)))) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
LAB_1409cd905:
        FWeakObjectPtr::operator=(*(longlong *)(param_1 + 0xd8) + param_2[1] + 0x50,lVar4);
        return 1;
      }
    }
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
    if ((bVar3) && (cVar2 = FUN_140c48c20(lVar1), cVar2 != '\0')) {
      FWeakObjectPtr::operator=(*(longlong *)(param_1 + 0xd8) + param_2[1] + 0x50,lVar1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1409cda40 FUN_1409cda40 body=1973 status=ok
// SIG undefined FUN_1409cda40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1409cda40(longlong param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
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
  float fVar44;
  float fVar45;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined4 local_148;
  longlong local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  float local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
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
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_140 = 0;
  uVar6 = FUN_142cc3a70(param_1 + 0x148,*(undefined8 *)(*param_2 + 0x568),&local_140);
  lVar4 = local_140;
  if (local_140 != 0) {
    lVar7 = FUN_14148cad0();
    iVar5 = *(int *)(lVar7 + 0x90);
    uVar6 = (longlong)iVar5;
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar5) ||
       (uVar6 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x88),
       *(longlong *)(uVar6 + (longlong)iVar5 * 8) != lVar7 + 0x88)) {
      uVar6 = uVar6 & 0xffffffffffffff00;
    }
    else {
      uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    }
    if ((char)uVar6 != '\0') {
      uVar6 = *param_2;
      if (*(longlong *)(uVar6 + 0x488) != 0) {
        local_158 = 1;
        lVar7 = FUN_141220910(lVar4,*(longlong *)(uVar6 + 0x488),lVar7 + 0x88,
                              *(undefined1 *)(param_1 + 0x164));
        uVar6 = 0;
        if (lVar7 != 0) {
          if (*(longlong *)(*param_2 + 0x568) != 0) {
            lVar8 = FUN_142cef2b0(lVar7,&local_118);
            fVar22 = *(float *)(lVar8 + 0x10);
            fVar24 = *(float *)(lVar8 + 0x14);
            fVar19 = *(float *)(lVar8 + 0x18);
            lVar8 = *(longlong *)(lVar4 + 0x168);
            fVar44 = 0.0;
            fVar45 = 0.0;
            fVar11 = 0.0;
            fVar40 = (float)((uint)_DAT_146864db0 & _DAT_146864dc0);
            fVar41 = (float)((uint)fRam0000000146864db4 & uRam0000000146864dc4);
            fVar42 = (float)((uint)fRam0000000146864db8 & uRam0000000146864dc8);
            fVar43 = (float)((uint)fRam0000000146864dbc & uRam0000000146864dcc);
            if (lVar8 == 0) {
              fVar25 = 0.0;
              fVar26 = 0.0;
              fVar27 = 0.0;
              fVar16 = fVar40;
              fVar17 = fVar41;
              fVar18 = fVar42;
              fVar21 = fVar43;
              fVar15 = fRam0000000146864dbc;
            }
            else {
              fVar25 = *(float *)(lVar8 + 0x220);
              fVar26 = *(float *)(lVar8 + 0x224);
              fVar27 = *(float *)(lVar8 + 0x228);
              fVar44 = *(float *)(lVar8 + 0x210);
              fVar45 = *(float *)(lVar8 + 0x214);
              fVar11 = *(float *)(lVar8 + 0x218);
              fVar16 = *(float *)(lVar8 + 0x230);
              fVar17 = *(float *)(lVar8 + 0x234);
              fVar18 = *(float *)(lVar8 + 0x238);
              fVar21 = *(float *)(lVar8 + 0x23c);
              fVar15 = *(float *)(lVar8 + 0x21c);
            }
            auVar12._0_4_ = (float)(_DAT_146864e50 & (uint)fVar16);
            auVar12._4_4_ = (float)(uRam0000000146864e54 & (uint)fVar17);
            auVar12._8_4_ = (float)(uRam0000000146864e58 & (uint)fVar18);
            auVar12._12_4_ = (float)(uRam0000000146864e5c & (uint)fVar21);
            auVar13._4_4_ = -(uint)(fRam0000000146865114 < auVar12._4_4_);
            auVar13._0_4_ = -(uint)(_DAT_146865110 < auVar12._0_4_);
            auVar13._8_4_ = -(uint)(fRam0000000146865118 < auVar12._8_4_);
            auVar13._12_4_ = -(uint)(fRam000000014686511c < auVar12._12_4_);
            iVar5 = movmskps((int)lVar8,auVar13);
            fVar28 = _DAT_1468b5b70;
            fVar29 = fRam00000001468b5b74;
            fVar30 = fRam00000001468b5b78;
            fVar32 = fRam00000001468b5b7c;
            fVar36 = _DAT_1468b5b90;
            fVar37 = fRam00000001468b5b94;
            fVar38 = fRam00000001468b5b98;
            fVar31 = fRam00000001468b5b9c;
            fVar20 = _DAT_1468b5b80;
            fVar23 = fRam00000001468b5b84;
            fVar39 = fRam00000001468b5b88;
            if (iVar5 != 0) {
              auVar1._4_4_ = fVar17;
              auVar1._0_4_ = fVar16;
              auVar1._8_4_ = fVar18;
              auVar1._12_4_ = fVar21;
              auVar13 = rcpps(auVar12,auVar1);
              fVar20 = auVar13._0_4_;
              fVar23 = auVar13._4_4_;
              fVar36 = auVar13._8_4_;
              fVar37 = auVar13._12_4_;
              fVar28 = _DAT_146865120 * fVar44;
              fVar29 = fRam0000000146865124 * fVar45;
              fVar30 = fRam0000000146865128 * fVar11;
              fVar32 = fRam000000014686512c * fVar15;
              fVar11 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar16;
              fVar44 = (fVar23 + fVar23) - fVar23 * fVar23 * fVar17;
              fVar45 = (fVar36 + fVar36) - fVar36 * fVar36 * fVar18;
              fVar15 = (fVar37 + fVar37) - fVar37 * fVar37 * fVar21;
              fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar16;
              fVar44 = (fVar44 + fVar44) - fVar44 * fVar44 * fVar17;
              fVar45 = (fVar45 + fVar45) - fVar45 * fVar45 * fVar18;
              fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar21;
              fVar36 = (float)((-(uint)((float)(_DAT_146864e50 & (uint)fVar16) <= _DAT_146865110) &
                                (uint)fVar11 ^ (uint)fVar11) & _DAT_146864dc0);
              fVar37 = (float)((-(uint)((float)(uRam0000000146864e54 & (uint)fVar17) <=
                                       fRam0000000146865114) & (uint)fVar44 ^ (uint)fVar44) &
                              uRam0000000146864dc4);
              fVar38 = (float)((-(uint)((float)(uRam0000000146864e58 & (uint)fVar18) <=
                                       fRam0000000146865118) & (uint)fVar45 ^ (uint)fVar45) &
                              uRam0000000146864dc8);
              fVar25 = fVar36 * fVar25;
              fVar26 = fVar37 * fVar26;
              fVar27 = fVar38 * fVar27;
              fVar11 = fVar27 * fVar29 - fVar26 * fVar30;
              fVar44 = fVar25 * fVar30 - fVar27 * fVar28;
              fVar45 = fVar26 * fVar28 - fVar25 * fVar29;
              fVar11 = fVar11 + fVar11;
              fVar44 = fVar44 + fVar44;
              fVar45 = fVar45 + fVar45;
              fVar31 = (float)((-(uint)((float)(uRam0000000146864e5c & (uint)fVar21) <=
                                       fRam000000014686511c) & (uint)fVar15 ^ (uint)fVar15) &
                              uRam0000000146864dcc);
              fVar20 = (float)((uint)(0.0 - ((fVar45 * fVar29 - fVar44 * fVar30) +
                                            fVar32 * fVar11 + fVar25)) & _DAT_146864dc0);
              fVar23 = (float)((uint)(0.0 - ((fVar11 * fVar30 - fVar45 * fVar28) +
                                            fVar32 * fVar44 + fVar26)) & uRam0000000146864dc4);
              fVar39 = (float)((uint)(0.0 - ((fVar44 * fVar28 - fVar11 * fVar29) +
                                            fVar32 * fVar45 + fVar27)) & uRam0000000146864dc8);
            }
            auVar9._4_4_ = fVar41;
            auVar9._0_4_ = fVar40;
            auVar9._8_4_ = fVar42;
            auVar9._12_4_ = fVar43;
            auVar3._4_4_ = fVar37;
            auVar3._0_4_ = fVar36;
            auVar3._8_4_ = fVar38;
            auVar3._12_4_ = fVar31;
            auVar13 = minps(auVar9,auVar3);
            auVar10._4_4_ = -(uint)(auVar13._4_4_ < fRam0000000146864e14);
            auVar10._0_4_ = -(uint)(auVar13._0_4_ < _DAT_146864e10);
            auVar10._8_4_ = -(uint)(auVar13._8_4_ < fRam0000000146864e18);
            auVar10._12_4_ = -(uint)(auVar13._12_4_ < fRam0000000146864e1c);
            iVar5 = movmskps(iVar5,auVar10);
            if (iVar5 == 0) {
              fVar36 = fVar36 * fVar22;
              fVar37 = fVar37 * fVar24;
              fVar38 = fVar38 * fVar19;
              fVar11 = fVar38 * fVar29 - fVar37 * fVar30;
              fVar22 = fVar36 * fVar30 - fVar38 * fVar28;
              fVar24 = fVar37 * fVar28 - fVar36 * fVar29;
              fVar11 = fVar11 + fVar11;
              fVar22 = fVar22 + fVar22;
              fVar24 = fVar24 + fVar24;
              fVar20 = (fVar24 * fVar29 - fVar22 * fVar30) + fVar32 * fVar11 + fVar36 + fVar20;
              fVar23 = (fVar11 * fVar30 - fVar24 * fVar28) + fVar32 * fVar22 + fVar37 + fVar23;
              fStack_130 = (fVar22 * fVar28 - fVar11 * fVar29) + fVar32 * fVar24 + fVar38 + fVar39;
            }
            else {
              fVar44 = fVar29 + fVar29;
              fVar45 = fVar30 + fVar30;
              fVar25 = (fVar28 + fVar28) * fVar28;
              fVar11 = (fVar28 + fVar28) * fVar32;
              fVar33 = (fVar45 * fVar32 + fVar44 * fVar28) * fVar36;
              fVar34 = (fVar11 + fVar45 * fVar29) * fVar37;
              fVar35 = (fVar44 * fVar32 + fVar45 * fVar28) * fVar38;
              fVar17 = fVar37 * (fVar44 * fVar28 - fVar45 * fVar32);
              fVar21 = fVar38 * (fVar45 * fVar29 - fVar11);
              fVar28 = fVar36 * (fVar45 * fVar28 - fVar44 * fVar32);
              fVar11 = (float)((uint)((_DAT_146864db0 - (fVar45 * fVar30 + fVar44 * fVar29)) *
                                     fVar36) & _DAT_146864dc0);
              fVar45 = (float)((uint)((fRam0000000146864db4 - (fVar45 * fVar30 + fVar25)) * fVar37)
                              & uRam0000000146864dc4);
              fVar26 = (float)((uint)((fRam0000000146864db8 - (fVar44 * fVar29 + fVar25)) * fVar38)
                              & uRam0000000146864dc8);
              fVar16 = (float)((uint)((fRam0000000146864dbc - (fVar25 + fVar25)) * fVar31) &
                              uRam0000000146864dcc);
              fVar30 = (fRam0000000146864dbc * 0.0 + 0.0) * fVar40;
              fVar32 = (fRam0000000146864dbc * 0.0 + 0.0) * fVar41;
              fVar31 = (fRam0000000146864dbc * 0.0 + 0.0) * fVar42;
              fVar18 = fVar41 * (0.0 - fRam0000000146864dbc * 0.0);
              fVar15 = fVar42 * (0.0 - fRam0000000146864dbc * 0.0);
              fVar29 = fVar40 * (0.0 - fRam0000000146864dbc * 0.0);
              fVar44 = (float)((uint)((_DAT_146864db0 - 0.0) * fVar40) & _DAT_146864dc0);
              fVar25 = (float)((uint)((fRam0000000146864db4 - 0.0) * fVar41) & uRam0000000146864dc4)
              ;
              fVar27 = (float)((uint)((fRam0000000146864db8 - 0.0) * fVar42) & uRam0000000146864dc8)
              ;
              fVar43 = (float)((uint)((fRam0000000146864dbc - 0.0) * fVar43) & uRam0000000146864dcc)
              ;
              local_118 = fVar30 * fVar17 + fVar44 * fVar11 + fVar29 * fVar35 + fVar43 * fVar20;
              fStack_114 = fVar30 * fVar45 + fVar44 * fVar33 + fVar29 * fVar21 + fVar43 * fVar23;
              fStack_110 = fVar30 * fVar34 + fVar44 * fVar28 + fVar29 * fVar26 + fVar43 * fVar39;
              fStack_10c = fVar30 * fVar16 + fVar44 * fVar16 + fVar29 * fVar16 +
                           fVar43 * fRam0000000146864dbc;
              local_108 = fVar25 * fVar17 + fVar18 * fVar11 + fVar32 * fVar35 + fVar43 * fVar20;
              fStack_104 = fVar25 * fVar45 + fVar18 * fVar33 + fVar32 * fVar21 + fVar43 * fVar23;
              fStack_100 = fVar25 * fVar34 + fVar18 * fVar28 + fVar32 * fVar26 + fVar43 * fVar39;
              fStack_fc = fVar25 * fVar16 + fVar18 * fVar16 + fVar32 * fVar16 +
                          fVar43 * fRam0000000146864dbc;
              local_f8 = fVar15 * fVar17 + fVar31 * fVar11 + fVar27 * fVar35 + fVar43 * fVar20;
              fStack_f4 = fVar15 * fVar45 + fVar31 * fVar33 + fVar27 * fVar21 + fVar43 * fVar23;
              fStack_f0 = fVar15 * fVar34 + fVar31 * fVar28 + fVar27 * fVar26 + fVar43 * fVar39;
              fStack_ec = fVar15 * fVar16 + fVar31 * fVar16 + fVar27 * fVar16 +
                          fVar43 * fRam0000000146864dbc;
              local_e8 = fVar24 * fVar17 + fVar22 * fVar11 + fVar19 * fVar35 +
                         fRam0000000146864dbc * fVar20;
              fStack_e4 = fVar24 * fVar45 + fVar22 * fVar33 + fVar19 * fVar21 +
                          fRam0000000146864dbc * fVar23;
              fStack_e0 = fVar24 * fVar34 + fVar22 * fVar28 + fVar19 * fVar26 +
                          fRam0000000146864dbc * fVar39;
              fStack_dc = fVar24 * fVar16 + fVar22 * fVar16 + fVar19 * fVar16 +
                          fRam0000000146864dbc * fRam0000000146864dbc;
              FMatrix::RemoveScaling(&local_118);
              fVar11 = (float)(-(uint)(_DAT_146864e10 <= fVar36 * fVar40) &
                               (_DAT_146864e00 ^ (uint)_DAT_146864db0) ^ _DAT_146864e00);
              fVar22 = (float)(-(uint)(fRam0000000146864e14 <= fVar37 * fVar41) &
                               (uRam0000000146864e04 ^ (uint)fRam0000000146864db4) ^
                              uRam0000000146864e04);
              fVar24 = (float)(-(uint)(fRam0000000146864e18 <= fVar38 * fVar42) &
                               (uRam0000000146864e08 ^ (uint)fRam0000000146864db8) ^
                              uRam0000000146864e08);
              local_118 = local_118 * fVar11;
              fStack_114 = fStack_114 * fVar11;
              fStack_110 = fStack_110 * fVar11;
              fStack_104 = fStack_104 * fVar22;
              fStack_100 = fStack_100 * fVar22;
              local_108 = local_108 * fVar22;
              fStack_f4 = fStack_f4 * fVar24;
              fStack_f0 = fStack_f0 * fVar24;
              local_f8 = local_f8 * fVar24;
              FQuat::FQuat(&local_138,&local_118);
              local_148 = 0x322bcc77;
              auVar14._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
              auVar14._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
              auVar14._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
              auVar14._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
              fVar19 = auVar14._4_4_ + auVar14._0_4_;
              fVar44 = auVar14._8_4_ + auVar14._4_4_;
              fVar45 = auVar14._0_4_ + auVar14._12_4_;
              auVar2._4_4_ = fVar44;
              auVar2._0_4_ = fVar19;
              auVar2._8_4_ = auVar14._12_4_ + auVar14._8_4_;
              auVar2._12_4_ = fVar45;
              auVar13 = rsqrtps(auVar14,auVar2);
              fVar11 = auVar13._0_4_;
              fVar22 = auVar13._4_4_;
              fVar24 = auVar13._12_4_;
              fVar11 = (_DAT_146864da0 - fVar11 * fVar11 * fVar19 * _DAT_146864da0) * fVar11 +
                       fVar11;
              fVar22 = (fRam0000000146864da4 - fVar22 * fVar22 * fVar44 * fRam0000000146864da4) *
                       fVar22 + fVar22;
              fVar24 = (fRam0000000146864dac - fVar24 * fVar24 * fVar45 * fRam0000000146864dac) *
                       fVar24 + fVar24;
              local_138 = (float)(((uint)(((_DAT_146864da0 -
                                           fVar11 * fVar11 * fVar19 * _DAT_146864da0) * fVar11 +
                                          fVar11) * local_138) ^ _DAT_146864d90) &
                                  -(uint)(1e-08 <= fVar19) ^ _DAT_146864d90);
              fStack_134 = (float)(((uint)(((fRam0000000146864da4 -
                                            fVar22 * fVar22 * fVar44 * fRam0000000146864da4) *
                                            fVar22 + fVar22) * fStack_134) ^ uRam0000000146864d94) &
                                   -(uint)(1e-08 <= fVar44) ^ uRam0000000146864d94);
              fStack_12c = (float)(((uint)(((fRam0000000146864dac -
                                            fVar24 * fVar24 * fVar45 * fRam0000000146864dac) *
                                            fVar24 + fVar24) * fStack_12c) ^ uRam0000000146864d9c) &
                                   -(uint)(1e-08 <= fVar45) ^ uRam0000000146864d9c);
              fVar20 = local_e8;
              fVar23 = fStack_e4;
              fStack_130 = fStack_e0;
            }
            local_128 = CONCAT44(fVar23,fVar20);
            local_120 = fStack_130;
            FUN_142cd0df0(param_1 + 0x168,*(undefined8 *)(*param_2 + 0x568),&local_128);
          }
          lVar8 = param_2[1] + *(longlong *)(param_1 + 0xd8);
          FWeakObjectPtr::operator=(lVar8 + 0x50,lVar4);
          FWeakObjectPtr::operator=(lVar8 + 0x58,lVar7);
          uVar6 = FUN_1406de560(param_1,param_2);
          return uVar6;
        }
      }
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1409ce200 FUN_1409ce200 body=93 status=ok
// SIG undefined FUN_1409ce200(void)

void FUN_1409ce200(longlong param_1,longlong *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(*param_2 + 0x568) != 0) {
    local_18 = *(undefined8 *)(param_1 + 0x3f0);
    local_10 = *(undefined4 *)(param_1 + 0x3f8);
    FUN_142cd0df0(param_1 + 0x3c8,*(longlong *)(*param_2 + 0x568),&local_18);
  }
  FUN_140707fc0(param_1,param_2);
  return;
}



// FUNCTION 1409ce260 FUN_1409ce260 body=89 status=ok
// SIG undefined FUN_1409ce260(void)

void FUN_1409ce260(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x60 + *(longlong *)(param_2 + 8));
  if (lVar1 == 0) {
    lVar1 = FUN_1409ef050(param_1,param_2);
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_140708a20(param_1,param_2);
  return;
}



// FUNCTION 1409ce2c0 FUN_1409ce2c0 body=194 status=ok
// SIG undefined FUN_1409ce2c0(void)

ulonglong FUN_1409ce2c0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  char local_48 [16];
  longlong *local_38;
  
  uVar6 = FUN_1409e3da0();
  if ((uVar6 != 0) && (*(char *)(uVar6 + 0xec0) == '\x03')) {
    FUN_142de2fd0(local_48);
    cVar5 = (**(code **)(**(longlong **)(uVar6 + 0x10e0) + 0x420))
                      (*(longlong **)(uVar6 + 0x10e0),*param_2,0,local_48);
    if ((cVar5 == '\0') || (local_48[0] == '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    return uVar6;
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1409ce390 FUN_1409ce390 body=197 status=ok
// SIG undefined FUN_1409ce390(void)

undefined8 FUN_1409ce390(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*(longlong *)*param_2 + 0x690))();
  lVar3 = DAT_146865300;
  if (lVar2 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar3 = DAT_146865300;
    if ((bVar1) && (*(longlong *)(lVar2 + 0x7c0) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x7c0) + 0x70);
    }
  }
  if ((lVar3 == (&DAT_146865300)[*(byte *)(param_1 + 0x100)]) != (bool)*(char *)(param_1 + 0x101)) {
    return 1;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + param_2[1]) = 2;
  return 0;
}



// FUNCTION 1409ce460 FUN_1409ce460 body=234 status=ok
// SIG undefined FUN_1409ce460(void)

bool FUN_1409ce460(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  cVar1 = FUN_14044aea0(lVar6 + 0x48,0);
  if (cVar1 == '\0') {
    lVar3 = (**(code **)(*(longlong *)*param_2 + 0x690))();
    if (lVar3 != 0) {
      lVar4 = FUN_14148cad0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((bVar7) && (*(longlong *)(lVar3 + 0x518) != 0)) {
        FWeakObjectPtr::operator=(lVar6 + 0x50);
        lVar3 = FWeakObjectPtr::Get(lVar6 + 0x50);
        uVar5 = FWeakObjectPtr::Get(lVar6 + 0x48);
        uVar2 = FUN_142dec980(uVar5,*(undefined8 *)(lVar3 + 0x180));
        bVar7 = *(byte *)(param_1 + 0x100) == uVar2;
        goto LAB_1409ce529;
      }
    }
  }
  bVar7 = *(char *)(param_1 + 0x100) == '\x01';
LAB_1409ce529:
  return bVar7 != (bool)*(char *)(param_1 + 0x101);
}



// FUNCTION 1409ce550 FUN_1409ce550 body=29 status=ok
// SIG undefined FUN_1409ce550(void)

bool FUN_1409ce550(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1409ce650();
  return cVar1 != *(char *)(param_1 + 0x100);
}



// FUNCTION 1409ce570 FUN_1409ce570 body=209 status=ok
// SIG undefined FUN_1409ce570(void)

undefined8 FUN_1409ce570(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    lVar3 = FUN_1413e48b0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = param_2[1] + *(longlong *)(param_1 + 0xd8);
      if (*(char *)(lVar4 + 0x758) == '\0') {
        *(undefined1 *)(lVar3 + 0x29) = 2;
        return 0;
      }
      cVar2 = FUN_14044aea0(lVar3 + 0x48,0);
      if (cVar2 == '\0') {
        return 1;
      }
      lVar4 = param_2[1];
      lVar3 = *(longlong *)(param_1 + 0xd8);
      goto LAB_1409ce62a;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0xd8);
  lVar3 = param_2[1];
LAB_1409ce62a:
  *(undefined1 *)(lVar4 + 0x29 + lVar3) = 2;
  return 0;
}



// FUNCTION 1409ce650 FUN_1409ce650 body=206 status=ok
// SIG undefined FUN_1409ce650(void)

undefined8 FUN_1409ce650(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0x690))();
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
      lVar3 = FUN_141227a00(lVar3,0);
      if (lVar3 == 0) {
        if (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x48 + param_2[1]) != '\0') {
          return 1;
        }
      }
      else {
        uVar5 = (**(code **)(*(longlong *)*param_2 + 0x678))();
        iVar2 = FUN_140b812b0(lVar3,uVar5);
        if (iVar2 != 0) {
          return 1;
        }
        *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x48 + param_2[1]) = 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1409ce720 FUN_1409ce720 body=616 status=ok
// SIG undefined FUN_1409ce720(void)

void FUN_1409ce720(longlong param_1)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x520) == 0) {
    lVar1 = FUN_142c6f130();
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x168) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x168) + 400) != 0)) {
      lVar1 = FUN_1409befa0(DAT_146b17150 + 0xcf8,lVar1);
      *(longlong *)(param_1 + 0x520) = lVar1;
      if (lVar1 != 0) {
        lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(int *)(lVar1 + 0x38) < DAT_1468654a0) {
          _Init_thread_header(&DAT_1468654a0);
          if (DAT_1468654a0 == -1) {
            FName::FName(&DAT_146865498,L"OffsetX",1);
            _Init_thread_footer(&DAT_1468654a0);
          }
        }
        if (*(int *)(lVar1 + 0x38) < DAT_1468654b0) {
          _Init_thread_header(&DAT_1468654b0);
          if (DAT_1468654b0 == -1) {
            FName::FName(&DAT_1468654a8,L"OffsetY",1);
            _Init_thread_footer(&DAT_1468654b0);
          }
        }
        if (*(int *)(lVar1 + 0x38) < DAT_1468654c0) {
          _Init_thread_header(&DAT_1468654c0);
          if (DAT_1468654c0 == -1) {
            FName::FName(&DAT_1468654b8,L"OffsetZ",1);
            _Init_thread_footer(&DAT_1468654c0);
          }
        }
        local_28 = 0;
        local_20[0] = 0;
        FUN_142c703a0(param_1,&DAT_146865498,&local_28);
        FUN_142c703a0(param_1,&DAT_1468654a8,(longlong)&local_28 + 4);
        FUN_142c703a0(param_1,&DAT_1468654b8,local_20);
        lVar1 = *(longlong *)(param_1 + 0x10);
        FUN_14288e6f0(*(undefined8 *)(param_1 + 0x520),1);
        local_18 = DAT_1468b5da0;
        local_10 = DAT_1468b5da8;
        FUN_142daf590(*(undefined8 *)(param_1 + 0x520),&local_18,*(undefined4 *)(lVar1 + 0x21c),1,0,
                      1);
        local_18 = local_28;
        local_10 = local_20[0];
        FUN_142daf3f0(*(undefined8 *)(param_1 + 0x520),&local_18,*(undefined4 *)(lVar1 + 0x218),1,0,
                      1);
      }
    }
  }
  return;
}



// FUNCTION 1409ce990 FUN_1409ce990 body=198 status=ok
// SIG undefined FUN_1409ce990(void)

void FUN_1409ce990(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((((*(longlong *)(param_1 + 0x520) == 0) &&
       (lVar1 = *(longlong *)(param_1 + 0x10), *(char *)(lVar1 + 0x21a) != '\0')) &&
      (lVar2 = FUN_142c6f130(), lVar2 != 0)) &&
     ((*(longlong *)(lVar2 + 0x168) != 0 && (*(longlong *)(*(longlong *)(lVar2 + 0x168) + 400) != 0)
      ))) {
    lVar2 = FUN_1409befa0(DAT_146b17150 + 0xcf8,lVar2);
    *(longlong *)(param_1 + 0x520) = lVar2;
    if (lVar2 != 0) {
      FUN_14288e6f0(lVar2,1);
      local_18 = DAT_1468b5da0;
      local_10 = DAT_1468b5da8;
      FUN_142daf590(*(undefined8 *)(param_1 + 0x520),&local_18,*(undefined4 *)(lVar1 + 0x21c),1,0,1)
      ;
    }
  }
  return;
}



// FUNCTION 1409cea60 FUN_1409cea60 body=220 status=ok
// SIG undefined FUN_1409cea60(void)

void FUN_1409cea60(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  if (*(char *)(param_1 + 400) != '\0') {
    lVar3 = FUN_142c6f130();
    FUN_142ce4e60(param_1);
    if ((lVar3 != 0) && (iVar1 = FUN_142235230(lVar3), iVar1 != 1)) {
      iVar1 = *(int *)(lVar3 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar8 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar8;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar8) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if (((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) &&
         (*(char *)(*(longlong *)(param_1 + 0x10) + 0x130) != '\0')) {
        uVar5 = FUN_1430a8880();
        plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar5);
        if (plVar6 != (longlong *)0x0) {
          lVar3 = *plVar6;
          puVar7 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,local_res8);
          (**(code **)(lVar3 + 0x128))(plVar6,*puVar7);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409ceb40 FUN_1409ceb40 body=256 status=ok
// SIG undefined FUN_1409ceb40(void)

void FUN_1409ceb40(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 200);
  if ((lVar1 != 0) && (lVar3 = *(longlong *)(param_1 + 0xd0), lVar3 != 0)) {
    iVar4 = 0;
    if (0 < *(int *)(lVar1 + 0xb00)) {
      lVar6 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 0xaf8) + lVar6);
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
      } while (iVar4 < *(int *)(lVar1 + 0xb00));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0xaf8,0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 1409cec40 FUN_1409cec40 body=191 status=ok
// SIG undefined FUN_1409cec40(void)

void FUN_1409cec40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res10;
  
  lVar1 = *(longlong *)(*param_2 + 0x568);
  if (lVar1 != 0) {
    local_res10 = 0;
    FUN_142cc4b40(param_1 + 0x3a8,lVar1,&local_res10);
    lVar4 = local_res10;
    if (local_res10 != 0) {
      lVar5 = UUGPauseScreenUW::GetPrivateStaticClass();
      lVar2 = *(longlong *)(lVar4 + 0x10);
      if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined8 *)(lVar4 + 0x2d8) = 0;
        FUN_142cbcc90(param_1 + 0x3a8,lVar1);
      }
    }
    FUN_14070a420(param_1,param_2);
  }
  return;
}



// FUNCTION 1409ced00 FUN_1409ced00 body=50 status=ok
// SIG undefined FUN_1409ced00(void)

void FUN_1409ced00(longlong *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_143059e20(param_1[1],param_1[0x1e]);
                    /* WARNING: Could not recover jumptable at 0x0001409ced2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}



// FUNCTION 1409ced40 FUN_1409ced40 body=56 status=ok
// SIG undefined FUN_1409ced40(void)

void FUN_1409ced40(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x804) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x804) = 0;
    FUN_14149ebf0(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001409ced6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x600))(param_1);
    return;
  }
  return;
}



// FUNCTION 1409ced80 FUN_1409ced80 body=208 status=ok
// SIG undefined FUN_1409ced80(void)

void FUN_1409ced80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xa38);
    lVar5 = (longlong)*(int *)(param_1 + 0xa40) * 0x168 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x168) {
      if (*(longlong *)(lVar4 + 0xe8) != 0) {
        lVar1 = FUN_141432370();
        lVar6 = *(longlong *)(lVar4 + 0xe8);
        for (lVar3 = lVar6; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
          if (lVar3 == lVar1) goto LAB_1409cedf0;
        }
      }
      lVar6 = 0;
LAB_1409cedf0:
      if (*(longlong *)(param_2 + 0x110) != 0) {
        lVar2 = FUN_1430aef40();
        lVar3 = *(longlong *)(param_2 + 0x110);
        for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == lVar2) goto LAB_1409cee20;
        }
      }
      lVar3 = 0;
LAB_1409cee20:
      if (lVar6 == lVar3) {
        FUN_1409d3e40(lVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409cee50 FUN_1409cee50 body=1093 status=ok
// SIG undefined FUN_1409cee50(void)

void FUN_1409cee50(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_1406dfc10();
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x3d8))(param_1,DAT_146865290,0xffffffff);
  if (plVar3 != (longlong *)0x0) {
    *(undefined1 *)(plVar3 + 0x20) = 1;
    uVar2 = DAT_146865298;
    uVar4 = ALevelScriptActor::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar3 + 0x388))(plVar3,uVar4,uVar2);
    if (lVar5 != 0) {
      *(longlong *)(lVar5 + 0x100) = param_1[0x3c];
      *(char *)(lVar5 + 0x108) = (char)param_1[0x3d];
      *(longlong *)(lVar5 + 0x110) = param_1[0x3e];
      *(char *)(lVar5 + 0x118) = (char)param_1[0x3f];
      lVar1 = param_1[0x41];
      *(longlong *)(lVar5 + 0x120) = param_1[0x40];
      *(longlong *)(lVar5 + 0x128) = lVar1;
      *(char *)(lVar5 + 0x130) = (char)param_1[0x42];
      *(char *)(lVar5 + 0x138) = (char)param_1[0x43];
      *(undefined1 *)(lVar5 + 0x139) = *(undefined1 *)((longlong)param_1 + 0x219);
      *(undefined1 *)(lVar5 + 0x13a) = *(undefined1 *)((longlong)param_1 + 0x21a);
      *(undefined1 *)(lVar5 + 0x13b) = *(undefined1 *)((longlong)param_1 + 0x21b);
      *(undefined8 *)(lVar5 + 0x13c) = *(undefined8 *)((longlong)param_1 + 0x21c);
      *(longlong *)(lVar5 + 0x148) = param_1[0x45];
      *(longlong *)(lVar5 + 0x150) = param_1[0x46];
      lVar1 = param_1[0x48];
      *(longlong *)(lVar5 + 0x158) = param_1[0x47];
      *(longlong *)(lVar5 + 0x160) = lVar1;
      lVar1 = param_1[0x4a];
      *(longlong *)(lVar5 + 0x168) = param_1[0x49];
      *(longlong *)(lVar5 + 0x170) = lVar1;
      lVar1 = param_1[0x4c];
      *(longlong *)(lVar5 + 0x178) = param_1[0x4b];
      *(longlong *)(lVar5 + 0x180) = lVar1;
      *(longlong *)(lVar5 + 0x188) = param_1[0x4d];
      lVar1 = param_1[0x4f];
      *(longlong *)(lVar5 + 400) = param_1[0x4e];
      *(longlong *)(lVar5 + 0x198) = lVar1;
      *(longlong *)(lVar5 + 0x1a0) = param_1[0x50];
      *(int *)(lVar5 + 0x1a8) = (int)param_1[0x51];
      *(undefined4 *)(lVar5 + 0x1ac) = *(undefined4 *)((longlong)param_1 + 0x28c);
      *(int *)(lVar5 + 0x1b0) = (int)param_1[0x52];
      *(char *)(lVar5 + 0x1b8) = (char)param_1[0x53];
      *(undefined1 *)(lVar5 + 0x1b9) = *(undefined1 *)((longlong)param_1 + 0x299);
      *(undefined1 *)(lVar5 + 0x1ba) = *(undefined1 *)((longlong)param_1 + 0x29a);
      *(undefined1 *)(lVar5 + 0x1bb) = *(undefined1 *)((longlong)param_1 + 0x29b);
      *(undefined8 *)(lVar5 + 0x1bc) = *(undefined8 *)((longlong)param_1 + 0x29c);
      *(longlong *)(lVar5 + 0x1c8) = param_1[0x55];
      *(longlong *)(lVar5 + 0x1d0) = param_1[0x56];
      lVar1 = param_1[0x58];
      *(longlong *)(lVar5 + 0x1d8) = param_1[0x57];
      *(longlong *)(lVar5 + 0x1e0) = lVar1;
      lVar1 = param_1[0x5a];
      *(longlong *)(lVar5 + 0x1e8) = param_1[0x59];
      *(longlong *)(lVar5 + 0x1f0) = lVar1;
      lVar1 = param_1[0x5c];
      *(longlong *)(lVar5 + 0x1f8) = param_1[0x5b];
      *(longlong *)(lVar5 + 0x200) = lVar1;
      *(longlong *)(lVar5 + 0x208) = param_1[0x5d];
      lVar1 = param_1[0x5f];
      *(longlong *)(lVar5 + 0x210) = param_1[0x5e];
      *(longlong *)(lVar5 + 0x218) = lVar1;
      *(longlong *)(lVar5 + 0x220) = param_1[0x60];
      *(int *)(lVar5 + 0x228) = (int)param_1[0x61];
      *(undefined4 *)(lVar5 + 0x22c) = *(undefined4 *)((longlong)param_1 + 0x30c);
      *(int *)(lVar5 + 0x230) = (int)param_1[0x62];
      *(char *)(lVar5 + 0x238) = (char)param_1[99];
      *(undefined1 *)(lVar5 + 0x239) = *(undefined1 *)((longlong)param_1 + 0x319);
      *(undefined1 *)(lVar5 + 0x23a) = *(undefined1 *)((longlong)param_1 + 0x31a);
      *(undefined1 *)(lVar5 + 0x23b) = *(undefined1 *)((longlong)param_1 + 0x31b);
      *(undefined8 *)(lVar5 + 0x23c) = *(undefined8 *)((longlong)param_1 + 0x31c);
      *(longlong *)(lVar5 + 0x248) = param_1[0x65];
      *(longlong *)(lVar5 + 0x250) = param_1[0x66];
      lVar1 = param_1[0x68];
      *(longlong *)(lVar5 + 600) = param_1[0x67];
      *(longlong *)(lVar5 + 0x260) = lVar1;
      lVar1 = param_1[0x6a];
      *(longlong *)(lVar5 + 0x268) = param_1[0x69];
      *(longlong *)(lVar5 + 0x270) = lVar1;
      lVar1 = param_1[0x6c];
      *(longlong *)(lVar5 + 0x278) = param_1[0x6b];
      *(longlong *)(lVar5 + 0x280) = lVar1;
      *(longlong *)(lVar5 + 0x288) = param_1[0x6d];
      lVar1 = param_1[0x6f];
      *(longlong *)(lVar5 + 0x290) = param_1[0x6e];
      *(longlong *)(lVar5 + 0x298) = lVar1;
      *(longlong *)(lVar5 + 0x2a0) = param_1[0x70];
      *(int *)(lVar5 + 0x2a8) = (int)param_1[0x71];
      *(undefined4 *)(lVar5 + 0x2ac) = *(undefined4 *)((longlong)param_1 + 0x38c);
      *(int *)(lVar5 + 0x2b0) = (int)param_1[0x72];
      *(char *)(lVar5 + 0x2b8) = (char)param_1[0x73];
      *(undefined1 *)(lVar5 + 0x2b9) = *(undefined1 *)((longlong)param_1 + 0x399);
      *(undefined1 *)(lVar5 + 0x2ba) = *(undefined1 *)((longlong)param_1 + 0x39a);
      *(undefined1 *)(lVar5 + 699) = *(undefined1 *)((longlong)param_1 + 0x39b);
      *(undefined8 *)(lVar5 + 700) = *(undefined8 *)((longlong)param_1 + 0x39c);
      *(longlong *)(lVar5 + 0x2c8) = param_1[0x75];
      *(longlong *)(lVar5 + 0x2d0) = param_1[0x76];
      lVar1 = param_1[0x78];
      *(longlong *)(lVar5 + 0x2d8) = param_1[0x77];
      *(longlong *)(lVar5 + 0x2e0) = lVar1;
      lVar1 = param_1[0x7a];
      *(longlong *)(lVar5 + 0x2e8) = param_1[0x79];
      *(longlong *)(lVar5 + 0x2f0) = lVar1;
      lVar1 = param_1[0x7c];
      *(longlong *)(lVar5 + 0x2f8) = param_1[0x7b];
      *(longlong *)(lVar5 + 0x300) = lVar1;
      *(longlong *)(lVar5 + 0x308) = param_1[0x7d];
      lVar1 = param_1[0x7f];
      *(longlong *)(lVar5 + 0x310) = param_1[0x7e];
      *(longlong *)(lVar5 + 0x318) = lVar1;
      *(longlong *)(lVar5 + 800) = param_1[0x80];
      *(int *)(lVar5 + 0x328) = (int)param_1[0x81];
      *(undefined4 *)(lVar5 + 0x32c) = *(undefined4 *)((longlong)param_1 + 0x40c);
      *(int *)(lVar5 + 0x330) = (int)param_1[0x82];
      *(undefined1 *)(lVar5 + 0xfa) = 1;
      *(undefined1 *)(lVar5 + 0xfc) = 1;
    }
  }
  return;
}



// FUNCTION 1409cf2a0 FUN_1409cf2a0 body=264 status=ok
// SIG undefined FUN_1409cf2a0(void)

void FUN_1409cf2a0(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  FUN_1406dfc10();
  *(undefined1 *)((longlong)param_1 + 0x275) = 1;
  FUN_142f97b10((longlong)param_1 + 0x27c);
  puVar5 = (undefined8 *)FName::FName(local_res8,"MoveOnPath",1);
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x3d8))(param_1,*puVar5,0xffffffff);
  if (plVar6 != (longlong *)0x0) {
    puVar5 = (undefined8 *)FName::FName(local_res10,"MovePathAspect",1);
    uVar1 = *puVar5;
    uVar7 = FUN_1412dc1a0();
    lVar8 = (**(code **)(*plVar6 + 0x388))(plVar6,uVar7,uVar1);
    if (lVar8 != 0) {
      lVar4 = param_1[0x57];
      *(longlong *)(lVar8 + 0x240) = param_1[0x56];
      *(longlong *)(lVar8 + 0x248) = lVar4;
      lVar4 = param_1[0x59];
      *(longlong *)(lVar8 + 0x250) = param_1[0x58];
      *(longlong *)(lVar8 + 600) = lVar4;
      uVar2 = *(undefined4 *)((longlong)param_1 + 0x2d4);
      lVar4 = param_1[0x5b];
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x2dc);
      *(int *)(lVar8 + 0x260) = (int)param_1[0x5a];
      *(undefined4 *)(lVar8 + 0x264) = uVar2;
      *(int *)(lVar8 + 0x268) = (int)lVar4;
      *(undefined4 *)(lVar8 + 0x26c) = uVar3;
      uVar2 = *(undefined4 *)((longlong)param_1 + 0x2e4);
      lVar4 = param_1[0x5d];
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x2ec);
      *(int *)(lVar8 + 0x270) = (int)param_1[0x5c];
      *(undefined4 *)(lVar8 + 0x274) = uVar2;
      *(int *)(lVar8 + 0x278) = (int)lVar4;
      *(undefined4 *)(lVar8 + 0x27c) = uVar3;
      FUN_1406d96c0(lVar8 + 0x100,param_1 + 0x2e);
      *(undefined1 *)(lVar8 + 0x200) = 1;
      *(undefined2 *)(lVar8 + 0x205) = 0x101;
    }
  }
  return;
}



// FUNCTION 1409cf3b0 FUN_1409cf3b0 body=1567 status=ok
// SIG undefined FUN_1409cf3b0(void)

void FUN_1409cf3b0(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  FUN_1406dfc10();
  FUN_1406df730(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x5f) = 1;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x119) = 0;
  *(int *)(param_1 + 0x77) = (int)param_1[0x29];
  *(undefined4 *)((longlong)param_1 + 0x3bc) = *(undefined4 *)((longlong)param_1 + 0x14c);
  *(int *)(param_1 + 0x78) = (int)param_1[0x2a];
  *(undefined4 *)((longlong)param_1 + 0x3c4) = *(undefined4 *)((longlong)param_1 + 0x154);
  *(int *)(param_1 + 0x5d) = (int)param_1[0x29];
  *(undefined4 *)((longlong)param_1 + 0x2ec) = *(undefined4 *)((longlong)param_1 + 0x14c);
  *(int *)(param_1 + 0x5e) = (int)param_1[0x2a];
  *(undefined4 *)((longlong)param_1 + 0x2f4) = *(undefined4 *)((longlong)param_1 + 0x154);
  puVar5 = (undefined4 *)FUN_1406e7b00(param_1,local_18,&DAT_1468652c0);
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *(undefined4 *)(param_1 + 0x114) = *puVar5;
  *(undefined4 *)((longlong)param_1 + 0x8a4) = uVar2;
  *(undefined4 *)(param_1 + 0x115) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x8ac) = uVar4;
  FUN_1406df730(param_1 + 0xfd);
  FUN_1406f6270(param_1 + 0xfd,param_1 + 0x77);
  *(undefined1 *)(param_1 + 0x20) = 1;
  if ((char)param_1[0xd4] != '\0') {
    puVar6 = (undefined8 *)FName::FName(local_res8,"FindReviveTarget",1);
    uVar1 = *puVar6;
    uVar7 = UGEditableText::GetPrivateStaticClass();
    lVar8 = (**(code **)(*param_1 + 0x388))(param_1,uVar7,uVar1);
    if (lVar8 != 0) {
      FUN_1406d91a0(lVar8 + 0x100,param_1 + 0x60);
      *(undefined1 *)(lVar8 + 0xf9) = 0;
      *(undefined1 *)(lVar8 + 0xfc) = 0;
    }
  }
  if ((char)param_1[0x171] != '\0') {
    puVar6 = (undefined8 *)FName::FName(local_res8,"FindReviveTargetNavGoal",1);
    uVar1 = *puVar6;
    uVar7 = UGEditableText::GetPrivateStaticClass();
    lVar8 = (**(code **)(*param_1 + 0x388))(param_1,uVar7,uVar1);
    if (lVar8 != 0) {
      FUN_1406d91a0(lVar8 + 0x100,param_1 + 0xfd);
      *(undefined1 *)(lVar8 + 0xd1) = 1;
      *(undefined1 *)(lVar8 + 0xf9) = 0;
      *(undefined1 *)(lVar8 + 0xfc) = 0;
    }
  }
  puVar6 = (undefined8 *)FName::FName(local_res8,"ReviveTicket",1);
  uVar1 = *puVar6;
  uVar7 = FUN_140797af0();
  lVar8 = (**(code **)(*param_1 + 0x388))(param_1,uVar7,uVar1);
  if (lVar8 != 0) {
    *(char *)(lVar8 + 0x100) = (char)param_1[0x3b];
    *(undefined1 *)(lVar8 + 0x101) = *(undefined1 *)((longlong)param_1 + 0x1d9);
    *(char *)(lVar8 + 0x108) = (char)param_1[0x3c];
    *(undefined1 *)(lVar8 + 0x109) = *(undefined1 *)((longlong)param_1 + 0x1e1);
    *(undefined1 *)(lVar8 + 0x10a) = *(undefined1 *)((longlong)param_1 + 0x1e2);
    *(undefined1 *)(lVar8 + 0x10b) = *(undefined1 *)((longlong)param_1 + 0x1e3);
    *(undefined8 *)(lVar8 + 0x10c) = *(undefined8 *)((longlong)param_1 + 0x1e4);
    *(longlong *)(lVar8 + 0x118) = param_1[0x3e];
    *(longlong *)(lVar8 + 0x120) = param_1[0x3f];
    lVar9 = param_1[0x41];
    *(longlong *)(lVar8 + 0x128) = param_1[0x40];
    *(longlong *)(lVar8 + 0x130) = lVar9;
    lVar9 = param_1[0x43];
    *(longlong *)(lVar8 + 0x138) = param_1[0x42];
    *(longlong *)(lVar8 + 0x140) = lVar9;
    lVar9 = param_1[0x45];
    *(longlong *)(lVar8 + 0x148) = param_1[0x44];
    *(longlong *)(lVar8 + 0x150) = lVar9;
    *(longlong *)(lVar8 + 0x158) = param_1[0x46];
    lVar9 = param_1[0x48];
    *(longlong *)(lVar8 + 0x160) = param_1[0x47];
    *(longlong *)(lVar8 + 0x168) = lVar9;
    *(longlong *)(lVar8 + 0x170) = param_1[0x49];
    *(int *)(lVar8 + 0x178) = (int)param_1[0x4a];
    *(undefined4 *)(lVar8 + 0x17c) = *(undefined4 *)((longlong)param_1 + 0x254);
    *(int *)(lVar8 + 0x180) = (int)param_1[0x4b];
    *(char *)(lVar8 + 0x188) = (char)param_1[0x4c];
    *(undefined1 *)(lVar8 + 0x189) = *(undefined1 *)((longlong)param_1 + 0x261);
    *(undefined1 *)(lVar8 + 0x18a) = *(undefined1 *)((longlong)param_1 + 0x262);
    *(undefined1 *)(lVar8 + 0x18b) = *(undefined1 *)((longlong)param_1 + 0x263);
    *(undefined8 *)(lVar8 + 0x18c) = *(undefined8 *)((longlong)param_1 + 0x264);
    *(longlong *)(lVar8 + 0x198) = param_1[0x4e];
    *(longlong *)(lVar8 + 0x1a0) = param_1[0x4f];
    lVar9 = param_1[0x51];
    *(longlong *)(lVar8 + 0x1a8) = param_1[0x50];
    *(longlong *)(lVar8 + 0x1b0) = lVar9;
    lVar9 = param_1[0x53];
    *(longlong *)(lVar8 + 0x1b8) = param_1[0x52];
    *(longlong *)(lVar8 + 0x1c0) = lVar9;
    lVar9 = param_1[0x55];
    *(longlong *)(lVar8 + 0x1c8) = param_1[0x54];
    *(longlong *)(lVar8 + 0x1d0) = lVar9;
    *(longlong *)(lVar8 + 0x1d8) = param_1[0x56];
    lVar9 = param_1[0x58];
    *(longlong *)(lVar8 + 0x1e0) = param_1[0x57];
    *(longlong *)(lVar8 + 0x1e8) = lVar9;
    *(longlong *)(lVar8 + 0x1f0) = param_1[0x59];
    *(int *)(lVar8 + 0x1f8) = (int)param_1[0x5a];
    *(undefined4 *)(lVar8 + 0x1fc) = *(undefined4 *)((longlong)param_1 + 0x2d4);
    *(int *)(lVar8 + 0x200) = (int)param_1[0x5b];
    *(longlong *)(lVar8 + 0x208) = param_1[0x5c];
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x2ec);
    lVar9 = param_1[0x5e];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x2f4);
    *(int *)(lVar8 + 0x210) = (int)param_1[0x5d];
    *(undefined4 *)(lVar8 + 0x214) = uVar2;
    *(int *)(lVar8 + 0x218) = (int)lVar9;
    *(undefined4 *)(lVar8 + 0x21c) = uVar3;
    *(char *)(lVar8 + 0x220) = (char)param_1[0x5f];
    *(undefined1 *)(lVar8 + 0x221) = *(undefined1 *)((longlong)param_1 + 0x2f9);
    *(undefined1 *)(lVar8 + 0x222) = *(undefined1 *)((longlong)param_1 + 0x2fa);
    *(undefined1 *)(lVar8 + 0x223) = *(undefined1 *)((longlong)param_1 + 0x2fb);
    *(undefined1 *)(lVar8 + 0x224) = *(undefined1 *)((longlong)param_1 + 0x2fc);
  }
  puVar6 = (undefined8 *)FName::FName(local_res8,"ReviveTarget",1);
  uVar1 = *puVar6;
  uVar7 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
  lVar8 = (**(code **)(*param_1 + 0x388))(param_1,uVar7,uVar1);
  if (lVar8 != 0) {
    lVar9 = param_1[0x2a];
    *(longlong *)(lVar8 + 0x100) = param_1[0x29];
    *(longlong *)(lVar8 + 0x108) = lVar9;
    *(char *)(lVar8 + 0x110) = (char)param_1[0x2b];
    *(undefined1 *)(lVar8 + 0x111) = *(undefined1 *)((longlong)param_1 + 0x159);
    *(undefined1 *)(lVar8 + 0x112) = *(undefined1 *)((longlong)param_1 + 0x15a);
    *(undefined1 *)(lVar8 + 0x113) = *(undefined1 *)((longlong)param_1 + 0x15b);
    *(undefined8 *)(lVar8 + 0x114) = *(undefined8 *)((longlong)param_1 + 0x15c);
    *(longlong *)(lVar8 + 0x120) = param_1[0x2d];
    *(longlong *)(lVar8 + 0x128) = param_1[0x2e];
    lVar9 = param_1[0x30];
    *(longlong *)(lVar8 + 0x130) = param_1[0x2f];
    *(longlong *)(lVar8 + 0x138) = lVar9;
    lVar9 = param_1[0x32];
    *(longlong *)(lVar8 + 0x140) = param_1[0x31];
    *(longlong *)(lVar8 + 0x148) = lVar9;
    lVar9 = param_1[0x34];
    *(longlong *)(lVar8 + 0x150) = param_1[0x33];
    *(longlong *)(lVar8 + 0x158) = lVar9;
    *(longlong *)(lVar8 + 0x160) = param_1[0x35];
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x1b4);
    lVar9 = param_1[0x37];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x1bc);
    *(int *)(lVar8 + 0x168) = (int)param_1[0x36];
    *(undefined4 *)(lVar8 + 0x16c) = uVar2;
    *(int *)(lVar8 + 0x170) = (int)lVar9;
    *(undefined4 *)(lVar8 + 0x174) = uVar3;
    *(longlong *)(lVar8 + 0x178) = param_1[0x38];
    *(int *)(lVar8 + 0x180) = (int)param_1[0x39];
    *(undefined4 *)(lVar8 + 0x184) = *(undefined4 *)((longlong)param_1 + 0x1cc);
    *(int *)(lVar8 + 0x188) = (int)param_1[0x3a];
  }
  puVar6 = (undefined8 *)FName::FName(local_res8,"GoToReviveTarget",1);
  uVar1 = *puVar6;
  uVar7 = FUN_140792b80();
  lVar8 = (**(code **)(*param_1 + 0x388))(param_1,uVar7,uVar1);
  if (lVar8 != 0) {
    *(undefined1 *)(lVar8 + 0xf9) = 0;
    *(undefined1 *)(lVar8 + 0xfc) = 0;
    *(undefined1 *)(lVar8 + 0xd1) = 2;
    lVar9 = 0x8a0;
    if ((char)param_1[0x171] == '\0') {
      lVar9 = 0x148;
    }
    puVar5 = (undefined4 *)(lVar9 + (longlong)param_1);
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(undefined4 *)(lVar8 + 0x240) = *puVar5;
    *(undefined4 *)(lVar8 + 0x244) = uVar2;
    *(undefined4 *)(lVar8 + 0x248) = uVar3;
    *(undefined4 *)(lVar8 + 0x24c) = uVar4;
    FUN_1406d96c0(lVar8 + 0x100,param_1 + 0xd5);
  }
  puVar6 = (undefined8 *)FName::FName(local_res8,"FaceReviveTarget",1);
  uVar1 = *puVar6;
  uVar7 = FUN_140793390();
  lVar8 = (**(code **)(*param_1 + 0x388))(param_1,uVar7,uVar1);
  if (lVar8 != 0) {
    *(undefined2 *)(lVar8 + 0xf8) = 0;
    *(undefined2 *)(lVar8 + 0xfb) = 0;
    *(undefined2 *)(lVar8 + 0xd1) = 0x101;
    *(undefined1 *)(lVar8 + 0x100) = 1;
    *(undefined1 *)(lVar8 + 0x2c8) = 1;
    *(undefined1 *)(lVar8 + 0x488) = 0;
    *(undefined1 *)(lVar8 + 0x648) = 1;
    lVar9 = param_1[0x2a];
    *(longlong *)(lVar8 + 0x110) = param_1[0x29];
    *(longlong *)(lVar8 + 0x118) = lVar9;
    lVar9 = param_1[0x2a];
    *(longlong *)(lVar8 + 0x2d0) = param_1[0x29];
    *(longlong *)(lVar8 + 0x2d8) = lVar9;
    lVar9 = param_1[0x2a];
    *(longlong *)(lVar8 + 0x490) = param_1[0x29];
    *(longlong *)(lVar8 + 0x498) = lVar9;
  }
  return;
}



// FUNCTION 1409cf9d0 FUN_1409cf9d0 body=978 status=ok
// SIG undefined FUN_1409cf9d0(void)

void FUN_1409cf9d0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  FUN_1406dfc10();
  puVar3 = (undefined8 *)FName::FName(local_res8,"EscortNavigation",1);
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x3d8))(param_1,*puVar3,0xffffffff);
  if (plVar4 != (longlong *)0x0) {
    puVar3 = (undefined8 *)FName::FName(local_res10,"EscortSpeed",1);
    uVar1 = *puVar3;
    uVar5 = AUGFloorBladeColumnTrap::GetPrivateStaticClass();
    lVar6 = (**(code **)(*plVar4 + 0x388))(plVar4,uVar5,uVar1);
    if (lVar6 != 0) {
      lVar2 = param_1[0x72];
      *(longlong *)(lVar6 + 0x3e0) = param_1[0x71];
      *(longlong *)(lVar6 + 1000) = lVar2;
      lVar2 = param_1[0x74];
      *(longlong *)(lVar6 + 0x3f0) = param_1[0x73];
      *(longlong *)(lVar6 + 0x3f8) = lVar2;
      lVar2 = param_1[0x76];
      *(longlong *)(lVar6 + 0x400) = param_1[0x75];
      *(longlong *)(lVar6 + 0x408) = lVar2;
      lVar2 = param_1[0x78];
      *(longlong *)(lVar6 + 0x410) = param_1[0x77];
      *(longlong *)(lVar6 + 0x418) = lVar2;
      lVar2 = param_1[0x7a];
      *(longlong *)(lVar6 + 0x420) = param_1[0x79];
      *(longlong *)(lVar6 + 0x428) = lVar2;
      lVar2 = param_1[0x7c];
      *(longlong *)(lVar6 + 0x430) = param_1[0x7b];
      *(longlong *)(lVar6 + 0x438) = lVar2;
      *(char *)(lVar6 + 0x240) = (char)param_1[0x3d];
      *(undefined1 *)(lVar6 + 0x241) = *(undefined1 *)((longlong)param_1 + 0x1e9);
      *(undefined1 *)(lVar6 + 0x242) = *(undefined1 *)((longlong)param_1 + 0x1ea);
      *(undefined1 *)(lVar6 + 0x243) = *(undefined1 *)((longlong)param_1 + 0x1eb);
      *(undefined8 *)(lVar6 + 0x244) = *(undefined8 *)((longlong)param_1 + 0x1ec);
      *(longlong *)(lVar6 + 0x250) = param_1[0x3f];
      *(longlong *)(lVar6 + 600) = param_1[0x40];
      lVar2 = param_1[0x42];
      *(longlong *)(lVar6 + 0x260) = param_1[0x41];
      *(longlong *)(lVar6 + 0x268) = lVar2;
      lVar2 = param_1[0x44];
      *(longlong *)(lVar6 + 0x270) = param_1[0x43];
      *(longlong *)(lVar6 + 0x278) = lVar2;
      lVar2 = param_1[0x46];
      *(longlong *)(lVar6 + 0x280) = param_1[0x45];
      *(longlong *)(lVar6 + 0x288) = lVar2;
      *(longlong *)(lVar6 + 0x290) = param_1[0x47];
      lVar2 = param_1[0x49];
      *(longlong *)(lVar6 + 0x298) = param_1[0x48];
      *(longlong *)(lVar6 + 0x2a0) = lVar2;
      *(longlong *)(lVar6 + 0x2a8) = param_1[0x4a];
      *(int *)(lVar6 + 0x2b0) = (int)param_1[0x4b];
      *(undefined4 *)(lVar6 + 0x2b4) = *(undefined4 *)((longlong)param_1 + 0x25c);
      *(int *)(lVar6 + 0x2b8) = (int)param_1[0x4c];
      *(char *)(lVar6 + 0x2c0) = (char)param_1[0x4d];
      *(undefined1 *)(lVar6 + 0x2c1) = *(undefined1 *)((longlong)param_1 + 0x269);
      *(undefined1 *)(lVar6 + 0x2c2) = *(undefined1 *)((longlong)param_1 + 0x26a);
      *(undefined1 *)(lVar6 + 0x2c3) = *(undefined1 *)((longlong)param_1 + 0x26b);
      *(undefined8 *)(lVar6 + 0x2c4) = *(undefined8 *)((longlong)param_1 + 0x26c);
      *(longlong *)(lVar6 + 0x2d0) = param_1[0x4f];
      *(longlong *)(lVar6 + 0x2d8) = param_1[0x50];
      lVar2 = param_1[0x52];
      *(longlong *)(lVar6 + 0x2e0) = param_1[0x51];
      *(longlong *)(lVar6 + 0x2e8) = lVar2;
      lVar2 = param_1[0x54];
      *(longlong *)(lVar6 + 0x2f0) = param_1[0x53];
      *(longlong *)(lVar6 + 0x2f8) = lVar2;
      lVar2 = param_1[0x56];
      *(longlong *)(lVar6 + 0x300) = param_1[0x55];
      *(longlong *)(lVar6 + 0x308) = lVar2;
      *(longlong *)(lVar6 + 0x310) = param_1[0x57];
      lVar2 = param_1[0x59];
      *(longlong *)(lVar6 + 0x318) = param_1[0x58];
      *(longlong *)(lVar6 + 800) = lVar2;
      *(longlong *)(lVar6 + 0x328) = param_1[0x5a];
      *(int *)(lVar6 + 0x330) = (int)param_1[0x5b];
      *(undefined4 *)(lVar6 + 0x334) = *(undefined4 *)((longlong)param_1 + 0x2dc);
      *(int *)(lVar6 + 0x338) = (int)param_1[0x5c];
      *(char *)(lVar6 + 0x340) = (char)param_1[0x5d];
      *(undefined1 *)(lVar6 + 0x341) = *(undefined1 *)((longlong)param_1 + 0x2e9);
      *(undefined1 *)(lVar6 + 0x342) = *(undefined1 *)((longlong)param_1 + 0x2ea);
      *(undefined1 *)(lVar6 + 0x343) = *(undefined1 *)((longlong)param_1 + 0x2eb);
      *(undefined8 *)(lVar6 + 0x344) = *(undefined8 *)((longlong)param_1 + 0x2ec);
      *(longlong *)(lVar6 + 0x350) = param_1[0x5f];
      *(longlong *)(lVar6 + 0x358) = param_1[0x60];
      lVar2 = param_1[0x62];
      *(longlong *)(lVar6 + 0x360) = param_1[0x61];
      *(longlong *)(lVar6 + 0x368) = lVar2;
      lVar2 = param_1[100];
      *(longlong *)(lVar6 + 0x370) = param_1[99];
      *(longlong *)(lVar6 + 0x378) = lVar2;
      lVar2 = param_1[0x66];
      *(longlong *)(lVar6 + 0x380) = param_1[0x65];
      *(longlong *)(lVar6 + 0x388) = lVar2;
      *(longlong *)(lVar6 + 0x390) = param_1[0x67];
      lVar2 = param_1[0x69];
      *(longlong *)(lVar6 + 0x398) = param_1[0x68];
      *(longlong *)(lVar6 + 0x3a0) = lVar2;
      *(longlong *)(lVar6 + 0x3a8) = param_1[0x6a];
      *(int *)(lVar6 + 0x3b0) = (int)param_1[0x6b];
      *(undefined4 *)(lVar6 + 0x3b4) = *(undefined4 *)((longlong)param_1 + 0x35c);
      *(int *)(lVar6 + 0x3b8) = (int)param_1[0x6c];
      *(int *)(lVar6 + 0x3c0) = (int)param_1[0x6d];
      *(undefined4 *)(lVar6 + 0x3c4) = *(undefined4 *)((longlong)param_1 + 0x36c);
      *(char *)(lVar6 + 0x3c8) = (char)param_1[0x6e];
      uVar1 = *(undefined8 *)((longlong)param_1 + 0x37c);
      *(undefined8 *)(lVar6 + 0x3cc) = *(undefined8 *)((longlong)param_1 + 0x374);
      *(undefined8 *)(lVar6 + 0x3d4) = uVar1;
      *(undefined4 *)(lVar6 + 0x3dc) = *(undefined4 *)((longlong)param_1 + 900);
      if ((char)param_1[0x7d] != '\0') {
        *(undefined4 *)(lVar6 + 0x208) = 1;
      }
    }
  }
  return;
}



// FUNCTION 1409cfdb0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
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



// FUNCTION 1409cfe60 FUN_1409cfe60 body=383 status=ok
// SIG undefined FUN_1409cfe60(void)

void FUN_1409cfe60(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_14144bbc0(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_2 + 0x10),param_2 + 0x18);
  if (*(longlong *)(param_2 + 0x28) != 0) {
    lVar2 = FWeakObjectPtr::Get(param_2 + 0x38);
    if (((lVar2 != 0) && (*(longlong *)(param_2 + 0x20) != 0)) &&
       (*(longlong *)(param_2 + 0x48) == 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0xb0);
      FUN_1417846f0(uVar4,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
      lVar2 = FUN_1417985e0(uVar3,uVar4,0,0,0,0,0,0,0);
      *(longlong *)(param_2 + 0x48) = lVar2;
      *(byte *)(lVar2 + 0x71a) = *(byte *)(lVar2 + 0x71a) & 0xbf;
      pbVar1 = (byte *)(*(longlong *)(param_2 + 0x48) + 0xba);
      *pbVar1 = *pbVar1 | 1;
      *(undefined4 *)(*(longlong *)(param_2 + 0x48) + 0x794) = 0;
      pbVar1 = (byte *)(*(longlong *)(param_2 + 0x48) + 0xba);
      *pbVar1 = *pbVar1 & 0xfd;
      pbVar1 = (byte *)(*(longlong *)(param_2 + 0x48) + 0x71a);
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = (byte *)(*(longlong *)(param_2 + 0x48) + 0x24c);
      *pbVar1 = *pbVar1 | 4;
      pbVar1 = (byte *)(*(longlong *)(param_2 + 0x48) + 0x24c);
      *pbVar1 = *pbVar1 | 8;
      pbVar1 = (byte *)(*(longlong *)(param_2 + 0x48) + 0x24c);
      *pbVar1 = *pbVar1 | 0x10;
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x148))();
      FUN_14234b270(*(undefined8 *)(param_2 + 0x48),uVar4);
      UActorComponent::SetTickGroup
                (*(undefined8 *)(param_2 + 0x48),
                 *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0x30));
      (**(code **)(**(longlong **)(param_2 + 0x48) + 0x3c8))
                (*(longlong **)(param_2 + 0x48),*(undefined8 *)(param_1 + 0xb0));
      FUN_14260f940(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x20));
      FUN_1425fcab0(*(undefined8 *)(param_2 + 0x48),0);
      FUN_1409eeb30(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1409cffe0 FUN_1409cffe0 body=91 status=ok
// SIG undefined FUN_1409cffe0(void)

void FUN_1409cffe0(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    *(undefined8 *)(param_2 + 0x12) = 0;
    param_2[0x14] = 0xffffffff;
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  return;
}



// FUNCTION 1409d0040 FUN_1409d0040 body=101 status=ok
// SIG undefined FUN_1409d0040(void)

void FUN_1409d0040(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    *(undefined8 *)(param_2 + 0x12) = 0;
    param_2[0x14] = 0xffffffff;
    param_2[0x15] = 0;
    param_2[0x16] = 0xffffffff;
    param_2[0x17] = 0;
  }
  return;
}



// FUNCTION 1409d00b0 FUN_1409d00b0 body=94 status=ok
// SIG undefined FUN_1409d00b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409d00b0(longlong param_1,void *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x88);
    FUN_1406d4f00();
    *(undefined4 *)((longlong)param_2 + 0x60) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 100) = 0;
    *(undefined8 *)((longlong)param_2 + 0x68) = _DAT_146294670;
    *(undefined4 *)((longlong)param_2 + 0x70) = DAT_146294678;
    *(undefined8 *)((longlong)param_2 + 0x78) = 0;
    *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 1409d0110 FUN_1409d0110 body=942 status=ok
// SIG undefined FUN_1409d0110(void)

void FUN_1409d0110(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  void *_Src;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  float fVar12;
  undefined8 local_b8;
  float fStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  longlong local_78 [4];
  longlong *local_58;
  float fStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  if (param_2 == 0) {
    return;
  }
  if ((char)param_1[0x25] != '\x03') {
    return;
  }
  (**(code **)(*param_1 + 0x600))();
  uVar6 = FUN_142feb1c0(param_2);
  uVar9 = 0;
  if (uVar6 != 0) {
    lVar7 = FUN_1414ba680();
    if ((*(int *)(*(longlong *)(uVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_1409d0198;
  }
  uVar6 = uVar9;
LAB_1409d0198:
  param_1[0xfa] = uVar6;
  if (uVar6 != 0) {
    FUN_140b30630(uVar6,param_1);
    uVar8 = FUN_1409d4c70(param_1);
    *(undefined8 *)(param_1[0xfa] + 0x150) = uVar8;
    FUN_142223280(param_1[0xfa],param_1,&DAT_146532188,0);
    lVar7 = param_1[0xfa];
    local_88 = (longlong *)(lVar7 + 0x510);
    local_78[2] = 0;
    puStack_48 = (uint *)(lVar7 + 0x520);
    local_78[3] = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    iVar1 = *(int *)(lVar7 + 0x538);
    local_b8._0_4_ = 0.0;
    local_b8._4_4_ = 1;
    local_a8._4_4_ = 0;
    uStack_a0 = 0;
    if (iVar1 != 0) {
      puVar11 = *(uint **)(lVar7 + 0x530);
      if (*(uint **)(lVar7 + 0x530) == (uint *)0x0) {
        puVar11 = puStack_48;
      }
      uVar2 = *puVar11;
      uVar6 = uVar9;
      while (uVar2 == 0) {
        iVar5 = (int)uVar9;
        uStack_a0 = (int)uVar6 + 0x20;
        uVar6 = (ulonglong)uStack_a0;
        local_b8._0_4_ = (float)(iVar5 + 1);
        uVar9 = (ulonglong)(uint)(float)local_b8;
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1409d02bf;
        uVar2 = puVar11[(longlong)iVar5 + 1];
      }
      local_b8._4_4_ = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (local_b8._4_4_ != 0) {
        for (; local_b8._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (local_b8._4_4_ == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_a8._4_4_ = (uStack_a0 - iVar5) + 0x1f;
      if (iVar1 < local_a8._4_4_) {
LAB_1409d02bf:
        local_a8._4_4_ = iVar1;
      }
    }
    auStack_40._4_4_ = local_a8._4_4_;
    auStack_40._0_4_ = 0xffffffff;
    auStack_40._8_4_ = uStack_a0;
    auStack_40._12_4_ = iStack_9c;
    fStack_50 = (float)local_b8;
    uStack_4c = local_b8._4_4_;
    local_80 = 0;
    local_30._0_4_ = SUB84(local_88,0);
    local_30._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_a0 = 0xffffffff;
    iStack_9c = local_a8._4_4_;
    fStack_b0 = (float)local_b8;
    uStack_ac = local_b8._4_4_;
    local_98._8_4_ = (undefined4)local_30;
    local_98._0_8_ = auStack_40._8_8_;
    local_98._12_4_ = local_30._4_4_;
    bVar4 = local_a8._4_4_ < *(int *)(lVar7 + 0x538);
    local_b8 = local_88;
    local_58 = local_88;
    local_30 = local_88;
    local_a8 = puStack_48;
    if (bVar4) {
      do {
        plVar3 = *(longlong **)((longlong)iStack_9c * 0x40 + *local_b8);
        (**(code **)(*plVar3 + 0x308))
                  (plVar3,param_1 + 0xab,(longlong)iStack_9c * 0x40 + *local_b8 + 8,param_1 + 0xf2,
                   local_78 + 2,local_78);
        uStack_a0 = uStack_a0 & ~uStack_ac;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_b0);
      } while (iStack_9c < (int)local_a8[6]);
      if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
      }
    }
    fVar12 = (float)FUN_142c98860(param_1 + 0xe2,param_1);
    plVar3 = param_1 + 0xf0;
    if (plVar3 != param_1 + 0xf2) {
      iVar1 = (int)param_1[0xf3];
      _Src = (void *)param_1[0xf2];
      *(int *)(param_1 + 0xf1) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0x78c) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0x78c) = 0;
      }
      else {
        TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(plVar3,iVar1);
        _guard_xfg_dispatch_icall_nop((void *)*plVar3,_Src,(longlong)iVar1 * 0x48);
      }
    }
    lVar10 = *plVar3;
    lVar7 = lVar10 + (longlong)(int)param_1[0xf1] * 0x48;
    for (; lVar10 != lVar7; lVar10 = lVar10 + 0x48) {
      *(float *)(lVar10 + 0x40) = fVar12 * *(float *)(lVar10 + 0x40);
    }
    _fStack_b0 = CONCAT44(uStack_ac,fVar12);
    local_b8 = param_1;
    FUN_1409c5b70(&local_b8,local_78 + 2,param_1 + 0xf4);
    FUN_1409c5b70(&local_b8,local_78,param_1 + 0xf7);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_78[2] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1409d0500 FUN_1409d0500 body=66 status=ok
// SIG undefined FUN_1409d0500(void)

void FUN_1409d0500(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1441c0048;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1441c0090;
  }
  return;
}



// FUNCTION 1409d0550 FUN_1409d0550 body=91 status=ok
// SIG undefined FUN_1409d0550(void)

void FUN_1409d0550(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1441bfda8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1441bfdf0;
  }
  return;
}



// FUNCTION 1409d05b0 CreateCopy body=92 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<0,UGameplayTagReponseTable,TTypeWrapper<void>___cdecl(FGameplayTag,int),UAbilitySystemComponent_*,int>
     ::CreateCopy(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1441bfec8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1441bff10;
  }
  return;
}



// FUNCTION 1409d0610 CreateCopy body=92 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<0,UGameplayTagReponseTable,TTypeWrapper<void>___cdecl(FGameplayTag,int),UAbilitySystemComponent_*,int>
     ::CreateCopy(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1441bfe38;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1441bfe80;
  }
  return;
}



// FUNCTION 1409d0670 FUN_1409d0670 body=78 status=ok
// SIG undefined FUN_1409d0670(void)

void FUN_1409d0670(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1441c0108;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1441c0150;
  }
  return;
}



// FUNCTION 1409d06c0 FUN_1409d06c0 body=84 status=ok
// SIG undefined FUN_1409d06c0(void)

void FUN_1409d06c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1441bff88;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1441bffd0;
  }
  return;
}



// FUNCTION 1409d0720 FUN_1409d0720 body=1014 status=ok
// SIG undefined FUN_1409d0720(void)

void FUN_1409d0720(longlong param_1,undefined8 *param_2,int param_3)

{
  byte *pbVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_res8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_68;
  
  iVar5 = *(int *)(param_2 + 2);
  *(int *)(param_2 + 2) = iVar5 + 1;
  if (*(int *)((longlong)param_2 + 0x14) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2 + 1,iVar5);
  }
  lVar6 = param_2[1];
  lVar4 = (longlong)iVar5 * 0x68;
  *(undefined8 *)(lVar4 + lVar6) = local_98;
  *(undefined8 *)(lVar4 + 8 + lVar6) = local_90;
  *(undefined8 *)(lVar4 + 0x10 + lVar6) = local_88;
  *(undefined4 *)(lVar4 + 0x18 + lVar6) = 0xffffffff;
  *(undefined4 *)(lVar4 + 0x1c + lVar6) = 0;
  *(undefined8 *)(lVar4 + 0x20 + lVar6) = local_78;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(lVar4 + 0x30 + lVar6) = local_68;
  *(undefined8 *)(lVar4 + 0x28 + lVar6) = 0;
  *(undefined8 *)(lVar4 + 0x38 + lVar6) = 0;
  *(undefined8 *)(lVar4 + 0x40 + lVar6) = 0;
  *(undefined8 *)(lVar4 + 0x48 + lVar6) = 0;
  *(undefined8 *)(lVar4 + 0x50 + lVar6) = 0;
  *(undefined8 *)(lVar4 + 0x58 + lVar6) = 0;
  *(undefined4 *)(lVar4 + 0x60 + lVar6) = 0;
  lVar6 = *(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar6 + 0x38) < DAT_1468656e0) {
    _Init_thread_header(&DAT_1468656e0);
    if (DAT_1468656e0 == -1) {
      FName::FName(&DAT_1468656d8,"Burst_Ring_",1);
      _Init_thread_footer(&DAT_1468656e0);
    }
  }
  if (*(int *)(lVar6 + 0x38) < DAT_1468656f0) {
    _Init_thread_header(&DAT_1468656f0);
    if (DAT_1468656f0 == -1) {
      FName::FName(&DAT_1468656e8,"DamageZone_",1);
      _Init_thread_footer(&DAT_1468656f0);
    }
  }
  if (*(int *)(lVar6 + 0x38) < DAT_146865700) {
    _Init_thread_header(&DAT_146865700);
    if (DAT_146865700 == -1) {
      FName::FName(&DAT_1468656f8,"FakeEmissive_",1);
      _Init_thread_footer(&DAT_146865700);
    }
  }
  if (*(int *)(lVar6 + 0x38) < DAT_146865710) {
    _Init_thread_header(&DAT_146865710);
    if (DAT_146865710 == -1) {
      FName::FName(&DAT_146865708,"HeatingElement_",1);
      _Init_thread_footer(&DAT_146865710);
    }
  }
  iVar5 = param_3 + 0x3ea + *(int *)(param_2 + 7) * 1000;
  local_res8 = CONCAT44(iVar5,DAT_1468656d8);
  uVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,local_res8,uVar3,uVar3,1,0,0);
  lVar6 = (longlong)param_3 * 0x68;
  *(undefined8 *)(lVar6 + 0x20 + param_2[1]) = uVar3;
  FUN_142399e30(*(undefined8 *)(lVar6 + 0x20 + param_2[1]),*param_2,0);
  pbVar1 = (byte *)(*(longlong *)(lVar6 + 0x20 + param_2[1]) + 0xba);
  *pbVar1 = *pbVar1 | 8;
  local_res8 = CONCAT44(iVar5,DAT_1468656e8);
  uVar3 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,local_res8,uVar3,uVar3,1,0,0);
  *(undefined8 *)(lVar6 + param_2[1]) = uVar3;
  FUN_142399e30(*(undefined8 *)(lVar6 + param_2[1]),*param_2,0);
  pbVar1 = (byte *)(*(longlong *)(lVar6 + param_2[1]) + 0xba);
  *pbVar1 = *pbVar1 | 8;
  local_res8 = CONCAT44(iVar5,DAT_1468656f8);
  uVar3 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,local_res8,uVar3,uVar3,1,0,0);
  *(undefined8 *)(lVar6 + 8 + param_2[1]) = uVar3;
  FUN_142399e30(*(undefined8 *)(lVar6 + 8 + param_2[1]),*param_2,0);
  pbVar1 = (byte *)(*(longlong *)(lVar6 + 8 + param_2[1]) + 0xba);
  *pbVar1 = *pbVar1 | 8;
  local_res8 = CONCAT44(iVar5,DAT_146865708);
  uVar3 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,local_res8,uVar3,uVar3,1,0,0);
  *(undefined8 *)(lVar6 + 0x10 + param_2[1]) = uVar3;
  FUN_142399e30(*(undefined8 *)(lVar6 + 0x10 + param_2[1]),*param_2,0);
  pbVar1 = (byte *)(*(longlong *)(lVar6 + 0x10 + param_2[1]) + 0xba);
  *pbVar1 = *pbVar1 | 8;
  *(float *)(lVar6 + 0x30 + param_2[1]) =
       (float)(param_3 + 1) * *(float *)(param_1 + 0x56c) * *(float *)(param_1 + 0x570);
  return;
}



// FUNCTION 1409d0b20 FUN_1409d0b20 body=1423 status=ok
// SIG undefined FUN_1409d0b20(void)

void FUN_1409d0b20(longlong param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  int local_res10;
  void *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  void *local_1a0;
  int local_198;
  undefined4 local_194;
  undefined8 *local_190;
  int local_188;
  undefined4 local_184;
  undefined8 *local_180;
  int local_178;
  undefined4 local_174;
  undefined8 *local_170;
  int local_168;
  undefined4 local_164;
  undefined8 *local_160;
  int local_158;
  int *local_148;
  int local_138;
  int local_134;
  undefined8 local_130;
  undefined8 local_128;
  longlong *local_120;
  int local_118;
  int local_114;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined8 *local_50;
  
  puVar9 = *(undefined8 **)(param_1 + 0x540);
  local_res10 = 1;
  local_50 = puVar9 + (longlong)*(int *)(param_1 + 0x548) * 0xf;
  if (puVar9 != local_50) {
    piVar10 = (int *)(puVar9 + 6);
    do {
      puVar17 = (undefined8 *)0x0;
      uVar1 = *puVar9;
      local_1a8 = piVar10[-4];
      lVar11 = (longlong)local_1a8;
      pvVar2 = *(void **)(piVar10 + -6);
      uVar3 = *(undefined8 *)(piVar10 + -10);
      uVar4 = *(undefined8 *)(piVar10 + -8);
      local_1b0 = (void *)0x0;
      local_148 = piVar10;
      if (local_1a8 == 0) {
        local_1a4 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&local_1b0,local_1a8,0);
        _guard_xfg_dispatch_icall_nop(local_1b0,pvVar2,lVar11 << 3);
      }
      local_198 = *piVar10;
      lVar11 = (longlong)local_198;
      pvVar2 = *(void **)(piVar10 + -2);
      local_1a0 = (void *)0x0;
      if (local_198 == 0) {
        local_194 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&local_1a0,local_198,0);
        _guard_xfg_dispatch_icall_nop(local_1a0,pvVar2,lVar11 << 3);
      }
      local_188 = piVar10[4];
      lVar11 = (longlong)local_188;
      pvVar2 = *(void **)(piVar10 + 2);
      local_190 = (undefined8 *)0x0;
      if (local_188 == 0) {
        local_184 = 0;
        puVar13 = puVar17;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&local_190,local_188,0);
        puVar13 = local_190;
        _guard_xfg_dispatch_icall_nop(local_190,pvVar2,lVar11 << 3);
      }
      local_178 = piVar10[8];
      lVar11 = (longlong)local_178;
      pvVar2 = *(void **)(piVar10 + 6);
      local_180 = (undefined8 *)0x0;
      if (local_178 == 0) {
        local_174 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&local_180,local_178,0);
        puVar17 = local_180;
        _guard_xfg_dispatch_icall_nop(local_180,pvVar2,lVar11 << 3);
        puVar13 = local_190;
      }
      local_168 = piVar10[0xc];
      lVar11 = (longlong)local_168;
      pvVar2 = *(void **)(piVar10 + 10);
      local_170 = (undefined8 *)0x0;
      if (local_168 == 0) {
        local_164 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&local_170,local_168,0);
        _guard_xfg_dispatch_icall_nop(local_170,pvVar2,lVar11 << 3);
        puVar13 = local_190;
        puVar17 = local_180;
      }
      local_158 = piVar10[0x10];
      lVar11 = (longlong)local_158;
      pvVar2 = *(void **)(piVar10 + 0xe);
      local_160 = (undefined8 *)0x0;
      if (local_158 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&local_160,local_158,0);
        _guard_xfg_dispatch_icall_nop(local_160,pvVar2,lVar11 << 3);
        puVar13 = local_190;
        puVar17 = local_180;
      }
      local_c0 = 0;
      local_b8 = 0;
      local_88 = 0;
      local_80 = 0;
      FUN_140590080();
      iVar18 = 0;
      puVar14 = puVar13;
      if (0 < local_188) {
        lVar11 = (longlong)puVar17 - (longlong)puVar13;
        lVar16 = (longlong)local_1a0 - (longlong)puVar13;
        lVar15 = (longlong)local_1b0 - (longlong)puVar13;
        do {
          iVar18 = iVar18 + 1;
          local_118 = -1;
          local_114 = 0;
          local_108 = 0;
          local_f8 = 0;
          local_f0 = 0;
          local_e8 = 0;
          local_e0 = 0;
          local_d8 = 0;
          local_d0 = 0;
          local_110 = *(undefined8 *)(lVar11 + (longlong)puVar13);
          local_130 = *puVar13;
          local_128 = *(undefined8 *)(lVar16 + (longlong)puVar13);
          local_120 = *(longlong **)(lVar15 + (longlong)puVar13);
          local_138 = iVar18;
          local_134 = local_res10;
          uVar8 = (**(code **)(*local_120 + 0x5a8))(local_120,0,*(undefined8 *)(param_1 + 0x460),0);
          FWeakObjectPtr::operator=(&local_118,uVar8);
          uVar6 = local_b8;
          lVar19 = (longlong)(int)local_b8;
          iVar7 = (int)local_b8 + 1;
          local_b8 = CONCAT44(local_b8._4_4_,iVar7);
          if (local_b8._4_4_ < iVar7) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_c0,uVar6 & 0xffffffff);
          }
          puVar13 = puVar13 + 1;
          piVar10 = (int *)(lVar19 * 0x70 + local_c0);
          *piVar10 = local_138;
          piVar10[1] = local_134;
          *(undefined8 *)(piVar10 + 2) = local_130;
          *(undefined8 *)(piVar10 + 4) = local_128;
          *(longlong **)(piVar10 + 6) = local_120;
          piVar10[8] = local_118;
          piVar10[9] = local_114;
          *(undefined8 *)(piVar10 + 10) = local_110;
          *(undefined8 *)(piVar10 + 0xc) = local_108;
          piVar10[0xe] = local_100;
          *(undefined8 *)(piVar10 + 0x10) = local_f8;
          *(undefined8 *)(piVar10 + 0x12) = local_f0;
          *(undefined8 *)(piVar10 + 0x14) = local_e8;
          *(undefined8 *)(piVar10 + 0x16) = local_e0;
          piVar10[0x18] = (int)local_d8;
          piVar10[0x19] = local_d8._4_4_;
          piVar10[0x1a] = local_d0;
          puVar14 = local_190;
          piVar10 = local_148;
          puVar17 = local_180;
        } while (iVar18 < local_188);
      }
      puVar5 = local_160;
      puVar13 = local_170;
      iVar18 = *(int *)(param_1 + 0x558);
      local_a8 = *local_160;
      local_b0 = *local_170;
      local_90 = local_res10;
      local_res10 = local_res10 + 1;
      *(int *)(param_1 + 0x558) = iVar18 + 1;
      local_c8 = uVar1;
      local_a0 = uVar3;
      local_98 = uVar4;
      if (*(int *)(param_1 + 0x55c) < iVar18 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x550,iVar18);
      }
      puVar12 = (undefined8 *)((longlong)iVar18 * 0x68 + *(longlong *)(param_1 + 0x550));
      *puVar12 = local_c8;
      puVar12[1] = 0;
      FUN_1409bf110(puVar12 + 1,local_c0,local_b8 & 0xffffffff,0,0);
      puVar12[3] = local_b0;
      puVar12[4] = local_a8;
      puVar12[5] = local_a0;
      puVar12[6] = local_98;
      *(int *)(puVar12 + 7) = local_90;
      puVar12[8] = local_88;
      puVar12[9] = local_80;
      FUN_14058f8f0(puVar12 + 10,local_78);
      *(undefined4 *)(puVar12 + 0xc) = local_68;
      FUN_140591060(local_78);
      if (local_c0 != 0) {
        FMemory::Free();
      }
      FMemory::Free(puVar5);
      FMemory::Free(puVar13);
      if (puVar17 != (undefined8 *)0x0) {
        FMemory::Free(puVar17);
      }
      if (puVar14 != (undefined8 *)0x0) {
        FMemory::Free(puVar14);
      }
      if (local_1a0 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_1b0 != (void *)0x0) {
        FMemory::Free();
      }
      piVar10 = piVar10 + 0x1e;
      puVar9 = puVar9 + 0xf;
    } while (puVar9 != local_50);
  }
  return;
}



// FUNCTION 1409d10b0 FUN_1409d10b0 body=105 status=ok
// SIG undefined FUN_1409d10b0(void)

void FUN_1409d10b0(longlong *param_1)

{
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_143059e20(param_1[1],param_1[0x1e]);
    (**(code **)(*param_1 + 0x28))(param_1);
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfe;
    *(int *)(param_1 + 0x1c) = (int)param_1[0x1d];
    *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_1 + 0xe4);
                    /* WARNING: Could not recover jumptable at 0x0001409d110f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  return;
}



// FUNCTION 1409d1120 FUN_1409d1120 body=52 status=ok
// SIG undefined FUN_1409d1120(void)

void FUN_1409d1120(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    if (*(longlong *)(param_2 + 0x78) != 0) {
      FMemory::Free();
    }
    FUN_1406d8bf0(param_2);
    return;
  }
  return;
}



// FUNCTION 1409d1160 FUN_1409d1160 body=277 status=ok
// SIG undefined FUN_1409d1160(void)

void FUN_1409d1160(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong local_28;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  lVar7 = FUN_142c6f130();
  if (lVar7 != 0) {
    cVar4 = FUN_1409d1280(*(undefined8 *)(param_1 + 0x10),lVar7,0);
    if (cVar4 == '\0') {
      uVar5 = FUN_1422279d0(lVar7,&DAT_146532190);
      lVar1 = *(longlong *)(lVar7 + 0x168);
      if (lVar1 == 0) {
        uVar9 = (uint)((ulonglong)DAT_1468b5da0 >> 0x20);
      }
      else {
        fVar3 = *(float *)(lVar1 + 0x210);
        local_28 = *(longlong *)(lVar1 + 0x210);
        fStack_20 = *(float *)(lVar1 + 0x218);
        fStack_1c = *(float *)(lVar1 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
        auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar3);
        auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_20);
        auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_1c);
        iVar6 = movmskps(uVar5,auVar2);
        if (iVar6 != 0) {
          *(float *)(lVar1 + 0x250) = fVar3;
          *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
          *(float *)(lVar1 + 600) = fStack_20;
          *(float *)(lVar1 + 0x25c) = fStack_1c;
          puVar8 = (undefined8 *)FQuat::Rotator(&local_28,local_18);
          *(undefined8 *)(lVar1 + 0x260) = *puVar8;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar8 + 1);
        }
        uVar9 = (uint)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      }
      local_10 = 0;
      local_28 = (ulonglong)uVar9 << 0x20;
      fStack_20 = 0.0;
      AActor::SetActorRotation(lVar7,&local_28,1);
    }
  }
  return;
}



// FUNCTION 1409d1280 FUN_1409d1280 body=127 status=ok
// SIG undefined FUN_1409d1280(void)

undefined8 FUN_1409d1280(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  bool bVar1;
  longlong lVar2;
  
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
      lVar2 = FUN_140c41820(param_2);
      if (lVar2 != 0) {
        FUN_140c40820(param_2,param_3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1409d1300 FUN_1409d1300 body=114 status=ok
// SIG undefined FUN_1409d1300(void)

void FUN_1409d1300(longlong param_1)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (0.0 < *(float *)(param_1 + 0x114)) {
    if (*(longlong *)(param_1 + 8) != 0) {
      local_18 = *(undefined8 *)(param_1 + 0x108);
      local_10 = *(undefined4 *)(param_1 + 0x110);
      FUN_14141b740(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_18);
    }
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
  return;
}



// FUNCTION 1409d1380 FUN_1409d1380 body=531 status=ok
// SIG undefined FUN_1409d1380(void)

void FUN_1409d1380(longlong param_1,longlong param_2)

{
  longlong lVar1;
  void *_Dst;
  float fVar2;
  ulonglong uVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  void *local_60;
  int local_58;
  longlong local_50 [5];
  
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x20))) {
    fVar2 = *(float *)(param_2 + 0x240);
    local_70 = 0;
    local_68 = 6;
    *(float *)(param_2 + 0x240) = fVar2 + 15.0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
    FGenericPlatformString::Memcpy(local_70,L"Rush:",0xc);
    lVar10 = *(longlong *)(param_1 + 0x18);
    lVar1 = lVar10 + (longlong)*(int *)(param_1 + 0x20) * 0x14;
    for (; lVar10 != lVar1; lVar10 = lVar10 + 0x14) {
      lVar5 = FWeakObjectPtr::Get(lVar10 + 8);
      local_78 = 0;
      if (lVar5 != 0) {
        local_78 = *(undefined8 *)(lVar5 + 0x30);
      }
      iVar8 = 0;
      iVar7 = iVar8;
      if (lVar5 != 0) {
        iVar7 = *(int *)(lVar5 + 0x38);
      }
      puVar6 = (undefined8 *)FName::ToString(&local_78,local_50);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar6;
      }
      FString::PrintfImpl(&local_60,L" [{c:g}%s{c} ({c:b}%i{c})]",puVar9,iVar7);
      _Src = local_60;
      uVar3 = local_68;
      if (local_58 != 0) {
        iVar8 = local_58 + -1;
      }
      if (iVar8 != 0) {
        iVar7 = (int)local_68;
        lVar5 = (longlong)(int)local_68;
        iVar4 = (uint)((int)local_68 == 0) + iVar8 + (int)local_68;
        local_68 = CONCAT44(local_68._4_4_,iVar4);
        if (local_68._4_4_ < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,uVar3 & 0xffffffff);
        }
        _Dst = (void *)(local_70 + (lVar5 - (ulonglong)(iVar7 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar8 * 2);
        *(undefined2 *)((longlong)iVar8 * 2 + (longlong)_Dst) = 0;
      }
      if (local_60 != (void *)0x0) {
        FMemory::Free(local_60);
      }
      if (local_50[0] != 0) {
        FMemory::Free();
      }
    }
    FUN_1428c0170(param_2 + 0x98,&local_70);
    *(float *)(param_2 + 0x240) = fVar2;
    if (local_70 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1409d15a0 FUN_1409d15a0 body=1814 status=ok
// SIG undefined FUN_1409d15a0(void)

void FUN_1409d15a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong *puVar16;
  undefined8 uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_3e8;
  float local_3e0;
  ulonglong local_3d8;
  float local_3d0;
  ulonglong local_3c8;
  undefined4 local_3c0;
  ulonglong local_3bc;
  undefined4 local_3b4;
  ulonglong local_3b0;
  undefined4 local_3a8;
  ulonglong local_398;
  undefined4 local_390;
  ulonglong local_388;
  undefined4 local_380;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  undefined1 local_358 [8];
  longlong *local_350;
  undefined1 local_348 [32];
  longlong local_328;
  int local_320;
  int local_31c;
  undefined1 local_278 [12];
  undefined1 local_26c [12];
  undefined1 local_260 [12];
  undefined1 local_254 [12];
  undefined1 local_248 [56];
  undefined1 local_210 [56];
  undefined1 local_1d8 [56];
  undefined1 local_1a0 [56];
  undefined1 local_168 [320];
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x118), lVar18 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    cVar11 = FUN_1409d1280(lVar5,lVar18,1);
    if (cVar11 == '\0') {
      uVar12 = FUN_1422279d0(lVar18,&DAT_146532190);
      lVar6 = *(longlong *)(lVar18 + 0x168);
      if (lVar6 == 0) {
        local_3a8 = DAT_1468b5da8;
        puVar16 = &local_3b0;
        local_3b0 = DAT_1468b5da0;
      }
      else {
        local_378 = *(float *)(lVar6 + 0x210);
        fStack_374 = *(float *)(lVar6 + 0x214);
        fStack_370 = *(float *)(lVar6 + 0x218);
        fStack_36c = *(float *)(lVar6 + 0x21c);
        auVar23._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != fStack_374);
        auVar23._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != local_378);
        auVar23._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_370);
        auVar23._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_36c);
        iVar13 = movmskps(uVar12,auVar23);
        if (iVar13 != 0) {
          *(float *)(lVar6 + 0x250) = local_378;
          *(float *)(lVar6 + 0x254) = fStack_374;
          *(float *)(lVar6 + 600) = fStack_370;
          *(float *)(lVar6 + 0x25c) = fStack_36c;
          puVar14 = (undefined8 *)FQuat::Rotator(&local_378,local_278);
          *(undefined8 *)(lVar6 + 0x260) = *puVar14;
          *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar14 + 1);
        }
        local_3b4 = *(undefined4 *)(lVar6 + 0x268);
        puVar16 = &local_3bc;
        local_3bc = *(ulonglong *)(lVar6 + 0x260);
      }
      local_3c8 = *puVar16;
      local_3c0 = 0;
      local_398 = local_3c8 & 0xffffffff00000000;
      local_390 = 0;
      AActor::SetActorRotation(lVar18,&local_398,1);
    }
    lVar6 = *(longlong *)(lVar18 + 0x168);
    *(undefined8 *)(lVar6 + 0x240) = *param_2;
    *(undefined4 *)(lVar6 + 0x248) = *(undefined4 *)(param_2 + 1);
    if (*(longlong *)(lVar5 + 0x100) != 0) {
      lVar15 = FUN_142e20fc0();
      for (lVar6 = *(longlong *)(lVar5 + 0x100); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar15) {
          if (*(longlong *)(lVar5 + 0x100) == 0) {
            return;
          }
          FUN_142c62180(local_348);
          fVar21 = *(float *)(param_1 + 0x4c0);
          fVar26 = *(float *)(param_1 + 0x4bc);
          fVar24 = *(float *)(param_1 + 0x4c4);
          local_3d0 = *(float *)(param_1 + 0x4e0);
          fVar27 = SQRT(fVar26 * fVar26 + fVar21 * fVar21 + fVar24 * fVar24);
          fVar19 = 1.0 / fVar27;
          local_3d8 = *(ulonglong *)(param_1 + 0x4d8);
          fVar25 = (float)(local_3d8 >> 0x20);
          uVar10 = local_3d8;
          fVar20 = fVar25 * fVar25 + (float)local_3d8 * (float)local_3d8 + local_3d0 * local_3d0;
          fVar22 = local_3d0;
          if (1e-08 < fVar20) {
            auVar23 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
            fVar22 = auVar23._0_4_;
            fVar22 = fVar22 + fVar22 * (0.5 - fVar20 * 0.5 * fVar22 * fVar22);
            fVar22 = fVar22 + fVar22 * (0.5 - fVar20 * 0.5 * fVar22 * fVar22);
            local_3d8._0_4_ = (float)local_3d8 * fVar22;
            fVar25 = fVar25 * fVar22;
            fVar22 = local_3d0 * fVar22;
          }
          fVar20 = *(float *)(param_1 + 0x4b4);
          fVar25 = fVar25 * fVar20 + fVar21 * fVar19;
          local_3e0 = fVar22 * fVar20 + fVar24 * fVar19;
          fVar26 = (float)local_3d8 * fVar20 + fVar26 * fVar19;
          local_3e8 = CONCAT44(fVar25,fVar26);
          fVar21 = fVar25 * fVar25 + fVar26 * fVar26 + local_3e0 * local_3e0;
          if (1e-08 < fVar21) {
            auVar23 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
            fVar24 = auVar23._0_4_;
            fVar24 = fVar24 + fVar24 * (0.5 - fVar21 * 0.5 * fVar24 * fVar24);
            fVar24 = fVar24 + fVar24 * (0.5 - fVar21 * 0.5 * fVar24 * fVar24);
            local_3e0 = fVar24 * local_3e0;
            local_3e8 = CONCAT44(fVar24 * fVar25,fVar24 * fVar26);
          }
          lVar18 = *(longlong *)(lVar18 + 0x168);
          local_3d8 = uVar10;
          if (lVar18 == 0) {
            local_380 = DAT_1468b5da8;
            puVar16 = &local_388;
            local_388 = DAT_1468b5da0;
          }
          else {
            local_368 = *(float *)(lVar18 + 0x210);
            fStack_364 = *(float *)(lVar18 + 0x214);
            fStack_360 = *(float *)(lVar18 + 0x218);
            fStack_35c = *(float *)(lVar18 + 0x21c);
            auVar7._4_4_ = -(uint)(*(float *)(lVar18 + 0x254) != fStack_364);
            auVar7._0_4_ = -(uint)(*(float *)(lVar18 + 0x250) != local_368);
            auVar7._8_4_ = -(uint)(*(float *)(lVar18 + 600) != fStack_360);
            auVar7._12_4_ = -(uint)(*(float *)(lVar18 + 0x25c) != fStack_35c);
            iVar13 = movmskps(local_3d0,auVar7);
            if (iVar13 != 0) {
              *(float *)(lVar18 + 0x250) = local_368;
              *(float *)(lVar18 + 0x254) = fStack_364;
              *(float *)(lVar18 + 600) = fStack_360;
              *(float *)(lVar18 + 0x25c) = fStack_35c;
              puVar14 = (undefined8 *)FQuat::Rotator(&local_368,local_26c);
              *(undefined8 *)(lVar18 + 0x260) = *puVar14;
              *(undefined4 *)(lVar18 + 0x268) = *(undefined4 *)(puVar14 + 1);
            }
            local_3d0 = *(float *)(lVar18 + 0x268);
            puVar16 = &local_3d8;
            local_3d8 = *(ulonglong *)(lVar18 + 0x260);
          }
          local_3c8 = *puVar16;
          local_3c0 = (undefined4)puVar16[1];
          uVar17 = FRotator::GetInverse(&local_3c8,local_260);
          puVar14 = (undefined8 *)FRotator::RotateVector(uVar17,local_254,&local_3e8);
          local_3e8 = *puVar14;
          local_3e0 = *(float *)(puVar14 + 1);
          puVar14 = (undefined8 *)
                    FUN_142c62590(local_248,&DAT_146b32188,fVar27 * *(float *)(param_1 + 0x4b8));
          iVar13 = local_320;
          lVar18 = (longlong)local_320;
          local_320 = local_320 + 1;
          if (local_31c < local_320) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_328,iVar13);
          }
          uVar17 = puVar14[1];
          lVar18 = lVar18 * 0x38;
          *(undefined8 *)(lVar18 + local_328) = *puVar14;
          ((undefined8 *)(lVar18 + local_328))[1] = uVar17;
          uVar17 = puVar14[3];
          puVar3 = (undefined8 *)(lVar18 + 0x10 + local_328);
          *puVar3 = puVar14[2];
          puVar3[1] = uVar17;
          uVar12 = *(undefined4 *)((longlong)puVar14 + 0x24);
          uVar8 = *(undefined4 *)(puVar14 + 5);
          uVar9 = *(undefined4 *)((longlong)puVar14 + 0x2c);
          puVar4 = (undefined4 *)(lVar18 + 0x20 + local_328);
          *puVar4 = *(undefined4 *)(puVar14 + 4);
          puVar4[1] = uVar12;
          puVar4[2] = uVar8;
          puVar4[3] = uVar9;
          *(undefined8 *)(lVar18 + 0x30 + local_328) = puVar14[6];
          puVar14 = (undefined8 *)FUN_142c62590(local_210,&DAT_146b32198,(undefined4)local_3e8);
          iVar13 = local_320;
          lVar18 = (longlong)local_320;
          local_320 = local_320 + 1;
          if (local_31c < local_320) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_328,iVar13);
          }
          uVar17 = puVar14[1];
          lVar18 = lVar18 * 0x38;
          *(undefined8 *)(lVar18 + local_328) = *puVar14;
          ((undefined8 *)(lVar18 + local_328))[1] = uVar17;
          uVar17 = puVar14[3];
          puVar3 = (undefined8 *)(lVar18 + 0x10 + local_328);
          *puVar3 = puVar14[2];
          puVar3[1] = uVar17;
          uVar12 = *(undefined4 *)((longlong)puVar14 + 0x24);
          uVar8 = *(undefined4 *)(puVar14 + 5);
          uVar9 = *(undefined4 *)((longlong)puVar14 + 0x2c);
          puVar4 = (undefined4 *)(lVar18 + 0x20 + local_328);
          *puVar4 = *(undefined4 *)(puVar14 + 4);
          puVar4[1] = uVar12;
          puVar4[2] = uVar8;
          puVar4[3] = uVar9;
          *(undefined8 *)(lVar18 + 0x30 + local_328) = puVar14[6];
          puVar14 = (undefined8 *)FUN_142c62590(local_1d8,&DAT_146b321a0,local_3e8._4_4_);
          iVar13 = local_320;
          lVar18 = (longlong)local_320;
          local_320 = local_320 + 1;
          if (local_31c < local_320) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_328,iVar13);
          }
          uVar17 = puVar14[1];
          lVar18 = lVar18 * 0x38;
          *(undefined8 *)(lVar18 + local_328) = *puVar14;
          ((undefined8 *)(lVar18 + local_328))[1] = uVar17;
          uVar17 = puVar14[3];
          puVar3 = (undefined8 *)(lVar18 + 0x10 + local_328);
          *puVar3 = puVar14[2];
          puVar3[1] = uVar17;
          uVar12 = *(undefined4 *)((longlong)puVar14 + 0x24);
          uVar8 = *(undefined4 *)(puVar14 + 5);
          uVar9 = *(undefined4 *)((longlong)puVar14 + 0x2c);
          puVar4 = (undefined4 *)(lVar18 + 0x20 + local_328);
          *puVar4 = *(undefined4 *)(puVar14 + 4);
          puVar4[1] = uVar12;
          puVar4[2] = uVar8;
          puVar4[3] = uVar9;
          *(undefined8 *)(lVar18 + 0x30 + local_328) = puVar14[6];
          puVar14 = (undefined8 *)FUN_142c62590(local_1a0,&DAT_146b321a8,local_3e0);
          iVar13 = local_320;
          lVar18 = (longlong)local_320;
          local_320 = local_320 + 1;
          if (local_31c < local_320) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_328,iVar13);
          }
          uVar17 = puVar14[1];
          lVar18 = lVar18 * 0x38;
          *(undefined8 *)(lVar18 + local_328) = *puVar14;
          ((undefined8 *)(lVar18 + local_328))[1] = uVar17;
          uVar17 = puVar14[3];
          puVar3 = (undefined8 *)(lVar18 + 0x10 + local_328);
          *puVar3 = puVar14[2];
          puVar3[1] = uVar17;
          uVar12 = *(undefined4 *)((longlong)puVar14 + 0x24);
          uVar8 = *(undefined4 *)(puVar14 + 5);
          uVar9 = *(undefined4 *)((longlong)puVar14 + 0x2c);
          puVar4 = (undefined4 *)(lVar18 + 0x20 + local_328);
          *puVar4 = *(undefined4 *)(puVar14 + 4);
          puVar4[1] = uVar12;
          puVar4[2] = uVar8;
          puVar4[3] = uVar9;
          *(undefined8 *)(lVar18 + 0x30 + local_328) = puVar14[6];
          uVar17 = FUN_1405e0fd0(local_168,local_348);
          FUN_142c7bb40(*(undefined8 *)(param_1 + 0x18),local_358,*(undefined8 *)(lVar5 + 0x100),
                        uVar17,0);
          if (local_350 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_350 + 1;
            lVar18 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_350)(local_350);
              LOCK();
              piVar2 = (int *)((longlong)local_350 + 0xc);
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*local_350 + 8))(local_350,1);
              }
            }
          }
          FUN_142c63c50(local_348);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1409d1cc0 FUN_1409d1cc0 body=113 status=ok
// SIG undefined FUN_1409d1cc0(void)

void FUN_1409d1cc0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 8);
    do {
      FUN_140591060(plVar1 + 9);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xd;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 1409d1d40 FUN_1409d1d40 body=682 status=ok
// SIG undefined FUN_1409d1d40(void)

void FUN_1409d1d40(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined1 *local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  int local_78;
  int local_74;
  longlong local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  longlong *local_50;
  
  FUN_142c6b960();
  lVar5 = FUN_142c6f130(param_1);
  if (lVar5 != 0) {
    if ((*(uint *)(param_1 + 0x500) & 0x200) != 0) {
      lVar6 = FUN_1413f82e0();
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
        uVar7 = FUN_142c86b70(param_1,local_68);
        FUN_1409c0470(local_58,uVar7);
        local_res10 = local_58;
        FUN_1409bffa0(lVar5 + 0x1040,&local_res10);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_50 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        if (*(int *)(lVar5 + 0x1048) == 0) {
          FWeakObjectPtr::operator=(&local_78,0);
          local_70 = 0;
          plVar8 = (longlong *)FName::FName(local_res20,L"OnZoomedNotifyActions",1);
          FWeakObjectPtr::operator=(&local_78,lVar5);
          local_70 = *plVar8;
          plVar8 = (longlong *)(lVar5 + 0x1030);
          piVar1 = (int *)*plVar8;
          iVar10 = *(int *)(lVar5 + 0x1038);
          for (piVar11 = piVar1; piVar11 != piVar1 + (longlong)iVar10 * 4; piVar11 = piVar11 + 4) {
            if (((*piVar11 == local_78) && (piVar11[1] == local_74)) ||
               ((cVar4 = FWeakObjectPtr::IsValid(piVar11), cVar4 == '\0' &&
                (cVar4 = FWeakObjectPtr::IsValid(&local_78), cVar4 == '\0')))) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if ((bVar3) && (*(longlong *)(piVar11 + 2) == local_70)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if (bVar3) {
              iVar10 = (int)((longlong)piVar11 - (longlong)piVar1 >> 4);
              if (iVar10 != -1) {
                iVar2 = *(int *)(lVar5 + 0x1038);
                iVar9 = (iVar2 - iVar10) + -1;
                if (0 < iVar9) {
                  iVar9 = 1;
                }
                if (iVar9 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)iVar10 * 0x10 + *plVar8),
                             (void *)((longlong)(iVar2 - iVar9) * 0x10 + *plVar8),
                             (longlong)iVar9 << 4);
                  iVar2 = *(int *)(lVar5 + 0x1038);
                }
                *(int *)(lVar5 + 0x1038) = iVar2 + -1;
                TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar8);
              }
              break;
            }
          }
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
        }
      }
    }
    local_res10 = (undefined1 *)0x0;
    if ((*(longlong *)(param_1 + 0x508) != 0) &&
       (local_res10 = (undefined1 *)0x0, *(longlong *)(param_1 + 0x508) != 0)) {
      local_res18 = 0;
      FUN_1409e4a70(param_1,0,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 500));
    }
    if ((*(uint *)(param_1 + 0x500) & 0x800) != 0) {
      FUN_1409e4c50(param_1,0);
    }
  }
  return;
}



// FUNCTION 1409d1ff0 FUN_1409d1ff0 body=203 status=ok
// SIG undefined FUN_1409d1ff0(void)

void FUN_1409d1ff0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_18;
  undefined8 local_10;
  
  FUN_1409baaf0(*(undefined8 *)(param_1 + 0x10),0);
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar4 + 0x268) != '\0') {
    local_10 = 0;
    local_18 = lVar4;
    uVar1 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar1);
    uVar1 = FUN_142c6f130(param_1);
    FUN_140e93b80(uVar1,&local_18);
  }
  plVar3 = (longlong *)FUN_142c6f130(param_1);
  if ((plVar3 != (longlong *)0x0) && ((char)plVar3[0x25] != '\x03')) {
    uVar1 = FUN_142e39920();
    lVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar1);
    if (lVar4 != 0) {
      cVar2 = FUN_142dafb10(lVar4 + 0x8b0,&DAT_146865198);
      if (cVar2 != '\0') {
        FUN_142dbb5d0(lVar4 + 0x8b0,&DAT_146865198);
      }
    }
  }
  FUN_1409a5310(param_1);
  return;
}



// FUNCTION 1409d20c0 FUN_1409d20c0 body=100 status=ok
// SIG undefined FUN_1409d20c0(void)

void FUN_1409d20c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  FUN_1409d1d40();
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = FUN_142c6f130(param_1);
  FUN_142c6c710(lVar1);
  local_18 = lVar1;
  if (lVar1 == 0) {
    local_10 = 0;
  }
  else {
    uVar3 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
  }
  FUN_140e93b80(uVar2,&local_18);
  return;
}



// FUNCTION 1409d2130 FUN_1409d2130 body=48 status=ok
// SIG undefined FUN_1409d2130(void)

void FUN_1409d2130(longlong param_1)

{
  FUN_1409d1d40();
  if (*(longlong *)(param_1 + 0x520) != 0) {
    FUN_142db9740();
  }
  *(undefined8 *)(param_1 + 0x520) = 0;
  return;
}



// FUNCTION 1409d2160 FUN_1409d2160 body=379 status=ok
// SIG undefined FUN_1409d2160(void)

void FUN_1409d2160(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  
  if ((*(longlong *)(param_1 + 0x508) != 0) &&
     (plVar2 = (longlong *)FUN_142c6f130(), plVar2 != (longlong *)0x0)) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (cVar1 = (**(code **)(*plVar2 + 0x778))(plVar2), cVar1 != '\0')) {
      fVar6 = *(float *)(*(longlong *)(param_1 + 0x10) + 500);
      bVar5 = false;
      if (fVar6 < 0.0) {
        lVar3 = (**(code **)(*plVar2 + 0x668))(plVar2);
        if (lVar3 != 0) {
          lVar4 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((bVar5) && (lVar3 = *(longlong *)(lVar3 + 0x528), lVar3 != 0)) {
            lVar4 = FUN_142fd5420();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              fVar6 = (float)FUN_142fcad20(lVar3,*(undefined8 *)(param_1 + 0x508));
            }
          }
        }
        bVar5 = fVar6 < 0.0;
      }
      if (!bVar5 && fVar6 != 0.0) {
        FUN_140c3c690(plVar2,fVar6,0);
      }
    }
  }
  FUN_1409d1d40(param_1);
  return;
}



// FUNCTION 1409d22e0 FUN_1409d22e0 body=41 status=ok
// SIG undefined FUN_1409d22e0(void)

void FUN_1409d22e0(undefined8 param_1)

{
  FUN_142c84e30(param_1,0x3dcccccd,1);
  FUN_142c6be70(param_1);
  return;
}



// FUNCTION 1409d2310 FUN_1409d2310 body=150 status=ok
// SIG undefined FUN_1409d2310(void)

void FUN_1409d2310(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x568) != 0) {
    lVar2 = FUN_142c6f130();
    FUN_1409d7000(param_1);
    FUN_14127c6d0(*(undefined8 *)(param_1 + 0x568),0);
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
        FUN_142dbb5d0(lVar2 + 0x1228,&DAT_1468651d8);
      }
    }
  }
  FUN_1406e87e0(param_1);
  return;
}



// FUNCTION 1409d23b0 FUN_1409d23b0 body=53 status=ok
// SIG undefined FUN_1409d23b0(void)

void FUN_1409d23b0(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_142c6bc10();
  puVar1 = *(undefined8 **)(param_1 + 0x590);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x590) = 0;
  }
  return;
}



// FUNCTION 1409d2400 FUN_1409d2400 body=109 status=ok
// SIG undefined FUN_1409d2400(void)

void FUN_1409d2400(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  FUN_1409d1d40();
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = FUN_142c6f130(param_1);
  FUN_142c6c710(lVar1);
  if (*(char *)(lVar1 + 0x220) != '\0') {
    local_10 = 0;
    local_18 = lVar1;
    uVar3 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
    FUN_140e93b80(uVar2,&local_18);
  }
  return;
}



// FUNCTION 1409d2470 FUN_1409d2470 body=27 status=ok
// SIG undefined FUN_1409d2470(void)

void FUN_1409d2470(undefined8 param_1)

{
  FUN_1409ceb40();
  FUN_142c6b9b0(param_1);
  return;
}



// FUNCTION 1409d2490 FUN_1409d2490 body=183 status=ok
// SIG undefined FUN_1409d2490(void)

void FUN_1409d2490(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0x500);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x508);
    uVar3 = 0;
    uVar4 = (longlong)*(int *)(param_1 + 0x510) & 0x1fffffffffffffff;
    if (plVar2 + *(int *)(param_1 + 0x510) < plVar2) {
      uVar4 = uVar3;
    }
    if (uVar4 != 0) {
      do {
        if (*plVar2 != 0) {
          local_res10 = *plVar2;
          FUN_14058c5a0(*(longlong *)(param_1 + 0x500) + 0x348,local_res8,&local_res10,0);
        }
        plVar2 = plVar2 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar4);
      lVar1 = *(longlong *)(param_1 + 0x500);
    }
    FUN_14123df40(lVar1,0);
  }
  FUN_1407c5710(param_1);
  return;
}



// FUNCTION 1409d2560 FUN_1409d2560 body=112 status=ok
// SIG undefined FUN_1409d2560(void)

void FUN_1409d2560(longlong param_1,undefined4 param_2)

{
  if ((*(char *)(param_1 + 0x128) == '\x03') && ((*(byte *)(param_1 + 0xac2) & 2) != 0)) {
    FUN_1409be4f0(param_1 + 0x730);
    *(byte *)(param_1 + 0xac2) = *(byte *)(param_1 + 0xac2) & 0xfd;
    if (*(longlong *)(param_1 + 0xa50) != 0) {
      FUN_140e33f60(*(longlong *)(param_1 + 0xa50),param_1);
    }
  }
  FUN_1409e5e60(param_1 + 0xca0);
  FUN_1409e34b0(param_1);
  FUN_140a02820(param_1,param_2);
  return;
}



// FUNCTION 1409d25d0 FUN_1409d25d0 body=97 status=ok
// SIG undefined FUN_1409d25d0(void)

void FUN_1409d25d0(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_1409e3200(param_1 + 0x4c8);
    if ((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x479) != '\0')) {
      FUN_1409be4f0(param_1 + 0x458);
      *(undefined1 *)(param_1 + 0x479) = 0;
    }
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 1409d2640 FUN_1409d2640 body=507 status=ok
// SIG undefined FUN_1409d2640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409d2640(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  code *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FUN_140af8460();
  FUN_1409ee050(param_1);
  if (*(char *)(param_1 + 0x128) == '\x03') {
    lVar4 = 0;
    if (*(longlong *)(param_1 + 2000) != 0) {
      FWeakObjectPtr::operator=(&local_f8);
      local_f0 = 0;
      local_b8 = (longlong *)0x0;
      local_a8 = 0;
      puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_CopyToEmptyStorage_143fcfe50;
        *(undefined4 *)(puVar1 + 1) = local_f8;
        *(undefined4 *)((longlong)puVar1 + 0xc) = local_f4;
      }
      local_e8[0] = FUN_1409cd590;
      uVar2 = AActor::GetWorldTimerManager(param_1);
      local_98 = 0;
      local_90 = 0;
      FWeakObjectPtr::operator=(local_88,0);
      local_80 = 0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,local_e8);
      local_100 = 0xbf800000;
      local_108 = 0;
      FUN_142880850(uVar2,&local_f0,&local_98,0x40a00000);
      if (local_38 != 0) {
        plVar5 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar5 = local_48;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (local_a8 != 0) {
        plVar5 = local_d8;
        if (local_b8 != (longlong *)0x0) {
          plVar5 = local_b8;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    if (*(char *)(param_1 + 0x821) != '\0') {
      *(undefined1 *)(param_1 + 0x821) = 0;
      lVar3 = FUN_1409d4c70(param_1);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 0xe80);
      }
      if (lVar4 != 0) {
        FUN_140a9b1e0(lVar4,*(undefined8 *)(param_1 + 0x808),param_1);
      }
    }
    FUN_1409e5d80(param_1);
    FUN_1409be4f0(param_1 + 0x560);
  }
  return;
}



// FUNCTION 1409d2840 FUN_1409d2840 body=72 status=ok
// SIG undefined FUN_1409d2840(void)

void FUN_1409d2840(longlong param_1,undefined4 param_2)

{
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x479) != '\0')) {
    FUN_1409be4f0(param_1 + 0x458);
    *(undefined1 *)(param_1 + 0x479) = 0;
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 1409d2890 FUN_1409d2890 body=93 status=ok
// SIG undefined FUN_1409d2890(void)

void FUN_1409d2890(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  UGameplayTask::EndTask();
  lVar1 = FUN_1406d4330(*(undefined8 *)(param_1 + 0x88));
  if (lVar1 != 0) {
    local_18[0] = param_2;
    uVar2 = FUN_1406d4330(*(undefined8 *)(param_1 + 0x88));
    local_10 = FUN_142c6f130(uVar2);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x68,local_18);
  }
  return;
}



// FUNCTION 1409d2900 FUN_1409d2900 body=306 status=ok
// SIG undefined FUN_1409d2900(void)

byte * FUN_1409d2900(undefined8 param_1,byte *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 local_28 [16];
  
  param_2[0x10] = 0;
  iVar9 = (int)param_3[1] + -1;
  if (-1 < iVar9) {
    lVar13 = (longlong)iVar9 << 4;
    lVar12 = (longlong)(int)param_3[1] << 4;
    lVar14 = lVar13;
    do {
      plVar10 = (longlong *)(*param_3 + lVar14);
      if (((*plVar10 == 0) || ((longlong *)plVar10[1] == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*(longlong *)plVar10[1] + 0x18))(), cVar4 == '\0')) {
        iVar5 = (int)param_3[1];
        iVar8 = (iVar5 - iVar9) + -1;
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_3 + lVar13),(void *)(lVar12 + *param_3),(longlong)iVar8 << 4);
          iVar5 = (int)param_3[1];
        }
        *(int *)(param_3 + 1) = iVar5 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_3);
      }
      else {
        if (*plVar10 == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)plVar10[1];
        }
        pbVar6 = (byte *)(**(code **)(*plVar10 + 0x28))(plVar10,local_28);
        if (param_2[0x10] == 0) {
          if (pbVar6 != param_2) {
            uVar1 = *(undefined4 *)(pbVar6 + 4);
            uVar2 = *(undefined4 *)(pbVar6 + 8);
            uVar3 = *(undefined4 *)(pbVar6 + 0xc);
            *(undefined4 *)param_2 = *(undefined4 *)pbVar6;
            *(undefined4 *)(param_2 + 4) = uVar1;
            *(undefined4 *)(param_2 + 8) = uVar2;
            *(undefined4 *)(param_2 + 0xc) = uVar3;
            param_2[0x10] = 1;
          }
        }
        else {
          lVar7 = *(longlong *)(param_2 + 8);
          bVar11 = *pbVar6;
          if (*pbVar6 <= *param_2) {
            bVar11 = *param_2;
          }
          *param_2 = bVar11;
          if (lVar7 == 0) {
            lVar7 = *(longlong *)(pbVar6 + 8);
          }
          *(longlong *)(param_2 + 8) = lVar7;
        }
      }
      lVar12 = lVar12 + -0x10;
      lVar13 = lVar13 + -0x10;
      lVar14 = lVar14 + -0x10;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  return param_2;
}



// FUNCTION 1409d2a40 FUN_1409d2a40 body=523 status=ok
// SIG undefined FUN_1409d2a40(void)

undefined8 FUN_1409d2a40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  if (param_2 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar5 != 0) {
      lVar5 = (**(code **)(*param_2 + 0x148))(param_2);
      lVar5 = *(longlong *)(lVar5 + 0x148);
      if (lVar5 != 0) {
        plVar8 = *(longlong **)(lVar5 + 0x470);
        plVar1 = plVar8 + *(int *)(lVar5 + 0x478);
        if (plVar8 != plVar1) {
          do {
            plVar2 = (longlong *)*plVar8;
            if (plVar2 != (longlong *)0x0) {
              lVar5 = UInputKeySelector::GetPrivateStaticClass();
              if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                  lVar5 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                plVar6 = plVar2 + 0xa5;
                cVar4 = (**(code **)(*plVar6 + 0x48))();
                if ((((cVar4 == '\x01') ||
                     (cVar4 = (**(code **)(*plVar6 + 0x48))(), cVar4 == '\x02')) ||
                    ((*(char *)(param_1 + 0x88) != '\0' &&
                     (cVar4 = (**(code **)(*plVar6 + 0x48))(), cVar4 == '\x04')))) ||
                   ((*(char *)(param_1 + 0x89) != '\0' &&
                    (cVar4 = (**(code **)(*plVar6 + 0x48))(), cVar4 == '\x03')))) {
                  lVar5 = FUN_1413e48b0();
                  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                      lVar5 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  plVar6 = param_2;
                  if (!bVar3) {
                    plVar6 = (longlong *)0x0;
                  }
                  lVar5 = plVar6[0xad];
                  if (lVar5 != 0) {
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x38) < DAT_146865770) &&
                       (_Init_thread_header(&DAT_146865770), DAT_146865770 == -1)) {
                      FName::FName(&DAT_146865768,L"A9K_FFYL_Target",1);
                      _Init_thread_footer(&DAT_146865770);
                    }
                    uVar7 = (**(code **)(*plVar2 + 0x678))(plVar2);
                    FUN_142bcad50(lVar5,&DAT_146865768,uVar7);
                    return 1;
                  }
                }
              }
            }
            plVar8 = plVar8 + 1;
          } while (plVar8 != plVar1);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1409d2c50 FUN_1409d2c50 body=142 status=ok
// SIG undefined FUN_1409d2c50(void)

ulonglong FUN_1409d2c50(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    lVar3 = UComboBoxString::GetPrivateStaticClass();
    iVar2 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar2;
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < iVar2) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar2 * 8) != lVar3 + 0x88)) {
      in_RAX = (longlong *)(uVar4 & 0xffffffffffffff00);
    }
    else {
      in_RAX = (longlong *)CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      in_RAX = *(longlong **)(param_3 + 0xca0);
      plVar1 = in_RAX + *(int *)(param_3 + 0xca8);
      for (; in_RAX != plVar1; in_RAX = in_RAX + 1) {
        if (*(longlong *)(*in_RAX + 0x10) == param_2) {
          return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
        }
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409d2ce0 FUN_1409d2ce0 body=381 status=ok
// SIG undefined FUN_1409d2ce0(void)

undefined8 FUN_1409d2ce0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = AGFireballProjectile::GetPrivateStaticClass();
      lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
      if (lVar3 != 0) {
        plVar8 = *(longlong **)(lVar3 + 0x550);
        plVar1 = plVar8 + *(int *)(lVar3 + 0x558);
        for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
          lVar3 = *plVar8;
          if (lVar3 != 0) {
            lVar5 = UUGPickMutatorsScreenUW::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((bVar2) && (lVar3 = *(longlong *)(lVar3 + 0x2c0), lVar3 != 0)) {
              if (*(longlong *)(lVar3 + 0xa8) != 0) {
                lVar6 = FUN_1414193b0();
                lVar3 = *(longlong *)(lVar3 + 0xa8);
                for (lVar5 = lVar3; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
                  if (lVar5 == lVar6) goto LAB_1409d2e00;
                }
              }
              lVar3 = 0;
LAB_1409d2e00:
              if (*(longlong *)(param_1 + 0x88) != 0) {
                lVar7 = FUN_142e49950();
                lVar5 = *(longlong *)(param_1 + 0x88);
                for (lVar6 = lVar5; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
                  if (lVar6 == lVar7) goto LAB_1409d2e30;
                }
              }
              lVar5 = 0;
LAB_1409d2e30:
              if (lVar3 == lVar5) {
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



// FUNCTION 1409d2e70 FUN_1409d2e70 body=37 status=ok
// SIG undefined FUN_1409d2e70(void)

void FUN_1409d2e70(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001409d2e92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,*(undefined8 *)(param_1 + 0x18),*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 1409d2ea0 FUN_1409d2ea0 body=41 status=ok
// SIG undefined FUN_1409d2ea0(void)

void FUN_1409d2ea0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001409d2ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            (uVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
             *(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 1409d2ed0 FUN_1409d2ed0 body=42 status=ok
// SIG undefined FUN_1409d2ed0(void)

void FUN_1409d2ed0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001409d2ef7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            (uVar1,*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x20),
             *(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 1409d2f00 Execute body=64 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,TTypeWrapper<void>___cdecl(AOnlineBeaconClient_*,UNetConnection_*)>
     ::Execute(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001409d2f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 1409d2f40 FUN_1409d2f40 body=101 status=ok
// SIG undefined FUN_1409d2f40(void)

void FUN_1409d2f40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001409d2fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1409d2fc0 FUN_1409d2fc0 body=74 status=ok
// SIG undefined FUN_1409d2fc0(void)

undefined1 FUN_1409d2fc0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,*(undefined8 *)(param_1 + 0x18));
    return 1;
  }
  return 0;
}



// FUNCTION 1409d3010 FUN_1409d3010 body=78 status=ok
// SIG undefined FUN_1409d3010(void)

undefined1 FUN_1409d3010(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              (uVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    return 1;
  }
  return 0;
}



// FUNCTION 1409d3060 FUN_1409d3060 body=79 status=ok
// SIG undefined FUN_1409d3060(void)

undefined1 FUN_1409d3060(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              (uVar1,*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x20));
    return 1;
  }
  return 0;
}



// FUNCTION 1409d30b0 ExecuteIfSafe body=91 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*)>
::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1409d3110 FUN_1409d3110 body=129 status=ok
// SIG undefined FUN_1409d3110(void)

bool FUN_1409d3110(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 1409d31a0 FindId body=207 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint local_res8;
  uint local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(param_3[1] ^ *param_3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      lVar4 = *param_1;
      do {
        local_res8 = *param_3;
        lVar1 = (longlong)iVar5 * 0x14;
        local_res20 = *(undefined4 *)(lVar1 + lVar4);
        local_res24 = *(undefined4 *)(lVar1 + 4 + lVar4);
        local_resc = param_3[1];
        cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res20,&local_res8);
        if (cVar2 != '\0') {
          *param_2 = iVar5;
          return param_2;
        }
        lVar4 = *param_1;
        iVar5 = *(int *)(lVar1 + 0xc + lVar4);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1409d3270 FUN_1409d3270 body=1115 status=ok
// SIG undefined FUN_1409d3270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1409d3270(longlong param_1,undefined8 *param_2,float *param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined8 *local_250;
  undefined *local_248;
  float local_238;
  float local_230;
  float fStack_22c;
  float local_228;
  undefined8 local_220;
  float local_218;
  float local_214;
  float local_210;
  float local_208;
  float local_204;
  float local_200;
  undefined1 local_1f8 [12];
  undefined4 local_1ec;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined2 local_154;
  undefined1 local_152;
  undefined4 local_150;
  undefined1 local_14c;
  undefined4 local_148;
  undefined2 local_144;
  longlong local_120;
  undefined8 local_118;
  longlong local_100;
  undefined8 local_f8;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  if (param_4 == 0) {
    *param_2 = CONCAT44(DAT_146294674,DAT_146294670);
    *(float *)(param_2 + 1) = DAT_146294678;
  }
  else {
    lVar10 = *(longlong *)(param_4 + 0x718);
    fVar4 = *(float *)(param_4 + 0x220);
    fVar5 = *(float *)(param_4 + 0x224);
    fVar6 = *(float *)(param_4 + 0x228);
    fVar1 = *param_3;
    lVar11 = (longlong)*(int *)(param_4 + 0x720) * 0x20 + lVar10;
    fVar2 = param_3[1];
    fVar18 = param_3[2] - fVar6;
    local_238 = fVar18;
    local_230 = DAT_146294670;
    fStack_22c = DAT_146294674;
    local_228 = DAT_146294678;
    for (; lVar10 != lVar11; lVar10 = lVar10 + 0x20) {
      plVar3 = *(longlong **)(lVar10 + 8);
      if (plVar3 != (longlong *)0x0) {
        AUGWeapon_Hook::GetPrivateStaticClass();
        lVar8 = (**(code **)(*plVar3 + 0x628))(plVar3);
        if (lVar8 != 0) {
          fVar17 = *(float *)(lVar8 + 0x220) - fVar4;
          fVar14 = *(float *)(lVar8 + 0x224) - fVar5;
          fVar13 = *(float *)(lVar8 + 0x228) - fVar6;
          fVar15 = SQRT(fVar14 * fVar14 + fVar17 * fVar17 + fVar13 * fVar13);
          if (0.0001 <= fVar15) {
            fVar12 = 1.0 / fVar15;
            fVar16 = fVar17 * fVar12 * (fVar1 - fVar4) + (fVar2 - fVar5) * fVar14 * fVar12 +
                     fVar18 * fVar13 * fVar12;
            if ((0.0 < fVar16) && (fVar16 < fVar15)) {
              fVar15 = *(float *)(param_1 + 0x254);
              fVar17 = fVar17 * fVar12 * fVar16 + fVar4;
              fVar14 = fVar16 * fVar14 * fVar12 + fVar5;
              fVar13 = fVar16 * fVar13 * fVar12 + fVar6;
              fVar18 = local_238;
              local_230 = fVar17;
              fStack_22c = fVar14;
              local_228 = fVar13;
              if (0.0001 < fVar15) {
                uVar9 = (**(code **)(**(longlong **)(lVar10 + 8) + 0x148))();
                fVar15 = fVar15 * 0.5;
                local_200 = fVar15 + fVar13;
                local_210 = fVar13 - fVar15;
                local_160 = 0;
                local_120 = 0;
                local_118 = 0;
                local_100 = 0;
                local_f8 = 0;
                local_158 = 0x10000;
                local_220 = 0;
                local_168 = 0;
                local_154 = 0;
                local_144 = 0x101;
                local_14c = 0;
                local_152 = 0;
                local_148 = 0;
                local_150 = 1;
                local_218 = fVar17;
                local_214 = fVar14;
                local_208 = fVar17;
                local_204 = fVar14;
                _guard_xfg_dispatch_icall_nop(local_1f8,0,0x90);
                local_250 = &local_168;
                local_248 = &DAT_146aefe68;
                local_258 = 0;
                local_1ec = 0x3f800000;
                cVar7 = UWorld::LineTraceSingleByChannel(uVar9,local_1f8,&local_208,&local_218);
                if (cVar7 != '\0') {
                  local_230 = local_1e4;
                  local_228 = local_1dc;
                  fStack_22c = local_1e0;
                }
                if (local_100 != 0) {
                  FMemory::Free();
                }
                fVar18 = local_238;
                if (local_120 != 0) {
                  FMemory::Free();
                  fVar18 = local_238;
                }
              }
            }
          }
        }
      }
    }
    *param_2 = CONCAT44(fStack_22c,local_230);
    *(float *)(param_2 + 1) = local_228;
  }
  return param_2;
}



// FUNCTION 1409d36d0 FUN_1409d36d0 body=1903 status=ok
// SIG undefined FUN_1409d36d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1409d36d0(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  undefined1 auVar15 [16];
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
  undefined1 auStack_178 [32];
  undefined1 local_158;
  int local_148 [4];
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
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  uVar7 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  *param_3 = 0;
  if (param_2 == 0) goto LAB_1409d3e21;
  local_e8 = uVar7;
  lVar8 = FUN_142c6f130();
  uVar7 = 0;
  if (lVar8 == 0) goto LAB_1409d3e21;
  local_148[0] = -1;
  uVar7 = FUN_142c711a0(param_1,&DAT_1468651d0,local_148);
  if (((char)uVar7 == '\0') || (local_148[0] == -1)) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    cVar1 = *(char *)(lVar2 + 0x309);
    if (cVar1 == '\x01') {
      uVar7 = *(ulonglong *)(param_2 + 0x668);
      goto LAB_1409d37b1;
    }
    if (cVar1 == '\x02') {
      uVar7 = FUN_1412286a0(param_2,1);
      goto LAB_1409d37b1;
    }
    if (cVar1 == '\x03') {
      uVar9 = 0;
LAB_1409d3776:
      local_158 = *(undefined1 *)(lVar2 + 0x30a);
      uVar7 = FUN_141220910(param_2,lVar8,*(undefined4 *)(lVar2 + 0x304),uVar9);
      goto LAB_1409d37b1;
    }
    if (cVar1 == '\x04') {
      uVar9 = 1;
      goto LAB_1409d3776;
    }
  }
  else {
    uVar7 = FUN_1412286a0(param_2);
LAB_1409d37b1:
    *param_3 = uVar7;
  }
  if (*param_3 != 0) {
    lVar8 = FUN_142cef2b0(*param_3,&local_128);
    fVar21 = *(float *)(lVar8 + 0x10);
    fVar22 = *(float *)(lVar8 + 0x14);
    fVar37 = *(float *)(lVar8 + 0x18);
    fVar38 = (float)((uint)_DAT_146864db0 & _DAT_146864dc0);
    fVar39 = (float)((uint)fRam0000000146864db4 & uRam0000000146864dc4);
    fVar40 = (float)((uint)fRam0000000146864db8 & uRam0000000146864dc8);
    fVar41 = (float)((uint)fRam0000000146864dbc & uRam0000000146864dcc);
    lVar8 = *(longlong *)(param_2 + 0x168);
    fVar42 = 0.0;
    fVar43 = 0.0;
    fVar12 = 0.0;
    if (lVar8 == 0) {
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar16 = fRam0000000146864dbc;
      fVar17 = fVar38;
      fVar18 = fVar39;
      fVar19 = fVar40;
      fVar20 = fVar41;
    }
    else {
      fVar42 = *(float *)(lVar8 + 0x210);
      fVar43 = *(float *)(lVar8 + 0x214);
      fVar12 = *(float *)(lVar8 + 0x218);
      fVar27 = *(float *)(lVar8 + 0x220);
      fVar28 = *(float *)(lVar8 + 0x224);
      fVar29 = *(float *)(lVar8 + 0x228);
      fVar16 = *(float *)(lVar8 + 0x21c);
      fVar17 = *(float *)(lVar8 + 0x230);
      fVar18 = *(float *)(lVar8 + 0x234);
      fVar19 = *(float *)(lVar8 + 0x238);
      fVar20 = *(float *)(lVar8 + 0x23c);
    }
    auVar13._0_4_ = (float)((uint)fVar17 & _DAT_146864e50);
    auVar13._4_4_ = (float)((uint)fVar18 & uRam0000000146864e54);
    auVar13._8_4_ = (float)((uint)fVar19 & uRam0000000146864e58);
    auVar13._12_4_ = (float)((uint)fVar20 & uRam0000000146864e5c);
    auVar14._4_4_ = -(uint)(fRam0000000146865114 < auVar13._4_4_);
    auVar14._0_4_ = -(uint)(_DAT_146865110 < auVar13._0_4_);
    auVar14._8_4_ = -(uint)(fRam0000000146865118 < auVar13._8_4_);
    auVar14._12_4_ = -(uint)(fRam000000014686511c < auVar13._12_4_);
    iVar6 = movmskps((int)lVar8,auVar14);
    fVar23 = _DAT_1468b5b70;
    fVar24 = fRam00000001468b5b74;
    fVar25 = fRam00000001468b5b78;
    fVar26 = fRam00000001468b5b7c;
    fVar34 = _DAT_1468b5b90;
    fVar35 = fRam00000001468b5b94;
    fVar36 = fRam00000001468b5b98;
    fVar30 = fRam00000001468b5b9c;
    local_f8 = _DAT_1468b5b80;
    fStack_f4 = fRam00000001468b5b84;
    fStack_f0 = fRam00000001468b5b88;
    if (iVar6 != 0) {
      fVar23 = fVar42 * _DAT_146865120;
      fVar24 = fVar43 * fRam0000000146865124;
      fVar25 = fVar12 * fRam0000000146865128;
      fVar26 = fVar16 * fRam000000014686512c;
      auVar4._4_4_ = fVar18;
      auVar4._0_4_ = fVar17;
      auVar4._8_4_ = fVar19;
      auVar4._12_4_ = fVar20;
      auVar14 = rcpps(auVar13,auVar4);
      fVar12 = auVar14._0_4_;
      fVar42 = auVar14._4_4_;
      fVar43 = auVar14._8_4_;
      fVar16 = auVar14._12_4_;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar17;
      fVar42 = (fVar42 + fVar42) - fVar42 * fVar42 * fVar18;
      fVar43 = (fVar43 + fVar43) - fVar43 * fVar43 * fVar19;
      fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar20;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar17;
      fVar42 = (fVar42 + fVar42) - fVar42 * fVar42 * fVar18;
      fVar43 = (fVar43 + fVar43) - fVar43 * fVar43 * fVar19;
      fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar20;
      fVar34 = (float)((-(uint)((float)((uint)fVar17 & _DAT_146864e50) <= _DAT_146865110) &
                        (uint)fVar12 ^ (uint)fVar12) & _DAT_146864dc0);
      fVar35 = (float)((-(uint)((float)((uint)fVar18 & uRam0000000146864e54) <= fRam0000000146865114
                               ) & (uint)fVar42 ^ (uint)fVar42) & uRam0000000146864dc4);
      fVar36 = (float)((-(uint)((float)((uint)fVar19 & uRam0000000146864e58) <= fRam0000000146865118
                               ) & (uint)fVar43 ^ (uint)fVar43) & uRam0000000146864dc8);
      fVar27 = fVar27 * fVar34;
      fVar28 = fVar28 * fVar35;
      fVar29 = fVar29 * fVar36;
      fVar12 = fVar29 * fVar24 - fVar28 * fVar25;
      fVar42 = fVar27 * fVar25 - fVar29 * fVar23;
      fVar43 = fVar28 * fVar23 - fVar27 * fVar24;
      fVar12 = fVar12 + fVar12;
      fVar42 = fVar42 + fVar42;
      fVar43 = fVar43 + fVar43;
      fVar30 = (float)((-(uint)((float)((uint)fVar20 & uRam0000000146864e5c) <= fRam000000014686511c
                               ) & (uint)fVar16 ^ (uint)fVar16) & uRam0000000146864dcc);
      local_f8 = (float)((uint)(0.0 - ((fVar43 * fVar24 - fVar42 * fVar25) +
                                      fVar26 * fVar12 + fVar27)) & _DAT_146864dc0);
      fStack_f4 = (float)((uint)(0.0 - ((fVar12 * fVar25 - fVar43 * fVar23) +
                                       fVar26 * fVar42 + fVar28)) & uRam0000000146864dc4);
      fStack_f0 = (float)((uint)(0.0 - ((fVar42 * fVar23 - fVar12 * fVar24) +
                                       fVar26 * fVar43 + fVar29)) & uRam0000000146864dc8);
    }
    auVar10._4_4_ = fVar39;
    auVar10._0_4_ = fVar38;
    auVar10._8_4_ = fVar40;
    auVar10._12_4_ = fVar41;
    auVar5._4_4_ = fVar35;
    auVar5._0_4_ = fVar34;
    auVar5._8_4_ = fVar36;
    auVar5._12_4_ = fVar30;
    auVar14 = minps(auVar10,auVar5);
    auVar11._4_4_ = -(uint)(auVar14._4_4_ < fRam0000000146864e14);
    auVar11._0_4_ = -(uint)(auVar14._0_4_ < _DAT_146864e10);
    auVar11._8_4_ = -(uint)(auVar14._8_4_ < fRam0000000146864e18);
    auVar11._12_4_ = -(uint)(auVar14._12_4_ < fRam0000000146864e1c);
    iVar6 = movmskps(iVar6,auVar11);
    if (iVar6 == 0) {
      fVar21 = fVar21 * fVar34;
      fVar22 = fVar22 * fVar35;
      fVar37 = fVar37 * fVar36;
      fVar12 = fVar37 * fVar24 - fVar22 * fVar25;
      fVar42 = fVar21 * fVar25 - fVar37 * fVar23;
      fVar43 = fVar22 * fVar23 - fVar21 * fVar24;
      fVar12 = fVar12 + fVar12;
      fVar42 = fVar42 + fVar42;
      fVar43 = fVar43 + fVar43;
      local_f8 = (fVar43 * fVar24 - fVar42 * fVar25) + fVar26 * fVar12 + fVar21 + local_f8;
      fStack_f4 = (fVar12 * fVar25 - fVar43 * fVar23) + fVar26 * fVar42 + fVar22 + fStack_f4;
      fStack_f0 = (fVar42 * fVar23 - fVar12 * fVar24) + fVar26 * fVar43 + fVar37 + fStack_f0;
    }
    else {
      fVar42 = fVar24 + fVar24;
      fVar43 = fVar25 + fVar25;
      fVar27 = (fVar23 + fVar23) * fVar23;
      fVar12 = (fVar23 + fVar23) * fVar26;
      fVar31 = (fVar43 * fVar26 + fVar42 * fVar23) * fVar34;
      fVar32 = (fVar12 + fVar43 * fVar24) * fVar35;
      fVar33 = (fVar42 * fVar26 + fVar43 * fVar23) * fVar36;
      fVar17 = fVar35 * (fVar42 * fVar23 - fVar43 * fVar26);
      fVar19 = fVar36 * (fVar43 * fVar24 - fVar12);
      fVar23 = fVar34 * (fVar43 * fVar23 - fVar42 * fVar26);
      fVar12 = (float)((uint)((_DAT_146864db0 - (fVar43 * fVar25 + fVar42 * fVar24)) * fVar34) &
                      _DAT_146864dc0);
      fVar43 = (float)((uint)((fRam0000000146864db4 - (fVar43 * fVar25 + fVar27)) * fVar35) &
                      uRam0000000146864dc4);
      fVar28 = (float)((uint)((fRam0000000146864db8 - (fVar42 * fVar24 + fVar27)) * fVar36) &
                      uRam0000000146864dc8);
      fVar16 = (float)((uint)((fRam0000000146864dbc - (fVar27 + fVar27)) * fVar30) &
                      uRam0000000146864dcc);
      fVar25 = (fRam0000000146864dbc * 0.0 + 0.0) * fVar38;
      fVar26 = (fRam0000000146864dbc * 0.0 + 0.0) * fVar39;
      fVar30 = (fRam0000000146864dbc * 0.0 + 0.0) * fVar40;
      fVar18 = fVar39 * (0.0 - fRam0000000146864dbc * 0.0);
      fVar20 = fVar40 * (0.0 - fRam0000000146864dbc * 0.0);
      fVar24 = fVar38 * (0.0 - fRam0000000146864dbc * 0.0);
      fVar42 = (float)((uint)((_DAT_146864db0 - 0.0) * fVar38) & _DAT_146864dc0);
      fVar27 = (float)((uint)((fRam0000000146864db4 - 0.0) * fVar39) & uRam0000000146864dc4);
      fVar29 = (float)((uint)((fRam0000000146864db8 - 0.0) * fVar40) & uRam0000000146864dc8);
      fVar41 = (float)((uint)((fRam0000000146864dbc - 0.0) * fVar41) & uRam0000000146864dcc);
      local_128 = fVar25 * fVar17 + fVar42 * fVar12 + fVar24 * fVar33 + fVar41 * local_f8;
      fStack_124 = fVar25 * fVar43 + fVar42 * fVar31 + fVar24 * fVar19 + fVar41 * fStack_f4;
      fStack_120 = fVar25 * fVar32 + fVar42 * fVar23 + fVar24 * fVar28 + fVar41 * fStack_f0;
      fStack_11c = fVar25 * fVar16 + fVar42 * fVar16 + fVar24 * fVar16 +
                   fVar41 * fRam0000000146864dbc;
      local_118 = fVar27 * fVar17 + fVar18 * fVar12 + fVar26 * fVar33 + fVar41 * local_f8;
      fStack_114 = fVar27 * fVar43 + fVar18 * fVar31 + fVar26 * fVar19 + fVar41 * fStack_f4;
      fStack_110 = fVar27 * fVar32 + fVar18 * fVar23 + fVar26 * fVar28 + fVar41 * fStack_f0;
      fStack_10c = fVar27 * fVar16 + fVar18 * fVar16 + fVar26 * fVar16 +
                   fVar41 * fRam0000000146864dbc;
      local_108 = fVar20 * fVar17 + fVar30 * fVar12 + fVar29 * fVar33 + fVar41 * local_f8;
      fStack_104 = fVar20 * fVar43 + fVar30 * fVar31 + fVar29 * fVar19 + fVar41 * fStack_f4;
      fStack_100 = fVar20 * fVar32 + fVar30 * fVar23 + fVar29 * fVar28 + fVar41 * fStack_f0;
      fStack_fc = fVar20 * fVar16 + fVar30 * fVar16 + fVar29 * fVar16 +
                  fVar41 * fRam0000000146864dbc;
      local_f8 = fVar22 * fVar17 + fVar21 * fVar12 + fVar37 * fVar33 +
                 fRam0000000146864dbc * local_f8;
      fStack_f4 = fVar22 * fVar43 + fVar21 * fVar31 + fVar37 * fVar19 +
                  fRam0000000146864dbc * fStack_f4;
      fStack_f0 = fVar22 * fVar32 + fVar21 * fVar23 + fVar37 * fVar28 +
                  fRam0000000146864dbc * fStack_f0;
      fStack_ec = fVar22 * fVar16 + fVar21 * fVar16 + fVar37 * fVar16 +
                  fRam0000000146864dbc * fRam0000000146864dbc;
      FMatrix::RemoveScaling(&local_128);
      fVar12 = (float)(-(uint)(_DAT_146864e10 <= fVar34 * fVar38) &
                       (_DAT_146864e00 ^ (uint)_DAT_146864db0) ^ _DAT_146864e00);
      fVar21 = (float)(-(uint)(fRam0000000146864e14 <= fVar35 * fVar39) &
                       (uRam0000000146864e04 ^ (uint)fRam0000000146864db4) ^ uRam0000000146864e04);
      fVar22 = (float)(-(uint)(fRam0000000146864e18 <= fVar36 * fVar40) &
                       (uRam0000000146864e08 ^ (uint)fRam0000000146864db8) ^ uRam0000000146864e08);
      local_128 = local_128 * fVar12;
      fStack_124 = fStack_124 * fVar12;
      fStack_120 = fStack_120 * fVar12;
      fStack_110 = fStack_110 * fVar21;
      fStack_114 = fStack_114 * fVar21;
      local_118 = local_118 * fVar21;
      fStack_100 = fStack_100 * fVar22;
      local_108 = local_108 * fVar22;
      fStack_104 = fStack_104 * fVar22;
      FQuat::FQuat(&local_138,&local_128);
      auVar15._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
      auVar15._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
      auVar15._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
      auVar15._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
      auVar3._4_4_ = auVar15._8_4_ + auVar15._4_4_;
      auVar3._0_4_ = auVar15._4_4_ + auVar15._0_4_;
      auVar3._8_4_ = auVar15._12_4_ + auVar15._8_4_;
      auVar3._12_4_ = auVar15._0_4_ + auVar15._12_4_;
      rsqrtps(auVar15,auVar3);
    }
    *param_4 = CONCAT44(fStack_f4,local_f8);
    *(float *)(param_4 + 1) = fStack_f0;
    return CONCAT71((uint7)(uint3)((uint)fStack_f0 >> 8),1);
  }
LAB_1409d3e21:
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 1409d3e40 FUN_1409d3e40 body=1069 status=ok
// SIG undefined FUN_1409d3e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409d3e40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [48];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar6 = *(longlong *)(param_1 + 0x138);
  if (lVar6 != 0) {
    lVar11 = 0;
    if (*(char *)(lVar6 + 0x128) == '\x03') {
      if ((*(longlong *)(lVar6 + 0x700) == 0) ||
         (lVar12 = *(longlong *)(*(longlong *)(lVar6 + 0x700) + 0x2e0), lVar12 == 0)) {
        local_f0 = DAT_1468b5d98;
        fVar14 = DAT_1468b5d94;
        fVar17 = DAT_1468b5d90;
      }
      else {
        lVar6 = *(longlong *)(lVar6 + 0x168);
        if (lVar6 == 0) {
          local_e0 = DAT_1468b5d98;
          local_e8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          local_e0 = *(float *)(lVar6 + 0x228);
          local_e8 = *(undefined8 *)(lVar6 + 0x220);
        }
        fVar17 = local_e0;
        uVar4 = local_e8;
        local_f0 = local_e0;
        lVar6 = *(longlong *)(lVar12 + 0x168);
        local_f8 = local_e8;
        if (lVar6 == 0) {
          local_e0 = DAT_1468b5d98;
          local_e8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          local_e0 = *(float *)(lVar6 + 0x228);
          local_e8 = *(undefined8 *)(lVar6 + 0x220);
        }
        fVar14 = *(float *)(param_1 + 0x134);
        fVar15 = *(float *)(param_1 + 0x130);
        local_f8._0_4_ = (float)uVar4;
        fVar16 = (float)local_e8 - (float)local_f8;
        fVar17 = local_e0 - fVar17;
        local_f8._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
        fVar18 = (float)((ulonglong)local_e8 >> 0x20) - local_f8._4_4_;
        local_f8 = uVar4;
        iVar5 = rand();
        lVar6 = *(longlong *)(param_1 + 0x138);
        fVar15 = (float)iVar5 * 3.051851e-05 * (fVar14 - fVar15) + fVar15;
        local_f0 = fVar15 * fVar17 + fVar17;
        fVar14 = fVar15 * fVar18 + fVar18;
        fVar17 = fVar15 * fVar16 + fVar16;
      }
      local_f8 = CONCAT44(fVar14,fVar17);
      local_d8 = local_f8;
      local_d0 = local_f0;
      if (lVar6 == 0) {
        local_e0 = DAT_1468b5d98;
        puVar7 = &local_e8;
        local_e8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        lVar6 = lVar11;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x15c);
        if ((iVar5 < 0) || (*(int *)(param_1 + 0x128) <= iVar5)) {
          local_f8 = 0;
          lVar12 = lVar11;
        }
        else {
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar5 * 8);
        }
        plVar2 = *(longlong **)(lVar6 + 0x748);
        if (plVar2 == (longlong *)0x0) {
          local_f0 = DAT_1468b5d98;
          puVar7 = &local_f8;
          local_f8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          lVar6 = (**(code **)(*plVar2 + 0x420))(plVar2,local_b8,lVar12,0);
          puVar7 = &local_f8;
          local_f0 = *(float *)(lVar6 + 0x18);
          local_f8 = *(undefined8 *)(lVar6 + 0x10);
          lVar6 = *(longlong *)(param_1 + 0x138);
        }
      }
      local_c8 = *puVar7;
      local_c0 = *(undefined4 *)(puVar7 + 1);
      if (lVar6 == 0) {
        bVar13 = false;
      }
      else {
        bVar13 = (*(byte *)(lVar6 + 0xa60) & 2) != 0;
      }
      lVar6 = 0x108;
      if (!bVar13) {
        lVar6 = 0xf0;
      }
      lVar12 = lVar11;
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        lVar8 = FUN_141432370();
        for (lVar3 = *(longlong *)(param_1 + 0xe8);
            (lVar12 = lVar11, lVar3 != 0 && (lVar12 = *(longlong *)(param_1 + 0xe8), lVar3 != lVar8)
            ); lVar3 = *(longlong *)(lVar3 + 0x30)) {
        }
      }
      uVar4 = *(undefined8 *)(param_1 + 0x138);
      uVar9 = FUN_1409d7110(uVar4);
      uVar10 = FUN_1409d7110(uVar4);
      local_110 = *(undefined8 *)(lVar6 + param_1);
      local_118 = *(undefined4 *)(param_1 + 0x150);
      local_100 = 0;
      local_108 = 0;
      local_128 = uVar4;
      local_120 = uVar9;
      FUN_143040b40(lVar12,&local_c8,&local_d8,uVar10);
      *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + -1;
    }
    FUN_1409e1d80(param_1);
    piVar1 = (int *)(param_1 + 0x15c);
    *piVar1 = *piVar1 + 1;
    if ((*piVar1 < 0) || (*(int *)(param_1 + 0x128) <= *(int *)(param_1 + 0x15c))) {
      *(undefined4 *)(param_1 + 0x15c) = 0;
    }
  }
  return;
}



// FUNCTION 1409d4270 FUN_1409d4270 body=239 status=ok
// SIG undefined FUN_1409d4270(void)

undefined8 FUN_1409d4270(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  undefined2 local_res10 [4];
  undefined2 local_48 [28];
  undefined8 local_10;
  
  puVar1 = (undefined8 *)param_2[7];
  local_10 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    local_10 = (**(code **)*puVar1)(puVar1,local_48);
  }
  cVar2 = FUN_142c6da10(param_1,local_48);
  plVar3 = (longlong *)param_2[7];
  if (cVar2 != '\0') {
    local_res10[0] = 4;
    if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    cVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,local_res10);
    plVar3 = (longlong *)param_2[7];
    if (cVar2 != '\0') {
      local_res10[0] = 8;
      if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_guard_xfg_dispatch_icall_nop();
      }
      cVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,local_res10);
      plVar3 = (longlong *)param_2[7];
      if (cVar2 != '\0') {
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_2);
          param_2[7] = 0;
        }
        return 1;
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_2);
    param_2[7] = 0;
  }
  return 0;
}



// FUNCTION 1409d4370 thunk_FUN_1409eeeb0 body=5 status=ok
// SIG undefined thunk_FUN_1409eeeb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_1409eeeb0(ulonglong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong auStack_28 [2];
  char cStack_18;
  ulonglong uStack_10;
  
  uStack_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_1[5] != 0) {
    FUN_1409d2900(param_1,auStack_28,param_1 + 9);
    iVar3 = FUN_14233f450(param_1[5]);
    if (iVar3 == 3) {
      puVar4 = (ulonglong *)FUN_1409d2900(param_1,&uStack_48,param_1 + 7);
      if ((puVar4 == &uStack_68) || ((char)puVar4[2] == '\0')) {
        uStack_68 = uStack_68 & 0xffffffffffffff00;
        uStack_60 = 0;
      }
      else {
        uStack_68 = *puVar4;
        uStack_60 = puVar4[1];
      }
      uStack_48 = (undefined4)uStack_68;
      uStack_44 = uStack_68._4_4_;
      uStack_40 = (undefined4)uStack_60;
      uStack_3c = uStack_60._4_4_;
      if (((char)*param_1 != (char)uStack_68) || (param_1[1] != uStack_60)) {
        *(undefined4 *)param_1 = (undefined4)uStack_68;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_68._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
        if ((longlong *)param_1[5] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[5] + 0x260))();
        }
      }
    }
    puVar4 = auStack_28;
    if (cStack_18 == '\0') {
      puVar4 = param_1;
    }
    uStack_68 = *puVar4;
    uStack_60 = puVar4[1];
    if ((((param_1[5] == 0) || (lVar5 = FUN_140e50630(), lVar5 == 0)) ||
        (cVar2 = UKeyLabel::GetDisplayNameVisibility_Implementation(lVar5), cVar2 != '\0')) ||
       (2 < *(byte *)(lVar5 + 0xec0))) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (char)uStack_68;
    }
    if (param_1[5] != 0) {
      if (param_1[4] != uStack_60) {
        param_1[4] = uStack_60;
        FUN_140e835f0();
      }
      uVar1 = param_1[3];
      if ((char)uVar1 != cVar2) {
        *(char *)(param_1 + 3) = cVar2;
        FUN_140e83610(param_1[5],(char)uVar1,cVar2);
      }
      if ((char)param_1[6] != (char)param_1[2]) {
        *(char *)(param_1 + 6) = (char)param_1[2];
        UAbilityOverviewWidget::OnAbilityUsed(param_1[5]);
      }
      if (*(char *)((longlong)param_1 + 0x31) != *(char *)((longlong)param_1 + 0x11)) {
        *(char *)((longlong)param_1 + 0x31) = *(char *)((longlong)param_1 + 0x11);
        UAbilityOverviewWidget::OnAbilityUsed(param_1[5]);
      }
    }
  }
  return;
}



// FUNCTION 1409d4380 FUN_1409d4380 body=241 status=ok
// SIG undefined FUN_1409d4380(void)

void FUN_1409d4380(longlong param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  FUN_1406e9990();
  if (*(char *)(param_1 + 200) != '\x01') {
    local_18[0] = 0;
    local_18[1] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"ReviveTarget",0x1a);
    FUN_1406dc710(param_1 + -0x28,param_2,param_1 + 0x2d8,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    local_18[0] = 0;
    local_18[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"NavGoal",0x10);
    FUN_1406dc710(param_1 + -0x28,param_2,param_1 + 0x7c0,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1409d4480 FUN_1409d4480 body=353 status=ok
// SIG undefined FUN_1409d4480(void)

/* WARNING: Removing unreachable block (ram,0x0001409d44f9) */

void FUN_1409d4480(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = 0;
  uStack_20 = 0;
  lVar2 = FUN_1409ab5c0(0,param_1[0x4c]);
  if (lVar2 != 0) {
    lVar3 = FUN_1413e07a0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (local_28 = lVar2,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
       != lVar3 + 0x88)) {
      local_28 = 0;
    }
  }
  lVar2 = FUN_1409ab5c0(param_1,param_1[0x4d]);
  if (lVar2 != 0) {
    lVar3 = FUN_1413e0900();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uStack_20 = 0;
    if (bVar1) {
      uStack_20 = lVar2;
    }
  }
  lVar2 = FUN_1409d4cf0(param_1);
  if (((local_28 == param_1[0x56]) && (uStack_20 == param_1[0x57])) && (lVar2 == param_1[0x58])) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x56) = (undefined4)local_28;
    *(undefined4 *)((longlong)param_1 + 0x2b4) = local_28._4_4_;
    *(undefined4 *)(param_1 + 0x57) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_1 + 700) = uStack_20._4_4_;
    param_1[0x58] = lVar2;
    FUN_1409a6b10(param_1[0x22],param_1);
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}



// FUNCTION 1409d45f0 FUN_1409d45f0 body=26 status=ok
// SIG undefined FUN_1409d45f0(void)

undefined8 * FUN_1409d45f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UUGPickMutatorsScreenUW::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1409d4610 GetLinkOwner body=93 status=ok
// SIG undefined GetLinkOwner(void)

longlong INavLinkCustomInterface::GetLinkOwner(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 8))();
    lVar3 = FUN_1428dfc70();
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
      lVar4 = lVar2;
    }
  }
  return lVar4;
}



// FUNCTION 1409d4670 FUN_1409d4670 body=151 status=ok
// SIG undefined FUN_1409d4670(void)

void FUN_1409d4670(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  iVar3 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar3);
  }
  lVar4 = *param_2;
  uVar5 = *(undefined4 *)(param_1 + 0xbc);
  uVar6 = *(undefined4 *)(param_1 + 0xc0);
  uVar7 = *(undefined4 *)(param_1 + 0xc4);
  puVar1 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x18);
  *puVar1 = *(undefined4 *)(param_1 + 0xb8);
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = *(undefined8 *)(param_1 + 200);
  iVar3 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar3);
  }
  lVar4 = *param_2;
  uVar8 = *(undefined8 *)(param_1 + 0xd8);
  puVar2 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x18);
  *puVar2 = *(undefined8 *)(param_1 + 0xd0);
  puVar2[1] = uVar8;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = *(undefined8 *)(param_1 + 0xe0);
  return;
}



// FUNCTION 1409d4710 FUN_1409d4710 body=118 status=ok
// SIG undefined FUN_1409d4710(void)

void FUN_1409d4710(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x218);
  lVar2 = (longlong)*(int *)(param_1 + 0x220) * 0xb0 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0xb0) {
    FUN_142c66a00(lVar1,param_2);
  }
  FUN_142c6f3b0(param_1,param_2);
  return;
}



// FUNCTION 1409d47d0 FUN_1409d47d0 body=21 status=ok
// SIG undefined FUN_1409d47d0(void)

undefined1 FUN_1409d47d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x1c0) + 0xa0);
  }
  return 0;
}



// FUNCTION 1409d47f0 FUN_1409d47f0 body=190 status=ok
// SIG undefined FUN_1409d47f0(void)

void FUN_1409d47f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x2c8) != '\0') {
    plVar4 = *(longlong **)(param_1 + 0x218);
    plVar1 = plVar4 + (longlong)*(int *)(param_1 + 0x220) * 9;
    for (; plVar4 != plVar1; plVar4 = plVar4 + 9) {
      if (*plVar4 != 0) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = *plVar4;
      }
    }
    return;
  }
  iVar2 = (int)param_2[1];
  uVar3 = *(undefined8 *)(param_1 + -0x440);
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar3;
  return;
}



// FUNCTION 1409d48b0 FUN_1409d48b0 body=518 status=ok
// SIG undefined FUN_1409d48b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1409d48b0(longlong *param_1,float *param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar9;
  float fVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  float local_34;
  float local_28;
  longlong *local_20;
  int local_18;
  ulonglong uVar8;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  uVar8 = 0;
  iVar7 = 0;
  uVar9 = *(ulonglong *)(lVar3 + 0x148);
  if (uVar9 != 0) {
    lVar3 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1409d491a;
  }
  uVar9 = uVar8;
LAB_1409d491a:
  fVar10 = DAT_1468b5d98;
  *(undefined8 *)param_2 = _DAT_1468b5d90;
  param_2[2] = fVar10;
  if (uVar9 != 0) {
    uVar2 = FHTTPChunkInstall::GetInstallSpeed(uVar9);
    uVar9 = (ulonglong)uVar2;
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar4,&local_20);
    if (0 < (int)uVar2) {
      do {
        lVar3 = FWeakObjectPtr::Get(*local_20 + (longlong)local_18 * 8);
        if (lVar3 != 0) {
          lVar5 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x488) + 0x168);
            if (lVar3 == 0) {
              local_34 = DAT_1468b5d98;
              puVar6 = &local_3c;
              local_3c = _DAT_1468b5d90;
            }
            else {
              puVar6 = (undefined8 *)&local_48;
              local_48 = *(undefined4 *)(lVar3 + 0x220);
              local_40 = *(undefined4 *)(lVar3 + 0x228);
              uStack_44 = *(undefined4 *)(lVar3 + 0x224);
            }
            uVar4 = *puVar6;
            uVar8 = (ulonglong)((int)uVar8 + 1);
            local_28 = *(float *)(puVar6 + 1);
            *param_2 = (float)uVar4 + *param_2;
            param_2[1] = (float)((ulonglong)uVar4 >> 0x20) + param_2[1];
            param_2[2] = local_28 + param_2[2];
          }
        }
        iVar7 = (int)uVar8;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    fVar10 = 1.0 / (float)iVar7;
    *param_2 = fVar10 * *param_2;
    param_2[1] = fVar10 * param_2[1];
    param_2[2] = fVar10 * param_2[2];
  }
  return param_2;
}



// FUNCTION 1409d4ac0 FUN_1409d4ac0 body=97 status=ok
// SIG undefined FUN_1409d4ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1409d4ac0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28 [2];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_18 = 0;
    puVar2 = local_28;
  }
  else {
    puVar2 = (undefined8 *)FUN_142d1a9e0(*(longlong *)(param_1 + 0x10),local_28);
  }
  *(undefined1 *)(param_2 + 2) = 0;
  if (*(char *)(puVar2 + 2) != '\0') {
    uVar1 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar1;
    *(undefined1 *)(param_2 + 2) = 1;
  }
  return param_2;
}



// FUNCTION 1409d4b60 FUN_1409d4b60 body=176 status=ok
// SIG undefined FUN_1409d4b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1409d4b60(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1468b5d98;
  if ((param_3 != 0) && (*(longlong *)(param_3 + 0x118) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x118) + 0x168);
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 0x228);
      *param_2 = *(undefined8 *)(lVar1 + 0x220);
      *(undefined4 *)(param_2 + 1) = uVar2;
      return param_2;
    }
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = uVar2;
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return param_2;
}



// FUNCTION 1409d4c70 FUN_1409d4c70 body=89 status=ok
// SIG undefined FUN_1409d4c70(void)

longlong FUN_1409d4c70(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x150);
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1409d4cf0 FUN_1409d4cf0 body=108 status=ok
// SIG undefined FUN_1409d4cf0(void)

longlong FUN_1409d4cf0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1409ab5c0(param_1,*(undefined8 *)(param_1 + 0x270));
  if (lVar2 != 0) {
    lVar3 = FUN_1413e0850();
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
  return *(longlong *)(param_1 + 0x278);
}



// FUNCTION 1409d4d70 FUN_1409d4d70 body=21 status=ok
// SIG undefined FUN_1409d4d70(void)

undefined8 FUN_1409d4d70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x700) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x2e0);
  }
  return 0;
}



// FUNCTION 1409d4d90 FUN_1409d4d90 body=31 status=ok
// SIG undefined FUN_1409d4d90(void)

undefined1 FUN_1409d4d90(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1409d4cf0();
  if (lVar1 != 0) {
    return *(undefined1 *)(lVar1 + 0xa0);
  }
  return 0;
}



// FUNCTION 1409d4db0 thunk_FUN_1409d4cf0 body=5 status=ok
// SIG undefined thunk_FUN_1409d4cf0(void)

longlong thunk_FUN_1409d4cf0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1409ab5c0(param_1,*(undefined8 *)(param_1 + 0x270));
  if (lVar2 != 0) {
    lVar3 = FUN_1413e0850();
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
  return *(longlong *)(param_1 + 0x278);
}



// FUNCTION 1409d4dc0 FUN_1409d4dc0 body=85 status=ok
// SIG undefined FUN_1409d4dc0(void)

undefined8 FUN_1409d4dc0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Public\\Damage/DamageCauserInterface.h"
             ,0x14,L"Pure virtual not implemented (%s)",
             L"UDamageCauserInterface::GetDamageCauserComponent");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Public\\Damage/DamageCauserInterface.h"
             ,0x14,L"Pure virtual not implemented (%s)",
             L"UDamageCauserInterface::GetDamageCauserComponent");
  return 0;
}



// FUNCTION 1409d4e20 FUN_1409d4e20 body=9 status=ok
// SIG undefined FUN_1409d4e20(void)

undefined4 FUN_1409d4e20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x488);
}



// FUNCTION 1409d4e30 FUN_1409d4e30 body=546 status=ok
// SIG undefined FUN_1409d4e30(void)

longlong * FUN_1409d4e30(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_res8;
  void *local_38;
  undefined8 local_30;
  
  *param_2 = 0;
  param_2[1] = 0;
  local_res8 = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x41);
  lVar8 = *param_1;
  lVar7 = (longlong)(int)param_1[1] * 0x88 + lVar8;
  if (lVar8 != lVar7) {
    do {
      puVar5 = (undefined8 *)FUN_1409d5060(lVar8,&local_38);
      pvVar2 = (void *)*puVar5;
      iVar4 = *(int *)(puVar5 + 1) + -1;
      if (*(int *)(puVar5 + 1) == 0) {
        iVar4 = 0;
      }
      if (iVar4 != 0) {
        iVar6 = (int)param_2[1];
        iVar3 = (uint)(iVar6 == 0) + iVar4 + iVar6;
        *(int *)(param_2 + 1) = iVar3;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar4 * 2);
        *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
      iVar4 = (int)param_2[1];
      iVar6 = iVar4 + -1;
      if (iVar4 < 1) {
        iVar6 = 0;
      }
      iVar4 = (iVar4 < 1) + 1 + iVar4;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      lVar8 = lVar8 + 0x88;
      *(undefined2 *)(*param_2 + (longlong)iVar6 * 2) = 10;
      *(undefined2 *)(*param_2 + 2 + (longlong)iVar6 * 2) = 0;
      param_1 = local_res8;
    } while (lVar8 != lVar7);
  }
  if (param_1[2] == 0) {
    local_38 = (void *)0x0;
    local_30 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,&DAT_143f3edc8,10);
  }
  else {
    local_res8 = *(longlong **)(param_1[2] + 0x18);
    FName::ToString(&local_res8,&local_38);
  }
  pvVar2 = local_38;
  iVar4 = 0;
  if ((int)local_30 != 0) {
    iVar4 = (int)local_30 + -1;
  }
  if (iVar4 != 0) {
    iVar6 = (int)param_2[1];
    iVar3 = (uint)(iVar6 == 0) + iVar6 + iVar4;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar4 * 2);
    *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return param_2;
}



// FUNCTION 1409d5060 FUN_1409d5060 body=581 status=ok
// SIG undefined FUN_1409d5060(void)

longlong * FUN_1409d5060(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  void *_Dst;
  void *_Src;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 local_res8;
  void *local_58;
  undefined8 local_50;
  longlong local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    local_58 = (void *)0x0;
    local_50 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,&DAT_143f3edc8,10);
  }
  else {
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x18);
    FName::ToString(&local_res8,&local_58);
  }
  plVar3 = (longlong *)FUN_142de9d00(param_1);
  lVar8 = plVar3[1];
  local_48 = *plVar3;
  *plVar3 = 0;
  local_40 = (int)plVar3[1];
  local_3c = *(int *)((longlong)plVar3 + 0xc);
  plVar3[1] = 0;
  iVar4 = local_40;
  if (local_3c < (int)((3 - (uint)((int)lVar8 != 0)) + local_40)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    iVar4 = local_40;
  }
  local_40 = (3 - (uint)(iVar4 != 0)) + iVar4;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar4);
  }
  puVar1 = (undefined4 *)(local_48 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
  *puVar1 = 0x20003a;
  *(undefined2 *)(puVar1 + 1) = 0;
  if (local_40 < 2) {
    *param_2 = (longlong)local_58;
    *(int *)(param_2 + 1) = (int)local_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_50._4_4_;
    local_50 = 0;
    local_58 = (void *)0x0;
    if (local_48 != 0) {
      FMemory::Free(local_48);
    }
  }
  else {
    iVar4 = 0;
    if ((int)local_50 != 0) {
      iVar4 = (int)local_50 + -1;
    }
    if ((local_40 != 0) || (iVar2 = 1, iVar4 == 0)) {
      iVar2 = 0;
    }
    if (local_3c < iVar2 + local_40 + iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    }
    iVar2 = local_40;
    _Src = local_58;
    lVar8 = local_48;
    iVar7 = local_3c;
    iVar5 = local_40;
    if (iVar4 != 0) {
      lVar6 = (longlong)local_40;
      local_40 = local_40 + (uint)(local_40 == 0) + iVar4;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar2);
      }
      iVar7 = local_3c;
      iVar5 = local_40;
      lVar8 = local_48;
      _Dst = (void *)(local_48 + (lVar6 - (ulonglong)(iVar2 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
    }
    *param_2 = lVar8;
    *(int *)(param_2 + 1) = iVar5;
    *(int *)((longlong)param_2 + 0xc) = iVar7;
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1409d52b0 ToString body=23 status=ok
// SIG undefined ToString(void)

undefined8 FKey::ToString(undefined8 param_1,undefined8 param_2)

{
  FName::ToString();
  return param_2;
}



// FUNCTION 1409d52e0 FUN_1409d52e0 body=62 status=ok
// SIG undefined FUN_1409d52e0(void)

undefined8 * FUN_1409d52e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"droneRocket",0x18);
  return param_2;
}



// FUNCTION 1409d5320 FUN_1409d5320 body=62 status=ok
// SIG undefined FUN_1409d5320(void)

undefined8 * FUN_1409d5320(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"drone",0xc);
  return param_2;
}



// FUNCTION 1409d5360 FUN_1409d5360 body=160 status=ok
// SIG undefined FUN_1409d5360(void)

undefined8 * FUN_1409d5360(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x2b0) + 0xa0);
    if (cVar1 == '\x03') {
      *param_2 = 0;
      param_2[1] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"phasegrasp",0x16);
      return param_2;
    }
    if (cVar1 == '\x04') {
      *param_2 = 0;
      param_2[1] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"phasegrasp",0x16);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1409d5400 FUN_1409d5400 body=3 status=ok
// SIG undefined FUN_1409d5400(void)

undefined1 FUN_1409d5400(void)

{
  return 4;
}



// FUNCTION 1409d5450 FUN_1409d5450 body=123 status=ok
// SIG undefined FUN_1409d5450(void)

undefined8 FUN_1409d5450(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 extraout_XMM0_Da;
  
  if ((*(longlong *)(param_1 + 0x2b0) != 0) &&
     ((byte)(*(char *)(*(longlong *)(param_1 + 0x2b0) + 0xa0) - 3U) < 2)) {
    cVar1 = FUN_142d52a00(param_1 + 0x298);
    if (cVar1 != '\0') {
      uVar2 = FOpenXRHMD::IsStereoEnabled(param_1);
      *param_2 = uVar2;
      FUN_1409aafd0(param_1,param_1 + 0x298);
      *(undefined4 *)(param_2 + 4) = extraout_XMM0_Da;
    }
    return 1;
  }
  return 1;
}



// FUNCTION 1409d5570 FUN_1409d5570 body=53 status=ok
// SIG undefined FUN_1409d5570(void)

undefined1 * FUN_1409d5570(longlong param_1,undefined1 *param_2)

{
  FUN_142c6c710(param_1 + -0x218);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x10);
  *param_2 = 3;
  return param_2;
}



// FUNCTION 1409d55c0 FUN_1409d55c0 body=785 status=ok
// SIG undefined FUN_1409d55c0(void)

void FUN_1409d55c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140c433e0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_1468655b0) && (_Init_thread_header(&DAT_1468655b0), DAT_1468655b0 == -1)) {
    uVar1 = FUN_1412dc490();
    FUN_1412dc490();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FightPhase",1);
    DAT_1468655a8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468655b0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468655a8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468655a8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468655a8 + 0x30));
  }
  if ((*piVar5 < DAT_1468655c0) && (_Init_thread_header(&DAT_1468655c0), DAT_1468655c0 == -1)) {
    uVar1 = FUN_1412dc490();
    FUN_1412dc490();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SawTargetRotation",1);
    DAT_1468655b8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468655c0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468655b8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468655b8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468655b8 + 0x30));
  }
  if ((*piVar5 < DAT_1468655d0) && (_Init_thread_header(&DAT_1468655d0), DAT_1468655d0 == -1)) {
    uVar1 = FUN_1412dc490();
    FUN_1412dc490();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SawTarget",1);
    DAT_1468655c8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468655d0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468655c8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468655c8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468655c8 + 0x30));
  }
  if ((*piVar5 < DAT_1468655e0) && (_Init_thread_header(&DAT_1468655e0), DAT_1468655e0 == -1)) {
    uVar1 = FUN_1412dc490();
    FUN_1412dc490();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SawState",1);
    DAT_1468655d8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468655e0);
  }
  if (0 < *(int *)(DAT_1468655d8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468655d8 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_1468655d8 + 0x30));
  }
  return;
}



// FUNCTION 1409d58e0 FUN_1409d58e0 body=433 status=ok
// SIG undefined FUN_1409d58e0(void)

void FUN_1409d58e0(undefined8 param_1,undefined8 param_2)

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
  if ((*piVar5 < DAT_146865750) && (_Init_thread_header(&DAT_146865750), DAT_146865750 == -1)) {
    uVar1 = FUN_1412eb7b0();
    FUN_1412eb7b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"BeamTarget",1);
    DAT_146865748 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865750);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865748 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146865748 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865748 + 0x30));
  }
  if ((*piVar5 < DAT_146865760) && (_Init_thread_header(&DAT_146865760), DAT_146865760 == -1)) {
    uVar1 = FUN_1412eb7b0();
    FUN_1412eb7b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FollowLerpSpeed",1);
    DAT_146865758 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865760);
  }
  if (0 < *(int *)(DAT_146865758 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146865758 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146865758 + 0x30));
  }
  return;
}



// FUNCTION 1409d5aa0 FUN_1409d5aa0 body=617 status=ok
// SIG undefined FUN_1409d5aa0(void)

void FUN_1409d5aa0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146865360) && (_Init_thread_header(&DAT_146865360), DAT_146865360 == -1)) {
    uVar1 = UComboBoxString::GetPrivateStaticClass();
    UComboBoxString::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DroneTarget",1);
    DAT_146865358 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865360);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865358 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865358 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865358 + 0x30));
  }
  if ((*piVar5 < DAT_146865370) && (_Init_thread_header(&DAT_146865370), DAT_146865370 == -1)) {
    uVar1 = UComboBoxString::GetPrivateStaticClass();
    UComboBoxString::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RuntimeMods",1);
    DAT_146865368 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865370);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865368 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865368 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865368 + 0x30));
  }
  if ((*piVar5 < DAT_146865380) && (_Init_thread_header(&DAT_146865380), DAT_146865380 == -1)) {
    uVar1 = UComboBoxString::GetPrivateStaticClass();
    UComboBoxString::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsStaticFieldSearching",1);
    DAT_146865378 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865380);
  }
  if (0 < *(int *)(DAT_146865378 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865378 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146865378 + 0x30));
  }
  FUN_143079100(param_1,param_2);
  return;
}



// FUNCTION 1409d5d10 FUN_1409d5d10 body=427 status=ok
// SIG undefined FUN_1409d5d10(void)

void FUN_1409d5d10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_146865460) {
    _Init_thread_header(&DAT_146865460);
    if (DAT_146865460 == -1) {
      uVar1 = UScrollBar::GetPrivateStaticClass();
      UScrollBar::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"ActivationComboData",1);
      DAT_146865458 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146865460);
    }
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865458 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865458 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865458 + 0x30));
  }
  if (*piVar5 < DAT_146865470) {
    _Init_thread_header(&DAT_146865470);
    if (DAT_146865470 == -1) {
      uVar1 = UScrollBar::GetPrivateStaticClass();
      UScrollBar::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"LinkedTargetList",1);
      DAT_146865468 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146865470);
    }
  }
  if (0 < *(int *)(DAT_146865468 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865468 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146865468 + 0x30));
  }
  FUN_1409d6380(param_1,param_2);
  return;
}



// FUNCTION 1409d5ec0 FUN_1409d5ec0 body=251 status=ok
// SIG undefined FUN_1409d5ec0(void)

void FUN_1409d5ec0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146865480) {
    _Init_thread_header(&DAT_146865480);
    if (DAT_146865480 == -1) {
      uVar1 = UUGButton::GetPrivateStaticClass();
      UUGButton::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"ActivationComboData",1);
      DAT_146865478 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146865480);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146865478 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146865478 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865478 + 0x30));
  }
  FUN_1409a9140(param_1,param_2);
  return;
}



// FUNCTION 1409d5fc0 FUN_1409d5fc0 body=951 status=ok
// SIG undefined FUN_1409d5fc0(void)

void FUN_1409d5fc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_140afc270();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_1468653a0) && (_Init_thread_header(&DAT_1468653a0), DAT_1468653a0 == -1)) {
    uVar1 = AUGBossMageAIController::GetPrivateStaticClass();
    AUGBossMageAIController::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DamageScalar",1);
    DAT_146865398 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468653a0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865398 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865398 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865398 + 0x30));
  }
  if ((*piVar5 < DAT_1468653b0) && (_Init_thread_header(&DAT_1468653b0), DAT_1468653b0 == -1)) {
    uVar1 = AUGBossMageAIController::GetPrivateStaticClass();
    AUGBossMageAIController::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Shield",1);
    DAT_1468653a8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468653b0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468653a8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468653a8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468653a8 + 0x30));
  }
  if ((*piVar5 < DAT_1468653c0) && (_Init_thread_header(&DAT_1468653c0), DAT_1468653c0 == -1)) {
    uVar1 = AUGBossMageAIController::GetPrivateStaticClass();
    AUGBossMageAIController::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RuntimeMods",1);
    DAT_1468653b8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468653c0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468653b8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468653b8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468653b8 + 0x30));
  }
  if ((*piVar5 < DAT_1468653d0) && (_Init_thread_header(&DAT_1468653d0), DAT_1468653d0 == -1)) {
    uVar1 = AUGBossMageAIController::GetPrivateStaticClass();
    AUGBossMageAIController::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"BarrierState",1);
    DAT_1468653c8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468653d0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468653c8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468653c8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468653c8 + 0x30));
  }
  if ((*piVar5 < DAT_1468653e0) && (_Init_thread_header(&DAT_1468653e0), DAT_1468653e0 == -1)) {
    uVar1 = AUGBossMageAIController::GetPrivateStaticClass();
    AUGBossMageAIController::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsTurbocharged",1);
    DAT_1468653d8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468653e0);
  }
  if (0 < *(int *)(DAT_1468653d8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468653d8 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_1468653d8 + 0x30));
  }
  return;
}



// FUNCTION 1409d6380 FUN_1409d6380 body=601 status=ok
// SIG undefined FUN_1409d6380(void)

void FUN_1409d6380(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_1468653f0) {
    _Init_thread_header(&DAT_1468653f0);
    if (DAT_1468653f0 == -1) {
      uVar1 = FUN_1414a2c10();
      FUN_1414a2c10();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"OwnerActionAbility",1);
      DAT_1468653e8 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_1468653f0);
    }
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468653e8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468653e8 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468653e8 + 0x30));
  }
  if (*piVar5 < DAT_146865400) {
    _Init_thread_header(&DAT_146865400);
    if (DAT_146865400 == -1) {
      uVar1 = FUN_1414a2c10();
      FUN_1414a2c10();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"OwnerPlayer",1);
      DAT_1468653f8 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146865400);
    }
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468653f8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468653f8 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468653f8 + 0x30));
  }
  if (*piVar5 < DAT_146865410) {
    _Init_thread_header(&DAT_146865410);
    if (DAT_146865410 == -1) {
      uVar1 = FUN_1414a2c10();
      FUN_1414a2c10();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsShuttingDown",1);
      DAT_146865408 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146865410);
    }
  }
  if (0 < *(int *)(DAT_146865408 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865408 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146865408 + 0x30));
  }
  FUN_142231c90(param_1,param_2);
  return;
}



// FUNCTION 1409d65e0 FUN_1409d65e0 body=777 status=ok
// SIG undefined FUN_1409d65e0(void)

void FUN_1409d65e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_146865490) {
    _Init_thread_header(&DAT_146865490);
    if (DAT_146865490 == -1) {
      uVar1 = AGBattleRoyaleGameState::GetPrivateStaticClass();
      AGBattleRoyaleGameState::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"SingularityRadius",1);
      DAT_146865488 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146865490);
    }
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865488 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865488 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865488 + 0x30));
  }
  if (*piVar5 < DAT_1468653f0) {
    _Init_thread_header(&DAT_1468653f0);
    if (DAT_1468653f0 == -1) {
      uVar1 = FUN_1414a2c10();
      FUN_1414a2c10();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"OwnerActionAbility",1);
      DAT_1468653e8 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_1468653f0);
    }
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468653e8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468653e8 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468653e8 + 0x30));
  }
  if (*piVar5 < DAT_146865400) {
    _Init_thread_header(&DAT_146865400);
    if (DAT_146865400 == -1) {
      uVar1 = FUN_1414a2c10();
      FUN_1414a2c10();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"OwnerPlayer",1);
      DAT_1468653f8 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146865400);
    }
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468653f8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468653f8 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468653f8 + 0x30));
  }
  if (*piVar5 < DAT_146865410) {
    _Init_thread_header(&DAT_146865410);
    if (DAT_146865410 == -1) {
      uVar1 = FUN_1414a2c10();
      FUN_1414a2c10();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsShuttingDown",1);
      DAT_146865408 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146865410);
    }
  }
  if (0 < *(int *)(DAT_146865408 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865408 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146865408 + 0x30));
  }
  FUN_142231c90(param_1,param_2);
  return;
}



// FUNCTION 1409d68f0 FUN_1409d68f0 body=437 status=ok
// SIG undefined FUN_1409d68f0(void)

void FUN_1409d68f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_1409a95f0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146865330) && (_Init_thread_header(&DAT_146865330), DAT_146865330 == -1)) {
    uVar1 = USkeletalBodySetup::GetPrivateStaticClass();
    USkeletalBodySetup::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PrimaryDrone",1);
    DAT_146865328 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865330);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865328 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146865328 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865328 + 0x30));
  }
  if ((*piVar5 < DAT_146865340) && (_Init_thread_header(&DAT_146865340), DAT_146865340 == -1)) {
    uVar1 = USkeletalBodySetup::GetPrivateStaticClass();
    USkeletalBodySetup::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RuntimeMods",1);
    DAT_146865338 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865340);
  }
  if (0 < *(int *)(DAT_146865338 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146865338 + 0x40) + (short)iVar4;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146865338 + 0x30));
  }
  return;
}



// FUNCTION 1409d6ab0 FUN_1409d6ab0 body=597 status=ok
// SIG undefined FUN_1409d6ab0(void)

void FUN_1409d6ab0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_1409a95f0();
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar4 < DAT_146865420) && (_Init_thread_header(&DAT_146865420), DAT_146865420 == -1)) {
    uVar1 = UUGPickMutatorsScreenUW::GetPrivateStaticClass();
    UUGPickMutatorsScreenUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ActivationCombo",1);
    DAT_146865418 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865420);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146865418 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146865418 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865418 + 0x30));
  }
  if ((*piVar4 < DAT_146865430) && (_Init_thread_header(&DAT_146865430), DAT_146865430 == -1)) {
    uVar1 = UUGPickMutatorsScreenUW::GetPrivateStaticClass();
    UUGPickMutatorsScreenUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bCanActivateDuringCooldown",1);
    DAT_146865428 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865430);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146865428 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146865428 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865428 + 0x30));
  }
  if ((*piVar4 < DAT_146865440) && (_Init_thread_header(&DAT_146865440), DAT_146865440 == -1)) {
    uVar1 = UUGPickMutatorsScreenUW::GetPrivateStaticClass();
    UUGPickMutatorsScreenUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PhaseGraspDurationPoolRef",1);
    DAT_146865438 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865440);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146865438 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146865438 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865438 + 0x30));
  }
  return;
}



// FUNCTION 1409d6d10 FUN_1409d6d10 body=232 status=ok
// SIG undefined FUN_1409d6d10(void)

void FUN_1409d6d10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_1409a95f0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146865350) && (_Init_thread_header(&DAT_146865350), DAT_146865350 == -1))
  {
    uVar1 = FUN_1413dfc40();
    FUN_1413dfc40();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Cannon",1);
    DAT_146865348 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865350);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146865348 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146865348 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865348 + 0x30));
  }
  return;
}



// FUNCTION 1409d6e00 FUN_1409d6e00 body=294 status=ok
// SIG undefined FUN_1409d6e00(void)

float FUN_1409d6e00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  longlong *local_38;
  longlong *local_30;
  
  fVar7 = (float)FUN_142c71a30();
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar3 + 0x1dd) == '\0') {
    return fVar7;
  }
  fVar8 = 0.0;
  lVar4 = FUN_1409d7d20(param_1);
  if (lVar4 != 0) {
    lVar4 = FUN_142c6f130(param_1);
    if (lVar4 != 0) {
      uVar5 = FUN_1430a8880();
      plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
      if ((plVar6 != (longlong *)0x0) &&
         (plVar6 = (longlong *)(**(code **)(*plVar6 + 0xf0))(plVar6,0), plVar6 != (longlong *)0x0))
      {
        fVar8 = (float)(**(code **)(*plVar6 + 0x7e8))(plVar6);
        goto LAB_1409d6efd;
      }
    }
    FUN_142c85760(*(undefined8 *)(param_1 + 0x18),&local_38);
    fVar8 = (float)(**(code **)(*local_38 + 0x58))();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
LAB_1409d6efd:
  return fVar7 + (fVar8 - *(float *)(lVar3 + 0x1e0));
}



// FUNCTION 1409d6f30 FUN_1409d6f30 body=150 status=ok
// SIG undefined FUN_1409d6f30(void)

float FUN_1409d6f30(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 0.0;
  }
  fVar2 = (float)FUN_142c71a40();
  plVar1 = (longlong *)FUN_142c6f640(param_1,4);
  if ((fVar2 <= 0.0) && (plVar1 != (longlong *)0x0)) {
    fVar3 = (float)(**(code **)(*plVar1 + 0x280))(plVar1);
    if (0.0 < fVar3) {
      fVar2 = (float)(**(code **)(*plVar1 + 0x280))(plVar1);
      if (*(float *)(param_1 + 0x4f0) != 0.0) {
        fVar2 = fVar2 / *(float *)(param_1 + 0x4f0);
      }
    }
  }
  return fVar2;
}



// FUNCTION 1409d7000 FUN_1409d7000 body=108 status=ok
// SIG undefined FUN_1409d7000(void)

longlong FUN_1409d7000(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong local_res10 [3];
  
  cVar2 = FUN_142c71eb0(param_1,&DAT_1468651c8,local_res10);
  if ((cVar2 != '\0') && (local_res10[0] != 0)) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(local_res10[0] + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res10[0] + 0x10) + 0x88) +
         (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return local_res10[0];
    }
  }
  return 0;
}



// FUNCTION 1409d7090 FUN_1409d7090 body=124 status=ok
// SIG undefined FUN_1409d7090(void)

longlong FUN_1409d7090(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    return *(longlong *)(param_1 + 0x4b8);
  }
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x458) + 0x10))();
  if (lVar2 != 0) {
    lVar3 = UUGPickMutatorsScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1409d70f7;
  }
  lVar2 = 0;
LAB_1409d70f7:
  *(longlong *)(param_1 + 0x4b8) = lVar2;
  return lVar2;
}



// FUNCTION 1409d7110 FUN_1409d7110 body=115 status=ok
// SIG undefined FUN_1409d7110(void)

longlong FUN_1409d7110(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0xa50) != 0) {
    return *(longlong *)(param_1 + 0xa50);
  }
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1409d716e;
  }
  lVar3 = 0;
LAB_1409d716e:
  *(longlong *)(param_1 + 0xa50) = lVar3;
  return lVar3;
}



// FUNCTION 1409d7190 FUN_1409d7190 body=18 status=ok
// SIG undefined FUN_1409d7190(void)

undefined1 FUN_1409d7190(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 8) + 0xa0);
  }
  return 0;
}



// FUNCTION 1409d71b0 FUN_1409d71b0 body=18 status=ok
// SIG undefined FUN_1409d71b0(void)

undefined1 FUN_1409d71b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xa0);
  }
  return 0;
}



// FUNCTION 1409d71d0 FUN_1409d71d0 body=336 status=ok
// SIG undefined FUN_1409d71d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1409d71d0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_88;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  float local_50;
  undefined1 local_48 [64];
  
  if (*(longlong *)(param_1 + 9000) == 0) {
    *param_2 = *(undefined8 *)(param_1 + 0x231c);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x2324);
  }
  else {
    FUN_142dd0420(*(undefined8 *)(param_1 + 0x938),*(longlong *)(param_1 + 9000),&local_78);
    lVar1 = *(longlong *)(param_1 + 0x168);
    if (lVar1 == 0) {
      local_88 = _DAT_1468b5d90;
      local_80 = DAT_1468b5d98;
    }
    else {
      local_88 = *(undefined8 *)(lVar1 + 0x220);
      local_80 = *(float *)(lVar1 + 0x228);
    }
    local_50 = local_80;
    local_80 = local_70 - local_80;
    local_88 = CONCAT44(local_74 - (float)((ulonglong)local_88 >> 0x20),local_78 - (float)local_88);
    uVar2 = FRotationMatrix::MakeFromX(local_48,&local_88);
    FMatrix::Rotator(uVar2,local_68);
    local_60 = 0;
    local_68[0] = 0;
    FMath::RInterpConstantTo
              (param_2,param_1 + 0x231c,local_68,*param_3,*(undefined4 *)(param_1 + 0x23bc));
  }
  return param_2;
}



// FUNCTION 1409d7330 FUN_1409d7330 body=1409 status=ok
// SIG undefined FUN_1409d7330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1409d7330(longlong param_1,float *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_638 [32];
  longlong *local_618;
  undefined1 *local_610;
  undefined1 *local_608;
  undefined1 local_5f8 [8];
  undefined8 local_5f0;
  float local_5e8;
  float local_5e0;
  float fStack_5dc;
  float local_5d8;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  undefined8 local_5c0;
  float local_5b8;
  float local_5b0;
  float fStack_5ac;
  float local_5a8;
  undefined1 local_5a0 [16];
  undefined1 local_590 [40];
  undefined1 local_568 [8];
  byte local_560;
  undefined4 local_55c;
  float local_554;
  float local_550;
  float local_54c;
  undefined1 local_4fc [36];
  undefined1 local_4d8 [16];
  undefined1 local_4c8;
  undefined1 local_4c4;
  float local_4b8;
  undefined1 local_4b4;
  longlong local_490;
  longlong local_470;
  undefined1 local_458 [48];
  undefined1 local_428 [896];
  char local_a8;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_638;
  plVar1 = *(longlong **)(param_1 + 0x110);
  if ((plVar1 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar5 = 0;
  }
  else {
    fVar15 = 0.0;
    cVar2 = (**(code **)(*plVar1 + 0x778))(plVar1);
    if (cVar2 == '\0') {
      fVar15 = (float)(**(code **)(*plVar1 + 0x6e0))(plVar1);
    }
    FUN_142cc0b00(plVar1,&local_5b0);
    (**(code **)(*plVar1 + 0x828))(plVar1,local_5a0,param_2,1);
    lVar4 = 0;
    if (((*(longlong *)(param_3 + 0x48) == 0) &&
        (cVar2 = (**(code **)(plVar1[0x1b1] + 0x158))(plVar1 + 0x1b1,1), cVar2 != '\0')) &&
       (lVar3 = FUN_142ddddc0(plVar1), lVar3 != 0)) {
      FUN_142dc1ad0(local_428);
      cVar2 = FUN_142dcd6e0(lVar3,local_428,0);
      if ((cVar2 != '\0') && (local_a8 == '\x02')) {
        lVar4 = FUN_142dd0030(local_428);
      }
    }
    FRotator::Vector(local_5a0,&local_5d0);
    local_5f0 = 0;
    local_5e0 = local_5d0 * 10000.0 + local_5b0;
    local_5d8 = local_5c8 * 10000.0 + local_5a8;
    fStack_5dc = local_5cc * 10000.0 + fStack_5ac;
    local_618 = plVar1;
    FUN_1422ffb20(local_4d8,0,local_5f8,1);
    local_4c8 = 1;
    local_4c4 = 0;
    local_4b4 = 0;
    local_4b8 = fVar15;
    FUN_1426d3dd0(local_590);
    FUN_1426ea8d0(local_590,2);
    if (*(int *)(param_1 + 0x268) != 0x20) {
      FUN_1426eac10(local_590,*(int *)(param_1 + 0x268),1);
    }
    _guard_xfg_dispatch_icall_nop(local_568,0,0x90);
    local_55c = 0x3f800000;
    uVar5 = (**(code **)(*plVar1 + 0x148))(plVar1);
    local_608 = local_590;
    local_610 = local_4d8;
    local_618 = (longlong *)CONCAT44(local_618._4_4_,0xf);
    cVar2 = UWorld::LineTraceSingleByChannel(uVar5,local_568,&local_5b0,&local_5e0);
    if (cVar2 == '\0') {
      local_554 = local_5e0;
      local_550 = fStack_5dc;
      local_54c = local_5d8;
    }
    local_5e0 = local_554;
    fStack_5dc = local_550;
    local_5d8 = local_54c;
    lVar3 = FWeakObjectPtr::Get(local_4fc);
    if ((lVar4 != 0) && (lVar3 == lVar4)) {
      *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 0x10;
      *(longlong *)(param_3 + 0x48) = lVar4;
      if ((local_560 & 1) == 0) {
        lVar4 = *(longlong *)(lVar4 + 0x168);
        if (lVar4 == 0) {
          local_5f0 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          local_5e8 = DAT_1468b5d98;
        }
        else {
          local_5e8 = *(float *)(lVar4 + 0x228);
          local_5f0 = *(undefined8 *)(lVar4 + 0x220);
        }
        local_5b8 = local_5e8;
        puVar6 = &local_5c0;
        local_5c0 = local_5f0;
      }
      else {
        lVar4 = FUN_142231870(lVar4,local_458,fVar15);
        puVar6 = &local_5f0;
        local_5e8 = *(float *)(lVar4 + 0x18);
        local_5f0 = *(undefined8 *)(lVar4 + 0x10);
      }
      local_5b8 = local_54c - *(float *)(puVar6 + 1);
      *(ulonglong *)(param_3 + 0x50) =
           CONCAT44(local_550 - (float)((ulonglong)*puVar6 >> 0x20),local_554 - (float)*puVar6);
      *(float *)(param_3 + 0x58) = local_5b8;
    }
    *(ulonglong *)(param_3 + 0x10) = CONCAT44(fStack_5ac,local_5b0);
    *(ulonglong *)(param_3 + 0x1c) = CONCAT44(fStack_5dc,local_5e0);
    *(float *)(param_3 + 0x18) = local_5a8;
    *(float *)(param_3 + 0x24) = local_5d8;
    *(longlong **)(param_3 + 0x38) = plVar1;
    *(longlong **)(param_3 + 0x40) = plVar1;
    fVar10 = *(float *)(param_3 + 0x1c) - *param_2;
    fVar12 = *(float *)(param_3 + 0x20) - param_2[1];
    fVar14 = *(float *)(param_3 + 0x24) - param_2[2];
    fVar7 = fVar12 * fVar12 + fVar10 * fVar10 + fVar14 * fVar14;
    fVar11 = fVar10;
    fVar13 = fVar12;
    fVar8 = fVar14;
    if ((fVar7 != 1.0) &&
       (fVar11 = DAT_1468b5d90, fVar13 = DAT_1468b5d94, fVar8 = DAT_1468b5d98, 1e-08 <= fVar7)) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar11 = fVar10 * fVar8;
      fVar13 = fVar12 * fVar8;
      fVar8 = fVar14 * fVar8;
    }
    if (local_5d0 * fVar11 + local_5cc * fVar13 + local_5c8 * fVar8 <= 0.0) {
      *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 0x80;
    }
    else {
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)param_2;
      *(float *)(param_3 + 0x18) = param_2[2];
      local_5d0 = fVar11;
      local_5cc = fVar13;
      local_5c8 = fVar8;
    }
    if (0.0 < fVar15) {
      *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 0x100;
    }
    if (local_470 != 0) {
      FMemory::Free();
    }
    if (local_490 != 0) {
      FMemory::Free();
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1409d78c0 FUN_1409d78c0 body=572 status=ok
// SIG undefined FUN_1409d78c0(void)

longlong FUN_1409d78c0(longlong param_1,short param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint local_res8 [2];
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return 0;
  }
  if (((param_2 - 4U & 0xfffb) == 0) &&
     (plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118), plVar7 != (longlong *)0x0)) {
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = FUN_1413ffe00();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (cVar2 = (**(code **)(*plVar7 + 0xc28))(plVar7), cVar2 != '\0')) &&
         (plVar4 = (longlong *)FUN_140e21bd0(plVar7), plVar4 != (longlong *)0x0)) {
        if (param_2 == 4) {
          lVar3 = (**(code **)(*plVar4 + 0x900))(plVar4,0,0);
LAB_1409d79d5:
          if (lVar3 != 0) {
            lVar5 = FUN_142a07000();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
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
        if (param_2 == 8) {
          lVar3 = (**(code **)(*plVar4 + 0x900))(plVar4,1,0);
          goto LAB_1409d79d5;
        }
      }
      uVar6 = FUN_1430a8880();
      plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar7,uVar6);
      if (plVar7 != (longlong *)0x0) {
        cVar2 = FUN_142c711a0(param_1,&DAT_1468651a8,local_res8);
        if (cVar2 == '\0') {
          local_res8[0] = 0;
        }
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0xf0))(plVar7,local_res8[0] & 0xff);
        if (plVar7 != (longlong *)0x0) {
          if (param_2 == 4) {
            lVar3 = (**(code **)(*plVar7 + 0x900))(plVar7,0,0);
          }
          else {
            if (param_2 != 8) goto LAB_1409d7adc;
            lVar3 = (**(code **)(*plVar7 + 0x900))(plVar7,1,0);
          }
          if (lVar3 != 0) {
            lVar5 = FUN_142a07000();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
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
  }
LAB_1409d7adc:
  lVar3 = FUN_142c721e0(param_1,param_2);
  return lVar3;
}



// FUNCTION 1409d7b00 FUN_1409d7b00 body=102 status=ok
// SIG undefined FUN_1409d7b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1409d7b00(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *(longlong *)(param_1 + -0x2f0);
  if (lVar1 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x220);
    local_10 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = local_10;
  return param_2;
}



// FUNCTION 1409d7b70 FUN_1409d7b70 body=292 status=ok
// SIG undefined FUN_1409d7b70(void)

undefined8 FUN_1409d7b70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  bVar6 = *(longlong *)(param_1 + 8) == 0;
  if (bVar6) {
    uVar5 = (**(code **)(*(longlong *)(param_1 + -0x458) + 0x5e0))
                      ((longlong *)(param_1 + -0x458),local_48);
    uVar5 = FText::FromString(local_38,uVar5);
  }
  else {
    uVar5 = FUN_142dd0500(*(longlong *)(param_1 + 8),local_20);
  }
  FText::FText(param_2,uVar5);
  if (bVar6) {
    if (local_30 != (longlong *)0x0) {
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
  }
  if (bVar6) {
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar6) && (local_18 != (longlong *)0x0)) {
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
  return param_2;
}



// FUNCTION 1409d7ca0 FUN_1409d7ca0 body=124 status=ok
// SIG undefined FUN_1409d7ca0(void)

undefined8 FUN_1409d7ca0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint local_res10 [6];
  
  lVar2 = FUN_142c6f130();
  if (lVar2 != 0) {
    uVar3 = FUN_1430a8880();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      cVar1 = FUN_142c711a0(param_1,&DAT_1468651a8,local_res10);
      if (cVar1 == '\0') {
        local_res10[0] = 0;
      }
      uVar3 = (**(code **)(*plVar4 + 0xf0))(plVar4,local_res10[0] & 0xff);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1409d7d20 FUN_1409d7d20 body=371 status=ok
// SIG undefined FUN_1409d7d20(void)

longlong FUN_1409d7d20(void)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  longlong *local_res18;
  undefined1 local_res20 [8];
  
  plVar2 = (longlong *)FUN_142c6f130();
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_1430a76d0();
    lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if (lVar4 != 0) {
      uVar5 = 0;
      uVar3 = FUN_1430a8880();
      plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar2,uVar3);
      if (plVar2 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar2 + 0xf0))(plVar2,0);
      }
      FUN_14304ad10(lVar4,&local_res18,0x10,uVar5,0,local_res10);
      if (local_res18 != (longlong *)0x0) {
        plVar6 = (longlong *)FUN_142e20fc0();
        for (plVar2 = local_res18; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
          if (plVar2 == plVar6) goto LAB_1409d7e2c;
        }
      }
      local_res18 = (longlong *)FUN_14304ad10(lVar4,local_res20,3,uVar5,0,local_res10);
      local_res18 = (longlong *)*local_res18;
      if (local_res18 != (longlong *)0x0) {
        plVar6 = (longlong *)FUN_142e20fc0();
        for (plVar2 = local_res18; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
          if (plVar2 == plVar6) {
LAB_1409d7e2c:
            plVar2 = local_res18;
            lVar4 = local_res18[0x1f];
            if (lVar4 == 0) {
              (**(code **)(*local_res18 + 0x368))(local_res18);
              lVar4 = plVar2[0x1f];
              if (lVar4 == 0) {
                return 0;
              }
            }
            lVar7 = UTextBlock::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) {
              return 0;
            }
            return lVar4;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1409d7eb0 FUN_1409d7eb0 body=32 status=ok
// SIG undefined FUN_1409d7eb0(void)

void FUN_1409d7eb0(longlong param_1,byte param_2)

{
  if ((*(char *)(param_1 + 0x510) == '\0') &&
     ((*(uint *)(*(longlong *)(param_1 + 0x10) + 500) >> (param_2 & 0x1f) & 1) != 0)) {
    if (*(char *)(param_1 + 0x510) == '\0') {
      FUN_142c652b0();
      *(undefined1 *)(param_1 + 0x510) = 1;
    }
    return;
  }
  return;
}



// FUNCTION 1409d7ed0 FUN_1409d7ed0 body=104 status=ok
// SIG undefined FUN_1409d7ed0(void)

void FUN_1409d7ed0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FOpenXRHMD::IsStereoEnabled();
  if (cVar1 == '\0') {
    thunk_FUN_1409bbf40(param_1);
    return;
  }
  cVar1 = FOpenXRHMD::IsStereoEnabled();
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x270) != 0)) {
    cVar1 = FUN_1409a2da0(param_1);
    if (cVar1 != '\0') {
      iVar2 = FUN_1430ec7c0(param_1);
      if (iVar2 < 3) {
        FUN_1413e2840();
        return;
      }
      FUN_1413e2bf0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1409d7f40 FUN_1409d7f40 body=127 status=ok
// SIG undefined FUN_1409d7f40(void)

void FUN_1409d7f40(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FOpenXRHMD::IsStereoEnabled();
  if (((cVar1 == '\0') || (*(longlong *)(param_1 + 0x2b0) == 0)) ||
     (*(char *)(*(longlong *)(param_1 + 0x2b0) + 0xa0) != '\x04')) {
    thunk_FUN_1409bbf40(param_1);
    return;
  }
  iVar2 = FUN_1430ec7c0(param_1);
  if (iVar2 < 3) {
    FUN_1413e2880();
    return;
  }
  cVar1 = FOpenXRHMD::IsStereoEnabled(param_1);
  if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x2b0) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x2b0) + 0xa0) == '\x04')) {
    FUN_1413e2800(param_1);
    return;
  }
  return;
}



// FUNCTION 1409d7fc0 FUN_1409d7fc0 body=226 status=ok
// SIG undefined FUN_1409d7fc0(void)

void FUN_1409d7fc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_38 [24];
  longlong local_20;
  undefined1 local_10;
  
  if (((param_1[0x4e] == 0) || ((*(byte *)(param_1 + 0x4f) & 0x10) == 0)) ||
     ((*(byte *)(param_1[0x4e] + 0xac2) & 8) == 0)) {
    return;
  }
  if ((param_1[0x50] == 0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) {
    FActorSpawnParameters::FActorSpawnParameters(local_38);
    local_20 = param_1[0x22];
    local_10 = 1;
    if (param_1[0x4b] != 0) {
      lVar3 = AGTutorialStepBotDestroy::GetPrivateStaticClass();
      lVar4 = param_1[0x4b];
      for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar3) goto LAB_1409d8060;
      }
    }
    lVar4 = 0;
LAB_1409d8060:
    lVar2 = UWorld::SpawnActor(lVar2,lVar4,0,0,local_38);
    param_1[0x50] = lVar2;
    AAISpawner::BPF_SetPhaseScenario(lVar2,param_1);
  }
  FUN_1413e28c0(param_1);
  return;
}



// FUNCTION 1409d80b0 FUN_1409d80b0 body=46 status=ok
// SIG undefined FUN_1409d80b0(void)

void FUN_1409d80b0(undefined8 param_1)

{
  int iVar1;
  
  FUN_1413e27c0();
  iVar1 = FUN_1430ec7c0(param_1);
  if (iVar1 < 3) {
    FUN_1413e2900(param_1);
    return;
  }
  return;
}



// FUNCTION 1409d80e0 FUN_1409d80e0 body=333 status=ok
// SIG undefined FUN_1409d80e0(void)

void FUN_1409d80e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  int *piVar8;
  float fVar9;
  
  if (param_3 != 0) {
    lVar7 = FUN_141473b90();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (*(char *)(param_3 + 0x691) == '\0')) {
      piVar1 = (int *)(param_1 + 0x848);
      piVar8 = *(int **)(param_1 + 0x948);
      if (*(int **)(param_1 + 0x948) == (int *)0x0) {
        piVar8 = piVar1;
      }
      piVar2 = piVar8 + *(int *)(param_1 + 0x950);
      for (; piVar8 != piVar2; piVar8 = piVar8 + 1) {
        if (*piVar8 == *(int *)(param_3 + 0xc)) {
          return;
        }
      }
      if ((*(char *)(param_1 + 0x845) != '\x01') ||
         (lVar7 = FUN_140a63ba0(param_3), lVar7 != *(longlong *)(param_1 + 0x150))) {
        FUN_14308c580(param_3,10);
        fVar3 = *(float *)(param_1 + 0x7dc);
        fVar9 = (float)USphereReflectionCaptureComponent::GetInfluenceBoundingRadius(param_3);
        uhx::glues::AGEffectSphere_Glue_obj::set_SizeScale(param_3,fVar9 * fVar3);
        iVar4 = *(int *)(param_3 + 0xc);
        iVar5 = *(int *)(param_1 + 0x950);
        *(int *)(param_1 + 0x950) = iVar5 + 1;
        if (*(int *)(param_1 + 0x954) < iVar5 + 1) {
          TArray<int,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>::ResizeGrow(piVar1,iVar5);
        }
        piVar8 = *(int **)(param_1 + 0x948);
        if (*(int **)(param_1 + 0x948) == (int *)0x0) {
          piVar8 = piVar1;
        }
        piVar8[iVar5] = iVar4;
      }
    }
  }
  return;
}



// FUNCTION 1409d8230 FUN_1409d8230 body=1747 status=ok
// SIG undefined FUN_1409d8230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409d8230(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  float *pfVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_res8 [8];
  float local_res10 [2];
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [112];
  
  if (*(char *)(param_1 + 0x23d0) == '\0') {
    return;
  }
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10[0] = param_2;
  if ((*(int *)(lVar8 + 0x38) < DAT_146865630) &&
     (_Init_thread_header(&DAT_146865630), DAT_146865630 == -1)) {
    FName::FName(&DAT_146865628,L"A9K_IsSawRunning",1);
    _Init_thread_footer(&DAT_146865630);
  }
  if (*(longlong *)(param_1 + 0x23b0) != 0) {
    bVar5 = *(byte *)(param_1 + 0x2330);
    if (((bVar5 == 5) || (bVar5 < 3)) || (7 < bVar5)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    UBlackboardComponent::SetValueAsBool(*(longlong *)(param_1 + 0x23b0),&DAT_146865628,uVar10);
  }
  cVar6 = *(char *)(param_1 + 0x2330);
  switch(cVar6) {
  case '\x01':
    param_2 = param_2 + *(float *)(param_1 + 0x23d4);
    *(float *)(param_1 + 0x23d4) = param_2;
    if (*(float *)(param_1 + 0x23b8) <= param_2 && param_2 != *(float *)(param_1 + 0x23b8)) {
      *(undefined4 *)(param_1 + 0x23d4) = 0;
      if (cVar6 == '\x02') goto LAB_1409d879d;
      *(undefined1 *)(param_1 + 0x2330) = 2;
      local_res8[0] = 2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x2338,local_res8);
      *(undefined8 *)(param_1 + 9000) = 0;
    }
    break;
  case '\x02':
    *(undefined1 *)(param_1 + 0x23d1) = 0;
    if (*(longlong *)(param_1 + 9000) == 0) {
      if (*(longlong *)(param_1 + 0x23b0) != 0) {
        lVar8 = FUN_142bbf6c0(*(longlong *)(param_1 + 0x23b0),param_1 + 0x2398);
        if (lVar8 == 0) {
LAB_1409d83d1:
          lVar8 = 0;
        }
        else {
          lVar9 = FUN_1429d7ab0();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (!bVar7) goto LAB_1409d83d1;
        }
        *(longlong *)(param_1 + 9000) = lVar8;
      }
    }
    else if (cVar6 != '\x03') {
      *(undefined1 *)(param_1 + 0x2330) = 3;
      param_1 = param_1 + 0x2338;
      local_res8[0] = 3;
      puVar13 = local_res8;
      goto LAB_1409d884e;
    }
    break;
  case '\x03':
    if (*(longlong *)(param_1 + 9000) != 0) {
      puVar12 = (undefined8 *)FUN_1409d71d0(param_1,&local_c8,local_res10);
      *(undefined8 *)(param_1 + 0x231c) = *puVar12;
      *(undefined4 *)(param_1 + 0x2324) = *(undefined4 *)(puVar12 + 1);
      local_d8 = *puVar12;
      local_d0 = *(undefined4 *)(puVar12 + 1);
      FUN_142dd0420(*(undefined8 *)(param_1 + 0x938),*(undefined8 *)(param_1 + 9000),&local_b8);
      lVar8 = *(longlong *)(param_1 + 0x168);
      if (lVar8 == 0) {
        local_e8 = _DAT_1468b5d90;
        local_e0 = DAT_1468b5d98;
      }
      else {
        local_e8 = *(undefined8 *)(lVar8 + 0x220);
        local_e0 = *(float *)(lVar8 + 0x228);
      }
      local_c0 = local_e0;
      local_c8 = local_e8;
      local_e0 = local_b0 - local_e0;
      local_e8 = CONCAT44(local_b4 - (float)((ulonglong)local_e8 >> 0x20),local_b8 - (float)local_e8
                         );
      uVar10 = FRotationMatrix::MakeFromX(local_88,&local_e8);
      FMatrix::Rotator(uVar10,local_a8);
      local_a0 = 0;
      local_a8[0] = 0;
      pfVar11 = (float *)FRotator::Quaternion(&local_d8,local_98);
      fVar17 = pfVar11[2];
      fVar16 = pfVar11[1];
      fVar15 = fVar17 + fVar17;
      fVar14 = -fVar16;
      fVar14 = fVar14 + fVar14;
      fVar1 = pfVar11[3];
      fVar2 = *pfVar11;
      fVar3 = *pfVar11;
      fVar4 = pfVar11[3];
      pfVar11 = (float *)FRotator::Vector(local_a8,&local_c8);
      fVar16 = (fVar15 * fVar4 - fVar14 * fVar2) * pfVar11[1] +
               ((fVar14 * fVar16 - fVar15 * fVar17) + 1.0) * *pfVar11 +
               (fVar14 * fVar1 + fVar15 * fVar3) * pfVar11[2];
      fVar17 = -1.0;
      if ((-1.0 <= fVar16) && (fVar17 = fVar16, 1.0 <= fVar16)) {
        fVar17 = 1.0;
      }
      fVar17 = _guard_xfg_dispatch_icall_nop(fVar17);
      if ((fVar17 * 57.295776 < *(float *)(param_1 + 0x2334)) &&
         (*(char *)(param_1 + 0x2330) != '\x04')) {
        *(undefined1 *)(param_1 + 0x2330) = 4;
        param_1 = param_1 + 0x2338;
        local_res8[0] = 4;
        puVar13 = local_res8;
        goto LAB_1409d884e;
      }
    }
    break;
  case '\x04':
    if (*(longlong *)(param_1 + 9000) != 0) {
      puVar12 = (undefined8 *)FUN_1409d71d0(param_1,&local_d8,local_res10);
      param_2 = param_2 + *(float *)(param_1 + 0x23dc);
      *(undefined8 *)(param_1 + 0x231c) = *puVar12;
      *(undefined4 *)(param_1 + 0x2324) = *(undefined4 *)(puVar12 + 1);
      *(float *)(param_1 + 0x23dc) = param_2;
      if (*(float *)(param_1 + 0x23c0) <= param_2 && param_2 != *(float *)(param_1 + 0x23c0)) {
        *(undefined4 *)(param_1 + 0x23dc) = 0;
        if (*(char *)(param_1 + 0x2330) != '\x06') {
          *(undefined1 *)(param_1 + 0x2330) = 6;
          local_res8[0] = 6;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x2338,local_res8);
        }
        param_1 = param_1 + 0x2358;
        goto LAB_1409d884c;
      }
    }
    break;
  case '\x05':
    break;
  case '\x06':
    puVar12 = (undefined8 *)FUN_1409d71d0(param_1,&local_d8,local_res10);
    *(undefined8 *)(param_1 + 0x231c) = *puVar12;
    *(undefined4 *)(param_1 + 0x2324) = *(undefined4 *)(puVar12 + 1);
    if ((*(char *)(param_1 + 0x23e4) != '\0') &&
       (*(undefined1 *)(param_1 + 0x23e4) = 0, *(char *)(param_1 + 0x2330) != '\a')) {
      *(undefined1 *)(param_1 + 0x2330) = 7;
      local_res8[0] = 7;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x2338,local_res8);
    }
    param_2 = param_2 + *(float *)(param_1 + 0x23e0);
    *(float *)(param_1 + 0x23e0) = param_2;
    if (*(float *)(param_1 + 0x23cc) <= param_2 && param_2 != *(float *)(param_1 + 0x23cc)) {
      *(undefined4 *)(param_1 + 0x23e0) = 0;
      *(undefined1 *)(param_1 + 0x23d0) = 0;
      if (*(char *)(param_1 + 0x2330) != '\0') {
        *(undefined1 *)(param_1 + 0x2330) = 0;
        local_res8[0] = 0;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x2338,local_res8);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x2368,0);
      if ((*(int *)(lVar8 + 0x38) < DAT_146865620) &&
         (_Init_thread_header(&DAT_146865620), DAT_146865620 == -1)) {
        FName::FName(&DAT_146865618,L"A9K_IsSawRunning",1);
        _Init_thread_footer(&DAT_146865620);
      }
      if (*(longlong *)(param_1 + 0x23b0) != 0) {
        UBlackboardComponent::SetValueAsBool(*(longlong *)(param_1 + 0x23b0),&DAT_146865618,0);
      }
      if (*(char *)(param_1 + 0x2330) == '\0') {
        *(undefined1 *)(param_1 + 0x2330) = 1;
        local_res8[0] = 1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x2338,local_res8);
        *(undefined1 *)(param_1 + 0x23d0) = 1;
      }
LAB_1409d879d:
      *(undefined8 *)(param_1 + 9000) = 0;
    }
    break;
  case '\a':
    param_2 = param_2 + *(float *)(param_1 + 0x23d8);
    fVar17 = *(float *)(param_1 + 0x23c4);
    *(float *)(param_1 + 0x23d8) = param_2;
    if (param_2 < fVar17 * *(float *)(param_1 + 0x23c8)) {
      puVar12 = (undefined8 *)FUN_1409d71d0(param_1,&local_d8,local_res10);
      param_2 = *(float *)(param_1 + 0x23d8);
      fVar17 = *(float *)(param_1 + 0x23c4);
      *(undefined8 *)(param_1 + 0x231c) = *puVar12;
      *(undefined4 *)(param_1 + 0x2324) = *(undefined4 *)(puVar12 + 1);
    }
    if (fVar17 < param_2) {
      *(undefined4 *)(param_1 + 0x23d8) = 0;
      if (*(char *)(param_1 + 0x2330) != '\x01') {
        *(undefined1 *)(param_1 + 0x2330) = 1;
        local_res8[0] = 1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x2338,local_res8);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x2378,0);
      param_1 = param_1 + 0x2388;
LAB_1409d884c:
      puVar13 = (undefined1 *)0x0;
LAB_1409d884e:
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,puVar13);
    }
    break;
  default:
    goto switchD_1409d82ef_default;
  }
switchD_1409d82ef_default:
  return;
}



// FUNCTION 1409d8920 FUN_1409d8920 body=157 status=ok
// SIG undefined FUN_1409d8920(void)

undefined8 FUN_1409d8920(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_2 + 0x84);
  plVar3 = *(longlong **)(param_1 + 0x298);
  plVar1 = plVar3 + *(int *)(param_1 + 0x2a0);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    if (*plVar3 == lVar2) break;
    plVar3 = plVar3 + 1;
  }
  if ((*(char *)(param_1 + 0x2f5) == '\x01') &&
     (*(longlong *)(param_2 + 8) == *(longlong *)(param_1 + -0x400))) {
    return 0;
  }
  *param_3 = 10;
  *(float *)(param_3 + 4) = *(float *)(param_1 + 0x28c) * *(float *)(param_3 + 4);
  return 1;
}



// FUNCTION 1409d89c0 FUN_1409d89c0 body=24 status=ok
// SIG undefined FUN_1409d89c0(void)

undefined4 FUN_1409d89c0(longlong param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0x1f);
  return CONCAT31((int3)(uVar1 >> 8),(*(uint *)(param_1 + 0x800) & uVar1) != 0);
}



// FUNCTION 1409d89f0 FUN_1409d89f0 body=57 status=ok
// SIG undefined FUN_1409d89f0(void)

void FUN_1409d89f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 0xa58);
  uVar2 = FUN_1409d7110(param_1);
  FUN_142dddf50(uVar1,uVar2);
  return;
}



// FUNCTION 1409d8a30 FUN_1409d8a30 body=151 status=ok
// SIG undefined FUN_1409d8a30(void)

ulonglong FUN_1409d8a30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong in_RAX;
  longlong lVar4;
  uint uVar5;
  float extraout_XMM0_Da;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (lVar2 = *(longlong *)(param_1 + 0x10), lVar2 != 0)) {
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
    in_RAX = 0;
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      in_RAX = FUN_142230c20(*(longlong *)(param_1 + 8),lVar2);
      if ((extraout_XMM0_Da < *(float *)(param_1 + 0xec) ||
           extraout_XMM0_Da == *(float *)(param_1 + 0xec)) &&
         (in_RAX = 0, *(longlong *)(param_1 + 0x18) != 0)) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x840);
        uVar5 = uVar3 >> 3;
        in_RAX = (ulonglong)uVar5;
        if ((uVar5 & 1) == 0) {
          return CONCAT71((uint7)(uint3)(uVar3 >> 0xb),1);
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409d8ad0 FUN_1409d8ad0 body=250 status=ok
// SIG undefined FUN_1409d8ad0(void)

undefined8 FUN_1409d8ad0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined1 local_28 [32];
  
  if ((*(longlong *)(param_1 + 8) != 0) && (lVar2 = *(longlong *)(param_1 + 0x10), lVar2 != 0)) {
    iVar1 = *(int *)(lVar2 + 0xc);
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
      FUN_142230c20(*(longlong *)(param_1 + 8),lVar2);
      if ((((extraout_XMM0_Da < *(float *)(param_1 + 0xec) ||
             extraout_XMM0_Da == *(float *)(param_1 + 0xec)) && (*(longlong *)(param_1 + 0x18) != 0)
           ) && ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x840) >> 3 & 1) == 0)) &&
         ((*(longlong *)(param_1 + 0xf8) != 0 && (*(longlong *)(param_1 + 0x100) != 0)))) {
        (**(code **)(**(longlong **)(param_1 + 0x100) + 0x20))
                  (*(longlong **)(param_1 + 0x100),local_28);
        cVar3 = FUN_142d52a00(local_28);
        if (cVar3 != '\0') {
          uVar6 = FUN_142d52a20(local_28);
          uVar6 = FArchive::operator<<(uVar6);
          FUN_142d5fed0(uVar6);
          if (0.0001 <= extraout_XMM0_Da_00) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1409d8bd0 FUN_1409d8bd0 body=133 status=ok
// SIG undefined FUN_1409d8bd0(void)

void FUN_1409d8bd0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  uVar1 = FUN_142c98860(param_5 + 0xb8);
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  uVar1 = FUN_142c98860(param_5 + 0xf0,*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  FUN_1406da240(param_1 + 0x20,param_5);
  *(undefined4 *)(param_1 + 0xec) = param_4;
  *(undefined8 *)(param_1 + 0xf0) = *param_3;
  return;
}



// FUNCTION 1409d8c60 FUN_1409d8c60 body=146 status=ok
// SIG undefined FUN_1409d8c60(void)

undefined1 FUN_1409d8c60(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  
  cVar3 = FUN_142cf14f0();
  if (cVar3 != '\0') {
    lVar5 = FUN_142c6f130(param_1);
    iVar4 = FUN_142235230(lVar5);
    if (((iVar4 != 1) && (*(char *)(*(longlong *)(param_1 + 0x10) + 0x130) != '\0')) && (lVar5 != 0)
       ) {
      uVar1 = FUN_1430a8880();
      plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar1);
      if (plVar6 != (longlong *)0x0) {
        lVar5 = *plVar6;
        puVar2 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,local_res10);
        (**(code **)(lVar5 + 0x120))(plVar6,*puVar2);
      }
    }
    return 1;
  }
  return 0;
}


