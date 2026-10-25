// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14349f120 FUN_14349f120 body=70 status=ok
// SIG undefined FUN_14349f120(void)

void FUN_14349f120(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xb0));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xb0));
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f170 Finalize_GC body=79 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::MovieClipLoader,Scaleform::GFx::AS2::Environment>::Finalize_GC
               (longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0xa8) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xa8));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xa8));
  }
  FUN_143315ea0(param_1 + 0x68);
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f1c0 FUN_14349f1c0 body=97 status=ok
// SIG undefined FUN_14349f1c0(void)

void FUN_14349f1c0(longlong param_1)

{
  int *piVar1;
  
  if (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xb0));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xb0));
  }
  piVar1 = *(int **)(param_1 + 0x68);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f230 FUN_14349f230 body=120 status=ok
// SIG undefined FUN_14349f230(void)

void FUN_14349f230(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xb0));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xb0));
  }
  uVar2 = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f2b0 FUN_14349f2b0 body=70 status=ok
// SIG undefined FUN_14349f2b0(void)

void FUN_14349f2b0(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xb0));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xb0));
  }
  FUN_14349f760(param_1);
  return;
}



// FUNCTION 14349f300 FUN_14349f300 body=85 status=ok
// SIG undefined FUN_14349f300(void)

void FUN_14349f300(longlong param_1)

{
  int *piVar1;
  
  if (*(undefined8 **)(param_1 + 0xa8) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xa8));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xa8));
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f360 Finalize_GC body=82 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::StyleSheetObject,Scaleform::GFx::AS2::Environment>::Finalize_GC
               (longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0xd0) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xd0));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xd0));
  }
  (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1 + 0x68,0);
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f3c0 FUN_14349f3c0 body=114 status=ok
// SIG undefined FUN_14349f3c0(void)

void FUN_14349f3c0(longlong param_1)

{
  int *piVar1;
  
  if (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xb0));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xb0));
  }
  piVar1 = *(int **)(param_1 + 0x68);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x70));
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f440 Finalize_GC body=91 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::TextFormatObject,Scaleform::GFx::AS2::Environment>::Finalize_GC
               (longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0x118) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0x118));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x118));
  }
  FUN_1433dd700(param_1 + 0x68);
  FUN_1433dedf0(param_1 + 0xb8);
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f4a0 FUN_14349f4a0 body=142 status=ok
// SIG undefined FUN_14349f4a0(void)

void FUN_14349f4a0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(undefined8 **)(param_1 + 200) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 200));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 200));
  }
  uVar2 = *(ulonglong *)(param_1 + 0x80) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  FUN_143370c10(param_1 + 0x68);
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f530 Finalize_GC body=127 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::TransformObject,Scaleform::GFx::AS2::Environment>::Finalize_GC
               (longlong param_1)

{
  int *piVar1;
  
  if (*(undefined8 **)(param_1 + 200) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 200));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 200));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  piVar1 = *(int **)(param_1 + 0x70);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
    FUN_14336bed0(piVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f5b0 FUN_14349f5b0 body=151 status=ok
// SIG undefined FUN_14349f5b0(void)

void FUN_14349f5b0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0xc0) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143497540(param_1 + 0xa0);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x80));
  if (*(RefCountNTSImpl **)(param_1 + 0x78) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x78));
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  piVar1 = *(int **)(param_1 + 0x70);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
    FUN_14336bed0(piVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f650 Finalize_GC body=66 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::BitmapData::Finalize_GC(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1432de450();
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1432de450();
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f6a0 FUN_14349f6a0 body=49 status=ok
// SIG undefined FUN_14349f6a0(void)

void FUN_14349f6a0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x68);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f6f0 FinishDestroy body=31 status=ok
// SIG undefined FinishDestroy(void)

void UPhysicalMaterial::FinishDestroy(longlong param_1)

{
  FUN_143315ea0(param_1 + 0x68);
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f710 FUN_14349f710 body=72 status=ok
// SIG undefined FUN_14349f710(void)

void FUN_14349f710(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f760 FUN_14349f760 body=113 status=ok
// SIG undefined FUN_14349f760(void)

void FUN_14349f760(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x68) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f7f0 FUN_14349f7f0 body=37 status=ok
// SIG undefined FUN_14349f7f0(void)

void FUN_14349f7f0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f820 Finalize_GC body=34 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::StyleSheetObject::Finalize_GC(longlong param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1 + 0x68,0);
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f860 FUN_14349f860 body=66 status=ok
// SIG undefined FUN_14349f860(void)

void FUN_14349f860(longlong param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x68);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x70));
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f8b0 Finalize_GC body=43 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::TextFormatObject::Finalize_GC(longlong param_1)

{
  FUN_1433dd700(param_1 + 0x68);
  FUN_1433dedf0(param_1 + 0xb8);
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f8e0 FUN_14349f8e0 body=94 status=ok
// SIG undefined FUN_14349f8e0(void)

void FUN_14349f8e0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x80) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  FUN_143370c10(param_1 + 0x68);
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f940 Finalize_GC body=44 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::UserDefinedFunctionObject::Finalize_GC(longlong param_1)

{
  if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f980 FUN_14349f980 body=372 status=ok
// SIG undefined FUN_14349f980(void)

void FUN_14349f980(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)(param_1 + 0xe8);
  plVar1 = (longlong *)(param_2 + 0x20);
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             &DAT_145b09ac8,1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,param_3);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),
                             &DAT_145b09acc,1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,param_3 + 0x20);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),"width",
                             5);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,param_3 + 0x40);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x618),"height"
                             ,6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar1 + 0x58))(plVar1,plVar3,&local_res8,param_3 + 0x60);
  piVar2 = (int *)(local_res8 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14349fb00 FUN_14349fb00 body=194 status=ok
// SIG undefined FUN_14349fb00(void)

undefined4 FUN_14349fb00(undefined8 *param_1)

{
  char *_Str1;
  int iVar1;
  undefined4 uVar2;
  
  _Str1 = *(char **)*param_1;
  iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"compositionSegment");
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"clauseSegment");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"convertedSegment");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"phraseLengthAdj");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"lowConfSegment");
  uVar2 = 5;
  if (iVar1 == 0) {
    uVar2 = 4;
  }
  return uVar2;
}



// FUNCTION 14349fbd0 Get body=109 status=ok
// SIG undefined Get(void)

ulonglong Scaleform::
          Hash<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Member,Scaleform::GFx::ASStringHashFunctor,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Member,Scaleform::GFx::ASStringHashFunctor>,Scaleform::GFx::HashsetNodeEntry_GC<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Member,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Member,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Member,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Member,Scaleform::GFx::ASStringHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Member,Scaleform::GFx::ASStringHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ASString,324>,Scaleform::GFx::HashsetNodeEntry_GC<Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Member,Scaleform::GFx::ASStringHashFunctor>,Scaleform::HashNode<Scaleform::GFx::ASString,Scaleform::GFx::AS2::Member,Scaleform::GFx::ASStringHashFunctor>::NodeHashF>_>_>
          ::Get(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    in_RAX = FUN_1434940d0(param_1,param_2,
                           (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(lVar1 + 8));
    if (-1 < (longlong)in_RAX) {
      in_RAX = in_RAX * 0x30;
      lVar1 = lVar1 + 0x18 + in_RAX;
      if (lVar1 != 0) {
        if (param_3 != 0) {
          FUN_143411240(param_3,lVar1 + 8);
          in_RAX = 0;
          *(undefined1 *)(param_3 + 1) = *(undefined1 *)(lVar1 + 9);
        }
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14349fc40 FUN_14349fc40 body=124 status=ok
// SIG undefined FUN_14349fc40(void)

RefCountNTSImpl * FUN_14349fc40(longlong param_1)

{
  int *piVar1;
  RefCountNTSImpl *this;
  
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 == (int *)0x0) {
    return (RefCountNTSImpl *)0x0;
  }
  this = *(RefCountNTSImpl **)(piVar1 + 2);
  if (this == (RefCountNTSImpl *)0x0) {
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else if (*(int *)(this + 8) != 0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    Scaleform::RefCountNTSImpl::Release(this);
    Scaleform::RefCountNTSImpl::Release(this);
    return this;
  }
  return (RefCountNTSImpl *)0x0;
}



// FUNCTION 14349fce0 GetAlpha2 body=48 status=ok
// SIG undefined GetAlpha2(void)

float Scaleform::GFx::AS2::BitmapFilterObject::GetAlpha2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1434a62d0();
  if (*(byte *)(lVar1 + 0x23) == 0) {
    return 0.0;
  }
  return (float)*(byte *)(lVar1 + 0x23) / 255.0;
}



// FUNCTION 14349fd10 GetAlpha body=48 status=ok
// SIG undefined GetAlpha(void)

float Scaleform::GFx::AS2::BitmapFilterObject::GetAlpha(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1434a62d0();
  if (*(byte *)(lVar1 + 0x1f) == 0) {
    return 0.0;
  }
  return (float)*(byte *)(lVar1 + 0x1f) / 255.0;
}



// FUNCTION 14349fd40 FUN_14349fd40 body=82 status=ok
// SIG undefined FUN_14349fd40(void)

longlong FUN_14349fd40(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    while (*(int *)(lVar2 + uVar3 * 0x10) != param_2) {
      uVar3 = (ulonglong)((int)uVar3 + 1);
      if (uVar1 <= uVar3) {
        return (ulonglong)bRam000000000000006d * 4;
      }
    }
    uVar3 = *(ulonglong *)(lVar2 + 8 + uVar3 * 0x10);
  }
  return uVar3 + (ulonglong)*(byte *)(uVar3 + 0x6d) * 4;
}



// FUNCTION 14349fda0 FUN_14349fda0 body=94 status=ok
// SIG undefined FUN_14349fda0(void)

Rect<float> * FUN_14349fda0(longlong *param_1,Rect<float> *param_2,Matrix2x4<float> *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  Rect<float> *pRVar3;
  undefined4 uVar4;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)param_1[0xe];
  lVar2 = *plVar1;
  uVar4 = (**(code **)(*param_1 + 0x88))();
  pRVar3 = (Rect<float> *)(**(code **)(lVar2 + 0x38))(plVar1,local_18,uVar4);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform(param_3,param_2,pRVar3);
  return param_2;
}



// FUNCTION 14349fe00 FUN_14349fe00 body=105 status=ok
// SIG undefined FUN_14349fe00(void)

longlong FUN_14349fe00(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_3 != '\0') {
    lVar2 = *param_1;
    lVar4 = 0;
    lVar3 = lVar4;
    if ((lVar2 != 0) &&
       (lVar1 = FUN_143493fd0(param_1,param_2,
                              (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
       -1 < lVar1)) {
      lVar3 = lVar2 + (lVar1 * 9 + 3) * 8;
    }
    lVar2 = lVar3 + 8;
    if (lVar3 == 0) {
      lVar2 = lVar4;
    }
    return lVar2;
  }
  lVar2 = FUN_14349fe70();
  return lVar2;
}



// FUNCTION 14349fe70 FUN_14349fe70 body=127 status=ok
// SIG undefined FUN_14349fe70(void)

longlong FUN_14349fe70(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_res8;
  
  local_res8 = param_2;
  if (*(longlong *)(*param_2 + 0x10) == 0) {
    FUN_14335f970();
  }
  lVar3 = 0;
  lVar2 = lVar3;
  if ((*param_1 != 0) &&
     (lVar1 = FUN_143493bc0(param_1,&local_res8,
                            (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(*param_1 + 8)),
     -1 < lVar1)) {
    lVar2 = *param_1 + (lVar1 * 9 + 3) * 8;
  }
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = lVar3;
  }
  return lVar1;
}



// FUNCTION 14349fef0 FUN_14349fef0 body=127 status=ok
// SIG undefined FUN_14349fef0(void)

longlong FUN_14349fef0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_res8;
  
  local_res8 = param_2;
  if (*(longlong *)(*param_2 + 0x10) == 0) {
    FUN_14335f970();
  }
  lVar3 = 0;
  lVar2 = lVar3;
  if ((*param_1 != 0) &&
     (lVar1 = FUN_143493ca0(param_1,&local_res8,
                            (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(*param_1 + 8)),
     -1 < lVar1)) {
    lVar2 = *param_1 + (lVar1 * 5 + 3) * 8;
  }
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = lVar3;
  }
  return lVar1;
}



// FUNCTION 14349ff70 FUN_14349ff70 body=161 status=ok
// SIG undefined FUN_14349ff70(void)

ulonglong FUN_14349ff70(ulonglong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong lVar2;
  longlong *local_res8;
  
  local_res8 = param_2;
  if (*(longlong *)(*param_2 + 0x10) == 0) {
    in_RAX = FUN_14335f970();
  }
  if (*param_1 != 0) {
    uVar1 = FUN_143493d80(param_1,&local_res8,
                          (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(*param_1 + 8));
    in_RAX = uVar1;
    if (-1 < (longlong)uVar1) {
      in_RAX = *param_1;
      lVar2 = in_RAX + 0x18 + uVar1 * 0x30;
      if (lVar2 != 0) {
        if (param_3 != 0) {
          FUN_143411240(param_3,lVar2 + 8);
          in_RAX = 0;
          *(undefined1 *)(param_3 + 1) = *(undefined1 *)(lVar2 + 9);
        }
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1434a0020 FUN_1434a0020 body=130 status=ok
// SIG undefined FUN_1434a0020(void)

longlong FUN_1434a0020(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_res8;
  
  local_res8 = param_2;
  if (*(longlong *)(*param_2 + 0x10) == 0) {
    FUN_14335f970();
  }
  lVar3 = 0;
  lVar2 = lVar3;
  if ((*param_1 != 0) &&
     (lVar1 = FUN_143493d80(param_1,&local_res8,
                            (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(*param_1 + 8)),
     -1 < lVar1)) {
    lVar2 = *param_1 + 0x18 + lVar1 * 0x30;
  }
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = lVar3;
  }
  return lVar1;
}



// FUNCTION 1434a00d0 FUN_1434a00d0 body=575 status=ok
// SIG undefined FUN_1434a00d0(void)

void FUN_1434a00d0(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar9 = param_1[8];
  fVar7 = param_1[9];
  fVar1 = param_1[10];
  fVar10 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = *param_1;
  fVar8 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = _guard_xfg_dispatch_icall_nop(fVar4 * fVar4 + fVar10 * fVar10 + fVar9 * fVar9);
  fVar6 = 1.0 / fVar6;
  fVar10 = fVar10 * fVar6;
  fVar7 = _guard_xfg_dispatch_icall_nop(fVar8 * fVar8 + fVar2 * fVar2 + fVar7 * fVar7);
  fVar8 = _guard_xfg_dispatch_icall_nop(fVar5 * fVar5 + fVar3 * fVar3 + fVar1 * fVar1);
  fVar8 = 1.0 / fVar8;
  if (fVar10 <= 0.998) {
    if (-0.998 <= fVar10) {
      if (param_3 != (float *)0x0) {
        fVar9 = _guard_xfg_dispatch_icall_nop(-(fVar9 * fVar6),fVar4 * fVar6);
        *param_3 = fVar9;
      }
      if (param_2 != (float *)0x0) {
        fVar9 = _guard_xfg_dispatch_icall_nop(-(fVar3 * fVar8),fVar2 * (1.0 / fVar7));
        *param_2 = fVar9;
      }
      if (param_4 != (float *)0x0) {
        fVar9 = _guard_xfg_dispatch_icall_nop(fVar10);
        *param_4 = fVar9;
      }
    }
    else {
      if (param_3 != (float *)0x0) {
        fVar9 = _guard_xfg_dispatch_icall_nop(fVar5 * fVar8,fVar1 * fVar8);
        *param_3 = fVar9;
      }
      if (param_4 != (float *)0x0) {
        *param_4 = -1.5707964;
      }
      if (param_2 != (float *)0x0) {
        *param_2 = 0.0;
      }
    }
  }
  else {
    if (param_3 != (float *)0x0) {
      fVar9 = _guard_xfg_dispatch_icall_nop(fVar5 * fVar8,fVar1 * fVar8);
      *param_3 = fVar9;
    }
    if (param_4 != (float *)0x0) {
      *param_4 = 1.5707964;
    }
    if (param_2 != (float *)0x0) {
      *param_2 = 0.0;
    }
  }
  return;
}



// FUNCTION 1434a0310 FUN_1434a0310 body=39 status=ok
// SIG undefined FUN_1434a0310(void)

double FUN_1434a0310(longlong param_1)

{
  uint uVar1;
  
  uVar1 = Scaleform::Render::Text::DocView::GetHScrollOffset(*(undefined8 *)(param_1 + 0xe0));
  return (double)uVar1 * 0.05;
}



// FUNCTION 1434a0340 FUN_1434a0340 body=51 status=ok
// SIG undefined FUN_1434a0340(void)

undefined8 FUN_1434a0340(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  RefCountImpl *local_res8 [4];
  
  puVar2 = (undefined8 *)
           Scaleform::GFx::StateBag::GetLogState(*(longlong *)(param_1 + 0x10) + 0x10,local_res8);
  uVar1 = *puVar2;
  if (local_res8[0] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_res8[0]);
  }
  return uVar1;
}



// FUNCTION 1434a0390 FUN_1434a0390 body=29 status=ok
// SIG undefined FUN_1434a0390(void)

void FUN_1434a0390(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1434255e0(param_1 + -8,param_2,0,param_3,param_4);
  return;
}



// FUNCTION 1434a03c0 FUN_1434a03c0 body=246 status=ok
// SIG undefined FUN_1434a03c0(void)

void FUN_1434a03c0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
  if (*(byte *)(param_2 + 1) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    lVar2 = *param_3;
    bVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x3b8) + 0x10) == *(longlong *)(lVar2 + 0x10);
  }
  else {
    lVar2 = *param_3;
    bVar3 = *(longlong *)(lVar1 + 0x3b8) == lVar2;
  }
  if (bVar3 == false) {
    lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
    if (*(byte *)(param_2 + 1) < 7) {
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        FUN_14335f970(lVar2);
      }
      bVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x3b0) + 0x10) == *(longlong *)(*param_3 + 0x10);
    }
    else {
      bVar4 = *(longlong *)(lVar1 + 0x3b0) == lVar2;
    }
    if (!bVar4) {
      FUN_14345dc30(param_1,param_2,param_3,param_4);
      return;
    }
  }
  FUN_143423590(param_1 + 0x78,param_1 + -0x20,param_2,param_3,param_4,bVar3);
  return;
}



// FUNCTION 1434a04c0 FUN_1434a04c0 body=246 status=ok
// SIG undefined FUN_1434a04c0(void)

void FUN_1434a04c0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
  if (*(byte *)(param_2 + 1) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    lVar2 = *param_3;
    bVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x3b8) + 0x10) == *(longlong *)(lVar2 + 0x10);
  }
  else {
    lVar2 = *param_3;
    bVar3 = *(longlong *)(lVar1 + 0x3b8) == lVar2;
  }
  if (bVar3 == false) {
    lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
    if (*(byte *)(param_2 + 1) < 7) {
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        FUN_14335f970(lVar2);
      }
      bVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x3b0) + 0x10) == *(longlong *)(*param_3 + 0x10);
    }
    else {
      bVar4 = *(longlong *)(lVar1 + 0x3b0) == lVar2;
    }
    if (!bVar4) {
      FUN_1434158c0(param_1,param_2,param_3,param_4);
      return;
    }
  }
  FUN_143423590(param_1 + 0x48,param_1 + -0x20,param_2,param_3,param_4,bVar3);
  return;
}



// FUNCTION 1434a05c0 FUN_1434a05c0 body=246 status=ok
// SIG undefined FUN_1434a05c0(void)

void FUN_1434a05c0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
  if (*(byte *)(param_2 + 1) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    lVar2 = *param_3;
    bVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x3b8) + 0x10) == *(longlong *)(lVar2 + 0x10);
  }
  else {
    lVar2 = *param_3;
    bVar3 = *(longlong *)(lVar1 + 0x3b8) == lVar2;
  }
  if (bVar3 == false) {
    lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
    if (*(byte *)(param_2 + 1) < 7) {
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        FUN_14335f970(lVar2);
      }
      bVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x3b0) + 0x10) == *(longlong *)(*param_3 + 0x10);
    }
    else {
      bVar4 = *(longlong *)(lVar1 + 0x3b0) == lVar2;
    }
    if (!bVar4) {
      FUN_1434158c0(param_1,param_2,param_3,param_4);
      return;
    }
  }
  FUN_143423590(param_1 + 0x50,param_1 + -0x20,param_2,param_3,param_4,bVar3);
  return;
}



// FUNCTION 1434a06c0 FUN_1434a06c0 body=246 status=ok
// SIG undefined FUN_1434a06c0(void)

void FUN_1434a06c0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
  if (*(byte *)(param_2 + 1) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    lVar2 = *param_3;
    bVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x3b8) + 0x10) == *(longlong *)(lVar2 + 0x10);
  }
  else {
    lVar2 = *param_3;
    bVar3 = *(longlong *)(lVar1 + 0x3b8) == lVar2;
  }
  if (bVar3 == false) {
    lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
    if (*(byte *)(param_2 + 1) < 7) {
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        FUN_14335f970(lVar2);
      }
      bVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x3b0) + 0x10) == *(longlong *)(*param_3 + 0x10);
    }
    else {
      bVar4 = *(longlong *)(lVar1 + 0x3b0) == lVar2;
    }
    if (!bVar4) {
      FUN_1434158c0(param_1,param_2,param_3,param_4);
      return;
    }
  }
  FUN_143423590(param_1 + 0x58,param_1 + -0x20,param_2,param_3,param_4,bVar3);
  return;
}



// FUNCTION 1434a07c0 FUN_1434a07c0 body=246 status=ok
// SIG undefined FUN_1434a07c0(void)

void FUN_1434a07c0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
  if (*(byte *)(param_2 + 1) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    lVar2 = *param_3;
    bVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x3b8) + 0x10) == *(longlong *)(lVar2 + 0x10);
  }
  else {
    lVar2 = *param_3;
    bVar3 = *(longlong *)(lVar1 + 0x3b8) == lVar2;
  }
  if (bVar3 == false) {
    lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
    if (*(byte *)(param_2 + 1) < 7) {
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        FUN_14335f970(lVar2);
      }
      bVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x3b0) + 0x10) == *(longlong *)(*param_3 + 0x10);
    }
    else {
      bVar4 = *(longlong *)(lVar1 + 0x3b0) == lVar2;
    }
    if (!bVar4) {
      FUN_1434158c0(param_1,param_2,param_3,param_4);
      return;
    }
  }
  FUN_143423590(param_1 + 0x70,param_1 + -0x20,param_2,param_3,param_4,bVar3);
  return;
}



// FUNCTION 1434a08c0 FUN_1434a08c0 body=246 status=ok
// SIG undefined FUN_1434a08c0(void)

void FUN_1434a08c0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
  if (*(byte *)(param_2 + 1) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    lVar2 = *param_3;
    bVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x3b8) + 0x10) == *(longlong *)(lVar2 + 0x10);
  }
  else {
    lVar2 = *param_3;
    bVar3 = *(longlong *)(lVar1 + 0x3b8) == lVar2;
  }
  if (bVar3 == false) {
    lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
    if (*(byte *)(param_2 + 1) < 7) {
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        FUN_14335f970(lVar2);
      }
      bVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x3b0) + 0x10) == *(longlong *)(*param_3 + 0x10);
    }
    else {
      bVar4 = *(longlong *)(lVar1 + 0x3b0) == lVar2;
    }
    if (!bVar4) {
      FUN_1434158c0(param_1,param_2,param_3,param_4);
      return;
    }
  }
  FUN_143423590(param_1 + 0x78,param_1 + -0x20,param_2,param_3,param_4,bVar3);
  return;
}



// FUNCTION 1434a09c0 FUN_1434a09c0 body=246 status=ok
// SIG undefined FUN_1434a09c0(void)

void FUN_1434a09c0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
  if (*(byte *)(param_2 + 1) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    lVar2 = *param_3;
    bVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x3b8) + 0x10) == *(longlong *)(lVar2 + 0x10);
  }
  else {
    lVar2 = *param_3;
    bVar3 = *(longlong *)(lVar1 + 0x3b8) == lVar2;
  }
  if (bVar3 == false) {
    lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
    if (*(byte *)(param_2 + 1) < 7) {
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        FUN_14335f970(lVar2);
      }
      bVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x3b0) + 0x10) == *(longlong *)(*param_3 + 0x10);
    }
    else {
      bVar4 = *(longlong *)(lVar1 + 0x3b0) == lVar2;
    }
    if (!bVar4) {
      FUN_14345a9e0(param_1,param_2,param_3,param_4);
      return;
    }
  }
  FUN_143423590(param_1 + 0x50,param_1 + -0x20,param_2,param_3,param_4,bVar3);
  return;
}



// FUNCTION 1434a0ac0 FUN_1434a0ac0 body=249 status=ok
// SIG undefined FUN_1434a0ac0(void)

void FUN_1434a0ac0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
  if (*(byte *)(param_2 + 1) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    lVar2 = *param_3;
    bVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x3b8) + 0x10) == *(longlong *)(lVar2 + 0x10);
  }
  else {
    lVar2 = *param_3;
    bVar3 = *(longlong *)(lVar1 + 0x3b8) == lVar2;
  }
  if (bVar3 == false) {
    lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
    if (*(byte *)(param_2 + 1) < 7) {
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        FUN_14335f970(lVar2);
      }
      bVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x3b0) + 0x10) == *(longlong *)(*param_3 + 0x10);
    }
    else {
      bVar4 = *(longlong *)(lVar1 + 0x3b0) == lVar2;
    }
    if (!bVar4) {
      FUN_1434158c0(param_1,param_2,param_3,param_4);
      return;
    }
  }
  FUN_143423590(param_1 + 0xc0,param_1 + -0x20,param_2,param_3,param_4,bVar3);
  return;
}



// FUNCTION 1434a0bc0 FUN_1434a0bc0 body=85 status=ok
// SIG undefined FUN_1434a0bc0(void)

