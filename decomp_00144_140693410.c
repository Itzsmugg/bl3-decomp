// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140693410 FUN_140693410 body=43 status=ok
// SIG undefined FUN_140693410(void)

undefined8 * FUN_140693410(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140693440 FUN_140693440 body=98 status=ok
// SIG undefined FUN_140693440(void)

undefined8 * FUN_140693440(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[2];
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
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1406934b0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<STileView<TSharedPtr<SWidget,0>_>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x648);
  }
  return param_1;
}



// FUNCTION 1406934e0 FUN_1406934e0 body=43 status=ok
// SIG undefined FUN_1406934e0(void)

undefined8 * FUN_1406934e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x450);
  }
  return param_1;
}



// FUNCTION 140693510 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SDockingSplitter>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,800);
  }
  return param_1;
}



// FUNCTION 140693540 FUN_140693540 body=43 status=ok
// SIG undefined FUN_140693540(void)

undefined8 * FUN_140693540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x240);
  }
  return param_1;
}



// FUNCTION 140693570 FUN_140693570 body=43 status=ok
// SIG undefined FUN_140693570(void)

undefined8 * FUN_140693570(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x370);
  }
  return param_1;
}



// FUNCTION 1406935a0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SDPIScaler>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x410);
  }
  return param_1;
}



// FUNCTION 1406935d0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D12VertexDeclaration::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 140693600 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SEditableText>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 140693630 FUN_140693630 body=43 status=ok
// SIG undefined FUN_140693630(void)

undefined8 * FUN_140693630(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xba8);
  }
  return param_1;
}



// FUNCTION 140693660 FUN_140693660 body=43 status=ok
// SIG undefined FUN_140693660(void)

undefined8 * FUN_140693660(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e10);
  }
  return param_1;
}



// FUNCTION 140693690 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SPopupErrorText>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x378);
  }
  return param_1;
}



// FUNCTION 1406936c0 FUN_1406936c0 body=43 status=ok
// SIG undefined FUN_1406936c0(void)

undefined8 * FUN_1406936c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x660);
  }
  return param_1;
}



// FUNCTION 1406936f0 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FButtonStyle::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144042bb0;
  FSlateBrush::~FSlateBrush(param_1 + 0x34);
  FSlateBrush::~FSlateBrush(param_1 + 0x23);
  FSlateBrush::~FSlateBrush(param_1 + 0x12);
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_144042b80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 140693760 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FHyperlinkStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FHyperlinkStyle();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x470);
  }
  return param_1;
}



// FUNCTION 1406937a0 FUN_1406937a0 body=96 status=ok
// SIG undefined FUN_1406937a0(void)

longlong FUN_1406937a0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  FSelfRegisteringExec::~FSelfRegisteringExec(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140693800 FUN_140693800 body=43 status=ok
// SIG undefined FUN_140693800(void)

undefined8 * FUN_140693800(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144042b80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140693830 `scalar_deleting_destructor' body=92 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * SBoxPanel::FSlot::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144042bf8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xf);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 7);
  FSlotBase::~FSlotBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140693890 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SCanvas::FSlot::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x50);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x30);
  FSlotBase::~FSlotBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1406938e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FTableRowStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140691440();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6b8);
  }
  return param_1;
}



// FUNCTION 140693920 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessMotionBlurPS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140691580();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 140693960 `scalar_deleting_destructor' body=153 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SButton::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x440);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x430);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x420);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x410);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x400);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3a0);
  FUN_140691710(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x488);
  }
  return param_1;
}



// FUNCTION 140693a00 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 STableColumnHeader::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406919e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 140693a50 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SHeaderRow::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~SHeaderRow();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x400);
  }
  return param_1;
}



// FUNCTION 140693aa0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SPopupLayer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  SBoxPanel::~SBoxPanel();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 140693af0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SHyperlink::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~SHyperlink();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x498);
  }
  return param_1;
}



// FUNCTION 140693b40 FUN_140693b40 body=78 status=ok
// SIG undefined FUN_140693b40(void)

undefined8 FUN_140693b40(undefined8 param_1,ulonglong param_2)

{
  FUN_140691b90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb98);
  }
  return param_1;
}



// FUNCTION 140693ba0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UNetConnection::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140691c10();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1e00);
  }
  return param_1;
}



// FUNCTION 140693bf0 FUN_140693bf0 body=78 status=ok
// SIG undefined FUN_140693bf0(void)

undefined8 FUN_140693bf0(undefined8 param_1,ulonglong param_2)

{
  SSafeZone::~SSafeZone();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x368);
  }
  return param_1;
}



// FUNCTION 140693c40 FUN_140693c40 body=175 status=ok
// SIG undefined FUN_140693c40(void)

longlong FUN_140693c40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = operator_new(0x88);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = SHorizontalBox::FSlot::FSlot(lVar3);
  }
  if (*(char *)(param_1 + 0x228) == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x210);
    if ((lVar2 != 0) && (*(longlong *)(lVar3 + 8) != lVar2)) {
      *(longlong *)(lVar3 + 8) = lVar2;
      FUN_141802340(lVar3);
    }
    iVar1 = *(int *)(param_1 + 0x220);
    *(int *)(param_1 + 0x220) = iVar1 + 1;
    if (*(int *)(param_1 + 0x224) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x218,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x218) + (longlong)iVar1 * 8) = lVar3;
  }
  FUN_1418475e0(param_1,1);
  return lVar3;
}



// FUNCTION 140693cf0 FUN_140693cf0 body=220 status=ok
// SIG undefined FUN_140693cf0(void)

undefined8 * FUN_140693cf0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar6 = (undefined8 *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + -0x418,local_28);
  plVar3 = (longlong *)puVar6[1];
  uVar4 = *puVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  plVar7 = plVar3 + 1;
  *param_2 = uVar4;
  param_2[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
    LOCK();
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 140693dd0 FUN_140693dd0 body=226 status=ok
// SIG undefined FUN_140693dd0(void)

longlong * FUN_140693dd0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar4 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x10,local_28)
  ;
  plVar3 = (longlong *)plVar4[1];
  lVar6 = *plVar4 + -8;
  if (*plVar4 == 0) {
    lVar6 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  lVar5 = lVar6 + 8;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  *param_2 = lVar5;
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar3 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  return param_2;
}



// FUNCTION 140693ec0 AutoHeight body=139 status=ok
// SIG undefined AutoHeight(void)

longlong SVerticalBox::FSlot::AutoHeight
                   (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_24 = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,&local_40,param_3,param_4,0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
  *(undefined4 *)(param_1 + 0x28) = local_30;
  *(undefined1 *)(param_1 + 0x34) = local_24;
  *(undefined4 *)(param_1 + 0x30) = local_28;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x38,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 140693f70 FUN_140693f70 body=113 status=ok
// SIG undefined FUN_140693f70(void)

undefined8 * FUN_140693f70(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_18 [16];
  
  lVar1 = FWeakObjectPtr::Get(param_2);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((lVar1 != 0) && (DAT_146b17150 != 0)) {
    lVar2 = UEngine::GetFirstGamePlayer(DAT_146b17150,lVar1);
    if (lVar2 != 0) {
      plVar3 = (longlong *)UPlayer::GetPlayerController(lVar2,lVar1);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x7a8))(plVar3,param_1,local_18);
      }
    }
  }
  return param_1;
}



// FUNCTION 140693ff0 FUN_140693ff0 body=241 status=ok
// SIG undefined FUN_140693ff0(void)

longlong FUN_140693ff0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)param_2[1];
  local_18 = *param_2;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x38) != &local_18) {
    *(undefined8 *)(param_1 + 0x38) = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,&local_10);
  }
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 1406940f0 FUN_1406940f0 body=2549 status=ok
// SIG undefined FUN_1406940f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406940f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong **pplVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_538 [32];
  longlong local_518;
  longlong local_510;
  longlong local_508;
  longlong local_500;
  longlong local_4f8;
  longlong local_4f0;
  undefined1 local_4e8;
  undefined1 local_4e0;
  longlong local_4d8;
  longlong local_4c8;
  int local_4c0;
  int local_4bc;
  longlong *local_4b8;
  int local_4b0;
  longlong *local_4a8;
  int local_4a0;
  undefined1 local_498;
  undefined1 local_497;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 local_480;
  undefined4 local_478;
  undefined1 local_474;
  undefined8 local_470;
  undefined4 local_468;
  undefined2 local_460 [4];
  undefined8 local_458;
  undefined4 local_450;
  longlong *local_448;
  longlong *local_440;
  undefined1 local_438 [8];
  longlong *local_430;
  undefined1 local_420;
  undefined8 local_418;
  undefined4 local_410;
  longlong *local_408;
  longlong *local_400;
  undefined1 local_3f0 [8];
  longlong *local_3e8;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_538;
  plVar9 = (longlong *)(param_1 + 0x4f8);
  local_480 = 0;
  if ((longlong *)(param_2 + 0x108) != plVar9) {
    if ((*(int *)(param_2 + 0x110) == 0) ||
       (plVar7 = *(longlong **)(param_2 + 0x108), plVar7 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x500) != 0) &&
         (plVar7 = (longlong *)*plVar9, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*plVar9 != 0) {
          lVar11 = FMemory::Realloc(*plVar9,0,0);
          *plVar9 = lVar11;
        }
        *(undefined4 *)(param_1 + 0x500) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar9);
    }
  }
  plVar7 = (longlong *)(param_1 + 0x528);
  if ((longlong *)(param_2 + 0x118) != plVar7) {
    if ((*(int *)(param_2 + 0x120) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x118), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x530) != 0) &&
         (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar7 != 0) {
          lVar11 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar11;
        }
        *(undefined4 *)(param_1 + 0x530) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar7);
    }
  }
  plVar7 = (longlong *)(param_1 + 0x538);
  if ((longlong *)(param_2 + 0x138) != plVar7) {
    if ((*(int *)(param_2 + 0x140) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x138), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x540) != 0) &&
         (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar7 != 0) {
          lVar11 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar11;
        }
        *(undefined4 *)(param_1 + 0x540) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar7);
    }
  }
  plVar7 = (longlong *)(param_1 + 0x3a8);
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_2 + 0x148);
  if ((longlong *)(param_2 + 0x168) != plVar7) {
    if ((*(int *)(param_2 + 0x170) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x168), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3b0) != 0) &&
         (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar7 != 0) {
          lVar11 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar11;
        }
        *(undefined4 *)(param_1 + 0x3b0) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar7);
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5f8,param_2 + 0x178);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x608,param_2 + 0x188);
  plVar7 = (longlong *)(param_1 + 0x5e8);
  if ((longlong *)(param_2 + 0x198) != plVar7) {
    if ((*(int *)(param_2 + 0x1a0) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x198), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x5f0) != 0) &&
         (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar7 != 0) {
          lVar11 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar11;
        }
        *(undefined4 *)(param_1 + 0x5f0) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar7);
    }
  }
  *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_2 + 0x1a8);
  plVar7 = (longlong *)(param_1 + 0x3c0);
  *(undefined1 *)(param_1 + 0x3bc) = *(undefined1 *)(param_2 + 0x1ac);
  if ((longlong *)(param_2 + 0x1b0) != plVar7) {
    if ((*(int *)(param_2 + 0x1b8) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x1b0), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3c8) != 0) &&
         (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar7 != 0) {
          lVar11 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar11;
        }
        *(undefined4 *)(param_1 + 0x3c8) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar7);
    }
  }
  *(undefined1 *)(param_1 + 0x630) = *(undefined1 *)(param_2 + 0x1d0);
  *(undefined1 *)(param_1 + 0x418) = *(undefined1 *)(param_2 + 0x201);
  *(undefined1 *)(param_1 + 0x419) = *(undefined1 *)(param_2 + 0x202);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x204);
  *(undefined1 *)(param_1 + 0x631) = *(undefined1 *)(param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x632) = *(undefined1 *)(param_2 + 0x209);
  *(undefined1 *)(param_1 + 0x618) = *(undefined1 *)(param_2 + 0x210);
  *(undefined1 *)(param_1 + 0x619) = *(undefined1 *)(param_2 + 0x211);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x620,param_2 + 0x218);
  pplVar10 = (longlong **)(param_2 + 0x228);
  if (((*(int *)(param_2 + 0x230) == 0) || (*pplVar10 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**pplVar10 + 0x18))(), cVar5 == '\0')) {
    plVar7 = (longlong *)FMemory::Realloc(0,0x20);
    iVar12 = 2;
    local_4a0 = 2;
    local_4a8 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_GetPoolName_144044b88;
      lVar11 = FDelegateHandle::GenerateNewID();
      plVar7[2] = lVar11;
    }
    pplVar10 = &local_4a8;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    local_4b8 = (longlong *)0x0;
    local_4b0 = 0;
    if (((pplVar10 != &local_4b8) && (*(int *)(param_2 + 0x230) != 0)) &&
       (plVar7 = *pplVar10, plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_4b8);
    }
    pplVar10 = &local_4b8;
    bVar4 = true;
    bVar3 = false;
    plVar7 = local_4a8;
    iVar12 = local_4a0;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x508,pplVar10);
  if (bVar3) {
    if (iVar12 != 0) {
      if (plVar7 == (longlong *)0x0) goto LAB_14069450f;
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      plVar7 = (longlong *)FMemory::Realloc(plVar7,0,0);
      local_4a8 = plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      FMemory::Free(plVar7);
    }
  }
LAB_14069450f:
  if (bVar4) {
    if (local_4b0 != 0) {
      if (local_4b8 == (longlong *)0x0) goto LAB_140694565;
      (**(code **)(*local_4b8 + 0x28))(local_4b8,0);
      if (local_4b8 != (longlong *)0x0) {
        local_4b8 = (longlong *)FMemory::Realloc(local_4b8,0,0);
      }
      local_4b0 = 0;
    }
    if (local_4b8 != (longlong *)0x0) {
      FMemory::Free(local_4b8);
    }
  }
LAB_140694565:
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x518,param_2 + 0x238);
  local_4c8 = 0;
  local_4bc = 0;
  local_4c0 = 0;
  iVar12 = 0;
  if (((*(int *)(param_1 + 0x500) == 0) || (iVar12 = 0, (longlong *)*plVar9 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*(longlong *)*plVar9 + 0x18))(), iVar12 = local_4c0, cVar5 == '\0')) {
    local_4c0 = (0x23 - (uint)(iVar12 != 0)) + iVar12;
    if (local_4bc < local_4c0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c8,iVar12);
    }
    lVar11 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
    builtin_wcsncpy((wchar_t *)(local_4c8 + lVar11 * 2),L"Please s",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x10 + lVar11 * 2),L"pecify a",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x20 + lVar11 * 2),L"n OnGene",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x30 + lVar11 * 2),L"rateRow.",8);
    *(undefined4 *)(local_4c8 + 0x40 + lVar11 * 2) = 0xa0020;
    *(undefined2 *)(local_4c8 + 0x44 + lVar11 * 2) = 0;
  }
  iVar12 = local_4c0;
  if (*(longlong *)(param_1 + 0x5b8) == 0) {
    lVar11 = (longlong)local_4c0;
    local_4c0 = (0x24 - (uint)(local_4c0 != 0)) + local_4c0;
    if (local_4bc < local_4c0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c8,iVar12);
    }
    lVar11 = lVar11 - (ulonglong)(iVar12 != 0);
    builtin_wcsncpy((wchar_t *)(local_4c8 + lVar11 * 2),L"Please s",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x10 + lVar11 * 2),L"pecify a",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x20 + lVar11 * 2),L" ListIte",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x30 + lVar11 * 2),L"msSource",8);
    *(undefined4 *)(local_4c8 + 0x40 + lVar11 * 2) = 0x20002e;
    *(undefined2 *)(local_4c8 + 0x44 + lVar11 * 2) = 10;
    *(undefined2 *)(local_4c8 + 0x46 + lVar11 * 2) = 0;
  }
  if ((local_4c0 == 0) || (local_4c0 + -1 < 1)) {
    local_508 = param_2 + 0x128;
    local_460[0] = 0x103;
    local_510 = param_2 + 0x1d8;
    local_518 = param_2 + 0x1c0;
    local_458 = 0;
    local_478 = 0;
    local_450 = 0;
    local_474 = 1;
    local_470 = 0;
    local_468 = 0;
    FUN_1419b0690(param_1,&local_478,param_2 + 0x150,local_460);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_470);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_458);
    if (*(longlong *)(param_1 + 0x310) != 0) {
      SScrollBox::SetConsumeMouseWheel
                (*(longlong *)(param_1 + 0x310),*(undefined1 *)(param_2 + 0x200));
      local_498 = *(undefined1 *)(param_2 + 0x1e8);
      local_497 = *(undefined1 *)(param_2 + 0x1e9);
      local_490 = 0;
      local_488 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_490,param_2 + 0x1f0);
      lVar11 = *(longlong *)(param_1 + 0x310);
      *(undefined1 *)(lVar11 + 0x388) = local_498;
      *(undefined1 *)(lVar11 + 0x389) = local_497;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x390,&local_490);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_490);
    }
  }
  else {
    uVar8 = FText::FromString(local_3f0,&local_4c8);
    FText::FText(local_438,uVar8);
    local_420 = 1;
    local_418 = 0;
    local_410 = 0;
    lVar11 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar11 + 0x108,local_438);
    *(undefined1 *)(lVar11 + 0x120) = local_420;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x128,&local_418);
    plVar9 = (longlong *)operator_new(0x660);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_144043520;
      if (plVar9 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar7 = plVar9 + 2;
    local_408 = plVar7;
    local_400 = plVar9;
    FUN_14044f790(&local_408,plVar7);
    local_518 = 0x650;
    SWidget::SetDebugInfo
              (plVar7,"STextBlock",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0xc3);
    local_4d8 = lVar11 + 0xf8;
    local_4f0 = lVar11 + 0xe8;
    local_4e0 = *(undefined1 *)(lVar11 + 0xf1);
    local_4f8 = lVar11 + 200;
    local_500 = lVar11 + 0x98;
    local_4e8 = *(undefined1 *)(lVar11 + 0xf0);
    local_510 = lVar11 + 0x78;
    local_518 = lVar11 + 0x60;
    local_508 = CONCAT44(local_508._4_4_,*(undefined4 *)(lVar11 + 0x90));
    SWidget::SWidgetConstruct(plVar7,lVar11,lVar11 + 0x30,lVar11 + 0x40);
    FUN_1419b0120(plVar7,lVar11);
    if (((char)plVar9[5] < '\0') || (cVar5 = (**(code **)(*plVar7 + 0x1e8))(plVar7), cVar5 != '\0'))
    {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar6;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 0x238) = 2;
    *(undefined4 *)(param_1 + 0x23c) = 2;
    local_448 = plVar7;
    local_440 = plVar9;
    TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_448);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar9 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      LOCK();
      plVar7 = plVar9 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      LOCK();
      plVar7 = plVar9 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_418);
    if (local_430 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_430 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_430)(local_430);
        LOCK();
        piVar1 = (int *)((longlong)local_430 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_430 + 8))(local_430,1);
        }
      }
    }
    if (local_3e8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_3e8 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_3e8)(local_3e8);
        LOCK();
        piVar1 = (int *)((longlong)local_3e8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_3e8 + 8))(local_3e8,1);
        }
      }
    }
  }
  if (local_4c8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140694af0 FUN_140694af0 body=1440 status=ok
// SIG undefined FUN_140694af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140694af0(longlong *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  undefined1 auStack_428 [32];
  undefined8 local_408;
  undefined1 local_3f8 [8];
  longlong *local_3f0;
  longlong *local_3e8;
  undefined8 local_3e0;
  longlong *plStack_3d8;
  code *local_3c8;
  undefined8 uStack_3c0;
  longlong *local_3b8;
  int local_3b0;
  longlong *local_3a8;
  longlong *local_3a0;
  longlong *local_398;
  undefined1 *local_390;
  undefined8 local_388;
  code *local_378;
  longlong *plStack_370;
  undefined1 local_368 [8];
  undefined1 local_360 [8];
  longlong *local_358;
  code *local_348;
  longlong lStack_340;
  undefined8 local_338;
  longlong *plStack_330;
  undefined1 local_328 [264];
  longlong local_220;
  undefined1 local_208 [448];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  local_3a8 = param_3;
  plVar6 = (longlong *)operator_new(0x248);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_144044b58;
    if (plVar6 != (longlong *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  plVar10 = plVar6 + 2;
  local_3a0 = plVar10;
  local_398 = plVar6;
  FUN_14044f790(&local_3a0,plVar10);
  local_390 = local_3f8;
  local_408 = 0x238;
  SWidget::SetDebugInfo
            (plVar10,"SHorizontalBox",
             "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/STableRow.h",
             0x417);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_3f0 = plVar10;
  local_3e8 = plVar6;
  if ((longlong **)(param_1 + 0x88) != &local_3f0) {
    param_1[0x88] = (longlong)plVar10;
    local_3f0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x89,&local_3e8);
  }
  plVar6 = local_3e8;
  if (local_3e8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_3e8 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_3e8)(local_3e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3e8 + 8))(local_3e8,1);
      }
    }
  }
  uVar7 = SCanvas::FArguments::FArguments(local_328);
  puVar8 = (undefined8 *)FUN_140693150(&local_3a0,local_360,uVar7);
  plVar6 = (longlong *)puVar8[1];
  local_388 = *puVar8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x108);
  lVar9 = FUN_14068ed70(local_208);
  *(undefined8 *)(lVar9 + 0x108) = uVar7;
  *(undefined8 *)(lVar9 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  uVar7 = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(lVar9 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(lVar9 + 0x180) = uVar7;
  *(undefined1 *)(lVar9 + 0x188) = *(undefined1 *)(param_2 + 0x188);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 400,param_2 + 400);
  *(undefined1 *)(lVar9 + 0x1a0) = *(undefined1 *)(param_2 + 0x1a0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x118,param_2 + 0x118);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,param_2 + 0x128);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x138,param_2 + 0x138);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x148,param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x158,param_2 + 0x158);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x168,param_2 + 0x168);
  local_3e0 = local_388;
  puVar8 = (undefined8 *)(lVar9 + 0x1a8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plStack_3d8 = plVar6;
  if (&local_3e0 != puVar8) {
    local_3e0 = *puVar8;
    plStack_3d8 = *(longlong **)(lVar9 + 0x1b0);
    local_338 = local_388;
    *puVar8 = local_388;
    *(longlong **)(lVar9 + 0x1b0) = plVar6;
    plStack_330 = plVar6;
  }
  plVar10 = plStack_3d8;
  if (plStack_3d8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_3d8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_3d8)(plStack_3d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_3d8 + 8))(plStack_3d8,1);
      }
    }
  }
  plVar10 = local_3a8;
  FUN_140696ee0(param_1,lVar9,local_3a8);
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined4 *)(*plVar10 + 0x2f8),lVar9 + 0x178,puVar8);
  FUN_140690c40(local_208);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (local_358 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_358 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_358)(local_358);
      LOCK();
      piVar1 = (int *)((longlong)local_358 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_358 + 8))(local_358,1);
      }
    }
  }
  plVar6 = local_398;
  if (local_398 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_398 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_398)(local_398);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_398 + 8))(local_398,1);
      }
    }
  }
  if (local_220 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_328);
  ANavigationData::GetDefaultQueryFilter(*local_3a8,&local_378);
  pcVar5 = local_378;
  local_3c8 = FUN_1406993d0;
  uStack_3c0 = (longlong *)((ulonglong)uStack_3c0._4_4_ << 0x20);
  pcVar11 = local_378 + 0x3d0;
  local_348 = FUN_1406993d0;
  lStack_340 = (longlong)uStack_3c0;
  plVar6 = (longlong *)FUN_14068c3f0(&local_3b8,param_1,&local_348);
  if (((int)plVar6[1] != 0) && (*plVar6 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(pcVar11,1);
    if (((int)plVar6[1] != 0) && (plVar10 = (longlong *)*plVar6, plVar10 != (longlong *)0x0)) {
      (**(code **)(*plVar10 + 0x20))(plVar10,local_368);
    }
    iVar3 = *(int *)(pcVar5 + 0x3d8);
    *(int *)(pcVar5 + 0x3d8) = iVar3 + 1;
    if (*(int *)(pcVar5 + 0x3dc) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pcVar11,iVar3);
    }
    plVar10 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)pcVar11);
    *plVar10 = 0;
    *plVar10 = *plVar6;
    *plVar6 = 0;
    *(int *)(plVar10 + 1) = (int)plVar6[1];
    *(undefined4 *)(plVar6 + 1) = 0;
  }
  if (local_3b0 != 0) {
    if (local_3b8 == (longlong *)0x0) goto LAB_140694fcb;
    (**(code **)(*local_3b8 + 0x28))(local_3b8,0);
    if (local_3b8 != (longlong *)0x0) {
      local_3b8 = (longlong *)FMemory::Realloc(local_3b8,0,0);
    }
    local_3b0 = 0;
  }
  if (local_3b8 != (longlong *)0x0) {
    FMemory::Free(local_3b8);
  }
LAB_140694fcb:
  local_3c8 = local_378;
  uStack_3c0 = plStack_370;
  if (plStack_370 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_370 + 1) = (int)plStack_370[1] + 1;
    UNLOCK();
  }
  FUN_1406993d0(param_1,&local_3c8);
  plVar6 = uStack_3c0;
  if (uStack_3c0 != (longlong *)0x0) {
    LOCK();
    plVar10 = uStack_3c0 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*uStack_3c0)(uStack_3c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_3c0 + 8))(uStack_3c0,1);
      }
    }
  }
  if (plStack_370 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_370 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_370)(plStack_370);
      LOCK();
      piVar1 = (int *)((longlong)plStack_370 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_370 + 8))(plStack_370,1);
      }
    }
  }
  return;
}



// FUNCTION 140695090 FUN_140695090 body=986 status=ok
// SIG undefined FUN_140695090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140695090(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_448 [32];
  undefined1 local_428;
  byte local_427;
  undefined1 local_426;
  undefined1 local_425;
  undefined2 local_424;
  undefined2 uStack_422;
  longlong *local_420;
  int local_418;
  code *local_408;
  undefined4 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8;
  undefined8 local_3e0;
  longlong *plStack_3d8;
  undefined1 local_3d0;
  longlong *local_3c8;
  int local_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined1 local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined1 local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined1 local_340 [760];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  _local_424 = 0;
  local_420 = param_1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x91,param_2 + 0x178);
  lVar10 = *(longlong *)(param_2 + 0x148);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_2 + 0x138) + 8;
  }
  lVar9 = *(longlong *)(param_2 + 0x140);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_2 + 0x138) + 0x280;
  }
  bVar11 = *(char *)(param_2 + 0x160) == '\0';
  if (bVar11) {
    puVar7 = &local_390;
    local_380 = 1;
    local_378 = 0;
    local_370 = 0;
    local_390 = *(undefined8 *)(*(longlong *)(param_2 + 0x138) + 0x460);
    uStack_388 = *(undefined8 *)(*(longlong *)(param_2 + 0x138) + 0x468);
  }
  else {
    puVar7 = (undefined8 *)(param_2 + 0x150);
  }
  local_3b8 = *(undefined4 *)puVar7;
  uStack_3b4 = *(undefined4 *)((longlong)puVar7 + 4);
  uStack_3b0 = *(undefined4 *)(puVar7 + 1);
  uStack_3ac = *(undefined4 *)((longlong)puVar7 + 0xc);
  local_3a8 = *(undefined1 *)(puVar7 + 2);
  local_3a0 = 0;
  local_398 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_3a0,puVar7 + 3);
  if (bVar11) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_378);
  }
  local_3e8 = 2;
  local_368 = 0x3f800000;
  uStack_360 = 0x3f8000003f800000;
  local_3d0 = 1;
  local_3f8 = 0x3f800000;
  uStack_3f0 = 0x3f8000003f800000;
  local_3c8 = (longlong *)0x0;
  local_3c0 = 0;
  local_3e0 = 0;
  plStack_3d8 = (longlong *)0x0;
  local_408 = FUN_14069c060;
  uStack_400 = 0;
  local_427 = (byte)local_424;
  local_424 = (ushort)(byte)local_424;
  bVar11 = *(char *)(param_2 + 0x18b) != '\0';
  if (bVar11) {
    local_427 = *(byte *)(param_2 + 0x18a);
    local_424 = CONCAT11(1,local_427);
  }
  bVar12 = *(char *)(param_2 + 0x189) != '\0';
  if (bVar12) {
    local_426 = *(undefined1 *)(param_2 + 0x188);
  }
  local_428 = local_426;
  local_425 = bVar12;
  lVar4 = FUN_14068f3e0(local_340);
  FText::operator=(lVar4 + 0x158,param_2 + 0x108);
  *(undefined1 *)(lVar4 + 0x170) = *(undefined1 *)(param_2 + 0x120);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + 0x178,param_2 + 0x128);
  *(undefined4 *)(lVar4 + 0x130) = local_3b8;
  *(undefined4 *)(lVar4 + 0x134) = uStack_3b4;
  *(undefined4 *)(lVar4 + 0x138) = uStack_3b0;
  *(undefined4 *)(lVar4 + 0x13c) = uStack_3ac;
  *(undefined1 *)(lVar4 + 0x140) = local_3a8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + 0x148,&local_3a0);
  plVar3 = local_420;
  *(longlong *)(lVar4 + 0x118) = lVar10;
  *(longlong *)(lVar4 + 0x120) = lVar9;
  uVar5 = FUN_14068c820(&local_420,local_420,&local_408);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + 0x188,uVar5);
  if (local_418 != 0) {
    if (local_420 == (longlong *)0x0) goto LAB_140695310;
    (**(code **)(*local_420 + 0x28))(local_420,0);
    if (local_420 != (longlong *)0x0) {
      local_420 = (longlong *)FMemory::Realloc(local_420,0,0);
    }
    local_418 = 0;
  }
  if (local_420 != (longlong *)0x0) {
    FMemory::Free(local_420);
  }
LAB_140695310:
  FUN_140692440(lVar4 + 0x268,&local_3f8);
  *(undefined1 *)(lVar4 + 0x290) = local_3d0;
  pplVar8 = (longlong **)(lVar4 + 0x298);
  if (&local_3c8 != pplVar8) {
    if ((local_3c0 == 0) || (local_3c8 == (longlong *)0x0)) {
      if ((*(int *)(lVar4 + 0x2a0) != 0) && (plVar6 = *pplVar8, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar8 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar8,0,0);
          *pplVar8 = plVar6;
        }
        *(undefined4 *)(lVar4 + 0x2a0) = 0;
      }
    }
    else {
      (**(code **)(*local_3c8 + 0x30))(local_3c8,pplVar8);
    }
  }
  if (&local_426 != (undefined1 *)(lVar4 + 0x2f0)) {
    if (*(char *)(lVar4 + 0x2f1) != '\0') {
      *(undefined1 *)(lVar4 + 0x2f1) = 0;
    }
    if (bVar12) {
      *(undefined1 *)(lVar4 + 0x2f0) = local_428;
      *(undefined1 *)(lVar4 + 0x2f1) = 1;
    }
  }
  if ((byte *)&local_424 != (byte *)(lVar4 + 0x2f2)) {
    if (*(char *)(lVar4 + 0x2f3) != '\0') {
      *(undefined1 *)(lVar4 + 0x2f3) = 0;
    }
    if (bVar11) {
      *(byte *)(lVar4 + 0x2f2) = local_427;
      *(undefined1 *)(lVar4 + 0x2f3) = 1;
    }
  }
  FUN_14192dae0(plVar3,lVar4);
  FUN_140690f70(local_340);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3c8);
  plVar3 = plStack_3d8;
  if (plStack_3d8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_3d8 + 1;
    lVar10 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_3d8)(plStack_3d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_3d8 + 8))(plStack_3d8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3a0);
  return;
}



// FUNCTION 140695470 FUN_140695470 body=914 status=ok
// SIG undefined FUN_140695470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140695470(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 local_268;
  undefined8 local_260;
  longlong *plStack_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 local_240;
  undefined8 local_238;
  longlong *plStack_230;
  undefined1 local_228 [8];
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 local_1f8 [448];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  puVar6 = (undefined8 *)(param_1 + 0x4c0);
  uStack_280 = *(longlong **)(param_2 + 0x110);
  local_288 = *(undefined8 *)(param_2 + 0x108);
  if (uStack_280 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_280 + 1) = (int)uStack_280[1] + 1;
    UNLOCK();
  }
  if (&local_288 != puVar6) {
    local_288._4_4_ = (undefined4)((ulonglong)local_288 >> 0x20);
    uStack_280._4_4_ = (undefined4)((ulonglong)uStack_280 >> 0x20);
    uVar4 = *puVar6;
    plVar5 = *(longlong **)(param_1 + 0x4c8);
    local_210 = (undefined4)local_288;
    uStack_20c = local_288._4_4_;
    uStack_208 = (undefined4)uStack_280;
    uStack_204 = uStack_280._4_4_;
    *(undefined4 *)puVar6 = (undefined4)local_288;
    *(undefined4 *)(param_1 + 0x4c4) = local_288._4_4_;
    *(undefined4 *)(param_1 + 0x4c8) = (undefined4)uStack_280;
    *(undefined4 *)(param_1 + 0x4cc) = uStack_280._4_4_;
    local_288 = uVar4;
    uStack_280 = plVar5;
  }
  plVar5 = uStack_280;
  if (uStack_280 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_280 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_280)(uStack_280);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_280 + 8))(uStack_280,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x4ac) = *(undefined1 *)(param_2 + 0x124);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4b0,param_2 + 0x128);
  plVar5 = DAT_1469eb140;
  puVar6 = (undefined8 *)FName::FName(local_228,L"TableView.DarkRow",1);
  local_220 = *puVar6;
  local_218 = local_220;
  lVar7 = (**(code **)(*plVar5 + 0x80))(plVar5,DAT_1469eb1e0);
  if (lVar7 == 0) {
    lVar7 = FUN_1418352d0();
  }
  FUN_1406922e0(param_1 + 0x4e8,lVar7 + 8);
  FUN_1406922e0(param_1 + 0x570,lVar7 + 0x90);
  FUN_1406922e0(param_1 + 0x5f8,lVar7 + 0x118);
  FUN_1406922e0(param_1 + 0x680,lVar7 + 0x1a0);
  FUN_1406922e0(param_1 + 0x708,lVar7 + 0x228);
  FUN_1406922e0(param_1 + 0x790,lVar7 + 0x2b0);
  FUN_1406922e0(param_1 + 0x818,lVar7 + 0x338);
  FUN_1406922e0(param_1 + 0x8a0,lVar7 + 0x3c0);
  FUN_1406922e0(param_1 + 0x928,lVar7 + 0x448);
  FUN_140692440(param_1 + 0x9b0,lVar7 + 0x4d0);
  FUN_140692440(param_1 + 0x9d8,lVar7 + 0x4f8);
  FUN_1406922e0(param_1 + 0xa00,lVar7 + 0x520);
  FUN_1406922e0(param_1 + 0xa88,lVar7 + 0x5a8);
  FUN_1406922e0(param_1 + 0xb10,lVar7 + 0x630);
  local_268 = 0;
  local_278 = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_26c = 0x3f19999a;
  local_260 = 0;
  plStack_258 = (longlong *)0x0;
  FUN_140692440(param_1 + 0x838,&local_278);
  plVar5 = plStack_258;
  if (plStack_258 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_258 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_258)(plStack_258);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_258 + 8))(plStack_258,1);
      }
    }
  }
  local_240 = 0;
  local_250 = 0;
  uStack_24c = 0;
  uStack_248 = 0;
  uStack_244 = 0x3f000000;
  local_238 = 0;
  plStack_230 = (longlong *)0x0;
  FUN_140692440(param_1 + 0x948,&local_250);
  plVar5 = plStack_230;
  if (plStack_230 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_230 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_230)(plStack_230);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_230 + 8))(plStack_230,1);
      }
    }
  }
  lVar7 = FUN_14068ed70(local_1f8);
  *(longlong *)(lVar7 + 0x108) = param_1 + 0x4e0;
  FUN_140694af0(param_1,lVar7,param_3);
  FUN_140690c40(local_1f8);
  return;
}



// FUNCTION 140695810 FUN_140695810 body=3612 status=ok
// SIG undefined FUN_140695810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140695810(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong **pplVar13;
  longlong *plVar14;
  undefined1 auStack_de8 [32];
  longlong local_dc8;
  longlong local_dc0;
  undefined4 local_db8;
  longlong local_db0;
  longlong local_da8;
  longlong local_da0;
  undefined1 local_d98;
  undefined1 local_d90;
  longlong local_d88;
  longlong *local_d78;
  longlong *plStack_d70;
  longlong *local_d68;
  longlong *local_d60;
  longlong local_d58;
  longlong local_d50;
  longlong *local_d48;
  int local_d40;
  longlong local_d38 [6];
  undefined1 local_d08 [8];
  undefined4 local_d00;
  undefined8 local_cf8;
  undefined8 local_cf0;
  undefined8 local_ce8;
  undefined1 local_ce0 [8];
  longlong local_cd8;
  undefined8 local_cc8;
  undefined4 uStack_cc0;
  undefined4 uStack_cbc;
  longlong *local_cb8;
  longlong *local_cb0;
  undefined1 local_ca8 [8];
  longlong *local_ca0;
  undefined1 local_c90;
  undefined8 local_c88;
  undefined4 local_c80;
  undefined1 local_c78 [8];
  longlong *local_c70;
  undefined1 local_c60;
  undefined8 local_c58;
  undefined4 local_c50;
  undefined1 local_c48 [8];
  longlong *local_c40;
  undefined1 local_c30;
  undefined8 local_c28;
  undefined4 local_c20;
  undefined4 local_c18;
  undefined4 uStack_c14;
  undefined4 uStack_c10;
  undefined4 uStack_c0c;
  undefined4 local_c08;
  undefined4 uStack_c04;
  undefined4 uStack_c00;
  undefined4 uStack_bfc;
  char local_bf8 [16];
  undefined4 local_be8;
  undefined4 uStack_be4;
  undefined4 uStack_be0;
  undefined4 uStack_bdc;
  char local_bd8 [16];
  undefined4 local_bc8;
  undefined4 uStack_bc4;
  undefined4 uStack_bc0;
  undefined4 uStack_bbc;
  undefined4 local_bb8;
  undefined4 uStack_bb4;
  undefined4 uStack_bb0;
  undefined4 uStack_bac;
  longlong *local_ba8;
  longlong *local_ba0;
  longlong *local_b90;
  longlong *local_b88;
  undefined1 local_b78 [8];
  undefined8 local_b70;
  undefined8 local_b68;
  undefined1 local_b60 [8];
  longlong *local_b58;
  undefined1 local_b48 [8];
  longlong *local_b40;
  undefined1 local_b30 [8];
  longlong *local_b28;
  longlong *local_b18;
  longlong *plStack_b10;
  undefined1 local_b08 [264];
  undefined1 local_a00 [16];
  undefined1 local_9f0 [16];
  undefined1 local_9e0 [16];
  undefined1 local_9d0 [32];
  undefined1 local_9b0 [16];
  undefined1 local_9a0 [16];
  undefined1 local_990 [16];
  undefined1 local_980 [16];
  undefined1 local_970 [24];
  undefined1 local_958 [24];
  longlong *local_940;
  longlong *local_928;
  undefined1 local_918 [40];
  undefined1 local_8f0 [16];
  undefined1 local_8e0 [16];
  undefined1 local_8d0 [24];
  undefined1 local_8b8 [272];
  longlong local_7a8;
  undefined1 local_798 [16];
  undefined1 local_788 [32];
  undefined1 local_768 [264];
  undefined8 local_660;
  undefined1 local_658 [24];
  undefined1 local_640;
  undefined1 local_638 [304];
  undefined1 local_508 [264];
  undefined8 local_400;
  undefined1 local_3f8 [24];
  undefined1 local_3e0;
  undefined1 local_3d8 [304];
  undefined1 local_2a8 [264];
  undefined8 local_1a0;
  undefined1 local_198 [24];
  undefined1 local_180;
  undefined1 local_178 [304];
  ulonglong local_48;
  
  plVar14 = DAT_1469eb140;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_de8;
  local_cd8 = param_1;
  puVar7 = (undefined8 *)FName::FName(local_b78,L"Hyperlink",1);
  local_b70 = *puVar7;
  local_b68 = local_b70;
  local_d50 = (**(code **)(*plVar14 + 0x80))(plVar14,DAT_1469eb178);
  if (local_d50 == 0) {
    local_d50 = FUN_141834e00();
  }
  local_c18 = 0x3f800000;
  uStack_c14 = 0;
  uStack_c10 = 0;
  uStack_c0c = 0x3f800000;
  local_d58 = param_1;
  FUN_140693010(&local_d58,0,&local_c18);
  local_c08 = 0x3f666666;
  uStack_c04 = 0x3f19999a;
  uStack_c00 = 0;
  uStack_bfc = 0x3f800000;
  FUN_140693010(&local_d58,1,&local_c08);
  builtin_strncpy(local_bf8,"33s?33s?",9);
  local_bf8[9] = '\0';
  local_bf8[10] = '\0';
  local_bf8[0xb] = '\0';
  local_bf8[0xc] = '\0';
  local_bf8[0xd] = '\0';
  local_bf8[0xe] = -0x80;
  local_bf8[0xf] = '?';
  FUN_140693010(&local_d58,2,local_bf8);
  local_be8 = 0;
  uStack_be4 = 0x3f800000;
  uStack_be0 = 0;
  uStack_bdc = 0x3f800000;
  FUN_140693010(&local_d58,3,&local_be8);
  builtin_strncpy(local_bd8,"33s?33s?33s?",0xd);
  local_bd8[0xd] = '\0';
  local_bd8[0xe] = -0x80;
  local_bd8[0xf] = '?';
  FUN_140693010(&local_d58,4,local_bd8);
  local_bc8 = 0x3e99999a;
  uStack_bc4 = 0x3e99999a;
  uStack_bc0 = 0x3f800000;
  uStack_bbc = 0x3f800000;
  FUN_140693010(&local_d58,5,&local_bc8);
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_2 + 0x140);
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
            (param_1 + 0x2f0,param_2 + 0x108);
  uVar11 = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  local_d00 = 0;
  *(undefined8 *)(param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x33c) = *(undefined1 *)(param_2 + 0x124);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x340,param_2 + 0x128);
  local_d38[4] = 0;
  local_d38[5] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d38 + 4,0);
  FGenericPlatformString::Memcpy(local_d38[4],L"Description",0x18);
  uVar8 = FText::FromString(local_b60,local_d38 + 4);
  FText::FText(local_c48,uVar8);
  local_c30 = 1;
  local_c28 = 0;
  local_c20 = 0;
  FName::FName(&local_cf8,L"desc",1);
  local_d38[2] = 0;
  local_d38[3] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d38 + 2,0);
  FGenericPlatformString::Memcpy(local_d38[2],L"Meters",0xe);
  uVar8 = FText::FromString(local_b30,local_d38 + 2);
  FText::FText(local_c78,uVar8);
  local_c60 = 1;
  local_c58 = 0;
  local_c50 = 0;
  FName::FName(&local_cf0,L"dist",1);
  local_d38[0] = 0;
  local_d38[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d38,0);
  FGenericPlatformString::Memcpy(local_d38[0],L"Issue",0xc);
  uVar8 = FText::FromString(local_b48,local_d38);
  FText::FText(local_ca8,uVar8);
  local_c90 = 1;
  local_c88 = 0;
  local_c80 = 0;
  FName::FName(&local_ce8,&DAT_144043f60,1);
  FUN_14068ef40(local_2a8);
  local_1a0 = local_cf8;
  FText::operator=(local_198,local_c48);
  local_180 = local_c30;
  TBaseDelegate<FSlateBrush_const_*>::operator=(local_178,&local_c28);
  FUN_14068ef40(local_508);
  local_400 = local_cf0;
  FText::operator=(local_3f8,local_c78);
  local_3e0 = local_c60;
  TBaseDelegate<FSlateBrush_const_*>::operator=(local_3d8,&local_c58);
  FUN_14068ef40(local_768);
  local_660 = local_ce8;
  FText::operator=(local_658,local_ca8);
  local_640 = local_c90;
  TBaseDelegate<FSlateBrush_const_*>::operator=(local_638,&local_c88);
  lVar9 = SHeaderRow::FArguments::FArguments(local_8b8);
  lVar10 = operator_new(0x140);
  uVar8 = uVar11;
  if (lVar10 != 0) {
    uVar8 = FUN_140690260(lVar10,local_768);
  }
  plVar14 = (longlong *)(lVar9 + 0x110);
  iVar4 = *(int *)(lVar9 + 0x118);
  *(int *)(lVar9 + 0x118) = iVar4 + 1;
  if (*(int *)(lVar9 + 0x11c) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar4);
  }
  *(undefined8 *)(*plVar14 + (longlong)iVar4 * 8) = uVar8;
  lVar10 = operator_new(0x140);
  uVar8 = uVar11;
  if (lVar10 != 0) {
    uVar8 = FUN_140690260(lVar10,local_508);
  }
  iVar4 = *(int *)(lVar9 + 0x118);
  *(int *)(lVar9 + 0x118) = iVar4 + 1;
  if (*(int *)(lVar9 + 0x11c) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar4);
  }
  *(undefined8 *)(*plVar14 + (longlong)iVar4 * 8) = uVar8;
  lVar10 = operator_new(0x140);
  if (lVar10 != 0) {
    uVar11 = FUN_140690260(lVar10,local_2a8);
  }
  iVar4 = *(int *)(lVar9 + 0x118);
  *(int *)(lVar9 + 0x118) = iVar4 + 1;
  if (*(int *)(lVar9 + 0x11c) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar4);
  }
  *(undefined8 *)(*plVar14 + (longlong)iVar4 * 8) = uVar11;
  plVar12 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SHeaderRow>();
  plVar14 = plVar12 + 2;
  local_ba8 = plVar14;
  local_ba0 = plVar12;
  FUN_14044f790(&local_ba8,plVar14);
  local_dc8 = 0x400;
  SWidget::SetDebugInfo
            (plVar14,"SHeaderRow",
             "D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxJira\\Source\\Private\\GbxJira.cpp",0xce);
  local_db8 = *(undefined4 *)(lVar9 + 0x90);
  local_d88 = lVar9 + 0xf8;
  local_da0 = lVar9 + 0xe8;
  local_d90 = *(undefined1 *)(lVar9 + 0xf1);
  local_da8 = lVar9 + 200;
  local_db0 = lVar9 + 0x98;
  local_d98 = *(undefined1 *)(lVar9 + 0xf0);
  local_dc0 = lVar9 + 0x78;
  local_dc8 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar14,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_1419ac350(plVar14,lVar9);
  if (((char)plVar12[5] < '\0') || (cVar5 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar5 != '\0')
     ) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar6;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar12 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_788);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_798);
  if (local_7a8 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_8b8);
  FUN_140690d00(local_768);
  FUN_140690d00(local_508);
  FUN_140690d00(local_2a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c88);
  if (local_ca0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_ca0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_ca0)(local_ca0);
      LOCK();
      piVar2 = (int *)((longlong)local_ca0 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_ca0 + 8))(local_ca0,1);
      }
    }
  }
  if (local_b40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_b40)(local_b40);
      LOCK();
      piVar2 = (int *)((longlong)local_b40 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_b40 + 8))(local_b40,1);
      }
    }
  }
  if (local_d38[0] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c58);
  if (local_c70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c70 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_c70)(local_c70);
      LOCK();
      piVar2 = (int *)((longlong)local_c70 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_c70 + 8))(local_c70,1);
      }
    }
  }
  if (local_b28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b28 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_b28)(local_b28);
      LOCK();
      piVar2 = (int *)((longlong)local_b28 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_b28 + 8))(local_b28,1);
      }
    }
  }
  if (local_d38[2] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c28);
  if (local_c40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_c40)(local_c40);
      LOCK();
      piVar2 = (int *)((longlong)local_c40 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_c40 + 8))(local_c40,1);
      }
    }
  }
  if (local_b58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b58 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_b58)(local_b58);
      LOCK();
      piVar2 = (int *)((longlong)local_b58 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_b58 + 8))(local_b58,1);
      }
    }
  }
  if (local_d38[4] != 0) {
    FMemory::Free();
  }
  FName::FName(local_ce0,&DAT_144043f60,1);
  FUN_1419bbe10(plVar14,local_ce0,0x3e23d70a);
  FName::FName(local_d08,L"dist",1);
  FUN_1419bbe10(plVar14,local_d08,0x3de147ae);
  uStack_cc0 = 0;
  local_cc8 = FUN_14069d380;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14068eb10(local_b08);
  *(undefined1 *)(lVar9 + 0x202) = 1;
  pplVar13 = (longlong **)(lVar9 + 0x1c0);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_d78 = plVar14;
  plStack_d70 = plVar12;
  if (&local_d78 != pplVar13) {
    local_d78 = *pplVar13;
    plStack_d70 = *(longlong **)(lVar9 + 0x1c8);
    *pplVar13 = plVar14;
    *(longlong **)(lVar9 + 0x1c8) = plVar12;
    local_b18 = plVar14;
    plStack_b10 = plVar12;
  }
  plVar14 = plStack_d70;
  if (plStack_d70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d70 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_d70)(plStack_d70);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_d70 + 8))(plStack_d70,1);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    lVar10 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  *(longlong *)(lVar9 + 0x148) = param_1 + 0x300;
  local_bb8 = (undefined4)local_cc8;
  uStack_bb4 = local_cc8._4_4_;
  uStack_bb0 = uStack_cc0;
  uStack_bac = uStack_cbc;
  uVar8 = FUN_14068cc40(&local_d48,param_1,&local_bb8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x108,uVar8);
  if (local_d40 != 0) {
    if (local_d48 == (longlong *)0x0) goto LAB_1406961f2;
    (**(code **)(*local_d48 + 0x28))(local_d48,0);
    if (local_d48 != (longlong *)0x0) {
      local_d48 = (longlong *)FMemory::Realloc(local_d48,0,0);
    }
    local_d40 = 0;
  }
  if (local_d48 != (longlong *)0x0) {
    FMemory::Free(local_d48);
  }
LAB_1406961f2:
  plVar14 = (longlong *)operator_new(0x648);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_FUN_144044af8;
    if (plVar14 + 2 != (longlong *)0x0) {
      FUN_14068e860(plVar14 + 2,0);
    }
  }
  plVar1 = plVar14 + 2;
  local_b90 = plVar1;
  local_b88 = plVar14;
  FUN_14044f790(&local_b90,plVar1);
  local_dc8 = 0x638;
  SWidget::SetDebugInfo
            (plVar1,"SListView<FJiraIssuePtr>",
             "D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxJira\\Source\\Private\\GbxJira.cpp",0xd6);
  local_db8 = *(undefined4 *)(lVar9 + 0x90);
  local_d88 = lVar9 + 0xf8;
  local_da0 = lVar9 + 0xe8;
  local_d90 = *(undefined1 *)(lVar9 + 0xf1);
  local_da8 = lVar9 + 200;
  local_db0 = lVar9 + 0x98;
  local_d98 = *(undefined1 *)(lVar9 + 0xf0);
  local_dc0 = lVar9 + 0x78;
  local_dc8 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_1406940f0(plVar1,lVar9);
  if (((char)plVar14[5] < '\0') || (cVar5 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar5 != '\0'))
  {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar6;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  pplVar13 = (longlong **)(param_1 + 800);
  local_d68 = plVar1;
  local_d60 = plVar14;
  if (pplVar13 != &local_d68) {
    *pplVar13 = plVar1;
    local_d68 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x328,&local_d60);
  }
  plVar1 = local_d60;
  if (local_d60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_d60 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_d60)(local_d60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_d60 + 8))(local_d60,1);
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
    LOCK();
    plVar1 = plVar14 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_8d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_8e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_8f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_918);
  if (local_928 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_928 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_928)(local_928);
      LOCK();
      piVar2 = (int *)((longlong)local_928 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_928 + 8))(local_928,1);
      }
    }
  }
  if (local_940 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_940 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_940)(local_940);
      LOCK();
      piVar2 = (int *)((longlong)local_940 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_940 + 8))(local_940,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_958);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_970);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_980);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_990);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_9a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_9b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_9d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_9e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_9f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_a00);
  FUN_140456c70(local_b08);
  plVar14 = *(longlong **)(param_1 + 0x328);
  local_cb8 = *pplVar13;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_cb0 = plVar14;
  TSlotBase<FSimpleSlot>::operator[](local_cd8 + 0x218,&local_cb8);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
    LOCK();
    plVar1 = plVar14 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return;
}



// FUNCTION 140696630 FUN_140696630 body=237 status=ok
// SIG undefined FUN_140696630(void)

void FUN_140696630(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined8 *)(param_1 + 0x428) = *param_4;
  plVar4 = (longlong *)param_4[1];
  plVar9 = *(longlong **)(param_1 + 0x430);
  if (plVar4 != plVar9) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(param_1 + 0x430);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    *(longlong **)(param_1 + 0x430) = plVar4;
  }
  uVar3 = *(undefined1 *)(param_3 + 4);
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,param_3 + 6);
  *(undefined1 *)(param_1 + 600) = uVar3;
  *(undefined4 *)(param_1 + 0x248) = uVar5;
  *(undefined4 *)(param_1 + 0x24c) = uVar6;
  *(undefined4 *)(param_1 + 0x250) = uVar7;
  *(undefined4 *)(param_1 + 0x254) = uVar8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x260,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x220,param_4);
  return;
}



// FUNCTION 140696720 FUN_140696720 body=1977 status=ok
// SIG undefined FUN_140696720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140696720(longlong param_1,uint param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_468 [32];
  longlong local_448;
  longlong local_440;
  undefined4 local_438;
  longlong local_430;
  longlong local_428;
  longlong local_420;
  undefined1 local_418;
  undefined1 local_410;
  longlong local_408;
  longlong local_3f8;
  undefined4 local_3f0;
  undefined4 local_3e8;
  undefined1 local_3e4;
  undefined8 local_3e0;
  undefined4 local_3d8;
  longlong local_3d0;
  longlong *local_3c8;
  longlong *local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  longlong *local_3a8;
  undefined4 local_3a0;
  undefined1 local_39c;
  undefined8 local_398;
  undefined4 local_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined1 local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined1 local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_338;
  longlong local_330;
  longlong *local_328;
  longlong *local_320;
  longlong *local_318;
  longlong *local_310;
  undefined1 local_308 [8];
  longlong *local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  longlong *local_2e0;
  longlong *local_2d8;
  undefined1 local_2c8 [280];
  undefined1 local_1b0 [24];
  undefined1 local_198 [24];
  undefined1 local_180 [24];
  undefined1 local_168 [264];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  *(undefined8 *)(param_1 + 0x428) = *param_4;
  plVar9 = (longlong *)param_4[1];
  plVar10 = *(longlong **)(param_1 + 0x430);
  local_3b8 = param_1;
  if (plVar9 != plVar10) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      plVar10 = *(longlong **)(param_1 + 0x430);
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    *(longlong **)(param_1 + 0x430) = plVar9;
  }
  lVar11 = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  if (param_2 < 2) {
    local_360 = *param_3;
    uStack_35c = param_3[1];
    uStack_358 = param_3[2];
    uStack_354 = param_3[3];
    local_350 = *(undefined1 *)(param_3 + 4);
    local_348 = 0;
    local_340 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_348,param_3 + 6);
    lVar8 = param_1 + 0x210;
    if (param_1 == -0x220) {
      lVar8 = lVar11;
    }
    *(undefined1 *)(lVar8 + 0x48) = local_350;
    *(undefined4 *)(lVar8 + 0x38) = local_360;
    *(undefined4 *)(lVar8 + 0x3c) = uStack_35c;
    *(undefined4 *)(lVar8 + 0x40) = uStack_358;
    *(undefined4 *)(lVar8 + 0x44) = uStack_354;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x50,&local_348);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_348);
    TSlotBase<FSimpleSlot>::operator[](lVar8 + 0x10,param_4);
    lVar7 = lVar8 + 0x10;
    if (lVar8 == 0) {
      lVar7 = lVar11;
    }
    *(longlong *)(param_1 + 0x420) = lVar7;
  }
  else {
    local_338 = *param_4;
    local_330 = param_4[1];
    local_3a0 = 0x3f800000;
    local_39c = 1;
    local_398 = 0;
    local_390 = 0;
    if (local_330 != 0) {
      LOCK();
      *(int *)(local_330 + 8) = *(int *)(local_330 + 8) + 1;
      UNLOCK();
    }
    local_388 = *param_3;
    uStack_384 = param_3[1];
    uStack_380 = param_3[2];
    uStack_37c = param_3[3];
    local_378 = *(undefined1 *)(param_3 + 4);
    local_370 = 0;
    local_368 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_370,param_3 + 6);
    lVar7 = operator_new(0x88);
    lVar8 = lVar11;
    if (lVar7 != 0) {
      lVar8 = SHorizontalBox::FSlot::FSlot(lVar7);
    }
    local_3f0 = 1;
    local_3e8 = 0x3f800000;
    local_3e4 = 1;
    local_3e0 = 0;
    local_3d8 = 0;
    local_3f8 = lVar8;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_3e0,&local_398);
    *(undefined4 *)(lVar8 + 0x28) = local_3f0;
    *(undefined1 *)(lVar8 + 0x34) = local_3e4;
    *(undefined4 *)(lVar8 + 0x30) = local_3e8;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x38,&local_3e0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3e0);
    *(undefined4 *)(lVar8 + 0x48) = local_388;
    *(undefined4 *)(lVar8 + 0x4c) = uStack_384;
    *(undefined4 *)(lVar8 + 0x50) = uStack_380;
    *(undefined4 *)(lVar8 + 0x54) = uStack_37c;
    *(undefined1 *)(lVar8 + 0x58) = local_378;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x60,&local_370);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_370);
    uVar12 = *(undefined8 *)(param_1 + 0x3b0);
    lVar8 = SExpanderArrow::FArguments::FArguments(local_2c8);
    *(undefined8 *)(lVar8 + 0x108) = uVar12;
    plVar9 = (longlong *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x10,local_308);
    if (*plVar9 == 0) {
      local_3d0 = 0;
    }
    else {
      local_3d0 = *plVar9 + -8;
    }
    local_3c8 = (longlong *)plVar9[1];
    if (local_3c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_3c8 + 1) = (int)local_3c8[1] + 1;
      UNLOCK();
    }
    if (local_300 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_300 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_300)(local_300);
        LOCK();
        piVar1 = (int *)((longlong)local_300 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_300 + 8))(local_300,1);
        }
      }
    }
    local_3c0 = &local_3d0;
    plVar10 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SExpanderArrow>();
    plVar9 = plVar10 + 2;
    local_2f8 = plVar9;
    local_2f0 = plVar10;
    FUN_14044f790(&local_2f8,plVar9);
    local_448 = 0x360;
    SWidget::SetDebugInfo
              (plVar9,"SExpanderArrow",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/STableRow.h",
               0xe3);
    local_438 = *(undefined4 *)(lVar8 + 0x90);
    local_408 = lVar8 + 0xf8;
    local_420 = lVar8 + 0xe8;
    local_410 = *(undefined1 *)(lVar8 + 0xf1);
    local_428 = lVar8 + 200;
    local_430 = lVar8 + 0x98;
    local_418 = *(undefined1 *)(lVar8 + 0xf0);
    local_440 = lVar8 + 0x78;
    local_448 = lVar8 + 0x60;
    SWidget::SWidgetConstruct(plVar9,lVar8,lVar8 + 0x30,lVar8 + 0x40);
    local_3b0 = *local_3c0;
    local_3a8 = (longlong *)local_3c0[1];
    if (local_3a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_3a8 + 1) = (int)local_3a8[1] + 1;
      UNLOCK();
    }
    FUN_1419ab980(plVar9,lVar8,&local_3b0);
    plVar3 = local_3a8;
    if (local_3a8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_3a8 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_3a8)(local_3a8);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (((char)plVar10[5] < '\0') || (cVar5 = (**(code **)(*plVar9 + 0x1e8))(plVar9), cVar5 != '\0')
       ) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar6;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_328 = plVar9;
    local_320 = plVar10;
    lVar8 = operator_new(0x88);
    if (lVar8 != 0) {
      lVar11 = SHorizontalBox::FSlot::FSlot(lVar8);
    }
    lVar11 = SVerticalBox::FSlot::AutoHeight(lVar11);
    *(undefined2 *)(lVar11 + 0x20) = 3;
    plVar9 = (longlong *)operator_new(0x248);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_144044b58;
      if (plVar9 != (longlong *)0xfffffffffffffff0) {
        SHorizontalBox::SHorizontalBox();
      }
    }
    plVar3 = plVar9 + 2;
    local_2e0 = plVar3;
    local_2d8 = plVar9;
    FUN_14044f790(&local_2e0,plVar3);
    local_448 = 0x238;
    SWidget::SetDebugInfo
              (plVar3,"SHorizontalBox",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/STableRow.h",
               0xdc);
    uVar12 = FUN_140692760(local_3f8,&local_338);
    uVar13 = FUN_140692760(lVar11,&local_328);
    uVar14 = SCanvas::FArguments::FArguments(local_168);
    uVar13 = SOverlay::FArguments::operator+(uVar14,uVar13);
    lVar11 = SOverlay::FArguments::operator+(uVar13,uVar12);
    local_438 = *(undefined4 *)(lVar11 + 0x90);
    local_408 = lVar11 + 0xf8;
    local_420 = lVar11 + 0xe8;
    local_410 = *(undefined1 *)(lVar11 + 0xf1);
    local_428 = lVar11 + 200;
    local_430 = lVar11 + 0x98;
    local_418 = *(undefined1 *)(lVar11 + 0xf0);
    local_440 = lVar11 + 0x78;
    local_448 = lVar11 + 0x60;
    SWidget::SWidgetConstruct(plVar3,lVar11,lVar11 + 0x30,lVar11 + 0x40);
    SHorizontalBox::Construct(plVar3,lVar11);
    if (((char)plVar9[5] < '\0') || (cVar5 = (**(code **)(*plVar3 + 0x1e8))(plVar3), cVar5 != '\0'))
    {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    lVar11 = local_3b8;
    *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar6;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_318 = plVar3;
    local_310 = plVar9;
    TSlotBase<FSimpleSlot>::operator[](local_3b8 + 0x220,&local_318);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar9 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      LOCK();
      plVar3 = plVar9 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      LOCK();
      plVar3 = plVar9 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    FUN_140456c70(local_168);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar10 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      LOCK();
      plVar9 = plVar10 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    plVar9 = local_3c8;
    if (local_3c8 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_3c8 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_3c8)(local_3c8);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_180);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_198);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1b0);
    FUN_140456c70(local_2c8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_398);
    *(longlong *)(lVar11 + 0x420) = local_3f8;
  }
  return;
}



// FUNCTION 140696ee0 FUN_140696ee0 body=726 status=ok
// SIG undefined FUN_140696ee0(void)

void FUN_140696ee0(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *local_98;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined1 local_30;
  undefined1 local_28 [16];
  
  *(undefined1 *)(param_1 + 0x439) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_2 + 0x110);
  uStack_90 = 0;
  local_98 = FUN_14069b4d0;
  local_88 = 0x4069b4d0;
  uStack_84 = 1;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 1;
  FUN_14068c560(local_68,param_1,&local_88);
  *(undefined8 *)(param_1 + 0x2f8) = local_78;
  *(undefined1 *)(param_1 + 0x300) = local_70;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x308,local_68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  local_58 = 0x3f800000;
  uStack_50 = 0x3f8000003f800000;
  local_48 = 0;
  local_98 = FUN_14069b950;
  uStack_90 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 1;
  FUN_14068c6c0(local_28,param_1,&local_98);
  FUN_140692440(param_1 + 0x2b8,&local_58);
  *(undefined1 *)(param_1 + 0x2e0) = local_30;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2e8,local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_28);
  plVar3 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_38 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_38 + 8))(plStack_38,1);
      }
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3b8,param_2 + 0x118);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3c8,param_2 + 0x128);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3e0,param_2 + 0x138);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3f0,param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x400,param_2 + 0x158);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x410,param_2 + 0x168);
  plVar3 = (longlong *)param_3[1];
  lVar4 = *param_3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
  }
  lVar5 = lVar4 + 0x420;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  *(longlong *)(param_1 + 0x390) = lVar5;
  plVar6 = *(longlong **)(param_1 + 0x398);
  if (plVar3 != plVar6) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x398);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x398) = plVar3;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar3 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  *(undefined1 *)(param_1 + 0x3a4) = *(undefined1 *)(param_2 + 0x1a0);
  return;
}



// FUNCTION 1406971c0 FUN_1406971c0 body=66 status=ok
// SIG undefined FUN_1406971c0(void)

void FUN_1406971c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144044a48;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144044a90;
  }
  return;
}



// FUNCTION 140697210 FUN_140697210 body=56 status=ok
// SIG undefined FUN_140697210(void)

void FUN_140697210(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144044948;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 140697250 FUN_140697250 body=129 status=ok
// SIG undefined FUN_140697250(void)

void FUN_140697250(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *puVar1 = &PTR_GetPoolName_144044908;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x40) == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)(param_1 + 0x20);
    }
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (longlong *)(**(code **)*puVar4)();
      (**(code **)(*plVar2 + 8))(plVar2);
      puVar3 = *(undefined1 **)(param_1 + 0x10);
      goto LAB_1406972ba;
    }
  }
  puVar3 = &LAB_140693f50;
LAB_1406972ba:
  puVar1[2] = puVar3;
  puVar1[0xd] = *(undefined8 *)(param_1 + 0x68);
  return;
}



// FUNCTION 1406972e0 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144044b88;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 140697310 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_1440448a8;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 140697370 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144044868;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 1406973d0 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144043f20;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 140697430 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144044600;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 140697490 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144043770;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 1406974f0 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144044540;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 140697550 FUN_140697550 body=9 status=ok
// SIG undefined FUN_140697550(void)

void FUN_140697550(longlong param_1)

{
  FUN_1406907e0(param_1 + 0x10);
  return;
}



// FUNCTION 140697560 FUN_140697560 body=9 status=ok
// SIG undefined FUN_140697560(void)

void FUN_140697560(longlong param_1)

{
  FUN_140690a70(param_1 + 0x10);
  return;
}



// FUNCTION 140697570 FUN_140697570 body=9 status=ok
// SIG undefined FUN_140697570(void)

void FUN_140697570(longlong param_1)

{
  SBox::~SBox(param_1 + 0x10);
  return;
}



// FUNCTION 140697580 FUN_140697580 body=9 status=ok
// SIG undefined FUN_140697580(void)

void FUN_140697580(longlong param_1)

{
  SCanvas::~SCanvas(param_1 + 0x10);
  return;
}



// FUNCTION 1406975b0 FUN_1406975b0 body=9 status=ok
// SIG undefined FUN_1406975b0(void)

void FUN_1406975b0(longlong param_1)

{
  SBoxPanel::~SBoxPanel(param_1 + 0x10);
  return;
}



// FUNCTION 140697600 FUN_140697600 body=9 status=ok
// SIG undefined FUN_140697600(void)

void FUN_140697600(longlong param_1)

{
  FUN_1419a9810(param_1 + 0x10);
  return;
}



// FUNCTION 140697610 FUN_140697610 body=446 status=ok
// SIG undefined FUN_140697610(void)

void FUN_140697610(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)*param_1;
  for (iVar7 = *(int *)(param_1 + 1); iVar7 != 0; iVar7 = iVar7 + -1) {
    lVar4 = *plVar8;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + 0x130);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + 0x118);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + 0x108);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + 0xf0);
    if (*(char *)(lVar4 + 0xd8) != '\0') {
      *(undefined1 *)(lVar4 + 0xd8) = 0;
    }
    plVar5 = *(longlong **)(lVar4 + 0xb8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
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
    plVar5 = *(longlong **)(lVar4 + 0xa8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + 0x88);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + 0x70);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + 0x58);
    plVar5 = *(longlong **)(lVar4 + 0x40);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + 0x28);
    plVar5 = *(longlong **)(lVar4 + 0x10);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
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
    FMemory::Free(*plVar8);
    plVar8 = plVar8 + 1;
  }
  return;
}



// FUNCTION 1406977d0 Difference body=429 status=ok
// SIG undefined Difference(void)

undefined8 *
TSet<TSharedPtr<FInterfaceContainer,0>,DefaultKeyFuncs<TSharedPtr<FInterfaceContainer,0>,0>,FDefaultSetAllocator>
::Difference(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  undefined4 uStack_44;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  if (*(int *)(param_2 + 1) - *(int *)((longlong)param_2 + 0x34) <
      (int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) {
    TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Reserve(param_2);
  }
  iVar1 = (int)param_1[5];
  puStack_30 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar1 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puStack_30;
    }
    uVar2 = *puVar7;
    uStack_50 = 0;
    local_68 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_1406978cb;
      uVar2 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_58._4_4_ = (uStack_50 - iVar6) + 0x1f;
    if (iVar1 < local_58._4_4_) {
LAB_1406978cb:
      local_58._4_4_ = iVar1;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  iStack_20 = uStack_50;
  uStack_1c = iStack_4c;
  iStack_38 = local_68;
  uStack_34 = uStack_64;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_44 = iStack_4c;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar3 = local_58._4_4_ < iVar1;
  local_40 = param_1;
  local_58 = puStack_30;
  if (bVar3) {
    do {
      lVar5 = *param_1 + (longlong)iStack_4c * 0x18;
      piVar4 = (int *)TSet<TSharedRef<SWidget,0>,DefaultKeyFuncs<TSharedRef<SWidget,0>,0>,FDefaultSetAllocator>
                      ::FindId(param_3,local_res8,lVar5);
      if (*piVar4 == -1) {
        FUN_14068cfa0(param_2,local_res10,lVar5,0);
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return param_2;
}



// FUNCTION 140697980 FUN_140697980 body=181 status=ok
// SIG undefined FUN_140697980(void)

undefined1 FUN_140697980(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x398);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0x390);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  uVar4 = (**(code **)(*plVar7 + 0x58))(plVar7,*(undefined4 *)(param_1 + 0x3a0));
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 140697a40 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TSharedPtr<SWidget,0>,DefaultKeyFuncs<TSharedPtr<SWidget,0>,0>,FDefaultSetAllocator>::
     Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 140697ac0 FUN_140697ac0 body=3476 status=ok
// SIG undefined FUN_140697ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140697ac0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong **pplVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_648 [32];
  longlong local_628;
  longlong local_620;
  undefined4 local_618;
  longlong local_610;
  longlong local_608;
  longlong local_600;
  undefined1 local_5f8;
  undefined1 local_5f0;
  longlong local_5e8;
  uint local_5d8 [2];
  longlong local_5d0;
  longlong *local_5c8;
  undefined4 local_5c0;
  undefined4 local_5bc;
  longlong *local_5b8;
  longlong *plStack_5b0;
  longlong *local_5a8;
  longlong *plStack_5a0;
  undefined8 *local_598;
  int local_590;
  undefined4 local_58c;
  undefined8 local_588;
  undefined8 local_580;
  undefined4 local_578;
  undefined1 local_574;
  undefined8 local_570;
  undefined4 local_568;
  undefined8 local_560;
  longlong local_558;
  undefined4 local_550;
  undefined4 local_54c;
  undefined1 local_548;
  longlong local_540;
  undefined4 local_538;
  undefined8 local_530;
  undefined1 local_528;
  longlong local_520;
  undefined4 local_518;
  longlong *local_510;
  longlong *local_508;
  longlong *local_500;
  longlong *local_4f0;
  longlong *local_4e8;
  longlong *local_4d8;
  longlong *local_4d0;
  longlong *local_4c0;
  longlong *local_4b8;
  code *local_4a8;
  longlong local_498 [4];
  longlong *local_478;
  int local_468;
  longlong *local_458;
  longlong *plStack_450;
  longlong *local_448;
  longlong *plStack_440;
  undefined1 local_438 [264];
  undefined1 local_330 [32];
  undefined1 local_310 [40];
  undefined1 local_2e8 [296];
  undefined1 local_1c0 [24];
  longlong *local_1a8;
  undefined1 local_188 [264];
  longlong local_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_648;
  local_588 = param_3;
  local_560 = param_4;
  local_558 = param_1;
  cVar4 = FParse::Command(&local_588,L"listbugs",1);
  if (((cVar4 == '\0') || (DAT_146b17150 == 0)) || (*(longlong *)(DAT_146b17150 + 0x7b0) == 0)) {
    return 0;
  }
  plVar6 = (longlong *)FUN_14069bf40(param_2);
  if (plVar6 == (longlong *)0x0) {
    return 1;
  }
  if ((int)plVar6[1] == 0) {
    return 1;
  }
  FWeakObjectPtr::operator=(&local_5c0,param_2);
  uVar2 = local_5c0;
  local_5c8 = (longlong *)CONCAT44(local_5c8._4_4_,local_5bc);
  lVar7 = UWorld::GetWorldSettings(param_2,0,1);
  if (lVar7 == 0) {
    return 1;
  }
  plVar10 = (longlong *)0x0;
  plVar14 = *(longlong **)(param_1 + 0x18);
  plVar17 = plVar14;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    iVar16 = (int)plVar14[1];
    bVar18 = iVar16 == 0;
    if (bVar18) {
      *(int *)(plVar14 + 1) = 0;
      iVar16 = 0;
    }
    UNLOCK();
    while (plVar17 = plVar10, !bVar18) {
      LOCK();
      bVar18 = iVar16 == (int)plVar14[1];
      if (bVar18) {
        *(int *)(plVar14 + 1) = iVar16 + 1;
      }
      UNLOCK();
      if (bVar18) {
        plVar17 = plVar14;
        if ((plVar14 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x10) != 0)) {
          FUN_14069c4f0(param_1);
          goto LAB_1406987d5;
        }
        break;
      }
      LOCK();
      iVar16 = (int)plVar14[1];
      bVar18 = iVar16 == 0;
      if (bVar18) {
        *(int *)(plVar14 + 1) = 0;
        iVar16 = 0;
      }
      UNLOCK();
    }
  }
  local_5d8[0] = 8;
  FParse::Value(local_588,L"max=",local_5d8);
  if (-1 < (int)local_5d8[0]) {
    plVar10 = (longlong *)(ulonglong)local_5d8[0];
  }
  local_5d8[0] = (uint)plVar10;
  FOutputDevice::LogfImpl(local_560,L"Listing max=%d nearest bugs");
  local_478 = (longlong *)0x0;
  local_468 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_498);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_CopyToEmptyStorage_143fcfe50;
    *(undefined4 *)((longlong)puVar8 + 0xc) = local_5c8._0_4_;
    *(undefined4 *)(puVar8 + 1) = uVar2;
  }
  local_598 = (undefined8 *)0x0;
  iVar16 = (int)plVar6[1];
  lVar9 = *plVar6;
  local_4a8 = FUN_140693f70;
  local_590 = iVar16;
  if (iVar16 == 0) {
    local_58c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_598,iVar16,0);
    puVar8 = local_598;
    do {
      *puVar8 = *(undefined8 *)((lVar9 - (longlong)local_598) + (longlong)puVar8);
      lVar3 = *(longlong *)((lVar9 - (longlong)local_598) + 8 + (longlong)puVar8);
      puVar8[1] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      puVar8 = puVar8 + 2;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  uVar2 = *(undefined4 *)(lVar7 + 0x588);
  lVar7 = FUN_14068fce0(local_438);
  *(undefined4 *)(lVar7 + 0x138) = uVar2;
  *(longlong *)(lVar7 + 0x140) = (longlong)(int)local_5d8[0];
  plVar6 = (longlong *)FMemory::Realloc(0,0x70);
  local_500 = plVar6;
  if (plVar6 == (longlong *)0x0) goto LAB_140697de0;
  *plVar6 = (longlong)&PTR_GetPoolName_144044908;
  plVar6[8] = 0;
  *(undefined4 *)(plVar6 + 10) = 0;
  if (local_478 == (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop(plVar6 + 4,local_498,0x20);
  }
  if (plVar6[8] != 0) {
    FMemory::Free();
  }
  plVar6[8] = (longlong)local_478;
  local_478 = (longlong *)0x0;
  *(int *)(plVar6 + 10) = local_468;
  local_468 = 0;
  if ((int)plVar6[10] == 0) {
LAB_140697dcc:
    plVar6[2] = (longlong)&LAB_140693f50;
  }
  else {
    plVar14 = (longlong *)plVar6[8];
    if ((longlong *)plVar6[8] == (longlong *)0x0) {
      plVar14 = plVar6 + 4;
    }
    if (plVar14 == (longlong *)0x0) goto LAB_140697dcc;
    (**(code **)(*plVar14 + 8))();
    plVar6[2] = (longlong)local_4a8;
  }
  local_4a8 = (code *)&LAB_140693f50;
  lVar9 = FDelegateHandle::GenerateNewID();
  plVar6[0xd] = lVar9;
LAB_140697de0:
  local_574 = 1;
  local_570 = 0;
  local_568 = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_570);
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    local_500 = (longlong *)FMemory::Realloc(plVar6,0,0);
    if (local_500 != (longlong *)0x0) {
      FMemory::Free(local_500);
    }
  }
  *(undefined8 *)(lVar7 + 0x118) = local_580;
  *(undefined4 *)(lVar7 + 0x120) = local_578;
  *(undefined1 *)(lVar7 + 0x124) = local_574;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x128,&local_570);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_570);
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(lVar7 + 0x108,&local_598);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_598);
  plVar10 = (longlong *)FUN_14068e6b0();
  plVar6 = plVar10 + 2;
  local_4f0 = plVar6;
  local_4e8 = plVar10;
  FUN_14068dd90(&local_4f0,plVar6);
  local_628 = 0x1e00;
  SWidget::SetDebugInfo
            (plVar6,"SJiraUI",
             "D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxJira\\Source\\Private\\GbxJira.cpp",0x2af)
  ;
  local_618 = *(undefined4 *)(lVar7 + 0x90);
  local_5e8 = lVar7 + 0xf8;
  local_600 = lVar7 + 0xe8;
  local_5f0 = *(undefined1 *)(lVar7 + 0xf1);
  local_608 = lVar7 + 200;
  local_610 = lVar7 + 0x98;
  local_5f8 = *(undefined1 *)(lVar7 + 0xf0);
  local_620 = lVar7 + 0x78;
  local_628 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar6,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  FUN_140695810(plVar6,lVar7);
  if (((char)plVar10[5] < '\0') || (cVar4 = (**(code **)(*plVar6 + 0x1e8))(plVar6), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar5;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar14 = plVar10 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_310);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_330);
  FUN_140690b40(local_438);
  if (local_468 != 0) {
    plVar14 = local_498;
    if (local_478 != (longlong *)0x0) {
      plVar14 = local_478;
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14,0);
    }
  }
  puVar8 = (undefined8 *)0x0;
  if (local_478 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_550 = 0x44200000;
  local_54c = 0x43c80000;
  local_530 = 0;
  local_528 = 1;
  local_520 = 0;
  local_518 = 0;
  local_548 = 1;
  local_540 = 0;
  local_538 = 0;
  puVar11 = (undefined8 *)operator_new(0x68);
  if (puVar11 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar11);
    *puVar11 = &PTR__scalar_deleting_destructor__1440439b8;
    *(undefined4 *)(puVar11 + 4) = (undefined4)DAT_1468b5d88;
    *(undefined4 *)((longlong)puVar11 + 0x24) = DAT_1468b5d88._4_4_;
    *(undefined1 *)(puVar11 + 5) = 1;
    puVar11[6] = 0;
    *(undefined4 *)(puVar11 + 7) = 0;
    *(undefined4 *)(puVar11 + 8) = 0x3f800000;
    *(undefined4 *)((longlong)puVar11 + 0x44) = 0x3f800000;
    *(undefined1 *)(puVar11 + 9) = 1;
    puVar11[10] = 0;
    *(undefined4 *)(puVar11 + 0xb) = 0;
    *(undefined4 *)(puVar11 + 0xc) = 1;
    *(undefined4 *)((longlong)puVar11 + 100) = 1;
    puVar8 = puVar11;
  }
  plVar14 = puVar8 + 10;
  *(undefined4 *)(puVar8 + 8) = 0x44200000;
  *(undefined4 *)((longlong)puVar8 + 0x44) = 0x43c80000;
  *(undefined1 *)(puVar8 + 9) = 1;
  if (((&local_540 != plVar14) && (*(int *)(puVar8 + 0xb) != 0)) &&
     (plVar13 = (longlong *)*plVar14, plVar13 != (longlong *)0x0)) {
    (**(code **)(*plVar13 + 0x28))(plVar13,0);
    if (*plVar14 != 0) {
      lVar7 = FMemory::Realloc(*plVar14,0,0);
      *plVar14 = lVar7;
    }
    *(undefined4 *)(puVar8 + 0xb) = 0;
  }
  plVar14 = puVar8 + 6;
  puVar8[4] = 0;
  *(undefined1 *)(puVar8 + 5) = 1;
  if (((&local_520 != plVar14) && (*(int *)(puVar8 + 7) != 0)) &&
     (plVar13 = (longlong *)*plVar14, plVar13 != (longlong *)0x0)) {
    (**(code **)(*plVar13 + 0x28))(plVar13,0);
    if (*plVar14 != 0) {
      lVar7 = FMemory::Realloc(*plVar14,0,0);
      *plVar14 = lVar7;
    }
    *(undefined4 *)(puVar8 + 7) = 0;
  }
  plVar14 = (longlong *)puVar8[3];
  pplVar12 = (longlong **)(puVar8 + 2);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  FSlotBase::DetatchParentFromContent(puVar8);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_5b8 = plVar6;
  plStack_5b0 = plVar10;
  if (&local_5b8 != pplVar12) {
    local_5b8 = *pplVar12;
    plStack_5b0 = (longlong *)puVar8[3];
    *pplVar12 = plVar6;
    puVar8[3] = plVar10;
    local_458 = plVar6;
    plStack_450 = plVar10;
  }
  plVar6 = plStack_5b0;
  if (plStack_5b0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_5b0 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_5b0)(plStack_5b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plStack_5b0 + 8))(plStack_5b0,1);
      }
    }
  }
  FUN_141802340(puVar8);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar14 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  lVar7 = SCanvas::FArguments::FArguments(local_188);
  iVar16 = *(int *)(lVar7 + 0x110);
  *(int *)(lVar7 + 0x110) = iVar16 + 1;
  if (*(int *)(lVar7 + 0x114) < iVar16 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar7 + 0x108,iVar16);
  }
  *(undefined8 **)(*(longlong *)(lVar7 + 0x108) + (longlong)iVar16 * 8) = puVar8;
  plVar6 = (longlong *)operator_new(0x240);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_144044b28;
    if (plVar6 != (longlong *)0xfffffffffffffff0) {
      FUN_141961a40();
    }
  }
  plVar14 = plVar6 + 2;
  local_4d8 = plVar14;
  local_4d0 = plVar6;
  FUN_14044f790(&local_4d8,plVar14);
  local_628 = 0x230;
  SWidget::SetDebugInfo
            (plVar14,"SCanvas",
             "D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxJira\\Source\\Private\\GbxJira.cpp",0x2b0)
  ;
  local_618 = *(undefined4 *)(lVar7 + 0x90);
  local_5e8 = lVar7 + 0xf8;
  local_600 = lVar7 + 0xe8;
  local_5f0 = *(undefined1 *)(lVar7 + 0xf1);
  local_608 = lVar7 + 200;
  local_610 = lVar7 + 0x98;
  local_5f8 = *(undefined1 *)(lVar7 + 0xf0);
  local_620 = lVar7 + 0x78;
  local_628 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar14,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  SOverlay::Construct(plVar14,lVar7);
  if (((char)plVar6[5] < '\0') || (cVar4 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar6 + 0x29) = *(byte *)((longlong)plVar6 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar6 + 0x29) = *(byte *)((longlong)plVar6 + 0x29) | bVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar13 = plVar6 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_188);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_540);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_520);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar10 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar13 = plVar6 + 1;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar13 = (int)*plVar13 + 1;
    UNLOCK();
  }
  local_5c8 = plVar13;
  local_5d0 = FUN_14068fde0(local_2e8);
  *(undefined1 *)(local_5d0 + 0x148) = 1;
  pplVar12 = (longlong **)(local_5d0 + 0x138);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar13 = (int)*plVar13 + 1;
    UNLOCK();
  }
  local_5a8 = plVar14;
  plStack_5a0 = plVar6;
  if (&local_5a8 != pplVar12) {
    local_5a8 = *pplVar12;
    plStack_5a0 = *(longlong **)(local_5d0 + 0x140);
    *pplVar12 = plVar14;
    *(longlong **)(local_5d0 + 0x140) = plVar6;
    local_448 = plVar14;
    plStack_440 = plVar6;
  }
  plVar14 = plStack_5a0;
  if (plStack_5a0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_5a0 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_5a0)(plStack_5a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plStack_5a0 + 8))(plStack_5a0,1);
      }
    }
  }
  plVar13 = (longlong *)FUN_14068e7a0();
  plVar14 = plVar13 + 2;
  local_4c0 = plVar14;
  local_4b8 = plVar13;
  FUN_14044f790(&local_4c0,plVar14);
  local_628 = 0x368;
  SWidget::SetDebugInfo
            (plVar14,"SSafeZone",
             "D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxJira\\Source\\Private\\GbxJira.cpp",0x2b1)
  ;
  local_5e8 = local_5d0 + 0xf8;
  local_600 = local_5d0 + 0xe8;
  local_608 = local_5d0 + 200;
  local_610 = local_5d0 + 0x98;
  local_620 = local_5d0 + 0x78;
  local_628 = local_5d0 + 0x60;
  local_5f0 = *(undefined1 *)(local_5d0 + 0xf1);
  local_5f8 = *(undefined1 *)(local_5d0 + 0xf0);
  local_618 = *(undefined4 *)(local_5d0 + 0x90);
  SWidget::SWidgetConstruct(plVar14,local_5d0,local_5d0 + 0x30,local_5d0 + 0x40);
  FUN_1419761c0(plVar14,local_5d0);
  if (((char)plVar13[5] < '\0') || (cVar4 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar5;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar15 = plVar13 + 1;
    lVar7 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (local_1a8 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1a8 + 1;
    lVar7 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1a8)(local_1a8);
      LOCK();
      piVar1 = (int *)((longlong)local_1a8 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_1a8 + 8))(local_1a8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1c0);
  FUN_140456c70(local_2e8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    lVar7 = *local_5c8;
    *(int *)local_5c8 = (int)*local_5c8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  lVar7 = local_558;
  *(longlong **)(local_558 + 0x10) = plVar14;
  plVar15 = *(longlong **)(local_558 + 0x18);
  if (plVar13 != plVar15) {
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
      UNLOCK();
      plVar15 = *(longlong **)(local_558 + 0x18);
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
    *(longlong **)(lVar7 + 0x18) = plVar13;
  }
  *(undefined4 *)(lVar7 + 8) = local_5c0;
  *(undefined4 *)(lVar7 + 0xc) = local_5bc;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_510 = plVar14;
  local_508 = plVar13;
  (**(code **)(**(longlong **)(DAT_146b17150 + 0x7b0) + 0x2a0))
            (*(longlong **)(DAT_146b17150 + 0x7b0),&local_510,9999);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar13 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar6 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar14 = plVar17;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar10 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
LAB_1406987d5:
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar14 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  return 1;
}



// FUNCTION 140698890 Execute body=31 status=ok
// SIG undefined Execute(void)

undefined4 *
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),<lambda_5858c97ba83c0655933f0aedcce386ec>_>
::Execute(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = SHeaderRow::FColumn::GetWidth(*(undefined8 *)(param_1 + 8));
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1406988b0 FUN_1406988b0 body=90 status=ok
// SIG undefined FUN_1406988b0(void)

undefined8 * FUN_1406988b0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_1 + 0x20);
    }
    if (plVar4 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 8))();
    }
  }
  puVar3 = (undefined8 *)(**(code **)(param_1 + 0x10))(local_18,uVar2);
  uVar1 = *(undefined4 *)(puVar3 + 1);
  *param_2 = *puVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140698910 FUN_140698910 body=247 status=ok
// SIG undefined FUN_140698910(void)

undefined8 * FUN_140698910(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = *param_3;
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (lVar4 == 0) {
    *param_2 = 0;
    param_2[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"nullptr",0x10);
  }
  else {
    FString::PrintfImpl(param_2,L"0x%08x");
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
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
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
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
  return param_2;
}



// FUNCTION 140698a10 FUN_140698a10 body=291 status=ok
// SIG undefined FUN_140698a10(void)

undefined8 * FUN_140698a10(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_30 [32];
  longlong *local_10;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  puVar6 = (undefined8 *)
           (**(code **)(param_1 + 0x18))
                     ((longlong)(int)*(undefined8 *)(param_1 + 0x20) + (longlong)plVar8,local_30);
  uVar4 = puVar6[1];
  *param_2 = *puVar6;
  param_2[1] = uVar4;
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar6 + 2);
  param_2[3] = puVar6[3];
  lVar3 = puVar6[4];
  param_2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140698b40 FUN_140698b40 body=180 status=ok
// SIG undefined FUN_140698b40(void)

undefined8 FUN_140698b40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar6, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  uVar5 = (**(code **)(param_1 + 0x18))
                    ((longlong)(int)*(undefined8 *)(param_1 + 0x20) + (longlong)plVar6);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 140698c00 FUN_140698c00 body=262 status=ok
// SIG undefined FUN_140698c00(void)

undefined8 FUN_140698c00(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_38 [8];
  longlong *local_30;
  code *local_18;
  undefined8 uStack_10;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  local_18 = *(code **)(param_1 + 0x18);
  uStack_10 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = (*local_18)((longlong)(int)uStack_10 + (longlong)plVar7,local_38);
  FText::FText(param_2,uVar5);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140698d10 FUN_140698d10 body=215 status=ok
// SIG undefined FUN_140698d10(void)

undefined8 * FUN_140698d10(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_38 [24];
  code *local_20;
  undefined8 uStack_18;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar3[1];
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  local_20 = *(code **)(param_1 + 0x18);
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = (undefined8 *)(*local_20)((longlong)(int)uStack_18 + (longlong)plVar8,local_38);
  uVar2 = *(undefined4 *)(puVar6 + 1);
  *param_2 = *puVar6;
  *(undefined4 *)(param_2 + 1) = uVar2;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 140698df0 FUN_140698df0 body=268 status=ok
// SIG undefined FUN_140698df0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140698df0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_118 [48];
  code *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar6, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  local_e8 = *(code **)(param_1 + 0x18);
  uStack_e0 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = (*local_e8)((longlong)(int)uStack_e0 + (longlong)plVar6,local_d8);
  FReply::FReply(param_2,uVar5);
  FUN_140438c20(local_d8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140698f00 FUN_140698f00 body=347 status=ok
// SIG undefined FUN_140698f00(void)

undefined8 * FUN_140698f00(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 local_58;
  longlong local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar7 = (longlong *)0x0;
  plVar8 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar8 = plVar7, !bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar8 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  local_58 = *param_3;
  local_30 = *(undefined4 *)(param_1 + 0x18);
  uStack_2c = *(undefined4 *)(param_1 + 0x1c);
  pcVar4 = *(code **)(param_1 + 0x18);
  iStack_28 = *(int *)(param_1 + 0x20);
  uStack_24 = *(undefined4 *)(param_1 + 0x24);
  local_50 = param_3[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  puVar6 = (undefined8 *)(*pcVar4)((longlong)iStack_28 + (longlong)plVar7,local_48,&local_58);
  *param_2 = *puVar6;
  lVar3 = puVar6[1];
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140699060 FUN_140699060 body=253 status=ok
// SIG undefined FUN_140699060(void)

ulonglong FUN_140699060(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  ulonglong in_RAX;
  undefined8 local_18;
  longlong local_10;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] == 0) {
        param_1 = (longlong *)0x0;
      }
      else {
        param_1 = (longlong *)*param_1;
      }
      local_18 = *param_2;
      local_10 = param_2[1];
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      bVar6 = (**(code **)(*param_1 + 0x40))(param_1,&local_18);
      plVar4 = (longlong *)param_2[1];
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
      return (ulonglong)bVar6;
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar7 = (int)lVar5 - 1;
    in_RAX = (ulonglong)uVar7;
    if (uVar7 == 0) {
      in_RAX = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        in_RAX = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140699160 FUN_140699160 body=66 status=ok
// SIG undefined FUN_140699160(void)

undefined8 FUN_140699160(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x4c0);
  if (*(int *)(lVar1 + 0x28) != 0) {
    FUN_1416af6e0(*(undefined8 *)(lVar1 + 0x20),0,0);
    return 1;
  }
  FUN_1416af6e0(&DAT_143f3eda8,0,0);
  return 1;
}



// FUNCTION 1406991b0 FindId body=269 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(*param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x28) == *param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(*param_1 + 0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1406992c0 FindId body=269 status=ok
// SIG undefined FindId(void)

int * TSet<TSharedRef<SWidget,0>,DefaultKeyFuncs<TSharedRef<SWidget,0>,0>,FDefaultSetAllocator>::
      FindId(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(*param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x18) == *param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1406993d0 FUN_1406993d0 body=3006 status=ok
// SIG undefined FUN_1406993d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406993d0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong **pplVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined4 uVar17;
  undefined1 auStack_678 [32];
  longlong local_658;
  longlong local_650;
  undefined4 local_648;
  longlong local_640;
  longlong local_638;
  longlong local_630;
  undefined1 local_628;
  undefined1 local_620;
  longlong local_618;
  undefined1 local_608;
  longlong *local_5f8;
  longlong *plStack_5f0;
  longlong local_5e8;
  undefined4 local_5e0;
  undefined1 local_5dc;
  longlong *local_5d8;
  int local_5d0;
  undefined4 local_5c8;
  undefined1 local_5c4;
  longlong *local_5c0;
  int local_5b8;
  longlong local_5b0;
  longlong *local_5a8;
  longlong *plStack_5a0;
  undefined4 local_598;
  undefined4 local_590;
  undefined1 local_58c;
  undefined8 local_588;
  undefined4 local_580;
  undefined4 local_578;
  undefined1 local_574;
  longlong *local_570;
  undefined4 local_568;
  longlong local_560;
  longlong *local_558;
  longlong *local_550;
  longlong *local_548;
  longlong *local_540;
  longlong *local_538;
  longlong *local_530;
  longlong **local_528;
  undefined1 local_520 [8];
  longlong *local_518;
  longlong *local_510;
  longlong *local_4f8;
  longlong *plStack_4f0;
  longlong *local_4e8;
  longlong *plStack_4e0;
  longlong *local_4d8;
  longlong *local_4c8;
  longlong *plStack_4c0;
  longlong *local_4b8;
  longlong *local_4b0;
  longlong *local_4a0;
  longlong *local_498;
  longlong local_488 [4];
  longlong local_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined4 local_454;
  longlong local_448;
  undefined4 local_440;
  longlong *local_438;
  longlong *plStack_430;
  undefined1 local_428 [496];
  undefined1 local_238 [496];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_678;
  FUN_141804f10(param_1[0x88]);
  local_558 = (longlong *)FUN_1419b26f0(*param_2);
  lVar15 = (longlong)(int)local_558[1];
  local_488[0] = 0;
  local_488[1] = 0;
  local_468 = 0;
  local_460 = 0;
  local_458 = 0xffffffff;
  local_454 = 0;
  local_448 = 0;
  local_440 = 0;
  local_5b0 = lVar15;
  if (0 < (int)local_558[1]) {
    local_5e8 = 0;
    local_608 = 1;
    do {
      lVar11 = local_5e8;
      plVar9 = (longlong *)0x0;
      plVar2 = *(longlong **)(*local_558 + local_5e8 * 8);
      if (*(char *)((longlong)plVar2 + 0x129) == '\0') {
LAB_140699502:
        plVar3 = DAT_1469eb220;
        plVar13 = DAT_1469eb218;
        lVar12 = *plVar2;
        if ((int)param_1[0x8b] != *(int *)((longlong)param_1 + 0x484)) {
          plVar16 = (longlong *)param_1[0x92];
          if ((longlong *)param_1[0x92] == (longlong *)0x0) {
            plVar16 = param_1 + 0x91;
          }
          iVar7 = *(int *)((longlong)plVar16 +
                          ((longlong)((int)((ulonglong)lVar12 >> 0x20) + (int)lVar12) &
                          (longlong)(int)param_1[0x93] - 1U) * 4);
          if (iVar7 != -1) {
            do {
              plVar16 = (longlong *)((longlong)iVar7 * 0x20 + param_1[0x8a]);
              if (*plVar16 == lVar12) {
                if (iVar7 != -1) goto LAB_140699582;
                break;
              }
              iVar7 = (int)plVar16[3];
            } while (iVar7 != -1);
          }
        }
        plVar16 = plVar9;
LAB_140699582:
        local_5f8 = DAT_1469eb218;
        plStack_5f0 = DAT_1469eb220;
        plVar8 = plVar16 + 1;
        if (plVar16 == (longlong *)0x0) {
          plVar8 = plVar9;
        }
        if (DAT_1469eb220 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
          UNLOCK();
        }
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)(**(code **)(*param_1 + 0x88))(param_1,local_520,plVar2);
          plVar16 = local_518;
          plVar13 = (longlong *)*plVar8;
          *plVar8 = (longlong)local_5f8;
          plVar3 = (longlong *)plVar8[1];
          plVar8[1] = (longlong)plStack_5f0;
          local_5f8 = plVar13;
          plStack_5f0 = plVar3;
          if (local_518 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_518 + 1;
            lVar12 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*local_518)(local_518);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                lVar12 = *plVar16;
                goto LAB_140699698;
              }
            }
          }
        }
        else {
          local_5f8 = (longlong *)*plVar8;
          plStack_5f0 = (longlong *)plVar8[1];
          if (plStack_5f0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_5f0 + 1) = (int)plStack_5f0[1] + 1;
            UNLOCK();
          }
          local_5a8 = plVar13;
          plStack_5a0 = plVar3;
          local_438 = local_5f8;
          plStack_430 = plStack_5f0;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar3 + 1;
            lVar12 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                lVar12 = *plStack_5a0;
                plVar16 = plStack_5a0;
LAB_140699698:
                (**(code **)(lVar12 + 8))(plVar16,1);
              }
            }
          }
        }
        plVar13 = local_5f8;
        if ((local_5f8 != DAT_1469eb218) && (*(char *)((longlong)local_5f8 + 0x1a) != '\x04')) {
          *(undefined1 *)((longlong)local_5f8 + 0x1a) = 4;
          (**(code **)(*local_5f8 + 0x1f0))(local_5f8);
          FUN_1418475e0(plVar13,1);
        }
        iVar7 = (int)plVar2[0x13];
        if (iVar7 == 0) {
          local_5c8 = 0;
          local_5c0 = (longlong *)0x0;
          local_5b8 = 0;
          local_5c4 = 1;
          plVar9 = (longlong *)FMemory::Realloc(0,0x30);
          local_4d8 = plVar9;
          if (plVar9 == (longlong *)0x0) {
            if ((local_5b8 != 0) && (local_5c0 != (longlong *)0x0)) {
              (**(code **)(*local_5c0 + 0x28))(local_5c0,0);
              if (local_5c0 != (longlong *)0x0) {
                local_5c0 = (longlong *)FMemory::Realloc(local_5c0,0,0);
              }
              local_5b8 = 0;
            }
          }
          else {
            plVar9[1] = (longlong)plVar2;
            *plVar9 = (longlong)&PTR_GetPoolName_143f3f4f8;
            plVar9[2] = (longlong)SHeaderRow::FColumn::GetWidth;
            lVar11 = FDelegateHandle::GenerateNewID();
            plVar9[4] = lVar11;
            (**(code **)(*plVar9 + 0x30))(plVar9,&local_5c0);
            (**(code **)(*plVar9 + 0x28))(plVar9,0);
            local_4d8 = (longlong *)FMemory::Realloc(plVar9,0,0);
            if (local_4d8 != (longlong *)0x0) {
              FMemory::Free(local_4d8);
            }
          }
          local_4c8 = local_5f8;
          plStack_4c0 = plStack_5f0;
          if (plStack_5f0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_5f0 + 1) = (int)plStack_5f0[1] + 1;
            UNLOCK();
          }
          lVar11 = plVar2[0x1c];
          lVar12 = FUN_140693c40(param_1[0x88]);
          local_598 = 1;
          local_588 = 0;
          local_580 = 0;
          *(char *)(lVar12 + 0x20) = (char)(int)lVar11;
          *(undefined1 *)(lVar12 + 0x21) = *(undefined1 *)((longlong)plVar2 + 0xe4);
          local_58c = local_5c4;
          local_590 = local_5c8;
          TBaseDelegate<FSlateBrush_const_*>::operator=(&local_588,&local_5c0);
          *(undefined4 *)(lVar12 + 0x28) = local_598;
          *(undefined1 *)(lVar12 + 0x34) = local_58c;
          *(undefined4 *)(lVar12 + 0x30) = local_590;
          TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x38,&local_588);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_588);
          FUN_140692760(lVar12,&local_4c8);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5c0);
          lVar11 = local_5e8;
        }
        else {
          if (iVar7 == 1) {
            if ((((int)plVar2[0xf] != 0) && ((longlong *)plVar2[0xe] != (longlong *)0x0)) &&
               (cVar4 = (**(code **)(*(longlong *)plVar2[0xe] + 0x18))(), cVar4 != '\0')) {
              if ((int)plVar2[0xf] != 0) {
                plVar9 = (longlong *)plVar2[0xe];
              }
              uVar17 = (**(code **)(*plVar9 + 0x38))();
              *(undefined4 *)(plVar2 + 0xd) = uVar17;
            }
            local_578 = (undefined4)plVar2[0xd];
            local_4e8 = local_5f8;
            plStack_4e0 = plStack_5f0;
            local_574 = 1;
            local_570 = (longlong *)0x0;
            local_568 = 0;
            if (plStack_5f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_5f0 + 1) = (int)plStack_5f0[1] + 1;
              UNLOCK();
            }
            lVar15 = FUN_14068f180(local_238);
            *(undefined4 *)(lVar15 + 0x148) = local_578;
            *(undefined1 *)(lVar15 + 0x14c) = 1;
            TBaseDelegate<FSlateBrush_const_*>::operator=(lVar15 + 0x150,&local_570);
            *(int *)(lVar15 + 0x108) = (int)plVar2[0x1c];
            *(undefined4 *)(lVar15 + 0x10c) = *(undefined4 *)((longlong)plVar2 + 0xe4);
            *(undefined1 *)(lVar15 + 0xf1) = 4;
            plVar9 = (longlong *)operator_new(800);
            if (plVar9 == (longlong *)0x0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              *(undefined4 *)(plVar9 + 1) = 1;
              *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
              *plVar9 = (longlong)&PTR_FUN_144044b78;
              if (plVar9 != (longlong *)0xfffffffffffffff0) {
                FUN_1419618a0();
              }
            }
            plVar13 = plVar9 + 2;
            local_4a0 = plVar13;
            local_498 = plVar9;
            FUN_14044f790(&local_4a0,plVar13);
            local_658 = 0x310;
            SWidget::SetDebugInfo
                      (plVar13,&DAT_144044860,
                       "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/STableRow.h"
                       ,0x463);
            lVar15 = FUN_140692660(lVar15,&local_4e8);
            local_648 = *(undefined4 *)(lVar15 + 0x90);
            local_618 = lVar15 + 0xf8;
            local_630 = lVar15 + 0xe8;
            local_620 = *(undefined1 *)(lVar15 + 0xf1);
            local_638 = lVar15 + 200;
            local_640 = lVar15 + 0x98;
            local_628 = *(undefined1 *)(lVar15 + 0xf0);
            local_650 = lVar15 + 0x78;
            local_658 = lVar15 + 0x60;
            SWidget::SWidgetConstruct(plVar13,lVar15,lVar15 + 0x30,lVar15 + 0x40);
            FUN_141972160(plVar13,lVar15);
            if (((char)plVar9[5] < '\0') ||
               (cVar4 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar4 != '\0')) {
              bVar6 = 1;
            }
            else {
              bVar6 = 0;
            }
            *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
            *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar6;
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
            }
            local_540 = plVar13;
            local_538 = plVar9;
            uVar10 = FUN_140693c40(param_1[0x88]);
            uVar10 = SVerticalBox::FSlot::AutoHeight(uVar10);
            FUN_140692760(uVar10,&local_540);
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar9 + 1;
              lVar15 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
              LOCK();
              plVar13 = plVar9 + 1;
              lVar15 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
            }
            FUN_140690ea0(local_238);
            pplVar14 = &local_570;
          }
          else {
            if (iVar7 != 2) goto LAB_140699e6f;
            local_5e0 = 0xbf800000;
            local_5dc = 0;
            local_5d8 = (longlong *)0x0;
            local_5d0 = 0;
            plVar9 = (longlong *)FMemory::Realloc(0,0x20,0);
            local_510 = plVar9;
            if (plVar9 != (longlong *)0x0) {
              *plVar9 = (longlong)&PTR_GetPoolName_144044948;
              plVar9[1] = (longlong)plVar2;
              lVar15 = FDelegateHandle::GenerateNewID();
              plVar9[3] = lVar15;
            }
            local_5dc = 1;
            if (plVar9 == (longlong *)0x0) {
              if ((local_5d0 != 0) && (local_5d8 != (longlong *)0x0)) {
                (**(code **)(*local_5d8 + 0x28))(local_5d8,0);
                if (local_5d8 != (longlong *)0x0) {
                  local_5d8 = (longlong *)FMemory::Realloc(local_5d8,0,0);
                }
                local_5d0 = 0;
              }
            }
            else {
              (**(code **)(*plVar9 + 0x30))(plVar9,&local_5d8);
              (**(code **)(*plVar9 + 0x28))(plVar9,0);
              local_510 = (longlong *)FMemory::Realloc(plVar9,0,0);
              if (local_510 != (longlong *)0x0) {
                FMemory::Free(local_510);
              }
            }
            local_4f8 = local_5f8;
            plStack_4f0 = plStack_5f0;
            if (plStack_5f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_5f0 + 1) = (int)plStack_5f0[1] + 1;
              UNLOCK();
            }
            lVar15 = FUN_14068f180(local_428);
            *(undefined4 *)(lVar15 + 0x148) = local_5e0;
            *(undefined1 *)(lVar15 + 0x14c) = local_5dc;
            TBaseDelegate<FSlateBrush_const_*>::operator=(lVar15 + 0x150,&local_5d8);
            *(int *)(lVar15 + 0x108) = (int)plVar2[0x1c];
            *(undefined4 *)(lVar15 + 0x10c) = *(undefined4 *)((longlong)plVar2 + 0xe4);
            *(undefined1 *)(lVar15 + 0xf1) = 4;
            plVar9 = (longlong *)operator_new(800);
            if (plVar9 == (longlong *)0x0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              *(undefined4 *)(plVar9 + 1) = 1;
              *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
              *plVar9 = (longlong)&PTR_FUN_144044b78;
              if (plVar9 != (longlong *)0xfffffffffffffff0) {
                FUN_1419618a0();
              }
            }
            plVar13 = plVar9 + 2;
            local_4b8 = plVar13;
            local_4b0 = plVar9;
            FUN_14044f790(&local_4b8,plVar13);
            local_658 = 0x310;
            SWidget::SetDebugInfo
                      (plVar13,&DAT_144044860,
                       "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/STableRow.h"
                       ,0x47d);
            lVar15 = FUN_140692660(lVar15,&local_4f8);
            local_648 = *(undefined4 *)(lVar15 + 0x90);
            local_618 = lVar15 + 0xf8;
            local_630 = lVar15 + 0xe8;
            local_620 = *(undefined1 *)(lVar15 + 0xf1);
            local_638 = lVar15 + 200;
            local_640 = lVar15 + 0x98;
            local_628 = *(undefined1 *)(lVar15 + 0xf0);
            local_650 = lVar15 + 0x78;
            local_658 = lVar15 + 0x60;
            SWidget::SWidgetConstruct(plVar13,lVar15,lVar15 + 0x30,lVar15 + 0x40);
            FUN_141972160(plVar13,lVar15);
            if (((char)plVar9[5] < '\0') ||
               (cVar4 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar4 != '\0')) {
              bVar6 = 1;
            }
            else {
              bVar6 = 0;
            }
            *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
            *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar6;
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
            }
            local_550 = plVar13;
            local_548 = plVar9;
            uVar10 = FUN_140693c40(param_1[0x88]);
            uVar10 = SVerticalBox::FSlot::AutoHeight(uVar10);
            FUN_140692760(uVar10,&local_550);
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar9 + 1;
              lVar15 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
              LOCK();
              plVar13 = plVar9 + 1;
              lVar15 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
            }
            FUN_140690ea0(local_428);
            pplVar14 = &local_5d8;
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(pplVar14);
          lVar15 = local_5b0;
          lVar11 = local_5e8;
        }
LAB_140699e6f:
        local_528 = &local_5f8;
        local_530 = plVar2;
        FUN_14068d7f0(local_488,&local_560,&local_530,0);
        plVar2 = plStack_5f0;
        if (plStack_5f0 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_5f0 + 1;
          lVar12 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_5f0)(plStack_5f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
      }
      else {
        if ((((int)plVar2[0x27] != 0) && ((longlong *)plVar2[0x26] != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*(longlong *)plVar2[0x26] + 0x18))(), cVar4 != '\0')) {
          plVar13 = plVar9;
          if ((int)plVar2[0x27] != 0) {
            plVar13 = (longlong *)plVar2[0x26];
          }
          uVar5 = (**(code **)(*plVar13 + 0x38))();
          *(undefined1 *)(plVar2 + 0x25) = uVar5;
        }
        if ((char)plVar2[0x25] != '\0') goto LAB_140699502;
      }
      local_5e8 = lVar11 + 1;
    } while (local_5e8 < lVar15);
  }
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=(param_1 + 0x8a,local_488);
  local_440 = 0;
  if (local_448 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_488,0);
  if (local_468 != 0) {
    FMemory::Free();
  }
  if (local_488[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140699f90 FUN_140699f90 body=2263 status=ok
// SIG undefined FUN_140699f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140699f90(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong **pplVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_728 [32];
  longlong local_708;
  longlong local_700;
  undefined4 local_6f8;
  longlong local_6f0;
  longlong local_6e8;
  longlong local_6e0;
  undefined1 local_6d8;
  undefined1 local_6d0;
  longlong local_6c8;
  longlong local_6b8;
  longlong *local_6b0;
  longlong *plStack_6a8;
  undefined8 *local_6a0;
  longlong local_698;
  longlong *local_690;
  undefined8 local_688;
  longlong *local_680;
  longlong local_678;
  longlong *local_670;
  longlong local_668;
  longlong *local_660;
  undefined8 local_658;
  longlong *local_650;
  undefined1 local_648 [8];
  longlong *local_640;
  undefined1 local_630;
  undefined8 local_628;
  undefined4 local_620;
  undefined1 local_618 [8];
  longlong *local_610;
  undefined1 local_608 [8];
  longlong *local_600;
  longlong *local_5f8;
  longlong *local_5f0;
  longlong *local_5e0;
  longlong *local_5d8;
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  longlong *local_5b0;
  longlong *plStack_5a8;
  undefined1 local_598 [448];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_728;
  local_6a0 = param_3;
  if (((*(int *)(param_1 + 0x500) == 0) || (*(longlong **)(param_1 + 0x4f8) == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x18))(), cVar4 == '\0')) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_5c8,L"OnGenerateWidget() not assigned.",L"SListView",L"BrokenUIMessage"
                      );
    FText::FText(local_648,uVar7);
    local_630 = 1;
    local_628 = 0;
    local_620 = 0;
    lVar8 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar8 + 0x108,local_648);
    *(undefined1 *)(lVar8 + 0x120) = local_630;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x128,&local_628);
    plVar9 = (longlong *)operator_new(0x660);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_144043520;
      if (plVar9 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar11 = plVar9 + 2;
    local_5f8 = plVar11;
    local_5f0 = plVar9;
    FUN_14044f790(&local_5f8,plVar11);
    local_708 = 0x650;
    SWidget::SetDebugInfo
              (plVar11,"STextBlock",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0x42d);
    local_6f8 = *(undefined4 *)(lVar8 + 0x90);
    local_6c8 = lVar8 + 0xf8;
    local_6e0 = lVar8 + 0xe8;
    local_6d0 = *(undefined1 *)(lVar8 + 0xf1);
    local_6e8 = lVar8 + 200;
    local_6f0 = lVar8 + 0x98;
    local_6d8 = *(undefined1 *)(lVar8 + 0xf0);
    local_700 = lVar8 + 0x78;
    local_708 = lVar8 + 0x60;
    SWidget::SWidgetConstruct(plVar11,lVar8,lVar8 + 0x30,lVar8 + 0x40);
    FUN_1419b0120(plVar11,lVar8);
    if (((char)plVar9[5] < '\0') ||
       (cVar4 = (**(code **)(*plVar11 + 0x1e8))(plVar11), cVar4 != '\0')) {
      bVar5 = 1;
    }
    else {
      bVar5 = 0;
    }
    *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar5;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_698 = FUN_14068ed70(local_598);
    pplVar10 = (longlong **)(local_698 + 0x1a8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_6b0 = plVar11;
    plStack_6a8 = plVar9;
    if (&local_6b0 != pplVar10) {
      local_6b0 = *pplVar10;
      plStack_6a8 = *(longlong **)(local_698 + 0x1b0);
      *pplVar10 = plVar11;
      *(longlong **)(local_698 + 0x1b0) = plVar9;
      local_5b0 = plVar11;
      plStack_5a8 = plVar9;
    }
    plVar11 = plStack_6a8;
    if (plStack_6a8 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_6a8 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_6a8)(plStack_6a8);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_6a8 + 8))(plStack_6a8,1);
        }
      }
    }
    plVar11 = (longlong *)
              TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_608);
    local_668 = *plVar11;
    local_660 = (longlong *)plVar11[1];
    if (local_660 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_660 + 1) = (int)local_660[1] + 1;
      UNLOCK();
    }
    if (local_600 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_600 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_600)(local_600);
        LOCK();
        piVar1 = (int *)((longlong)local_600 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_600 + 8))(local_600,1);
        }
      }
    }
    local_690 = &local_668;
    plVar11 = (longlong *)operator_new(0x450);
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar11 + 1) = 1;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_FUN_144044b48;
      if (plVar11 != (longlong *)0xfffffffffffffff0) {
        FUN_14068ea40();
      }
    }
    local_5e0 = plVar11 + 2;
    local_5d8 = plVar11;
    TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
    Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
              (&local_5e0,local_5e0);
    local_708 = 0x440;
    SWidget::SetDebugInfo
              (plVar11 + 3,"STableRow<ItemType>",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0x42a);
    local_6f8 = *(undefined4 *)(local_698 + 0x90);
    local_6c8 = local_698 + 0xf8;
    local_6e0 = local_698 + 0xe8;
    local_6d0 = *(undefined1 *)(local_698 + 0xf1);
    local_6e8 = local_698 + 200;
    local_6f0 = local_698 + 0x98;
    local_6d8 = *(undefined1 *)(local_698 + 0xf0);
    local_700 = local_698 + 0x78;
    local_708 = local_698 + 0x60;
    SWidget::SWidgetConstruct(plVar11 + 3,local_698,local_698 + 0x30,local_698 + 0x40);
    lVar8 = local_698;
    plVar3 = (longlong *)local_690[1];
    local_6b8 = *local_690;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_678 = local_6b8;
    local_670 = plVar3;
    FUN_140696ee0(plVar11 + 2,local_698,&local_678);
    (**(code **)(plVar11[2] + 0x78))
              (plVar11 + 2,*(undefined4 *)(local_6b8 + 0x2f8),lVar8 + 0x178,lVar8 + 0x1a8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar3 + 1;
      lVar8 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    if (((char)plVar11[6] < '\0') ||
       (cVar4 = (**(code **)(plVar11[3] + 0x1e8))(plVar11 + 3), cVar4 != '\0')) {
      bVar5 = 1;
    }
    else {
      bVar5 = 0;
    }
    *(byte *)((longlong)plVar11 + 0x31) = *(byte *)((longlong)plVar11 + 0x31) & 0xfe;
    *(byte *)((longlong)plVar11 + 0x31) = *(byte *)((longlong)plVar11 + 0x31) | bVar5;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar11 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    plVar3 = local_660;
    if (local_660 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_660 + 1;
      lVar8 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_660)(local_660);
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
    FUN_140690c40(local_598);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar9 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      LOCK();
      plVar3 = plVar9 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      LOCK();
      plVar3 = plVar9 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_628);
    if (local_640 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_640 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_640)(local_640);
        LOCK();
        piVar1 = (int *)((longlong)local_640 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_640 + 8))(local_640,1);
        }
      }
    }
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_5c0 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)local_5c0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_5c0 + 8))(local_5c0,1);
        }
      }
    }
    *param_2 = (longlong)(plVar11 + 2);
    param_2[1] = (longlong)plVar11;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar11 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    plVar9 = (longlong *)local_6a0[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar9 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    return param_2;
  }
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_618)
  ;
  plVar9 = (longlong *)puVar6[1];
  local_6b8 = *puVar6;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if (local_610 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_610 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_610)(local_610);
      LOCK();
      piVar1 = (int *)((longlong)local_610 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_610 + 8))(local_610,1);
      }
    }
  }
  plVar11 = plVar9 + 1;
  local_688 = local_6b8;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar11 = (int)*plVar11 + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)local_6a0[1];
  local_658 = *local_6a0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0x500) == 0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    plVar12 = *(longlong **)(param_1 + 0x4f8);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_680 = plVar9;
  local_650 = plVar3;
  (**(code **)(*plVar12 + 0x38))(plVar12,param_2,&local_658,&local_688);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar3 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  plVar3 = local_680;
  if (local_680 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_680 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_680)(local_680);
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
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = (longlong *)local_6a0[1];
  if (plVar9 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  plVar11 = plVar9 + 1;
  lVar8 = *plVar11;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)lVar8 != 1) {
    return param_2;
  }
  (**(code **)*plVar9)(plVar9);
  LOCK();
  piVar1 = (int *)((longlong)plVar9 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return param_2;
  }
  (**(code **)(*plVar9 + 8))(plVar9,1);
  return param_2;
}



// FUNCTION 14069a870 FUN_14069a870 body=2323 status=ok
// SIG undefined FUN_14069a870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14069a870(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_ac8 [32];
  longlong local_aa8;
  longlong local_aa0;
  undefined4 local_a98;
  longlong local_a90;
  longlong local_a88;
  longlong local_a80;
  undefined1 local_a78;
  undefined1 local_a70;
  longlong local_a68;
  undefined1 local_a58 [8];
  longlong *local_a50;
  int local_a48;
  undefined8 local_a38;
  undefined4 uStack_a30;
  undefined4 uStack_a2c;
  longlong *local_a28;
  longlong *local_a20;
  undefined1 *local_a18;
  undefined1 local_a10 [8];
  longlong *local_a08;
  undefined1 local_9f8;
  undefined8 local_9f0;
  undefined4 local_9e8;
  undefined1 local_9e0 [8];
  longlong *local_9d8;
  undefined1 local_9c8;
  undefined8 local_9c0;
  undefined4 local_9b8;
  undefined1 local_9b0 [8];
  longlong *local_9a8;
  undefined1 local_998;
  undefined8 local_990;
  undefined4 local_988;
  undefined4 local_978;
  undefined4 uStack_974;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  undefined1 local_968 [8];
  longlong *local_960;
  longlong *local_958;
  longlong *local_950;
  longlong *local_940;
  longlong *local_938;
  undefined1 local_928 [8];
  longlong *local_920;
  undefined1 local_910 [8];
  longlong *local_908;
  undefined1 local_8f8 [272];
  longlong *local_7e8;
  undefined1 local_7d0 [64];
  undefined1 local_790 [16];
  undefined1 local_780 [17];
  undefined1 local_76f;
  undefined1 local_76d;
  undefined1 local_768 [912];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_ac8;
  cVar4 = FName::operator==<wchar_t>(param_3,&DAT_144043f60);
  if (cVar4 != '\0') {
    cVar4 = *(char *)(*(longlong *)(param_1 + 0x4c0) + 0x5c);
    uVar6 = FText::FromString(local_928,*(longlong *)(param_1 + 0x4c0) + 0x10);
    FText::FText(local_9e0,uVar6);
    lVar9 = *(longlong *)(param_1 + 0x4d8);
    local_9c8 = 1;
    local_9c0 = 0;
    local_9b8 = 0;
    lVar7 = SHyperlink::FArguments::FArguments(local_8f8);
    *(longlong *)(lVar7 + 0x138) = lVar9 + -0x470 + (longlong)cVar4 * 0x470;
    FText::operator=(lVar7 + 0x108,local_9e0);
    *(undefined1 *)(lVar7 + 0x120) = local_9c8;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x128,&local_9c0);
    plVar8 = (longlong *)FMemory::Realloc(0,0x20,0);
    local_a38 = (code *)plVar8;
    if (plVar8 != (longlong *)0x0) {
      plVar8[1] = param_1;
      *plVar8 = (longlong)&PTR_GetPoolName_144044a48;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar8[3] = lVar9;
      *plVar8 = (longlong)&PTR_GetPoolName_144044a90;
    }
    plVar10 = (longlong *)(lVar7 + 0x178);
    if (&local_a38 != plVar10) {
      if (plVar8 == (longlong *)0x0) {
        if ((*(int *)(lVar7 + 0x180) != 0) &&
           (plVar3 = (longlong *)*plVar10, plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          if (*plVar10 != 0) {
            lVar9 = FMemory::Realloc(*plVar10,0,0);
            *plVar10 = lVar9;
          }
          *(undefined4 *)(lVar7 + 0x180) = 0;
        }
      }
      else {
        (**(code **)(*plVar8 + 0x30))(plVar8,plVar10);
      }
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      local_a38 = (code *)FMemory::Realloc(plVar8,0,0);
      if (local_a38 != (code *)0x0) {
        FMemory::Free(local_a38);
      }
    }
    plVar10 = (longlong *)FUN_14068e460();
    plVar8 = plVar10 + 2;
    local_958 = plVar8;
    local_950 = plVar10;
    FUN_14044f790(&local_958,plVar8);
    local_aa8 = 0x498;
    SWidget::SetDebugInfo
              (plVar8,"SHyperlink",
               "D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxJira\\Source\\Private\\GbxJira.cpp",0x95
              );
    local_a98 = *(undefined4 *)(lVar7 + 0x90);
    local_a68 = lVar7 + 0xf8;
    local_a80 = lVar7 + 0xe8;
    local_a70 = *(undefined1 *)(lVar7 + 0xf1);
    local_a88 = lVar7 + 200;
    local_a90 = lVar7 + 0x98;
    local_a78 = *(undefined1 *)(lVar7 + 0xf0);
    local_aa0 = lVar7 + 0x78;
    local_aa8 = lVar7 + 0x60;
    SWidget::SWidgetConstruct(plVar8,lVar7,lVar7 + 0x30,lVar7 + 0x40);
    FUN_140695090(plVar8,lVar7);
    if (((char)plVar10[5] < '\0') || (cVar4 = (**(code **)(*plVar8 + 0x1e8))(plVar8), cVar4 != '\0')
       ) {
      bVar5 = 1;
    }
    else {
      bVar5 = 0;
    }
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar5;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    *param_2 = (longlong)plVar8;
    param_2[1] = (longlong)plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar10 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      LOCK();
      plVar8 = plVar10 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    local_76d = 0;
    local_76f = 0;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_780);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_790);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_7d0);
    if (local_7e8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_7e8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_7e8)(local_7e8);
        LOCK();
        piVar1 = (int *)((longlong)local_7e8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_7e8 + 8))(local_7e8,1);
        }
      }
    }
    FUN_140456c70(local_8f8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_9c0);
    local_908 = local_920;
    if (local_9d8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_9d8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_9d8)(local_9d8);
        LOCK();
        piVar1 = (int *)((longlong)local_9d8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_908 = local_920;
        if (iVar2 == 1) {
          (**(code **)(*local_9d8 + 8))(local_9d8,1);
          local_908 = local_920;
        }
      }
    }
LAB_14069aeac:
    if (local_908 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_908 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_908)(local_908);
        LOCK();
        piVar1 = (int *)((longlong)local_908 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_908 + 8))(local_908,1);
        }
      }
    }
    return param_2;
  }
  cVar4 = FName::operator==<wchar_t>(param_3,L"desc");
  if (cVar4 != '\0') {
    uVar6 = FText::FromString(local_910,*(longlong *)(param_1 + 0x4c0) + 0x30);
    FText::FText(local_9b0,uVar6);
    local_998 = 1;
    local_990 = 0;
    local_988 = 0;
    lVar9 = STextBlock::FArguments::FArguments(local_768);
    FText::operator=(lVar9 + 0x108,local_9b0);
    *(undefined1 *)(lVar9 + 0x120) = local_998;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_990);
    plVar8 = (longlong *)operator_new(0x660);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_144043520;
      if (plVar8 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar10 = plVar8 + 2;
    local_940 = plVar10;
    local_938 = plVar8;
    FUN_14044f790(&local_940,plVar10);
    local_aa8 = 0x650;
    SWidget::SetDebugInfo
              (plVar10,"STextBlock",
               "D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxJira\\Source\\Private\\GbxJira.cpp",0x99
              );
    local_a98 = *(undefined4 *)(lVar9 + 0x90);
    local_a68 = lVar9 + 0xf8;
    local_a80 = lVar9 + 0xe8;
    local_a70 = *(undefined1 *)(lVar9 + 0xf1);
    local_a88 = lVar9 + 200;
    local_a90 = lVar9 + 0x98;
    local_a78 = *(undefined1 *)(lVar9 + 0xf0);
    local_aa0 = lVar9 + 0x78;
    local_aa8 = lVar9 + 0x60;
    SWidget::SWidgetConstruct(plVar10,lVar9,lVar9 + 0x30,lVar9 + 0x40);
    FUN_1419b0120(plVar10,lVar9);
    if (((char)plVar8[5] < '\0') ||
       (cVar4 = (**(code **)(*plVar10 + 0x1e8))(plVar10), cVar4 != '\0')) {
      bVar5 = 1;
    }
    else {
      bVar5 = 0;
    }
    *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar5;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *param_2 = (longlong)plVar10;
    param_2[1] = (longlong)plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar10 = plVar8 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      LOCK();
      plVar10 = plVar8 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    FUN_140691150(local_768);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_990);
    if (local_9a8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_9a8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_9a8)(local_9a8);
        LOCK();
        piVar1 = (int *)((longlong)local_9a8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_9a8 + 8))(local_9a8,1);
        }
      }
    }
    goto LAB_14069aeac;
  }
  cVar4 = FName::operator==<wchar_t>(param_3,L"dist");
  if (cVar4 == '\0') {
    *param_2 = DAT_1469eb218;
    lVar9 = DAT_1469eb220;
    param_2[1] = DAT_1469eb220;
    if (lVar9 == 0) {
      return param_2;
    }
    LOCK();
    piVar1 = (int *)(lVar9 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return param_2;
  }
  local_a38 = FUN_14069b7f0;
  uStack_a30 = 0;
  lVar9 = STextBlock::FArguments::FArguments(local_3d8);
  local_978 = (undefined4)local_a38;
  uStack_974 = local_a38._4_4_;
  uStack_970 = uStack_a30;
  uStack_96c = uStack_a2c;
  uVar6 = FUN_14068c980(&local_a50,param_1,&local_978);
  FText::FText(local_a10);
  local_9f8 = 1;
  local_9f0 = 0;
  local_9e8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_9f0,uVar6);
  FText::operator=(lVar9 + 0x108,local_a10);
  *(undefined1 *)(lVar9 + 0x120) = local_9f8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_9f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_9f0);
  if (local_a08 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_a08 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_a08)(local_a08);
      LOCK();
      piVar1 = (int *)((longlong)local_a08 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_a08 + 8))(local_a08,1);
      }
    }
  }
  if (local_a48 != 0) {
    if (local_a50 == (longlong *)0x0) goto LAB_14069b01a;
    (**(code **)(*local_a50 + 0x28))(local_a50,0);
    if (local_a50 != (longlong *)0x0) {
      local_a50 = (longlong *)FMemory::Realloc(local_a50,0,0);
    }
    local_a48 = 0;
  }
  if (local_a50 != (longlong *)0x0) {
    FMemory::Free(local_a50);
  }
LAB_14069b01a:
  local_a20 = (longlong *)operator_new(0x660);
  if (local_a20 == (longlong *)0x0) {
    local_a20 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(local_a20 + 1) = 1;
    *(undefined4 *)((longlong)local_a20 + 0xc) = 1;
    *local_a20 = (longlong)&PTR_FUN_144043520;
    if (local_a20 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar8 = local_a20 + 2;
  local_a28 = plVar8;
  FUN_14044f790(&local_a28,plVar8);
  local_a18 = local_a58;
  local_aa8 = 0x650;
  SWidget::SetDebugInfo
            (plVar8,"STextBlock",
             "D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxJira\\Source\\Private\\GbxJira.cpp",0x9d);
  plVar8 = (longlong *)FUN_140693250(&local_a28,local_968,lVar9);
  *param_2 = *plVar8;
  lVar9 = plVar8[1];
  param_2[1] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  if (local_960 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_960 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_960)(local_960);
      LOCK();
      piVar1 = (int *)((longlong)local_960 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_960 + 8))(local_960,1);
      }
    }
  }
  plVar8 = local_a20;
  if (local_a20 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_a20 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_a20)(local_a20);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_a20 + 8))(local_a20,1);
      }
    }
  }
  FUN_140691150(local_3d8);
  return param_2;
}



// FUNCTION 14069b190 FUN_14069b190 body=752 status=ok
// SIG undefined FUN_14069b190(void)

void FUN_14069b190(longlong *param_1,undefined8 *param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [3] [16];
  
  FUN_14069bc50(param_1 + 0x85,&local_e8,param_2);
  plVar10 = (longlong *)CONCAT44(uStack_e4,local_e8);
  if (plVar10 == (longlong *)0x0) {
    local_b8 = *param_2;
    local_b0 = param_2[1];
    if (local_b0 != 0) {
      LOCK();
      *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
      UNLOCK();
    }
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x268))(param_1,local_78,&local_b8);
    local_d0 = (longlong *)puVar8[1];
    uVar4 = *puVar8;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    local_e8 = (undefined4)uVar4;
    uStack_e4 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_e0,&local_d0);
    plVar10 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_70 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    plVar10 = (longlong *)CONCAT44(uStack_e4,local_e8);
  }
  (**(code **)(*plVar10 + 0x10))(plVar10,param_3);
  uVar7 = uStack_dc;
  uStack_90 = uStack_e0;
  uVar6 = uStack_e4;
  uVar5 = local_e8;
  local_68[0]._4_4_ = uStack_e4;
  local_68[0]._0_4_ = local_e8;
  local_68[0]._8_4_ = uStack_e0;
  local_68[0]._12_4_ = uStack_dc;
  lVar9 = 0;
  if (local_68[0]._8_8_ != 0) {
    LOCK();
    piVar2 = (int *)(local_68[0]._8_8_ + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    lVar9 = CONCAT44(uStack_dc,uStack_e0);
    plVar10 = (longlong *)CONCAT44(uStack_e4,local_e8);
  }
  local_a8 = *param_2;
  local_a0 = param_2[1];
  if (local_a0 != 0) {
    LOCK();
    *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
    UNLOCK();
    lVar9 = CONCAT44(uStack_dc,uStack_e0);
    plVar10 = (longlong *)CONCAT44(uStack_e4,local_e8);
  }
  FUN_14069d7a0(param_1 + 0x85,&local_a8,local_68);
  (**(code **)(*plVar10 + 0x50))(plVar10,&local_c8);
  FUN_14185c5d0(local_c8,param_5);
  SWidget::GetDesiredSize(local_c8,local_res8);
  if (param_3 < param_4) {
    uStack_7c = uVar7;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
      lVar9 = CONCAT44(uStack_dc,uStack_e0);
    }
    local_88 = uVar5;
    uStack_84 = uVar6;
    uStack_80 = uStack_90;
    FUN_1419b3c90(param_1,&local_88);
    plVar10 = (longlong *)CONCAT44(uStack_7c,uStack_80);
  }
  else {
    uStack_8c = uVar7;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
      lVar9 = CONCAT44(uStack_dc,uStack_e0);
    }
    local_98 = uVar5;
    uStack_94 = uVar6;
    FUN_1419aa990(param_1,&local_98);
    plVar10 = (longlong *)CONCAT44(uStack_8c,uStack_90);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    lVar9 = CONCAT44(uStack_dc,uStack_e0);
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_c0 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
    lVar9 = CONCAT44(uStack_dc,uStack_e0);
  }
  if (lVar9 != 0) {
    LOCK();
    piVar2 = (int *)(lVar9 + 8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      puVar8 = (undefined8 *)CONCAT44(uStack_dc,uStack_e0);
      (**(code **)*puVar8)(puVar8);
      LOCK();
      piVar2 = (int *)((longlong)puVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_dc,uStack_e0) + 8))
                  ((longlong *)CONCAT44(uStack_dc,uStack_e0),1);
      }
    }
  }
  return;
}



// FUNCTION 14069b480 Get body=80 status=ok
// SIG undefined Get(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * TAttribute<enum_ESelectionMode::Type>::Get(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_1[4] != 0) && (*(longlong **)(param_1 + 2) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 2) + 0x18))();
    if (cVar1 != '\0') {
      if (param_1[4] != 0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 2) + 0x38))();
        *param_1 = uVar2;
        return param_1;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *param_1 = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 14069b4d0 FUN_14069b4d0 body=623 status=ok
// SIG undefined FUN_14069b4d0(void)

longlong FUN_14069b4d0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar2 = (longlong *)param_1[0x73];
  plVar10 = (longlong *)0x0;
  plVar9 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar10, !bVar12) {
      LOCK();
      bVar12 = iVar5 == (int)plVar2[1];
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar9 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = (longlong *)param_1[0x72];
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0xa8))(plVar10,local_28);
  cVar3 = (**(code **)(*(longlong *)*puVar6 + 0x180))();
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146857f08) && (_Init_thread_header(&DAT_146857f08), DAT_146857f08 == -1))
  {
    FName::FName(&DAT_146857f00,"GenericWhiteBox",1);
    _Init_thread_footer(&DAT_146857f08);
  }
  (**(code **)(*DAT_1469eb140 + 0x40))(DAT_1469eb140,DAT_146857f00,0);
  uVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,param_1);
  cVar4 = (**(code **)(*plVar10 + 0x10))(plVar10,uVar7);
  if ((cVar4 == '\0') || (*(char *)((longlong)param_1 + 0x3a4) == '\0')) {
    iVar5 = (**(code **)(*param_1 + 0x70))(param_1);
    if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
      cVar3 = (**(code **)(param_1[1] + 0x1a8))();
      if ((cVar3 == '\0') || (iVar5 == 0)) {
        lVar11 = param_1[0x75] + 0x338;
      }
      else {
        lVar11 = param_1[0x75] + 0x2b0;
      }
    }
    else {
      cVar3 = (**(code **)(param_1[1] + 0x1a8))();
      if ((cVar3 == '\0') || (iVar5 == 0)) {
        lVar11 = param_1[0x75] + 0x448;
      }
      else {
        lVar11 = param_1[0x75] + 0x3c0;
      }
    }
  }
  else {
    cVar4 = (**(code **)(param_1[1] + 0x1a8))(param_1 + 1);
    lVar11 = param_1[0x75];
    if (cVar3 == '\0') {
      if (cVar4 == '\0') {
        lVar11 = lVar11 + 0x228;
      }
      else {
        lVar11 = lVar11 + 0x1a0;
      }
    }
    else {
      lVar8 = 0x118;
      if (cVar4 != '\0') {
        lVar8 = 0x90;
      }
      lVar11 = lVar11 + lVar8;
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return lVar11;
}



// FUNCTION 14069b7f0 FUN_14069b7f0 body=345 status=ok
// SIG undefined FUN_14069b7f0(void)

undefined8 FUN_14069b7f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  lVar4 = *(longlong *)(param_1 + 0x4c0);
  if (*(char *)(lVar4 + 0x58) == '\0') {
    uVar6 = FUN_1404b03b0();
    FText::FText(param_2,uVar6);
    return param_2;
  }
  if ((*(int *)(param_1 + 0x4b8) != 0) && (*(longlong **)(param_1 + 0x4b0) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x18))();
    if (cVar5 != '\0') {
      if (*(int *)(param_1 + 0x4b8) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x4b0);
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_28);
      *(undefined8 *)(param_1 + 0x4a0) = local_28;
      *(undefined4 *)(param_1 + 0x4a8) = local_20;
    }
  }
  fVar9 = *(float *)(param_1 + 0x4a0) - *(float *)(lVar4 + 0x40);
  fVar10 = *(float *)(param_1 + 0x4a4) - *(float *)(lVar4 + 0x44);
  fVar8 = *(float *)(param_1 + 0x4a8) - *(float *)(lVar4 + 0x48);
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  FText::AsNumber(param_2,(int)(SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8) *
                               (1.0 / *(float *)(param_1 + 0x4d0))),0,&local_18);
  plVar7 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
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
  return param_2;
}



// FUNCTION 14069b950 FUN_14069b950 body=300 status=ok
// SIG undefined FUN_14069b950(void)

undefined4 * FUN_14069b950(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  
  plVar3 = *(longlong **)(param_1 + 0x398);
  plVar13 = (longlong *)0x0;
  plVar12 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar3[1];
    bVar14 = iVar8 == 0;
    if (bVar14) {
      *(int *)(plVar3 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (plVar12 = plVar13, !bVar14) {
      LOCK();
      bVar14 = iVar8 == (int)plVar3[1];
      if (bVar14) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar14) {
        plVar12 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          plVar13 = *(longlong **)(param_1 + 0x390);
        }
        break;
      }
      LOCK();
      iVar8 = (int)plVar3[1];
      bVar14 = iVar8 == 0;
      if (bVar14) {
        *(int *)(plVar3 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x3a8);
  if ((*(char *)(param_1 + 0x3a4) == '\0') || (plVar13 == (longlong *)0x0)) {
    uVar4 = *(undefined4 *)(lVar10 + 0x4d4);
    uVar5 = *(undefined4 *)(lVar10 + 0x4d8);
    uVar6 = *(undefined4 *)(lVar10 + 0x4dc);
    *param_2 = *(undefined4 *)(lVar10 + 0x4d0);
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(lVar10 + 0x4e0);
    *(undefined8 *)(param_2 + 6) = *(undefined8 *)(lVar10 + 0x4e8);
    lVar10 = *(longlong *)(lVar10 + 0x4f0);
  }
  else {
    uVar9 = (**(code **)(*plVar13 + 0x38))(plVar13);
    cVar7 = (**(code **)(*plVar13 + 0x10))(plVar13,uVar9);
    lVar11 = 0x4d0;
    if (cVar7 != '\0') {
      lVar11 = 0x4f8;
    }
    puVar2 = (undefined4 *)(lVar11 + lVar10);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *param_2 = *puVar2;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(lVar11 + 0x10 + lVar10);
    *(undefined8 *)(param_2 + 6) = *(undefined8 *)(lVar11 + 0x18 + lVar10);
    lVar10 = *(longlong *)(lVar11 + 0x20 + lVar10);
  }
  *(longlong *)(param_2 + 8) = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar12 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14069ba80 FUN_14069ba80 body=166 status=ok
// SIG undefined FUN_14069ba80(void)

ulonglong FUN_14069ba80(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x398);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0x390);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  uVar5 = (**(code **)(*plVar7 + 0x68))(plVar7,*(undefined4 *)(param_1 + 0x3a0));
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar5 = uVar5 & 0xffffffff;
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 14069bb60 FUN_14069bb60 body=160 status=ok
// SIG undefined FUN_14069bb60(void)

ulonglong FUN_14069bb60(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x398);
  plVar6 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar6, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 0x390);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  uVar5 = (**(code **)(*plVar6 + 0x98))(plVar6);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar5 = uVar5 & 0xffffffff;
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 14069bc50 FUN_14069bc50 body=329 status=ok
// SIG undefined FUN_14069bc50(void)

undefined8 * FUN_14069bc50(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int local_res8 [2];
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  puVar11 = (undefined8 *)0x0;
  local_res8[0] = 0;
  TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 8),local_res8);
  puVar10 = puVar11;
  if (local_res8[0] != -1) {
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)local_res8[0] * 0x28);
  }
  puVar9 = puVar10 + 2;
  if (puVar10 == (undefined8 *)0x0) {
    puVar9 = puVar11;
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar10 = &local_18;
    local_18 = 0;
    plStack_10 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    local_20 = (longlong *)puVar9[1];
    puVar11 = (undefined8 *)*puVar9;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    puVar10 = &local_28;
    bVar6 = true;
    bVar5 = false;
    local_28 = puVar11;
  }
  uVar4 = puVar10[1];
  puVar10[1] = 0;
  *puVar10 = 0;
  plVar8 = plStack_10;
  *param_2 = puVar11;
  param_2[1] = uVar4;
  if ((bVar5) && (plStack_10 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
  }
  plVar8 = local_20;
  if ((bVar6) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14069bda0 GetWidth body=102 status=ok
// SIG undefined GetWidth(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SHeaderRow::FColumn::GetWidth(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    return (ulonglong)*(uint *)(param_1 + 0x68);
  }
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x78) != 0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x38))();
        *(int *)(param_1 + 0x68) = (int)uVar2;
        return uVar2;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *(int *)(param_1 + 0x68) = (int)uVar2;
      return uVar2;
    }
  }
  return (ulonglong)*(uint *)(param_1 + 0x68);
}



// FUNCTION 14069be10 FUN_14069be10 body=301 status=ok
// SIG undefined FUN_14069be10(void)

void * FUN_14069be10(longlong param_1,void *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  longlong *plVar7;
  void *_Dst;
  longlong *plVar8;
  bool bVar9;
  
  plVar2 = *(longlong **)(param_1 + 0x398);
  plVar7 = plVar2;
  plVar8 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar7 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar9) {
      LOCK();
      bVar9 = iVar4 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 0x390);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  pvVar6 = (void *)(**(code **)(*plVar8 + 0x70))(plVar8,*(undefined4 *)(param_1 + 0x3a0));
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  if (param_2 != pvVar6) {
    iVar4 = *(int *)((longlong)pvVar6 + 0x18) + 0x1f;
    uVar5 = iVar4 + (iVar4 >> 0x1f & 0x1fU) & 0xffffffe0;
    if (uVar5 != 0) {
      *(uint *)((longlong)param_2 + 0x1c) = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_2,0);
    }
    iVar4 = *(int *)((longlong)pvVar6 + 0x18);
    *(int *)((longlong)param_2 + 0x18) = iVar4;
    if (iVar4 != 0) {
      iVar4 = *(int *)((longlong)param_2 + 0x1c) + 0x1f;
      _Dst = *(void **)((longlong)param_2 + 0x10);
      if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
        _Dst = param_2;
      }
      _guard_xfg_dispatch_icall_nop
                (_Dst,(void *)((ulonglong)(*(longlong *)((longlong)pvVar6 + 0x10) != 0) - 1 &
                               (ulonglong)pvVar6 | *(ulonglong *)((longlong)pvVar6 + 0x10)),
                 (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14069bf40 FUN_14069bf40 body=112 status=ok
// SIG undefined FUN_14069bf40(void)

longlong FUN_14069bf40(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = DAT_146857ee0 + (longlong)DAT_146857ee8 * 0x28;
  lVar4 = DAT_146857ee0;
  while ((lVar4 != lVar2 && (cVar1 = FUN_14058c1e0(lVar4), cVar1 == '\0'))) {
    lVar4 = lVar4 + 0x28;
  }
  lVar3 = 0;
  if (lVar4 != lVar2) {
    lVar3 = lVar4;
  }
  lVar2 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 14069bfb0 FUN_14069bfb0 body=168 status=ok
// SIG undefined FUN_14069bfb0(void)

bool FUN_14069bfb0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar6, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    return plVar6 == param_2;
  }
  return plVar6 == param_2;
}



// FUNCTION 14069c060 FUN_14069c060 body=219 status=ok
// SIG undefined FUN_14069c060(void)

undefined1 * FUN_14069c060(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x490) != 0) && (*(longlong **)(param_1 + 0x488) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x488) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x490) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x488);
    }
    (**(code **)(*plVar2 + 0x40))();
  }
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14069c140 FUN_14069c140 body=341 status=ok
// SIG undefined FUN_14069c140(void)

undefined8 * FUN_14069c140(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  
  puVar3 = (undefined8 *)operator_new(0x28);
  lVar6 = 0;
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *puVar3 = IModuleInterface::vftable;
  puVar3[1] = &PTR__scalar_deleting_destructor__143f73ca8;
  *(undefined1 *)(puVar3 + 2) = 0;
  if (DAT_1468c217e == '\0') {
    if (DAT_1469e6880 == 0) {
      uVar4 = GetTransientPackage();
      FUN_1417846f0(uVar4,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar5 = UGCObjectReferencer::GetPrivateStaticClass();
      DAT_1469e6880 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
      iVar1 = *(int *)(DAT_1469e6880 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar7;
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar7) * 0x18;
      }
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
    }
    UGCObjectReferencer::AddObject(DAT_1469e6880,puVar3 + 1);
    *(undefined1 *)(puVar3 + 2) = 1;
  }
  *puVar3 = &PTR_FUN_144042b28;
  puVar3[1] = &PTR_LAB_144042b68;
  puVar3[3] = 0;
  puVar3[4] = 0;
  return puVar3;
}



// FUNCTION 14069c2a0 FUN_14069c2a0 body=180 status=ok
// SIG undefined FUN_14069c2a0(void)

undefined1 FUN_14069c2a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar2 = *(longlong **)(param_1 + 0x398);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 0x390);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  uVar6 = (**(code **)(*plVar8 + 0x38))(plVar8);
  uVar4 = (**(code **)(*plVar8 + 0x50))(plVar8,uVar6);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return uVar4;
}



// FUNCTION 14069c360 FUN_14069c360 body=180 status=ok
// SIG undefined FUN_14069c360(void)

undefined1 FUN_14069c360(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar2 = *(longlong **)(param_1 + 0x398);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 0x390);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  uVar6 = (**(code **)(*plVar8 + 0x38))(plVar8);
  uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar6);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return uVar4;
}



// FUNCTION 14069c420 FUN_14069c420 body=184 status=ok
// SIG undefined FUN_14069c420(void)

undefined1 FUN_14069c420(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x398);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0x390);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  uVar4 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined4 *)(param_1 + 0x3a0));
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 14069c4f0 FUN_14069c4f0 body=302 status=ok
// SIG undefined FUN_14069c4f0(void)

void FUN_14069c4f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28 [2];
  
  if (((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) &&
     (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 != (longlong *)0x0)) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar6) {
      LOCK();
      bVar6 = iVar5 == (int)plVar3[1];
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar6) {
        if (plVar3 != (longlong *)0x0) {
          lVar4 = *(longlong *)(param_1 + 0x10);
          if (lVar4 != 0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            local_38 = lVar4;
            local_30 = plVar3;
            (**(code **)(**(longlong **)(DAT_146b17150 + 0x7b0) + 0x2a8))
                      (*(longlong **)(DAT_146b17150 + 0x7b0),&local_38);
          }
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if ((undefined8 *)(param_1 + 0x10) != local_28) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    plVar3 = *(longlong **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  FWeakObjectPtr::operator=(&local_res10,0);
  *(undefined4 *)(param_1 + 8) = local_res10;
  *(undefined4 *)(param_1 + 0xc) = local_res14;
  return;
}



// FUNCTION 14069c620 FUN_14069c620 body=853 status=ok
// SIG undefined FUN_14069c620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14069c620(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined4 uVar9;
  ushort uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar12 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))(), cVar8 != '\0')) {
    plVar11 = plVar12;
    if (*(int *)(param_1 + 0x3c8) != 0) {
      plVar11 = *(longlong **)(param_1 + 0x3c0);
    }
    uVar9 = (**(code **)(*plVar11 + 0x38))();
    *(undefined4 *)(param_1 + 0x3b8) = uVar9;
  }
  iVar5 = *(int *)(param_1 + 0x3b8);
  if (iVar5 == 0) {
    return;
  }
  plVar11 = (longlong *)param_2[1];
  puVar3 = (undefined8 *)(param_1 + 0x598);
  uVar6 = *param_2;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_98 = uVar6;
  plStack_90 = plVar11;
  if (&local_98 != puVar3) {
    local_98 = *puVar3;
    plStack_90 = *(longlong **)(param_1 + 0x5a0);
    *puVar3 = uVar6;
    *(longlong **)(param_1 + 0x5a0) = plVar11;
    local_48 = uVar6;
    plStack_40 = plVar11;
  }
  plVar11 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  if (iVar5 == 3) {
    uVar10 = *(ushort *)(param_3 + 8) & 0xc;
    if ((*(ushort *)(param_3 + 8) & 3) == 0) {
      if (uVar10 == 0) goto LAB_14069c756;
    }
    else {
      if (uVar10 == 0) {
        (**(code **)(*(longlong *)(param_1 + 0x420) + 0x20))();
      }
      local_78 = *param_2;
      local_70 = param_2[1];
      if (local_70 != 0) {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*(longlong *)(param_1 + 0x420) + 0x28))((longlong *)(param_1 + 0x420),&local_78);
    }
    (**(code **)(*(longlong *)(param_1 + 0x420) + 0x30))((longlong *)(param_1 + 0x420),1);
  }
  else {
LAB_14069c756:
    plVar11 = (longlong *)param_2[1];
    uVar6 = *param_2;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    TSet<TSharedPtr<SWidget,0>,DefaultKeyFuncs<TSharedPtr<SWidget,0>,0>,FDefaultSetAllocator>::Empty
              (param_1 + 0x548,0);
    if (((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0))
       && (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))(), cVar8 != '\0')) {
      if (*(int *)(param_1 + 0x3c8) != 0) {
        plVar12 = *(longlong **)(param_1 + 0x3c0);
      }
      uVar9 = (**(code **)(*plVar12 + 0x38))(plVar12);
      *(undefined4 *)(param_1 + 0x3b8) = uVar9;
    }
    if (*(int *)(param_1 + 0x3b8) != 0) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_68 = uVar6;
      local_60 = plVar11;
      (**(code **)(*(longlong *)(param_1 + 0x420) + 0x18))(param_1 + 0x420,&local_68,1);
      (**(code **)(*(longlong *)(param_1 + 0x420) + 0x30))(param_1 + 0x420,1);
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar11 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
  }
  FUN_14069bc50(param_1 + 0x428,local_88,param_2);
  plVar12 = (longlong *)param_2[1];
  uVar9 = *(undefined4 *)(param_3 + 0xc);
  local_58 = *param_2;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x633) = 1;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_50 = plVar12;
  FUN_1406a2070(param_1,&local_58,uVar9);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar12 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  plVar12 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_80 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 14069c980 FUN_14069c980 body=745 status=ok
// SIG undefined FUN_14069c980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14069c980(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98 = *(longlong *)(param_1 + 0x5d8);
  if (local_98 != 0) {
    plVar8 = *(longlong **)(param_1 + 0x5e0);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    uStack_90 = plVar8;
    FUN_14069bc50(param_1 + 0x428,&local_78,&local_98);
    if ((*(char *)(param_1 + 0x633) != '\0') && (local_78 != (longlong *)0x0)) {
      puVar3 = (undefined4 *)(param_1 + 0x598);
      local_88 = (undefined4)local_98;
      uStack_84 = local_98._4_4_;
      uStack_80 = (undefined4)uStack_90;
      uStack_7c = uStack_90._4_4_;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      if (&local_88 != puVar3) {
        local_88 = *puVar3;
        uStack_84 = *(undefined4 *)(param_1 + 0x59c);
        uStack_80 = *(undefined4 *)(param_1 + 0x5a0);
        uStack_7c = *(undefined4 *)(param_1 + 0x5a4);
        local_38 = (undefined4)local_98;
        uStack_34 = local_98._4_4_;
        uStack_30 = (undefined4)uStack_90;
        uStack_2c = uStack_90._4_4_;
        *puVar3 = (undefined4)local_98;
        *(undefined4 *)(param_1 + 0x59c) = local_98._4_4_;
        *(undefined4 *)(param_1 + 0x5a0) = (undefined4)uStack_90;
        *(undefined4 *)(param_1 + 0x5a4) = uStack_90._4_4_;
      }
      if (CONCAT44(uStack_7c,uStack_80) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT44(uStack_7c,uStack_80) + 8);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          puVar7 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
          (**(code **)*puVar7)(puVar7);
          LOCK();
          piVar1 = (int *)((longlong)puVar7 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*(longlong *)CONCAT44(uStack_7c,uStack_80) + 8))
                      ((longlong *)CONCAT44(uStack_7c,uStack_80),1);
          }
        }
      }
      puVar7 = (undefined8 *)(**(code **)(*local_78 + 0x50))(local_78,local_58);
      local_68 = *puVar7;
      local_60 = (longlong *)puVar7[1];
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      FUN_1419b4220(param_1,*(undefined4 *)(param_1 + 0x5d0),&local_68);
      plVar8 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_50 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x633) = 0;
    if (uStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_90 + 1) = (int)uStack_90[1] + 1;
      UNLOCK();
    }
    if (((*(int *)(param_1 + 0x540) != 0) && (*(longlong **)(param_1 + 0x538) != (longlong *)0x0))
       && (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x18))(), cVar6 != '\0')) {
      if (*(int *)(param_1 + 0x540) == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(param_1 + 0x538);
      }
      local_48 = (undefined4)local_98;
      uStack_44 = local_98._4_4_;
      uStack_40 = (undefined4)uStack_90;
      uStack_3c = uStack_90._4_4_;
      if (uStack_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_90 + 1) = (int)uStack_90[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,&local_48,&local_78);
    }
    plVar8 = uStack_90;
    if (uStack_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_90 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*uStack_90)(uStack_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*uStack_90 + 8))(uStack_90,1);
        }
      }
    }
    FUN_1406a2190(param_1 + 0x5d8);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_70 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    plVar8 = uStack_90;
    if (uStack_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_90 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*uStack_90)(uStack_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*uStack_90 + 8))(uStack_90,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14069cca0 FUN_14069cca0 body=727 status=ok
// SIG undefined FUN_14069cca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_14069cca0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_158 [40];
  undefined1 local_130 [24];
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (*(char *)(param_1 + 0x431) == '\0') {
    cVar3 = FUN_141846080();
    plVar6 = (longlong *)0x0;
    if ((cVar3 != '\0') && (*(char *)(param_1 + 0x430) != '\0')) {
      plVar7 = *(longlong **)(param_1 + 0x390);
      plVar8 = plVar7;
      plVar9 = plVar6;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar7 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar6, plVar9 = (longlong *)0x0, !bVar10) {
          LOCK();
          bVar10 = iVar4 == (int)plVar7[1];
          if (bVar10) {
            *(int *)(plVar7 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar8 = plVar7;
            if (plVar7 != (longlong *)0x0) {
              plVar9 = *(longlong **)(param_1 + 0x388);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar7[1];
          bVar10 = iVar4 == 0;
          if (bVar10) {
            *(int *)(plVar7 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,2);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar8 + 1;
        lVar2 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    if (((*(int *)(param_1 + 0x3e0) == 0) || (*(longlong **)(param_1 + 0x3d8) == (longlong *)0x0))
       || (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x18))(), cVar3 == '\0')) {
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
      *(undefined8 *)(param_2 + 0x68) = 0;
      *(undefined8 *)(param_2 + 0x70) = 0;
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(undefined8 *)(param_2 + 0x90) = 0;
      *(undefined8 *)(param_2 + 0x98) = 0;
      *(undefined8 *)(param_2 + 0xa0) = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    }
    else {
      if (*(int *)(param_1 + 0x3e0) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x3d8);
      }
      (**(code **)(*plVar6 + 0x38))(plVar6,param_2,param_3,param_4);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x431) = 0;
    plVar6 = *(longlong **)(param_1 + 0x390);
    plVar7 = plVar6;
    plVar8 = (longlong *)0x0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(plVar6 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar7 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar10) {
        LOCK();
        bVar10 = iVar4 == (int)plVar6[1];
        if (bVar10) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar10) {
          plVar7 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x388);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar6 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    local_64 = local_64 & 0xffffff00;
    local_118[0] = 1;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_110 = 0;
    local_108 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_68 = 0x20702;
    uVar5 = (**(code **)(*plVar8 + 0xa8))(plVar8,local_130);
    uVar5 = FUN_140693ff0(local_118,uVar5);
    FUN_140438260(param_2,uVar5);
    FUN_140438c20(local_118);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 14069cf80 FUN_14069cf80 body=87 status=ok
// SIG undefined FUN_14069cf80(void)

void FUN_14069cf80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x3f0) != 0) && (*(longlong **)(param_1 + 1000) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 1000) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3f0) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 1000);
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,param_3);
    }
  }
  return;
}



// FUNCTION 14069cfe0 FUN_14069cfe0 body=114 status=ok
// SIG undefined FUN_14069cfe0(void)

void FUN_14069cfe0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  if ((local_res8 != (undefined1 *)(param_1 + 0x3d0)) && (*(char *)(param_1 + 0x3d4) != '\0')) {
    *(undefined1 *)(param_1 + 0x3d4) = 0;
  }
  if ((*(int *)(param_1 + 0x400) != 0) && (*(longlong **)(param_1 + 0x3f8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3f8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x400) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x3f8);
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 14069d060 FUN_14069d060 body=564 status=ok
// SIG undefined FUN_14069d060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14069d060(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  int local_48 [2];
  longlong local_40;
  longlong local_38;
  int *local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + 0x3b8) != 0) && (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x18))();
    if (cVar1 != '\0') {
      fVar3 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                    *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24));
      fVar5 = *(float *)(param_3 + 0x1c) * fVar3;
      fVar3 = -(*(float *)(param_3 + 0x20) * fVar3);
      fVar4 = *(float *)(param_3 + 4) * 0.25;
      fVar5 = fVar5 * *(float *)(param_4 + 0x1c) + fVar3 * *(float *)(param_4 + 0x18) +
              (-(fVar3 * *(float *)(param_3 + 0x2c)) - fVar5 * *(float *)(param_3 + 0x30));
      fVar3 = 3.0;
      if ((3.0 <= fVar4) && (fVar3 = fVar4, 10.0 <= fVar4)) {
        fVar3 = 10.0;
      }
      if (fVar3 <= fVar5) {
        local_48[0] = (*(float *)(param_3 + 4) - fVar3 < fVar5) + 1;
      }
      else {
        local_48[0] = 0;
      }
      local_40 = param_1 + -8;
      local_30 = local_48;
      local_38 = param_4;
      puVar2 = (undefined4 *)FUN_140692ec0(&local_40,local_28);
      if (puVar2 != (undefined4 *)(param_1 + 0x3d0)) {
        if (*(char *)(param_1 + 0x3d4) != '\0') {
          *(undefined1 *)(param_1 + 0x3d4) = 0;
        }
        if (*(char *)(puVar2 + 1) != '\0') {
          *(undefined4 *)(param_1 + 0x3d0) = *puVar2;
          *(undefined1 *)(param_1 + 0x3d4) = 1;
        }
      }
      *param_2 = 1;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
      *(undefined8 *)(param_2 + 0x68) = 0;
      *(undefined8 *)(param_2 + 0x70) = 0;
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      goto LAB_14069d244;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
LAB_14069d244:
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14069d2a0 FUN_14069d2a0 body=211 status=ok
// SIG undefined FUN_14069d2a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14069d2a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  char local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_108 = param_1 + -8;
  local_100 = param_3;
  local_f8 = param_4;
  FUN_140692930(&local_108,local_e8);
  if (((local_e8[0] == '\0') && (*(int *)(param_1 + 0x410) != 0)) &&
     (*(longlong **)(param_1 + 0x408) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x408) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x410) == 0) {
        (**(code **)(_DAT_00000000 + 0x38))(0,param_2,param_4);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x408) + 0x38))
                  (*(longlong **)(param_1 + 0x408),param_2,param_4);
      }
      goto LAB_14069d34b;
    }
  }
  FUN_140438260(param_2,local_e8);
LAB_14069d34b:
  FUN_140438c20(local_e8);
  return param_2;
}



// FUNCTION 14069d380 FUN_14069d380 body=1049 status=ok
// SIG undefined FUN_14069d380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14069d380(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  longlong local_280;
  undefined4 local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  undefined1 local_258;
  undefined1 local_250;
  longlong local_248;
  undefined8 local_238;
  longlong *plStack_230;
  longlong *local_228;
  int local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined1 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined8 local_1b0;
  longlong *plStack_1a8;
  undefined1 local_198 [272];
  longlong *local_88;
  undefined1 local_70 [40];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  plVar5 = (longlong *)param_3[1];
  uVar10 = *param_3;
  local_1e8 = &LAB_14069b740;
  uStack_1e0 = 0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_1f0 = param_3;
  lVar9 = FUN_14068fce0(local_198);
  *(longlong *)(lVar9 + 0x140) = param_1 + 0x360;
  *(undefined4 *)(lVar9 + 0x138) = *(undefined4 *)(param_1 + 0x350);
  puVar3 = (undefined8 *)(lVar9 + 0x108);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_238 = uVar10;
  plStack_230 = plVar5;
  if (&local_238 != puVar3) {
    local_238 = *puVar3;
    plStack_230 = *(longlong **)(lVar9 + 0x110);
    *puVar3 = uVar10;
    *(longlong **)(lVar9 + 0x110) = plVar5;
    local_1b0 = uVar10;
    plStack_1a8 = plVar5;
  }
  plVar11 = plStack_230;
  if (plStack_230 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_230 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_230)(plStack_230);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_230 + 8))(plStack_230,1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar5 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  local_1d8 = (undefined4)local_1e8;
  uStack_1d4 = local_1e8._4_4_;
  uStack_1d0 = uStack_1e0;
  uStack_1cc = uStack_1dc;
  uVar10 = FUN_14068cae0(&local_228,param_1,&local_1d8);
  local_20c = 1;
  local_208 = 0;
  local_200 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_208,uVar10);
  *(undefined8 *)(lVar9 + 0x118) = local_218;
  *(undefined4 *)(lVar9 + 0x120) = local_210;
  *(undefined1 *)(lVar9 + 0x124) = local_20c;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_208);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_208);
  if (local_220 != 0) {
    if (local_228 == (longlong *)0x0) goto LAB_14069d570;
    (**(code **)(*local_228 + 0x28))(local_228,0);
    if (local_228 != (longlong *)0x0) {
      local_228 = (longlong *)FMemory::Realloc(local_228,0,0);
    }
    local_220 = 0;
  }
  if (local_228 != (longlong *)0x0) {
    FMemory::Free(local_228);
  }
LAB_14069d570:
  local_1f8 = param_4;
  plVar11 = (longlong *)FUN_14068e5b0();
  plVar5 = plVar11 + 2;
  local_1c8 = plVar5;
  local_1c0 = plVar11;
  TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
  Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
            (&local_1c8,plVar5);
  local_288 = 0xb98;
  SWidget::SetDebugInfo
            (plVar11 + 3,"SJiraTableRow",
             "D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxJira\\Source\\Private\\GbxJira.cpp",0x106)
  ;
  local_278 = *(undefined4 *)(lVar9 + 0x90);
  local_248 = lVar9 + 0xf8;
  local_260 = lVar9 + 0xe8;
  local_250 = *(undefined1 *)(lVar9 + 0xf1);
  local_268 = lVar9 + 200;
  local_270 = lVar9 + 0x98;
  local_258 = *(undefined1 *)(lVar9 + 0xf0);
  local_280 = lVar9 + 0x78;
  local_288 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar11 + 3,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_140695470(plVar5,lVar9,local_1f8);
  if (((char)plVar11[6] < '\0') ||
     (cVar7 = (**(code **)(plVar11[3] + 0x1e8))(plVar11 + 3), cVar7 != '\0')) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar11 + 0x31) = *(byte *)((longlong)plVar11 + 0x31) & 0xfe;
  *(byte *)((longlong)plVar11 + 0x31) = *(byte *)((longlong)plVar11 + 0x31) | bVar8;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar11 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    LOCK();
    plVar5 = plVar11 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_70);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_88 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  FUN_140690b40(local_198);
  plVar5 = (longlong *)local_1f0[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar5 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_2;
}



// FUNCTION 14069d7a0 FUN_14069d7a0 body=796 status=ok
// SIG undefined FUN_14069d7a0(void)

void FUN_14069d7a0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  uint local_res20;
  int local_88;
  undefined1 local_84 [4];
  undefined1 local_80 [8];
  undefined8 local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong *local_58;
  
  TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 8,&local_88,param_2);
  lVar6 = 0;
  if (local_88 != -1) {
    lVar6 = *(longlong *)(param_1 + 8) + (longlong)local_88 * 0x28;
  }
  lVar4 = lVar6 + 0x10;
  if (lVar6 == 0) {
    lVar4 = 0;
  }
  if (lVar4 == 0) {
    local_70 = param_2;
    local_68 = param_3;
    FUN_14068d520(param_1 + 8,local_84,&local_70,0);
    local_78 = *param_3;
    local_60 = &local_78;
    local_58 = param_2;
    FUN_14068d230(param_1 + 0x58,local_80,&local_60,0);
    (*(code *)**(undefined8 **)*param_3)();
  }
  uVar8 = 0;
  lVar6 = (longlong)*(int *)(param_1 + 200);
  if (*(int *)(param_1 + 200) != 0) {
    bVar13 = **(longlong **)(param_1 + 0xc0) != *param_2;
    local_res20 = 0;
    uVar10 = uVar8;
    uVar12 = uVar8;
    do {
      iVar11 = (int)uVar12;
      uVar10 = uVar10 + 1;
      uVar12 = (ulonglong)(iVar11 + 1);
      if ((longlong)uVar10 < lVar6) {
        plVar5 = (longlong *)(uVar10 * 0x10 + *(longlong *)(param_1 + 0xc0));
        do {
          if (bVar13 != (*plVar5 != *param_2)) break;
          uVar12 = (ulonglong)((int)uVar12 + 1);
          uVar10 = uVar10 + 1;
          plVar5 = plVar5 + 2;
        } while ((longlong)uVar10 < lVar6);
      }
      iVar9 = (int)uVar12 - iVar11;
      if (bVar13 == false) {
        if (iVar9 != 0) {
          plVar5 = (longlong *)((longlong)iVar11 * 0x10 + 8 + *(longlong *)(param_1 + 0xc0));
          do {
            plVar3 = (longlong *)*plVar5;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar11 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar5 = plVar5 + 2;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          uVar8 = (ulonglong)local_res20;
        }
      }
      else {
        iVar7 = (int)uVar8;
        if (iVar7 != iVar11) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0xc0)),
                     (void *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0xc0)),
                     (longlong)iVar9 << 4);
        }
        local_res20 = iVar7 + iVar9;
        uVar8 = (ulonglong)local_res20;
      }
      bVar13 = (bool)(bVar13 ^ 1);
    } while ((longlong)uVar10 < lVar6);
    *(int *)(param_1 + 200) = (int)uVar8;
  }
  iVar11 = *(int *)(param_1 + 0xb0);
  *(int *)(param_1 + 0xb0) = iVar11 + 1;
  if (*(int *)(param_1 + 0xb4) < iVar11 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0xa8),iVar11);
  }
  plVar5 = (longlong *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0xa8));
  *plVar5 = *param_2;
  lVar6 = param_2[1];
  plVar5[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 14069dac0 FUN_14069dac0 body=3058 status=ok
// SIG undefined FUN_14069dac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14069dac0(longlong *param_1,undefined1 *param_2,longlong *param_3,longlong param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_1f8 [32];
  char local_1d8;
  uint local_1d4;
  longlong local_1c8;
  longlong *plStack_1c0;
  longlong local_1b8;
  longlong *plStack_1b0;
  longlong local_1a8;
  longlong *plStack_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *plStack_188;
  longlong local_180;
  longlong *plStack_178;
  longlong local_170;
  longlong *plStack_168;
  longlong local_160;
  longlong *plStack_158;
  longlong local_150;
  longlong *plStack_148;
  longlong local_140;
  longlong *plStack_138;
  longlong local_130;
  longlong *local_128;
  longlong local_118;
  longlong *plStack_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  plVar3 = (longlong *)param_1[0xb7];
  local_1d4 = 0;
  local_198 = param_3;
  if (((int)plVar3[1] < 1) || ((*(byte *)(param_4 + 8) & 0x30) != 0)) {
LAB_14069e679:
    FUN_1419b52f0(param_1,param_2,local_198,param_4);
  }
  else {
    plVar12 = *(longlong **)(param_4 + 0x28);
    local_1d8 = '\0';
    lVar13 = *(longlong *)(param_4 + 0x18);
    local_1c8 = 0;
    plStack_1c0 = (longlong *)0x0;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    bVar15 = lVar13 == DAT_1469e99d0;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar12 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar9 = (int *)((longlong)plVar12 + 0xc);
        iVar14 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = plStack_1c0;
    if (bVar15) {
      local_c8 = *(longlong *)*plVar3;
      plStack_c0 = (longlong *)((longlong *)*plVar3)[1];
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
        UNLOCK();
      }
      local_190 = local_1c8;
      plStack_188 = plStack_1c0;
      local_1c8 = local_c8;
      plVar5 = plStack_c0;
      if (plStack_1c0 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_1c0 + 1;
        lVar13 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          puVar4 = (undefined8 *)*plStack_1c0;
          plStack_1c0 = plStack_c0;
          (*(code *)*puVar4)(plVar12);
          LOCK();
          piVar9 = (int *)((longlong)plVar12 + 0xc);
          iVar14 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          plVar12 = plStack_188;
          goto joined_r0x00014069dcd7;
        }
      }
LAB_14069e104:
      plStack_1c0 = plVar5;
      plVar12 = plStack_1c0;
      local_1d8 = '\x01';
      if (local_1c8 == 0) goto LAB_14069e191;
      local_118 = local_1c8;
      plStack_110 = plStack_1c0;
      if (plStack_1c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_1c0 + 1) = (int)plStack_1c0[1] + 1;
        UNLOCK();
      }
      (**(code **)(*param_1 + 0x278))(param_1,&local_118,param_4);
      plVar3 = plStack_110;
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_110 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        plVar12 = plStack_1c0;
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar9 = (int *)((longlong)plVar3 + 0xc);
          iVar14 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          plVar12 = plStack_1c0;
          if (iVar14 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
            plVar12 = plStack_1c0;
          }
        }
      }
    }
    else {
      plVar12 = *(longlong **)(param_4 + 0x28);
      lVar13 = *(longlong *)(param_4 + 0x18);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      bVar15 = lVar13 == DAT_1469e99b8;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar12 + 1;
        lVar13 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar9 = (int *)((longlong)plVar12 + 0xc);
          iVar14 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      plVar12 = plStack_1c0;
      if (bVar15) {
        local_b8 = *(longlong *)(*plVar3 + -0x10 + (longlong)(int)plVar3[1] * 0x10);
        plStack_b0 = *(longlong **)(*plVar3 + -8 + (longlong)(int)plVar3[1] * 0x10);
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
          UNLOCK();
        }
        local_180 = local_1c8;
        plStack_178 = plStack_1c0;
        local_1c8 = local_b8;
        plVar5 = plStack_b0;
        if (plStack_1c0 != (longlong *)0x0) {
          LOCK();
          plVar11 = plStack_1c0 + 1;
          lVar13 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            puVar4 = (undefined8 *)*plStack_1c0;
            plStack_1c0 = plStack_b0;
            (*(code *)*puVar4)(plVar12);
            LOCK();
            piVar9 = (int *)((longlong)plVar12 + 0xc);
            iVar14 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            plVar12 = plStack_178;
            goto joined_r0x00014069dcd7;
          }
        }
        goto LAB_14069e104;
      }
      plVar12 = *(longlong **)(param_4 + 0x28);
      lVar13 = *(longlong *)(param_4 + 0x18);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      bVar15 = lVar13 == DAT_1469e9988;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar12 + 1;
        lVar13 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar9 = (int *)((longlong)plVar12 + 0xc);
          iVar14 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (bVar15) {
        lVar13 = param_1[0xb3];
        iVar14 = 0;
        if (lVar13 != 0) {
          plVar12 = (longlong *)param_1[0xb4];
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          plVar5 = (longlong *)*plVar3;
          for (plVar11 = plVar5; plVar11 != plVar5 + (longlong)(int)plVar3[1] * 2;
              plVar11 = plVar11 + 2) {
            if (*plVar11 == lVar13) {
              iVar14 = (int)((longlong)plVar11 - (longlong)plVar5 >> 4);
              goto LAB_14069dd88;
            }
          }
          iVar14 = -1;
LAB_14069dd88:
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar12 + 1;
            lVar13 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar9 = (int *)((longlong)plVar12 + 0xc);
              iVar7 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
        }
        fVar16 = (float)(**(code **)(*param_1 + 0x228))(param_1);
        iVar7 = (**(code **)(*param_1 + 0x230))(param_1);
        plVar11 = plStack_1c0;
        iVar7 = (int)fVar16 - (int)fVar16 % iVar7;
        plVar12 = (longlong *)*plVar3;
        if (iVar14 < iVar7) {
          local_98 = *plVar12;
          plStack_90 = (longlong *)plVar12[1];
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
            UNLOCK();
          }
          local_160 = local_1c8;
          plStack_158 = plStack_1c0;
          local_1c8 = local_98;
          plVar5 = plStack_90;
          if (plStack_1c0 != (longlong *)0x0) {
            LOCK();
            plVar12 = plStack_1c0 + 1;
            lVar13 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              puVar4 = (undefined8 *)*plStack_1c0;
              plStack_1c0 = plStack_90;
              (*(code *)*puVar4)(plVar11);
              LOCK();
              piVar9 = (int *)((longlong)plVar11 + 0xc);
              iVar14 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              plVar12 = plStack_158;
              goto joined_r0x00014069dcd7;
            }
          }
        }
        else {
          lVar13 = (longlong)(iVar14 - iVar7);
          local_a8 = plVar12[lVar13 * 2];
          plStack_a0 = (longlong *)plVar12[lVar13 * 2 + 1];
          if (plStack_a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
            UNLOCK();
          }
          local_170 = local_1c8;
          plStack_168 = plStack_1c0;
          local_1c8 = local_a8;
          plVar5 = plStack_a0;
          if (plStack_1c0 != (longlong *)0x0) {
            LOCK();
            plVar12 = plStack_1c0 + 1;
            lVar13 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              puVar4 = (undefined8 *)*plStack_1c0;
              plStack_1c0 = plStack_a0;
              (*(code *)*puVar4)(plVar11);
              LOCK();
              piVar9 = (int *)((longlong)plVar11 + 0xc);
              iVar14 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              plVar12 = plStack_168;
joined_r0x00014069dcd7:
              plVar5 = plStack_1c0;
              if (iVar14 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
                plVar5 = plStack_1c0;
              }
            }
          }
        }
        goto LAB_14069e104;
      }
      plVar12 = *(longlong **)(param_4 + 0x28);
      lVar13 = *(longlong *)(param_4 + 0x18);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      bVar15 = lVar13 == DAT_1469e99a0;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar12 + 1;
        lVar13 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar9 = (int *)((longlong)plVar12 + 0xc);
          iVar14 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (bVar15) {
        lVar13 = param_1[0xb3];
        iVar14 = 0;
        if (lVar13 != 0) {
          plVar12 = (longlong *)param_1[0xb4];
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          plVar5 = (longlong *)*plVar3;
          for (plVar11 = plVar5; plVar11 != plVar5 + (longlong)(int)plVar3[1] * 2;
              plVar11 = plVar11 + 2) {
            if (*plVar11 == lVar13) {
              iVar14 = (int)((longlong)plVar11 - (longlong)plVar5 >> 4);
              goto LAB_14069df94;
            }
          }
          iVar14 = -1;
LAB_14069df94:
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar12 + 1;
            lVar13 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar9 = (int *)((longlong)plVar12 + 0xc);
              iVar7 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
        }
        fVar16 = (float)(**(code **)(*param_1 + 0x228))(param_1);
        iVar8 = (**(code **)(*param_1 + 0x230))(param_1);
        plVar12 = plStack_1c0;
        iVar7 = (int)plVar3[1];
        iVar8 = (int)fVar16 - (int)fVar16 % iVar8;
        lVar13 = *plVar3;
        if (iVar14 < iVar7 - iVar8) {
          lVar10 = (longlong)(iVar8 + iVar14);
          local_88 = *(longlong *)(lVar13 + lVar10 * 0x10);
          plStack_80 = *(longlong **)(lVar13 + 8 + lVar10 * 0x10);
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_150 = local_1c8;
          plStack_148 = plStack_1c0;
          local_1c8 = local_88;
          plVar5 = plStack_80;
          if (plStack_1c0 != (longlong *)0x0) {
            LOCK();
            plVar11 = plStack_1c0 + 1;
            lVar13 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              puVar4 = (undefined8 *)*plStack_1c0;
              plStack_1c0 = plStack_80;
              (*(code *)*puVar4)(plVar12);
              LOCK();
              piVar9 = (int *)((longlong)plVar12 + 0xc);
              iVar14 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              plVar12 = plStack_148;
              goto joined_r0x00014069dcd7;
            }
          }
        }
        else {
          local_78 = *(longlong *)(lVar13 + -0x10 + (longlong)iVar7 * 0x10);
          plStack_70 = *(longlong **)(lVar13 + -8 + (longlong)iVar7 * 0x10);
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
            UNLOCK();
          }
          local_140 = local_1c8;
          plStack_138 = plStack_1c0;
          local_1c8 = local_78;
          plVar5 = plStack_70;
          if (plStack_1c0 != (longlong *)0x0) {
            LOCK();
            plVar11 = plStack_1c0 + 1;
            lVar13 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              puVar4 = (undefined8 *)*plStack_1c0;
              plStack_1c0 = plStack_70;
              (*(code *)*puVar4)(plVar12);
              LOCK();
              piVar9 = (int *)((longlong)plVar12 + 0xc);
              iVar14 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              plVar12 = plStack_138;
              goto joined_r0x00014069dcd7;
            }
          }
        }
        goto LAB_14069e104;
      }
LAB_14069e191:
      plVar12 = local_198;
      if (param_1[0xb3] == 0) {
LAB_14069e1d0:
        bVar15 = false;
      }
      else {
        plVar12 = *(longlong **)(param_4 + 0x28);
        lVar13 = *(longlong *)(param_4 + 0x18);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_1d4 = 1;
        if (lVar13 != DAT_1469e9970) goto LAB_14069e1d0;
        bVar15 = true;
        local_1d4 = 1;
      }
      if (((local_1d4 & 1) != 0) && (local_1d4 = local_1d4 & 0xfffffffe, plVar12 != (longlong *)0x0)
         ) {
        LOCK();
        plVar5 = plVar12 + 1;
        lVar13 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar9 = (int *)((longlong)plVar12 + 0xc);
          iVar14 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (bVar15) {
        local_1b8 = param_1[0xb3];
        plStack_1b0 = (longlong *)param_1[0xb4];
        if (plStack_1b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_1b0 + 1) = (int)plStack_1b0[1] + 1;
          UNLOCK();
        }
        if (((*(byte *)(param_4 + 8) & 0xc) == 0) &&
           (piVar9 = (int *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x77), *piVar9 != 2
           )) {
          plVar3 = param_1 + 0x84;
          cVar6 = (**(code **)(*plVar3 + 0x10))(plVar3,&local_1b8);
          if (cVar6 == '\0') {
            local_f8 = local_1b8;
            plStack_f0 = plStack_1b0;
            if (plStack_1b0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_1b0 + 1) = (int)plStack_1b0[1] + 1;
              UNLOCK();
            }
            (**(code **)(*plVar3 + 0x18))(plVar3,&local_f8,1);
            lVar13 = *plVar3;
            goto LAB_14069e311;
          }
          local_1d8 = '\0';
        }
        else {
          local_e8 = local_1b8;
          plStack_e0 = plStack_1b0;
          if (plStack_1b0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_1b0 + 1) = (int)plStack_1b0[1] + 1;
            UNLOCK();
          }
          lVar13 = param_1[0x84];
          cVar6 = (**(code **)(lVar13 + 0x10))(param_1 + 0x84,&local_1b8);
          (**(code **)(lVar13 + 0x18))(param_1 + 0x84,&local_e8,cVar6 == '\0',1);
          lVar13 = param_1[0x84];
LAB_14069e311:
          (**(code **)(lVar13 + 0x30))(param_1 + 0x84,0);
          local_1d8 = '\x01';
        }
        plVar12 = (longlong *)param_1[0xb4];
        plVar3 = param_1 + 0xb5;
        lVar13 = param_1[0xb3];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_1a8 = lVar13;
        plStack_1a0 = plVar12;
        if (&local_1a8 != plVar3) {
          local_1a8 = *plVar3;
          plStack_1a0 = (longlong *)param_1[0xb6];
          *plVar3 = lVar13;
          param_1[0xb6] = (longlong)plVar12;
          local_68 = lVar13;
          plStack_60 = plVar12;
        }
        plVar3 = plStack_1a0;
        if (plStack_1a0 != (longlong *)0x0) {
          LOCK();
          plVar12 = plStack_1a0 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_1a0)(plStack_1a0);
            LOCK();
            piVar9 = (int *)((longlong)plVar3 + 0xc);
            iVar14 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plStack_1a0 + 8))(plStack_1a0,1);
            }
          }
        }
        FUN_14069bc50(param_1 + 0x85,&local_130,&local_1b8);
        if (local_130 == 0) {
          uVar2 = *(undefined4 *)(param_4 + 0xc);
          local_d8 = local_1b8;
          plStack_d0 = plStack_1b0;
          if (plStack_1b0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_1b0 + 1) = (int)plStack_1b0[1] + 1;
            UNLOCK();
          }
          FUN_1406a2070(param_1,&local_d8,uVar2);
        }
        plVar3 = local_128;
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_128 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar9 = (int *)((longlong)plVar3 + 0xc);
            iVar14 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_128 + 8))(local_128,1);
            }
          }
        }
        plVar3 = plStack_1b0;
        if (plStack_1b0 != (longlong *)0x0) {
          LOCK();
          plVar12 = plStack_1b0 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_1b0)(plStack_1b0);
            LOCK();
            piVar9 = (int *)((longlong)plVar3 + 0xc);
            iVar14 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
      }
      else {
        uVar1 = *(ushort *)(param_4 + 8);
        plVar12 = local_198;
        if ((((uVar1 & 3) == 0) && ((uVar1 & 0x30) == 0)) && ((uVar1 & 0xc) != 0)) {
          plVar12 = *(longlong **)(param_4 + 0x28);
          local_1d4 = local_1d4 | 2;
          lVar13 = *(longlong *)(param_4 + 0x18);
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          if ((lVar13 != DAT_1469e9b68) ||
             (piVar9 = (int *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x77),
             *piVar9 != 3)) goto LAB_14069e58d;
          bVar15 = true;
        }
        else {
LAB_14069e58d:
          bVar15 = false;
        }
        if (((local_1d4 & 2) != 0) && (plVar12 != (longlong *)0x0)) {
          LOCK();
          plVar5 = plVar12 + 1;
          lVar13 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar9 = (int *)((longlong)plVar12 + 0xc);
            iVar14 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        if (bVar15) {
          param_1 = param_1 + 0x84;
          (**(code **)(*param_1 + 0x20))(param_1);
          iVar14 = 0;
          if (0 < (int)plVar3[1]) {
            lVar13 = 0;
            do {
              local_108 = *(undefined8 *)(lVar13 + *plVar3);
              local_100 = *(longlong *)(lVar13 + 8 + *plVar3);
              if (local_100 != 0) {
                LOCK();
                *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
                UNLOCK();
              }
              (**(code **)(*param_1 + 0x18))(param_1,&local_108,1,0);
              iVar14 = iVar14 + 1;
              lVar13 = lVar13 + 0x10;
            } while (iVar14 < (int)plVar3[1]);
          }
          (**(code **)(*param_1 + 0x30))(param_1,0);
          plVar12 = plStack_1c0;
          goto LAB_14069e47a;
        }
      }
      plVar3 = plStack_1c0;
      plVar12 = plStack_1c0;
      if (local_1d8 == '\0') {
        if (plStack_1c0 != (longlong *)0x0) {
          LOCK();
          plVar12 = plStack_1c0 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_1c0)(plStack_1c0);
            LOCK();
            piVar9 = (int *)((longlong)plVar3 + 0xc);
            iVar14 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plStack_1c0 + 8))(plStack_1c0,1);
            }
          }
        }
        goto LAB_14069e679;
      }
    }
LAB_14069e47a:
    plVar3 = plStack_1c0;
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar12 + 1;
      lVar13 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_1c0)(plStack_1c0);
        LOCK();
        piVar9 = (int *)((longlong)plVar3 + 0xc);
        iVar14 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plStack_1c0 + 8))(plStack_1c0,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 14069e6c0 FUN_14069e6c0 body=634 status=ok
// SIG undefined FUN_14069e6c0(void)

undefined1 * FUN_14069e6c0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 local_28;
  longlong local_20;
  
  plVar2 = *(longlong **)(param_4 + 0x48);
  lVar3 = *(longlong *)(param_4 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  bVar9 = lVar3 == DAT_1469e9868;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar2 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  if (bVar9) {
    plVar2 = *(longlong **)(param_1 + 0x390);
    plVar7 = plVar2;
    plVar8 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar7 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar9) {
        LOCK();
        bVar9 = iVar5 == (int)plVar2[1];
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar7 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x388);
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            LOCK();
            plVar7 = plVar2 + 1;
            lVar3 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            plVar7 = plVar2;
            if ((int)lVar3 == 1) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x38))(plVar8,param_1 + -8);
    local_28 = *puVar6;
    local_20 = puVar6[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    cVar4 = (**(code **)(*plVar8 + 0x90))(plVar8,&local_28);
    if (cVar4 == '\0') {
      (**(code **)(*(longlong *)(param_1 + -8) + 0x20))(param_1 + -8);
    }
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  else {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  return param_2;
}



// FUNCTION 14069e940 FUN_14069e940 body=470 status=ok
// SIG undefined FUN_14069e940(void)

undefined1 * FUN_14069e940(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uStackX_c;
  
  plVar8 = (longlong *)0x0;
  if (*(char *)(param_1 + 0x630) == '\0') {
LAB_14069e9f6:
    plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    if (((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0))
       && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))(), cVar4 != '\0')) {
      plVar7 = plVar8;
      if (*(int *)(param_1 + 0x3c8) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x3c0);
      }
      uVar5 = (**(code **)(*plVar7 + 0x38))();
      *(undefined4 *)(param_1 + 0x3b8) = uVar5;
    }
    if (*(int *)(param_1 + 0x3b8) == 0) goto LAB_14069e9f6;
    plVar7 = *(longlong **)(param_4 + 0x48);
    lVar2 = *(longlong *)(param_4 + 0x38);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)0x1;
    if (((lVar2 == DAT_1469e9868) && ((*(ushort *)(param_4 + 8) & 0xc) == 0)) &&
       ((*(ushort *)(param_4 + 8) & 3) == 0)) {
      bVar3 = true;
      goto LAB_14069e9fe;
    }
  }
  bVar3 = false;
LAB_14069e9fe:
  if ((plVar8 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  if (bVar3) {
    plVar8 = (longlong *)(param_1 + 0x420);
    iVar6 = (**(code **)(*plVar8 + 0x60))(plVar8);
    if (0 < iVar6) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
      (**(code **)(*plVar8 + 0x30))(plVar8,2);
    }
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  else {
    FUN_1419b57c0(param_1,param_2,param_3,param_4);
  }
  return param_2;
}



// FUNCTION 14069eb20 FUN_14069eb20 body=1474 status=ok
// SIG undefined FUN_14069eb20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14069eb20(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_1d8 [32];
  char local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  longlong local_160;
  longlong *local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  plVar2 = *(longlong **)(param_1 + 0x390);
  plVar10 = (longlong *)0x0;
  plVar11 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar13 = iVar4 == 0;
    if (bVar13) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar10 = (longlong *)0x0, plVar11 = (longlong *)0x0, !bVar13) {
      LOCK();
      bVar13 = iVar4 == (int)plVar2[1];
      if (bVar13) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar11 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = *(longlong **)(param_1 + 0x388);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  *(undefined1 *)(param_1 + 0x430) = 0;
  plVar2 = *(longlong **)(param_4 + 0x48);
  lVar12 = *(longlong *)(param_4 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_1b8 = lVar12 == DAT_1469e9868;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar12 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  if (local_1b8 != '\0') {
    iVar4 = (**(code **)(*(longlong *)(param_1 + -8) + 0x70))(param_1 + -8);
    local_1b0 = CONCAT44(local_1b0._4_4_,iVar4);
    if (iVar4 != 0) {
      puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x38))(plVar10,param_1 + -8);
      local_1b8 = (**(code **)(*plVar10 + 0x10))(plVar10,puVar5);
      if ((int)local_1b0 == 3) {
        if ((*(ushort *)(param_4 + 8) & 0xc) == 0) {
          if ((*(ushort *)(param_4 + 8) & 3) == 0) goto LAB_14069ecbb;
          local_180 = *puVar5;
          local_178 = puVar5[1];
          if (local_178 != 0) {
            LOCK();
            *(int *)(local_178 + 8) = *(int *)(local_178 + 8) + 1;
            UNLOCK();
          }
          (**(code **)(*plVar10 + 0x28))(plVar10,&local_180);
        }
        else {
          local_188 = puVar5[1];
          local_190 = *puVar5;
          if (local_188 != 0) {
            LOCK();
            *(int *)(local_188 + 8) = *(int *)(local_188 + 8) + 1;
            UNLOCK();
          }
          (**(code **)(*plVar10 + 0x18))(plVar10,&local_190,local_1b8 == '\0',1);
        }
        *(undefined1 *)(param_1 + 0x430) = 1;
      }
LAB_14069ecbb:
      if ((local_1b8 == '\0') && (*(char *)(param_1 + 0x430) == '\0')) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
        local_170 = *puVar5;
        local_168 = puVar5[1];
        if (local_168 != 0) {
          LOCK();
          *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_170,1);
        *(undefined1 *)(param_1 + 0x430) = 1;
      }
      local_1a8 = (longlong *)(param_1 + 8);
      plVar6 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_1a8,local_138)
      ;
      plVar2 = (longlong *)plVar6[1];
      lVar12 = *plVar6 + -8;
      if (*plVar6 == 0) {
        lVar12 = 0;
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_130 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)local_130 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
      local_1a0 = 0;
      if (lVar12 != 0) {
        local_1a0 = lVar12 + 8;
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      local_198 = plVar2;
      plVar7 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_1a8,local_128)
      ;
      plVar6 = (longlong *)plVar7[1];
      local_1b0 = *plVar7 + -8;
      if (*plVar7 == 0) {
        local_1b0 = 0;
      }
      local_1a8 = plVar6 + 1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)local_1a8 = (int)*local_1a8 + 1;
        UNLOCK();
      }
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_120 + 1;
        lVar12 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar1 = (int *)((longlong)local_120 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
      local_160 = local_1b0 + 8;
      if (local_1b0 == 0) {
        local_160 = 0;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_150 = DAT_1469e9868;
      local_148 = DAT_1469e9870;
      local_140 = DAT_1469e9878;
      if (DAT_1469e9878 != 0) {
        LOCK();
        *(int *)(DAT_1469e9878 + 8) = *(int *)(DAT_1469e9878 + 8) + 1;
        UNLOCK();
      }
      local_54 = local_54 & 0xffffff00;
      local_100 = 0;
      local_f8 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_108[0] = 1;
      local_58 = 0x20702;
      local_158 = plVar6;
      uVar8 = (**(code **)(*plVar10 + 0xa8))(plVar10,local_118);
      uVar9 = FUN_140466100(local_108,&local_1a0,&local_150);
      uVar8 = FUN_14185b9a0(uVar9,uVar8,0,0);
      uVar8 = FUN_140693ff0(uVar8,&local_160);
      FUN_140438260(param_2,uVar8);
      FUN_140438c20(local_108);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar12 = *local_1a8;
        *(int *)local_1a8 = (int)*local_1a8 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar2 + 1;
        lVar12 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        LOCK();
        plVar10 = plVar2 + 1;
        lVar12 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      if (plVar11 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar2 = plVar11 + 1;
      lVar12 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar12 != 1) {
        return param_2;
      }
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return param_2;
      }
      (**(code **)(*plVar11 + 8))(plVar11,1);
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14069f0f0 FUN_14069f0f0 body=342 status=ok
// SIG undefined FUN_14069f0f0(void)

undefined8 FUN_14069f0f0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uStackX_c;
  
  plVar8 = (longlong *)0x0;
  if (*(char *)(param_1 + 0x630) == '\0') {
LAB_14069f1aa:
    plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    if (((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0))
       && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))(), cVar4 != '\0')) {
      plVar7 = plVar8;
      if (*(int *)(param_1 + 0x3c8) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x3c0);
      }
      uVar5 = (**(code **)(*plVar7 + 0x38))();
      *(undefined4 *)(param_1 + 0x3b8) = uVar5;
    }
    if (*(int *)(param_1 + 0x3b8) == 0) goto LAB_14069f1aa;
    plVar7 = *(longlong **)(param_4 + 0x48);
    lVar2 = *(longlong *)(param_4 + 0x38);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)0x1;
    if (((lVar2 == DAT_1469e9880) && ((*(ushort *)(param_4 + 8) & 0xc) == 0)) &&
       (((*(ushort *)(param_4 + 8) & 3) == 0 && (cVar4 = FUN_1419b3dd0(param_1), cVar4 == '\0')))) {
      bVar3 = true;
      goto LAB_14069f1b2;
    }
  }
  bVar3 = false;
LAB_14069f1b2:
  if ((plVar8 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  if (bVar3) {
    plVar8 = (longlong *)(param_1 + 0x420);
    iVar6 = (**(code **)(*plVar8 + 0x60))(plVar8);
    if (0 < iVar6) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
      (**(code **)(*plVar8 + 0x30))(plVar8,2);
    }
  }
  FUN_1419b5c60(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14069f250 FUN_14069f250 body=2358 status=ok
// SIG undefined FUN_14069f250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14069f250(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_568 [32];
  char local_548;
  longlong *local_540;
  float local_538;
  float local_534;
  float local_530;
  float local_52c;
  float local_528;
  float local_524;
  float *local_520;
  longlong local_518;
  undefined8 local_510;
  longlong local_508;
  undefined8 local_500;
  longlong local_4f8;
  undefined8 local_4f0;
  longlong local_4e8;
  undefined8 local_4e0;
  longlong local_4d8;
  undefined1 local_4c8 [8];
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined1 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  uint local_414;
  undefined1 local_408 [8];
  undefined8 local_400;
  undefined8 local_3f8;
  undefined1 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  uint local_354;
  undefined1 local_348 [8];
  undefined8 local_340;
  undefined8 local_338;
  undefined1 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  uint local_294;
  undefined1 local_288 [8];
  undefined8 local_280;
  undefined8 local_278;
  undefined1 local_268;
  undefined8 local_260;
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
  undefined4 local_1d8;
  uint local_1d4;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  uint local_114;
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_568;
  plVar10 = *(longlong **)(param_1 + 0x390);
  plVar9 = plVar10;
  plVar11 = (longlong *)0x0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar10[1];
    bVar12 = iVar6 == 0;
    if (bVar12) {
      *(int *)(plVar10 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar9 = (longlong *)0x0, plVar11 = (longlong *)0x0, !bVar12) {
      LOCK();
      bVar12 = iVar6 == (int)plVar10[1];
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar9 = plVar10;
        if ((plVar10 != (longlong *)0x0) &&
           (plVar11 = *(longlong **)(param_1 + 0x388), plVar11 != (longlong *)0x0)) {
          local_540 = plVar11 + -0x84;
          goto LAB_14069f2cf;
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar12 = iVar6 == 0;
      if (bVar12) {
        *(int *)(plVar10 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  local_540 = (longlong *)0x0;
  plVar10 = plVar9;
LAB_14069f2cf:
  local_520 = param_3;
  local_518 = param_4;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar10 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar9 = plVar10 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar9 = *(longlong **)(param_4 + 0x48);
  lVar3 = *(longlong *)(param_4 + 0x38);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_548 = lVar3 == DAT_1469e9868;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (local_548 == '\0') {
    plVar9 = *(longlong **)(param_4 + 0x48);
    lVar3 = *(longlong *)(param_4 + 0x38);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    if ((lVar3 == DAT_1469e9880) && (cVar4 = FUN_1419b3dd0(local_540), cVar4 == '\0')) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if ((!bVar12) ||
       (iVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x70))(param_1 + -8), 2 < iVar6 - 1U))
    goto LAB_14069f8f0;
    puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x38))(plVar11,param_1 + -8);
    cVar4 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar8);
    if (cVar4 == '\0') {
      (**(code **)(*plVar11 + 0x20))(plVar11);
      local_4f0 = *puVar8;
      local_4e8 = puVar8[1];
      if (local_4e8 != 0) {
        LOCK();
        *(int *)(local_4e8 + 8) = *(int *)(local_4e8 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_4f0,1);
      (**(code **)(*plVar11 + 0x30))(plVar11,2);
    }
    local_4e0 = *puVar8;
    local_4d8 = puVar8[1];
    if (local_4d8 != 0) {
      LOCK();
      *(int *)(local_4d8 + 8) = *(int *)(local_4d8 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar11 + 0x80))(plVar11,&local_4e0,local_518);
    FReply::Handled(param_2);
  }
  else {
    local_414 = local_414 & 0xffffff00;
    local_4c8[0] = 0;
    local_4c0 = 0;
    local_4b8 = 0;
    local_4a8 = 0;
    local_4a0 = 0;
    local_498 = 0;
    uStack_490 = 0;
    local_488 = 0;
    uStack_480 = 0;
    local_478 = 0;
    uStack_470 = 0;
    local_468 = 0;
    uStack_460 = 0;
    local_458 = 0;
    uStack_450 = 0;
    local_448 = 0;
    local_440 = 0;
    local_438 = 0;
    uStack_430 = 0;
    local_428 = 0;
    uStack_420 = 0;
    local_418 = 0x20702;
    uVar7 = FUN_1406a1ac0(local_4c8);
    FUN_140438260(local_108,uVar7);
    FUN_140438c20(local_4c8);
    if (*(char *)(param_1 + 0x430) != '\0') {
      local_354 = local_354 & 0xffffff00;
      local_408[0] = 1;
      local_3d8 = 0;
      uStack_3d0 = 0;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_3b8 = 0;
      uStack_3b0 = 0;
      local_3a8 = 0;
      uStack_3a0 = 0;
      local_398 = 0;
      uStack_390 = 0;
      local_378 = 0;
      uStack_370 = 0;
      local_368 = 0;
      uStack_360 = 0;
      local_400 = 0;
      local_3f8 = 0;
      local_3e8 = 0;
      local_3e0 = 0;
      local_388 = 0;
      local_380 = 0;
      local_358 = 0x20702;
      uVar7 = FUN_1406a1ac0(local_408);
      FUN_140459130(local_108,uVar7);
      FUN_140438c20(local_408);
    }
    local_530 = *local_520 * local_520[7];
    local_528 = local_520[1] * local_520[9];
    local_524 = local_520[1] * local_520[10];
    local_52c = *local_520 * local_520[8];
    local_538 = local_520[0xb];
    local_534 = local_520[0xc];
    cVar4 = FSlateRotatedRect::IsUnderLocation(&local_538,param_4 + 0x18);
    cVar5 = FUN_141846080(param_1);
    if (cVar5 == '\0') {
      FUN_140438c20(local_108);
LAB_14069f8f0:
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
      *(undefined8 *)(param_2 + 0x68) = 0;
      *(undefined8 *)(param_2 + 0x70) = 0;
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(undefined8 *)(param_2 + 0x90) = 0;
      *(undefined8 *)(param_2 + 0x98) = 0;
      *(undefined8 *)(param_2 + 0xa0) = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      if (plVar10 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar11 = plVar10 + 1;
      lVar3 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      LOCK();
      plVar11 = plVar10 + 1;
      lVar3 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return param_2;
      }
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 != 1) {
        return param_2;
      }
      (**(code **)(*plVar10 + 8))(plVar10,1);
      return param_2;
    }
    if (cVar4 != '\0') {
      iVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x70))(param_1 + -8);
      if (iVar6 == 2) {
        if (*(char *)(param_1 + 0x430) == '\0') {
          (**(code **)(*plVar11 + 0x20))(plVar11);
          (**(code **)(*plVar11 + 0x30))(plVar11,2);
        }
        local_1d4 = local_1d4 & 0xffffff00;
        local_288[0] = 1;
        local_280 = 0;
        local_278 = 0;
        local_268 = 0;
        local_260 = 0;
        local_258 = 0;
        uStack_250 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_238 = 0;
        uStack_230 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0;
        local_200 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1d8 = 0x20702;
        uVar7 = FUN_1406a1ac0(local_288);
        FUN_140459130(local_108,uVar7);
        FUN_140438c20(local_288);
      }
      else if ((((iVar6 == 3) && (*(char *)(param_1 + 0x430) == '\0')) &&
               ((*(ushort *)(param_4 + 8) & 0xc) == 0)) && ((*(ushort *)(param_4 + 8) & 3) == 0)) {
        puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x38))(plVar11,param_1 + -8);
        cVar4 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar8);
        if ((cVar4 != '\0') && (iVar6 = (**(code **)(*plVar11 + 0x60))(plVar11), 1 < iVar6)) {
          (**(code **)(*plVar11 + 0x20))(plVar11);
          local_510 = *puVar8;
          local_508 = puVar8[1];
          if (local_508 != 0) {
            LOCK();
            *(int *)(local_508 + 8) = *(int *)(local_508 + 8) + 1;
            UNLOCK();
          }
          (**(code **)(*plVar11 + 0x18))(plVar11,&local_510,1);
          (**(code **)(*plVar11 + 0x30))(plVar11,2);
          local_294 = local_294 & 0xffffff00;
          local_348[0] = 1;
          local_340 = 0;
          local_318 = 0;
          uStack_310 = 0;
          local_308 = 0;
          uStack_300 = 0;
          local_2f8 = 0;
          uStack_2f0 = 0;
          local_2e8 = 0;
          uStack_2e0 = 0;
          local_2d8 = 0;
          uStack_2d0 = 0;
          local_2b8 = 0;
          uStack_2b0 = 0;
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_338 = 0;
          local_328 = 0;
          local_320 = 0;
          local_2c8 = 0;
          local_2c0 = 0;
          local_298 = 0x20702;
          uVar7 = FUN_1406a1ac0(local_348);
          FUN_140459130(local_108,uVar7);
          FUN_140438c20(local_348);
        }
      }
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x38))(plVar11,param_1 + -8);
    if (puVar8 != (undefined8 *)0x0) {
      local_500 = *puVar8;
      local_4f8 = puVar8[1];
      if (local_4f8 != 0) {
        LOCK();
        *(int *)(local_4f8 + 8) = *(int *)(local_4f8 + 8) + 1;
        UNLOCK();
      }
      cVar4 = (**(code **)(*plVar11 + 0x88))(plVar11,&local_500);
      if (cVar4 != '\0') {
        local_114 = local_114 & 0xffffff00;
        local_1c8[0] = 1;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_148 = 0;
        local_140 = 0;
        local_118 = 0x20702;
        uVar7 = FUN_1406a1ac0(local_1c8);
        FUN_140459130(local_108,uVar7);
        FUN_140438c20(local_1c8);
      }
    }
    if (*(char *)(param_1 + 0x430) != '\0') {
      (**(code **)(*plVar11 + 0x30))(plVar11,2);
    }
    FReply::FReply(param_2,local_108);
    FUN_140438c20(local_108);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar11 = plVar10 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14069fb90 FUN_14069fb90 body=542 status=ok
// SIG undefined FUN_14069fb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14069fb90(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)param_1[0xb7];
  bVar9 = false;
  local_88 = 0;
  local_80 = param_3;
  if (((plVar4 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x632) != '\0')) &&
     ((*(char *)((longlong)param_1 + 0x631) != '\0' || (*(char *)(param_4 + 0x19) != '\x01')))) {
    local_88 = (**(code **)(*param_1 + 0x230))();
    lVar5 = param_1[0xb3];
    if (lVar5 == 0) {
      iVar7 = 0;
      plVar10 = local_80;
    }
    else {
      plVar10 = (longlong *)param_1[0xb4];
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar4;
      for (plVar8 = plVar6; plVar8 != plVar6 + (longlong)(int)plVar4[1] * 2; plVar8 = plVar8 + 2) {
        if (*plVar8 == lVar5) {
          iVar7 = (int)((longlong)plVar8 - (longlong)plVar6 >> 4);
          goto LAB_14069fc60;
        }
      }
      iVar7 = -1;
LAB_14069fc60:
      bVar9 = true;
    }
    if ((bVar9) && (plVar10 != (longlong *)0x0)) {
      LOCK();
      plVar6 = plVar10 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    if (*(char *)(param_4 + 0x18) == '\x02') {
      iVar3 = -local_88;
    }
    else {
      iVar3 = local_88;
      if (*(char *)(param_4 + 0x18) != '\x03') goto LAB_14069fd7b;
    }
    iVar7 = iVar7 + iVar3;
    if ((-1 < iVar7) && (iVar7 < (int)plVar4[1])) {
      (**(code **)(*param_1 + 0x278))(param_1,(longlong)iVar7 * 0x10 + *plVar4,param_4);
      puVar2 = param_2 + 2;
      *param_2 = 0;
      param_2[1] = 0;
      *puVar2 = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      *(undefined4 *)(param_2 + 5) = 0;
      *(undefined1 *)(param_2 + 6) = 1;
      if (&local_78 == puVar2) {
        return param_2;
      }
      local_78 = *puVar2;
      plVar4 = (longlong *)param_2[3];
      local_68 = 0;
      uStack_60 = 0;
      *puVar2 = 0;
      param_2[3] = 0;
      if (plVar4 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar10 = plVar4 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 != 1) {
        return param_2;
      }
      plStack_70 = plVar4;
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 != 1) {
        return param_2;
      }
      (**(code **)(*plStack_70 + 8))(plStack_70,1);
      return param_2;
    }
  }
LAB_14069fd7b:
  FUN_1417ca320(param_1,param_2,local_80,param_4);
  return param_2;
}



// FUNCTION 14069fdb0 FUN_14069fdb0 body=1071 status=ok
// SIG undefined FUN_14069fdb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14069fdb0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 ulonglong param_5,undefined4 param_6,float *param_7,undefined1 param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float *pfVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  float *local_130;
  float *local_128;
  undefined1 local_120;
  char local_118;
  ulonglong local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  byte local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_5c;
  byte local_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar3 = *(longlong **)(param_1 + 0x390);
  plVar11 = (longlong *)0x0;
  local_110 = param_5;
  plVar9 = plVar3;
  local_e0 = param_4;
  local_d8 = param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar13 = iVar5 == 0;
    if (bVar13) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar11, !bVar13) {
      LOCK();
      bVar13 = iVar5 == (int)plVar3[1];
      if (bVar13) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar9 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          plVar11 = *(longlong **)(param_1 + 0x388);
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          plVar9 = plVar3 + 1;
          lVar12 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          plVar9 = plVar3;
          if ((int)lVar12 == 1) {
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
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar13 = iVar5 == 0;
      if (bVar13) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar11 + 0xa8))(plVar11,local_d0);
  local_118 = (**(code **)(*(longlong *)*puVar6 + 0x180))();
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_c8 + 1;
    lVar12 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  uVar7 = (**(code **)(*plVar11 + 0x38))(plVar11,param_1 + -8);
  uVar10 = local_110;
  if (((local_118 != '\0') &&
      (cVar4 = (**(code **)*plVar11)(plVar11), uVar10 = local_110, cVar4 != '\0')) &&
     (cVar4 = (**(code **)(*plVar11 + 8))(plVar11,uVar7), uVar10 = local_110, cVar4 != '\0')) {
    lVar12 = *(longlong *)(param_1 + 0x3a0);
    cVar4 = *(char *)(lVar12 + 0x38);
    pfVar8 = (float *)(lVar12 + 0x28);
    if (cVar4 != '\0') {
      if (cVar4 == '\x01') {
        pfVar8 = *(float **)(lVar12 + 0x40);
      }
      else if (cVar4 == '\x03') {
        pfVar8 = param_7 + 8;
      }
      else {
        pfVar8 = param_7 + 4;
      }
    }
    local_108 = *pfVar8 * *param_7;
    local_104 = pfVar8[1] * param_7[1];
    local_8c = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_8c & 0xfc;
    local_130 = &local_108;
    local_100 = pfVar8[2] * param_7[2];
    local_b4 = 0;
    local_bc = param_3[4];
    local_c0 = param_3[3];
    local_fc = pfVar8[3] * param_7[3];
    local_138 = local_138 & 0xffffffffffffff00;
    local_ac = *param_3;
    local_a8 = param_3[1];
    local_a4 = param_3[7];
    uStack_a0 = param_3[8];
    uStack_9c = param_3[9];
    uStack_98 = param_3[10];
    local_b8 = param_3[2];
    local_94 = *(undefined8 *)(param_3 + 0xb);
    FSlateDrawElement::MakeBox(local_110,param_6,&local_c0,lVar12 + 8);
  }
  local_120 = param_8;
  local_128 = param_7;
  local_130 = (float *)CONCAT44(local_130._4_4_,param_6);
  local_138 = uVar10;
  iVar5 = FUN_141998120(param_1,local_d8,param_3,local_e0);
  if (*(char *)(param_1 + 0x3d4) != '\0') {
    lVar12 = *(longlong *)(param_1 + 0x3a0);
    if (*(int *)(param_1 + 0x3d0) == 0) {
      lVar12 = lVar12 + 0x520;
    }
    else if (*(int *)(param_1 + 0x3d0) == 2) {
      lVar12 = lVar12 + 0x630;
    }
    else {
      lVar12 = lVar12 + 0x5a8;
    }
    cVar4 = *(char *)(lVar12 + 0x30);
    pfVar8 = (float *)(lVar12 + 0x20);
    if (cVar4 != '\0') {
      if (cVar4 == '\x01') {
        pfVar8 = *(float **)(lVar12 + 0x38);
      }
      else if (cVar4 == '\x03') {
        pfVar8 = param_7 + 8;
      }
      else {
        pfVar8 = param_7 + 4;
      }
    }
    local_7c = 0;
    local_f8 = *pfVar8 * *param_7;
    local_f4 = pfVar8[1] * param_7[1];
    local_54 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_54 & 0xfc;
    local_130 = &local_f8;
    local_f0 = pfVar8[2] * param_7[2];
    local_138 = local_138 & 0xffffffffffffff00;
    local_84 = param_3[4];
    local_88 = param_3[3];
    local_ec = pfVar8[3] * param_7[3];
    local_74 = *param_3;
    local_70 = param_3[1];
    local_6c = param_3[7];
    uStack_68 = param_3[8];
    uStack_64 = param_3[9];
    uStack_60 = param_3[10];
    local_80 = param_3[2];
    local_5c = *(undefined8 *)(param_3 + 0xb);
    FSlateDrawElement::MakeBox(uVar10,iVar5,&local_88);
    iVar5 = iVar5 + 1;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    lVar12 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return iVar5;
}



// FUNCTION 1406a01e0 FUN_1406a01e0 body=1026 status=ok
// SIG undefined FUN_1406a01e0(void)

undefined1 * FUN_1406a01e0(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_298;
  longlong local_290;
  undefined8 local_288;
  longlong local_280;
  undefined8 local_278;
  longlong local_270;
  undefined1 local_268 [8];
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  uint local_1b4;
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  uint local_f4;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint local_34;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  if (*(char *)(param_1 + 0x431) == '\0') {
    return param_2;
  }
  *(undefined1 *)(param_1 + 0x431) = 0;
  plVar2 = *(longlong **)(param_1 + 0x390);
  plVar8 = plVar2;
  plVar9 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar10 = iVar5 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar8 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar5 == (int)plVar2[1];
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar8 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar9 = *(longlong **)(param_1 + 0x388);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar2 = (longlong *)(param_1 + -8);
  puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x38))(plVar9,plVar2);
  if (puVar6 == (undefined8 *)0x0) goto LAB_1406a0571;
  iVar5 = (**(code **)(*plVar2 + 0x70))(plVar2);
  if (iVar5 != 0) {
    cVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,puVar6);
    if (cVar4 == '\0') {
      if (iVar5 != 3) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      local_298 = *puVar6;
      local_290 = puVar6[1];
      if (local_290 != 0) {
        LOCK();
        *(int *)(local_290 + 8) = *(int *)(local_290 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_298,1);
      (**(code **)(*plVar9 + 0x30))(plVar9,2);
      local_1b4 = local_1b4 & 0xffffff00;
      local_268[0] = 1;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_260 = 0;
      local_258 = 0;
      local_248 = 0;
      local_240 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1b8 = 0x20702;
      FUN_140439160(param_2,local_268);
      puVar7 = local_268;
    }
    else {
      if (1 < iVar5 - 2U) goto LAB_1406a04a0;
      local_288 = *puVar6;
      local_280 = puVar6[1];
      if (local_280 != 0) {
        LOCK();
        *(int *)(local_280 + 8) = *(int *)(local_280 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_288,1);
      (**(code **)(*plVar9 + 0x30))(plVar9,2);
      local_f4 = local_f4 & 0xffffff00;
      local_1a8[0] = 1;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_188 = 0;
      local_180 = 0;
      local_128 = 0;
      local_120 = 0;
      local_f8 = 0x20702;
      FUN_140439160(param_2,local_1a8);
      puVar7 = local_1a8;
    }
    FUN_140438c20(puVar7);
  }
LAB_1406a04a0:
  local_278 = *puVar6;
  local_270 = puVar6[1];
  if (local_270 != 0) {
    LOCK();
    *(int *)(local_270 + 8) = *(int *)(local_270 + 8) + 1;
    UNLOCK();
  }
  cVar4 = (**(code **)(*plVar9 + 0x88))(plVar9,&local_278);
  if (cVar4 != '\0') {
    local_34 = local_34 & 0xffffff00;
    local_e8[0] = 1;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_68 = 0;
    local_60 = 0;
    local_38 = 0x20702;
    FUN_140439160(param_2,local_e8);
    FUN_140438c20(local_e8);
  }
LAB_1406a0571:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1406a05f0 FUN_1406a05f0 body=501 status=ok
// SIG undefined FUN_1406a05f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1406a05f0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  uint local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  *(undefined1 *)(param_1 + 0x431) = 1;
  plVar5 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_110);
  plVar3 = (longlong *)plVar5[1];
  lVar7 = *plVar5 + -8;
  if (*plVar5 == 0) {
    lVar7 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_108 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  if (lVar7 == 0) {
    local_138 = 0;
  }
  else {
    local_138 = lVar7 + 8;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_128 = DAT_1469e9868;
  local_120 = DAT_1469e9870;
  local_118 = DAT_1469e9878;
  if (DAT_1469e9878 != 0) {
    LOCK();
    *(int *)(DAT_1469e9878 + 8) = *(int *)(DAT_1469e9878 + 8) + 1;
    UNLOCK();
  }
  local_44 = local_44 & 0xffffff00;
  local_f8[0] = 1;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_48 = 0x20702;
  local_130 = plVar3;
  uVar6 = FUN_140466100(local_f8,&local_138,&local_128);
  FUN_140438260(param_2,uVar6);
  FUN_140438c20(local_f8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
    LOCK();
    plVar5 = plVar3 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return param_2;
}



// FUNCTION 1406a07f0 Private_ClearSelection body=37 status=ok
// SIG undefined Private_ClearSelection(void)

void SListView<TSharedPtr<FString,0>_>::Private_ClearSelection(longlong param_1)

{
  TSet<TSharedPtr<SWidget,0>,DefaultKeyFuncs<TSharedPtr<SWidget,0>,0>,FDefaultSetAllocator>::Empty
            (param_1 + 0x128,0);
  FInertialScrollManager::ClearScrollVelocity(param_1 + -0x40);
  return;
}



// FUNCTION 1406a0830 Private_GetSelectionMode body=88 status=ok
// SIG undefined Private_GetSelectionMode(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SListView<TSharedPtr<SWidget,0>_>::Private_GetSelectionMode(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + -0x58) == 0) {
    return (ulonglong)*(uint *)(param_1 + -0x68);
  }
  if (*(longlong **)(param_1 + -0x60) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x60) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + -0x58) != 0) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + -0x60) + 0x38))();
        *(int *)(param_1 + -0x68) = (int)uVar3;
        return uVar3;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *(undefined4 *)(param_1 + -0x68) = uVar2;
    }
  }
  return (ulonglong)*(uint *)(param_1 + -0x68);
}



// FUNCTION 1406a08b0 Private_IsItemSelected body=76 status=ok
// SIG undefined Private_IsItemSelected(void)

undefined8
SListView<TSharedPtr<SWidget,0>_>::Private_IsItemSelected(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_res8 [8];
  
  TSet<TSharedRef<SWidget,0>,DefaultKeyFuncs<TSharedRef<SWidget,0>,0>,FDefaultSetAllocator>::FindId
            ((longlong *)(param_1 + 0x128),local_res8,param_2);
  if (local_res8[0] != -1) {
    lVar1 = *(longlong *)(param_1 + 0x128);
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 + (longlong)local_res8[0] * 0x18 != 0);
  }
  return 0xffffffffffffff00;
}



// FUNCTION 1406a0900 Private_ItemFromWidget body=85 status=ok
// SIG undefined Private_ItemFromWidget(void)

longlong SListView<TSharedPtr<SWidget,0>_>::Private_ItemFromWidget
                   (longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [8];
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x60),local_res8,param_2);
  if (local_res8[0] == -1) {
    return 0;
  }
  lVar2 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x60);
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1406a0960 OnMatchFound body=77 status=ok
// SIG undefined OnMatchFound(void)

void FTurnBasedMatchmakerDelegate::OnMatchFound(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_2 + 8);
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



// FUNCTION 1406a09b0 FUN_1406a09b0 body=337 status=ok
// SIG undefined FUN_1406a09b0(void)

void FUN_1406a09b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 local_28;
  longlong *plStack_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  plVar2 = *(longlong **)(param_1 + 0x398);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 0x390);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  cVar4 = (**(code **)(*plVar8 + 0x58))(plVar8,*(undefined4 *)(param_1 + 0x3a0));
  if (cVar4 != '\0') {
    puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x38))(plVar8,param_1);
    local_28 = *puVar6;
    plStack_20 = (longlong *)puVar6[1];
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
    cVar4 = (**(code **)(*plVar8 + 0x50))(plVar8,&local_28);
    local_18 = local_28;
    plStack_10 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar8 + 0x48))(plVar8,&local_18,cVar4 == '\0');
    plVar2 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_20 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 1406a0b10 FUN_1406a0b10 body=193 status=ok
// SIG undefined FUN_1406a0b10(void)

undefined8 FUN_1406a0b10(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  cVar6 = FUN_140699060(param_1 + 0x1d8,&local_18);
  plVar4 = (longlong *)param_2[1];
  if (cVar6 != '\0') {
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
    return 1;
  }
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
  return 0;
}



// FUNCTION 1406a0be0 FUN_1406a0be0 body=193 status=ok
// SIG undefined FUN_1406a0be0(void)

undefined8 FUN_1406a0be0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  cVar6 = FUN_140699060(param_1 + 0x1e8,&local_18);
  plVar4 = (longlong *)param_2[1];
  if (cVar6 != '\0') {
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
    return 1;
  }
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
  return 0;
}



// FUNCTION 1406a0cb0 FUN_1406a0cb0 body=99 status=ok
// SIG undefined FUN_1406a0cb0(void)

void FUN_1406a0cb0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  (**(code **)(*(longlong *)(param_1 + -0x420) + 0x238))((longlong *)(param_1 + -0x420),param_3);
  plVar4 = *(longlong **)(param_2 + 8);
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



// FUNCTION 1406a0d20 FUN_1406a0d20 body=517 status=ok
// SIG undefined FUN_1406a0d20(void)

void FUN_1406a0d20(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  undefined1 local_res8 [8];
  
  plVar8 = (longlong *)0x0;
  iVar12 = 0;
  if (((*(int *)(param_1 + -0x58) != 0) && (*(longlong **)(param_1 + -0x60) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + -0x60) + 0x18))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + -0x58) != 0) {
      plVar8 = *(longlong **)(param_1 + -0x60);
    }
    uVar4 = (**(code **)(*plVar8 + 0x38))();
    *(undefined4 *)(param_1 + -0x68) = uVar4;
  }
  if (*(int *)(param_1 + -0x68) == 0) {
    plVar8 = (longlong *)param_2[1];
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x188);
    plVar8 = *(longlong **)(param_1 + 0x198);
    if (lVar10 != 0) {
      plVar2 = *(longlong **)(param_1 + 400);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar8;
      for (plVar9 = plVar6; plVar9 != plVar6 + (longlong)(int)plVar8[1] * 2; plVar9 = plVar9 + 2) {
        if (*plVar9 == lVar10) {
          iVar12 = (int)((longlong)plVar9 - (longlong)plVar6 >> 4);
          goto LAB_1406a0de8;
        }
      }
      iVar12 = -1;
LAB_1406a0de8:
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar2 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
    plVar2 = (longlong *)*plVar8;
    iVar13 = (int)plVar8[1];
    if (plVar2 != plVar2 + (longlong)iVar13 * 2) {
      plVar6 = plVar2;
      do {
        if (*plVar6 == *param_2) {
          iVar5 = (int)((longlong)plVar6 - (longlong)plVar2 >> 4);
          goto LAB_1406a0e50;
        }
        plVar6 = plVar6 + 2;
      } while (plVar6 != plVar2 + (longlong)iVar13 * 2);
    }
    iVar5 = -1;
LAB_1406a0e50:
    if (iVar12 < 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar13;
      if (iVar12 < iVar13) {
        iVar7 = iVar12;
      }
    }
    iVar12 = 0;
    if ((-1 < iVar5) && (iVar12 = iVar13, iVar5 < iVar13)) {
      iVar12 = iVar5;
    }
    iVar13 = iVar12;
    if (iVar7 <= iVar12) {
      iVar13 = iVar7;
      iVar7 = iVar12;
    }
    if (iVar13 <= iVar7) {
      lVar10 = (longlong)iVar13 << 4;
      uVar11 = (ulonglong)((iVar7 - iVar13) + 1);
      do {
        FUN_14068cfa0(param_1 + 0x128,local_res8,*plVar8 + lVar10,0);
        lVar10 = lVar10 + 0x10;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    FInertialScrollManager::ClearScrollVelocity(param_1 + -0x40);
    plVar8 = (longlong *)param_2[1];
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 1406a0f30 FUN_1406a0f30 body=539 status=ok
// SIG undefined FUN_1406a0f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406a0f30(longlong param_1,undefined8 *param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (((*(int *)(param_1 + -0x58) != 0) && (*(longlong **)(param_1 + -0x60) != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(**(longlong **)(param_1 + -0x60) + 0x18))(), cVar7 != '\0')) {
    if (*(int *)(param_1 + -0x58) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + -0x60);
    }
    uVar8 = (**(code **)(*plVar9 + 0x38))();
    *(undefined4 *)(param_1 + -0x68) = uVar8;
  }
  if (*(int *)(param_1 + -0x68) == 0) {
    plVar9 = (longlong *)param_2[1];
  }
  else {
    if (param_3 == '\0') {
      FUN_1406a1eb0(param_1 + 0x128,param_2);
    }
    else {
      FUN_14068cfa0(param_1 + 0x128,local_48,param_2,0);
    }
    if (param_4 != '\0') {
      plVar9 = (longlong *)param_2[1];
      puVar3 = (undefined8 *)(param_1 + 0x178);
      uVar5 = *param_2;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_68 = uVar5;
      plStack_60 = plVar9;
      if (&local_68 != puVar3) {
        local_68 = *puVar3;
        plStack_60 = *(longlong **)(param_1 + 0x180);
        *puVar3 = uVar5;
        *(longlong **)(param_1 + 0x180) = plVar9;
        local_40 = uVar5;
        plStack_38 = plVar9;
      }
      plVar9 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      plVar9 = (longlong *)param_2[1];
      puVar3 = (undefined8 *)(param_1 + 0x188);
      uVar5 = *param_2;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_58 = uVar5;
      plStack_50 = plVar9;
      if (&local_58 != puVar3) {
        local_58 = *puVar3;
        plStack_50 = *(longlong **)(param_1 + 400);
        *puVar3 = uVar5;
        *(longlong **)(param_1 + 400) = plVar9;
        local_30 = uVar5;
        plStack_28 = plVar9;
      }
      plVar9 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
    }
    FInertialScrollManager::ClearScrollVelocity(param_1 + -0x40);
    plVar9 = (longlong *)param_2[1];
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 1406a1150 FUN_1406a1150 body=845 status=ok
// SIG undefined FUN_1406a1150(void)

void FUN_1406a1150(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  longlong **pplVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *local_60;
  uint local_58;
  undefined4 local_48;
  int iStack_44;
  uint uStack_40;
  
  plVar16 = (longlong *)0x0;
  if (((*(int *)(param_1 + -0x58) != 0) && (*(longlong **)(param_1 + -0x60) != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(**(longlong **)(param_1 + -0x60) + 0x18))(), cVar8 != '\0')) {
    plVar13 = plVar16;
    if (*(int *)(param_1 + -0x58) != 0) {
      plVar13 = *(longlong **)(param_1 + -0x60);
    }
    uVar9 = (**(code **)(*plVar13 + 0x38))();
    *(undefined4 *)(param_1 + -0x68) = uVar9;
  }
  if (((*(int *)(param_1 + -0x68) != 0) && (*(int *)(param_1 + 0x1d0) != 0)) &&
     ((*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0 &&
      (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x18))(), cVar8 != '\0')))) {
    if (*(int *)(param_1 + 0x130) - *(int *)(param_1 + 0x15c) < 1) {
      pplVar12 = &local_78;
      local_78 = (longlong *)0x0;
      plStack_70 = (longlong *)0x0;
      bVar5 = false;
      bVar4 = true;
      plVar13 = plVar16;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x150);
      local_58 = 0;
      iStack_44 = 0;
      uStack_40 = 0;
      if (iVar3 != 0) {
        puVar15 = *(uint **)(param_1 + 0x148);
        if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
          puVar15 = (uint *)(param_1 + 0x138);
        }
        uVar10 = *puVar15;
        plVar13 = plVar16;
        plVar14 = plVar16;
        while (uVar10 == 0) {
          iVar11 = (int)plVar13;
          uStack_40 = (int)plVar14 + 0x20;
          plVar14 = (longlong *)(ulonglong)uStack_40;
          local_58 = iVar11 + 1;
          plVar13 = (longlong *)(ulonglong)local_58;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11) goto LAB_1406a12af;
          uVar10 = puVar15[(longlong)iVar11 + 1];
        }
        uVar10 = -uVar10 & uVar10;
        iVar11 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uVar10 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        iStack_44 = (uStack_40 - iVar11) + 0x1f;
        if (iVar3 < iStack_44) {
LAB_1406a12af:
          iStack_44 = iVar3;
        }
      }
      local_48 = 0xffffffff;
      local_80 = *(longlong **)(*(longlong *)(param_1 + 0x128) + 8 + (longlong)iStack_44 * 0x18);
      local_88 = *(longlong **)(*(longlong *)(param_1 + 0x128) + (longlong)iStack_44 * 0x18);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      pplVar12 = &local_88;
      bVar5 = true;
      bVar4 = false;
      plVar13 = local_88;
    }
    plVar14 = pplVar12[1];
    pplVar12[1] = (longlong *)0x0;
    *pplVar12 = (longlong *)0x0;
    plVar7 = plStack_70;
    if ((bVar4) && (plStack_70 != (longlong *)0x0)) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
    plVar7 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    if (((*(int *)(param_1 + 0x1d0) != 0) && (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0))
       && (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x18))(), cVar8 != '\0')) {
      if (*(int *)(param_1 + 0x1d0) != 0) {
        plVar16 = *(longlong **)(param_1 + 0x1c8);
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_68 = plVar13;
      local_60 = plVar14;
      (**(code **)(*plVar16 + 0x40))(plVar16,&local_68,param_2);
    }
    if (plVar14 != (longlong *)0x0) {
      plVar16 = plVar14 + 1;
      LOCK();
      lVar6 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
      LOCK();
      lVar6 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1406a14a0 FUN_1406a14a0 body=580 status=ok
// SIG undefined FUN_1406a14a0(void)

void FUN_1406a14a0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int local_res8 [2];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  plVar7 = (longlong *)0x0;
  plVar11 = plVar7;
  plVar10 = plVar7;
  if (0 < (int)param_1[0x19]) {
    do {
      local_38 = *(undefined8 *)(param_1[0x18] + (longlong)plVar11);
      local_30 = *(longlong **)(param_1[0x18] + 8 + (longlong)plVar11);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 1,local_res8,&local_38);
      plVar6 = plVar7;
      if (local_res8[0] != -1) {
        plVar6 = (longlong *)(param_1[1] + (longlong)local_res8[0] * 0x28);
      }
      plVar5 = plVar6 + 2;
      if (plVar6 == (longlong *)0x0) {
        plVar5 = plVar7;
      }
      if (plVar5 != (longlong *)0x0) {
        local_28 = (longlong *)*plVar5;
        local_20 = (longlong *)plVar5[1];
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
        }
        TSet<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 1,&local_38);
        TSet<TTuple<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 0xb,local_28);
        if (*param_1 != 0) {
          (**(code **)(*local_28 + 8))();
          lVar3 = *param_1;
          if (((*(int *)(lVar3 + 0x530) != 0) && (*(longlong **)(lVar3 + 0x528) != (longlong *)0x0))
             && (cVar4 = (**(code **)(**(longlong **)(lVar3 + 0x528) + 0x18))(), cVar4 != '\0')) {
            plVar6 = plVar7;
            if (*(int *)(lVar3 + 0x530) != 0) {
              plVar6 = *(longlong **)(lVar3 + 0x528);
            }
            (**(code **)(*plVar6 + 0x40))(plVar6,&local_28);
          }
        }
        plVar6 = local_20;
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_20 + 1;
          lVar3 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
      }
      plVar6 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_30 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      uVar9 = (int)plVar10 + 1;
      plVar11 = plVar11 + 2;
      plVar10 = (longlong *)(ulonglong)uVar9;
    } while ((int)uVar9 < (int)param_1[0x19]);
  }
  if (*(int *)((longlong)param_1 + 0xcc) < 0) {
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x18,0);
  }
  else {
    iVar8 = (int)param_1[0x19];
    if (iVar8 != 0) {
      plVar11 = (longlong *)(param_1[0x18] + 8);
      do {
        plVar10 = (longlong *)*plVar11;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar10 + 1;
          lVar3 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        plVar11 = plVar11 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *(undefined4 *)(param_1 + 0x19) = 0;
  }
  return;
}



// FUNCTION 1406a16f0 FUN_1406a16f0 body=869 status=ok
// SIG undefined FUN_1406a16f0(void)

double * FUN_1406a16f0(longlong param_1,double *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  FUN_1419aad30();
  lVar1 = param_1 + 0x428;
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
            (param_1 + 0x4e8,param_1 + 0x4d0);
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x4d0,0);
  plVar4 = *(longlong **)(param_1 + 0x5b8);
  if ((plVar4 == (longlong *)0x0) || (iVar8 = (int)plVar4[1], iVar8 < 1)) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_1406a14a0(lVar1);
    FUN_1406a35f0(lVar1);
  }
  else {
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    iVar6 = (int)ROUND(((float)*(double *)(param_1 + 0x330) + (float)*(double *)(param_1 + 0x330)) -
                       0.5) >> 1;
    if (iVar6 < 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar8 + -1;
      if (iVar6 < iVar8 + -1) {
        iVar7 = iVar6;
      }
    }
    uVar2 = *(undefined4 *)(param_3 + 8);
    fVar16 = 0.0;
    cVar9 = '\0';
    iVar6 = iVar7;
    do {
      if (iVar8 <= iVar6) break;
      fVar10 = (float)FUN_14069b190(param_1,(longlong)iVar6 * 0x10 + *plVar4,iVar6,iVar7,uVar2);
      fVar3 = *(float *)(param_3 + 4);
      if (iVar6 == iVar7) {
        fVar11 = (float)*(double *)(param_1 + 0x330) - (float)(int)*(double *)(param_1 + 0x330);
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar11 = 1.0 - fVar11;
        fVar12 = fVar3 / (fVar11 * fVar10);
        fVar16 = fVar10;
        if (fVar11 <= fVar12) {
          fVar12 = fVar11;
        }
      }
      else if (fVar10 + fVar13 <= fVar3) {
        fVar12 = 1.0;
      }
      else {
        fVar12 = (fVar3 - fVar13) / fVar10;
      }
      fVar15 = fVar12 + fVar15;
      fVar14 = fVar14 + fVar10;
      if (iVar6 == iVar7) {
        fVar10 = fVar15 * fVar10;
      }
      iVar8 = (int)plVar4[1];
      fVar13 = fVar13 + fVar10;
      if (iVar8 + -1 <= iVar6) {
        cVar9 = '\x01';
      }
      iVar6 = iVar6 + 1;
    } while (fVar13 <= fVar3);
    if ((cVar9 == '\0') || (fVar3 = *(float *)(param_3 + 4), fVar3 <= fVar13)) {
      *param_2 = *(double *)(param_1 + 0x330);
      param_2[1] = (double)fVar14;
      param_2[2] = (double)fVar15;
    }
    else {
      fVar15 = (fVar14 - fVar3) / fVar16 + (float)iVar7;
      iVar8 = iVar7;
      if (fVar14 < fVar3) {
        do {
          iVar8 = iVar8 + -1;
          if (iVar8 < 0) break;
          fVar16 = (float)FUN_14069b190(param_1,(longlong)iVar8 * 0x10 + *plVar4,iVar8,iVar7,uVar2);
          fVar13 = *(float *)(param_3 + 4);
          fVar14 = fVar16 + fVar14;
          if (fVar13 < fVar14) {
            fVar15 = (fVar14 - fVar13) / fVar16 + (float)iVar8;
          }
        } while (fVar14 < fVar13);
      }
      lVar5 = *(longlong *)(param_1 + 0x5b8);
      *param_2 = (double)fVar15;
      iVar8 = *(int *)(lVar5 + 8);
      param_2[1] = (double)fVar14;
      param_2[2] = (double)((float)iVar8 - fVar15);
    }
    *(char *)(param_2 + 3) = cVar9;
    FUN_1406a14a0(lVar1);
    FUN_1406a35f0(lVar1);
  }
  return param_2;
}



// FUNCTION 1406a1a60 FUN_1406a1a60 body=91 status=ok
// SIG undefined FUN_1406a1a60(void)

void FUN_1406a1a60(longlong *param_1)

{
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
            (param_1 + 0x9d,param_1 + 0x9a);
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x9a,0);
  FUN_1406a14a0(param_1 + 0x85);
                    /* WARNING: Could not recover jumptable at 0x0001406a1ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x208))(param_1);
  return;
}



// FUNCTION 1406a1ac0 FUN_1406a1ac0 body=162 status=ok
// SIG undefined FUN_1406a1ac0(void)

longlong FUN_1406a1ac0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x38) != &local_18) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,&local_10);
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
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffffffdf | 1;
  return param_1;
}



// FUNCTION 1406a1b70 Remove body=437 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar9 = (int)(param_2 >> 4);
  uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
  uVar7 = (longlong)(int)param_1[9] - 1;
  uVar6 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
  uVar10 = (iVar9 - uVar8) - uVar6 ^ uVar6 >> 0xc;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 << 0x10;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar10 = (uVar10 - uVar8) - uVar6 ^ uVar6 >> 3;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 << 10;
  plVar11 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar11 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar11 +
                  (((longlong)(int)((uVar6 - uVar8) - uVar10) ^ (ulonglong)(uVar8 >> 0xf)) & uVar7)
                  * 4);
  if (iVar9 != -1) {
    lVar2 = *param_1;
    do {
      lVar4 = (longlong)iVar9 * 0x20;
      if (*(ulonglong *)(lVar4 + lVar2) == param_2) {
        lVar4 = (longlong)iVar9 * 0x20;
        uVar7 = (longlong)*(int *)(lVar4 + 0x1c + lVar2) & uVar7;
        piVar5 = (int *)((longlong)plVar11 + uVar7 * 4);
        iVar3 = *(int *)((longlong)plVar11 + uVar7 * 4);
        if (iVar3 != -1) goto LAB_1406a1c90;
        goto LAB_1406a1cb0;
      }
      iVar9 = *(int *)(lVar4 + 0x18 + lVar2);
    } while (iVar9 != -1);
  }
  return 0;
  while( true ) {
    piVar5 = (int *)(lVar2 + 0x18 + (longlong)iVar3 * 0x20);
    iVar3 = *piVar5;
    if (iVar3 == -1) break;
LAB_1406a1c90:
    if (iVar3 == iVar9) {
      *piVar5 = *(int *)(lVar4 + lVar2 + 0x18);
      break;
    }
  }
LAB_1406a1cb0:
  plVar11 = *(longlong **)(lVar4 + 0x10 + *param_1);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar5 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar9,1);
  return 1;
}



// FUNCTION 1406a1d30 Remove body=379 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar9 = (int)(*param_2 >> 4);
  uVar7 = (longlong)(int)param_1[9] - 1;
  uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
  uVar5 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
  uVar10 = (iVar9 - uVar8) - uVar5 ^ uVar5 >> 0xc;
  uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 << 0x10;
  uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar10 = (uVar10 - uVar8) - uVar5 ^ uVar5 >> 3;
  uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 << 10;
  plVar11 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar11 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar11 +
                  (((longlong)(int)((uVar5 - uVar8) - uVar10) ^ (ulonglong)(uVar8 >> 0xf)) & uVar7)
                  * 4);
  if (iVar9 != -1) {
    lVar4 = *param_1;
    do {
      lVar6 = (longlong)iVar9;
      if (*(ulonglong *)(lVar4 + lVar6 * 0x28) == *param_2) {
        lVar6 = lVar6 * 0x28;
        uVar7 = (longlong)*(int *)(lVar6 + 0x24 + lVar4) & uVar7;
        puVar2 = (undefined4 *)((longlong)plVar11 + uVar7 * 4);
        iVar3 = *(int *)((longlong)plVar11 + uVar7 * 4);
        goto joined_r0x0001406a1e4c;
      }
      iVar9 = *(int *)(lVar4 + 0x20 + lVar6 * 0x28);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x0001406a1e4c:
  if (iVar3 == -1) {
LAB_1406a1e73:
    UE::Core::Private::Tuple::
    TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
    ::
    ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
              (*param_1 + lVar6);
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar9,1);
    return 1;
  }
  if (iVar3 == iVar9) {
    *puVar2 = *(undefined4 *)(lVar6 + lVar4 + 0x20);
    goto LAB_1406a1e73;
  }
  lVar1 = (longlong)iVar3 * 5 + 4;
  iVar3 = *(int *)(lVar4 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar1 * 8);
  goto joined_r0x0001406a1e4c;
}



// FUNCTION 1406a1eb0 FUN_1406a1eb0 body=448 status=ok
// SIG undefined FUN_1406a1eb0(void)

undefined8 FUN_1406a1eb0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar11 = (int)(*param_2 >> 4);
  uVar9 = (longlong)(int)param_1[9] - 1;
  uVar10 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
  uVar7 = -(uVar10 + iVar11) ^ uVar10 >> 0xd;
  uVar12 = (iVar11 - uVar10) - uVar7 ^ uVar7 >> 0xc;
  uVar10 = (uVar10 - uVar12) - uVar7 ^ uVar12 << 0x10;
  uVar7 = (uVar7 - uVar10) - uVar12 ^ uVar10 >> 5;
  uVar12 = (uVar12 - uVar10) - uVar7 ^ uVar7 >> 3;
  uVar10 = (uVar10 - uVar12) - uVar7 ^ uVar12 << 10;
  plVar13 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar13 = param_1 + 7;
  }
  iVar11 = *(int *)((longlong)plVar13 +
                   (((longlong)(int)((uVar7 - uVar10) - uVar12) ^ (ulonglong)(uVar10 >> 0xf)) &
                   uVar9) * 4);
  if (iVar11 != -1) {
    lVar6 = *param_1;
    do {
      lVar8 = (longlong)iVar11;
      if (*(ulonglong *)(lVar6 + lVar8 * 0x18) == *param_2) {
        lVar8 = lVar8 * 0x18;
        uVar9 = (longlong)*(int *)(lVar8 + 0x14 + lVar6) & uVar9;
        puVar4 = (undefined4 *)((longlong)plVar13 + uVar9 * 4);
        iVar5 = *(int *)((longlong)plVar13 + uVar9 * 4);
        goto joined_r0x0001406a1fd2;
      }
      iVar11 = *(int *)(lVar6 + 0x10 + lVar8 * 0x18);
    } while (iVar11 != -1);
  }
  return 0;
joined_r0x0001406a1fd2:
  if (iVar5 == -1) {
LAB_1406a2000:
    plVar13 = *(longlong **)(lVar8 + 8 + *param_1);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar13 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar3 = (int *)((longlong)plVar13 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar11,1);
    return 1;
  }
  if (iVar5 == iVar11) {
    *puVar4 = *(undefined4 *)(lVar8 + lVar6 + 0x10);
    goto LAB_1406a2000;
  }
  lVar1 = (longlong)iVar5 * 3 + 2;
  iVar5 = *(int *)(lVar6 + lVar1 * 8);
  puVar4 = (undefined4 *)(lVar6 + lVar1 * 8);
  goto joined_r0x0001406a1fd2;
}



// FUNCTION 1406a2070 FUN_1406a2070 body=277 status=ok
// SIG undefined FUN_1406a2070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406a2070(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  puVar3 = (undefined8 *)(param_1 + 0x5c0);
  uStack_40 = (longlong *)param_2[1];
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
    UNLOCK();
  }
  if (&local_48 != puVar3) {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uVar6 = *puVar3;
    plVar5 = *(longlong **)(param_1 + 0x5c8);
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    *(undefined4 *)puVar3 = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x5c4) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x5c8) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x5cc) = uStack_40._4_4_;
    local_48 = uVar6;
    uStack_40 = plVar5;
  }
  plVar5 = uStack_40;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_40 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_40)(uStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_40 + 8))(uStack_40,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x5d0) = param_3;
  FUN_1419bb590(param_1);
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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



// FUNCTION 1406a2190 FUN_1406a2190 body=131 status=ok
// SIG undefined FUN_1406a2190(void)

void FUN_1406a2190(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if (param_1 != &local_18) {
    *param_1 = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&local_10);
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
  return;
}



// FUNCTION 1406a2220 FUN_1406a2220 body=1879 status=ok
// SIG undefined FUN_1406a2220(void)

void FUN_1406a2220(longlong *param_1,longlong param_2,float param_3,char param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  longlong *local_178;
  longlong *plStack_170;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  undefined1 local_138 [4];
  float local_134;
  undefined1 local_130 [4];
  float local_12c;
  undefined8 local_128;
  longlong *plStack_120;
  undefined1 local_118 [8];
  longlong *local_110;
  longlong *local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  
  if ((param_4 != '\x01') ||
     (((9.999999747378752e-05 < (double)param_1[0x66] ||
        (double)param_1[0x66] == 9.999999747378752e-05 || (0.0 <= param_3)) &&
      (((char)param_1[0x6d] == '\0' || (param_3 <= 0.0)))))) {
    dVar14 = (double)param_1[0x66];
    fVar15 = ABS(param_3);
    iVar12 = (int)dVar14;
    if ((dVar14 == 0.0) && ((char)param_1[0x6d] != '\0')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((param_4 == '\0') &&
       (cVar6 = FOverscroll::ShouldApplyOverscroll
                          ((longlong)param_1 + 0x414,dVar14 == 0.0,(char)param_1[0x6d],param_3),
       cVar6 != '\0')) {
      if (param_3 <= 0.0) {
        if (0.0 <= param_3) {
          fVar15 = 0.0;
        }
        else {
          fVar15 = -fVar15;
        }
      }
      fVar15 = (float)FOverscroll::ScrollBy((longlong)param_1 + 0x414,param_2,fVar15);
      if (fVar15 != 0.0) {
        FUN_1419bb590(param_1);
      }
    }
    else if (!bVar4) {
      local_140 = (longlong *)param_1[0xb7];
      if (((local_140 != (longlong *)0x0) && (0 < (int)local_140[1])) &&
         (uVar2 = *(undefined4 *)(param_2 + 8), param_3 != 0.0)) {
        lVar10 = (longlong)iVar12 << 4;
        local_148 = lVar10;
        do {
          if (((int)local_140[1] <= iVar12) || (iVar12 < 0)) break;
          plVar3 = *(longlong **)(lVar10 + 8 + *local_140);
          local_168 = *(undefined8 *)(lVar10 + *local_140);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          plStack_160 = plVar3;
          FUN_14069bc50(param_1 + 0x85,&local_178,&local_168);
          plVar9 = plStack_170;
          plVar11 = local_178;
          if (local_178 == (longlong *)0x0) {
            local_128 = local_168;
            plStack_120 = plStack_160;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x268))(param_1,local_118,&local_128);
            local_150 = (longlong *)puVar7[1];
            local_178 = (longlong *)*puVar7;
            if (local_150 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_150 + 1) = (int)local_150[1] + 1;
              UNLOCK();
            }
            local_158 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_170,&local_150);
            plVar3 = local_150;
            if (local_150 != (longlong *)0x0) {
              LOCK();
              plVar9 = local_150 + 1;
              lVar10 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_150)(local_150);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*local_150 + 8))(local_150,1);
                }
              }
            }
            plVar3 = local_110;
            if (local_110 != (longlong *)0x0) {
              LOCK();
              plVar9 = local_110 + 1;
              lVar10 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_110)(local_110);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar11 = local_178;
            (**(code **)(*local_178 + 0x10))(local_178,iVar12);
            plVar9 = plStack_170;
            local_108 = local_178;
            plStack_100 = plStack_170;
            if (plStack_170 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
              UNLOCK();
              plVar11 = local_178;
            }
            local_f8 = local_168;
            plStack_f0 = plStack_160;
            if (plStack_160 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
              UNLOCK();
              plVar11 = local_178;
            }
            FUN_14069d7a0(param_1 + 0x85,&local_f8,&local_108);
            puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x50))(plVar11,local_e8);
            FUN_14185c5d0(*puVar7,uVar2);
            plVar3 = local_e0;
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              plVar9 = local_e0 + 1;
              lVar10 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              plVar9 = plStack_170;
              plVar11 = local_178;
              if ((int)lVar10 == 1) {
                (**(code **)*local_e0)(local_e0);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar9 = plStack_170;
                plVar11 = local_178;
                if (iVar8 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                  plVar9 = plStack_170;
                  plVar11 = local_178;
                }
              }
            }
          }
          if (param_3 <= 0.0) {
            puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x50))(plVar11,local_c8);
            SWidget::GetDesiredSize(*puVar7,local_130);
            plVar3 = local_c0;
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              plVar9 = local_c0 + 1;
              lVar10 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              plVar9 = plStack_170;
              if ((int)lVar10 == 1) {
                (**(code **)*local_c0)(local_c0);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar9 = plStack_170;
                if (iVar8 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                  plVar9 = plStack_170;
                }
              }
            }
            fVar13 = (float)dVar14 - (float)(int)dVar14;
            if (fVar13 == 0.0) {
              fVar13 = 1.0;
              dVar14 = dVar14 + -1.0;
            }
            fVar13 = local_12c * fVar13;
            if (fVar15 <= fVar13) {
              if (fVar15 == fVar13) {
                dVar14 = dVar14 + (double)-((float)dVar14 - (float)(int)dVar14);
              }
              else {
                dVar14 = (double)((fVar13 - fVar15) / local_12c + (float)(int)dVar14);
              }
            }
            else {
              if (iVar12 != 0) {
                iVar8 = -1;
                lVar10 = -0x10;
                dVar14 = dVar14 + (double)-((float)dVar14 - (float)(int)dVar14);
                goto LAB_1406a275a;
              }
              dVar14 = 0.0;
            }
LAB_1406a2886:
            plVar3 = plStack_170;
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar9 = plVar9 + 1;
              lVar10 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plStack_170)(plStack_170);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*plStack_170 + 8))(plStack_170,1);
                }
              }
            }
            plVar3 = plStack_160;
            if (plStack_160 != (longlong *)0x0) {
              LOCK();
              plVar9 = plStack_160 + 1;
              lVar10 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plStack_160)(plStack_160);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*plStack_160 + 8))(plStack_160,1);
                }
              }
            }
            break;
          }
          puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x50))(plVar11,local_d8);
          SWidget::GetDesiredSize(*puVar7,local_138);
          plVar3 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_d0 + 1;
            lVar10 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            plVar9 = plStack_170;
            if ((int)lVar10 == 1) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar9 = plStack_170;
              if (iVar8 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
                plVar9 = plStack_170;
              }
            }
          }
          fVar13 = (1.0 - ((float)dVar14 - (float)(int)dVar14)) * local_134;
          if (fVar15 <= fVar13) {
            if (fVar15 == fVar13) {
              dVar14 = (double)((float)(int)dVar14 + 1.0);
            }
            else {
              dVar14 = (double)((1.0 - (fVar13 - fVar15) / local_134) + (float)(int)dVar14);
            }
            goto LAB_1406a2886;
          }
          if (iVar12 == (int)local_140[1]) {
            dVar14 = (double)(int)local_140[1];
            goto LAB_1406a2886;
          }
          lVar10 = 0x10;
          iVar8 = 1;
          dVar14 = (double)((float)(int)dVar14 + 1.0);
LAB_1406a275a:
          plVar3 = plStack_170;
          fVar15 = fVar15 - fVar13;
          iVar12 = iVar12 + iVar8;
          lVar10 = local_148 + lVar10;
          local_148 = lVar10;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar9 + 1;
            lVar5 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_170)(plStack_170);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plStack_170 + 8))(plStack_170,1);
              }
            }
          }
          plVar3 = plStack_160;
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            plVar9 = plStack_160 + 1;
            lVar5 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_160)(plStack_160);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plStack_160 + 8))(plStack_160,1);
              }
            }
          }
        } while (fVar15 != 0.0);
      }
      (**(code **)(*param_1 + 0x220))(param_1,(float)dVar14);
    }
  }
  return;
}



// FUNCTION 1406a2980 FUN_1406a2980 body=592 status=ok
// SIG undefined FUN_1406a2980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1406a2980(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  double dVar6;
  char cVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar2 = param_1 + 0xb8;
  lVar4 = *plVar2;
  if ((lVar4 != 0) && (plVar8 = (longlong *)param_1[0xb7], plVar8 != (longlong *)0x0)) {
    plVar11 = (longlong *)param_1[0xb9];
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      plVar8 = (longlong *)param_1[0xb7];
    }
    plVar5 = (longlong *)*plVar8;
    for (plVar10 = plVar5; plVar10 != plVar5 + (longlong)(int)plVar8[1] * 2; plVar10 = plVar10 + 2)
    {
      if (*plVar10 == lVar4) {
        iVar9 = (int)((longlong)plVar10 - (longlong)plVar5 >> 4);
        goto LAB_1406a2a1a;
      }
    }
    iVar9 = -1;
LAB_1406a2a1a:
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar11 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if (iVar9 != -1) {
      fVar12 = (float)(**(code **)(*param_1 + 0x228))(param_1);
      dVar6 = (double)fVar12;
      if (((dVar6 == 0.0) && (cVar7 = FUN_1419b3db0(param_1), cVar7 != '\0')) &&
         (dVar6 = (double)param_1[0x6b], dVar6 == 0.0)) {
        return 1;
      }
      ARacingGameState::GetMeanAbsError(param_1);
      if (((double)iVar9 < (double)param_1[0x66]) ||
         ((double)param_1[0x66] + dVar6 < (double)(iVar9 + 1))) {
        dVar14 = (double)iVar9 - dVar6 * 0.5;
        dVar13 = (double)(iVar9 + 1) - (dVar14 + dVar6);
        dVar6 = 0.0;
        if ((0.0 <= dVar13) && (dVar6 = dVar13, 3.4028234663852886e+38 <= dVar13)) {
          dVar6 = 3.4028234663852886e+38;
        }
        STableViewBase::SetScrollOffset(param_1,(float)(dVar6 + dVar14));
      }
      FUN_1419bb590(param_1);
      plVar8 = (longlong *)param_1[0xb9];
      plVar11 = param_1 + 0xbb;
      lVar4 = *plVar2;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_68 = lVar4;
      plStack_60 = plVar8;
      if (&local_68 != plVar11) {
        local_68 = *plVar11;
        plStack_60 = (longlong *)param_1[0xbc];
        *plVar11 = lVar4;
        param_1[0xbc] = (longlong)plVar8;
        local_58 = lVar4;
        plStack_50 = plVar8;
      }
      plVar8 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_60 + 1;
        lVar4 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
    }
    FUN_1406a2190(plVar2);
  }
  return 0;
}



// FUNCTION 1406a2bd0 FUN_1406a2bd0 body=471 status=ok
// SIG undefined FUN_1406a2bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406a2bd0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x420) = *param_2;
  plVar5 = (longlong *)param_2[1];
  plVar9 = *(longlong **)(param_1 + 0x428);
  if (plVar5 != plVar9) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(param_1 + 0x428);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    *(longlong **)(param_1 + 0x428) = plVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x418);
  if (lVar6 == 0) {
    local_48 = *param_2;
    local_40 = param_2[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    FSlateApplication::RegisterVirtualWindow(param_1,&local_48);
  }
  else {
    plVar5 = *(longlong **)(lVar6 + 0x18);
    puVar2 = (undefined8 *)(lVar6 + 0x10);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent(lVar6);
    plVar9 = (longlong *)param_2[1];
    uVar7 = *param_2;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_58 = uVar7;
    plStack_50 = plVar9;
    if (&local_58 != puVar2) {
      local_58 = *puVar2;
      plStack_50 = *(longlong **)(lVar6 + 0x18);
      *puVar2 = uVar7;
      *(longlong **)(lVar6 + 0x18) = plVar9;
      local_38 = uVar7;
      plStack_30 = plVar9;
    }
    plVar9 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_50 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    FUN_141802340(lVar6);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar5 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar5 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1406a2dc0 FUN_1406a2dc0 body=232 status=ok
// SIG undefined FUN_1406a2dc0(void)

void FUN_1406a2dc0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong local_10;
  
  *(undefined8 *)(param_1 + 0x428) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar5 = *(longlong **)(param_1 + 0x430);
  if (plVar3 != plVar5) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x430);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    *(longlong **)(param_1 + 0x430) = plVar3;
  }
  *(undefined8 *)(param_1 + 0x420) = 0;
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FSlateApplication::RegisterVirtualWindow(param_1 + 8,&local_18);
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 1406a2eb0 FUN_1406a2eb0 body=98 status=ok
// SIG undefined FUN_1406a2eb0(void)

undefined1 FUN_1406a2eb0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x628) != 0) {
    if (*(longlong **)(param_1 + 0x620) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x620) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x628) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x620);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x618) = uVar2;
      }
    }
    return *(undefined1 *)(param_1 + 0x618);
  }
  return *(undefined1 *)(param_1 + 0x618);
}



// FUNCTION 1406a2f20 FUN_1406a2f20 body=397 status=ok
// SIG undefined FUN_1406a2f20(void)

void FUN_1406a2f20(longlong param_1,undefined8 param_2,double param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 local_res8;
  undefined8 local_48;
  undefined4 local_40;
  
  if ((*(int *)(param_1 + 0x348) != 0) && (*(longlong **)(param_1 + 0x340) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x18))();
    if (cVar4 != '\0') {
      if (*(int *)(param_1 + 0x348) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x340);
      }
      (**(code **)(*plVar5 + 0x38))(plVar5,&local_48);
      *(undefined8 *)(param_1 + 0x330) = local_48;
      *(undefined4 *)(param_1 + 0x338) = local_40;
    }
  }
  *(undefined8 *)(param_1 + 0x314) = *(undefined8 *)(param_1 + 0x330);
  uVar2 = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(param_1 + 0x31c) = uVar2;
  if ((double)(*(float *)(param_1 + 0x310) + 1.0) < param_3) {
    uVar1 = *(undefined8 *)(param_1 + 0x314);
    *(float *)(param_1 + 0x310) = (float)param_3;
    TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
              (param_1 + 0x300,param_1 + 0x2f0);
    local_48 = uVar1;
    local_40 = uVar2;
    AlgoImpl::
    IntroSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_69ebcaf6a85496070129319141a5d198>_>_>
              (*(undefined8 *)(param_1 + 0x300),(longlong)*(int *)(param_1 + 0x308),local_res8,
               &local_48);
    lVar3 = *(longlong *)(param_1 + 0x358);
    if ((0 < lVar3) && (lVar3 < *(int *)(param_1 + 0x308))) {
      TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (param_1 + 0x300,lVar3,*(int *)(param_1 + 0x308) - (int)lVar3,1);
    }
    (**(code **)(**(longlong **)(param_1 + 800) + 0x208))();
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1406a30b0 FUN_1406a30b0 body=337 status=ok
// SIG undefined FUN_1406a30b0(void)

void FUN_1406a30b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 local_28;
  longlong *plStack_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  plVar2 = *(longlong **)(param_1 + 0x398);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 0x390);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  cVar4 = (**(code **)(*plVar8 + 0x58))(plVar8,*(undefined4 *)(param_1 + 0x3a0));
  if (cVar4 != '\0') {
    puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x38))(plVar8,param_1);
    local_28 = *puVar6;
    plStack_20 = (longlong *)puVar6[1];
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
    cVar4 = (**(code **)(*plVar8 + 0x50))(plVar8,&local_28);
    local_18 = local_28;
    plStack_10 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar8 + 0x40))(plVar8,&local_18,cVar4 == '\0');
    plVar2 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_20 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 1406a3210 FUN_1406a3210 body=987 status=ok
// SIG undefined FUN_1406a3210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406a3210(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined1 auStack_188 [32];
  int local_168 [2];
  uint local_160;
  uint uStack_15c;
  uint *puStack_158;
  undefined4 local_150;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined8 local_140;
  longlong *local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  longlong *local_100;
  undefined8 uStack_f8;
  uint *puStack_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined8 local_d0;
  uint local_c8 [4];
  uint *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  int local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  int local_80;
  longlong local_68;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if (*(int *)(param_1 + 0x2f8) != 2) {
    plVar6 = *(longlong **)(param_1 + 0x5b8);
    if (plVar6 == (longlong *)0x0) {
      (**(code **)(*(longlong *)(param_1 + 0x420) + 0x20))();
    }
    else {
      uVar7 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_b8 = (uint *)0x0;
      local_b0 = 0;
      local_a4 = 0;
      local_98 = 0;
      local_90 = 0;
      local_a8 = 0xffffffff;
      uVar9 = uVar7;
      uVar11 = uVar7;
      if (0 < (int)plVar6[1]) {
        do {
          plVar3 = *(longlong **)(*plVar6 + 8 + uVar11);
          local_140 = *(undefined8 *)(*plVar6 + uVar11);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_138 = plVar3;
          TSet<TSharedRef<SWidget,0>,DefaultKeyFuncs<TSharedRef<SWidget,0>,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x548,local_168,&local_140);
          if ((local_168[0] != -1) &&
             (*(longlong *)(param_1 + 0x548) + (longlong)local_168[0] * 0x18 != 0)) {
            FUN_14068cfa0(&local_d8,local_108,&local_140,0);
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar3 + 1;
            lVar4 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar6 = *(longlong **)(param_1 + 0x5b8);
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar11 = uVar11 + 0x10;
        } while ((int)uVar8 < (int)plVar6[1]);
      }
      plVar6 = (longlong *)(param_1 + 0x548);
      TSet<TSharedPtr<FInterfaceContainer,0>,DefaultKeyFuncs<TSharedPtr<FInterfaceContainer,0>,0>,FDefaultSetAllocator>
      ::Difference(plVar6,&local_88,&local_d8);
      if (plVar6 != &local_d8) {
        TSet<TSharedPtr<SWidget,0>,DefaultKeyFuncs<TSharedPtr<SWidget,0>,0>,FDefaultSetAllocator>::
        Empty(plVar6,(int)local_d0 - local_a4);
        puStack_158 = local_c8;
        local_160 = 0;
        uVar8 = 0;
        uStack_15c = 1;
        uStack_14c = 0;
        if ((int)local_b0 != 0) {
          puVar10 = local_c8;
          if (local_b8 != (uint *)0x0) {
            puVar10 = local_b8;
          }
          uVar2 = *puVar10;
          uVar9 = uVar7;
          while (uVar2 == 0) {
            iVar5 = (int)uVar7;
            uVar8 = (int)uVar9 + 0x20;
            uVar9 = (ulonglong)uVar8;
            local_160 = iVar5 + 1;
            uVar7 = (ulonglong)local_160;
            uStack_14c = (ulonglong)uVar8 << 0x20;
            if ((int)((int)local_b0 + -1 + ((int)local_b0 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) {
              uStack_14c = CONCAT44(uVar8,(int)local_b0);
              goto LAB_1406a349d;
            }
            uVar2 = puVar10[(longlong)iVar5 + 1];
          }
          uStack_15c = -uVar2 & uVar2;
          iVar5 = 0x1f;
          if (uStack_15c != 0) {
            for (; uStack_15c >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (uStack_15c == 0) {
            iVar5 = 0x20;
          }
          else {
            iVar5 = 0x1f - iVar5;
          }
          iVar5 = (uVar8 - iVar5) + 0x1f;
          if ((int)local_b0 < iVar5) {
            iVar5 = (int)local_b0;
          }
          uStack_14c._4_4_ = (undefined4)((ulonglong)uStack_14c >> 0x20);
          uStack_14c = CONCAT44(uStack_14c._4_4_,iVar5);
        }
LAB_1406a349d:
        local_150 = 0xffffffff;
        local_130 = &local_d8;
        uStack_128 = CONCAT44(uStack_15c,local_160);
        uStack_e8 = 0xffffffff;
        iStack_e4 = (int)uStack_14c;
        uStack_e0 = uStack_14c._4_4_;
        uStack_dc = uStack_144;
        uStack_118 = CONCAT44((int)uStack_14c,0xffffffff);
        local_110 = uStack_14c._4_4_;
        uStack_10c = uStack_144;
        iVar5 = (int)uStack_14c;
        local_120 = puStack_158;
        local_100 = local_130;
        uStack_f8 = uStack_128;
        puStack_f0 = puStack_158;
        if ((int)uStack_14c < (int)local_b0) {
          do {
            FUN_14068cfa0(plVar6,local_104,*local_130 + (longlong)iVar5 * 0x18,0);
            uStack_118 = CONCAT44(uStack_118._4_4_,(uint)uStack_118 & ~uStack_128._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_128);
            iVar5 = uStack_118._4_4_;
          } while (uStack_118._4_4_ < (int)local_120[6]);
        }
      }
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(&local_88,0);
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
      local_90 = 0;
      if (local_98 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(&local_d8,0);
      if (local_b8 != (uint *)0x0) {
        FMemory::Free();
      }
      if (local_d8 != 0) {
        FMemory::Free();
      }
      if (local_80 - local_54 < 1) {
        return;
      }
    }
    (**(code **)(*(longlong *)(param_1 + 0x420) + 0x30))((longlong *)(param_1 + 0x420),3);
  }
  return;
}



// FUNCTION 1406a35f0 FUN_1406a35f0 body=848 status=ok
// SIG undefined FUN_1406a35f0(void)

void FUN_1406a35f0(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  uint local_b8;
  uint uStack_b4;
  int iStack_a4;
  uint uStack_a0;
  uint local_98;
  uint uStack_94;
  int iStack_84;
  uint uStack_80;
  undefined8 uStack_70;
  uint *local_68;
  undefined8 uStack_60;
  uint local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  uint uStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  iVar6 = (int)param_1[0xc] - *(int *)((longlong)param_1 + 0x8c);
  if (((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar6) ||
     (iVar6 != (int)param_1[0x16])) {
    plVar8 = (longlong *)0x0;
    if ((*(int *)(*param_1 + 0x510) != 0) &&
       ((plVar7 = *(longlong **)(*param_1 + 0x508), plVar7 != (longlong *)0x0 &&
        (cVar4 = (**(code **)(*plVar7 + 0x18))(), cVar4 != '\0')))) {
      iVar6 = (int)param_1[6];
      local_68 = (uint *)(param_1 + 3);
      uStack_b4 = 1;
      local_b8 = 0;
      iStack_a4 = 0;
      uStack_a0 = 0;
      if (iVar6 != 0) {
        puVar10 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar10 = local_68;
        }
        uVar2 = *puVar10;
        plVar7 = plVar8;
        plVar9 = plVar8;
        while (uVar2 == 0) {
          iVar5 = (int)plVar7;
          uStack_a0 = (int)plVar9 + 0x20;
          plVar9 = (longlong *)(ulonglong)uStack_a0;
          local_b8 = iVar5 + 1;
          plVar7 = (longlong *)(ulonglong)local_b8;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1406a3710;
          uVar2 = puVar10[(longlong)iVar5 + 1];
        }
        uStack_b4 = -uVar2 & uVar2;
        iVar5 = 0x1f;
        if (uStack_b4 != 0) {
          for (; uStack_b4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uStack_b4 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        iStack_a4 = (uStack_a0 - iVar5) + 0x1f;
        if (iVar6 < iStack_a4) {
LAB_1406a3710:
          iStack_a4 = iVar6;
        }
      }
      uStack_70 = CONCAT44(uStack_b4,local_b8);
      uStack_38._0_4_ = 0xffffffff;
      uStack_38._4_4_ = iStack_a4;
      uStack_30 = uStack_a0;
      local_58 = uStack_a0;
      uStack_60._0_4_ = 0xffffffff;
      uStack_60._4_4_ = iStack_a4;
      local_50 = param_1 + 1;
      uStack_48 = uStack_70;
      puStack_40 = local_68;
      if (iStack_a4 < iVar6) {
        do {
          plVar7 = *(longlong **)(param_1[1] + 0x10 + (longlong)uStack_60._4_4_ * 0x28);
          (**(code **)(*plVar7 + 0x50))(plVar7,local_28);
          plVar7 = local_20;
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_20 + 1;
            lVar3 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_20)(local_20);
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
          uStack_60._0_4_ = (uint)uStack_60 & ~uStack_70._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
        } while (uStack_60._4_4_ < (int)local_68[6]);
      }
      local_50 = param_1 + 0xb;
      uStack_94 = 1;
      iVar6 = (int)param_1[0x10];
      local_68 = (uint *)(param_1 + 0xd);
      local_98 = 0;
      iStack_84 = 0;
      uStack_80 = 0;
      if (iVar6 != 0) {
        puVar10 = (uint *)param_1[0xf];
        if ((uint *)param_1[0xf] == (uint *)0x0) {
          puVar10 = local_68;
        }
        uVar2 = *puVar10;
        plVar7 = plVar8;
        plVar9 = plVar8;
        while (uVar2 == 0) {
          iVar5 = (int)plVar7;
          uStack_80 = (int)plVar9 + 0x20;
          plVar9 = (longlong *)(ulonglong)uStack_80;
          local_98 = iVar5 + 1;
          plVar7 = (longlong *)(ulonglong)local_98;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1406a387c;
          uVar2 = puVar10[(longlong)iVar5 + 1];
        }
        uStack_94 = -uVar2 & uVar2;
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
        iStack_84 = (uStack_80 - iVar5) + 0x1f;
        if (iVar6 < iStack_84) {
LAB_1406a387c:
          iStack_84 = iVar6;
        }
      }
      uStack_70 = CONCAT44(uStack_94,local_98);
      uStack_60 = CONCAT44(iStack_84,0xffffffff);
      local_58 = uStack_80;
      uStack_30 = uStack_80;
      uStack_38 = uStack_60;
      uStack_48 = uStack_70;
      puStack_40 = local_68;
      if (iStack_84 < iVar6) {
        do {
          uStack_38 = CONCAT44(uStack_38._4_4_,(uint)uStack_38 & ~uStack_48._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_48);
        } while (uStack_38._4_4_ < (int)puStack_40[6]);
      }
    }
    lVar3 = *param_1;
    if (((*(int *)(lVar3 + 0x520) != 0) && (*(longlong **)(lVar3 + 0x518) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(lVar3 + 0x518) + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(lVar3 + 0x520) != 0) {
        plVar8 = *(longlong **)(lVar3 + 0x518);
      }
      (**(code **)(*plVar8 + 0x40))(plVar8);
    }
  }
  return;
}



// FUNCTION 1406a3940 FUN_1406a3940 body=47 status=ok
// SIG undefined FUN_1406a3940(void)

longlong FUN_1406a3940(void)

{
  if (DAT_146857f10 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146857f10,&PTR_s__Script_GbxJira_144044c4f_1_144044dc0);
  }
  return DAT_146857f10;
}



// FUNCTION 1406a3970 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWmfMediaSettings::GetPrivateStaticClass(void)

{
  if (DAT_146857f20 == 0) {
    FUN_14171ccd0(L"/Script/GbxJira",L"GbxJiraSettings",&DAT_146857f20,FUN_140447710,0x30,0x10000004
                  ,0,L"Engine",&LAB_1406a3a30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146857f20;
}



// FUNCTION 1406a3a40 FUN_1406a3a40 body=47 status=ok
// SIG undefined FUN_1406a3a40(void)

longlong FUN_1406a3a40(void)

{
  if (DAT_146857f18 == 0) {
    FUN_141786440(&DAT_146857f18,&PTR_GetPrivateStaticClass_144044c90);
  }
  return DAT_146857f18;
}



// FUNCTION 1406a3a80 FUN_1406a3a80 body=628 status=ok
// SIG undefined FUN_1406a3a80(void)

void FUN_1406a3a80(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  longlong *local_18;
  int local_10;
  
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_144045958;
    plVar1[1] = (longlong)FUN_1406a7890;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1440459a0;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_146535748,local_res10,&local_18);
    plVar1 = local_18;
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) goto LAB_1406a3b24;
      (**(code **)(*local_18 + 0x28))(local_18,0);
      plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
  }
LAB_1406a3b24:
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_1440459e8;
    plVar1[1] = (longlong)&LAB_1406a7880;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_144045a30;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_1465357c0,local_res10,&local_18);
    plVar1 = local_18;
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) goto LAB_1406a3bbb;
      (**(code **)(*local_18 + 0x28))(local_18,0);
      plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
  }
LAB_1406a3bbb:
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_144045a78;
    plVar1[1] = (longlong)FUN_1406a7280;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_144045ac0;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_146533130,local_res10,&local_18);
    plVar1 = local_18;
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) goto LAB_1406a3c52;
      (**(code **)(*local_18 + 0x28))(local_18,0);
      plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
  }
LAB_1406a3c52:
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar1[1] = (longlong)FUN_1406a7e70;
    local_18 = plVar1;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9f0;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_146535570,local_res10,&local_18);
    plVar1 = local_18;
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_18 + 0x28))(local_18,0);
      plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
  }
  return;
}



// FUNCTION 1406a3d00 FUN_1406a3d00 body=466 status=ok
// SIG undefined FUN_1406a3d00(void)

void FUN_1406a3d00(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  longlong local_res10;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  undefined *local_58;
  uint uStack_50;
  int iStack_4c;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  uint uStack_28;
  int iStack_24;
  undefined8 uStack_20;
  
  uStack_84 = 1;
  local_88 = 0;
  iStack_74 = 0;
  iStack_70 = 0;
  iVar7 = (int)DAT_14622c9c8;
  if (iVar7 != 0) {
    puVar6 = DAT_14622c9c0;
    if (DAT_14622c9c0 == (uint *)0x0) {
      puVar6 = (uint *)&DAT_14622c9b0;
    }
    uVar1 = *puVar6;
    local_88 = 0;
    iStack_70 = 0;
    while (uVar1 == 0) {
      lVar5 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar4 = local_88 + 1;
      bVar2 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar4;
      if (bVar2) goto LAB_1406a3dcc;
      uVar1 = puVar6[lVar5 + 1];
    }
    uStack_84 = -uVar1 & uVar1;
    iVar4 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    iStack_74 = (iStack_70 - iVar4) + 0x1f;
    if (iVar7 < iStack_74) {
LAB_1406a3dcc:
      iStack_74 = iVar7;
    }
  }
  uStack_50 = 0xffffffff;
  iStack_4c = iStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  local_40 = &DAT_14622c9a0;
  puStack_30 = &DAT_14622c9b0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = &DAT_14622c9b0;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  iStack_24 = iStack_4c;
  while ((iStack_4c != iVar7 || (local_58 != &DAT_14622c9b0))) {
    (**(code **)(*param_2 + 0x38))(param_2,DAT_14622c9a0 + 8 + (longlong)iStack_4c * 0x18);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  if (DAT_146857f38 != 0) {
    lVar3 = FUN_1406aa490();
    for (lVar5 = DAT_146857f38; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      local_res10 = DAT_146857f38;
      if (lVar5 == lVar3) goto LAB_1406a3e98;
    }
  }
  local_res10 = 0;
LAB_1406a3e98:
  (**(code **)(*param_2 + 0x38))(param_2,&local_res10,0,0);
  DAT_146857f38 = local_res10;
  return;
}



// FUNCTION 1406a3ee0 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FAnimSharingModule::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  param_1[1] = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 2) != '\0')) {
    UGCObjectReferencer::RemoveObject();
  }
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1406a3f40 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1440455f8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_144045640;
  }
  return;
}



// FUNCTION 1406a3f90 FUN_1406a3f90 body=274 status=ok
// SIG undefined FUN_1406a3f90(void)

void FUN_1406a3f90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6,longlong param_7,undefined1 param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = *(code **)(param_1 + 0x10);
  uVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,param_7);
  uVar4 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,param_5);
  (*pcVar2)(uVar1,param_2,param_3,param_4,uVar4,param_6,uVar3,param_8);
  if (*(int *)(param_5 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_5 + 0x30);
    if (*(longlong **)(param_5 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_5 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_5 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_7 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_7 + 0x30);
    if (*(longlong **)(param_7 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_7 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_7 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406a40b0 FUN_1406a40b0 body=436 status=ok
// SIG undefined FUN_1406a40b0(void)

undefined8
FUN_1406a40b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined1 param_6,longlong param_7,undefined1 param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_178 [80];
  undefined1 local_128 [80];
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  
  lVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_178,param_7);
  lVar4 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_128,param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = *(code **)(param_1 + 0x10);
  uVar5 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,lVar3);
  uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,lVar4);
  (*pcVar2)(uVar1,param_2,param_3,param_4,uVar6,param_6,uVar5,param_8);
  if (*(int *)(lVar4 + 0x40) != 0) {
    plVar7 = *(longlong **)(lVar4 + 0x30);
    if (*(longlong **)(lVar4 + 0x30) == (longlong *)0x0) {
      plVar7 = (longlong *)(lVar4 + 0x10);
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (*(longlong *)(lVar4 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(lVar3 + 0x40) != 0) {
    plVar7 = *(longlong **)(lVar3 + 0x30);
    if (*(longlong **)(lVar3 + 0x30) == (longlong *)0x0) {
      plVar7 = (longlong *)(lVar3 + 0x10);
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (*(longlong *)(lVar3 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_5 + 0x40) != 0) {
    plVar7 = *(longlong **)(param_5 + 0x30);
    if (*(longlong **)(param_5 + 0x30) == (longlong *)0x0) {
      plVar7 = (longlong *)(param_5 + 0x10);
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (*(longlong *)(param_5 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_7 + 0x40) != 0) {
    plVar7 = *(longlong **)(param_7 + 0x30);
    if (*(longlong **)(param_7 + 0x30) == (longlong *)0x0) {
      plVar7 = (longlong *)(param_7 + 0x10);
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (*(longlong *)(param_7 + 0x30) != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1406a4270 FUN_1406a4270 body=656 status=ok
// SIG undefined FUN_1406a4270(void)

int * FUN_1406a4270(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  int iVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  bool bVar12;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar7 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  bVar12 = false;
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  plVar11 = (longlong *)((longlong)iVar7 * 0x20 + *param_1);
  lVar3 = *(longlong *)*param_3;
  *plVar11 = lVar3;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *(undefined4 *)(plVar11 + 3) = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    if (uVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          if (*(longlong *)((longlong)iVar6 * 0x20 + *param_1) == lVar3) goto LAB_1406a43cb;
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *param_1);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_1406a43cb:
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)iVar6 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar6;
      goto LAB_1406a44d7;
    }
  }
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x1c) = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1406a44d7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1406a4500 HeapSortInternal<USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_> body=367 status=ok
// SIG undefined HeapSortInternal<USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>(void)

void AlgoImpl::
     HeapSortInternal<USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar5 = iVar4 * 2 + 1;
    iVar2 = iVar5;
    iVar7 = iVar4;
joined_r0x0001406a4546:
    do {
      if (iVar5 < param_2) {
        iVar5 = iVar4 * 2;
        iVar6 = iVar5 + 1;
        if (iVar5 + 2 < param_2) {
          cVar3 = (*param_4)(param_1[(longlong)iVar5 + 2],param_1[iVar6]);
          if (cVar3 != '\0') {
            iVar6 = iVar5;
          }
          iVar6 = iVar6 + 1;
        }
        cVar3 = (*param_4)(param_1[iVar4],param_1[iVar6]);
        if (cVar3 != '\0') {
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar6];
          iVar5 = iVar6 * 2 + 1;
          param_1[iVar6] = uVar1;
          iVar4 = iVar6;
          goto joined_r0x0001406a4546;
        }
      }
      iVar5 = iVar2 + -2;
      iVar4 = iVar7 + -1;
      iVar2 = iVar5;
      iVar7 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  lVar8 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar4 = 0;
      uVar1 = *param_1;
      *param_1 = param_1[lVar8];
      param_1[lVar8] = uVar1;
      if (1 < param_2) {
        do {
          iVar2 = iVar4 * 2;
          iVar5 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            cVar3 = (*param_4)(param_1[(longlong)iVar2 + 2],param_1[iVar5]);
            if (cVar3 != '\0') {
              iVar5 = iVar2;
            }
            iVar5 = iVar5 + 1;
          }
          cVar3 = (*param_4)(param_1[iVar4],param_1[iVar5]);
          if (cVar3 == '\0') break;
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar4 = iVar5;
        } while (iVar5 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return;
}



// FUNCTION 1406a4670 IntroSortInternal<USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_> body=659 status=ok
// SIG undefined IntroSortInternal<USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,code *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar7 = &local_348;
    do {
      puVar5 = (undefined8 *)*plVar7;
      puVar4 = (undefined8 *)plVar7[1];
      local_358 = plVar7[2];
      lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 3) + 1;
      puVar10 = puVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1406a4750:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar8 = puVar4 + 1;
          uVar1 = puVar10[lVar3 >> 1];
          puVar10[lVar3 >> 1] = *puVar10;
          *puVar10 = uVar1;
          puVar5 = puVar10;
LAB_1406a4780:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar4) goto code_r0x0001406a4789;
          goto LAB_1406a4795;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar4; puVar4 = puVar4 + -1) {
          while (puVar5 = puVar5 + 1, puVar5 <= puVar4) {
            cVar2 = (*param_4)(*puVar8,*puVar5);
            if (cVar2 != '\0') {
              puVar8 = puVar5;
            }
          }
          uVar1 = *puVar8;
          *puVar8 = *puVar4;
          *puVar4 = uVar1;
        }
        goto LAB_1406a4854;
      }
LAB_1406a4845:
      HeapSortInternal<USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
                (puVar5,lVar3,param_3,param_4);
LAB_1406a4854:
      plVar7 = plVar7 + -3;
    } while (&local_348 <= plVar7);
  }
  return;
code_r0x0001406a4789:
  cVar2 = (*param_4)(*puVar10,*puVar5);
  if (cVar2 == '\0') goto LAB_1406a4780;
LAB_1406a4795:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    cVar2 = (*param_4)(*puVar8,*puVar10);
  } while (cVar2 == '\0');
  if (puVar5 <= puVar8) {
    uVar1 = *puVar5;
    *puVar5 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_1406a4780;
  }
  uVar1 = *puVar10;
  iVar6 = iVar6 + -1;
  *puVar10 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-8 - (longlong)puVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar4 - (longlong)puVar5 & 0xfffffffffffffff8U)) {
    if (puVar5 < puVar4) {
      *plVar7 = (longlong)puVar5;
      plVar7[1] = (longlong)puVar4;
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_1406a4854;
    puVar4 = puVar9 + -2;
    puVar5 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *plVar7 = (longlong)puVar10;
      plVar7[1] = (longlong)(puVar9 + -2);
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar4 <= puVar5) goto LAB_1406a4854;
  }
  lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 3) + 1;
  puVar10 = puVar5;
  if (iVar6 == 0) goto LAB_1406a4845;
  goto LAB_1406a4750;
}



// FUNCTION 1406a4910 Sort<USignificanceManager::FManagedObjectInfo_*,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_> body=715 status=ok
// SIG undefined Sort<USignificanceManager::FManagedObjectInfo_*,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>(void)

void TMergeSort<TRotationInPlaceMerge<TJugglingRotation<FEuclidDivisionGCD>_>,2>::
     Sort<USignificanceManager::FManagedObjectInfo_*,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
               (longlong param_1,uint param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int local_84;
  int local_80;
  longlong local_70;
  
  uVar14 = (ulonglong)(int)param_2;
  if (0 < (int)param_2) {
    lVar10 = 0;
    iVar15 = 1;
    do {
      if ((iVar15 < (int)param_2) &&
         (cVar3 = (*(code *)*param_3)(*(undefined8 *)(param_1 + 8 + lVar10 * 8),
                                      *(undefined8 *)(param_1 + lVar10 * 8)), cVar3 != '\0')) {
        uVar17 = *(undefined8 *)(param_1 + lVar10 * 8);
        *(undefined8 *)(param_1 + lVar10 * 8) = *(undefined8 *)(param_1 + 8 + lVar10 * 8);
        *(undefined8 *)(param_1 + 8 + lVar10 * 8) = uVar17;
      }
      iVar15 = iVar15 + 2;
      lVar10 = lVar10 + 2;
    } while (lVar10 < (longlong)uVar14);
  }
  local_80 = 2;
  uVar6 = uVar14;
  if (2 < (int)param_2) {
    do {
      iVar15 = local_80 * 2;
      local_84 = 0;
      local_70 = 0;
      lVar10 = param_1;
      do {
        iVar8 = (int)uVar6 - local_84;
        if (iVar15 <= iVar8) {
          iVar8 = iVar15;
        }
        iVar12 = 0;
        iVar5 = local_80;
        if (0 < local_80) {
          do {
            if (iVar8 <= iVar5) break;
            pcVar1 = (code *)*param_3;
            lVar7 = 0;
            if (iVar5 - iVar12 != 0) {
              uVar6 = (longlong)(iVar5 - iVar12);
              do {
                uVar19 = uVar6 >> 1;
                cVar3 = (*pcVar1)(*(undefined8 *)(lVar10 + (longlong)iVar5 * 8),
                                  *(undefined8 *)(lVar10 + (uVar19 + lVar7 + (longlong)iVar12) * 8))
                ;
                if (cVar3 == '\0') {
                  lVar7 = (ulonglong)((uint)uVar6 & 1) + uVar19 + lVar7;
                }
                uVar6 = uVar19;
              } while (uVar19 != 0);
            }
            iVar12 = iVar12 + (int)lVar7;
            if (iVar5 <= iVar12) break;
            pcVar1 = (code *)*param_3;
            uVar6 = 0;
            uVar19 = (ulonglong)(iVar8 - iVar5);
            if (iVar8 - iVar5 != 0) {
              do {
                uVar20 = uVar19 >> 1;
                cVar3 = (*pcVar1)(*(undefined8 *)(lVar10 + (uVar20 + uVar6 + (longlong)iVar5) * 8),
                                  *(undefined8 *)(lVar10 + (longlong)iVar12 * 8));
                if (cVar3 != '\0') {
                  uVar6 = (ulonglong)((uint)uVar19 & 1) + uVar20 + uVar6;
                }
                uVar19 = uVar20;
              } while (uVar20 != 0);
            }
            iVar13 = (int)uVar6;
            if (iVar13 != 0) {
              iVar18 = (iVar13 - iVar12) + iVar5;
              uVar6 = uVar6 & 0xffffffff;
              iVar16 = iVar18;
              do {
                iVar4 = (int)uVar6;
                uVar9 = iVar16 % iVar4;
                uVar6 = (ulonglong)uVar9;
                iVar16 = iVar4;
              } while (uVar9 != 0);
              uVar6 = 0;
              if (0 < iVar4) {
                puVar11 = (undefined8 *)(lVar10 + (longlong)iVar12 * 8);
                do {
                  uVar17 = *puVar11;
                  iVar16 = (int)uVar6;
                  uVar19 = (longlong)iVar18 / (longlong)iVar4 & 0xffffffff;
                  if (0 < (int)((longlong)iVar18 / (longlong)iVar4)) {
                    do {
                      uVar20 = (longlong)((int)uVar6 + iVar13) % (longlong)iVar18;
                      uVar6 = uVar20 & 0xffffffff;
                      lVar7 = (longlong)((int)uVar20 + iVar12);
                      uVar2 = *(undefined8 *)(lVar10 + lVar7 * 8);
                      *(undefined8 *)(lVar10 + lVar7 * 8) = uVar17;
                      uVar19 = uVar19 - 1;
                      uVar17 = uVar2;
                    } while (uVar19 != 0);
                  }
                  uVar9 = iVar16 + 1;
                  uVar6 = (ulonglong)uVar9;
                  puVar11 = puVar11 + 1;
                } while ((int)uVar9 < iVar4);
              }
            }
            iVar5 = iVar5 + iVar13;
            iVar12 = iVar12 + 1 + iVar13;
          } while (iVar12 < iVar5);
          uVar6 = (ulonglong)param_2;
        }
        local_84 = local_84 + local_80 * 2;
        local_70 = local_70 + (longlong)local_80 * 2;
        lVar10 = lVar10 + (longlong)local_80 * 0x10;
      } while (local_70 < (longlong)uVar14);
      local_80 = iVar15;
    } while (iVar15 < (int)uVar6);
  }
  return;
}



// FUNCTION 1406a4be0 TFunction<void___cdecl(void)> body=112 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar2 = param_2 + 2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      plVar1 = (longlong *)(**(code **)*puVar2)(puVar2,param_1 + 2);
      (**(code **)(*plVar1 + 8))(plVar1);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = FUN_1406a5e50;
  return param_1;
}



// FUNCTION 1406a4c50 TFunction<void___cdecl(void)> body=112 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar2 = param_2 + 2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      plVar1 = (longlong *)(**(code **)*puVar2)(puVar2,param_1 + 2);
      (**(code **)(*plVar1 + 8))(plVar1);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = AK::MemoryMgr::StartProfileThreadUsage;
  return param_1;
}



// FUNCTION 1406a4cc0 TFunction<void___cdecl(void)> body=185 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2[6] == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 2,param_2 + 2,0x20);
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar2 = param_1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      pcVar1 = (code *)*param_2;
      goto LAB_1406a4d55;
    }
  }
  pcVar1 = AK::MemoryMgr::StartProfileThreadUsage;
LAB_1406a4d55:
  *param_1 = pcVar1;
  *param_2 = AK::MemoryMgr::StartProfileThreadUsage;
  return param_1;
}



// FUNCTION 1406a4d80 TFunction_OwnedObject<<lambda_d213c40c6aec10eec73045c906234e77>_> body=124 status=ok
// SIG undefined TFunction_OwnedObject<<lambda_d213c40c6aec10eec73045c906234e77>_>(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_d213c40c6aec10eec73045c906234e77>_>::
TFunction_OwnedObject<<lambda_d213c40c6aec10eec73045c906234e77>_>
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_144045b08;
  param_1[1] = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[2],_Src,(longlong)iVar1 * 0x30);
  }
  return param_1;
}



// FUNCTION 1406a4e00 FUN_1406a4e00 body=340 status=ok
// SIG undefined FUN_1406a4e00(void)

longlong *
FUN_1406a4e00(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined1 param_5,longlong param_6,undefined1 param_7)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(undefined1 *)((longlong)param_1 + 0x14) = param_5;
  *param_1 = (longlong)param_2;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = param_7;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(param_1 + 10,param_4);
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(param_1 + 0x14,param_6);
  if ((int)param_1[0x1c] == 0) {
LAB_1406a4e85:
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    plVar2 = (longlong *)0x0;
    if (param_1[0x1a] == 0) {
      plVar2 = param_1 + 0x16;
    }
    if (plVar2 == (longlong *)0x0 && param_1[0x1a] == 0) goto LAB_1406a4e85;
  }
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1406a4ec6;
  }
  param_2 = (longlong *)0x0;
LAB_1406a4ec6:
  param_1[3] = (longlong)param_2;
  *(int *)(param_1 + 4) = DAT_146857f30;
  DAT_146857f30 = DAT_146857f30 + 1;
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_4 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_6 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_6 + 0x30);
    if (*(longlong **)(param_6 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_6 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_6 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1406a4f60 FUN_1406a4f60 body=427 status=ok
// SIG undefined FUN_1406a4f60(void)

longlong FUN_1406a4f60(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  plVar2 = (longlong *)thunk_FUN_1424a1420();
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = param_1;
    *plVar3 = (longlong)&PTR_GetPoolName_1440455f8;
    plVar3[2] = (longlong)FUN_1406a8880;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144045640;
  }
  if (local_18 != plVar2) {
    if (plVar3 == (longlong *)0x0) {
      if (((int)plVar2[1] != 0) && (plVar1 = (longlong *)*plVar2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(plVar2 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar2);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  plVar2 = (longlong *)FUN_1424a5520();
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = param_1;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_1406a9460;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (local_18 != plVar2) {
    if (plVar3 == (longlong *)0x0) {
      if (((int)plVar2[1] != 0) && (plVar1 = (longlong *)*plVar2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(plVar2 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar2);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return param_1;
}



// FUNCTION 1406a5110 FUN_1406a5110 body=533 status=ok
// SIG undefined FUN_1406a5110(void)

undefined8 * FUN_1406a5110(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong *local_38;
  int local_30;
  undefined4 uStack_2c;
  longlong *local_20;
  undefined1 local_18 [16];
  
  FUN_1417818c0();
  *param_1 = &PTR_FUN_1440456b0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FSoftObjectPath::FSoftObjectPath(&local_38,param_1[2]);
  local_20 = local_38;
  FString::FString(local_18,&local_30);
  FSoftObjectPath::operator=(param_1 + 0x23,&local_20);
  if (CONCAT44(uStack_2c,local_30) != 0) {
    FMemory::Free();
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb | 3;
  DAT_146857f34 = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  if ((DAT_146b17150 != 0) && ((*(uint *)(param_1 + 1) >> 4 & 1) == 0)) {
    lVar1 = DAT_146b17150 + 0xba8;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_30 = 3;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f4d290;
      local_38 = plVar2;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      plVar2[2] = (longlong)FUN_1406a6c20;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f4d2d8;
      FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(lVar1,local_res8,&local_38);
      plVar2 = local_38;
      if (local_30 != 0) {
        if (local_38 == (longlong *)0x0) {
          return param_1;
        }
        (**(code **)(*local_38 + 0x28))(local_38,0);
        plVar2 = (longlong *)FMemory::Realloc(plVar2,0,0);
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1406a5330 ~TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_> body=95 status=ok
// SIG undefined ~TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>(void)

void TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>::
     ~TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
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



// FUNCTION 1406a5390 FUN_1406a5390 body=473 status=ok
// SIG undefined FUN_1406a5390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406a5390(undefined8 *param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  longlong local_50 [4];
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_1440456b0;
  DAT_146857f34 = 1;
  if (param_1[0xb] != 0) {
    puVar1 = (ulonglong *)(param_1[0xb] + 8);
    LOCK();
    uVar6 = *puVar1;
    if (uVar6 == 0) {
      *puVar1 = 0;
      uVar6 = 0;
    }
    UNLOCK();
    if ((uVar6 >> 0x1a & 1) == 0) {
      plVar7 = (longlong *)FTaskGraphInterface::Get();
      local_30 = (longlong *)0x0;
      local_28 = 1;
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_50,0);
      lVar5 = param_1[0xb];
      plVar8 = local_50;
      if (local_30 != (longlong *)0x0) {
        plVar8 = local_30;
      }
      *plVar8 = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar7 + 0x48))(plVar7,local_50,0xff);
      plVar8 = local_50;
      iVar4 = (int)local_28;
      if (local_30 != (longlong *)0x0) {
        plVar8 = local_30;
      }
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*plVar8 != 0) {
          LOCK();
          piVar2 = (int *)(*plVar8 + 0x48);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar8 = plVar8 + 1;
      }
      if (local_30 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TArray<double,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,TArray<double,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf);
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    LOCK();
    piVar2 = (int *)(param_1[0xb] + 0x48);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FGraphEvent::Recycle();
    }
  }
  TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>::
  ~TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>(param_1 + 9);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1406a5570 FUN_1406a5570 body=578 status=ok
// SIG undefined FUN_1406a5570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406a5570(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined1 *local_170;
  undefined *local_168;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [12];
  undefined4 local_13c;
  undefined1 local_b8 [72];
  longlong local_70;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if (DAT_146857f34 == '\0') {
    plVar1 = (longlong *)*param_1;
    lVar2 = param_1[1];
    lVar3 = param_1[2];
    uVar5 = (**(code **)(*plVar1 + 0x148))(plVar1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146857f90) &&
       (_Init_thread_header(&DAT_146857f90), DAT_146857f90 == -1)) {
      FName::FName(&DAT_146857f88,L"SignificanceTrace",1);
      _Init_thread_footer(&DAT_146857f90);
    }
    local_178 = 0;
    FUN_1422ffb20(local_b8,DAT_146857f88,local_158,0);
    lVar7 = plVar1[9];
    lVar8 = (longlong)(int)plVar1[10] * 0x30 + lVar7;
    if (lVar7 != lVar8) {
      do {
        *(undefined1 *)(lVar7 + 8) = 1;
        for (lVar6 = lVar2; lVar6 != (longlong)(int)lVar3 * 0x30 + lVar2; lVar6 = lVar6 + 0x30) {
          _guard_xfg_dispatch_icall_nop(local_148,0,0x90);
          local_154 = *(undefined4 *)(lVar6 + 0x10);
          local_150 = *(undefined4 *)(lVar6 + 0x14);
          local_14c = *(undefined4 *)(lVar6 + 0x18);
          local_170 = local_b8;
          local_168 = &DAT_146aefe68;
          local_13c = 0x3f800000;
          local_178 = CONCAT44(local_178._4_4_,3);
          cVar4 = UWorld::LineTraceSingleByChannel(uVar5,local_148,&local_154,lVar7 + 0x20);
          if (cVar4 == '\0') {
            *(undefined1 *)(lVar7 + 8) = 0;
            break;
          }
        }
        lVar7 = lVar7 + 0x30;
      } while (lVar7 != lVar8);
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
    if (local_70 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406a57c0 FUN_1406a57c0 body=72 status=ok
// SIG undefined FUN_1406a57c0(void)

undefined8 * FUN_1406a57c0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1406a5810 FUN_1406a5810 body=97 status=ok
// SIG undefined FUN_1406a5810(void)

undefined8 * FUN_1406a5810(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144045690;
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



// FUNCTION 1406a5880 FUN_1406a5880 body=183 status=ok
// SIG undefined FUN_1406a5880(void)

longlong FUN_1406a5880(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar1 = *(longlong **)(param_1 + 0xd0);
    if (*(longlong **)(param_1 + 0xd0) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0xb0);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x80);
    if (*(longlong **)(param_1 + 0x80) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x60);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1406a5940 FUN_1406a5940 body=52 status=ok
// SIG undefined FUN_1406a5940(void)

undefined8 FUN_1406a5940(undefined8 param_1,ulonglong param_2)

{
  FUN_1406a5390();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 1406a5980 AddInternal body=282 status=ok
// SIG undefined AddInternal(void)

undefined8 *
FMulticastDelegateBase<FWeakObjectPtr>::AddInternal
          (longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  
  uVar7 = 0;
  if (*(int *)((longlong)param_1 + 0x14) < 1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    iVar1 = (int)param_1[1];
    if ((int)param_1[2] <= iVar1) {
      uVar8 = uVar7;
      iVar6 = iVar1;
      if (0 < iVar1) {
        do {
          if (((*(int *)(uVar7 + 8 + *param_1) == 0) ||
              (plVar5 = *(longlong **)(uVar7 + *param_1), plVar5 == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(*plVar5 + 0x10))(), cVar2 != '\0')) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(param_1,uVar8,1,1);
          }
          else {
            uVar8 = (ulonglong)((int)uVar8 + 1);
            uVar7 = uVar7 + 0x10;
          }
          iVar6 = (int)param_1[1];
        } while ((int)uVar8 < iVar6);
      }
      iVar3 = iVar6 * 2;
      if (iVar3 < 3) {
        iVar3 = 2;
      }
      *(int *)(param_1 + 2) = iVar3;
      if ((iVar3 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar6)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1);
      }
    }
  }
  *param_2 = 0;
  if (((int)param_3[1] != 0) && (plVar5 = (longlong *)*param_3, plVar5 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
    *param_2 = *puVar4;
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  plVar5 = (longlong *)((longlong)iVar1 * 0x10 + *param_1);
  *plVar5 = 0;
  *plVar5 = *param_3;
  *param_3 = 0;
  *(int *)(plVar5 + 1) = (int)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  return param_2;
}



// FUNCTION 1406a5aa0 FUN_1406a5aa0 body=241 status=ok
// SIG undefined FUN_1406a5aa0(void)

void FUN_1406a5aa0(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar1 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find();
  if (iVar1 == -1) {
    iVar1 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    puVar4 = (undefined4 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(param_2 + 2);
  }
  iVar1 = (int)param_1[1];
  uVar6 = 0;
  if (0 < iVar1) {
    uVar7 = uVar6;
    do {
      iVar5 = (int)uVar6;
      if (*(longlong *)(*param_1 + uVar7 + 8) == 0) {
LAB_1406a5b2e:
        iVar3 = (iVar1 - iVar5) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar5 * 0x10 + *param_1),
                     (void *)((longlong)(iVar1 - iVar3) * 0x10 + *param_1),(longlong)iVar3 << 4);
          iVar1 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar1 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
      }
      else {
        lVar2 = FWeakObjectPtr::Get(*param_1 + uVar7,1);
        if (lVar2 == 0) {
          iVar1 = (int)param_1[1];
          goto LAB_1406a5b2e;
        }
        uVar6 = (ulonglong)(iVar5 + 1);
        uVar7 = uVar7 + 0x10;
      }
      iVar1 = (int)param_1[1];
    } while ((int)uVar6 < iVar1);
  }
  return;
}



// FUNCTION 1406a5ba0 FUN_1406a5ba0 body=687 status=ok
// SIG undefined FUN_1406a5ba0(void)

void FUN_1406a5ba0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
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
  
  FUN_1417502d0();
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 200);
  local_88 = 0;
  uVar3 = *(uint *)(param_1 + 0xf0);
  puVar1 = (uint *)(param_1 + 0xd8);
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0xe8);
    if (*(uint **)(param_1 + 0xe8) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar9 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar9;
      if (bVar5) goto LAB_1406a5c7a;
      uVar4 = puVar11[lVar8 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar9 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (iStack_70 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1406a5c7a:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xf0);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0xe8);
    if (*(uint **)(param_1 + 0xe8) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar7 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar9 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1406a5d42;
      uVar7 = puVar11[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (uVar10 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1406a5d42:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    lVar8 = *(longlong *)(*plVar2 + 8 + (longlong)(int)uStack_4c * 0x18);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0xe0) != 0) {
        plVar6 = *(longlong **)(lVar8 + 0xd0);
        if (*(longlong **)(lVar8 + 0xd0) == (longlong *)0x0) {
          plVar6 = (longlong *)(lVar8 + 0xb0);
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (*(longlong *)(lVar8 + 0xd0) != 0) {
        FMemory::Free();
      }
      if (*(int *)(lVar8 + 0x90) != 0) {
        plVar6 = *(longlong **)(lVar8 + 0x80);
        if (*(longlong **)(lVar8 + 0x80) == (longlong *)0x0) {
          plVar6 = (longlong *)(lVar8 + 0x60);
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (*(longlong *)(lVar8 + 0x80) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar8 + 0x28) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(lVar8,0xf0);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(plVar2);
  TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x78);
  return;
}



// FUNCTION 1406a5e50 FUN_1406a5e50 body=5 status=ok
// SIG undefined FUN_1406a5e50(void)

undefined4 FUN_1406a5e50(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 1406a5ee0 FUN_1406a5ee0 body=13 status=ok
// SIG undefined FUN_1406a5ee0(void)

bool FUN_1406a5ee0(longlong param_1,longlong param_2)

{
  return *(float *)(param_1 + 0x10) < *(float *)(param_2 + 0x10);
}



// FUNCTION 1406a5ef0 FUN_1406a5ef0 body=13 status=ok
// SIG undefined FUN_1406a5ef0(void)

bool FUN_1406a5ef0(longlong param_1,longlong param_2)

{
  return *(float *)(param_2 + 0x10) < *(float *)(param_1 + 0x10);
}



// FUNCTION 1406a5f00 FUN_1406a5f00 body=47 status=ok
// SIG undefined FUN_1406a5f00(void)

void FUN_1406a5f00(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140438ef0(0x20);
  if (lVar1 != 0) {
    UE4Function_Private::TFunction_OwnedObject<<lambda_d213c40c6aec10eec73045c906234e77>_>::
    TFunction_OwnedObject<<lambda_d213c40c6aec10eec73045c906234e77>_>(lVar1,param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 1406a5f30 FUN_1406a5f30 body=453 status=ok
// SIG undefined FUN_1406a5f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1406a5f30(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [24];
  undefined1 local_b8 [80];
  longlong local_68 [4];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_40 = 1;
  local_48 = (longlong *)0x0;
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_68,0);
  plVar9 = local_68;
  if (local_48 != (longlong *)0x0) {
    plVar9 = local_48;
  }
  lVar3 = *param_4;
  *plVar9 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
  }
  lVar8 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,param_2);
  plVar9 = (longlong *)FUN_140596960(local_d0,local_68,0xff);
  lVar3 = *plVar9;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar3 + 0x10,lVar8);
  *(undefined4 *)(lVar3 + 0x60) = param_5;
  lVar3 = *plVar9;
  lVar7 = plVar9[2];
  lVar4 = plVar9[1];
  lVar5 = *(longlong *)(lVar3 + 0x78);
  *param_1 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  FUN_1405ab110(lVar3,lVar4,(int)lVar7,1);
  if (*(int *)(lVar8 + 0x40) != 0) {
    plVar9 = *(longlong **)(lVar8 + 0x30);
    if (*(longlong **)(lVar8 + 0x30) == (longlong *)0x0) {
      plVar9 = (longlong *)(lVar8 + 0x10);
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (*(longlong *)(lVar8 + 0x30) != 0) {
    FMemory::Free();
  }
  plVar9 = local_68;
  iVar6 = (int)local_40;
  if (local_48 != (longlong *)0x0) {
    plVar9 = local_48;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar9 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar9 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar9 = plVar9 + 1;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar9 = (longlong *)(param_2 + 0x10);
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1406a6100 FUN_1406a6100 body=66 status=ok
// SIG undefined FUN_1406a6100(void)

void FUN_1406a6100(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144045a78;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144045ac0;
  }
  return;
}



// FUNCTION 1406a6150 FUN_1406a6150 body=66 status=ok
// SIG undefined FUN_1406a6150(void)

void FUN_1406a6150(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144045958;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1440459a0;
  }
  return;
}



// FUNCTION 1406a61a0 FUN_1406a61a0 body=66 status=ok
// SIG undefined FUN_1406a61a0(void)

void FUN_1406a61a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1440459e8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144045a30;
  }
  return;
}



// FUNCTION 1406a61f0 FUN_1406a61f0 body=332 status=ok
// SIG undefined FUN_1406a61f0(void)

undefined8 * FUN_1406a61f0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144045690;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1406a6340 FUN_1406a6340 body=48 status=ok
// SIG undefined FUN_1406a6340(void)

void FUN_1406a6340(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1415b5910(*(undefined8 *)(lVar1 + 0x20));
    FMemory::operator_delete(lVar1,0x38);
    return;
  }
  return;
}



// FUNCTION 1406a6370 Execute body=55 status=ok
// SIG undefined Execute(void)

void TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&)>
     ::Execute(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001406a63a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 1406a63e0 ExecuteIfSafe body=62 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseStaticDelegateInstance<void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&)>
::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,param_5,param_6);
  return 1;
}



// FUNCTION 1406a6420 FUN_1406a6420 body=27 status=ok
// SIG undefined FUN_1406a6420(void)

undefined8 FUN_1406a6420(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(param_1 + 8))(param_2,param_3);
  return 1;
}



// FUNCTION 1406a6440 FUN_1406a6440 body=35 status=ok
// SIG undefined FUN_1406a6440(void)

undefined8 FUN_1406a6440(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  (**(code **)(param_1 + 8))(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 1406a6470 ExecuteTask body=319 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FParallelForTask>::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  cVar4 = FUN_1406a8040(param_1[2],*(undefined4 *)(param_1 + 4),param_1 + 2,0);
  if (cVar4 != '\0') {
    *(undefined1 *)(param_1[2] + 0x31) = 1;
    (**(code **)(**(longlong **)(param_1[2] + 0x20) + 0x10))();
  }
  plVar8 = (longlong *)param_1[3];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144045690;
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
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar8 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    plVar6 = plVar8;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      plVar6 = plVar7;
    }
    TlsSetValue(*pDVar5,plVar6);
  }
  if ((int)plVar6[2] < 0x20) {
    plVar8 = (longlong *)plVar6[1];
  }
  else {
    if (*plVar6 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar5 + 2);
    }
    *plVar6 = plVar6[1];
    plVar6[1] = 0;
    *(undefined4 *)(plVar6 + 2) = 0;
  }
  *param_1 = plVar8;
  *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
  plVar6[1] = (longlong)param_1;
  return;
}



// FUNCTION 1406a65b0 Find body=142 status=ok
// SIG undefined Find(void)

ulonglong TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find
                    (undefined8 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  
  piVar2 = (int *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  piVar4 = piVar2;
  while( true ) {
    if (piVar4 == piVar2 + (longlong)iVar1 * 4) {
      return 0xffffffff;
    }
    if ((((*piVar4 == *param_2) && (piVar4[1] == param_2[1])) ||
        ((cVar3 = FWeakObjectPtr::IsValid(piVar4), cVar3 == '\0' &&
         (cVar3 = FWeakObjectPtr::IsValid(param_2), cVar3 == '\0')))) &&
       (*(longlong *)(piVar4 + 2) == *(longlong *)(param_2 + 2))) break;
    piVar4 = piVar4 + 4;
  }
  return (longlong)piVar4 - (longlong)piVar2 >> 4 & 0xffffffff;
}



// FUNCTION 1406a6640 FUN_1406a6640 body=460 status=ok
// SIG undefined FUN_1406a6640(void)

void FUN_1406a6640(longlong param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_68;
  float fStack_64;
  float local_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x168);
    if (lVar1 == 0) {
      local_68 = DAT_1468b5d90;
      fStack_64 = DAT_1468b5d94;
      local_60 = DAT_1468b5d98;
    }
    else {
      local_68 = *(float *)(lVar1 + 0x220);
      fStack_64 = *(float *)(lVar1 + 0x224);
      local_60 = *(float *)(lVar1 + 0x228);
    }
    fVar8 = local_68 - (float)param_2[4];
    fVar6 = fStack_64 - (float)param_2[5];
    fVar10 = local_60 - (float)param_2[6];
    fVar3 = fVar6 * fVar6 + fVar8 * fVar8 + fVar10 * fVar10;
    *param_3 = SQRT(fVar3);
    fVar7 = fVar6;
    fVar9 = fVar8;
    fVar4 = fVar10;
    if ((fVar3 != 1.0) &&
       (fVar7 = DAT_1468b5d94, fVar9 = DAT_1468b5d90, fVar4 = DAT_1468b5d98, 1e-08 <= fVar3)) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar7 = fVar6 * fVar4;
      fVar9 = fVar8 * fVar4;
      fVar4 = fVar10 * fVar4;
    }
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FQuat::Rotator(&local_48,&local_68);
    pfVar2 = (float *)FRotator::Vector(&local_68,local_58);
    *param_4 = fVar7 * pfVar2[1] + fVar9 * *pfVar2 + fVar4 * pfVar2[2];
  }
  return;
}



// FUNCTION 1406a6810 FUN_1406a6810 body=89 status=ok
// SIG undefined FUN_1406a6810(void)

undefined8 FUN_1406a6810(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [8];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 200),local_res8);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 200) + (longlong)local_res8[0] * 0x18);
  }
  puVar1 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar1;
}



// FUNCTION 1406a6870 FUN_1406a6870 body=250 status=ok
// SIG undefined FUN_1406a6870(void)

longlong * FUN_1406a6870(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      lVar2 = param_1 + 0xb0;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0xc0) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x78));
        if (*plVar4 == param_2) {
          if (iVar1 != -1) goto LAB_1406a68f2;
          break;
        }
        iVar1 = (int)plVar4[3];
      } while (iVar1 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1406a68f2:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146857f80) &&
       (_Init_thread_header(&DAT_146857f80), DAT_146857f80 == -1)) {
      atexit((_func_5014 *)&LAB_143e40d70);
      _Init_thread_footer(&DAT_146857f80);
      return &DAT_146857f70;
    }
    plVar3 = &DAT_146857f70;
  }
  return plVar3;
}



// FUNCTION 1406a6970 FUN_1406a6970 body=682 status=ok
// SIG undefined FUN_1406a6970(void)

void FUN_1406a6970(longlong param_1,longlong *param_2,char param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  code *pcVar12;
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
  
  if (*(int *)((longlong)param_2 + 0xc) < *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xfc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  plVar2 = (longlong *)(param_1 + 0x78);
  uStack_94 = 1;
  uVar3 = *(uint *)(param_1 + 0xa0);
  puVar1 = (uint *)(param_1 + 0x88);
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar5) goto LAB_1406a6a6c;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (iStack_80 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1406a6a6c:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xa0);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1406a6b32;
      uVar8 = puVar11[(longlong)iVar7 + 1];
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
    uStack_84 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1406a6b32:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    lVar9 = (longlong)(int)uStack_5c * 0x20 + *plVar2;
    iVar7 = *(int *)(lVar9 + 0x10);
    if (iVar7 != 0) {
      iVar6 = (int)param_2[1];
      if (*(int *)((longlong)param_2 + 0xc) < iVar6 + iVar7) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
        iVar6 = (int)param_2[1];
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_2 + (longlong)iVar6 * 8),*(void **)(lVar9 + 8),(longlong)iVar7 << 3
                );
      *(int *)(param_2 + 1) = (int)param_2[1] + iVar7;
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  if (param_3 != '\0') {
    pcVar12 = FUN_1406a5ef0;
    if ((*(uint *)(param_1 + 0x60) >> 2 & 1) != 0) {
      pcVar12 = FUN_1406a5ee0;
    }
    AlgoImpl::
    IntroSortInternal<USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
              (*param_2,(longlong)(int)param_2[1],param_3,pcVar12);
  }
  return;
}



// FUNCTION 1406a6c20 FUN_1406a6c20 body=968 status=ok
// SIG undefined FUN_1406a6c20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406a6c20(longlong *param_1,longlong param_2)

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
  int *piVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  uint local_a0 [2];
  longlong local_98;
  longlong local_90;
  int local_88;
  int local_80;
  char local_7c;
  int local_78;
  longlong local_70;
  longlong local_68;
  int local_60;
  undefined8 local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b8 = param_1;
  local_b0 = param_2;
  lVar8 = (**(code **)(*param_1 + 0x148))();
  if (lVar8 == param_2) {
    local_c8 = (longlong *)FUN_1428dfc70();
    local_a0[0] = 5;
    local_48 = '\0';
    local_a8 = param_2;
    FUN_14044bc80(&local_98,&local_a8,&local_c8);
    FUN_14045a130(local_a0);
    if (local_7c == '\0') {
LAB_1406a6cd0:
      FUN_1406a8690(param_1,local_70);
      lVar8 = local_98;
      iVar18 = local_80 + 1;
      if (iVar18 < local_60 + local_88) {
        lVar17 = (longlong)iVar18 * 8;
        iVar16 = local_60;
        iVar13 = local_88;
        do {
          if (iVar18 < iVar13) {
            lVar15 = *(longlong *)(local_90 + lVar17);
          }
          else {
            lVar15 = *(longlong *)(local_68 + (longlong)(iVar18 - iVar13) * 8);
          }
          local_78 = local_78 + 1;
          if ((lVar15 != 0) &&
             (lVar9 = AActor::GetLevel(lVar15), iVar16 = local_60, iVar13 = local_88, lVar9 != 0)) {
            if ((local_a0[0] & 1) != 0) {
              iVar1 = *(int *)(lVar15 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar14 = iVar1 >> 0x1f & 0xffff;
                uVar7 = iVar1 + uVar14;
                lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                         (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
              }
              else {
                lVar10 = 0;
              }
              if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_1406a6e7a;
            }
            if (((local_a0[0] >> 1 & 1) == 0) ||
               (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar15), iVar16 = local_60,
               iVar13 = local_88, cVar6 != '\0')) {
              if ((local_a0[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                piVar2 = *(int **)(lVar9 + 600);
                if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                    (piVar11 = (int *)UWorld::GetActiveLevelCollection(), piVar11 == (int *)0x0)) ||
                   (piVar2 == piVar11)) {
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
                iVar16 = local_60;
                iVar13 = local_88;
                if ((!bVar5) || (!bVar3)) goto LAB_1406a6e7a;
              }
              lVar9 = ULevel::GetWorld(lVar9);
              iVar16 = local_60;
              iVar13 = local_88;
              if (lVar9 == lVar8) {
                lVar9 = AActor::GetLevel(lVar15);
                if (lVar9 == *(longlong *)(lVar8 + 0x30)) goto LAB_1406a6fa4;
                lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                iVar16 = local_60;
                iVar13 = local_88;
                if (!bVar5) goto LAB_1406a6fa4;
              }
            }
          }
LAB_1406a6e7a:
          iVar18 = iVar18 + 1;
          lVar17 = lVar17 + 8;
          if (iVar16 + iVar13 <= iVar18) break;
        } while( true );
      }
      local_70 = 0;
      local_7c = '\x01';
      param_2 = local_b0;
      param_1 = local_b8;
    }
LAB_1406a6ec2:
    if (local_48 != '\0') {
      local_48 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_98,local_50);
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_90 != 0) {
        FMemory::Free();
      }
    }
    local_c8 = (longlong *)0x0;
    plVar12 = (longlong *)FMemory::Realloc(0,0x30);
    local_c0 = 3;
    local_c8 = plVar12;
    if (plVar12 != (longlong *)0x0) {
      *plVar12 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar12 + 1,param_1);
      plVar12[2] = (longlong)FUN_1406a8690;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar12[4] = lVar8;
      *plVar12 = (longlong)&PTR_FUN_143f4d2d8;
    }
    UWorld::AddOnActorSpawnedHandler(param_2,&local_a8,&local_c8);
    if (local_c0 != 0) {
      if (local_c8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_c8 + 0x28))(local_c8,0);
      if (local_c8 != (longlong *)0x0) {
        local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
      }
      local_c0 = 0;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  return;
LAB_1406a6fa4:
  param_2 = local_b0;
  param_1 = local_b8;
  local_80 = iVar18;
  local_70 = lVar15;
  if (local_7c != '\0') goto LAB_1406a6ec2;
  goto LAB_1406a6cd0;
}



// FUNCTION 1406a6ff0 FUN_1406a6ff0 body=320 status=ok
// SIG undefined FUN_1406a6ff0(void)

undefined8 * FUN_1406a6ff0(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  puVar3 = (undefined8 *)operator_new(0x18);
  lVar7 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[2] = 0;
    *puVar3 = FDefaultModuleImpl::vftable;
    puVar3[1] = &PTR__scalar_deleting_destructor__143f73ca8;
    *(undefined1 *)(puVar3 + 2) = 0;
    if (DAT_1468c217e == '\0') {
      if (DAT_1469e6880 == 0) {
        uVar4 = GetTransientPackage();
        FUN_1417846f0(uVar4,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar5 = UGCObjectReferencer::GetPrivateStaticClass();
        DAT_1469e6880 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
        iVar1 = *(int *)(DAT_1469e6880 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar6 = iVar1 >> 0x1f & 0xffff;
          uVar2 = iVar1 + uVar6;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
        }
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x40000000;
      }
      UGCObjectReferencer::AddObject(DAT_1469e6880,puVar3 + 1);
      *(undefined1 *)(puVar3 + 2) = 1;
    }
    *puVar3 = &PTR__scalar_deleting_destructor__1440455a0;
    puVar3[1] = &PTR_LAB_1440455e0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1406a7130 FUN_1406a7130 body=323 status=ok
// SIG undefined FUN_1406a7130(void)

undefined8
FUN_1406a7130(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined1 param_5,longlong param_6,undefined1 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_c8 [80];
  undefined1 local_78 [80];
  
  lVar1 = operator_new(0xf0);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,param_6);
    uVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_4);
    uVar2 = FUN_1406a4e00(lVar1,param_2,param_3,uVar3,param_5,uVar2,param_7);
  }
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar4 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_4 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_6 + 0x40) != 0) {
    plVar4 = *(longlong **)(param_6 + 0x30);
    if (*(longlong **)(param_6 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_6 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(param_6 + 0x30) != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 1406a7280 FUN_1406a7280 body=289 status=ok
// SIG undefined FUN_1406a7280(void)

void FUN_1406a7280(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int local_res10 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146857f68) {
    _Init_thread_header(&DAT_146857f68);
    if (DAT_146857f68 == -1) {
      FName::FName(&DAT_146857f60,"SignificanceManager",1);
      _Init_thread_footer(&DAT_146857f68);
    }
  }
  if (param_2 != 0) {
    cVar2 = (**(code **)(*param_1 + 0x740))(param_1,&DAT_146857f60);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_14622c9a0,local_res10,uVar3);
      if (((local_res10[0] != -1) &&
          (lVar1 = DAT_14622c9a0 + (longlong)local_res10[0] * 0x18, lVar1 != 0)) &&
         (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
        FUN_1406a73b0(lVar1,param_1,param_2,param_3,param_4,param_5);
      }
    }
  }
  return;
}



// FUNCTION 1406a73b0 FUN_1406a73b0 body=1203 status=ok
// SIG undefined FUN_1406a73b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406a73b0(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  undefined8 local_a8;
  int local_a0;
  int iStack_9c;
  longlong local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  longlong local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  while( true ) {
    if ((*(int *)(lVar2 + 0x38) < DAT_146857fa0) &&
       (_Init_thread_header(&DAT_146857fa0), DAT_146857fa0 == -1)) {
      FName::FName(&DAT_146857f98,"SignificanceManager",1);
      _Init_thread_footer(&DAT_146857fa0);
    }
    if (param_3 == 0) {
      return;
    }
    cVar3 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146857f98);
    if (cVar3 == '\0') {
      return;
    }
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) break;
    uVar5 = (**(code **)(*param_2 + 0x148))(param_2);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14622c9a0,&local_a8,uVar5);
    if ((int)local_a8 == -1) {
      return;
    }
    lVar1 = DAT_14622c9a0 + (longlong)(int)local_a8 * 0x18;
    if (lVar1 == 0) {
      return;
    }
    param_1 = *(longlong **)(lVar1 + 8);
    if (param_1 == (longlong *)0x0) {
      return;
    }
  }
  lVar1 = param_3 + 0x98;
  lVar6 = UEngine::GetSmallFont();
  if ((lVar6 != 0) && (lVar6 != *(longlong *)(param_3 + 0x1e0))) {
    *(longlong *)(param_3 + 0x1e0) = lVar6;
    uVar14 = FUN_14244fa00(lVar6);
    *(undefined4 *)(param_3 + 0x24c) = uVar14;
  }
  FDisplayDebugManager::SetDrawColor(lVar1,&DAT_1464aa738);
  local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
  FString::PrintfImpl(&local_90,L"SIGNIFICANCE MANAGER - %d Managed Objects",
                      (int)param_1[0x1a] - *(int *)((longlong)param_1 + 0xfc));
  FUN_1428a6fb0(lVar1,&local_90,&local_a8);
  if (local_90 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar7 = (undefined8 *)(**(code **)(*DAT_146857f58 + 0x78))(DAT_146857f58,local_80 + 2);
  if (*(int *)(puVar7 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*puVar7;
  }
  FName::FName(&local_a0,puVar13,1);
  if (local_80[2] != 0) {
    FMemory::Free();
  }
  lVar6 = CONCAT44(iStack_9c,local_a0);
  plVar8 = (longlong *)0x0;
  local_80[0] = 0;
  local_80[1] = 0;
  if ((local_a0 == 0) && (iStack_9c == 0)) {
    plVar11 = local_80;
  }
  else {
    if ((int)param_1[0x10] != *(int *)((longlong)param_1 + 0xac)) {
      plVar9 = (longlong *)param_1[0x17];
      if ((longlong *)param_1[0x17] == (longlong *)0x0) {
        plVar9 = param_1 + 0x16;
      }
      iVar4 = *(int *)((longlong)plVar9 +
                      ((longlong)(iStack_9c + local_a0) & (longlong)(int)param_1[0x18] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          plVar9 = (longlong *)((longlong)iVar4 * 0x20 + param_1[0xf]);
          if (*plVar9 == lVar6) {
            if (iVar4 != -1) goto LAB_1406a7602;
            break;
          }
          iVar4 = (int)plVar9[3];
        } while (iVar4 != -1);
      }
    }
    plVar9 = plVar8;
LAB_1406a7602:
    plVar11 = plVar9 + 1;
    if (plVar9 == (longlong *)0x0) {
      plVar11 = plVar8;
    }
    if (plVar11 == (longlong *)0x0) {
      if (*(int *)(lVar2 + 0x38) < DAT_146857f80) {
        _Init_thread_header(&DAT_146857f80);
        if (DAT_146857f80 == -1) {
          DAT_146857f70 = 0;
          _DAT_146857f78 = 0;
          atexit((_func_5014 *)&LAB_143e40d70);
          _Init_thread_footer(&DAT_146857f80);
        }
        lVar6 = CONCAT44(iStack_9c,local_a0);
      }
      plVar11 = &DAT_146857f70;
    }
    if (((int)lVar6 != 0) || (iStack_9c != 0)) goto LAB_1406a7647;
  }
  FUN_1406a6970(param_1,local_80,1);
LAB_1406a7647:
  FDisplayDebugManager::SetDrawColor(lVar1,&DAT_1464aa730);
  iVar4 = (int)plVar11[1];
  if (DAT_14622c990 <= (int)plVar11[1]) {
    iVar4 = DAT_14622c990;
  }
  local_60 = (longlong)iVar4;
  if (0 < iVar4) {
    do {
      plVar9 = *(longlong **)(*plVar11 + (longlong)plVar8 * 8);
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,local_48,plVar9);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*puVar7;
      }
      local_98 = plVar9[1];
      puVar7 = (undefined8 *)FName::ToString(&local_98,local_58);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*puVar7;
      }
      local_a8 = *(ulonglong *)(*plVar9 + 0x18);
      FName::ToString(&local_a8,&local_90);
      puVar10 = &DAT_143f3eda8;
      if (local_88 != 0) {
        puVar10 = local_90;
      }
      FString::PrintfImpl(local_80 + 2,L"%6.3f - %s (%s) %s",(double)*(float *)(plVar9 + 2),puVar10,
                          puVar12,puVar13);
      if (local_90 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      local_a8 = local_a8 & 0xffffffff00000000;
      FUN_1428a6fb0(lVar1,local_80 + 2,&local_a8);
      if (local_80[2] != 0) {
        FMemory::Free();
      }
      plVar8 = (longlong *)((longlong)plVar8 + 1);
    } while ((longlong)plVar8 < local_60);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,param_2,param_3,param_4,param_5,param_6);
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406a7870 thunk_FUN_1406a9330 body=5 status=ok
// SIG undefined thunk_FUN_1406a9330(void)

void thunk_FUN_1406a9330(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar1 = (longlong)*(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x30) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar1) {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x30) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar2 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar2 = plVar2 + 1;
        } while (lVar3 < lVar1);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar1);
    *(int *)(param_1 + 0x38) = iVar6;
  }
  iVar6 = (int)((float)*(int *)(param_1 + 0x38) * 0.05);
  iVar4 = 1;
  if (0 < iVar6) {
    iVar4 = iVar6;
  }
  *(int *)(param_1 + 0x44) = iVar4;
  if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1406a7890 FUN_1406a7890 body=632 status=ok
// SIG undefined FUN_1406a7890(void)

void FUN_1406a7890(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined8 local_res8;
  longlong local_res18 [2];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  local_res8 = param_1;
  cVar1 = UWorld::IsGameWorld();
  if (cVar1 != '\0') {
    plVar9 = (longlong *)0x0;
    if (DAT_146857f38 != (longlong *)0x0) {
      plVar2 = (longlong *)FUN_1406aa490();
      for (plVar3 = DAT_146857f38; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
        if (plVar3 == plVar2) {
          if (DAT_146857f38 != (longlong *)0x0) goto LAB_1406a797e;
          break;
        }
      }
    }
    plVar3 = (longlong *)FUN_1406aa490();
    lVar6 = plVar3[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar6 = plVar3[0x1f];
    }
    puVar4 = (undefined8 *)FSoftObjectPath::ToString(lVar6 + 0x118,&local_30);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar4;
    }
    uVar5 = FUN_1406aa490();
    DAT_146857f38 = (longlong *)FUN_141799830(uVar5,0,puVar8,0,0,0);
    if (local_30 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (DAT_146857f38 != (longlong *)0x0) {
LAB_1406a797e:
      plVar2 = (longlong *)FUN_1406aa490();
      for (plVar3 = DAT_146857f38; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
        if (plVar3 == plVar2) {
          if (DAT_146857f38 == (longlong *)0x0) {
            return;
          }
          plVar2 = (longlong *)FUN_1406aa490();
          for (plVar3 = DAT_146857f38;
              (plVar7 = plVar9, plVar3 != (longlong *)0x0 &&
              (plVar7 = DAT_146857f38, plVar3 != plVar2)); plVar3 = (longlong *)plVar3[6]) {
          }
          lVar6 = plVar7[0x1f];
          if (lVar6 == 0) {
            (**(code **)(*plVar7 + 0x368))(plVar7);
            lVar6 = plVar7[0x1f];
          }
          if (((*(uint *)(lVar6 + 0x60) & 2) == 0) && ((*(uint *)(lVar6 + 0x60) & 1) == 0)) {
            return;
          }
          local_res18[0] = 0;
          plVar3 = plVar9;
          if (DAT_146857f38 != (longlong *)0x0) {
            plVar7 = (longlong *)FUN_1406aa490();
            for (plVar2 = DAT_146857f38;
                (plVar3 = plVar9, plVar2 != (longlong *)0x0 &&
                (plVar3 = DAT_146857f38, plVar2 != plVar7)); plVar2 = (longlong *)plVar2[6]) {
            }
          }
          lVar6 = local_res18[0];
          uVar5 = local_res8;
          local_res18[1] = 0;
          if (local_res18[0] == 0) {
            FUN_1417846f0(local_res8,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
          }
          local_38 = FUN_1417985e0(plVar3,uVar5,lVar6,0,0,0,0,0,0);
          local_30 = &local_res8;
          local_28 = &local_38;
          FUN_1405c0510(&DAT_14622c9a0,local_res18,&local_30,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1406a7b10 FUN_1406a7b10 body=852 status=ok
// SIG undefined FUN_1406a7b10(void)

void FUN_1406a7b10(int param_1,int *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int *piVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int *local_98;
  longlong *local_90;
  int local_88 [2];
  int local_80;
  int local_7c;
  int local_78 [2];
  longlong local_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined1 local_58 [32];
  
  if (((1 < param_1) && (param_3 == '\0')) && (cVar8 = FUN_141636a40(), cVar8 != '\0')) {
    plVar12 = (longlong *)FTaskGraphInterface::Get();
    iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12);
    iVar15 = param_1 + -1;
    if (iVar9 <= param_1 + -1) {
      iVar15 = iVar9;
    }
    if (iVar15 != 0) {
      piVar13 = (int *)operator_new(0x38);
      if (piVar13 == (int *)0x0) {
        piVar13 = (int *)0x0;
      }
      else {
        iVar9 = param_2[1];
        iVar17 = param_2[2];
        iVar10 = param_2[3];
        iVar18 = iVar15 + 1;
        piVar13[4] = *param_2;
        piVar13[5] = iVar9;
        piVar13[6] = iVar17;
        piVar13[7] = iVar10;
        uVar14 = FUN_1415ab270(0);
        *(undefined8 *)(piVar13 + 8) = uVar14;
        piVar13[10] = 0;
        piVar13[0xb] = 0;
        *(undefined2 *)(piVar13 + 0xc) = 0;
        *piVar13 = 0;
        *(bool *)((longlong)piVar13 + 0x32) = iVar18 < param_1;
        iVar17 = 6;
        iVar9 = iVar18 * 6;
        do {
          iVar10 = param_1 / iVar9;
          piVar13[1] = iVar10;
          if (iVar10 == 0) {
            iVar11 = *piVar13;
          }
          else {
            iVar11 = param_1 / iVar10;
            *piVar13 = iVar11;
            if ((int)((uint)(iVar18 < param_1) + iVar18) <= iVar11) break;
          }
          iVar9 = iVar9 - iVar18;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
        piVar13[2] = param_1 - iVar10 * iVar11;
      }
      plVar12 = (longlong *)operator_new(0x18);
      local_90 = (longlong *)0x0;
      if (plVar12 != (longlong *)0x0) {
        *(undefined4 *)(plVar12 + 1) = 1;
        *plVar12 = (longlong)&PTR_FUN_1440456a0;
        *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
        plVar12[2] = (longlong)piVar13;
        local_90 = plVar12;
      }
      local_98 = piVar13;
      SharedPointerInternals::EnableSharedFromThis(&local_98,piVar13,piVar13);
      plVar12 = (longlong *)FUN_1406a61f0(local_58,0,0xff);
      lVar3 = *plVar12;
      *(int **)(lVar3 + 0x10) = local_98;
      *(longlong **)(lVar3 + 0x18) = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      *(int *)(lVar3 + 0x20) = iVar15 + -1;
      lVar3 = *plVar12;
      lVar7 = plVar12[2];
      lVar4 = plVar12[1];
      lVar5 = *(longlong *)(lVar3 + 0x30);
      piVar13 = (int *)(lVar5 + 0x48);
      if (lVar5 != 0) {
        LOCK();
        *piVar13 = *piVar13 + 1;
        UNLOCK();
      }
      local_70 = lVar5;
      FUN_1406a90c0(lVar3,lVar4,(int)lVar7,1);
      if (lVar5 != 0) {
        LOCK();
        iVar15 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          FGraphEvent::Recycle(local_70);
        }
      }
      piVar13 = local_98;
      LOCK();
      if (local_98[10] == 0) {
        local_98[10] = 0;
      }
      UNLOCK();
      iVar15 = *local_98;
      local_68 = local_98[4];
      iStack_64 = local_98[5];
      iStack_60 = local_98[6];
      iStack_5c = local_98[7];
      cVar8 = *(char *)((longlong)local_98 + 0x32);
      iVar9 = local_98[1];
      local_80 = iVar15 + -1;
      local_7c = iVar9;
      iVar17 = local_80;
      do {
        LOCK();
        piVar1 = piVar13 + 10;
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if ((cVar8 != '\0') && (iVar17 < iVar10)) {
          iVar10 = iVar17;
        }
        if (iVar10 < iVar15) {
          iVar18 = iVar9;
          if (iVar10 == iVar17) {
            iVar18 = piVar13[2] + iVar9;
          }
          if (0 < iVar18) {
            uVar14 = CONCAT44(iStack_5c,iStack_60);
            pcVar6 = (code *)CONCAT44(iStack_64,local_68);
            iVar11 = iVar10 * iVar9;
            plVar12 = (longlong *)0x0;
            do {
              local_88[0] = iVar11 + (int)plVar12;
              (*pcVar6)(uVar14,local_88);
              uVar16 = (int)plVar12 + 1;
              plVar12 = (longlong *)(ulonglong)uVar16;
              iVar9 = local_7c;
              iVar17 = local_80;
            } while ((int)uVar16 < iVar18);
          }
          LOCK();
          piVar1 = piVar13 + 0xb;
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          if (iVar18 + 1 == iVar15) goto LAB_1406a7dc6;
        }
      } while (iVar10 < iVar17);
      (**(code **)(**(longlong **)(local_98 + 8) + 0x20))(*(longlong **)(local_98 + 8),0xffffffff,0)
      ;
LAB_1406a7dc6:
      plVar12 = local_90;
      *(undefined1 *)(local_98 + 0xc) = 1;
      if (local_90 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar2 = local_90 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return;
      }
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar13 = (int *)((longlong)plVar12 + 0xc);
      iVar15 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar15 != 1) {
        return;
      }
      (**(code **)(*plVar12 + 8))(plVar12,1);
      return;
    }
  }
  iVar15 = 0;
  if (0 < param_1) {
    do {
      local_78[0] = iVar15;
      (**(code **)param_2)(*(undefined8 *)(param_2 + 2),local_78);
      iVar15 = iVar15 + 1;
    } while (iVar15 < param_1);
  }
  return;
}



// FUNCTION 1406a7e70 FUN_1406a7e70 body=449 status=ok
// SIG undefined FUN_1406a7e70(void)

void FUN_1406a7e70(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)UConsoleSettings::GetPrivateStaticClass();
  lVar4 = plVar2[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar4 = plVar2[0x1f];
  }
  iVar3 = (int)param_1[1];
  lVar6 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar1 = *param_1;
  iVar3 = 0;
  iVar5 = 0;
  *(undefined8 *)(lVar1 + lVar6 * 0x28) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar6 * 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x10 + lVar6 * 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x18 + lVar6 * 0x28) = 0;
  *(undefined2 *)(lVar1 + 0x21 + lVar6 * 0x28) = 0xb4b4;
  *(undefined1 *)(lVar1 + 0x20 + lVar6 * 0x28) = 0xb4;
  *(undefined1 *)(lVar1 + 0x23 + lVar6 * 0x28) = 0xff;
  lVar6 = *param_1 + (longlong)(int)param_1[1] * 0x28;
  if (*(wchar_t **)(lVar6 + -0x28) != L"showdebug SIGNIFICANCEMANAGER") {
    *(undefined4 *)(lVar6 + -0x20) = 0;
    if (*(int *)(lVar6 + -0x1c) != 0x1e) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar6 + -0x28,0x1e);
      iVar3 = *(int *)(lVar6 + -0x20);
    }
    *(int *)(lVar6 + -0x20) = iVar3 + 0x1e;
    if (*(int *)(lVar6 + -0x1c) < iVar3 + 0x1e) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar6 + -0x28);
    }
    builtin_wcsncpy(*(wchar_t **)(lVar6 + -0x28),L"showdebug SIGNIFICANCEMANAGER",0x1e);
  }
  if (*(wchar_t **)(lVar6 + -0x18) != L"Toggles display of significance manager calculations") {
    *(undefined4 *)(lVar6 + -0x10) = 0;
    if (*(int *)(lVar6 + -0xc) != 0x35) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar6 + -0x18,0x35);
      iVar5 = *(int *)(lVar6 + -0x10);
    }
    *(int *)(lVar6 + -0x10) = iVar5 + 0x35;
    if (*(int *)(lVar6 + -0xc) < iVar5 + 0x35) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar6 + -0x18,iVar5);
    }
    builtin_wcsncpy(*(wchar_t **)(lVar6 + -0x18),
                    L"Toggles display of significance manager calculations",0x35);
  }
  *(undefined4 *)(lVar6 + -8) = *(undefined4 *)(lVar4 + 0x60);
  return;
}



// FUNCTION 1406a8040 FUN_1406a8040 body=450 status=ok
// SIG undefined FUN_1406a8040(void)

ulonglong FUN_1406a8040(uint *param_1,int param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int local_78 [2];
  uint local_70;
  longlong local_68;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined1 local_50 [24];
  
  LOCK();
  uVar10 = param_1[10];
  if (uVar10 == 0) {
    param_1[10] = 0;
    uVar10 = 0;
  }
  UNLOCK();
  if ((param_2 != 0) && (iVar13 = *param_1 - uVar10, 0 < iVar13)) {
    plVar11 = (longlong *)FUN_1406a61f0(local_50,0,0xff);
    if (param_2 <= iVar13) {
      iVar13 = param_2;
    }
    lVar4 = *plVar11;
    *(undefined8 *)(lVar4 + 0x10) = *param_3;
    lVar5 = param_3[1];
    *(longlong *)(lVar4 + 0x18) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    *(int *)(lVar4 + 0x20) = iVar13 + -1;
    lVar4 = *plVar11;
    lVar9 = plVar11[2];
    lVar5 = plVar11[1];
    lVar6 = *(longlong *)(lVar4 + 0x30);
    piVar1 = (int *)(lVar6 + 0x48);
    if (lVar6 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_68 = lVar6;
    FUN_1406a90c0(lVar4,lVar5,(int)lVar9,1);
    if (lVar6 != 0) {
      LOCK();
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        FGraphEvent::Recycle(local_68);
      }
    }
  }
  uVar10 = *param_1;
  local_60 = param_1[4];
  uStack_5c = param_1[5];
  uStack_58 = param_1[6];
  uStack_54 = param_1[7];
  cVar3 = *(char *)((longlong)param_1 + 0x32);
  uVar12 = param_1[1];
  uVar15 = uVar10 - 1;
  local_70 = uVar12;
  do {
    iVar13 = 0;
    LOCK();
    puVar2 = param_1 + 10;
    uVar14 = *puVar2;
    *puVar2 = *puVar2 + 1;
    UNLOCK();
    if (cVar3 != '\0') {
      if (param_4 == '\0') {
        if ((int)uVar15 <= (int)uVar14) break;
      }
      else if ((int)uVar15 < (int)uVar14) {
        uVar14 = uVar15;
      }
    }
    if ((int)uVar14 < (int)uVar10) {
      uVar16 = uVar12;
      if (uVar14 == uVar15) {
        uVar16 = param_1[2] + uVar12;
      }
      if (0 < (int)uVar16) {
        uVar8 = CONCAT44(uStack_54,uStack_58);
        pcVar7 = (code *)CONCAT44(uStack_5c,local_60);
        iVar17 = uVar14 * uVar12;
        do {
          local_78[0] = iVar17 + iVar13;
          (*pcVar7)(uVar8,local_78);
          iVar13 = iVar13 + 1;
          uVar12 = local_70;
        } while (iVar13 < (int)uVar16);
      }
      LOCK();
      puVar2 = param_1 + 0xb;
      uVar16 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if (uVar16 + 1 == uVar10) {
        return CONCAT71((uint7)(uint3)(uVar16 + 1 >> 8),1);
      }
    }
  } while ((int)uVar14 < (int)uVar15);
  return (ulonglong)uVar10 & 0xffffffffffffff00;
}



// FUNCTION 1406a8210 FUN_1406a8210 body=1152 status=ok
// SIG undefined FUN_1406a8210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406a8210(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  void *_Src;
  longlong *plVar20;
  longlong local_res8;
  longlong local_res10;
  longlong *local_res18;
  undefined8 *local_res20;
  void *local_198;
  uint local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  longlong local_178;
  void *local_170;
  int local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8 [2];
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined4 local_80;
  
  iVar18 = *(int *)(param_1 + 0x54);
  iVar17 = *(int *)(param_1 + 0x50);
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (iVar18 < 0) {
    if (iVar17 != 0) {
      plVar20 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
      do {
        if (*plVar20 != 0) {
          FMemory::Free();
        }
        plVar20 = plVar20 + 6;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      iVar18 = *(int *)(param_1 + 0x54);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (iVar18 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x48,0);
    }
  }
  else {
    if (iVar17 != 0) {
      plVar20 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
      do {
        if (*plVar20 != 0) {
          FMemory::Free();
        }
        plVar20 = plVar20 + 6;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  _Src = (void *)0x0;
  uVar4 = *(uint *)(param_3 + 1);
  pvVar12 = _Src;
  if (uVar4 != 0) {
    do {
      iVar18 = (int)pvVar12;
      if ((((param_2 != 0) && (lVar7 = *(longlong *)(*param_3 + (longlong)iVar18 * 8), lVar7 != 0))
          && (*(char *)(lVar7 + 0x44) != '\0')) && (lVar8 = *(longlong *)(lVar7 + 0x18), lVar8 != 0)
         ) {
        lVar9 = *(longlong *)(lVar8 + 0x168);
        if (lVar9 == 0) {
          puVar13 = &local_158;
          local_158 = _DAT_1468b5d90;
          local_150 = DAT_1468b5d98;
        }
        else {
          puVar13 = (undefined8 *)&local_188;
          local_188 = *(undefined4 *)(lVar9 + 0x220);
          local_f8 = *(undefined4 *)(lVar9 + 0x220);
          uStack_f4 = *(undefined4 *)(lVar9 + 0x224);
          uStack_f0 = *(undefined4 *)(lVar9 + 0x228);
          uStack_ec = *(undefined4 *)(lVar9 + 0x22c);
          local_180 = *(undefined4 *)(lVar9 + 0x228);
          uStack_184 = *(undefined4 *)(lVar9 + 0x224);
        }
        uVar11 = *(uint *)(lVar8 + 0xc);
        pvVar12 = _Src;
        if ((int)uVar11 < (int)DAT_1469e91c4) {
          uVar16 = uVar11 & 0xffff;
          if ((int)uVar11 < 0) {
            uVar11 = uVar11 + 0xffff;
            uVar16 = uVar16 - 0x10000;
          }
          pvVar12 = (void *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8) +
                            (longlong)(int)uVar16 * 0x18);
        }
        param_2 = local_res10;
        if ((*(uint *)((longlong)pvVar12 + 8) >> 0x1d & 1) == 0) {
          uVar5 = *(undefined4 *)(lVar7 + 0x20);
          *(undefined1 *)(lVar7 + 0x24) = 1;
          iVar17 = *(int *)(param_1 + 0x50);
          local_80 = uVar5;
          *(int *)(param_1 + 0x50) = iVar17 + 1;
          if (*(int *)(param_1 + 0x54) < iVar17 + 1) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x48,iVar17);
          }
          uVar3 = *puVar13;
          uVar6 = *(undefined4 *)(puVar13 + 1);
          puVar15 = (undefined4 *)((longlong)iVar17 * 0x30 + *(longlong *)(param_1 + 0x48));
          *puVar15 = uVar5;
          puVar15[1] = iVar18;
          *(undefined1 *)(puVar15 + 2) = 0;
          *(undefined8 *)(puVar15 + 4) = 0;
          *(undefined8 *)(puVar15 + 6) = 0;
          *(undefined8 *)(puVar15 + 8) = uVar3;
          puVar15[10] = uVar6;
          param_2 = local_res10;
          param_3 = local_res18;
        }
      }
      pvVar12 = (void *)(ulonglong)(iVar18 + 1U);
    } while (iVar18 + 1U < uVar4);
  }
  local_198 = (void *)0x0;
  local_190 = *(uint *)(local_res20 + 1);
  uVar19 = (ulonglong)(int)local_190;
  pvVar12 = (void *)*local_res20;
  if (local_190 != 0) {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_198,local_190,0);
    _guard_xfg_dispatch_icall_nop(local_198,pvVar12,uVar19 * 0x30);
    uVar19 = (ulonglong)local_190;
  }
  lVar7 = local_res8;
  local_178 = local_res8;
  local_170 = (void *)0x0;
  iVar18 = (int)uVar19;
  local_168 = iVar18;
  if (iVar18 != 0) {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_170,uVar19 & 0xffffffff,0);
    _Src = local_170;
    _guard_xfg_dispatch_icall_nop(local_170,local_198,(longlong)iVar18 * 0x30);
  }
  iVar18 = local_168;
  lVar8 = local_178;
  local_118 = (longlong *)0x0;
  local_108 = 0;
  puVar13 = (undefined8 *)FUN_140438ef0(0x20,local_138);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_FUN_144045b08;
    puVar13[1] = lVar8;
    puVar1 = puVar13 + 2;
    *puVar1 = 0;
    *(int *)(puVar13 + 3) = iVar18;
    if (iVar18 == 0) {
      *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(puVar1,iVar18,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar18 * 0x30);
    }
  }
  local_148[0] = &LAB_1406a5ed0;
  plVar20 = (longlong *)FUN_140596960(local_98,0,0xff);
  lVar8 = *plVar20;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar8 + 0x10,local_148);
  *(undefined4 *)(lVar8 + 0x60) = 0x10ff;
  lVar8 = *plVar20;
  lVar10 = plVar20[2];
  lVar9 = plVar20[1];
  local_res8 = *(longlong *)(lVar8 + 0x78);
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 0x48) = *(int *)(local_res8 + 0x48) + 1;
    UNLOCK();
  }
  FUN_1405ab110(lVar8,lVar9,(int)lVar10,1);
  if (local_108 != 0) {
    plVar20 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar20 = local_118;
    }
    if (plVar20 != (longlong *)0x0) {
      (**(code **)(*plVar20 + 0x10))(plVar20,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_b8 = 0;
  local_a8 = 0;
  puVar13 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
  if (puVar13 != (undefined8 *)0x0) {
    puVar13[1] = lVar7;
    *puVar13 = &PTR_FUN_143f77b70;
  }
  local_e8[0] = &LAB_1406a5e90;
  plVar14 = (longlong *)FUN_1406a5f30(&local_160,local_e8,&local_res18,&local_res8,2);
  plVar20 = (longlong *)(lVar7 + 0x58);
  if (plVar20 != plVar14) {
    lVar7 = *plVar20;
    *plVar20 = *plVar14;
    *plVar14 = 0;
    if (lVar7 != 0) {
      LOCK();
      piVar2 = (int *)(lVar7 + 0x48);
      iVar18 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  if (local_160 != 0) {
    LOCK();
    piVar2 = (int *)(local_160 + 0x48);
    iVar18 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (local_res8 != 0) {
    LOCK();
    piVar2 = (int *)(local_res8 + 0x48);
    iVar18 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      FGraphEvent::Recycle(local_res8);
    }
  }
  if (local_170 != (void *)0x0) {
    FMemory::Free(local_170);
  }
  if (local_198 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406a8690 FUN_1406a8690 body=495 status=ok
// SIG undefined FUN_1406a8690(void)

void FUN_1406a8690(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  int iVar6;
  longlong local_res18 [2];
  undefined1 local_38 [8];
  longlong local_30;
  
  if ((*(byte *)(param_2 + 0x340) & 2) != 0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&USignificanceManager::OnTickActorEndPlay",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(local_res18,pwVar2 + 2,1);
    lVar5 = local_res18[0];
    FWeakObjectPtr::operator=(local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(local_38,param_1);
    local_30 = lVar5;
    if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(local_38), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_30);
    }
    FUN_1406a5aa0(param_2 + 0x2a0,local_38);
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&USignificanceManager::UnregisterForTickOptim",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(local_res18,pwVar2 + 2,1);
    FWeakObjectPtr::operator=(local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(local_38,param_1);
    local_30 = local_res18[0];
    if ((local_res18[0] != 0) && (lVar5 = FWeakObjectPtr::Get(local_38), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_30);
    }
    FUN_1406a5aa0(param_2 + 0x290,local_38);
    iVar6 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar6 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar6);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 8) = param_2;
    iVar3 = (int)((float)*(int *)(param_1 + 0x38) * 0.05);
    iVar6 = 1;
    if (0 < iVar3) {
      iVar6 = iVar3;
    }
    *(int *)(param_1 + 0x44) = iVar6;
    if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x40)) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  return;
}



// FUNCTION 1406a8880 FUN_1406a8880 body=389 status=ok
// SIG undefined FUN_1406a8880(void)

void FUN_1406a8880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6,longlong param_7,undefined1 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int local_d8 [4];
  undefined1 local_c8 [80];
  undefined1 local_78 [80];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_14622c9a0,local_d8,param_2);
  if (((local_d8[0] != -1) && (lVar1 = DAT_14622c9a0 + (longlong)local_d8[0] * 0x18, lVar1 != 0)) &&
     (plVar4 = *(longlong **)(lVar1 + 8), plVar4 != (longlong *)0x0)) {
    lVar1 = *plVar4;
    uVar2 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,param_7);
    uVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_5);
    (**(code **)(lVar1 + 0x288))(plVar4,param_3,param_4,uVar3,param_6,uVar2,param_8);
  }
  if (*(int *)(param_5 + 0x40) != 0) {
    plVar4 = *(longlong **)(param_5 + 0x30);
    if (*(longlong **)(param_5 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_5 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(param_5 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_7 + 0x40) != 0) {
    plVar4 = *(longlong **)(param_7 + 0x30);
    if (*(longlong **)(param_7 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_7 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(param_7 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406a8a10 FUN_1406a8a10 body=954 status=ok
// SIG undefined FUN_1406a8a10(void)

void FUN_1406a8a10(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined1 param_5,longlong param_6,undefined1 param_7)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  code *pcVar14;
  uint uVar15;
  longlong local_res18 [2];
  undefined1 local_128 [8];
  int local_120 [2];
  undefined8 *local_118;
  undefined4 local_110 [2];
  longlong *local_108;
  undefined8 **local_100;
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8 [80];
  undefined1 local_98 [88];
  
  lVar2 = *param_1;
  local_res18[0] = param_3;
  local_f8 = param_2;
  local_f0 = param_4;
  uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_e8,param_6);
  uVar7 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_98,param_4);
  local_118 = (undefined8 *)
              (**(code **)(lVar2 + 0x280))
                        (param_1,local_f8,local_res18[0],uVar7,param_5,uVar6,param_7);
  if (*(char *)((longlong)local_118 + 0x14) == '\x02') {
    *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + 1;
  }
  uVar13 = 0;
  if (((int)param_1[0xe] != 0) &&
     (FUN_1406a9dd0(local_118,param_1 + 0xd,*(uint *)(param_1 + 0xc) >> 2 & 0xffffff01),
     puVar3 = local_118, *(char *)((longlong)local_118 + 0x14) == '\x02')) {
    local_110[0] = *(undefined4 *)(local_118 + 2);
    local_108 = (longlong *)*local_118;
    local_120[0] = 0;
    local_128[0] = 0;
    uVar8 = uVar13;
    if (*(int *)(local_118 + 0x1c) != 0) {
      plVar10 = (longlong *)local_118[0x1a];
      if ((longlong *)local_118[0x1a] == (longlong *)0x0) {
        plVar10 = local_118 + 0x16;
      }
      if (plVar10 != (longlong *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 8))();
      }
    }
    (*(code *)puVar3[0x14])(uVar8,&local_108,local_120,local_110,local_128);
  }
  local_108 = &local_f8;
  local_100 = &local_118;
  FUN_1405c0510(param_1 + 0x19,local_120,&local_108,0);
  if ((int)param_1[0x10] != *(int *)((longlong)param_1 + 0xac)) {
    plVar10 = (longlong *)param_1[0x17];
    if ((longlong *)param_1[0x17] == (longlong *)0x0) {
      plVar10 = param_1 + 0x16;
    }
    iVar5 = *(int *)((longlong)plVar10 +
                    ((longlong)((int)((ulonglong)local_res18[0] >> 0x20) + (int)local_res18[0]) &
                    (longlong)(int)param_1[0x18] - 1U) * 4);
    if (iVar5 != -1) {
      do {
        plVar10 = (longlong *)((longlong)iVar5 * 0x20 + param_1[0xf]);
        if (*plVar10 == local_res18[0]) {
          if ((iVar5 != -1) && (plVar10 != (longlong *)0x0)) goto LAB_1406a8c34;
          break;
        }
        iVar5 = (int)plVar10[3];
      } while (iVar5 != -1);
    }
  }
  local_108 = local_res18;
  FUN_1406a4270(param_1 + 0xf,local_120,&local_108,0);
  plVar10 = (longlong *)((longlong)local_120[0] * 0x20 + param_1[0xf]);
LAB_1406a8c34:
  iVar5 = (int)plVar10[2];
  uVar8 = (ulonglong)iVar5;
  plVar11 = plVar10 + 1;
  if (iVar5 < 1) {
    *(int *)(plVar10 + 2) = iVar5 + 1;
    if (*(int *)((longlong)plVar10 + 0x14) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar5);
    }
  }
  else {
    pcVar14 = FUN_1406a5ef0;
    if ((*(uint *)(param_1 + 0xc) >> 2 & 1) != 0) {
      pcVar14 = FUN_1406a5ee0;
      uVar13 = 0;
    }
    do {
      uVar15 = (int)uVar8 - 1;
      while( true ) {
        uVar12 = (uint)uVar13;
        uVar9 = uVar12 + (int)(uVar15 - uVar12) / 2;
        uVar8 = (ulonglong)uVar9;
        cVar4 = (*pcVar14)(local_118,*(undefined8 *)(*plVar11 + (longlong)(int)uVar9 * 8));
        if (cVar4 != '\0') break;
        if (uVar12 == uVar15) {
          iVar5 = (int)plVar10[2];
          *(int *)(plVar10 + 2) = iVar5 + 1;
          if (*(int *)((longlong)plVar10 + 0x14) < iVar5 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar5);
          }
          pvVar1 = (void *)(*plVar11 + 8 + (longlong)(int)uVar12 * 8);
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)pvVar1 + 8),pvVar1,
                     (longlong)(int)(iVar5 - (uVar12 + 1)) << 3);
          *(undefined8 **)(*plVar11 + 8 + (longlong)(int)uVar12 * 8) = local_118;
          goto LAB_1406a8d4b;
        }
        uVar13 = (ulonglong)(uVar9 + 1);
      }
    } while (uVar12 != uVar9);
    iVar5 = (int)plVar10[2];
    *(int *)(plVar10 + 2) = iVar5 + 1;
    if (*(int *)((longlong)plVar10 + 0x14) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar5);
    }
    uVar8 = (ulonglong)(int)uVar12;
    pvVar1 = (void *)(*plVar11 + uVar8 * 8);
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)pvVar1 + 8),pvVar1,(longlong)(int)(iVar5 - uVar12) << 3);
  }
  *(undefined8 **)(*plVar11 + uVar8 * 8) = local_118;
LAB_1406a8d4b:
  lVar2 = local_f0;
  if (*(int *)(local_f0 + 0x40) != 0) {
    plVar10 = *(longlong **)(local_f0 + 0x30);
    if (*(longlong **)(local_f0 + 0x30) == (longlong *)0x0) {
      plVar10 = (longlong *)(local_f0 + 0x10);
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (*(longlong *)(lVar2 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_6 + 0x40) != 0) {
    plVar10 = *(longlong **)(param_6 + 0x30);
    if (*(longlong **)(param_6 + 0x30) == (longlong *)0x0) {
      plVar10 = (longlong *)(param_6 + 0x10);
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (*(longlong *)(param_6 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406a8dd0 Remove body=237 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FName,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  iVar5 = *(int *)((longlong)plVar6 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar7) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0x20;
      if (*(longlong *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar5 * 0x20;
        uVar7 = (longlong)*(int *)(lVar3 + 0x1c + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x0001406a8e62;
      }
      iVar5 = *(int *)(lVar3 + 0x18 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x0001406a8e62:
  if (iVar1 == -1) {
LAB_1406a8e83:
    if (*(longlong *)(lVar3 + 8 + *param_1) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x18);
    goto LAB_1406a8e83;
  }
  piVar4 = (int *)(lVar2 + 0x18 + (longlong)iVar1 * 0x20);
  iVar1 = *piVar4;
  goto joined_r0x0001406a8e62;
}



// FUNCTION 1406a8ec0 ResizeGrow body=116 status=ok
// SIG undefined ResizeGrow(void)

void TArray<`FVulkanDynamicRHI::SelectAndInitDevice'::`2'::FDeviceInfo,FDefaultAllocator>::
     ResizeGrow(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
  iVar2 = (int)(uVar3 >> 4);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar4 = FMemory::Realloc(*param_1,(longlong)iVar2 << 4,0);
    *param_1 = lVar4;
  }
  return;
}



// FUNCTION 1406a8f40 ResizeGrow body=258 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FVertexInputStream,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = *(uint *)((longlong)param_1 + 0x38);
  uVar5 = 4;
  if (4 < uVar4) {
    if ((*(int *)((longlong)param_1 + 0x3c) != 0) || (4 < uVar4)) {
      uVar5 = (longlong)(int)uVar4 + 0x10 + ((ulonglong)((longlong)(int)uVar4 * 3) >> 3);
    }
    uVar1 = FMemory::QuantizeSize(uVar5 * 0xc,0);
    uVar5 = uVar1 / 0xc & 0xffffffff;
    if ((int)(uVar1 / 0xc) < (int)uVar4) {
      uVar5 = 0x7fffffff;
    }
  }
  uVar4 = (uint)uVar5;
  *(uint *)((longlong)param_1 + 0x3c) = uVar4;
  pvVar2 = *(void **)((longlong)param_1 + 0x30);
  if (uVar4 < 5) {
    if (pvVar2 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar2,(longlong)param_2 * 0xc);
    pvVar2 = *(void **)((longlong)param_1 + 0x30);
    if (pvVar2 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
      if (uVar4 != 0) {
        pvVar2 = (void *)FMemory::Realloc(0,(longlong)(int)uVar4 * 0xc,0);
        *(void **)((longlong)param_1 + 0x30) = pvVar2;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar2,param_1,(longlong)param_2 * 0xc);
      return;
    }
    lVar6 = (longlong)(int)uVar4 * 0xc;
  }
  uVar3 = FMemory::Realloc(pvVar2,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar3;
  return;
}



// FUNCTION 1406a9050 ResizeTo body=99 status=ok
// SIG undefined ResizeTo(void)

void TArray<FDelegateBase,FHeapAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 4,0);
    iVar1 = (int)(uVar2 >> 4);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 4,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 1406a90c0 FUN_1406a90c0 body=614 status=ok
// SIG undefined FUN_1406a90c0(void)

void FUN_1406a90c0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 8) = 0xcff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_1406a9277;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_1406a9277:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 1406a9330 FUN_1406a9330 body=289 status=ok
// SIG undefined FUN_1406a9330(void)

void FUN_1406a9330(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar1 = (longlong)*(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x30) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar1) {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x30) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar2 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar2 = plVar2 + 1;
        } while (lVar3 < lVar1);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar1);
    *(int *)(param_1 + 0x38) = iVar6;
  }
  iVar6 = (int)((float)*(int *)(param_1 + 0x38) * 0.05);
  iVar4 = 1;
  if (0 < iVar6) {
    iVar4 = iVar6;
  }
  *(int *)(param_1 + 0x44) = iVar4;
  if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1406a9460 FUN_1406a9460 body=92 status=ok
// SIG undefined FUN_1406a9460(void)

void FUN_1406a9460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int local_res20 [2];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_14622c9a0,local_res20,param_2);
  if (((local_res20[0] != -1) &&
      (lVar1 = DAT_14622c9a0 + (longlong)local_res20[0] * 0x18, lVar1 != 0)) &&
     (plVar2 = *(longlong **)(lVar1 + 8), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001406a94af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x290))(plVar2,param_3);
    return;
  }
  return;
}



// FUNCTION 1406a94c0 FUN_1406a94c0 body=469 status=ok
// SIG undefined FUN_1406a94c0(void)

void FUN_1406a94c0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res8 [4];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_28 [2];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 200,local_res8,param_2);
  if (local_res8[0] != -1) {
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 200) + 8 + (longlong)local_res8[0] * 0x18);
    TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
    ::Remove(param_1 + 200);
    if (*(char *)((longlong)puVar1 + 0x14) == '\x02') {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
    }
    lVar2 = puVar1[1];
    plVar6 = (longlong *)0x0;
    if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
      lVar4 = *(longlong *)(param_1 + 0xb8);
      if (*(longlong *)(param_1 + 0xb8) == 0) {
        lVar4 = param_1 + 0xb0;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                               (longlong)*(int *)(param_1 + 0xc0) - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar9 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x78));
          if (*plVar9 == lVar2) {
            if (iVar3 != -1) goto LAB_1406a9581;
            break;
          }
          iVar3 = (int)plVar9[3];
        } while (iVar3 != -1);
      }
    }
    plVar9 = plVar6;
LAB_1406a9581:
    iVar3 = (int)plVar9[2];
    if (iVar3 == 1) {
      TSet<TTuple<FName,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Remove((longlong *)(param_1 + 0x78));
    }
    else {
      plVar5 = (longlong *)plVar9[1];
      for (plVar8 = plVar5; plVar8 != plVar5 + iVar3; plVar8 = plVar8 + 1) {
        if ((undefined8 *)*plVar8 == puVar1) {
          iVar7 = (int)((longlong)plVar8 - (longlong)plVar5 >> 3);
          if (iVar7 != -1) {
            _guard_xfg_dispatch_icall_nop
                      (plVar5 + iVar7,plVar5 + iVar7 + 1,(longlong)((iVar3 - iVar7) + -1) << 3);
            *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
          }
          break;
        }
      }
    }
    if (*(int *)(puVar1 + 0x1c) != 0) {
      plVar9 = (longlong *)puVar1[0x1a];
      plVar5 = plVar6;
      if (plVar9 == (longlong *)0x0) {
        plVar5 = puVar1 + 0x16;
      }
      if (plVar5 != (longlong *)0x0 || plVar9 != (longlong *)0x0) {
        local_res20[0] = *(undefined4 *)(puVar1 + 2);
        local_28[0] = *puVar1;
        local_res18[0] = 0x3f800000;
        local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
        if (*(int *)(puVar1 + 0x1c) != 0) {
          if (plVar9 == (longlong *)0x0) {
            plVar9 = puVar1 + 0x16;
          }
          if (plVar9 != (longlong *)0x0) {
            plVar6 = (longlong *)(**(code **)(*plVar9 + 8))();
          }
        }
        (*(code *)puVar1[0x14])(plVar6,local_28,local_res20,local_res18,local_res8);
      }
    }
    FUN_1406a5880(puVar1,1);
  }
  return;
}



// FUNCTION 1406a96a0 FUN_1406a96a0 body=1828 status=ok
// SIG undefined FUN_1406a96a0(void)

void FUN_1406a96a0(code *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  code *pcVar18;
  int *piVar19;
  uint uVar20;
  code *pcVar21;
  int *piVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  code *local_res8;
  undefined8 *local_res10;
  undefined8 local_res18;
  undefined4 local_res20 [2];
  undefined8 local_e8;
  code *pcStack_e0;
  uint local_d8;
  uint uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  uint local_c0;
  int local_bc;
  undefined8 *local_b8;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  int iStack_90;
  uint uStack_8c;
  code *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  code *local_70;
  int iStack_68;
  uint uStack_64;
  code *pcStack_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  
  iVar12 = *(int *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x70) = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  if (*(int *)(param_1 + 0x74) < iVar12) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x68,iVar12);
  }
  iVar10 = *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = iVar10 + iVar12;
  if (*(int *)(param_1 + 0x74) < iVar10 + iVar12) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x68,iVar10);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar10 * 0x30 + *(longlong *)(param_1 + 0x68)),(void *)*param_2,
             (longlong)iVar12 * 0x30);
  local_c8 = 0;
  local_bc = 0;
  local_b8 = (undefined8 *)0x0;
  local_ac = 0;
  local_c0 = 0;
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_c8);
  }
  local_b0 = 0;
  if (*(int *)(param_1 + 100) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_b8);
  }
  pcVar3 = param_1 + 200;
  uVar15 = *(uint *)(param_1 + 0xf0);
  pcVar1 = param_1 + 0xd8;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 1;
  uStack_d4 = 0;
  iStack_d0 = 0;
  if (uVar15 != 0) {
    pcVar21 = *(code **)(param_1 + 0xe8);
    if (*(code **)(param_1 + 0xe8) == (code *)0x0) {
      pcVar21 = pcVar1;
    }
    uVar4 = *(uint *)pcVar21;
    while (uVar4 == 0) {
      lVar16 = (longlong)(int)local_e8;
      iStack_d0 = iStack_d0 + 0x20;
      iVar12 = (int)local_e8 + 1;
      bVar8 = (int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_e8;
      local_e8._0_4_ = iVar12;
      if (bVar8) goto LAB_1406a9830;
      uVar4 = *(uint *)(pcVar21 + (lVar16 + 1) * 4);
    }
    local_e8._4_4_ = -uVar4 & uVar4;
    iVar12 = 0x1f;
    if (local_e8._4_4_ != 0) {
      for (; local_e8._4_4_ >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (local_e8._4_4_ == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_d4 = (iStack_d0 - iVar12) + 0x1f;
    if ((int)uVar15 < (int)uStack_d4) {
LAB_1406a9830:
      uStack_d4 = uVar15;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xf0);
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_d4;
  local_78 = CONCAT44(uStack_cc,iStack_d0);
  local_d8 = -1 << ((byte)uVar4 & 0x1f);
  iStack_68 = (int)local_e8;
  uStack_64 = local_e8._4_4_;
  uVar20 = uVar4 & 0xffffffe0;
  iStack_90 = (int)local_e8;
  uStack_8c = local_e8._4_4_;
  puVar23 = local_b8;
  local_res18 = pcVar3;
  pcStack_e0 = pcVar1;
  uStack_d4 = uVar4;
  local_88 = pcVar1;
  local_70 = pcVar3;
  pcStack_60 = pcVar1;
  uStack_50 = local_78;
  local_98 = pcVar3;
  uStack_58 = uStack_80;
  uStack_54 = uStack_7c;
  iVar12 = local_b0;
  if (uVar4 != uVar15) {
    pcVar21 = *(code **)(local_res8 + 0xe8);
    if (*(code **)(local_res8 + 0xe8) == (code *)0x0) {
      pcVar21 = pcVar1;
    }
    uVar14 = *(uint *)(pcVar21 + (longlong)((int)uVar4 >> 5) * 4) & local_d8;
    iVar10 = (int)uVar4 >> 5;
    while (uVar14 == 0) {
      uVar20 = uVar20 + 0x20;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_1406a9905;
      uVar14 = *(uint *)(pcVar21 + ((longlong)iVar10 + 1) * 4);
      local_d8 = 0xffffffff;
      iVar10 = iVar10 + 1;
    }
    uVar14 = -uVar14 & uVar14;
    iVar10 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_d4 = (uVar20 - iVar10) + 0x1f;
    uVar4 = uStack_d4;
    if ((int)uVar15 < (int)uStack_d4) {
LAB_1406a9905:
      uStack_d4 = uVar15;
      uVar4 = uVar15;
    }
  }
  while (((uVar15 = local_c0, pcVar21 = local_res8, uStack_7c != uVar4 || (local_88 != pcVar1)) ||
         (local_98 != pcVar3))) {
    lVar16 = *(longlong *)(*(longlong *)local_98 + 8 + (longlong)(int)uStack_7c * 0x18);
    local_c0 = local_c0 + 1;
    if (local_bc < (int)local_c0) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_c8,uVar15);
    }
    *(longlong *)(local_c8 + (longlong)(int)uVar15 * 8) = lVar16;
    if (*(char *)(lVar16 + 0x14) == '\x02') {
      uStack_a0 = (code *)CONCAT44(uStack_a0._4_4_,*(undefined4 *)(lVar16 + 0x10));
      local_b0 = iVar12 + 1;
      local_a8 = (longlong *)lVar16;
      if (local_ac < local_b0) {
        TArray<`FVulkanDynamicRHI::SelectAndInitDevice'::`2'::FDeviceInfo,FDefaultAllocator>::
        ResizeGrow(&local_b8,iVar12);
        puVar23 = local_b8;
      }
      puVar2 = puVar23 + (longlong)iVar12 * 2;
      *(undefined4 *)puVar2 = (undefined4)local_a8;
      *(undefined4 *)((longlong)puVar2 + 4) = local_a8._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_a0._4_4_;
      iVar12 = local_b0;
    }
    uStack_80 = uStack_80 & ~uStack_8c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
  }
  piVar22 = *(int **)(local_res8 + 0x48);
  piVar19 = piVar22 + (longlong)*(int *)(local_res8 + 0x50) * 0xc;
  for (; piVar22 != piVar19; piVar22 = piVar22 + 0xc) {
    iVar10 = piVar22[1];
    lVar17 = (longlong)iVar10;
    lVar16 = 0;
    iVar5 = *piVar22;
    if (((-1 < iVar10) && (iVar10 < (int)local_c0)) &&
       ((lVar6 = *(longlong *)(local_c8 + lVar17 * 8), lVar6 != 0 &&
        (*(int *)(lVar6 + 0x20) == iVar5)))) {
      lVar16 = lVar6;
    }
    if (((lVar16 == 0) && (-1 < iVar10 + -1)) &&
       ((iVar10 + -1 < (int)local_c0 &&
        ((lVar6 = *(longlong *)(local_c8 + -8 + lVar17 * 8), lVar6 != 0 &&
         (*(int *)(lVar6 + 0x20) == iVar5)))))) {
      lVar16 = lVar6;
    }
    if ((lVar16 == 0) &&
       ((((iVar10 + 1 < 0 || ((int)local_c0 <= iVar10 + 1)) ||
         (lVar16 = *(longlong *)(local_c8 + 8 + lVar17 * 8), lVar16 == 0)) ||
        (*(int *)(lVar16 + 0x20) != iVar5)))) {
      uVar15 = 0;
      if (local_c0 != 0) {
        do {
          lVar16 = *(longlong *)(local_c8 + (longlong)(int)uVar15 * 8);
          if ((lVar16 != 0) && (*(int *)(lVar16 + 0x20) == iVar5)) goto LAB_1406a9a8a;
          uVar15 = uVar15 + 1;
        } while (uVar15 < local_c0);
      }
    }
    else {
LAB_1406a9a8a:
      *(char *)(lVar16 + 0x24) = (char)piVar22[2];
    }
  }
  local_a8 = &local_c8;
  uStack_a0 = local_res8;
  pcStack_e0 = (code *)&local_a8;
  local_e8 = &LAB_1406a5e60;
  FUN_1406a7b10(local_c0,&local_e8,0);
  puVar24 = local_b8 + (longlong)iVar12 * 2;
  puVar2 = local_b8;
  for (puVar23 = local_b8; local_b8 = puVar2, puVar23 != puVar24; puVar23 = puVar23 + 2) {
    plVar7 = (longlong *)*puVar23;
    local_res20[0] = *(undefined4 *)(puVar23 + 1);
    local_res8 = (code *)((ulonglong)local_res8 & 0xffffffffffffff00);
    local_a8 = (longlong *)*plVar7;
    uVar9 = (ulonglong)local_res18 >> 0x20;
    local_res18 = (code *)CONCAT44((int)uVar9,(int)plVar7[2]);
    if ((int)plVar7[0x1c] == 0) {
LAB_1406a9b4f:
      uVar11 = 0;
    }
    else {
      plVar13 = (longlong *)plVar7[0x1a];
      if ((longlong *)plVar7[0x1a] == (longlong *)0x0) {
        plVar13 = plVar7 + 0x16;
      }
      if (plVar13 == (longlong *)0x0) goto LAB_1406a9b4f;
      uVar11 = (**(code **)(*plVar13 + 8))();
    }
    (*(code *)plVar7[0x14])(uVar11,&local_a8,local_res20,&local_res18,&local_res8);
    puVar2 = local_b8;
  }
  if (*(longlong *)(pcVar21 + 0x58) == 0) {
    uVar11 = (**(code **)(*(longlong *)pcVar21 + 0x148))(pcVar21);
    FUN_1406a8210(pcVar21,uVar11,&local_c8,local_res10);
  }
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free(puVar2);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  pcVar3 = pcVar21 + 0x78;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 1;
  uVar15 = *(uint *)(pcVar21 + 0xa0);
  pcVar1 = pcVar21 + 0x88;
  uStack_d4 = 0;
  iStack_d0 = 0;
  if (uVar15 != 0) {
    pcVar18 = *(code **)(pcVar21 + 0x98);
    if (*(code **)(pcVar21 + 0x98) == (code *)0x0) {
      pcVar18 = pcVar1;
    }
    uVar4 = *(uint *)pcVar18;
    iStack_d0 = 0;
    local_e8._0_4_ = 0;
    while (uVar4 == 0) {
      lVar16 = (longlong)(int)local_e8;
      iStack_d0 = iStack_d0 + 0x20;
      iVar12 = (int)local_e8 + 1;
      bVar8 = (int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_e8;
      local_e8._0_4_ = iVar12;
      if (bVar8) goto LAB_1406a9c71;
      uVar4 = *(uint *)(pcVar18 + (lVar16 + 1) * 4);
    }
    local_e8._4_4_ = -uVar4 & uVar4;
    iVar12 = 0x1f;
    if (local_e8._4_4_ != 0) {
      for (; local_e8._4_4_ >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (local_e8._4_4_ == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_d4 = (iStack_d0 - iVar12) + 0x1f;
    if ((int)uVar15 < (int)uStack_d4) {
LAB_1406a9c71:
      uStack_d4 = uVar15;
    }
  }
  uVar4 = *(uint *)(pcVar21 + 0xa0);
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_d4;
  local_78 = CONCAT44(uStack_cc,iStack_d0);
  local_d8 = -1 << ((byte)uVar4 & 0x1f);
  iStack_68 = (int)local_e8;
  uStack_64 = local_e8._4_4_;
  uVar20 = uVar4 & 0xffffffe0;
  iStack_90 = (int)local_e8;
  uStack_8c = local_e8._4_4_;
  pcStack_e0 = pcVar1;
  uStack_d4 = uVar4;
  local_88 = pcVar1;
  local_70 = pcVar3;
  pcStack_60 = pcVar1;
  uStack_50 = local_78;
  uStack_58 = uStack_80;
  uStack_54 = uStack_7c;
  local_98 = pcVar3;
  if (uVar4 != uVar15) {
    pcVar18 = *(code **)(pcVar21 + 0x98);
    if (*(code **)(pcVar21 + 0x98) == (code *)0x0) {
      pcVar18 = pcVar1;
    }
    uVar14 = *(uint *)(pcVar18 + (longlong)((int)uVar4 >> 5) * 4) & local_d8;
    iVar12 = (int)uVar4 >> 5;
    while (uVar14 == 0) {
      uVar20 = uVar20 + 0x20;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
      goto LAB_1406a9d36;
      uVar14 = *(uint *)(pcVar18 + ((longlong)iVar12 + 1) * 4);
      local_d8 = 0xffffffff;
      iVar12 = iVar12 + 1;
    }
    uVar14 = -uVar14 & uVar14;
    iVar12 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_d4 = (uVar20 - iVar12) + 0x1f;
    uVar4 = uStack_d4;
    if ((int)uVar15 < (int)uStack_d4) {
LAB_1406a9d36:
      uStack_d4 = uVar15;
      uVar4 = uVar15;
    }
  }
  while (((uStack_7c != uVar4 || (local_88 != pcVar1)) || (local_98 != pcVar3))) {
    local_res8 = FUN_1406a5ef0;
    if ((*(uint *)(pcVar21 + 0x60) >> 2 & 1) != 0) {
      local_res8 = FUN_1406a5ee0;
    }
    TMergeSort<TRotationInPlaceMerge<TJugglingRotation<FEuclidDivisionGCD>_>,2>::
    Sort<USignificanceManager::FManagedObjectInfo_*,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
              (*(undefined8 *)((longlong)(int)uStack_7c * 0x20 + 8 + *(longlong *)local_98),
               *(undefined4 *)((longlong)(int)uStack_7c * 0x20 + 0x10 + *(longlong *)local_98),
               &local_res8);
    uStack_80 = uStack_80 & ~uStack_8c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
  }
  return;
}



// FUNCTION 1406a9dd0 FUN_1406a9dd0 body=648 status=ok
// SIG undefined FUN_1406a9dd0(void)

void FUN_1406a9dd0(undefined8 *param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  uint local_res8 [2];
  float local_res10 [2];
  uint local_res20 [2];
  undefined8 local_48 [4];
  
  uVar3 = 0;
  uVar1 = *(uint *)(param_1 + 2);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    local_res10[0] = 0.0;
  }
  else if (param_3 == '\0') {
    local_res10[0] = -3.4028235e+38;
    *(undefined4 *)(param_1 + 2) = 0xff7fffff;
    lVar5 = *param_2;
    lVar6 = (longlong)(int)param_2[1] * 0x30 + lVar5;
    if (lVar5 != lVar6) {
      do {
        local_res10[0] = 0.0;
        local_res8[0] = 0;
        FUN_1406a6640(param_1[3],lVar5,local_res10,local_res8);
        local_res20[0] = local_res8[0];
        local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)((longlong)param_1 + 0x24));
        local_48[0] = *param_1;
        uVar2 = uVar3;
        if (*(int *)(param_1 + 0x12) != 0) {
          plVar4 = (longlong *)param_1[0x10];
          if ((longlong *)param_1[0x10] == (longlong *)0x0) {
            plVar4 = param_1 + 0xc;
          }
          if (plVar4 != (longlong *)0x0) {
            uVar2 = (**(code **)(*plVar4 + 8))();
          }
        }
        fVar7 = (float)(*(code *)param_1[10])
                                 (uVar2,local_48,lVar5,local_res8,local_res10,local_res20);
        local_res10[0] = *(float *)(param_1 + 2);
        if (local_res10[0] < fVar7) {
          *(float *)(param_1 + 2) = fVar7;
          local_res10[0] = fVar7;
        }
        lVar5 = lVar5 + 0x30;
      } while (lVar5 != lVar6);
    }
  }
  else {
    local_res10[0] = 3.4028235e+38;
    *(undefined4 *)(param_1 + 2) = 0x7f7fffff;
    lVar5 = *param_2;
    lVar6 = (longlong)(int)param_2[1] * 0x30 + lVar5;
    if (lVar5 != lVar6) {
      do {
        local_res10[0] = 0.0;
        local_res8[0] = 0;
        FUN_1406a6640(param_1[3],lVar5,local_res10,local_res8);
        local_res20[0] = local_res8[0];
        local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)((longlong)param_1 + 0x24));
        local_48[0] = *param_1;
        uVar2 = uVar3;
        if (*(int *)(param_1 + 0x12) != 0) {
          plVar4 = (longlong *)param_1[0x10];
          if ((longlong *)param_1[0x10] == (longlong *)0x0) {
            plVar4 = param_1 + 0xc;
          }
          if (plVar4 != (longlong *)0x0) {
            uVar2 = (**(code **)(*plVar4 + 8))();
          }
        }
        fVar7 = (float)(*(code *)param_1[10])
                                 (uVar2,local_48,lVar5,local_res8,local_res10,local_res20);
        local_res10[0] = *(float *)(param_1 + 2);
        if (fVar7 < local_res10[0]) {
          *(float *)(param_1 + 2) = fVar7;
          local_res10[0] = fVar7;
        }
        lVar5 = lVar5 + 0x30;
      } while (lVar5 != lVar6);
    }
  }
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    local_48[0] = *param_1;
    local_res8[0] = local_res8[0] & 0xffffff00;
    local_res20[0] = uVar1;
    if (*(int *)(param_1 + 0x1c) != 0) {
      plVar4 = (longlong *)param_1[0x1a];
      if ((longlong *)param_1[0x1a] == (longlong *)0x0) {
        plVar4 = param_1 + 0x16;
      }
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 8))();
      }
    }
    (*(code *)param_1[0x14])(uVar3,local_48,local_res20,local_res10,local_res8);
  }
  return;
}



// FUNCTION 1406aa060 FUN_1406aa060 body=841 status=ok
// SIG undefined FUN_1406aa060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406aa060(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  float local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  float local_a0;
  longlong local_98 [6];
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (((int)param_1[7] != 0) && ((char)param_1[5] != '\0')) {
    local_68 = (longlong *)0x0;
    local_60 = 0;
    uVar6 = (**(code **)(*param_1 + 0x148))();
    UWorld::GetPlayerControllerIterator(uVar6,&local_c8);
    while( true ) {
      if (((int)local_c0 < 0) || (*(int *)(local_c8 + 8) <= (int)local_c0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) break;
      plVar7 = (longlong *)FWeakObjectPtr::Get();
      if ((plVar7 != (longlong *)0x0) && (lVar9 = plVar7[0xa1], lVar9 != 0)) {
        lVar8 = ULocalPlayer::GetPrivateStaticClass();
        lVar9 = *(longlong *)(lVar9 + 0x10);
        if ((*(int *)(lVar9 + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar9 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (lVar9 = (**(code **)(*plVar7 + 0x688))(), uVar4 = local_60, lVar9 != 0)) {
          lVar9 = *(longlong *)(lVar9 + 0x168);
          if (lVar9 == 0) {
            puVar10 = &local_d8;
            local_d8 = _DAT_1468b5d90;
            local_d0 = DAT_1468b5d98;
          }
          else {
            puVar10 = &local_e8;
            local_e0 = *(float *)(lVar9 + 0x228);
            local_e8 = *(undefined8 *)(lVar9 + 0x220);
          }
          lVar9 = (longlong)(int)local_60;
          iVar5 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar5);
          if (local_60._4_4_ < iVar5) {
            TArray<FVertexInputStream,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (local_98,uVar4 & 0xffffffff);
          }
          plVar7 = local_98;
          if (local_68 != (longlong *)0x0) {
            plVar7 = local_68;
          }
          uVar2 = *(undefined4 *)(puVar10 + 1);
          *(undefined8 *)((longlong)plVar7 + lVar9 * 0xc) = *puVar10;
          *(undefined4 *)((longlong)plVar7 + lVar9 * 0xc + 8) = uVar2;
        }
      }
      local_c0 = (float)((int)local_c0 + 1);
    }
    iVar5 = *(int *)((longlong)param_1 + 0x44);
    if (0 < iVar5) {
      iVar11 = (int)param_1[8];
      do {
        lVar9 = *(longlong *)(param_1[6] + (longlong)iVar11 * 8);
        if ((*(byte *)(lVar9 + 0x340) & 2) != 0) {
          lVar8 = *(longlong *)(lVar9 + 0x168);
          if (lVar8 == 0) {
            local_b0 = DAT_1468b5d98;
            puVar10 = &local_b8;
            local_b8 = _DAT_1468b5d90;
          }
          else {
            puVar10 = &local_d8;
            local_d0 = *(undefined4 *)(lVar8 + 0x228);
            local_d8 = *(undefined8 *)(lVar8 + 0x220);
          }
          uVar6 = *puVar10;
          fVar15 = 3.4028235e+38;
          local_e0 = *(float *)(puVar10 + 1);
          local_e8 = uVar6;
          uVar6 = local_e8;
          plVar7 = local_98;
          if (local_68 != (longlong *)0x0) {
            plVar7 = local_68;
          }
          plVar1 = (longlong *)((longlong)plVar7 + (longlong)(int)local_60 * 0xc);
          if (plVar7 != plVar1) {
            local_e8._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
            local_e8._0_4_ = (float)uVar6;
            do {
              lVar8 = *plVar7;
              local_a0 = *(float *)(plVar7 + 1);
              fVar14 = (float)((ulonglong)lVar8 >> 0x20) - local_e8._4_4_;
              fVar13 = (float)lVar8 - (float)local_e8;
              fVar12 = local_a0 - *(float *)(puVar10 + 1);
              fVar12 = fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12;
              if (fVar12 < fVar15) {
                local_c8 = lVar8;
                local_c0 = local_a0;
                fVar15 = fVar12;
              }
              plVar7 = (longlong *)((longlong)plVar7 + 0xc);
            } while (plVar7 != plVar1);
          }
          local_e8 = uVar6;
          FUN_142240a20(lVar9,&local_c8);
        }
        *(int *)(param_1 + 8) = (int)param_1[8] + 1;
        iVar5 = iVar5 + -1;
        iVar11 = (int)param_1[8];
        if ((int)param_1[7] <= iVar11) {
          iVar11 = 0;
          *(undefined4 *)(param_1 + 8) = 0;
        }
      } while (0 < iVar5);
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406aa3b0 FUN_1406aa3b0 body=47 status=ok
// SIG undefined FUN_1406aa3b0(void)

longlong FUN_1406aa3b0(void)

{
  if (DAT_146857fb8 == 0) {
    FUN_141786440(&DAT_146857fb8,&PTR_FUN_144045c00);
  }
  return DAT_146857fb8;
}



// FUNCTION 1406aa3e0 FUN_1406aa3e0 body=47 status=ok
// SIG undefined FUN_1406aa3e0(void)

longlong FUN_1406aa3e0(void)

{
  if (DAT_146857fd0 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146857fd0,&PTR_s__Script_SignificanceManager_144045e00);
  }
  return DAT_146857fd0;
}



// FUNCTION 1406aa410 FUN_1406aa410 body=47 status=ok
// SIG undefined FUN_1406aa410(void)

longlong FUN_1406aa410(void)

{
  if (DAT_146857fa8 == 0) {
    FUN_141786a30(&DAT_146857fa8,&PTR_FUN_14622ca70);
  }
  return DAT_146857fa8;
}



// FUNCTION 1406aa440 FUN_1406aa440 body=47 status=ok
// SIG undefined FUN_1406aa440(void)

longlong FUN_1406aa440(void)

{
  if (DAT_146857fb0 == 0) {
    FUN_141786a30(&DAT_146857fb0,&PTR_FUN_14622caf0);
  }
  return DAT_146857fb0;
}



// FUNCTION 1406aa490 FUN_1406aa490 body=151 status=ok
// SIG undefined FUN_1406aa490(void)

longlong FUN_1406aa490(void)

{
  if (DAT_146857fc0 == 0) {
    FUN_14171ccd0(L"/Script/SignificanceManager",L"SignificanceManager",&DAT_146857fc0,FUN_1406aa540
                  ,0x130,0x10000006,0,L"Engine",&LAB_1406aa530,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146857fc0;
}



// FUNCTION 1406aa540 FUN_1406aa540 body=34 status=ok
// SIG undefined FUN_1406aa540(void)

void FUN_1406aa540(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1406aa490();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnTickActorEndPlay_144045de0,2);
  return;
}



// FUNCTION 1406aa570 execOnOwnerEndPlay body=192 status=ok
// SIG undefined execOnOwnerEndPlay(void)

void UAIPerceptionComponent::execOnOwnerEndPlay(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
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
  thunk_FUN_1406a9330(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1406aa630 FUN_1406aa630 body=128 status=ok
// SIG undefined FUN_1406aa630(void)

void FUN_1406aa630(undefined8 param_1,longlong param_2)

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
  FUN_1406a9330(param_1,local_res10);
  return;
}



// FUNCTION 1406aa6c0 FUN_1406aa6c0 body=1545 status=ok
// SIG undefined FUN_1406aa6c0(void)

void FUN_1406aa6c0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined4 local_res10 [2];
  longlong local_c8;
  longlong local_c0;
  longlong local_b8 [4];
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38 [2];
  
  if (param_2 != 0) {
    lVar14 = 0;
    local_res10[0] = 0;
    FString::operator=(param_1 + 0x12,param_3);
    FWeakObjectPtr::operator=(param_1 + 0x11,param_2);
    uStack_90 = 0;
    local_98 = FUN_1406aec20;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_58 = plVar9;
    if (plVar9 == (longlong *)0x0) {
      if ((DAT_146858058 != 0) && (DAT_146858050 != (longlong *)0x0)) {
        (**(code **)(*DAT_146858050 + 0x28))(DAT_146858050,0);
        if (DAT_146858050 != (longlong *)0x0) {
          DAT_146858050 = (longlong *)FMemory::Realloc(DAT_146858050,0,0);
        }
        DAT_146858058 = 0;
      }
    }
    else {
      plVar9[1] = (longlong)param_1;
      *plVar9 = (longlong)&PTR_GetPoolName_143f77a38;
      plVar9[2] = (longlong)local_98;
      plVar9[3] = CONCAT44(uStack_8c,uStack_90);
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar10;
      *plVar9 = (longlong)&PTR_GetPoolName_143f77a80;
      FUN_1404c8570(plVar9,&DAT_146858050);
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      local_58 = (longlong *)FMemory::Realloc(plVar9,0,0);
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
    }
    *(int *)((longlong)param_1 + 0xb4) = (int)param_1[0x16];
    (**(code **)(*param_1 + 0xa8))(param_1);
    local_c8 = 0;
    local_c0 = 0;
    uVar11 = FWeakObjectPtr::Get(param_1 + 0x11);
    FUN_142450450(uVar11,&local_78);
    lVar10 = FUN_142b45e90();
    uVar11 = *(undefined8 *)(lVar10 + 0x18);
    if (local_78 == 0) {
      plVar9 = &local_88;
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = false;
      bVar5 = true;
    }
    else {
      local_68 = local_78;
      plStack_60 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
        UNLOCK();
      }
      plVar9 = (longlong *)FUN_142b4a990(uVar11,local_48,&local_68);
      bVar7 = true;
      bVar6 = true;
      bVar5 = false;
      lVar14 = *plVar9;
    }
    plVar4 = (longlong *)plVar9[1];
    plVar9[1] = 0;
    *plVar9 = 0;
    plVar9 = plStack_80;
    if ((bVar5) && (plStack_80 != (longlong *)0x0)) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
    if ((bVar6) && (local_40 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_40 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    plVar9 = plStack_60;
    if ((bVar7) && (plStack_60 != (longlong *)0x0)) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (lVar14 != 0) {
      uVar11 = FName::FName(local_res10,L"Pennant",1);
      FUN_142b4a0e0(lVar14,&local_98,uVar11);
      if (local_98 != (code *)0x0) {
        local_b8[3] = 0xc;
        local_b8[2] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 2,0);
        FGenericPlatformString::Memcpy(local_b8[2],L"EndpointUrl",0x18);
        plVar9 = (longlong *)FUN_142afb430(local_98,local_38,local_b8 + 2);
        if (&local_c8 != plVar9) {
          if (local_c8 != 0) {
            FMemory::Free();
          }
          local_c8 = *plVar9;
          *plVar9 = 0;
          local_c0 = plVar9[1];
          plVar9[1] = 0;
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        if (local_b8[2] != 0) {
          FMemory::Free();
        }
        if (1 < (int)local_c0) {
          local_b8[0] = 0;
          local_b8[1] = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
          FGenericPlatformString::Memcpy(local_b8[0],L"https://",0x12);
          cVar8 = FString::StartsWith(&local_c8,local_b8,1);
          if (cVar8 != '\0') {
            FString::RemoveFromStart(&local_c8,local_b8,1);
          }
          if (local_b8[0] != 0) {
            FMemory::Free();
          }
        }
      }
      plVar9 = (longlong *)CONCAT44(uStack_8c,uStack_90);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    puVar12 = (undefined8 *)operator_new(0x20);
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      *puVar12 = &PTR__purecall_143f740d8;
      plVar9 = (longlong *)FUN_1404cfca0();
      iVar3 = (int)plVar9[1];
      *(int *)(plVar9 + 1) = iVar3 + 1;
      if (*(int *)((longlong)plVar9 + 0xc) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar3);
      }
      *(undefined8 **)(*plVar9 + (longlong)iVar3 * 8) = puVar12;
      *puVar12 = &PTR_StartProfileThreadUsage_14404bde0;
      puVar12[2] = 0;
      puVar12[3] = 0;
    }
    puVar13 = (undefined8 *)0x0;
    plVar9 = (longlong *)param_1[0x18];
    param_1[0x18] = (longlong)puVar12;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,1);
      puVar12 = (undefined8 *)param_1[0x18];
    }
    FUN_1406b5010(puVar12,&local_c8,param_1 + 0x12,param_1);
    puVar12 = (undefined8 *)operator_new(0x80);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &PTR__purecall_143f740d8;
      plVar9 = (longlong *)FUN_1404cfca0();
      iVar3 = (int)plVar9[1];
      *(int *)(plVar9 + 1) = iVar3 + 1;
      if (*(int *)((longlong)plVar9 + 0xc) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar3);
      }
      *(undefined8 **)(*plVar9 + (longlong)iVar3 * 8) = puVar12;
      *puVar12 = &PTR_FUN_14404bd98;
      puVar12[1] = 0x41f00000;
      puVar12[2] = 0;
      *(undefined4 *)(puVar12 + 3) = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      *(undefined4 *)(puVar12 + 9) = *(undefined4 *)(puVar12 + 1);
      *(undefined1 *)(puVar12 + 8) = 0;
      *(undefined4 *)((longlong)puVar12 + 0x44) = 0;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      *(undefined1 *)(puVar12 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar12 + 100) = 0;
      *(undefined1 *)(puVar12 + 0xd) = 1;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0;
      puVar13 = puVar12;
    }
    plVar9 = (longlong *)param_1[0x19];
    param_1[0x19] = (longlong)puVar13;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,1);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar4 + 1;
      lVar14 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
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
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_70 + 1;
      lVar14 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plStack_70 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
    if (local_c8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406aacd0 FUN_1406aacd0 body=1482 status=ok
// SIG undefined FUN_1406aacd0(void)

void FUN_1406aacd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_1b8;
  longlong *plStack_1b0;
  longlong local_1a8 [12];
  undefined1 local_148;
  undefined4 local_147;
  undefined2 local_143;
  undefined1 local_141;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108 [12];
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [3];
  undefined8 local_48 [4];
  
  puVar4 = (undefined4 *)(param_1 + 0x88);
  lVar10 = 0;
  local_res8 = 0;
  cVar6 = FWeakObjectPtr::IsValid(puVar4);
  bVar12 = cVar6 == '\0';
  if (bVar12) {
    plVar8 = &local_1b8;
    local_1b8 = 0;
    plStack_1b0 = (longlong *)0x0;
  }
  else {
    uVar7 = FWeakObjectPtr::Get(puVar4);
    plVar8 = (longlong *)FUN_142450450(uVar7,local_90);
    lVar10 = *plVar8;
  }
  plVar5 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8 = plStack_1b0;
  if ((bVar12) && (plStack_1b0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_1b0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_1b0)(plStack_1b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_1b0 + 8))(plStack_1b0,1);
      }
    }
  }
  if ((!bVar12) && (local_88 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_88 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  lVar9 = FUN_142b45e90();
  uVar7 = *(undefined8 *)(lVar9 + 0x18);
  if ((DAT_146858058 != 0) && (DAT_146858050 != (longlong *)0x0)) {
    (**(code **)(*DAT_146858050 + 0x28))(DAT_146858050,0);
    if (DAT_146858050 != (longlong *)0x0) {
      DAT_146858050 = (longlong *)FMemory::Realloc(DAT_146858050,0,0);
    }
    DAT_146858058 = 0;
  }
  if ((*(longlong *)(param_1 + 0xa8) != 0) && (lVar10 != 0)) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_108[0xb] = lVar10;
    local_a8 = plVar5;
    FUN_142b4a990(uVar7,&local_a0,local_108 + 0xb);
    plVar8 = local_a8;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (local_a0 != 0) {
      TBaseMulticastDelegate<void>::Remove(local_a0 + 0x180,*(undefined8 *)(param_1 + 0xa8));
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_98 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)local_98 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
  }
  cVar6 = FWeakObjectPtr::IsValid(puVar4);
  if (cVar6 != '\0') {
    plVar8 = (longlong *)FWeakObjectPtr::Get(puVar4);
    lVar10 = (**(code **)(*plVar8 + 0x148))(plVar8);
    if (lVar10 != 0) {
      if (*(longlong *)(lVar10 + 400) == 0) {
        uVar7 = *(undefined8 *)(lVar10 + 0x3f8);
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar10 + 400) + 0x90);
      }
      FUN_142880530(uVar7,param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
  }
  plVar8 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x30) != 0) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))(), cVar6 != '\0')) {
    if (*(int *)(param_1 + 0x30) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x28);
    }
    (**(code **)(*plVar8 + 0x40))(plVar8,0);
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  *puVar4 = local_res8;
  *(undefined4 *)(param_1 + 0x8c) = local_resc;
  local_108[10] = 0;
  local_108[1] = 0;
  local_108[3] = 0;
  local_108[5] = 0;
  local_108[7] = 0;
  local_108[9] = 0;
  local_108[0] = 0;
  local_108[2] = 0;
  local_108[4] = 0;
  local_108[6] = 0;
  local_108[8] = 0;
  FUN_1406add80(param_1 + 0xd0,local_108);
  if (local_108[8] != 0) {
    FMemory::Free();
  }
  if (local_108[6] != 0) {
    FMemory::Free();
  }
  if (local_108[4] != 0) {
    FMemory::Free();
  }
  if (local_108[2] != 0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  plVar8 = (longlong *)(param_1 + 0x1d0);
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  if (plVar8 != local_80) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    *plVar8 = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  plVar8 = (longlong *)(param_1 + 0x1e0);
  if (plVar8 != local_70) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    *plVar8 = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  plVar8 = (longlong *)(param_1 + 0x1f0);
  if (plVar8 != local_60) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    *plVar8 = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  puVar3 = (undefined8 *)(param_1 + 0x208);
  *(undefined1 *)(param_1 + 0x200) = 0;
  if (puVar3 != local_48) {
    iVar11 = *(int *)(param_1 + 0x210);
    plVar8 = (longlong *)*puVar3;
    if (iVar11 != 0) {
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      plVar8 = (longlong *)*puVar3;
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
    *puVar3 = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  *(undefined1 *)(param_1 + 0x218) = 0;
  local_147 = 0;
  local_143 = 0;
  local_141 = 0;
  local_130 = 0;
  local_1a8[1] = 0;
  local_1a8[3] = 0;
  local_1a8[5] = 0;
  local_1a8[7] = 0;
  local_1a8[9] = 0;
  local_1a8[0xb] = 0;
  local_148 = 0;
  local_138 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a8[0] = 0;
  local_1a8[2] = 0;
  local_1a8[4] = 0;
  local_1a8[6] = 0;
  local_1a8[8] = 0;
  local_1a8[10] = 0;
  local_140 = 0;
  local_128 = 0;
  local_118 = 0;
  FUN_1406adaa0(param_1 + 0x128,local_1a8);
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (local_140 != 0) {
    FMemory::Free();
  }
  if (local_1a8[10] != 0) {
    FMemory::Free();
  }
  if (local_1a8[8] != 0) {
    FMemory::Free();
  }
  if (local_1a8[6] != 0) {
    FMemory::Free();
  }
  if (local_1a8[4] != 0) {
    FMemory::Free();
  }
  if (local_1a8[2] != 0) {
    FMemory::Free();
  }
  if (local_1a8[0] != 0) {
    FMemory::Free();
  }
  *(undefined2 *)(param_1 + 0x220) = 0;
  plVar8 = *(longlong **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,1);
  }
  plVar8 = *(longlong **)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,1);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1406ab2d0 FUN_1406ab2d0 body=62 status=ok
// SIG undefined FUN_1406ab2d0(void)

undefined8 * FUN_1406ab2d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Twitch",0xe);
  return param_2;
}



// FUNCTION 1406ab310 GetTargetUnitName body=33 status=ok
// SIG undefined GetTargetUnitName(void)

undefined8 UMWAITargetSelectionComponent::GetTargetUnitName(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0xd0);
  return param_2;
}



// FUNCTION 1406ab340 FUN_1406ab340 body=33 status=ok
// SIG undefined FUN_1406ab340(void)

undefined8 FUN_1406ab340(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0xf0);
  return param_2;
}



// FUNCTION 1406ab370 GetDebugName body=33 status=ok
// SIG undefined GetDebugName(void)

undefined8 FLinker::GetDebugName(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x1e0);
  return param_2;
}



// FUNCTION 1406ab3a0 FUN_1406ab3a0 body=8 status=ok
// SIG undefined FUN_1406ab3a0(void)

undefined1 FUN_1406ab3a0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x220);
}



// FUNCTION 1406ab3b0 GetReportOutputPath body=33 status=ok
// SIG undefined GetReportOutputPath(void)

undefined8 FAutomationControllerManager::GetReportOutputPath(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 400);
  return param_2;
}



// FUNCTION 1406ab3e0 FUN_1406ab3e0 body=7 status=ok
// SIG undefined FUN_1406ab3e0(void)

undefined4 FUN_1406ab3e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1a0);
}



// FUNCTION 1406ab450 FUN_1406ab450 body=76 status=ok
// SIG undefined FUN_1406ab450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406ab450(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x60) != 0) && (*(longlong **)(param_1 + 0x58) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x60) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001406ab484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001406ab492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 1406ab4a0 FUN_1406ab4a0 body=116 status=ok
// SIG undefined FUN_1406ab4a0(void)

void FUN_1406ab4a0(longlong *param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0xb;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"BeginEvent",0x16);
  (**(code **)(*param_1 + 0x98))(param_1,local_18,0,param_2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406ab520 FUN_1406ab520 body=377 status=ok
// SIG undefined FUN_1406ab520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406ab520(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Memory;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)operator_new(0x28);
  plVar4 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    plVar3[1] = 0x10000;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar4 = plVar3;
  }
  local_58 = &local_48;
  local_48 = 0;
  local_40 = 0x3000000000000;
  local_50 = plVar4;
  FUN_142ab61f0(&local_58,"event_id",param_2);
  FUN_142ab64b0(&local_58,"reason",param_3);
  local_68[0] = 0;
  local_68[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"EndEvent",0x12);
  (**(code **)(*param_1 + 0x98))(param_1,local_68,0,&local_58);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (plVar4 != (longlong *)0x0) {
    _Memory = (void *)*plVar4;
    if ((void *)*plVar4 != (void *)0x0) {
      do {
        if (_Memory == (void *)plVar4[2]) break;
        pvVar1 = *(void **)((longlong)_Memory + 0x10);
        free(_Memory);
        *plVar4 = (longlong)pvVar1;
        _Memory = pvVar1;
      } while (pvVar1 != (void *)0x0);
      lVar2 = *plVar4;
      if ((lVar2 != 0) && (lVar2 == plVar4[2])) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
    }
    FMemory::operator_delete(plVar4[4],1);
    FMemory::operator_delete(plVar4,0x28);
  }
  free((void *)0x0);
  FMemory::operator_delete(0,1);
  return;
}



// FUNCTION 1406ab6a0 FUN_1406ab6a0 body=105 status=ok
// SIG undefined FUN_1406ab6a0(void)

void FUN_1406ab6a0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 1406ab750 FUN_1406ab750 body=579 status=ok
// SIG undefined FUN_1406ab750(void)

void FUN_1406ab750(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *local_58;
  int local_50;
  longlong *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined4 local_30;
  
  puVar5 = (undefined8 *)*param_2;
  iVar4 = *(int *)(param_2 + 1);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_48 = (longlong *)0x0;
  local_40 = iVar4;
  if (iVar4 == 0) {
    local_3c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_48,iVar4,0);
    plVar2 = local_48;
    do {
      *plVar2 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      _Src = (void *)*puVar5;
      *(int *)(plVar2 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)plVar2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar2,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar2,_Src,(longlong)iVar1 * 2);
      }
      plVar2 = plVar2 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_38 = 0;
  local_30 = 0;
  if (((param_3 != &local_38) && ((int)param_3[1] != 0)) &&
     (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_38);
  }
  plVar2 = (longlong *)FMemory::Realloc(0,0x40);
  if (plVar2 == (longlong *)0x0) {
    if (((local_50 != 0) && (local_58 != (longlong *)0x0)) &&
       ((**(code **)(*local_58 + 0x28))(local_58,0), local_58 != (longlong *)0x0)) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
  }
  else {
    FUN_1406acdb0(plVar2,&local_48);
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_58);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  plVar2 = local_48;
  for (iVar4 = local_40; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x30))(local_58,&local_48);
  }
  FUN_1406bba00(param_2,&local_48);
  if (local_50 != 0) {
    if (local_58 == (longlong *)0x0) goto LAB_1406ab982;
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
LAB_1406ab982:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return;
}



// FUNCTION 1406ab9a0 FUN_1406ab9a0 body=969 status=ok
// SIG undefined FUN_1406ab9a0(void)

void FUN_1406ab9a0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  longlong local_res10;
  undefined1 local_res18 [8];
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong *local_48;
  
  lVar12 = 0;
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x11);
  bVar16 = cVar7 == '\0';
  if (bVar16) {
    plVar9 = &local_c8;
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    lVar15 = lVar12;
  }
  else {
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x11);
    plVar9 = (longlong *)FUN_142450450(uVar8,local_88);
    lVar15 = *plVar9;
  }
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_c0;
  if ((bVar16) && (plStack_c0 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_c0 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  if ((!bVar16) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_80 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  lVar10 = FUN_142b45e90();
  uVar8 = *(undefined8 *)(lVar10 + 0x18);
  if (lVar15 == 0) {
    local_res10 = 0;
    local_b8 = 0;
    plStack_b0 = (longlong *)0x0;
    plVar9 = &local_b8;
    bVar6 = false;
    bVar5 = false;
    bVar16 = true;
  }
  else {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_a8 = lVar15;
    local_a0 = plVar3;
    plVar9 = (longlong *)FUN_142b4a990(uVar8,local_78,&local_a8);
    bVar6 = true;
    bVar5 = true;
    bVar16 = false;
    local_res10 = *plVar9;
  }
  plVar4 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_b0;
  if (bVar16) {
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_b0 + 1;
      lVar15 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
        }
      }
    }
  }
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_70 + 1;
    lVar15 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
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
  plVar9 = local_a0;
  if ((bVar6) && (local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_a0 + 1;
    lVar15 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (local_res10 == 0) {
    FUN_1406b1590(param_1 + 3,0,1);
  }
  else if (param_1[0x15] == 0) {
    uStack_90 = 0;
    local_98 = FUN_1406b6a80;
    plVar9 = (longlong *)(local_res10 + 0x180);
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    local_48 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      plVar11[1] = (longlong)param_1;
      *plVar11 = (longlong)&PTR_GetPoolName_143fc2050;
      *(undefined4 *)(plVar11 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar11 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar11 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_8c;
      lVar12 = FDelegateHandle::GenerateNewID();
      plVar11[5] = lVar12;
      *plVar11 = (longlong)&PTR_GetPoolName_143fc2098;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
      plVar13 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11,local_res18);
      iVar2 = *(int *)(local_res10 + 0x188);
      lVar12 = *plVar13;
      *(int *)(local_res10 + 0x188) = iVar2 + 1;
      if (*(int *)(local_res10 + 0x18c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar2);
      }
      puVar14 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar9);
      *puVar14 = plVar11;
      *(undefined4 *)(puVar14 + 1) = 3;
    }
    param_1[0x15] = lVar12;
    uVar8 = (**(code **)(*param_1 + 0x20))(param_1,local_58);
    uVar8 = FString::ToLower(uVar8,local_68);
    FUN_142b688c0(local_res10,uVar8,1);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar12 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
    plVar9 = plVar3 + 1;
    lVar12 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  return;
}



// FUNCTION 1406abd70 FUN_1406abd70 body=52 status=ok
// SIG undefined FUN_1406abd70(void)

undefined8 FUN_1406abd70(undefined8 param_1,ulonglong param_2)

{
  FUN_1406ada20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1406abdb0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UUGXPBarUW::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406ad890();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x228);
  }
  return param_1;
}



// FUNCTION 1406abdf0 FUN_1406abdf0 body=564 status=ok
// SIG undefined FUN_1406abdf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406abdf0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_res8;
  
  lVar9 = 0;
  if (DAT_146857fe0 == 0) {
    uVar3 = GetTransientPackage();
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_res8 = 0;
    uVar4 = FUN_1406beb90();
    DAT_146857fe0 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
    iVar1 = *(int *)(DAT_146857fe0 + 0xc);
    lVar6 = lVar9;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar8) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
    if (DAT_146857ff0 == 0) {
      uVar3 = GetTransientPackage();
      FUN_1417846f0(uVar3,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_res8 = 0;
      uVar4 = FUN_1406bec30();
      DAT_146857ff0 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
      iVar1 = *(int *)(DAT_146857ff0 + 0xc);
      lVar6 = lVar9;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar8 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar8;
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar8) * 0x18;
      }
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
    }
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_GetPoolName_14404be58;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[2] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_14404bea0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af190,1);
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_res8);
    iVar1 = DAT_1464af198;
    lVar6 = (longlong)DAT_1464af198;
    DAT_1464af198 = DAT_1464af198 + 1;
    if (DAT_1464af19c < DAT_1464af198) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af190,iVar1);
    }
    puVar7 = (undefined8 *)(lVar6 * 0x10 + _DAT_1464af190);
    *puVar7 = plVar5;
    *(undefined4 *)(puVar7 + 1) = 2;
  }
  plVar5 = (longlong *)FUN_141593110();
  lVar6 = *plVar5;
  puVar7 = (undefined8 *)FName::FName(&local_res8,"StreamingInteraction",1);
  lVar10 = param_1 + 0x10;
  if (param_1 == -8) {
    lVar10 = lVar9;
  }
  (**(code **)(lVar6 + 0x18))(plVar5,*puVar7,lVar10);
  return;
}



// FUNCTION 1406ac030 ShutdownModule body=85 status=ok
// SIG undefined ShutdownModule(void)

void FEditableMeshModule::ShutdownModule(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)FUN_141593110();
  puVar2 = (undefined8 *)FName::FName(local_res8,"StreamingInteraction",1);
  lVar3 = param_1 + 0x10;
  if (param_1 == -8) {
    lVar3 = 0;
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,*puVar2,lVar3);
  return;
}


