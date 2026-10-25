// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143143870 CAkBus body=268 status=ok
// SIG undefined CAkBus(void)

undefined8 * CAkBus::CAkBus(undefined8 *param_1)

{
  CAkParameterNodeBase::CAkParameterNodeBase();
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145ac7508;
  param_1[3] = &PTR_LAB_145ac7758;
  param_1[0x18] = 0;
  param_1[6] = &PTR_LAB_145ac77d8;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  *(uint *)((longlong)param_1 + 0xdc) = *(uint *)((longlong)param_1 + 0xdc) & 0xff;
  *(undefined4 *)(param_1 + 0x1c) = 0xc2c0999a;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  CAkRTPCSubscriberNode::CAkRTPCSubscriberNode(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x174) = *(byte *)((longlong)param_1 + 0x174) & 0xb0 | 0x30;
  return param_1;
}



// FUNCTION 143143980 ~CAkParentNode<CAkParameterNodeBase> body=108 status=ok
// SIG undefined ~CAkParentNode<CAkParameterNodeBase>(void)

void CAkParentNode<CAkParameterNodeBase>::~CAkParentNode<CAkParameterNodeBase>(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac6f60;
  param_1[3] = &PTR_LAB_145ac71a8;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  if ((void *)param_1[0x16] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x16]);
    param_1[0x16] = 0;
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  FUN_143173560(param_1);
  return;
}



// FUNCTION 1431439f0 ~CAkBus body=773 status=ok
// SIG undefined ~CAkBus(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkBus::~CAkBus(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__145ac7508;
  param_1[3] = &PTR_LAB_145ac7758;
  param_1[6] = &PTR_LAB_145ac77d8;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50ee8);
  if ((*(byte *)((longlong)param_1 + 0x174) & 0x40) != 0) {
    for (plVar3 = DAT_146b50ec8;
        (plVar3 != DAT_146b50ec8 + DAT_146b50ed0 && ((undefined8 *)*plVar3 != param_1));
        plVar3 = plVar3 + 1) {
    }
    if (plVar3 != DAT_146b50ec8 + DAT_146b50ed0) {
      if (1 < DAT_146b50ed0) {
        *plVar3 = (DAT_146b50ec8 + DAT_146b50ed0)[-1];
      }
      DAT_146b50ed0 = DAT_146b50ed0 - 1;
    }
    *(byte *)((longlong)param_1 + 0x174) = *(byte *)((longlong)param_1 + 0x174) & 0xbf;
    BackgroundMusic_Unmute(param_1);
    if ((DAT_146b50ed0 == 0) && (DAT_146b50ec8 != (longlong *)0x0)) {
      DAT_146b50ed0 = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b50ec8);
      DAT_146b50ec8 = (longlong *)0x0;
      _DAT_146b50ed4 = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50ee8);
  for (puVar1 = (undefined8 *)param_1[0x22]; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    CAkDuckItem::Term(puVar1 + 2);
  }
  CAkList2<MapStruct<unsigned_long,CAkDuckItem>,MapStruct<unsigned_long,CAkDuckItem>_const_&,1,_ArrayPoolDefault>
  ::Term(param_1 + 0x22);
  for (puVar1 = (undefined8 *)param_1[0x27]; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    CAkDuckItem::Term(puVar1 + 2);
  }
  CAkList2<MapStruct<unsigned_long,CAkDuckItem>,MapStruct<unsigned_long,CAkDuckItem>_const_&,1,_ArrayPoolDefault>
  ::Term(param_1 + 0x27);
  CAkList2<MapStruct<unsigned_long,CAkBus::AkDuckInfo>,MapStruct<unsigned_long,CAkBus::AkDuckInfo>_const_&,1,_ArrayPoolDefault>
  ::RemoveAll(param_1 + 0x1d);
  puVar1 = (undefined8 *)param_1[0x1f];
  while (puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    if ((puVar2 < (undefined8 *)param_1[0x20]) ||
       ((undefined8 *)param_1[0x20] + (ulonglong)*(uint *)(param_1 + 0x21) * 4 <= puVar2)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
    }
  }
  if ((void *)param_1[0x20] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x20]);
    param_1[0x20] = 0;
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  plVar3 = DAT_146b50ed8;
  while( true ) {
    if (plVar3 == DAT_146b50ed8 + DAT_146b50ee0) goto LAB_143143c5f;
    if ((undefined8 *)*plVar3 == param_1) break;
    plVar3 = plVar3 + 1;
  }
  if (plVar3 < DAT_146b50ed8 + ((ulonglong)DAT_146b50ee0 - 1)) {
    plVar5 = plVar3;
    for (lVar4 = ((ulonglong)
                  ((longlong)(DAT_146b50ed8 + ((ulonglong)DAT_146b50ee0 - 1)) +
                  (-1 - (longlong)plVar3)) >> 3) + 1; plVar3 = plVar3 + 1, lVar4 != 0;
        lVar4 = lVar4 + -1) {
      *plVar5 = *plVar3;
      plVar5 = plVar5 + 1;
    }
  }
  DAT_146b50ee0 = DAT_146b50ee0 - 1;
  if (DAT_146b50ee0 == 0) {
    if (DAT_146b50ed8 != (longlong *)0x0) {
      DAT_146b50ee0 = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b50ed8);
      DAT_146b50ed8 = (longlong *)0x0;
      DAT_146b50ee4 = 0;
    }
    DAT_146b50ec1 = 0;
    CAkBankMgr::SignalLastBankUnloaded();
  }
LAB_143143c5f:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  if ((void *)param_1[0x19] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x1a) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x19]);
    param_1[0x19] = 0;
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  }
  if ((void *)param_1[0x18] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x18]);
  }
  CAkRTPCSubscriberNode::~CAkRTPCSubscriberNode(param_1 + 0x2c);
  *param_1 = &PTR__scalar_deleting_destructor__145ac7240;
  param_1[3] = &PTR_LAB_145ac7488;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  CAkParentNode<CAkParameterNodeBase>::~CAkParentNode<CAkParameterNodeBase>(param_1);
  return;
}



// FUNCTION 143143d20 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
CAkActiveParent<CAkParameterNodeBase>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac7240;
  param_1[3] = &PTR_LAB_145ac7488;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  CAkParentNode<CAkParameterNodeBase>::~CAkParentNode<CAkParameterNodeBase>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 143143d80 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
CAkParentNode<CAkParameterNodeBase>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~CAkParentNode<CAkParameterNodeBase>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 143143dc0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkBus::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~CAkBus();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 143143e00 AddChild body=75 status=ok
// SIG undefined AddChild(void)

undefined8 CAkBus::AddChild(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  if ((int)param_2 == 0) {
    return 0xe;
  }
  local_res10[0] = param_2;
  lVar1 = FUN_14313b2c0(DAT_146b50af8,local_res10);
  if (lVar1 == 0) {
    return 0xf;
  }
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  return uVar2;
}



// FUNCTION 143143e50 AddChild body=69 status=ok
// SIG undefined AddChild(void)

undefined8 CAkParameterNodeBase::AddChild(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((int)param_2 == 0) {
    return 0xe;
  }
  lVar1 = CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,param_2,0);
  if (lVar1 == 0) {
    return 0xf;
  }
                    /* WARNING: Could not recover jumptable at 0x000143143e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  return uVar2;
}



// FUNCTION 143143ea0 AddChildInternal body=113 status=ok
// SIG undefined AddChildInternal(void)

int CAkParentNode<CAkParameterNodeBase>::AddChildInternal(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x240))();
  if (iVar1 == 1) {
    puVar2 = (undefined8 *)FUN_1431440a0(param_1 + 0x16,(int)param_2[2]);
    if (puVar2 == (undefined8 *)0x0) {
      iVar1 = 2;
    }
    else {
      *puVar2 = param_2;
      (**(code **)(*param_2 + 0x30))(param_2,param_1);
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  (**(code **)(*param_2 + 0x10))(param_2);
  return iVar1;
}



// FUNCTION 143143f20 FUN_143143f20 body=185 status=ok
// SIG undefined FUN_143143f20(void)

int FUN_143143f20(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  
  plVar1 = (longlong *)param_2[0x11];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_1) {
      (**(code **)(*param_2 + 0x10))(param_2);
      return 1;
    }
    (**(code **)(*plVar1 + 0x60))();
  }
  iVar2 = (**(code **)(*param_1 + 0x240))(param_1,param_2);
  if (iVar2 == 1) {
    puVar3 = (undefined8 *)FUN_1431440a0(param_1 + 0x16,(int)param_2[2]);
    if (puVar3 == (undefined8 *)0x0) {
      iVar2 = 2;
    }
    else {
      *puVar3 = param_2;
      (**(code **)(*param_2 + 0x38))(param_2,param_1);
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  (**(code **)(*param_2 + 0x10))(param_2);
  return iVar2;
}



// FUNCTION 143143fe0 FUN_143143fe0 body=190 status=ok
// SIG undefined FUN_143143fe0(void)

longlong FUN_143143fe0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
LAB_14314406f:
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    lVar5 = *param_1 + (ulonglong)uVar2 * 8;
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    if (pvVar4 != (void *)0x0) {
      pvVar6 = (void *)*param_1;
      if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar4)) {
        uVar3 = *(uint *)(param_1 + 1);
        uVar7 = 0;
        if ((ulonglong)uVar3 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar7 * 8) = *(undefined8 *)(*param_1 + uVar7 * 8);
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar3);
          pvVar6 = (void *)*param_1;
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
      }
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = uVar1;
      if (uVar2 < uVar1) goto LAB_14314406f;
    }
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1431440a0 FUN_1431440a0 body=330 status=ok
// SIG undefined FUN_1431440a0(void)

longlong FUN_1431440a0(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  uVar3 = *(uint *)(param_1 + 1);
  iVar8 = 0;
  iVar10 = uVar3 - 1;
  if (-1 < iVar10) {
    lVar11 = *param_1;
    do {
      iVar5 = (iVar10 - iVar8) / 2 + iVar8;
      lVar7 = lVar11 + (longlong)iVar5 * 8;
      uVar2 = *(uint *)(*(longlong *)(lVar11 + (longlong)iVar5 * 8) + 0x10);
      if (param_2 < uVar2) {
        iVar10 = iVar5 + -1;
      }
      else {
        if (param_2 <= uVar2) goto LAB_143144116;
        iVar8 = iVar5 + 1;
      }
    } while (iVar8 <= iVar10);
  }
  lVar11 = *param_1;
  if (lVar11 == 0) {
    lVar7 = 0;
    lVar11 = 0;
  }
  else {
    lVar7 = lVar11 + (longlong)iVar8 * 8;
  }
LAB_143144116:
  if (lVar7 == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar3) &&
       (cVar4 = FUN_143134440(param_1,1), cVar4 == '\0')) {
      return 0;
    }
    if (uVar3 < *(uint *)((longlong)param_1 + 0xc)) {
      uVar3 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar3 + 1;
      return *param_1 + (ulonglong)uVar3 * 8;
    }
  }
  else {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar3) &&
       (cVar4 = FUN_143134440(param_1,1), cVar4 == '\0')) {
      return 0;
    }
    if (uVar3 < *(uint *)((longlong)param_1 + 0xc)) {
      uVar3 = *(uint *)(param_1 + 1);
      lVar9 = *param_1;
      *(uint *)(param_1 + 1) = uVar3 + 1;
      puVar6 = (undefined8 *)(lVar9 + (ulonglong)uVar3 * 8);
      lVar11 = (lVar7 - lVar11 >> 3 & 0xffffffffU) * 8;
      if ((undefined8 *)(lVar11 + lVar9) < puVar6) {
        do {
          puVar1 = puVar6 + -1;
          *puVar6 = puVar6[-1];
          lVar9 = *param_1;
          puVar6 = puVar1;
        } while ((undefined8 *)(lVar9 + lVar11) < puVar1);
      }
      return lVar11 + lVar9;
    }
  }
  return 0;
}



// FUNCTION 1431441f0 AddStateGroup body=122 status=ok
// SIG undefined AddStateGroup(void)

undefined8 CAkBus::AddStateGroup(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar1 = IsMixingBus(param_1 + -0x18);
  uVar3 = CAkStateAware::AddStateGroup(param_1,param_2,param_3);
  cVar2 = IsMixingBus(param_1 + -0x18);
  if ((cVar1 != cVar2) && (*(longlong *)(param_1 + 0x60) != 0)) {
    CAkLEngine::ReevaluateGraph(1);
  }
  return uVar3;
}



// FUNCTION 1431442a0 BackgroundMusic_Unmute body=138 status=ok
// SIG undefined BackgroundMusic_Unmute(void)

void CAkBus::BackgroundMusic_Unmute(longlong *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *local_18;
  uint local_10;
  
  uVar4 = 0x3f800000;
  local_10 = local_10 & 0xfffffffd | 1;
  if ((param_1[0xb] != 0) && (pbVar1 = *(byte **)(param_1[0xb] + 0x18), pbVar1 != (byte *)0x0)) {
    uVar2 = 0;
    do {
      uVar3 = uVar2 + 1;
      if (pbVar1[uVar3] == 0xb) {
        if (pbVar1 + (ulonglong)uVar2 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) !=
            (byte *)0x0) {
          uVar4 = *(undefined4 *)
                   (pbVar1 + (ulonglong)uVar2 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        }
        break;
      }
      uVar2 = uVar3;
    } while (uVar3 < *pbVar1);
  }
  local_18 = param_1;
  (**(code **)(*param_1 + 0xd0))(param_1,uVar4,&local_18,1);
  return;
}



// FUNCTION 143144330 CanAddChild body=146 status=ok
// SIG undefined CanAddChild(void)

undefined4 CAkBus::CanAddChild(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  cVar1 = *(char *)(param_2 + 0xa8);
  if (*(longlong *)(param_2 + 0x88) == 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    if (cVar1 < '\0') {
      lVar4 = param_1 + 200;
    }
    else {
      lVar4 = param_1 + 0xb0;
    }
    lVar4 = FUN_143145200(lVar4,iVar2);
    if (lVar4 == 0) {
      uVar3 = 1;
      if (cVar1 < '\0') {
        uVar3 = 1;
        if (*(int *)(param_1 + 0x10) == iVar2) {
          uVar3 = 0x17;
        }
      }
    }
    else {
      uVar3 = 5;
    }
    return uVar3;
  }
  return 0x15;
}



// FUNCTION 1431443d0 FUN_1431443d0 body=129 status=ok
// SIG undefined FUN_1431443d0(void)

void FUN_1431443d0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar2 = (uint)param_2;
  uVar1 = *(uint *)(param_1 + 0xdc);
  if ((uVar2 & 0xf00) == 0x100) {
    bVar3 = 0;
    uVar4 = (uint)(param_2 >> 0xc) & 0x3ff3f;
    uVar2 = uVar4;
    if ((param_2 >> 0xc & 0x3ff3f) != 0) {
      do {
        bVar3 = bVar3 + 1;
        uVar2 = uVar2 & uVar2 - 1;
      } while (uVar2 != 0);
    }
    *(byte *)(param_1 + 0xdc) = bVar3;
    uVar2 = (uint)bVar3 | uVar4 << 0xc | 0x100;
  }
  *(uint *)(param_1 + 0xdc) = uVar2;
  if ((((char)uVar2 == (char)uVar1) && (((uVar2 ^ uVar1) & 0xf00) == 0)) &&
     (((uVar2 ^ uVar1) & 0xfffff000) == 0)) {
    return;
  }
  CAkLEngine::ReevaluateGraph(*(undefined4 *)(param_1 + 0x10));
  return;
}



// FUNCTION 143144460 CheckDuck body=63 status=ok
// SIG undefined CheckDuck(void)

void CAkBus::CheckDuck(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x110);
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      for (puVar1 = *(undefined8 **)(param_1 + 0x138);
          (puVar1 != (undefined8 *)0x0 &&
          (-0.01 < *(float *)(puVar1 + 5) || *(float *)(puVar1 + 5) == -0.01));
          puVar1 = (undefined8 *)*puVar1) {
      }
      return;
    }
    if (*(float *)(puVar1 + 5) <= -0.01 && *(float *)(puVar1 + 5) != -0.01) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return;
}



// FUNCTION 1431444c0 FUN_1431444c0 body=238 status=ok
// SIG undefined FUN_1431444c0(void)

void FUN_1431444c0(longlong param_1,float *param_2)

{
  byte *pbVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float local_res8 [2];
  float local_res10;
  
  pbVar1 = *(byte **)(param_1 + 0x98);
  pfVar5 = (float *)0x0;
  local_res8[0] = DAT_1467be19c;
  pfVar3 = pfVar5;
  if (pbVar1 != (byte *)0x0) {
    pfVar2 = pfVar5;
    do {
      uVar4 = (int)pfVar2 + 1;
      if (pbVar1[uVar4] == 0x1f) {
        pfVar3 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar2 = (float *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar1);
  }
  pfVar2 = local_res8;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  local_res10 = *pfVar2;
  local_res8[0] = DAT_1467be1a0;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar5;
    do {
      uVar4 = (int)pfVar3 + 1;
      if (pbVar1[uVar4] == 0x20) {
        pfVar5 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar3 * 4);
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar1);
  }
  fVar6 = *param_2;
  pfVar3 = local_res8;
  if (pfVar5 != (float *)0x0) {
    pfVar3 = pfVar5;
  }
  if (local_res10 <= fVar6) {
    if (*pfVar3 <= fVar6) {
      fVar6 = *pfVar3;
    }
    *param_2 = fVar6;
    return;
  }
  *param_2 = local_res10;
  return;
}



// FUNCTION 1431445b0 FUN_1431445b0 body=113 status=ok
// SIG undefined FUN_1431445b0(void)

void FUN_1431445b0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0xb0), plVar2 != plVar2 + *(uint *)(param_1 + 0xb8))) {
    do {
      lVar1 = ((longlong *)*plVar2)[0xf];
      if ((lVar1 != 0) && (0 < *(short *)(lVar1 + 0x50))) {
        (**(code **)(*(longlong *)*plVar2 + 0xe8))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8));
  }
  return;
}



// FUNCTION 143144630 FUN_143144630 body=196 status=ok
// SIG undefined FUN_143144630(void)

void FUN_143144630(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    plVar1 = (longlong *)(param_1 + 0xb0);
    plVar5 = (longlong *)(param_1 + 200);
    plVar4 = (longlong *)*plVar5;
    if ((plVar4 == plVar4 + *(uint *)(param_1 + 0xd0)) && (plVar5 != plVar1)) {
      plVar4 = (longlong *)*plVar1;
      plVar5 = plVar1;
    }
    if (plVar4 != plVar4 + *(uint *)(plVar5 + 1)) {
      do {
        lVar2 = ((longlong *)*plVar4)[0xf];
        if ((lVar2 != 0) && ((0 < *(short *)(lVar2 + 0x50) || (0 < *(short *)(lVar2 + 0x54))))) {
          (**(code **)(*(longlong *)*plVar4 + 0xe8))();
        }
        plVar3 = (longlong *)*plVar5;
        plVar4 = plVar4 + 1;
        if ((plVar4 == plVar3 + *(uint *)(plVar5 + 1)) && (plVar5 != plVar1)) {
          plVar3 = (longlong *)*plVar1;
          plVar4 = plVar3;
          plVar5 = plVar1;
        }
      } while (plVar4 != plVar3 + *(uint *)(plVar5 + 1));
    }
  }
  return;
}



// FUNCTION 143144700 Create body=368 status=ok
// SIG undefined Create(void)

longlong * CAkBus::Create(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x178);
  if (plVar3 != (longlong *)0x0) {
    CAkParameterNodeBase::CAkParameterNodeBase(plVar3,param_1);
    plVar3[0x16] = 0;
    plVar3[0x17] = 0;
    *plVar3 = (longlong)&PTR__scalar_deleting_destructor__145ac7508;
    plVar3[3] = (longlong)&PTR_LAB_145ac7758;
    plVar3[6] = (longlong)&PTR_LAB_145ac77d8;
    plVar3[0x18] = 0;
    plVar3[0x19] = 0;
    plVar3[0x1a] = 0;
    *(undefined4 *)(plVar3 + 0x1b) = 0;
    *(undefined1 *)((longlong)plVar3 + 0xdc) = 0;
    *(uint *)((longlong)plVar3 + 0xdc) = *(uint *)((longlong)plVar3 + 0xdc) & 0xff;
    *(undefined4 *)(plVar3 + 0x1c) = 0xc2c0999a;
    plVar3[0x1d] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x20] = 0;
    plVar3[0x21] = 0;
    plVar3[0x22] = 0;
    plVar3[0x23] = 0;
    plVar3[0x24] = 0;
    plVar3[0x25] = 0;
    plVar3[0x26] = 0;
    plVar3[0x27] = 0;
    plVar3[0x28] = 0;
    plVar3[0x29] = 0;
    plVar3[0x2a] = 0;
    plVar3[0x2b] = 0;
    CAkRTPCSubscriberNode::CAkRTPCSubscriberNode(plVar3 + 0x2c);
    *(undefined4 *)(plVar3 + 0x2e) = 0xffffffff;
    *(byte *)((longlong)plVar3 + 0x174) = *(byte *)((longlong)plVar3 + 0x174) & 0xb0 | 0x30;
    iVar2 = (**(code **)(*plVar3 + 0x80))(plVar3);
    if ((iVar2 == 0) || (iVar2 == 10)) {
      bVar1 = 0x80;
    }
    else {
      bVar1 = 0;
    }
    *(byte *)(plVar3 + 0x15) = *(byte *)(plVar3 + 0x15) & 0x7f;
    *(byte *)(plVar3 + 0x15) = *(byte *)(plVar3 + 0x15) | bVar1;
    CAkParameterNodeBase::AddToIndex(plVar3);
    return plVar3;
  }
  return (longlong *)0x0;
}



// FUNCTION 143144870 DecrementActivityCount body=54 status=ok
// SIG undefined DecrementActivityCount(void)

void CAkBus::DecrementActivityCount(longlong param_1)

{
  longlong *plVar1;
  
  FUN_143174320(param_1,1);
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143144899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x130))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1431448b0 FUN_1431448b0 body=388 status=ok
// SIG undefined FUN_1431448b0(void)

void FUN_1431448b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uStackX_c;
  int iVar6;
  
  FUN_1431744b0(param_1,1);
  FUN_143174150(param_1);
  plVar3 = *(longlong **)(param_1 + 0x88);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x120))(plVar3,param_2);
  }
  if ((*(longlong *)(param_1 + 0x78) == 0) ||
     (*(short *)(*(longlong *)(param_1 + 0x78) + 0x50) == 0)) {
    if ((*(int *)(param_1 + 0xd8) != 0) && (*(int *)(param_1 + 0x10c) != 0)) {
      iVar6 = 2;
      iVar5 = 2;
      pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
      if (pvVar2 != (void *)0x0) {
        plVar3 = (longlong *)FUN_1431acba0(pvVar2,0x1820,0);
        if (plVar3 != (longlong *)0x0) {
          iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3,0xf,*(undefined4 *)(param_1 + 0xd8),0,0);
          iVar5 = iVar6;
          if (iVar1 == 1) {
            uStackX_c = CONCAT31(uStackX_c._1_3_,1);
            (**(code **)(*plVar3 + 0x20))
                      (plVar3,CONCAT44(uStackX_c,*(undefined4 *)(param_1 + 0x10)));
            pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48);
            if (pvVar2 != (void *)0x0) {
              lVar4 = AkPendingAction::AkPendingAction(pvVar2,0);
              if (lVar4 != 0) {
                *(longlong **)(lVar4 + 8) = plVar3;
                FUN_14313c660(DAT_146b50b78,lVar4);
                iVar5 = 1;
              }
            }
          }
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      if (iVar5 == 1) {
        *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0x174) & 0xfa | 2;
        FUN_143149bc0(param_1);
        return;
      }
      *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0x174) & 0xf8;
      FUN_143149bc0(param_1);
      return;
    }
    *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0x174) & 0xf8;
    FUN_143149bc0(param_1);
  }
  return;
}



// FUNCTION 143144a40 FUN_143144a40 body=395 status=ok
// SIG undefined FUN_143144a40(void)

void FUN_143144a40(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,int param_6)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)0x0;
  if (param_6 == 0) {
    plVar6 = (longlong *)(param_1 + 0x110);
  }
  else if (param_6 == 5) {
    plVar6 = (longlong *)(param_1 + 0x138);
  }
  plVar3 = (longlong *)*plVar6;
  plVar5 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    do {
      if ((int)plVar5[1] == param_2) {
        plVar5 = plVar5 + 2;
        if (plVar5 != (longlong *)0x0) goto LAB_143144b61;
        break;
      }
      plVar5 = (longlong *)*plVar5;
    } while (plVar5 != (longlong *)0x0);
    do {
      if (plVar3 == (longlong *)0x0) break;
      if ((int)plVar3[1] == param_2) {
        plVar5 = plVar3 + 2;
        if (plVar5 == (longlong *)0x0) goto LAB_143144acf;
        goto LAB_143144b56;
      }
      plVar3 = (longlong *)*plVar3;
    } while( true );
  }
  plVar5 = (longlong *)0x0;
LAB_143144acf:
  plVar3 = (longlong *)plVar6[2];
  if (plVar3 == (longlong *)0x0) {
    plVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x30);
    if (plVar3 == (longlong *)0x0) goto LAB_143144b51;
    if (plVar3 != (longlong *)0xfffffffffffffff8) {
      plVar3[2] = (longlong)&PTR_TransUpdateValue_145ac77f0;
    }
    *plVar3 = plVar6[2];
    plVar6[2] = (longlong)plVar3;
  }
  if ((undefined8 *)plVar6[1] == (undefined8 *)0x0) {
    *plVar6 = (longlong)plVar3;
  }
  else {
    *(undefined8 *)plVar6[1] = plVar3;
    plVar3 = (longlong *)plVar6[2];
  }
  plVar6[1] = (longlong)plVar3;
  plVar6[2] = *plVar3;
  *plVar3 = 0;
  *(int *)((longlong)plVar6 + 0x24) = *(int *)((longlong)plVar6 + 0x24) + 1;
  lVar1 = plVar6[1];
  piVar4 = (int *)(lVar1 + 8);
  if (piVar4 != (int *)0x0) {
    *piVar4 = param_2;
    plVar5 = (longlong *)(lVar1 + 0x10);
  }
LAB_143144b51:
  if (plVar5 != (longlong *)0x0) {
LAB_143144b56:
    CAkDuckItem::Init(plVar5,param_1);
LAB_143144b61:
    iVar2 = CAkRTPCSubscriberNode::EnableParam(param_1 + 0x160,(&DAT_145aca880)[param_6]);
    if (iVar2 == 1) {
      *(undefined1 *)((longlong)plVar5 + 0x1c) = 0;
      CAkBus::StartDuckTransitions(param_1,plVar5,param_3,2,param_5,param_4,param_6);
    }
  }
  return;
}



// FUNCTION 143144bd0 DuckNotif body=31 status=ok
// SIG undefined DuckNotif(void)

void CAkBus::DuckNotif(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x174) & 7) == 2) {
    *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0x174) & 0xf8;
    FUN_143149bc0();
    return;
  }
  return;
}



// FUNCTION 143144bf0 FUN_143144bf0 body=135 status=ok
// SIG undefined FUN_143144bf0(void)

void FUN_143144bf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x78);
  if ((lVar3 != 0) &&
     (((0 < *(short *)(lVar3 + 0x50) || (0 < *(short *)(lVar3 + 0x54))) &&
      (uVar2 = *(uint *)(param_1 + 0xb8), uVar2 != 0)))) {
    lVar3 = (ulonglong)uVar2 << 3;
    do {
      lVar3 = lVar3 + -8;
      uVar2 = uVar2 - 1;
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0xb0));
      if ((*(char *)(param_2 + 0x20) == '\0') || (plVar1[0x11] == 0)) {
        (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
      }
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 143144c80 FUN_143144c80 body=202 status=ok
// SIG undefined FUN_143144c80(void)

void FUN_143144c80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if ((lVar1 != 0) && ((0 < *(short *)(lVar1 + 0x50) || (0 < *(short *)(lVar1 + 0x54))))) {
    *(undefined1 *)(param_2 + 0x20) = 1;
    uVar3 = *(uint *)(param_1 + 0xb8);
    while (uVar3 != 0) {
      uVar4 = uVar3 - 1;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + (ulonglong)uVar4 * 8);
      (**(code **)(*plVar2 + 0x90))(plVar2,param_2);
      uVar3 = *(uint *)(param_1 + 0xb8);
      if (uVar4 <= *(uint *)(param_1 + 0xb8)) {
        uVar3 = uVar4;
      }
    }
    uVar3 = *(uint *)(param_1 + 0xd0);
    while (uVar3 != 0) {
      uVar4 = uVar3 - 1;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + (ulonglong)uVar4 * 8);
      (**(code **)(*plVar2 + 0x90))(plVar2,param_2);
      uVar3 = *(uint *)(param_1 + 0xd0);
      if (uVar4 <= *(uint *)(param_1 + 0xd0)) {
        uVar3 = uVar4;
      }
    }
  }
  return;
}



// FUNCTION 143144d50 ExecuteActionExcept body=197 status=ok
// SIG undefined ExecuteActionExcept(void)

void CAkActiveParent<CAkParameterNodeBase>::ExecuteActionExcept(longlong param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((*(char *)((longlong)param_2 + 0x23) == '\0') || (*(char *)((longlong)param_2 + 0x21) == '\0')
     ) goto LAB_143144d90;
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_143144d89:
    uVar4 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto LAB_143144d90;
      goto LAB_143144d89;
    }
    uVar4 = 1;
  }
  CAkStateAware::PauseTransitions(param_1 + 0x18,uVar4);
LAB_143144d90:
  uVar5 = *(uint *)(param_1 + 0xb8);
  if (uVar5 != 0) {
    lVar6 = (ulonglong)uVar5 << 3;
    do {
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
      plVar2 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0xb0));
      if ((((char)param_2[8] == '\0') || (plVar2[0x11] == 0)) &&
         (cVar3 = CAkParameterNodeBase::IsException(plVar2,*(undefined8 *)(param_2 + 0xc)),
         cVar3 == '\0')) {
        (**(code **)(*plVar2 + 0xa0))(plVar2,param_2);
      }
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 143144e20 ExecuteActionExcept body=264 status=ok
// SIG undefined ExecuteActionExcept(void)

void CAkBus::ExecuteActionExcept(longlong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  
  if ((*(char *)((longlong)param_2 + 0x23) == '\0') || (*(char *)((longlong)param_2 + 0x21) == '\0')
     ) goto LAB_143144e5b;
  iVar2 = *param_2;
  if (iVar2 == 0) {
LAB_143144e50:
    uVar6 = 0;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_143144e5b;
      goto LAB_143144e50;
    }
    uVar6 = 1;
  }
  CAkStateAware::PauseTransitions(param_1 + 0x18,uVar6);
LAB_143144e5b:
  *(undefined1 *)(param_2 + 8) = 1;
  uVar4 = *(uint *)(param_1 + 0xb8);
  while (uVar4 != 0) {
    uVar1 = uVar4 - 1;
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + (ulonglong)uVar1 * 8);
    cVar5 = CAkParameterNodeBase::IsException(plVar3,*(undefined8 *)(param_2 + 0xc));
    if (cVar5 == '\0') {
      (**(code **)(*plVar3 + 0xa8))(plVar3,param_2);
    }
    uVar4 = *(uint *)(param_1 + 0xb8);
    if (uVar1 <= *(uint *)(param_1 + 0xb8)) {
      uVar4 = uVar1;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xd0);
  while (uVar4 != 0) {
    uVar1 = uVar4 - 1;
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 200) + (ulonglong)uVar1 * 8);
    cVar5 = CAkParameterNodeBase::IsException(plVar3,*(undefined8 *)(param_2 + 0xc));
    if (cVar5 == '\0') {
      (**(code **)(*plVar3 + 0xa8))(plVar3,param_2);
    }
    uVar4 = *(uint *)(param_1 + 0xd0);
    if (uVar1 <= *(uint *)(param_1 + 0xd0)) {
      uVar4 = uVar1;
    }
  }
  return;
}



// FUNCTION 143144f70 FUN_143144f70 body=352 status=ok
// SIG undefined FUN_143144f70(void)

void FUN_143144f70(int *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *local_28;
  undefined8 local_20;
  
  if (*param_1 == 1) {
    CAkTransitionManager::PauseAllStateTransitions(DAT_146b50af0);
  }
  else if (*param_1 == 2) {
    CAkTransitionManager::ResumeAllStateTransitions(DAT_146b50af0);
  }
  uVar2 = DAT_146b50ee0;
  uVar7 = 0;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  if (DAT_146b50ee0 != 0) {
    local_28 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)DAT_146b50ee0 << 3);
    uVar4 = 0;
    if (local_28 != (undefined8 *)0x0) {
      uVar4 = uVar2;
    }
    local_20 = CONCAT44(uVar4,(undefined4)local_20);
  }
  puVar5 = DAT_146b50ed8;
  uVar8 = uVar7;
  if (DAT_146b50ed8 != DAT_146b50ed8 + DAT_146b50ee0) {
    do {
      uVar1 = *puVar5;
      puVar3 = (undefined8 *)FUN_143143fe0(&local_28);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = uVar1;
      }
      (**(code **)(*(longlong *)*puVar5 + 8))();
      puVar5 = puVar5 + 1;
    } while (puVar5 != DAT_146b50ed8 + DAT_146b50ee0);
    uVar8 = local_20 & 0xffffffff;
  }
  puVar5 = local_28;
  uVar6 = (ulonglong)((longlong)(local_28 + uVar8) + (7 - (longlong)local_28)) >> 3;
  if (local_28 + uVar8 < local_28) {
    uVar6 = uVar7;
  }
  puVar3 = local_28;
  if (uVar6 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar3 + 0x90))((longlong *)*puVar3,param_1);
      (**(code **)(*(longlong *)*puVar3 + 0x10))();
      uVar7 = uVar7 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar7 != uVar6);
  }
  if (puVar5 != (undefined8 *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar5);
  }
  return;
}



// FUNCTION 1431450d0 FUN_1431450d0 body=304 status=ok
// SIG undefined FUN_1431450d0(void)

void FUN_1431450d0(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *local_28;
  undefined8 local_20;
  
  uVar2 = DAT_146b50ee0;
  uVar7 = 0;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  if (DAT_146b50ee0 != 0) {
    local_28 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)DAT_146b50ee0 << 3);
    uVar4 = 0;
    if (local_28 != (undefined8 *)0x0) {
      uVar4 = uVar2;
    }
    local_20 = CONCAT44(uVar4,(undefined4)local_20);
  }
  puVar5 = DAT_146b50ed8;
  uVar8 = uVar7;
  if (DAT_146b50ed8 != DAT_146b50ed8 + DAT_146b50ee0) {
    do {
      uVar1 = *puVar5;
      puVar3 = (undefined8 *)FUN_143143fe0(&local_28);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = uVar1;
      }
      (**(code **)(*(longlong *)*puVar5 + 8))();
      puVar5 = puVar5 + 1;
    } while (puVar5 != DAT_146b50ed8 + DAT_146b50ee0);
    uVar8 = local_20 & 0xffffffff;
  }
  puVar5 = local_28;
  uVar6 = (ulonglong)((longlong)(local_28 + uVar8) + (7 - (longlong)local_28)) >> 3;
  if (local_28 + uVar8 < local_28) {
    uVar6 = uVar7;
  }
  puVar3 = local_28;
  if (uVar6 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar3 + 0xa0))((longlong *)*puVar3,param_1);
      (**(code **)(*(longlong *)*puVar3 + 0x10))();
      uVar7 = uVar7 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar7 != uVar6);
  }
  if (puVar5 != (undefined8 *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar5);
  }
  return;
}



// FUNCTION 143145200 FUN_143145200 body=147 status=ok
// SIG undefined FUN_143145200(void)

ulonglong FUN_143145200(longlong *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar6 = (int)param_1[1] + -1;
  iVar3 = 0;
  if (-1 < iVar6) {
    uVar5 = uVar4;
    do {
      iVar3 = (iVar6 - (int)uVar5) / 2 + (int)uVar5;
      uVar1 = *(uint *)(*(longlong *)(*param_1 + (longlong)iVar3 * 8) + 0x10);
      if (param_2 < uVar1) {
        iVar6 = iVar3 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          bVar2 = true;
          uVar5 = *param_1 + (longlong)iVar3 * 8;
          goto LAB_14314527a;
        }
        uVar5 = (ulonglong)(iVar3 + 1);
      }
      iVar3 = (int)uVar5;
    } while (iVar3 <= iVar6);
  }
  bVar2 = false;
  uVar5 = uVar4;
  if (*param_1 != 0) {
    uVar5 = *param_1 + (longlong)iVar3 * 8;
  }
LAB_14314527a:
  if (bVar2) {
    uVar4 = uVar5;
  }
  return uVar4;
}



// FUNCTION 1431452a0 FUN_1431452a0 body=157 status=ok
// SIG undefined FUN_1431452a0(void)

void FUN_1431452a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0xb0), plVar2 != plVar2 + *(uint *)(param_1 + 0xb8))) {
    do {
      plVar1 = (longlong *)*plVar2;
      if ((plVar1[0xf] != 0) && (0 < *(short *)(plVar1[0xf] + 0x50))) {
        (**(code **)(*plVar1 + 0xf0))(plVar1,param_2,param_3,param_4);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8));
  }
  return;
}



// FUNCTION 143145340 FUN_143145340 body=219 status=ok
// SIG undefined FUN_143145340(void)

void FUN_143145340(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    plVar1 = (longlong *)(param_1 + 0xb0);
    plVar4 = (longlong *)(param_1 + 200);
    plVar3 = (longlong *)*plVar4;
    if ((plVar3 == plVar3 + *(uint *)(param_1 + 0xd0)) && (plVar4 != plVar1)) {
      plVar3 = (longlong *)*plVar1;
      plVar4 = plVar1;
    }
    if (plVar3 != plVar3 + *(uint *)(plVar4 + 1)) {
      do {
        plVar2 = (longlong *)*plVar3;
        if ((plVar2[0xf] != 0) && (0 < *(short *)(plVar2[0xf] + 0x50))) {
          (**(code **)(*plVar2 + 0xf0))(plVar2,param_2,param_3,param_4);
        }
        plVar2 = (longlong *)*plVar4;
        plVar3 = plVar3 + 1;
        if ((plVar3 == plVar2 + *(uint *)(plVar4 + 1)) && (plVar4 != plVar1)) {
          plVar2 = (longlong *)*plVar1;
          plVar3 = plVar2;
          plVar4 = plVar1;
        }
      } while (plVar3 != plVar2 + *(uint *)(plVar4 + 1));
    }
  }
  return;
}



// FUNCTION 143145420 GatherSounds body=200 status=ok
// SIG undefined GatherSounds(void)

void CAkParentNode<CAkParameterNodeBase>::GatherSounds
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined1 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0xb8)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x78))
                ((longlong *)*puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)
                       (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8));
  }
  return;
}



// FUNCTION 1431454f0 FUN_1431454f0 body=1592 status=ok
// SIG undefined FUN_1431454f0(void)

undefined8
FUN_1431454f0(longlong param_1,float *param_2,uint param_3,longlong *param_4,undefined8 param_5,
             undefined8 param_6,longlong param_7,undefined8 param_8,longlong *param_9)

{
  undefined4 *puVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  float *pfVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res18 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pfVar12 = (float *)0x0;
  fVar15 = 0.0;
  if ((param_3 & 1) != 0) {
    pbVar2 = *(byte **)(param_1 + 0x98);
    local_res18[0] = DAT_1467be120;
    pfVar11 = pfVar12;
    if (pbVar2 != (byte *)0x0) {
      pfVar7 = pfVar12;
      do {
        uVar10 = (int)pfVar7 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar2) == 0) {
          pfVar11 = (float *)(pbVar2 + (longlong)pfVar7 * 4 +
                                       ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
          break;
        }
        pfVar7 = (float *)(ulonglong)uVar10;
      } while (uVar10 < *pbVar2);
    }
    fVar14 = 0.0;
    pfVar7 = local_res18;
    if (pfVar11 != (float *)0x0) {
      pfVar7 = pfVar11;
    }
    local_res18[0] = *pfVar7;
    lVar3 = *(longlong *)(param_1 + 0x18);
    *param_2 = local_res18[0] + *param_2;
    cVar6 = (**(code **)(lVar3 + 0x18))();
    if (cVar6 != '\0') {
      fVar14 = (float)FUN_1431437a0();
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) & 1) != 0)) {
      fVar13 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0,param_5);
      fVar14 = fVar14 + fVar13;
    }
    *param_2 = fVar14 + *param_2;
    pbVar2 = *(byte **)(param_1 + 0x98);
    local_res18[0] = DAT_1467be138;
    if (pbVar2 != (byte *)0x0) {
      uVar9 = 0;
      do {
        uVar10 = (int)uVar9 + 1;
        if (pbVar2[uVar10] == 6) {
          pfVar11 = (float *)(pbVar2 + uVar9 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
          goto LAB_143145627;
        }
        uVar9 = (ulonglong)uVar10;
      } while (uVar10 < *pbVar2);
    }
    pfVar11 = (float *)0x0;
LAB_143145627:
    fVar14 = 0.0;
    pfVar7 = local_res18;
    if (pfVar11 != (float *)0x0) {
      pfVar7 = pfVar11;
    }
    local_res18[0] = *pfVar7;
    param_2[6] = local_res18[0] + param_2[6];
    cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,7);
    if (cVar6 != '\0') {
      fVar14 = (float)FUN_1431437a0(param_1 + 0x18,7);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 7 & 1) != 0)) {
      fVar13 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,7,param_5);
      fVar14 = fVar14 + fVar13;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x110);
    fVar13 = 0.0;
    param_2[6] = fVar14 + param_2[6];
    for (; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
      fVar13 = fVar13 + *(float *)(puVar4 + 5);
    }
    fVar14 = *(float *)(param_1 + 0xe0);
    if (*(float *)(param_1 + 0xe0) <= fVar13) {
      fVar14 = fVar13;
    }
    *param_2 = fVar14 + *param_2;
  }
  if ((param_3 & 2) != 0) {
    pbVar2 = *(byte **)(param_1 + 0x98);
    local_res18[0] = DAT_1467be128;
    pfVar11 = pfVar12;
    if (pbVar2 != (byte *)0x0) {
      pfVar7 = pfVar12;
      do {
        uVar10 = (int)pfVar7 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar2) == 2) {
          pfVar11 = (float *)(pbVar2 + (longlong)pfVar7 * 4 +
                                       ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
          break;
        }
        pfVar7 = (float *)(ulonglong)uVar10;
      } while (uVar10 < *pbVar2);
    }
    fVar14 = 0.0;
    pfVar7 = local_res18;
    if (pfVar11 != (float *)0x0) {
      pfVar7 = pfVar11;
    }
    local_res18[0] = *pfVar7;
    param_2[2] = local_res18[0] + param_2[2];
    cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,2);
    if (cVar6 != '\0') {
      fVar14 = (float)FUN_1431437a0(param_1 + 0x18,2);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 2 & 1) != 0)) {
      fVar13 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,2,param_5);
      fVar14 = fVar14 + fVar13;
    }
    param_2[2] = fVar14 + param_2[2];
  }
  if ((param_3 & 4) != 0) {
    pbVar2 = *(byte **)(param_1 + 0x98);
    local_res18[0] = DAT_1467be12c;
    pfVar11 = pfVar12;
    if (pbVar2 != (byte *)0x0) {
      pfVar7 = pfVar12;
      do {
        uVar10 = (int)pfVar7 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar2) == 3) {
          pfVar11 = (float *)(pbVar2 + (longlong)pfVar7 * 4 +
                                       ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
          break;
        }
        pfVar7 = (float *)(ulonglong)uVar10;
      } while (uVar10 < *pbVar2);
    }
    fVar14 = 0.0;
    pfVar7 = local_res18;
    if (pfVar11 != (float *)0x0) {
      pfVar7 = pfVar11;
    }
    local_res18[0] = *pfVar7;
    param_2[3] = local_res18[0] + param_2[3];
    cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,3);
    if (cVar6 != '\0') {
      fVar14 = (float)FUN_1431437a0(param_1 + 0x18,3);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 3 & 1) != 0)) {
      fVar13 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,3,param_5);
      fVar14 = fVar14 + fVar13;
    }
    param_2[3] = fVar14 + param_2[3];
  }
  if ((param_3 & 8) != 0) {
    pbVar2 = *(byte **)(param_1 + 0x98);
    local_res18[0] = DAT_1467be130;
    pfVar11 = pfVar12;
    if (pbVar2 != (byte *)0x0) {
      pfVar7 = pfVar12;
      do {
        uVar10 = (int)pfVar7 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar2) == 4) {
          pfVar11 = (float *)(pbVar2 + (longlong)pfVar7 * 4 +
                                       ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
          break;
        }
        pfVar7 = (float *)(ulonglong)uVar10;
      } while (uVar10 < *pbVar2);
    }
    pfVar7 = local_res18;
    if (pfVar11 != (float *)0x0) {
      pfVar7 = pfVar11;
    }
    local_res18[0] = *pfVar7;
    param_2[4] = local_res18[0] + param_2[4];
    cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,4);
    if (cVar6 != '\0') {
      fVar15 = (float)FUN_1431437a0(param_1 + 0x18,4);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 4 & 1) != 0)) {
      fVar14 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,4,param_5);
      fVar15 = fVar15 + fVar14;
    }
    param_2[4] = fVar15 + param_2[4];
  }
  CAkParameterNodeBase::GetVoiceProperties(param_1,param_2,param_4,param_5);
  if (param_7 != 0) {
    if ((*(longlong *)(param_1 + 0x38) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x38) + 0x20) != '\0')) {
      uStack_60 = 0;
      local_58 = 2;
      local_68 = param_1 + 0x30;
      FUN_14313a450(DAT_146b50ae0,&local_68,param_7);
    }
  }
  if ((DAT_146b50ec0 != '\0') && ((*(byte *)(param_1 + 0x174) & 0x40) != 0)) {
    uVar10 = *(uint *)(param_4 + 1);
    uStack_60 = uStack_60 & 0xfffffffffffffffd | 1;
    plVar8 = (longlong *)*param_4;
    plVar5 = plVar8 + (ulonglong)uVar10 * 3;
    for (; (plVar8 != plVar5 && ((*plVar8 != param_1 || ((*(byte *)(plVar8 + 1) & 1) == 0))));
        plVar8 = plVar8 + 3) {
    }
    pfVar11 = (float *)(plVar8 + 2);
    if (plVar8 == plVar5) {
      pfVar11 = pfVar12;
    }
    local_68 = param_1;
    if (pfVar11 == (float *)0x0) {
      if ((uVar10 < *(uint *)((longlong)param_4 + 0xc)) ||
         ((cVar6 = FUN_143147540(param_4,1), cVar6 != '\0' &&
          (uVar10 < *(uint *)((longlong)param_4 + 0xc))))) {
        uVar10 = *(uint *)(param_4 + 1);
        *(uint *)(param_4 + 1) = uVar10 + 1;
        puVar1 = (undefined4 *)(*param_4 + (ulonglong)uVar10 * 0x18);
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[4] = 0;
          *puVar1 = (undefined4)local_68;
          puVar1[1] = local_68._4_4_;
          puVar1[2] = (undefined4)uStack_60;
          puVar1[3] = uStack_60._4_4_;
        }
      }
    }
    else {
      *pfVar11 = 0.0;
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x88);
  if ((plVar5 != (longlong *)0x0) && (param_9 != plVar5)) {
    (**(code **)(*plVar5 + 0x150))
              (plVar5,param_2,param_3 & 0xffffffef,param_4,param_5,param_6,param_7,0,param_9);
  }
  return 1;
}



// FUNCTION 143145b30 FUN_143145b30 body=1028 status=ok
// SIG undefined FUN_143145b30(void)

float FUN_143145b30(longlong param_1,longlong *param_2,float *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  char cVar3;
  float *pfVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res8 [2];
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  pbVar1 = *(byte **)(param_1 + 0x98);
  pfVar9 = (float *)0x0;
  local_res8[0] = DAT_1467be134;
  pfVar8 = pfVar9;
  if (pbVar1 != (byte *)0x0) {
    pfVar4 = pfVar9;
    do {
      uVar6 = (int)pfVar4 + 1;
      if (pbVar1[uVar6] == 5) {
        pfVar8 = (float *)(pbVar1 + (longlong)pfVar4 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar4 = (float *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar1);
  }
  fVar12 = 0.0;
  fVar11 = 0.0;
  pfVar4 = local_res8;
  if (pfVar8 != (float *)0x0) {
    pfVar4 = pfVar8;
  }
  fVar13 = *pfVar4;
  local_res8[0] = fVar13;
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,5);
  if (cVar3 != '\0') {
    fVar11 = (float)FUN_1431437a0(param_1 + 0x18,5);
  }
  if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
     ((**(ulonglong **)(param_1 + 0x38) >> 5 & 1) != 0)) {
    fVar10 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,5,param_2);
    fVar11 = fVar11 + fVar10;
  }
  *param_3 = 0.0;
  fVar13 = fVar13 + fVar11;
  pbVar1 = *(byte **)(param_1 + 0x98);
  local_res8[0] = DAT_1467be180;
  pfVar8 = pfVar9;
  if (pbVar1 != (byte *)0x0) {
    pfVar4 = pfVar9;
    do {
      uVar6 = (int)pfVar4 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 0x18) {
        pfVar8 = (float *)(pbVar1 + (longlong)pfVar4 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar4 = (float *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar1);
  }
  fVar11 = 0.0;
  pfVar4 = local_res8;
  if (pfVar8 != (float *)0x0) {
    pfVar4 = pfVar8;
  }
  local_res8[0] = *pfVar4;
  *param_3 = local_res8[0];
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x2b);
  if (cVar3 != '\0') {
    fVar11 = (float)FUN_1431437a0(param_1 + 0x18,0x2b);
  }
  if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
     ((**(ulonglong **)(param_1 + 0x38) >> 0x2b & 1) != 0)) {
    fVar10 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x2b,param_2);
    fVar11 = fVar11 + fVar10;
  }
  fVar10 = *param_3;
  *param_3 = fVar11 + fVar10;
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     (pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x58) + 0x18), pbVar1 != (byte *)0x0)) {
    pfVar8 = pfVar9;
    do {
      uVar6 = (int)pfVar8 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 5) {
        if ((float *)(pbVar1 + (longlong)pfVar8 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) !=
            (float *)0x0) {
          fVar13 = fVar13 + *(float *)(pbVar1 + (longlong)pfVar8 * 0x10 +
                                                ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        }
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar1);
    if (pbVar1 != (byte *)0x0) {
      pfVar8 = pfVar9;
      do {
        uVar6 = (int)pfVar8 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 0x18) {
          if ((float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar8 * 0x10)
              != (float *)0x0) {
            *param_3 = fVar11 + fVar10 +
                       *(float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) +
                                           (longlong)pfVar8 * 0x10);
          }
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x60);
  if (plVar7 != (longlong *)0x0) {
    plVar5 = (longlong *)*plVar7;
    plVar7 = plVar5 + (ulonglong)*(uint *)(plVar7 + 1) * 2;
    for (; (plVar5 != plVar7 && (*plVar5 != *param_2)); plVar5 = plVar5 + 2) {
    }
    pfVar8 = (float *)(plVar5 + 1);
    if (plVar5 == plVar7) {
      pfVar8 = pfVar9;
    }
    if ((pfVar8 != (float *)0x0) &&
       (pbVar1 = *(byte **)(*(longlong *)pfVar8 + 0x18), pbVar1 != (byte *)0x0)) {
      pfVar8 = pfVar9;
      do {
        uVar6 = (int)pfVar8 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 5) {
          if ((float *)(pbVar1 + (longlong)pfVar8 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
              != (float *)0x0) {
            fVar13 = fVar13 + *(float *)(pbVar1 + (longlong)pfVar8 * 0x10 +
                                                  ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
          }
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
      if (pbVar1 != (byte *)0x0) {
        do {
          uVar6 = (int)pfVar9 + 1;
          if (pbVar1[uVar6] == 0x18) {
            if ((float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar9 * 0x10
                         ) != (float *)0x0) {
              *param_3 = *param_3 +
                         *(float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) +
                                             (longlong)pfVar9 * 0x10);
            }
            break;
          }
          pfVar9 = (float *)(ulonglong)uVar6;
        } while (uVar6 < *pbVar1);
      }
    }
  }
  for (puVar2 = *(undefined8 **)(param_1 + 0x138); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    fVar12 = fVar12 + *(float *)(puVar2 + 5);
  }
  fVar11 = *(float *)(param_1 + 0xe0);
  if (*(float *)(param_1 + 0xe0) <= fVar12) {
    fVar11 = fVar12;
  }
  if ((*(longlong *)(param_1 + 0x88) != 0) && (cVar3 = CAkBus::IsMixingBus(), cVar3 == '\0')) {
    local_88 = *param_2;
    lStack_80 = param_2[1];
    local_78 = (undefined4)param_2[2];
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_70 = (undefined4)param_2[3];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_68 = (undefined4)param_2[4];
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_60 = (undefined4)param_2[5];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
    fVar12 = (float)FUN_143145b30(*(undefined8 *)(param_1 + 0x88),&local_88,local_res8);
    *param_3 = fVar12 + *param_3 + local_res8[0];
  }
  return fVar13 + fVar11;
}



// FUNCTION 143145f40 _GetBypassAllFX body=5 status=ok
// SIG undefined _GetBypassAllFX(void)

uint CAkParameterNodeBase::_GetBypassAllFX(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  longlong lStack_48;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_28;
  undefined8 uStack_20;
  
  if ((*(longlong *)(param_1 + 0x68) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x24) & 0x10) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  if (((*(ulonglong **)(param_1 + 0x38) == (ulonglong *)0x0) ||
      ((**(ulonglong **)(param_1 + 0x38) & 0x200000000) == 0)) &&
     (cVar1 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x21),
     cVar1 == '\0')) {
    plVar3 = *(longlong **)(param_1 + 0x60);
    if (plVar3 != (longlong *)0x0) {
      plVar2 = (longlong *)*plVar3;
      plVar3 = plVar2 + (ulonglong)*(uint *)(plVar3 + 1) * 2;
      if (plVar2 != plVar3) {
        do {
          if (*plVar2 == param_2) break;
          plVar2 = plVar2 + 2;
        } while (plVar2 != plVar3);
        if ((plVar2 != plVar3) && (plVar2 + 1 != (longlong *)0x0)) {
          return (uint)(*(byte *)(plVar2[1] + 0x20) >> 4 & 1);
        }
      }
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      uVar4 = (uint)(*(byte *)(*(longlong *)(param_1 + 0x58) + 0x20) >> 4 & 1);
    }
  }
  else {
    uStack_40 = 0;
    fVar6 = 0.0;
    uStack_38 = 0;
    uStack_30 = 0xff;
    uStack_28 = 0xff;
    uStack_20 = 0;
    lStack_48 = param_2;
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x21);
    if (cVar1 != '\0') {
      fVar6 = (float)FUN_1431437a0(param_1 + 0x18,0x21);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) & 0x200000000) != 0)) {
      fVar5 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x21,&lStack_48);
      fVar6 = fVar6 + fVar5;
    }
    uVar4 = (uint)fVar6;
  }
  return uVar4;
}



// FUNCTION 143145f50 GetChildren body=230 status=ok
// SIG undefined GetChildren(void)

void CAkParentNode<CAkParameterNodeBase>::GetChildren
               (longlong param_1,uint *param_2,longlong param_3,uint *param_4,int param_5)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xb0);
  if (plVar2 != plVar2 + *(uint *)(param_1 + 0xb8)) {
    uVar1 = *param_4;
    uVar3 = *param_2;
    while( true ) {
      if (uVar1 < uVar3) {
        *(undefined4 *)(param_3 + (ulonglong)uVar1 * 0xc) = *(undefined4 *)(*plVar2 + 0x10);
        *(undefined4 *)(param_3 + 4 + (ulonglong)*param_4 * 0xc) =
             *(undefined4 *)(*(longlong *)(*plVar2 + 0x80) + 0x10);
        *(int *)(param_3 + 8 + (ulonglong)*param_4 * 0xc) = param_5;
        uVar1 = *param_4;
      }
      *param_4 = uVar1 + 1;
      if (uVar1 + 1 == *param_2) break;
      (**(code **)(*(longlong *)*plVar2 + 0x70))
                ((longlong *)*plVar2,param_2,param_3,param_4,param_5 + 1);
      uVar1 = *param_4;
      uVar3 = *param_2;
      if (uVar1 == uVar3) {
        return;
      }
      plVar2 = plVar2 + 1;
      if (plVar2 == (longlong *)
                    (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8)) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 143146040 GetDuckedVolume body=74 status=ok
// SIG undefined GetDuckedVolume(void)

float CAkBus::GetDuckedVolume(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  
  puVar1 = (undefined8 *)0x0;
  if (param_2 == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x110);
  }
  else if (param_2 == 5) {
    puVar1 = (undefined8 *)(param_1 + 0x138);
  }
  fVar3 = 0.0;
  for (puVar1 = (undefined8 *)*puVar1; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1)
  {
    fVar3 = fVar3 + *(float *)(puVar1 + 5);
  }
  fVar2 = *(float *)(param_1 + 0xe0);
  if (*(float *)(param_1 + 0xe0) <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}



// FUNCTION 143146090 GetFX body=198 status=ok
// SIG undefined GetFX(void)

void CAkBus::GetFX(longlong param_1,ulonglong param_2,longlong *param_3,undefined8 param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  param_2 = param_2 & 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (lVar2 == 0) {
    plVar3 = (longlong *)*param_3;
    *param_3 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(undefined2 *)(param_3 + 1) = 0;
  }
  else {
    if (*(int *)(lVar2 + 4 + param_2 * 8) == 0) {
      plVar3 = (longlong *)*param_3;
      *param_3 = 0;
    }
    else if (*(char *)(lVar2 + 9 + param_2 * 8) == '\0') {
      lVar2 = CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x2c0);
      plVar3 = (longlong *)*param_3;
      *param_3 = lVar2;
    }
    else {
      lVar2 = CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x280);
      plVar3 = (longlong *)*param_3;
      *param_3 = lVar2;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    uVar1 = CAkParameterNodeBase::GetBypassFX(param_1,param_2,param_4);
    *(undefined2 *)(param_3 + 1) = uVar1;
  }
  return;
}



// FUNCTION 143146160 FUN_143146160 body=162 status=ok
// SIG undefined FUN_143146160(void)

void FUN_143146160(longlong param_1,ulonglong param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  
  *param_4 = 0xffffffff;
  lVar3 = *(longlong *)(param_1 + 0x68);
  if (lVar3 != 0) {
    uVar2 = *(undefined4 *)(lVar3 + 4 + (param_2 & 0xffffffff) * 8);
    if (*(char *)(lVar3 + 9 + (param_2 & 0xffffffff) * 8) == '\0') {
      plVar4 = (longlong *)
               CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x2c0,uVar2);
    }
    else {
      plVar4 = (longlong *)
               CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x280,uVar2);
    }
    if (plVar4 != (longlong *)0x0) {
      piVar5 = (int *)plVar4[8];
      piVar1 = piVar5 + (ulonglong)*(uint *)(plVar4 + 9) * 2;
      for (; (piVar5 != piVar1 && (*piVar5 != param_3)); piVar5 = piVar5 + 2) {
      }
      puVar6 = (uint *)0x0;
      puVar7 = (uint *)(piVar5 + 1);
      if (piVar5 == piVar1) {
        puVar7 = puVar6;
      }
      if (puVar7 != (uint *)0x0) {
        puVar6 = (uint *)(ulonglong)*puVar7;
      }
      *param_4 = (int)puVar6;
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return;
}



// FUNCTION 143146210 GetGameParamID body=85 status=ok
// SIG undefined GetGameParamID(void)

undefined4 CAkBus::GetGameParamID(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte local_res8 [32];
  
  pbVar1 = *(byte **)(param_1 + 0x98);
  pbVar4 = (byte *)0x0;
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  if (pbVar1 != (byte *)0x0) {
    pbVar2 = pbVar4;
    do {
      uVar3 = (int)pbVar2 + 1;
      if (((byte *)(ulonglong)uVar3)[(longlong)pbVar1] == 0x1e) {
        pbVar4 = pbVar1 + (longlong)pbVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        break;
      }
      pbVar2 = (byte *)(ulonglong)uVar3;
    } while (uVar3 < *pbVar1);
  }
  pbVar1 = local_res8;
  if (pbVar4 != (byte *)0x0) {
    pbVar1 = pbVar4;
  }
  return *(undefined4 *)pbVar1;
}



// FUNCTION 143146270 FUN_143146270 body=3550 status=ok
// SIG undefined FUN_143146270(void)

undefined8 FUN_143146270(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_78 = *param_3;
  uStack_70 = param_3[1];
  local_68 = *(undefined4 *)(param_3 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_60 = *(undefined4 *)(param_3 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_58 = *(undefined4 *)(param_3 + 4);
  uStack_54 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_50 = *(undefined4 *)(param_3 + 5);
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar7 = FUN_143145b30(local_58,&local_78,param_2 + 10);
  *param_2 = uVar7;
  local_78 = *param_3;
  uStack_70 = param_3[1];
  local_68 = *(undefined4 *)(param_3 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_60 = *(undefined4 *)(param_3 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_58 = *(undefined4 *)(param_3 + 4);
  uStack_54 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_50 = *(undefined4 *)(param_3 + 5);
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar7 = FUN_1431471b0(param_1,&local_78,0x1a);
  param_2[0xb] = uVar7;
  local_78 = *param_3;
  uStack_70 = param_3[1];
  local_68 = *(undefined4 *)(param_3 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_60 = *(undefined4 *)(param_3 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_58 = *(undefined4 *)(param_3 + 4);
  uStack_54 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_50 = *(undefined4 *)(param_3 + 5);
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar7 = FUN_1431471b0(param_1,&local_78,0x19);
  pfVar6 = (float *)0x0;
  param_2[0xc] = uVar7;
  fVar10 = 0.0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be16c;
    pfVar4 = pfVar6;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = pfVar6;
      do {
        uVar5 = (int)pfVar3 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x13) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    fVar9 = 0.0;
    pfVar3 = local_res8;
    if (pfVar4 != (float *)0x0) {
      pfVar3 = pfVar4;
    }
    local_res8[0] = *pfVar3;
    param_2[0xd] = local_res8[0] + (float)param_2[0xd];
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x27);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x27);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x27 & 1) != 0)) {
      fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x27,param_3);
      fVar9 = fVar9 + fVar8;
    }
    param_2[0xd] = fVar9 + (float)param_2[0xd];
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be170;
    pfVar4 = pfVar6;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = pfVar6;
      do {
        uVar5 = (int)pfVar3 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x14) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    fVar9 = 0.0;
    pfVar3 = local_res8;
    if (pfVar4 != (float *)0x0) {
      pfVar3 = pfVar4;
    }
    local_res8[0] = *pfVar3;
    param_2[0xe] = local_res8[0] + (float)param_2[0xe];
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x28);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x28);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x28 & 1) != 0)) {
      fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x28,param_3);
      fVar9 = fVar9 + fVar8;
    }
    param_2[0xe] = fVar9 + (float)param_2[0xe];
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be174;
    pfVar4 = pfVar6;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = pfVar6;
      do {
        uVar5 = (int)pfVar3 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x15) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    fVar9 = 0.0;
    pfVar3 = local_res8;
    if (pfVar4 != (float *)0x0) {
      pfVar3 = pfVar4;
    }
    local_res8[0] = *pfVar3;
    param_2[0xf] = local_res8[0] + (float)param_2[0xf];
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x29);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x29);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x29 & 1) != 0)) {
      fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x29,param_3);
      fVar9 = fVar9 + fVar8;
    }
    param_2[0xf] = fVar9 + (float)param_2[0xf];
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be178;
    pfVar4 = pfVar6;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = pfVar6;
      do {
        uVar5 = (int)pfVar3 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x16) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    fVar9 = 0.0;
    pfVar3 = local_res8;
    if (pfVar4 != (float *)0x0) {
      pfVar3 = pfVar4;
    }
    local_res8[0] = *pfVar3;
    param_2[0x10] = local_res8[0] + (float)param_2[0x10];
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x2a);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x2a);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x2a & 1) != 0)) {
      fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x2a,param_3);
      fVar9 = fVar9 + fVar8;
    }
    param_2[0x10] = fVar9 + (float)param_2[0x10];
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be210;
    pfVar4 = pfVar6;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = pfVar6;
      do {
        uVar5 = (int)pfVar3 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x3c) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    fVar9 = 0.0;
    pfVar3 = local_res8;
    if (pfVar4 != (float *)0x0) {
      pfVar3 = pfVar4;
    }
    local_res8[0] = *pfVar3;
    param_2[0x11] = local_res8[0] + (float)param_2[0x11];
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x2f);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x2f);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x2f & 1) != 0)) {
      fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x2f,param_3);
      fVar9 = fVar9 + fVar8;
    }
    param_2[0x11] = fVar9 + (float)param_2[0x11];
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be214;
    pfVar4 = pfVar6;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = pfVar6;
      do {
        uVar5 = (int)pfVar3 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x3d) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    fVar9 = 0.0;
    pfVar3 = local_res8;
    if (pfVar4 != (float *)0x0) {
      pfVar3 = pfVar4;
    }
    local_res8[0] = *pfVar3;
    param_2[0x12] = local_res8[0] + (float)param_2[0x12];
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x30);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x30);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x30 & 1) != 0)) {
      fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x30,param_3);
      fVar9 = fVar9 + fVar8;
    }
    param_2[0x12] = fVar9 + (float)param_2[0x12];
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be218;
    pfVar4 = pfVar6;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = pfVar6;
      do {
        uVar5 = (int)pfVar3 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x3e) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    fVar9 = 0.0;
    pfVar3 = local_res8;
    if (pfVar4 != (float *)0x0) {
      pfVar3 = pfVar4;
    }
    local_res8[0] = *pfVar3;
    param_2[0x13] = local_res8[0] + (float)param_2[0x13];
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x31);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x31);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x31 & 1) != 0)) {
      fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x31,param_3);
      fVar9 = fVar9 + fVar8;
    }
    param_2[0x13] = fVar9 + (float)param_2[0x13];
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be21c;
    pfVar4 = pfVar6;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = pfVar6;
      do {
        uVar5 = (int)pfVar3 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x3f) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    fVar9 = 0.0;
    pfVar3 = local_res8;
    if (pfVar4 != (float *)0x0) {
      pfVar3 = pfVar4;
    }
    local_res8[0] = *pfVar3;
    param_2[0x14] = local_res8[0] + (float)param_2[0x14];
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x32);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x32);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x32 & 1) != 0)) {
      fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x32,param_3);
      fVar9 = fVar9 + fVar8;
    }
    param_2[0x14] = fVar9 + (float)param_2[0x14];
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be220;
    pfVar4 = pfVar6;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = pfVar6;
      do {
        uVar5 = (int)pfVar3 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x40) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    fVar9 = 0.0;
    pfVar3 = local_res8;
    if (pfVar4 != (float *)0x0) {
      pfVar3 = pfVar4;
    }
    local_res8[0] = *pfVar3;
    param_2[0x15] = local_res8[0] + (float)param_2[0x15];
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x33);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x33);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x33 & 1) != 0)) {
      fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x33,param_3);
      fVar9 = fVar9 + fVar8;
    }
    param_2[0x15] = fVar9 + (float)param_2[0x15];
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be224;
    pfVar4 = pfVar6;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = pfVar6;
      do {
        uVar5 = (int)pfVar3 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x41) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    fVar9 = 0.0;
    pfVar3 = local_res8;
    if (pfVar4 != (float *)0x0) {
      pfVar3 = pfVar4;
    }
    local_res8[0] = *pfVar3;
    param_2[0x16] = local_res8[0] + (float)param_2[0x16];
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x34);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x34);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x34 & 1) != 0)) {
      fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x34,param_3);
      fVar9 = fVar9 + fVar8;
    }
    param_2[0x16] = fVar9 + (float)param_2[0x16];
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be228;
    pfVar4 = pfVar6;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = pfVar6;
      do {
        uVar5 = (int)pfVar3 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x42) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    fVar9 = 0.0;
    pfVar3 = local_res8;
    if (pfVar4 != (float *)0x0) {
      pfVar3 = pfVar4;
    }
    local_res8[0] = *pfVar3;
    param_2[0x17] = local_res8[0] + (float)param_2[0x17];
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x35);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x35);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x35 & 1) != 0)) {
      fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x35,param_3);
      fVar9 = fVar9 + fVar8;
    }
    param_2[0x17] = fVar9 + (float)param_2[0x17];
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be22c;
    pfVar4 = pfVar6;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = pfVar6;
      do {
        uVar5 = (int)pfVar3 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x43) {
          pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    fVar9 = 0.0;
    pfVar3 = local_res8;
    if (pfVar4 != (float *)0x0) {
      pfVar3 = pfVar4;
    }
    local_res8[0] = *pfVar3;
    param_2[0x18] = local_res8[0] + (float)param_2[0x18];
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x36);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x36);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x36 & 1) != 0)) {
      fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x36,param_3);
      fVar9 = fVar9 + fVar8;
    }
    param_2[0x18] = fVar9 + (float)param_2[0x18];
    param_2[0x19] = **(undefined4 **)(param_1 + 0x90);
    param_2[0x1a] = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 4);
    param_2[0x1b] = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 8);
    param_2[0x1c] = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0xc);
  }
  *(byte *)(param_2 + 0x20) = *(byte *)(param_1 + 0xa9) & 1;
  pbVar1 = *(byte **)(param_1 + 0x98);
  local_res8[0] = DAT_1467be17c;
  pfVar4 = pfVar6;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar6;
    do {
      uVar5 = (int)pfVar3 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x17) {
        pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  fVar9 = 0.0;
  pfVar3 = local_res8;
  if (pfVar4 != (float *)0x0) {
    pfVar3 = pfVar4;
  }
  local_res8[0] = *pfVar3;
  param_2[0x1d] = local_res8[0] + (float)param_2[0x1d];
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x26);
  if (cVar2 != '\0') {
    fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x26);
  }
  if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
     ((**(ulonglong **)(param_1 + 0x38) >> 0x26 & 1) != 0)) {
    fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x26,param_3);
    fVar9 = fVar9 + fVar8;
  }
  param_2[0x1d] = fVar9 + (float)param_2[0x1d];
  pbVar1 = *(byte **)(param_1 + 0x98);
  local_res8[0] = DAT_1467be230;
  pfVar4 = pfVar6;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar6;
    do {
      uVar5 = (int)pfVar3 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x44) {
        pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  fVar9 = 0.0;
  pfVar3 = local_res8;
  if (pfVar4 != (float *)0x0) {
    pfVar3 = pfVar4;
  }
  local_res8[0] = *pfVar3;
  param_2[0x1e] = local_res8[0] + (float)param_2[0x1e];
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x37);
  if (cVar2 != '\0') {
    fVar9 = (float)FUN_1431437a0(param_1 + 0x18,0x37);
  }
  if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
     ((**(ulonglong **)(param_1 + 0x38) >> 0x37 & 1) != 0)) {
    fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x37,param_3);
    fVar9 = fVar9 + fVar8;
  }
  param_2[0x1e] = fVar9 + (float)param_2[0x1e];
  pbVar1 = *(byte **)(param_1 + 0x98);
  local_res8[0] = DAT_1467be234;
  if (pbVar1 != (byte *)0x0) {
    pfVar4 = pfVar6;
    do {
      uVar5 = (int)pfVar4 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x45) {
        pfVar6 = (float *)(pbVar1 + (longlong)pfVar4 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar4 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  pfVar4 = local_res8;
  if (pfVar6 != (float *)0x0) {
    pfVar4 = pfVar6;
  }
  local_res8[0] = *pfVar4;
  param_2[0x1f] = local_res8[0] + (float)param_2[0x1f];
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x38);
  if (cVar2 != '\0') {
    fVar10 = (float)FUN_1431437a0(param_1 + 0x18,0x38);
  }
  if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
     ((**(ulonglong **)(param_1 + 0x38) >> 0x38 & 1) != 0)) {
    fVar9 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x38,param_3);
    fVar10 = fVar10 + fVar9;
  }
  param_2[0x1f] = fVar10 + (float)param_2[0x1f];
  return 1;
}



// FUNCTION 143147050 GetMixerPlugin body=135 status=ok
// SIG undefined GetMixerPlugin(void)

void CAkBus::GetMixerPlugin(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_2;
  *param_2 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined2 *)(param_2 + 1) = 0;
  lVar2 = *(longlong *)(param_1 + 0xc0);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) {
    if (*(char *)(lVar2 + 9) == '\0') {
      lVar2 = CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x2c0);
    }
    else {
      lVar2 = CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x280);
    }
    plVar1 = (longlong *)*param_2;
    *param_2 = lVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return;
}



// FUNCTION 1431470e0 FUN_1431470e0 body=158 status=ok
// SIG undefined FUN_1431470e0(void)

void FUN_1431470e0(longlong param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  
  *param_3 = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0xc0);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 9) == '\0') {
      plVar3 = (longlong *)
               CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef
                         (DAT_146b50af8 + 0x2c0,*(undefined4 *)(lVar2 + 4));
    }
    else {
      plVar3 = (longlong *)
               CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef
                         (DAT_146b50af8 + 0x280,*(undefined4 *)(lVar2 + 4));
    }
    if (plVar3 != (longlong *)0x0) {
      piVar4 = (int *)plVar3[8];
      piVar1 = piVar4 + (ulonglong)*(uint *)(plVar3 + 9) * 2;
      for (; (piVar4 != piVar1 && (*piVar4 != param_2)); piVar4 = piVar4 + 2) {
      }
      puVar5 = (uint *)0x0;
      puVar6 = (uint *)(piVar4 + 1);
      if (piVar4 == piVar1) {
        puVar6 = puVar5;
      }
      if (puVar6 != (uint *)0x0) {
        puVar5 = (uint *)(ulonglong)*puVar6;
      }
      *param_3 = (int)puVar5;
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return;
}



// FUNCTION 143147180 GetMixingBus body=40 status=ok
// SIG undefined GetMixingBus(void)

undefined8 CAkBus::GetMixingBus(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsMixingBus();
  if (cVar1 != '\0') {
    return param_1;
  }
  uVar2 = FUN_143175660(param_1);
  return uVar2;
}



// FUNCTION 1431471b0 FUN_1431471b0 body=571 status=ok
// SIG undefined FUN_1431471b0(void)

float FUN_1431471b0(longlong param_1,longlong *param_2,int param_3)

{
  byte *pbVar1;
  char cVar2;
  float *pfVar3;
  longlong *plVar4;
  float *pfVar5;
  longlong *plVar6;
  uint uVar7;
  float *pfVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res18 [4];
  longlong local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pbVar1 = *(byte **)(param_1 + 0x98);
  pfVar8 = (float *)0x0;
  local_res18[0] = (float)(&DAT_1467be120)[param_3];
  bVar9 = (byte)param_3;
  pfVar5 = pfVar8;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar8;
    do {
      uVar7 = (int)pfVar3 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar7 + (longlong)pbVar1) == bVar9) {
        pfVar5 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  uVar7 = (&DAT_145aca880)[param_3];
  fVar12 = 0.0;
  pfVar3 = local_res18;
  if (pfVar5 != (float *)0x0) {
    pfVar3 = pfVar5;
  }
  fVar11 = *pfVar3;
  local_res18[0] = fVar11;
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,(ulonglong)uVar7);
  if (cVar2 != '\0') {
    fVar12 = (float)FUN_1431437a0(param_1 + 0x18,uVar7);
  }
  if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
     ((**(ulonglong **)(param_1 + 0x38) >> ((ulonglong)uVar7 & 0x3f) & 1) != 0)) {
    fVar10 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,uVar7,param_2);
    fVar12 = fVar12 + fVar10;
  }
  fVar11 = fVar11 + fVar12;
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     (pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x58) + 0x18), pbVar1 != (byte *)0x0)) {
    pfVar5 = pfVar8;
    do {
      uVar7 = (int)pfVar5 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar7 + (longlong)pbVar1) == bVar9) {
        if ((float *)(pbVar1 + (longlong)pfVar5 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) !=
            (float *)0x0) {
          fVar11 = fVar11 + *(float *)(pbVar1 + (longlong)pfVar5 * 0x10 +
                                                ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        }
        break;
      }
      pfVar5 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  plVar6 = *(longlong **)(param_1 + 0x60);
  if (plVar6 != (longlong *)0x0) {
    plVar4 = (longlong *)*plVar6;
    plVar6 = plVar4 + (ulonglong)*(uint *)(plVar6 + 1) * 2;
    for (; (plVar4 != plVar6 && (*plVar4 != *param_2)); plVar4 = plVar4 + 2) {
    }
    pfVar5 = (float *)(plVar4 + 1);
    if (plVar4 == plVar6) {
      pfVar5 = pfVar8;
    }
    if ((pfVar5 != (float *)0x0) &&
       (pbVar1 = *(byte **)(*(longlong *)pfVar5 + 0x18), pbVar1 != (byte *)0x0)) {
      do {
        uVar7 = (int)pfVar8 + 1;
        if (pbVar1[uVar7] == bVar9) {
          if ((float *)(pbVar1 + (longlong)pfVar8 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
              != (float *)0x0) {
            fVar11 = fVar11 + *(float *)(pbVar1 + (longlong)pfVar8 * 0x10 +
                                                  ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
          }
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar7;
      } while (uVar7 < *pbVar1);
    }
  }
  if ((*(longlong *)(param_1 + 0x88) != 0) && (cVar2 = CAkBus::IsMixingBus(), cVar2 == '\0')) {
    local_78 = *param_2;
    lStack_70 = param_2[1];
    local_68 = (undefined4)param_2[2];
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_60 = (undefined4)param_2[3];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_58 = (undefined4)param_2[4];
    uStack_54 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_50 = (undefined4)param_2[5];
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0x2c);
    fVar12 = (float)FUN_1431471b0(*(undefined8 *)(param_1 + 0x88),&local_78,param_3);
    fVar11 = fVar11 + fVar12;
  }
  return fVar11;
}



// FUNCTION 1431473f0 GetSIS body=190 status=ok
// SIG undefined GetSIS(void)

void CAkBus::GetSIS(longlong param_1,longlong param_2)

{
  short sVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  
  if (param_2 != 0) {
    FUN_143175ae0();
    return;
  }
  CAkRegistryMgr::SetNodeIDAsModified(g_pRegistryMgr,param_1);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    bVar5 = 0;
    uVar3 = 0;
    do {
      sVar1 = CAkParameterNodeBase::GetBypassFX(param_1,uVar3,0);
      uVar4 = uVar3 + 1;
      bVar5 = bVar5 | (sVar1 != 0) << ((byte)uVar3 & 0x1f);
      uVar3 = uVar4;
    } while (uVar4 < 4);
    puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x28);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = param_1;
      *puVar2 = &PTR_FUN_145ac6f58;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(byte *)(puVar2 + 4) = bVar5;
      *(undefined8 **)(param_1 + 0x58) = puVar2;
      return;
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1431474d0 GetStateSyncTypes body=102 status=ok
// SIG undefined GetStateSyncTypes(void)

undefined1 CAkBus::GetStateSyncTypes(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_143190a20(param_1 + 0x18);
  while( true ) {
    if (cVar1 != '\0') {
      return 1;
    }
    param_1 = *(longlong *)(param_1 + 0x88);
    if (param_1 == 0) break;
    cVar1 = FUN_143190a20(param_1 + 0x18,param_2,param_3);
  }
  return 0;
}



// FUNCTION 143147540 FUN_143147540 body=172 status=ok
// SIG undefined FUN_143147540(void)

undefined8 FUN_143147540(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  AKRESULT AVar4;
  void *pvVar5;
  undefined4 extraout_var;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  void *pvVar6;
  
  uVar9 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar9 * 0x18);
  if (pvVar5 == (void *)0x0) {
    return 0;
  }
  pvVar6 = (void *)*param_1;
  if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar5)) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 1);
    if (uVar8 != 0) {
      lVar7 = 0;
      do {
        lVar2 = *param_1;
        puVar1 = (undefined8 *)(lVar7 + lVar2);
        uVar3 = puVar1[1];
        *(undefined8 *)(lVar7 + (longlong)pvVar5) = *puVar1;
        ((undefined8 *)(lVar7 + (longlong)pvVar5))[1] = uVar3;
        *(undefined8 *)(lVar7 + 0x10 + (longlong)pvVar5) = *(undefined8 *)(lVar7 + 0x10 + lVar2);
        uVar8 = uVar8 - 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar8 != 0);
      pvVar6 = (void *)*param_1;
    }
    AVar4 = AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
    pvVar6 = (void *)CONCAT44(extraout_var,AVar4);
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar9;
  *param_1 = (longlong)pvVar5;
  return CONCAT71((int7)((ulonglong)pvVar6 >> 8),1);
}



// FUNCTION 1431475f0 FUN_1431475f0 body=79 status=ok
// SIG undefined FUN_1431475f0(void)

byte FUN_1431475f0(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = FUN_143176710(param_1,1);
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    bVar3 = (**(code **)(*plVar1 + 0x128))(plVar1,1);
    return bVar3 & bVar2;
  }
  return bVar2;
}



// FUNCTION 143147640 FUN_143147640 body=227 status=ok
// SIG undefined FUN_143147640(void)

int FUN_143147640(longlong param_1,longlong param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 1;
  if (param_3 != '\0') {
    iVar2 = FUN_1431768c0(param_1,1);
  }
  if ((param_4 == '\0') && (*(char *)(param_2 + 0x1c) == '\0')) {
    FUN_143177250(param_1,param_2,param_3);
    *(byte *)(param_2 + 0x1c) = *(byte *)(param_1 + 0xaa) >> 2 & 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x88);
  iVar4 = iVar2;
  if ((((plVar1 != (longlong *)0x0) &&
       (iVar3 = (**(code **)(*plVar1 + 0x118))(plVar1,param_2,param_3,param_4), iVar3 != 1)) &&
      (iVar4 = iVar3, iVar3 == 0x50)) && (iVar4 = iVar2, iVar2 == 1)) {
    iVar4 = 0x50;
  }
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (*(short *)(*(longlong *)(param_1 + 0x78) + 0x50) == 1)) {
    *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0x174) & 0xf9;
    *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0x174) | 1;
    FUN_143149bc0(param_1);
  }
  return iVar4;
}



// FUNCTION 143147730 FUN_143147730 body=8 status=ok
// SIG undefined FUN_143147730(void)

undefined1 FUN_143147730(void)

{
  return DAT_146b50ec0;
}



// FUNCTION 143147740 IsMixingBus body=242 status=ok
// SIG undefined IsMixingBus(void)

undefined8 CAkBus::IsMixingBus(longlong *param_1)

{
  byte bVar1;
  ulonglong *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if (param_1[0xd] != 0) {
    uVar5 = 0;
    piVar4 = (int *)(param_1[0xd] + 4);
    do {
      if (*piVar4 != 0) {
        return 1;
      }
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar5 < 4);
  }
  iVar3 = (**(code **)(*param_1 + 0x80))();
  if (((((((iVar3 != 10) && (*(char *)((longlong)param_1 + 0xdc) == '\0')) &&
         (bVar1 = *(byte *)((longlong)param_1 + 0xa9), (bVar1 & 2) == 0)) &&
        (((bVar1 & 0x1c) == 0 && (param_1[0x11] != 0)))) &&
       (((*(uint *)(param_1 + 0x14) & 0xe0000) == 0 &&
        ((param_1[0x18] == 0 && (param_1[0x12] == 0)))))) && ((bVar1 & 1) == 0)) &&
     ((puVar2 = (ulonglong *)param_1[7], puVar2 == (ulonglong *)0x0 ||
      (((*puVar2 & 0x20) == 0 &&
       ((puVar2 == (ulonglong *)0x0 ||
        (((*puVar2 & 0x80000000000) == 0 &&
         ((puVar2 == (ulonglong *)0x0 ||
          (((*puVar2 & 0x200000000000) == 0 &&
           ((puVar2 == (ulonglong *)0x0 || ((*puVar2 & 0x100000000000) == 0)))))))))))))))) {
    return 0;
  }
  return 1;
}



// FUNCTION 143147840 IsOrIsChildOf body=28 status=ok
// SIG undefined IsOrIsChildOf(void)

undefined1 CAkBus::IsOrIsChildOf(longlong param_1,longlong param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_2 == param_1) break;
    param_1 = *(longlong *)(param_1 + 0x88);
  }
  return 1;
}



// FUNCTION 143147860 FUN_143147860 body=12 status=ok
// SIG undefined FUN_143147860(void)

bool FUN_143147860(longlong param_1)

{
  return *(longlong *)(param_1 + 0x88) == 0;
}



// FUNCTION 143147870 Mute body=80 status=ok
// SIG undefined Mute(void)

void CAkBus::Mute(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  if ((param_2 == 0) && (lVar1 = (**(code **)(*param_1 + 0x220))(), lVar1 != 0)) {
    CAkParameterNodeBase::StartSisMuteTransitions(param_1,lVar1,0,param_3,param_4);
  }
  return;
}



// FUNCTION 1431478c0 MuteBackgroundMusic body=180 status=ok
// SIG undefined MuteBackgroundMusic(void)

void CAkBus::MuteBackgroundMusic(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *local_18;
  uint local_10;
  
  if (DAT_146b50ec0 != '\0') {
    return;
  }
  DAT_146b50ec0 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50ee8);
  uVar2 = 0;
  if (DAT_146b50ed0 != 0) {
    do {
      local_18 = *(longlong **)(DAT_146b50ec8 + uVar2 * 8);
      local_10 = local_10 & 0xfffffffd | 1;
      (**(code **)(*local_18 + 0xd0))(local_18,0,&local_18,1);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < DAT_146b50ed0);
  }
  if (DAT_146b50bf8 != (code *)0x0) {
    (*DAT_146b50bf8)(DAT_146b50ec0,DAT_146b50c00);
  }
                    /* WARNING: Could not recover jumptable at 0x000143147968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50ee8);
  return;
}



// FUNCTION 143147980 FUN_143147980 body=175 status=ok
// SIG undefined FUN_143147980(void)

void FUN_143147980(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0xb0), plVar2 != plVar2 + *(uint *)(param_1 + 0xb8))) {
    do {
      if ((param_4 == '\0') || (*(longlong *)(*plVar2 + 0x88) == 0)) {
        plVar1 = (longlong *)*plVar2;
        if ((plVar1[0xf] != 0) && (0 < *(short *)(plVar1[0xf] + 0x50))) {
          (**(code **)(*plVar1 + 0xd0))(plVar1,param_2,param_3,param_4);
        }
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8));
  }
  return;
}



// FUNCTION 143147a30 FUN_143147a30 body=180 status=ok
// SIG undefined FUN_143147a30(void)

void FUN_143147a30(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0xb0), plVar2 != plVar2 + *(uint *)(param_1 + 0xb8))) {
    do {
      plVar1 = (longlong *)*plVar2;
      if ((plVar1[0xf] != 0) && (0 < *(short *)(plVar1[0xf] + 0x50))) {
        (**(code **)(*plVar1 + 200))(plVar1,param_2,param_3,param_4,param_5);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8));
  }
  return;
}



// FUNCTION 143147af0 FUN_143147af0 body=252 status=ok
// SIG undefined FUN_143147af0(void)

void FUN_143147af0(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    plVar1 = (longlong *)(param_1 + 0xb0);
    plVar4 = (longlong *)(param_1 + 200);
    plVar3 = (longlong *)*plVar4;
    if ((plVar3 == plVar3 + *(uint *)(param_1 + 0xd0)) && (plVar4 != plVar1)) {
      plVar3 = (longlong *)*plVar1;
      plVar4 = plVar1;
    }
    if (plVar3 != plVar3 + *(uint *)(plVar4 + 1)) {
      do {
        plVar2 = (longlong *)*plVar3;
        if ((plVar2[0xf] != 0) && (0 < *(short *)(plVar2[0xf] + 0x50))) {
          if ((DAT_146b50ec0 != '\0') &&
             (((*(byte *)(param_1 + 0x174) & 0x40) != 0 && (*param_3 == param_1)))) {
            param_2 = 0;
          }
          (**(code **)(*plVar2 + 0xd0))(plVar2,param_2,param_3,1);
        }
        plVar2 = (longlong *)*plVar4;
        plVar3 = plVar3 + 1;
        if ((plVar3 == plVar2 + *(uint *)(plVar4 + 1)) && (plVar4 != plVar1)) {
          plVar2 = (longlong *)*plVar1;
          plVar3 = plVar2;
          plVar4 = plVar1;
        }
      } while (plVar3 != plVar2 + *(uint *)(plVar4 + 1));
    }
  }
  return;
}



// FUNCTION 143147bf0 FUN_143147bf0 body=185 status=ok
// SIG undefined FUN_143147bf0(void)

void FUN_143147bf0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0xb0), plVar2 != plVar2 + *(uint *)(param_1 + 0xb8))) {
    do {
      plVar1 = (longlong *)*plVar2;
      if ((plVar1[0xf] != 0) &&
         ((0 < *(short *)(plVar1[0xf] + 0x50) && ((*(uint *)(plVar1 + 0x14) & 0x1f000) == 0)))) {
        (**(code **)(*plVar1 + 0xf8))(plVar1,param_2,param_3,param_4,param_5);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8));
  }
  return;
}



// FUNCTION 143147cf0 FUN_143147cf0 body=160 status=ok
// SIG undefined FUN_143147cf0(void)

void FUN_143147cf0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0xb0), plVar3 != plVar3 + *(uint *)(param_1 + 0xb8))) {
    do {
      if ((*(char *)(param_2 + 0xe) == '\0') || (*(longlong *)(*plVar3 + 0x88) == 0)) {
        plVar1 = (longlong *)*plVar3;
        if (((plVar1[0xf] != 0) && (0 < *(short *)(plVar1[0xf] + 0x50))) &&
           (cVar2 = (**(code **)(*plVar1 + 0x1e8))(plVar1,*param_2), cVar2 == '\0')) {
          (**(code **)(*(longlong *)*plVar3 + 0xb8))((longlong *)*plVar3,param_2);
        }
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != (longlong *)
                       (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8));
  }
  return;
}



// FUNCTION 143147d90 FUN_143147d90 body=571 status=ok
// SIG undefined FUN_143147d90(void)

void FUN_143147d90(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  *(undefined1 *)(param_2 + 0xe) = 1;
  cVar4 = CAkBus::IsMixingBus();
  if (cVar4 == '\0') {
    lVar3 = *(longlong *)(param_1 + 0x78);
    if ((lVar3 != 0) &&
       ((((0 < *(short *)(lVar3 + 0x50) || (0 < *(short *)(lVar3 + 0x54))) && (*param_2 < 0x2e)) &&
        ((0x3800000000bdU >> ((longlong)(int)*param_2 & 0x3fU) & 1) != 0)))) {
      plVar7 = (longlong *)(param_1 + 200);
      plVar1 = (longlong *)(param_1 + 0xb0);
      plVar6 = (longlong *)*plVar7;
      if ((plVar6 == plVar6 + *(uint *)(param_1 + 0xd0)) && (plVar7 != plVar1)) {
        plVar6 = (longlong *)*plVar1;
        plVar7 = plVar1;
      }
      if (plVar6 != plVar6 + *(uint *)(plVar7 + 1)) {
        do {
          plVar5 = (longlong *)*plVar6;
          lVar3 = plVar5[0xf];
          if ((lVar3 != 0) && ((0 < *(short *)(lVar3 + 0x50) || (0 < *(short *)(lVar3 + 0x54))))) {
            (**(code **)(*plVar5 + 0xb8))(plVar5,param_2);
          }
          plVar5 = (longlong *)*plVar7;
          plVar6 = plVar6 + 1;
          if ((plVar6 == plVar5 + *(uint *)(plVar7 + 1)) && (plVar7 != plVar1)) {
            plVar5 = (longlong *)*plVar1;
            plVar6 = plVar5;
            plVar7 = plVar1;
          }
        } while (plVar6 != plVar5 + *(uint *)(plVar7 + 1));
      }
    }
  }
  else {
    uVar2 = *param_2;
    if (uVar2 == 0x23) {
      *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0x174) | 0x10;
    }
    else if ((uVar2 - 0x22 & 0xfffffffd) == 0) {
      *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0x174) | 0x20;
    }
    else if ((uVar2 < 8) && ((0x9dU >> (uVar2 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x78);
      if ((lVar3 != 0) && ((0 < *(short *)(lVar3 + 0x50) || (0 < *(short *)(lVar3 + 0x54))))) {
        plVar7 = (longlong *)(param_1 + 200);
        plVar1 = (longlong *)(param_1 + 0xb0);
        plVar6 = (longlong *)*plVar7;
        if ((plVar6 == plVar6 + *(uint *)(param_1 + 0xd0)) && (plVar7 != plVar1)) {
          plVar6 = (longlong *)*plVar1;
          plVar7 = plVar1;
        }
        if (plVar6 != plVar6 + *(uint *)(plVar7 + 1)) {
          do {
            plVar5 = (longlong *)*plVar6;
            lVar3 = plVar5[0xf];
            if ((lVar3 != 0) && ((0 < *(short *)(lVar3 + 0x50) || (0 < *(short *)(lVar3 + 0x54)))))
            {
              (**(code **)(*plVar5 + 0xb8))(plVar5,param_2);
            }
            plVar5 = (longlong *)*plVar7;
            plVar6 = plVar6 + 1;
            if ((plVar6 == plVar5 + *(uint *)(plVar7 + 1)) && (plVar7 != plVar1)) {
              plVar5 = (longlong *)*plVar1;
              plVar6 = plVar5;
              plVar7 = plVar1;
            }
          } while (plVar6 != plVar5 + *(uint *)(plVar7 + 1));
        }
      }
    }
    else if (uVar2 - 0x2b < 3) {
      FUN_1431264e0(*(undefined4 *)(param_1 + 0x10),param_2);
    }
    else {
      FUN_143126580(*(undefined4 *)(param_1 + 0x10),1);
    }
  }
  return;
}



// FUNCTION 143147fd0 PlayToEnd body=138 status=ok
// SIG undefined PlayToEnd(void)

void CAkActiveParent<CAkParameterNodeBase>::PlayToEnd
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0xb8)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0xb0))((longlong *)*puVar1,param_2,param_3,param_4);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)
                       (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8));
  }
  return;
}



// FUNCTION 143148060 PlayToEnd body=187 status=ok
// SIG undefined PlayToEnd(void)

void CAkBus::PlayToEnd(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(param_1 + 200);
  puVar3 = (undefined8 *)*plVar4;
  plVar1 = (longlong *)(param_1 + 0xb0);
  if ((puVar3 == puVar3 + *(uint *)(param_1 + 0xd0)) && (plVar4 != plVar1)) {
    puVar3 = (undefined8 *)*plVar1;
    plVar4 = plVar1;
  }
  if (puVar3 != puVar3 + *(uint *)(plVar4 + 1)) {
    do {
      (**(code **)(*(longlong *)*puVar3 + 0xb0))((longlong *)*puVar3,param_2,param_3,param_4);
      puVar2 = (undefined8 *)*plVar4;
      puVar3 = puVar3 + 1;
      if ((puVar3 == puVar2 + *(uint *)(plVar4 + 1)) && (plVar4 != plVar1)) {
        puVar2 = (undefined8 *)*plVar1;
        puVar3 = puVar2;
        plVar4 = plVar1;
      }
    } while (puVar3 != puVar2 + *(uint *)(plVar4 + 1));
  }
  return;
}



// FUNCTION 143148150 FUN_143148150 body=227 status=ok
// SIG undefined FUN_143148150(void)

ulonglong FUN_143148150(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  puVar3 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar3 == puVar3 + *(uint *)(param_1 + 0xb8)) {
    return 1;
  }
  do {
    uVar1 = (**(code **)(*(longlong *)*puVar3 + 0x138))((longlong *)*puVar3,param_2);
    if ((int)uVar1 != 1) {
      puVar5 = *(undefined8 **)(param_1 + 0xb0);
      uVar4 = 0;
      uVar6 = (ulonglong)((longlong)puVar3 + (7 - (longlong)puVar5)) >> 3;
      if (puVar3 < puVar5) {
        uVar6 = uVar4;
      }
      uVar2 = uVar1;
      if (uVar6 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar5 + 0x140))((longlong *)*puVar5,param_2);
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 1;
          uVar2 = uVar1 & 0xffffffff;
        } while (uVar4 != uVar6);
      }
      return uVar2;
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 != (undefined8 *)
                     (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8));
  return uVar1 & 0xffffffff;
}



// FUNCTION 143148240 FUN_143148240 body=193 status=ok
// SIG undefined FUN_143148240(void)

void FUN_143148240(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0xb0), plVar2 != plVar2 + *(uint *)(param_1 + 0xb8))) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (((*(uint *)(plVar1 + 0x14) & 0xffe) == 0) &&
         ((plVar1[0xf] != 0 && (0 < *(short *)(plVar1[0xf] + 0x50))))) {
        (**(code **)(*plVar1 + 0xd8))(plVar1,param_2,param_3,param_4,param_5);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8));
  }
  return;
}



// FUNCTION 143148360 FUN_143148360 body=124 status=ok
// SIG undefined FUN_143148360(void)

void FUN_143148360(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0xb0), plVar2 != plVar2 + *(uint *)(param_1 + 0xb8))) {
    do {
      plVar1 = (longlong *)*plVar2;
      if ((plVar1[0xf] != 0) && (0 < *(short *)(plVar1[0xf] + 0x50))) {
        (**(code **)(*plVar1 + 400))(plVar1,param_2);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8));
  }
  return;
}



// FUNCTION 1431483e0 FUN_1431483e0 body=233 status=ok
// SIG undefined FUN_1431483e0(void)

void FUN_1431483e0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  cVar2 = CAkBus::IsMixingBus();
  if (cVar2 != '\0') {
    *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0x174) | 0x10;
    CAkLEngine::ResetBusVolume(*(undefined4 *)(param_1 + 0x10));
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    plVar6 = (longlong *)(param_1 + 200);
    plVar4 = (longlong *)*plVar6;
    plVar5 = (longlong *)(param_1 + 0xb0);
    if ((plVar4 == plVar4 + *(uint *)(param_1 + 0xd0)) && (plVar6 != plVar5)) {
      plVar4 = (longlong *)*plVar5;
      plVar6 = plVar5;
    }
    if (plVar4 != plVar4 + *(uint *)(plVar6 + 1)) {
      do {
        plVar3 = (longlong *)*plVar4;
        lVar1 = plVar3[0xf];
        if ((lVar1 != 0) && ((0 < *(short *)(lVar1 + 0x50) || (0 < *(short *)(lVar1 + 0x54))))) {
          (**(code **)(*plVar3 + 400))(plVar3,param_2);
        }
        plVar3 = (longlong *)*plVar6;
        plVar4 = plVar4 + 1;
        if ((plVar4 == plVar3 + *(uint *)(plVar6 + 1)) && (plVar6 != plVar5)) {
          plVar3 = (longlong *)*plVar5;
          plVar4 = plVar3;
          plVar6 = plVar5;
        }
      } while (plVar4 != plVar3 + *(uint *)(plVar6 + 1));
    }
  }
  return;
}



// FUNCTION 1431484d0 RemoveAll body=107 status=ok
// SIG undefined RemoveAll(void)

void CAkList2<MapStruct<unsigned_long,CAkBus::AkDuckInfo>,MapStruct<unsigned_long,CAkBus::AkDuckInfo>_const_&,1,_ArrayPoolDefault>
     ::RemoveAll(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  while (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0) {
    *param_1 = *puVar1;
    if (puVar1 == (undefined8 *)param_1[1]) {
      param_1[1] = 0;
    }
    if ((puVar1 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 4 <= puVar1)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
    }
    else {
      *puVar1 = param_1[2];
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
      param_1[2] = puVar1;
    }
  }
  return;
}



// FUNCTION 143148540 RemoveChild body=71 status=ok
// SIG undefined RemoveChild(void)

void CAkParentNode<CAkParameterNodeBase>::RemoveChild(longlong *param_1,longlong *param_2)

{
  if ((longlong *)param_2[0x10] == param_1) {
    (**(code **)(*param_2 + 0x30))(param_2,0);
    FUN_143149aa0(param_1 + 0x16,(int)param_2[2]);
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}



// FUNCTION 143148590 RemoveChild body=50 status=ok
// SIG undefined RemoveChild(void)

void CAkParentNode<CAkParameterNodeBase>::RemoveChild(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143145200(param_1 + 0x16);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001431485b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x60))(param_1,*puVar1);
    return;
  }
  return;
}



// FUNCTION 1431485d0 RemoveChild body=89 status=ok
// SIG undefined RemoveChild(void)

void CAkBus::RemoveChild(longlong *param_1,longlong *param_2)

{
  if ((longlong *)param_2[0x11] == param_1) {
    (**(code **)(*param_2 + 0x38))(param_2,0);
    FUN_143149aa0(param_1 + 0x16,(int)param_2[2]);
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}



// FUNCTION 143148630 RemoveChild body=73 status=ok
// SIG undefined RemoveChild(void)

void CAkBus::RemoveChild(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if ((char)((ulonglong)param_2 >> 0x20) == '\0') {
    plVar2 = param_1 + 0x16;
  }
  else {
    plVar2 = param_1 + 0x19;
  }
  puVar1 = (undefined8 *)FUN_143145200(plVar2);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014314866f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x60))(param_1,*puVar1);
    return;
  }
  return;
}



// FUNCTION 143148680 RemoveStateGroup body=116 status=ok
// SIG undefined RemoveStateGroup(void)

void CAkBus::RemoveStateGroup(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = IsMixingBus(param_1 + -0x18);
  CAkStateAware::RemoveStateGroup(param_1,param_2,param_3);
  cVar2 = IsMixingBus(param_1 + -0x18);
  if ((cVar1 != cVar2) && (*(longlong *)(param_1 + 0x60) != 0)) {
    CAkLEngine::ReevaluateGraph(1);
  }
  return;
}



// FUNCTION 143148700 SetAkProp body=289 status=ok
// SIG undefined SetAkProp(void)

undefined8
AkPropBundle<AkPropValue,unsigned_char>::SetAkProp
          (longlong *param_1,byte param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  size_t _Size;
  uint uVar6;
  
  pbVar5 = (byte *)*param_1;
  if (pbVar5 == (byte *)0x0) {
    _Size = 0;
  }
  else {
    bVar1 = *pbVar5;
    _Size = (size_t)bVar1;
    uVar6 = 0;
    do {
      uVar4 = uVar6 + 1;
      if (pbVar5[uVar4] == param_2) {
        pbVar5 = pbVar5 + (ulonglong)uVar6 * 4 + ((ulonglong)(bVar1 + 4) & 0xfffffffc);
        if (pbVar5 != (byte *)0x0) goto LAB_1431487fb;
        break;
      }
      uVar6 = uVar4;
    } while (uVar4 < bVar1);
  }
  iVar2 = (int)_Size;
  uVar6 = iVar2 + 5;
  pcVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)((uVar6 & 0xfffffffc) + 4 + iVar2 * 4));
  if (pcVar3 != (char *)0x0) {
    if (*param_1 != 0) {
      ::_guard_xfg_dispatch_icall_nop(pcVar3 + 1,(void *)(*param_1 + 1),_Size);
      ::_guard_xfg_dispatch_icall_nop
                (pcVar3 + ((ulonglong)uVar6 & 0xfffffffc),
                 (void *)(((ulonglong)(iVar2 + 4) & 0xfffffffc) + *param_1),_Size * 4);
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    }
    pcVar3[iVar2 + 1] = param_2;
    *pcVar3 = (char)_Size + '\x01';
    *param_1 = (longlong)pcVar3;
    pbVar5 = (byte *)(pcVar3 + _Size * 4 + ((ulonglong)uVar6 & 0xfffffffc));
    if (pbVar5 != (byte *)0x0) {
LAB_1431487fb:
      *(undefined4 *)pbVar5 = param_3;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 143148830 FUN_143148830 body=481 status=ok
// SIG undefined FUN_143148830(void)

void FUN_143148830(longlong *param_1,ulonglong param_2,float param_3,undefined8 param_4,
                  undefined4 param_5)

{
  byte *pbVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  undefined8 in_R8;
  float *pfVar5;
  float local_res10 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  uVar4 = (uint)param_2;
  if (uVar4 < 6) {
    pbVar1 = (byte *)param_1[0x13];
    pfVar5 = (float *)0x0;
    local_res10[0] = 0.0;
    if (pbVar1 != (byte *)0x0) {
      pfVar2 = pfVar5;
      do {
        uVar3 = (int)pfVar2 + 1;
        if (pbVar1[uVar3] == (byte)param_2) {
          pfVar5 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar2 = (float *)(ulonglong)uVar3;
      } while (uVar3 < *pbVar1);
    }
    pfVar2 = local_res10;
    if (pfVar5 != (float *)0x0) {
      pfVar2 = pfVar5;
    }
    local_res10[0] = *pfVar2;
    if (param_3 - local_res10[0] == 0.0) {
      return;
    }
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_20 = 0;
    local_30 = 0xff;
    local_28 = 0xff;
    (**(code **)(*param_1 + 0xc0))(param_1,(&DAT_145aca880)[(int)uVar4],*param_1,&local_48,0);
  }
  else {
    if (2 < uVar4 - 0xc) {
      FUN_143178510(param_5,param_2,in_R8,param_4,param_5);
      return;
    }
    pbVar1 = (byte *)param_1[0x13];
    pfVar5 = (float *)0x0;
    local_res10[0] = 0.0;
    if (pbVar1 != (byte *)0x0) {
      pfVar2 = pfVar5;
      do {
        uVar3 = (int)pfVar2 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar3 + (longlong)pbVar1) == (byte)param_2) {
          pfVar5 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar2 = (float *)(ulonglong)uVar3;
      } while (uVar3 < *pbVar1);
    }
    pfVar2 = local_res10;
    if (pfVar5 != (float *)0x0) {
      pfVar2 = pfVar5;
    }
    local_res10[0] = *pfVar2;
    if (param_3 - local_res10[0] == 0.0) {
      return;
    }
    (**(code **)(*param_1 + 0x1f8))(param_1,param_3,(&DAT_145aca880)[(int)uVar4],0,0);
  }
  local_res10[0] = param_3;
  AkPropBundle<AkPropValue,unsigned_char>::SetAkProp(param_1 + 0x13,param_2 & 0xff,param_3);
  return;
}



// FUNCTION 143148a20 SetAkProp body=111 status=ok
// SIG undefined SetAkProp(void)

void CAkBus::SetAkProp(longlong *param_1,int param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  
  if (param_2 != 5) {
    param_3 = 0;
  }
  lVar1 = (**(code **)(*param_1 + 0x220))(param_1,param_3);
  if (lVar1 != 0) {
    FUN_1431791e0(param_1,lVar1,param_2,param_5,param_4,param_6,param_7);
  }
  return;
}



// FUNCTION 143148a90 SetBusDevice body=109 status=ok
// SIG undefined SetBusDevice(void)

void CAkBus::SetBusDevice(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x170) != param_2) {
    uVar2 = 0;
    *(int *)(param_1 + 0x170) = param_2;
    if (*(int *)(param_1 + 0xd0) != 0) {
      do {
        SetBusDevice(*(undefined8 *)(*(longlong *)(param_1 + 200) + uVar2 * 8),param_2);
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0xd0));
    }
    if (*(longlong *)(param_1 + 0x88) == 0) {
      CAkLEngine::ReevaluateGraph(1);
    }
  }
  return;
}



// FUNCTION 143148b00 FUN_143148b00 body=276 status=ok
// SIG undefined FUN_143148b00(void)

int FUN_143148b00(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  
  pbVar7 = (byte *)*param_2;
  iVar10 = 1;
  bVar1 = *pbVar7;
  *param_2 = (longlong)(pbVar7 + 1);
  if (bVar1 != 0) {
    uVar11 = 0;
    bVar2 = pbVar7[1];
    *param_2 = (longlong)(pbVar7 + 2);
    if (bVar1 != 0) {
      do {
        puVar8 = (undefined1 *)*param_2;
        uVar3 = *puVar8;
        *param_2 = (longlong)(puVar8 + 1);
        iVar5 = *(int *)(puVar8 + 1);
        *param_2 = (longlong)(puVar8 + 5);
        cVar4 = puVar8[5];
        *param_2 = (longlong)(puVar8 + 7);
        if ((iVar5 != 0) &&
           (iVar10 = FUN_143178960(param_1,uVar3,iVar5,cVar4 != '\0',0), iVar10 != 1)) break;
        uVar11 = uVar11 + 1;
      } while (uVar11 < bVar1);
    }
    FUN_143176d10(param_1,bVar2,0xffffffff);
    if (iVar10 != 1) goto LAB_143148bfa;
  }
  puVar9 = (undefined4 *)*param_2;
  uVar6 = *puVar9;
  *param_2 = (longlong)(puVar9 + 1);
  cVar4 = *(char *)(puVar9 + 1);
  *param_2 = (longlong)puVar9 + 5;
  iVar10 = (**(code **)(*param_1 + 0x1b8))(param_1,uVar6,cVar4 != '\0',0);
LAB_143148bfa:
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x1f000;
  return iVar10;
}



// FUNCTION 143148c20 FUN_143148c20 body=650 status=ok
// SIG undefined FUN_143148c20(void)

undefined8 FUN_143148c20(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  size_t _Size;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  longlong *local_28;
  uint local_20;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (longlong)((byte *)*param_2 + 1);
  if (bVar1 != 0) {
    uVar9 = bVar1 + 4 & 0xfffffffc;
    pbVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(uVar9 + (uint)bVar1 * 4));
    if (pbVar4 != (byte *)0x0) {
      *pbVar4 = bVar1;
      _guard_xfg_dispatch_icall_nop(pbVar4 + 1,(void *)*param_2,(ulonglong)bVar1);
      *param_2 = *param_2 + (ulonglong)bVar1;
      _Size = (ulonglong)bVar1 * 4;
      _guard_xfg_dispatch_icall_nop(pbVar4 + uVar9,(void *)*param_2,_Size);
      *param_2 = *param_2 + _Size;
      param_1[0x13] = (longlong)pbVar4;
    }
  }
  uVar5 = FUN_143178ef0(param_1,param_2,param_3);
  if (((int)uVar5 == 1) &&
     (uVar5 = (**(code **)(*param_1 + 0x210))(param_1,param_2,param_3), (int)uVar5 == 1)) {
    bVar1 = *(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
    FUN_143178a40(param_1,bVar1 & 1);
    FUN_143178e70(param_1,bVar1 >> 1 & 1);
    uVar2 = *(ushort *)*param_2;
    *param_2 = (longlong)((ushort *)*param_2 + 1);
    *(ushort *)((longlong)param_1 + 0xa6) = *(ushort *)((longlong)param_1 + 0xa6) & 0xfc00;
    *(ushort *)((longlong)param_1 + 0xa6) = *(ushort *)((longlong)param_1 + 0xa6) | uVar2 & 0x3ff;
    CAkParameterNodeBase::ClearLimitersAndMakeDirty(param_1);
    *(byte *)((longlong)param_1 + 0xaa) = *(byte *)((longlong)param_1 + 0xaa) & 0xfb;
    *(byte *)((longlong)param_1 + 0xaa) = *(byte *)((longlong)param_1 + 0xaa) | bVar1 & 4;
    uVar9 = *(uint *)*param_2;
    *param_2 = (longlong)((uint *)*param_2 + 1);
    uVar3 = *(uint *)((longlong)param_1 + 0xdc);
    if ((uVar9 & 0xf00) == 0x100) {
      bVar8 = 0;
      uVar7 = uVar9 >> 0xc & 0x3ff3f;
      for (uVar9 = uVar7; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
        bVar8 = bVar8 + 1;
      }
      *(byte *)((longlong)param_1 + 0xdc) = bVar8;
      uVar9 = uVar7 << 0xc | (uint)bVar8 | 0x100;
    }
    *(uint *)((longlong)param_1 + 0xdc) = uVar9;
    if ((((char)uVar9 != (char)uVar3) || (((uVar9 ^ uVar3) & 0xf00) != 0)) ||
       (((uVar9 ^ uVar3) & 0xfffff000) != 0)) {
      CAkLEngine::ReevaluateGraph((int)param_1[2]);
    }
    bVar8 = *(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
    uVar9 = *(uint *)(param_1 + 0x14) | 0xe0000;
    if ((bVar8 & 1) == 0) {
      uVar9 = *(uint *)(param_1 + 0x14) & 0xfff1ffff;
    }
    *(uint *)(param_1 + 0x14) = uVar9;
    *(byte *)((longlong)param_1 + 0x174) = *(byte *)((longlong)param_1 + 0x174) & 0xf7;
    *(byte *)((longlong)param_1 + 0x174) = *(byte *)((longlong)param_1 + 0x174) | (bVar8 & 2) << 2;
    if ((bVar1 & 8) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50ee8);
      if (((*(byte *)((longlong)param_1 + 0x174) & 0x40) == 0) &&
         (puVar6 = (undefined8 *)FUN_143143fe0(&DAT_146b50ec8), puVar6 != (undefined8 *)0x0)) {
        *puVar6 = param_1;
        *(byte *)((longlong)param_1 + 0x174) = *(byte *)((longlong)param_1 + 0x174) | 0x40;
        if (DAT_146b50ec0 != '\0') {
          local_20 = local_20 & 0xfffffffd | 1;
          local_28 = param_1;
          (**(code **)(*param_1 + 0xd0))(param_1,0,&local_28,1);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50ee8);
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 143148eb0 FUN_143148eb0 body=1377 status=ok
// SIG undefined FUN_143148eb0(void)

int FUN_143148eb0(longlong *param_1,byte *param_2,int param_3)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  longlong *plVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  byte *local_res10;
  int local_res18 [2];
  uint local_res20;
  undefined4 *puVar21;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar10 = (**(code **)(*param_1 + 0x80))();
  if ((iVar10 != 0) && (iVar10 != 10)) {
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b50b18);
    return 0x5b;
  }
  pbVar11 = local_res10 + 4;
  pbVar12 = local_res10 + 8;
  puVar18 = (undefined4 *)0x0;
  bVar9 = false;
  if (*(int *)pbVar11 == 0) {
    local_res10 = local_res10 + 0xc;
    bVar9 = true;
    *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)pbVar12;
  }
  else {
    local_res10 = pbVar12;
    plVar13 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*(int *)pbVar11,1);
    if (plVar13 == (longlong *)0x0) {
      iVar10 = 2;
      goto LAB_1431491e0;
    }
    (**(code **)(*param_1 + 8))(param_1);
    iVar10 = (**(code **)(*plVar13 + 0x48))(plVar13,param_1);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    if (iVar10 != 1) goto LAB_1431491e0;
  }
  iVar10 = (**(code **)(*param_1 + 0x200))(param_1,&local_res10,local_res18);
  if (iVar10 == 1) {
    uVar20 = (uint)((longlong)((ulonglong)DAT_1467bdcac * (longlong)*(int *)local_res10) / 1000);
    uVar17 = 0;
    if (DAT_1467bdcb8 < uVar20) {
      uVar17 = uVar20;
    }
    *(uint *)(param_1 + 0x1b) = uVar17;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(local_res10 + 4);
    uVar17 = *(uint *)(local_res10 + 8);
    local_res10 = local_res10 + 0xc;
    puVar21 = puVar18;
    if (uVar17 != 0) {
      do {
        iVar5 = *(int *)local_res10;
        uVar1 = *(undefined4 *)(local_res10 + 4);
        uVar6 = *(undefined4 *)(local_res10 + 8);
        uVar7 = *(undefined4 *)(local_res10 + 0xc);
        local_res20 = CONCAT31(local_res20._1_3_,local_res10[0x10]);
        bVar2 = local_res10[0x11];
        local_res10 = local_res10 + 0x12;
        for (puVar15 = (undefined8 *)param_1[0x1d]; puVar16 = puVar18, puVar15 != (undefined8 *)0x0;
            puVar15 = (undefined8 *)*puVar15) {
          if (*(int *)(puVar15 + 1) == iVar5) {
            puVar16 = (undefined4 *)((longlong)puVar15 + 0xc);
            if (puVar16 != (undefined4 *)0x0) goto LAB_143149148;
            break;
          }
        }
        plVar13 = (longlong *)param_1[0x1f];
        if (plVar13 == (longlong *)0x0) {
          plVar13 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
          if (plVar13 != (longlong *)0x0) {
            *plVar13 = param_1[0x1f];
            param_1[0x1f] = (longlong)plVar13;
            goto LAB_1431490eb;
          }
        }
        else {
LAB_1431490eb:
          if ((undefined8 *)param_1[0x1e] == (undefined8 *)0x0) {
            param_1[0x1d] = (longlong)plVar13;
          }
          else {
            *(undefined8 *)param_1[0x1e] = plVar13;
            plVar13 = (longlong *)param_1[0x1f];
          }
          param_1[0x1e] = (longlong)plVar13;
          param_1[0x1f] = *plVar13;
          *plVar13 = 0;
          *(int *)((longlong)param_1 + 0x10c) = *(int *)((longlong)param_1 + 0x10c) + 1;
          lVar8 = param_1[0x1e];
          piVar14 = (int *)(lVar8 + 8);
          if (piVar14 != (int *)0x0) {
            *piVar14 = iVar5;
            puVar16 = (undefined4 *)(lVar8 + 0xc);
          }
        }
        if (puVar16 == (undefined4 *)0x0) {
          iVar10 = 2;
          goto LAB_1431491e0;
        }
LAB_143149148:
        iVar10 = 1;
        puVar16[3] = local_res20 & 0xff;
        puVar16[2] = uVar7;
        puVar16[1] = uVar6;
        *puVar16 = uVar1;
        puVar16[4] = (uint)bVar2;
        plVar13 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,iVar5,1);
        if (plVar13 != (longlong *)0x0) {
          iVar10 = CAkRTPCSubscriberNode::EnableParam(plVar13 + 0x2c,(&DAT_145aca880)[bVar2]);
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
        if (iVar10 != 1) goto LAB_1431491e0;
        uVar20 = (int)puVar21 + 1;
        puVar21 = (undefined4 *)(ulonglong)uVar20;
      } while (uVar20 < uVar17);
    }
    iVar10 = (**(code **)(*param_1 + 0x208))(param_1,&local_res10,local_res18,0);
  }
LAB_1431491e0:
  bVar2 = *local_res10;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf7;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | (bVar2 & 1) << 3;
  if (iVar10 == 1) {
    uVar3 = *(ushort *)(local_res10 + 1);
    local_res10 = local_res10 + 3;
    if (uVar3 != 0) {
      do {
        uVar1 = *(undefined4 *)local_res10;
        pbVar11 = local_res10 + 4;
        local_res20 = (uint)local_res10[5];
        bVar2 = local_res10[6];
        pbVar12 = local_res10 + 7;
        uVar17 = bVar2 & 0x7f;
        while ((char)bVar2 < '\0') {
          bVar2 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          uVar17 = bVar2 & 0x7f | uVar17 << 7;
        }
        uVar4 = *(ushort *)(pbVar12 + 5);
        local_res10 = pbVar12 + 7;
        iVar10 = (**(code **)(*param_1 + 0x1d8))
                           (param_1,uVar1,*pbVar11,local_res20,uVar17,*(undefined4 *)pbVar12,
                            pbVar12[4],local_res10,(uint)uVar4,1);
        if (iVar10 != 1) break;
        uVar17 = (int)puVar18 + 1;
        puVar18 = (undefined4 *)(ulonglong)uVar17;
        local_res10 = local_res10 + (ulonglong)uVar4 * 0xc;
        local_res18[0] = local_res18[0] + (uint)uVar4 * -0xc;
      } while (uVar17 < uVar3);
    }
    if ((iVar10 == 1) &&
       (iVar10 = (**(code **)(param_1[3] + 0x68))(param_1 + 3,&local_res10,local_res18), iVar10 == 1
       )) {
      if (bVar9) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
        for (puVar15 = DAT_146b50ed8;
            (puVar15 != DAT_146b50ed8 + DAT_146b50ee0 && ((longlong *)*puVar15 != param_1));
            puVar15 = puVar15 + 1) {
        }
        puVar19 = (undefined8 *)0x0;
        if (puVar15 != DAT_146b50ed8 + DAT_146b50ee0) {
          puVar19 = puVar15;
        }
        if (puVar19 == (undefined8 *)0x0) {
          puVar15 = (undefined8 *)FUN_143143fe0(&DAT_146b50ed8);
          if (puVar15 != (undefined8 *)0x0) {
            *puVar15 = param_1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
            return 1;
          }
          iVar10 = 0x34;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
      }
      else {
        *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_1[0x11] + 0x170);
      }
    }
  }
  return iVar10;
}



// FUNCTION 143149420 SetMixerPlugin body=248 status=ok
// SIG undefined SetMixerPlugin(void)

undefined8 CAkBus::SetMixerPlugin(longlong param_1,int param_2,char param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) == 0)) {
    puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xc);
    *(undefined8 **)(param_1 + 0xc0) = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar2 = 0;
    *(undefined1 *)((longlong)puVar2 + 9) = 1;
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      return 2;
    }
  }
  piVar1 = *(int **)(param_1 + 0xc0);
  pvVar3 = (void *)0x0;
  if (piVar1 != (int *)0x0) {
    if (param_4 < *piVar1) {
      return 1;
    }
    *piVar1 = param_4;
    pvVar3 = *(void **)(param_1 + 0xc0);
  }
  if ((pvVar3 != (void *)0x0) &&
     ((*(char *)((longlong)pvVar3 + 9) != param_3 || (*(int *)((longlong)pvVar3 + 4) != param_2))))
  {
    *(char *)((longlong)pvVar3 + 9) = param_3;
    *(int *)(*(longlong *)(param_1 + 0xc0) + 4) = param_2;
    CAkParameterNodeBase::Stop(param_1,0,0,0,4);
    pvVar3 = *(void **)(param_1 + 0xc0);
  }
  if ((pvVar3 != (void *)0x0) && (param_2 == 0)) {
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar3);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return 1;
}



// FUNCTION 143149520 SetRTPC body=187 status=ok
// SIG undefined SetRTPC(void)

undefined4
CAkBus::SetRTPC(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
               undefined4 param_9)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar1 = IsMixingBus();
  uVar3 = CAkParameterNodeBase::SetRTPC
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,1);
  cVar2 = IsMixingBus(param_1);
  if ((cVar1 != cVar2) && (*(longlong *)(param_1 + 0x78) != 0)) {
    CAkLEngine::ReevaluateGraph(1);
  }
  return uVar3;
}



// FUNCTION 1431495e0 SetStateProperties body=119 status=ok
// SIG undefined SetStateProperties(void)

void CAkBus::SetStateProperties
               (longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  char cVar2;
  
  cVar1 = IsMixingBus(param_1 + -0x18);
  CAkParamNodeStateAware::SetStateProperties(param_1,param_2,param_3,param_4);
  cVar2 = IsMixingBus(param_1 + -0x18);
  if ((cVar1 != cVar2) && (*(longlong *)(param_1 + 0x60) != 0)) {
    CAkLEngine::ReevaluateGraph(1);
  }
  return;
}



// FUNCTION 143149660 StartDuckTransitions body=228 status=ok
// SIG undefined StartDuckTransitions(void)

void CAkBus::StartDuckTransitions
               (undefined8 param_1,undefined8 *param_2,float param_3,int param_4,undefined4 param_5,
               int param_6,int param_7)

{
  undefined8 uVar1;
  undefined8 *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  int local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined1 local_16;
  
  if (param_2[2] != 0) {
    CAkTransitionManager::ChangeParameter
              (DAT_146b50af0,param_2[2],(longlong)param_7,param_3,param_6,param_5,param_4);
    return;
  }
  local_28 = *(float *)(param_2 + 3);
  local_24 = 0.0;
  if (param_4 - 1U < 2) {
    local_24 = param_3;
  }
  if ((local_28 != local_24) && (param_6 != 0)) {
    local_30 = (longlong)param_7;
    local_20 = param_6;
    local_1c = param_5;
    local_18 = 0x101;
    local_16 = 0;
    local_38 = param_2;
    uVar1 = FUN_14314fa00(DAT_146b50af0,&local_38,1,0);
    param_2[2] = uVar1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143149741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_2)(param_2,(longlong)param_7,local_24,1);
  return;
}



// FUNCTION 143149750 Term body=218 status=ok
// SIG undefined Term(void)

void CAkList2<MapStruct<unsigned_long,CAkDuckItem>,MapStruct<unsigned_long,CAkDuckItem>_const_&,1,_ArrayPoolDefault>
     ::Term(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  while (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0) {
    *param_1 = *puVar1;
    if (puVar1 == (undefined8 *)param_1[1]) {
      param_1[1] = 0;
    }
    if ((puVar1 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 6 <= puVar1)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
    }
    else {
      *puVar1 = param_1[2];
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
      param_1[2] = puVar1;
    }
  }
  puVar1 = (undefined8 *)param_1[2];
  while (puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    if ((puVar2 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 6 <= puVar2)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
    }
  }
  if ((void *)param_1[3] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[3]);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 143149830 TriggerModulators body=173 status=ok
// SIG undefined TriggerModulators(void)

void CAkBus::TriggerModulators(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x38) + 0x20) != '\0')) {
    local_18 = 2;
    local_14 = 2;
    local_28 = param_1 + 0x30;
    local_20 = param_1;
    CAkModulatorMgr::Trigger(DAT_146b50ae0,&local_28,param_2,param_3);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    if ((param_4 != '\0') && (cVar1 = IsMixingBus(), cVar1 != '\0')) {
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x148))
              (*(longlong **)(param_1 + 0x88),param_2,param_3,1);
  }
  return;
}



// FUNCTION 1431498e0 FUN_1431498e0 body=104 status=ok
// SIG undefined FUN_1431498e0(void)

void FUN_1431498e0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0xb8)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x140))((longlong *)*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)
                       (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8));
  }
  return;
}



// FUNCTION 143149980 UnmuteBackgroundMusic body=288 status=ok
// SIG undefined UnmuteBackgroundMusic(void)

void CAkBus::UnmuteBackgroundMusic(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  longlong *local_28;
  uint local_20;
  
  if (DAT_146b50ec0 == '\0') {
    return;
  }
  DAT_146b50ec0 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50ee8);
  uVar4 = 0;
  if (DAT_146b50ed0 != 0) {
    do {
      uVar5 = 0x3f800000;
      local_28 = *(longlong **)(DAT_146b50ec8 + uVar4 * 8);
      local_20 = local_20 & 0xfffffffd | 1;
      if ((local_28[0xb] != 0) && (pbVar1 = *(byte **)(local_28[0xb] + 0x18), pbVar1 != (byte *)0x0)
         ) {
        uVar3 = 0;
        do {
          uVar2 = uVar3 + 1;
          if (pbVar1[uVar2] == 0xb) {
            if (pbVar1 + (ulonglong)uVar3 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) !=
                (byte *)0x0) {
              uVar5 = *(undefined4 *)
                       (pbVar1 + (ulonglong)uVar3 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            }
            break;
          }
          uVar3 = uVar2;
        } while (uVar2 < *pbVar1);
      }
      (**(code **)(*local_28 + 0xd0))(local_28,uVar5,&local_28,1);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < DAT_146b50ed0);
  }
  if (DAT_146b50bf8 != (code *)0x0) {
    (*DAT_146b50bf8)(DAT_146b50ec0,DAT_146b50c00);
  }
                    /* WARNING: Could not recover jumptable at 0x000143149a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50ee8);
  return;
}



// FUNCTION 143149aa0 FUN_143149aa0 body=167 status=ok
// SIG undefined FUN_143149aa0(void)

ulonglong FUN_143149aa0(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  uVar1 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  iVar4 = uVar1 - 1;
  if (-1 < iVar4) {
    lVar3 = *param_1;
    do {
      uVar2 = (iVar4 - iVar6) / 2 + iVar6;
      in_RAX = (ulonglong)uVar2;
      puVar5 = (undefined8 *)(lVar3 + (longlong)(int)uVar2 * 8);
      uVar8 = *(uint *)(*(longlong *)(lVar3 + (longlong)(int)uVar2 * 8) + 0x10);
      if (param_2 < uVar8) {
        iVar4 = uVar2 - 1;
      }
      else {
        if (param_2 <= uVar8) {
          puVar7 = (undefined8 *)(lVar3 + -8 + (ulonglong)uVar1 * 8);
          uVar8 = uVar1;
          if (puVar5 < puVar7) {
            lVar3 = ((ulonglong)((longlong)puVar7 + (-1 - (longlong)puVar5)) >> 3) + 1;
            puVar7 = puVar5;
            for (; puVar5 = puVar5 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar7 = *puVar5;
              puVar7 = puVar7 + 1;
            }
            uVar8 = *(uint *)(param_1 + 1);
          }
          *(uint *)(param_1 + 1) = uVar8 - 1;
          return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        }
        iVar6 = uVar2 + 1;
      }
    } while (iVar6 <= iVar4);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143149b50 UnsetRTPC body=97 status=ok
// SIG undefined UnsetRTPC(void)

void CAkBus::UnsetRTPC(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = IsMixingBus();
  FUN_143179ed0(param_1,param_2,param_3);
  cVar2 = IsMixingBus(param_1);
  if ((cVar1 != cVar2) && (*(longlong *)(param_1 + 0x78) != 0)) {
    CAkLEngine::ReevaluateGraph(1);
  }
  return;
}



// FUNCTION 143149bc0 FUN_143149bc0 body=552 status=ok
// SIG undefined FUN_143149bc0(void)

void FUN_143149bc0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  longlong *plVar9;
  
  plVar9 = *(longlong **)(param_1 + 0xe8);
  if (plVar9 != (longlong *)0x0) {
    do {
      plVar6 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,(int)plVar9[1],1);
      if (plVar6 != (longlong *)0x0) {
        bVar8 = *(byte *)(param_1 + 0x174) & 7;
        if ((*(byte *)(param_1 + 0x174) & 7) == 0) {
          iVar2 = *(int *)((longlong)plVar9 + 0x1c);
          lVar5 = plVar9[3];
          uVar3 = *(undefined4 *)((longlong)plVar9 + 0x14);
          if (iVar2 == 0) {
            plVar7 = plVar6 + 0x22;
          }
          else {
            plVar7 = (longlong *)0x0;
            if (iVar2 == 5) {
              plVar7 = plVar6 + 0x27;
            }
          }
          for (puVar4 = (undefined8 *)*plVar7; puVar4 != (undefined8 *)0x0;
              puVar4 = (undefined8 *)*puVar4) {
            if (*(int *)(puVar4 + 1) == *(int *)(param_1 + 0x10)) {
              if (puVar4 + 2 != (undefined8 *)0x0) {
                *(undefined1 *)((longlong)puVar4 + 0x2c) = 1;
                CAkBus::StartDuckTransitions(plVar6,puVar4 + 2,0,0,(int)lVar5,uVar3,iVar2);
              }
              break;
            }
          }
        }
        else if (bVar8 == 1) {
          FUN_143144a40(plVar6,*(undefined4 *)(param_1 + 0x10),
                        *(undefined4 *)((longlong)plVar9 + 0xc),(int)plVar9[2],(int)plVar9[3],
                        *(undefined4 *)((longlong)plVar9 + 0x1c));
        }
        else if (bVar8 == 2) {
          iVar2 = *(int *)(param_1 + 0x10);
          for (puVar4 = (undefined8 *)plVar6[0x22]; puVar4 != (undefined8 *)0x0;
              puVar4 = (undefined8 *)*puVar4) {
            if (*(int *)(puVar4 + 1) == iVar2) {
              puVar1 = puVar4 + 2;
              if (puVar1 != (undefined8 *)0x0) {
                *(undefined1 *)((longlong)puVar4 + 0x2c) = 0;
                if (puVar4[4] == 0) {
                  (**(code **)*puVar1)(puVar1,0,*(undefined4 *)(puVar4 + 5),1);
                }
                else {
                  CAkTransitionManager::ChangeParameter
                            (DAT_146b50af0,puVar4[4],0,*(undefined4 *)(puVar4 + 5),0,4,1);
                }
              }
              break;
            }
          }
          for (puVar4 = (undefined8 *)plVar6[0x27]; puVar4 != (undefined8 *)0x0;
              puVar4 = (undefined8 *)*puVar4) {
            if (*(int *)(puVar4 + 1) == iVar2) {
              puVar1 = puVar4 + 2;
              if (puVar1 != (undefined8 *)0x0) {
                *(undefined1 *)((longlong)puVar4 + 0x2c) = 0;
                if (puVar4[4] == 0) {
                  (**(code **)*puVar1)(puVar1,5,*(undefined4 *)(puVar4 + 5),1);
                }
                else {
                  CAkTransitionManager::ChangeParameter
                            (DAT_146b50af0,puVar4[4],5,*(undefined4 *)(puVar4 + 5),0,4,1);
                }
              }
              break;
            }
          }
        }
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      plVar9 = (longlong *)*plVar9;
    } while (plVar9 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 143149df0 FUN_143149df0 body=121 status=ok
// SIG undefined FUN_143149df0(void)

void FUN_143149df0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0xb0), plVar2 != plVar2 + *(uint *)(param_1 + 0xb8))) {
    do {
      plVar1 = (longlong *)*plVar2;
      if ((plVar1[0xf] != 0) && (0 < *(short *)(plVar1[0xf] + 0x50))) {
        (**(code **)(*plVar1 + 0x110))(plVar1,param_2);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 8));
  }
  return;
}



// FUNCTION 143149e80 UpdateStateGroups body=121 status=ok
// SIG undefined UpdateStateGroups(void)

undefined4
CAkBus::UpdateStateGroups(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar1 = IsMixingBus(param_1 + -0x18);
  uVar3 = CAkStateAware::UpdateStateGroups(param_1,param_2,param_3,param_4);
  cVar2 = IsMixingBus(param_1 + -0x18);
  if ((cVar1 != cVar2) && (*(longlong *)(param_1 + 0x60) != 0)) {
    CAkLEngine::ReevaluateGraph(1);
  }
  return uVar3;
}



// FUNCTION 143149f00 CAkSwitchMgr body=38 status=ok
// SIG undefined CAkSwitchMgr(void)

undefined8 * CAkSwitchMgr::CAkSwitchMgr(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 143149f30 SwitchingInThisScope body=14 status=ok
// SIG undefined SwitchingInThisScope(void)

undefined8 CAkSwitchMgr::SwitchingInThisScope::SwitchingInThisScope(undefined8 param_1)

{
  *(int *)(g_pSwitchMgr + 0x40) = *(int *)(g_pSwitchMgr + 0x40) + 1;
  return param_1;
}



// FUNCTION 143149f40 ~SwitchingInThisScope body=137 status=ok
// SIG undefined ~SwitchingInThisScope(void)

void CAkSwitchMgr::SwitchingInThisScope::~SwitchingInThisScope(void)

{
  CAkSwitchMgr *pCVar1;
  int *piVar2;
  
  *(int *)(g_pSwitchMgr + 0x40) = *(int *)(g_pSwitchMgr + 0x40) + -1;
  pCVar1 = g_pSwitchMgr;
  if (*(int *)(g_pSwitchMgr + 0x40) == 0) {
    piVar2 = *(int **)(g_pSwitchMgr + 0x30);
    if (piVar2 != piVar2 + (ulonglong)*(uint *)(g_pSwitchMgr + 0x38) * 6) {
      do {
        if (*piVar2 == 0) {
          _SubscribeSwitch(pCVar1,*(undefined8 *)(piVar2 + 2),piVar2[4]);
        }
        else if (*piVar2 == 1) {
          _UnSubscribeSwitch(pCVar1,*(undefined8 *)(piVar2 + 2));
        }
        piVar2 = piVar2 + 6;
      } while (piVar2 != (int *)(*(longlong *)(pCVar1 + 0x30) +
                                (ulonglong)*(uint *)(pCVar1 + 0x38) * 0x18));
    }
    *(undefined4 *)(pCVar1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 143149fd0 `scalar_deleting_destructor' body=183 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong CAkSwitchMgr::AkSwitchEntry::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  if (*(char *)(param_1 + 0x44) != '\0') {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_143139160(g_pRTPCMgr,param_1);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  AkRTPCNestedSearchTree<AkRTPCKey,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>_>_>
  ::Term(param_1 + 0x38);
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14314a090 FUN_14314a090 body=289 status=ok
// SIG undefined FUN_14314a090(void)

undefined8 * FUN_14314a090(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    puVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x18);
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar7 = (undefined8 *)*param_1;
    if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar5)) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 1);
      puVar6 = puVar5;
      if (uVar8 != 0) {
        do {
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined4 *)puVar6 = 0;
            puVar6[1] = 0;
            *(undefined4 *)(puVar6 + 2) = 0;
          }
          lVar3 = *param_1;
          puVar7 = (undefined8 *)((longlong)puVar6 + (lVar3 - (longlong)puVar5));
          uVar4 = puVar7[1];
          *puVar6 = *puVar7;
          puVar6[1] = uVar4;
          puVar6[2] = *(undefined8 *)((longlong)puVar6 + lVar3 + (0x10 - (longlong)puVar5));
          uVar8 = uVar8 - 1;
          puVar6 = puVar6 + 3;
        } while (uVar8 != 0);
        puVar7 = (undefined8 *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar7);
    }
    *param_1 = (longlong)puVar5;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    if (uVar1 <= uVar2) {
      return (undefined8 *)0x0;
    }
  }
  puVar5 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    uVar4 = param_2[1];
    *puVar5 = *param_2;
    puVar5[1] = uVar4;
    puVar5[2] = param_2[2];
  }
  return puVar5;
}



// FUNCTION 14314a1c0 FUN_14314a1c0 body=330 status=ok
// SIG undefined FUN_14314a1c0(void)

longlong FUN_14314a1c0(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  uVar2 = *(uint *)(param_1 + 1);
  iVar8 = 0;
  iVar10 = uVar2 - 1;
  if (-1 < iVar10) {
    lVar11 = *param_1;
    do {
      iVar5 = (iVar10 - iVar8) / 2 + iVar8;
      uVar3 = *(ulonglong *)(lVar11 + (longlong)iVar5 * 8);
      lVar7 = lVar11 + (longlong)iVar5 * 8;
      if (param_2 < uVar3) {
        iVar10 = iVar5 + -1;
      }
      else {
        if (param_2 <= uVar3) goto LAB_14314a232;
        iVar8 = iVar5 + 1;
      }
    } while (iVar8 <= iVar10);
  }
  lVar11 = *param_1;
  if (lVar11 == 0) {
    lVar7 = 0;
    lVar11 = 0;
  }
  else {
    lVar7 = lVar11 + (longlong)iVar8 * 8;
  }
LAB_14314a232:
  if (lVar7 == 0) {
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar4 = FUN_143134440(param_1,1), cVar4 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      return *param_1 + (ulonglong)uVar2 * 8;
    }
  }
  else if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
           (cVar4 = FUN_143134440(param_1,1), cVar4 != '\0')) &&
          (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
    uVar2 = *(uint *)(param_1 + 1);
    lVar9 = *param_1;
    *(uint *)(param_1 + 1) = uVar2 + 1;
    puVar6 = (undefined8 *)(lVar9 + (ulonglong)uVar2 * 8);
    lVar11 = (lVar7 - lVar11 >> 3 & 0xffffffffU) * 8;
    if ((undefined8 *)(lVar11 + lVar9) < puVar6) {
      do {
        puVar1 = puVar6 + -1;
        *puVar6 = puVar6[-1];
        lVar9 = *param_1;
        puVar6 = puVar1;
      } while ((undefined8 *)(lVar9 + lVar11) < puVar1);
    }
    return lVar11 + lVar9;
  }
  return 0;
}



// FUNCTION 14314a310 FUN_14314a310 body=529 status=ok
// SIG undefined FUN_14314a310(void)

int FUN_14314a310(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                 uint param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  uVar9 = (ulonglong)param_5;
  uVar11 = 0;
  if (param_5 == 0) {
    uVar9 = 0;
LAB_14314a375:
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x24) = param_3;
    pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,uVar9 * 0xc);
    if (pvVar6 != (void *)0x0) {
      if (param_5 != 0) {
        puVar10 = (undefined4 *)(param_4 + 8);
        param_4 = (longlong)pvVar6 - param_4;
        do {
          *(undefined4 *)(param_4 + -8 + (longlong)puVar10) = puVar10[-2];
          *(float *)(param_4 + -4 + (longlong)puVar10) = (float)uVar11;
          *(undefined4 *)(param_4 + (longlong)puVar10) = *puVar10;
          uVar3 = *(uint *)(param_1 + 0x18);
          if (uVar3 < *(uint *)(param_1 + 0x1c)) {
LAB_14314a461:
            uVar3 = *(uint *)(param_1 + 0x18);
            *(uint *)(param_1 + 0x18) = uVar3 + 1;
            puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 4);
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = puVar10[-1];
            }
          }
          else {
            uVar1 = *(uint *)(param_1 + 0x1c) + 1;
            pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 2);
            if (pvVar7 != (void *)0x0) {
              pvVar8 = *(void **)(param_1 + 0x10);
              if ((pvVar8 != (void *)0x0) && (pvVar8 != pvVar7)) {
                uVar4 = *(uint *)(param_1 + 0x18);
                uVar9 = 0;
                if ((ulonglong)uVar4 != 0) {
                  do {
                    *(undefined4 *)((longlong)pvVar7 + uVar9 * 4) =
                         *(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar9 * 4);
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < uVar4);
                  pvVar8 = *(void **)(param_1 + 0x10);
                }
                AK::MemoryMgr::Free(g_DefaultPoolId,pvVar8);
              }
              *(void **)(param_1 + 0x10) = pvVar7;
              *(uint *)(param_1 + 0x1c) = uVar1;
              if (uVar3 < uVar1) goto LAB_14314a461;
            }
          }
          uVar11 = uVar11 + 1;
          puVar10 = puVar10 + 3;
        } while (uVar11 < param_5);
      }
      iVar5 = CAkRTPCMgr::RegisterSwitchGroup(g_pRTPCMgr,param_1,param_2,param_3,pvVar6,param_5);
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
      if (iVar5 == 1) {
        return 1;
      }
      goto LAB_14314a4e3;
    }
  }
  else {
    pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,uVar9 * 4);
    *(void **)(param_1 + 0x10) = pvVar6;
    if (pvVar6 != (void *)0x0) {
      *(uint *)(param_1 + 0x1c) = param_5;
      goto LAB_14314a375;
    }
  }
  iVar5 = 0x34;
LAB_14314a4e3:
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return iVar5;
}



// FUNCTION 14314a530 AddSwitchRTPC body=191 status=ok
// SIG undefined AddSwitchRTPC(void)

undefined8
CAkSwitchMgr::AddSwitchRTPC
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,int param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = GetSwitchEntry();
  if (lVar1 == 0) {
    return 0x34;
  }
  if (*(int *)(lVar1 + 0x20) != 0) {
    FUN_143139160(g_pRTPCMgr,lVar1);
    *(undefined4 *)(lVar1 + 0x20) = 0;
    if (*(void **)(lVar1 + 0x10) != (void *)0x0) {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar1 + 0x10));
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
    }
  }
  if (param_6 == 0) {
    return 1;
  }
  uVar2 = FUN_14314a310(lVar1,param_3,param_4,param_5);
  return uVar2;
}



// FUNCTION 14314a5f0 FUN_14314a5f0 body=358 status=ok
// SIG undefined FUN_14314a5f0(void)

bool FUN_14314a5f0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar9 = (ulonglong)uVar1;
  if ((uVar1 == 0) || (0.9 < (float)*(uint *)(param_1 + 2) / (float)uVar9)) {
    puVar8 = &DAT_145ac7800;
    uVar7 = 0;
    do {
      uVar2 = *puVar8;
      uVar10 = (ulonglong)uVar2;
      if (uVar1 < uVar2) {
        if (uVar2 != 0) {
          uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
          puVar4 = (undefined8 *)*param_1;
          *param_1 = 0;
          param_1[1] = 0;
          cVar6 = FUN_143134440(param_1);
          if (cVar6 == '\0') {
            if ((void *)*param_1 != (void *)0x0) {
              *(undefined4 *)(param_1 + 1) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
            }
            *param_1 = (longlong)puVar4;
            *(uint *)(param_1 + 1) = uVar1;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
          }
          else {
            if (uVar2 != 0) {
              do {
                uVar7 = *(uint *)(param_1 + 1);
                if (uVar7 < *(uint *)((longlong)param_1 + 0xc)) {
                  *(uint *)(param_1 + 1) = uVar7 + 1;
                  puVar11 = (undefined8 *)(*param_1 + (ulonglong)uVar7 * 8);
                  if (puVar11 != (undefined8 *)0x0) {
                    *puVar11 = 0;
                  }
                }
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            puVar11 = puVar4;
            if (uVar1 != 0) {
              do {
                puVar8 = (uint *)*puVar11;
                while (puVar8 != (uint *)0x0) {
                  puVar5 = *(uint **)(puVar8 + 2);
                  *(undefined8 *)(puVar8 + 2) =
                       *(undefined8 *)(*param_1 + ((ulonglong)*puVar8 % (ulonglong)uVar2) * 8);
                  *(uint **)(*param_1 + ((ulonglong)*puVar8 % (ulonglong)uVar2) * 8) = puVar8;
                  puVar8 = puVar5;
                }
                uVar9 = uVar9 - 1;
                puVar11 = puVar11 + 1;
              } while (uVar9 != 0);
            }
            if (puVar4 != (undefined8 *)0x0) {
              AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
            }
          }
        }
        break;
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar7 < 0x1b);
  }
  return (int)param_1[1] != 0;
}



// FUNCTION 14314a760 FUN_14314a760 body=411 status=ok
// SIG undefined FUN_14314a760(void)

uint FUN_14314a760(longlong *param_1,uint param_2,longlong *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  float fVar5;
  char local_res8 [8];
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  longlong lStack_18;
  
  puVar2 = (uint *)0x0;
  if (*(uint *)(param_1 + 1) == 0) {
    return 0;
  }
  for (puVar3 = *(uint **)(*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
      (puVar4 = puVar2, puVar3 != (uint *)0x0 && (puVar4 = puVar3, *puVar3 != param_2));
      puVar3 = *(uint **)(puVar3 + 2)) {
  }
  if (puVar4 == (uint *)0x0) {
    return 0;
  }
  local_40 = *param_3;
  lStack_38 = param_3[1];
  local_30 = param_3[2];
  lStack_28 = param_3[3];
  local_20 = param_3[4];
  lStack_18 = param_3[5];
  if (puVar4[8] != 0) {
    fVar5 = (float)FUN_143134010(g_pRTPCMgr,puVar4,&local_40);
    if (puVar4[6] <= (uint)(longlong)fVar5) {
      return 0;
    }
    return *(uint *)(*(longlong *)(puVar4 + 4) + ((longlong)fVar5 & 0xffffffffU) * 4);
  }
  if ((((local_40 != 0) || ((int)lStack_38 != 0)) || ((int)param_3[2] != 0)) ||
     (((lStack_28._0_1_ = (char)(int)param_3[3], (char)lStack_28 != -1 ||
       (local_20._0_1_ = (char)(int)param_3[4], (char)local_20 != -1)) || (lStack_18 != 0)))) {
    puVar1 = (uint *)FUN_1431220c0(puVar4 + 0x12,local_40,local_res8);
    puVar3 = puVar2;
    if (local_res8[0] != '\0') {
      puVar3 = puVar1;
    }
    if (puVar3 == (uint *)0x0) {
      if (local_40 != 0) {
        local_40 = 0;
        puVar1 = (uint *)FUN_1431220c0(puVar4 + 0x12,0,local_res8);
        puVar3 = puVar2;
        if (local_res8[0] != '\0') {
          puVar3 = puVar1;
        }
        if (puVar3 != (uint *)0x0) goto LAB_14314a87a;
      }
    }
    else {
LAB_14314a87a:
      puVar2 = (uint *)FUN_143122390(puVar3,&lStack_38);
      if (puVar2 != (uint *)0x0) goto LAB_14314a8c3;
    }
  }
  if ((char)puVar4[0x11] == '\0') {
    return 0;
  }
  puVar2 = puVar4 + 0x10;
  if (puVar2 == (uint *)0x0) {
    return 0;
  }
LAB_14314a8c3:
  return *puVar2;
}



// FUNCTION 14314a900 GetSwitchEntry body=217 status=ok
// SIG undefined GetSwitchEntry(void)

uint * CAkSwitchMgr::GetSwitchEntry(longlong *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  
  if (*(uint *)(param_1 + 1) != 0) {
    for (puVar3 = *(uint **)(*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8
                            ); puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 2)) {
      if (*puVar3 == param_2) {
        if (puVar3 != (uint *)0x0) {
          return puVar3;
        }
        break;
      }
    }
  }
  puVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x58);
  if (puVar3 == (uint *)0x0) {
    return (uint *)0x0;
  }
  *puVar3 = param_2;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0x10] = 0;
  *(undefined1 *)(puVar3 + 0x11) = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  *(undefined ***)(puVar3 + 0xe) = &PTR_FUN_144ca0248;
  cVar2 = FUN_14314a5f0(param_1);
  if (cVar2 != '\0') {
    uVar1 = *(uint *)(param_1 + 1);
    *(undefined8 *)(puVar3 + 2) =
         *(undefined8 *)(*param_1 + ((ulonglong)*puVar3 % (ulonglong)uVar1) * 8);
    *(uint **)(*param_1 + ((ulonglong)*puVar3 % (ulonglong)uVar1) * 8) = puVar3;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return puVar3;
}



// FUNCTION 14314a9e0 FUN_14314a9e0 body=213 status=ok
// SIG undefined FUN_14314a9e0(void)

undefined8 FUN_14314a9e0(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined4 *)(param_1 + 5) = 0;
  if (((*(uint *)(param_1 + 4) < 0xc) && (*(uint *)((longlong)param_1 + 0x24) < 0xb)) &&
     (cVar1 = FUN_143134440(param_1 + 3,0xb - *(uint *)(param_1 + 4)), cVar1 == '\0')) {
    return 0x34;
  }
  *(undefined4 *)(param_1 + 4) = 0xb;
  uVar3 = 0;
  do {
    uVar2 = (int)uVar3 + 1;
    *(undefined8 *)(param_1[3] + uVar3 * 8) = 0;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 < *(uint *)(param_1 + 4));
  *(undefined4 *)(param_1 + 2) = 0;
  if (((*(uint *)(param_1 + 1) < 0xc) && (*(uint *)((longlong)param_1 + 0xc) < 0xb)) &&
     (cVar1 = FUN_143134440(param_1,0xb - *(uint *)(param_1 + 1)), cVar1 == '\0')) {
    return 0x34;
  }
  *(undefined4 *)(param_1 + 1) = 0xb;
  uVar3 = 0;
  do {
    uVar2 = (int)uVar3 + 1;
    *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 < *(uint *)(param_1 + 1));
  return 1;
}



// FUNCTION 14314aac0 FUN_14314aac0 body=176 status=ok
// SIG undefined FUN_14314aac0(void)

void FUN_14314aac0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_20 = 0xff;
  local_30[0] = 0;
  local_28 = 0;
  local_18 = 0xff;
  local_10 = 0;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x44) != '\0') {
      *(undefined1 *)(param_1 + 0x44) = 0;
      return;
    }
  }
  else {
    param_1 = param_1 + 0x48;
    lVar1 = FUN_1431220c0(param_1,param_2,&local_res8);
    lVar3 = 0;
    if ((char)local_res8 != '\0') {
      lVar3 = lVar1;
    }
    if (((lVar3 != 0) && (FUN_143139310(lVar3,local_30), *(char *)(lVar3 + 0xc) == '\0')) &&
       (*(int *)(lVar3 + 0x18) == 0)) {
      AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>_>
      ::Term(lVar3);
      uVar2 = FUN_1431220c0(param_1,param_2,&local_res8);
      if ((char)local_res8 != '\0') {
        local_res8 = uVar2;
        FUN_143133c30(param_1,local_res10,&local_res8);
      }
    }
  }
  return;
}



// FUNCTION 14314ab70 FUN_14314ab70 body=196 status=ok
// SIG undefined FUN_14314ab70(void)

ulonglong FUN_14314ab70(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 1);
  if (uVar9 != 0) {
    uVar2 = *(uint *)(param_2 + 0x10);
    in_RAX = (ulonglong)uVar2 / (ulonglong)uVar9;
    puVar8 = *(uint **)(*param_1 + ((ulonglong)uVar2 % (ulonglong)uVar9) * 8);
    if (puVar8 != (uint *)0x0) {
      while (*puVar8 != uVar2) {
        puVar8 = *(uint **)(puVar8 + 2);
        if (puVar8 == (uint *)0x0) {
          return in_RAX;
        }
      }
      if (puVar8 != (uint *)0x0) {
        uVar9 = puVar8[0xc];
        iVar6 = 0;
        iVar4 = uVar9 - 1;
        if (-1 < iVar4) {
          lVar3 = *(longlong *)(puVar8 + 10);
          do {
            uVar2 = (iVar4 - iVar6) / 2 + iVar6;
            uVar1 = *(ulonglong *)(lVar3 + (longlong)(int)uVar2 * 8);
            puVar5 = (undefined8 *)(lVar3 + (longlong)(int)uVar2 * 8);
            if (param_2 < uVar1) {
              iVar4 = uVar2 - 1;
            }
            else {
              if (param_2 <= uVar1) {
                puVar7 = (undefined8 *)(lVar3 + ((ulonglong)uVar9 - 1) * 8);
                if (puVar5 < puVar7) {
                  lVar3 = ((ulonglong)((longlong)puVar7 + (-1 - (longlong)puVar5)) >> 3) + 1;
                  puVar7 = puVar5;
                  for (; puVar5 = puVar5 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
                    *puVar7 = *puVar5;
                    puVar7 = puVar7 + 1;
                  }
                  uVar9 = puVar8[0xc];
                }
                puVar8[0xc] = uVar9 - 1;
                return (ulonglong)(uVar9 - 1);
              }
              iVar6 = uVar2 + 1;
            }
          } while (iVar6 <= iVar4);
          return (ulonglong)uVar2;
        }
      }
    }
  }
  return in_RAX;
}



// FUNCTION 14314ac40 SetSwitchFromRTPCMgr body=188 status=ok
// SIG undefined SetSwitchFromRTPCMgr(void)

void CAkSwitchMgr::AkSwitchEntry::SetSwitchFromRTPCMgr
               (longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  if ((param_3 < *(uint *)(param_1 + 0x18)) &&
     (plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != plVar2 + *(uint *)(param_1 + 0x30))) {
    do {
      plVar1 = (longlong *)0x0;
      if (*(char *)(*plVar2 + 0x14) != '\0') {
        plVar1 = *(longlong **)*plVar2;
      }
      if (plVar1 != (longlong *)0x0) {
        local_48 = *param_2;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0xff;
        local_28 = 0xff;
        local_20 = 0;
        (**(code **)(*plVar1 + 8))
                  (plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_3 * 4),
                   &local_48,param_4);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 0x28) + (ulonglong)*(uint *)(param_1 + 0x30) * 8));
  }
  return;
}



// FUNCTION 14314ad00 SetSwitchInternal body=265 status=ok
// SIG undefined SetSwitchInternal(void)

bool CAkSwitchMgr::AkSwitchEntry::SetSwitchInternal
               (longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 local_res8 [8];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  if (param_3 == 0) {
    puVar4 = (undefined4 *)(param_1 + 0x40);
    if (*(char *)(param_1 + 0x44) == '\0') {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      *(undefined1 *)(param_1 + 0x44) = 1;
    }
  }
  else {
    lVar1 = FUN_143137150(param_1 + 0x48,param_3,local_res8);
    if (lVar1 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)(lVar1 + 8);
      if (*(char *)(lVar1 + 0xc) == '\0') {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
        }
        *(undefined1 *)(lVar1 + 0xc) = 1;
      }
    }
  }
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = param_2;
  }
  if ((*(int *)(param_1 + 0x20) == 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x28), plVar3 != plVar3 + *(uint *)(param_1 + 0x30))) {
    do {
      plVar2 = (longlong *)0x0;
      if (*(char *)(*plVar3 + 0x14) != '\0') {
        plVar2 = *(longlong **)*plVar3;
      }
      if (plVar2 != (longlong *)0x0) {
        local_40 = 0;
        local_38 = 0;
        local_30 = 0xff;
        local_28 = 0xff;
        local_20 = 0;
        local_48 = param_3;
        (**(code **)(*plVar2 + 8))(plVar2,param_2,&local_48,0);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != (longlong *)
                       (*(longlong *)(param_1 + 0x28) + (ulonglong)*(uint *)(param_1 + 0x30) * 8));
  }
  return puVar4 != (undefined4 *)0x0;
}



// FUNCTION 14314ae10 FUN_14314ae10 body=64 status=ok
// SIG undefined FUN_14314ae10(void)

ulonglong FUN_14314ae10(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x40) < 1) {
    uVar1 = CAkSwitchMgr::_SubscribeSwitch();
    return uVar1;
  }
  local_28[0] = 0;
  local_20 = param_2;
  local_18 = param_3;
  lVar2 = FUN_14314a090(param_1 + 0x30,local_28);
  return (ulonglong)(2 - (lVar2 != 0));
}



// FUNCTION 14314ae50 Term body=617 status=ok
// SIG undefined Term(void)

/* WARNING: Removing unreachable block (ram,0x00014314aef4) */
/* WARNING: Removing unreachable block (ram,0x00014314afd4) */

undefined8 CAkSwitchMgr::Term(longlong *param_1)

{
  void *pvVar1;
  long lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uStack_50;
  
  uVar8 = 0;
  if (*(uint *)(param_1 + 1) != 0) {
    pvVar6 = *(void **)*param_1;
    uVar4 = uVar8;
    while (pvVar6 == (void *)0x0) {
      uVar7 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar7;
      if (*(uint *)(param_1 + 1) <= uVar7) goto LAB_14314af4c;
      pvVar6 = (void *)((longlong *)*param_1)[uVar4];
    }
    do {
      pvVar1 = *(void **)((longlong)pvVar6 + 8);
      uStack_50 = (uint)uVar4;
      pvVar5 = pvVar1;
      if (pvVar1 == (void *)0x0) {
        uVar3 = uVar4;
        do {
          uStack_50 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uStack_50;
          if (*(uint *)(param_1 + 1) <= uStack_50) break;
          pvVar5 = *(void **)(*param_1 + uVar3 * 8);
        } while (pvVar5 == (void *)0x0);
      }
      *(void **)(*param_1 + uVar4 * 8) = pvVar1;
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      lVar2 = g_DefaultPoolId;
      AkSwitchEntry::_scalar_deleting_destructor_(pvVar6,0);
      AK::MemoryMgr::Free(lVar2,pvVar6);
      if (pvVar5 == (void *)0x0) break;
      uVar4 = (ulonglong)uStack_50;
      pvVar6 = pvVar5;
    } while( true );
  }
LAB_14314af4c:
  if (*(uint *)(param_1 + 4) == 0) {
LAB_14314b02c:
    if ((void *)*param_1 != (void *)0x0) {
      *(undefined4 *)(param_1 + 1) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    if ((void *)param_1[3] != (void *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[3]);
      param_1[3] = 0;
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    if ((void *)param_1[6] != (void *)0x0) {
      *(undefined4 *)(param_1 + 7) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[6]);
      param_1[6] = 0;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    return 1;
  }
  pvVar6 = *(void **)param_1[3];
  while (pvVar6 == (void *)0x0) {
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    if (*(uint *)(param_1 + 4) <= uVar7) goto LAB_14314b02c;
    pvVar6 = (void *)((longlong *)param_1[3])[uVar8];
  }
  do {
    pvVar1 = *(void **)((longlong)pvVar6 + 8);
    uStack_50 = (uint)uVar8;
    pvVar5 = pvVar1;
    if (pvVar1 == (void *)0x0) {
      uVar4 = uVar8;
      do {
        uStack_50 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uStack_50;
        if (*(uint *)(param_1 + 4) <= uStack_50) break;
        pvVar5 = *(void **)(param_1[3] + uVar4 * 8);
      } while (pvVar5 == (void *)0x0);
    }
    *(void **)(param_1[3] + uVar8 * 8) = pvVar1;
    *(int *)(param_1 + 5) = (int)param_1[5] + -1;
    FUN_14314ab70(param_1,pvVar6);
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
    if (pvVar5 == (void *)0x0) goto LAB_14314b02c;
    uVar8 = (ulonglong)uStack_50;
    pvVar6 = pvVar5;
  } while( true );
}



// FUNCTION 14314b0c0 FUN_14314b0c0 body=73 status=ok
// SIG undefined FUN_14314b0c0(void)

void FUN_14314b0c0(longlong param_1,undefined8 param_2)

{
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  CAkSwitchMgr::_UnSubscribeSwitch();
  if (0 < *(int *)(param_1 + 0x40)) {
    local_28[0] = 1;
    local_18 = 0;
    local_20 = param_2;
    FUN_14314a090(param_1 + 0x30,local_28);
  }
  return;
}



// FUNCTION 14314b110 UnregisterGameObject body=158 status=ok
// SIG undefined UnregisterGameObject(void)

void CAkSwitchMgr::UnregisterGameObject(longlong *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (*(uint *)(param_1 + 1) != 0)) {
    uVar2 = 0;
    lVar3 = *(longlong *)*param_1;
    while (lVar3 == 0) {
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      if (*(uint *)(param_1 + 1) <= uVar1) goto joined_r0x00014314b15b;
      lVar3 = ((longlong *)*param_1)[uVar2];
    }
    do {
      while( true ) {
        FUN_14314aac0(lVar3,param_2);
        lVar3 = *(longlong *)(lVar3 + 8);
        if (lVar3 != 0) break;
        do {
          uVar1 = (int)uVar2 + 1;
          uVar2 = (ulonglong)uVar1;
          if (*(uint *)(param_1 + 1) <= uVar1) goto joined_r0x00014314b15b;
          lVar3 = *(longlong *)(*param_1 + uVar2 * 8);
        } while (lVar3 == 0);
      }
joined_r0x00014314b15b:
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14314b1b0 _SubscribeSwitch body=388 status=ok
// SIG undefined _SubscribeSwitch(void)

undefined8 CAkSwitchMgr::_SubscribeSwitch(longlong param_1,ulonglong param_2,uint param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  char cVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  if (param_2 == 0) {
    return 0x34;
  }
  if (*(uint *)(param_1 + 0x20) == 0) {
LAB_14314b224:
    puVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
    if (puVar7 == (ulonglong *)0x0) goto LAB_14314b2b6;
    *(undefined1 *)((longlong)puVar7 + 0x14) = 1;
    *puVar7 = param_2;
    *(uint *)(puVar7 + 2) = param_3;
    cVar6 = FUN_14314a5f0(param_1 + 0x18);
    if (cVar6 != '\0') {
      uVar2 = (ulonglong)(uint)*puVar7 % (ulonglong)*(uint *)(param_1 + 0x20);
      puVar7[1] = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar2 * 8);
      *(ulonglong **)(*(longlong *)(param_1 + 0x18) + uVar2 * 8) = puVar7;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
  }
  else {
    for (puVar1 = *(ulonglong **)
                   (*(longlong *)(param_1 + 0x18) +
                   ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x20)) * 8);
        (puVar7 = (ulonglong *)0x0, puVar1 != (ulonglong *)0x0 &&
        (puVar7 = puVar1, *puVar1 != param_2)); puVar1 = (ulonglong *)puVar1[1]) {
    }
    if (puVar7 == (ulonglong *)0x0) goto LAB_14314b224;
    FUN_14314ab70(param_1,puVar7);
    *(uint *)(puVar7 + 2) = param_3;
  }
  lVar8 = GetSwitchEntry(param_1);
  if ((lVar8 != 0) &&
     (puVar9 = (undefined8 *)FUN_14314a1c0(lVar8 + 0x28), puVar9 != (undefined8 *)0x0)) {
    *puVar9 = puVar7;
    return 1;
  }
LAB_14314b2b6:
  if (*(uint *)(param_1 + 0x20) != 0) {
    puVar1 = (ulonglong *)
             (*(longlong *)(param_1 + 0x18) +
             ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x20)) * 8);
    puVar5 = (ulonglong *)*puVar1;
    puVar4 = (ulonglong *)0x0;
    while (puVar3 = puVar5, puVar3 != (ulonglong *)0x0) {
      if (*puVar3 == param_2) {
        if (puVar4 == (ulonglong *)0x0) {
          *puVar1 = puVar3[1];
        }
        else {
          puVar4[1] = puVar3[1];
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        break;
      }
      puVar4 = puVar3;
      puVar5 = (ulonglong *)puVar3[1];
    }
  }
  if (puVar7 != (ulonglong *)0x0) {
    FUN_14314ab70(param_1,puVar7);
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar7);
  }
  return 0x34;
}



// FUNCTION 14314b340 _UnSubscribeSwitch body=201 status=ok
// SIG undefined _UnSubscribeSwitch(void)

ulonglong CAkSwitchMgr::_UnSubscribeSwitch(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  AKRESULT AVar7;
  ulonglong in_RAX;
  ulonglong *puVar8;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    in_RAX = (param_2 & 0xffffffff) / (ulonglong)uVar1;
    puVar8 = *(ulonglong **)(lVar2 + ((param_2 & 0xffffffff) % (ulonglong)uVar1) * 8);
    if (puVar8 != (ulonglong *)0x0) {
      while (*puVar8 != param_2) {
        puVar8 = (ulonglong *)puVar8[1];
        if (puVar8 == (ulonglong *)0x0) {
          return in_RAX;
        }
      }
      if (puVar8 != (ulonglong *)0x0) {
        if (*(int *)(param_1 + 0x40) < 1) {
          uVar3 = (param_2 & 0xffffffff) % (ulonglong)uVar1;
          puVar6 = *(ulonglong **)(lVar2 + uVar3 * 8);
          puVar5 = (ulonglong *)0x0;
          do {
            puVar4 = puVar6;
            if (puVar4 == (ulonglong *)0x0) {
LAB_14314b3d9:
              FUN_14314ab70(param_1,puVar8);
              AVar7 = AK::MemoryMgr::Free(g_DefaultPoolId,puVar8);
              return (ulonglong)AVar7;
            }
            if (*puVar4 == param_2) {
              if (puVar5 == (ulonglong *)0x0) {
                *(ulonglong *)(lVar2 + uVar3 * 8) = puVar4[1];
              }
              else {
                puVar5[1] = puVar4[1];
              }
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
              goto LAB_14314b3d9;
            }
            puVar6 = (ulonglong *)puVar4[1];
            puVar5 = puVar4;
          } while( true );
        }
        *(undefined1 *)((longlong)puVar8 + 0x14) = 0;
      }
    }
  }
  return in_RAX;
}



// FUNCTION 14314b410 CreateComponent<CAkConnectedListeners> body=210 status=ok
// SIG undefined CreateComponent<CAkConnectedListeners>(void)

longlong * CAkGameObject::CreateComponent<CAkConnectedListeners>(longlong param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  
  if ((*(uint *)(param_1 + 0x40) < 2) && (cVar2 = FUN_14314c510(param_1 + 0x28,2), cVar2 == '\0')) {
    return (longlong *)0x0;
  }
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 8);
  if (plVar5 == (longlong *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xc0);
    if (pvVar4 == (void *)0x0) {
      return (longlong *)0x0;
    }
    plVar5 = (longlong *)CAkConnectedListeners::CAkConnectedListeners(pvVar4);
    if (plVar5 != (longlong *)0x0) {
      *(longlong **)(*(longlong *)(param_1 + 0x38) + 8) = plVar5;
      plVar5[1] = param_1;
      iVar3 = (**(code **)(*plVar5 + 8))(plVar5,*(undefined8 *)(param_1 + 0x48));
      lVar1 = g_DefaultPoolId;
      if (iVar3 == 1) {
        return plVar5;
      }
      (**(code **)*plVar5)(plVar5,0);
      AK::MemoryMgr::Free(lVar1,plVar5);
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8) = 0;
    }
    plVar5 = (longlong *)0x0;
  }
  return plVar5;
}



// FUNCTION 14314b4f0 CreateComponent<CAkListener> body=210 status=ok
// SIG undefined CreateComponent<CAkListener>(void)

longlong * CAkGameObject::CreateComponent<CAkListener>(longlong param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  
  if ((*(uint *)(param_1 + 0x40) < 3) && (cVar2 = FUN_14314c510(param_1 + 0x28,3), cVar2 == '\0')) {
    return (longlong *)0x0;
  }
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x10);
  if (plVar5 == (longlong *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x90);
    if (pvVar4 == (void *)0x0) {
      return (longlong *)0x0;
    }
    plVar5 = (longlong *)CAkListener::CAkListener(pvVar4);
    if (plVar5 != (longlong *)0x0) {
      *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x10) = plVar5;
      plVar5[1] = param_1;
      iVar3 = (**(code **)(*plVar5 + 8))(plVar5,*(undefined8 *)(param_1 + 0x48));
      lVar1 = g_DefaultPoolId;
      if (iVar3 == 1) {
        return plVar5;
      }
      (**(code **)*plVar5)(plVar5,0);
      AK::MemoryMgr::Free(lVar1,plVar5);
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x10) = 0;
    }
    plVar5 = (longlong *)0x0;
  }
  return plVar5;
}



// FUNCTION 14314b5d0 CAkConnectedListeners body=149 status=ok
// SIG undefined CAkConnectedListeners(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * CAkConnectedListeners::CAkConnectedListeners(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145ac68b8;
  param_1[3] = DAT_146b50848;
  param_1[2] = 0;
  puVar1 = param_1;
  if (DAT_146b50850 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)DAT_146b50848 + 0x10) = param_1;
    puVar1 = DAT_146b50850;
  }
  DAT_146b50850 = puVar1;
  _DAT_146b50840 = _DAT_146b50840 + 1;
  DAT_146b50848 = param_1;
  *param_1 = &PTR__scalar_deleting_destructor__145ac68c8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  return param_1;
}



// FUNCTION 14314b670 FUN_14314b670 body=36 status=ok
// SIG undefined FUN_14314b670(void)

undefined8 * FUN_14314b670(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 14314b6a0 FUN_14314b6a0 body=57 status=ok
// SIG undefined FUN_14314b6a0(void)

void FUN_14314b6a0(longlong param_1)

{
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}



// FUNCTION 14314b6e0 `vector_deleting_destructor' body=161 status=ok
// SIG undefined `vector_deleting_destructor'(void)

CAkGameObject * CAkRegisteredObj::_vector_deleting_destructor_(CAkGameObject *param_1,uint param_2)

{
  longlong lVar1;
  CAkGameObject *this;
  
  if ((param_2 & 2) == 0) {
    CAkGameObject::~CAkGameObject(param_1);
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1,0x58);
    }
    return param_1;
  }
  lVar1 = *(longlong *)(param_1 + -8);
  this = param_1 + lVar1 * 0x58;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    this = this + -0x58;
    CAkGameObject::~CAkGameObject(this);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1 + -8,*(longlong *)(param_1 + -8) * 0x58 + 8);
  }
  return param_1 + -8;
}



// FUNCTION 14314b790 `vector_deleting_destructor' body=161 status=ok
// SIG undefined `vector_deleting_destructor'(void)

CAkRegisteredObj *
CAkRegisteredObj::_vector_deleting_destructor_(CAkRegisteredObj *param_1,uint param_2)

{
  longlong lVar1;
  CAkRegisteredObj *this;
  
  if ((param_2 & 2) == 0) {
    ~CAkRegisteredObj(param_1);
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1,0x58);
    }
    return param_1;
  }
  lVar1 = *(longlong *)(param_1 + -8);
  this = param_1 + lVar1 * 0x58;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    this = this + -0x58;
    ~CAkRegisteredObj(this);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1 + -8,*(longlong *)(param_1 + -8) * 0x58 + 8);
  }
  return param_1 + -8;
}



// FUNCTION 14314b840 FUN_14314b840 body=134 status=ok
// SIG undefined FUN_14314b840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14314b840(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_145ac78f0;
  puVar2 = (undefined8 *)0x0;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    puVar2 = (undefined8 *)param_1[2];
  }
  puVar1 = (undefined8 *)param_1[3];
  if (param_1 != DAT_146b50880) {
    puVar1[2] = puVar2;
    puVar2 = DAT_146b50880;
  }
  DAT_146b50880 = puVar2;
  if (param_1 == DAT_146b50878) {
    DAT_146b50878 = puVar1;
  }
  _DAT_146b50870 = _DAT_146b50870 + -1;
  *param_1 = &PTR_FUN_145ac68a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14314b8d0 `scalar_deleting_destructor' body=194 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * CAkSwitchHistory::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145ac7900;
  if ((void *)param_1[4] != (void *)0x0) {
    *(undefined4 *)(param_1 + 5) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[4]);
    param_1[4] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  *param_1 = &PTR_FUN_145ac78f0;
  puVar2 = (undefined8 *)0x0;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    puVar2 = (undefined8 *)param_1[2];
  }
  puVar1 = (undefined8 *)param_1[3];
  if (param_1 != DAT_146b50880) {
    puVar1[2] = puVar2;
    puVar2 = DAT_146b50880;
  }
  DAT_146b50880 = puVar2;
  if (param_1 == DAT_146b50878) {
    DAT_146b50878 = puVar1;
  }
  _DAT_146b50870 = _DAT_146b50870 + -1;
  *param_1 = &PTR_FUN_145ac68a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14314b9a0 FUN_14314b9a0 body=383 status=ok
// SIG undefined FUN_14314b9a0(void)

void FUN_14314b9a0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  undefined4 *puVar9;
  int iVar10;
  ulonglong uVar11;
  
  puVar8 = *(ulonglong **)(param_1 + 8);
  if (puVar8 != puVar8 + (ulonglong)*(uint *)(param_1 + 0x10) * 3) {
    uVar11 = 0;
    do {
      iVar4 = 0;
      iVar10 = *(int *)(param_2 + 0x10) + -1;
      if (-1 < iVar10) {
        uVar7 = uVar11;
        do {
          iVar4 = (iVar10 - (int)uVar7) / 2 + (int)uVar7;
          uVar6 = *(ulonglong *)(*(longlong *)(param_2 + 8) + (longlong)iVar4 * 8);
          if (*puVar8 < uVar6) {
            iVar10 = iVar4 + -1;
          }
          else {
            if (*puVar8 <= uVar6) {
              bVar3 = true;
              uVar7 = *(longlong *)(param_2 + 8) + (longlong)iVar4 * 8;
              goto LAB_14314ba3d;
            }
            uVar7 = (ulonglong)(iVar4 + 1);
          }
          iVar4 = (int)uVar7;
        } while (iVar4 <= iVar10);
      }
      bVar3 = false;
      uVar7 = uVar11;
      if (*(longlong *)(param_2 + 8) != 0) {
        uVar7 = *(longlong *)(param_2 + 8) + (longlong)iVar4 * 8;
      }
LAB_14314ba3d:
      uVar6 = uVar11;
      if (bVar3) {
        uVar6 = uVar7;
      }
      if (uVar6 == 0) {
        if ((void *)puVar8[1] != (void *)0x0) {
          *(undefined4 *)(puVar8 + 2) = 0;
          AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar8[1]);
          puVar8[1] = 0;
          *(undefined4 *)((longlong)puVar8 + 0x14) = 0;
        }
        uVar5 = *(uint *)(param_1 + 0x10);
        puVar2 = (ulonglong *)(*(longlong *)(param_1 + 8) + ((ulonglong)uVar5 - 1) * 0x18);
        if (puVar8 < puVar2) {
          puVar9 = (undefined4 *)((longlong)puVar8 + 0x2c);
          do {
            *(undefined8 *)(puVar9 + -0xb) = *(undefined8 *)(puVar9 + -5);
            if (*(void **)(puVar9 + -9) != (void *)0x0) {
              puVar9[-7] = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(puVar9 + -9));
              *(undefined8 *)(puVar9 + -9) = 0;
              puVar9[-6] = 0;
            }
            *(undefined8 *)(puVar9 + -9) = *(undefined8 *)(puVar9 + -3);
            puVar9[-7] = puVar9[-1];
            puVar9[-6] = *puVar9;
            *(undefined8 *)(puVar9 + -3) = 0;
            *(undefined8 *)(puVar9 + -1) = 0;
            puVar1 = (ulonglong *)(puVar9 + -5);
            puVar9 = puVar9 + 6;
          } while (puVar1 < puVar2);
          uVar5 = *(uint *)(param_1 + 0x10);
        }
        uVar5 = uVar5 - 1;
        *(uint *)(param_1 + 0x10) = uVar5;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x10);
        puVar8 = puVar8 + 3;
      }
    } while (puVar8 != (ulonglong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar5 * 0x18));
  }
  return;
}



// FUNCTION 14314bb20 ClearSwitchHist body=222 status=ok
// SIG undefined ClearSwitchHist(void)

undefined8 CAkRegistryMgr::ClearSwitchHist(undefined8 param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  lVar1 = DAT_146b50880;
  if (param_3 == 0) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
      piVar5 = *(int **)(lVar1 + 0x20);
      uVar3 = *(uint *)(lVar1 + 0x28);
      piVar4 = piVar5 + (ulonglong)uVar3 * 3;
      if (piVar5 != piVar4) {
        do {
          if (*piVar5 == param_2) break;
          piVar5 = piVar5 + 3;
        } while (piVar5 != piVar4);
        if (piVar5 != piVar4) {
          if (piVar5 < piVar4 + -3) {
            uVar2 = ((ulonglong)((longlong)(piVar4 + -3) + (-1 - (longlong)piVar5)) / 0xc + 1) * 3 &
                    0x3fffffffffffffff;
            piVar4 = piVar5 + 3;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *piVar5 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar5 = piVar5 + 1;
            }
            uVar3 = *(uint *)(lVar1 + 0x28);
          }
          *(uint *)(lVar1 + 0x28) = uVar3 - 1;
        }
      }
    }
  }
  else if ((4 < *(uint *)(param_3 + 0x40)) &&
          (lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x38) + 0x20), lVar1 != 0)) {
    FUN_14314d550(lVar1 + 0x20);
    return 1;
  }
  return 1;
}



// FUNCTION 14314bc00 EnsureListenersExist body=136 status=ok
// SIG undefined EnsureListenersExist(void)

void CAkRegistryMgr::EnsureListenersExist(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  
  puVar2 = *(ulonglong **)(param_2 + 8);
  if (puVar2 != puVar2 + *(uint *)(param_2 + 0x10)) {
    do {
      if (*(uint *)(param_1 + 0x30) != 0) {
        for (puVar1 = *(undefined8 **)
                       (*(longlong *)(param_1 + 0x28) +
                       ((*puVar2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[1] == *puVar2) {
            if (puVar1 + 2 != (undefined8 *)0x0) {
              CAkGameObject::CreateComponent<CAkListener>(puVar1[2]);
            }
            break;
          }
        }
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (ulonglong *)
                       (*(longlong *)(param_2 + 8) + (ulonglong)*(uint *)(param_2 + 0x10) * 8));
  }
  return;
}



// FUNCTION 14314bc90 FUN_14314bc90 body=166 status=ok
// SIG undefined FUN_14314bc90(void)

/* WARNING: Removing unreachable block (ram,0x00014314bd2e) */
/* WARNING: Removing unreachable block (ram,0x00014314bcf7) */

longlong FUN_14314bc90(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar4) {
    do {
      iVar2 = (iVar4 - iVar3) / 2 + iVar3;
      uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 8);
      if (param_2 < uVar1) {
        iVar4 = iVar2 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          return *(longlong *)(param_1 + 8) + (longlong)iVar2 * 8;
        }
        iVar3 = iVar2 + 1;
      }
    } while (iVar3 <= iVar4);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  return 0;
}



// FUNCTION 14314bd40 FUN_14314bd40 body=378 status=ok
// SIG undefined FUN_14314bd40(void)

undefined8 FUN_14314bd40(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    uVar9 = 0;
    plVar10 = (longlong *)**(undefined8 **)(param_1 + 0x28);
    while (plVar10 == (longlong *)0x0) {
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      if (*(uint *)(param_1 + 0x30) <= uVar8) {
        return 1;
      }
      plVar10 = (longlong *)(*(undefined8 **)(param_1 + 0x28))[uVar9];
    }
    do {
      while( true ) {
        if ((1 < *(uint *)(plVar10[2] + 0x50)) || (*(char *)(plVar10[2] + 0x54) == '\0')) {
          lVar4 = plVar10[1];
          uVar8 = *(uint *)(param_2 + 1);
          if (*(uint *)((longlong)param_2 + 0xc) <= uVar8) {
            uVar1 = *(uint *)((longlong)param_2 + 0xc) + 0x20;
            pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
            if (pvVar5 == (void *)0x0) {
              return 0x34;
            }
            pvVar6 = (void *)*param_2;
            if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar5)) {
              uVar3 = *(uint *)(param_2 + 1);
              uVar7 = 0;
              if ((ulonglong)uVar3 != 0) {
                do {
                  *(undefined8 *)((longlong)pvVar5 + uVar7 * 8) =
                       *(undefined8 *)(*param_2 + uVar7 * 8);
                  uVar7 = uVar7 + 1;
                } while (uVar7 < uVar3);
                pvVar6 = (void *)*param_2;
              }
              AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
            }
            *param_2 = (longlong)pvVar5;
            *(uint *)((longlong)param_2 + 0xc) = uVar1;
            if (uVar1 <= uVar8) {
              return 0x34;
            }
          }
          uVar8 = *(uint *)(param_2 + 1);
          *(uint *)(param_2 + 1) = uVar8 + 1;
          plVar2 = (longlong *)(*param_2 + (ulonglong)uVar8 * 8);
          if (plVar2 == (longlong *)0x0) {
            return 0x34;
          }
          *plVar2 = lVar4;
        }
        plVar10 = (longlong *)*plVar10;
        if (plVar10 != (longlong *)0x0) break;
        do {
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          if (*(uint *)(param_1 + 0x30) <= uVar8) goto LAB_14314be88;
          plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x28) + uVar9 * 8);
        } while (plVar10 == (longlong *)0x0);
      }
LAB_14314be88:
    } while (plVar10 != (longlong *)0x0);
  }
  return 1;
}



// FUNCTION 14314bec0 GetObjAndAddref body=66 status=ok
// SIG CAkRegisteredObj * GetObjAndAddref(CAkRegistryMgr * this, __uint64 param_1)

/* public: class CAkRegisteredObj * __ptr64 __cdecl CAkRegistryMgr::GetObjAndAddref(unsigned
   __int64) __ptr64 */

CAkRegisteredObj * __thiscall CAkRegistryMgr::GetObjAndAddref(CAkRegistryMgr *this,__uint64 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
                    /* 0x314bec0  181
                       ?GetObjAndAddref@CAkRegistryMgr@@QEAAPEAVCAkRegisteredObj@@_K@Z */
  if (*(uint *)(this + 0x30) != 0) {
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(this + 0x28) +
                   ((param_1 & 0xffffffff) % (ulonglong)*(uint *)(this + 0x30)) * 8);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_1) {
        plVar2 = puVar1 + 2;
        if (plVar2 == (longlong *)0x0) {
          return (CAkRegisteredObj *)0x0;
        }
        *(int *)(*plVar2 + 0x50) = *(int *)(*plVar2 + 0x50) + 1;
        return (CAkRegisteredObj *)*plVar2;
      }
    }
  }
  return (CAkRegisteredObj *)0x0;
}



// FUNCTION 14314bf10 GetSwitchHistItem body=106 status=ok
// SIG undefined GetSwitchHistItem(void)

undefined8 *
CAkRegistryMgr::GetSwitchHistItem
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  
  if (((param_3 != 0) && (4 < *(uint *)(param_3 + 0x40))) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x38) + 0x20), lVar2 != 0)) {
    piVar3 = *(int **)(lVar2 + 0x20);
    piVar1 = piVar3 + (ulonglong)*(uint *)(lVar2 + 0x28) * 3;
    for (; (piVar3 != piVar1 && (*piVar3 != param_4)); piVar3 = piVar3 + 3) {
    }
    piVar4 = piVar3 + 1;
    if (piVar3 == piVar1) {
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      *param_2 = *(undefined8 *)piVar4;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14314bf80 Init body=100 status=ok
// SIG undefined Init(void)

undefined4 CAkRegistryMgr::Init(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x80);
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    return 0x34;
  }
  *(undefined4 *)(param_1 + 0x20) = 8;
  uVar2 = 0;
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  do {
    puVar3 = puVar1;
    uVar2 = uVar2 + 1;
    *puVar3 = puVar3 + 2;
    puVar1 = puVar3 + 2;
  } while (uVar2 < *(uint *)(param_1 + 0x20));
  *puVar3 = 0;
  return 1;
}



// FUNCTION 14314bff0 IsGameObjectActive body=74 status=ok
// SIG undefined IsGameObjectActive(void)

ulonglong CAkRegistryMgr::IsGameObjectActive(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  ulonglong in_RAX;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    in_RAX = *(ulonglong *)(param_1 + 0x28);
    for (puVar1 = *(undefined8 **)
                   (in_RAX + ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_2) {
        if ((puVar1 != (undefined8 *)0x0) &&
           ((in_RAX = puVar1[2], 1 < *(uint *)(in_RAX + 0x50) || (*(char *)(in_RAX + 0x54) == '\0'))
           )) {
          return CONCAT71((int7)(in_RAX >> 8),1);
        }
        break;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14314c040 FUN_14314c040 body=63 status=ok
// SIG undefined FUN_14314c040(void)

bool FUN_14314c040(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  bool bVar2;
  
  if (*(uint *)(param_1 + 0x30) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0x28) +
              ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
    bVar2 = true;
    if (plVar1 == (longlong *)0x0) goto LAB_14314c07b;
    while (plVar1[1] != param_2) {
      plVar1 = (longlong *)*plVar1;
      if (plVar1 == (longlong *)0x0) {
        return false;
      }
    }
  }
  bVar2 = plVar1 == (longlong *)0x0;
LAB_14314c07b:
  return !bVar2;
}



// FUNCTION 14314c080 FUN_14314c080 body=235 status=ok
// SIG undefined FUN_14314c080(void)

void FUN_14314c080(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  lVar3 = DAT_146b508b0;
  do {
    if (lVar3 == 0) {
      return;
    }
    if (((*(uint *)(*(longlong *)(lVar3 + 8) + 0x40) < 2) ||
        (lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x38) + 8), lVar6 == 0)) &&
       (lVar6 = DAT_146b51f28, DAT_146b51f28 == 0)) {
      pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xc0);
      lVar6 = 0;
      if (pvVar5 != (void *)0x0) {
        lVar6 = CAkConnectedListeners::CAkConnectedListeners(pvVar5);
      }
      DAT_146b51f28 = lVar6;
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0xb8) = 1;
        *(undefined1 *)(DAT_146b51f28 + 0xb9) = 1;
        lVar6 = DAT_146b51f28;
      }
    }
    puVar8 = *(ulonglong **)(param_2 + 8);
    puVar7 = *(ulonglong **)(lVar6 + 0xa8);
    puVar1 = puVar8 + *(uint *)(param_2 + 0x10);
    if (puVar8 != puVar1) {
      puVar2 = puVar7 + *(uint *)(lVar6 + 0xb0);
      do {
        if (puVar7 == puVar2) break;
        if (*puVar8 == *puVar7) {
          *(uint *)(lVar3 + 0x58) = *(uint *)(lVar3 + 0x58) | 1;
          break;
        }
        puVar4 = puVar8 + 1;
        if (*puVar7 <= *puVar8) {
          puVar7 = puVar7 + 1;
          puVar4 = puVar8;
        }
        puVar8 = puVar4;
      } while (puVar8 != puVar1);
    }
    lVar3 = *(longlong *)(lVar3 + 0x10);
  } while( true );
}



// FUNCTION 14314c170 FUN_14314c170 body=751 status=ok
// SIG undefined FUN_14314c170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14314c170(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  long lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  void *pvVar12;
  longlong *plVar13;
  bool bVar14;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x30) != 0) {
    for (puVar9 = *(undefined8 **)
                   (*plVar1 + ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
        puVar10 = (undefined8 *)0x0, puVar9 != (undefined8 *)0x0; puVar9 = (undefined8 *)*puVar9) {
      if (puVar9[1] == param_2) {
        puVar10 = puVar9 + 2;
        break;
      }
    }
    if (puVar10 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*puVar10;
      goto LAB_14314c231;
    }
  }
  puVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x58);
  if (puVar9 == (undefined8 *)0x0) {
    return 2;
  }
  FUN_1424b51c0(puVar9 + 1);
  puVar9[7] = 0;
  puVar9[8] = 0;
  *puVar9 = &PTR__vector_deleting_destructor__145ac78e8;
  puVar9[9] = param_2;
  *(undefined4 *)(puVar9 + 10) = 1;
  *(undefined1 *)((longlong)puVar9 + 0x54) = 1;
  puVar10 = (undefined8 *)FUN_14314c620(plVar1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = puVar9;
  }
LAB_14314c231:
  if (puVar9 != (undefined8 *)0x0) {
    lVar11 = FUN_143123ec0(puVar9);
    bVar14 = lVar11 != 0;
    bVar3 = bVar14;
    lVar4 = g_DefaultPoolId;
    lVar5 = DAT_146b50850;
    if (bVar14) {
      _DAT_146b50cf0 = 0;
      _DAT_146b50cd8 = 0;
      DAT_146b50cf8 = 0;
      _DAT_146b50ce4 = 0x3f80000000000000;
      _DAT_146b50ce0 = 0x3f800000;
      _DAT_146b50d00 = 0x3f800000;
      _DAT_146b50d04 = 0;
      _DAT_146b50cec = 0;
      _DAT_146b50cfc = 0x3ff3f;
      FUN_143172970(lVar11,&DAT_146b50cd8,1);
      lVar4 = g_DefaultPoolId;
      lVar5 = DAT_146b50850;
    }
    for (; g_DefaultPoolId = lVar4, lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x10)) {
      lVar11 = FUN_14314bc90(lVar5 + 0xa0,param_2);
      if ((lVar11 != 0) &&
         ((2 < *(uint *)(puVar9 + 8) || (cVar7 = FUN_14314c510(puVar9 + 5,3), cVar7 != '\0')))) {
        if (*(longlong *)(puVar9[7] + 0x10) == 0) {
          pvVar12 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x90);
          if ((pvVar12 != (void *)0x0) &&
             (plVar13 = (longlong *)CAkListener::CAkListener(pvVar12), plVar13 != (longlong *)0x0))
          {
            *(longlong **)(puVar9[7] + 0x10) = plVar13;
            plVar13[1] = (longlong)puVar9;
            iVar8 = (**(code **)(*plVar13 + 8))(plVar13,puVar9[9]);
            lVar4 = g_DefaultPoolId;
            if (iVar8 == 1) goto LAB_14314c3a6;
            (**(code **)*plVar13)(plVar13,0);
            AK::MemoryMgr::Free(lVar4,plVar13);
            *(undefined8 *)(puVar9[7] + 0x10) = 0;
            bVar14 = bVar3;
          }
        }
        else {
LAB_14314c3a6:
          bVar14 = true;
          bVar3 = true;
        }
      }
      lVar4 = g_DefaultPoolId;
    }
    if (bVar14) {
      return 1;
    }
    (**(code **)*puVar9)(puVar9,0);
    AK::MemoryMgr::Free(lVar4,puVar9);
  }
  if ((puVar10 != (undefined8 *)0x0) && (*(uint *)(param_1 + 0x30) != 0)) {
    uVar2 = (param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30);
    puVar9 = *(undefined8 **)(*plVar1 + uVar2 * 8);
    puVar10 = (undefined8 *)0x0;
    do {
      puVar6 = puVar10;
      puVar10 = puVar9;
      if (puVar10 == (undefined8 *)0x0) {
        return 2;
      }
      puVar9 = (undefined8 *)*puVar10;
    } while (puVar10[1] != param_2);
    if (puVar6 == (undefined8 *)0x0) {
      *(undefined8 **)(*plVar1 + uVar2 * 8) = puVar9;
    }
    else {
      *puVar6 = puVar9;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar10);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  }
  return 2;
}



// FUNCTION 14314c460 ResetListenersToDefault body=176 status=ok
// SIG undefined ResetListenersToDefault(void)

void CAkRegistryMgr::ResetListenersToDefault(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(uint *)(param_1 + 0x30) != 0) &&
     (plVar2 = *(longlong **)
                (*(longlong *)(param_1 + 0x28) +
                ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8),
     plVar2 != (longlong *)0x0)) {
    while (plVar2[1] != param_2) {
      plVar2 = (longlong *)*plVar2;
      if (plVar2 == (longlong *)0x0) {
        return;
      }
    }
    plVar2 = plVar2 + 2;
    if ((((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != 0)) &&
        (1 < *(uint *)(lVar1 + 0x40))) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 8), lVar1 != 0)) {
      CAkConnectedListeners::ResetListenersToDefault(lVar1);
      CAkLEngine::ReevaluateGraph(0);
      lVar3 = FUN_143123ec0(*plVar2);
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0x58) = *(uint *)(lVar3 + 0x58) | 1;
        FUN_14314b9a0(lVar3 + 0x20,lVar1 + 0xa0);
      }
    }
  }
  return;
}



// FUNCTION 14314c510 FUN_14314c510 body=266 status=ok
// SIG undefined FUN_14314c510(void)

undefined8 FUN_14314c510(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = *(uint *)(param_1 + 3);
  uVar3 = (ulonglong)uVar6;
  if (uVar6 <= param_2) {
    if (*(uint *)((longlong)param_1 + 0x1c) < param_2) {
      uVar6 = (*(uint *)((longlong)param_1 + 0x1c) - uVar6) + param_2;
      _Var4 = (ulonglong)uVar6 << 3;
      puVar1 = param_1;
      if (0x10 < _Var4) {
        puVar1 = AK::MemoryMgr::Malign(g_DefaultPoolId,_Var4,8);
      }
      if (puVar1 == (undefined8 *)0x0) {
        return 0;
      }
      puVar5 = (undefined8 *)param_1[2];
      if ((puVar5 != (undefined8 *)0x0) && (puVar5 != puVar1)) {
        uVar7 = (ulonglong)*(uint *)(param_1 + 3);
        puVar2 = puVar1;
        if (uVar7 != 0) {
          do {
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = 0;
            }
            *puVar2 = *(undefined8 *)((param_1[2] - (longlong)puVar1) + (longlong)puVar2);
            uVar7 = uVar7 - 1;
            puVar2 = puVar2 + 1;
          } while (uVar7 != 0);
          puVar5 = (undefined8 *)param_1[2];
        }
        if (param_1 != puVar5) {
          AK::MemoryMgr::Falign(g_DefaultPoolId,puVar5);
        }
      }
      param_1[2] = puVar1;
      *(uint *)((longlong)param_1 + 0x1c) = uVar6;
    }
    for (; uVar3 < param_2; uVar3 = uVar3 + 1) {
      puVar1 = (undefined8 *)(param_1[2] + uVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
      }
    }
  }
  *(uint *)(param_1 + 3) = param_2;
  return 1;
}



// FUNCTION 14314c620 FUN_14314c620 body=478 status=ok
// SIG undefined FUN_14314c620(void)

undefined8 * FUN_14314c620(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  uint *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  
  puVar9 = (undefined8 *)0x0;
  uVar1 = *(uint *)(param_1 + 1);
  uVar10 = (ulonglong)uVar1;
  if ((uVar1 == 0) || (0.9 < (float)*(uint *)(param_1 + 2) / (float)uVar10)) {
    puVar6 = &DAT_145ac7870;
    puVar7 = puVar9;
    do {
      uVar8 = *puVar6;
      uVar11 = (ulonglong)uVar8;
      if (uVar1 < uVar8) {
        if (uVar8 != 0) {
          puVar7 = (undefined8 *)*param_1;
          uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
          param_1[1] = 0;
          *param_1 = 0;
          cVar5 = FUN_143134440(param_1);
          if (cVar5 == '\0') {
            if ((void *)*param_1 != (void *)0x0) {
              *(undefined4 *)(param_1 + 1) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
            }
            *param_1 = (longlong)puVar7;
            *(uint *)(param_1 + 1) = uVar1;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
          }
          else {
            if (uVar8 != 0) {
              do {
                uVar8 = *(uint *)(param_1 + 1);
                if (uVar8 < *(uint *)((longlong)param_1 + 0xc)) {
                  *(uint *)(param_1 + 1) = uVar8 + 1;
                  puVar12 = (undefined8 *)(*param_1 + (ulonglong)uVar8 * 8);
                  if (puVar12 != (undefined8 *)0x0) {
                    *puVar12 = 0;
                  }
                }
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar12 = puVar7;
            if (uVar1 != 0) {
              do {
                puVar4 = (undefined8 *)*puVar12;
                while (puVar4 != (undefined8 *)0x0) {
                  uVar1 = *(uint *)(param_1 + 1);
                  puVar3 = (undefined8 *)*puVar4;
                  *puVar4 = *(undefined8 *)
                             (*param_1 + ((ulonglong)*(uint *)(puVar4 + 1) % (ulonglong)uVar1) * 8);
                  *(undefined8 **)
                   (*param_1 + ((ulonglong)*(uint *)(puVar4 + 1) % (ulonglong)uVar1) * 8) = puVar4;
                  puVar4 = puVar3;
                }
                uVar10 = uVar10 - 1;
                puVar12 = puVar12 + 1;
              } while (uVar10 != 0);
            }
            if (puVar7 != (undefined8 *)0x0) {
              AK::MemoryMgr::Free(g_DefaultPoolId,puVar7);
            }
          }
        }
        break;
      }
      uVar8 = (int)puVar7 + 1;
      puVar7 = (undefined8 *)(ulonglong)uVar8;
      puVar6 = puVar6 + 1;
    } while (uVar8 < 0x1b);
  }
  if (*(uint *)(param_1 + 1) == 0) {
    return (undefined8 *)0x0;
  }
  uVar10 = (param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = *(undefined8 **)(*param_1 + uVar10 * 8);
  do {
    if (puVar7 == (undefined8 *)0x0) {
LAB_14314c7a9:
      puVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
      if (puVar7 != (undefined8 *)0x0) {
        puVar9 = puVar7 + 2;
        *puVar7 = *(undefined8 *)(*param_1 + uVar10 * 8);
        puVar7[1] = param_2;
        *(undefined8 **)(*param_1 + uVar10 * 8) = puVar7;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      }
      return puVar9;
    }
    if (puVar7[1] == param_2) {
      if (puVar7 + 2 != (undefined8 *)0x0) {
        return puVar7 + 2;
      }
      goto LAB_14314c7a9;
    }
    puVar7 = (undefined8 *)*puVar7;
  } while( true );
}



// FUNCTION 14314c800 FUN_14314c800 body=308 status=ok
// SIG undefined FUN_14314c800(void)

void FUN_14314c800(longlong param_1,ulonglong param_2,longlong param_3,uint param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  uint local_res8 [2];
  
  if ((*(uint *)(param_1 + 0x30) != 0) &&
     (plVar7 = *(longlong **)
                (*(longlong *)(param_1 + 0x28) +
                ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8),
     plVar7 != (longlong *)0x0)) {
    while (plVar7[1] != param_2) {
      plVar7 = (longlong *)*plVar7;
      if (plVar7 == (longlong *)0x0) {
        return;
      }
    }
    if (plVar7 + 2 != (longlong *)0x0) {
      lVar4 = plVar7[2];
      local_res8[0] = param_4;
      lVar3 = CAkGameObject::CreateComponent<CAkConnectedListeners>(lVar4);
      if (lVar3 != 0) {
        uVar6 = 0;
        uVar8 = local_res8[0];
        if (local_res8[0] != 0) {
          do {
            uVar1 = *(ulonglong *)(param_3 + uVar6 * 0x10);
            if ((uVar1 != 0xffffffffffffffff) && (*(uint *)(param_1 + 0x30) != 0)) {
              for (puVar2 = *(undefined8 **)
                             (*(longlong *)(param_1 + 0x28) +
                             ((uVar1 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
                  puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
                if (puVar2[1] == uVar1) {
                  if (puVar2 + 2 != (undefined8 *)0x0) {
                    CAkGameObject::CreateComponent<CAkListener>(puVar2[2]);
                    uVar8 = local_res8[0];
                  }
                  break;
                }
              }
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while (uVar5 < uVar8);
        }
        FUN_143171370(lVar3,param_3,local_res8);
        lVar4 = FUN_143123ec0(lVar4);
        if (lVar4 != 0) {
          *(uint *)(lVar4 + 0x58) = *(uint *)(lVar4 + 0x58) | 1;
          FUN_14314b9a0(lVar4 + 0x20,lVar3 + 0xa0);
        }
      }
    }
  }
  return;
}



// FUNCTION 14314c940 SetGameObjectOutputBusVolume body=296 status=ok
// SIG undefined SetGameObjectOutputBusVolume(void)

void CAkRegistryMgr::SetGameObjectOutputBusVolume
               (longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(uint *)(param_1 + 0x30) != 0) &&
     (plVar4 = *(longlong **)
                (*(longlong *)(param_1 + 0x28) +
                ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8),
     plVar4 != (longlong *)0x0)) {
    while (plVar4[1] != param_2) {
      plVar4 = (longlong *)*plVar4;
      if (plVar4 == (longlong *)0x0) {
        return;
      }
    }
    plVar4 = plVar4 + 2;
    if ((plVar4 != (longlong *)0x0) &&
       (lVar3 = CAkGameObject::CreateComponent<CAkConnectedListeners>(*plVar4), lVar3 != 0)) {
      if (param_3 == 0xffffffffffffffff) {
        FUN_1431712d0(lVar3,param_4);
      }
      else {
        if (*(uint *)(param_1 + 0x30) != 0) {
          for (puVar1 = *(undefined8 **)
                         (*(longlong *)(param_1 + 0x28) +
                         ((param_3 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
              puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
            if (puVar1[1] == param_3) {
              if (puVar1 + 2 != (undefined8 *)0x0) {
                CAkGameObject::CreateComponent<CAkListener>(puVar1[2]);
              }
              break;
            }
          }
        }
        FUN_143171790(lVar3,param_3,param_4);
      }
      if ((*(int *)(*plVar4 + 0x40) != 0) && (lVar2 = **(longlong **)(*plVar4 + 0x38), lVar2 != 0))
      {
        *(uint *)(lVar2 + 0x58) = *(uint *)(lVar2 + 0x58) | 1;
        FUN_14314b9a0(lVar2 + 0x20,lVar3 + 0xa0);
      }
    }
  }
  return;
}



// FUNCTION 14314ca70 FUN_14314ca70 body=136 status=ok
// SIG undefined FUN_14314ca70(void)

undefined8 FUN_14314ca70(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    plVar2 = (longlong *)0x0;
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x28) +
                   ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
        plVar4 = plVar2, puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_2) {
        plVar4 = puVar1 + 2;
        break;
      }
    }
    if (plVar4 != (longlong *)0x0) {
      lVar3 = *plVar4;
      if (*(int *)(lVar3 + 0x40) != 0) {
        plVar2 = (longlong *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (plVar2 != (longlong *)0x0) {
        *(uint *)(plVar2 + 0xb) = *(uint *)(plVar2 + 0xb) | 1;
        *(undefined4 *)(plVar2 + 8) = param_3;
        lVar3 = *plVar4;
      }
      if ((2 < *(uint *)(lVar3 + 0x40)) &&
         (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x10), lVar3 != 0)) {
        CAkListener::SetScalingFactor(lVar3,param_3);
      }
    }
  }
  return 1;
}



// FUNCTION 14314cb00 SetMultipleObstructionAndOcclusion body=213 status=ok
// SIG undefined SetMultipleObstructionAndOcclusion(void)

undefined8
CAkRegistryMgr::SetMultipleObstructionAndOcclusion
          (longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
          undefined4 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    for (puVar2 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x28) + ((param_2 & 0xffffffff) % (ulonglong)uVar1) * 8)
        ; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
      if (puVar2[1] == param_2) {
        if (puVar2 + 2 == (undefined8 *)0x0) {
          return 2;
        }
        uVar4 = puVar2[2];
        puVar2 = *(undefined8 **)
                  (*(longlong *)(param_1 + 0x28) + ((param_3 & 0xffffffff) % (ulonglong)uVar1) * 8);
        goto joined_r0x00014314cb78;
      }
    }
  }
  return 2;
joined_r0x00014314cb78:
  if (puVar2 == (undefined8 *)0x0) {
LAB_14314cba1:
    lVar3 = FUN_143123ec0(uVar4);
    if (lVar3 == 0) {
      return 2;
    }
    uVar4 = FUN_143172670(lVar3,param_3,param_4,param_5);
    return uVar4;
  }
  if (puVar2[1] == param_3) {
    if (puVar2 + 2 != (undefined8 *)0x0) {
      CAkGameObject::CreateComponent<CAkListener>(puVar2[2]);
    }
    goto LAB_14314cba1;
  }
  puVar2 = (undefined8 *)*puVar2;
  goto joined_r0x00014314cb78;
}



// FUNCTION 14314cbe0 SetNodeIDAsModified body=183 status=ok
// SIG undefined SetNodeIDAsModified(void)

void CAkRegistryMgr::SetNodeIDAsModified(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 uStackX_c;
  
  iVar1 = *(int *)(param_2 + 0x10);
  bVar3 = *(byte *)(param_2 + 0xa8) >> 7;
  puVar2 = (undefined8 *)*param_1;
  uStackX_c = CONCAT31(uStackX_c._1_3_,bVar3);
  do {
    if (puVar2 == (undefined8 *)0x0) {
LAB_14314cc2e:
      puVar2 = (undefined8 *)param_1[2];
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
        if (puVar2 == (undefined8 *)0x0) {
          return;
        }
        *puVar2 = param_1[2];
        param_1[2] = puVar2;
      }
      if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
        *param_1 = puVar2;
      }
      else {
        *(undefined8 *)param_1[1] = puVar2;
        puVar2 = (undefined8 *)param_1[2];
      }
      param_1[1] = puVar2;
      param_1[2] = *puVar2;
      *puVar2 = 0;
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
      *(ulonglong *)(param_1[1] + 8) = CONCAT44(uStackX_c,iVar1);
      return;
    }
    if ((iVar1 == *(int *)(puVar2 + 1)) && (bVar3 == *(byte *)((longlong)puVar2 + 0xc))) {
      if (puVar2 != (undefined8 *)0xfffffffffffffff8) {
        return;
      }
      goto LAB_14314cc2e;
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}



// FUNCTION 14314cca0 SetObjectObstructionAndOcclusion body=194 status=ok
// SIG undefined SetObjectObstructionAndOcclusion(void)

undefined8
CAkRegistryMgr::SetObjectObstructionAndOcclusion
          (longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,
          undefined4 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    for (puVar2 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x28) + ((param_2 & 0xffffffff) % (ulonglong)uVar1) * 8)
        ; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
      if (puVar2[1] == param_2) {
        if (puVar2 + 2 == (undefined8 *)0x0) {
          return 2;
        }
        uVar4 = puVar2[2];
        puVar2 = *(undefined8 **)
                  (*(longlong *)(param_1 + 0x28) + ((param_3 & 0xffffffff) % (ulonglong)uVar1) * 8);
        goto joined_r0x00014314cd0f;
      }
    }
  }
  return 2;
joined_r0x00014314cd0f:
  if (puVar2 == (undefined8 *)0x0) {
LAB_14314cd32:
    lVar3 = FUN_143123ec0(uVar4);
    if (lVar3 == 0) {
      return 2;
    }
    uVar4 = FUN_143172750(lVar3,param_3,param_4,param_5);
    return uVar4;
  }
  if (puVar2[1] == param_3) {
    if (puVar2 + 2 != (undefined8 *)0x0) {
      CAkGameObject::CreateComponent<CAkListener>(puVar2[2]);
    }
    goto LAB_14314cd32;
  }
  puVar2 = (undefined8 *)*puVar2;
  goto joined_r0x00014314cd0f;
}



// FUNCTION 14314cd70 SetPosition body=204 status=ok
// SIG undefined SetPosition(void)

undefined8
CAkRegistryMgr::SetPosition
          (longlong param_1,ulonglong param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 2;
  if (*(uint *)(param_1 + 0x30) != 0) {
    for (puVar2 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x28) +
                   ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
        puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
      if (puVar2[1] == param_2) {
        plVar1 = puVar2 + 2;
        if (plVar1 == (longlong *)0x0) {
          return 2;
        }
        if ((*(int *)(*plVar1 + 0x40) != 0) && (lVar3 = **(longlong **)(*plVar1 + 0x38), lVar3 != 0)
           ) {
          FUN_143172970(lVar3,param_3,param_4,param_5);
          uVar4 = 1;
        }
        if (param_4 == 0) {
          return uVar4;
        }
        if (*(uint *)(*plVar1 + 0x40) < 3) {
          return uVar4;
        }
        lVar3 = *(longlong *)(*(longlong *)(*plVar1 + 0x38) + 0x10);
        if (lVar3 == 0) {
          return uVar4;
        }
        CAkListener::SetPosition(lVar3,param_3);
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 14314ce40 FUN_14314ce40 body=611 status=ok
// SIG undefined FUN_14314ce40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14314ce40(undefined8 param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  long lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  void *pvVar9;
  longlong lVar10;
  void *pvVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  ulonglong uVar15;
  
  if (param_2 == 0) {
    return 2;
  }
  if ((*(uint *)(param_2 + 0x40) < 5) && (cVar6 = FUN_14314c510(param_2 + 0x28,5), cVar6 == '\0')) {
    return 2;
  }
  plVar8 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x20);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x30);
    if (plVar8 == (longlong *)0x0) {
      return 2;
    }
    plVar8[1] = 0;
    *plVar8 = (longlong)&PTR_FUN_145ac78f0;
    plVar8[3] = (longlong)DAT_146b50878;
    plVar8[2] = 0;
    plVar5 = plVar8;
    if (DAT_146b50880 != (longlong *)0x0) {
      DAT_146b50878[2] = (longlong)plVar8;
      plVar5 = DAT_146b50880;
    }
    DAT_146b50880 = plVar5;
    _DAT_146b50870 = _DAT_146b50870 + 1;
    DAT_146b50878 = plVar8;
    *plVar8 = (longlong)&PTR__scalar_deleting_destructor__145ac7900;
    plVar8[4] = 0;
    plVar8[5] = 0;
    *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x20) = plVar8;
    plVar8[1] = param_2;
    iVar7 = (**(code **)(*plVar8 + 8))(plVar8,*(undefined8 *)(param_2 + 0x48));
    lVar4 = g_DefaultPoolId;
    if (iVar7 != 1) {
      (**(code **)*plVar8)(plVar8,0);
      AK::MemoryMgr::Free(lVar4,plVar8);
      *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x20) = 0;
      return 2;
    }
  }
  piVar12 = (int *)plVar8[4];
  uVar2 = *(uint *)(plVar8 + 5);
  piVar14 = piVar12 + (ulonglong)uVar2 * 3;
  for (; (piVar12 != piVar14 && (*piVar12 != param_3)); piVar12 = piVar12 + 3) {
  }
  piVar13 = piVar12 + 1;
  if (piVar12 == piVar14) {
    piVar13 = (int *)0x0;
  }
  if (piVar13 != (int *)0x0) {
    *(undefined8 *)piVar13 = *param_4;
    return 2 - (uint)(piVar13 != (int *)0x0);
  }
  if (uVar2 < *(uint *)((longlong)plVar8 + 0x2c)) {
LAB_14314d051:
    uVar2 = *(uint *)(plVar8 + 5);
    *(uint *)(plVar8 + 5) = uVar2 + 1;
    piVar12 = (int *)(plVar8[4] + (ulonglong)uVar2 * 0xc);
  }
  else {
    uVar1 = *(uint *)((longlong)plVar8 + 0x2c) + 1;
    pvVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0xc);
    piVar14 = (int *)0x0;
    if (pvVar9 == (void *)0x0) goto LAB_14314d080;
    pvVar11 = (void *)plVar8[4];
    if ((pvVar11 != (void *)0x0) && (pvVar11 != pvVar9)) {
      uVar15 = (ulonglong)*(uint *)(plVar8 + 5);
      if (uVar15 != 0) {
        lVar10 = 0;
        do {
          lVar3 = plVar8[4];
          *(undefined8 *)(lVar10 + (longlong)pvVar9) = *(undefined8 *)(lVar10 + lVar3);
          *(undefined4 *)(lVar10 + 8 + (longlong)pvVar9) = *(undefined4 *)(lVar10 + 8 + lVar3);
          uVar15 = uVar15 - 1;
          lVar10 = lVar10 + 0xc;
        } while (uVar15 != 0);
        pvVar11 = (void *)plVar8[4];
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar11);
    }
    *(uint *)((longlong)plVar8 + 0x2c) = uVar1;
    piVar12 = (int *)0x0;
    plVar8[4] = (longlong)pvVar9;
    if (uVar2 < uVar1) goto LAB_14314d051;
  }
  piVar14 = (int *)0x0;
  if (piVar12 != (int *)0x0) {
    *piVar12 = param_3;
    piVar14 = piVar12 + 1;
    *(undefined8 *)piVar14 = *param_4;
  }
LAB_14314d080:
  return 2 - (uint)(piVar14 != (int *)0x0);
}



// FUNCTION 14314d0b0 FUN_14314d0b0 body=516 status=ok
// SIG undefined FUN_14314d0b0(void)

void FUN_14314d0b0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  long lVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar12;
  
  FUN_14314d2c0();
  uVar15 = *(uint *)(param_1 + 6);
  plVar14 = (longlong *)0x0;
  if (uVar15 != 0) {
    lVar2 = param_1[5];
    uVar6 = 0xfffffffe % (ulonglong)uVar15;
    plVar4 = *(longlong **)(lVar2 + uVar6 * 8);
    plVar13 = plVar14;
    while (plVar8 = plVar4, plVar8 != (longlong *)0x0) {
      if (plVar8[1] == -2) {
        lVar10 = *plVar8;
        puVar5 = (undefined8 *)plVar8[2];
        uVar12 = uVar6;
        lVar3 = lVar10;
        while ((lVar3 == 0 &&
               (uVar11 = (int)uVar12 + 1, uVar12 = (ulonglong)uVar11, uVar11 < uVar15))) {
          lVar3 = *(longlong *)(lVar2 + uVar12 * 8);
        }
        if (plVar13 == (longlong *)0x0) {
          *(longlong *)(lVar2 + uVar6 * 8) = lVar10;
        }
        else {
          *plVar13 = lVar10;
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,plVar8);
        *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + -1;
        piVar1 = (int *)(puVar5 + 10);
        *piVar1 = *piVar1 + -1;
        *(undefined1 *)((longlong)puVar5 + 0x54) = 0;
        lVar9 = g_DefaultPoolId;
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5,0);
          AK::MemoryMgr::Free(lVar9,puVar5);
        }
        break;
      }
      plVar13 = plVar8;
      plVar4 = (longlong *)*plVar8;
    }
  }
  if (*(int *)(param_1 + 6) != 0) {
    do {
      lVar2 = (longlong)plVar14 * 8;
      lVar10 = param_1[5];
      plVar13 = *(longlong **)(lVar2 + lVar10);
      if (plVar13 != (longlong *)0x0) {
        do {
          plVar4 = (longlong *)*plVar13;
          AK::MemoryMgr::Free(g_DefaultPoolId,plVar13);
          plVar13 = plVar4;
        } while (plVar4 != (longlong *)0x0);
        lVar10 = param_1[5];
      }
      uVar15 = (int)plVar14 + 1;
      plVar14 = (longlong *)(ulonglong)uVar15;
      *(undefined8 *)(lVar2 + lVar10) = 0;
    } while (uVar15 < *(uint *)(param_1 + 6));
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((void *)param_1[5] != (void *)0x0) {
    *(undefined4 *)(param_1 + 6) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[5]);
    param_1[5] = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  while (puVar5 = (undefined8 *)*param_1, puVar5 != (undefined8 *)0x0) {
    *param_1 = *puVar5;
    if (puVar5 == (undefined8 *)param_1[1]) {
      param_1[1] = 0;
    }
    if ((puVar5 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 2 <= puVar5)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar5);
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
    }
    else {
      *puVar5 = param_1[2];
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
      param_1[2] = puVar5;
    }
  }
  puVar5 = (undefined8 *)param_1[2];
  while (puVar7 = puVar5, puVar7 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar7;
    if ((puVar7 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 2 <= puVar7)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar7);
    }
  }
  if ((void *)param_1[3] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[3]);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 14314d2c0 FUN_14314d2c0 body=442 status=ok
// SIG undefined FUN_14314d2c0(void)

void FUN_14314d2c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  long lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar11;
  uint uStack_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong *plVar10;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x30) != 0) {
    local_58 = *(longlong **)*plVar1;
    plVar10 = (longlong *)0x0;
    while (plVar7 = (longlong *)0x0, local_58 == (longlong *)0x0) {
      uVar9 = (int)plVar10 + 1;
      plVar10 = (longlong *)(ulonglong)uVar9;
      if (*(uint *)(param_1 + 0x30) <= uVar9) {
        return;
      }
      local_58 = (longlong *)((undefined8 *)*plVar1)[(longlong)plVar10];
    }
LAB_14314d330:
    do {
      plVar8 = local_58;
      puVar3 = (undefined8 *)plVar8[2];
      if ((plVar8[1] == -2) || ((param_2 != 0 && (lVar6 = FUN_14314bc90(param_2), lVar6 != 0)))) {
        local_58 = (longlong *)*plVar8;
        if (local_58 == (longlong *)0x0) {
          do {
            uVar9 = (int)plVar10 + 1;
            plVar10 = (longlong *)(ulonglong)uVar9;
            if (*(uint *)(param_1 + 0x30) <= uVar9) goto LAB_14314d415;
            local_58 = *(longlong **)(*plVar1 + (longlong)plVar10 * 8);
            plVar8 = (longlong *)0x0;
            plVar7 = (longlong *)0x0;
          } while (local_58 == (longlong *)0x0);
          goto LAB_14314d330;
        }
      }
      else {
        piVar2 = (int *)(puVar3 + 10);
        *piVar2 = *piVar2 + -1;
        *(undefined1 *)((longlong)puVar3 + 0x54) = 0;
        lVar5 = g_DefaultPoolId;
        if (*piVar2 == 0) {
          (**(code **)*puVar3)(puVar3,0);
          AK::MemoryMgr::Free(lVar5,puVar3);
        }
        plVar4 = (longlong *)*plVar8;
        uStack_60 = (uint)plVar10;
        local_58 = plVar4;
        plStack_50 = plVar7;
        if (plVar4 == (longlong *)0x0) {
          plVar11 = plVar10;
          do {
            uStack_60 = (int)plVar11 + 1;
            plVar11 = (longlong *)(ulonglong)uStack_60;
            if (*(uint *)(param_1 + 0x30) <= uStack_60) break;
            plStack_50 = (longlong *)0x0;
            local_58 = *(longlong **)(*plVar1 + (longlong)plVar11 * 8);
          } while (local_58 == (longlong *)0x0);
        }
        if (plVar7 == (longlong *)0x0) {
          *(longlong **)(*plVar1 + (longlong)plVar10 * 8) = plVar4;
        }
        else {
          *plVar7 = (longlong)plVar4;
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,plVar8);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        plVar10 = (longlong *)(ulonglong)uStack_60;
        plVar8 = plStack_50;
      }
LAB_14314d415:
      plVar7 = plVar8;
    } while (local_58 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 14314d480 FUN_14314d480 body=206 status=ok
// SIG undefined FUN_14314d480(void)

ulonglong FUN_14314d480(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  long lVar9;
  AKRESULT AVar10;
  ulonglong in_RAX;
  uint uVar11;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar12;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    in_RAX = (param_2 & 0xffffffff) / (ulonglong)uVar2;
    uVar8 = (param_2 & 0xffffffff) % (ulonglong)uVar2;
    plVar4 = *(longlong **)(lVar3 + uVar8 * 8);
    plVar14 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      while (plVar13 = plVar4, plVar13[1] != param_2) {
        plVar4 = (longlong *)*plVar13;
        plVar14 = plVar13;
        if ((longlong *)*plVar13 == (longlong *)0x0) {
          return in_RAX;
        }
      }
      lVar5 = *plVar13;
      puVar6 = (undefined8 *)plVar13[2];
      uVar12 = uVar8;
      lVar7 = lVar5;
      while ((lVar7 == 0 && (uVar11 = (int)uVar12 + 1, uVar12 = (ulonglong)uVar11, uVar11 < uVar2)))
      {
        lVar7 = *(longlong *)(lVar3 + uVar12 * 8);
      }
      if (plVar14 == (longlong *)0x0) {
        *(longlong *)(lVar3 + uVar8 * 8) = lVar5;
      }
      else {
        *plVar14 = lVar5;
      }
      AVar10 = AK::MemoryMgr::Free(g_DefaultPoolId,plVar13);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      piVar1 = (int *)(puVar6 + 10);
      *piVar1 = *piVar1 + -1;
      *(undefined1 *)((longlong)puVar6 + 0x54) = 0;
      lVar9 = g_DefaultPoolId;
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,0);
        AVar10 = AK::MemoryMgr::Free(lVar9,puVar6);
      }
      in_RAX = (ulonglong)AVar10;
    }
  }
  return in_RAX;
}



// FUNCTION 14314d550 FUN_14314d550 body=125 status=ok
// SIG undefined FUN_14314d550(void)

void FUN_14314d550(undefined8 *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  piVar3 = piVar4 + (ulonglong)uVar2 * 3;
  if (piVar4 != piVar3) {
    do {
      if (*piVar4 == param_2) break;
      piVar4 = piVar4 + 3;
    } while (piVar4 != piVar3);
    if (piVar4 != piVar3) {
      if (piVar4 < piVar3 + -3) {
        uVar1 = ((ulonglong)((longlong)(piVar3 + -3) + (-1 - (longlong)piVar4)) / 0xc + 1) * 3 &
                0x3fffffffffffffff;
        piVar3 = piVar4 + 3;
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *piVar4 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        }
        uVar2 = *(uint *)(param_1 + 1);
      }
      *(uint *)(param_1 + 1) = uVar2 - 1;
    }
  }
  return;
}



// FUNCTION 14314d5d0 FUN_14314d5d0 body=621 status=ok
// SIG undefined FUN_14314d5d0(void)

void FUN_14314d5d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  undefined4 *puVar13;
  int iVar14;
  ulonglong uVar15;
  
  if (param_3 != 2) {
    CAkRegistryMgr::EnsureListenersExist();
  }
  uVar15 = 0;
  if (DAT_146b51f28 == 0) {
    pvVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xc0);
    uVar9 = uVar15;
    if (pvVar8 != (void *)0x0) {
      uVar9 = CAkConnectedListeners::CAkConnectedListeners(pvVar8);
    }
    DAT_146b51f28 = uVar9;
    if (uVar9 != 0) {
      *(undefined1 *)(uVar9 + 0xb8) = 1;
      *(undefined1 *)(DAT_146b51f28 + 0xb9) = 1;
    }
  }
  uVar9 = DAT_146b51f28;
  if (param_3 == 0) {
    CAkConnectedListeners::SetListeners(DAT_146b51f28,param_2);
  }
  else if (param_3 == 1) {
    FUN_14316fff0(DAT_146b51f28,param_2);
  }
  else if (param_3 == 2) {
    FUN_143170db0(DAT_146b51f28,param_2);
  }
  CAkLEngine::ReevaluateGraph(0);
  lVar4 = DAT_146b508b0;
  do {
    if (lVar4 == 0) {
      return;
    }
    if (((*(uint *)(*(longlong *)(lVar4 + 8) + 0x40) < 2) ||
        (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 8) + 0x38) + 8), lVar3 == 0)) ||
       (*(char *)(lVar3 + 0xb8) == '\0')) {
      *(uint *)(lVar4 + 0x58) = *(uint *)(lVar4 + 0x58) | 1;
      puVar12 = *(ulonglong **)(lVar4 + 0x28);
      if (puVar12 != puVar12 + (ulonglong)*(uint *)(lVar4 + 0x30) * 3) {
        do {
          iVar6 = 0;
          iVar14 = *(int *)(uVar9 + 0xb0) + -1;
          if (-1 < iVar14) {
            uVar11 = uVar15;
            do {
              iVar6 = (iVar14 - (int)uVar11) / 2 + (int)uVar11;
              uVar10 = *(ulonglong *)(*(longlong *)(uVar9 + 0xa8) + (longlong)iVar6 * 8);
              if (*puVar12 < uVar10) {
                iVar14 = iVar6 + -1;
              }
              else {
                if (*puVar12 <= uVar10) {
                  bVar5 = true;
                  uVar11 = *(longlong *)(uVar9 + 0xa8) + (longlong)iVar6 * 8;
                  goto LAB_14314d74c;
                }
                uVar11 = (ulonglong)(iVar6 + 1);
              }
              iVar6 = (int)uVar11;
            } while (iVar6 <= iVar14);
          }
          bVar5 = false;
          uVar11 = uVar15;
          if (*(longlong *)(uVar9 + 0xa8) != 0) {
            uVar11 = *(longlong *)(uVar9 + 0xa8) + (longlong)iVar6 * 8;
          }
LAB_14314d74c:
          uVar10 = uVar15;
          if (bVar5) {
            uVar10 = uVar11;
          }
          if (uVar10 == 0) {
            if ((void *)puVar12[1] != (void *)0x0) {
              *(undefined4 *)(puVar12 + 2) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar12[1]);
              puVar12[1] = 0;
              *(undefined4 *)((longlong)puVar12 + 0x14) = 0;
            }
            uVar7 = *(uint *)(lVar4 + 0x30);
            puVar2 = (ulonglong *)(*(longlong *)(lVar4 + 0x28) + ((ulonglong)uVar7 - 1) * 0x18);
            if (puVar12 < puVar2) {
              puVar13 = (undefined4 *)((longlong)puVar12 + 0x2c);
              do {
                *(undefined8 *)(puVar13 + -0xb) = *(undefined8 *)(puVar13 + -5);
                if (*(void **)(puVar13 + -9) != (void *)0x0) {
                  puVar13[-7] = 0;
                  AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(puVar13 + -9));
                  *(undefined8 *)(puVar13 + -9) = 0;
                  puVar13[-6] = 0;
                }
                *(undefined8 *)(puVar13 + -9) = *(undefined8 *)(puVar13 + -3);
                puVar13[-7] = puVar13[-1];
                puVar13[-6] = *puVar13;
                *(undefined8 *)(puVar13 + -3) = 0;
                *(undefined8 *)(puVar13 + -1) = 0;
                puVar1 = (ulonglong *)(puVar13 + -5);
                puVar13 = puVar13 + 6;
              } while (puVar1 < puVar2);
              uVar7 = *(uint *)(lVar4 + 0x30);
            }
            uVar7 = uVar7 - 1;
            *(uint *)(lVar4 + 0x30) = uVar7;
          }
          else {
            uVar7 = *(uint *)(lVar4 + 0x30);
            puVar12 = puVar12 + 3;
          }
        } while (puVar12 != (ulonglong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)uVar7 * 0x18));
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
  } while( true );
}



// FUNCTION 14314d840 UpdateGameObjectPositions body=74 status=ok
// SIG undefined UpdateGameObjectPositions(void)

void CAkRegistryMgr::UpdateGameObjectPositions(void)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar2 = DAT_146b508b0; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
    lVar1 = *(longlong *)(lVar2 + 8);
    if (((1 < *(uint *)(lVar1 + 0x50)) || (*(char *)(lVar1 + 0x54) == '\0')) ||
       ((2 < *(uint *)(lVar1 + 0x40) && (*(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x10) != 0))))
    {
      FUN_143172a90(lVar2);
    }
  }
  return;
}



// FUNCTION 14314d890 UpdateListeners body=291 status=ok
// SIG undefined UpdateListeners(void)

void CAkRegistryMgr::UpdateListeners
               (longlong param_1,ulonglong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(uint *)(param_1 + 0x30) != 0) &&
     (plVar3 = *(longlong **)
                (*(longlong *)(param_1 + 0x28) +
                ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8),
     plVar3 != (longlong *)0x0)) {
    while (plVar3[1] != param_2) {
      plVar3 = (longlong *)*plVar3;
      if (plVar3 == (longlong *)0x0) {
        return;
      }
    }
    plVar3 = plVar3 + 2;
    if (((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) &&
       (lVar2 = CAkGameObject::CreateComponent<CAkConnectedListeners>(), lVar2 != 0)) {
      if (param_4 == 0) {
        EnsureListenersExist(param_1,param_3);
        CAkConnectedListeners::SetListeners(lVar2,param_3);
      }
      else if (param_4 == 1) {
        EnsureListenersExist(param_1,param_3);
        FUN_14316fff0(lVar2,param_3);
      }
      else if (param_4 == 2) {
        FUN_143170db0(lVar2,param_3);
      }
      CAkLEngine::ReevaluateGraph(0);
      if ((*(int *)(*plVar3 + 0x40) != 0) && (lVar1 = **(longlong **)(*plVar3 + 0x38), lVar1 != 0))
      {
        *(uint *)(lVar1 + 0x58) = *(uint *)(lVar1 + 0x58) | 1;
        FUN_14314b9a0(lVar1 + 0x20,lVar2 + 0xa0);
      }
    }
  }
  return;
}



// FUNCTION 14314d9c0 operator= body=77 status=ok
// SIG undefined operator=(void)

undefined4 *
AK::SoundEngine::DynamicSequence::PlaylistItem::operator=(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 4) != 0) {
    AkExternalSourceArray::Release();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  piVar1 = *(int **)(param_2 + 4);
  *(int **)(param_1 + 4) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  return param_1;
}



// FUNCTION 14314da10 `scalar_deleting_destructor' body=267 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkDynamicSequence::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__145ac79a8;
  pvVar5 = (void *)param_1[3];
  if (pvVar5 != (void *)0x0) {
    pvVar2 = (void *)((longlong)pvVar5 + (ulonglong)*(uint *)(param_1 + 4) * 0x18);
    if (pvVar5 != pvVar2) {
      do {
        if (*(longlong *)((longlong)pvVar5 + 0x10) != 0) {
          AkExternalSourceArray::Release();
        }
        pvVar5 = (void *)((longlong)pvVar5 + 0x18);
      } while (pvVar5 != pvVar2);
      pvVar5 = (void *)param_1[3];
    }
    *(undefined4 *)(param_1 + 4) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar5);
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  puVar3 = (undefined8 *)param_1[0xb];
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 10);
    *piVar1 = *piVar1 + -1;
    lVar4 = g_DefaultPoolId;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,0);
      AK::MemoryMgr::Free(lVar4,puVar3);
    }
  }
  if (param_1[0x15] != 0) {
    AkExternalSourceArray::Release();
  }
  if (param_1[0x12] != 0) {
    AkExternalSourceArray::Release();
  }
  if (param_1[0xc] != 0) {
    AkExternalSourceArray::Release();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  CAkPBIAware::~CAkPBIAware(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14314db20 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkPBIAware::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~CAkPBIAware();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14314db60 AddRef body=77 status=ok
// SIG undefined AddRef(void)

int CAkDynamicSequence::AddRef(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x200));
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x200));
  return iVar2;
}



// FUNCTION 14314dbb0 AllExec body=255 status=ok
// SIG undefined AllExec(void)

void CAkDynamicSequence::AllExec(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x58) != param_3) && (param_3 != 0)) {
    return;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  else {
    if (param_2 == 1) {
      if (*(int *)(param_1 + 0x50) == 0) {
        return;
      }
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      if (*(int *)(param_1 + 0xb0) != 1) {
        return;
      }
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(DAT_146b50b78 + 0x78);
      return;
    }
    if (param_2 != 2) {
      return;
    }
    if (*(int *)(param_1 + 0xb0) == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0xb0) + -1;
    *(int *)(param_1 + 0xb0) = iVar1;
    if (iVar1 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x50) != 1) {
      Play(param_1,0,4);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(DAT_146b50b78 + 0x78) - *(int *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 14314dcb0 Break body=144 status=ok
// SIG undefined Break(void)

undefined8 CAkDynamicSequence::Break(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    FUN_14313c390(DAT_146b50b78,*(undefined4 *)(param_1 + 0x74));
    if (*(int *)(param_1 + 0x80) != 0) {
      plVar1 = (longlong *)
               CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*(int *)(param_1 + 0x80),0);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xb0))
                  (plVar1,*(undefined8 *)(param_1 + 0x58),plVar1,*(undefined4 *)(param_1 + 0x74));
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      return 1;
    }
  }
  return 1;
}



// FUNCTION 14314dd40 Create body=286 status=ok
// SIG undefined Create(void)

undefined8 * CAkDynamicSequence::Create(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xc0);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    CAkIndexable::CAkIndexable(puVar4);
    *puVar4 = &PTR__scalar_deleting_destructor__145ac79a8;
    puVar4[3] = 0;
    puVar4[4] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar4 + 5));
    *(undefined4 *)(puVar4 + 10) = 0;
    puVar4[0xb] = 0;
    puVar4[0xe] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    *(undefined1 *)(puVar4 + 0xf) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x7c) = param_2;
    puVar4[0x10] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x15] = 0;
    *(undefined4 *)((longlong)puVar4 + 0x74) = param_1;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x11] = 0;
    puVar4[0x14] = 0;
    lVar2 = DAT_146b50af8;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x200);
    EnterCriticalSection(lpCriticalSection);
    cVar3 = FUN_14313b140(lVar2 + 0x228);
    if (cVar3 != '\0') {
      uVar1 = (ulonglong)*(uint *)(puVar4 + 2) % (ulonglong)*(uint *)(lVar2 + 0x230);
      puVar4[1] = *(undefined8 *)(*(longlong *)(lVar2 + 0x228) + uVar1 * 8);
      *(undefined8 **)(*(longlong *)(lVar2 + 0x228) + uVar1 * 8) = puVar4;
      *(int *)(lVar2 + 0x238) = *(int *)(lVar2 + 0x238) + 1;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return puVar4;
}



// FUNCTION 14314de60 FUN_14314de60 body=108 status=ok
// SIG undefined FUN_14314de60(void)

void FUN_14314de60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x370);
  if (pvVar1 != (void *)0x0) {
    FUN_1431add10(pvVar1,param_4,param_2,param_3,param_5,*(undefined4 *)(param_1 + 0x7c));
  }
  return;
}



// FUNCTION 14314ded0 Erase body=164 status=ok
// SIG undefined Erase(void)

void AkArray<AK::SoundEngine::DynamicSequence::PlaylistItem,AK::SoundEngine::DynamicSequence::PlaylistItem_const_&,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<AK::SoundEngine::DynamicSequence::PlaylistItem>_>
     ::Erase(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)(*param_1 + ((ulonglong)*(uint *)(param_1 + 1) - 1) * 0x18);
  puVar4 = (undefined4 *)(*param_1 + (param_2 & 0xffffffff) * 0x18);
  if (puVar4 < puVar1) {
    puVar3 = (undefined8 *)(puVar4 + 8);
    do {
      if (puVar3[-2] != 0) {
        AkExternalSourceArray::Release();
      }
      *puVar4 = *(undefined4 *)(puVar3 + -1);
      *(undefined4 *)((longlong)puVar3 + -0x1c) = *(undefined4 *)((longlong)puVar3 + -4);
      puVar3[-3] = *puVar3;
      piVar2 = (int *)puVar3[1];
      puVar3[-2] = piVar2;
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + 1;
      }
      puVar4 = puVar4 + 6;
      puVar3 = puVar3 + 3;
    } while (puVar4 < puVar1);
  }
  if (*(longlong *)(puVar1 + 4) != 0) {
    AkExternalSourceArray::Release();
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return;
}



// FUNCTION 14314df80 GetNextToPlay body=177 status=ok
// SIG undefined GetNextToPlay(void)

undefined4
CAkDynamicSequence::GetNextToPlay
          (longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    AkExternalSourceArray::Release();
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xa0);
  piVar1 = *(int **)(param_1 + 0xa8);
  *(int **)(param_1 + 0x90) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar2 = _GetNextToPlay(param_1,param_2,param_3);
  piVar1 = *(int **)(param_1 + 0xa8);
  if (*param_4 != 0) {
    AkExternalSourceArray::Release();
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  *param_4 = (longlong)piVar1;
  return uVar2;
}



// FUNCTION 14314e040 GetPauseTimes body=99 status=ok
// SIG undefined GetPauseTimes(void)

void CAkDynamicSequence::GetPauseTimes(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  *param_2 = *(undefined4 *)(param_1 + 0xb4);
  *param_3 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014314e09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 14314e0b0 GetQueuedItem body=90 status=ok
// SIG undefined GetQueuedItem(void)

void CAkDynamicSequence::GetQueuedItem(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  *param_2 = *(undefined4 *)(param_1 + 0x98);
  *param_3 = *(undefined8 *)(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00014314e103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 14314e110 Pause body=267 status=ok
// SIG undefined Pause(void)

undefined8 CAkDynamicSequence::Pause(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x50) != 0) &&
     (*(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1, *(int *)(param_1 + 0xb0) == 1)) {
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(DAT_146b50b78 + 0x78);
    CAkAudioMgr::PausePendingItems(DAT_146b50b78,*(undefined4 *)(param_1 + 0x74));
    if (*(int *)(param_1 + 0x80) != 0) {
      plVar1 = (longlong *)
               CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*(int *)(param_1 + 0x80),0);
      if (plVar1 != (longlong *)0x0) {
        CAkParameterNodeBase::Pause
                  (plVar1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x74),param_2,
                   param_3);
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      plVar1 = (longlong *)
               CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*(int *)(param_1 + 0x98),0);
      if (plVar1 != (longlong *)0x0) {
        CAkParameterNodeBase::Pause
                  (plVar1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x74),param_2,
                   param_3);
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    return 1;
  }
  return 1;
}



// FUNCTION 14314e220 Play body=236 status=ok
// SIG undefined Play(void)

undefined8 CAkDynamicSequence::Play(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_res8 [2];
  undefined8 local_res20;
  
  if (((*(uint *)(param_1 + 0x50) & 0xfffffffd) == 0) && (*(int *)(param_1 + 0xb0) == 0)) {
    local_res8[0] = 0;
    *(undefined4 *)(param_1 + 0x50) = 1;
    while( true ) {
      local_res20 = 0;
      iVar2 = _GetNextToPlay(param_1,local_res8,&local_res20);
      piVar1 = *(int **)(param_1 + 0xa8);
      if (*(longlong *)(param_1 + 0x60) != 0) {
        AkExternalSourceArray::Release();
      }
      if (piVar1 != (int *)0x0) {
        *piVar1 = *piVar1 + 1;
      }
      *(int **)(param_1 + 0x60) = piVar1;
      if (iVar2 == 0) break;
      iVar3 = FUN_14314e780(param_1,iVar2,local_res8[0],param_2,param_3);
      if (iVar3 == 1) {
        return 1;
      }
      CAkPlayingMgr::NotifyEndOfDynamicSequenceItem
                (DAT_146b50b00,*(undefined4 *)(param_1 + 0x74),iVar2,local_res20);
    }
    return 1;
  }
  return 1;
}



// FUNCTION 14314e310 Release body=239 status=ok
// SIG undefined Release(void)

undefined4 CAkDynamicSequence::Release(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  long lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar8 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x200));
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  lVar9 = DAT_146b50af8;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  if (*piVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 2);
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x200);
    EnterCriticalSection(lpCriticalSection);
    if (*(uint *)(lVar9 + 0x230) != 0) {
      plVar2 = (longlong *)
               (*(longlong *)(lVar9 + 0x228) +
               ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar9 + 0x230)) * 8);
      lVar10 = *plVar2;
      lVar6 = 0;
      while (lVar5 = lVar10, lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x10) == uVar4) {
          if (lVar6 == 0) {
            *plVar2 = *(longlong *)(lVar5 + 8);
          }
          else {
            *(longlong *)(lVar6 + 8) = *(longlong *)(lVar5 + 8);
          }
          *(int *)(lVar9 + 0x238) = *(int *)(lVar9 + 0x238) + -1;
          break;
        }
        lVar6 = lVar5;
        lVar10 = *(longlong *)(lVar5 + 8);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    lVar7 = g_DefaultPoolId;
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar7,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x200));
  return uVar3;
}



// FUNCTION 14314e400 Resume body=291 status=ok
// SIG undefined Resume(void)

undefined8 CAkDynamicSequence::Resume(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0xb0) != 0) &&
     (iVar1 = *(int *)(param_1 + 0xb0) + -1, *(int *)(param_1 + 0xb0) = iVar1, iVar1 == 0)) {
    if (*(int *)(param_1 + 0x50) != 1) {
      Play();
    }
    CAkAudioMgr::ResumePausedPendingItems(DAT_146b50b78,*(undefined4 *)(param_1 + 0x74));
    if (*(int *)(param_1 + 0x80) != 0) {
      plVar2 = (longlong *)
               CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*(int *)(param_1 + 0x80),0);
      if (plVar2 != (longlong *)0x0) {
        CAkParameterNodeBase::Resume
                  (plVar2,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x74),param_2,
                   param_3);
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      plVar2 = (longlong *)
               CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*(int *)(param_1 + 0x98),0);
      if (plVar2 != (longlong *)0x0) {
        CAkParameterNodeBase::Resume
                  (plVar2,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x74),param_2,
                   param_3);
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(DAT_146b50b78 + 0x78) - *(int *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xb4) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  return 1;
}



// FUNCTION 14314e530 FUN_14314e530 body=24 status=ok
// SIG undefined FUN_14314e530(void)

void FUN_14314e530(longlong param_1)

{
  if ((*(int *)(param_1 + 0x50) == 2) && (*(int *)(param_1 + 0x20) != 0)) {
    CAkDynamicSequence::Play(param_1,0,4);
    return;
  }
  return;
}



// FUNCTION 14314e550 FUN_14314e550 body=13 status=ok
// SIG undefined FUN_14314e550(void)

void FUN_14314e550(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x58) = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  }
  return;
}



// FUNCTION 14314e560 FUN_14314e560 body=23 status=ok
// SIG undefined FUN_14314e560(void)

void FUN_14314e560(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xbc) = 0;
  CAkDynamicSequence::_Stop(param_1,0,param_2,param_3);
  return;
}



// FUNCTION 14314e580 UnlockPlaylist body=103 status=ok
// SIG undefined UnlockPlaylist(void)

void CAkDynamicSequence::UnlockPlaylist(longlong *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
  lVar2 = param_1[10];
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if ((int)lVar2 == 2) {
    uVar1 = CCallbackImpl<24>::GetCallbackSizeBytes();
    lVar2 = FUN_1431400f0(DAT_146b50b78,0x19,uVar1);
    (**(code **)(*param_1 + 8))(param_1);
    *(longlong **)(lVar2 + 4) = param_1;
    *(undefined4 *)(lVar2 + 0xc) = 6;
    LOCK();
    *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14314e5f0 _GetNextToPlay body=398 status=ok
// SIG undefined _GetNextToPlay(void)

int CAkDynamicSequence::_GetNextToPlay(longlong param_1,int *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar4 = *(int *)(param_1 + 0x20);
    while (iVar4 != 0) {
      piVar2 = *(int **)(param_1 + 0x18);
      *param_3 = *(undefined8 *)(piVar2 + 2);
      if (*piVar2 != 0) {
        AK::SoundEngine::DynamicSequence::PlaylistItem::operator=(param_1 + 0x98,piVar2);
        *param_2 = piVar2[1];
        AkArray<AK::SoundEngine::DynamicSequence::PlaylistItem,AK::SoundEngine::DynamicSequence::PlaylistItem_const_&,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<AK::SoundEngine::DynamicSequence::PlaylistItem>_>
        ::Erase(param_1 + 0x18,0);
        break;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x18);
      puVar1 = puVar3 + ((ulonglong)*(uint *)(param_1 + 0x20) - 1) * 6;
      if (puVar3 < puVar1) {
        puVar5 = (undefined8 *)(puVar3 + 8);
        do {
          if (puVar5[-2] != 0) {
            AkExternalSourceArray::Release();
          }
          *puVar3 = *(undefined4 *)(puVar5 + -1);
          *(undefined4 *)((longlong)puVar5 + -0x1c) = *(undefined4 *)((longlong)puVar5 + -4);
          puVar5[-3] = *puVar5;
          piVar2 = (int *)puVar5[1];
          puVar5[-2] = piVar2;
          if (piVar2 != (int *)0x0) {
            *piVar2 = *piVar2 + 1;
          }
          puVar3 = puVar3 + 6;
          puVar5 = puVar5 + 3;
        } while (puVar3 < puVar1);
      }
      if (*(longlong *)(puVar1 + 4) != 0) {
        AkExternalSourceArray::Release();
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      CAkPlayingMgr::NotifyEndOfDynamicSequenceItem
                (DAT_146b50b00,*(undefined4 *)(param_1 + 0x74),0,*param_3);
      iVar4 = *(int *)(param_1 + 0x20);
    }
    iVar4 = *(int *)(param_1 + 0x98);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x50) = 2;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return iVar4;
}



// FUNCTION 14314e780 FUN_14314e780 body=674 status=ok
// SIG undefined FUN_14314e780(void)

int FUN_14314e780(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  byte bVar8;
  bool bVar9;
  byte local_res8 [8];
  undefined4 local_208;
  undefined4 local_204;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  longlong lStack_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1b8 [2];
  longlong local_1b0;
  undefined8 local_1a8;
  undefined4 *local_1a0;
  int *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 *local_130;
  undefined4 local_128;
  undefined4 local_124;
  char local_120 [3];
  char local_11d;
  undefined1 local_110 [224];
  byte local_30;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return 2;
  }
  plVar6 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,param_2,0);
  if (plVar6 == (longlong *)0x0) {
    return 0xf;
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1c8 = 0;
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_200 = 0;
  local_204 = param_5;
  local_208 = param_4;
  lVar7 = CAkContinuationList::Create();
  bVar9 = lStack_1e0 != 0;
  lStack_1e0 = lVar7;
  if (bVar9) {
    CAkContinuationList::Release();
  }
  if (lStack_1e0 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    CAkModCtxRefContainer::~CAkModCtxRefContainer(&local_1d0);
    if (lStack_1e0 == 0) {
      return 2;
    }
    CAkContinuationList::Release();
    return 2;
  }
  FUN_14313bbf0(local_1b8);
  local_184 = *(undefined4 *)(param_1 + 0x74);
  piVar1 = *(int **)(param_1 + 0x60);
  local_190 = *(undefined8 *)(param_1 + 0x68);
  local_188 = *(undefined4 *)(param_1 + 0x70);
  local_1b8[0] = 2;
  local_1b0 = param_1;
  if (local_198 != (int *)0x0) {
    AkExternalSourceArray::Release();
  }
  uVar3 = local_184;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_138 = 0;
  local_134 = (undefined4)((longlong)((ulonglong)DAT_1467bdcac * (longlong)param_3) / 1000);
  local_124 = (undefined4)param_2;
  local_1a8 = *(undefined8 *)(param_1 + 0x58);
  local_1a0 = &local_208;
  bVar8 = local_30 | 2;
  local_130 = &local_1f8;
  if (*(int *)(param_1 + 0x7c) == 0) {
    iVar5 = *(int *)(param_1 + 0xbc);
    while (iVar2 = DAT_1467be240, DAT_1467be240 = iVar2, iVar5 == 0) {
      DAT_1467be240 = iVar2 + 1;
      *(int *)(param_1 + 0xbc) = iVar2;
      iVar5 = iVar2;
    }
  }
  local_128 = *(undefined4 *)(param_1 + 0xbc);
  local_198 = piVar1;
  if ((local_120[0] == -0x70) && (local_11d != '\0')) {
    local_res8[0] = local_30 & 1;
    local_30 = bVar8;
    uVar4 = AkPBIParams::GetMidiTargetID(local_1b8);
    iVar5 = CAkParameterNode::FilterAndTransformMidiEvent
                      (plVar6,local_120,uVar4,local_res8,local_1a8,uVar3);
    if (iVar5 != 1) goto LAB_14314e9d6;
    bVar8 = local_30 ^ (local_res8[0] ^ local_30) & 1;
  }
  local_30 = bVar8;
  iVar5 = FUN_1431a35f0(plVar6,local_1b8);
  if (iVar5 == 3) {
    iVar5 = 1;
  }
  else if (iVar5 == 1) {
    iVar5 = (**(code **)(*plVar6 + 0x238))(plVar6,local_1b8);
  }
LAB_14314e9d6:
  (**(code **)(*plVar6 + 0x10))(plVar6);
  AkInitialSoundParams::DoTerm(local_110);
  if (local_198 != (int *)0x0) {
    AkExternalSourceArray::Release();
  }
  CAkModCtxRefContainer::~CAkModCtxRefContainer(&local_1d0);
  if (lStack_1e0 != 0) {
    CAkContinuationList::Release();
  }
  return iVar5;
}



// FUNCTION 14314ea30 _Stop body=282 status=ok
// SIG undefined _Stop(void)

undefined8
CAkDynamicSequence::_Stop(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN_14313c390(DAT_146b50b78,*(undefined4 *)(param_1 + 0x74));
  if ((*(int *)(param_1 + 0x98) != 0) && (param_2 == 0)) {
    plVar1 = (longlong *)
             CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*(int *)(param_1 + 0x98),0);
    if (plVar1 != (longlong *)0x0) {
      CAkParameterNodeBase::Stop
                (plVar1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x74),param_3,
                 param_4);
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    plVar1 = (longlong *)
             CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*(int *)(param_1 + 0x80),0);
    if (plVar1 != (longlong *)0x0) {
      if (param_2 == 0) {
        CAkParameterNodeBase::Stop
                  (plVar1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x74),param_3,
                   param_4);
      }
      else {
        (**(code **)(*plVar1 + 0xb0))
                  (plVar1,*(undefined8 *)(param_1 + 0x58),plVar1,*(undefined4 *)(param_1 + 0x74));
      }
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  return 1;
}



// FUNCTION 14314eb50 AkDecisionTree body=25 status=ok
// SIG undefined AkDecisionTree(void)

undefined4 * AkDecisionTree::AkDecisionTree(undefined4 *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = 100;
  return param_1;
}



// FUNCTION 14314eb70 ~AkDecisionTree body=21 status=ok
// SIG undefined ~AkDecisionTree(void)

void AkDecisionTree::~AkDecisionTree(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 14314eb90 FUN_14314eb90 body=238 status=ok
// SIG undefined FUN_14314eb90(void)

void FUN_14314eb90(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  ulonglong uVar8;
  
  uVar4 = *(uint *)(param_3 + 1);
  if (*(uint *)((longlong)param_3 + 0xc) <= uVar4) {
    uVar1 = *(uint *)((longlong)param_3 + 0xc) + 4;
    pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    if (pvVar6 == (void *)0x0) {
      return;
    }
    pvVar7 = (void *)*param_3;
    if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar6)) {
      uVar5 = *(uint *)(param_3 + 1);
      uVar8 = 0;
      if ((ulonglong)uVar5 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar6 + uVar8 * 8) = *(undefined8 *)(*param_3 + uVar8 * 8);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
        pvVar7 = (void *)*param_3;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
    }
    *param_3 = (longlong)pvVar6;
    *(uint *)((longlong)param_3 + 0xc) = uVar1;
    if (uVar1 <= uVar4) {
      return;
    }
  }
  uVar4 = *(uint *)(param_3 + 1);
  *(uint *)(param_3 + 1) = uVar4 + 1;
  plVar2 = (longlong *)(*param_3 + (ulonglong)uVar4 * 8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_2;
    uVar3 = *(ushort *)(param_2 + 8);
    if (uVar3 == 100) {
      *(int *)(param_3 + 2) = (int)param_3[2] + 1;
    }
    else if (uVar3 == 0) {
      *(int *)((longlong)param_3 + 0x14) = *(int *)((longlong)param_3 + 0x14) + 1;
    }
    *(uint *)(param_3 + 3) = (int)param_3[3] + (uint)uVar3;
  }
  return;
}



// FUNCTION 14314ec80 GetAudioNodeForState body=51 status=ok
// SIG undefined GetAudioNodeForState(void)

undefined4 AkDecisionTree::GetAudioNodeForState(int *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*param_1 == 1) {
    lVar1 = *(longlong *)(param_1 + 2);
    uVar3 = 0;
    if (*(ushort *)(lVar1 + 6) != 0) {
      do {
        if (param_2 == *(int *)(lVar1 + uVar3 * 0xc)) {
          return *(undefined4 *)(lVar1 + 4 + uVar3 * 0xc);
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(ushort *)(lVar1 + 6));
    }
  }
  return 0;
}



// FUNCTION 14314ecc0 FUN_14314ecc0 body=389 status=ok
// SIG undefined FUN_14314ecc0(void)

undefined8 FUN_14314ecc0(int *param_1,longlong *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  void *pvVar8;
  void *pvVar9;
  int *piVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong local_res18;
  
  if (*param_1 != 1) {
    return 0;
  }
  lVar12 = 0;
  if (*(ushort *)(*(longlong *)(param_1 + 2) + 6) != 0) {
    local_res18 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 2) + 6);
    do {
      piVar7 = (int *)*param_2;
      uVar3 = *(uint *)(param_2 + 1);
      lVar6 = *(longlong *)(param_1 + 2);
      piVar2 = piVar7 + (ulonglong)uVar3 * 2;
      iVar4 = *(int *)(lVar6 + lVar12);
      for (; (piVar7 != piVar2 && (*piVar7 != iVar4)); piVar7 = piVar7 + 2) {
      }
      piVar10 = piVar7 + 1;
      if (piVar7 == piVar2) {
        piVar10 = (int *)0x0;
      }
      if (piVar10 == (int *)0x0) {
        if (uVar3 < *(uint *)((longlong)param_2 + 0xc)) {
LAB_14314ede0:
          uVar3 = *(uint *)(param_2 + 1);
          *(uint *)(param_2 + 1) = uVar3 + 1;
          piVar2 = (int *)(*param_2 + (ulonglong)uVar3 * 8);
          if (piVar2 != (int *)0x0) {
            *piVar2 = iVar4;
            piVar2[1] = *(int *)(lVar6 + 4 + lVar12);
          }
        }
        else {
          uVar1 = *(uint *)((longlong)param_2 + 0xc) + 1;
          pvVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
          if (pvVar8 != (void *)0x0) {
            pvVar9 = (void *)*param_2;
            if ((pvVar9 != (void *)0x0) && (pvVar9 != pvVar8)) {
              uVar5 = *(uint *)(param_2 + 1);
              uVar11 = 0;
              if ((ulonglong)uVar5 != 0) {
                do {
                  *(undefined8 *)((longlong)pvVar8 + uVar11 * 8) =
                       *(undefined8 *)(*param_2 + uVar11 * 8);
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar5);
                pvVar9 = (void *)*param_2;
              }
              AK::MemoryMgr::Free(g_DefaultPoolId,pvVar9);
            }
            *param_2 = (longlong)pvVar8;
            *(uint *)((longlong)param_2 + 0xc) = uVar1;
            if (uVar3 < uVar1) goto LAB_14314ede0;
          }
        }
      }
      else {
        *piVar10 = *(int *)(lVar6 + 4 + lVar12);
      }
      lVar12 = lVar12 + 0xc;
      local_res18 = local_res18 - 1;
    } while (local_res18 != 0);
  }
  return 1;
}



// FUNCTION 14314ee50 ResolvePath body=284 status=ok
// SIG undefined ResolvePath(void)

/* WARNING: Removing unreachable block (ram,0x00014314ef62) */

undefined4
AkDecisionTree::ResolvePath
          (int *param_1,undefined4 param_2,undefined8 param_3,ulonglong param_4,undefined4 param_5,
          undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  if ((int)param_4 != *param_1) {
    return 0;
  }
  if ((int)param_4 == 0) {
    lVar3 = *(longlong *)(param_1 + 2);
  }
  else if (*(char *)((longlong)param_1 + 0x12) == '\0') {
    lVar3 = _ResolvePath(param_1,*(undefined8 *)(param_1 + 2),param_3,param_4,param_2,param_6,
                         param_7);
  }
  else {
    lVar3 = ResolvePathWeighted(param_1,param_3,param_4 & 0xffffffff,param_2,param_5,local_18,
                                param_6,param_7);
  }
  if (lVar3 != 0) {
    if ((*(ushort *)(param_1 + 4) < 100) || (bVar1 = false, *(ushort *)(lVar3 + 10) < 100)) {
      DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
      bVar1 = false;
      if ((ushort)(*(short *)(lVar3 + 10) * (short)param_1[4]) <=
          (ushort)(int)((double)(uint)((ulonglong)DAT_146b50b60 >> 0x21) * 4.656612875245797e-06)) {
        bVar1 = true;
      }
    }
    uVar2 = *(undefined4 *)(lVar3 + 4);
    if (bVar1) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 14314ef70 ResolvePathWeighted body=450 status=ok
// SIG undefined ResolvePathWeighted(void)

longlong AkDecisionTree::ResolvePathWeighted
                   (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined8 param_5,undefined1 *param_6,undefined8 param_7,undefined8 param_8)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *local_28;
  ulonglong local_20;
  undefined8 local_18;
  uint local_10;
  
  lVar4 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  _ResolvePathWeighted
            (param_1,*(undefined8 *)(param_1 + 8),param_2,param_3,&local_28,param_4,param_7,param_8)
  ;
  uVar5 = local_20 & 0xffffffff;
  if ((uint)local_20 == 0) {
    *param_6 = 4;
  }
  else {
    DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
    uVar1 = DAT_146b50b60 >> 0x21;
    if ((int)local_18 == 0) {
      if (local_18._4_4_ < (uint)local_20) {
        uVar1 = uVar1 % (ulonglong)local_10;
        for (plVar2 = local_28; plVar2 != local_28 + uVar5; plVar2 = plVar2 + 1) {
          if ((uint)uVar1 < (uint)*(ushort *)(*plVar2 + 8)) {
            *(uint *)(param_6 + 8) = (uint)local_20;
            *(uint *)(param_6 + 4) = (uint)local_20 - local_18._4_4_;
            *param_6 = 2;
            lVar4 = *plVar2;
            break;
          }
          uVar1 = (ulonglong)((uint)uVar1 - (uint)*(ushort *)(*plVar2 + 8));
        }
      }
      else {
        uVar1 = uVar1 % (ulonglong)local_18._4_4_;
        for (plVar2 = local_28; plVar2 != local_28 + uVar5; plVar2 = plVar2 + 1) {
          if ((*(short *)(*plVar2 + 8) == 0) &&
             (iVar3 = (int)uVar1, uVar1 = (ulonglong)(iVar3 - 1), iVar3 == 0)) {
            *param_6 = 3;
            *(uint *)(param_6 + 4) = local_18._4_4_;
            *(uint *)(param_6 + 8) = (uint)local_20;
            lVar4 = *plVar2;
            break;
          }
        }
      }
    }
    else {
      uVar1 = uVar1 % (local_18 & 0xffffffff);
      for (plVar2 = local_28; plVar2 != local_28 + uVar5; plVar2 = plVar2 + 1) {
        if ((*(short *)(*plVar2 + 8) == 100) &&
           (iVar3 = (int)uVar1, uVar1 = (ulonglong)(iVar3 - 1), iVar3 == 0)) {
          *(int *)(param_6 + 4) = (int)local_18;
          *(uint *)(param_6 + 8) = (uint)local_20;
          *param_6 = 1;
          lVar4 = *plVar2;
          break;
        }
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    local_20 = local_20 & 0xffffffff00000000;
    AK::MemoryMgr::Free(g_DefaultPoolId,local_28);
  }
  return lVar4;
}



// FUNCTION 14314f140 SetTree body=136 status=ok
// SIG undefined SetTree(void)

undefined8
AkDecisionTree::SetTree(undefined4 *param_1,void *param_2,uint param_3,undefined4 param_4)

{
  void *_Dst;
  
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
  }
  if (param_3 != 0) {
    _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)param_3);
    *(void **)(param_1 + 2) = _Dst;
    if (_Dst == (void *)0x0) {
      return 0x34;
    }
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_2,(ulonglong)param_3);
  }
  *param_1 = param_4;
  return 1;
}



// FUNCTION 14314f1d0 _ResolvePath body=403 status=ok
// SIG undefined _ResolvePath(void)

int * AkDecisionTree::_ResolvePath
                (longlong param_1,longlong param_2,uint *param_3,int param_4,undefined4 param_5,
                code *param_6,undefined8 param_7)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    piVar4 = (int *)(*(longlong *)(param_1 + 8) + (ulonglong)*(ushort *)(param_2 + 4) * 0xc);
    iVar6 = 0;
    iVar5 = *(ushort *)(param_2 + 6) - 1;
    do {
      iVar1 = iVar6 + (iVar5 - iVar6) / 2;
      piVar3 = piVar4 + (longlong)iVar1 * 3;
      if (*param_3 < (uint)piVar4[(longlong)iVar1 * 3]) {
        iVar5 = iVar1 + -1;
      }
      else {
        if (*param_3 <= (uint)piVar4[(longlong)iVar1 * 3]) {
          if (piVar3 != (int *)0x0) {
            if (param_4 == 1) {
              if (param_6 == (code *)0x0) {
                return piVar3;
              }
              cVar2 = (*param_6)(param_5,piVar3[1],param_7);
              piVar4 = piVar3;
              goto joined_r0x00014314f2d3;
            }
            piVar3 = (int *)_ResolvePath(param_1,piVar3,param_3 + 1,param_4 + -1,param_5,param_6,
                                         param_7);
            if (piVar3 != (int *)0x0) {
              return piVar3;
            }
          }
          break;
        }
        iVar6 = iVar1 + 1;
      }
    } while (iVar6 <= iVar5);
    if ((*piVar4 == 0) && (*param_3 != 0)) {
      if (param_4 == 1) {
        if (param_6 == (code *)0x0) {
          return piVar4;
        }
        cVar2 = (*param_6)(param_5,piVar4[1],param_7);
joined_r0x00014314f2d3:
        if (cVar2 != '\0') {
          return piVar4;
        }
      }
      else {
        piVar4 = (int *)_ResolvePath(param_1,piVar4,param_3 + 1,param_4 + -1,param_5,param_6,param_7
                                    );
        if (piVar4 != (int *)0x0) {
          return piVar4;
        }
      }
    }
  }
  return (int *)0x0;
}



// FUNCTION 14314f370 _ResolvePathWeighted body=374 status=ok
// SIG undefined _ResolvePathWeighted(void)

void AkDecisionTree::_ResolvePathWeighted
               (longlong param_1,int *param_2,uint *param_3,int param_4,undefined8 param_5,
               undefined4 param_6,code *param_7,undefined8 param_8)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(param_1 + 8);
  do {
    if (lVar2 == 0) {
      return;
    }
    iVar5 = 0;
    iVar6 = *(ushort *)((longlong)param_2 + 6) - 1;
    param_2 = (int *)(lVar2 + (ulonglong)*(ushort *)(param_2 + 1) * 0xc);
    do {
      iVar4 = (iVar6 - iVar5) / 2 + iVar5;
      piVar1 = param_2 + (longlong)iVar4 * 3;
      if (*param_3 < (uint)param_2[(longlong)iVar4 * 3]) {
        iVar6 = iVar4 + -1;
      }
      else {
        if (*param_3 <= (uint)param_2[(longlong)iVar4 * 3]) {
          if (piVar1 != (int *)0x0) {
            if (param_4 == 1) {
              if ((param_7 == (code *)0x0) || (cVar3 = (*param_7)(param_6,piVar1[1]), cVar3 != '\0')
                 ) {
                FUN_14314eb90(param_1,piVar1);
              }
            }
            else {
              _ResolvePathWeighted
                        (param_1,piVar1,param_3 + 1,param_4 + -1,param_5,param_6,param_7,param_8);
            }
          }
          break;
        }
        iVar5 = iVar4 + 1;
      }
    } while (iVar5 <= iVar6);
    if (*param_2 != 0) {
      return;
    }
    if (*param_3 == 0) {
      return;
    }
    if (param_4 == 1) {
      if ((param_7 != (code *)0x0) &&
         (cVar3 = (*param_7)(param_6,param_2[1],param_8), cVar3 == '\0')) {
        return;
      }
      FUN_14314eb90(param_1,param_2,param_5);
      return;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    param_4 = param_4 + -1;
    param_3 = param_3 + 1;
  } while( true );
}



// FUNCTION 14314f4f0 `scalar_deleting_destructor' body=131 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkDialogueEvent::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac7a50;
  if ((void *)param_1[7] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[7]);
  }
  param_1[7] = 0;
  if ((void *)param_1[6] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[6]);
  }
  param_1[6] = 0;
  AkDecisionTree::~AkDecisionTree(param_1 + 3);
  CAkIndexable::~CAkIndexable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14314f580 AddRef body=77 status=ok
// SIG undefined AddRef(void)

int CAkDialogueEvent::AddRef(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x240));
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x240));
  return iVar2;
}



// FUNCTION 14314f5d0 Create body=199 status=ok
// SIG undefined Create(void)

undefined8 * CAkDialogueEvent::Create(void)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x40);
  if (puVar4 != (undefined8 *)0x0) {
    CAkIndexable::CAkIndexable(puVar4);
    *puVar4 = &PTR__scalar_deleting_destructor__145ac7a50;
    AkDecisionTree::AkDecisionTree(puVar4 + 3);
    puVar4[6] = 0;
    puVar4[7] = 0;
    lVar2 = DAT_146b50af8;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x240);
    EnterCriticalSection(lpCriticalSection);
    cVar3 = FUN_14313b140(lVar2 + 0x268);
    if (cVar3 != '\0') {
      uVar1 = (ulonglong)*(uint *)(puVar4 + 2) % (ulonglong)*(uint *)(lVar2 + 0x270);
      puVar4[1] = *(undefined8 *)(*(longlong *)(lVar2 + 0x268) + uVar1 * 8);
      *(undefined8 **)(*(longlong *)(lVar2 + 0x268) + uVar1 * 8) = puVar4;
      *(int *)(lVar2 + 0x278) = *(int *)(lVar2 + 0x278) + 1;
    }
    LeaveCriticalSection(lpCriticalSection);
    return puVar4;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14314f6a0 FindCustomProp body=61 status=ok
// SIG undefined FindCustomProp(void)

byte * CAkDialogueEvent::FindCustomProp(longlong param_1,char param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  
  pbVar1 = *(byte **)(param_1 + 0x30);
  if (pbVar1 != (byte *)0x0) {
    uVar2 = 0;
    do {
      uVar3 = (int)uVar2 + 1;
      if (pbVar1[uVar3] == (byte)(param_2 + 0x48U)) {
        return pbVar1 + uVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
      }
      uVar2 = (ulonglong)uVar3;
    } while (uVar3 < *pbVar1);
  }
  return (byte *)0x0;
}



// FUNCTION 14314f6e0 Release body=239 status=ok
// SIG undefined Release(void)

undefined4 CAkDialogueEvent::Release(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  long lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar8 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x240));
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  lVar9 = DAT_146b50af8;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  if (*piVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 2);
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x240);
    EnterCriticalSection(lpCriticalSection);
    if (*(uint *)(lVar9 + 0x270) != 0) {
      plVar2 = (longlong *)
               (*(longlong *)(lVar9 + 0x268) +
               ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar9 + 0x270)) * 8);
      lVar10 = *plVar2;
      lVar6 = 0;
      while (lVar5 = lVar10, lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x10) == uVar4) {
          if (lVar6 == 0) {
            *plVar2 = *(longlong *)(lVar5 + 8);
          }
          else {
            *(longlong *)(lVar6 + 8) = *(longlong *)(lVar5 + 8);
          }
          *(int *)(lVar9 + 0x278) = *(int *)(lVar9 + 0x278) + -1;
          break;
        }
        lVar6 = lVar5;
        lVar10 = *(longlong *)(lVar5 + 8);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    lVar7 = g_DefaultPoolId;
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar7,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x240));
  return uVar3;
}



// FUNCTION 14314f7d0 ResolveArgumentValueNames body=102 status=ok
// SIG undefined ResolveArgumentValueNames(void)

undefined8
CAkDialogueEvent::ResolveArgumentValueNames
          (longlong param_1,undefined8 *param_2,ulong *param_3,uint param_4)

{
  ulong uVar1;
  ulonglong uVar2;
  
  if (param_4 == *(uint *)(param_1 + 0x18)) {
    if (param_4 != 0) {
      uVar2 = (ulonglong)param_4;
      do {
        uVar1 = 0;
        if (*(char *)*param_2 != '\0') {
          uVar1 = AK::SoundEngine::GetIDFromString((char *)*param_2);
        }
        *param_3 = uVar1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    return 1;
  }
  return 2;
}



// FUNCTION 14314f840 ResolveArgumentValueNames body=103 status=ok
// SIG undefined ResolveArgumentValueNames(void)

undefined8
CAkDialogueEvent::ResolveArgumentValueNames
          (longlong param_1,undefined8 *param_2,ulong *param_3,uint param_4)

{
  ulong uVar1;
  ulonglong uVar2;
  
  if (param_4 == *(uint *)(param_1 + 0x18)) {
    if (param_4 != 0) {
      uVar2 = (ulonglong)param_4;
      do {
        uVar1 = 0;
        if (*(wchar_t *)*param_2 != L'\0') {
          uVar1 = AK::SoundEngine::GetIDFromString((wchar_t *)*param_2);
        }
        *param_3 = uVar1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    return 1;
  }
  return 2;
}



// FUNCTION 14314f8b0 SetInitialValues body=326 status=ok
// SIG undefined SetInitialValues(void)

undefined8 CAkDialogueEvent::SetInitialValues(longlong param_1,longlong param_2)

{
  size_t _Size;
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  
  lVar4 = (ulonglong)(uint)(*(int *)(param_2 + 5) * 5) + param_2 + 5;
  uVar6 = *(uint *)(lVar4 + 4);
  *(ushort *)(param_1 + 0x28) = (ushort)*(byte *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(lVar4 + 8);
  uVar2 = AkDecisionTree::SetTree(param_1 + 0x18,lVar4 + 9,uVar6);
  if ((int)uVar2 != 1) {
    return uVar2;
  }
  pbVar5 = (byte *)(lVar4 + 9 + (ulonglong)uVar6);
  bVar1 = *pbVar5;
  pbVar5 = pbVar5 + 1;
  if (bVar1 == 0) {
LAB_14314f975:
    bVar1 = *pbVar5;
    if (bVar1 != 0) {
      uVar6 = bVar1 + 4 & 0xfffffffc;
      pbVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(uVar6 + (uint)bVar1 * 8));
      if (pbVar3 == (byte *)0x0) goto LAB_14314f9ef;
      *pbVar3 = bVar1;
      ::_guard_xfg_dispatch_icall_nop(pbVar3 + 1,pbVar5 + 1,(ulonglong)bVar1);
      ::_guard_xfg_dispatch_icall_nop(pbVar3 + uVar6,pbVar5 + 1 + bVar1,(ulonglong)bVar1 * 8);
      *(byte **)(param_1 + 0x38) = pbVar3;
    }
    uVar2 = 1;
  }
  else {
    uVar6 = bVar1 + 4 & 0xfffffffc;
    pbVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(uVar6 + (uint)bVar1 * 4));
    if (pbVar3 != (byte *)0x0) {
      *pbVar3 = bVar1;
      ::_guard_xfg_dispatch_icall_nop(pbVar3 + 1,pbVar5,(ulonglong)bVar1);
      _Size = (ulonglong)bVar1 * 4;
      ::_guard_xfg_dispatch_icall_nop(pbVar3 + uVar6,pbVar5 + bVar1,_Size);
      pbVar5 = pbVar5 + bVar1 + _Size;
      *(byte **)(param_1 + 0x30) = pbVar3;
      goto LAB_14314f975;
    }
LAB_14314f9ef:
    uVar2 = 2;
  }
  return uVar2;
}



// FUNCTION 14314fa00 FUN_14314fa00 body=384 status=ok
// SIG undefined FUN_14314fa00(void)

void * FUN_14314fa00(longlong *param_1,undefined8 *param_2,char param_3,int param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  plVar11 = param_1 + 2;
  if (param_4 != 1) {
    plVar11 = param_1;
  }
  pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48);
  if ((pvVar7 == (void *)0x0) ||
     (pvVar7 = (void *)CAkTransition::CAkTransition(pvVar7), pvVar7 == (void *)0x0))
  goto LAB_14314fb4b;
  iVar6 = FUN_1431ae3b0(pvVar7,param_2,*(undefined4 *)(DAT_146b50b78 + 0x78));
  if (iVar6 != 2) {
    uVar3 = *(uint *)(plVar11 + 1);
    if (uVar3 < *(uint *)((longlong)plVar11 + 0xc)) {
LAB_14314fb00:
      uVar3 = *(uint *)(plVar11 + 1);
      *(uint *)(plVar11 + 1) = uVar3 + 1;
      puVar2 = (undefined8 *)(*plVar11 + (ulonglong)uVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = pvVar7;
        if (param_3 != '\0') {
          *(undefined4 *)((longlong)pvVar7 + 0x3c) = 1;
          return pvVar7;
        }
        return pvVar7;
      }
    }
    else {
      uVar1 = *(uint *)((longlong)plVar11 + 0xc) + 0x80;
      pvVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
      if (pvVar8 != (void *)0x0) {
        pvVar9 = (void *)*plVar11;
        if ((pvVar9 != (void *)0x0) && (pvVar9 != pvVar8)) {
          uVar4 = *(uint *)(plVar11 + 1);
          uVar10 = 0;
          if ((ulonglong)uVar4 != 0) {
            do {
              *(undefined8 *)((longlong)pvVar8 + uVar10 * 8) =
                   *(undefined8 *)(*plVar11 + uVar10 * 8);
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar4);
            pvVar9 = (void *)*plVar11;
          }
          AK::MemoryMgr::Free(g_DefaultPoolId,pvVar9);
        }
        *plVar11 = (longlong)pvVar8;
        *(uint *)((longlong)plVar11 + 0xc) = uVar1;
        if (uVar3 < uVar1) goto LAB_14314fb00;
      }
    }
  }
  FUN_14314b6a0(pvVar7);
  lVar5 = g_DefaultPoolId;
  AK::MemoryMgr::StartProfileThreadUsage((long)pvVar7);
  AK::MemoryMgr::Free(lVar5,pvVar7);
LAB_14314fb4b:
  (*(code *)**(undefined8 **)*param_2)
            ((undefined8 *)*param_2,param_2[1],*(undefined4 *)((longlong)param_2 + 0x14),1);
  return (void *)0x0;
}



// FUNCTION 14314fb80 FUN_14314fb80 body=293 status=ok
// SIG undefined FUN_14314fb80(void)

undefined8 FUN_14314fb80(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong *plVar7;
  void *pvVar8;
  longlong *plVar9;
  
  plVar5 = *(longlong **)(param_2 + 0x28);
  uVar3 = *(uint *)(param_2 + 0x30);
  plVar2 = plVar5 + uVar3;
  for (; (plVar5 != plVar2 && (*plVar5 != param_3)); plVar5 = plVar5 + 1) {
  }
  plVar9 = (longlong *)0x0;
  plVar7 = plVar9;
  if (plVar5 != plVar2) {
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    return 2;
  }
  if (*(uint *)(param_2 + 0x34) <= uVar3) {
    uVar1 = *(uint *)(param_2 + 0x34) + 4;
    pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    if (pvVar6 == (void *)0x0) {
      return 2;
    }
    pvVar8 = *(void **)(param_2 + 0x28);
    if ((pvVar8 != (void *)0x0) && (pvVar8 != pvVar6)) {
      uVar4 = *(uint *)(param_2 + 0x30);
      if ((longlong *)(ulonglong)uVar4 != (longlong *)0x0) {
        do {
          *(undefined8 *)((longlong)pvVar6 + (longlong)plVar9 * 8) =
               *(undefined8 *)(*(longlong *)(param_2 + 0x28) + (longlong)plVar9 * 8);
          plVar9 = (longlong *)((longlong)plVar9 + 1);
        } while (plVar9 < (longlong *)(ulonglong)uVar4);
        pvVar8 = *(void **)(param_2 + 0x28);
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar8);
    }
    *(void **)(param_2 + 0x28) = pvVar6;
    *(uint *)(param_2 + 0x34) = uVar1;
    if (uVar1 <= uVar3) {
      return 2;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x30) = uVar3 + 1;
  plVar2 = (longlong *)(*(longlong *)(param_2 + 0x28) + (ulonglong)uVar3 * 8);
  if (plVar2 == (longlong *)0x0) {
    return 2;
  }
  *plVar2 = param_3;
  return 1;
}



// FUNCTION 14314fcb0 ChangeParameter body=736 status=ok
// SIG undefined ChangeParameter(void)

void CAkTransitionManager::ChangeParameter
               (undefined8 param_1,ulonglong *param_2,ulonglong param_3,float param_4,int param_5,
               int param_6,int param_7)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = *param_2;
  *param_2 = param_3;
  CAkTransition::UpdateFilteringCoeff(param_2,param_5);
  fVar7 = *(float *)(param_2 + 2);
  if ((param_2[8] & 1) == 0) {
    *(float *)(param_2 + 1) = fVar7;
    if (param_7 == 2) {
      param_4 = param_4 + *(float *)((longlong)param_2 + 0xc);
      *(float *)((longlong)param_2 + 0xc) = param_4;
      *(float *)((longlong)param_2 + 0x14) = param_4;
    }
    else {
      *(float *)((longlong)param_2 + 0xc) = param_4;
      *(float *)((longlong)param_2 + 0x14) = param_4;
    }
  }
  else {
    fVar6 = 0.0;
    if (-37.0 <= fVar7 * 0.05) {
      uVar4 = (uint)(longlong)(fVar7 * 0.05 * 27866352.0 + 1.0653532e+09);
      fVar7 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
      fVar7 = ((fVar7 * 0.32518977 + 0.020805772) * fVar7 + 0.65304345) *
              (float)(uVar4 & 0xff800000);
    }
    else {
      fVar7 = 0.0;
    }
    fVar5 = param_4 * 0.05;
    *(float *)(param_2 + 1) = fVar7;
    if (param_7 == 2) {
      if (-37.0 <= fVar5) {
        uVar4 = (uint)(longlong)(fVar5 * 27866352.0 + 1.0653532e+09);
        fVar6 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
        fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                (float)(uVar4 & 0xff800000);
      }
      param_4 = fVar6 * *(float *)((longlong)param_2 + 0xc);
      *(float *)((longlong)param_2 + 0xc) = param_4;
      fVar6 = (float)(((uint)param_4 & 0x7fffff) + 0x3f800000);
      fVar5 = fVar6 + 1.0;
      *(float *)((longlong)param_2 + 0x14) =
           (((fVar6 * fVar6 * fVar6 - 1.0) * 1.1581186) / (fVar5 * fVar5 * fVar5)) * 20.0 +
           ((float)((uint)param_4 >> 0x17 & 0xff) - 127.0) * 6.0206;
    }
    else {
      *(float *)((longlong)param_2 + 0x14) = param_4;
      if (-37.0 <= fVar5) {
        uVar4 = (uint)(longlong)(fVar5 * 27866352.0 + 1.0653532e+09);
        fVar6 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
        fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                (float)(uVar4 & 0xff800000);
      }
      *(float *)((longlong)param_2 + 0xc) = fVar6;
      param_4 = fVar6;
    }
  }
  if ((param_4 <= fVar7) && ((param_6 - 3U & 0xfffffffd) != 0)) {
    param_6 = 8 - param_6;
  }
  *(int *)(param_2 + 7) = param_6;
  iVar1 = *(int *)(DAT_146b50b78 + 0x78);
  uVar3 = (param_5 + -1 + DAT_1467bdca8) / DAT_1467bdca8;
  uVar4 = uVar3;
  if (((uVar2 == *param_2) && ((param_3 & 0xf000000) != 0)) &&
     (uVar4 = (*(int *)((longlong)param_2 + 0x1c) + (int)param_2[3]) - iVar1, uVar3 < uVar4)) {
    uVar4 = uVar3;
  }
  *(uint *)((longlong)param_2 + 0x1c) = uVar4;
  *(int *)(param_2 + 3) = iVar1;
  *(int *)((longlong)param_2 + 0x24) = iVar1;
  return;
}



// FUNCTION 14314ff90 IsTerminated body=8 status=ok
// SIG undefined IsTerminated(void)

bool CAkTransitionManager::IsTerminated(undefined8 param_1,longlong param_2)

{
  return *(int *)(param_2 + 0x3c) == 5;
}



// FUNCTION 14314ffa0 Pause body=29 status=ok
// SIG undefined Pause(void)

void CAkTransitionManager::Pause(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x3c) == 1) {
    *(undefined4 *)(param_2 + 0x3c) = 2;
    return;
  }
  if (*(int *)(param_2 + 0x3c) == 4) {
    *(undefined4 *)(param_2 + 0x3c) = 3;
  }
  return;
}



// FUNCTION 14314ffc0 PauseAllStateTransitions body=86 status=ok
// SIG undefined PauseAllStateTransitions(void)

void CAkTransitionManager::PauseAllStateTransitions(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(uint *)(param_1 + 0x18) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x10), plVar2 != plVar2 + *(uint *)(param_1 + 0x18))) {
    do {
      lVar1 = *plVar2;
      if (*(int *)(lVar1 + 0x3c) == 1) {
        *(undefined4 *)(lVar1 + 0x3c) = 2;
      }
      else if (*(int *)(lVar1 + 0x3c) == 4) {
        *(undefined4 *)(lVar1 + 0x3c) = 3;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 8));
  }
  return;
}



// FUNCTION 143150020 ProcessTransitionsList body=352 status=ok
// SIG undefined ProcessTransitionsList(void)

void CAkTransitionManager::ProcessTransitionsList(undefined8 param_1,int param_2,longlong *param_3)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  uVar7 = 0;
  if ((int)param_3[1] != 0) {
    do {
      lVar5 = uVar7 * 8;
      pvVar2 = *(void **)(lVar5 + *param_3);
      iVar1 = *(int *)((longlong)pvVar2 + 0x3c);
      if (iVar1 == 6) {
        FUN_14314b6a0(pvVar2);
        lVar3 = g_DefaultPoolId;
        AK::MemoryMgr::StartProfileThreadUsage((long)pvVar2);
        AK::MemoryMgr::Free(lVar3,pvVar2);
        uVar6 = *(uint *)(param_3 + 1);
        puVar8 = (undefined8 *)(*param_3 + lVar5);
        puVar9 = (undefined8 *)(*param_3 + ((ulonglong)uVar6 - 1) * 8);
        if (puVar8 < puVar9) {
          lVar5 = ((ulonglong)((longlong)puVar9 + (-1 - (longlong)puVar8)) >> 3) + 1;
          puVar9 = puVar8;
          for (; puVar8 = puVar8 + 1, lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar9 = *puVar8;
            puVar9 = puVar9 + 1;
          }
          uVar6 = *(uint *)(param_3 + 1);
        }
        *(uint *)(param_3 + 1) = uVar6 - 1;
      }
      else {
        if (iVar1 == 2) {
          *(int *)((longlong)pvVar2 + 0x24) = param_2;
          *(undefined4 *)((longlong)pvVar2 + 0x3c) = 3;
        }
        else {
          if (iVar1 == 4) {
            *(undefined4 *)((longlong)pvVar2 + 0x3c) = 1;
            *(int *)((longlong)pvVar2 + 0x18) =
                 *(int *)((longlong)pvVar2 + 0x18) + (param_2 - *(int *)((longlong)pvVar2 + 0x24));
          }
          else if (iVar1 != 1) goto LAB_14315015b;
          cVar4 = CAkTransition::ComputeTransition(pvVar2,param_2);
          if (cVar4 != '\0') {
            FUN_14314b6a0(pvVar2);
            uVar6 = *(uint *)(param_3 + 1);
            puVar8 = (undefined8 *)(*param_3 + lVar5);
            puVar9 = (undefined8 *)(*param_3 + ((ulonglong)uVar6 - 1) * 8);
            if (puVar8 < puVar9) {
              lVar5 = ((ulonglong)((longlong)puVar9 + (-1 - (longlong)puVar8)) >> 3) + 1;
              puVar9 = puVar8;
              for (; puVar8 = puVar8 + 1, lVar5 != 0; lVar5 = lVar5 + -1) {
                *puVar9 = *puVar8;
                puVar9 = puVar9 + 1;
              }
              uVar6 = *(uint *)(param_3 + 1);
            }
            *(uint *)(param_3 + 1) = uVar6 - 1;
            lVar3 = g_DefaultPoolId;
            AK::MemoryMgr::StartProfileThreadUsage((long)pvVar2);
            AK::MemoryMgr::Free(lVar3,pvVar2);
            goto LAB_14315015d;
          }
        }
LAB_14315015b:
        uVar7 = (ulonglong)((int)uVar7 + 1);
      }
LAB_14315015d:
    } while ((uint)uVar7 < *(uint *)(param_3 + 1));
  }
  return;
}



// FUNCTION 143150180 ProcessTransitionsList body=47 status=ok
// SIG undefined ProcessTransitionsList(void)

void CAkTransitionManager::ProcessTransitionsList(longlong param_1,ulonglong param_2)

{
  ProcessTransitionsList(param_1,param_2,param_1);
  ProcessTransitionsList(param_1,param_2 & 0xffffffff,param_1 + 0x10);
  return;
}



// FUNCTION 1431501b0 FUN_1431501b0 body=96 status=ok
// SIG undefined FUN_1431501b0(void)

undefined8 FUN_1431501b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  
  plVar2 = *(longlong **)(param_2 + 0x28);
  uVar4 = *(uint *)(param_2 + 0x30);
  plVar1 = plVar2 + uVar4;
  for (; (plVar2 != plVar1 && (*plVar2 != param_3)); plVar2 = plVar2 + 1) {
  }
  if (plVar2 == (longlong *)(*(longlong *)(param_2 + 0x28) + (ulonglong)uVar4 * 8)) {
    uVar3 = 0x1d;
  }
  else {
    if (1 < uVar4) {
      *plVar2 = plVar1[-1];
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    *(uint *)(param_2 + 0x30) = uVar4 - 1;
    uVar3 = 1;
    if (uVar4 - 1 == 0) {
      *(undefined4 *)(param_2 + 0x3c) = 6;
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143150210 Resume body=29 status=ok
// SIG undefined Resume(void)

void CAkTransitionManager::Resume(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x3c) == 3) {
    *(undefined4 *)(param_2 + 0x3c) = 4;
    return;
  }
  if (*(int *)(param_2 + 0x3c) == 2) {
    *(undefined4 *)(param_2 + 0x3c) = 1;
  }
  return;
}



// FUNCTION 143150230 ResumeAllStateTransitions body=86 status=ok
// SIG undefined ResumeAllStateTransitions(void)

void CAkTransitionManager::ResumeAllStateTransitions(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(uint *)(param_1 + 0x18) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x10), plVar2 != plVar2 + *(uint *)(param_1 + 0x18))) {
    do {
      lVar1 = *plVar2;
      if (*(int *)(lVar1 + 0x3c) == 3) {
        *(undefined4 *)(lVar1 + 0x3c) = 4;
      }
      else if (*(int *)(lVar1 + 0x3c) == 2) {
        *(undefined4 *)(lVar1 + 0x3c) = 1;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 8));
  }
  return;
}



// FUNCTION 143150290 Term body=34 status=ok
// SIG undefined Term(void)

void CAkTransitionManager::Term(longlong param_1)

{
  TermList(param_1,param_1);
  TermList(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 1431502c0 TermList body=167 status=ok
// SIG undefined TermList(void)

void CAkTransitionManager::TermList(undefined8 param_1,longlong *param_2)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if ((*(uint *)(param_2 + 1) != 0) &&
     (puVar3 = (undefined8 *)*param_2, puVar3 != puVar3 + *(uint *)(param_2 + 1))) {
    do {
      pvVar1 = (void *)*puVar3;
      CAkTransition::ComputeTransition
                (pvVar1,*(int *)((longlong)pvVar1 + 0x1c) + *(int *)((longlong)pvVar1 + 0x18));
      FUN_14314b6a0(pvVar1);
      lVar2 = g_DefaultPoolId;
      AK::MemoryMgr::StartProfileThreadUsage((long)pvVar1);
      AK::MemoryMgr::Free(lVar2,pvVar1);
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined8 *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8));
  }
  if ((void *)*param_2 != (void *)0x0) {
    *(undefined4 *)(param_2 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_2);
    *param_2 = 0;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 143150370 CAkBusCallbackMgr body=45 status=ok
// SIG undefined CAkBusCallbackMgr(void)

undefined8 * CAkBusCallbackMgr::CAkBusCallbackMgr(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return param_1;
}



// FUNCTION 1431503a0 ~CAkBusCallbackMgr body=94 status=ok
// SIG undefined ~CAkBusCallbackMgr(void)

void CAkBusCallbackMgr::~CAkBusCallbackMgr(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[2]);
    param_1[2] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001431503f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}



// FUNCTION 143150400 DoMeteringCallback body=159 status=ok
// SIG undefined DoMeteringCallback(void)

bool CAkBusCallbackMgr::DoMeteringCallback
               (longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  piVar2 = *(int **)(param_1 + 0x10);
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 0x18) * 6;
  for (; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 6) {
  }
  piVar3 = piVar2 + 2;
  if (piVar2 == piVar1) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)piVar3)(param_3,param_4,piVar3[2]);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return piVar3 != (int *)0x0;
}



// FUNCTION 1431504a0 DoVolumeCallback body=143 status=ok
// SIG undefined DoVolumeCallback(void)

bool CAkBusCallbackMgr::DoVolumeCallback(undefined8 *param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  piVar1 = (int *)*param_1;
  piVar2 = piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar1 != piVar2 && (*piVar1 != param_2)); piVar1 = piVar1 + 4) {
  }
  piVar3 = piVar1 + 2;
  if (piVar1 == piVar2) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)piVar3)(param_3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return piVar3 != (int *)0x0;
}



// FUNCTION 143150530 IsMeteringCallbackEnabled body=114 status=ok
// SIG undefined IsMeteringCallbackEnabled(void)

int * CAkBusCallbackMgr::IsMeteringCallbackEnabled(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  piVar2 = *(int **)(param_1 + 0x10);
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 0x18) * 6;
  for (; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 6) {
  }
  piVar4 = (int *)0x0;
  piVar3 = piVar2 + 2;
  if (piVar2 == piVar1) {
    piVar3 = piVar4;
  }
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)(ulonglong)(uint)piVar3[2];
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return piVar4;
}



// FUNCTION 1431505b0 IsVolumeCallbackEnabled body=118 status=ok
// SIG undefined IsVolumeCallbackEnabled(void)

undefined8 CAkBusCallbackMgr::IsVolumeCallbackEnabled(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  piVar2 = (int *)*param_1;
  piVar3 = piVar2 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar2 != piVar3 && (*piVar2 != param_2)); piVar2 = piVar2 + 4) {
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  piVar1 = piVar2 + 2;
  if (piVar2 == piVar3) {
    piVar1 = (int *)0x0;
  }
  return CONCAT71((int7)((ulonglong)piVar1 >> 8),piVar1 != (int *)0x0);
}



// FUNCTION 143150630 FUN_143150630 body=584 status=ok
// SIG undefined FUN_143150630(void)

undefined4 FUN_143150630(longlong param_1,int param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  int *piVar12;
  int *piVar13;
  longlong *plVar14;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  plVar14 = (longlong *)0x0;
  if ((param_3 == 0) && (param_4 != 0)) {
    piVar13 = *(int **)(param_1 + 0x10);
    uVar10 = *(uint *)(param_1 + 0x18);
    piVar12 = piVar13 + (ulonglong)uVar10 * 6;
    if (piVar13 != piVar12) {
      do {
        if (*piVar13 == param_2) break;
        piVar13 = piVar13 + 6;
      } while (piVar13 != piVar12);
      if (piVar13 != piVar12) {
        if (piVar13 < piVar12 + -6) {
          uVar7 = ((ulonglong)((longlong)(piVar12 + -6) + (-1 - (longlong)piVar13)) / 0x18 + 1) * 3
                  & 0x1fffffffffffffff;
          piVar12 = piVar13 + 6;
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined8 *)piVar13 = *(undefined8 *)piVar12;
            piVar12 = piVar12 + 2;
            piVar13 = piVar13 + 2;
          }
          uVar10 = *(uint *)(param_1 + 0x18);
        }
        *(uint *)(param_1 + 0x18) = uVar10 - 1;
      }
    }
    goto LAB_143150848;
  }
  piVar13 = *(int **)(param_1 + 0x10);
  uVar10 = *(uint *)(param_1 + 0x18);
  piVar12 = piVar13 + (ulonglong)uVar10 * 6;
  for (piVar8 = piVar13; (piVar8 != piVar12 && (*piVar8 != param_2)); piVar8 = piVar8 + 6) {
  }
  plVar9 = (longlong *)(piVar8 + 2);
  if (piVar8 == piVar12) {
    plVar9 = plVar14;
  }
  if (plVar9 == (longlong *)0x0) {
    for (; (piVar13 != piVar12 && (*piVar13 != param_2)); piVar13 = piVar13 + 6) {
    }
    plVar9 = (longlong *)(piVar13 + 2);
    if (piVar13 == piVar12) {
      plVar9 = plVar14;
    }
    if (plVar9 == (longlong *)0x0) {
      if (uVar10 < *(uint *)(param_1 + 0x1c)) {
LAB_1431507e8:
        uVar10 = *(uint *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar10 + 1;
        plVar11 = (longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar10 * 0x18);
LAB_143150802:
        plVar9 = plVar14;
        if (plVar11 != (longlong *)0x0) {
          *(int *)plVar11 = param_2;
          plVar9 = plVar11 + 1;
        }
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x1c) + 1;
        pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x18);
        if (pvVar5 != (void *)0x0) {
          pvVar6 = *(void **)(param_1 + 0x10);
          if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar5)) {
            uVar7 = (ulonglong)*(uint *)(param_1 + 0x18);
            plVar9 = plVar14;
            if (uVar7 != 0) {
              do {
                lVar3 = *(longlong *)(param_1 + 0x10);
                puVar2 = (undefined8 *)((longlong)plVar9 + lVar3);
                uVar4 = puVar2[1];
                *(undefined8 *)((longlong)plVar9 + (longlong)pvVar5) = *puVar2;
                ((undefined8 *)((longlong)plVar9 + (longlong)pvVar5))[1] = uVar4;
                *(undefined8 *)((longlong)(plVar9 + 2) + (longlong)pvVar5) =
                     *(undefined8 *)((longlong)plVar9 + lVar3 + 0x10);
                uVar7 = uVar7 - 1;
                plVar9 = plVar9 + 3;
              } while (uVar7 != 0);
              pvVar6 = *(void **)(param_1 + 0x10);
            }
            AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
          }
          *(void **)(param_1 + 0x10) = pvVar5;
          *(uint *)(param_1 + 0x1c) = uVar1;
          plVar11 = plVar14;
          if (uVar10 < uVar1) goto LAB_1431507e8;
          goto LAB_143150802;
        }
      }
      if (plVar9 == (longlong *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
        return 0x34;
      }
    }
  }
  *plVar9 = param_3;
  *(uint *)(plVar9 + 1) = param_4;
LAB_143150848:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (param_3 != 0) {
    plVar14 = (longlong *)(ulonglong)param_4;
  }
  FUN_143125690(param_2,plVar14);
  return 1;
}



// FUNCTION 143150880 FUN_143150880 body=485 status=ok
// SIG undefined FUN_143150880(void)

undefined4 FUN_143150880(longlong *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  longlong lVar6;
  void *pvVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int *piVar10;
  uint uVar11;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  uVar11 = *(uint *)(param_1 + 1);
  piVar5 = (int *)*param_1;
  piVar3 = piVar5 + (ulonglong)uVar11 * 4;
  piVar10 = piVar5;
  if (param_3 == 0) {
    if (piVar5 != piVar3) {
      do {
        if (*piVar5 == param_2) break;
        piVar5 = piVar5 + 4;
      } while (piVar5 != piVar3);
      if (piVar5 != piVar3) {
        if (piVar5 < piVar3 + -4) {
          uVar8 = ((ulonglong)((longlong)(piVar3 + -4) + (-1 - (longlong)piVar5)) >> 3 &
                  0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
          piVar10 = piVar5 + 4;
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined8 *)piVar5 = *(undefined8 *)piVar10;
            piVar10 = piVar10 + 2;
            piVar5 = piVar5 + 2;
          }
          uVar11 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar11 - 1;
      }
    }
    goto LAB_143150a32;
  }
  for (; (piVar10 != piVar3 && (*piVar10 != param_2)); piVar10 = piVar10 + 4) {
  }
  plVar9 = (longlong *)(piVar10 + 2);
  if (piVar10 == piVar3) {
    plVar9 = (longlong *)0x0;
  }
  if (plVar9 == (longlong *)0x0) {
    for (; (piVar5 != piVar3 && (*piVar5 != param_2)); piVar5 = piVar5 + 4) {
    }
    plVar9 = (longlong *)(piVar5 + 2);
    if (piVar5 == piVar3) {
      plVar9 = (longlong *)0x0;
    }
    if (plVar9 == (longlong *)0x0) {
      if (uVar11 < *(uint *)((longlong)param_1 + 0xc)) {
LAB_143150996:
        uVar11 = *(uint *)(param_1 + 1);
        *(uint *)(param_1 + 1) = uVar11 + 1;
        piVar5 = (int *)((ulonglong)uVar11 * 0x10 + *param_1);
LAB_1431509af:
        plVar9 = (longlong *)0x0;
        if (piVar5 != (int *)0x0) {
          *piVar5 = param_2;
          plVar9 = (longlong *)(piVar5 + 2);
        }
      }
      else {
        uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
        pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 4);
        if (pvVar4 != (void *)0x0) {
          pvVar7 = (void *)*param_1;
          if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar4)) {
            uVar8 = (ulonglong)*(uint *)(param_1 + 1);
            if (uVar8 != 0) {
              lVar6 = 0;
              do {
                uVar2 = ((undefined8 *)(lVar6 + *param_1))[1];
                *(undefined8 *)(lVar6 + (longlong)pvVar4) = *(undefined8 *)(lVar6 + *param_1);
                ((undefined8 *)(lVar6 + (longlong)pvVar4))[1] = uVar2;
                uVar8 = uVar8 - 1;
                lVar6 = lVar6 + 0x10;
              } while (uVar8 != 0);
              pvVar7 = (void *)*param_1;
            }
            AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
          }
          piVar5 = (int *)0x0;
          *param_1 = (longlong)pvVar4;
          *(uint *)((longlong)param_1 + 0xc) = uVar1;
          if (uVar11 < uVar1) goto LAB_143150996;
          goto LAB_1431509af;
        }
      }
      if (plVar9 == (longlong *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
        return 0x34;
      }
    }
  }
  *plVar9 = param_3;
LAB_143150a32:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  FUN_143125730(param_2,param_3 != 0);
  return 1;
}



// FUNCTION 143150a70 AddItemActiveCount body=114 status=ok
// SIG undefined AddItemActiveCount(void)

void CAkPlayingMgr::AddItemActiveCount(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    if (*(uint *)(param_1 + 1) != 0) {
      for (lVar1 = *(longlong *)
                    (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
          lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
        if (*(uint *)(lVar1 + 0x4c) == param_2) {
          if (lVar1 != 0) {
            *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + 1;
          }
          break;
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return;
}



// FUNCTION 143150af0 FUN_143150af0 body=316 status=ok
// SIG undefined FUN_143150af0(void)

undefined8
FUN_143150af0(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,uint param_5
             ,undefined4 param_6)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  void *_Dst;
  uint uVar4;
  undefined8 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x70);
  if (_Dst == (void *)0x0) {
    uVar5 = 2;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x70);
    FUN_1424b51c0(_Dst);
    uVar5 = 1;
    *(undefined8 *)((longlong)_Dst + 0x48) = 0;
    *(undefined8 *)((longlong)_Dst + 0x40) = 0;
    *(undefined8 *)((longlong)_Dst + 0x38) = 0;
    *(undefined4 *)((longlong)_Dst + 0x20) = 0;
    *(undefined4 *)((longlong)_Dst + 0x28) = param_6;
    *(undefined4 *)((longlong)_Dst + 0x24) = 1;
    *(undefined8 *)((longlong)_Dst + 0x30) = *param_2;
    *(undefined4 *)((longlong)_Dst + 0x4c) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)((longlong)_Dst + 0x40) = param_2[3];
    *(undefined4 *)((longlong)_Dst + 0x48) = *(undefined4 *)(param_2 + 4);
    piVar1 = (int *)param_2[2];
    if (*(longlong *)((longlong)_Dst + 0x38) != 0) {
      AkExternalSourceArray::Release();
    }
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + 1;
    }
    *(int **)((longlong)_Dst + 0x38) = piVar1;
    *(longlong *)((longlong)_Dst + 0x50) = param_3;
    *(undefined8 *)((longlong)_Dst + 0x58) = param_4;
    uVar4 = param_5 & 0xf0f02004;
    if (param_3 != 0) {
      uVar4 = param_5;
    }
    *(uint *)((longlong)_Dst + 0x60) = uVar4;
    cVar3 = FUN_143151160(param_1);
    if (cVar3 != '\0') {
      uVar2 = (ulonglong)*(uint *)((longlong)_Dst + 0x4c) % (ulonglong)*(uint *)(param_1 + 1);
      *(undefined8 *)((longlong)_Dst + 0x68) = *(undefined8 *)(*param_1 + uVar2 * 8);
      *(void **)(*param_1 + uVar2 * 8) = _Dst;
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return uVar5;
}



// FUNCTION 143150c30 AddedNewModulatorCtx body=138 status=ok
// SIG undefined AddedNewModulatorCtx(void)

bool CAkPlayingMgr::AddedNewModulatorCtx(longlong *param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  
  bVar2 = false;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if (lVar1 != 0) {
          lVar1 = FUN_1431524a0(lVar1,param_3,local_res8);
          bVar2 = lVar1 != 0;
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return bVar2;
}



// FUNCTION 143150cc0 AddedNewRtpcValue body=142 status=ok
// SIG undefined AddedNewRtpcValue(void)

bool CAkPlayingMgr::AddedNewRtpcValue(longlong *param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  
  bVar2 = false;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if (lVar1 != 0) {
          lVar1 = FUN_1431524a0(lVar1 + 0x10,param_3,local_res8);
          bVar2 = lVar1 != 0;
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return bVar2;
}



// FUNCTION 143150d50 FUN_143150d50 body=148 status=ok
// SIG undefined FUN_143150d50(void)

void FUN_143150d50(longlong *param_1,uint param_2)

{
  longlong lVar1;
  DWORD DVar2;
  DWORD DVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if (lVar1 != 0) {
          *(uint *)(lVar1 + 0x60) = *(uint *)(lVar1 + 0x60) & 0xf0f00000;
          *(undefined8 *)(lVar1 + 0x50) = 0;
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  DVar2 = DAT_146b50e80;
  DVar3 = GetCurrentThreadId();
  if (DVar2 != DVar3) {
    WaitForSingleObject((HANDLE)param_1[8],0xffffffff);
  }
  return;
}



// FUNCTION 143150df0 FUN_143150df0 body=204 status=ok
// SIG undefined FUN_143150df0(void)

void FUN_143150df0(longlong *param_1,longlong param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    uVar5 = 0;
    lVar3 = *(longlong *)*param_1;
    while (lVar3 == 0) {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if (*(uint *)(param_1 + 1) <= uVar4) goto joined_r0x000143150e46;
      lVar3 = ((longlong *)*param_1)[uVar5];
    }
    do {
      while( true ) {
        if (*(longlong *)(lVar3 + 0x58) == param_2) {
          *(uint *)(lVar3 + 0x60) = *(uint *)(lVar3 + 0x60) & 0xf0f00000;
          *(undefined8 *)(lVar3 + 0x50) = 0;
        }
        lVar3 = *(longlong *)(lVar3 + 0x68);
        if (lVar3 != 0) break;
        do {
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          if (*(uint *)(param_1 + 1) <= uVar4) goto joined_r0x000143150e46;
          lVar3 = *(longlong *)(*param_1 + uVar5 * 8);
        } while (lVar3 == 0);
      }
joined_r0x000143150e46:
    } while (lVar3 != 0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  DVar1 = DAT_146b50e80;
  DVar2 = GetCurrentThreadId();
  if (DVar1 != DVar2) {
    WaitForSingleObject((HANDLE)param_1[8],0xffffffff);
  }
  return;
}



// FUNCTION 143150ec0 FUN_143150ec0 body=204 status=ok
// SIG undefined FUN_143150ec0(void)

void FUN_143150ec0(longlong *param_1,longlong param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    uVar5 = 0;
    lVar3 = *(longlong *)*param_1;
    while (lVar3 == 0) {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if (*(uint *)(param_1 + 1) <= uVar4) goto joined_r0x000143150f16;
      lVar3 = ((longlong *)*param_1)[uVar5];
    }
    do {
      while( true ) {
        if (*(longlong *)(lVar3 + 0x30) == param_2) {
          *(uint *)(lVar3 + 0x60) = *(uint *)(lVar3 + 0x60) & 0xf0f00000;
          *(undefined8 *)(lVar3 + 0x50) = 0;
        }
        lVar3 = *(longlong *)(lVar3 + 0x68);
        if (lVar3 != 0) break;
        do {
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          if (*(uint *)(param_1 + 1) <= uVar4) goto joined_r0x000143150f16;
          lVar3 = *(longlong *)(*param_1 + uVar5 * 8);
        } while (lVar3 == 0);
      }
joined_r0x000143150f16:
    } while (lVar3 != 0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  DVar1 = DAT_146b50e80;
  DVar2 = GetCurrentThreadId();
  if (DVar1 != DVar2) {
    WaitForSingleObject((HANDLE)param_1[8],0xffffffff);
  }
  return;
}



// FUNCTION 143150f90 FUN_143150f90 body=460 status=ok
// SIG undefined FUN_143150f90(void)

void FUN_143150f90(longlong *param_1,uint param_2,void *param_3)

{
  CAkRegisteredObj *pCVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  long lVar6;
  longlong lVar7;
  CAkRegisteredObj *pCVar8;
  uint uVar9;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  CAkRegisteredObj *local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  if ((*(int *)((longlong)param_3 + 0x20) != 0) || (*(int *)((longlong)param_3 + 0x24) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143151155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return;
  }
  uVar9 = *(uint *)((longlong)param_3 + 0x60);
  if ((uVar9 >> 0x16 & 1) != 0) {
    CAkPositionRepository::RemovePlayingIDForBuffering(DAT_146b50b70);
    uVar9 = *(uint *)((longlong)param_3 + 0x60);
  }
  local_68 = *(undefined8 *)((longlong)param_3 + 0x58);
  pcVar3 = *(code **)((longlong)param_3 + 0x50);
  local_60 = *(undefined8 *)((longlong)param_3 + 0x30);
  local_54 = *(undefined4 *)((longlong)param_3 + 0x28);
  if (*(uint *)(param_1 + 1) != 0) {
    plVar2 = (longlong *)(*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
    lVar7 = *plVar2;
    lVar5 = 0;
    while (lVar4 = lVar7, lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x4c) == param_2) {
        if (lVar5 == 0) {
          *plVar2 = *(longlong *)(lVar4 + 0x68);
        }
        else {
          *(longlong *)(lVar5 + 0x68) = *(longlong *)(lVar4 + 0x68);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + -1;
        break;
      }
      lVar5 = lVar4;
      lVar7 = *(longlong *)(lVar4 + 0x68);
    }
  }
  local_48 = *(undefined4 *)((longlong)param_3 + 0x4c);
  local_50 = (CAkRegisteredObj *)0x0;
  local_40 = 0;
  local_38 = 0xff;
  local_30 = 0xff;
  local_28 = 0;
  local_58 = param_2;
  pCVar8 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)((longlong)param_3 + 0x30));
  if (pCVar8 != (CAkRegisteredObj *)0x0) {
    pCVar1 = pCVar8 + 0x50;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    lVar6 = g_DefaultPoolId;
    local_50 = pCVar8;
    if (*(int *)pCVar1 == 0) {
      (*(code *)**(undefined8 **)pCVar8)(pCVar8,0);
      AK::MemoryMgr::Free(lVar6,pCVar8);
    }
  }
  CAkScopedRtpcObj::Term(param_3,&local_50);
  lVar6 = g_DefaultPoolId;
  if (*(longlong *)((longlong)param_3 + 0x38) != 0) {
    AkExternalSourceArray::Release();
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_3);
  AK::MemoryMgr::Free(lVar6,param_3);
  if ((uVar9 & 1) != 0) {
    ResetEvent((HANDLE)param_1[8]);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    (*pcVar3)(1,&local_68);
    SetEvent((HANDLE)param_1[8]);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 143151160 FUN_143151160 body=359 status=ok
// SIG undefined FUN_143151160(void)

bool FUN_143151160(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar11 = (ulonglong)uVar2;
  if ((uVar2 == 0) || (0.9 < (float)*(uint *)(param_1 + 2) / (float)uVar11)) {
    puVar10 = &DAT_145ac7a70;
    uVar9 = 0;
    do {
      uVar3 = *puVar10;
      uVar12 = (ulonglong)uVar3;
      if (uVar2 < uVar3) {
        if (uVar3 != 0) {
          uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
          plVar5 = (longlong *)*param_1;
          *param_1 = 0;
          param_1[1] = 0;
          cVar8 = FUN_143134440(param_1);
          if (cVar8 == '\0') {
            if ((void *)*param_1 != (void *)0x0) {
              *(undefined4 *)(param_1 + 1) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
            }
            *param_1 = (longlong)plVar5;
            *(uint *)(param_1 + 1) = uVar2;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
          }
          else {
            if (uVar3 != 0) {
              do {
                uVar9 = *(uint *)(param_1 + 1);
                if (uVar9 < *(uint *)((longlong)param_1 + 0xc)) {
                  *(uint *)(param_1 + 1) = uVar9 + 1;
                  puVar1 = (undefined8 *)(*param_1 + (ulonglong)uVar9 * 8);
                  if (puVar1 != (undefined8 *)0x0) {
                    *puVar1 = 0;
                  }
                }
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            plVar13 = plVar5;
            if (uVar2 != 0) {
              do {
                lVar7 = *plVar13;
                while (lVar7 != 0) {
                  lVar6 = *(longlong *)(lVar7 + 0x68);
                  uVar12 = (ulonglong)*(uint *)(lVar7 + 0x4c) % (ulonglong)uVar3;
                  *(undefined8 *)(lVar7 + 0x68) = *(undefined8 *)(*param_1 + uVar12 * 8);
                  *(longlong *)(*param_1 + uVar12 * 8) = lVar7;
                  lVar7 = lVar6;
                }
                uVar11 = uVar11 - 1;
                plVar13 = plVar13 + 1;
              } while (uVar11 != 0);
            }
            if (plVar5 != (longlong *)0x0) {
              AK::MemoryMgr::Free(g_DefaultPoolId,plVar5);
            }
          }
        }
        break;
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar9 < 0x1b);
  }
  return (int)param_1[1] != 0;
}



// FUNCTION 1431512d0 GetCookie body=111 status=ok
// SIG undefined GetCookie(void)

undefined8 CAkPlayingMgr::GetCookie(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if (lVar1 != 0) {
          uVar2 = *(undefined8 *)(lVar1 + 0x58);
          goto LAB_143151317;
        }
        break;
      }
    }
  }
  uVar2 = 0;
LAB_143151317:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return uVar2;
}



// FUNCTION 143151340 GetEventIDFromPlayingID body=109 status=ok
// SIG undefined GetEventIDFromPlayingID(void)

undefined4 CAkPlayingMgr::GetEventIDFromPlayingID(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if (lVar1 != 0) {
          uVar2 = *(undefined4 *)(lVar1 + 0x28);
          goto LAB_143151387;
        }
        break;
      }
    }
  }
  uVar2 = 0;
LAB_143151387:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return uVar2;
}



// FUNCTION 1431513b0 GetGameObjectFromPlayingID body=116 status=ok
// SIG undefined GetGameObjectFromPlayingID(void)

undefined8 CAkPlayingMgr::GetGameObjectFromPlayingID(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if (lVar1 != 0) {
          uVar2 = *(undefined8 *)(lVar1 + 0x30);
          goto LAB_1431513fc;
        }
        break;
      }
    }
  }
  uVar2 = 0xffffffffffffffff;
LAB_1431513fc:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return uVar2;
}



// FUNCTION 143151430 GetPlayingIDsFromGameObject body=255 status=ok
// SIG undefined GetPlayingIDsFromGameObject(void)

undefined4
CAkPlayingMgr::GetPlayingIDsFromGameObject
          (longlong *param_1,longlong param_2,uint *param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *param_3;
  uVar4 = 0;
  if (uVar3 == 0) {
    uVar3 = 0xffffffff;
    param_4 = uVar4;
  }
  else if (param_4 == 0) {
    return 0x1f;
  }
  *param_3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    lVar2 = *(longlong *)*param_1;
    while (lVar2 == 0) {
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
      if (*(uint *)(param_1 + 1) <= uVar1) goto joined_r0x0001431514b2;
      lVar2 = ((longlong *)*param_1)[uVar1];
    }
    do {
      while( true ) {
        if (*(longlong *)(lVar2 + 0x30) == param_2) {
          uVar3 = uVar3 - 1;
          if (param_4 != 0) {
            *(undefined4 *)(param_4 + (ulonglong)*param_3 * 4) = *(undefined4 *)(lVar2 + 0x4c);
          }
          *param_3 = *param_3 + 1;
        }
        if (uVar3 == 0) goto LAB_143151501;
        lVar2 = *(longlong *)(lVar2 + 0x68);
        if (lVar2 != 0) break;
        do {
          uVar1 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar1;
          if (*(uint *)(param_1 + 1) <= uVar1) goto joined_r0x0001431514b2;
          lVar2 = *(longlong *)(*param_1 + (ulonglong)uVar1 * 8);
        } while (lVar2 == 0);
      }
joined_r0x0001431514b2:
    } while (lVar2 != 0);
  }
LAB_143151501:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return 1;
}



// FUNCTION 143151530 FUN_143151530 body=154 status=ok
// SIG undefined FUN_143151530(void)

undefined8 FUN_143151530(longlong *param_1,int param_2)

{
  uint uVar1;
  AKRESULT AVar2;
  void *pvVar3;
  undefined4 extraout_var;
  ulonglong uVar5;
  uint uVar6;
  void *pvVar4;
  
  uVar6 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar6 << 2);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)*param_1;
    if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar3)) {
      uVar1 = *(uint *)(param_1 + 1);
      uVar5 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined4 *)((longlong)pvVar3 + uVar5 * 4) = *(undefined4 *)(*param_1 + uVar5 * 4);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
        pvVar4 = (void *)*param_1;
      }
      AVar2 = AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
      pvVar4 = (void *)CONCAT44(extraout_var,AVar2);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar6;
    *param_1 = (longlong)pvVar3;
    return CONCAT71((int7)((ulonglong)pvVar4 >> 8),1);
  }
  return 0;
}



// FUNCTION 1431515d0 FUN_1431515d0 body=195 status=ok
// SIG undefined FUN_1431515d0(void)

undefined8 FUN_1431515d0(longlong *param_1)

{
  char cVar1;
  HANDLE hEvent;
  uint uVar2;
  ulonglong uVar3;
  
  hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  param_1[8] = (longlong)hEvent;
  if (hEvent == (HANDLE)0x0) {
    return 2;
  }
  SetEvent(hEvent);
  DAT_146b50b08 = param_1 + 9;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((*(uint *)(param_1 + 1) < 0xc) && (*(uint *)((longlong)param_1 + 0xc) < 0xb)) {
    cVar1 = FUN_143134440(param_1,0xb - *(uint *)(param_1 + 1));
    if (cVar1 == '\0') {
      return 2;
    }
  }
  *(undefined4 *)(param_1 + 1) = 0xb;
  uVar3 = 0;
  do {
    uVar2 = (int)uVar3 + 1;
    *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 < *(uint *)(param_1 + 1));
  return 1;
}



// FUNCTION 1431516a0 MusicPlaylistCallback body=268 status=ok
// SIG undefined MusicPlaylistCallback(void)

void CAkPlayingMgr::MusicPlaylistCallback
               (longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 *param_6)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x60) & 0x40) != 0)) &&
           (pcVar2 = *(code **)(lVar1 + 0x50), pcVar2 != (code *)0x0)) {
          local_48 = *(undefined8 *)(lVar1 + 0x58);
          local_34 = *(undefined4 *)(lVar1 + 0x28);
          local_40 = *(undefined8 *)(lVar1 + 0x30);
          local_28 = *param_5;
          local_24 = *param_6;
          local_38 = param_2;
          local_30 = param_3;
          local_2c = param_4;
          ResetEvent((HANDLE)param_1[8]);
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          (*pcVar2)(0x40,&local_48);
          SetEvent((HANDLE)param_1[8]);
          *param_5 = local_28;
          *param_6 = local_24;
          return;
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1431517b0 NotifyDuration body=273 status=ok
// SIG undefined NotifyDuration(void)

void CAkPlayingMgr::NotifyDuration
               (longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x60) & 8) != 0)) {
          local_58 = *(undefined8 *)(lVar1 + 0x58);
          local_50 = *(undefined8 *)(lVar1 + 0x30);
          local_44 = *(undefined4 *)(lVar1 + 0x28);
          pcVar2 = *(code **)(lVar1 + 0x50);
          local_38 = param_5;
          local_34 = param_6;
          local_30 = param_7;
          local_48 = param_2;
          local_40 = param_3;
          local_3c = param_4;
          ResetEvent((HANDLE)param_1[8]);
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          (*pcVar2)(8,&local_58);
          SetEvent((HANDLE)param_1[8]);
          return;
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1431518d0 NotifyEndOfDynamicSequenceItem body=214 status=ok
// SIG undefined NotifyEndOfDynamicSequenceItem(void)

void CAkPlayingMgr::NotifyEndOfDynamicSequenceItem
               (longlong *param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x60) & 2) != 0)) {
          local_28 = *(undefined8 *)(lVar1 + 0x58);
          local_20 = *(undefined8 *)(lVar1 + 0x30);
          pcVar2 = *(code **)(lVar1 + 0x50);
          local_18 = param_2;
          local_14 = param_3;
          local_10 = param_4;
          ResetEvent((HANDLE)param_1[8]);
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          (*pcVar2)(2,&local_28);
          SetEvent((HANDLE)param_1[8]);
          return;
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1431519b0 FUN_1431519b0 body=13 status=ok
// SIG undefined FUN_1431519b0(void)

void FUN_1431519b0(undefined8 param_1,undefined8 param_2)

{
  FUN_143152280(param_1,0x2000000,param_2);
  return;
}



// FUNCTION 1431519c0 FUN_1431519c0 body=242 status=ok
// SIG undefined FUN_1431519c0(void)

void FUN_1431519c0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  local_28 = *(uint *)(param_2 + 0x200);
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar2 = *(longlong *)
                  (*param_1 + ((ulonglong)local_28 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x68)) {
      if (*(uint *)(lVar2 + 0x4c) == local_28) goto LAB_143151a21;
    }
  }
  lVar2 = 0;
LAB_143151a21:
  if (((*(byte *)(lVar2 + 0x60) & 4) == 0) ||
     (pcVar1 = *(code **)(lVar2 + 0x50), pcVar1 == (code *)0x0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else {
    local_30 = *(undefined8 *)(lVar2 + 0x30);
    local_38 = *(undefined8 *)(lVar2 + 0x58);
    local_24 = *(undefined4 *)(lVar2 + 0x28);
    local_20 = *param_3;
    local_1c = param_3[1];
    local_18 = *(undefined8 *)(param_3 + 2);
    ResetEvent((HANDLE)param_1[8]);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    (*pcVar1)(4,&local_38);
    SetEvent((HANDLE)param_1[8]);
  }
  return;
}



// FUNCTION 143151ac0 FUN_143151ac0 body=311 status=ok
// SIG undefined FUN_143151ac0(void)

void FUN_143151ac0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  plVar7 = *(longlong **)(param_2 + 0x20);
  uVar8 = 0;
  uVar6 = uVar8;
  if (*(short *)(param_2 + 0x18) != 0) {
    do {
      lVar1 = *plVar7;
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      uVar4 = uVar8;
      if (*(uint *)(param_1 + 1) != 0) {
        for (uVar2 = *(ulonglong *)
                      (*param_1 +
                      ((ulonglong)*(uint *)(lVar1 + 0x200) % (ulonglong)*(uint *)(param_1 + 1)) * 8)
            ; (uVar4 = uVar8, uVar2 != 0 &&
              (uVar4 = uVar2, *(uint *)(uVar2 + 0x4c) != *(uint *)(lVar1 + 0x200)));
            uVar2 = *(ulonglong *)(uVar2 + 0x68)) {
        }
      }
      if (((*(byte *)(uVar4 + 0x60) & 4) == 0) ||
         (pcVar3 = *(code **)(uVar4 + 0x50), pcVar3 == (code *)0x0)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      }
      else {
        ResetEvent((HANDLE)param_1[8]);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
        (*pcVar3)(4);
        SetEvent((HANDLE)param_1[8]);
      }
      plVar7 = plVar7 + 4;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(ushort *)(param_2 + 0x18));
  }
  AkPipelineBuffer::FreeMarkers(param_2);
  return;
}



// FUNCTION 143151c00 NotifyMidiEvent body=226 status=ok
// SIG undefined NotifyMidiEvent(void)

void CAkPlayingMgr::NotifyMidiEvent(longlong *param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if (((lVar1 != 0) && (pcVar2 = *(code **)(lVar1 + 0x50), pcVar2 != (code *)0x0)) &&
           ((*(uint *)(lVar1 + 0x60) & 0x10000) != 0)) {
          local_28 = *(undefined8 *)(lVar1 + 0x58);
          local_20 = *(undefined8 *)(lVar1 + 0x30);
          local_14 = *(undefined4 *)(lVar1 + 0x28);
          local_10 = *param_3;
          local_18 = param_2;
          ResetEvent((HANDLE)param_1[8]);
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          (*pcVar2)(0x10000,&local_28);
          SetEvent((HANDLE)param_1[8]);
          return;
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 143151cf0 NotifyMusic body=242 status=ok
// SIG undefined NotifyMusic(void)

void CAkPlayingMgr::NotifyMusic(longlong *param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint local_30;
  undefined8 local_28;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar2 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x68)) {
      if (*(uint *)(lVar2 + 0x4c) == param_2) goto LAB_143151d46;
    }
  }
  lVar2 = 0;
LAB_143151d46:
  pcVar1 = *(code **)(lVar2 + 0x50);
  if ((pcVar1 == (code *)0x0) || ((*(uint *)(lVar2 + 0x60) & param_3) == 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else {
    local_68 = *(undefined8 *)(lVar2 + 0x58);
    local_60 = *(undefined8 *)(lVar2 + 0x30);
    local_54 = *param_4;
    uStack_50 = param_4[1];
    uStack_4c = param_4[2];
    uStack_48 = param_4[3];
    local_34 = param_4[8];
    local_44 = param_4[4];
    uStack_40 = param_4[5];
    uStack_3c = param_4[6];
    uStack_38 = param_4[7];
    local_28 = 0;
    local_58 = param_2;
    local_30 = param_3;
    ResetEvent((HANDLE)param_1[8]);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    (*pcVar1)(param_3,&local_68);
    SetEvent((HANDLE)param_1[8]);
  }
  return;
}



// FUNCTION 143151df0 NotifyMusicPlayStarted body=202 status=ok
// SIG undefined NotifyMusicPlayStarted(void)

void CAkPlayingMgr::NotifyMusicPlayStarted(longlong *param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined4 local_14;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x60) & 0x80) != 0)) &&
           (pcVar2 = *(code **)(lVar1 + 0x50), pcVar2 != (code *)0x0)) {
          local_28 = *(undefined8 *)(lVar1 + 0x58);
          local_20 = *(undefined8 *)(lVar1 + 0x30);
          local_14 = *(undefined4 *)(lVar1 + 0x28);
          local_18 = param_2;
          ResetEvent((HANDLE)param_1[8]);
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          (*pcVar2)(0x80,&local_28);
          SetEvent((HANDLE)param_1[8]);
          return;
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 143151ec0 NotifyMusicUserCues body=246 status=ok
// SIG undefined NotifyMusicUserCues(void)

void CAkPlayingMgr::NotifyMusicUserCues
               (longlong *param_1,uint param_2,undefined4 *param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar2 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x68)) {
      if (*(uint *)(lVar2 + 0x4c) == param_2) goto LAB_143151f16;
    }
  }
  lVar2 = 0;
LAB_143151f16:
  pcVar1 = *(code **)(lVar2 + 0x50);
  if ((pcVar1 == (code *)0x0) || ((*(uint *)(lVar2 + 0x60) & 0x2000) == 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else {
    local_68 = *(undefined8 *)(lVar2 + 0x58);
    local_60 = *(undefined8 *)(lVar2 + 0x30);
    local_54 = *param_3;
    uStack_50 = param_3[1];
    uStack_4c = param_3[2];
    uStack_48 = param_3[3];
    local_34 = param_3[8];
    local_44 = param_3[4];
    uStack_40 = param_3[5];
    uStack_3c = param_3[6];
    uStack_38 = param_3[7];
    local_30 = 0x2000;
    local_58 = param_2;
    local_28 = param_4;
    ResetEvent((HANDLE)param_1[8]);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    (*pcVar1)(0x2000,&local_68);
    SetEvent((HANDLE)param_1[8]);
  }
  return;
}



// FUNCTION 143151fc0 NotifySpeakerVolumeMatrix body=193 status=ok
// SIG undefined NotifySpeakerVolumeMatrix(void)

void CAkPlayingMgr::NotifySpeakerVolumeMatrix(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x60) & 0x10) != 0)) {
          *param_3 = *(undefined8 *)(lVar1 + 0x58);
          param_3[1] = *(undefined8 *)(lVar1 + 0x30);
          *(uint *)(param_3 + 2) = param_2;
          *(undefined4 *)((longlong)param_3 + 0x14) = *(undefined4 *)(lVar1 + 0x28);
          pcVar2 = *(code **)(lVar1 + 0x50);
          ResetEvent((HANDLE)param_1[8]);
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          (*pcVar2)(0x10,param_3);
          SetEvent((HANDLE)param_1[8]);
          return;
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 143152090 FUN_143152090 body=13 status=ok
// SIG undefined FUN_143152090(void)

void FUN_143152090(undefined8 param_1,undefined8 param_2)

{
  FUN_143152280(param_1,0x1000000,param_2);
  return;
}



// FUNCTION 1431520a0 NotifyStarvation body=202 status=ok
// SIG undefined NotifyStarvation(void)

void CAkPlayingMgr::NotifyStarvation(longlong *param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined4 local_14;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if (((lVar1 != 0) && (pcVar2 = *(code **)(lVar1 + 0x50), pcVar2 != (code *)0x0)) &&
           ((*(byte *)(lVar1 + 0x60) & 0x20) != 0)) {
          local_28 = *(undefined8 *)(lVar1 + 0x58);
          local_20 = *(undefined8 *)(lVar1 + 0x30);
          local_14 = *(undefined4 *)(lVar1 + 0x28);
          local_18 = param_2;
          ResetEvent((HANDLE)param_1[8]);
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          (*pcVar2)(0x20,&local_28);
          SetEvent((HANDLE)param_1[8]);
          return;
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 143152170 FUN_143152170 body=261 status=ok
// SIG undefined FUN_143152170(void)

void FUN_143152170(longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x60) & 0x4000000) != 0)) {
          local_48 = *(undefined8 *)(lVar1 + 0x58);
          local_40 = *(undefined8 *)(lVar1 + 0x30);
          pcVar2 = *(code **)(lVar1 + 0x50);
          local_28 = param_6;
          local_2c = param_5;
          local_38 = param_2;
          local_34 = param_3;
          local_30 = param_4;
          ResetEvent((HANDLE)param_1[8]);
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          (*pcVar2)(0x4000000,&local_48);
          SetEvent((HANDLE)param_1[8]);
          return;
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 143152280 FUN_143152280 body=245 status=ok
// SIG undefined FUN_143152280(void)

void FUN_143152280(longlong *param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  local_18 = *(uint *)(param_3 + 0x200);
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)local_18 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == local_18) {
        if (((lVar1 != 0) && ((*(uint *)(lVar1 + 0x60) & param_2) != 0)) &&
           (*(longlong *)(lVar1 + 0x50) != 0)) {
          local_28 = *(undefined8 *)(lVar1 + 0x58);
          local_20 = *(undefined8 *)(lVar1 + 0x30);
          local_10 = FUN_14317c030(param_3 + 0x18);
          pcVar2 = *(code **)(lVar1 + 0x50);
          local_14 = *(undefined4 *)(param_3 + 0x2a4);
          ResetEvent((HANDLE)param_1[8]);
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          (*pcVar2)(param_2,&local_28);
          SetEvent((HANDLE)param_1[8]);
          return;
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}