void FUN_1434a0bc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
                    /* WARNING: Could not recover jumptable at 0x0001434a0c12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x20))(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 1434a0c20 FUN_1434a0c20 body=31 status=ok
// SIG undefined FUN_1434a0c20(void)

void FUN_1434a0c20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1434255e0(param_1 + -8,0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1434a0c40 FUN_1434a0c40 body=111 status=ok
// SIG undefined FUN_1434a0c40(void)

undefined8 FUN_1434a0c40(longlong param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*param_3 != *(longlong *)(*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x370)) {
    uVar2 = FUN_1434158c0();
    return uVar2;
  }
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x48) + 0x68);
  if (cVar1 != '\0') {
    FUN_143411150(param_4);
    param_4[8] = cVar1 == '\x01';
    *param_4 = 2;
    return 1;
  }
  FUN_143411150(param_4);
  *param_4 = 0;
  return 0;
}



// FUNCTION 1434a0d60 FUN_1434a0d60 body=94 status=ok
// SIG undefined FUN_1434a0d60(void)

Rect<float> * FUN_1434a0d60(longlong *param_1,Rect<float> *param_2,Matrix2x4<float> *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  Rect<float> *pRVar3;
  undefined4 uVar4;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)param_1[0xe];
  lVar2 = *plVar1;
  uVar4 = (**(code **)(*param_1 + 0x88))();
  pRVar3 = (Rect<float> *)(**(code **)(lVar2 + 0x40))(plVar1,local_18,uVar4);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform(param_3,param_2,pRVar3);
  return param_2;
}



// FUNCTION 1434a0e00 FUN_1434a0e00 body=207 status=ok
// SIG undefined FUN_1434a0e00(void)

longlong * FUN_1434a0e00(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  byte local_28 [8];
  longlong local_20;
  longlong local_18;
  byte local_10;
  
  local_28[0] = 0;
  cVar1 = (**(code **)(*param_1 + 0x58))
                    (param_1,param_3,*(longlong *)(*(longlong *)(*param_3 + 0x28) + 0x18) + 0x3b8,
                     local_28);
  *(undefined1 *)(param_2 + 2) = 0;
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else if (local_28[0] == 8) {
    *param_2 = local_20;
    if (local_20 != 0) {
      *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
      *(uint *)(local_20 + 0x18) = *(uint *)(local_20 + 0x18) & 0x8fffffff;
    }
    param_2[1] = 0;
    if (local_18 != 0) {
      FUN_1434109d0(param_2,local_18,local_10 & 1);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    if (local_28[0] == 0xb) {
      FUN_143411150(local_28);
      return param_2;
    }
  }
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return param_2;
}



// FUNCTION 1434a0ed0 Get__constructor__ body=81 status=ok
// SIG undefined Get__constructor__(void)

longlong * Scaleform::GFx::AS2::SuperObject::Get__constructor__(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_2 + 2) = 0;
  lVar1 = *(longlong *)(param_1 + 0x60);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
  }
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1434109d0(param_2,*(longlong *)(param_1 + 0x68),*(byte *)(param_1 + 0x70) & 1);
  }
  return param_2;
}



// FUNCTION 1434a0f30 FUN_1434a0f30 body=207 status=ok
// SIG undefined FUN_1434a0f30(void)

longlong * FUN_1434a0f30(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  byte local_28 [8];
  longlong local_20;
  longlong local_18;
  byte local_10;
  
  local_28[0] = 0;
  cVar1 = (**(code **)(*param_1 + 0x58))
                    (param_1,param_3,*(longlong *)(*(longlong *)(*param_3 + 0x28) + 0x18) + 0x3b0,
                     local_28);
  *(undefined1 *)(param_2 + 2) = 0;
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else if (local_28[0] == 8) {
    *param_2 = local_20;
    if (local_20 != 0) {
      *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
      *(uint *)(local_20 + 0x18) = *(uint *)(local_20 + 0x18) & 0x8fffffff;
    }
    param_2[1] = 0;
    if (local_18 != 0) {
      FUN_1434109d0(param_2,local_18,local_10 & 1);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    if (local_28[0] == 0xb) {
      FUN_143411150(local_28);
      return param_2;
    }
  }
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return param_2;
}



// FUNCTION 1434a1020 FUN_1434a1020 body=57 status=ok
// SIG undefined FUN_1434a1020(void)

bool FUN_1434a1020(undefined8 param_1)

{
  bool bVar1;
  float *pfVar2;
  undefined1 local_18 [24];
  
  pfVar2 = (float *)FUN_143367db0(param_1,local_18);
  if ((pfVar2[2] <= *pfVar2) || (bVar1 = false, pfVar2[3] <= pfVar2[1])) {
    bVar1 = true;
  }
  return !bVar1;
}



// FUNCTION 1434a1060 FUN_1434a1060 body=141 status=ok
// SIG undefined FUN_1434a1060(void)

void FUN_1434a1060(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  byte local_68 [32];
  undefined **local_48;
  byte *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = *(undefined4 *)(param_1 + 8);
  local_c = *(undefined4 *)(param_1 + 0xc);
  local_40 = local_68;
  local_68[0] = 0;
  local_48 = &PTR_FUN_145b0ab98;
  local_20 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_38 = param_3;
  local_18 = param_2;
  (**(code **)(*(longlong *)*param_4 + 0x50))((longlong *)*param_4,&local_48,param_4[1],0);
  local_48 = &PTR_FUN_145b0ab98;
  FUN_14349ebc0(&local_30);
  if (4 < local_68[0]) {
    FUN_143411150(local_68);
  }
  return;
}



// FUNCTION 1434a10f0 FUN_1434a10f0 body=420 status=ok
// SIG undefined FUN_1434a10f0(void)

void FUN_1434a10f0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  byte local_78 [8];
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined **local_58;
  byte *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  longlong local_28;
  int local_20;
  int local_1c;
  
  local_70 = *param_4;
  local_78[0] = 8;
  local_60 = 0;
  if (local_70 != 0) {
    *(uint *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + 1U & 0x8fffffff;
  }
  local_68 = 0;
  if (param_4[1] != 0) {
    FUN_1434109d0(&local_70,param_4[1],*(byte *)(param_4 + 2) & 1);
  }
  iVar1 = FUN_14346afb0(param_2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),local_78
                        ,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x20));
  if (4 < local_78[0]) {
    FUN_143411150(local_78);
  }
  if (-1 < iVar1) {
    local_50 = local_78;
    local_1c = *(int *)(param_2 + 0x30) * 0x20 + -0x20 +
               (int)(*(longlong *)(param_2 + 8) - *(longlong *)(param_2 + 0x10) >> 5);
    local_78[0] = 0;
    local_30 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_58 = &PTR_FUN_145b0ab98;
    local_48 = param_3;
    local_28 = param_2;
    local_20 = iVar1;
    (**(code **)(*(longlong *)*param_4 + 0x50))((longlong *)*param_4,&local_58,param_4[1],0);
    local_58 = &PTR_FUN_145b0ab98;
    FUN_14349ebc0(&local_40);
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (4 < **(byte **)(param_2 + 8)) {
        FUN_143411150();
      }
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + -0x20;
      if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
        FUN_1434a25c0(param_2 + 8);
      }
    }
    if (4 < local_78[0]) {
      FUN_143411150(local_78);
    }
  }
  return;
}



// FUNCTION 1434a12d0 IsFocusEnabled body=67 status=ok
// SIG undefined IsFocusEnabled(void)

undefined8 Scaleform::GFx::AS2::AvmTextField::IsFocusEnabled(longlong param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 1) {
    return 1;
  }
  cVar1 = TextField::IsReadOnly(*(undefined8 *)(param_1 + 0x20));
  if (cVar1 != '\0') {
    cVar1 = FUN_143de5950(*(undefined8 *)(param_1 + 0x20));
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1434a1320 FUN_1434a1320 body=17 status=ok
// SIG undefined FUN_1434a1320(void)

undefined8 FUN_1434a1320(char *param_1)

{
  if ((*param_1 != '\b') && (*param_1 != '\v')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1434a1360 FUN_1434a1360 body=83 status=ok
// SIG undefined FUN_1434a1360(void)

void FUN_1434a1360(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  local_res18 = param_3;
  local_res20 = param_4;
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe0) + 0x268))();
  if (plVar1 != (longlong *)0x0) {
    local_18[0] = 0x31000;
    (**(code **)(*plVar1 + 8))(plVar1,local_18,param_2,&local_res18);
  }
  return;
}



// FUNCTION 1434a13c0 FUN_1434a13c0 body=92 status=ok
// SIG undefined FUN_1434a13c0(void)

void FUN_1434a13c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  plVar1 = (longlong *)(param_1 + -0x18);
  if (param_1 == 0) {
    plVar1 = (longlong *)0x0;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x268))();
  if (plVar1 != (longlong *)0x0) {
    local_18[0] = 0x34000;
    (**(code **)(*plVar1 + 8))(plVar1,local_18,param_2,&local_res18);
  }
  return;
}



// FUNCTION 1434a1420 FUN_1434a1420 body=87 status=ok
// SIG undefined FUN_1434a1420(void)

void FUN_1434a1420(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  local_res18 = param_3;
  local_res20 = param_4;
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x268))();
  if (plVar1 != (longlong *)0x0) {
    local_18[0] = 0x4000;
    (**(code **)(*plVar1 + 8))(plVar1,local_18,param_2,&local_res18);
  }
  return;
}



// FUNCTION 1434a1480 FUN_1434a1480 body=271 status=ok
// SIG undefined FUN_1434a1480(void)

void FUN_1434a1480(longlong param_1,undefined4 *param_2,undefined1 *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 local_res8 [2];
  undefined1 *local_538;
  longlong local_530;
  undefined4 local_528 [2];
  undefined1 *local_520;
  undefined8 local_518;
  undefined1 local_508 [256];
  undefined1 local_408 [1024];
  
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      local_res8[0] = *param_2;
    }
    else {
      local_530 = -1;
      do {
        lVar1 = local_530;
        local_530 = lVar1 + 1;
      } while (param_3[local_530] != '\0');
      if (param_3[lVar1] == '\n') {
        local_530 = lVar1;
      }
      local_520 = local_508;
      local_528[0] = 2;
      local_518 = 0x100;
      local_538 = param_3;
      FUN_1433561d0(local_408,local_528);
      FUN_1433563e0(local_408,"{0} : {1}\n");
      FUN_14348fad0(local_408,&local_538);
      FUN_143386e30(local_408,param_1 + 0x18);
      Scaleform::MsgFormat::FinishFormatD(local_408);
      FUN_1433562f0(local_408);
      local_res8[0] = *param_2;
      param_3 = local_508;
      plVar2 = *(longlong **)(param_1 + 8);
    }
    (**(code **)(*plVar2 + 8))(plVar2,local_res8,param_3,param_4);
  }
  return;
}



// FUNCTION 1434a1590 FUN_1434a1590 body=92 status=ok
// SIG undefined FUN_1434a1590(void)

void FUN_1434a1590(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  plVar1 = (longlong *)(param_1 + -0x18);
  if (param_1 == 0) {
    plVar1 = (longlong *)0x0;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x268))();
  if (plVar1 != (longlong *)0x0) {
    local_18[0] = 0x24000;
    (**(code **)(*plVar1 + 8))(plVar1,local_18,param_2,&local_res18);
  }
  return;
}



// FUNCTION 1434a15f0 FUN_1434a15f0 body=87 status=ok
// SIG undefined FUN_1434a15f0(void)

void FUN_1434a15f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  local_res18 = param_3;
  local_res20 = param_4;
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x268))();
  if (plVar1 != (longlong *)0x0) {
    local_18[0] = 0x24000;
    (**(code **)(*plVar1 + 8))(plVar1,local_18,param_2,&local_res18);
  }
  return;
}



// FUNCTION 1434a1650 FUN_1434a1650 body=92 status=ok
// SIG undefined FUN_1434a1650(void)

void FUN_1434a1650(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  lVar1 = param_1 + -0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  plVar2 = *(longlong **)(lVar1 + 0x20);
  local_res18 = param_3;
  local_res20 = param_4;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)Scaleform::Log::GetGlobalLog();
  }
  local_18[0] = 0x24000;
  (**(code **)(*plVar2 + 8))(plVar2,local_18,param_2,&local_res18);
  return;
}



// FUNCTION 1434a16b0 FUN_1434a16b0 body=84 status=ok
// SIG undefined FUN_1434a16b0(void)

void FUN_1434a16b0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = FUN_143411e30(param_3);
  uVar2 = FUN_143411f00(param_1,param_2);
  if (4 < *param_1) {
    FUN_143411150(param_1);
  }
  *(uint *)(param_1 + 8) = uVar2 >> (bVar1 & 0x1f);
  *param_1 = 4;
  return;
}



// FUNCTION 1434a1710 FUN_1434a1710 body=89 status=ok
// SIG undefined FUN_1434a1710(void)

void FUN_1434a1710(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(uint *)(param_1 + 0x17) >> 0x15 & 1) == 0) ||
     ((*(uint *)(param_1 + 0x17) >> 0x16 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  iVar1 = (**(code **)(*param_1 + 0x340))(param_1,uVar2);
  if (iVar1 == -1) {
    *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) | 0x400000;
  }
  else if (iVar1 == 1) {
    FUN_14336e960(param_1);
    return;
  }
  return;
}



// FUNCTION 1434a1780 FUN_1434a1780 body=47 status=ok
// SIG undefined FUN_1434a1780(void)

void FUN_1434a1780(longlong *param_1)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  local_28 = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0xff00;
  (**(code **)(*param_1 + 0x40))(param_1,&local_28);
  return;
}



// FUNCTION 1434a1820 Execute body=20 status=ok
// SIG undefined Execute(void)

undefined1
TWeakBaseFunctorDelegateInstance<UNF_SaveDataSubsystem,bool___cdecl(float),FDefaultDelegateUserPolicy,`UNF_SaveDataSubsystem::ScheduleCommit'::`13'::<lambda_1>_>
::Execute(longlong param_1)

{
  FUN_14336ead0(*(undefined8 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 1434a1850 FUN_1434a1850 body=2896 status=ok
// SIG undefined FUN_1434a1850(void)

void FUN_1434a1850(longlong param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  byte local_e8 [8];
  double local_e0;
  byte local_c8 [8];
  longlong local_c0;
  
  plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x30);
  lVar9 = (**(code **)(*plVar8 + 0x50))(plVar8,0x68);
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_1434148b0(lVar9,*(undefined8 *)(param_1 + 0x60));
  }
  local_e0 = (double)CONCAT44(local_e0._4_4_,(int)*(undefined8 *)(param_1 + 0x48));
  local_e8[0] = 4;
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"indexInRun",10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar10 = (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
  lVar11 = FUN_143360a60(*(undefined8 *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) + 0x18) +
                          0x618),uVar10);
  *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
  local_c8[0] = 5;
  *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
  local_res8[0] = 0;
  local_c0 = lVar11;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),&DAT_145b13b5c,4);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_c8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_c8[0]) {
    FUN_143411150(local_c8);
  }
  piVar1 = (int *)(lVar11 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar11);
  }
  uVar7 = *(uint *)(param_1 + 0x54);
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)uVar7;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"color",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  fVar2 = *(float *)(param_1 + 0x50);
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)fVar2;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(longlong *)(param_1 + 0x60),
             *(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) + 0x18) +
             0x530,local_e8,local_res8);
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  FUN_143411150(local_e8);
  local_e8[0] = 2;
  local_e0 = (double)CONCAT71(local_e0._1_7_,uVar6);
  local_res8[0] = 0;
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"selected",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  fVar2 = *(float *)(param_1 + 0x10);
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)(fVar2 * 0.05);
  local_res10 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"matrix_a");
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  fVar2 = *(float *)(param_1 + 0x20);
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)(fVar2 * 0.05);
  local_res10 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"matrix_b");
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  fVar2 = *(float *)(param_1 + 0x14);
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)(fVar2 * 0.05);
  local_res10 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"matrix_c");
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  fVar2 = *(float *)(param_1 + 0x24);
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)(fVar2 * 0.05);
  local_res10 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"matrix_d");
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  fVar2 = *(float *)(param_1 + 0x1c);
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)(fVar2 * 0.05);
  local_res10 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"matrix_tx");
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  fVar2 = *(float *)(param_1 + 0x2c);
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)(fVar2 * 0.05);
  local_res10 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"matrix_ty");
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  fVar2 = *(float *)(param_1 + 0x30);
  fVar3 = *(float *)(param_1 + 0x3c);
  fVar4 = *(float *)(param_1 + 0x38);
  fVar5 = *(float *)(param_1 + 0x34);
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)(fVar2 * 0.05);
  local_res10 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"corner0x");
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)(fVar3 * 0.05);
  local_res10 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"corner0y");
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)(fVar4 * 0.05);
  local_res10 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"corner1x");
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)(fVar3 * 0.05);
  local_res10 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"corner1y");
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)(fVar4 * 0.05);
  local_res10 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"corner2x");
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)(fVar5 * 0.05);
  local_res10 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"corner2y");
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)(fVar2 * 0.05);
  local_res10 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"corner3x");
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  local_e8[0] = 3;
  local_res8[0] = 0;
  local_e0 = (double)(fVar5 * 0.05);
  local_res10 = FUN_143360a60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 0x28) +
                                 0x18) + 0x618),"corner3y");
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
            (lVar9 + 0x20,*(undefined8 *)(param_1 + 0x60),&local_res10,local_e8,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar10 = FUN_143410c00(local_c8,lVar9);
  FUN_14345e390(*(undefined8 *)(param_1 + 0x68),uVar10);
  if (4 < local_c8[0]) {
    FUN_143411150(local_c8);
  }
  if (4 < local_e8[0]) {
    FUN_143411150(local_e8);
  }
  if ((*(uint *)(lVar9 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) - 1;
    FUN_1434a2b80(lVar9);
  }
  return;
}



// FUNCTION 1434a23a0 FUN_1434a23a0 body=79 status=ok
// SIG undefined FUN_1434a23a0(void)

void FUN_1434a23a0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_143411e30(param_3);
  uVar2 = FUN_143411e30(param_1,param_2);
  if (4 < *param_1) {
    FUN_143411150(param_1);
  }
  *(uint *)(param_1 + 8) = uVar1 | uVar2;
  *param_1 = 4;
  return;
}



// FUNCTION 1434a23f0 FUN_1434a23f0 body=119 status=ok
// SIG undefined FUN_1434a23f0(void)

void FUN_1434a23f0(ulonglong *param_1)

{
  int iVar1;
  
  if ((byte *)*param_1 + -0x40 < (byte *)param_1[1]) {
    iVar1 = 2;
    do {
      if (4 < *(byte *)*param_1) {
        FUN_143411150();
      }
      *param_1 = *param_1 - 0x20;
      if (*param_1 < param_1[1]) {
        FUN_1434a25c0(param_1);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  if (4 < *(byte *)*param_1) {
    FUN_143411150();
  }
  *param_1 = *param_1 - 0x20;
  if (4 < *(byte *)*param_1) {
    FUN_143411150();
  }
  *param_1 = *param_1 - 0x20;
  return;
}



// FUNCTION 1434a2470 FUN_1434a2470 body=136 status=ok
// SIG undefined FUN_1434a2470(void)

void FUN_1434a2470(ulonglong *param_1)

{
  int iVar1;
  
  if ((byte *)*param_1 + -0x60 < (byte *)param_1[1]) {
    iVar1 = 3;
    do {
      if (4 < *(byte *)*param_1) {
        FUN_143411150();
      }
      *param_1 = *param_1 - 0x20;
      if (*param_1 < param_1[1]) {
        FUN_1434a25c0(param_1);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  if (4 < *(byte *)*param_1) {
    FUN_143411150();
  }
  *param_1 = *param_1 - 0x20;
  if (4 < *(byte *)*param_1) {
    FUN_143411150();
  }
  *param_1 = *param_1 - 0x20;
  if (4 < *(byte *)*param_1) {
    FUN_143411150();
  }
  *param_1 = *param_1 - 0x20;
  return;
}



// FUNCTION 1434a2500 FUN_1434a2500 body=182 status=ok
// SIG undefined FUN_1434a2500(void)

void FUN_1434a2500(longlong *param_1)

{
  longlong lVar1;
  
  if ((ulonglong)param_1[5] < 2) {
    *param_1 = *param_1 + 8;
    if (*param_1 != 0) {
      *(undefined8 *)*param_1 = 0;
      return;
    }
  }
  else {
    lVar1 = *(longlong *)(param_1[4] + -8 + param_1[5] * 8);
    *(longlong *)(lVar1 + 0x100) = param_1[7];
    param_1[7] = lVar1;
    FUN_1433cc430(param_1 + 4,param_1[5] + -1);
    lVar1 = *(longlong *)(param_1[4] + -8 + param_1[5] * 8);
    param_1[1] = lVar1;
    param_1[2] = lVar1 + 0x100;
    *param_1 = lVar1 + 0xf8;
    if ((ulonglong)param_1[5] < 2) {
      param_1[3] = lVar1;
      return;
    }
    param_1[3] = *(longlong *)(param_1[4] + -0x10 + param_1[5] * 8) + 0xf8;
  }
  return;
}



// FUNCTION 1434a25c0 FUN_1434a25c0 body=178 status=ok
// SIG undefined FUN_1434a25c0(void)

void FUN_1434a25c0(longlong *param_1)

{
  longlong lVar1;
  
  if ((ulonglong)param_1[5] < 2) {
    *param_1 = *param_1 + 0x20;
    if (*param_1 != 0) {
      *(undefined1 *)*param_1 = 0;
      return;
    }
  }
  else {
    lVar1 = *(longlong *)(param_1[4] + -8 + param_1[5] * 8);
    *(longlong *)(lVar1 + 0x400) = param_1[7];
    param_1[7] = lVar1;
    FUN_1433cc430(param_1 + 4,param_1[5] + -1);
    lVar1 = *(longlong *)(param_1[4] + -8 + param_1[5] * 8);
    param_1[1] = lVar1;
    param_1[2] = lVar1 + 0x400;
    *param_1 = lVar1 + 0x3e0;
    if ((ulonglong)param_1[5] < 2) {
      param_1[3] = lVar1;
      return;
    }
    param_1[3] = *(longlong *)(param_1[4] + -0x10 + param_1[5] * 8) + 0x3e0;
  }
  return;
}



// FUNCTION 1434a2680 FUN_1434a2680 body=108 status=ok
// SIG undefined FUN_1434a2680(void)

longlong FUN_1434a2680(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = param_2 + 0xfffU & 0xfffff000;
  if ((uVar3 <= uVar1) && ((uVar1 <= uVar3 || (uVar1 - uVar3 < 0x1001)))) {
    return *param_1;
  }
  if (*param_1 == 0) {
    lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar3,0);
  }
  else {
    lVar2 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,*param_1,uVar3);
  }
  *param_1 = lVar2;
  *(uint *)(param_1 + 1) = uVar3;
  return lVar2;
}



// FUNCTION 1434a26f0 FUN_1434a26f0 body=117 status=ok
// SIG undefined FUN_1434a26f0(void)

void FUN_1434a26f0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_1[1] + 1;
  if (uVar2 < (ulonglong)param_1[1]) {
    uVar3 = uVar2;
    if ((ulonglong)param_1[2] >> 1 <= uVar2) goto LAB_1434a273b;
  }
  else {
    if (uVar2 <= (ulonglong)param_1[2]) goto LAB_1434a273b;
    uVar3 = (uVar2 >> 2) + uVar2;
  }
  FUN_1432bc070(param_1,param_1,uVar3);
LAB_1434a273b:
  param_1[1] = uVar2;
  puVar1 = (undefined8 *)(*param_1 + -8 + uVar2 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
  }
  return;
}



// FUNCTION 1434a2770 FUN_1434a2770 body=117 status=ok
// SIG undefined FUN_1434a2770(void)

void FUN_1434a2770(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1] + 1;
  if (uVar1 < (ulonglong)param_1[1]) {
    uVar4 = uVar1;
    if ((ulonglong)param_1[2] >> 1 <= uVar1) goto LAB_1434a27bb;
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) goto LAB_1434a27bb;
    uVar4 = (uVar1 >> 2) + uVar1;
  }
  FUN_1432d5ad0(param_1,param_1,uVar4);
LAB_1434a27bb:
  param_1[1] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + -0x10 + uVar1 * 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
    *puVar3 = *param_2;
    puVar3[1] = uVar2;
  }
  return;
}



// FUNCTION 1434a27f0 FUN_1434a27f0 body=109 status=ok
// SIG undefined FUN_1434a27f0(void)

void FUN_1434a27f0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1] + 1;
  if (uVar1 < (ulonglong)param_1[1]) {
    uVar4 = uVar1;
    if ((ulonglong)param_1[2] >> 1 <= uVar1) goto LAB_1434a283b;
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) goto LAB_1434a283b;
    uVar4 = (uVar1 >> 2) + uVar1;
  }
  FUN_1434a2ea0(param_1,param_1,uVar4);
LAB_1434a283b:
  param_1[1] = uVar1;
  uVar3 = param_2[1];
  puVar2 = (undefined8 *)(*param_1 + -0x10 + uVar1 * 0x10);
  *puVar2 = *param_2;
  puVar2[1] = uVar3;
  return;
}



// FUNCTION 1434a2860 FUN_1434a2860 body=119 status=ok
// SIG undefined FUN_1434a2860(void)

ulonglong FUN_1434a2860(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 8) >> 10;
  if (*(ulonglong *)(param_1 + 0x10) <= uVar4) {
    uVar3 = FUN_1434a6210(param_1,uVar4);
    if ((char)uVar3 == '\0') goto LAB_1434a28a9;
  }
  uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8);
  puVar1 = (undefined8 *)(uVar3 + (ulonglong)(*(uint *)(param_1 + 8) & 0x3ff) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *param_2;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
LAB_1434a28a9:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1434a28e0 FUN_1434a28e0 body=230 status=ok
// SIG undefined FUN_1434a28e0(void)

void FUN_1434a28e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[7];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x108,0);
  }
  else {
    param_1[7] = *(longlong *)(lVar3 + 0x100);
  }
  if (lVar3 == 0) {
    *param_1 = *param_1 + -8;
    return;
  }
  lVar2 = param_1[5];
  uVar4 = lVar2 + 1;
  if (uVar4 < (ulonglong)param_1[5]) {
    uVar5 = uVar4;
    if ((ulonglong)param_1[6] >> 1 <= uVar4) goto LAB_1434a296d;
  }
  else {
    if (uVar4 <= (ulonglong)param_1[6]) goto LAB_1434a296d;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_1432cfd30(param_1 + 4,param_1 + 4,uVar5);
LAB_1434a296d:
  param_1[5] = uVar4;
  plVar1 = (longlong *)(param_1[4] + lVar2 * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = lVar3;
  }
  param_1[1] = lVar3;
  param_1[3] = param_1[2] + -8;
  param_1[2] = lVar3 + 0x100;
  *param_1 = lVar3;
  return;
}



// FUNCTION 1434a29d0 FUN_1434a29d0 body=230 status=ok
// SIG undefined FUN_1434a29d0(void)

void FUN_1434a29d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[7];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x408,0);
  }
  else {
    param_1[7] = *(longlong *)(lVar3 + 0x400);
  }
  if (lVar3 == 0) {
    *param_1 = *param_1 + -0x20;
    return;
  }
  lVar2 = param_1[5];
  uVar4 = lVar2 + 1;
  if (uVar4 < (ulonglong)param_1[5]) {
    uVar5 = uVar4;
    if ((ulonglong)param_1[6] >> 1 <= uVar4) goto LAB_1434a2a5d;
  }
  else {
    if (uVar4 <= (ulonglong)param_1[6]) goto LAB_1434a2a5d;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_1432cfd30(param_1 + 4,param_1 + 4,uVar5);
LAB_1434a2a5d:
  param_1[5] = uVar4;
  plVar1 = (longlong *)(param_1[4] + lVar2 * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = lVar3;
  }
  param_1[1] = lVar3;
  param_1[3] = param_1[2] + -0x20;
  param_1[2] = lVar3 + 0x400;
  *param_1 = lVar3;
  return;
}



// FUNCTION 1434a2ac0 FUN_1434a2ac0 body=186 status=ok
// SIG undefined FUN_1434a2ac0(void)

undefined8 FUN_1434a2ac0(undefined8 param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  double local_18;
  double local_10;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_143457200(lVar2,param_2);
  }
  local_18 = param_3[2] - *param_3;
  local_10 = param_3[3] - param_3[1];
  FUN_143457670(lVar2,param_2,&local_18);
  FUN_143410c00(param_1,lVar2);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80(lVar2);
  }
  return param_1;
}



// FUNCTION 1434a2b80 FUN_1434a2b80 body=478 status=ok
// SIG undefined FUN_1434a2b80(void)

void FUN_1434a2b80(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 3);
  if ((uVar2 & 0x3ffffff) != 0) {
    if (((uVar2 & 0x70000000) != 0x30000000) &&
       (*(uint *)(param_1 + 3) = uVar2 & 0xbfffffff | 0x30000000, (uVar2 & 0x88000000) == 0)) {
      FUN_14349d2c0(param_1[1],param_1);
      return;
    }
    return;
  }
  if ((uVar2 >> 0x1b & 1) != 0) {
    *(uint *)(param_1 + 3) = uVar2 | 0x4000000;
    return;
  }
  lVar1 = param_1[1];
  if ((*(uint *)(lVar1 + 0x58) >> 0x1b & 1) == 0) {
    *(longlong *)(lVar1 + 0x60) = lVar1 + 0x40;
    lVar1 = param_1[1] + 0x40;
    *(longlong *)(param_1[1] + 0x50) = lVar1;
    *(longlong *)(param_1[1] + 0x48) = lVar1;
    *(uint *)(param_1[1] + 0x58) = *(uint *)(param_1[1] + 0x58) | 0x8000000;
    (**(code **)*param_1)(param_1,param_1[1]);
    if (*(longlong *)(param_1[1] + 0x48) != param_1[1] + 0x40) {
      do {
        lVar1 = *(longlong *)(param_1[1] + 0x48);
        *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8) = *(undefined8 *)(lVar1 + 8);
        *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
        *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) & 0x77ffffff;
        uVar2 = *(uint *)(lVar1 + 0x18);
        *(undefined8 *)(lVar1 + 8) = 0;
        if ((uVar2 >> 0x1b & 1) == 0) {
          *(undefined4 *)(lVar1 + 0x10) = 0xffffffff;
        }
        *(longlong *)(lVar1 + 8) = param_1[1];
        *(uint *)(lVar1 + 0x18) = uVar2 & 0x77ffffff;
        *(undefined4 *)(lVar1 + 0x10) = 0xffffffff;
        *(uint *)(lVar1 + 0x18) = uVar2 & 0x73ffffff;
        *(undefined8 *)(param_1[1] + 0x60) = *(undefined8 *)(param_1[1] + 0x50);
        FUN_1434a2b80(lVar1);
      } while (*(longlong *)(param_1[1] + 0x48) != param_1[1] + 0x40);
    }
    lVar1 = param_1[1];
    *(uint *)(lVar1 + 0x58) = *(uint *)(lVar1 + 0x58) & 0x77ffffff;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    if ((*(uint *)(lVar1 + 0x58) >> 0x1b & 1) == 0) {
      *(undefined4 *)(lVar1 + 0x50) = 0xffffffff;
    }
  }
  else {
    (**(code **)*param_1)(param_1,lVar1,0);
  }
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0x8fffffff;
  uVar2 = *(uint *)(param_1 + 3) >> 0x1b;
  if ((int)*(uint *)(param_1 + 3) < 0) {
    if ((uVar2 & 1) == 0) {
      FUN_1434a2e10(param_1[1],param_1);
      goto LAB_1434a2cf4;
    }
  }
  else if ((uVar2 & 1) == 0) goto LAB_1434a2cf4;
  Scaleform::GFx::AS2::RefCountBaseGC<323>::RemoveFromList(param_1);
LAB_1434a2cf4:
  (**(code **)(*param_1 + 8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001434a2d0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
  return;
}



// FUNCTION 1434a2d60 FUN_1434a2d60 body=108 status=ok
// SIG undefined FUN_1434a2d60(void)

void FUN_1434a2d60(longlong *param_1,longlong param_2)

{
  void *_Dst;
  RefCountNTSImpl *this;
  
  if (param_1[1] == 1) {
    FUN_1432f2b40(param_1,param_1,0);
    return;
  }
  this = *(RefCountNTSImpl **)(*param_1 + param_2 * 8);
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  _Dst = (void *)(*param_1 + param_2 * 8);
  memmove(_Dst,(void *)((longlong)_Dst + 8),(param_1[1] - param_2) * 8 - 8);
  param_1[1] = param_1[1] + -1;
  return;
}



// FUNCTION 1434a2dd0 RemoveFromList body=57 status=ok
// SIG undefined RemoveFromList(void)

void Scaleform::GFx::AS2::RefCountBaseGC<323>::RemoveFromList(longlong param_1)

{
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0x77ffffff;
  *(undefined8 *)(param_1 + 8) = 0;
  if ((*(uint *)(param_1 + 0x18) >> 0x1b & 1) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return;
}



// FUNCTION 1434a2e10 FUN_1434a2e10 body=132 status=ok
// SIG undefined FUN_1434a2e10(void)

void FUN_1434a2e10(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  if (((int)*(uint *)(param_2 + 0x18) < 0) && ((*(uint *)(param_2 + 0x18) >> 0x1b & 1) == 0)) {
    uVar1 = *(uint *)(param_2 + 0x10);
    if ((ulonglong)(uVar1 + 1) == *(ulonglong *)(param_1 + 0x18)) {
      FUN_1434a3810(param_1 + 0x10);
    }
    else {
      *(ulonglong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar1 >> 10) * 8) +
       (ulonglong)(uVar1 & 0x3ff) * 8) = *(longlong *)(param_1 + 0x38) * 2 | 1;
      *(ulonglong *)(param_1 + 0x38) = (ulonglong)*(uint *)(param_2 + 0x10);
    }
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0x7fffffff;
    if ((*(uint *)(param_2 + 0x18) >> 0x1b & 1) == 0) {
      *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 1434a2ea0 FUN_1434a2ea0 body=164 status=ok
// SIG undefined FUN_1434a2ea0(void)

void FUN_1434a2ea0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 0x143;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 << 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1434a2f50 FUN_1434a2f50 body=165 status=ok
// SIG undefined FUN_1434a2f50(void)

void FUN_1434a2f50(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 0x143;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1434a3000 FUN_1434a3000 body=159 status=ok
// SIG undefined FUN_1434a3000(void)

void FUN_1434a3000(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 * 0x38);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar2 * 0x38,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1434a30a0 FUN_1434a30a0 body=165 status=ok
// SIG undefined FUN_1434a30a0(void)

void FUN_1434a30a0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 << 5);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar2 << 5,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1434a3150 FUN_1434a3150 body=164 status=ok
// SIG undefined FUN_1434a3150(void)

void FUN_1434a3150(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 0x143;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 << 5,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1434a3200 FUN_1434a3200 body=413 status=ok
// SIG undefined FUN_1434a3200(void)

void FUN_1434a3200(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
      }
      param_1[2] = 0;
      return;
    }
    uVar4 = param_3 + 3U & 0xfffffffffffffffc;
    local_res8[0] = 2;
    if (*param_1 == 0) {
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar4 * 0x30,local_res8);
      *param_1 = lVar1;
    }
    else {
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))();
      uVar5 = uVar4;
      if ((ulonglong)param_1[1] < uVar4) {
        uVar5 = param_1[1];
      }
      lVar6 = 0;
      for (uVar2 = uVar5; uVar2 != 0; uVar2 = uVar2 - 1) {
        Scaleform::ConstructorCPP<Scaleform::GFx::Value>::Construct(lVar6 + lVar1,*param_1 + lVar6);
        lVar3 = *param_1 + lVar6;
        if ((*(uint *)(lVar3 + 0x18) >> 6 & 1) != 0) {
          (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x10))
                    (*(longlong **)(lVar3 + 0x10),lVar3,*(undefined8 *)(lVar3 + 0x20));
          *(undefined8 *)(lVar3 + 0x10) = 0;
        }
        lVar6 = lVar6 + 0x30;
        *(undefined4 *)(lVar3 + 0x18) = 0;
      }
      if (uVar5 < (ulonglong)param_1[1]) {
        lVar6 = uVar5 * 0x30;
        do {
          lVar3 = *param_1 + lVar6;
          if ((*(uint *)(lVar3 + 0x18) >> 6 & 1) != 0) {
            (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x10))
                      (*(longlong **)(lVar3 + 0x10),lVar3,*(undefined8 *)(lVar3 + 0x20));
            *(undefined8 *)(lVar3 + 0x10) = 0;
          }
          uVar5 = uVar5 + 1;
          *(undefined4 *)(lVar3 + 0x18) = 0;
          lVar6 = lVar6 + 0x30;
        } while (uVar5 < (ulonglong)param_1[1]);
      }
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *param_1 = lVar1;
    }
    param_1[2] = uVar4;
  }
  return;
}



// FUNCTION 1434a33a0 FUN_1434a33a0 body=183 status=ok
// SIG undefined FUN_1434a33a0(void)

void FUN_1434a33a0(ulonglong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  for (iVar3 = (int)param_1[5] * 0x20 + -0x20 + (int)((longlong)(*param_1 - param_1[1]) >> 3);
      iVar3 != 0; iVar3 = iVar3 + -1) {
    lVar1 = *(longlong *)*param_1;
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *param_1 = *param_1 - 8;
    if (*param_1 < param_1[1]) {
      FUN_1434a2500(param_1);
    }
  }
  lVar1 = *(longlong *)*param_1;
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  puVar2 = *(undefined8 **)((param_1[4] - 8) + param_1[5] * 8);
  param_1[1] = (ulonglong)puVar2;
  *param_1 = (ulonglong)puVar2;
  param_1[3] = (ulonglong)puVar2;
  param_1[2] = (ulonglong)(puVar2 + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  return;
}



// FUNCTION 1434a3460 FUN_1434a3460 body=143 status=ok
// SIG undefined FUN_1434a3460(void)

void FUN_1434a3460(ulonglong *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  for (iVar2 = (int)param_1[5] * 0x20 + -0x20 + (int)((longlong)(*param_1 - param_1[1]) >> 5);
      iVar2 != 0; iVar2 = iVar2 + -1) {
    if (4 < *(byte *)*param_1) {
      FUN_143411150();
    }
    *param_1 = *param_1 - 0x20;
    if (*param_1 < param_1[1]) {
      FUN_1434a25c0(param_1);
    }
  }
  if (4 < *(byte *)*param_1) {
    FUN_143411150();
  }
  puVar1 = *(undefined1 **)((param_1[4] - 8) + param_1[5] * 8);
  param_1[1] = (ulonglong)puVar1;
  *param_1 = (ulonglong)puVar1;
  param_1[3] = (ulonglong)puVar1;
  param_1[2] = (ulonglong)(puVar1 + 0x400);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 1434a34f0 ResetAltProto body=181 status=ok
// SIG undefined ResetAltProto(void)

void Scaleform::GFx::AS2::SuperObject::ResetAltProto(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x70);
    if (lVar1 != 0) {
      *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = *(longlong *)(param_1 + 0x68);
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x70);
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    lVar1 = *(longlong *)(param_1 + 0x68);
    if (lVar1 != 0) {
      *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = *(longlong *)(param_1 + 0x30);
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x68);
  }
  return;
}



// FUNCTION 1434a35b0 FUN_1434a35b0 body=94 status=ok
// SIG undefined FUN_1434a35b0(void)

void FUN_1434a35b0(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar2 = param_1[1];
  FUN_1434a3a90(param_1,param_1,param_2);
  if (uVar2 < param_2) {
    plVar4 = (longlong *)(*param_1 + uVar2 * 8);
    for (lVar5 = param_2 - uVar2; lVar5 != 0; lVar5 = lVar5 + -1) {
      if (plVar4 != (longlong *)0x0) {
        lVar3 = param_1[3];
        *plVar4 = lVar3;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      plVar4 = plVar4 + 1;
    }
  }
  return;
}



// FUNCTION 1434a3610 FUN_1434a3610 body=114 status=ok
// SIG undefined FUN_1434a3610(void)

void FUN_1434a3610(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_1432bc070(param_1,param_1,param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_1432bc070(param_1,param_1,(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1434a3690 FUN_1434a3690 body=131 status=ok
// SIG undefined FUN_1434a3690(void)

void FUN_1434a3690(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    uVar4 = param_2;
    if ((ulonglong)param_1[2] >> 1 <= param_2) goto LAB_1434a36d7;
  }
  else {
    if (param_2 <= (ulonglong)param_1[2]) goto LAB_1434a36d7;
    uVar4 = (param_2 >> 2) + param_2;
  }
  FUN_1432d5ad0(param_1,param_1,uVar4);
LAB_1434a36d7:
  param_1[1] = param_2;
  if (uVar1 < param_2) {
    lVar2 = uVar1 * 0x10 + *param_1;
    for (lVar3 = param_2 - uVar1; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0xc) = 0;
      }
      lVar2 = lVar2 + 0x10;
    }
  }
  return;
}



// FUNCTION 1434a3720 FUN_1434a3720 body=109 status=ok
// SIG undefined FUN_1434a3720(void)

void FUN_1434a3720(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = param_1[1];
  FUN_1434a3b40(param_1,param_1,param_2);
  if (uVar1 < param_2) {
    lVar4 = uVar1 * 0x38 + *param_1;
    lVar3 = param_2 - uVar1;
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)(lVar4 + 0x18);
      do {
        if (lVar4 != 0) {
          *(undefined1 *)(puVar2 + 1) = 0;
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        lVar4 = lVar4 + 0x38;
        puVar2 = puVar2 + 7;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 1434a3790 FUN_1434a3790 body=114 status=ok
// SIG undefined FUN_1434a3790(void)

void FUN_1434a3790(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_1434a2ea0(param_1,param_1,param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_1434a2ea0(param_1,param_1,(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1434a3810 FUN_1434a3810 body=246 status=ok
// SIG undefined FUN_1434a3810(void)

void FUN_1434a3810(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_2 <= *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 8)) {
      *(ulonglong *)(param_1 + 8) = param_2;
    }
    return;
  }
  for (uVar2 = *(ulonglong *)(param_1 + 0x10); uVar2 < param_2 + 0x3ff >> 10; uVar2 = uVar2 + 1) {
    if (*(ulonglong *)(param_1 + 0x18) <= uVar2) {
      if (*(longlong *)(param_1 + 0x20) == 0) {
        local_res8[0] = 2;
        uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x28,local_res8);
      }
      else {
        uVar1 = (**(code **)(*DAT_146b62f28 + 0x58))
                          (DAT_146b62f28,*(longlong *)(param_1 + 0x20),
                           *(ulonglong *)(param_1 + 0x18) * 8 + 0x28);
      }
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 5;
      *(undefined8 *)(param_1 + 0x20) = uVar1;
    }
    local_res8[0] = 2;
    uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x2000,local_res8);
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar2 * 8) = uVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1434a3910 FUN_1434a3910 body=181 status=ok
// SIG undefined FUN_1434a3910(void)

void FUN_1434a3910(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    if (lVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + -8 + (lVar2 + param_3) * 0x10);
      do {
        piVar1 = (int *)(*plVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        plVar3 = plVar3 + -2;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1434a2ea0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1434a2ea0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1434a39d0 FUN_1434a39d0 body=189 status=ok
// SIG undefined FUN_1434a39d0(void)

void FUN_1434a39d0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    plVar3 = (longlong *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      lVar1 = *plVar3;
      if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
        FUN_1434a2b80();
      }
      plVar3 = plVar3 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432cfd30(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432cfd30(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1434a3a90 FUN_1434a3a90 body=175 status=ok
// SIG undefined FUN_1434a3a90(void)

void FUN_1434a3a90(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    plVar3 = (longlong *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      piVar1 = (int *)(*plVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      plVar3 = plVar3 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1434a2f50(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1434a2f50(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1434a3b40 FUN_1434a3b40 body=155 status=ok
// SIG undefined FUN_1434a3b40(void)

void FUN_1434a3b40(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_14349e960(param_3 * 0x38 + *param_1,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1434a3000(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1434a3000(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 1434a3be0 FUN_1434a3be0 body=180 status=ok
// SIG undefined FUN_1434a3be0(void)

void FUN_1434a3be0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    pbVar1 = (byte *)(*param_1 + -0x20 + (lVar2 + param_3) * 0x20);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      pbVar1 = pbVar1 + -0x20;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1434a30a0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1434a30a0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1434a3ca0 FUN_1434a3ca0 body=180 status=ok
// SIG undefined FUN_1434a3ca0(void)

void FUN_1434a3ca0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    pbVar1 = (byte *)(*param_1 + -0x20 + (lVar2 + param_3) * 0x20);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      pbVar1 = pbVar1 + -0x20;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432d5b80(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432d5b80(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1434a3d60 FUN_1434a3d60 body=180 status=ok
// SIG undefined FUN_1434a3d60(void)

void FUN_1434a3d60(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    pbVar1 = (byte *)(*param_1 + -0x20 + (lVar2 + param_3) * 0x20);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if (4 < *pbVar1) {
        FUN_143411150(pbVar1);
      }
      pbVar1 = pbVar1 + -0x20;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1434a3150(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1434a3150(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1434a3e20 FUN_1434a3e20 body=159 status=ok
// SIG undefined FUN_1434a3e20(void)

void FUN_1434a3e20(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 < (ulonglong)param_1[1]) {
    FUN_14349e8f0(param_3 * 0x30 + *param_1,param_1[1] - param_3);
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1434a3200(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
    return;
  }
  if ((ulonglong)param_1[2] < param_3) {
    FUN_1434a3200(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}



// FUNCTION 1434a3ec0 FUN_1434a3ec0 body=107 status=ok
// SIG undefined FUN_1434a3ec0(void)

void FUN_1434a3ec0(longlong param_1,uint param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (param_2 == 0) {
    param_2 = 1;
  }
  FUN_1434a3a90(plVar4,plVar4,param_2);
  if (uVar2 < param_2) {
    plVar4 = (longlong *)(*plVar4 + uVar2 * 8);
    for (lVar5 = param_2 - uVar2; lVar5 != 0; lVar5 = lVar5 + -1) {
      if (plVar4 != (longlong *)0x0) {
        lVar3 = *(longlong *)(param_1 + 0x28);
        *plVar4 = lVar3;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      plVar4 = plVar4 + 1;
    }
  }
  return;
}



// FUNCTION 1434a3f30 FUN_1434a3f30 body=246 status=ok
// SIG undefined FUN_1434a3f30(void)

longlong FUN_1434a3f30(longlong *param_1,ulonglong *param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong *local_18;
  undefined8 local_10;
  
  uVar2 = *param_2;
  lVar4 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  if (lVar4 != 0) {
    uVar3 = *(ulonglong *)(lVar4 + 8);
    uVar7 = uVar3 & *(uint *)(uVar2 + 0x1c);
    puVar6 = (ulonglong *)(lVar4 + 0x10 + uVar7 * 0x38);
    if ((*puVar6 != 0xfffffffffffffffe) &&
       (uVar5 = uVar7, (*(uint *)(puVar6[1] + 0x1c) & uVar3) == uVar7)) {
      while (((*(uint *)(puVar6[1] + 0x1c) & uVar3) != uVar7 || (puVar6[1] != uVar2))) {
        uVar5 = *puVar6;
        if (uVar5 == 0xffffffffffffffff) goto LAB_1434a3ffe;
        puVar6 = (ulonglong *)(lVar4 + 0x10 + uVar5 * 0x38);
      }
      if (-1 < (longlong)uVar5) {
        *(int *)(uVar2 + 0x18) = *(int *)(uVar2 + 0x18) + 1;
        lVar4 = uVar5 * 0x38 + lVar4;
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(ulonglong *)(lVar4 + 0x18) = uVar2;
        FUN_143499ee0(lVar4 + 0x20,param_3);
        return lVar4 + 0x18;
      }
    }
  }
LAB_1434a3ffe:
  lVar4 = FUN_143492a10(param_1,param_1,&local_18,(ulonglong)*(uint *)(uVar2 + 0x1c));
  return lVar4;
}



// FUNCTION 1434a4030 FUN_1434a4030 body=106 status=ok
// SIG undefined FUN_1434a4030(void)

void FUN_1434a4030(longlong param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)(param_1 + 8) = 1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  if (param_3 != 0) {
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x18) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x18));
  }
  *(longlong *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1434a40a0 FUN_1434a40a0 body=147 status=ok
// SIG undefined FUN_1434a40a0(void)

void FUN_1434a40a0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 8) = 2;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  if (*(RefCountNTSImpl **)(param_1 + 0x18) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = *param_3;
  *(undefined4 *)(param_1 + 0x24) = param_3[1];
  *(undefined4 *)(param_1 + 0x28) = param_3[2];
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_3 + 3);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)((longlong)param_3 + 0x11);
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)((longlong)param_3 + 0x12);
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)((longlong)param_3 + 0x13);
  return;
}



// FUNCTION 1434a4140 SetAltProto body=202 status=ok
// SIG undefined SetAltProto(void)

void Scaleform::GFx::AS2::SuperObject::SetAltProto(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != *(longlong *)(param_1 + 0x68)) {
    lVar1 = *(longlong *)(param_1 + 0x68);
    if (lVar1 != 0) {
      *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
    if (param_2 != 0) {
      *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = *(longlong *)(param_1 + 0x68);
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *(longlong *)(param_1 + 0x68) = param_2;
    if (param_2 != 0) {
      *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = *(longlong *)(param_1 + 0x30);
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x68);
  }
  return;
}



// FUNCTION 1434a4210 FUN_1434a4210 body=178 status=ok
// SIG undefined FUN_1434a4210(void)

void FUN_1434a4210(longlong param_1,float param_2)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x68);
  if ((plVar2 != (longlong *)0x0) && (*(char *)((longlong)plVar2 + 0x14) != '\0')) {
    uVar4 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    uVar4 = (**(code **)(*plVar2 + 8))(plVar2,uVar4);
    if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
    }
    *(undefined8 *)(param_1 + 0x68) = uVar4;
  }
  lVar3 = *(longlong *)(param_1 + 0x68);
  if ((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) < 6)) {
    *(float *)(lVar3 + 0x4c) = param_2;
    fVar5 = _guard_xfg_dispatch_icall_nop(param_2);
    fVar1 = *(float *)(lVar3 + 0x48);
    fVar6 = _guard_xfg_dispatch_icall_nop(param_2);
    *(float *)(lVar3 + 0x28) = fVar5 * fVar1;
    *(float *)(lVar3 + 0x2c) = fVar6 * *(float *)(lVar3 + 0x48);
  }
  return;
}



// FUNCTION 1434a42d0 SetBool body=39 status=ok
// SIG undefined SetBool(void)

void Scaleform::GFx::AS2::Value::SetBool(undefined1 *param_1,undefined1 param_2)

{
  FUN_143411150();
  *param_1 = 2;
  param_1[8] = param_2;
  return;
}



// FUNCTION 1434a4300 FUN_1434a4300 body=275 status=ok
// SIG undefined FUN_1434a4300(void)

void FUN_1434a4300(longlong *param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong *local_18;
  longlong lStack_10;
  
  local_18 = param_2;
  if (param_4 == '\0') {
    if (*(longlong *)(*param_2 + 0x10) == 0) {
      FUN_14335f970();
    }
    if (*param_1 != 0) {
      lStack_10 = FUN_143493bc0(param_1,&local_18,
                                (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(*param_1 + 8)
                               );
      goto LAB_1434a436e;
    }
  }
  else if (*param_1 != 0) {
    lStack_10 = FUN_143493fd0(param_1,param_2,
                              (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(*param_1 + 8));
LAB_1434a436e:
    local_18 = param_1;
    if (-1 < lStack_10) goto LAB_1434a4388;
  }
  local_18 = (longlong *)0x0;
  lStack_10 = 0;
LAB_1434a4388:
  if (((local_18 != (longlong *)0x0) && (lVar1 = *local_18, lVar1 != 0)) &&
     (lStack_10 <= *(longlong *)(lVar1 + 8))) {
    lVar1 = lVar1 + lStack_10 * 0x48;
    FUN_143410a60(lVar1 + 0x20,param_3);
    FUN_143411240(lVar1 + 0x38,param_3 + 0x18);
    return;
  }
  local_18 = param_2;
  lStack_10 = param_3;
  FUN_143492bc0(param_1,param_1,&local_18,*(undefined4 *)(*param_2 + 0x1c));
  return;
}



// FUNCTION 1434a4420 FUN_1434a4420 body=262 status=ok
// SIG undefined FUN_1434a4420(void)

void FUN_1434a4420(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong *local_18;
  longlong lStack_10;
  
  local_18 = param_2;
  if (param_4 == '\0') {
    if (*(longlong *)(*param_2 + 0x10) == 0) {
      FUN_14335f970();
    }
    if (*param_1 != 0) {
      lStack_10 = FUN_143493ca0(param_1,&local_18,
                                (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(*param_1 + 8)
                               );
      goto LAB_1434a448e;
    }
  }
  else if (*param_1 != 0) {
    lStack_10 = FUN_143494050(param_1,param_2,
                              (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(*param_1 + 8));
LAB_1434a448e:
    local_18 = param_1;
    if (-1 < lStack_10) goto LAB_1434a44a8;
  }
  local_18 = (longlong *)0x0;
  lStack_10 = 0;
LAB_1434a44a8:
  if (((local_18 != (longlong *)0x0) && (lVar1 = *local_18, lVar1 != 0)) &&
     (lStack_10 <= *(longlong *)(lVar1 + 8))) {
    FUN_143410a60(lVar1 + lStack_10 * 0x28 + 0x20,param_3);
    return;
  }
  local_18 = param_2;
  lStack_10 = param_3;
  FUN_143492d60(param_1,param_1,&local_18,*(undefined4 *)(*param_2 + 0x1c));
  return;
}



// FUNCTION 1434a4530 FUN_1434a4530 body=265 status=ok
// SIG undefined FUN_1434a4530(void)

void FUN_1434a4530(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong *local_18;
  longlong lStack_10;
  
  local_18 = param_2;
  if (param_4 == '\0') {
    if (*(longlong *)(*param_2 + 0x10) == 0) {
      FUN_14335f970();
    }
    if (*param_1 != 0) {
      lStack_10 = FUN_143493d80(param_1,&local_18,
                                (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(*param_1 + 8)
                               );
      goto LAB_1434a459e;
    }
  }
  else if (*param_1 != 0) {
    lStack_10 = FUN_1434940d0(param_1,param_2,
                              (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(*param_1 + 8));
LAB_1434a459e:
    local_18 = param_1;
    if (-1 < lStack_10) goto LAB_1434a45b8;
  }
  local_18 = (longlong *)0x0;
  lStack_10 = 0;
LAB_1434a45b8:
  if (((local_18 != (longlong *)0x0) && (lVar1 = *local_18, lVar1 != 0)) &&
     (lStack_10 <= *(longlong *)(lVar1 + 8))) {
    FUN_143411240(lVar1 + lStack_10 * 0x30 + 0x20,param_3);
    return;
  }
  local_18 = param_2;
  lStack_10 = param_3;
  FUN_1434932b0(param_1,param_1,&local_18,*(undefined4 *)(*param_2 + 0x1c));
  return;
}



// FUNCTION 1434a4640 FUN_1434a4640 body=152 status=ok
// SIG undefined FUN_1434a4640(void)

undefined1 FUN_1434a4640(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  local_res8[0] = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_3 + lVar3) != '\0');
  local_res10 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x618),
                              param_3,lVar3,0);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_res10,param_4,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return uVar2;
}



// FUNCTION 1434a46e0 FUN_1434a46e0 body=180 status=ok
// SIG undefined FUN_1434a46e0(void)

void FUN_1434a46e0(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0x14) != '\0')) {
    uVar3 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    uVar3 = (**(code **)(*plVar1 + 8))(plVar1,uVar3);
    if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
    }
    *(undefined8 *)(param_1 + 0x68) = uVar3;
  }
  lVar2 = *(longlong *)(param_1 + 0x68);
  if ((lVar2 != 0) && (*(uint *)(lVar2 + 0x10) < 6)) {
    *(float *)(lVar2 + 0x48) = param_2;
    fVar4 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar2 + 0x4c));
    fVar5 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar2 + 0x4c));
    *(float *)(lVar2 + 0x28) = fVar4 * param_2;
    *(float *)(lVar2 + 0x2c) = fVar5 * param_2;
  }
  return;
}



// FUNCTION 1434a47a0 SetExtMovieDef body=64 status=ok
// SIG undefined SetExtMovieDef(void)

void Scaleform::GFx::MovieDataDef::LoadTaskData::SetExtMovieDef(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    Resource::AddRef(param_2);
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1432de450();
  }
  *(longlong *)(param_1 + 0x178) = param_2;
  return;
}



// FUNCTION 1434a47f0 FUN_1434a47f0 body=59 status=ok
// SIG undefined FUN_1434a47f0(void)

void FUN_1434a47f0(byte *param_1,undefined4 param_2)

{
  if (4 < *param_1) {
    FUN_143411150();
    *param_1 = 4;
    *(undefined4 *)(param_1 + 8) = param_2;
    return;
  }
  *param_1 = 4;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1434a4830 FUN_1434a4830 body=639 status=ok
// SIG undefined FUN_1434a4830(void)

ulonglong FUN_1434a4830(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong local_res10;
  longlong local_res18 [2];
  byte local_48 [8];
  ulonglong local_40;
  
  lVar3 = *param_3;
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18);
  if (lVar3 == *(longlong *)(lVar4 + 0x370)) {
    cVar6 = FUN_143411fd0(param_4,param_2);
    *(char *)(param_1[9] + 0x68) = (cVar6 == '\0') + '\x01';
    uVar5 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[9] + 0x28) + 0x18) + 0x618);
    if (*(char *)(param_1[9] + 0x68) == '\x01') {
      uVar8 = FUN_143360950(uVar5,"4.6.34",6);
      local_res10 = local_res10 & 0xffffffffffffff00;
      *(int *)(uVar8 + 0x18) = *(int *)(uVar8 + 0x18) + 1;
      local_48[0] = 5;
      *(int *)(uVar8 + 0x18) = *(int *)(uVar8 + 0x18) + 1;
      local_40 = uVar8;
      local_res18[0] =
           FUN_143360950(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18)
                          + 0x618),"gfxVersion",10);
      *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xe8,local_res18,local_48,&local_res10);
      piVar1 = (int *)(local_res18[0] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
      piVar1 = (int *)(uVar8 + 0x18);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
    }
    else {
      local_res10 = FUN_143360950(uVar5,"gfxVersion",10);
      *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
      (**(code **)(*param_1 + 0x30))(param_1,param_2 + 0xe8,&local_res10);
      piVar1 = (int *)(local_res10 + 0x18);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      uVar8 = local_res10;
    }
    if (iVar2 == 0) {
      FUN_14335f920(uVar8);
    }
    local_48[0] = 10;
    bVar7 = FUN_143414a10(param_1,param_2,param_3,local_48,param_5);
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
    uVar8 = (ulonglong)bVar7;
  }
  else {
    if (*(char *)(param_1[9] + 0x68) == '\x01') {
      if (lVar3 == *(longlong *)(lVar4 + 0x378)) {
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10);
        if (lVar3 != 0) {
          cVar6 = FUN_143411fd0(param_4,param_2);
          if (cVar6 == '\0') {
            *(uint *)(lVar3 + 0x52f0) = *(uint *)(lVar3 + 0x52f0) & 0xfffff7ff;
          }
          else {
            *(uint *)(lVar3 + 0x52f0) = *(uint *)(lVar3 + 0x52f0) | 0x800;
          }
        }
      }
      else if ((lVar3 == *(longlong *)(lVar4 + 0x380)) &&
              (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x20) + 0x10),
              lVar3 != 0)) {
        cVar6 = FUN_143411fd0(param_4,param_2);
        if (cVar6 == '\0') {
          *(uint *)(lVar3 + 0x52f0) = *(uint *)(lVar3 + 0x52f0) & 0xffffdfff;
        }
        else {
          *(uint *)(lVar3 + 0x52f0) = *(uint *)(lVar3 + 0x52f0) | 0x2000;
        }
      }
    }
    uVar8 = FUN_143415510(param_1,param_2 + 0xe8,param_3,param_4,param_5);
  }
  return uVar8;
}



// FUNCTION 1434a4ad0 FUN_1434a4ad0 body=85 status=ok
// SIG undefined FUN_1434a4ad0(void)

void FUN_1434a4ad0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
                    /* WARNING: Could not recover jumptable at 0x0001434a4b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 1434a4b40 FUN_1434a4b40 body=65 status=ok
// SIG undefined FUN_1434a4b40(void)

void FUN_1434a4b40(byte *param_1,undefined8 param_2)

{
  if (4 < *param_1) {
    FUN_143411150();
    *(undefined8 *)(param_1 + 8) = param_2;
    *param_1 = 3;
    return;
  }
  *(undefined8 *)(param_1 + 8) = param_2;
  *param_1 = 3;
  return;
}



// FUNCTION 1434a4b90 FUN_1434a4b90 body=119 status=ok
// SIG undefined FUN_1434a4b90(void)

void FUN_1434a4b90(longlong param_1,undefined4 param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  byte bStackX_f;
  undefined4 local_res10 [6];
  undefined4 *local_18;
  longlong *local_10;
  
  local_res10[0] = param_2;
  local_18 = local_res10;
  lVar2 = 0x1505;
  lVar3 = 4;
  do {
    pbVar1 = &bStackX_f + lVar3;
    lVar3 = lVar3 + -1;
    lVar2 = lVar2 * 0x1003f + (ulonglong)*pbVar1;
  } while (lVar3 != 0);
  local_10 = param_3;
  FUN_1434936b0(param_1 + 0x10,param_1 + 0x10,&local_18,lVar2);
  lVar2 = *param_3;
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80();
  }
  return;
}



// FUNCTION 1434a4c10 FUN_1434a4c10 body=50 status=ok
// SIG undefined FUN_1434a4c10(void)

void FUN_1434a4c10(byte *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (4 < *param_1) {
    FUN_143411150();
  }
  *param_1 = 5;
  lVar2 = *param_2;
  *(longlong *)(param_1 + 8) = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 1434a4c50 FUN_1434a4c50 body=165 status=ok
// SIG undefined FUN_1434a4c50(void)

void FUN_1434a4c50(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined1 local_res8 [8];
  byte local_28 [8];
  longlong local_20 [2];
  undefined1 local_10;
  
  local_20[0] = *param_3;
  local_res8[0] = 3;
  local_28[0] = 8;
  local_10 = 0;
  if (local_20[0] != 0) {
    *(int *)(local_20[0] + 0x18) = *(int *)(local_20[0] + 0x18) + 1;
    *(uint *)(local_20[0] + 0x18) = *(uint *)(local_20[0] + 0x18) & 0x8fffffff;
  }
  local_20[1] = 0;
  if (param_3[1] != 0) {
    FUN_1434109d0(local_20,param_3[1],*(byte *)(param_3 + 2) & 1);
  }
  (**(code **)(*param_1 + 0x50))
            (param_1,param_2,*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x3b8,local_28,
             local_res8);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return;
}



// FUNCTION 1434a4d00 FUN_1434a4d00 body=152 status=ok
// SIG undefined FUN_1434a4d00(void)

void FUN_1434a4d00(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  byte local_28 [32];
  
  if (param_1[2] == 0) {
    local_res8[0] = 3;
    local_28[0] = 10;
    (**(code **)(*param_1 + 0x50))
              (param_1,param_2,*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x3a8,local_28
               ,local_res8);
    if (4 < local_28[0]) {
      FUN_143411150(local_28);
    }
  }
  if (param_3 != 0) {
    *(uint *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1U & 0x8fffffff;
  }
  lVar1 = param_1[2];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[2] = param_3;
  return;
}



// FUNCTION 1434a4da0 FUN_1434a4da0 body=165 status=ok
// SIG undefined FUN_1434a4da0(void)

void FUN_1434a4da0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined1 local_res8 [8];
  byte local_28 [8];
  longlong local_20 [2];
  undefined1 local_10;
  
  local_20[0] = *param_3;
  local_res8[0] = 3;
  local_28[0] = 8;
  local_10 = 0;
  if (local_20[0] != 0) {
    *(int *)(local_20[0] + 0x18) = *(int *)(local_20[0] + 0x18) + 1;
    *(uint *)(local_20[0] + 0x18) = *(uint *)(local_20[0] + 0x18) & 0x8fffffff;
  }
  local_20[1] = 0;
  if (param_3[1] != 0) {
    FUN_1434109d0(local_20,param_3[1],*(byte *)(param_3 + 2) & 1);
  }
  (**(code **)(*param_1 + 0x50))
            (param_1,param_2,*(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x3b0,local_28,
             local_res8);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return;
}



// FUNCTION 1434a4e50 FUN_1434a4e50 body=84 status=ok
// SIG undefined FUN_1434a4e50(void)

void FUN_1434a4e50(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = FUN_143411e30(param_3);
  iVar2 = FUN_143411e30(param_1,param_2);
  if (4 < *param_1) {
    FUN_143411150(param_1);
  }
  *(int *)(param_1 + 8) = iVar2 << (bVar1 & 0x1f);
  *param_1 = 4;
  return;
}



// FUNCTION 1434a4eb0 FUN_1434a4eb0 body=325 status=ok
// SIG undefined FUN_1434a4eb0(void)

undefined8 FUN_1434a4eb0(double *param_1,char *param_2)

{
  ulong uVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  size_t sVar5;
  char *_Str;
  double dVar6;
  char *local_res10;
  
  local_res10 = (char *)0x0;
  sVar5 = 0xffffffffffffffff;
  do {
    sVar3 = sVar5;
    sVar5 = sVar3 + 1;
  } while (param_2[sVar5] != '\0');
  if (*param_2 == '0') {
    iVar4 = (int)param_2[1];
    if (iVar4 - 0x41U < 0x1a) {
      iVar4 = iVar4 + 0x20;
    }
    if (iVar4 == 0x78) {
      uVar1 = strtoul(param_2,&local_res10,0);
      dVar6 = (double)(int)uVar1;
      goto LAB_1434a4fc4;
    }
  }
  sVar2 = strcspn(param_2,".Ee");
  if (sVar2 != sVar5) {
    dVar6 = (double)FUN_14331b260(param_2,&local_res10);
    goto LAB_1434a4fc4;
  }
  iVar4 = 1;
  if (*param_2 == '-') {
    iVar4 = -1;
LAB_1434a4f5f:
    sVar5 = sVar3;
    _Str = param_2 + 1;
  }
  else {
    _Str = param_2;
    if (*param_2 == '+') goto LAB_1434a4f5f;
  }
  if ((*_Str == '0') && (sVar3 = strspn(_Str,"01234567"), sVar3 == sVar5)) {
    uVar1 = strtoul(_Str,&local_res10,8);
    dVar6 = (double)(int)(uVar1 * iVar4);
  }
  else {
    dVar6 = (double)FUN_14331b260(_Str,&local_res10);
    dVar6 = dVar6 * (double)iVar4;
  }
LAB_1434a4fc4:
  *param_1 = dVar6;
  if ((local_res10 != param_2) && (*local_res10 == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1434a5010 FUN_1434a5010 body=20 status=ok
// SIG undefined FUN_1434a5010(void)

longlong FUN_1434a5010(longlong param_1)

{
  if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 8)) {
    return *(ulonglong *)(param_1 + 8) - 0x20;
  }
  return *(longlong *)(param_1 + 0x20);
}



// FUNCTION 1434a5030 FUN_1434a5030 body=61 status=ok
// SIG undefined FUN_1434a5030(void)

longlong FUN_1434a5030(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x30) * 0x20 + -0x20 +
          (int)(*(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10) >> 5);
  if (param_2 <= uVar1) {
    uVar1 = uVar1 - param_2;
    return (ulonglong)(uVar1 & 0x1f) * 0x20 +
           *(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  return 0;
}



// FUNCTION 1434a5070 Transpose body=202 status=ok
// SIG void Transpose(Matrix4x4<float> * this)

/* public: void __cdecl Scaleform::Render::Matrix4x4<float>::Transpose(void) __ptr64 */

void __thiscall Scaleform::Render::Matrix4x4<float>::Transpose(Matrix4x4<float> *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* 0x34a5070  486  ?Transpose@?$Matrix4x4@M@Render@Scaleform@@QEAAXXZ */
  uVar1 = *(undefined4 *)(this + 8);
  uVar2 = *(undefined4 *)(this + 0x18);
  *(ulonglong *)this = CONCAT44(*(undefined4 *)(this + 0x10),*(undefined4 *)this);
  *(ulonglong *)(this + 8) = CONCAT44(*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x20));
  *(ulonglong *)(this + 0x10) = CONCAT44(*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 4));
  *(ulonglong *)(this + 0x18) = CONCAT44(*(undefined4 *)(this + 0x34),*(undefined4 *)(this + 0x24));
  *(ulonglong *)(this + 0x20) = CONCAT44(uVar2,uVar1);
  *(ulonglong *)(this + 0x28) = CONCAT44(*(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x28));
  *(ulonglong *)(this + 0x30) = CONCAT44(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0xc));
  *(ulonglong *)(this + 0x38) = CONCAT44(*(undefined4 *)(this + 0x3c),*(undefined4 *)(this + 0x2c));
  return;
}



// FUNCTION 1434a5140 FUN_1434a5140 body=40 status=ok
// SIG undefined FUN_1434a5140(void)

undefined8 FUN_1434a5140(char *param_1,char *param_2)

{
  if (*param_1 == *param_2) {
    return 1;
  }
  if (((byte)(*param_1 - 3U) < 2) && ((byte)(*param_2 - 3U) < 2)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1434a5170 FUN_1434a5170 body=452 status=ok
// SIG undefined FUN_1434a5170(void)

void FUN_1434a5170(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  char *_Str1;
  int iVar2;
  char *pcVar3;
  undefined8 *local_res8;
  
  _Str1 = *(char **)*param_2;
  iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"fontFamily");
  if (iVar2 == 0) {
    pcVar3 = "font-family";
  }
  else {
    iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"fontSize");
    if (iVar2 == 0) {
      pcVar3 = "font-size";
    }
    else {
      iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"fontStyle");
      if (iVar2 == 0) {
        pcVar3 = "font-style";
      }
      else {
        iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"fontWeight");
        if (iVar2 == 0) {
          pcVar3 = "font-weight";
        }
        else {
          iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"letterSpacing");
          if (iVar2 == 0) {
            pcVar3 = "letter-spacing";
          }
          else {
            iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"marginLeft");
            if (iVar2 == 0) {
              pcVar3 = "margin-left";
            }
            else {
              iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"marginRight");
              if (iVar2 == 0) {
                pcVar3 = "margin-right";
              }
              else {
                iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"textAlign");
                if (iVar2 == 0) {
                  pcVar3 = "text-align";
                }
                else {
                  iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"textDecoration");
                  if (iVar2 == 0) {
                    pcVar3 = "text-decoration";
                  }
                  else {
                    iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"textIndent");
                    pcVar3 = "text-indent";
                    if (iVar2 != 0) {
                      pcVar3 = _Str1;
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
  FUN_1432c3950(*(undefined8 *)(param_1 + 0x10),pcVar3,0xffffffffffffffff);
  FUN_1432c3950(*(undefined8 *)(param_1 + 0x10),&DAT_145b138d8,0xffffffffffffffff);
  FUN_143411540(param_3,&local_res8,*(undefined8 *)(param_1 + 8),0xffffffff,0);
  FUN_1432c3950(*(undefined8 *)(param_1 + 0x10),*local_res8,0xffffffffffffffff);
  piVar1 = (int *)(local_res8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_res8);
  }
  FUN_1432c3950(*(undefined8 *)(param_1 + 0x10),&DAT_145b13b2c,0xffffffffffffffff);
  return;
}



// FUNCTION 1434a5340 FUN_1434a5340 body=1405 status=ok
// SIG undefined FUN_1434a5340(void)

void FUN_1434a5340(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  ushort *puVar2;
  char *_Str2;
  char *_Str1;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  double dVar10;
  char *local_res8;
  undefined8 *local_res10;
  
  FUN_143411540(param_3,&local_res10,*(undefined8 *)(param_1 + 8),0xffffffff,0);
  lVar8 = 0;
  _Str2 = (char *)*local_res10;
  local_res8 = (char *)0x0;
  uVar3 = *(uint *)(local_res10 + 4);
  _Str1 = *(char **)*param_2;
  lVar7 = lVar8;
  do {
    lVar5 = lVar7 + 1;
    lVar6 = lVar8;
    if (_Str1[lVar7] != "color"[lVar7]) goto LAB_1434a5400;
    lVar7 = lVar5;
  } while (lVar5 != 6);
  uVar3 = strtol(_Str2 + 1,&local_res8,0x10);
  lVar7 = *(longlong *)(param_1 + 0x10);
  *(uint *)(lVar7 + 0xa8) = *(uint *)(lVar7 + 0xa8) & 0xff000000;
  *(uint *)(lVar7 + 0xa8) = *(uint *)(lVar7 + 0xa8) | uVar3 & 0xffffff;
  *(ushort *)(lVar7 + 0xb4) = *(ushort *)(lVar7 + 0xb4) | 1;
  goto LAB_1434a5898;
  while (lVar6 = lVar7, lVar7 != 8) {
LAB_1434a5400:
    lVar7 = lVar6 + 1;
    if (_Str1[lVar6] != "display"[lVar6]) {
      iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"fontFamily");
      if (iVar4 == 0) {
        FUN_1433ddb10(*(longlong *)(param_1 + 0x10) + 0x68,_Str2,uVar3);
      }
      else {
        iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"fontSize");
        if (iVar4 == 0) {
          dVar10 = (double)FUN_14331b260(_Str2,&local_res8);
          Scaleform::Render::Text::TextFormat::SetFontSize
                    (*(longlong *)(param_1 + 0x10) + 0x68,(float)dVar10);
        }
        else {
          iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"fontStyle");
          if (iVar4 == 0) {
            uVar9 = 4;
            if (uVar3 < 4) {
              uVar9 = uVar3;
            }
            iVar4 = strncmp("normal",_Str2,(ulonglong)uVar9);
            if (iVar4 == 0) {
              FUN_1433dd8e0(*(longlong *)(param_1 + 0x10) + 0x68,0);
            }
            else {
              uVar9 = 9;
              if (uVar3 < 9) {
                uVar9 = uVar3;
              }
              iVar4 = strncmp("italic",_Str2,(ulonglong)uVar9);
              if (iVar4 == 0) {
                FUN_1433dd8e0(*(longlong *)(param_1 + 0x10) + 0x68,1);
              }
            }
          }
          else {
            iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"fontWeight");
            if (iVar4 != 0) goto LAB_1434a5582;
            uVar9 = 6;
            if (uVar3 < 6) {
              uVar9 = uVar3;
            }
            iVar4 = strncmp("normal",_Str2,(ulonglong)uVar9);
            if (iVar4 == 0) {
              FUN_1433dd860(*(longlong *)(param_1 + 0x10) + 0x68,0);
            }
            else {
              uVar9 = 4;
              if (uVar3 < 4) {
                uVar9 = uVar3;
              }
              iVar4 = strncmp("bold",_Str2,(ulonglong)uVar9);
              if (iVar4 == 0) {
                FUN_1433dd860(*(longlong *)(param_1 + 0x10) + 0x68,1);
              }
            }
          }
        }
      }
      break;
    }
  }
  goto LAB_1434a5898;
  while (lVar8 = lVar7, lVar7 != 8) {
LAB_1434a5582:
    lVar7 = lVar8 + 1;
    if (_Str1[lVar8] != "kerning"[lVar8]) {
      iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"letterSpacing");
      if (iVar4 == 0) {
        dVar10 = (double)FUN_14331b260(_Str2,&local_res8);
        lVar7 = *(longlong *)(param_1 + 0x10);
        puVar2 = (ushort *)(lVar7 + 0xb4);
        *puVar2 = *puVar2 | 2;
        *(float *)(lVar7 + 0xac) = (float)dVar10 * 20.0;
      }
      else {
        iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"marginLeft");
        if (iVar4 == 0) {
          dVar10 = (double)FUN_14331b260(_Str2,&local_res8);
          lVar7 = *(longlong *)(param_1 + 0x10);
          puVar2 = (ushort *)(lVar7 + 0xda);
          *puVar2 = *puVar2 | 0x10;
          *(short *)(lVar7 + 0xd6) = (short)(longlong)dVar10;
        }
        else {
          iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"marginRight");
          if (iVar4 == 0) {
            dVar10 = (double)FUN_14331b260(_Str2,&local_res8);
            lVar7 = *(longlong *)(param_1 + 0x10);
            puVar2 = (ushort *)(lVar7 + 0xda);
            *puVar2 = *puVar2 | 0x20;
            *(short *)(lVar7 + 0xd8) = (short)(longlong)dVar10;
          }
          else {
            iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"textAlign");
            if (iVar4 == 0) {
              uVar9 = 4;
              if (uVar3 < 4) {
                uVar9 = uVar3;
              }
              iVar4 = strncmp("left",_Str2,(ulonglong)uVar9);
              if (iVar4 == 0) {
                lVar7 = *(longlong *)(param_1 + 0x10);
                puVar2 = (ushort *)(lVar7 + 0xda);
                *puVar2 = *puVar2 & 63999;
                puVar2 = (ushort *)(lVar7 + 0xda);
                *puVar2 = *puVar2 | 1;
              }
              else {
                uVar9 = 6;
                if (uVar3 < 6) {
                  uVar9 = uVar3;
                }
                iVar4 = strncmp("center",_Str2,(ulonglong)uVar9);
                if (iVar4 == 0) {
                  puVar2 = (ushort *)(*(longlong *)(param_1 + 0x10) + 0xda);
                  *puVar2 = *puVar2 | 0x601;
                }
                else {
                  uVar9 = 5;
                  if (uVar3 < 5) {
                    uVar9 = uVar3;
                  }
                  iVar4 = strncmp("right",_Str2,(ulonglong)uVar9);
                  if (iVar4 == 0) {
                    lVar7 = *(longlong *)(param_1 + 0x10);
                    puVar2 = (ushort *)(lVar7 + 0xda);
                    *puVar2 = *puVar2 & 0xfbff;
                    puVar2 = (ushort *)(lVar7 + 0xda);
                    *puVar2 = *puVar2 | 0x201;
                  }
                  else {
                    uVar9 = 7;
                    if (uVar3 < 7) {
                      uVar9 = uVar3;
                    }
                    iVar4 = strncmp("justify",_Str2,(ulonglong)uVar9);
                    if (iVar4 == 0) {
                      lVar7 = *(longlong *)(param_1 + 0x10);
                      puVar2 = (ushort *)(lVar7 + 0xda);
                      *puVar2 = *puVar2 & 0xfdff;
                      puVar2 = (ushort *)(lVar7 + 0xda);
                      *puVar2 = *puVar2 | 0x401;
                    }
                  }
                }
              }
            }
            else {
              iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"textDecoration");
              if (iVar4 == 0) {
                uVar9 = 4;
                if (uVar3 < 4) {
                  uVar9 = uVar3;
                }
                iVar4 = strncmp("none",_Str2,(ulonglong)uVar9);
                if (iVar4 == 0) {
                  Scaleform::Render::Text::TextFormat::SetUnderline
                            (*(longlong *)(param_1 + 0x10) + 0x68,0);
                }
                else {
                  uVar9 = 9;
                  if (uVar3 < 9) {
                    uVar9 = uVar3;
                  }
                  iVar4 = strncmp("underline",_Str2,(ulonglong)uVar9);
                  if (iVar4 == 0) {
                    Scaleform::Render::Text::TextFormat::SetUnderline
                              (*(longlong *)(param_1 + 0x10) + 0x68,1);
                  }
                }
              }
              else {
                iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"textIndent");
                if (iVar4 == 0) {
                  dVar10 = (double)FUN_14331b260(_Str2,&local_res8);
                  lVar7 = *(longlong *)(param_1 + 0x10);
                  puVar2 = (ushort *)(lVar7 + 0xda);
                  *puVar2 = *puVar2 | 4;
                  *(short *)(lVar7 + 0xd2) = (short)(int)dVar10;
                }
              }
            }
          }
        }
      }
      goto LAB_1434a5898;
    }
  }
  uVar9 = 5;
  if (uVar3 < 5) {
    uVar9 = uVar3;
  }
  iVar4 = strncmp("false",_Str2,(ulonglong)uVar9);
  if (iVar4 == 0) {
    Scaleform::Render::Text::TextFormat::SetKerning(*(longlong *)(param_1 + 0x10) + 0x68,0);
  }
  else {
    uVar9 = 4;
    if (uVar3 < 4) {
      uVar9 = uVar3;
    }
    iVar4 = strncmp("true",_Str2,(ulonglong)uVar9);
    if (iVar4 == 0) {
      Scaleform::Render::Text::TextFormat::SetKerning(*(longlong *)(param_1 + 0x10) + 0x68,1);
    }
  }
LAB_1434a5898:
  piVar1 = (int *)(local_res10 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_res10);
  }
  return;
}



// FUNCTION 1434a58c0 FUN_1434a58c0 body=177 status=ok
// SIG undefined FUN_1434a58c0(void)

void FUN_1434a58c0(longlong param_1,longlong *param_2,byte *param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  longlong local_res8 [4];
  ulonglong in_stack_ffffffffffffffe8;
  
  *(longlong *)(param_1 + 0x10) =
       *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(*param_2 + 0x20);
  bVar2 = *param_3;
  if (2 < bVar2) {
    if (bVar2 < 5) {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 4;
    }
    else if (bVar2 == 5) {
      FUN_143411540(param_3,local_res8,*(undefined8 *)(param_1 + 8),0xffffffff,
                    in_stack_ffffffffffffffe8 & 0xffffffffffffff00);
      *(longlong *)(param_1 + 0x10) =
           *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(local_res8[0] + 0x20);
      piVar1 = (int *)(local_res8[0] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
        return;
      }
    }
    else if (bVar2 == 6) {
      lVar3 = FUN_143412120(param_3,*(undefined8 *)(param_1 + 8));
      (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x40))
                (lVar3 + 0x20,*(longlong *)(param_1 + 8) + 0xe8,param_1,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 1434a5980 FUN_1434a5980 body=957 status=ok
// SIG undefined FUN_1434a5980(void)

void FUN_1434a5980(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 uVar14;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong in_stack_fffffffffffffe18;
  ulonglong *local_1d8;
  ulonglong *local_1d0;
  undefined1 local_1c8 [24];
  undefined **local_1b0 [51];
  
  FUN_1432c3140(&local_res10,*(undefined8 *)*param_2,*(undefined4 *)((undefined8 *)*param_2 + 4));
  switch(*param_3) {
  case 0:
    FUN_1432c2fb0(&local_res18,&DAT_145af3922);
    uVar11 = 0;
    break;
  case 1:
    FUN_1432c2fb0(&local_res18,&DAT_145af3922);
    uVar11 = 1;
    break;
  case 2:
    cVar3 = FUN_143411fd0(param_3,*(undefined8 *)(param_1 + 0x10));
    pcVar8 = "false";
    if (cVar3 != '\0') {
      pcVar8 = "true";
    }
    FUN_1432c2fb0(&local_res18,pcVar8);
    uVar11 = 2;
    break;
  case 3:
  case 4:
    uVar14 = FUN_143411a90(param_3,*(undefined8 *)(param_1 + 0x10));
    FUN_143355730(local_1c8,uVar14);
    FUN_143355bc0(local_1c8);
    uVar11 = FWmfMediaPlayer::GetSamples(local_1c8);
    FUN_1432c33f0(&local_res18,local_1b0,uVar11);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
              (*(longlong **)(param_1 + 0x18),&local_res10,&local_res18,5);
    uVar10 = local_res18 & 0xfffffffffffffffc;
    iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar10 + 8,0xffffffff);
    if (iVar4 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar10);
    }
    local_1b0[0] = &PTR_FUN_145af1858;
    FUN_143353a80(local_1c8);
    goto switchD_1434a59d3_default;
  case 5:
    FUN_143411540(param_3,&local_1d8,*(undefined8 *)(param_1 + 0x10),0xffffffff,
                  in_stack_fffffffffffffe18 & 0xffffffffffffff00);
    puVar2 = local_1d8;
    FUN_1432c2fb0(&local_res18,*local_1d8);
    puVar9 = puVar2 + 3;
    *(int *)puVar9 = (int)*puVar9 + -1;
    if ((int)*puVar9 == 0) {
      FUN_14335f920(puVar2);
    }
    uVar11 = 6;
    break;
  case 6:
    local_res18 = FUN_143412120(param_3,*(undefined8 *)(param_1 + 0x10));
    lVar5 = *(longlong *)(param_1 + 8);
    lVar13 = 0;
    lVar7 = lVar13;
    if (lVar5 != 0) {
      uVar10 = *(ulonglong *)(lVar5 + 8);
      uVar12 = uVar10 & local_res18;
      lVar1 = uVar12 * 3 + 2;
      puVar9 = (ulonglong *)(lVar5 + lVar1 * 8);
      if ((*(longlong *)(lVar5 + lVar1 * 8) != -2) &&
         (uVar6 = uVar12, (puVar9[1] & uVar10) == uVar12)) {
        while (((puVar9[1] & uVar10) != uVar12 || (puVar9[1] != local_res18))) {
          uVar6 = *puVar9;
          if (uVar6 == 0xffffffffffffffff) goto LAB_1434a5c20;
          puVar9 = (ulonglong *)(lVar5 + uVar6 * 0x18 + 0x10);
        }
        if (-1 < (longlong)uVar6) {
          lVar7 = lVar5 + (uVar6 + 1) * 0x18;
        }
      }
    }
LAB_1434a5c20:
    lVar5 = lVar7 + 8;
    if (lVar7 == 0) {
      lVar5 = lVar13;
    }
    if (lVar5 == 0) {
      local_1d8 = &local_res18;
      local_1d0 = &local_res18;
      FUN_143492500(param_1 + 8,param_1 + 8,&local_1d8,local_res18);
      iVar4 = (**(code **)(*(longlong *)(local_res18 + 0x20) + 0x10))();
      lVar5 = **(longlong **)(param_1 + 0x18);
      if (iVar4 == 7) {
        (**(code **)(lVar5 + 0x18))();
        (**(code **)(*(longlong *)(local_res18 + 0x20) + 0x40))
                  ((longlong *)(local_res18 + 0x20),*(longlong *)(param_1 + 0x10) + 0xe8,param_1,0,0
                  );
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
      }
      else {
        (**(code **)(lVar5 + 0x10))(*(longlong **)(param_1 + 0x18),&local_res10);
        (**(code **)(*(longlong *)(local_res18 + 0x20) + 0x40))
                  ((longlong *)(local_res18 + 0x20),*(longlong *)(param_1 + 0x10) + 0xe8,param_1,0,0
                  );
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
      }
    }
  default:
    goto switchD_1434a59d3_default;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
            (*(longlong **)(param_1 + 0x18),&local_res10,&local_res18,uVar11);
  uVar10 = local_res18 & 0xfffffffffffffffc;
  iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar10 + 8,0xffffffff);
  if (iVar4 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar10);
  }
switchD_1434a59d3_default:
  iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar4 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 1434a5d60 Visit body=114 status=ok
// SIG undefined Visit(void)

void `Scaleform::GFx::AS2::ExecutionContext::EnumerateOpCode'::`15'::EnumerateOpVisitor::Visit
               (longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 0x20;
  if (*(ulonglong *)(lVar2 + 0x18) <= *(ulonglong *)(lVar2 + 8)) {
    FUN_1434a29d0(lVar2 + 8);
  }
  puVar3 = *(undefined1 **)(lVar2 + 8);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 5;
    lVar2 = *param_2;
    *(longlong *)(puVar3 + 8) = lVar2;
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + 1;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_143300df0(*(longlong *)(param_1 + 0x10),"---enumerate - Push: %s\n",*(undefined8 *)*param_2)
    ;
  }
  return;
}



// FUNCTION 1434a5de0 FUN_1434a5de0 body=150 status=ok
// SIG undefined FUN_1434a5de0(void)

void FUN_1434a5de0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong local_res18 [2];
  ulonglong *local_18;
  ulonglong *local_10;
  
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3);
  if ((uVar1 & 0xff00) == 0x200) {
    uVar3 = (**(code **)(*(longlong *)param_3[3] + 8))();
    FUN_1432c2fb0(local_res18,uVar3);
    local_18 = local_res18;
    local_10 = local_res18;
    FUN_143491110(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 8),&local_18);
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res18[0] & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18[0] & 0xfffffffffffffffc);
    }
  }
  return;
}



// FUNCTION 1434a5e80 FUN_1434a5e80 body=104 status=ok
// SIG undefined FUN_1434a5e80(void)

void FUN_1434a5e80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))
                      (lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
  }
  local_res8[0] = 0;
  (**(code **)(*(longlong *)(lVar1 + 8) + 0x18))
            ((longlong *)(lVar1 + 8),*(undefined8 *)(param_1 + 8),param_2,param_3,local_res8);
  return;
}



// FUNCTION 1434a5f10 FUN_1434a5f10 body=357 status=ok
// SIG undefined FUN_1434a5f10(void)

void FUN_1434a5f10(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong local_res8;
  undefined8 *local_res10;
  undefined1 local_48 [48];
  
  FUN_1432c5960(local_48,DAT_146b62f28);
  FUN_1432c2f70(&local_res8);
  FUN_1433646e0(*(undefined8 *)*param_2,*(undefined4 *)((undefined8 *)*param_2 + 4),&local_res8);
  Scaleform::StringBuffer::AppendString
            (local_48,(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
             *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  Scaleform::StringBuffer::AppendString(local_48,&DAT_145b13200,0xffffffffffffffff);
  FUN_1432c3510(&local_res8);
  FUN_143411540(param_3,&local_res10,*(undefined8 *)(param_1 + 8),0xffffffff,0);
  FUN_1433646e0(*local_res10,*(undefined4 *)(local_res10 + 4),&local_res8);
  Scaleform::StringBuffer::AppendString
            (local_48,(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
             *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  Scaleform::StringBuffer::AppendString(local_48,&DAT_145b13204,0xffffffffffffffff);
  FUN_1432c4ec0(*(undefined8 *)(param_1 + 0x10),local_48);
  piVar1 = (int *)(local_res10 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_res10);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  Scaleform::StringBuffer::~StringBuffer(local_48);
  return;
}



// FUNCTION 1434a6080 Visit body=37 status=ok
// SIG undefined Visit(void)

void `Scaleform::GFx::AS2::MovieClipObject::Set__proto__'::`5'::MemberVisitor::Visit
               (longlong param_1)

{
  short sVar1;
  
  sVar1 = Scaleform::GFx::AS2::MovieClipObject::GetButtonEventNameMask
                    (*(undefined8 *)(param_1 + 0x10));
  if (sVar1 != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x72) = 1;
  }
  return;
}



// FUNCTION 1434a60b0 FUN_1434a60b0 body=113 status=ok
// SIG undefined FUN_1434a60b0(void)

void FUN_1434a60b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte local_28 [8];
  int *local_20;
  
  local_28[0] = 7;
  if (param_3 == 0) {
    local_20 = (int *)0x0;
  }
  else {
    local_20 = *(int **)(param_3 + 0x70);
    if (local_20 == (int *)0x0) {
      local_20 = (int *)FUN_14336c170(param_3);
    }
    if (local_20 != (int *)0x0) {
      *local_20 = *local_20 + 1;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),param_2,local_28,*(undefined1 *)(param_1 + 0x10));
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return;
}



// FUNCTION 1434a6130 FUN_1434a6130 body=123 status=ok
// SIG undefined FUN_1434a6130(void)

void FUN_1434a6130(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined8 local_18;
  
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_14343bb60(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_3,&local_38);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
            (*(longlong **)(param_1 + 0x18),*(undefined8 *)*param_2,&local_38);
  if ((local_20 >> 6 & 1) != 0) {
    (**(code **)(*local_28 + 0x10))(local_28,&local_38,local_18);
  }
  return;
}



// FUNCTION 1434a61c0 FUN_1434a61c0 body=79 status=ok
// SIG undefined FUN_1434a61c0(void)

void FUN_1434a61c0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_143411e30(param_3);
  uVar2 = FUN_143411e30(param_1,param_2);
  if (4 < *param_1) {
    FUN_143411150(param_1);
  }
  *(uint *)(param_1 + 8) = uVar1 ^ uVar2;
  *param_1 = 4;
  return;
}



// FUNCTION 1434a6210 FUN_1434a6210 body=183 status=ok
// SIG undefined FUN_1434a6210(void)

ulonglong FUN_1434a6210(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  
  if (*(ulonglong *)(param_1 + 0x18) <= param_2) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x28,local_res8);
    }
    else {
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))
                        (DAT_146b62f28,*(longlong *)(param_1 + 0x20),
                         *(ulonglong *)(param_1 + 0x18) * 8 + 0x28);
    }
    uVar2 = 0;
    if (lVar1 == 0) goto LAB_1434a626a;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 5;
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  local_res8[0] = 2;
  uVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x2000,local_res8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_2 * 8) = uVar3;
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  if (*(longlong *)(uVar2 + param_2 * 8) != 0) {
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
LAB_1434a626a:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1434a62d0 FUN_1434a62d0 body=216 status=ok
// SIG undefined FUN_1434a62d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1434a62d0(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b745c0) {
    _Init_thread_header(&DAT_146b745c0);
    if (DAT_146b745c0 == -1) {
      _DAT_146b74594 = 1;
      _DAT_146b74598 = 0x42c8000042c80000;
      uRam0000000146b745a0 = 0;
      _DAT_146b74590 = 0;
      _DAT_146b745a8 = 0x3f800000;
      DAT_146b745b8 = 0;
      _DAT_146b745ad = 0xff0000;
      DAT_146b745ac = 0;
      _DAT_146b745b1 = 0;
      DAT_146b745b3 = 0;
      atexit((_func_5014 *)&LAB_143ec4d00);
      _Init_thread_footer(&DAT_146b745c0);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x68);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x10) < 6)) {
    return (undefined *)(lVar1 + 0x18);
  }
  return &DAT_146b74590;
}



// FUNCTION 1434a63b0 FUN_1434a63b0 body=297 status=ok
// SIG undefined FUN_1434a63b0(void)

void FUN_1434a63b0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432ba7a0();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar3 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar4 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar1 = lVar3;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar1 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar1 = lVar1 + 0x18;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar3) != -2) {
        puVar5 = (undefined8 *)(lVar1 + 0x18 + lVar3);
        FUN_1434911e0(&local_res20,param_2,puVar5,*puVar5);
        *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1434a64e0 FUN_1434a64e0 body=333 status=ok
// SIG undefined FUN_1434a64e0(void)

void FUN_1434a64e0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1432ef9e0();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 0x144;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar3 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar4 = lVar5;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)(lVar4 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar4 = lVar4 + 0x18;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar5;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        FUN_1434912f0(&local_res20,param_2,lVar4 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 0x1c));
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1434a6630 FUN_1434a6630 body=361 status=ok
// SIG undefined FUN_1434a6630(void)

void FUN_1434a6630(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1434977f0();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 0x144;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar4 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar5 = lVar6;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar5 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar5 = lVar5 + 0x20;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar5 = *param_1 + lVar6;
      if (*(longlong *)(lVar5 + 0x10) != -2) {
        FUN_1434914a0(&local_res20,param_2,lVar5 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 0x1c));
        lVar2 = *(longlong *)(lVar5 + 0x28);
        if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
          FUN_1434a2b80();
        }
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x20;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1434a67a0 FUN_1434a67a0 body=528 status=ok
// SIG undefined FUN_1434a67a0(void)

void FUN_1434a67a0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1434978a0();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 0x144;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar4 * 0x38 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar6 = lVar5;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar6 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar6 = lVar6 + 0x38;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar6 = *param_1 + lVar5;
      if (*(longlong *)(lVar6 + 0x10) != -2) {
        FUN_143491630(&local_res20,param_2,lVar6 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar6 + 0x18) + 0x1c));
        if ((((*(byte *)(lVar6 + 0x40) & 2) == 0) &&
            (lVar1 = *(longlong *)(lVar6 + 0x30), lVar1 != 0)) &&
           ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar6 + 0x30) = 0;
        if ((((*(byte *)(lVar6 + 0x40) & 1) == 0) &&
            (lVar1 = *(longlong *)(lVar6 + 0x38), lVar1 != 0)) &&
           ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar6 + 0x38) = 0;
        piVar2 = *(int **)(lVar6 + 0x28);
        if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 < 1)) {
          FUN_14336bed0(piVar2);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar2);
        }
        lVar1 = *(longlong *)(lVar6 + 0x20);
        if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
          FUN_1434a2b80();
        }
        piVar2 = (int *)(*(longlong *)(lVar6 + 0x18) + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x38;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  local_res20 = (undefined8 *)0x0;
  FUN_1434978a0(&local_res20);
  return;
}



// FUNCTION 1434a69b0 FUN_1434a69b0 body=454 status=ok
// SIG undefined FUN_1434a69b0(void)

void FUN_1434a69b0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14349de40();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 0x144;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar4 * 0x48 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar6 = lVar5;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar6 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar6 = lVar6 + 0x48;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar6 = *param_1 + lVar5;
      if (*(longlong *)(lVar6 + 0x10) != -2) {
        FUN_1434917a0(&local_res20,param_2,lVar6 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar6 + 0x18) + 0x1c));
        if (4 < *(byte *)(lVar6 + 0x38)) {
          FUN_143411150(lVar6 + 0x38);
        }
        if ((((*(byte *)(lVar6 + 0x30) & 2) == 0) &&
            (lVar2 = *(longlong *)(lVar6 + 0x20), lVar2 != 0)) &&
           ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar6 + 0x20) = 0;
        if ((((*(byte *)(lVar6 + 0x30) & 1) == 0) &&
            (lVar2 = *(longlong *)(lVar6 + 0x28), lVar2 != 0)) &&
           ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar6 + 0x28) = 0;
        piVar1 = (int *)(*(longlong *)(lVar6 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x48;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1434a6b80 FUN_1434a6b80 body=450 status=ok
// SIG undefined FUN_1434a6b80(void)

void FUN_1434a6b80(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143497ab0();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 0x144;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar4 * 0x28 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar6 = lVar5;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar6 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar6 = lVar6 + 0x28;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar6 = *param_1 + lVar5;
      if (*(longlong *)(lVar6 + 0x10) != -2) {
        FUN_143491900(&local_res20,param_2,lVar6 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar6 + 0x18) + 0x1c));
        if ((((*(byte *)(lVar6 + 0x30) & 2) == 0) &&
            (lVar2 = *(longlong *)(lVar6 + 0x20), lVar2 != 0)) &&
           ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar6 + 0x20) = 0;
        if ((((*(byte *)(lVar6 + 0x30) & 1) == 0) &&
            (lVar2 = *(longlong *)(lVar6 + 0x28), lVar2 != 0)) &&
           ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar6 + 0x28) = 0;
        piVar1 = (int *)(*(longlong *)(lVar6 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  local_res20 = (undefined8 *)0x0;
  FUN_143497ab0(&local_res20);
  return;
}



// FUNCTION 1434a6d50 FUN_1434a6d50 body=363 status=ok
// SIG undefined FUN_1434a6d50(void)

void FUN_1434a6d50(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14349df40();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 0x144;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar3 * 0x30 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar4 = lVar5;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)(lVar4 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar4 = lVar4 + 0x30;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar5;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        FUN_143491a90(&local_res20,param_2,lVar4 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 0x1c));
        if (4 < *(byte *)(lVar4 + 0x20)) {
          FUN_143411150(lVar4 + 0x20);
        }
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x30;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1434a6ec0 FUN_1434a6ec0 body=386 status=ok
// SIG undefined FUN_1434a6ec0(void)

void FUN_1434a6ec0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14349dfe0();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 0x144;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar4 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar5 = lVar6;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar5 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar5 = lVar5 + 0x20;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar5 = *param_1 + lVar6;
      if (*(longlong *)(lVar5 + 0x10) != -2) {
        FUN_143491c40(&local_res20,param_2,lVar5 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 0x1c));
        *(undefined ***)(lVar5 + 0x20) = &PTR_FUN_145b10000;
        lVar2 = *(longlong *)(lVar5 + 0x28);
        if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
          FUN_1434a2b80();
        }
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x20;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1434a7050 FUN_1434a7050 body=363 status=ok
// SIG undefined FUN_1434a7050(void)

void FUN_1434a7050(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_14349df40();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 0x144;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar3 * 0x30 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar4 = lVar5;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)(lVar4 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar4 = lVar4 + 0x30;
  }
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar5;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        FUN_143491df0(&local_res20,param_2,lVar4 + 0x18,
                      *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 0x1c));
        if (4 < *(byte *)(lVar4 + 0x20)) {
          FUN_143411150(lVar4 + 0x20);
        }
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x30;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1434a71c0 FUN_1434a71c0 body=448 status=ok
// SIG undefined FUN_1434a71c0(void)

void FUN_1434a71c0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 != 0) {
    if (param_3 < 8) {
      lVar3 = 8;
    }
    else {
      cVar2 = FUN_14207c6a0(param_3 - 1);
      lVar3 = 1L << (cVar2 + 1U & 0x3f);
    }
    local_res18[0] = 0x143;
    lVar5 = 0;
    local_res20 = (undefined8 *)0x0;
    local_res20 = (undefined8 *)
                  (**(code **)(*DAT_146b62f28 + 0x70))
                            (DAT_146b62f28,param_2,lVar3 * 0x40 + 0x10,local_res18);
    *local_res20 = 0;
    local_res20[1] = lVar3 + -1;
    lVar7 = lVar5;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
      lVar7 = lVar7 + 0x40;
    }
    if (*param_1 != 0) {
      lVar3 = *(longlong *)(*param_1 + 8) + 1;
      do {
        lVar7 = *param_1 + lVar5;
        if (*(longlong *)(lVar7 + 0x10) != -2) {
          uVar1 = *(uint *)(lVar7 + 0x20);
          if ((uVar1 >> 0x11 & 1) != 0) {
            uVar1 = uVar1 ^ *(uint *)(lVar7 + 0x28);
          }
          FUN_143491f90(&local_res20,param_2,lVar7 + 0x20,uVar1);
          lVar6 = *(longlong *)(lVar7 + 0x40);
          pbVar4 = (byte *)(*(longlong *)(lVar7 + 0x38) + -0x20 + lVar6 * 0x20);
          for (; lVar6 != 0; lVar6 = lVar6 + -1) {
            if (4 < *pbVar4) {
              FUN_143411150(pbVar4);
            }
            pbVar4 = pbVar4 + -0x20;
          }
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(lVar7 + 0x38));
          *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
        }
        lVar5 = lVar5 + 0x40;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    }
    *param_1 = (longlong)local_res20;
    local_res20 = (undefined8 *)0x0;
    FUN_143497d00(&local_res20);
    return;
  }
  FUN_143497d00();
  return;
}



// FUNCTION 1434a7380 FUN_1434a7380 body=396 status=ok
// SIG undefined FUN_1434a7380(void)

void FUN_1434a7380(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143497de0();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar5 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar4 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar6 = lVar5;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)(lVar6 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar6 = lVar6 + 0x18;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar6 = *param_1 + lVar5;
      if (*(longlong *)(lVar6 + 0x10) != -2) {
        lVar3 = 4;
        lVar7 = 0x1505;
        do {
          lVar1 = lVar3 + 0x17;
          lVar3 = lVar3 + -1;
          lVar7 = lVar7 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar6);
        } while (lVar3 != 0);
        FUN_1434921c0(&local_res20,param_2,lVar6 + 0x18,lVar7);
        lVar3 = *(longlong *)(lVar6 + 0x20);
        if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar6 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1434a7510 FUN_1434a7510 body=403 status=ok
// SIG undefined FUN_1434a7510(void)

void FUN_1434a7510(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143315ea0();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar1 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar1 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar8 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar7 = lVar8;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar7 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar7 = lVar7 + 0x20;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar7 = *param_1 + lVar8;
      if (*(longlong *)(lVar7 + 0x10) != -2) {
        puVar4 = (ulonglong *)(*(ulonglong *)(lVar7 + 0x20) & 0xfffffffffffffffc);
        uVar3 = FUN_1432c4390((longlong)puVar4 + 0xc,*puVar4 & 0x7fffffffffffffff,0x1505);
        FUN_1434923a0(&local_res20,param_2,lVar7 + 0x20,uVar3);
        uVar6 = *(ulonglong *)(lVar7 + 0x20) & 0xfffffffffffffffc;
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xfffffffffffffffe;
      }
      lVar8 = lVar8 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 1434a76b0 FUN_1434a76b0 body=299 status=ok
// SIG undefined FUN_1434a76b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1434a76b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b74588) {
    _Init_thread_header(&DAT_146b74588);
    if (DAT_146b74588 == -1) {
      _DAT_146b7455c = 1;
      _DAT_146b74560 = 0x42c8000042c80000;
      uRam0000000146b74568 = 0;
      _DAT_146b74558 = 0;
      _DAT_146b74570 = 0x3f800000;
      DAT_146b74580 = 0;
      _DAT_146b74575 = 0xff0000;
      DAT_146b74574 = 0;
      _DAT_146b74579 = 0;
      DAT_146b7457b = 0;
      atexit((_func_5014 *)&LAB_143ec4d20);
      _Init_thread_footer(&DAT_146b74588);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x68);
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0x14) != '\0')) {
    uVar3 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    uVar3 = (**(code **)(*plVar1 + 8))(plVar1,uVar3);
    if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
    }
    *(undefined8 *)(param_1 + 0x68) = uVar3;
  }
  lVar2 = *(longlong *)(param_1 + 0x68);
  if ((lVar2 != 0) && (*(uint *)(lVar2 + 0x10) < 6)) {
    return (undefined *)(lVar2 + 0x18);
  }
  return &DAT_146b74558;
}



// FUNCTION 1434a77e0 FUN_1434a77e0 body=838 status=ok
// SIG undefined FUN_1434a77e0(void)

void FUN_1434a77e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong local_res20;
  longlong local_58;
  ulonglong local_50;
  undefined1 local_48 [40];
  
  lVar2 = *(longlong *)(param_2 + 0x68);
  local_res20 = param_4;
  local_res18 = param_3;
  do {
    if (lVar2 == 0) {
      return;
    }
    if (*(char *)(lVar2 + 0x40) == '\x01') {
      FUN_1434a77e0(param_1,lVar2,param_3,param_4);
      for (puVar7 = *(undefined8 **)(lVar2 + 0x58); param_3 = local_res18, param_4 = local_res20,
          puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)puVar7[2]) {
        iVar5 = strncmp(*(char **)*puVar7,"id",2);
        if (iVar5 == 0) {
          FUN_1432c3140(&local_50,*(undefined8 *)puVar7[1],
                        *(undefined4 *)((longlong)puVar7[1] + 0x14));
          if (*(longlong *)(lVar2 + 0x38) == 0) {
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
            puVar7 = (undefined8 *)(**(code **)(*plVar3 + 0x50))(plVar3,0x78,0);
            if (puVar7 == (undefined8 *)0x0) {
              puVar7 = (undefined8 *)0x0;
            }
            else {
              FUN_1434148b0(puVar7,param_1);
              *puVar7 = &PTR_LAB_145b14140;
              puVar7[4] = &PTR_LAB_145b14188;
              puVar7[0xd] = 0;
              puVar7[0xe] = 0;
              uVar8 = FUN_14341b750(*(undefined8 *)(param_1 + 0xe8),0x18);
              FUN_1434a4d00(puVar7 + 4,param_1 + 0xe8,uVar8);
            }
            if (*(longlong *)(lVar2 + 0x38) == 0) {
              plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + 0x70);
              puVar9 = (undefined8 *)(**(code **)(*plVar3 + 0x50))(plVar3,0x18);
              if (puVar9 != (undefined8 *)0x0) {
                puVar9[1] = 0;
                *puVar9 = &PTR_FUN_145b14138;
                puVar9[2] = 0;
              }
              *(undefined8 **)(lVar2 + 0x38) = puVar9;
              if (*(char *)(lVar2 + 0x40) == '\x01') {
                FUN_1434ab310(param_1,lVar2);
              }
            }
            *(undefined8 **)(*(longlong *)(lVar2 + 0x38) + 8) = puVar7;
            puVar7[0xe] = lVar2;
            if (local_res18 == 0) {
              lVar10 = FUN_143df5430(*(undefined8 *)(lVar2 + 0x10),lVar2);
            }
            else {
              *(int *)(local_res18 + 8) = *(int *)(local_res18 + 8) + 1;
              lVar10 = local_res18;
            }
            if ((RefCountNTSImpl *)puVar7[0xd] != (RefCountNTSImpl *)0x0) {
              Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)puVar7[0xd]);
            }
            puVar7[0xd] = lVar10;
            iVar5 = *(int *)(puVar7 + 3);
            uVar6 = iVar5 + 1U & 0x8fffffff;
            *(uint *)(puVar7 + 3) = uVar6;
            if ((iVar5 + 1U & 0x3ffffff) != 0) {
              *(uint *)(puVar7 + 3) = uVar6 - 1;
              FUN_1434a2b80(puVar7);
            }
          }
          else {
            puVar7 = *(undefined8 **)(*(longlong *)(lVar2 + 0x38) + 8);
            if ((puVar7 == (undefined8 *)0x0) ||
               (*(uint *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1U & 0x8fffffff,
               puVar7 == (undefined8 *)0x0)) {
              plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
              lVar10 = (**(code **)(*plVar3 + 0x50))(plVar3,0x78);
              if (lVar10 == 0) {
                puVar7 = (undefined8 *)0x0;
              }
              else {
                puVar7 = (undefined8 *)FUN_1434a7b90(lVar10,param_1);
              }
              Scaleform::GFx::AS2::SetupShadow(param_1,lVar2,puVar7);
            }
          }
          local_res10[0] = 0;
          lVar10 = Scaleform::GFx::AS2::GlobalContext::GetStringManager
                             (*(undefined8 *)(param_1 + 0xe8));
          local_58 = FUN_143360a90(*(undefined8 *)(lVar10 + 0x4e0),
                                   (longlong)(local_50 & 0xfffffffffffffffc) + 0xc,
                                   *(ulonglong *)(local_50 & 0xfffffffffffffffc) &
                                   0x7fffffffffffffff);
          lVar4 = local_res20;
          *(int *)(local_58 + 0x18) = *(int *)(local_58 + 0x18) + 1;
          lVar10 = *(longlong *)(local_res20 + 0x20);
          uVar8 = FUN_143410c00(local_48,puVar7);
          (**(code **)(lVar10 + 0x18))(lVar4 + 0x20,param_1,&local_58,uVar8,local_res10);
          piVar1 = (int *)(local_58 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          FUN_143411120(local_48);
          if ((puVar7 != (undefined8 *)0x0) && ((*(uint *)(puVar7 + 3) & 0x3ffffff) != 0)) {
            *(uint *)(puVar7 + 3) = *(uint *)(puVar7 + 3) - 1;
            FUN_1434a2b80(puVar7);
          }
          uVar11 = local_50 & 0xfffffffffffffffc;
          iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar11 + 8,0xffffffff);
          param_3 = local_res18;
          param_4 = local_res20;
          if (iVar5 == 1) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar11);
            param_3 = local_res18;
            param_4 = local_res20;
          }
          break;
        }
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0x30);
  } while( true );
}



// FUNCTION 1434a7b30 ~XmlNodeObject body=83 status=ok
// SIG undefined ~XmlNodeObject(void)

void Scaleform::GFx::AS2::XmlNodeObject::~XmlNodeObject(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b14140;
  param_1[4] = &PTR_LAB_145b14188;
  if ((param_1[0xe] != 0) && (lVar1 = *(longlong *)(param_1[0xe] + 0x38), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  if ((RefCountNTSImpl *)param_1[0xd] != (RefCountNTSImpl *)0x0) {
    RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 1434a7b90 FUN_1434a7b90 body=110 status=ok
// SIG undefined FUN_1434a7b90(void)

undefined8 * FUN_1434a7b90(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1434148b0();
  *param_1 = &PTR_LAB_145b14140;
  param_1[4] = &PTR_LAB_145b14188;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x18);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar1);
  return param_1;
}



// FUNCTION 1434a7c10 FUN_1434a7c10 body=826 status=ok
// SIG undefined FUN_1434a7c10(void)

undefined8
FUN_1434a7c10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  char *_Str;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined4 local_res8;
  undefined4 uStackX_c;
  ulonglong in_stack_ffffffffffffffb8;
  undefined8 *local_38;
  undefined8 local_30;
  
  lVar4 = FUN_143417140(param_2);
  if (*(longlong *)(param_1 + 0x50) == 0) {
LAB_1434a7f1c:
    uVar5 = FUN_143414a10(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    iVar3 = Scaleform::GFx::AS2::XmlNodeObject::GetStandardMemberConstant
                      (param_1 + -0x20,param_2,param_3);
    if (iVar3 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x50);
      if (lVar2 == 0) {
        if (lVar4 != 0) {
          local_res8 = 0x24000;
          FUN_1432c19d0(lVar4,&local_res8,
                        "XMLNodeObject::SetMember - cannot set attributes of a malformed node");
          return 1;
        }
      }
      else {
        if (*(char *)(lVar2 + 0x40) == '\x01') {
          lVar4 = *(longlong *)(lVar2 + 0x38);
          uVar5 = FUN_143412120(param_4,param_2);
          FUN_143499df0(lVar4 + 0x10,uVar5);
          return 1;
        }
        if (lVar4 != 0) {
          local_res8 = 0x24000;
          FUN_1432c19d0(lVar4,&local_res8,
                        "XMLNodeObject::SetMember - cannot set attributes of node type %d. Only type 1 allowed"
                        ,*(char *)(lVar2 + 0x40));
          return 1;
        }
      }
    }
    else if (iVar3 == 7) {
      lVar2 = *(longlong *)(param_1 + 0x50);
      if (lVar2 == 0) {
        if (lVar4 != 0) {
          local_res8 = 0x24000;
          FUN_1432c19d0(lVar4,&local_res8,
                        "XMLNodeObject::SetMember - cannot set nodeName of a malformed node");
        }
      }
      else {
        if (*(char *)(lVar2 + 0x40) == '\x01') {
          FUN_143df4940(&local_38,*(longlong *)(lVar2 + 0x10) + 0x50);
          uVar7 = 0xffffffffffffffff;
          FUN_143411540(param_4,&local_res8,param_2,0xffffffff,
                        in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
          _Str = *(char **)CONCAT44(uStackX_c,local_res8);
          pcVar6 = strchr(_Str,0x3a);
          if (pcVar6 == (char *)0x0) {
            uVar7 = (ulonglong)*(uint *)((longlong *)CONCAT44(uStackX_c,local_res8) + 4);
            pcVar6 = *(char **)CONCAT44(uStackX_c,local_res8);
          }
          else {
            uVar5 = FUN_143df4c20(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x10) + 0x20,_Str,
                                  (longlong)pcVar6 - (longlong)_Str);
            FUN_143df4940(&local_30,uVar5);
            FUN_143df49b0(&local_38,local_30);
            FUN_143df4970(&local_30);
            pcVar6 = pcVar6 + 1;
            do {
              uVar7 = uVar7 + 1;
            } while (pcVar6[uVar7] != '\0');
          }
          uVar5 = FUN_143df4c20(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x10) + 0x20,pcVar6,
                                uVar7);
          FUN_143df4940(&local_30,uVar5);
          FUN_143df49b0(*(longlong *)(param_1 + 0x50) + 0x18,local_30);
          FUN_143df4970(&local_30);
          FUN_143df49b0(lVar2 + 0x48,local_38);
          FUN_1434aaf80(param_2,lVar2,*(undefined8 *)(param_1 + 0x48));
          piVar1 = (int *)(CONCAT44(uStackX_c,local_res8) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          FUN_143df4970(&local_38);
          return 1;
        }
        if (lVar4 != 0) {
          local_res8 = 0x24000;
          FUN_1432c19d0(lVar4,&local_res8,
                        "XMLNodeObject::SetMember - cannot set nodeName of node type %d. Only type 1 allowed"
                        ,*(char *)(lVar2 + 0x40));
          return 1;
        }
      }
    }
    else {
      if (iVar3 != 9) goto LAB_1434a7f1c;
      if ((*(longlong *)(param_1 + 0x50) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x50) + 0x40) == '\x01')) {
        if (lVar4 != 0) {
          local_res8 = 0x24000;
          FUN_1432c19d0(lVar4,&local_res8,
                        "XMLNodeObject::SetMember - cannot set nodeValue of a malformed node");
          return 1;
        }
      }
      else {
        FUN_143411540(param_4,&local_38,param_2,0xffffffffffffffff,
                      in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
        uVar5 = FUN_143df4c20(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x10) + 0x20,*local_38,
                              *(undefined4 *)(local_38 + 4));
        FUN_143df4940(&local_res8,uVar5);
        FUN_143df49b0(*(longlong *)(param_1 + 0x50) + 0x18,CONCAT44(uStackX_c,local_res8));
        FUN_143df4970(&local_res8);
        piVar1 = (int *)(local_38 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
          return 1;
        }
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1434a7f50 FUN_1434a7f50 body=1302 status=ok
// SIG undefined FUN_1434a7f50(void)

undefined8 FUN_1434a7f50(longlong param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong local_res8;
  undefined1 local_38 [32];
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
switchD_1434a7fa7_default:
    uVar11 = Scaleform::GFx::AS2::
             Prototype<Scaleform::GFx::AS2::XmlObject,Scaleform::GFx::AS2::Environment>::GetMember
                       (param_1,param_2,param_3,param_4);
    return uVar11;
  }
  uVar7 = Scaleform::GFx::AS2::XmlNodeObject::GetStandardMemberConstant(param_1 + -0x20);
  switch(uVar7) {
  case 0:
    if (*(longlong *)(param_1 + 0x50) == 0) break;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x38);
    plVar3 = (longlong *)(lVar10 + 0x10);
    if (*(longlong *)(lVar10 + 0x10) == 0) {
      plVar5 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
      lVar10 = (**(code **)(*plVar5 + 0x50))(plVar5,0x68);
      if (lVar10 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_1434148b0(lVar10,param_2);
      }
      FUN_1434aa560(plVar3,uVar11);
    }
    lVar9 = *plVar3;
    goto LAB_1434a82ff;
  case 1:
    if ((*(longlong *)(param_1 + 0x50) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x50) + 0x40) == '\x01')) {
      plVar3 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
      lVar10 = (**(code **)(*plVar3 + 0x50))(plVar3,0x98,0);
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = FUN_14345d8d0(lVar10,param_2);
      }
      for (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x68); lVar9 != 0;
          lVar9 = *(longlong *)(lVar9 + 0x30)) {
        if ((*(longlong *)(lVar9 + 0x38) == 0) ||
           (*(longlong *)(*(longlong *)(lVar9 + 0x38) + 8) == 0)) {
          puVar8 = (undefined8 *)
                   FUN_1434aac90(&local_res8,param_2,lVar9,*(undefined8 *)(param_1 + 0x48));
          uVar11 = FUN_143410c00(local_38,*puVar8);
          FUN_14345e390(lVar10,uVar11);
          FUN_143411120(local_38);
          if ((local_res8 != 0) && ((*(uint *)(local_res8 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(local_res8 + 0x18) = *(uint *)(local_res8 + 0x18) - 1;
            FUN_1434a2b80();
          }
        }
        else {
          FUN_143410c00(local_38);
          FUN_14345e390(lVar10,local_38);
          FUN_143411120(local_38);
        }
      }
      FUN_143412aa0(param_4,lVar10);
      if (lVar10 == 0) {
        return 1;
      }
      if ((*(uint *)(lVar10 + 0x18) & 0x3ffffff) == 0) {
        return 1;
      }
      *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) - 1;
      FUN_1434a2b80(lVar10);
      return 1;
    }
    break;
  case 2:
    lVar10 = *(longlong *)(param_1 + 0x50);
    if (lVar10 == 0) break;
    if ((*(char *)(lVar10 + 0x40) != '\x01') || (cVar6 = FUN_143df6200(lVar10), cVar6 == '\0'))
    goto LAB_1434a8293;
    lVar10 = *(longlong *)(lVar10 + 0x68);
    if (*(longlong *)(lVar10 + 0x38) == 0) goto LAB_1434a7fe6;
    lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x38) + 8);
    goto LAB_1434a7fdd;
  case 3:
    lVar10 = *(longlong *)(param_1 + 0x50);
    if (lVar10 == 0) break;
    if ((*(char *)(lVar10 + 0x40) != '\x01') || (cVar6 = FUN_143df6200(lVar10), cVar6 == '\0'))
    goto LAB_1434a8293;
    lVar10 = *(longlong *)(lVar10 + 0x70);
    if (*(longlong *)(lVar10 + 0x38) == 0) goto LAB_1434a7fe6;
    lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x38) + 8);
    goto LAB_1434a834a;
  case 4:
    lVar10 = *(longlong *)(param_1 + 0x50);
    if ((lVar10 == 0) || (*(char *)(lVar10 + 0x40) != '\x01')) break;
    goto LAB_1434a83b9;
  case 5:
    lVar10 = *(longlong *)(param_1 + 0x50);
    if ((lVar10 == 0) || (*(char *)(lVar10 + 0x40) != '\x01')) break;
    puVar8 = *(undefined8 **)(lVar10 + 0x50);
    uVar11 = *(undefined8 *)(param_2 + 0xe8);
    goto LAB_1434a822e;
  case 6:
    if (*(longlong *)(param_1 + 0x50) == 0) break;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30);
    if (lVar10 == 0) goto LAB_1434a8293;
    if (*(longlong *)(lVar10 + 0x38) == 0) goto LAB_1434a7fe6;
    lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x38) + 8);
LAB_1434a7fdd:
    if (lVar9 != 0) {
LAB_1434a82ff:
      FUN_143412aa0(param_4,lVar9);
      return 1;
    }
LAB_1434a7fe6:
    puVar8 = (undefined8 *)FUN_1434aac90(&local_res8,param_2,lVar10,*(undefined8 *)(param_1 + 0x48))
    ;
    FUN_143412aa0(param_4,*puVar8);
    if (local_res8 == 0) {
      return 1;
    }
    if ((*(uint *)(local_res8 + 0x18) & 0x3ffffff) == 0) {
      return 1;
    }
    *(uint *)(local_res8 + 0x18) = *(uint *)(local_res8 + 0x18) - 1;
    FUN_1434a2b80();
    return 1;
  case 7:
    lVar10 = *(longlong *)(param_1 + 0x50);
    if (lVar10 != 0) {
      if (*(char *)(lVar10 + 0x40) != '\x01') goto LAB_1434a8293;
      uVar11 = *(undefined8 *)(param_2 + 0xe8);
      if (*(int *)((longlong)*(undefined8 **)(lVar10 + 0x48) + 0x14) != 0) {
        uVar4 = **(undefined8 **)(lVar10 + 0x48);
        lVar9 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(uVar11);
        local_res8 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x4e0),uVar4);
        *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
        FUN_143360130(&local_res8,&DAT_145b138d8);
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (*(char *)(**(longlong **)(lVar10 + 0x18) + lVar9) != '\0');
        FUN_143360130(&local_res8);
        if (4 < *param_4) {
          FUN_143411150(param_4);
        }
        *param_4 = 5;
        *(ulonglong *)(param_4 + 8) = local_res8;
        *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
        piVar1 = (int *)(local_res8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return 1;
        }
        FUN_14335f920();
        return 1;
      }
      puVar8 = *(undefined8 **)(lVar10 + 0x18);
      goto LAB_1434a822e;
    }
    break;
  case 8:
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1434a4b40(param_4,(double)*(byte *)(*(longlong *)(param_1 + 0x50) + 0x40));
      return 1;
    }
    break;
  case 9:
    lVar10 = *(longlong *)(param_1 + 0x50);
    if (lVar10 == 0) break;
    if (*(char *)(lVar10 + 0x40) == '\x01') goto LAB_1434a8293;
LAB_1434a83b9:
    puVar8 = *(undefined8 **)(lVar10 + 0x18);
    uVar11 = *(undefined8 *)(param_2 + 0xe8);
LAB_1434a822e:
    uVar4 = *puVar8;
    lVar10 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(uVar11);
    lVar10 = FUN_143360a60(*(undefined8 *)(lVar10 + 0x4e0),uVar4);
    *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
    if (4 < *param_4) {
      FUN_143411150(param_4);
    }
    *param_4 = 5;
    *(longlong *)(param_4 + 8) = lVar10;
    iVar2 = *(int *)(lVar10 + 0x18);
    *(int *)(lVar10 + 0x18) = iVar2;
    if (iVar2 != 0) {
      return 1;
    }
    FUN_14335f920(lVar10);
    return 1;
  case 10:
    if (*(longlong *)(param_1 + 0x50) == 0) break;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x20);
    goto LAB_1434a8373;
  case 0xb:
    lVar10 = *(longlong *)(param_1 + 0x50);
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x40) == '\x01')) {
      puVar8 = *(undefined8 **)(lVar10 + 0x48);
      uVar11 = *(undefined8 *)(param_2 + 0xe8);
      goto LAB_1434a822e;
    }
    break;
  case 0xc:
    if (*(longlong *)(param_1 + 0x50) == 0) break;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x28);
LAB_1434a8373:
    if (lVar10 == 0) {
LAB_1434a8293:
      FUN_143411150(param_4);
      *param_4 = 1;
      return 1;
    }
    if (*(longlong *)(lVar10 + 0x38) != 0) {
      lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x38) + 8);
LAB_1434a834a:
      if (lVar9 != 0) {
        FUN_143412aa0(param_4);
        return 1;
      }
    }
    goto LAB_1434a7fe6;
  default:
    goto switchD_1434a7fa7_default;
  }
  FUN_143411150(param_4);
  *param_4 = 0;
  return 1;
}



// FUNCTION 1434a84b0 GetStandardMemberConstant body=133 status=ok
// SIG undefined GetStandardMemberConstant(void)

int Scaleform::GFx::AS2::XmlNodeObject::GetStandardMemberConstant
              (undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = -1;
  if ((*(uint *)(*param_3 + 0x1c) >> 0x1d & 1) != 0) {
    lVar2 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x18);
    lVar1 = *(longlong *)(lVar2 + 0xb8);
    if (((lVar1 != 0) &&
        (lVar2 = FUN_1432ef240((longlong *)(lVar2 + 0xb8),param_3,
                               (ulonglong)*(uint *)(*param_3 + 0x1c) & *(ulonglong *)(lVar1 + 8)),
        -1 < lVar2)) && (lVar1 = lVar1 + (lVar2 * 3 + 3) * 8, lVar1 != 0)) {
      cVar3 = *(char *)(lVar1 + 8);
    }
  }
  return (int)cVar3;
}



// FUNCTION 1434a8540 FUN_1434a8540 body=235 status=ok
// SIG undefined FUN_1434a8540(void)

void FUN_1434a8540(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined **ppuVar4;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong *local_18;
  undefined1 *local_10;
  
  lVar3 = Scaleform::GFx::AS2::GlobalContext::GetStringManager();
  uVar2 = *(undefined8 *)(lVar3 + 0x4e0);
  if (((ulonglong *)*param_2 == (ulonglong *)0x0) || (*(ulonglong *)*param_2 < 0x10)) {
    FUN_1434a64e0(param_2,param_2);
  }
  ppuVar4 = &PTR_s_attributes_1467cf7f0;
  if (PTR_s_attributes_1467cf7f0 != (undefined *)0x0) {
    local_18 = &local_res18;
    local_10 = local_res10;
    do {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while ((*ppuVar4)[lVar3] != '\0');
      local_res18 = FUN_143360950(uVar2,*ppuVar4,lVar3,0x20000000);
      *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
      local_res10[0] = *(undefined1 *)(ppuVar4 + 1);
      FUN_143492680(param_2,param_2,&local_18,*(undefined4 *)(local_res18 + 0x1c));
      piVar1 = (int *)(local_res18 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      ppuVar4 = ppuVar4 + 2;
    } while (*ppuVar4 != (undefined *)0x0);
  }
  return;
}



// FUNCTION 1434a8640 FUN_1434a8640 body=1448 status=ok
// SIG undefined FUN_1434a8640(void)

undefined8 * FUN_1434a8640(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined1 local_38 [32];
  
  FUN_1434aa3a0();
  local_res8[0] = 6;
  *param_1 = &PTR_LAB_145b14328;
  param_1[4] = &PTR_LAB_145b14370;
  param_1[0xf] = &PTR_LAB_145b14418;
  param_1[0x17] = 0;
  FUN_143422ee0(param_1 + 0xf,param_1,param_2,&PTR_s_appendChild_145b13f40_0x10_145b140a0,local_res8
               );
  local_res8[0] = 2;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"attributes",10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 6;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"childNodes",10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 6;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"firstChild",10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 6;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"lastChild",9);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 6;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"localName",9);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 6;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"namespaceURI",0xc);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 6;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"nextSibling",0xb);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 2;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"nodeName",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 6;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"nodeType",8);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 2;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"nodeValue",9);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 6;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"parentNode",10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 6;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"prefix",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 6;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"previousSibling",0xf);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  return param_1;
}



// FUNCTION 1434a8bf0 FUN_1434a8bf0 body=500 status=ok
// SIG undefined FUN_1434a8bf0(void)

void FUN_1434a8bf0(longlong param_1)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar2;
  RefCountNTSImpl *pRVar3;
  RefCountNTSImpl *pRVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_res10 [2];
  
  cVar5 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1d);
  cVar6 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1c);
  if ((cVar5 == '\0') && (cVar6 == '\0')) {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,"XMLNode",0,0);
    return;
  }
  lVar11 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar11 = 0;
  }
  if (lVar11 != 0) {
    lVar8 = FUN_143414210(param_1);
    lVar1 = *(longlong *)(lVar11 + 0x70);
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x40) == '\x01') {
        if (0 < *(int *)(param_1 + 0x38)) {
          uVar9 = FUN_1434141c0(param_1,0);
          lVar10 = FUN_143412120(uVar9,*(undefined8 *)(param_1 + 0x30));
          if ((lVar10 == 0) ||
             (iVar7 = (**(code **)(*(longlong *)(lVar10 + 0x20) + 0x10))(lVar10 + 0x20),
             iVar7 != 0x1d)) {
            if (lVar8 != 0) {
              local_res10[0] = 0x24000;
              FUN_1432c19d0(lVar8,local_res10,
                            "XMLNode::appendChild - trying to add a child that is not of type XMLNode"
                           );
            }
          }
          else {
            this = *(RefCountNTSImpl **)(lVar10 + 0x70);
            if (this != (RefCountNTSImpl *)0x0) {
              pRVar2 = *(RefCountNTSImpl **)(*(longlong *)(lVar11 + 0x70) + 0x20);
              pRVar4 = pRVar2;
              while (pRVar3 = pRVar2, pRVar3 != (RefCountNTSImpl *)0x0) {
                pRVar4 = pRVar3;
                pRVar2 = *(RefCountNTSImpl **)(pRVar3 + 0x20);
              }
              if (pRVar4 == this) {
                if (lVar8 != 0) {
                  local_res10[0] = 0x24000;
                  FUN_1432c19d0(lVar8,local_res10,
                                "XMLNode::appendChild - trying to add a child that is the root of the current tree"
                               );
                }
              }
              else {
                *(int *)(this + 8) = *(int *)(this + 8) + 1;
                if (*(longlong *)(*(longlong *)(lVar10 + 0x70) + 0x20) != 0) {
                  FUN_143df6140();
                }
                Scaleform::GFx::XML::ElementNode::AppendChild(lVar1,*(undefined8 *)(lVar10 + 0x70));
                FUN_1434aa520(lVar10 + 0x68,lVar11 + 0x68);
                lVar1 = *(longlong *)(lVar10 + 0x70);
                if ((*(char *)(lVar1 + 0x40) == '\x01') &&
                   (*(int *)(*(longlong *)(lVar1 + 0x50) + 0x14) == 0)) {
                  FUN_1434aaf80(*(undefined8 *)(param_1 + 0x30),lVar1,*(undefined8 *)(lVar11 + 0x68)
                               );
                }
                Scaleform::RefCountNTSImpl::Release(this);
              }
            }
          }
        }
      }
      else if (lVar8 != 0) {
        local_res10[0] = 0x24000;
        FUN_1432c19d0(lVar8,local_res10,
                      "XMLNode::appendChild - trying to add a child to a text node");
        return;
      }
    }
  }
  return;
}



// FUNCTION 1434a8df0 FUN_1434a8df0 body=466 status=ok
// SIG undefined FUN_1434a8df0(void)

void FUN_1434a8df0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  RefCountNTSImpl *this;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  cVar3 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1d);
  uVar9 = 0;
  cVar4 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1c);
  if ((cVar3 == '\0') && (cVar4 == '\0')) {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,"XMLNode",0,0);
    return;
  }
  lVar8 = 0;
  lVar10 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar10 = lVar8;
  }
  if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x70) != 0)) {
    uVar9 = uVar9 & 0xffffffffffffff00;
    if (0 < *(int *)(param_1 + 0x38)) {
      uVar6 = FUN_1434141c0(param_1,0);
      bVar5 = FUN_143411fd0(uVar6,*(undefined8 *)(param_1 + 0x30));
      uVar9 = (ulonglong)bVar5;
    }
    plVar1 = *(longlong **)(lVar10 + 0x70);
    if ((char)plVar1[8] == '\x01') {
      this = (RefCountNTSImpl *)(**(code **)(*plVar1 + 8))();
      lVar10 = *(longlong *)(param_1 + 0x30);
      plVar1 = *(longlong **)(*(longlong *)(lVar10 + 0xe8) + 0x30);
      lVar7 = (**(code **)(*plVar1 + 0x50))(plVar1,0x78);
      if (lVar7 != 0) {
        lVar8 = FUN_1434a7b90(lVar7,lVar10);
      }
      Scaleform::GFx::AS2::SetupShadow(lVar10,this,lVar8);
      uVar6 = FUN_143df5430(*(undefined8 *)(this + 0x10),this);
      if (*(RefCountNTSImpl **)(lVar8 + 0x68) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar8 + 0x68));
      }
      *(undefined8 *)(lVar8 + 0x68) = uVar6;
    }
    else {
      this = (RefCountNTSImpl *)(**(code **)(*plVar1 + 8))(plVar1,uVar9);
      lVar10 = *(longlong *)(param_1 + 0x30);
      plVar2 = *(longlong **)(*(longlong *)(lVar10 + 0xe8) + 0x30);
      lVar7 = (**(code **)(*plVar2 + 0x50))(plVar2,0x78);
      if (lVar7 != 0) {
        lVar8 = FUN_1434a7b90(lVar7,lVar10);
      }
      Scaleform::GFx::AS2::SetupShadow(lVar10,this,lVar8);
      uVar6 = FUN_143df5430(*(undefined8 *)(this + 0x10),this);
      if (*(RefCountNTSImpl **)(lVar8 + 0x68) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar8 + 0x68));
      }
      *(undefined8 *)(lVar8 + 0x68) = uVar6;
      this[0x40] = *(RefCountNTSImpl *)(plVar1 + 8);
    }
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar8);
    if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
      FUN_1434a2b80(lVar8);
    }
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 1434a8fd0 FUN_1434a8fd0 body=660 status=ok
// SIG undefined FUN_1434a8fd0(void)

void FUN_1434a8fd0(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong local_res10;
  longlong *local_res18;
  longlong local_res20;
  char local_48 [32];
  
  cVar6 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1d);
  cVar7 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1c);
  if ((cVar6 == '\0') && (cVar7 == '\0')) {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,"XMLNode",0,0);
    return;
  }
  lVar10 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar10 = 0;
  }
  if (lVar10 != 0) {
    puVar2 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar2);
    *puVar2 = 1;
    lVar8 = FUN_143414210(param_1);
    lVar3 = *(longlong *)(lVar10 + 0x70);
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x40) == '\x01') {
        if (0 < *(int *)(param_1 + 0x38)) {
          uVar4 = *(undefined8 *)(param_1 + 0x30);
          uVar9 = FUN_1434141c0(param_1,0);
          FUN_143411540(uVar9,&local_res18,uVar4,0xffffffff,0);
          lVar8 = Scaleform::GFx::AS2::GlobalContext::GetStringManager
                            (*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xe8));
          local_res10 = FUN_143360a90(*(undefined8 *)(lVar8 + 0x4e0),"xmlns",5);
          *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
          if ((int)local_res18[4] != 0) {
            FUN_143360130(&local_res10,&DAT_145b138d8);
            lVar8 = -1;
            do {
              lVar8 = lVar8 + 1;
            } while (*(char *)(*local_res18 + lVar8) != '\0');
            FUN_143360130(&local_res10);
          }
          local_48[0] = '\0';
          lVar8 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x10);
          (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x20))
                    (lVar8 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,local_48);
          if ((local_48[0] == '\0') || (local_48[0] == '\n')) {
            for (lVar3 = *(longlong *)(lVar3 + 0x20); lVar3 != 0;
                lVar3 = *(longlong *)(lVar3 + 0x20)) {
              if (((*(longlong *)(lVar3 + 0x38) == 0) &&
                  (FUN_1434aac90(&local_res20,*(undefined8 *)(param_1 + 0x30),lVar3,
                                 *(undefined8 *)(lVar10 + 0x68)), local_res20 != 0)) &&
                 ((*(uint *)(local_res20 + 0x18) & 0x3ffffff) != 0)) {
                *(uint *)(local_res20 + 0x18) = *(uint *)(local_res20 + 0x18) - 1;
                FUN_1434a2b80();
              }
              lVar8 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x10);
              (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x20))
                        (lVar8 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res10,local_48);
              if ((local_48[0] != '\0') && (local_48[0] != '\n')) goto LAB_1434a91be;
            }
          }
          else {
LAB_1434a91be:
            FUN_143411540(local_48,&local_res20,*(undefined8 *)(param_1 + 0x30),0xffffffff,0);
            pbVar5 = *(byte **)(param_1 + 8);
            if (4 < *pbVar5) {
              FUN_143411150(pbVar5);
            }
            *pbVar5 = 5;
            *(longlong *)(pbVar5 + 8) = local_res20;
            *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
            piVar1 = (int *)(local_res20 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          FUN_143411120(local_48);
          piVar1 = (int *)(local_res10 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          local_res18 = local_res18 + 3;
          *(int *)local_res18 = (int)*local_res18 + -1;
          if ((int)*local_res18 == 0) {
            FUN_14335f920();
          }
        }
      }
      else if (lVar8 != 0) {
        local_res10 = CONCAT44(local_res10._4_4_,0x24000);
        FUN_1432c19d0(lVar8,&local_res10,
                      "XMLNodeProto::GetNamespaceForPrefix - only element nodes support this method."
                     );
      }
    }
  }
  return;
}



// FUNCTION 1434a9270 FUN_1434a9270 body=907 status=ok
// SIG undefined FUN_1434a9270(void)

void FUN_1434a9270(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  char cVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  char *pcVar12;
  longlong lVar13;
  char *pcVar14;
  undefined4 local_res10;
  undefined4 uStackX_14;
  longlong local_res18;
  longlong local_res20;
  ulonglong in_stack_ffffffffffffff78;
  ulonglong uVar15;
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  char *local_60;
  char local_58 [32];
  
  cVar8 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1d);
  cVar9 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1c);
  if ((cVar8 == '\0') && (cVar9 == '\0')) {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,"XMLNode",0,0);
    return;
  }
  lVar13 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar13 = 0;
  }
  if (lVar13 != 0) {
    puVar3 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar3);
    *puVar3 = 1;
    lVar4 = *(longlong *)(param_1 + 0x30);
    lVar10 = FUN_143414210(param_1);
    lVar5 = *(longlong *)(lVar13 + 0x70);
    if (lVar5 != 0) {
      if (*(char *)(lVar5 + 0x40) == '\x01') {
        if (0 < *(int *)(param_1 + 0x38)) {
          uVar6 = *(undefined8 *)(param_1 + 0x30);
          uVar11 = FUN_1434141c0(param_1,0);
          FUN_143411540(uVar11,&local_res18,uVar6,0xffffffff,
                        in_stack_ffffffffffffff78 & 0xffffffffffffff00);
          local_58[0] = '\0';
          local_78 = &PTR_FUN_145b14850;
          local_70 = *(undefined8 *)(param_1 + 0x30);
          local_68 = &local_res18;
          uVar15 = 0;
          local_60 = local_58;
          lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x10);
          (**(code **)(*(longlong *)(lVar10 + 0x20) + 0x40))
                    (lVar10 + 0x20,lVar4 + 0xe8,&local_78,0,0);
          if ((local_58[0] != '\0') && (local_58[0] != '\n')) {
            uVar15 = uVar15 & 0xffffffffffffff00;
            FUN_143411540(local_58,&local_res10,*(undefined8 *)(param_1 + 0x30),0xffffffff,uVar15);
            pbVar7 = *(byte **)(param_1 + 8);
            if (4 < *pbVar7) {
              FUN_143411150(pbVar7);
            }
            *pbVar7 = 5;
            *(ulonglong *)(pbVar7 + 8) = CONCAT44(uStackX_14,local_res10);
            piVar1 = (int *)(CONCAT44(uStackX_14,local_res10) + 0x18);
            *piVar1 = *piVar1 + 1;
            piVar1 = (int *)(CONCAT44(uStackX_14,local_res10) + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          cVar8 = **(char **)(param_1 + 8);
          for (lVar5 = *(longlong *)(lVar5 + 0x20); (cVar8 == '\x01' && (lVar5 != 0));
              lVar5 = *(longlong *)(lVar5 + 0x20)) {
            if ((*(longlong *)(lVar5 + 0x38) == 0) &&
               ((FUN_1434aac90(&local_res20,*(undefined8 *)(param_1 + 0x30),lVar5,
                               *(undefined8 *)(lVar13 + 0x68)), local_res20 != 0 &&
                ((*(uint *)(local_res20 + 0x18) & 0x3ffffff) != 0)))) {
              *(uint *)(local_res20 + 0x18) = *(uint *)(local_res20 + 0x18) - 1;
              FUN_1434a2b80();
            }
            uVar15 = 0;
            lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x10);
            (**(code **)(*(longlong *)(lVar10 + 0x20) + 0x40))
                      (lVar10 + 0x20,lVar4 + 0xe8,&local_78,0,0);
            if ((local_58[0] != '\0') && (local_58[0] != '\n')) {
              uVar15 = uVar15 & 0xffffffffffffff00;
              FUN_143411540(local_58,&local_res10,*(undefined8 *)(param_1 + 0x30),0xffffffff,uVar15)
              ;
              pbVar7 = *(byte **)(param_1 + 8);
              if (4 < *pbVar7) {
                FUN_143411150(pbVar7);
              }
              *pbVar7 = 5;
              *(ulonglong *)(pbVar7 + 8) = CONCAT44(uStackX_14,local_res10);
              piVar1 = (int *)(CONCAT44(uStackX_14,local_res10) + 0x18);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(CONCAT44(uStackX_14,local_res10) + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
            }
            cVar8 = **(char **)(param_1 + 8);
          }
          if (**(char **)(param_1 + 8) != '\x01') {
            FUN_143411540(*(char **)(param_1 + 8),&local_res10,*(undefined8 *)(param_1 + 0x30),
                          0xffffffff,uVar15 & 0xffffffffffffff00);
            pcVar14 = *(char **)CONCAT44(uStackX_14,local_res10);
            pcVar12 = strchr(pcVar14,0x3a);
            iVar2 = *(int *)(CONCAT44(uStackX_14,local_res10) + 0x20);
            if (pcVar12 == (char *)0x0) {
              lVar13 = Scaleform::GFx::AS2::GlobalContext::GetStringManager
                                 (*(undefined8 *)(lVar4 + 0xe8));
              iVar2 = iVar2 + -5;
              pcVar14 = pcVar14 + 5;
            }
            else {
              lVar13 = Scaleform::GFx::AS2::GlobalContext::GetStringManager
                                 (*(undefined8 *)(lVar4 + 0xe8));
              iVar2 = iVar2 + -6;
              pcVar14 = pcVar14 + 6;
            }
            lVar13 = FUN_143360a90(*(undefined8 *)(lVar13 + 0x4e0),pcVar14,iVar2);
            *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
            pbVar7 = *(byte **)(param_1 + 8);
            if (4 < *pbVar7) {
              FUN_143411150(pbVar7);
            }
            *pbVar7 = 5;
            *(longlong *)(pbVar7 + 8) = lVar13;
            iVar2 = *(int *)(lVar13 + 0x18);
            *(int *)(lVar13 + 0x18) = iVar2;
            if (iVar2 == 0) {
              FUN_14335f920(lVar13);
            }
            piVar1 = (int *)(CONCAT44(uStackX_14,local_res10) + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          local_78 = &PTR_FUN_145af1858;
          FUN_143411120(local_58);
          piVar1 = (int *)(local_res18 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
      }
      else if (lVar10 != 0) {
        local_res10 = 0x24000;
        FUN_1432c19d0(lVar10,&local_res10,
                      "XMLNodeProto::GetNamespaceForPrefix - only element nodes support this method."
                     );
      }
    }
  }
  return;
}



// FUNCTION 1434a9610 FUN_1434a9610 body=182 status=ok
// SIG undefined FUN_1434a9610(void)

void FUN_1434a9610(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  cVar2 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1d);
  cVar3 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1c);
  if ((cVar2 == '\0') && (cVar3 == '\0')) {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,"XMLNode",0,0);
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    puVar1 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar1);
    *puVar1 = 2;
    puVar1[8] = 0;
    if ((*(longlong *)(lVar5 + 0x70) != 0) &&
       (*(char *)(*(longlong *)(lVar5 + 0x70) + 0x40) == '\x01')) {
      uVar4 = FUN_143df6200();
      puVar1 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar1);
      *puVar1 = 2;
      puVar1[8] = uVar4;
    }
  }
  return;
}



// FUNCTION 1434a96d0 FUN_1434a96d0 body=415 status=ok
// SIG undefined FUN_1434a96d0(void)

void FUN_1434a96d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  RefCountNTSImpl *this;
  
  cVar3 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1d);
  cVar4 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1c);
  if ((cVar3 == '\0') && (cVar4 == '\0')) {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,"XMLNode",0,0);
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar9 = 0;
  }
  if ((((lVar9 != 0) && (lVar1 = *(longlong *)(lVar9 + 0x70), lVar1 != 0)) &&
      (*(char *)(lVar1 + 0x40) == '\x01')) && (1 < *(int *)(param_1 + 0x38))) {
    uVar6 = FUN_1434141c0(param_1,0);
    lVar7 = FUN_143412120(uVar6,*(undefined8 *)(param_1 + 0x30));
    uVar6 = FUN_1434141c0(param_1,1);
    lVar8 = FUN_143412120(uVar6,*(undefined8 *)(param_1 + 0x30));
    if ((lVar7 != 0) &&
       (iVar5 = (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x10))(lVar7 + 0x20), iVar5 == 0x1d)) {
      if ((((lVar8 == 0) ||
           ((iVar5 = (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x10))(lVar8 + 0x20), iVar5 != 0x1d
            || (*(longlong *)(lVar8 + 0x70) == 0)))) ||
          (lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x70) + 0x20), lVar2 == 0)) ||
         (lVar2 != lVar1)) {
        this = *(RefCountNTSImpl **)(lVar7 + 0x70);
        if (this == (RefCountNTSImpl *)0x0) {
          return;
        }
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        if (*(longlong *)(*(longlong *)(lVar7 + 0x70) + 0x20) != 0) {
          FUN_143df6140();
        }
        Scaleform::GFx::XML::ElementNode::AppendChild(lVar1,*(undefined8 *)(lVar7 + 0x70));
      }
      else {
        this = *(RefCountNTSImpl **)(lVar7 + 0x70);
        if (this == (RefCountNTSImpl *)0x0) {
          return;
        }
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        if (*(longlong *)(*(longlong *)(lVar7 + 0x70) + 0x20) != 0) {
          FUN_143df6140();
        }
        FUN_143df60a0(lVar1,*(undefined8 *)(lVar7 + 0x70),*(undefined8 *)(lVar8 + 0x70));
      }
      FUN_1434aa520(lVar7 + 0x68,lVar9 + 0x68);
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 1434a9880 FUN_1434a9880 body=162 status=ok
// SIG undefined FUN_1434a9880(void)

void FUN_1434a9880(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  cVar2 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1d);
  cVar3 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1c);
  if ((cVar2 == '\0') && (cVar3 == '\0')) {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,"XMLNode",0,0);
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar5 = 0;
  }
  if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x70) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x70) + 0x20), lVar1 != 0)) {
    uVar4 = FUN_143df5430(*(undefined8 *)(lVar1 + 0x10));
    FUN_1434aa4f0(lVar5 + 0x68,uVar4);
    FUN_143df6140(lVar1,*(undefined8 *)(lVar5 + 0x70));
  }
  return;
}



// FUNCTION 1434a9930 FUN_1434a9930 body=332 status=ok
// SIG undefined FUN_1434a9930(void)

void FUN_1434a9930(longlong param_1)

{
  int iVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *local_38;
  undefined8 local_30;
  
  cVar3 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1d);
  cVar4 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1c);
  if ((cVar3 == '\0') && (cVar4 == '\0')) {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,"XMLNode",0,0);
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    FUN_1432c5960(&local_38,DAT_146b62f28);
    lVar5 = *(longlong *)(lVar5 + 0x70);
    if (lVar5 == 0) {
      puVar6 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar6);
      *puVar6 = 0;
    }
    else {
      if (*(char *)(lVar5 + 0x40) == '\x01') {
        FUN_1434aa890(*(undefined8 *)(param_1 + 0x30),lVar5,&local_38);
      }
      else {
        Scaleform::StringBuffer::AppendString
                  (&local_38,**(undefined8 **)(lVar5 + 0x18),0xffffffffffffffff);
      }
      puVar6 = &DAT_145af3922;
      if (local_38 != (undefined1 *)0x0) {
        puVar6 = local_38;
      }
      lVar5 = Scaleform::GFx::AS2::GlobalContext::GetStringManager
                        (*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xe8));
      lVar5 = FUN_143360a90(*(undefined8 *)(lVar5 + 0x4e0),puVar6,local_30);
      *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
      pbVar2 = *(byte **)(param_1 + 8);
      if (4 < *pbVar2) {
        FUN_143411150(pbVar2);
      }
      *pbVar2 = 5;
      *(longlong *)(pbVar2 + 8) = lVar5;
      iVar1 = *(int *)(lVar5 + 0x18);
      *(int *)(lVar5 + 0x18) = iVar1;
      if (iVar1 == 0) {
        FUN_14335f920(lVar5);
      }
    }
    Scaleform::StringBuffer::~StringBuffer(&local_38);
  }
  return;
}



// FUNCTION 1434a9a90 FUN_1434a9a90 body=51 status=ok
// SIG undefined FUN_1434a9a90(void)

undefined8 * FUN_1434a9a90(undefined8 *param_1,undefined8 param_2)

{
  FUN_143416630(param_1,param_2,FUN_1434a9ad0);
  *param_1 = &PTR_LAB_145b14420;
  param_1[4] = &PTR_LAB_145b144a8;
  return param_1;
}



// FUNCTION 1434a9ad0 FUN_1434a9ad0 body=1236 status=ok
// SIG undefined FUN_1434a9ad0(void)

void FUN_1434a9ad0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar7;
  char *pcVar8;
  RefCountNTSImpl *pRVar9;
  double dVar10;
  undefined4 local_res8 [2];
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  char local_88 [32];
  char local_68 [48];
  
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     ((iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 != 0x1d &&
      (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), iVar2 != 0x1c)))) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,0x78);
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar3 = FUN_1434a7b90(lVar4,*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = 0;
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
  }
  pRVar9 = (RefCountNTSImpl *)0x0;
  lVar4 = FUN_143414210(param_1);
  local_68[0] = '\0';
  local_88[0] = '\0';
  if (*(int *)(param_1 + 0x38) < 1) {
LAB_1434a9f24:
    if (lVar4 == 0) goto LAB_1434a9f43;
    pcVar8 = "XMLNodeCtorFunction::GlobalCtor - node type not specified";
  }
  else {
    uVar5 = FUN_1434141c0(param_1,0);
    FUN_143411240(local_68,uVar5);
    if (1 < *(int *)(param_1 + 0x38)) {
      uVar5 = FUN_1434141c0(param_1,1);
      FUN_143411240(local_88,uVar5);
    }
    if ((local_68[0] == '\0') || (local_68[0] == '\n')) goto LAB_1434a9f24;
    dVar10 = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
    if ((local_88[0] != '\0') && (local_88[0] != '\n')) {
      lVar6 = Scaleform::GFx::AS2::Environment::GetMovieImpl(*(undefined8 *)(param_1 + 0x30));
      lVar4 = *(longlong *)(lVar6 + 0x260);
      if (lVar4 == 0) {
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
        lVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,0x78);
        this = pRVar9;
        if (lVar4 != 0) {
          this = (RefCountNTSImpl *)FUN_143df5110(lVar4,lVar6);
        }
        pRVar7 = this + 0x10;
        if (this == (RefCountNTSImpl *)0x0) {
          pRVar7 = pRVar9;
        }
        *(RefCountNTSImpl **)(lVar6 + 0x260) = pRVar7;
      }
      else {
        this = (RefCountNTSImpl *)(lVar4 + -0x10);
        if (lVar4 == 0) {
          this = pRVar9;
        }
        if (this != (RefCountNTSImpl *)0x0) {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
        }
      }
      FUN_143df4940(local_res8,this + 0x50);
      FUN_143df4940(&local_res18,this + 0x50);
      lVar4 = -1;
      FUN_143411540(local_88,&local_res10,*(undefined8 *)(param_1 + 0x30),0xffffffff,0);
      if (dVar10 == 1.0) {
        pcVar8 = strchr((char *)*local_res10,0x3a);
        if (pcVar8 == (char *)0x0) {
          uVar5 = FUN_143df4c20(this + 0x20,*local_res10,(int)local_res10[4]);
          FUN_143df4940(&local_res20,uVar5);
          FUN_143df49b0(local_res8,local_res20);
          FUN_143df4970(&local_res20);
        }
        else {
          uVar5 = FUN_143df4c20(this + 0x20,*local_res10,(longlong)pcVar8 - *local_res10);
          FUN_143df4940(&local_res20,uVar5);
          FUN_143df49b0(&local_res18,local_res20);
          FUN_143df4970(&local_res20);
          do {
            lVar4 = lVar4 + 1;
          } while (pcVar8[lVar4] != '\0');
          uVar5 = FUN_143df4c20(this + 0x20,pcVar8 + 1,lVar4);
          FUN_143df4940(&local_res20,uVar5);
          FUN_143df49b0(local_res8,local_res20);
          FUN_143df4970(&local_res20);
        }
        uVar5 = Scaleform::GFx::XML::DOMString::DOMString(&local_res20,local_res8);
        pRVar9 = (RefCountNTSImpl *)FUN_143df5210(this,uVar5);
        *(RefCountNTSImpl **)(lVar3 + 0x70) = pRVar9;
        uVar5 = FUN_143df5430(this,pRVar9);
        if (*(RefCountNTSImpl **)(lVar3 + 0x68) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar3 + 0x68));
        }
        *(undefined8 *)(lVar3 + 0x68) = uVar5;
        FUN_143df49b0(*(longlong *)(lVar3 + 0x70) + 0x48,local_res18);
      }
      else if (dVar10 == 3.0) {
        uVar5 = FUN_143df4c20(this + 0x20,*local_res10,(int)local_res10[4]);
        FUN_143df4940(&local_res20,uVar5);
        FUN_143df49b0(local_res8,local_res20);
        FUN_143df4970(&local_res20);
        uVar5 = Scaleform::GFx::XML::DOMString::DOMString(&local_res20,local_res8);
        pRVar9 = (RefCountNTSImpl *)FUN_143df5280(this,uVar5);
        *(RefCountNTSImpl **)(lVar3 + 0x70) = pRVar9;
        uVar5 = FUN_143df5430(this,pRVar9);
        if (*(RefCountNTSImpl **)(lVar3 + 0x68) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar3 + 0x68));
        }
        *(undefined8 *)(lVar3 + 0x68) = uVar5;
      }
      else {
        uVar5 = Scaleform::GFx::XML::DOMString::DOMString(&local_res20,local_res8);
        pRVar9 = (RefCountNTSImpl *)FUN_143df5280(this,uVar5);
        *(RefCountNTSImpl **)(lVar3 + 0x70) = pRVar9;
        uVar5 = FUN_143df5430(this,pRVar9);
        if (*(RefCountNTSImpl **)(lVar3 + 0x68) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar3 + 0x68));
        }
        *(undefined8 *)(lVar3 + 0x68) = uVar5;
        *(char *)(*(longlong *)(lVar3 + 0x70) + 0x40) = (char)(longlong)dVar10;
      }
      if (pRVar9 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRVar9);
      }
      Scaleform::GFx::AS2::SetupShadow
                (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar3 + 0x70),lVar3);
      local_res10 = local_res10 + 3;
      *(int *)local_res10 = (int)*local_res10 + -1;
      if ((int)*local_res10 == 0) {
        FUN_14335f920();
      }
      FUN_143df4970(&local_res18);
      FUN_143df4970(local_res8);
      if (this != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this);
      }
      goto LAB_1434a9f43;
    }
    if (lVar4 == 0) goto LAB_1434a9f43;
    pcVar8 = "XMLNodeCtorFunction::GlobalCtor - malformed XMLNode object";
  }
  local_res8[0] = 0x24000;
  FUN_1432c19d0(lVar4,local_res8,pcVar8);
LAB_1434a9f43:
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar3);
  FUN_143411120(local_88);
  FUN_143411120(local_68);
  if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
    FUN_1434a2b80(lVar3);
  }
  return;
}



// FUNCTION 1434a9fb0 FUN_1434a9fb0 body=60 status=ok
// SIG undefined FUN_1434a9fb0(void)

void FUN_1434a9fb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x78);
  if (lVar2 != 0) {
    FUN_1434a7b90(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 1434aa000 FUN_1434aa000 body=390 status=ok
// SIG undefined FUN_1434aa000(void)

undefined8 * FUN_1434aa000(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *local_res8;
  longlong local_48;
  undefined1 local_40;
  undefined1 local_38 [32];
  
  local_40 = 8;
  local_48 = param_2;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar5 = (undefined8 *)0x0;
  puVar7 = puVar5;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_143416630(puVar2,&local_48,FUN_1434a9ad0);
    *puVar2 = &PTR_LAB_145b14420;
    puVar2[4] = &PTR_LAB_145b144a8;
    puVar7 = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = puVar7;
  param_1[1] = 0;
  lVar3 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                    (*(longlong **)(param_2 + 0x30),0xc0,0);
  if (lVar3 != 0) {
    uVar4 = FUN_14341b750(param_2,1);
    puVar5 = (undefined8 *)FUN_1434a8640(lVar3,&local_48,uVar4,param_1);
    if (puVar5 != (undefined8 *)0x0) {
      *(uint *)(puVar5 + 3) = *(int *)(puVar5 + 3) + 1U & 0x8fffffff;
    }
  }
  local_res8 = puVar5;
  FUN_1434a4b90(param_2,0x18,&local_res8);
  lVar3 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  lVar6 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(param_2);
  lVar1 = *(longlong *)(lVar3 + 0x20);
  uVar4 = Scaleform::GFx::AS2::Value::Value(local_38,param_1);
  (**(code **)(lVar1 + 0x50))(lVar3 + 0x20,&local_48,lVar6 + 0xc0,uVar4,&local_res8);
  FUN_143411120(local_38);
  FUN_1434a8540(param_2,puVar5 + 0x17);
  if ((puVar5 != (undefined8 *)0x0) && ((*(uint *)(puVar5 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar5 + 3) = *(uint *)(puVar5 + 3) - 1;
    FUN_1434a2b80(puVar5);
  }
  return param_1;
}



// FUNCTION 1434aa190 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ReleaseFunctor> body=265 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ReleaseFunctor>(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::XmlNodeObject,Scaleform::GFx::AS2::Environment>::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ReleaseFunctor>
               (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_14348e050();
  FUN_14348ddd0(param_1 + 0x80,param_2);
  FUN_14348ddd0(param_1 + 0x98,param_2);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 8);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xb0) + uVar3 * 8);
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
          if ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) == 0) {
            FUN_1434a2e10(param_2,lVar2);
            *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x4000000;
            if ((*(uint *)(lVar2 + 0x18) >> 0x1b & 1) == 0) {
              *(undefined8 *)(lVar2 + 0x10) =
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
              *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
              *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
              *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
              *(longlong *)(param_2 + 0x60) = lVar2;
              *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x8000000;
            }
          }
          else {
            FUN_1434a2b80(lVar2);
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 1434aa2a0 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ScanInUseFunctor> body=241 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ScanInUseFunctor>(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::XmlNodeObject,Scaleform::GFx::AS2::Environment>::
     ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ScanInUseFunctor>
               (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  FUN_14348f370();
  FUN_14348f040(param_1 + 0x80,param_2);
  FUN_14348f040(param_1 + 0x98,param_2);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 8);
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xb0) + uVar4 * 8);
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
          if (((*(uint *)(lVar2 + 0x18) & 0x70000000) != 0) &&
             (uVar3 = *(uint *)(lVar2 + 0x18) & 0x8fffffff, *(uint *)(lVar2 + 0x18) = uVar3,
             (uVar3 >> 0x1b & 1) != 0)) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
            *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
            *(undefined8 *)(lVar2 + 0x10) =
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
            *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
            *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
            *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 1434aa3a0 FUN_1434aa3a0 body=193 status=ok
// SIG undefined FUN_1434aa3a0(void)

undefined8 *
FUN_1434aa3a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b14140;
  param_1[4] = &PTR_LAB_145b14188;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_LAB_145b14230;
  param_1[4] = &PTR_LAB_145b14278;
  param_1[0xf] = &PTR_LAB_145b14320;
  FUN_1434230f0(param_1 + 0xf,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 1434aa470 FUN_1434aa470 body=123 status=ok
// SIG undefined FUN_1434aa470(void)

void FUN_1434aa470(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b14230;
  param_1[4] = &PTR_LAB_145b14278;
  param_1[0xf] = &PTR_LAB_145b14320;
  FUN_143422e80();
  *param_1 = &PTR_LAB_145b14140;
  param_1[4] = &PTR_LAB_145b14188;
  if ((param_1[0xe] != 0) && (lVar1 = *(longlong *)(param_1[0xe] + 0x38), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  if ((RefCountNTSImpl *)param_1[0xd] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 1434aa4f0 FUN_1434aa4f0 body=46 status=ok
// SIG undefined FUN_1434aa4f0(void)

undefined8 * FUN_1434aa4f0(undefined8 *param_1,undefined8 param_2)

{
  if ((RefCountNTSImpl *)*param_1 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*param_1);
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1434aa520 FUN_1434aa520 body=60 status=ok
// SIG undefined FUN_1434aa520(void)

longlong * FUN_1434aa520(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 8);
    *piVar1 = *piVar1 + 1;
  }
  if ((RefCountNTSImpl *)*param_1 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*param_1);
  }
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 1434aa560 FUN_1434aa560 body=61 status=ok
// SIG undefined FUN_1434aa560(void)

longlong * FUN_1434aa560(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1434aa5f0 FUN_1434aa5f0 body=89 status=ok
// SIG undefined FUN_1434aa5f0(void)

undefined8 FUN_1434aa5f0(undefined8 param_1,ulonglong param_2)

{
  FUN_1434aa470();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1434aa650 FUN_1434aa650 body=73 status=ok
// SIG undefined FUN_1434aa650(void)

undefined8 * FUN_1434aa650(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b14130;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 1434aa6a0 FUN_1434aa6a0 body=123 status=ok
// SIG undefined FUN_1434aa6a0(void)

undefined8 * FUN_1434aa6a0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  *param_1 = &PTR_FUN_145b14130;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1434aa720 FUN_1434aa720 body=89 status=ok
// SIG undefined FUN_1434aa720(void)

undefined8 FUN_1434aa720(undefined8 param_1,ulonglong param_2)

{
  Scaleform::GFx::AS2::CFunctionObject::~CFunctionObject();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1434aa780 FUN_1434aa780 body=153 status=ok
// SIG undefined FUN_1434aa780(void)

undefined8 * FUN_1434aa780(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b14140;
  param_1[4] = &PTR_LAB_145b14188;
  if ((param_1[0xe] != 0) && (lVar1 = *(longlong *)(param_1[0xe] + 0x38), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  if ((RefCountNTSImpl *)param_1[0xd] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1434aa820 FUN_1434aa820 body=104 status=ok
// SIG undefined FUN_1434aa820(void)

longlong FUN_1434aa820(longlong param_1,ulonglong param_2)

{
  FUN_1432ef9e0(param_1 + 0xb8);
  FUN_1434aa470(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1434aa890 FUN_1434aa890 body=1010 status=ok
// SIG undefined FUN_1434aa890(void)

void FUN_1434aa890(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined8 *local_res10;
  ulonglong in_stack_ffffffffffffffa8;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_28 [32];
  
  if (*(char *)(param_2 + 0x40) == '\x01') {
    lVar2 = *(longlong *)(param_2 + 0x38);
    if (((lVar2 == 0) || (lVar6 = *(longlong *)(lVar2 + 8), lVar6 == 0)) ||
       (iVar5 = (**(code **)(*(longlong *)(lVar6 + 0x20) + 0x10))(lVar6 + 0x20), iVar5 != 0x1c)) {
      Scaleform::StringBuffer::AppendString(param_3,&DAT_145b1488c,0xffffffffffffffff);
      if (*(int *)((longlong)*(undefined8 **)(param_2 + 0x48) + 0x14) != 0) {
        Scaleform::StringBuffer::AppendString
                  (param_3,**(undefined8 **)(param_2 + 0x48),0xffffffffffffffff);
        Scaleform::StringBuffer::AppendString(param_3,&DAT_145b138d8,0xffffffffffffffff);
      }
      Scaleform::StringBuffer::AppendString
                (param_3,**(undefined8 **)(param_2 + 0x18),0xffffffffffffffff);
      if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x10) == 0)) {
        for (puVar3 = *(undefined8 **)(param_2 + 0x58); puVar3 != (undefined8 *)0x0;
            puVar3 = (undefined8 *)puVar3[2]) {
          Scaleform::StringBuffer::AppendString(param_3,&DAT_145af3920,0xffffffffffffffff);
          Scaleform::StringBuffer::AppendString(param_3,*(undefined8 *)*puVar3);
          Scaleform::StringBuffer::AppendString(param_3,&DAT_145b14870);
          Scaleform::StringBuffer::AppendString(param_3,*(undefined8 *)puVar3[1]);
          Scaleform::StringBuffer::AppendString(param_3,&DAT_145afa020);
        }
      }
      else {
        plVar7 = (longlong *)(*(longlong *)(lVar2 + 0x10) + 0x20);
        local_48 = &PTR_FUN_145b14860;
        local_40 = param_1;
        local_38 = param_3;
        (**(code **)(*plVar7 + 0x40))(plVar7,param_1 + 0xe8,&local_48,0,0);
      }
      cVar4 = FUN_143df6200(param_2);
      puVar8 = &DAT_145b069a8;
      if (cVar4 == '\0') {
        puVar8 = &DAT_145b14890;
      }
      Scaleform::StringBuffer::AppendString(param_3,puVar8,0xffffffffffffffff);
      for (lVar2 = *(longlong *)(param_2 + 0x68); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        FUN_1434aa890(param_1,lVar2,param_3);
      }
      cVar4 = FUN_143df6200(param_2);
      if (cVar4 != '\0') {
        Scaleform::StringBuffer::AppendString(param_3,&DAT_145b069d8,0xffffffffffffffff);
        if (*(int *)((longlong)*(undefined8 **)(param_2 + 0x48) + 0x14) != 0) {
          Scaleform::StringBuffer::AppendString
                    (param_3,**(undefined8 **)(param_2 + 0x48),0xffffffffffffffff);
          Scaleform::StringBuffer::AppendString(param_3,&DAT_145b138d8,0xffffffffffffffff);
        }
        Scaleform::StringBuffer::AppendString
                  (param_3,**(undefined8 **)(param_2 + 0x18),0xffffffffffffffff);
        Scaleform::StringBuffer::AppendString(param_3,&DAT_145b069a8,0xffffffffffffffff);
      }
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 8);
      local_48 = (undefined **)((ulonglong)local_48 & 0xffffffffffffff00);
      lVar6 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*(undefined8 *)(param_1 + 0xe8));
      local_res10 = (undefined8 *)FUN_143360950(*(undefined8 *)(lVar6 + 0x4e0),"xmlDecl",7);
      *(int *)(local_res10 + 3) = *(int *)(local_res10 + 3) + 1;
      (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x20))(lVar2 + 0x20,param_1,&local_res10,&local_48)
      ;
      piVar1 = (int *)(local_res10 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (((char)local_48 != '\0') && ((char)local_48 != '\n')) {
        FUN_143411540(&local_48,&local_res10,param_1,0xffffffff,
                      in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
        Scaleform::StringBuffer::AppendString(param_3,*local_res10,0xffffffffffffffff);
        piVar1 = (int *)(local_res10 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        local_28[0] = 0;
        lVar6 = Scaleform::GFx::AS2::GlobalContext::GetStringManager
                          (*(undefined8 *)(param_1 + 0xe8));
        local_res10 = (undefined8 *)FUN_143360950(*(undefined8 *)(lVar6 + 0x4e0),"ignoreWhite",0xb);
        *(int *)(local_res10 + 3) = *(int *)(local_res10 + 3) + 1;
        (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x20))
                  (lVar2 + 0x20,param_1,&local_res10,local_28);
        piVar1 = (int *)(local_res10 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        cVar4 = FUN_143411fd0(local_28,param_1);
        if (cVar4 == '\0') {
          Scaleform::StringBuffer::AppendString(param_3,&DAT_145af0af0,0xffffffffffffffff);
        }
        FUN_143411120(local_28);
      }
      for (lVar2 = *(longlong *)(param_2 + 0x68); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        FUN_1434aa890(param_1,lVar2,param_3);
      }
      FUN_143411120(&local_48);
    }
    return;
  }
  Scaleform::StringBuffer::AppendString
            (param_3,**(undefined8 **)(param_2 + 0x18),0xffffffffffffffff);
  return;
}



// FUNCTION 1434aac90 FUN_1434aac90 body=159 status=ok
// SIG undefined FUN_1434aac90(void)

longlong * FUN_1434aac90(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  RefCountNTSImpl *this;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x78);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1434a7b90(lVar2,param_2);
  }
  *param_1 = lVar3;
  Scaleform::GFx::AS2::SetupShadow(param_2,param_3,lVar3);
  lVar3 = *param_1;
  if (param_4 == 0) {
    param_4 = FUN_143df5430(*(undefined8 *)(param_3 + 0x10),param_3);
  }
  else {
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
  }
  this = *(RefCountNTSImpl **)(lVar3 + 0x68);
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  *(longlong *)(lVar3 + 0x68) = param_4;
  return param_1;
}



// FUNCTION 1434aad60 Finalize_GC body=118 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::XmlNodeObject,Scaleform::GFx::AS2::Environment>::Finalize_GC
               (longlong param_1)

{
  longlong lVar1;
  
  if (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xb0));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xb0));
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x38), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x68) != (RefCountNTSImpl *)0x0) {
    RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_143416210(param_1);
  return;
}



// FUNCTION 1434aade0 Finalize_GC body=70 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::XmlNodeObject::Finalize_GC(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x38), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x68) != (RefCountNTSImpl *)0x0) {
    RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_143416210(param_1);
  return;
}



// FUNCTION 1434aae30 FUN_1434aae30 body=34 status=ok
// SIG undefined FUN_1434aae30(void)

void FUN_1434aae30(longlong param_1)

{
  FUN_1432ef9e0(param_1 + 0xb8);
  Scaleform::GFx::AS2::
  Prototype<Scaleform::GFx::AS2::XmlNodeObject,Scaleform::GFx::AS2::Environment>::Finalize_GC
            (param_1);
  return;
}



// FUNCTION 1434aae60 FUN_1434aae60 body=265 status=ok
// SIG undefined FUN_1434aae60(void)

void FUN_1434aae60(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  
  bVar1 = *(byte *)(param_2 + 1);
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  if (bVar1 < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    bVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x280) + 0x10) == *(longlong *)(*param_3 + 0x10);
  }
  else {
    bVar3 = *(longlong *)(lVar2 + 0x280) == *param_3;
  }
  if (bVar3 == false) {
    bVar1 = *(byte *)(param_2 + 1);
    lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
    if (bVar1 < 7) {
      if (*(longlong *)(*param_3 + 0x10) == 0) {
        FUN_14335f970();
      }
      bVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x278) + 0x10) == *(longlong *)(*param_3 + 0x10);
    }
    else {
      bVar4 = *(longlong *)(lVar2 + 0x278) == *param_3;
    }
    if (!bVar4) {
      FUN_1434158c0(param_1,param_2,param_3,param_4);
      return;
    }
  }
  FUN_143423590(param_1 + 0x58,param_1 + -0x20,param_2,param_3,param_4,bVar3);
  return;
}



// FUNCTION 1434aaf80 FUN_1434aaf80 body=904 status=ok
// SIG undefined FUN_1434aaf80(void)

void FUN_1434aaf80(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 *local_res20;
  char local_58 [32];
  
  lVar4 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*(undefined8 *)(param_1 + 0xe8));
  local_res8 = FUN_143360a90(*(undefined8 *)(lVar4 + 0x4e0),"xmlns",5);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (*(int *)(*(longlong *)(param_2 + 0x48) + 0x14) != 0) {
    FUN_143360130(&local_res8,&DAT_145b138d8);
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(**(longlong **)(param_2 + 0x48) + lVar4) != '\0');
    FUN_143360130(&local_res8);
  }
  local_58[0] = '\0';
  FUN_143df4940(&local_res10,*(longlong *)(param_2 + 0x10) + 0x50);
  FUN_143df49b0(param_2 + 0x50,local_res10);
  FUN_143df4970(&local_res10);
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x10);
  (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x20))(lVar4 + 0x20,param_1,&local_res8,local_58);
  if ((local_58[0] == '\0') || (local_58[0] == '\n')) {
    for (lVar4 = *(longlong *)(param_2 + 0x20); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x20)) {
      if (*(longlong *)(lVar4 + 0x38) == 0) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
        puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x78);
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          FUN_1434148b0(puVar6,param_1);
          *puVar6 = &PTR_LAB_145b14140;
          puVar6[4] = &PTR_LAB_145b14188;
          puVar6[0xd] = 0;
          puVar6[0xe] = 0;
          uVar5 = FUN_14341b750(*(undefined8 *)(param_1 + 0xe8),0x18);
          FUN_1434a4d00(puVar6 + 4,param_1 + 0xe8,uVar5);
        }
        if (*(longlong *)(lVar4 + 0x38) == 0) {
          plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + 0x70);
          puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x18);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &PTR_FUN_145b14138;
            puVar7[1] = 0;
            puVar7[2] = 0;
          }
          *(undefined8 **)(lVar4 + 0x38) = puVar7;
          if (*(char *)(lVar4 + 0x40) == '\x01') {
            FUN_1434ab310(param_1,lVar4);
          }
        }
        *(undefined8 **)(*(longlong *)(lVar4 + 0x38) + 8) = puVar6;
        puVar6[0xe] = lVar4;
        if (param_3 == 0) {
          uVar5 = FUN_143df5430(*(undefined8 *)(lVar4 + 0x10),lVar4);
          if ((RefCountNTSImpl *)puVar6[0xd] != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)puVar6[0xd]);
          }
          puVar6[0xd] = uVar5;
        }
        else {
          *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
          if ((RefCountNTSImpl *)puVar6[0xd] != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)puVar6[0xd]);
          }
          puVar6[0xd] = param_3;
        }
        if ((*(uint *)(puVar6 + 3) & 0x3ffffff) != 0) {
          *(uint *)(puVar6 + 3) = *(uint *)(puVar6 + 3) - 1;
          FUN_1434a2b80(puVar6);
        }
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x10);
      (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x20))(lVar3 + 0x20,param_1,&local_res8,local_58);
      if ((local_58[0] != '\0') && (local_58[0] != '\n')) {
        FUN_143411540(local_58,&local_res20,param_1,0xffffffff,0);
        uVar5 = FUN_143df4c20(*(longlong *)(param_2 + 0x10) + 0x20,*local_res20,
                              *(undefined4 *)(local_res20 + 4));
        FUN_143df4940(&local_res10,uVar5);
        FUN_143df49b0(param_2 + 0x50,local_res10);
        FUN_143df4970(&local_res10);
        piVar1 = (int *)(local_res20 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        break;
      }
    }
  }
  else {
    FUN_143411540(local_58,&local_res20,param_1,0xffffffff,0);
    uVar5 = FUN_143df4c20(*(longlong *)(param_2 + 0x10) + 0x20,*local_res20,
                          *(undefined4 *)(local_res20 + 4));
    FUN_143df4940(&local_res10,uVar5);
    FUN_143df49b0(param_2 + 0x50,local_res10);
    FUN_143df4970(&local_res10);
    piVar1 = (int *)(local_res20 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  FUN_143411120(local_58);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434ab310 FUN_1434ab310 body=405 status=ok
// SIG undefined FUN_1434ab310(void)

void FUN_1434ab310(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined1 local_48 [8];
  longlong local_40;
  
  lVar2 = *(longlong *)(param_2 + 0x38);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
  lVar6 = (**(code **)(*plVar3 + 0x50))(plVar3,0x68);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1434148b0(lVar6,param_1);
  }
  lVar6 = *(longlong *)(lVar2 + 0x10);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
    FUN_1434a2b80();
  }
  *(undefined8 *)(lVar2 + 0x10) = uVar7;
  cVar5 = FUN_143df6390(param_2);
  if (cVar5 != '\0') {
    for (puVar4 = *(undefined8 **)(param_2 + 0x58); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)puVar4[2]) {
      uVar7 = *(undefined8 *)puVar4[1];
      lVar6 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*(undefined8 *)(param_1 + 0xe8));
      lVar8 = FUN_143360a60(*(undefined8 *)(lVar6 + 0x4e0),uVar7);
      *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
      local_48[0] = 5;
      *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
      lVar6 = *(longlong *)(lVar2 + 0x10);
      local_res8[0] = 0;
      uVar7 = *(undefined8 *)*puVar4;
      local_40 = lVar8;
      lVar9 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*(undefined8 *)(param_1 + 0xe8));
      local_res10 = FUN_143360a60(*(undefined8 *)(lVar9 + 0x4e0),uVar7);
      *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
      (**(code **)(*(longlong *)(lVar6 + 0x20) + 0x18))
                (lVar6 + 0x20,param_1,&local_res10,local_48,local_res8);
      piVar1 = (int *)(local_res10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      FUN_143411120(local_48);
      piVar1 = (int *)(lVar8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar8);
      }
    }
    Scaleform::GFx::XML::ElementNode::ClearAttributes(param_2);
  }
  return;
}



// FUNCTION 1434ab4b0 SetupShadow body=132 status=ok
// SIG undefined SetupShadow(void)

void Scaleform::GFx::AS2::SetupShadow(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_2 + 0x38) == 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 0x70);
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x18);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_145b14138;
      puVar2[2] = 0;
    }
    *(undefined8 **)(param_2 + 0x38) = puVar2;
    if (*(char *)(param_2 + 0x40) == '\x01') {
      FUN_1434ab310(param_1,param_2);
    }
  }
  *(longlong *)(*(longlong *)(param_2 + 0x38) + 8) = param_3;
  *(longlong *)(param_3 + 0x70) = param_2;
  return;
}



// FUNCTION 1434ab540 FUN_1434ab540 body=181 status=ok
// SIG undefined FUN_1434ab540(void)

void FUN_1434ab540(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *local_res8;
  
  Scaleform::StringBuffer::AppendString
            (*(undefined8 *)(param_1 + 0x10),&DAT_145af3920,0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString
            (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)*param_2,0xffffffffffffffff);
  Scaleform::StringBuffer::AppendString
            (*(undefined8 *)(param_1 + 0x10),&DAT_145b14870,0xffffffffffffffff);
  FUN_143411540(param_3,&local_res8,*(undefined8 *)(param_1 + 8),0xffffffff,0);
  Scaleform::StringBuffer::AppendString
            (*(undefined8 *)(param_1 + 0x10),*local_res8,0xffffffffffffffff);
  piVar1 = (int *)(local_res8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  Scaleform::StringBuffer::AppendString
            (*(undefined8 *)(param_1 + 0x10),&DAT_145afa020,0xffffffffffffffff);
  return;
}



// FUNCTION 1434ab600 FUN_1434ab600 body=150 status=ok
// SIG undefined FUN_1434ab600(void)

void FUN_1434ab600(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res8;
  
  FUN_143411540(param_3,&local_res8,*(undefined8 *)(param_1 + 8),0xffffffff,0);
  if ((local_res8 == **(longlong **)(param_1 + 0x10)) &&
     (iVar4 = strncmp(*(char **)*param_2,"xmlns",5), iVar4 == 0)) {
    pbVar2 = *(byte **)(param_1 + 0x18);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *pbVar2 = 5;
    lVar3 = *param_2;
    *(longlong *)(pbVar2 + 8) = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434ab6a0 FUN_1434ab6a0 body=176 status=ok
// SIG undefined FUN_1434ab6a0(void)

undefined8 * FUN_1434ab6a0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_1434a7b90();
  *param_1 = &PTR_LAB_145b14a60;
  param_1[4] = &PTR_LAB_145b14aa8;
  uVar1 = FUN_14341b750(*(undefined8 *)(param_2 + 0xe8),0x17);
  FUN_1434a4d00(param_1 + 4,param_2 + 0xe8,uVar1);
  puVar2 = param_1 + 4;
  param_1[0xf] = 0xbff0000000000000;
  param_1[0x10] = 0xbff0000000000000;
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  FUN_143464540(param_2 + 0xe8,puVar2);
  FUN_1434646c0(param_2,param_1 + 4,param_1 + 4);
  return param_1;
}



// FUNCTION 1434ab760 FUN_1434ab760 body=246 status=ok
// SIG undefined FUN_1434ab760(void)

void FUN_1434ab760(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_143410ec0(*(longlong *)(param_2 + 8),param_3);
  }
  lVar3 = *(longlong *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x30);
  lVar5 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*(undefined8 *)(param_2 + 0xe8));
  local_res8 = FUN_143360950(*(undefined8 *)(lVar5 + 0x4e0),"onData",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  lVar5 = param_1 + 0x20;
  if (param_1 == 0) {
    lVar5 = 0;
  }
  FUN_1434649a0(param_2,lVar5,&local_res8,1,iVar2 * 0x20 + -0x20 + (int)(lVar3 - lVar4 >> 5));
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(*(undefined8 *)(param_2 + 8));
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + -0x20;
  if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
    FUN_1434a25c0(param_2 + 8);
  }
  FUN_143411120(param_3);
  return;
}



// FUNCTION 1434ab860 FUN_1434ab860 body=253 status=ok
// SIG undefined FUN_1434ab860(void)

void FUN_1434ab860(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar3 = *(undefined1 **)(param_2 + 8);
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar3 + 8) = param_3;
    *puVar3 = 3;
  }
  lVar4 = *(longlong *)(param_2 + 8);
  lVar5 = *(longlong *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x30);
  lVar6 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*(undefined8 *)(param_2 + 0xe8));
  local_res8 = FUN_143360950(*(undefined8 *)(lVar6 + 0x4e0),"onHTTPStatus",0xc);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  lVar6 = param_1 + 0x20;
  if (param_1 == 0) {
    lVar6 = 0;
  }
  FUN_1434649a0(param_2,lVar6,&local_res8,1,iVar2 * 0x20 + -0x20 + (int)(lVar4 - lVar5 >> 5));
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(*(undefined8 *)(param_2 + 8));
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + -0x20;
  if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
    FUN_1434a25c0(param_2 + 8);
  }
  return;
}



// FUNCTION 1434ab970 FUN_1434ab970 body=376 status=ok
// SIG undefined FUN_1434ab970(void)

void FUN_1434ab970(longlong param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  undefined1 local_res18 [16];
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 local_48 [8];
  undefined1 local_40;
  
  local_res18[0] = 2;
  local_48[0] = 2;
  local_40 = param_3;
  lVar4 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*(undefined8 *)(param_2 + 0xe8));
  local_res8 = FUN_143360950(*(undefined8 *)(lVar4 + 0x4e0),"loaded",6);
  puVar6 = local_res18;
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x50))
            (param_1 + 0x20,param_2 + 0xe8,&local_res8,local_48,puVar6);
  uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_48);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
  if (*(ulonglong *)(param_2 + 0x18) <= *(ulonglong *)(param_2 + 8)) {
    FUN_1434a29d0(param_2 + 8);
  }
  puVar6 = *(undefined1 **)(param_2 + 8);
  if (puVar6 != (undefined1 *)0x0) {
    *puVar6 = 2;
    puVar6[8] = param_3;
  }
  lVar4 = *(longlong *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x30);
  lVar5 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*(undefined8 *)(param_2 + 0xe8));
  local_res8 = FUN_143360950(*(undefined8 *)(lVar5 + 0x4e0),"onLoad",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1434649a0(param_2,param_1 + 0x20,&local_res8,1,
                CONCAT44(uVar7,iVar2 * 0x20 + -0x20 + (int)(lVar4 - lVar3 >> 5)));
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(*(undefined8 *)(param_2 + 8));
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + -0x20;
  if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
    FUN_1434a25c0(param_2 + 8);
  }
  return;
}



// FUNCTION 1434abb10 FUN_1434abb10 body=620 status=ok
// SIG undefined FUN_1434abb10(void)

void FUN_1434abb10(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined1 local_68 [8];
  longlong local_60;
  undefined1 *local_48;
  undefined8 local_40;
  
  FUN_1432c5a10(&local_48,&DAT_145af3922,DAT_146b62f28);
  if (param_3 != 0) {
    Scaleform::StringBuffer::AppendString(&local_48,&DAT_145b14d24,0xffffffffffffffff);
    if (*(int *)(*(longlong *)(param_3 + 0x78) + 0x14) != 0) {
      Scaleform::StringBuffer::AppendString(&local_48,"xml version=\"",0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString
                (&local_48,**(undefined8 **)(param_3 + 0x78),0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_48,&DAT_145afa020,0xffffffffffffffff);
    }
    if (*(int *)(*(longlong *)(param_3 + 0x80) + 0x14) != 0) {
      if (*(int *)(*(longlong *)(param_3 + 0x78) + 0x14) != 0) {
        Scaleform::StringBuffer::AppendString(&local_48,&DAT_145af3920,0xffffffffffffffff);
      }
      Scaleform::StringBuffer::AppendString(&local_48,"encoding=\"",0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString
                (&local_48,**(undefined8 **)(param_3 + 0x80),0xffffffffffffffff);
      Scaleform::StringBuffer::AppendString(&local_48,&DAT_145afa020,0xffffffffffffffff);
    }
    if (*(char *)(param_3 + 0x88) != -1) {
      if ((*(int *)(*(longlong *)(param_3 + 0x78) + 0x14) != 0) ||
         (*(int *)(*(longlong *)(param_3 + 0x80) + 0x14) != 0)) {
        Scaleform::StringBuffer::AppendString(&local_48,&DAT_145af3920,0xffffffffffffffff);
      }
      pcVar4 = "standalone=\"yes\"";
      if (*(char *)(param_3 + 0x88) == '\0') {
        pcVar4 = "standalone=\"no\"";
      }
      Scaleform::StringBuffer::AppendString(&local_48,pcVar4,0xffffffffffffffff);
    }
    Scaleform::StringBuffer::AppendString(&local_48,&DAT_145b14d70,0xffffffffffffffff);
  }
  if (((*(int *)(*(longlong *)(param_3 + 0x78) + 0x14) != 0) ||
      (*(int *)(*(longlong *)(param_3 + 0x80) + 0x14) != 0)) || (*(char *)(param_3 + 0x88) != -1)) {
    puVar5 = &DAT_145af3922;
    if (local_48 != (undefined1 *)0x0) {
      puVar5 = local_48;
    }
    lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*(undefined8 *)(param_2 + 0xe8));
    lVar2 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x4e0),puVar5,local_40);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    local_68[0] = 5;
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    local_res18[0] = 0;
    local_60 = lVar2;
    lVar3 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*(undefined8 *)(param_2 + 0xe8));
    local_res20 = FUN_143360950(*(undefined8 *)(lVar3 + 0x4e0),"xmlDecl",7);
    *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
    (**(code **)(*(longlong *)(param_1 + 0x20) + 0x18))
              ((longlong *)(param_1 + 0x20),param_2,&local_res20,local_68,local_res18);
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    FUN_143411120(local_68);
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
    }
  }
  Scaleform::StringBuffer::~StringBuffer(&local_48);
  return;
}



// FUNCTION 1434abd90 FUN_1434abd90 body=1032 status=ok
// SIG undefined FUN_1434abd90(void)

undefined8 * FUN_1434abd90(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  FUN_1434adbb0();
  local_res8[0] = 6;
  *param_1 = &PTR_LAB_145b14b50;
  param_1[4] = &PTR_LAB_145b14b98;
  param_1[0x11] = &PTR_LAB_145b14c40;
  FUN_143422ee0(param_1 + 0x11,param_1,param_2,&PTR_s_addRequestHeader_145b14920,local_res8);
  local_res8[0] = 2;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  uVar3 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"application/x-www-form-urlencoded",0x21);
  *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
  local_38[0] = 5;
  *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
  local_30 = uVar3;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"contentType",0xb);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  piVar1 = (int *)(uVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(uVar3);
  }
  local_res8[0] = 2;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"docTypeDecl",0xb);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 2;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"idMap",5);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 2;
  local_38[0] = 2;
  local_30 = local_30 & 0xffffffffffffff00;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"ignoreWhite",0xb);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 2;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"loaded",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 2;
  local_38[0] = 4;
  local_30 = local_30 & 0xffffffff00000000;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"status",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 2;
  local_38[0] = 0;
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"xmlDecl",7);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143415510(param_1 + 4,param_2,&local_res10,local_38,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  local_res8[0] = 1;
  uVar4 = FUN_143410d70(local_38,param_2,FUN_1434acdb0);
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x4e0),"onData",6);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  (**(code **)(param_1[4] + 0x50))(param_1 + 4,param_2,&local_res10,uVar4,local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143411120(local_38);
  return param_1;
}



// FUNCTION 1434ac1a0 FUN_1434ac1a0 body=118 status=ok
// SIG undefined FUN_1434ac1a0(void)

void FUN_1434ac1a0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_res10 [6];
  
  cVar1 = Scaleform::GFx::AS2::FnCall::CheckThisPtr();
  if (cVar1 == '\0') {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,&DAT_145af8efc,0,0);
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    lVar2 = FUN_143414210(param_1);
    if (lVar2 != 0) {
      local_res10[0] = 0x34000;
      FUN_1432c19d0(lVar2,local_res10,"XML.addRequestHeader is not implemented.");
    }
  }
  return;
}



// FUNCTION 1434ac220 FUN_1434ac220 body=366 status=ok
// SIG undefined FUN_1434ac220(void)

void FUN_1434ac220(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_res10;
  
  cVar3 = Scaleform::GFx::AS2::FnCall::CheckThisPtr();
  if (cVar3 == '\0') {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,&DAT_145af8efc,0,0);
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    uVar4 = FUN_1434141c0(param_1);
    lVar5 = *(longlong *)(param_1 + 0x30);
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 0x20;
    if (*(ulonglong *)(lVar5 + 0x18) <= *(ulonglong *)(lVar5 + 8)) {
      FUN_1434a29d0(lVar5 + 8);
    }
    if (*(longlong *)(lVar5 + 8) != 0) {
      FUN_143410ec0(*(longlong *)(lVar5 + 8),uVar4);
    }
    lVar5 = *(longlong *)(param_1 + 0x30);
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 0x20;
    if (*(ulonglong *)(lVar5 + 0x18) <= *(ulonglong *)(lVar5 + 8)) {
      FUN_1434a29d0(lVar5 + 8);
    }
    puVar2 = *(undefined1 **)(lVar5 + 8);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 4;
      *(undefined4 *)(puVar2 + 8) = 1;
    }
    lVar5 = Scaleform::GFx::AS2::GlobalContext::GetStringManager
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xe8));
    local_res10 = FUN_143360950(*(undefined8 *)(lVar5 + 0x4e0),"XMLNode",7);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    lVar5 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),
                          *(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x60),&local_res10
                          ,2,0xffffffff);
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar5);
    FUN_1434a23f0(*(longlong *)(param_1 + 0x30) + 8);
    if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
      FUN_1434a2b80(lVar5);
    }
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 1434ac3a0 FUN_1434ac3a0 body=366 status=ok
// SIG undefined FUN_1434ac3a0(void)

void FUN_1434ac3a0(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_res10;
  
  cVar3 = Scaleform::GFx::AS2::FnCall::CheckThisPtr();
  if (cVar3 == '\0') {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,&DAT_145af8efc,0,0);
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    uVar4 = FUN_1434141c0(param_1);
    lVar5 = *(longlong *)(param_1 + 0x30);
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 0x20;
    if (*(ulonglong *)(lVar5 + 0x18) <= *(ulonglong *)(lVar5 + 8)) {
      FUN_1434a29d0(lVar5 + 8);
    }
    if (*(longlong *)(lVar5 + 8) != 0) {
      FUN_143410ec0(*(longlong *)(lVar5 + 8),uVar4);
    }
    lVar5 = *(longlong *)(param_1 + 0x30);
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 0x20;
    if (*(ulonglong *)(lVar5 + 0x18) <= *(ulonglong *)(lVar5 + 8)) {
      FUN_1434a29d0(lVar5 + 8);
    }
    puVar2 = *(undefined1 **)(lVar5 + 8);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 4;
      *(undefined4 *)(puVar2 + 8) = 3;
    }
    lVar5 = Scaleform::GFx::AS2::GlobalContext::GetStringManager
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xe8));
    local_res10 = FUN_143360950(*(undefined8 *)(lVar5 + 0x4e0),"XMLNode",7);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    lVar5 = FUN_14341a5c0(*(longlong *)(param_1 + 0x30),
                          *(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x60),&local_res10
                          ,2,0xffffffff);
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar5);
    FUN_1434a23f0(*(longlong *)(param_1 + 0x30) + 8);
    if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
      FUN_1434a2b80(lVar5);
    }
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 1434ac520 FUN_1434ac520 body=148 status=ok
// SIG undefined FUN_1434ac520(void)

void FUN_1434ac520(longlong param_1)

{
  double dVar1;
  byte *pbVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = Scaleform::GFx::AS2::FnCall::CheckThisPtr();
  if (cVar3 == '\0') {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,&DAT_145af8efc,0,0);
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    pbVar2 = *(byte **)(param_1 + 8);
    dVar1 = *(double *)(lVar4 + 0x78);
    if (dVar1 < 0.0) {
      FUN_143411150(pbVar2);
      *pbVar2 = 0;
      return;
    }
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *(double *)(pbVar2 + 8) = dVar1;
    *pbVar2 = 3;
  }
  return;
}



// FUNCTION 1434ac5c0 FUN_1434ac5c0 body=151 status=ok
// SIG undefined FUN_1434ac5c0(void)

void FUN_1434ac5c0(longlong param_1)

{
  double dVar1;
  byte *pbVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = Scaleform::GFx::AS2::FnCall::CheckThisPtr();
  if (cVar3 == '\0') {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,&DAT_145af8efc,0,0);
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    pbVar2 = *(byte **)(param_1 + 8);
    dVar1 = *(double *)(lVar4 + 0x80);
    if (dVar1 < 0.0) {
      FUN_143411150(pbVar2);
      *pbVar2 = 0;
      return;
    }
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *(double *)(pbVar2 + 8) = dVar1;
    *pbVar2 = 3;
  }
  return;
}



// FUNCTION 1434ac660 FUN_1434ac660 body=1217 status=ok
// SIG undefined FUN_1434ac660(void)

void FUN_1434ac660(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar10;
  RefCountImpl *pRVar11;
  RefCountImpl *this_00;
  RefCountNTSImpl *pRVar12;
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  longlong local_res20;
  ulonglong in_stack_ffffffffffffff28;
  longlong *local_c8;
  longlong local_c0;
  byte local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined1 local_a0 [32];
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined1 local_60 [40];
  
  cVar5 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1c);
  if (cVar5 != '\0') {
    this_00 = (RefCountImpl *)0x0;
    pRVar12 = (RefCountNTSImpl *)(*(longlong *)(param_1 + 0x10) + -0x20);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      pRVar12 = (RefCountNTSImpl *)this_00;
    }
    if (pRVar12 != (RefCountNTSImpl *)0x0) {
      if (*(int *)(param_1 + 0x38) == 0) {
        puVar2 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar2);
        *puVar2 = 2;
        puVar2[8] = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        uVar7 = FUN_1434141c0(param_1,0);
        in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffffffffff00;
        FUN_143411540(uVar7,&local_res18,uVar3,0xffffffff,in_stack_ffffffffffffff28);
        local_60[0] = 0;
        lVar8 = Scaleform::GFx::AS2::GlobalContext::GetStringManager
                          (*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xe8));
        local_res20 = FUN_143360950(*(undefined8 *)(lVar8 + 0x4e0),"onData",6);
        *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
        (**(code **)(*(longlong *)(pRVar12 + 0x20) + 0x20))
                  (pRVar12 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_res20,local_60);
        piVar1 = (int *)(local_res20 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        Scaleform::GFx::AS2::Value::ToFunction(local_60,&local_c8,*(undefined8 *)(param_1 + 0x30));
        cVar5 = (**(code **)(*local_c8 + 0x68))();
        if (((cVar5 == '\0') || (cVar5 = (**(code **)(*local_c8 + 0x68))(), cVar5 == '\0')) ||
           ((code *)local_c8[0xd] != FUN_1434acdb0)) {
          pRVar11 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
          if (pRVar11 != (RefCountImpl *)0x0) {
            *(undefined8 *)(pRVar11 + 8) = 0;
            *(undefined ***)pRVar11 = &PTR_FUN_144f70a50;
            *(undefined ***)pRVar11 = &PTR_FUN_145b14ce8;
            *(undefined4 *)(pRVar11 + 8) = 1;
            *(undefined8 *)(pRVar11 + 0x10) = 0;
            *(undefined4 *)(pRVar11 + 0x18) = 0;
            this_00 = pRVar11;
          }
          uVar3 = *local_res18;
          uVar7 = Scaleform::GFx::AS2::Environment::GetAS2Root(*(undefined8 *)(param_1 + 0x30));
          FUN_143439d40(uVar7,pRVar12,this_00,uVar3,in_stack_ffffffffffffff28 & 0xffffffff00000000);
          puVar2 = *(undefined1 **)(param_1 + 8);
          FUN_143411150(puVar2);
          *puVar2 = 2;
          puVar2[8] = 1;
          if (this_00 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(this_00);
          }
        }
        else {
          lVar9 = Scaleform::GFx::AS2::Environment::GetMovieImpl(*(undefined8 *)(param_1 + 0x30));
          lVar8 = *(longlong *)(lVar9 + 0x260);
          if (lVar8 == 0) {
            plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
            lVar8 = (**(code **)(*plVar4 + 0x50))(plVar4,0x78,0);
            this = (RefCountNTSImpl *)this_00;
            if (lVar8 != 0) {
              this = (RefCountNTSImpl *)FUN_143df5110(lVar8,lVar9);
            }
            pRVar10 = this + 0x10;
            if (this == (RefCountNTSImpl *)0x0) {
              pRVar10 = (RefCountNTSImpl *)this_00;
            }
            *(RefCountNTSImpl **)(lVar9 + 0x260) = pRVar10;
          }
          else {
            this = (RefCountNTSImpl *)(lVar8 + -0x10);
            if (lVar8 == 0) {
              this = (RefCountNTSImpl *)this_00;
            }
            if (this != (RefCountNTSImpl *)0x0) {
              *(int *)(this + 8) = *(int *)(this + 8) + 1;
            }
          }
          pRVar11 = (RefCountImpl *)
                    (**(code **)(*(longlong *)(lVar9 + 0x10) + 0x18))(lVar9 + 0x10,0x1c);
          if (pRVar11 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(pRVar11);
          }
          *(undefined8 *)(pRVar12 + 0x78) = 0;
          local_a0[0] = 0;
          lVar8 = Scaleform::GFx::AS2::GlobalContext::GetStringManager
                            (*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xe8));
          local_b0 = FUN_143360950(*(undefined8 *)(lVar8 + 0x4e0),"ignoreWhite",0xb);
          *(int *)(local_b0 + 0x18) = *(int *)(local_b0 + 0x18) + 1;
          (**(code **)(*(longlong *)(pRVar12 + 0x20) + 0x20))
                    (pRVar12 + 0x20,*(undefined8 *)(param_1 + 0x30),&local_b0,local_a0);
          piVar1 = (int *)(local_b0 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          uVar6 = FUN_143411fd0(local_a0,*(undefined8 *)(param_1 + 0x30));
          lVar8 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30);
          if (lVar8 != 0) {
            this_00 = (RefCountImpl *)FUN_1434ad150(lVar8,pRVar11,this,uVar6);
          }
          uVar3 = *local_res18;
          uVar7 = Scaleform::GFx::AS2::Environment::GetAS2Root(*(undefined8 *)(param_1 + 0x30));
          FUN_143439d40(uVar7,pRVar12,this_00,uVar3,in_stack_ffffffffffffff28 & 0xffffffff00000000);
          puVar2 = *(undefined1 **)(param_1 + 8);
          FUN_143411150(puVar2);
          *puVar2 = 2;
          puVar2[8] = 1;
          if (this_00 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(this_00);
          }
          FUN_143411120(local_a0);
          if (this != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release(this);
          }
        }
        local_res10[0] = 2;
        local_80[0] = 2;
        local_78 = 0;
        lVar8 = Scaleform::GFx::AS2::GlobalContext::GetStringManager
                          (*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xe8));
        local_a8 = FUN_143360950(*(undefined8 *)(lVar8 + 0x4e0),"loaded",6);
        *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + 1;
        (**(code **)(*(longlong *)(pRVar12 + 0x20) + 0x50))
                  (pRVar12 + 0x20,*(longlong *)(param_1 + 0x30) + 0xe8,&local_a8,local_80,
                   local_res10);
        piVar1 = (int *)(local_a8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        FUN_143411120(local_80);
        if ((((local_b8 & 2) == 0) && (local_c8 != (longlong *)0x0)) &&
           ((*(uint *)(local_c8 + 3) & 0x3ffffff) != 0)) {
          *(uint *)(local_c8 + 3) = *(uint *)(local_c8 + 3) - 1;
          FUN_1434a2b80();
        }
        local_c8 = (longlong *)0x0;
        if ((((local_b8 & 1) == 0) && (local_c0 != 0)) &&
           ((*(uint *)(local_c0 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(local_c0 + 0x18) = *(uint *)(local_c0 + 0x18) - 1;
          FUN_1434a2b80();
        }
        local_c0 = 0;
        FUN_143411120(local_60);
        piVar1 = (int *)(local_res18 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
    }
    return;
  }
  Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,&DAT_145af8efc,0,0);
  return;
}



// FUNCTION 1434acb30 FUN_1434acb30 body=375 status=ok
// SIG undefined FUN_1434acb30(void)

void FUN_1434acb30(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  longlong local_res18 [2];
  undefined1 local_38 [32];
  
  cVar4 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1c);
  if (cVar4 != '\0') {
    lVar6 = 0;
    lVar8 = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar8 = lVar6;
    }
    if (lVar8 != 0) {
      FUN_1434ae2b0(param_1,lVar8);
      lVar2 = *(longlong *)(param_1 + 0x30);
      plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0xe8) + 0x30);
      lVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,0x68,0);
      if (lVar5 != 0) {
        lVar6 = FUN_1434148b0(lVar5,lVar2);
      }
      for (lVar5 = *(longlong *)(*(longlong *)(lVar8 + 0x70) + 0x68); lVar5 != 0;
          lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (*(char *)(lVar5 + 0x40) == '\x01') {
          FUN_1434a77e0(lVar2,lVar5,*(undefined8 *)(lVar8 + 0x68),lVar6);
        }
      }
      local_res10[0] = 2;
      lVar5 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*(undefined8 *)(lVar2 + 0xe8));
      local_res18[0] = FUN_143360950(*(undefined8 *)(lVar5 + 0x4e0),"idMap",5);
      *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
      lVar5 = *(longlong *)(lVar8 + 0x20);
      uVar7 = FUN_143410c00(local_38,lVar6);
      (**(code **)(lVar5 + 0x18))((longlong *)(lVar8 + 0x20),lVar2,local_res18,uVar7,local_res10);
      piVar1 = (int *)(local_res18[0] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      FUN_143411120(local_38);
      if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
        FUN_1434a2b80(lVar6);
      }
    }
    return;
  }
  Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,&DAT_145af8efc,0,0);
  return;
}



// FUNCTION 1434accb0 FUN_1434accb0 body=118 status=ok
// SIG undefined FUN_1434accb0(void)

void FUN_1434accb0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_res10 [6];
  
  cVar1 = Scaleform::GFx::AS2::FnCall::CheckThisPtr();
  if (cVar1 == '\0') {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,&DAT_145af8efc,0,0);
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    lVar2 = FUN_143414210(param_1);
    if (lVar2 != 0) {
      local_res10[0] = 0x34000;
      FUN_1432c19d0(lVar2,local_res10,"XML.send is not implemented.");
    }
  }
  return;
}



// FUNCTION 1434acd30 FUN_1434acd30 body=118 status=ok
// SIG undefined FUN_1434acd30(void)

void FUN_1434acd30(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_res10 [6];
  
  cVar1 = Scaleform::GFx::AS2::FnCall::CheckThisPtr();
  if (cVar1 == '\0') {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,&DAT_145af8efc,0,0);
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x10) + -0x20;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    lVar2 = FUN_143414210(param_1);
    if (lVar2 != 0) {
      local_res10[0] = 0x34000;
      FUN_1432c19d0(lVar2,local_res10,"XML.sendAndLoad is not implemented.");
    }
  }
  return;
}



// FUNCTION 1434acdb0 FUN_1434acdb0 body=55 status=ok
// SIG undefined FUN_1434acdb0(void)

void FUN_1434acdb0(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = Scaleform::GFx::AS2::FnCall::CheckThisPtr(param_1,0x1c);
  if (cVar1 == '\0') {
    Scaleform::GFx::AS2::FnCall::ThisPtrError(param_1,&DAT_145af8efc,0,0);
    return;
  }
  return;
}



// FUNCTION 1434acdf0 FUN_1434acdf0 body=51 status=ok
// SIG undefined FUN_1434acdf0(void)

undefined8 * FUN_1434acdf0(undefined8 *param_1,undefined8 param_2)

{
  FUN_143416630(param_1,param_2,FUN_1434ace30);
  *param_1 = &PTR_LAB_145b14c48;
  param_1[4] = &PTR_LAB_145b144a8;
  return param_1;
}



// FUNCTION 1434ace30 FUN_1434ace30 body=175 status=ok
// SIG undefined FUN_1434ace30(void)

void FUN_1434ace30(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0x1c) {
      lVar3 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar3 = 0;
      }
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
      }
      goto LAB_1434acead;
    }
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x88,0);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_1434ab6a0(lVar3,*(undefined8 *)(param_1 + 0x30));
  }
LAB_1434acead:
  FUN_1434ae2b0(param_1,lVar3);
  if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
    FUN_1434a2b80(lVar3);
  }
  return;
}



// FUNCTION 1434acef0 FUN_1434acef0 body=61 status=ok
// SIG undefined FUN_1434acef0(void)

void FUN_1434acef0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x88,0);
  if (lVar2 != 0) {
    FUN_1434ab6a0(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 1434acf40 FUN_1434acf40 body=509 status=ok
// SIG undefined FUN_1434acf40(void)

undefined8 * FUN_1434acf40(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *local_res8;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  longlong local_30;
  byte local_28;
  
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(param_2);
  local_res8 = *(undefined8 **)(lVar2 + 0xc0);
  *(int *)(local_res8 + 3) = *(int *)(local_res8 + 3) + 1;
  lVar2 = FUN_14341c340(param_2,&local_res8);
  puVar5 = (undefined8 *)0x0;
  if (lVar2 == 0) {
    FUN_1434aa000(&local_38,param_2);
    if ((((local_28 & 2) == 0) && (local_38 != 0)) &&
       ((*(uint *)(local_38 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_38 + 0x18) = *(uint *)(local_38 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_38 = 0;
    if ((((local_28 & 1) == 0) && (local_30 != 0)) &&
       ((*(uint *)(local_30 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_30 + 0x18) = *(uint *)(local_30 + 0x18) - 1;
      FUN_1434a2b80();
    }
  }
  local_40 = 8;
  local_48 = param_2;
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                     (*(longlong **)(param_2 + 0x30),0x70);
  puVar7 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_143416630(puVar3,&local_48,FUN_1434ace30);
    *puVar3 = &PTR_LAB_145b14c48;
    puVar3[4] = &PTR_LAB_145b144a8;
    puVar7 = puVar3;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = puVar7;
  param_1[1] = 0;
  lVar2 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                    (*(longlong **)(param_2 + 0x30),200,0);
  if (lVar2 != 0) {
    uVar4 = FUN_14341b750(param_2,0x18);
    puVar5 = (undefined8 *)FUN_1434abd90(lVar2,&local_48,uVar4,param_1);
    if (puVar5 != (undefined8 *)0x0) {
      *(uint *)(puVar5 + 3) = *(int *)(puVar5 + 3) + 1U & 0x8fffffff;
    }
  }
  local_res8 = puVar5;
  FUN_1434a4b90(param_2,0x17,&local_res8);
  lVar2 = *(longlong *)(param_2 + 0x60);
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
  lVar6 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(param_2);
  lVar1 = *(longlong *)(lVar2 + 0x20);
  uVar4 = Scaleform::GFx::AS2::Value::Value(&local_38,param_1);
  (**(code **)(lVar1 + 0x50))(lVar2 + 0x20,&local_48,lVar6 + 0xb8,uVar4,&local_res8);
  FUN_143411120(&local_38);
  if ((puVar5 != (undefined8 *)0x0) && ((*(uint *)(puVar5 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar5 + 3) = *(uint *)(puVar5 + 3) - 1;
    FUN_1434a2b80(puVar5);
  }
  return param_1;
}



// FUNCTION 1434ad150 FUN_1434ad150 body=124 status=ok
// SIG undefined FUN_1434ad150(void)

undefined8 *
FUN_1434ad150(undefined8 *param_1,RefCountImpl *param_2,undefined8 param_3,undefined1 param_4)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b14cd0;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[2] = param_2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = param_3;
  *(undefined1 *)((longlong)param_1 + 0x2c) = param_4;
  return param_1;
}



// FUNCTION 1434ad1e0 FUN_1434ad1e0 body=78 status=ok
// SIG undefined FUN_1434ad1e0(void)

void FUN_1434ad1e0(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145b14cd0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  *(undefined ***)param_1 = &PTR_FUN_145b0c328;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1434ad240 FUN_1434ad240 body=327 status=ok
// SIG undefined FUN_1434ad240(void)

void FUN_1434ad240(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  RefCountImpl *this;
  undefined8 uVar4;
  longlong local_28;
  ulonglong local_20;
  undefined8 local_18;
  
  this = (RefCountImpl *)0x0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  cVar1 = FUN_1432badc0(param_2);
  if (cVar1 == '\0') {
    this = (RefCountImpl *)
           (**(code **)(*param_3 + 8))(param_3,(*param_2 & 0xfffffffffffffffc) + 0xc,0x21,0x1b6);
  }
  else {
    cVar1 = FUN_1432bae80(&local_28,param_2,1,0,0,0,0);
    if ((cVar1 == '\0') || (local_20 == 0)) goto LAB_1434ad34b;
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30,0);
    if (lVar3 != 0) {
      this = (RefCountImpl *)FUN_1432e1570(lVar3,param_2,local_28,local_20 & 0xffffffff);
    }
  }
  if ((this != (RefCountImpl *)0x0) &&
     (cVar1 = (**(code **)(*(longlong *)this + 0x10))(this), cVar1 != '\0')) {
    iVar2 = (**(code **)(*(longlong *)this + 0x30))(this);
    *(int *)(param_1 + 0x28) = iVar2;
    if (iVar2 != 0) {
      uVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(longlong)iVar2,0);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      (**(code **)(*(longlong *)this + 0x50))(this,uVar4,*(undefined4 *)(param_1 + 0x28));
    }
  }
LAB_1434ad34b:
  if (local_28 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 1434ad390 FUN_1434ad390 body=660 status=ok
// SIG undefined FUN_1434ad390(void)

void FUN_1434ad390(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  double dVar7;
  longlong local_res8;
  RefCountNTSImpl *local_res18;
  longlong local_res20;
  undefined1 local_108 [8];
  undefined1 local_100;
  undefined1 local_e8 [169];
  char local_3f;
  longlong local_38;
  longlong local_30;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x10));
    }
    local_res8 = *(longlong *)(param_1 + 0x10);
    FUN_143df68c0(local_e8,&local_res8,*(undefined1 *)(param_1 + 0x2c));
    local_res8 = *(longlong *)(param_1 + 0x18);
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    FUN_143df6af0(local_e8,&local_res18,*(undefined8 *)(param_1 + 0x20),
                  (longlong)*(int *)(param_1 + 0x28),&local_res8);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x20));
    puVar6 = (undefined8 *)0x0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(RefCountNTSImpl **)(param_3 + 0x70) = local_res18;
    uVar3 = FUN_143df5430(*(undefined8 *)(param_1 + 0x18));
    if (*(RefCountNTSImpl **)(param_3 + 0x68) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_3 + 0x68));
    }
    *(undefined8 *)(param_3 + 0x68) = uVar3;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x70);
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x18);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = 0;
      *puVar4 = &PTR_FUN_145b14138;
      puVar4[2] = 0;
      puVar6 = puVar4;
    }
    lVar5 = puVar6[2];
    if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar6[2] = 0;
    puVar6[1] = param_3;
    *(undefined8 **)(local_res18 + 0x38) = puVar6;
    FUN_1434abb10(param_3,param_2,local_res18);
    if ((local_3f == '\0') || (local_38 != 0)) {
      local_res8 = CONCAT71(local_res8._1_7_,2);
      local_108[0] = 2;
      local_100 = 1;
      lVar5 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*(undefined8 *)(param_2 + 0xe8));
      local_res20 = FUN_143360950(*(undefined8 *)(lVar5 + 0x4e0),"loaded",6);
      *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
      (**(code **)(*(longlong *)(param_3 + 0x20) + 0x50))
                ((longlong *)(param_3 + 0x20),param_2 + 0xe8,&local_res20,local_108,&local_res8);
      piVar1 = (int *)(local_res20 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      FUN_143411120(local_108);
      dVar7 = (double)local_30;
      if (local_30 < 0) {
        dVar7 = dVar7 + 1.8446744073709552e+19;
      }
      *(double *)(param_3 + 0x78) = dVar7;
      dVar7 = (double)local_38;
      if (local_38 < 0) {
        dVar7 = dVar7 + 1.8446744073709552e+19;
      }
      *(double *)(param_3 + 0x80) = dVar7;
      uVar3 = 1;
    }
    else {
      dVar7 = (double)local_30;
      if (local_30 < 0) {
        dVar7 = dVar7 + 1.8446744073709552e+19;
      }
      *(double *)(param_3 + 0x78) = dVar7;
      *(undefined8 *)(param_3 + 0x80) = 0xbff0000000000000;
      uVar3 = 0;
    }
    FUN_1434ab970(param_3,param_2,uVar3);
    if (local_res18 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(local_res18);
    }
    FUN_1434add40(local_e8);
    return;
  }
  *(undefined8 *)(param_3 + 0x78) = 0;
  *(undefined8 *)(param_3 + 0x80) = 0xbff0000000000000;
  FUN_1434ab970(param_3,param_2,0);
  return;
}



// FUNCTION 1434ad670 FUN_1434ad670 body=64 status=ok
// SIG undefined FUN_1434ad670(void)

void FUN_1434ad670(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145b14ce8;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *(undefined ***)param_1 = &PTR_FUN_145b0c328;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1434ad6c0 FUN_1434ad6c0 body=327 status=ok
// SIG undefined FUN_1434ad6c0(void)

void FUN_1434ad6c0(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  RefCountImpl *this;
  undefined8 uVar4;
  longlong local_28;
  ulonglong local_20;
  undefined8 local_18;
  
  this = (RefCountImpl *)0x0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  cVar1 = FUN_1432badc0(param_2);
  if (cVar1 == '\0') {
    this = (RefCountImpl *)
           (**(code **)(*param_3 + 8))(param_3,(*param_2 & 0xfffffffffffffffc) + 0xc,0x21,0x1b6);
  }
  else {
    cVar1 = FUN_1432bae80(&local_28,param_2,1,0,0,0,0);
    if ((cVar1 == '\0') || (local_20 == 0)) goto LAB_1434ad7cb;
    lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30,0);
    if (lVar3 != 0) {
      this = (RefCountImpl *)FUN_1432e1570(lVar3,param_2,local_28,local_20 & 0xffffffff);
    }
  }
  if ((this != (RefCountImpl *)0x0) &&
     (cVar1 = (**(code **)(*(longlong *)this + 0x10))(this), cVar1 != '\0')) {
    iVar2 = (**(code **)(*(longlong *)this + 0x30))(this);
    *(int *)(param_1 + 0x18) = iVar2;
    if (iVar2 != 0) {
      uVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(longlong)iVar2,0);
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      (**(code **)(*(longlong *)this + 0x50))(this,uVar4,*(undefined4 *)(param_1 + 0x18));
    }
  }
LAB_1434ad7cb:
  if (local_28 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 1434ad810 FUN_1434ad810 body=199 status=ok
// SIG undefined FUN_1434ad810(void)

void FUN_1434ad810(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong local_20;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    local_28[0] = 0;
    FUN_1434ab760(param_3,param_2,local_28);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
    lVar3 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*(undefined8 *)(param_2 + 0xe8));
    lVar4 = FUN_143360a90(*(undefined8 *)(lVar3 + 0x4e0),lVar4,(longlong)iVar2);
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    local_28[0] = 5;
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    local_20 = lVar4;
    FUN_1434ab760(param_3,param_2,local_28);
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1434ad8e0 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor> body=191 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(void)

void Scaleform::GFx::AS2::Prototype<Scaleform::GFx::AS2::XmlObject,Scaleform::GFx::AS2::Environment>
     ::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
               (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_14348cfd0();
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0x90,param_2);
  FunctionRefBase::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
            (param_1 + 0xa8,param_2);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xc0) + 8);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xc0) + uVar3 * 8);
        if ((lVar2 != 0) &&
           (*(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1,
           (*(uint *)(lVar2 + 0x18) >> 0x1b & 1) == 0)) {
          *(undefined8 *)(lVar2 + 0x10) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
          *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
          *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
          *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          *(longlong *)(param_2 + 0x60) = lVar2;
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x8000000;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 1434ad9a0 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ReleaseFunctor> body=265 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ReleaseFunctor>(void)

void Scaleform::GFx::AS2::Prototype<Scaleform::GFx::AS2::XmlObject,Scaleform::GFx::AS2::Environment>
     ::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ReleaseFunctor>
               (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_14348e050();
  FUN_14348ddd0(param_1 + 0x90,param_2);
  FUN_14348ddd0(param_1 + 0xa8,param_2);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xc0) + 8);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xc0) + uVar3 * 8);
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
          if ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) == 0) {
            FUN_1434a2e10(param_2,lVar2);
            *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x4000000;
            if ((*(uint *)(lVar2 + 0x18) >> 0x1b & 1) == 0) {
              *(undefined8 *)(lVar2 + 0x10) =
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
              *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
              *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
              *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
              *(longlong *)(param_2 + 0x60) = lVar2;
              *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 0x8000000;
            }
          }
          else {
            FUN_1434a2b80(lVar2);
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 1434adab0 ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ScanInUseFunctor> body=241 status=ok
// SIG undefined ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ScanInUseFunctor>(void)

void Scaleform::GFx::AS2::Prototype<Scaleform::GFx::AS2::XmlObject,Scaleform::GFx::AS2::Environment>
     ::ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::ScanInUseFunctor>
               (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  FUN_14348f370();
  FUN_14348f040(param_1 + 0x90,param_2);
  FUN_14348f040(param_1 + 0xa8,param_2);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xc0) + 8);
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xc0) + uVar4 * 8);
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
          if (((*(uint *)(lVar2 + 0x18) & 0x70000000) != 0) &&
             (uVar3 = *(uint *)(lVar2 + 0x18) & 0x8fffffff, *(uint *)(lVar2 + 0x18) = uVar3,
             (uVar3 >> 0x1b & 1) != 0)) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
            *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
            *(undefined8 *)(lVar2 + 0x10) =
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10);
            *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8);
            *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0x10) = lVar2;
            *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) = lVar2;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 1434adbb0 FUN_1434adbb0 body=129 status=ok
// SIG undefined FUN_1434adbb0(void)

undefined8 *
FUN_1434adbb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1434adc40();
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_LAB_145b14b50;
  param_1[4] = &PTR_LAB_145b14b98;
  param_1[0x11] = &PTR_LAB_145b14c40;
  FUN_1434230f0(param_1 + 0x11,param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 1434adc40 FUN_1434adc40 body=127 status=ok
// SIG undefined FUN_1434adc40(void)

undefined8 * FUN_1434adc40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b14140;
  param_1[4] = &PTR_LAB_145b14188;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  *param_1 = &PTR_LAB_145b14a60;
  param_1[4] = &PTR_LAB_145b14aa8;
  return param_1;
}



// FUNCTION 1434adcc0 FUN_1434adcc0 body=122 status=ok
// SIG undefined FUN_1434adcc0(void)

void FUN_1434adcc0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  puVar1 = (undefined8 *)(*param_1 + -0x10 + lVar2 * 0x10);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if ((RefCountNTSImpl *)puVar1[1] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)puVar1[1]);
    }
    if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
    }
    puVar1 = puVar1 + -2;
  }
  if (*param_1 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return;
}



// FUNCTION 1434add40 FUN_1434add40 body=195 status=ok
// SIG undefined FUN_1434add40(void)

void FUN_1434add40(RefCountImplCore *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(RefCountNTSImpl **)(param_1 + 0xa0) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0xa0));
  }
  FUN_1434adcc0(param_1 + 0x88);
  FUN_1434adcc0(param_1 + 0x70);
  lVar2 = *(longlong *)(param_1 + 0x60);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + (lVar2 + -1) * 8);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
    }
    puVar1 = puVar1 + -1;
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::StringBuffer::~StringBuffer(param_1 + 0x20);
  if (*(RefCountNTSImpl **)(param_1 + 0x18) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x18));
  }
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  *(undefined ***)param_1 = &PTR_FUN_145b149f0;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1434ade30 FUN_1434ade30 body=135 status=ok
// SIG undefined FUN_1434ade30(void)

undefined8 * FUN_1434ade30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_145b14b50;
  param_1[4] = &PTR_LAB_145b14b98;
  param_1[0x11] = &PTR_LAB_145b14c40;
  FUN_143422e80();
  Scaleform::GFx::AS2::XmlNodeObject::~XmlNodeObject(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,200);
  }
  return param_1;
}



// FUNCTION 1434adec0 FUN_1434adec0 body=99 status=ok
// SIG undefined FUN_1434adec0(void)

RefCountImplCore * FUN_1434adec0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b149f0;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1434adf30 FUN_1434adf30 body=148 status=ok
// SIG undefined FUN_1434adf30(void)

RefCountImplCore * FUN_1434adf30(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b14cd0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  *(undefined ***)param_1 = &PTR_FUN_145b0c328;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1434adfd0 FUN_1434adfd0 body=134 status=ok
// SIG undefined FUN_1434adfd0(void)

RefCountImplCore * FUN_1434adfd0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b14ce8;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *(undefined ***)param_1 = &PTR_FUN_145b0c328;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1434ae060 FUN_1434ae060 body=89 status=ok
// SIG undefined FUN_1434ae060(void)

undefined8 FUN_1434ae060(undefined8 param_1,ulonglong param_2)

{
  Scaleform::GFx::AS2::XmlNodeObject::~XmlNodeObject();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x88);
  }
  return param_1;
}


