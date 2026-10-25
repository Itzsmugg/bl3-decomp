// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140448420 FUN_140448420 body=78 status=ok
// SIG undefined FUN_140448420(void)

undefined8 * FUN_140448420(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456270(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f47850;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140448470 FUN_140448470 body=51 status=ok
// SIG undefined FUN_140448470(void)

undefined8 FUN_140448470(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  double extraout_XMM0_Qa;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x3b8))(plVar1,*(int *)((longlong)plVar1 + 0x44) + param_2);
  *param_3 = (float)extraout_XMM0_Qa;
  return 1;
}



// FUNCTION 1404484b0 FUN_1404484b0 body=126 status=ok
// SIG undefined FUN_1404484b0(void)

longlong FUN_1404484b0(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UDoubleProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140448506;
  }
  lVar3 = 0;
LAB_140448506:
  (**(code **)(*param_2 + 0xc0))(param_2,*(undefined8 *)(*(int *)(lVar3 + 0x44) + param_3));
  return param_3;
}



// FUNCTION 140448530 FUN_140448530 body=147 status=ok
// SIG undefined FUN_140448530(void)

longlong FUN_140448530(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UDoubleProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140448587;
  }
  lVar3 = 0;
LAB_140448587:
  local_res8 = 0;
  (**(code **)(*param_2 + 0x1a8))(param_2,&local_res8);
  *(undefined8 *)(*(int *)(lVar3 + 0x44) + param_3) = local_res8;
  return param_3;
}



// FUNCTION 1404485d0 FUN_1404485d0 body=78 status=ok
// SIG undefined FUN_1404485d0(void)

undefined8 * FUN_1404485d0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456270(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f478c8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140448620 FUN_140448620 body=236 status=ok
// SIG undefined FUN_140448620(void)

longlong FUN_140448620(longlong param_1,longlong *param_2,longlong param_3)

{
  void *_Src;
  bool bVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *local_18;
  int local_10;
  
  puVar4 = *(undefined2 **)(param_1 + 0x18);
  if (puVar4 == (undefined2 *)0x0) {
LAB_140448682:
    puVar4 = (undefined2 *)0x0;
  }
  else {
    lVar2 = UStrProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(puVar4 + 8) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(puVar4 + 8) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140448682;
  }
  local_18 = (undefined2 *)0x0;
  local_10 = *(int *)((longlong)*(int *)(puVar4 + 0x22) + 8 + param_3);
  lVar2 = (longlong)local_10;
  _Src = *(void **)(*(int *)(puVar4 + 0x22) + param_3);
  puVar4 = (undefined2 *)0x0;
  if (local_10 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    puVar3 = local_18;
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar2 * 2);
    puVar4 = puVar3;
    if (local_10 != 0) goto LAB_1404486d5;
  }
  puVar3 = &DAT_143f3eda8;
LAB_1404486d5:
  (**(code **)(*param_2 + 0xb0))(param_2,puVar3);
  if (puVar4 != (undefined2 *)0x0) {
    FMemory::Free(puVar4);
  }
  return param_3;
}



// FUNCTION 140448710 FUN_140448710 body=382 status=ok
// SIG undefined FUN_140448710(void)

longlong FUN_140448710(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  void **ppvVar7;
  void *pvVar8;
  int iVar9;
  void *_Src;
  undefined8 local_res8;
  undefined8 local_res10;
  ulonglong local_res18;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  
  pvVar8 = *(void **)(param_1 + 0x18);
  if (pvVar8 != (void *)0x0) {
    lVar6 = UStrProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)((longlong)pvVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)((longlong)pvVar8 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140448770;
  }
  pvVar8 = (void *)0x0;
LAB_140448770:
  local_48 = (void *)0x0;
  local_3c = 0;
  local_res18 = 0;
  local_res10 = 0;
  (**(code **)(*param_2 + 0x1a0))(param_2,&local_res10,&local_res18);
  uVar4 = local_res18;
  uVar3 = local_res10;
  local_res8 = (void *)((ulonglong)local_res8._4_4_ << 0x20);
  FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (&local_res8,0x7fffffff,local_res10,local_res18 & 0xffffffff);
  uVar2 = (ulonglong)local_res8;
  lVar6 = (longlong)(int)local_res8;
  iVar5 = (int)local_res8 + 1;
  if (iVar5 < 1) {
    _Src = (void *)0x0;
    iVar9 = 0;
    if ((iVar5 < 0) && (_Src = (void *)0x0, iVar5 != 0)) {
      local_40 = iVar5;
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_48);
      _Src = local_48;
      iVar9 = local_40;
    }
  }
  else {
    local_40 = iVar5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    _Src = local_48;
    iVar9 = local_40;
  }
  *(undefined2 *)((longlong)_Src + lVar6 * 2) = 0;
  local_res8 = _Src;
  FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>
            (&local_res8,uVar2 & 0xffffffff,uVar3,uVar4 & 0xffffffff);
  ppvVar7 = (void **)(*(int *)((longlong)pvVar8 + 0x44) + param_3);
  if (ppvVar7 != &local_48) {
    *(int *)(ppvVar7 + 1) = iVar9;
    if ((iVar9 == 0) && (*(int *)((longlong)ppvVar7 + 0xc) == 0)) {
      *(undefined4 *)((longlong)ppvVar7 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar7,iVar9);
      _guard_xfg_dispatch_icall_nop(*ppvVar7,_Src,(longlong)iVar9 * 2);
    }
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return param_3;
}



// FUNCTION 140448890 FUN_140448890 body=78 status=ok
// SIG undefined FUN_140448890(void)

undefined8 * FUN_140448890(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456270(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f47940;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1404488e0 FUN_1404488e0 body=36 status=ok
// SIG undefined FUN_1404488e0(void)

undefined8 FUN_1404488e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140472180(*(int *)(*(longlong *)(param_1 + 0x18) + 0x44) + param_2,param_3,param_4);
  return 1;
}



// FUNCTION 140448910 FUN_140448910 body=219 status=ok
// SIG undefined FUN_140448910(void)

longlong FUN_140448910(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (lVar8 != 0) {
    lVar5 = UTextProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140448967;
  }
  lVar8 = 0;
LAB_140448967:
  FText::FText(local_28,*(int *)(lVar8 + 0x44) + param_3);
  puVar6 = (undefined8 *)FText::ToString(local_28);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  (**(code **)(*param_2 + 0xb0))(param_2,puVar7);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return param_3;
}



// FUNCTION 1404489f0 FUN_1404489f0 body=497 status=ok
// SIG undefined FUN_1404489f0(void)

longlong FUN_1404489f0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int local_res8 [2];
  undefined8 local_res10;
  ulonglong local_res18;
  longlong local_res20;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  
  lVar12 = *(longlong *)(param_1 + 0x18);
  if (lVar12 != 0) {
    lVar7 = UTextProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140448a50;
  }
  lVar12 = 0;
LAB_140448a50:
  FText::FText(local_78);
  local_88 = 0;
  local_80 = 0;
  local_res18 = 0;
  local_res10 = 0;
  (**(code **)(*param_2 + 0x1a0))(param_2,&local_res10,&local_res18);
  uVar5 = local_res18;
  uVar8 = local_res10;
  local_res8[0] = 0;
  FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (local_res8,0x7fffffff,local_res10,local_res18 & 0xffffffff);
  uVar6 = local_80;
  iVar3 = local_res8[0];
  lVar7 = (longlong)local_res8[0];
  iVar11 = local_res8[0] + 1;
  if ((int)local_80 < iVar11) {
    local_80 = CONCAT44(local_80._4_4_,iVar11);
    if (local_80._4_4_ < iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,uVar6 & 0xffffffff);
    }
  }
  else if ((iVar11 < (int)local_80) && (iVar10 = (int)local_80 - iVar11, iVar10 != 0)) {
    iVar9 = ((int)local_80 - iVar10) - iVar11;
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(local_88 + (longlong)iVar11 * 2),
                 (void *)(local_88 + (longlong)(iVar10 + iVar11) * 2),(longlong)iVar9 * 2);
    }
    local_80 = CONCAT44(local_80._4_4_,(int)local_80 - iVar10);
    TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_88);
  }
  *(undefined2 *)(local_88 + lVar7 * 2) = 0;
  local_res20 = local_88;
  FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_res20,iVar3,uVar8,uVar5 & 0xffffffff);
  uVar8 = FText::FromString(local_60,&local_88);
  FText::operator=(local_78,uVar8);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  FText::operator=(*(int *)(lVar12 + 0x44) + param_3,local_78);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  return param_3;
}



// FUNCTION 140448bf0 FUN_140448bf0 body=78 status=ok
// SIG undefined FUN_140448bf0(void)

undefined8 * FUN_140448bf0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456270(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f479b8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140448c40 FUN_140448c40 body=59 status=ok
// SIG undefined FUN_140448c40(void)

undefined8 FUN_140448c40(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FText::ToString(*(int *)(*(longlong *)(param_1 + 0x18) + 0x44) + param_2);
  FUN_140472180(uVar1,param_3,param_4);
  return 1;
}



// FUNCTION 140448c80 FUN_140448c80 body=179 status=ok
// SIG undefined FUN_140448c80(void)

longlong FUN_140448c80(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined8 local_res8;
  longlong local_18 [2];
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 != 0) {
    lVar2 = UNameProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140448cd7;
  }
  lVar5 = 0;
LAB_140448cd7:
  local_res8 = *(undefined8 *)(*(int *)(lVar5 + 0x44) + param_3);
  puVar3 = (undefined8 *)FName::ToString(&local_res8,local_18);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar3;
  }
  (**(code **)(*param_2 + 0xb0))(param_2,puVar4);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_3;
}



// FUNCTION 140448d40 FUN_140448d40 body=358 status=ok
// SIG undefined FUN_140448d40(void)

longlong FUN_140448d40(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined8 local_res8;
  undefined8 local_res10;
  ulonglong local_res18;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  
  puVar10 = *(undefined2 **)(param_1 + 0x18);
  if (puVar10 != (undefined2 *)0x0) {
    lVar6 = UNameProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(puVar10 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(puVar10 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140448da0;
  }
  puVar10 = (undefined2 *)0x0;
LAB_140448da0:
  local_48 = (undefined2 *)0x0;
  local_3c = 0;
  local_res18 = 0;
  local_res10 = 0;
  (**(code **)(*param_2 + 0x1a0))(param_2,&local_res10,&local_res18);
  uVar4 = local_res18;
  uVar1 = local_res10;
  local_res8 = (undefined2 *)((ulonglong)local_res8._4_4_ << 0x20);
  FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (&local_res8,0x7fffffff,local_res10,local_res18 & 0xffffffff);
  uVar3 = (ulonglong)local_res8;
  lVar6 = (longlong)(int)local_res8;
  iVar5 = (int)local_res8 + 1;
  if (iVar5 < 1) {
    puVar9 = (undefined2 *)0x0;
    iVar11 = 0;
    if ((iVar5 < 0) && (puVar9 = (undefined2 *)0x0, iVar5 != 0)) {
      local_40 = iVar5;
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_48);
      puVar9 = local_48;
      iVar11 = local_40;
    }
  }
  else {
    local_40 = iVar5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    puVar9 = local_48;
    iVar11 = local_40;
  }
  puVar9[lVar6] = 0;
  local_res8 = puVar9;
  FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>
            (&local_res8,uVar3 & 0xffffffff,uVar1,uVar4 & 0xffffffff);
  puVar8 = &DAT_143f3eda8;
  if (iVar11 != 0) {
    puVar8 = puVar9;
  }
  puVar7 = (undefined8 *)FName::FName(&local_res8,puVar8,1);
  uVar1 = *puVar7;
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  *(undefined8 *)(*(int *)(puVar10 + 0x22) + param_3) = uVar1;
  return param_3;
}



// FUNCTION 140448eb0 FUN_140448eb0 body=78 status=ok
// SIG undefined FUN_140448eb0(void)

undefined8 * FUN_140448eb0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456270(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f47a30;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140448f00 FUN_140448f00 body=79 status=ok
// SIG undefined FUN_140448f00(void)

undefined8 FUN_140448f00(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  uVar1 = FName::ToString(*(int *)(*(longlong *)(param_1 + 0x18) + 0x44) + param_2,local_18);
  FUN_140472180(uVar1,param_3,param_4);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 140448f50 FUN_140448f50 body=109 status=ok
// SIG undefined FUN_140448f50(void)

undefined8 * FUN_140448f50(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f4cc48;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140448fc0 FUN_140448fc0 body=109 status=ok
// SIG undefined FUN_140448fc0(void)

undefined8 * FUN_140448fc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f4ccc0;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140449030 FUN_140449030 body=109 status=ok
// SIG undefined FUN_140449030(void)

undefined8 * FUN_140449030(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f4cbd0;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1404490a0 FUN_1404490a0 body=109 status=ok
// SIG undefined FUN_1404490a0(void)

undefined8 * FUN_1404490a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f4cae0;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140449110 FUN_140449110 body=109 status=ok
// SIG undefined FUN_140449110(void)

undefined8 * FUN_140449110(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f4cb58;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140449180 FUN_140449180 body=307 status=ok
// SIG undefined FUN_140449180(void)

undefined8 * FUN_140449180(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *local_res8;
  
  puVar4 = cohtml::Property::operator_new(0x88);
  if (puVar4 == (undefined8 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  FUN_140456310(puVar4,param_2);
  *puVar4 = &PTR_FUN_143f4cd38;
  plVar1 = puVar4 + 6;
  *plVar1 = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  *(undefined4 *)(puVar4 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0x6c) = 0;
  puVar4[0xf] = 0;
  *(undefined4 *)(puVar4 + 0x10) = 0;
  lVar7 = puVar4[3];
  if (lVar7 != 0) {
    lVar5 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140449233;
  }
  lVar7 = 0;
LAB_140449233:
  lVar5 = FUN_140472420(*(undefined8 *)(lVar7 + 0x70),0);
  if (lVar5 == 0) {
    local_res8 = (undefined8 *)*plVar1;
    *plVar1 = 0;
  }
  else {
    plVar6 = (longlong *)(**(code **)(lVar5 + 8))(&local_res8,*(undefined8 *)(lVar7 + 0x70));
    if (plVar1 != plVar6) {
      puVar2 = (undefined8 *)*plVar1;
      *plVar1 = *plVar6;
      *plVar6 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  *param_1 = puVar4;
  return param_1;
}



// FUNCTION 1404492c0 FUN_1404492c0 body=81 status=ok
// SIG undefined FUN_1404492c0(void)

undefined8 * FUN_1404492c0(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = cohtml::Property::operator_new(0x40);
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_140456130(pvVar1,param_2);
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140449320 FUN_140449320 body=109 status=ok
// SIG undefined FUN_140449320(void)

undefined8 * FUN_140449320(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f4ca68;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140449390 FUN_140449390 body=119 status=ok
// SIG undefined FUN_140449390(void)

undefined8 FUN_140449390(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_140472420(*(undefined8 *)(param_1 + 0x70),param_2);
      if (lVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140449410 FUN_140449410 body=190 status=ok
// SIG undefined FUN_140449410(void)

bool FUN_140449410(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar2 = UMapProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = *(longlong *)(param_1 + 0x70);
      lVar3 = UStrProperty::GetPrivateStaticClass();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar2 = FUN_140472420(*(undefined8 *)(param_1 + 0x78),param_2);
        return lVar2 != 0;
      }
    }
  }
  return false;
}



// FUNCTION 1404494d0 FUN_1404494d0 body=94 status=ok
// SIG undefined FUN_1404494d0(void)

bool FUN_1404494d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_14171a2f0();
      return *(longlong *)(param_1 + 0x70) == lVar2;
    }
  }
  return false;
}



// FUNCTION 140449530 FUN_140449530 body=94 status=ok
// SIG undefined FUN_140449530(void)

bool FUN_140449530(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_14171a470();
      return *(longlong *)(param_1 + 0x70) == lVar2;
    }
  }
  return false;
}



// FUNCTION 140449590 FUN_140449590 body=94 status=ok
// SIG undefined FUN_140449590(void)

bool FUN_140449590(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_14171a670();
      return *(longlong *)(param_1 + 0x70) == lVar2;
    }
  }
  return false;
}



// FUNCTION 1404495f0 FUN_1404495f0 body=69 status=ok
// SIG undefined FUN_1404495f0(void)

ulonglong FUN_1404495f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UBoolProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140449640 FUN_140449640 body=109 status=ok
// SIG undefined FUN_140449640(void)

undefined8 * FUN_140449640(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f47580;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1404496b0 FUN_1404496b0 body=69 status=ok
// SIG undefined FUN_1404496b0(void)

ulonglong FUN_1404496b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UByteProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140449700 FUN_140449700 body=109 status=ok
// SIG undefined FUN_140449700(void)

undefined8 * FUN_140449700(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f475f8;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140449770 IsA<UIntProperty> body=69 status=ok
// SIG undefined IsA<UIntProperty>(void)

ulonglong UObjectBaseUtility::IsA<UIntProperty>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UIntProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1404497c0 FUN_1404497c0 body=109 status=ok
// SIG undefined FUN_1404497c0(void)

undefined8 * FUN_1404497c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f47670;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140449830 IsA<UUInt32Property> body=69 status=ok
// SIG undefined IsA<UUInt32Property>(void)

ulonglong UObjectBaseUtility::IsA<UUInt32Property>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UUInt32Property::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140449880 FUN_140449880 body=109 status=ok
// SIG undefined FUN_140449880(void)

undefined8 * FUN_140449880(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f476e8;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1404498f0 IsA<UInt64Property> body=69 status=ok
// SIG undefined IsA<UInt64Property>(void)

ulonglong UObjectBaseUtility::IsA<UInt64Property>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UInt64Property::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140449940 FUN_140449940 body=109 status=ok
// SIG undefined FUN_140449940(void)

undefined8 * FUN_140449940(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f47760;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1404499b0 IsA<UUInt64Property> body=69 status=ok
// SIG undefined IsA<UUInt64Property>(void)

ulonglong UObjectBaseUtility::IsA<UUInt64Property>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UUInt64Property::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140449a00 FUN_140449a00 body=109 status=ok
// SIG undefined FUN_140449a00(void)

undefined8 * FUN_140449a00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f477d8;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140449a70 FUN_140449a70 body=69 status=ok
// SIG undefined FUN_140449a70(void)

ulonglong FUN_140449a70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UFloatProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140449ac0 FUN_140449ac0 body=109 status=ok
// SIG undefined FUN_140449ac0(void)

undefined8 * FUN_140449ac0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f47850;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140449b30 FUN_140449b30 body=69 status=ok
// SIG undefined FUN_140449b30(void)

ulonglong FUN_140449b30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UDoubleProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140449b80 FUN_140449b80 body=109 status=ok
// SIG undefined FUN_140449b80(void)

undefined8 * FUN_140449b80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f478c8;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140449bf0 IsA<UStrProperty> body=69 status=ok
// SIG undefined IsA<UStrProperty>(void)

ulonglong UObjectBaseUtility::IsA<UStrProperty>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UStrProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140449c40 FUN_140449c40 body=109 status=ok
// SIG undefined FUN_140449c40(void)

undefined8 * FUN_140449c40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f47940;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140449cb0 IsA<UTextProperty> body=69 status=ok
// SIG undefined IsA<UTextProperty>(void)

ulonglong UObjectBaseUtility::IsA<UTextProperty>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UTextProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140449d00 FUN_140449d00 body=109 status=ok
// SIG undefined FUN_140449d00(void)

undefined8 * FUN_140449d00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f479b8;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140449d70 IsA<UNameProperty> body=69 status=ok
// SIG undefined IsA<UNameProperty>(void)

ulonglong UObjectBaseUtility::IsA<UNameProperty>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UNameProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140449dc0 FUN_140449dc0 body=109 status=ok
// SIG undefined FUN_140449dc0(void)

undefined8 * FUN_140449dc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456310(puVar1,param_2);
    *puVar1 = &PTR_FUN_143f47a30;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140449e30 FUN_140449e30 body=69 status=ok
// SIG undefined FUN_140449e30(void)

ulonglong FUN_140449e30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UEnumProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140449e80 IsA<UStructProperty> body=69 status=ok
// SIG undefined IsA<UStructProperty>(void)

ulonglong UObjectBaseUtility::IsA<UStructProperty>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UStructProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140449ed0 IsA<UObjectProperty> body=69 status=ok
// SIG undefined IsA<UObjectProperty>(void)

ulonglong UObjectBaseUtility::IsA<UObjectProperty>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UObjectProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140449f20 FUN_140449f20 body=2936 status=ok
// SIG undefined FUN_140449f20(void)

void FUN_140449f20(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  int local_res10;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined8 local_b0;
  undefined2 *local_a0;
  int local_98;
  int local_94;
  undefined8 *local_90;
  undefined8 local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  
  uVar8 = 0;
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  DAT_146850550 = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_90,6);
  iVar11 = (int)local_88 + 6;
  local_88 = CONCAT44(local_88._4_4_,iVar11);
  if (local_88._4_4_ < iVar11) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90);
    iVar11 = (int)local_88;
  }
  puVar13 = local_90;
  *local_90 = 0x36006e00690057;
  *(undefined4 *)(local_90 + 1) = 0x34;
  iVar12 = 0;
  iVar4 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar4 = 0;
  }
  local_c8 = (undefined2 *)0x0;
  local_c0 = 0x2e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  puVar9 = local_c8;
  FGenericPlatformString::Memcpy(local_c8,L"Runtime/Coherent/CohtmlPlugin/Binaries/Cohtml",0x5c);
  if (((int)local_c0 != 0) || (iVar14 = 2, iVar4 == -1)) {
    iVar14 = 1;
  }
  local_a0 = puVar9;
  local_98 = (int)local_c0;
  local_94 = local_c0._4_4_;
  if (local_c0._4_4_ < (int)local_c0 + iVar4 + iVar14) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a0);
  }
  uVar6 = (ulonglong)(iVar11 - 1);
  if (iVar11 == 0) {
    uVar6 = uVar8;
  }
  FString::PathAppend(&local_a0,puVar13,uVar6);
  FPaths::ProjectContentDir(&local_c8);
  iVar4 = iVar12;
  if (local_98 != 0) {
    iVar4 = local_98 + -1;
  }
  if (((int)local_c0 != 0) || (iVar14 = 2, iVar4 == -1)) {
    iVar14 = 1;
  }
  iVar10 = (int)local_c0 + iVar4;
  local_b8 = local_c8;
  iVar2 = local_c0._4_4_;
  local_c8 = (undefined2 *)0x0;
  local_b0 = local_c0;
  local_c0 = 0;
  if (iVar2 < iVar10 + iVar14) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
  }
  FString::PathAppend(&local_b8,local_a0,iVar4);
  if (local_c8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FPaths::ConvertRelativePathToFull(&local_70,&local_b8);
  if (local_b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_a0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar4 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar4 = 0;
  }
  local_b8 = (undefined2 *)0x0;
  local_b0 = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  puVar9 = local_b8;
  FGenericPlatformString::Memcpy(local_b8,L"Binaries/ThirdParty/Cohtml",0x36);
  if (((int)local_b0 != 0) || (iVar14 = 2, iVar4 == -1)) {
    iVar14 = 1;
  }
  local_a0 = puVar9;
  local_98 = (int)local_b0;
  local_94 = local_b0._4_4_;
  if (local_b0._4_4_ < (int)local_b0 + iVar4 + iVar14) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a0);
  }
  uVar6 = (ulonglong)(iVar11 - 1);
  if (iVar11 == 0) {
    uVar6 = uVar8;
  }
  FString::PathAppend(&local_a0,puVar13,uVar6);
  plVar5 = (longlong *)FPaths::EngineDir(&local_b8);
  iVar4 = iVar12;
  if (local_98 != 0) {
    iVar4 = local_98 + -1;
  }
  if (((int)plVar5[1] != 0) || (iVar14 = 2, iVar4 == -1)) {
    iVar14 = 1;
  }
  local_c8 = (undefined2 *)*plVar5;
  *plVar5 = 0;
  lVar1 = plVar5[1];
  local_c0 = plVar5[1];
  plVar5[1] = 0;
  if (*(int *)((longlong)plVar5 + 0xc) < (int)lVar1 + iVar4 + iVar14) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
  }
  FString::PathAppend(&local_c8,local_a0,iVar4);
  if (local_b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FPaths::ConvertRelativePathToFull(&local_80,&local_c8);
  if (local_c8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_a0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar4 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar4 = iVar12;
  }
  local_b8 = (undefined2 *)0x0;
  local_b0 = 0x39;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  puVar9 = local_b8;
  FGenericPlatformString::Memcpy
            (local_b8,L"Runtime/Coherent/CoherentRenderingPlugin/Binaries/Renoir",0x72);
  if (((int)local_b0 != 0) || (uVar6 = 1, iVar4 + 1 == 0)) {
    uVar6 = uVar8;
  }
  local_a0 = puVar9;
  local_98 = (int)local_b0;
  local_94 = local_b0._4_4_;
  if (local_b0._4_4_ < iVar4 + 1 + (int)local_b0 + (int)uVar6) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a0);
  }
  uVar6 = (ulonglong)(iVar11 - 1);
  if (iVar11 == 0) {
    uVar6 = uVar8;
  }
  FString::PathAppend(&local_a0,puVar13,uVar6);
  FPaths::ProjectContentDir(&local_c8);
  iVar4 = iVar12;
  if (local_98 != 0) {
    iVar4 = local_98 + -1;
  }
  if (((int)local_c0 != 0) || (uVar6 = 1, iVar4 + 1 == 0)) {
    uVar6 = uVar8;
  }
  iVar10 = iVar4 + 1 + (int)local_c0;
  local_b8 = local_c8;
  iVar14 = local_c0._4_4_;
  local_c8 = (undefined2 *)0x0;
  local_b0 = local_c0;
  local_c0 = 0;
  if (iVar14 < iVar10 + (int)uVar6) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
  }
  FString::PathAppend(&local_b8,local_a0,iVar4);
  if (local_c8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FPaths::ConvertRelativePathToFull(&local_50,&local_b8);
  if (local_b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_a0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar4 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar4 = iVar12;
  }
  local_b8 = (undefined2 *)0x0;
  local_b0 = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  puVar9 = local_b8;
  FGenericPlatformString::Memcpy(local_b8,L"Binaries/ThirdParty/Renoir",0x36);
  if (((int)local_b0 != 0) || (uVar6 = 1, iVar4 + 1 == 0)) {
    uVar6 = uVar8;
  }
  local_a0 = puVar9;
  local_98 = (int)local_b0;
  local_94 = local_b0._4_4_;
  if (local_b0._4_4_ < iVar4 + 1 + (int)local_b0 + (int)uVar6) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a0);
  }
  uVar6 = (ulonglong)(iVar11 - 1);
  if (iVar11 == 0) {
    uVar6 = uVar8;
  }
  FString::PathAppend(&local_a0,puVar13,uVar6);
  plVar5 = (longlong *)FPaths::EngineDir(&local_b8);
  if (local_98 != 0) {
    iVar12 = local_98 + -1;
  }
  if (((int)plVar5[1] != 0) || (uVar6 = 1, iVar12 + 1 == 0)) {
    uVar6 = uVar8;
  }
  local_c8 = (undefined2 *)*plVar5;
  *plVar5 = 0;
  lVar1 = plVar5[1];
  local_c0 = plVar5[1];
  plVar5[1] = 0;
  if (*(int *)((longlong)plVar5 + 0xc) < iVar12 + 1 + (int)lVar1 + (int)uVar6) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
  }
  FString::PathAppend(&local_c8,local_a0,iVar12);
  if (local_b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FPaths::ConvertRelativePathToFull(&local_60,&local_c8);
  if (local_c8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_a0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar11 = local_48;
  puVar9 = local_50;
  local_c8 = (undefined2 *)0x0;
  local_c0 = CONCAT44(local_c0._4_4_,local_48);
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_c8,(0x1f - (uint)(local_48 != 0)) + local_48,0);
  _guard_xfg_dispatch_icall_nop(local_c8,puVar9,(longlong)iVar11 * 2);
  FString::PathAppend(&local_c8,L"RenoirCore.WindowsDesktop.dll",0x1d);
  cVar3 = FPaths::FileExists(&local_c8);
  uVar6 = uVar8;
  if (cVar3 != '\0') {
    puVar9 = &DAT_143f3eda8;
    if ((int)local_c0 != 0) {
      puVar9 = local_c8;
    }
    uVar6 = FWindowsPlatformProcess::GetDllHandle(puVar9);
  }
  if (local_c8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar11 = local_58;
  puVar9 = local_60;
  if (uVar6 == 0) {
    local_c8 = (undefined2 *)0x0;
    local_c0 = CONCAT44(local_c0._4_4_,local_58);
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_c8,(0x1f - (uint)(local_58 != 0)) + local_58,0);
    _guard_xfg_dispatch_icall_nop(local_c8,puVar9,(longlong)iVar11 * 2);
    FString::PathAppend(&local_c8,L"RenoirCore.WindowsDesktop.dll",0x1d);
    cVar3 = FPaths::FileExists(&local_c8);
    if (cVar3 != '\0') {
      puVar9 = &DAT_143f3eda8;
      if ((int)local_c0 != 0) {
        puVar9 = local_c8;
      }
      FWindowsPlatformProcess::GetDllHandle(puVar9);
    }
    if (local_c8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (*(int *)(param_1 + 0xe8) == 0) {
    local_b8 = (undefined2 *)0x0;
    local_b0 = 0x1e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    puVar9 = local_b8;
    FGenericPlatformString::Memcpy(local_b8,L"HttpServer.WindowsDesktop.dll",0x3c);
    plVar5 = (longlong *)(param_1 + 0xe0);
    iVar11 = *(int *)(param_1 + 0xe8);
    *(int *)(param_1 + 0xe8) = iVar11 + 1;
    if (*(int *)(param_1 + 0xec) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar5,iVar11);
    }
    lVar1 = *plVar5;
    *(undefined2 **)(lVar1 + (longlong)iVar11 * 0x18) = puVar9;
    local_b8 = (undefined2 *)0x0;
    lVar1 = lVar1 + (longlong)iVar11 * 0x18;
    *(int *)(lVar1 + 8) = (int)local_b0;
    *(int *)(lVar1 + 0xc) = local_b0._4_4_;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_b0 = 0x21;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    puVar9 = local_b8;
    FGenericPlatformString::Memcpy(local_b8,L"MediaDecoders.WindowsDesktop.dll",0x42);
    iVar11 = *(int *)(param_1 + 0xe8);
    *(int *)(param_1 + 0xe8) = iVar11 + 1;
    if (*(int *)(param_1 + 0xec) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar5,iVar11);
    }
    lVar1 = *plVar5;
    *(undefined2 **)(lVar1 + (longlong)iVar11 * 0x18) = puVar9;
    local_b8 = (undefined2 *)0x0;
    lVar1 = lVar1 + (longlong)iVar11 * 0x18;
    *(int *)(lVar1 + 8) = (int)local_b0;
    *(int *)(lVar1 + 0xc) = local_b0._4_4_;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_b0 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    puVar9 = local_b8;
    FGenericPlatformString::Memcpy(local_b8,L"v8_libbase.dll",0x1e);
    iVar11 = *(int *)(param_1 + 0xe8);
    *(int *)(param_1 + 0xe8) = iVar11 + 1;
    if (*(int *)(param_1 + 0xec) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar5,iVar11);
    }
    lVar1 = *plVar5;
    *(undefined2 **)(lVar1 + (longlong)iVar11 * 0x18) = puVar9;
    local_b8 = (undefined2 *)0x0;
    lVar1 = lVar1 + (longlong)iVar11 * 0x18;
    *(int *)(lVar1 + 8) = (int)local_b0;
    *(int *)(lVar1 + 0xc) = local_b0._4_4_;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_b0 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    puVar9 = local_b8;
    FGenericPlatformString::Memcpy(local_b8,L"v8.dll",0xe);
    iVar11 = *(int *)(param_1 + 0xe8);
    *(int *)(param_1 + 0xe8) = iVar11 + 1;
    if (*(int *)(param_1 + 0xec) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar5,iVar11);
    }
    lVar1 = *plVar5;
    *(undefined2 **)(lVar1 + (longlong)iVar11 * 0x18) = puVar9;
    lVar1 = lVar1 + (longlong)iVar11 * 0x18;
    *(int *)(lVar1 + 8) = (int)local_b0;
    *(int *)(lVar1 + 0xc) = local_b0._4_4_;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  puVar9 = &DAT_143f3eda8;
  if (local_68 != 0) {
    puVar9 = local_70;
  }
  FWindowsPlatformProcess::PushDllDirectory(puVar9);
  puVar9 = &DAT_143f3eda8;
  if (local_78 != 0) {
    puVar9 = local_80;
  }
  FWindowsPlatformProcess::PushDllDirectory(puVar9);
  puVar9 = &DAT_143f3eda8;
  if (local_48 != 0) {
    puVar9 = local_50;
  }
  FWindowsPlatformProcess::PushDllDirectory(puVar9);
  puVar9 = &DAT_143f3eda8;
  if (local_58 != 0) {
    puVar9 = local_60;
  }
  FWindowsPlatformProcess::PushDllDirectory(puVar9);
  local_res10 = 0;
  uVar6 = uVar8;
  if (0 < *(int *)(param_1 + 0xe8)) {
    do {
      iVar11 = local_68;
      puVar9 = local_70;
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + uVar6);
      if (puVar13[2] == 0) {
        local_98 = local_68;
        uVar7 = (ulonglong)(*(int *)(puVar13 + 1) - 1);
        if (*(int *)(puVar13 + 1) == 0) {
          uVar7 = uVar8;
        }
        if ((local_68 != 0) || (iVar4 = 2, (int)uVar7 == -1)) {
          iVar4 = 1;
        }
        iVar4 = iVar4 + (int)uVar7;
        local_a0 = (undefined2 *)0x0;
        if ((local_68 == 0) && (iVar4 == 0)) {
          local_94 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a0,local_68 + iVar4,0);
          _guard_xfg_dispatch_icall_nop(local_a0,puVar9,(longlong)iVar11 * 2);
        }
        FString::PathAppend(&local_a0,*puVar13);
        cVar3 = FPaths::FileExists(&local_a0);
        uVar7 = uVar8;
        if (cVar3 != '\0') {
          puVar9 = &DAT_143f3eda8;
          if (local_98 != 0) {
            puVar9 = local_a0;
          }
          uVar7 = FWindowsPlatformProcess::GetDllHandle(puVar9);
        }
        if (local_a0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        iVar11 = local_78;
        puVar9 = local_80;
        puVar13[2] = uVar7;
        if (uVar7 == 0) {
          uVar7 = (ulonglong)(*(int *)(puVar13 + 1) - 1);
          if (*(int *)(puVar13 + 1) == 0) {
            uVar7 = uVar8;
          }
          if ((local_78 != 0) || (iVar4 = 2, (int)uVar7 == -1)) {
            iVar4 = 1;
          }
          iVar4 = iVar4 + (int)uVar7;
          local_c8 = (undefined2 *)0x0;
          local_c0 = CONCAT44(local_c0._4_4_,local_78);
          if ((local_78 == 0) && (iVar4 == 0)) {
            local_c0 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,iVar4 + local_78,0);
            _guard_xfg_dispatch_icall_nop(local_c8,puVar9,(longlong)iVar11 * 2);
          }
          FString::PathAppend(&local_c8,*puVar13);
          cVar3 = FPaths::FileExists(&local_c8);
          uVar7 = uVar8;
          if (cVar3 != '\0') {
            puVar9 = &DAT_143f3eda8;
            if ((int)local_c0 != 0) {
              puVar9 = local_c8;
            }
            uVar7 = FWindowsPlatformProcess::GetDllHandle(puVar9);
          }
          if (local_c8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          puVar13[2] = uVar7;
        }
      }
      local_res10 = local_res10 + 1;
      puVar13 = local_90;
      uVar6 = uVar6 + 0x18;
    } while (local_res10 < *(int *)(param_1 + 0xe8));
  }
  iVar11 = local_68;
  puVar9 = local_70;
  local_c8 = (undefined2 *)0x0;
  local_c0 = CONCAT44(local_c0._4_4_,local_68);
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_c8,(0x1b - (uint)(local_68 != 0)) + local_68,0);
  _guard_xfg_dispatch_icall_nop(local_c8,puVar9,(longlong)iVar11 * 2);
  FString::PathAppend(&local_c8,L"cohtml.WindowsDesktop.dll",0x19);
  cVar3 = FPaths::FileExists(&local_c8);
  uVar6 = uVar8;
  if (cVar3 != '\0') {
    puVar9 = &DAT_143f3eda8;
    if ((int)local_c0 != 0) {
      puVar9 = local_c8;
    }
    uVar6 = FWindowsPlatformProcess::GetDllHandle(puVar9);
  }
  if (local_c8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar11 = local_78;
  puVar9 = local_80;
  *(ulonglong *)(param_1 + 0xd8) = uVar6;
  if (uVar6 == 0) {
    local_c8 = (undefined2 *)0x0;
    local_c0 = CONCAT44(local_c0._4_4_,local_78);
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_c8,(0x1b - (uint)(local_78 != 0)) + local_78,0);
    _guard_xfg_dispatch_icall_nop(local_c8,puVar9,(longlong)iVar11 * 2);
    FString::PathAppend(&local_c8,L"cohtml.WindowsDesktop.dll",0x19);
    cVar3 = FPaths::FileExists(&local_c8);
    if (cVar3 != '\0') {
      puVar9 = &DAT_143f3eda8;
      if ((int)local_c0 != 0) {
        puVar9 = local_c8;
      }
      uVar8 = FWindowsPlatformProcess::GetDllHandle(puVar9);
    }
    if (local_c8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *(ulonglong *)(param_1 + 0xd8) = uVar8;
  }
  puVar9 = &DAT_143f3eda8;
  if (local_58 != 0) {
    puVar9 = local_60;
  }
  FWindowsPlatformProcess::PopDllDirectory(puVar9);
  puVar9 = &DAT_143f3eda8;
  if (local_48 != 0) {
    puVar9 = local_50;
  }
  FWindowsPlatformProcess::PopDllDirectory(puVar9);
  puVar9 = &DAT_143f3eda8;
  if (local_78 != 0) {
    puVar9 = local_80;
  }
  FWindowsPlatformProcess::PopDllDirectory(puVar9);
  puVar9 = &DAT_143f3eda8;
  if (local_68 != 0) {
    puVar9 = local_70;
  }
  FWindowsPlatformProcess::PopDllDirectory(puVar9);
  if (local_60 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_50 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_80 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_70 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar13 != (undefined8 *)0x0) {
    FMemory::Free(puVar13);
  }
  return;
}



// FUNCTION 14044aaa0 FUN_14044aaa0 body=412 status=ok
// SIG undefined FUN_14044aaa0(void)

void FUN_14044aaa0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  HMODULE hLibModule;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  ulonglong uVar6;
  
  puVar3 = (undefined8 *)FName::FName(local_res8,"CoherentRenderingPlugin",1);
  uVar4 = FUN_14168dc80();
  FModuleManager::UnloadModule(uVar4,*puVar3,1);
  uVar6 = 0;
  if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x10))();
    plVar1 = *(longlong **)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,0);
    }
  }
  puVar3 = DAT_146850630;
  DAT_146850630 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = DAT_146850638;
  DAT_146850638 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = DAT_146850640;
  DAT_146850640 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar1 = *(longlong **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,1);
  }
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = *(undefined8 **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  uVar7 = uVar6;
  if (0 < *(int *)(param_1 + 0xe8)) {
    do {
      lVar2 = *(longlong *)(param_1 + 0xe0);
      hLibModule = *(HMODULE *)(lVar2 + 0x10 + uVar7);
      if (hLibModule != (HMODULE)0x0) {
        FWindowsPlatformProcess::FreeDllHandle(hLibModule);
        *(undefined8 *)(lVar2 + 0x10 + uVar7) = 0;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar7 = uVar7 + 0x18;
    } while ((int)uVar5 < *(int *)(param_1 + 0xe8));
  }
  if (*(HMODULE *)(param_1 + 0xd8) == (HMODULE)0x0) {
    return;
  }
  FWindowsPlatformProcess::FreeDllHandle(*(HMODULE *)(param_1 + 0xd8));
  return;
}



// FUNCTION 14044ac40 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FMeshCopyToPointsDataflowNode::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 14044aca0 FUN_14044aca0 body=89 status=ok
// SIG undefined FUN_14044aca0(void)

undefined1 FUN_14044aca0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_141d7c120();
  uVar2 = FUN_1419e0a40(param_2,param_1 + 0x110);
  FUN_1419e0a40(uVar2,param_1 + 0x116);
  return uVar1;
}



// FUNCTION 14044ad00 FUN_14044ad00 body=73 status=ok
// SIG undefined FUN_14044ad00(void)

longlong FUN_14044ad00(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 14044ad60 FUN_14044ad60 body=239 status=ok
// SIG undefined FUN_14044ad60(void)

undefined8 * FUN_14044ad60(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1d);
  plVar2 = (longlong *)param_1[0x1c];
  if (iVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = (longlong *)param_1[0x1c];
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  puVar1 = (undefined8 *)param_1[0x1a];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  plVar2 = (longlong *)param_1[0x19];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,0);
  }
  puVar1 = (undefined8 *)param_1[0x17];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  plVar2 = (longlong *)param_1[0x16];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,1);
  }
  FUN_140457dd0(param_1 + 1);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 14044ae60 FUN_14044ae60 body=63 status=ok
// SIG undefined FUN_14044ae60(void)

undefined8 * FUN_14044ae60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47bd8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      cohtml::Property::operator_delete(param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14044aea0 FUN_14044aea0 body=19 status=ok
// SIG undefined FUN_14044aea0(void)

bool FUN_14044aea0(void)

{
  char cVar1;
  
  cVar1 = FWeakObjectPtr::IsValid();
  return cVar1 == '\0';
}



// FUNCTION 14044aec0 operator==<UObject_const_,UObject_const_,FWeakObjectPtr> body=60 status=ok
// SIG undefined operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(void)

undefined8 operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(int *param_1,int *param_2)

{
  char cVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  cVar1 = FWeakObjectPtr::IsValid();
  if ((cVar1 == '\0') && (cVar1 = FWeakObjectPtr::IsValid(param_2), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 14044af00 FUN_14044af00 body=5 status=ok
// SIG undefined FUN_14044af00(void)

ulonglong FUN_14044af00(uint *param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  uint uVar2;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    in_RAX = (ulonglong)uVar1;
    if ((((-1 < (int)uVar1) && ((int)uVar1 < (int)DAT_1469e91c4)) &&
        (uVar2 = (int)uVar1 >> 0x1f & 0xffff, uVar1 = uVar1 + uVar2,
        in_RAX = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
                 (longlong)(int)((uVar1 & 0xffff) - uVar2) * 0x18, in_RAX != 0)) &&
       ((*(uint *)(in_RAX + 0x10) == param_1[1] && ((*(uint *)(in_RAX + 8) & 0x30000000) == 0)))) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14044af10 operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr> body=60 status=ok
// SIG undefined operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>(void)

undefined8
operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>(int *param_1,int *param_2)

{
  char cVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 0;
  }
  cVar1 = FWeakObjectPtr::IsValid();
  if ((cVar1 == '\0') && (cVar1 = FWeakObjectPtr::IsValid(param_2), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 14044af50 FUN_14044af50 body=197 status=ok
// SIG undefined FUN_14044af50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_14044af50(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 local_88;
  
  *param_2 = *(undefined4 *)*param_1;
  param_2[2] = local_88;
  *(undefined4 **)(param_2 + 4) = param_2 + 0xc;
  *(undefined4 **)(param_2 + 6) = param_2 + 8;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  puVar1 = *(undefined8 **)(param_2 + 4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  return param_2;
}



// FUNCTION 14044b020 FUN_14044b020 body=209 status=ok
// SIG undefined FUN_14044b020(void)

undefined8 *
FUN_14044b020(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar3 + 1,param_3);
    plVar3[2] = param_4;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f4d2d8;
  }
  *param_2 = 0;
  if (plVar3 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar5;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 14044b100 AddUniqueImpl<UGeometryCacheComponent_*_const_&> body=147 status=ok
// SIG undefined AddUniqueImpl<UGeometryCacheComponent_*_const_&>(void)

ulonglong TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  plVar2 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (plVar2 != plVar2 + (int)uVar1) {
    plVar3 = plVar2;
    do {
      if (*plVar3 == *param_2) {
        uVar4 = (longlong)plVar3 - (longlong)plVar2 >> 3;
        if ((int)uVar4 != -1) {
          return uVar4;
        }
        break;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2 + (int)uVar1);
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,uVar1);
  }
  *(longlong *)((longlong)(int)uVar1 * 8 + *param_1) = *param_2;
  return (ulonglong)uVar1;
}



// FUNCTION 14044b1a0 FUN_14044b1a0 body=213 status=ok
// SIG undefined FUN_14044b1a0(void)

void FUN_14044b1a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = param_2;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 14044b280 Contains<FString> body=127 status=ok
// SIG undefined Contains<FString>(void)

uint TArray<FString,FDefaultAllocator>::Contains<FString>(undefined8 *param_1,undefined8 *param_2)

{
  uint in_EAX;
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = puVar3 + (longlong)*(int *)(param_1 + 1) * 2;
  while( true ) {
    if (puVar3 == puVar4) {
      return in_EAX & 0xffffff00;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar3 + 1) == 0) {
      puVar1 = &DAT_143f3eda8;
    }
    else {
      puVar1 = (undefined2 *)*puVar3;
    }
    in_EAX = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar1,puVar2);
    if (in_EAX == 0) break;
    puVar3 = puVar3 + 2;
  }
  return 1;
}



// FUNCTION 14044b300 Convert<wchar_t,char> body=174 status=ok
// SIG undefined Convert<wchar_t,char>(void)

char * FGenericPlatformString::Convert<wchar_t,char>
                 (char *param_1,int param_2,short *param_3,int param_4,char param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  short *psVar6;
  
  bVar2 = false;
  pcVar4 = param_1;
  psVar6 = param_3;
  iVar5 = param_4;
  if (param_4 != 0) {
    do {
      if (param_2 == 0) {
        return (char *)0x0;
      }
      cVar3 = (char)*psVar6;
      if (((short)cVar3 == *psVar6) && (-1 < cVar3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      param_1 = pcVar4 + 1;
      if (!bVar1) {
        bVar2 = true;
        cVar3 = param_5;
      }
      *pcVar4 = cVar3;
      param_2 = param_2 + -1;
      iVar5 = iVar5 + -1;
      pcVar4 = param_1;
      psVar6 = psVar6 + 1;
    } while (iVar5 != 0);
    if (bVar2) {
      LogBogusChars<char,wchar_t>(param_3,param_4);
    }
  }
  return param_1;
}



// FUNCTION 14044b3b0 Convert_Impl<wchar_t_*> body=859 status=ok
// SIG undefined Convert_Impl<wchar_t_*>(void)

void FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>
               (longlong *param_1,int param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  
  pbVar2 = param_3;
  do {
    if ((param_3 + param_4 <= pbVar2) || (param_2 < 1)) {
      return;
    }
    bVar1 = *pbVar2;
    uVar7 = (int)(param_3 + param_4) - (int)pbVar2;
    uVar5 = 0x3f;
    if (bVar1 < 0x80) {
      pbVar8 = pbVar2 + 1;
      uVar5 = (uint)bVar1;
    }
    else if (bVar1 < 0xc0) {
      pbVar8 = pbVar2 + 1;
    }
    else {
      uVar4 = (uint)bVar1;
      if (bVar1 < 0xe0) {
        if (uVar7 < 2) {
          pbVar8 = pbVar2 + uVar7;
        }
        else if (((pbVar2[1] & 0xc0) == 0x80) &&
                (uVar7 = (uVar4 - 0xc0) * 0x40 | pbVar2[1] - 0x80, uVar7 - 0x80 < 0x780)) {
          pbVar8 = pbVar2 + 2;
          uVar5 = uVar7;
        }
        else {
LAB_14044b459:
          pbVar8 = pbVar2 + 1;
        }
      }
      else if (bVar1 < 0xf0) {
        if (uVar7 < 3) {
          pbVar8 = pbVar2 + uVar7;
        }
        else {
          pbVar8 = pbVar2 + 1;
          if (((pbVar2[1] & 0xc0) == 0x80) && ((pbVar2[2] & 0xc0) == 0x80)) {
            uVar7 = ((uVar4 - 0xe0) * 0x40 | pbVar2[1] - 0x80) << 6 | pbVar2[2] - 0x80;
            if ((uVar7 - 0xd800 < 0x400) || ((uVar7 - 0xdc00 < 0x400 || (0xf7fd < uVar7 - 0x800))))
            goto LAB_14044b459;
            pbVar8 = pbVar2 + 3;
            uVar5 = uVar7;
          }
        }
      }
      else if (bVar1 < 0xf8) {
        if (uVar7 < 4) {
          pbVar8 = pbVar2 + uVar7;
        }
        else {
          pbVar8 = pbVar2 + 1;
          if ((((pbVar2[1] & 0xc0) == 0x80) && ((pbVar2[2] & 0xc0) == 0x80)) &&
             ((pbVar2[3] & 0xc0) == 0x80)) {
            uVar7 = (((uVar4 - 0xf0) * 0x40 | pbVar2[1] - 0x80) << 6 | pbVar2[2] - 0x80) << 6 |
                    pbVar2[3] - 0x80;
            if (0xfffff < uVar7 - 0x10000) goto LAB_14044b459;
            pbVar8 = pbVar2 + 4;
            uVar5 = uVar7;
          }
        }
      }
      else if (bVar1 < 0xfc) {
        if (uVar7 < 5) {
          pbVar8 = pbVar2 + uVar7;
        }
        else if ((pbVar2[1] & 0xc0) == 0x80) {
          if ((pbVar2[2] & 0xc0) == 0x80) {
            if ((pbVar2[3] & 0xc0) == 0x80) {
              uVar5 = 0x3f;
              if ((pbVar2[4] & 0xc0) == 0x80) {
                pbVar8 = pbVar2 + 5;
              }
              else {
                pbVar8 = pbVar2 + 1;
              }
            }
            else {
              pbVar8 = pbVar2 + 1;
            }
          }
          else {
            pbVar8 = pbVar2 + 1;
          }
        }
        else {
          pbVar8 = pbVar2 + 1;
        }
      }
      else if (uVar7 < 6) {
        pbVar8 = pbVar2 + uVar7;
      }
      else if ((pbVar2[1] & 0xc0) == 0x80) {
        if ((pbVar2[2] & 0xc0) == 0x80) {
          if ((pbVar2[3] & 0xc0) == 0x80) {
            if ((pbVar2[4] & 0xc0) == 0x80) {
              if ((pbVar2[5] & 0xc0) == 0x80) {
                pbVar8 = pbVar2 + 6;
              }
              else {
                pbVar8 = pbVar2 + 1;
              }
            }
            else {
              pbVar8 = pbVar2 + 1;
            }
          }
          else {
            pbVar8 = pbVar2 + 1;
          }
        }
        else {
          pbVar8 = pbVar2 + 1;
        }
      }
      else {
        pbVar8 = pbVar2 + 1;
      }
    }
    uVar7 = uVar5 - 0x10000;
    if (uVar7 < 0x100000) {
      if (param_2 < 2) {
        uVar3 = 0x3f;
        goto LAB_14044b6d1;
      }
      *(short *)*param_1 = (short)(uVar7 >> 10) + -0x2800;
      *param_1 = *param_1 + 2;
      *(ushort *)*param_1 = ((ushort)uVar7 & 0x3ff) + 0xdc00;
      iVar6 = -2;
    }
    else {
      uVar3 = (undefined2)uVar5;
      if (0x10ffff < uVar5) {
        uVar3 = 0x3f;
      }
LAB_14044b6d1:
      *(undefined2 *)*param_1 = uVar3;
      iVar6 = -1;
    }
    *param_1 = *param_1 + 2;
    param_2 = param_2 + iVar6;
    pbVar2 = pbVar8;
  } while( true );
}



// FUNCTION 14044b710 Convert_Impl<UE4StringConv_Private::FCountingOutputIterator> body=735 status=ok
// SIG undefined Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>(void)

void FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
               (int *param_1,int param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = param_3;
  do {
    if ((param_3 + param_4 <= pbVar2) || (param_2 < 1)) {
      return;
    }
    bVar1 = *pbVar2;
    uVar5 = (uint)bVar1;
    uVar3 = (int)(param_3 + param_4) - (int)pbVar2;
    if (bVar1 < 0x80) {
      pbVar6 = pbVar2 + 1;
LAB_14044b8e6:
      if ((0xfffff < uVar5 - 0x10000) || (param_2 < 2)) goto LAB_14044b9cc;
      *param_1 = *param_1 + 2;
      iVar4 = -2;
    }
    else {
      if (bVar1 < 0xc0) {
        pbVar6 = pbVar2 + 1;
      }
      else {
        uVar5 = (uint)bVar1;
        if (bVar1 < 0xe0) {
          if (uVar3 < 2) {
            pbVar6 = pbVar2 + uVar3;
          }
          else {
            if (((pbVar2[1] & 0xc0) == 0x80) &&
               (uVar5 = (uVar5 - 0xc0) * 0x40 | pbVar2[1] - 0x80, uVar5 - 0x80 < 0x780)) {
              pbVar6 = pbVar2 + 2;
              goto LAB_14044b8e6;
            }
LAB_14044b78c:
            pbVar6 = pbVar2 + 1;
          }
        }
        else if (bVar1 < 0xf0) {
          if (uVar3 < 3) {
            pbVar6 = pbVar2 + uVar3;
          }
          else {
            pbVar6 = pbVar2 + 1;
            if (((pbVar2[1] & 0xc0) == 0x80) && ((pbVar2[2] & 0xc0) == 0x80)) {
              uVar5 = ((uVar5 - 0xe0) * 0x40 | pbVar2[1] - 0x80) << 6 | pbVar2[2] - 0x80;
              if ((uVar5 - 0xd800 < 0x400) || ((uVar5 - 0xdc00 < 0x400 || (0xf7fd < uVar5 - 0x800)))
                 ) goto LAB_14044b78c;
              pbVar6 = pbVar2 + 3;
              goto LAB_14044b8e6;
            }
          }
        }
        else if (bVar1 < 0xf8) {
          if (uVar3 < 4) {
            pbVar6 = pbVar2 + uVar3;
          }
          else {
            pbVar6 = pbVar2 + 1;
            if ((((pbVar2[1] & 0xc0) == 0x80) && ((pbVar2[2] & 0xc0) == 0x80)) &&
               ((pbVar2[3] & 0xc0) == 0x80)) {
              uVar5 = (((uVar5 - 0xf0) * 0x40 | pbVar2[1] - 0x80) << 6 | pbVar2[2] - 0x80) << 6 |
                      pbVar2[3] - 0x80;
              if (0xfffff < uVar5 - 0x10000) goto LAB_14044b78c;
              pbVar6 = pbVar2 + 4;
              goto LAB_14044b8e6;
            }
          }
        }
        else if (bVar1 < 0xfc) {
          if (uVar3 < 5) {
            pbVar6 = pbVar2 + uVar3;
          }
          else if ((pbVar2[1] & 0xc0) == 0x80) {
            if ((pbVar2[2] & 0xc0) == 0x80) {
              if ((pbVar2[3] & 0xc0) == 0x80) {
                if ((pbVar2[4] & 0xc0) == 0x80) {
                  pbVar6 = pbVar2 + 5;
                }
                else {
                  pbVar6 = pbVar2 + 1;
                }
              }
              else {
                pbVar6 = pbVar2 + 1;
              }
            }
            else {
              pbVar6 = pbVar2 + 1;
            }
          }
          else {
            pbVar6 = pbVar2 + 1;
          }
        }
        else if (uVar3 < 6) {
          pbVar6 = pbVar2 + uVar3;
        }
        else if ((pbVar2[1] & 0xc0) == 0x80) {
          if ((pbVar2[2] & 0xc0) == 0x80) {
            if ((pbVar2[3] & 0xc0) == 0x80) {
              if ((pbVar2[4] & 0xc0) == 0x80) {
                if ((pbVar2[5] & 0xc0) == 0x80) {
                  pbVar6 = pbVar2 + 6;
                }
                else {
                  pbVar6 = pbVar2 + 1;
                }
              }
              else {
                pbVar6 = pbVar2 + 1;
              }
            }
            else {
              pbVar6 = pbVar2 + 1;
            }
          }
          else {
            pbVar6 = pbVar2 + 1;
          }
        }
        else {
          pbVar6 = pbVar2 + 1;
        }
      }
LAB_14044b9cc:
      *param_1 = *param_1 + 1;
      iVar4 = -1;
    }
    param_2 = param_2 + iVar4;
    pbVar2 = pbVar6;
  } while( true );
}



// FUNCTION 14044b9f0 CopyToEmpty<FFullyLoadedPackagesInfo> body=297 status=ok
// SIG undefined CopyToEmpty<FFullyLoadedPackagesInfo>(void)

void TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::CopyToEmpty<FFullyLoadedPackagesInfo>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar5 = (undefined1 *)*param_1;
  if (param_3 != 0) {
    piVar4 = (int *)(param_2 + 0x30);
    puVar3 = (undefined4 *)(puVar5 + 0x24);
    do {
      *puVar5 = (char)piVar4[-0xc];
      FString::FString(puVar3 + -7,piVar4 + -10);
      *(undefined8 *)(puVar3 + -3) = 0;
      iVar1 = piVar4[-4];
      pvVar2 = *(void **)(piVar4 + -6);
      puVar3[-1] = iVar1;
      if (iVar1 == 0) {
        *puVar3 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar3 + -3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar3 + -3),pvVar2,(longlong)iVar1 << 3);
      }
      *(undefined8 *)(puVar3 + 1) = 0;
      iVar1 = *piVar4;
      pvVar2 = *(void **)(piVar4 + -2);
      puVar3[3] = iVar1;
      if (iVar1 == 0) {
        puVar3[4] = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar3 + 1,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar3 + 1),pvVar2,(longlong)iVar1 << 3);
      }
      puVar5 = puVar5 + 0x38;
      puVar3 = puVar3 + 0xe;
      piVar4 = piVar4 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14044bb20 FUN_14044bb20 body=348 status=ok
// SIG undefined FUN_14044bb20(void)

undefined8 * FUN_14044bb20(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_143f4d350;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
    *puVar10 = &PTR_GetPoolName_143f4d398;
  }
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14044bc80 FUN_14044bc80 body=459 status=ok
// SIG undefined FUN_14044bc80(void)

undefined8 * FUN_14044bc80(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  if (*(char *)(param_1 + 10) != '\0') {
    *(undefined1 *)(param_1 + 10) = 0;
    UWorld::RemoveOnActorSpawnedHandler(*param_1,param_1[9]);
    if (param_1[6] != 0) {
      FMemory::Free();
    }
    if (param_1[1] != 0) {
      FMemory::Free();
    }
  }
  lVar4 = *param_3;
  lVar7 = 0;
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar2 = lVar7;
  if (lVar4 != 0) {
    lVar1 = FUN_1428dfc70();
    lVar6 = lVar4;
    do {
      lVar2 = lVar4;
      if (lVar6 == lVar1) break;
      lVar6 = *(longlong *)(lVar6 + 0x30);
      lVar2 = lVar7;
    } while (lVar6 != 0);
  }
  param_1[8] = lVar2;
  param_1[9] = 0;
  lVar2 = lVar7;
  if (lVar4 != 0) {
    lVar1 = FUN_1428dfc70();
    lVar6 = lVar4;
    do {
      lVar2 = lVar4;
      if (lVar6 == lVar1) break;
      lVar6 = *(longlong *)(lVar6 + 0x30);
      lVar2 = lVar7;
    } while (lVar6 != 0);
  }
  FUN_1417a5560(lVar2,param_1 + 1,1,0x10,0x20000000);
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = (longlong)param_1;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FActorIteratorState::OnActorSpawned;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar5 = (undefined8 *)UWorld::AddOnActorSpawnedHandler(*param_1,local_res8,&local_18);
  param_1[9] = *puVar5;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14044be2f;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14044be2f:
  *(undefined1 *)(param_1 + 10) = 1;
  return param_1;
}



// FUNCTION 14044be50 FUN_14044be50 body=682 status=ok
// SIG undefined FUN_14044be50(void)

int * FUN_14044be50(longlong *param_1,int *param_2,uint *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  
  iVar7 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0xc);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0xc) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar5 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar15 = false;
  puVar13 = (uint *)((longlong)plVar6 + lVar5);
  *puVar13 = *puVar13 | 1 << ((byte)iVar10 & 0x1f);
  lVar1 = (longlong)iVar10 * 0xc;
  puVar13 = (uint *)(*param_1 + lVar1);
  *puVar13 = *param_3;
  puVar13[1] = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar13) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(uint *)(*param_1 + (longlong)iVar8 * 0xc) == *puVar13) break;
          iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0xc);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    bVar15 = iVar9 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0xc),puVar13,4);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0xc) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar6 + lVar5);
      *puVar13 = *puVar13 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14044c0d5;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar14;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)param_1[9] - 1U & *puVar13;
    puVar13[2] = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar13[1] = *(uint *)((longlong)plVar6 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
LAB_14044c0d5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 14044c100 FUN_14044c100 body=804 status=ok
// SIG undefined FUN_14044c100(void)

uint * FUN_14044c100(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *_Src;
  uint *puVar15;
  undefined4 uVar16;
  bool bVar17;
  uint local_res8 [2];
  uint *local_res10;
  
  iVar11 = 1;
  uVar16 = 0xffffffff;
  local_res10 = param_2;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar12 = *(int *)(*param_1 + 4 + (longlong)(int)uVar10 * 0x28);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x28) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar6 = (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar15 = (uint *)((longlong)plVar7 + lVar6);
  *puVar15 = *puVar15 | 1 << ((byte)uVar10 & 0x1f);
  lVar1 = (longlong)(int)uVar10 * 0x28;
  _Src = (ulonglong *)(*param_1 + lVar1);
  uVar2 = *(ulonglong *)*param_3;
  _Src[1] = 0;
  _Src[2] = 0;
  *_Src = uVar2;
  _Src[3] = 0;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar2);
    uVar5 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar9 * 0x28),_Src,0x20);
      bVar3 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = uVar10;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar1 + lVar9) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar9) = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar7 + lVar6);
      *local_res10 = uVar5;
      *puVar15 = *puVar15 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14044c3f5;
    }
  }
  if (3 < uVar14) {
    uVar5 = (uVar14 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar12 = 0x20;
    cVar8 = '\0';
    if (uVar5 != 0) {
      iVar12 = 0x1f - iVar11;
    }
    uVar5 = (uVar14 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar8 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar11 = (int)(*_Src >> 4);
    uVar5 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar13 = -(uVar5 + iVar11) ^ uVar5 >> 0xd;
    uVar14 = (iVar11 - uVar5) - uVar13 ^ uVar13 >> 0xc;
    uVar5 = (uVar5 - uVar14) - uVar13 ^ uVar14 << 0x10;
    uVar13 = (uVar13 - uVar5) - uVar14 ^ uVar5 >> 5;
    uVar14 = (uVar14 - uVar5) - uVar13 ^ uVar13 >> 3;
    uVar5 = (uVar5 - uVar14) - uVar13 ^ uVar14 << 10;
    uVar14 = ((uVar13 - uVar5) - uVar14 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar14;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         uVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14044c3f5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return local_res10;
}



// FUNCTION 14044c430 FUN_14044c430 body=388 status=ok
// SIG undefined FUN_14044c430(void)

int * FUN_14044c430(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_28 [2];
  uint *local_20;
  
  TSparseArray<TSetElement<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,0>___cdecl(FTextFormatString_const_&)>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  FUN_14044af50(param_3,local_20);
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
          if (*(uint *)((longlong)iVar3 * 0x80 + *param_1) == *local_20) goto LAB_14044c4eb;
          iVar3 = *(int *)((longlong)iVar3 * 0x80 + 0x78 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_14044c4eb:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar3 * 0x80 + *param_1),local_20,0x78);
      FUN_140483a60(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_14044c58a;
    }
  }
  cVar1 = TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
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
LAB_14044c58a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 14044c5c0 FUN_14044c5c0 body=743 status=ok
// SIG undefined FUN_14044c5c0(void)

int * FUN_14044c5c0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  void *_Dst;
  ulonglong *_Src;
  bool bVar16;
  int local_res8 [2];
  int *local_res10;
  undefined8 *local_res18;
  undefined1 *local_res20;
  
  local_res10 = param_2;
  local_res20 = param_4;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar14 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar14;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar2 = *puVar2 | 1 << ((byte)iVar14 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar14 * 0x20 + *param_1);
  uVar4 = *(ulonglong *)*local_res18;
  *_Src = uVar4;
  _Src[1] = 0;
  _Src[2] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  iVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar14 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar4);
    iVar1 = local_res8[0];
    lVar13 = (longlong)local_res8[0];
    bVar16 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      _Dst = (void *)(lVar13 * 0x20 + *param_1);
      iVar14 = *(int *)((longlong)_Dst + 0x10);
      lVar13 = *(longlong *)((longlong)_Dst + 8);
      if (iVar14 != 0) {
        do {
          FUN_140458360(lVar13);
          lVar13 = lVar13 + 0x20;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        lVar13 = *(longlong *)((longlong)_Dst + 8);
      }
      if (lVar13 != 0) {
        FMemory::Free(lVar13);
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar14 = *local_res10;
      bVar5 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar14;
      }
      uVar7 = 0xffffffff;
      puVar11 = (undefined4 *)((longlong)iVar14 * 0x20 + *param_1);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar7 = (undefined4)param_1[6];
      }
      puVar11[1] = uVar7;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar8 = (longlong *)param_1[4];
      *local_res10 = iVar1;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar2 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      uVar12 = (undefined1)local_res8[0];
      goto LAB_14044c88b;
    }
  }
  uVar12 = 0;
  cVar6 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar14,0);
  local_res10 = param_2;
  local_res20 = param_4;
  if (cVar6 == '\0') {
    iVar14 = (int)(*_Src >> 4);
    uVar10 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
    uVar15 = -(uVar10 + iVar14) ^ uVar10 >> 0xd;
    uVar9 = (iVar14 - uVar10) - uVar15 ^ uVar15 >> 0xc;
    uVar10 = (uVar10 - uVar9) - uVar15 ^ uVar9 << 0x10;
    uVar15 = (uVar15 - uVar10) - uVar9 ^ uVar10 >> 5;
    uVar9 = (uVar9 - uVar10) - uVar15 ^ uVar15 >> 3;
    uVar10 = (uVar10 - uVar9) - uVar15 ^ uVar9 << 10;
    uVar9 = ((uVar15 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar9;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_14044c88b:
  if (local_res20 != (undefined1 *)0x0) {
    *local_res20 = uVar12;
  }
  return local_res10;
}



// FUNCTION 14044c8b0 FUN_14044c8b0 body=689 status=ok
// SIG undefined FUN_14044c8b0(void)

int * FUN_14044c8b0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong *_Src;
  uint *puVar15;
  undefined4 uVar16;
  bool bVar17;
  undefined4 local_res8;
  int local_res10;
  
  uVar16 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar9;
  local_res8 = (uint)local_res8._2_2_ << 0x10;
  lVar7 = (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar15 = (uint *)((longlong)plVar8 + lVar7);
  *puVar15 = *puVar15 | 1 << ((byte)iVar9 & 0x1f);
  lVar1 = (longlong)iVar9 * 0x18;
  _Src = (ulonglong *)(*param_1 + lVar1);
  uVar3 = *(ulonglong *)*param_3;
  *(undefined2 *)(_Src + 1) = 0;
  *_Src = uVar3;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  local_res10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (local_res10 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,&local_res8,uVar3);
    iVar2 = local_res8;
    lVar13 = (longlong)local_res8;
    bVar17 = local_res8 != -1;
    local_res8 = CONCAT31(local_res8._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar13 * 0x18),_Src,0x10);
      bVar4 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar9;
      }
      lVar13 = *param_1;
      *(undefined4 *)(lVar1 + lVar13) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar13) = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar2;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar8 + lVar7);
      *puVar15 = *puVar15 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      uVar12 = (undefined1)local_res8;
      goto LAB_14044cb37;
    }
  }
  uVar12 = 0;
  cVar5 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,local_res10,0);
  if (cVar5 == '\0') {
    iVar9 = (int)(*_Src >> 4);
    uVar11 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar14 = -(iVar9 + uVar11) ^ uVar11 >> 0xd;
    uVar10 = (iVar9 - uVar11) - uVar14 ^ uVar14 >> 0xc;
    uVar11 = (uVar11 - uVar10) - uVar14 ^ uVar10 << 0x10;
    uVar14 = (uVar14 - uVar11) - uVar10 ^ uVar11 >> 5;
    uVar10 = (uVar10 - uVar11) - uVar14 ^ uVar14 >> 3;
    uVar11 = (uVar11 - uVar10) - uVar14 ^ uVar10 << 10;
    uVar10 = ((uVar14 - uVar11) - uVar10 ^ uVar11 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar10;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_14044cb37:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar12;
  }
  return param_2;
}



// FUNCTION 14044cb70 FUN_14044cb70 body=618 status=ok
// SIG undefined FUN_14044cb70(void)

uint * FUN_14044cb70(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 uVar11;
  bool bVar12;
  uint local_res8 [2];
  
  uVar11 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar9 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = *(uint *)(param_1 + 6);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)(int)uVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = uVar9;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)(int)uVar9 * 0x28);
  FString::FString(_Src,*param_3);
  _Src[2] = 0;
  _Src[3] = 0;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar9 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar12 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar12);
    if (bVar12) {
      plVar7 = (longlong *)(*param_1 + lVar10 * 0x28);
      if (*(longlong *)(*param_1 + 0x10 + lVar10 * 0x28) != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar7,_Src,0x20);
      uVar6 = *param_2;
      bVar3 = (byte)uVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = uVar6;
      }
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + (longlong)(int)uVar6 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar11 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar10 + 4 + (longlong)(int)uVar6 * 0x28) = uVar11;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar6;
      plVar7 = (longlong *)param_1[4];
      *param_2 = uVar9;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14044cdb4;
    }
  }
  cVar4 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    uVar9 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar6 = FUN_140438070(puVar8);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Src + 0x24) = uVar6;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         uVar9;
  }
LAB_14044cdb4:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 14044cde0 FUN_14044cde0 body=469 status=ok
// SIG undefined FUN_14044cde0(void)

int * FUN_14044cde0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char cVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,0>___cdecl(FTextFormatString_const_&)>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (uint *)param_3[1];
  bVar14 = false;
  puVar2 = (uint *)*param_3;
  *param_2 = local_38[0];
  *local_30 = *puVar2;
  local_30[2] = *puVar1;
  *(uint **)(local_30 + 4) = local_30 + 0xc;
  *(uint **)(local_30 + 6) = local_30 + 8;
  uVar8 = (*(undefined8 **)(puVar1 + 4))[1];
  *(undefined8 *)(local_30 + 8) = **(undefined8 **)(puVar1 + 4);
  *(undefined8 *)(local_30 + 10) = uVar8;
  puVar3 = *(undefined8 **)(puVar1 + 2);
  puVar4 = *(undefined8 **)(local_30 + 4);
  uVar8 = puVar3[1];
  *puVar4 = *puVar3;
  puVar4[1] = uVar8;
  uVar8 = puVar3[3];
  puVar4[2] = puVar3[2];
  puVar4[3] = uVar8;
  uVar5 = *(undefined4 *)((longlong)puVar3 + 0x24);
  uVar6 = *(undefined4 *)(puVar3 + 5);
  uVar7 = *(undefined4 *)((longlong)puVar3 + 0x2c);
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar3 + 4);
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar5;
  *(undefined4 *)(puVar4 + 5) = uVar6;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = uVar7;
  uVar5 = *(undefined4 *)((longlong)puVar3 + 0x34);
  uVar6 = *(undefined4 *)(puVar3 + 7);
  uVar7 = *(undefined4 *)((longlong)puVar3 + 0x3c);
  *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(puVar3 + 6);
  *(undefined4 *)((longlong)puVar4 + 0x34) = uVar5;
  *(undefined4 *)(puVar4 + 7) = uVar6;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uVar7;
  *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(puVar3 + 8);
  local_30[0x1e] = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar13 != 1) {
    if (iVar13 != 0) {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar11 = *(int *)((longlong)plVar10 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar11 != -1) {
        do {
          if (*(uint *)((longlong)iVar11 * 0x80 + *param_1) == *local_30) goto LAB_14044ceeb;
          iVar11 = *(int *)((longlong)iVar11 * 0x80 + 0x78 + *param_1);
        } while (iVar11 != -1);
      }
    }
    iVar11 = -1;
LAB_14044ceeb:
    bVar14 = iVar11 != -1;
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar11 * 0x80 + *param_1),local_30,0x78);
      FUN_140483a60(param_1,local_38[0],1);
      *param_2 = iVar11;
      goto LAB_14044cf8c;
    }
  }
  cVar9 = TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar9 == '\0') {
    uVar12 = (int)param_1[9] - 1U & *local_30;
    local_30[0x1f] = uVar12;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    local_30[0x1e] =
         *(uint *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4)
    ;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
LAB_14044cf8c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 14044cfc0 FUN_14044cfc0 body=645 status=ok
// SIG undefined FUN_14044cfc0(void)

int * FUN_14044cfc0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool local_res8;
  
  iVar11 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_res8 = false;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar10 * 0x18);
  puVar2 = (undefined8 *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  *(undefined8 *)(puVar1 + 2) = *puVar2;
  puVar1[4] = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    iVar8 = iVar11;
    if (iVar10 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar6 != -1) {
        do {
          iVar8 = iVar6;
          if (*(uint *)(*param_1 + (longlong)iVar6 * 0x18) == *puVar1) break;
          iVar6 = *(int *)(*param_1 + 0x10 + (longlong)iVar6 * 0x18);
          iVar8 = iVar11;
        } while (iVar6 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      lVar3 = *param_1;
      puVar2 = *(undefined8 **)(lVar3 + 8 + (longlong)iVar8 * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + (longlong)iVar8 * 0x18),puVar1,0x10);
      iVar10 = *param_2;
      bVar4 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar3 + (longlong)iVar10 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar11 = (int)param_1[6];
      }
      *(int *)(lVar3 + 4 + (longlong)iVar10 * 0x18) = iVar11;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_14044d21f;
    }
  }
  cVar5 = TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar5 == '\0') {
    uVar9 = (int)param_1[9] - 1U & *puVar1;
    puVar1[5] = uVar9;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar1[4] = *(uint *)((longlong)plVar7 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_14044d21f:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14044d250 FUN_14044d250 body=628 status=ok
// SIG undefined FUN_14044d250(void)

int * FUN_14044d250(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  iVar9 = 1;
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
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar12 = false;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar8 * 0x28);
  puVar3 = (uint *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  uVar11 = puVar3[1];
  uVar5 = puVar3[2];
  uVar4 = puVar3[3];
  puVar1[2] = *puVar3;
  puVar1[3] = uVar11;
  puVar1[4] = uVar5;
  puVar1[5] = uVar4;
  *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(puVar3 + 4);
  puVar1[8] = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    if (uVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar6 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar10 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar10 * 0x28) == *puVar1) goto LAB_14044d3ac;
          iVar10 = *(int *)(*param_1 + 0x20 + (longlong)iVar10 * 0x28);
        } while (iVar10 != -1);
      }
    }
    iVar10 = -1;
LAB_14044d3ac:
    bVar12 = iVar10 != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x28),puVar1,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar8,1);
      *param_2 = iVar10;
      goto LAB_14044d49b;
    }
  }
  if (3 < uVar11) {
    uVar5 = (uVar11 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar7 = '\0';
    if (uVar5 != 0) {
      iVar10 = 0x1f - iVar9;
    }
    uVar5 = (uVar11 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar7 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar11 = (int)param_1[9] - 1U & *puVar1;
    puVar1[9] = uVar11;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar1[8] = *(uint *)((longlong)plVar6 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14044d49b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 14044d4d0 FUN_14044d4d0 body=681 status=ok
// SIG undefined FUN_14044d4d0(void)

int * FUN_14044d4d0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *_Src;
  void *_Dst;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool local_res8;
  int local_res10 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow();
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar12 = *(int *)(*param_1 + 4 + (longlong)iVar13 * 0x48);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x48) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar13 & 0x1f);
  lVar4 = param_3[1];
  _Src = (ulonglong *)(*param_1 + (longlong)iVar13 * 0x48);
  puVar5 = (ulonglong *)*param_3;
  *_Src = *puVar5;
  uVar6 = puVar5[1];
  _Src[1] = uVar6;
  if (uVar6 != 0) {
    LOCK();
    *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
    UNLOCK();
  }
  TTuple<FString,TArray<FString,FDefaultAllocator>_>::
  TTuple<FString,TArray<FString,FDefaultAllocator>_>(_Src + 2,lVar4);
  _Src[6] = *(ulonglong *)(lVar4 + 0x20);
  _Src[7] = *(ulonglong *)(lVar4 + 0x28);
  *(undefined4 *)(_Src + 8) = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar13 != 1) {
    FUN_14046bf60(param_1,local_res10,_Src);
    iVar12 = local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)local_res10[0] * 0x48);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
                ((longlong)_Dst + 0x10);
      plVar9 = *(longlong **)((longlong)_Dst + 8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        iVar12 = local_res10[0];
        if ((int)lVar4 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar12 = local_res10[0];
          if (iVar13 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
            iVar12 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x40);
      FUN_140483b20(param_1,*param_2,1);
      *param_2 = iVar12;
      goto LAB_14044d753;
    }
  }
  cVar7 = TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar7 == '\0') {
    iVar13 = (int)(*_Src >> 4);
    uVar11 = 0x9e3779b9U - iVar13 ^ iVar13 << 8;
    uVar14 = -(iVar13 + uVar11) ^ uVar11 >> 0xd;
    uVar10 = (iVar13 - uVar11) - uVar14 ^ uVar14 >> 0xc;
    uVar11 = (uVar11 - uVar10) - uVar14 ^ uVar10 << 0x10;
    uVar14 = (uVar14 - uVar11) - uVar10 ^ uVar11 >> 5;
    uVar10 = (uVar10 - uVar11) - uVar14 ^ uVar14 >> 3;
    uVar11 = (uVar11 - uVar10) - uVar14 ^ uVar10 << 10;
    uVar10 = ((uVar14 - uVar11) - uVar10 ^ uVar11 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x44) = uVar10;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 8) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_14044d753:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14044d780 FUN_14044d780 body=494 status=ok
// SIG undefined FUN_14044d780(void)

int * FUN_14044d780(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined8 *_Src;
  longlong *plVar12;
  bool bVar13;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar11 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar3 = (undefined4 *)param_3[1];
  _Src = (undefined8 *)((longlong)iVar11 * 0x38 + *param_1);
  FString::FString(_Src,*param_3);
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  bVar13 = false;
  *(undefined4 *)(_Src + 2) = *puVar3;
  *(undefined4 *)((longlong)_Src + 0x14) = uVar4;
  *(undefined4 *)(_Src + 3) = uVar5;
  *(undefined4 *)((longlong)_Src + 0x1c) = uVar6;
  uVar4 = puVar3[5];
  uVar5 = puVar3[6];
  uVar6 = puVar3[7];
  *(undefined4 *)(_Src + 4) = puVar3[4];
  *(undefined4 *)((longlong)_Src + 0x24) = uVar4;
  *(undefined4 *)(_Src + 5) = uVar5;
  *(undefined4 *)((longlong)_Src + 0x2c) = uVar6;
  *(undefined4 *)(_Src + 6) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar13 = local_res8[0] != -1;
    if (bVar13) {
      plVar12 = (longlong *)((longlong)local_res8[0] * 0x38 + *param_1);
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar12,_Src,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14044d94b;
    }
  }
  cVar7 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    iVar11 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*_Src;
    }
    uVar9 = FUN_140438070(puVar10);
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)((longlong)_Src + 0x34) = uVar9;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 6) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar11;
  }
LAB_14044d94b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 14044d970 FUN_14044d970 body=617 status=ok
// SIG undefined FUN_14044d970(void)

uint * FUN_14044d970(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined8 *_Src;
  bool bVar14;
  uint local_res8 [2];
  
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)(int)uVar10 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = uVar10;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar10 & 0x1f);
  _Src = (undefined8 *)((longlong)(int)uVar10 * 0x20 + *param_1);
  puVar4 = (undefined8 *)param_3[1];
  FString::FString(_Src,*param_3);
  _Src[2] = *puVar4;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar10 = local_res8[0];
    lVar11 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      plVar12 = (longlong *)(lVar11 * 0x20 + *param_1);
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar12,_Src,0x18);
      uVar7 = *param_2;
      bVar5 = (byte)uVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar7;
      }
      puVar9 = (undefined4 *)((longlong)(int)uVar7 * 0x20 + *param_1);
      *puVar9 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar9[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar7;
      plVar12 = (longlong *)param_1[4];
      *param_2 = uVar10;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar2 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_14044dbb5;
    }
  }
  cVar6 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar6 == '\0') {
    uVar10 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar7 = FUN_140438070(puVar8);
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)_Src + 0x1c) = uVar7;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(uint *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         uVar10;
  }
LAB_14044dbb5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 14044dbe0 FUN_14044dbe0 body=726 status=ok
// SIG undefined FUN_14044dbe0(void)

int * FUN_14044dbe0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined2 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  undefined8 *_Src;
  bool local_res8;
  
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar6 = *(int *)((longlong)iVar12 * 0x20 + 4 + *param_1);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar15 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar15 == (longlong *)0x0) {
    plVar15 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar15 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar12 * 0x20 + *param_1);
  puVar2 = (undefined8 *)param_3[1];
  FString::FString(_Src,*param_3);
  puVar13 = &DAT_143f3eda8;
  _Src[2] = *puVar2;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar12 = iVar16;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      if (*(int *)(_Src + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*_Src;
      }
      iVar5 = FUN_140438070(puVar10);
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar8 = *param_1;
        do {
          lVar14 = (longlong)iVar5 * 0x20;
          if (*(int *)(_Src + 1) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = (undefined2 *)*_Src;
          }
          if (*(int *)(lVar14 + 8 + lVar8) == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = *(undefined2 **)(lVar14 + lVar8);
          }
          iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
          iVar12 = iVar5;
          if (iVar6 == 0) break;
          lVar8 = *param_1;
          iVar5 = *(int *)(lVar8 + 0x18 + lVar14);
          iVar12 = iVar16;
        } while (iVar5 != -1);
      }
    }
    local_res8 = iVar12 != -1;
    if (local_res8) {
      plVar15 = (longlong *)((longlong)iVar12 * 0x20 + *param_1);
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar15,_Src,0x18);
      iVar5 = *param_2;
      bVar3 = (byte)iVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar5;
      }
      puVar11 = (undefined4 *)((longlong)iVar5 * 0x20 + *param_1);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      puVar11[1] = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar5;
      plVar15 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar15 == (longlong *)0x0) {
        plVar15 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar15 +
                       (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14044de8d;
    }
  }
  cVar4 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar16 = *param_2;
    if (*(int *)(_Src + 1) != 0) {
      puVar13 = (undefined2 *)*_Src;
    }
    uVar7 = FUN_140438070(puVar13);
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)_Src + 0x1c) = uVar7;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         iVar16;
  }
LAB_14044de8d:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14044dec0 FUN_14044dec0 body=738 status=ok
// SIG undefined FUN_14044dec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14044dec0(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  wchar_t *_Str;
  ulonglong uVar11;
  undefined8 local_res20;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  ulonglong local_c0;
  int local_b8;
  ulonglong local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  longlong local_98;
  char local_84;
  ulonglong local_78;
  longlong local_70;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar11 = 0;
  local_res20 = param_4;
  uVar6 = APlayerStateGunfire::GetPrivateStaticClass();
  local_b0 = uVar11;
  if (uVar6 != 0) {
    uVar7 = APlayerStateGunfire::GetPrivateStaticClass();
    uVar10 = uVar6;
    do {
      local_b0 = uVar6;
      if (uVar10 == uVar7) break;
      uVar10 = *(ulonglong *)(uVar10 + 0x30);
      local_b0 = uVar11;
    } while (uVar10 != 0);
  }
  local_a8[0] = 5;
  local_50 = '\0';
  local_c8 = param_3;
  FUN_14044bc80(&local_a0,&local_c8,&local_b0);
  FUN_14045a130(local_a8);
  uVar6 = uVar11;
  if (local_84 == '\0') {
    uVar6 = local_78;
  }
  if (local_50 != '\0') {
    local_50 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  if (uVar6 == 0) {
    return;
  }
  iVar3 = -1;
  if (0 < (int)param_2[1]) {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_2;
    }
    iVar3 = _wtoi(_Str);
  }
  bVar2 = false;
  while ((iVar5 = (int)uVar11, -1 < iVar5 && (iVar5 < *(int *)(uVar6 + 0x490)))) {
    lVar8 = FWeakObjectPtr::Get(*(longlong *)(uVar6 + 0x488) + (longlong)iVar5 * 8);
    plVar9 = *(longlong **)(*(longlong *)(lVar8 + 0x200) + 8);
    if ((plVar9 != (longlong *)0x0) &&
       ((iVar3 == -1 || (iVar4 = (**(code **)(*plVar9 + 0x38))(plVar9), iVar4 == iVar3)))) {
      FUN_14045a330(&local_res20,plVar9);
      bVar2 = true;
    }
    uVar11 = (ulonglong)(iVar5 + 1);
  }
  FUN_140450fe0(&local_c8,0x10,1);
  uVar6 = local_c0 & 0xffffffff;
  do {
    if ((local_b8 < 0) || ((int)uVar6 <= local_b8)) {
      if (local_c8 != 0) {
        FMemory::Free(local_c8);
      }
      if (bVar2) {
        return;
      }
      plVar9 = (longlong *)UWorld::GetFirstPlayerController(param_3);
      if (plVar9 == (longlong *)0x0) {
        return;
      }
      local_c8 = 0;
      local_c0 = 0x51;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      FGenericPlatformString::Memcpy
                (local_c8,
                 L"Command execution failed - either the specified id is invalid or no views exists"
                 ,0xa2);
      local_b0 = 0;
      (**(code **)(*plVar9 + 0xc60))(plVar9,&local_c8,0,0);
      if (local_c8 == 0) {
        return;
      }
      FMemory::Free();
      return;
    }
    lVar8 = (**(code **)(**(longlong **)(local_c8 + (longlong)local_b8 * 8) + 0x148))();
    if (lVar8 == param_3) {
      lVar8 = *(longlong *)(local_c8 + (longlong)local_b8 * 8);
      lVar1 = *(longlong *)(lVar8 + 0x100);
      if (lVar1 == 0) {
        plVar9 = *(longlong **)(lVar8 + 0x110);
      }
      else {
        plVar9 = *(longlong **)(*(longlong *)(lVar1 + 0x240) + 8);
      }
      if ((plVar9 != (longlong *)0x0) &&
         ((iVar3 == -1 || (iVar5 = (**(code **)(*plVar9 + 0x38))(plVar9), iVar5 == iVar3)))) {
        FUN_14045a330(&local_res20,plVar9);
        bVar2 = true;
      }
    }
    uVar6 = local_c0 & 0xffffffff;
    do {
      local_b8 = local_b8 + 1;
      if ((int)local_c0 <= local_b8) break;
    } while (*(longlong *)(local_c8 + (longlong)local_b8 * 8) == 0);
  } while( true );
}



// FUNCTION 14044e1b0 FUN_14044e1b0 body=702 status=ok
// SIG undefined FUN_14044e1b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14044e1b0(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 local_res20;
  undefined1 auStack_108 [32];
  char local_e8 [8];
  longlong local_e0;
  ulonglong local_d8;
  int local_d0;
  int local_c8 [2];
  ulonglong local_c0;
  undefined4 local_b8 [2];
  int *local_b0;
  undefined4 *local_a8;
  undefined8 *local_a0;
  char *local_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  longlong local_80;
  char local_6c;
  ulonglong local_60;
  longlong local_58;
  undefined8 local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar9 = 0;
  local_res20 = param_4;
  uVar2 = APlayerStateGunfire::GetPrivateStaticClass();
  local_c0 = uVar9;
  if (uVar2 != 0) {
    uVar3 = APlayerStateGunfire::GetPrivateStaticClass();
    uVar6 = uVar2;
    do {
      local_c0 = uVar2;
      if (uVar6 == uVar3) break;
      uVar6 = *(ulonglong *)(uVar6 + 0x30);
      local_c0 = uVar9;
    } while (uVar6 != 0);
  }
  local_90[0] = 5;
  local_38 = '\0';
  local_e0 = param_3;
  FUN_14044bc80(&local_88,&local_e0,&local_c0);
  FUN_14045a130(local_90);
  uVar2 = uVar9;
  if (local_6c == '\0') {
    uVar2 = local_60;
  }
  if (local_38 != '\0') {
    local_38 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_88,local_40);
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  if (uVar2 == 0) {
    return;
  }
  local_b8[0] = 0xffffffff;
  local_c8[0] = -1;
  if (0 < (int)param_2[1]) {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_2;
    }
    local_c8[0] = _wtoi(_Str);
  }
  local_b0 = local_c8;
  local_e8[0] = '\0';
  local_a8 = local_b8;
  local_a0 = &local_res20;
  local_98 = local_e8;
  while ((iVar8 = (int)uVar9, -1 < iVar8 && (iVar8 < *(int *)(uVar2 + 0x490)))) {
    lVar4 = FWeakObjectPtr::Get(*(longlong *)(uVar2 + 0x488) + (longlong)iVar8 * 8);
    FUN_14045b7c0(&local_b0,*(undefined8 *)(*(longlong *)(lVar4 + 0x200) + 8));
    uVar9 = (ulonglong)(iVar8 + 1);
  }
  FUN_140450fe0(&local_e0,0x10,1);
  uVar2 = local_d8 & 0xffffffff;
  do {
    if ((local_d0 < 0) || ((int)uVar2 <= local_d0)) {
      if (local_e0 != 0) {
        FMemory::Free(local_e0);
      }
      if (local_e8[0] != '\0') {
        return;
      }
      plVar5 = (longlong *)UWorld::GetFirstPlayerController(param_3);
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      local_e0 = 0;
      local_d8 = 0x51;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
      FGenericPlatformString::Memcpy
                (local_e0,
                 L"Command execution failed - either the specified id is invalid or no views exists"
                 ,0xa2);
      local_c0 = 0;
      (**(code **)(*plVar5 + 0xc60))(plVar5,&local_e0,0,0);
      if (local_e0 == 0) {
        return;
      }
      FMemory::Free();
      return;
    }
    lVar4 = (**(code **)(**(longlong **)(local_e0 + (longlong)local_d0 * 8) + 0x148))();
    if (lVar4 == param_3) {
      lVar4 = *(longlong *)(local_e0 + (longlong)local_d0 * 8);
      lVar1 = *(longlong *)(lVar4 + 0x100);
      if (lVar1 == 0) {
        uVar7 = *(undefined8 *)(lVar4 + 0x110);
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar1 + 0x240) + 8);
      }
      FUN_14045b7c0(&local_b0,uVar7);
    }
    uVar2 = local_d8 & 0xffffffff;
    do {
      local_d0 = local_d0 + 1;
      if ((int)local_d8 <= local_d0) break;
    } while (*(longlong *)(local_e0 + (longlong)local_d0 * 8) == 0);
  } while( true );
}



// FUNCTION 14044e470 FUN_14044e470 body=722 status=ok
// SIG undefined FUN_14044e470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14044e470(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  wchar_t *_Str;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  ulonglong local_c0;
  int local_b8;
  ulonglong local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  longlong local_98;
  char local_84;
  ulonglong local_78;
  longlong local_70;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar11 = 0;
  uVar6 = APlayerStateGunfire::GetPrivateStaticClass();
  local_b0 = uVar11;
  if (uVar6 != 0) {
    uVar7 = APlayerStateGunfire::GetPrivateStaticClass();
    uVar10 = uVar6;
    do {
      local_b0 = uVar6;
      if (uVar10 == uVar7) break;
      uVar10 = *(ulonglong *)(uVar10 + 0x30);
      local_b0 = uVar11;
    } while (uVar10 != 0);
  }
  local_a8[0] = 5;
  local_50 = '\0';
  local_c8 = param_3;
  FUN_14044bc80(&local_a0,&local_c8,&local_b0);
  FUN_14045a130(local_a8);
  uVar6 = uVar11;
  if (local_84 == '\0') {
    uVar6 = local_78;
  }
  if (local_50 != '\0') {
    local_50 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  if (uVar6 == 0) {
    return;
  }
  iVar3 = -1;
  if (0 < (int)param_2[1]) {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_2;
    }
    iVar3 = _wtoi(_Str);
  }
  bVar2 = false;
  while ((iVar5 = (int)uVar11, -1 < iVar5 && (iVar5 < *(int *)(uVar6 + 0x490)))) {
    lVar8 = FWeakObjectPtr::Get(*(longlong *)(uVar6 + 0x488) + (longlong)iVar5 * 8);
    plVar9 = *(longlong **)(*(longlong *)(lVar8 + 0x200) + 8);
    if ((plVar9 != (longlong *)0x0) &&
       ((iVar3 == -1 || (iVar4 = (**(code **)(*plVar9 + 0x38))(plVar9), iVar4 == iVar3)))) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
      bVar2 = true;
    }
    uVar11 = (ulonglong)(iVar5 + 1);
  }
  FUN_140450fe0(&local_c8,0x10,1);
  uVar6 = local_c0 & 0xffffffff;
  do {
    if ((local_b8 < 0) || ((int)uVar6 <= local_b8)) {
      if (local_c8 != 0) {
        FMemory::Free(local_c8);
      }
      if (bVar2) {
        return;
      }
      plVar9 = (longlong *)UWorld::GetFirstPlayerController(param_3);
      if (plVar9 == (longlong *)0x0) {
        return;
      }
      local_c8 = 0;
      local_c0 = 0x51;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      FGenericPlatformString::Memcpy
                (local_c8,
                 L"Command execution failed - either the specified id is invalid or no views exists"
                 ,0xa2);
      local_b0 = 0;
      (**(code **)(*plVar9 + 0xc60))(plVar9,&local_c8,0,0);
      if (local_c8 == 0) {
        return;
      }
      FMemory::Free();
      return;
    }
    lVar8 = (**(code **)(**(longlong **)(local_c8 + (longlong)local_b8 * 8) + 0x148))();
    if (lVar8 == param_3) {
      lVar8 = *(longlong *)(local_c8 + (longlong)local_b8 * 8);
      lVar1 = *(longlong *)(lVar8 + 0x100);
      if (lVar1 == 0) {
        plVar9 = *(longlong **)(lVar8 + 0x110);
      }
      else {
        plVar9 = *(longlong **)(*(longlong *)(lVar1 + 0x240) + 8);
      }
      if ((plVar9 != (longlong *)0x0) &&
         ((iVar3 == -1 || (iVar5 = (**(code **)(*plVar9 + 0x38))(plVar9), iVar5 == iVar3)))) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        bVar2 = true;
      }
    }
    uVar6 = local_c0 & 0xffffffff;
    do {
      local_b8 = local_b8 + 1;
      if ((int)local_c0 <= local_b8) break;
    } while (*(longlong *)(local_c8 + (longlong)local_b8 * 8) == 0);
  } while( true );
}



// FUNCTION 14044e750 FUN_14044e750 body=702 status=ok
// SIG undefined FUN_14044e750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14044e750(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 local_res20;
  undefined1 auStack_108 [32];
  char local_e8 [8];
  longlong local_e0;
  ulonglong local_d8;
  int local_d0;
  int local_c8 [2];
  ulonglong local_c0;
  undefined4 local_b8 [2];
  int *local_b0;
  undefined4 *local_a8;
  undefined8 *local_a0;
  char *local_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  longlong local_80;
  char local_6c;
  ulonglong local_60;
  longlong local_58;
  undefined8 local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar9 = 0;
  local_res20 = param_4;
  uVar2 = APlayerStateGunfire::GetPrivateStaticClass();
  local_c0 = uVar9;
  if (uVar2 != 0) {
    uVar3 = APlayerStateGunfire::GetPrivateStaticClass();
    uVar6 = uVar2;
    do {
      local_c0 = uVar2;
      if (uVar6 == uVar3) break;
      uVar6 = *(ulonglong *)(uVar6 + 0x30);
      local_c0 = uVar9;
    } while (uVar6 != 0);
  }
  local_90[0] = 5;
  local_38 = '\0';
  local_e0 = param_3;
  FUN_14044bc80(&local_88,&local_e0,&local_c0);
  FUN_14045a130(local_90);
  uVar2 = uVar9;
  if (local_6c == '\0') {
    uVar2 = local_60;
  }
  if (local_38 != '\0') {
    local_38 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_88,local_40);
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  if (uVar2 == 0) {
    return;
  }
  local_b8[0] = 0xffffffff;
  local_c8[0] = -1;
  if (0 < (int)param_2[1]) {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_2;
    }
    local_c8[0] = _wtoi(_Str);
  }
  local_b0 = local_c8;
  local_e8[0] = '\0';
  local_a8 = local_b8;
  local_a0 = &local_res20;
  local_98 = local_e8;
  while ((iVar8 = (int)uVar9, -1 < iVar8 && (iVar8 < *(int *)(uVar2 + 0x490)))) {
    lVar4 = FWeakObjectPtr::Get(*(longlong *)(uVar2 + 0x488) + (longlong)iVar8 * 8);
    FUN_14045a880(&local_b0,*(undefined8 *)(*(longlong *)(lVar4 + 0x200) + 8));
    uVar9 = (ulonglong)(iVar8 + 1);
  }
  FUN_140450fe0(&local_e0,0x10,1);
  uVar2 = local_d8 & 0xffffffff;
  do {
    if ((local_d0 < 0) || ((int)uVar2 <= local_d0)) {
      if (local_e0 != 0) {
        FMemory::Free(local_e0);
      }
      if (local_e8[0] != '\0') {
        return;
      }
      plVar5 = (longlong *)UWorld::GetFirstPlayerController(param_3);
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      local_e0 = 0;
      local_d8 = 0x51;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
      FGenericPlatformString::Memcpy
                (local_e0,
                 L"Command execution failed - either the specified id is invalid or no views exists"
                 ,0xa2);
      local_c0 = 0;
      (**(code **)(*plVar5 + 0xc60))(plVar5,&local_e0,0,0);
      if (local_e0 == 0) {
        return;
      }
      FMemory::Free();
      return;
    }
    lVar4 = (**(code **)(**(longlong **)(local_e0 + (longlong)local_d0 * 8) + 0x148))();
    if (lVar4 == param_3) {
      lVar4 = *(longlong *)(local_e0 + (longlong)local_d0 * 8);
      lVar1 = *(longlong *)(lVar4 + 0x100);
      if (lVar1 == 0) {
        uVar7 = *(undefined8 *)(lVar4 + 0x110);
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar1 + 0x240) + 8);
      }
      FUN_14045a880(&local_b0,uVar7);
    }
    uVar2 = local_d8 & 0xffffffff;
    do {
      local_d0 = local_d0 + 1;
      if ((int)local_d8 <= local_d0) break;
    } while (*(longlong *)(local_e0 + (longlong)local_d0 * 8) == 0);
  } while( true );
}



// FUNCTION 14044ea10 FUN_14044ea10 body=670 status=ok
// SIG undefined FUN_14044ea10(void)

longlong FUN_14044ea10(longlong *param_1)

{
  void *_Dst;
  short *psVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  undefined2 *puVar14;
  wchar_t *_Src;
  uint uVar15;
  int iVar16;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  psVar1 = (short *)*param_1;
  pwVar12 = (wchar_t *)0x0;
  uVar3 = 0;
  iVar16 = (int)param_1[1];
  puVar14 = &DAT_143f3eda8;
  psVar13 = psVar1 + iVar16;
  psVar8 = psVar1;
  if (psVar13 != psVar1) {
    do {
      if (*psVar8 == 0x2e) {
        if ((int)((longlong)psVar8 - (longlong)psVar1 >> 1) != -1) goto LAB_14044ec11;
        break;
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != psVar13);
    do {
      if (psVar13 == psVar1) goto LAB_14044ec11;
      psVar13 = psVar13 + -1;
    } while (*psVar13 != 0x2f);
    iVar11 = (int)((longlong)psVar13 - (longlong)psVar1 >> 1);
    if (iVar11 != -1) {
      uVar7 = iVar11 + 0x80000000;
      uVar15 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar15 = uVar3;
      }
      if (iVar11 + 1U < uVar15) {
        uVar15 = iVar11 + 1U;
      }
      uVar9 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar9 = uVar3;
      }
      uVar10 = uVar15;
      if ((uVar15 <= uVar7) && (uVar10 = uVar9, uVar7 < uVar9)) {
        uVar10 = uVar7;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      psVar13 = &DAT_143f3eda8;
      if (iVar16 != 0) {
        psVar13 = psVar1;
      }
      iVar11 = uVar10 - uVar15;
      iVar16 = iVar11 + 1;
      if (iVar11 == 0) {
        iVar16 = 0;
      }
      _Src = pwVar12;
      local_30 = iVar16;
      if ((0 < iVar16) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar16 = local_30,
         _Src = local_38, 0 < local_30)) {
        wcsncpy(local_38,psVar13 + (int)uVar15,(longlong)iVar11);
        _Src[iVar11] = L'\0';
      }
      iVar11 = (int)param_1[1];
      uVar7 = iVar11 - 1;
      if (iVar11 < 1) {
        uVar7 = uVar3;
      }
      iVar11 = (iVar11 < 1) + 1 + iVar11;
      *(int *)(param_1 + 1) = iVar11;
      if (*(int *)((longlong)param_1 + 0xc) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(undefined2 *)(*param_1 + (longlong)(int)uVar7 * 2) = 0x2e;
      *(undefined2 *)(*param_1 + 2 + (longlong)(int)uVar7 * 2) = 0;
      if ((iVar16 != 0) && (iVar16 = iVar16 + -1, iVar16 != 0)) {
        iVar11 = (int)param_1[1];
        iVar2 = (uint)(iVar11 == 0) + iVar11 + iVar16;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar16 * 2);
        *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
      }
      if (_Src != (wchar_t *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
LAB_14044ec11:
  plVar4 = (longlong *)ACineCameraActor::GetPrivateStaticClass();
  if (plVar4[0x1f] == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
  }
  if ((int)param_1[1] != 0) {
    puVar14 = (undefined2 *)*param_1;
  }
  uVar5 = ACineCameraActor::GetPrivateStaticClass();
  lVar6 = FUN_141799c90(uVar5,0,puVar14,0,0,0,1);
  if (lVar6 != 0) {
    iVar16 = *(int *)(lVar6 + 0xc);
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar7 = iVar16 >> 0x1f & 0xffff;
      uVar3 = iVar16 + uVar7;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18);
    }
    *(uint *)(pwVar12 + 4) = *(uint *)(pwVar12 + 4) | 0x40000000;
  }
  return lVar6;
}



// FUNCTION 14044ecb0 FUN_14044ecb0 body=1020 status=ok
// SIG undefined FUN_14044ecb0(void)

void FUN_14044ecb0(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar14 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_a0 = (uint *)(param_1 + 0x2c0);
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar7 == 0) {
      iVar4 = (int)plVar6;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14044edad;
      uVar7 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_94) {
LAB_14044edad:
      uStack_94 = uVar1;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x2d8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  plVar6 = plVar13;
  plVar10 = plVar13;
  local_88 = plVar14;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar14;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar7 = uStack_74;
  if (uStack_74 != uVar1) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = puVar12[(int)uStack_74 >> 5] & uStack_78;
    iVar4 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14044ee85;
      uVar7 = puVar12[(longlong)iVar4 + 1];
      uStack_78 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    uVar7 = uStack_74;
    if ((int)uVar1 < (int)uStack_74) {
LAB_14044ee85:
      uStack_74 = uVar1;
      uVar7 = uVar1;
    }
  }
  while( true ) {
    if ((uStack_44 == uVar7) && (local_50 == puStack_a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_60 == plVar14)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar4 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_60 + (longlong)(int)uStack_44 * 0x10);
    if (lVar9 != 0) {
      lVar5 = FUN_14048fd20();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
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
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar9;
      }
    }
    if ((param_3 != '\0') && (lVar9 != 0)) {
      lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar4 + 1;
        if ((int)plVar6 < (int)local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
          plVar6 = (longlong *)(ulonglong)uStack_ac;
          plVar13 = local_b8;
        }
        plVar10 = (longlong *)(ulonglong)local_b0;
        plVar13[iVar4] = lVar9;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (param_3 != '\0') {
    uVar8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    uVar15 = (ulonglong)((longlong)(plVar13 + iVar4) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar4 < plVar13) {
      uVar15 = uVar8;
    }
    plVar14 = plVar13;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_14044ecb0(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
          uVar1 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          if (local_b0 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < (int)(local_b0 + iVar4)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),local_b8,lVar9 << 3);
            *(uint *)(param_2 + 1) = (int)param_2[1] + uVar1;
            local_b0 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 14044f0b0 FUN_14044f0b0 body=1020 status=ok
// SIG undefined FUN_14044f0b0(void)

void FUN_14044f0b0(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar14 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_a0 = (uint *)(param_1 + 0x2c0);
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar7 == 0) {
      iVar4 = (int)plVar6;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14044f1ad;
      uVar7 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_94) {
LAB_14044f1ad:
      uStack_94 = uVar1;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x2d8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  plVar6 = plVar13;
  plVar10 = plVar13;
  local_88 = plVar14;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar14;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar7 = uStack_74;
  if (uStack_74 != uVar1) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = puVar12[(int)uStack_74 >> 5] & uStack_78;
    iVar4 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14044f285;
      uVar7 = puVar12[(longlong)iVar4 + 1];
      uStack_78 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    uVar7 = uStack_74;
    if ((int)uVar1 < (int)uStack_74) {
LAB_14044f285:
      uStack_74 = uVar1;
      uVar7 = uVar1;
    }
  }
  while( true ) {
    if ((uStack_44 == uVar7) && (local_50 == puStack_a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_60 == plVar14)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar4 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_60 + (longlong)(int)uStack_44 * 0x10);
    if (lVar9 != 0) {
      lVar5 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
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
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar9;
      }
    }
    if ((param_3 != '\0') && (lVar9 != 0)) {
      lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar4 + 1;
        if ((int)plVar6 < (int)local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
          plVar6 = (longlong *)(ulonglong)uStack_ac;
          plVar13 = local_b8;
        }
        plVar10 = (longlong *)(ulonglong)local_b0;
        plVar13[iVar4] = lVar9;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (param_3 != '\0') {
    uVar8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    uVar15 = (ulonglong)((longlong)(plVar13 + iVar4) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar4 < plVar13) {
      uVar15 = uVar8;
    }
    plVar14 = plVar13;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_14044f0b0(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
          uVar1 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          if (local_b0 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < (int)(local_b0 + iVar4)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),local_b8,lVar9 << 3);
            *(uint *)(param_2 + 1) = (int)param_2[1] + uVar1;
            local_b0 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 14044f4b0 GetDefault<UUserInterfaceSettings> body=51 status=ok
// SIG undefined GetDefault<UUserInterfaceSettings>(void)

longlong GetDefault<UUserInterfaceSettings>(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UUserInterfaceSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2;
}



// FUNCTION 14044f4f0 FUN_14044f4f0 body=658 status=ok
// SIG undefined FUN_14044f4f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_14044f4f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  uint uStack_d0;
  int iStack_cc;
  uint local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  uint uStack_98;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined1 local_50 [8];
  ulonglong local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar10 = 0;
  puStack_a8 = (uint *)(param_1 + 2);
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar3 = (int)param_1[5];
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 1;
  local_d8._4_4_ = 0;
  uStack_d0 = 0;
  if (iVar3 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puStack_a8;
    }
    uVar2 = *puVar11;
    uVar9 = uVar10;
    uVar12 = uVar10;
    while (uVar2 == 0) {
      iVar7 = (int)uVar9;
      uStack_d0 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uStack_d0;
      local_e8._0_4_ = iVar7 + 1;
      uVar9 = (ulonglong)(uint)local_e8;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14044f600;
      uVar2 = puVar11[(longlong)iVar7 + 1];
    }
    local_e8._4_4_ = -uVar2 & uVar2;
    iVar7 = 0x1f;
    if (local_e8._4_4_ != 0) {
      for (; local_e8._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (local_e8._4_4_ == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_d8._4_4_ = (uStack_d0 - iVar7) + 0x1f;
    if (iVar3 < local_d8._4_4_) {
LAB_14044f600:
      local_d8._4_4_ = iVar3;
    }
  }
  uStack_a0 = 0xffffffff;
  iStack_9c = local_d8._4_4_;
  uStack_98 = uStack_d0;
  uStack_b0 = (uint)local_e8;
  uStack_ac = local_e8._4_4_;
  uStack_e0 = (uint)local_e8;
  uStack_dc = local_e8._4_4_;
  local_c8 = uStack_d0;
  uStack_d0 = 0xffffffff;
  iStack_cc = local_d8._4_4_;
  bVar5 = iVar3 <= local_d8._4_4_;
  uVar9 = uVar10;
  uVar12 = uVar10;
  local_e8 = param_1;
  local_b8 = param_1;
  local_d8 = puStack_a8;
  if (bVar5) {
LAB_14044f71d:
    lVar1 = param_2[1];
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
    return (int)lVar1;
  }
  do {
    plVar6 = local_e8;
    lVar4 = *local_e8;
    lVar1 = (longlong)iStack_cc * 0x28;
    uVar2 = *(uint *)(lVar4 + lVar1);
    if ((int)uVar9 != (int)uVar10) {
      puVar8 = local_50;
      if (local_48 != 0) {
        puVar8 = (undefined1 *)0x0;
      }
      for (iVar3 = *(int *)(((ulonglong)puVar8 | local_48) +
                           (longlong)(int)((int)uVar12 - 1U & uVar2) * 4); iVar3 != -1;
          iVar3 = *(int *)(local_88 + 4 + (longlong)iVar3 * 0xc)) {
        if (*(uint *)(local_88 + (longlong)iVar3 * 0xc) == uVar2) {
          if (iVar3 != -1) goto LAB_14044f6e7;
          break;
        }
      }
    }
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = *(undefined4 *)(lVar1 + lVar4);
    FUN_14044be50(&local_88,local_c0,*plVar6 + lVar1,0);
LAB_14044f6e7:
    uStack_d0 = uStack_d0 & ~uStack_dc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
    if ((int)local_d8[6] <= iStack_cc) goto LAB_14044f71d;
    uVar10 = (ulonglong)local_54;
    uVar9 = local_80 & 0xffffffff;
    uVar12 = (ulonglong)local_40;
  } while( true );
}



// FUNCTION 14044f790 FUN_14044f790 body=208 status=ok
// SIG undefined FUN_14044f790(void)

void FUN_14044f790(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)(param_2 + 8);
  if (param_2 == 0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        return;
      }
    }
    plVar2 = *(longlong **)(param_1 + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    *plVar6 = param_2;
    plVar5 = (longlong *)plVar6[1];
    if (plVar2 != plVar5) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar6[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar6[1] = (longlong)plVar2;
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  }
  return;
}



// FUNCTION 14044f860 FUN_14044f860 body=332 status=ok
// SIG undefined FUN_14044f860(void)

undefined8 * FUN_14044f860(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x3f0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_LAB_143f4d4a0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1417f4470(puVar1);
      *puVar1 = &PTR_FUN_143f4aa98;
      puVar2[0x60] = 0;
      puVar2[0x61] = 0;
      puVar2[0x62] = 2;
      puVar2[99] = 0;
      puVar2[100] = 0;
      puVar2[0x65] = 2;
      puVar2[0x66] = 0;
      puVar2[0x67] = 0;
      puVar2[0x68] = 2;
      puVar2[0x69] = 0;
      puVar2[0x6a] = 0;
      puVar2[0x6b] = 2;
      puVar2[0x6c] = 0;
      *(undefined4 *)(puVar2 + 0x6d) = 0;
      puVar2[0x71] = 0;
      *(undefined4 *)(puVar2 + 0x72) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x394) = 0;
      *(undefined4 *)(puVar2 + 0x73) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x39c) = 0;
      *(undefined4 *)(puVar2 + 0x74) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x3a4) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x3ac) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x3b4) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x3bc) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x3c4) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x3cc) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x3ce) = 0;
      *(undefined4 *)(puVar2 + 0x7c) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x3e4) = 0;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14044f9b0 FUN_14044f9b0 body=308 status=ok
// SIG undefined FUN_14044f9b0(void)

undefined8 * FUN_14044f9b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x2f0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_LAB_143f4d480;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1417f46d0(puVar1);
      *(byte *)(puVar2 + 5) = *(byte *)(puVar2 + 5) & 0xf7;
      *puVar1 = &PTR__scalar_deleting_destructor__143f4b718;
      puVar2[0x43] = 0;
      *(undefined4 *)(puVar2 + 0x44) = 0;
      puVar2[0x45] = 0;
      puVar2[0x46] = 0;
      *(undefined4 *)(puVar2 + 0x47) = 1;
      puVar2[0x48] = 0;
      puVar2[0x49] = 0;
      puVar2[0x4a] = 0;
      puVar2[0x4b] = 0;
      puVar2[0x4c] = 0;
      *(undefined4 *)(puVar2 + 0x4d) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x26c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x284) = 0x3f800000;
      *(undefined4 *)((longlong)puVar2 + 0x28c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x294) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x29c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x2a4) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x2ac) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x2b4) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x2b6) = 0;
      *(undefined4 *)(puVar2 + 0x59) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x2cc) = 0;
      *(undefined2 *)(puVar2 + 0x5a) = 0;
      puVar2[0x5b] = 0;
      puVar2[0x5c] = 0;
      *(undefined1 *)(puVar2 + 0x5d) = 0;
      FUN_140462870(puVar1);
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14044faf0 FUN_14044faf0 body=146 status=ok
// SIG undefined FUN_14044faf0(void)

void FUN_14044faf0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = FUN_140491b60();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 14044fb90 NewObject<UMovieSceneLevelVisibilitySection> body=146 status=ok
// SIG undefined NewObject<UMovieSceneLevelVisibilitySection>(void)

void NewObject<UMovieSceneLevelVisibilitySection>
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
               undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = UTexture2D::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 14044fc30 ProcessMulticastDelegate<UObject> body=714 status=ok
// SIG undefined ProcessMulticastDelegate<UObject>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
               (longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  int *piVar15;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98 [16];
  undefined4 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iVar11 = (int)param_1[1];
  if (iVar11 < 1) {
    return;
  }
  lVar14 = *param_1;
  iVar13 = 0;
  local_58 = (undefined4 *)0x0;
  local_50 = iVar11;
  if (iVar11 == 0) {
    local_4c = 0;
    puVar9 = local_58;
  }
  else {
    TArray<TScriptDelegate<FWeakObjectPtr>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
              (local_98,iVar11,0);
    puVar10 = (undefined8 *)(lVar14 + 8);
    puVar8 = local_98;
    if (local_58 != (undefined4 *)0x0) {
      puVar8 = local_58;
    }
    do {
      *puVar8 = *(undefined4 *)(puVar10 + -1);
      puVar8[1] = *(undefined4 *)((longlong)puVar10 + -4);
      *(undefined8 *)(puVar8 + 2) = *puVar10;
      iVar11 = iVar11 + -1;
      puVar9 = local_58;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 2;
    } while (iVar11 != 0);
  }
  do {
    while( true ) {
      while( true ) {
        if ((iVar13 < 0) || (local_50 <= iVar13)) {
          if (puVar9 == (undefined4 *)0x0) {
            return;
          }
          FMemory::Free();
          return;
        }
        lVar14 = (longlong)iVar13;
        local_a8 = 0;
        puVar8 = local_98;
        if (puVar9 != (undefined4 *)0x0) {
          puVar8 = puVar9;
        }
        puVar8 = puVar8 + lVar14 * 4;
        if (((*(longlong *)(puVar8 + 2) == 0) ||
            (lVar4 = FWeakObjectPtr::Get(puVar8), puVar9 = local_58, lVar4 == 0)) ||
           (lVar4 = UObject::FindFunction(lVar4,*(undefined8 *)(puVar8 + 2)), puVar9 = local_58,
           lVar4 == 0)) break;
        puVar8 = local_98;
        if (local_58 != (undefined4 *)0x0) {
          puVar8 = local_58;
        }
        plVar5 = (longlong *)FWeakObjectPtr::Get(puVar8 + lVar14 * 4);
        uVar6 = FUN_14178ac60(plVar5,*(undefined8 *)(puVar8 + lVar14 * 4 + 2));
        (**(code **)(*plVar5 + 0x208))(plVar5,uVar6,param_2);
        iVar13 = iVar13 + 1;
        puVar9 = local_58;
      }
      local_a0 = 0;
      puVar8 = local_98;
      if (puVar9 != (undefined4 *)0x0) {
        puVar8 = puVar9;
      }
      if ((*(longlong *)(puVar8 + lVar14 * 4 + 2) == 0) ||
         (lVar4 = FWeakObjectPtr::Get(puVar8 + lVar14 * 4,1), puVar9 = local_58, lVar4 == 0)) break;
LAB_14044fea4:
      iVar13 = iVar13 + 1;
    }
    piVar2 = (int *)*param_1;
    puVar8 = local_98;
    if (puVar9 != (undefined4 *)0x0) {
      puVar8 = puVar9;
    }
    piVar15 = puVar8 + lVar14 * 4;
    lVar14 = param_1[1];
    piVar12 = piVar2;
    if (piVar2 == piVar2 + (longlong)(int)lVar14 * 4) goto LAB_14044fea4;
    do {
      if ((((*piVar12 == *piVar15) && (piVar12[1] == piVar15[1])) ||
          ((cVar3 = FWeakObjectPtr::IsValid(piVar12), cVar3 == '\0' &&
           (cVar3 = FWeakObjectPtr::IsValid(piVar15), cVar3 == '\0')))) &&
         (*(longlong *)(piVar12 + 2) == *(longlong *)(piVar15 + 2))) {
        iVar11 = (int)((longlong)piVar12 - (longlong)piVar2 >> 4);
        puVar9 = local_58;
        if (iVar11 != -1) {
          iVar1 = (int)param_1[1];
          iVar7 = (iVar1 - iVar11) + -1;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar11 * 0x10 + *param_1),
                       (void *)((longlong)(iVar1 - iVar7) * 0x10 + *param_1),(longlong)iVar7 << 4);
            iVar1 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar1 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
          puVar9 = local_58;
        }
        goto LAB_14044fea4;
      }
      piVar12 = piVar12 + 4;
    } while (piVar12 != piVar2 + (longlong)(int)lVar14 * 4);
    iVar13 = iVar13 + 1;
    puVar9 = local_58;
  } while( true );
}



// FUNCTION 14044ff00 FUN_14044ff00 body=365 status=ok
// SIG undefined FUN_14044ff00(void)

int FUN_14044ff00(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar2 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar9 = 0;
  bVar10 = *(char *)*param_1 == '\0';
  lVar8 = 0;
  iVar5 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar6 = iVar5 + 1;
    if (lVar8 < lVar2) {
      pcVar3 = (char *)(lVar8 * 0x68 + *param_1);
      do {
        if (bVar10 != (*pcVar3 == '\0')) break;
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 1;
        pcVar3 = pcVar3 + 0x68;
      } while (lVar8 < lVar2);
    }
    iVar7 = iVar6 - iVar5;
    if (bVar10 == false) {
      if (iVar7 != 0) {
        plVar4 = (longlong *)((longlong)iVar5 * 0x68 + 0x48 + *param_1);
        do {
          if (plVar4[2] != 0) {
            FMemory::Free();
          }
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          if (plVar4[-2] != 0) {
            FMemory::Free();
          }
          if (plVar4[-4] != 0) {
            FMemory::Free();
          }
          if (plVar4[-6] != 0) {
            FMemory::Free();
          }
          if (plVar4[-8] != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 0xd;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      if (iVar9 != iVar5) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar9 * 0x68 + *param_1),
                   (void *)((longlong)iVar5 * 0x68 + *param_1),(longlong)iVar7 * 0x68);
      }
      iVar9 = iVar9 + iVar7;
    }
    bVar10 = (bool)(bVar10 ^ 1);
    iVar5 = iVar6;
    if (lVar2 <= lVar8) {
      *(int *)(param_1 + 1) = iVar9;
      return iVar1 - iVar9;
    }
  } while( true );
}



// FUNCTION 140450070 SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList> body=308 status=ok
// SIG undefined SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>(void)

void SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x40;
  if (0x3f < (int)uVar6) {
    uVar6 = 0x40;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f4d340;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x40;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 1404501b0 SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList> body=308 status=ok
// SIG undefined SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>(void)

void SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x10;
  if (0xf < (int)uVar6) {
    uVar6 = 0x10;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f4d340;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 1404502f0 FUN_1404502f0 body=513 status=ok
// SIG undefined FUN_1404502f0(void)

undefined8 * FUN_1404502f0(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  
  lVar3 = *param_1;
  lVar9 = param_1[1] - lVar3 >> 5;
  if (lVar9 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
  }
  uVar12 = param_1[2] - lVar3 >> 5;
  uVar1 = lVar9 + 1;
  uVar10 = uVar1;
  if ((uVar12 <= 0x7ffffffffffffff - (uVar12 >> 1)) &&
     (uVar10 = (uVar12 >> 1) + uVar12, uVar10 < uVar1)) {
    uVar10 = uVar1;
  }
  uVar12 = uVar10 * 0x20;
  if (uVar10 < 0x800000000000000) {
    if (0xfff < uVar12) goto LAB_140450389;
    if (uVar12 == 0) {
      puVar16 = (undefined4 *)0x0;
    }
    else {
      puVar16 = (undefined4 *)operator_new(uVar12);
    }
  }
  else {
    uVar12 = 0xffffffffffffffff;
LAB_140450389:
    uVar13 = uVar12 + 0x27;
    if (uVar13 <= uVar12) {
      uVar13 = 0xffffffffffffffff;
    }
    lVar9 = operator_new(uVar13);
    if (lVar9 == 0) goto LAB_1404504e6;
    puVar16 = (undefined4 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar16 + -2) = lVar9;
  }
  puVar17 = (undefined8 *)(((longlong)param_2 - lVar3 & 0xffffffffffffffe0U) + (longlong)puVar16);
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  *(undefined4 *)((longlong)puVar17 + 0x11) = 0;
  *(undefined1 *)((longlong)puVar17 + 0x15) = 0;
  puVar15 = (undefined4 *)param_1[1];
  puVar11 = (undefined4 *)*param_1;
  puVar14 = puVar16;
  if (param_2 == puVar15) {
    for (; puVar11 != puVar15; puVar11 = puVar11 + 8) {
      uVar4 = puVar11[1];
      uVar5 = puVar11[2];
      uVar6 = puVar11[3];
      *puVar14 = *puVar11;
      puVar14[1] = uVar4;
      puVar14[2] = uVar5;
      puVar14[3] = uVar6;
      uVar7 = *(undefined8 *)(puVar11 + 6);
      *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(puVar11 + 4);
      *(undefined8 *)(puVar14 + 6) = uVar7;
      puVar14 = puVar14 + 8;
    }
  }
  else {
    puVar8 = puVar17;
    if (puVar11 != param_2) {
      do {
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        *puVar14 = *puVar11;
        puVar14[1] = uVar4;
        puVar14[2] = uVar5;
        puVar14[3] = uVar6;
        puVar2 = (undefined8 *)(puVar11 + 4);
        uVar7 = *(undefined8 *)(puVar11 + 6);
        puVar11 = puVar11 + 8;
        *(undefined8 *)(puVar14 + 4) = *puVar2;
        *(undefined8 *)(puVar14 + 6) = uVar7;
        puVar14 = puVar14 + 8;
      } while (puVar11 != param_2);
      puVar15 = (undefined4 *)param_1[1];
    }
    for (; param_2 != puVar15; param_2 = param_2 + 8) {
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *(undefined4 *)(puVar8 + 4) = *param_2;
      *(undefined4 *)((longlong)puVar8 + 0x24) = uVar4;
      *(undefined4 *)(puVar8 + 5) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar6;
      uVar7 = *(undefined8 *)(param_2 + 6);
      puVar8[6] = *(undefined8 *)(param_2 + 4);
      puVar8[7] = uVar7;
      puVar8 = puVar8 + 4;
    }
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar12 = param_1[2] - lVar3 & 0xffffffffffffffe0;
    lVar9 = lVar3;
    if (0xfff < uVar12) {
      lVar9 = *(longlong *)(lVar3 + -8);
      uVar12 = uVar12 + 0x27;
      if (0x1f < (lVar3 - lVar9) - 8U) {
LAB_1404504e6:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar9,uVar12);
  }
  param_1[1] = (longlong)(puVar16 + uVar1 * 8);
  *param_1 = (longlong)puVar16;
  param_1[2] = (longlong)(puVar16 + uVar10 * 8);
  return puVar17;
}



// FUNCTION 140450500 FUN_140450500 body=534 status=ok
// SIG undefined FUN_140450500(void)

undefined8 * FUN_140450500(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar5 = *param_1;
  lVar12 = (longlong)param_2 - lVar5 >> 3;
  lVar3 = param_1[1] - lVar5 >> 3;
  if (lVar3 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
  }
  uVar6 = param_1[2] - lVar5 >> 3;
  uVar1 = lVar3 + 1;
  uVar4 = uVar1;
  if ((uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) && (uVar4 = (uVar6 >> 1) + uVar6, uVar4 < uVar1))
  {
    uVar4 = uVar1;
  }
  puVar13 = (undefined8 *)0x0;
  uVar6 = uVar4 * 8;
  uVar8 = 0xffffffffffffffff;
  if ((uVar4 < 0x2000000000000000) && (uVar8 = uVar6, uVar6 < 0x1000)) {
    if (uVar6 != 0) {
      puVar13 = (undefined8 *)operator_new(uVar6);
    }
  }
  else {
    uVar6 = uVar8 + 0x27;
    if (uVar8 + 0x27 <= uVar8) {
      uVar6 = 0xffffffffffffffff;
    }
    lVar5 = operator_new(uVar6);
    if (lVar5 == 0) goto LAB_14045070b;
    puVar13 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar13[-1] = lVar5;
  }
  uVar2 = *param_3;
  *param_3 = 0;
  puVar13[lVar12] = uVar2;
  puVar14 = (undefined8 *)param_1[1];
  puVar7 = (undefined8 *)*param_1;
  puVar9 = puVar13;
  if (param_2 == puVar14) {
    for (; puVar7 != puVar14; puVar7 = puVar7 + 1) {
      uVar2 = *puVar7;
      *puVar7 = 0;
      *puVar9 = uVar2;
      puVar9 = puVar9 + 1;
    }
  }
  else {
    if (puVar7 != param_2) {
      do {
        uVar2 = *puVar7;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
        *puVar9 = uVar2;
        puVar9 = puVar9 + 1;
      } while (puVar7 != param_2);
      puVar14 = (undefined8 *)param_1[1];
    }
    if (param_2 != puVar14) {
      lVar5 = lVar12 * 8 - (longlong)param_2;
      do {
        uVar2 = *param_2;
        *param_2 = 0;
        *(undefined8 *)((longlong)puVar13 + lVar5 + 8 + (longlong)param_2) = uVar2;
        param_2 = param_2 + 1;
      } while (param_2 != puVar14);
    }
  }
  plVar10 = (longlong *)*param_1;
  if (plVar10 != (longlong *)0x0) {
    plVar11 = (longlong *)param_1[1];
    if (plVar10 != plVar11) {
      do {
        puVar14 = (undefined8 *)*plVar10;
        if (puVar14 != (undefined8 *)0x0) {
          (**(code **)*puVar14)(puVar14,1);
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar11);
      plVar10 = (longlong *)*param_1;
    }
    uVar6 = param_1[2] - (longlong)plVar10 & 0xfffffffffffffff8;
    plVar11 = plVar10;
    if (0xfff < uVar6) {
      plVar11 = (longlong *)plVar10[-1];
      uVar6 = uVar6 + 0x27;
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar11))) {
LAB_14045070b:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(plVar11,uVar6);
  }
  param_1[1] = (longlong)(puVar13 + uVar1);
  *param_1 = (longlong)puVar13;
  param_1[2] = (longlong)(puVar13 + uVar4);
  return puVar13 + lVar12;
}



// FUNCTION 140450720 FUN_140450720 body=412 status=ok
// SIG undefined FUN_140450720(void)

void FUN_140450720(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = *param_1;
  lVar2 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (lVar2 < 0x29) {
    lVar2 = *param_2;
    if (*(int *)(lVar6 + 0x10) < *(int *)(lVar2 + 0x10)) {
      *param_2 = lVar6;
      *param_1 = lVar2;
      lVar2 = *param_2;
    }
    lVar6 = *param_3;
    if (*(int *)(lVar2 + 0x10) < *(int *)(lVar6 + 0x10)) {
      *param_3 = lVar2;
      *param_2 = lVar6;
      if (*(int *)(*param_1 + 0x10) < *(int *)(lVar6 + 0x10)) {
        *param_2 = *param_1;
        *param_1 = lVar6;
      }
    }
  }
  else {
    lVar3 = lVar2 + 1 >> 3;
    lVar2 = param_1[lVar3];
    plVar1 = param_1 + lVar3;
    if (*(int *)(lVar6 + 0x10) < *(int *)(lVar2 + 0x10)) {
      *plVar1 = lVar6;
      *param_1 = lVar2;
      lVar2 = *plVar1;
    }
    lVar6 = param_1[lVar3 * 2];
    if (*(int *)(lVar2 + 0x10) < *(int *)(lVar6 + 0x10)) {
      param_1[lVar3 * 2] = lVar2;
      *plVar1 = lVar6;
      if (*(int *)(*param_1 + 0x10) < *(int *)(lVar6 + 0x10)) {
        *plVar1 = *param_1;
        *param_1 = lVar6;
      }
    }
    lVar6 = *param_2;
    plVar4 = param_2 + -lVar3;
    if (*(int *)(*plVar4 + 0x10) < *(int *)(lVar6 + 0x10)) {
      *param_2 = *plVar4;
      *plVar4 = lVar6;
      lVar6 = *param_2;
    }
    lVar2 = param_2[lVar3];
    if (*(int *)(lVar6 + 0x10) < *(int *)(lVar2 + 0x10)) {
      param_2[lVar3] = lVar6;
      *param_2 = lVar2;
      if (*(int *)(*plVar4 + 0x10) < *(int *)(lVar2 + 0x10)) {
        *param_2 = *plVar4;
        *plVar4 = lVar2;
      }
    }
    plVar5 = param_3 + lVar3 * -2;
    plVar4 = param_3 + -lVar3;
    lVar6 = *plVar4;
    if (*(int *)(*plVar5 + 0x10) < *(int *)(lVar6 + 0x10)) {
      *plVar4 = *plVar5;
      *plVar5 = lVar6;
      lVar6 = *plVar4;
    }
    lVar2 = *param_3;
    if (*(int *)(lVar6 + 0x10) < *(int *)(lVar2 + 0x10)) {
      *param_3 = lVar6;
      *plVar4 = lVar2;
      if (*(int *)(*plVar5 + 0x10) < *(int *)(lVar2 + 0x10)) {
        *plVar4 = *plVar5;
        *plVar5 = lVar2;
      }
    }
    lVar6 = *param_2;
    if (*(int *)(*plVar1 + 0x10) < *(int *)(lVar6 + 0x10)) {
      *param_2 = *plVar1;
      *plVar1 = lVar6;
      lVar6 = *param_2;
    }
    lVar2 = *plVar4;
    if (*(int *)(lVar6 + 0x10) < *(int *)(lVar2 + 0x10)) {
      *plVar4 = lVar6;
      *param_2 = lVar2;
      if (*(int *)(*plVar1 + 0x10) < *(int *)(lVar2 + 0x10)) {
        *param_2 = *plVar1;
        *plVar1 = lVar2;
        return;
      }
    }
  }
  return;
}



// FUNCTION 1404508c0 FUN_1404508c0 body=412 status=ok
// SIG undefined FUN_1404508c0(void)

void FUN_1404508c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_38 [2];
  
  uVar11 = param_2 - param_1 >> 3;
  lVar10 = param_2 - param_1 >> 4;
  if (0 < lVar10) {
    lVar9 = (longlong)(uVar11 - 1) >> 1;
    do {
      puVar6 = *(undefined8 **)(param_1 + -8 + lVar10 * 8);
      lVar10 = lVar10 + -1;
      *(undefined8 *)(param_1 + lVar10 * 8) = 0;
      lVar3 = lVar10;
      while (lVar3 < lVar9) {
        lVar7 = (ulonglong)
                (*(int *)(*(longlong *)(param_1 + 0x10 + lVar3 * 0x10) + 0x10) <=
                *(int *)(*(longlong *)(param_1 + 8 + lVar3 * 0x10) + 0x10)) + lVar3 * 2 + 1;
        plVar1 = (longlong *)(param_1 + lVar3 * 8);
        plVar2 = (longlong *)(param_1 + lVar7 * 8);
        lVar3 = lVar7;
        if (plVar1 != plVar2) {
          lVar7 = *plVar2;
          *plVar2 = 0;
          puVar5 = (undefined8 *)*plVar1;
          *plVar1 = lVar7;
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
      }
      if ((lVar3 == lVar9) && ((uVar11 & 1) == 0)) {
        plVar1 = (longlong *)(param_1 + -8 + uVar11 * 8);
        plVar2 = (longlong *)(param_1 + lVar3 * 8);
        if (plVar2 != plVar1) {
          lVar3 = *plVar1;
          *plVar1 = 0;
          puVar5 = (undefined8 *)*plVar2;
          *plVar2 = lVar3;
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
        lVar3 = uVar11 - 1;
      }
      while (lVar10 < lVar3) {
        lVar8 = lVar3 + -1 >> 1;
        lVar7 = *(longlong *)(param_1 + lVar8 * 8);
        plVar1 = (longlong *)(param_1 + lVar8 * 8);
        if (*(int *)(lVar7 + 0x10) <= *(int *)(puVar6 + 2)) break;
        plVar2 = (longlong *)(param_1 + lVar3 * 8);
        lVar3 = lVar8;
        if (plVar2 != plVar1) {
          *plVar1 = 0;
          puVar5 = (undefined8 *)*plVar2;
          *plVar2 = lVar7;
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
      }
      plVar1 = (longlong *)(param_1 + lVar3 * 8);
      if (plVar1 == local_38) {
        if (puVar6 != (undefined8 *)0x0) {
          puVar5 = (undefined8 *)*puVar6;
          goto LAB_140450a2a;
        }
      }
      else {
        puVar4 = (undefined8 *)*plVar1;
        *plVar1 = (longlong)puVar6;
        if (puVar4 != (undefined8 *)0x0) {
          puVar5 = (undefined8 *)*puVar4;
          puVar6 = puVar4;
LAB_140450a2a:
          (*(code *)*puVar5)(puVar6,1);
        }
      }
    } while (0 < lVar10);
  }
  return;
}



// FUNCTION 140450a60 FUN_140450a60 body=341 status=ok
// SIG undefined FUN_140450a60(void)

void FUN_140450a60(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  while (lVar4 < lVar6) {
    lVar5 = (ulonglong)
            (*(int *)(*(longlong *)(param_1 + 0x10 + lVar4 * 0x10) + 0x10) <=
            *(int *)(*(longlong *)(param_1 + 8 + lVar4 * 0x10) + 0x10)) + lVar4 * 2 + 1;
    plVar1 = (longlong *)(param_1 + lVar4 * 8);
    plVar2 = (longlong *)(param_1 + lVar5 * 8);
    lVar4 = lVar5;
    if (plVar1 != plVar2) {
      lVar5 = *plVar2;
      *plVar2 = 0;
      puVar3 = (undefined8 *)*plVar1;
      *plVar1 = lVar5;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  if ((lVar4 == lVar6) && ((param_3 & 1) == 0)) {
    plVar1 = (longlong *)(param_1 + (param_3 - 1) * 8);
    plVar2 = (longlong *)(param_1 + lVar4 * 8);
    if (plVar2 != plVar1) {
      lVar4 = *plVar1;
      *plVar1 = 0;
      puVar3 = (undefined8 *)*plVar2;
      *plVar2 = lVar4;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    lVar4 = param_3 - 1;
  }
  while (param_2 < lVar4) {
    lVar5 = lVar4 + -1 >> 1;
    lVar6 = *(longlong *)(param_1 + lVar5 * 8);
    plVar1 = (longlong *)(param_1 + lVar5 * 8);
    if (*(int *)(lVar6 + 0x10) <= *(int *)(*param_4 + 0x10)) break;
    plVar2 = (longlong *)(param_1 + lVar4 * 8);
    lVar4 = lVar5;
    if (plVar2 != plVar1) {
      *plVar1 = 0;
      puVar3 = (undefined8 *)*plVar2;
      *plVar2 = lVar6;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  plVar1 = (longlong *)(param_1 + lVar4 * 8);
  if (plVar1 != param_4) {
    lVar4 = *param_4;
    *param_4 = 0;
    puVar3 = (undefined8 *)*plVar1;
    *plVar1 = lVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}



// FUNCTION 140450bc0 FUN_140450bc0 body=1041 status=ok
// SIG undefined FUN_140450bc0(void)

void FUN_140450bc0(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *local_res8;
  longlong local_28 [2];
  
  lVar4 = (longlong)param_2 - (longlong)param_1;
  while (lVar3 = lVar4 >> 3, 0x20 < lVar3) {
    if (param_3 < 1) {
      if (0x20 < lVar3) {
        FUN_1404508c0(param_1,param_2,param_4);
        lVar4 = (longlong)param_2 - (longlong)param_1 >> 3;
        if (lVar4 < 2) {
          return;
        }
        param_2 = param_2 + -1;
        if (lVar4 < 2) goto LAB_140450f28;
        do {
          local_res8 = (undefined8 *)*param_2;
          *param_2 = 0;
          if (param_2 != param_1) {
            lVar4 = *param_1;
            *param_1 = 0;
            puVar2 = (undefined8 *)*param_2;
            *param_2 = lVar4;
            if (puVar2 != (undefined8 *)0x0) {
              (**(code **)*puVar2)(puVar2,1);
            }
          }
          FUN_140450a60(param_1,0,(longlong)param_2 - (longlong)param_1 >> 3,&local_res8,param_4);
          if (local_res8 != (undefined8 *)0x0) {
            (**(code **)*local_res8)();
          }
LAB_140450f28:
          param_2 = param_2 + -1;
        } while (1 < (longlong)param_2 + (8 - (longlong)param_1) >> 3);
        return;
      }
      break;
    }
    plVar8 = param_1 + (lVar4 >> 4);
    FUN_140450720(param_1,plVar8,param_2 + -1,param_4);
    plVar11 = plVar8 + 1;
    if (param_1 < plVar8) {
      lVar4 = *plVar8;
      do {
        plVar9 = plVar8 + -1;
        iVar1 = *(int *)(plVar8[-1] + 0x10);
        if ((*(int *)(lVar4 + 0x10) < iVar1) || (iVar1 < *(int *)(lVar4 + 0x10))) break;
        lVar4 = plVar8[-1];
        plVar8 = plVar9;
      } while (param_1 < plVar9);
    }
    plVar9 = plVar11;
    plVar10 = plVar8;
    if (plVar11 < param_2) {
      do {
        plVar9 = plVar11;
        if ((*(int *)(*plVar8 + 0x10) < *(int *)(*plVar11 + 0x10)) ||
           (*(int *)(*plVar11 + 0x10) < *(int *)(*plVar8 + 0x10))) break;
        plVar11 = plVar11 + 1;
        plVar9 = plVar11;
      } while (plVar11 < param_2);
    }
joined_r0x000140450c83:
    plVar6 = plVar8;
    if (plVar11 < param_2) {
      iVar1 = *(int *)(*plVar11 + 0x10);
      if (*(int *)(*plVar10 + 0x10) <= iVar1) {
        if (*(int *)(*plVar10 + 0x10) < iVar1) goto joined_r0x000140450cbf;
        if (plVar9 != plVar11) {
          lVar4 = *plVar9;
          *plVar9 = *plVar11;
          *plVar11 = lVar4;
        }
        plVar9 = plVar9 + 1;
      }
      plVar11 = plVar11 + 1;
      goto joined_r0x000140450c83;
    }
joined_r0x000140450cbf:
    for (; param_1 < plVar8; plVar8 = plVar8 + -1) {
      plVar6 = plVar6 + -1;
      iVar1 = *(int *)(*plVar6 + 0x10);
      if (iVar1 <= *(int *)(*plVar10 + 0x10)) {
        if (iVar1 < *(int *)(*plVar10 + 0x10)) break;
        plVar10 = plVar10 + -1;
        if (plVar10 != plVar6) {
          lVar4 = *plVar10;
          *plVar10 = *plVar6;
          *plVar6 = lVar4;
        }
      }
    }
    if (plVar8 != param_1) {
      plVar8 = plVar8 + -1;
      if (plVar11 == param_2) {
        plVar10 = plVar10 + -1;
        if (plVar8 == plVar10) {
          lVar4 = *plVar10;
          *plVar10 = plVar9[-1];
          plVar9[-1] = lVar4;
          plVar9 = plVar9 + -1;
        }
        else {
          plVar9 = plVar9 + -1;
          lVar4 = *plVar8;
          *plVar8 = *plVar10;
          *plVar10 = lVar4;
          *plVar10 = *plVar9;
          *plVar9 = lVar4;
        }
      }
      else {
        lVar4 = *plVar11;
        *plVar11 = *plVar8;
        plVar11 = plVar11 + 1;
        *plVar8 = lVar4;
      }
      goto joined_r0x000140450c83;
    }
    if (plVar11 != param_2) {
      if (plVar9 != plVar11) {
        lVar4 = *plVar10;
        *plVar10 = *plVar9;
        *plVar9 = lVar4;
      }
      lVar4 = *plVar10;
      *plVar10 = *plVar11;
      *plVar11 = lVar4;
      plVar11 = plVar11 + 1;
      plVar9 = plVar9 + 1;
      plVar10 = plVar10 + 1;
      goto joined_r0x000140450c83;
    }
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)plVar10 - (longlong)param_1 & 0xfffffffffffffff8U) <
        (longlong)((longlong)param_2 - (longlong)plVar9 & 0xfffffffffffffff8U)) {
      FUN_140450bc0(param_1,plVar10,param_3,param_4);
      plVar10 = param_2;
      param_1 = plVar9;
    }
    else {
      FUN_140450bc0(plVar9,param_2,param_3,param_4);
    }
    param_2 = plVar10;
    lVar4 = (longlong)plVar10 - (longlong)param_1;
  }
  if ((lVar3 < 2) || (plVar11 = param_1, param_1 == param_2)) {
    return;
  }
joined_r0x000140450e14:
  plVar11 = plVar11 + 1;
  if (plVar11 == param_2) {
    return;
  }
  puVar2 = (undefined8 *)*plVar11;
  *plVar11 = 0;
  plVar8 = plVar11;
  if (*(int *)(*param_1 + 0x10) < *(int *)(puVar2 + 2)) {
    while (plVar9 = plVar8, plVar9 != param_1) {
      plVar8 = plVar9 + -1;
      if (plVar9 != plVar8) {
        lVar4 = *plVar8;
        *plVar8 = 0;
        puVar7 = (undefined8 *)*plVar9;
        *plVar9 = lVar4;
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
    }
    if (param_1 == local_28) {
LAB_140450f9e:
      puVar5 = (undefined8 *)*puVar2;
      puVar7 = puVar2;
      goto LAB_140450fa4;
    }
    puVar7 = (undefined8 *)*param_1;
    *param_1 = (longlong)puVar2;
    if (puVar7 == (undefined8 *)0x0) goto joined_r0x000140450e14;
    puVar5 = (undefined8 *)*puVar7;
  }
  else {
    plVar9 = plVar11;
    if (*(int *)(plVar11[-1] + 0x10) < *(int *)(puVar2 + 2)) {
      do {
        plVar9 = plVar8 + -1;
        if (plVar8 != plVar9) {
          lVar4 = *plVar9;
          *plVar9 = 0;
          puVar7 = (undefined8 *)*plVar8;
          *plVar8 = lVar4;
          if (puVar7 != (undefined8 *)0x0) {
            (**(code **)*puVar7)(puVar7,1);
          }
        }
        plVar10 = plVar8 + -2;
        plVar8 = plVar9;
      } while (*(int *)(*plVar10 + 0x10) < *(int *)(puVar2 + 2));
    }
    if (plVar9 == local_28) goto LAB_140450f9e;
    puVar7 = (undefined8 *)*plVar9;
    *plVar9 = (longlong)puVar2;
    if (puVar7 == (undefined8 *)0x0) goto joined_r0x000140450e14;
    puVar5 = (undefined8 *)*puVar7;
  }
LAB_140450fa4:
  (*(code *)*puVar5)(puVar7,1);
  goto joined_r0x000140450e14;
}



// FUNCTION 140450fe0 FUN_140450fe0 body=146 status=ok
// SIG undefined FUN_140450fe0(void)

longlong * FUN_140450fe0(longlong *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar2 = FUN_140490180();
  FUN_1417a5560(uVar2,param_1,param_3,param_2,param_4);
  iVar1 = (int)param_1[2] + 1;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 < (int)param_1[1]) {
    do {
      if (*(longlong *)(*param_1 + (longlong)iVar1 * 8) != 0) {
        return param_1;
      }
      iVar1 = iVar1 + 1;
      *(int *)(param_1 + 2) = iVar1;
    } while (iVar1 < (int)param_1[1]);
  }
  return param_1;
}



// FUNCTION 140451080 TStringConversion<TStringConvert<char,wchar_t>,128> body=188 status=ok
// SIG undefined TStringConversion<TStringConvert<char,wchar_t>,128>(void)

longlong TStringConversion<TStringConvert<char,wchar_t>,128>::
         TStringConversion<TStringConvert<char,wchar_t>,128>(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar3;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    iVar3 = (int)lVar2 + 2;
    *(int *)(param_1 + 0x110) = (int)lVar1;
    TInlineAllocator<128,FDefaultAllocator>::ForElementType<wchar_t>::ResizeAllocation
              (param_1,0,iVar3,2);
    lVar1 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar1 = param_1;
    }
    *(longlong *)(param_1 + 0x108) = lVar1;
    FGenericPlatformString::Convert<char,wchar_t>(lVar1,iVar3,param_2,iVar3,0x3f);
    return param_1;
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  return param_1;
}



// FUNCTION 140451140 TStringConversion<TStringConvert<wchar_t,char>,128> body=183 status=ok
// SIG undefined TStringConversion<TStringConvert<wchar_t,char>,128>(void)

longlong TStringConversion<TStringConvert<wchar_t,char>,128>::
         TStringConversion<TStringConvert<wchar_t,char>,128>(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar3;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(short *)(param_2 + lVar1 * 2) != 0);
    iVar3 = (int)lVar2 + 2;
    *(int *)(param_1 + 0x90) = (int)lVar1;
    TInlineAllocator<128,FDefaultAllocator>::ForElementType<char>::ResizeAllocation
              (param_1,0,iVar3,1);
    lVar1 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar1 = param_1;
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
    FGenericPlatformString::Convert<wchar_t,char>(lVar1,iVar3,param_2,iVar3,0x3f);
    return param_1;
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return param_1;
}



// FUNCTION 140451200 TStringConversion<FTCHARToUTF8_Convert,128> body=217 status=ok
// SIG undefined TStringConversion<FTCHARToUTF8_Convert,128>(void)

ulonglong TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (ulonglong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong local_res8;
  ulonglong uVar3;
  
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (param_2 != 0) {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar3 = uVar2;
      uVar2 = uVar3 + 1;
    } while (*(short *)(param_2 + uVar2 * 2) != 0);
    local_res8 = local_res8 & 0xffffffff00000000;
    FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (&local_res8,(int)uVar2 * 4,param_2,uVar2 & 0xffffffff);
    *(int *)(param_1 + 0x90) = (int)local_res8;
    iVar1 = (int)local_res8 + 1;
    TInlineAllocator<128,FDefaultAllocator>::ForElementType<char>::ResizeAllocation
              (param_1,0,iVar1,1);
    local_res8 = *(ulonglong *)(param_1 + 0x80);
    if (*(ulonglong *)(param_1 + 0x80) == 0) {
      local_res8 = param_1;
    }
    *(ulonglong *)(param_1 + 0x88) = local_res8;
    FTCHARToUTF8_Convert::Convert_Impl<char_*>(&local_res8,iVar1,param_2,(int)uVar3 + 2);
    return param_1;
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return param_1;
}



// FUNCTION 1404512e0 FUN_1404512e0 body=336 status=ok
// SIG undefined FUN_1404512e0(void)

undefined8 * FUN_1404512e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_1424ddf70();
  *param_1 = &PTR_FUN_143f4be48;
  param_1[0xaf] = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0x500;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0x2d0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined2 *)(param_1 + 0xb6) = 1;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 200;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0x41000000;
  *(undefined2 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5d6) = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  *(undefined2 *)(param_1 + 0xbe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5f2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CohtmlHUD",1);
  uVar3 = *puVar1;
  uVar2 = FUN_140490eb0();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xb0] = uVar3;
  *(undefined4 *)(param_1 + 0xb2) = 1;
  *(undefined4 *)((longlong)param_1 + 0x594) = 1;
  return param_1;
}



// FUNCTION 140451430 CScrollView body=111 status=ok
// SIG undefined CScrollView(CScrollView * this)

/* Library Function - Single Match
    protected: __cdecl CScrollView::CScrollView(void) __ptr64
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

CScrollView * __thiscall CScrollView::CScrollView(CScrollView *this)

{
  FUN_14221fbd0();
  *(undefined ***)this = &PTR_FUN_143f4acb0;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x460) = 0;
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined8 *)(this + 0x498) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined4 *)(this + 0x4a8) = 0;
  return this;
}



// FUNCTION 1404514a0 FUN_1404514a0 body=157 status=ok
// SIG undefined FUN_1404514a0(void)

undefined8 * FUN_1404514a0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_143f47cf8;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 6;
  *(undefined1 *)(param_1 + 6) = 0;
  plVar1 = (longlong *)FUN_140490060();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  *(byte *)((longlong)param_1 + 0x34) =
       *(byte *)((longlong)param_1 + 0x34) ^
       (*(byte *)(lVar2 + 0x50) ^ *(byte *)((longlong)param_1 + 0x34)) & 1;
  return param_1;
}



// FUNCTION 140451540 FUN_140451540 body=213 status=ok
// SIG undefined FUN_140451540(void)

undefined8 *
FUN_140451540(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = *param_4;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xfffffff4 | 4;
  if (param_3 == (longlong *)0x0) {
    return param_1;
  }
  lVar3 = (**(code **)(*param_3 + 0x208))(param_3);
  if (lVar3 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
      return param_1;
    }
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar3 + 0x790);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(lVar3 + 0x7b0);
    uVar4 = *(undefined4 *)(lVar3 + 0x798);
    *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 8;
    *(undefined4 *)(param_1 + 6) = uVar4;
    uVar4 = FUN_1428ccc70(lVar3);
    *(undefined4 *)(param_1 + 7) = uVar4;
  }
  return param_1;
}



// FUNCTION 140451620 FArguments body=229 status=ok
// SIG undefined FArguments(void)

longlong SFlareCompanyMenu::FArguments::FArguments(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  return param_1;
}



// FUNCTION 140451710 FArguments body=353 status=ok
// SIG undefined FArguments(void)

longlong SOverlay::FArguments::FArguments(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_20;
  undefined4 local_18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  plVar1 = (longlong *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9eec;
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x79) = 1;
  if (((&local_20 != plVar1) && (*(int *)(param_1 + 0x88) != 0)) &&
     (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    if (*plVar1 != 0) {
      lVar3 = FMemory::Realloc(*plVar1,0,0);
      *plVar1 = lVar3;
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 140451880 FUN_140451880 body=412 status=ok
// SIG undefined FUN_140451880(void)

undefined8 * FUN_140451880(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  lVar8 = 0;
  local_40 = 0x4a;
  local_48 = 0;
  *param_1 = &PTR_FUN_143f4c8f8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  uVar3 = local_48;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_48,0x4a,
             "Material\'/CohtmlPlugin/CohtmlCompositorMaterial.CohtmlCompositorMaterial\'",0x4a,0x3f
            );
  local_30 = (undefined4)local_40;
  local_2c = local_40._4_4_;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_38 = uVar3;
  FUN_1417978e0(&local_28,&local_38);
  lVar5 = FSoftObjectPath::TryLoad(&local_28);
  if (lVar5 != 0) {
    lVar6 = ACineCameraActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1404519b7;
  }
  lVar5 = lVar8;
LAB_1404519b7:
  param_1[0x13] = lVar5;
  iVar1 = *(int *)(lVar5 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar7 = iVar1 >> 0x1f & 0xffff;
    uVar4 = iVar1 + uVar7;
    lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
  }
  *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x40000000;
  if (local_20 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140451a20 FUN_140451a20 body=828 status=ok
// SIG undefined FUN_140451a20(void)

undefined8 * FUN_140451a20(undefined8 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  undefined8 local_res8;
  
  *param_1 = &PTR_FUN_143f4c910;
  puVar1 = param_1 + 5;
  param_1[2] = 0;
  param_1[1] = &PTR_LAB_143f4c920;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *puVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  lVar4 = DAT_146850540;
  plVar10 = (longlong *)0x0;
  plVar6 = plVar10;
  plVar5 = plVar10;
  while ((iVar9 = (int)plVar6, -1 < iVar9 && (iVar9 < *(int *)(lVar4 + 0x490)))) {
    plVar5 = (longlong *)FWeakObjectPtr::Get(*(longlong *)(lVar4 + 0x488) + (longlong)iVar9 * 8);
    if (plVar5 != (longlong *)0x0) {
      uVar7 = *(uint *)((longlong)plVar5 + 0xc);
      plVar6 = plVar10;
      if ((int)uVar7 < (int)DAT_1469e91c4) {
        uVar11 = uVar7 & 0xffff;
        if ((int)uVar7 < 0) {
          uVar7 = uVar7 + 0xffff;
          uVar11 = uVar11 - 0x10000;
        }
        plVar6 = (longlong *)
                 (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                 (longlong)(int)uVar11 * 0x18);
      }
      if ((*(uint *)(plVar6 + 1) >> 0x1d & 1) == 0) break;
    }
    plVar6 = (longlong *)(ulonglong)(iVar9 + 1);
  }
  plVar6 = plVar10;
  if (lVar4 != 0) {
    iVar9 = *(int *)(lVar4 + 0xc);
    plVar8 = plVar10;
    if (iVar9 < (int)DAT_1469e91c4) {
      uVar11 = iVar9 >> 0x1f & 0xffff;
      uVar7 = iVar9 + uVar11;
      plVar8 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
               (longlong)(int)((uVar7 & 0xffff) - uVar11) * 0x18);
    }
    if (((*(uint *)(plVar8 + 1) >> 0x1d & 1) == 0) && (plVar5 != (longlong *)0x0)) {
      iVar9 = *(int *)((longlong)plVar5 + 0xc);
      plVar8 = plVar10;
      if (iVar9 < (int)DAT_1469e91c4) {
        uVar11 = iVar9 >> 0x1f & 0xffff;
        uVar7 = iVar9 + uVar11;
        plVar8 = (longlong *)
                 (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                 (longlong)(int)((uVar7 & 0xffff) - uVar11) * 0x18);
      }
      if ((*(uint *)(plVar8 + 1) >> 0x1d & 1) == 0) {
        plVar6 = (longlong *)FUN_14233fea0(plVar5);
      }
    }
  }
  param_1[2] = plVar6;
  plVar6 = (longlong *)operator_new(0x88);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 4;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *(undefined1 *)(plVar6 + 5) = 0;
    plVar6[6] = 0;
    *plVar6 = (longlong)&PTR_FUN_143f4ce28;
    *(undefined4 *)(plVar6 + 7) = 0xc0;
    *(undefined4 *)(plVar6 + 9) = 4;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    *(undefined1 *)(plVar6 + 0xd) = 0;
    plVar6[0xe] = 0;
    plVar6[0xf] = 0;
    plVar6[8] = (longlong)&PTR_FUN_143f4ce68;
    *(undefined4 *)(plVar6 + 0x10) = 0xc;
    *(undefined4 *)((longlong)plVar6 + 0x84) = 2;
    plVar10 = plVar6;
  }
  if (puVar1 == &local_res8) {
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))(plVar10);
      (**(code **)(plVar10[8] + 0x30))(plVar10 + 8);
      plVar10[8] = (longlong)&PTR__scalar_deleting_destructor__143f48b30;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar10 + 0xf);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar10 + 0xe);
      FUN_141edd2d0(plVar10 + 8);
      *plVar10 = (longlong)&PTR_FUN_143f48ad0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar10 + 6);
      FUN_141edd2d0(plVar10);
      FMemory::operator_delete(plVar10,0x88);
    }
  }
  else {
    uVar3 = *puVar1;
    *puVar1 = plVar10;
    FUN_14045b880(puVar1,uVar3);
  }
  FUN_140470a10(*puVar1);
  plVar6 = *(longlong **)(DAT_146850540 + 0x470);
  lVar4 = *(longlong *)(DAT_146850540 + 0x468);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  param_1[3] = *(undefined8 *)(lVar4 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140451d60 FUN_140451d60 body=135 status=ok
// SIG undefined FUN_140451d60(void)

undefined8 * FUN_140451d60(undefined8 *param_1)

{
  FShader::FShader();
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143f47aa8;
  return param_1;
}



// FUNCTION 140451df0 FUN_140451df0 body=848 status=ok
// SIG undefined FUN_140451df0(void)

undefined8 ** FUN_140451df0(undefined8 **param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined4 in_stack_ffffffffffffff08;
  undefined2 uVar15;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60 [5];
  
  uVar15 = (undefined2)((uint)in_stack_ffffffffffffff08 >> 0x10);
  plVar13 = (longlong *)0x0;
  *param_1 = (undefined8 *)0x0;
  param_1[1] = (undefined8 *)0x0;
  local_c8 = 0;
  local_c0 = 0x42;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  uVar4 = local_c8;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_c8,0x42,"Material\'/CohtmlPlugin/CohtmlEditorMaterial.CohtmlEditorMaterial\'",
             0x42,CONCAT22(uVar15,0x3f));
  local_88 = (undefined4)local_c0;
  local_84 = local_c0._4_4_;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = uVar4;
  FUN_1417978e0(&local_a8,&local_90);
  plVar6 = (longlong *)FSoftObjectPath::TryLoad(&local_a8);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = ACineCameraActor::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140451ed3;
  }
  plVar6 = plVar13;
LAB_140451ed3:
  if (local_a0 != 0) {
    FMemory::Free();
  }
  puVar8 = (undefined8 *)UMaterialInstanceDynamic::Create(plVar6,0);
  param_1[2] = puVar8;
  param_1[3] = param_2;
  iVar2 = *(int *)((longlong)puVar8 + 0xc);
  plVar6 = plVar13;
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar11 = iVar2 >> 0x1f & 0xffff;
    uVar5 = iVar2 + uVar11;
    plVar6 = (longlong *)
             (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
             (longlong)(int)((uVar5 & 0xffff) - uVar11) * 0x18);
  }
  *(uint *)(plVar6 + 1) = *(uint *)(plVar6 + 1) | 0x40000000;
  puVar8 = (undefined8 *)FName::FName(local_res10,L"UITexture",1);
  FUN_1425a28b0(param_1[2],*puVar8,param_2);
  if (param_3 == '\0') {
    uVar14 = 0x3f800000;
  }
  else {
    uVar14 = 0x400ccccd;
  }
  puVar8 = (undefined8 *)FName::FName(local_res20,L"GammaCorrectionExponent",1);
  FUN_1425a2750(param_1[2],*puVar8,uVar14);
  puVar8 = (undefined8 *)operator_new(0x88);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    uVar14 = (**(code **)(*param_1[3] + 0x2b8))();
    local_res8 = (**(code **)(*param_1[3] + 0x2b0))();
    puVar10 = param_1[2];
    local_70 = 0;
    uStack_68 = 0;
    local_resc = uVar14;
    puVar9 = (undefined8 *)FName::FName(local_80,&DAT_143f3edc8,1);
    FSlateBrush::FSlateBrush(puVar8,3,*puVar9,&local_70,0,1,&local_res8,&DAT_1464aa6c0,puVar10,0);
    *puVar8 = &PTR_FUN_143f4cee8;
    puVar10 = (undefined8 *)UObjectBaseUtility::GetFullName(puVar10,local_60,0);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar10;
    }
    puVar10 = (undefined8 *)FName::FName(local_78,puVar12,1);
    puVar8[10] = *puVar10;
    if (local_60[0] != 0) {
      FMemory::Free();
    }
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)puVar8;
    plVar13 = plVar6;
  }
  local_b8 = puVar8;
  local_b0 = plVar13;
  SharedPointerInternals::EnableSharedFromThis(&local_b8,puVar8,puVar8);
  if (param_1 != &local_b8) {
    *param_1 = puVar8;
    local_b8 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&local_b0);
    plVar13 = local_b0;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar13 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140452140 FUN_140452140 body=149 status=ok
// SIG undefined FUN_140452140(void)

IBreakIterator * FUN_140452140(IBreakIterator *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  cohtml::i18n::IBreakIterator::IBreakIterator(param_1);
  *(undefined ***)param_1 = &PTR_FUN_143f4c7e8;
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar4 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_2[1];
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 1404521e0 FUN_1404521e0 body=1158 status=ok
// SIG undefined FUN_1404521e0(void)

undefined1 * FUN_1404521e0(undefined1 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *local_38;
  int local_30;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  local_38 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_30 = 3;
  local_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)IDelegateInstance::vftable;
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[2] = (longlong)FUN_140469b80;
    plVar1[1] = (longlong)param_1;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar3 = (**(code **)(*DAT_1468b1f88 + 0x78))
                    (DAT_1468b1f88,L"cohtml.list",L"List all currently active views",&local_38,0);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_143f3ecf0;
  if (local_30 == 0) {
LAB_1404522fe:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_1404522fe;
  }
  local_38 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[1] = (longlong)param_1;
    plVar1[2] = (longlong)&LAB_14046a1b0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar3 = (**(code **)(*DAT_1468b1f88 + 0x70))
                    (DAT_1468b1f88,L"cohtml.reload",
                     L"Refreshes the view with the specified <id> or all views if no id is specified."
                     ,&local_38,0);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined ***)(param_1 + 0x68) = &PTR_FUN_143f3ecf0;
  if (local_30 == 0) {
LAB_1404523d8:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_1404523d8;
  }
  local_38 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[1] = (longlong)param_1;
    plVar1[2] = (longlong)FUN_140469ee0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar3 = (**(code **)(*DAT_1468b1f88 + 0x70))
                    (DAT_1468b1f88,L"cohtml.redirect",
                     L"Redirects the view with the specified <id> to the specified <url> or all views if no id is specified.\r\nNote: the <url> MUST be surrounded by DOUBLE quotes (e.g. \"http://coherent-labs.com\")"
                     ,&local_38,0);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined ***)(param_1 + 0x78) = &PTR_FUN_143f3ecf0;
  if (local_30 == 0) {
LAB_1404524a0:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_1404524a0;
  }
  local_38 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[1] = (longlong)param_1;
    plVar1[2] = (longlong)&LAB_1404695a0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar3 = (**(code **)(*DAT_1468b1f88 + 0x70))
                    (DAT_1468b1f88,L"cohtml.debug",
                     L"Toggles drawing of paint rectangles on the view with the specified <id> or all views if no id is specified."
                     ,&local_38,0);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined ***)(param_1 + 0x88) = &PTR_FUN_143f3ecf0;
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_140452578;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_140452578:
  local_38 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[1] = (longlong)param_1;
    plVar1[2] = (longlong)FUN_14046b0d0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar3 = (**(code **)(*DAT_1468b1f88 + 0x70))
                    (DAT_1468b1f88,L"cohtml.track",
                     L"Toggles tracking the view with the specified <id>. Only tracked views are profiled with stat Gameface.\r\n* If no views are explicitly tracked, all views are profiled.\r\n* Pass no arguments to reset tracked views."
                     ,&local_38,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_143f3ecf0;
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return param_1;
}



// FUNCTION 140452670 FUN_140452670 body=296 status=ok
// SIG undefined FUN_140452670(void)

undefined8 * FUN_140452670(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  *param_1 = 0;
  iVar4 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1,iVar4,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar2,(longlong)iVar4);
  }
  param_1[2] = 0;
  iVar4 = *(int *)(param_2 + 3);
  puVar5 = (undefined8 *)param_2[2];
  *(int *)(param_1 + 3) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar4,0);
    puVar3 = (undefined8 *)param_1[2];
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[4] = 0;
  iVar4 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar4;
  if (iVar4 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 4,iVar4,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[4],pvVar2,(longlong)iVar4 << 3);
    return param_1;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  return param_1;
}



// FUNCTION 1404527a0 FUN_1404527a0 body=817 status=ok
// SIG undefined FUN_1404527a0(void)

IAsyncResourceHandler * FUN_1404527a0(IAsyncResourceHandler *param_1)

{
  IAsyncResourceHandler *pIVar1;
  IAsyncResourceHandler *pIVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  cohtml::IAsyncResourceHandler::IAsyncResourceHandler(param_1);
  *(undefined ***)param_1 = &PTR_FUN_143f4bdd8;
  FPaths::ProjectDir(param_1 + 8);
  FPaths::ProjectContentDir(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_14282a800(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x110) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x118),4000);
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined ***)(param_1 + 0x290) = &PTR__scalar_deleting_destructor__143f4bdc8;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  param_1[0x2b0] = (IAsyncResourceHandler)0x18;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2b8),4000);
  pIVar1 = param_1 + 0x2e0;
  *(longlong **)pIVar1 = (longlong *)0x0;
  pIVar2 = param_1 + 0x308;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(longlong **)pIVar2 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  FSslModule::Get();
  puVar4 = (undefined8 *)FName::FName(local_res8,"CohtmlPlugin",1);
  uVar3 = *puVar4;
  uVar5 = FUN_14168dc80();
  FUN_141690010(uVar5,uVar3);
  if (pIVar1 != (IAsyncResourceHandler *)&DAT_1468505e0) {
    if ((DAT_1468505e8 == 0) || (DAT_1468505e0 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x2e8) != 0) &&
         (plVar6 = *(longlong **)pIVar1, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*(longlong **)pIVar1 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*(longlong **)pIVar1,0,0);
          *(longlong **)pIVar1 = plVar6;
        }
        *(undefined4 *)(param_1 + 0x2e8) = 0;
      }
    }
    else {
      (**(code **)(*DAT_1468505e0 + 0x30))(DAT_1468505e0,pIVar1);
    }
  }
  puVar4 = (undefined8 *)FName::FName(local_res8,"CohtmlPlugin",1);
  uVar3 = *puVar4;
  uVar5 = FUN_14168dc80();
  FUN_141690010(uVar5,uVar3);
  *(undefined8 **)(param_1 + 0x300) = &DAT_1461f61a0;
  puVar4 = (undefined8 *)FName::FName(local_res8,"CohtmlPlugin",1);
  uVar3 = *puVar4;
  uVar5 = FUN_14168dc80();
  FUN_141690010(uVar5,uVar3);
  if (pIVar2 != (IAsyncResourceHandler *)&DAT_146850610) {
    if ((DAT_146850618 == 0) || (DAT_146850610 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x310) != 0) &&
         (plVar6 = *(longlong **)pIVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*(longlong **)pIVar2 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*(longlong **)pIVar2,0,0);
          *(longlong **)pIVar2 = plVar6;
        }
        *(undefined4 *)(param_1 + 0x310) = 0;
      }
    }
    else {
      (**(code **)(*DAT_146850610 + 0x30))(DAT_146850610,pIVar2);
    }
  }
  return param_1;
}



// FUNCTION 140452ae0 FUN_140452ae0 body=998 status=ok
// SIG undefined FUN_140452ae0(void)

undefined8 * FUN_140452ae0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 *local_78;
  longlong *local_70;
  longlong local_68 [4];
  undefined8 *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  *param_1 = &PTR_FUN_143f4b6a0;
  param_1[1] = *param_2;
  lVar5 = param_2[1];
  param_1[2] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)0x0;
  ppuVar1 = (undefined8 **)(param_1 + 3);
  local_68[0] = 0;
  *ppuVar1 = (undefined8 *)0x0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  FUN_1416a0990(local_68,local_68 + 2);
  cVar7 = FString::StartsWith(local_68,L"Windows 8",1);
  if ((cVar7 == '\0') && (cVar7 = FString::StartsWith(local_68,L"Windows 10",1), cVar7 == '\0')) {
    puVar8 = (undefined8 *)operator_new(0x30);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_FUN_143f4c6d8;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      *(undefined1 *)(puVar8 + 5) = 0;
      puVar10 = puVar8;
    }
    plVar9 = (longlong *)operator_new(0x18);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_143f3f2e0;
      plVar9[2] = (longlong)puVar10;
    }
    local_88 = puVar10;
    local_80 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_88,puVar10,puVar10);
    if (ppuVar1 != &local_88) {
      *ppuVar1 = puVar10;
      local_88 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 4,&local_80);
      plVar9 = local_80;
    }
  }
  else {
    puVar8 = (undefined8 *)operator_new(0x50);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      *(undefined1 *)(puVar8 + 5) = 0;
      *puVar8 = &PTR_FUN_143f4c750;
      *(undefined4 *)(puVar8 + 6) = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      *(undefined1 *)(puVar8 + 9) = 0;
      puVar10 = puVar8;
    }
    plVar9 = (longlong *)operator_new(0x18);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_143f3f2e0;
      plVar9[2] = (longlong)puVar10;
    }
    local_78 = puVar10;
    local_70 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_78,puVar10,puVar10);
    if (ppuVar1 != &local_78) {
      *ppuVar1 = puVar10;
      local_78 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 4,&local_70);
      plVar9 = local_70;
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  plVar9 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd8))();
  if (plVar9 != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
    local_48 = *ppuVar1;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_40 = plVar6;
    puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,local_38,local_68 + 4);
    if (param_1 + 5 != puVar10) {
      param_1[5] = *puVar10;
      *puVar10 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 6,puVar10 + 1);
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_30 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    plVar9 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
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
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar6 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  plVar9 = (longlong *)param_1[5];
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9,0);
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  return param_1;
}



// FUNCTION 140452ed0 FUN_140452ed0 body=236 status=ok
// SIG undefined FUN_140452ed0(void)

undefined8 * FUN_140452ed0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar2,(longlong)iVar1 << 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar2,(longlong)iVar1 << 6);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<FVector,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[4],pvVar2,(longlong)iVar1 * 0xc);
  }
  return param_1;
}



// FUNCTION 140452fc0 FUN_140452fc0 body=811 status=ok
// SIG undefined FUN_140452fc0(void)

/* WARNING: Removing unreachable block (ram,0x0001404530f4) */
/* WARNING: Removing unreachable block (ram,0x000140453112) */

undefined4 *
FUN_140452fc0(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_48 [8];
  longlong *local_40;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 10) = *param_2;
  lVar7 = param_2[1];
  *(longlong *)(param_1 + 0xc) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0xe) = *param_3;
  lVar7 = param_3[1];
  *(longlong *)(param_1 + 0x10) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)(param_1 + 0x12);
  *plVar4 = 0;
  puVar2 = (undefined8 *)(param_1 + 0x44);
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x25) = 0;
  param_1[0x27] = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb6) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x1c] = 0x500;
  param_1[0x1d] = 0x2d0;
  *(undefined2 *)(param_1 + 0x24) = 1;
  param_1[0x28] = 200;
  param_1[0x2c] = 0x41000000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = param_4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = param_5;
  *puVar2 = 0;
  for (iVar8 = 0x1f; 3U >> iVar8 == 0; iVar8 = iVar8 + -1) {
  }
  param_1[0x47] = 0;
  for (iVar5 = 0x1f; 2U >> iVar5 == 0; iVar5 = iVar5 + -1) {
  }
  iVar8 = 1 << (0x20U - ('\x1f' - (char)iVar5) & ~(byte)((0x1f - iVar8) * 0x4000000 >> 0x1f) & 0x1f)
  ;
  param_1[0x46] = iVar8;
  if ((int)param_1[0x47] < iVar8) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(puVar2);
  }
  _guard_xfg_dispatch_icall_nop((void *)*puVar2,0,(longlong)iVar8 << 2);
  param_1[0x42] = param_1[0x46] + -1;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x52,0);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  plVar6 = (longlong *)FUN_140490060();
  lVar7 = plVar6[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar7 = plVar6[0x1f];
  }
  cVar3 = *(char *)(lVar7 + 0x52);
  if (cVar3 == '\0') {
    param_1[0x4b] = 1;
  }
  else if (cVar3 == '\x01') {
    param_1[0x4b] = 2;
  }
  else if (cVar3 == '\x02') {
    param_1[0x4b] = 4;
  }
  plVar6 = (longlong *)FUN_1404644d0(local_48);
  if (plVar4 != plVar6) {
    *plVar4 = *plVar6;
    *plVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x14,plVar6 + 1);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (*plVar4 != 0) {
    FUN_140464f40(*plVar4,param_1 + 0x16);
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1404532f0 FUN_1404532f0 body=1299 status=ok
// SIG undefined FUN_1404532f0(void)

undefined8 * FUN_1404532f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t wVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  wint_t *pwVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  undefined2 *local_res20;
  undefined2 *local_98;
  undefined2 *local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = &PTR__scalar_deleting_destructor__143f48690;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  FText::FText(param_1 + 5);
  FText::FText(param_1 + 8);
  FText::FText(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0xe) = 5;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  local_88 = (undefined2 *)0x0;
  local_80 = 0;
  cVar4 = (**(code **)(*(longlong *)param_1[2] + 0x38))();
  *(bool *)((longlong)param_1 + 0x74) = cVar4 == 's';
  lVar10 = (**(code **)(*(longlong *)param_1[2] + 0x60))((longlong *)param_1[2],0);
  uVar16 = 0xffffffffffffffff;
  if (lVar10 != 0) {
    local_res8[0] = 0;
    do {
      uVar16 = uVar16 + 1;
    } while (*(char *)(lVar10 + uVar16) != '\0');
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (local_res8,0x7fffffff,lVar10,uVar16 & 0xffffffff);
    iVar8 = local_res8[0];
    lVar12 = (longlong)local_res8[0];
    iVar7 = local_res8[0] + 1;
    if ((int)local_80 < iVar7) {
      local_80 = CONCAT44(local_80._4_4_,iVar7);
      if (local_80._4_4_ < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88);
      }
    }
    else if ((iVar7 < (int)local_80) && (iVar7 != (int)local_80)) {
      local_80 = CONCAT44(local_80._4_4_,iVar7);
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_88);
    }
    local_88[lVar12] = 0;
    local_98 = local_88;
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_98,iVar8,lVar10,uVar16 & 0xffffffff);
    uVar11 = FText::FromString(local_78,&local_88);
    FText::operator=(param_1 + 5,uVar11);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    FText::operator=(param_1 + 8,param_1 + 5);
  }
  iVar8 = (**(code **)(*(longlong *)param_1[2] + 0x20))((longlong *)param_1[2],"placeholder",0,0);
  if (iVar8 != 0) {
    uVar11 = operator_new(iVar8);
    (**(code **)(*(longlong *)param_1[2] + 0x20))((longlong *)param_1[2],"placeholder",uVar11,iVar8)
    ;
    local_res10[0] = 0;
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (local_res10,0x7fffffff,uVar11,iVar8);
    uVar16 = local_80;
    iVar7 = local_res10[0];
    lVar10 = (longlong)local_res10[0];
    iVar9 = local_res10[0] + 1;
    if ((int)local_80 < iVar9) {
      local_80 = CONCAT44(local_80._4_4_,iVar9);
      if (local_80._4_4_ < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,uVar16 & 0xffffffff);
      }
    }
    else if ((iVar9 < (int)local_80) && (iVar9 != (int)local_80)) {
      local_80 = CONCAT44(local_80._4_4_,iVar9);
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_88);
    }
    local_88[lVar10] = 0;
    local_res20 = local_88;
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_res20,iVar7,uVar11,iVar8);
    FMemory::operator_delete(uVar11);
    uVar11 = FText::FromString(local_60,&local_88);
    FText::operator=(param_1 + 0xb,uVar11);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
  }
  if ((*(char *)((longlong)param_1 + 0x74) == '\0') &&
     (iVar8 = (**(code **)(*(longlong *)param_1[2] + 0x20))
                        ((longlong *)param_1[2],&DAT_143f40214,0,0), iVar8 != 0)) {
    uVar11 = operator_new(iVar8);
    (**(code **)(*(longlong *)param_1[2] + 0x20))
              ((longlong *)param_1[2],&DAT_143f40214,uVar11,iVar8);
    local_res18[0] = 0;
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (local_res18,0x7fffffff,uVar11,iVar8);
    uVar16 = local_80;
    iVar7 = local_res18[0];
    lVar10 = (longlong)local_res18[0];
    iVar9 = local_res18[0] + 1;
    if ((int)local_80 < iVar9) {
      local_80 = CONCAT44(local_80._4_4_,iVar9);
      if (local_80._4_4_ < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,uVar16 & 0xffffffff);
      }
    }
    else if ((iVar9 < (int)local_80) && (iVar9 != (int)local_80)) {
      local_80 = CONCAT44(local_80._4_4_,iVar9);
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_88);
    }
    local_88[lVar10] = 0;
    local_90 = local_88;
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_90,iVar7,uVar11,iVar8);
    FMemory::operator_delete(uVar11);
    pwVar14 = L"dpassword";
    puVar15 = &DAT_143f3eda8;
    if ((int)local_80 != 0) {
      puVar15 = local_88;
    }
    do {
      do {
        pwVar14 = pwVar14 + 1;
        wVar3 = *(wchar_t *)((longlong)(puVar15 + -0xa1fa0474) + (longlong)pwVar14);
        if ((wVar3 == L'\0') && (*pwVar14 == L'\0')) goto LAB_14045369f;
      } while (wVar3 == *pwVar14);
      wVar5 = towlower(wVar3);
      wVar6 = towlower(*pwVar14);
    } while (wVar5 == wVar6);
    if (wVar5 == wVar6) {
LAB_14045369f:
      *(undefined4 *)(param_1 + 0xe) = 4;
    }
    else {
      pwVar14 = L"pnumber";
      puVar15 = &DAT_143f3eda8;
      if ((int)local_80 != 0) {
        puVar15 = local_88;
      }
      do {
        do {
          pwVar14 = pwVar14 + 1;
          wVar3 = *(wchar_t *)((longlong)(puVar15 + -0xa1fa0480) + (longlong)pwVar14);
          if ((wVar3 == L'\0') && (*pwVar14 == L'\0')) goto LAB_1404536ff;
        } while (wVar3 == *pwVar14);
        wVar5 = towlower(wVar3);
        wVar6 = towlower(*pwVar14);
      } while (wVar5 == wVar6);
      if (wVar5 != wVar6) {
        pwVar13 = &DAT_143f40910;
        puVar15 = &DAT_143f3eda8;
        if ((int)local_80 != 0) {
          puVar15 = local_88;
        }
        do {
          wVar5 = *(wint_t *)((longlong)(puVar15 + -0xa1fa0488) + (longlong)pwVar13);
          if ((wVar5 == 0) && (*pwVar13 == 0)) goto LAB_14045375f;
          if (wVar5 != *pwVar13) {
            wVar5 = towlower(wVar5);
            wVar6 = towlower(*pwVar13);
            if (wVar5 != wVar6) goto LAB_140453754;
          }
          pwVar13 = pwVar13 + 1;
        } while( true );
      }
LAB_1404536ff:
      *(undefined4 *)(param_1 + 0xe) = 1;
    }
  }
  goto LAB_1404537c2;
LAB_1404537b0:
  if (wVar5 == wVar6) {
LAB_1404537ba:
    *(undefined4 *)(param_1 + 0xe) = 3;
  }
  goto LAB_1404537c2;
LAB_140453754:
  if (wVar5 != wVar6) {
    pwVar14 = L"email";
    puVar15 = &DAT_143f3eda8;
    if ((int)local_80 != 0) {
      puVar15 = local_88;
    }
    do {
      wVar3 = *(wchar_t *)((longlong)(puVar15 + -0xa1fa048c) + (longlong)pwVar14);
      if ((wVar3 == L'\0') && (*pwVar14 == L'\0')) goto LAB_1404537ba;
      if (wVar3 != *pwVar14) {
        wVar5 = towlower(wVar3);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_1404537b0;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_14045375f:
  *(undefined4 *)(param_1 + 0xe) = 2;
LAB_1404537c2:
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140453810 FUN_140453810 body=1566 status=ok
// SIG undefined FUN_140453810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

IClientSideSocket *
FUN_140453810(IClientSideSocket *param_1,undefined8 param_2,char *param_3,undefined8 *param_4,
             uint param_5)

{
  IClientSideSocket *pIVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  IClientSideSocket *pIVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_138 [32];
  longlong *local_118;
  IClientSideSocket *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  longlong local_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 *local_d0;
  IClientSideSocket *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_d0 = param_4;
  local_c8 = param_1;
  local_c0 = param_2;
  cohtml::IClientSideSocket::IClientSideSocket(param_1);
  pIVar1 = param_1 + 0x30;
  local_f0 = 0;
  *(undefined ***)param_1 = &PTR_FUN_143f48940;
  local_108 = param_1 + 0x20;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(longlong *)local_108 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(longlong *)pIVar1 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x40] = (IClientSideSocket)0x1;
  local_e8 = 0;
  uStack_e4 = 0;
  lVar11 = 0;
  iVar16 = 0;
  if ((param_3 != (char *)0x0) && (lVar13 = -1, lVar11 = 0, iVar16 = 0, *param_3 != '\0')) {
    do {
      lVar13 = lVar13 + 1;
    } while (param_3[lVar13] != '\0');
    iVar12 = (int)lVar13 + 1;
    uStack_e4 = 0;
    local_e8 = iVar12;
    if (0 < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0,0);
    }
    iVar16 = local_e8;
    lVar11 = local_f0;
    local_118 = (longlong *)CONCAT62(local_118._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_f0,iVar12,param_3,iVar12);
  }
  uVar4 = uStack_e4;
  if (local_108 == (IClientSideSocket *)&local_f0) {
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
  }
  else {
    if (*(longlong *)local_108 != 0) {
      FMemory::Free();
    }
    *(longlong *)local_108 = lVar11;
    *(int *)(local_108 + 8) = iVar16;
    *(undefined4 *)(local_108 + 0xc) = uVar4;
  }
  pIVar5 = (IClientSideSocket *)(ulonglong)param_5;
  if (param_5 != 0) {
    do {
      local_108 = pIVar5;
      uVar15 = 0;
      pcVar3 = (char *)*param_4;
      local_100 = 0;
      uVar17 = 0;
      local_f8 = local_f8 & 0xffffffff;
      uVar18 = uVar15;
      if ((pcVar3 != (char *)0x0) && (lVar11 = -1, *pcVar3 != '\0')) {
        do {
          lVar13 = lVar11 + 1;
          lVar11 = lVar11 + 1;
        } while (pcVar3[lVar13] != '\0');
        uVar14 = (int)lVar11 + 1;
        local_f8 = (ulonglong)uVar14;
        uVar17 = uVar14;
        if (0 < (int)uVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
          uVar18 = local_f8 >> 0x20;
          uVar17 = (uint)local_f8;
        }
        uVar15 = local_100;
        local_118 = (longlong *)CONCAT62(local_118._2_6_,0x3f);
        FGenericPlatformString::Convert<char,wchar_t>(local_100,uVar14,pcVar3,uVar14);
        param_4 = local_d0;
      }
      iVar16 = *(int *)(param_1 + 0x38);
      iVar12 = iVar16 + 1;
      *(int *)(param_1 + 0x38) = iVar12;
      if (*(int *)(param_1 + 0x3c) < iVar12) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pIVar1);
      }
      param_4 = param_4 + 1;
      local_100 = 0;
      puVar6 = (ulonglong *)((longlong)iVar16 * 0x10 + *(longlong *)pIVar1);
      *puVar6 = uVar15;
      *(int *)((longlong)puVar6 + 0xc) = (int)uVar18;
      local_108 = local_108 + -1;
      *(uint *)(puVar6 + 1) = uVar17;
      local_f8 = 0;
      pIVar5 = local_108;
      local_d0 = param_4;
    } while (local_108 != (IClientSideSocket *)0x0);
  }
  pIVar5 = local_c8;
  *(undefined8 *)(local_c8 + 8) = local_c0;
  FName::FName(&local_c0,"WebSockets",1);
  uVar7 = FUN_14168dc80();
  FUN_141690010(uVar7);
  _guard_xfg_dispatch_icall_nop(local_98,0,0x50);
  plVar8 = (longlong *)FUN_142ea36e0();
  local_98[0] = 0;
  local_118 = local_98;
  local_98[1] = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x48))(plVar8,local_b0,pIVar5 + 0x20,pIVar1);
  local_d8 = (longlong *)puVar9[1];
  local_e0 = *puVar9;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
    UNLOCK();
  }
  pIVar1 = pIVar5 + 0x10;
  if (pIVar1 != (IClientSideSocket *)&local_e0) {
    *(undefined8 *)pIVar1 = local_e0;
    local_e0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(pIVar5 + 0x18,&local_d8);
  }
  plVar8 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_d8 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_a8 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_98,0);
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  plVar8 = (longlong *)(**(code **)(**(longlong **)pIVar1 + 0x30))();
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar10 != (longlong *)0x0) {
    plVar10[1] = (longlong)pIVar5;
    *plVar10 = (longlong)&DAT_143f3ed00;
    plVar10[2] = (longlong)&LAB_140470710;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar11;
    *plVar10 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_c8);
    iVar16 = (int)plVar8[1];
    *(int *)(plVar8 + 1) = iVar16 + 1;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar16 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar16);
    }
    puVar9 = (undefined8 *)((longlong)iVar16 * 0x10 + *plVar8);
    *puVar9 = plVar10;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  plVar8 = (longlong *)(**(code **)(**(longlong **)pIVar1 + 0x38))();
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar10 != (longlong *)0x0) {
    plVar10[1] = (longlong)pIVar5;
    *plVar10 = (longlong)&DAT_143f3ed00;
    plVar10[2] = (longlong)FUN_1404707d0;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar11;
    *plVar10 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_d0);
    iVar16 = (int)plVar8[1];
    *(int *)(plVar8 + 1) = iVar16 + 1;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar16 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar16);
    }
    puVar9 = (undefined8 *)((longlong)iVar16 * 0x10 + *plVar8);
    *puVar9 = plVar10;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  plVar8 = (longlong *)(**(code **)(**(longlong **)pIVar1 + 0x40))();
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar10 != (longlong *)0x0) {
    plVar10[1] = (longlong)pIVar5;
    *plVar10 = (longlong)&DAT_143f3ed00;
    plVar10[2] = (longlong)FUN_140470730;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar11;
    *plVar10 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_108);
    iVar16 = (int)plVar8[1];
    *(int *)(plVar8 + 1) = iVar16 + 1;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar16 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar16);
    }
    puVar9 = (undefined8 *)((longlong)iVar16 * 0x10 + *plVar8);
    *puVar9 = plVar10;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  plVar8 = (longlong *)(**(code **)(**(longlong **)pIVar1 + 0x50))();
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar10 != (longlong *)0x0) {
    plVar10[1] = (longlong)pIVar5;
    *plVar10 = (longlong)&DAT_143f3ed00;
    plVar10[2] = (longlong)&LAB_140470870;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar11;
    *plVar10 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
    (**(code **)(*plVar10 + 0x20))(plVar10,local_b8);
    iVar16 = (int)plVar8[1];
    *(int *)(plVar8 + 1) = iVar16 + 1;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar16 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar16);
    }
    puVar9 = (undefined8 *)((longlong)iVar16 * 0x10 + *plVar8);
    *puVar9 = plVar10;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  (**(code **)(**(longlong **)pIVar1 + 8))();
  return pIVar5;
}



// FUNCTION 140453e30 TTuple<FString,TArray<FString,FDefaultAllocator>_> body=195 status=ok
// SIG undefined TTuple<FString,TArray<FString,FDefaultAllocator>_>(void)

longlong TTuple<FString,TArray<FString,FDefaultAllocator>_>::
         TTuple<FString,TArray<FString,FDefaultAllocator>_>(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  FString::FString();
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar3 = *(int *)(param_2 + 0x18);
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  *(int *)(param_1 + 0x18) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x10,iVar3,0);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    do {
      *puVar2 = 0;
      iVar1 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      *(int *)(puVar2 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 * 2);
      }
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}



// FUNCTION 140453f00 FQuat body=696 status=ok
// SIG undefined FQuat(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FQuat::FQuat(float *param_1,float *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined8 local_30;
  undefined4 uStack_28;
  float fStack_24;
  
  uVar1 = _DAT_1464aa818;
  fVar7 = *param_2;
  if (((0.0001 < ABS(fVar7)) || (0.0001 < ABS(param_2[1]))) || (0.0001 < ABS(param_2[2]))) {
    fVar8 = param_2[5];
    if (((0.0001 < ABS(param_2[4])) || (0.0001 < ABS(fVar8))) || (0.0001 < ABS(param_2[6]))) {
      fVar6 = param_2[10];
      if (((0.0001 < ABS(param_2[8])) || (0.0001 < ABS(param_2[9]))) || (0.0001 < ABS(fVar6))) {
        fVar5 = fVar8 + fVar7 + fVar6;
        if (0.0 < fVar5) {
          fVar5 = fVar5 + 1.0;
          auVar9 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
          fVar7 = auVar9._0_4_;
          fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
          fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
          fVar8 = fVar7 * 0.5;
          param_1[3] = 0.5 / fVar7;
          *param_1 = (param_2[6] - param_2[9]) * fVar8;
          param_1[1] = (param_2[8] - param_2[2]) * fVar8;
          param_1[2] = (param_2[1] - param_2[4]) * fVar8;
          return param_1;
        }
        uVar2 = (ulonglong)(fVar7 < fVar8);
        if (param_2[uVar2 * 5] <= fVar6 && fVar6 != param_2[uVar2 * 5]) {
          uVar2 = 2;
        }
        lVar4 = (longlong)*(int *)(&DAT_143f47c50 + uVar2 * 4);
        lVar3 = (longlong)*(int *)(&DAT_143f47c50 + lVar4 * 4);
        fVar7 = ((param_2[uVar2 * 5] - param_2[lVar4 * 5]) - param_2[lVar3 * 5]) + 1.0;
        auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar6 = auVar9._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar7 * 0.5 * fVar6 * fVar6);
        fVar6 = fVar6 + fVar6 * (0.5 - fVar7 * 0.5 * fVar6 * fVar6);
        fVar7 = param_2[lVar3 + lVar4 * 4];
        fVar8 = param_2[lVar4 + lVar3 * 4];
        fVar5 = fVar6 * 0.5;
        *(float *)((longlong)&local_30 + uVar2 * 4) = 0.5 / fVar6;
        fStack_24 = (fVar7 - fVar8) * fVar5;
        *(float *)((longlong)&local_30 + lVar4 * 4) =
             (param_2[lVar4 + uVar2 * 4] + param_2[uVar2 + lVar4 * 4]) * fVar5;
        *(float *)((longlong)&local_30 + lVar3 * 4) =
             (param_2[uVar2 + lVar3 * 4] + param_2[lVar3 + uVar2 * 4]) * fVar5;
        *(undefined8 *)param_1 = local_30;
        *(ulonglong *)(param_1 + 2) = CONCAT44(fStack_24,uStack_28);
        return param_1;
      }
    }
  }
  *(undefined8 *)param_1 = _DAT_1464aa810;
  *(undefined8 *)(param_1 + 2) = uVar1;
  return param_1;
}



// FUNCTION 1404541c0 FReply body=544 status=ok
// SIG undefined FReply(void)

undefined1 * FReply::FReply(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  param_1[0x20] = 0;
  if (param_2[0x20] != '\0') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    param_1[0x20] = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  param_1[0xb0] = param_2[0xb0];
  param_1[0xb1] = param_2[0xb1];
  param_1[0xb2] = param_2[0xb2];
  param_1[0xb3] = param_2[0xb3];
  *(uint *)(param_1 + 0xb4) =
       *(uint *)(param_1 + 0xb4) ^ (*(uint *)(param_1 + 0xb4) ^ *(uint *)(param_2 + 0xb4)) & 1;
  uVar1 = (*(uint *)(param_1 + 0xb4) ^ *(uint *)(param_2 + 0xb4)) & 2 ^ *(uint *)(param_1 + 0xb4);
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0xb4)) & 4 ^ uVar1;
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0xb4)) & 8 ^ uVar1;
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0xb4)) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0xb4)) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0xb4)) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0xb4) = uVar1;
  *(uint *)(param_1 + 0xb4) = (uVar1 ^ *(uint *)(param_2 + 0xb4)) & 0x80 ^ uVar1;
  return param_1;
}



// FUNCTION 1404543e0 FSoftObjectPath body=98 status=ok
// SIG undefined FSoftObjectPath(void)

undefined8 * FSoftObjectPath::FSoftObjectPath(undefined8 *param_1,longlong *param_2)

{
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = *param_2;
  *param_2 = 0;
  local_10 = (undefined4)param_2[1];
  local_c = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_1417978e0(param_1,&local_18);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140454450 FUN_140454450 body=58 status=ok
// SIG undefined FUN_140454450(void)

undefined4 * FUN_140454450(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  FUntypedBulkData::FUntypedBulkData(param_1 + 2);
  *(undefined ***)(param_1 + 2) = &PTR__scalar_deleting_destructor__143f48b90;
  return param_1;
}



// FUNCTION 140454490 FURL body=262 status=ok
// SIG undefined FURL(void)

longlong FURL::FURL(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  FString::FString();
  FString::FString(param_1 + 0x10,param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FString::FString(param_1 + 0x28,param_2 + 0x28);
  FString::FString(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = 0;
  iVar3 = *(int *)(param_2 + 0x50);
  puVar4 = *(undefined8 **)(param_2 + 0x48);
  *(int *)(param_1 + 0x50) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x48,iVar3,0);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    do {
      *puVar2 = 0;
      iVar1 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      *(int *)(puVar2 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 * 2);
      }
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FString::FString(param_1 + 0x58,param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 1404545a0 FUN_1404545a0 body=290 status=ok
// SIG undefined FUN_1404545a0(void)

longlong * FUN_1404545a0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong local_28 [2];
  ulonglong uVar6;
  
  uVar6 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar2 = (longlong *)FUN_140486080(local_28);
  if (param_1 != plVar2) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_1 + 1) = (int)plVar2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if ((int)param_3[1] != 0) {
    do {
      puVar3 = (undefined8 *)FUN_140486080(local_28,*(undefined8 *)(*param_3 + uVar6 * 8));
      iVar1 = (int)param_1[3];
      *(int *)(param_1 + 3) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar1);
      }
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[2]);
      *puVar4 = 0;
      *puVar4 = *puVar3;
      *puVar3 = 0;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
      *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
      puVar3[1] = 0;
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_3 + 1));
  }
  return param_1;
}



// FUNCTION 1404546d0 FUN_1404546d0 body=1171 status=ok
// SIG undefined FUN_1404546d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1404546d0(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f800000;
  param_1[5] = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  param_1[0x18] = 0x3f800000;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1d] = 0x3f800000;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  param_1[0x20] = 0x3f800000;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x25] = 0x3f800000;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3f800000;
  param_1[0x48] = 0x3f800000;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4d] = 0x3f800000;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x3f800000;
  param_1[0x58] = 0x3f800000;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[0x5d] = 0x3f800000;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0x3f800000;
  param_1[0x90] = 0x3f800000;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
  param_1[0x95] = 0x3f800000;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x3f800000;
  param_1[0xa0] = 0x3f800000;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x51c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x524) = 0;
  param_1[0xa5] = 0x3f800000;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0x3f800000;
  param_1[0x30] = 0x3f800000;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x35] = 0x3f800000;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x60] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0x3f800000;
  param_1[0x65] = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x3f800000;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x68] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0x3f800000;
  param_1[0x6d] = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0x3f800000;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x88] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0x3f800000;
  param_1[0x8d] = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0x3f800000;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0x98] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0x3f800000;
  param_1[0x9d] = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0x3f800000;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x28] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0x3f800000;
  param_1[0x2d] = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  param_1[0xa8] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xa9) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x54c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x554) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0xab) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x55c) = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0xac) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x564) = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0xad) = 0x3f800000;
  return param_1;
}



// FUNCTION 140454b70 FUN_140454b70 body=1072 status=ok
// SIG undefined FUN_140454b70(void)

undefined1 * FUN_140454b70(undefined1 *param_1,undefined1 *param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  
  *param_1 = *param_2;
  param_1[8] = param_2[8];
  FURL::FURL(param_1 + 0x10,param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x84);
  uVar3 = *(undefined4 *)(param_2 + 0x88);
  uVar4 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  param_1[0x90] = param_2[0x90];
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  param_1[0xb0] = param_2[0xb0];
  param_1[0xb1] = param_2[0xb1];
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  FString::FString(param_1 + 0xd0,param_2 + 0xd0);
  param_1[0xe0] = param_2[0xe0];
  FURL::FURL(param_1 + 0xe8,param_2 + 0xe8);
  FURL::FURL(param_1 + 0x158,param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::CopyToEmpty<FFullyLoadedPackagesInfo>
            (param_1 + 0x1d0,*(undefined8 *)(param_2 + 0x1d0),*(undefined4 *)(param_2 + 0x1d8),0,0);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  iVar9 = *(int *)(param_2 + 0x1e8);
  pvVar1 = *(void **)(param_2 + 0x1e0);
  *(int *)(param_1 + 0x1e8) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x1e0,iVar9,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x1e0),pvVar1,(longlong)iVar9 << 3);
  }
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  iVar9 = *(int *)(param_2 + 0x1f8);
  pvVar1 = *(void **)(param_2 + 0x1f0);
  *(int *)(param_1 + 0x1f8) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x1fc) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x1f0,iVar9,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x1f0),pvVar1,(longlong)iVar9 << 3);
  }
  FString::FString(param_1 + 0x200,param_2 + 0x200);
  *(uint *)(param_1 + 0x210) =
       *(uint *)(param_1 + 0x210) ^ (*(uint *)(param_2 + 0x210) ^ *(uint *)(param_1 + 0x210)) & 1;
  *(undefined8 *)(param_1 + 0x218) = 0;
  iVar9 = *(int *)(param_2 + 0x220);
  pvVar1 = *(void **)(param_2 + 0x218);
  *(int *)(param_1 + 0x220) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x218,iVar9,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x218),pvVar1,(longlong)iVar9 << 3);
  }
  *(undefined8 *)(param_1 + 0x228) = 0;
  iVar9 = *(int *)(param_2 + 0x230);
  pvVar1 = *(void **)(param_2 + 0x228);
  *(int *)(param_1 + 0x230) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x228,iVar9,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x228),pvVar1,(longlong)iVar9 << 4);
  }
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x248) = 0;
  iVar9 = *(int *)(param_2 + 0x250);
  puVar8 = *(undefined8 **)(param_2 + 0x248);
  *(int *)(param_1 + 0x250) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x254) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x248,iVar9,0);
    puVar7 = *(undefined8 **)(param_1 + 0x248);
    do {
      uVar5 = *puVar8;
      uVar6 = puVar8[1];
      puVar8 = puVar8 + 2;
      *puVar7 = uVar5;
      puVar7[1] = uVar6;
      iVar9 = iVar9 + -1;
      puVar7 = puVar7 + 2;
    } while (iVar9 != 0);
  }
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  FString::FString(param_1 + 0x260,param_2 + 0x260);
  param_1[0x270] = param_2[0x270];
  param_1[0x271] = param_2[0x271];
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_2 + 0x274);
  *(undefined8 *)(param_1 + 0x278) = 0;
  iVar9 = *(int *)(param_2 + 0x280);
  pvVar1 = *(void **)(param_2 + 0x278);
  *(int *)(param_1 + 0x280) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x284) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x278,iVar9,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x278),pvVar1,(longlong)iVar9 << 3);
  }
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x290) = 0;
  iVar9 = *(int *)(param_2 + 0x298);
  puVar8 = *(undefined8 **)(param_2 + 0x290);
  *(int *)(param_1 + 0x298) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x29c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x290,iVar9,0);
    puVar7 = *(undefined8 **)(param_1 + 0x290);
    do {
      uVar5 = *puVar8;
      uVar6 = puVar8[1];
      puVar8 = puVar8 + 2;
      *puVar7 = uVar5;
      puVar7[1] = uVar6;
      iVar9 = iVar9 + -1;
      puVar7 = puVar7 + 2;
    } while (iVar9 != 0);
  }
  return param_1;
}



// FUNCTION 140454fa0 FUN_140454fa0 body=283 status=ok
// SIG undefined FUN_140454fa0(void)

undefined8 * FUN_140454fa0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143f4c648;
  param_1[0x27] = param_2;
  param_1[0x28] = 0;
  param_1[0x29] = 1;
  param_1[0x2a] = 2;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2c) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x2d) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2e) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  return param_1;
}



// FUNCTION 1404550c0 FUN_1404550c0 body=233 status=ok
// SIG undefined FUN_1404550c0(void)

undefined8 * FUN_1404550c0(undefined8 *param_1)

{
  FUN_1417f46d0();
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf7;
  *param_1 = &PTR__scalar_deleting_destructor__143f4b718;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 1;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a6) = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined2 *)((longlong)param_1 + 700) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  FUN_140462870(param_1);
  return param_1;
}



// FUNCTION 1404551b0 TConstIterator body=236 status=ok
// SIG undefined TConstIterator(void)

longlong *
TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
          (longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int local_28;
  uint uStack_24;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(param_2 + 0x28);
  local_28 = 0;
  uStack_24 = 1;
  iStack_14 = 0;
  iStack_10 = 0;
  if (iVar1 != 0) {
    puVar6 = *(uint **)(param_2 + 0x20);
    if (*(uint **)(param_2 + 0x20) == (uint *)0x0) {
      puVar6 = (uint *)(param_2 + 0x10);
    }
    uVar2 = *puVar6;
    iStack_10 = 0;
    local_28 = 0;
    while (uVar2 == 0) {
      lVar4 = (longlong)local_28;
      iStack_10 = iStack_10 + 0x20;
      iVar5 = local_28 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_28;
      local_28 = iVar5;
      if (bVar3) goto LAB_140455274;
      uVar2 = puVar6[lVar4 + 1];
    }
    uStack_24 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_24 != 0) {
      for (; uStack_24 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_24 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_14 = (iStack_10 - iVar5) + 0x1f;
    if (iVar1 < iStack_14) {
LAB_140455274:
      iStack_14 = iVar1;
    }
  }
  *param_1 = param_2;
  param_1[1] = CONCAT44(uStack_24,local_28);
  param_1[2] = param_2 + 0x10;
  param_1[3] = CONCAT44(iStack_14,0xffffffff);
  param_1[4] = CONCAT44(uStack_c,iStack_10);
  return param_1;
}



// FUNCTION 1404552a0 FUN_1404552a0 body=1212 status=ok
// SIG undefined FUN_1404552a0(void)

/* WARNING: Removing unreachable block (ram,0x00014045548b) */
/* WARNING: Removing unreachable block (ram,0x0001404553c3) */
/* WARNING: Removing unreachable block (ram,0x000140455550) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1404552a0(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  undefined8 *puVar13;
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_141781840();
  *param_1 = &PTR_FUN_143f3f648;
  if (DAT_146850538 != '\0') {
    return param_1;
  }
  iVar10 = 0;
  local_78 = (undefined8 *)0x0;
  local_68 = 0;
  DAT_146850538 = 1;
  local_70 = 1;
  local_60 = 0x4a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  lVar8 = local_68;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_68,0x4a,
             "Material\'/CohtmlPlugin/CohtmlCompositorMaterial.CohtmlCompositorMaterial\'",0x4a,0x3f
            );
  local_50 = (undefined4)local_60;
  local_4c = local_60._4_4_;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_58 = lVar8;
  FUN_1417978e0(&local_48,&local_58);
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
            (&local_78,0);
  puVar13 = local_78;
  *local_78 = local_48;
  local_78[1] = 0;
  local_78[1] = local_40;
  *(undefined4 *)(local_78 + 2) = (undefined4)local_38;
  *(undefined4 *)((longlong)local_78 + 0x14) = local_38._4_4_;
  local_38 = 0;
  local_40 = 0;
  local_68 = 0;
  local_60 = 0x42;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  lVar8 = local_68;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_68,0x42,"Material\'/CohtmlPlugin/CohtmlEditorMaterial.CohtmlEditorMaterial\'",
             0x42,0x3f);
  local_50 = (undefined4)local_60;
  local_4c = local_60._4_4_;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_58 = lVar8;
  FUN_1417978e0(&local_48,&local_58);
  lVar8 = (longlong)(int)local_70;
  iVar11 = (int)local_70 + 1;
  if (local_70._4_4_ < iVar11) {
    uVar6 = local_70 & 0xffffffff;
    local_70._0_4_ = iVar11;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_78,uVar6);
    puVar13 = local_78;
    iVar11 = (int)local_70;
  }
  local_70._0_4_ = iVar11;
  iVar3 = local_70._4_4_;
  iVar2 = (int)local_70;
  puVar13[lVar8 * 3] = local_48;
  puVar13[lVar8 * 3 + 1] = 0;
  puVar13[lVar8 * 3 + 1] = local_40;
  *(undefined4 *)(puVar13 + lVar8 * 3 + 2) = (undefined4)local_38;
  *(undefined4 *)((longlong)puVar13 + lVar8 * 0x18 + 0x14) = local_38._4_4_;
  local_38 = 0;
  local_40 = 0;
  local_68 = 0;
  local_60 = 0x3c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  lVar8 = local_68;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_68,0x3c,"Material\'/CohtmlPlugin/CohtmlHUDMaterial.CohtmlHUDMaterial\'",0x3c,0x3f
            );
  local_50 = (undefined4)local_60;
  local_4c = local_60._4_4_;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_58 = lVar8;
  FUN_1417978e0(&local_48,&local_58);
  iVar11 = iVar2 + 1;
  local_70 = CONCAT44(local_70._4_4_,iVar11);
  if (iVar3 < iVar11) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_78,iVar2);
    puVar13 = local_78;
    iVar11 = (int)local_70;
  }
  lVar8 = (longlong)iVar2;
  puVar13[lVar8 * 3] = local_48;
  puVar13[lVar8 * 3 + 1] = 0;
  puVar13[lVar8 * 3 + 1] = local_40;
  *(undefined4 *)(puVar13 + lVar8 * 3 + 2) = (undefined4)local_38;
  *(undefined4 *)((longlong)puVar13 + lVar8 * 0x18 + 0x14) = local_38._4_4_;
  local_38 = 0;
  local_40 = 0;
  plVar9 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  do {
    while( true ) {
      if ((iVar10 < 0) || (iVar11 <= iVar10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        if (iVar11 != 0) {
          plVar9 = puVar13 + 1;
          do {
            if (*plVar9 != 0) {
              FMemory::Free();
            }
            plVar9 = plVar9 + 3;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        if (puVar13 != (undefined8 *)0x0) {
          FMemory::Free(puVar13);
        }
        return param_1;
      }
      lVar8 = FSoftObjectPath::TryLoad(puVar13 + (longlong)iVar10 * 3);
      if (lVar8 != 0) break;
LAB_1404555e9:
      iVar10 = iVar10 + 1;
    }
    lVar4 = ACineCameraActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((!bVar1) || (DAT_1468509f0 <= *(int *)(*plVar9 + 0x38))) ||
       (_Init_thread_header(&DAT_1468509f0), DAT_1468509f0 != -1)) goto LAB_1404555e9;
    puVar5 = (undefined8 *)FSoftObjectPath::ToString(puVar13 + (longlong)iVar10 * 3,&local_58);
    if (*(int *)(puVar5 + 1) == 0) {
      psVar12 = &DAT_143f3eda8;
    }
    else {
      psVar12 = (short *)*puVar5;
    }
    FUN_141785db0(psVar12);
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    if ((psVar12 != (short *)0x0) && (*psVar12 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (psVar12[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_70 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      }
      FGenericPlatformString::Memcpy(local_78,psVar12,(longlong)(int)uVar7 * 2);
    }
    FUN_14179acf0(&local_78,1);
    _DAT_1468509e8 = FUN_14044ea10(&local_78);
    if (_DAT_1468509e8 == 0) {
      FUN_14178ab20(psVar12);
    }
    if (local_78 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    _Init_thread_footer(&DAT_1468509f0);
    iVar10 = iVar10 + 1;
  } while( true );
}



// FUNCTION 140455760 FUN_140455760 body=68 status=ok
// SIG undefined FUN_140455760(void)

undefined8 * FUN_140455760(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__143f49c10;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 1404557b0 FUN_1404557b0 body=530 status=ok
// SIG undefined FUN_1404557b0(void)

undefined8 * FUN_1404557b0(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_143f48bd8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = &PTR_FUN_143f48bb8;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xc2700000;
  param_1[0x12] = 0x43c80000;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x45610000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x15);
  *(byte *)((longlong)param_1 + 0x121) = *(byte *)((longlong)param_1 + 0x121) & 0xfc;
  param_1[0x10] = &PTR_FUN_143f48bc8;
  *(undefined1 *)(param_1 + 0x24) = 0x83;
  *(undefined4 *)((longlong)param_1 + 0x122) = 0x30000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x43480000;
  *(undefined4 *)(param_1 + 0x26) = 0x453b8000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x45bb8000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x27);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x36);
  *(float *)((longlong)param_1 + 0x274) = *(float *)(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x45) = 0x469c4000;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0x41f00000;
  *(float *)(param_1 + 0x4f) = *(float *)(param_1 + 0x12) + *(float *)(param_1 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x42700000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x49) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4d) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x4e) = 0x3f733333;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x3e4ccccd;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x50);
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  return param_1;
}



// FUNCTION 1404559d0 FUN_1404559d0 body=405 status=ok
// SIG undefined FUN_1404559d0(void)

undefined8 * FUN_1404559d0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_143f48f50;
  puVar3 = param_1 + 0x41;
  param_1[5] = &PTR_LAB_143f49360;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *puVar3 = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  plVar6 = (longlong *)FUN_140490060();
  lVar7 = plVar6[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar7 = plVar6[0x1f];
  }
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(undefined1 *)(param_1 + 7) = 1;
  bVar5 = *(byte *)(lVar7 + 0x50);
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)((longlong)param_1 + 0x3c) =
       *(byte *)((longlong)param_1 + 0x3c) ^ (bVar5 ^ *(byte *)((longlong)param_1 + 0x3c)) & 1;
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined2 *)(param_1 + 0x46) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1b9) = 1;
  *(undefined4 *)(param_1 + 0x3a) = 1;
  local_10 = (longlong *)0x0;
  if (puVar3 != &local_18) {
    *puVar3 = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x42,&local_10);
    plVar6 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 140455b70 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary();
  *param_1 = &PTR_FUN_143f4b3b0;
  return param_1;
}



// FUNCTION 140455ba0 FUN_140455ba0 body=225 status=ok
// SIG undefined FUN_140455ba0(void)

undefined8 * FUN_140455ba0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  FUN_1404559d0();
  iVar2 = 0;
  plVar1 = param_1 + 0x47;
  *param_1 = &PTR__scalar_deleting_destructor__143f497d0;
  param_1[5] = &PTR_LAB_143f49be0;
  *plVar1 = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  if ((wchar_t *)*plVar1 != L"coui://uiresources/hb_hud/") {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)((longlong)param_1 + 0x244) != 0x1b) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,0x1b);
      iVar2 = *(int *)(param_1 + 0x48);
    }
    *(int *)(param_1 + 0x48) = iVar2 + 0x1b;
    if (*(int *)((longlong)param_1 + 0x244) < iVar2 + 0x1b) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    builtin_wcsncpy((wchar_t *)*plVar1,L"coui://uiresources/hb_hud/",0x1b);
  }
  *(undefined4 *)(param_1 + 0x49) = 0x400;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x400;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  return param_1;
}



// FUNCTION 140455c90 FUN_140455c90 body=33 status=ok
// SIG undefined FUN_140455c90(void)

undefined8 * FUN_140455c90(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143f3f648;
  return param_1;
}



// FUNCTION 140455cc0 FUN_140455cc0 body=228 status=ok
// SIG undefined FUN_140455cc0(void)

undefined8 * FUN_140455cc0(undefined8 *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_28 [32];
  
  FUN_1404559d0();
  *param_1 = &PTR__scalar_deleting_destructor__143f49390;
  param_1[5] = &PTR_LAB_143f497a0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  param_1[0x4b] = 0;
  uVar2 = FUN_14046f590(local_28);
  FSoftObjectPath::operator=(param_1 + 0x47,uVar2);
  lVar3 = FSoftObjectPath::TryLoad(param_1 + 0x47);
  if (lVar3 != 0) {
    lVar4 = ACineCameraActor::GetPrivateStaticClass();
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
      param_1[0x4a] = lVar3;
      return param_1;
    }
  }
  param_1[0x4a] = 0;
  return param_1;
}



// FUNCTION 140455db0 UUWorksInterfaceCoreMatchmaking body=128 status=ok
// SIG undefined UUWorksInterfaceCoreMatchmaking(void)

undefined8 * UUWorksInterfaceCoreMatchmaking::UUWorksInterfaceCoreMatchmaking(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143f483e0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 140455e30 FUN_140455e30 body=256 status=ok
// SIG undefined FUN_140455e30(void)

undefined8 * FUN_140455e30(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_141781840();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_143f486c8;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x24e4;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x42200000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x1010201;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_18 = 0;
  local_10 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  uVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,7,"hidden",7,0x3f);
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 7,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[7]);
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_10;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_10._4_4_;
  return param_1;
}



// FUNCTION 140455f30 FUN_140455f30 body=83 status=ok
// SIG undefined FUN_140455f30(void)

undefined8 * FUN_140455f30(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__143f49e88;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x1000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x1000;
  *(undefined4 *)(param_1 + 0xb) = 0x400;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x400;
  return param_1;
}



// FUNCTION 140455f90 FUN_140455f90 body=413 status=ok
// SIG undefined FUN_140455f90(void)

undefined8 * FUN_140455f90(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_18;
  longlong *local_10;
  
  UWidget::UWidget();
  *param_1 = &PTR_FUN_143f4ba28;
  param_1[0x20] = 0;
  puVar3 = param_1 + 0x2f;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *puVar3 = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0x500;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x2d0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined2 *)(param_1 + 0x36) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x38) = 200;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x41000000;
  *(undefined2 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d6) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x152) = 1;
  *(undefined1 *)((longlong)param_1 + 0x154) = 1;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  local_10 = (longlong *)0x0;
  if (puVar3 != &local_18) {
    *puVar3 = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_10);
    plVar6 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  return param_1;
}



// FUNCTION 140456130 FUN_140456130 body=316 status=ok
// SIG undefined FUN_140456130(void)

undefined8 * FUN_140456130(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *local_res8;
  
  FUN_140456310();
  *param_1 = &PTR_FUN_143f4cdb0;
  plVar6 = param_1 + 6;
  *plVar6 = 0;
  plVar1 = param_1 + 7;
  *plVar1 = 0;
  lVar8 = param_1[3];
  if (lVar8 != 0) {
    lVar4 = UMapProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1404561a6;
  }
  lVar8 = 0;
LAB_1404561a6:
  lVar4 = FUN_140472420(*(undefined8 *)(lVar8 + 0x70),0);
  if (lVar4 == 0) {
    puVar7 = (undefined8 *)*plVar6;
    *plVar6 = 0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(lVar4 + 8))(&local_res8,*(undefined8 *)(lVar8 + 0x70));
    puVar7 = local_res8;
    if (plVar6 != plVar5) {
      puVar2 = (undefined8 *)*plVar6;
      *plVar6 = *plVar5;
      *plVar5 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
        puVar7 = local_res8;
      }
    }
  }
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  lVar4 = FUN_140472420(*(undefined8 *)(lVar8 + 0x78),0);
  if (lVar4 == 0) {
    local_res8 = (undefined8 *)*plVar1;
    *plVar1 = 0;
  }
  else {
    plVar6 = (longlong *)(**(code **)(lVar4 + 8))(&local_res8,*(undefined8 *)(lVar8 + 0x78));
    if (plVar1 != plVar6) {
      puVar7 = (undefined8 *)*plVar1;
      *plVar1 = *plVar6;
      *plVar6 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return param_1;
}



// FUNCTION 140456270 FUN_140456270 body=153 status=ok
// SIG undefined FUN_140456270(void)

undefined8 * FUN_140456270(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_143f47bd8;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_143f47500;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[4],_Src,(longlong)iVar1);
  }
  param_1[1] = param_1[4];
  return param_1;
}



// FUNCTION 140456310 FUN_140456310 body=741 status=ok
// SIG undefined FUN_140456310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140456310(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined2 **ppuVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  int local_130;
  undefined4 local_12c;
  longlong local_128 [3];
  undefined8 local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  longlong local_e8 [2];
  longlong local_d8 [2];
  undefined1 local_c8 [128];
  longlong local_48;
  void *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  param_1[3] = param_2;
  *param_1 = &PTR_FUN_143f47500;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  local_128[0] = 0;
  local_128[1] = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128,0);
  FGenericPlatformString::Memcpy(local_128[0],L"^(\\w+?)_[\\d\\w]+_(?:.*)",0x2e);
  FUN_1415cd4d0(local_f8,local_128);
  if (local_128[0] != 0) {
    FMemory::Free();
  }
  local_110 = *(undefined8 *)(param_1[3] + 0x18);
  FName::ToString(&local_110,&local_138);
  ppuVar5 = (undefined2 **)FString::ToLower(&local_138,local_e8);
  if (&local_138 != ppuVar5) {
    if (local_138 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_138 = *ppuVar5;
    *ppuVar5 = (undefined2 *)0x0;
    local_130 = *(int *)(ppuVar5 + 1);
    local_12c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
    ppuVar5[1] = (undefined2 *)0x0;
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  FUN_1415cd370(local_108,local_f8,&local_138);
  cVar3 = FUN_1415d6d60(local_108);
  if (cVar3 != '\0') {
    ppuVar5 = (undefined2 **)FUN_1415d9fe0(local_108,local_d8,1);
    if (&local_138 != ppuVar5) {
      if (local_138 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_138 = *ppuVar5;
      *ppuVar5 = (undefined2 *)0x0;
      local_130 = *(int *)(ppuVar5 + 1);
      local_12c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
      ppuVar5[1] = (undefined2 *)0x0;
    }
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
  }
  plVar6 = (longlong *)FUN_140490060();
  lVar7 = plVar6[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar7 = plVar6[0x1f];
  }
  if (*(char *)(lVar7 + 0x51) != '\0') {
    FString::ToLowerInline(&local_138);
  }
  puVar8 = &DAT_143f3eda8;
  if (local_130 != 0) {
    puVar8 = local_138;
  }
  TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
            (local_c8,puVar8);
  iVar2 = *(int *)(param_1 + 5);
  iVar4 = local_38 + 1;
  if (iVar2 < iVar4) {
    *(int *)(param_1 + 5) = iVar4;
    if (*(int *)((longlong)param_1 + 0x2c) < iVar4) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 4,iVar2);
    }
  }
  else if ((iVar4 < iVar2) && (iVar4 != iVar2)) {
    *(int *)(param_1 + 5) = iVar4;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 4);
  }
  _guard_xfg_dispatch_icall_nop((void *)param_1[4],local_40,(longlong)local_38);
  *(undefined1 *)((longlong)local_38 + param_1[4]) = 0;
  param_1[1] = param_1[4];
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_100 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (local_138 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_f0 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140456600 FUN_140456600 body=165 status=ok
// SIG undefined FUN_140456600(void)

void FUN_140456600(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x48);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      if (plVar2[-6] != 0) {
        FMemory::Free();
      }
      if (plVar2[-8] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xd;
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



// FUNCTION 1404566b0 ~TArray<FNamedInterfaceDef,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FNamedInterfaceDef,FDefaultAllocator>(void)

void TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
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



// FUNCTION 140456710 FUN_140456710 body=172 status=ok
// SIG undefined FUN_140456710(void)

void FUN_140456710(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      if (plVar3[4] != 0) {
        FMemory::Free();
      }
      iVar4 = (int)plVar3[3];
      plVar1 = (longlong *)plVar3[2];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[2];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar3);
  return;
}



// FUNCTION 1404567c0 ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator> body=114 status=ok
// SIG undefined ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(void)

void TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
     ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 140456840 FUN_140456840 body=123 status=ok
// SIG undefined FUN_140456840(void)

void FUN_140456840(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 7;
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



// FUNCTION 1404568c0 ~TArray<FGameplayTagCategoryRemap,FDefaultAllocator> body=172 status=ok
// SIG undefined ~TArray<FGameplayTagCategoryRemap,FDefaultAllocator>(void)

void TArray<FGameplayTagCategoryRemap,FDefaultAllocator>::
     ~TArray<FGameplayTagCategoryRemap,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      iVar4 = (int)plVar3[3];
      plVar1 = (longlong *)plVar3[2];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[2];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar3);
  return;
}



// FUNCTION 140456970 ~TArray<FPIELoginSettingsInternal,FDefaultAllocator> body=128 status=ok
// SIG undefined ~TArray<FPIELoginSettingsInternal,FDefaultAllocator>(void)

void TArray<FPIELoginSettingsInternal,FDefaultAllocator>::
     ~TArray<FPIELoginSettingsInternal,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[6] != 0) {
        FMemory::Free();
      }
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1404569f0 ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_> body=159 status=ok
// SIG undefined ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(void)

void TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
     ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140456a90 FUN_140456a90 body=114 status=ok
// SIG undefined FUN_140456a90(void)

void FUN_140456a90(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 != 0) {
    do {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        FUN_140458770(lVar1);
        FMemory::operator_delete(lVar1,0x60);
      }
      plVar2 = plVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = (longlong *)*param_1;
  }
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar2);
  return;
}



// FUNCTION 140456b10 FUN_140456b10 body=179 status=ok
// SIG undefined FUN_140456b10(void)

void FUN_140456b10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x120);
  iVar6 = *(int *)(param_1 + 0x128);
  lVar7 = lVar5;
  if (lVar5 == 0) {
    lVar7 = param_1;
  }
  if (iVar6 != 0) {
    plVar8 = (longlong *)(lVar7 + 0x40);
    do {
      plVar4 = (longlong *)*plVar8;
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
      plVar8 = plVar8 + 9;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x120);
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140456bd0 ~TArray<FDelegateBase,FHeapAllocator> body=145 status=ok
// SIG undefined ~TArray<FDelegateBase,FHeapAllocator>(void)

void TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>
               (undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = (longlong *)*param_1;
  iVar4 = *(int *)(param_1 + 1);
  if (iVar4 != 0) {
    do {
      if (((int)plVar3[1] != 0) && (plVar1 = (longlong *)*plVar3, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar3 != 0) {
          lVar2 = FMemory::Realloc(*plVar3,0,0);
          *plVar3 = lVar2;
        }
        *(undefined4 *)(plVar3 + 1) = 0;
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar3);
  return;
}



// FUNCTION 140456c70 FUN_140456c70 body=243 status=ok
// SIG undefined FUN_140456c70(void)

void FUN_140456c70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xf8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xd8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xb0) != '\0') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x80);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x50);
  if (*(char *)(param_1 + 0x44) != '\0') {
    *(undefined1 *)(param_1 + 0x44) = 0;
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x20);
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 140456d70 ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140456de0 ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140456e50 ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140456ec0 ~TSparseArray<TSetElement<TTuple<FShaderId,FShader_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FShaderId,FShader_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FShaderId,FShader_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FShaderId,FShader_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140456f30 ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140456fa0 ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=397 status=ok
// SIG undefined ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_140457061;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_140457061:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      if (*(longlong *)(*param_1 + (longlong)iStack_1c * 0x18) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140457130 _Tidy body=152 status=ok
// SIG undefined _Tidy(void)

void std::
     vector<std::unique_ptr<AiCooldown,std::default_delete<AiCooldown>_>,std::allocator<std::unique_ptr<AiCooldown,std::default_delete<AiCooldown>_>_>_>
     ::_Tidy(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      do {
        puVar1 = (undefined8 *)*plVar3;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar4);
      plVar3 = (longlong *)*param_1;
    }
    uVar2 = param_1[2] - (longlong)plVar3 & 0xfffffffffffffff8;
    plVar4 = plVar3;
    if (0xfff < uVar2) {
      plVar4 = (longlong *)plVar3[-1];
      uVar2 = uVar2 + 0x27;
      if (0x1f < (ulonglong)((longlong)plVar3 + (-8 - (longlong)plVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(plVar4,uVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1404571d0 FUN_1404571d0 body=623 status=ok
// SIG undefined FUN_1404571d0(void)

void FUN_1404571d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x438);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x420);
  if (*(longlong *)(param_1 + 0x408) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3c8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3b0);
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x3a8) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *(undefined4 *)(param_1 + 0x390) = 0;
  if (*(longlong *)(param_1 + 0x388) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x348);
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2b0);
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1 + 0x28);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140457440 FUN_140457440 body=406 status=ok
// SIG undefined FUN_140457440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140457440(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  *param_1 = &PTR_FUN_143f4be48;
  TBaseMulticastDelegate<void>::Remove(&DAT_1465351a8,param_1[0xc2]);
  uVar6 = 0;
  lVar3 = param_1[0xc3];
  uVar8 = uVar6;
  uVar10 = uVar6;
  iVar4 = DAT_1464aef88;
  if (0 < DAT_1464aef88) {
    do {
      plVar9 = (longlong *)(DAT_1464aef80 + uVar10);
      if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar4 = DAT_1464aef88, *plVar2 == lVar3)) {
        if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar9 != 0) {
            lVar3 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar3;
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          iVar4 = DAT_1464aef88;
        }
        break;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar7 < iVar4);
  }
  if (DAT_1464aef94 < 1) {
    uVar8 = uVar6;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        if (((*(int *)(uVar6 + 8 + DAT_1464aef80) == 0) ||
            (*(longlong **)(uVar6 + DAT_1464aef80) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar6 + DAT_1464aef80) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464aef80,uVar8,1,1);
        }
        else {
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar6 = uVar6 + 0x10;
        }
        iVar5 = DAT_1464aef88;
      } while ((int)uVar8 < DAT_1464aef88);
    }
    _DAT_1464aef90 = iVar5 * 2;
    if (_DAT_1464aef90 < 3) {
      _DAT_1464aef90 = 2;
    }
    if ((_DAT_1464aef90 < iVar4) && (DAT_1464aef8c != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464aef80);
    }
  }
  if (param_1[0xbc] != 0) {
    FMemory::Free();
  }
  FUN_1404575e0(param_1);
  return;
}



// FUNCTION 1404575e0 FUN_1404575e0 body=259 status=ok
// SIG undefined FUN_1404575e0(void)

void FUN_1404575e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x558) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x540) = 0;
  if (*(longlong *)(param_1 + 0x538) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x4f8);
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x4c0);
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if (iVar2 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x20);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x4b8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 1404576f0 FUN_1404576f0 body=866 status=ok
// SIG undefined FUN_1404576f0(void)

void FUN_1404576f0(undefined8 *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
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
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  plVar10 = param_1 + 0x13;
  *param_1 = &PTR_FUN_143f4c8f8;
  if (*plVar10 != 0) {
    iVar6 = *(int *)(*plVar10 + 0xc);
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar7 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar7;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar9 = 0;
    }
    *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) & 0xbfffffff;
    *plVar10 = 0;
  }
  uStack_a4 = 1;
  plVar3 = param_1 + 1;
  local_a8 = 0;
  uVar5 = *(uint *)(param_1 + 6);
  puVar1 = (uint *)(param_1 + 3);
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar5 != 0) {
    puVar13 = (uint *)param_1[5];
    if ((uint *)param_1[5] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar7 = *puVar13;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar7 == 0) {
      lVar9 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar6 = local_a8 + 1;
      bVar4 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar6;
      if (bVar4) goto LAB_14045781c;
      uVar7 = puVar13[lVar9 + 1];
    }
    uStack_a4 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_94 = (iStack_90 - iVar6) + 0x1f;
    if ((int)uVar5 < (int)uStack_94) {
LAB_14045781c:
      uStack_94 = uVar5;
    }
  }
  uVar7 = *(uint *)(param_1 + 6);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar12 = uVar7 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = puVar1;
  local_60 = plVar3;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_94 = uVar7;
  if (uVar7 != uVar5) {
    puVar13 = (uint *)param_1[5];
    if ((uint *)param_1[5] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar8 = puVar13[(int)uVar7 >> 5] & -1 << ((byte)uVar7 & 0x1f);
    iVar6 = (int)uVar7 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1404578f5;
      uVar8 = puVar13[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar6 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_94 = (uVar12 - iVar6) + 0x1f;
    if ((int)uVar5 < (int)uStack_94) {
LAB_1404578f5:
      uStack_94 = uVar5;
    }
  }
  while( true ) {
    if ((uStack_6c == uStack_94) && (local_78 == puVar1)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) break;
    lVar9 = (longlong)(int)uStack_6c * 0x38 + *plVar3;
    FString::FString(&local_60,lVar9);
    puStack_50 = *(uint **)(lVar9 + 0x10);
    uStack_48 = *(uint *)(lVar9 + 0x18);
    uStack_44 = *(uint *)(lVar9 + 0x1c);
    uStack_40 = *(undefined8 *)(lVar9 + 0x20);
    uStack_38 = *(undefined4 *)(lVar9 + 0x28);
    uStack_34 = *(undefined4 *)(lVar9 + 0x2c);
    FUN_140483c80(param_1,&puStack_50);
    if (local_60 != (longlong *)0x0) {
      FMemory::Free();
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
  ::Empty(plVar3,0);
  lVar14 = 2;
  lVar9 = 2;
  do {
    plVar2 = plVar10 + -2;
    plVar10 = plVar10 + -2;
    lVar9 = lVar9 + -1;
    if (*plVar2 != 0) {
      FMemory::Free();
    }
  } while (lVar9 != 0);
  puVar11 = param_1 + 0xf;
  do {
    iVar6 = *(int *)(puVar11 + -1);
    puVar11 = puVar11 + -2;
    plVar10 = (longlong *)*puVar11;
    lVar14 = lVar14 + -1;
    if (iVar6 != 0) {
      do {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 0x18;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      plVar10 = (longlong *)*puVar11;
    }
    if (plVar10 != (longlong *)0x0) {
      FMemory::Free(plVar10);
    }
  } while (lVar14 != 0);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  FUN_1404681d0(plVar3,0);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (*plVar3 != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f4c8e0;
  return;
}



// FUNCTION 140457a60 FUN_140457a60 body=870 status=ok
// SIG undefined FUN_140457a60(void)

void FUN_140457a60(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  *param_1 = &PTR_FUN_143f4c910;
  param_1[1] = &PTR_LAB_143f4c920;
  FUN_140467760(param_1 + 6,0);
  plVar2 = param_1 + 0x10;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Empty(plVar2,0);
  plVar11 = (longlong *)0x0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
      plVar11 = (longlong *)param_1[5];
      param_1[5] = 0;
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x30))(plVar11);
        (**(code **)(plVar11[8] + 0x30))(plVar11 + 8);
        plVar11[8] = (longlong)&PTR__scalar_deleting_destructor__143f48b30;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar11 + 0xf);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar11 + 0xe);
        FUN_141edd2d0(plVar11 + 8);
        *plVar11 = (longlong)&PTR_FUN_143f48ad0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar11 + 6);
        FUN_141edd2d0(plVar11);
        FMemory::operator_delete(plVar11,0x88);
      }
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    }
    else {
      lVar4 = param_1[5];
      param_1[5] = 0;
      pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar8 = TlsGetValue(*pDVar7);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)operator_new(0x18);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = 0;
          plVar8[1] = 0;
          *(undefined4 *)(plVar8 + 2) = 0;
          plVar11 = plVar8;
        }
        TlsSetValue(*pDVar7,plVar11);
        plVar8 = plVar11;
      }
      plVar11 = (longlong *)plVar8[1];
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)*plVar8;
        if (plVar11 == (longlong *)0x0) {
          lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
          plVar8[1] = lVar9;
          if (lVar9 == 0) {
            puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar8[1] = (longlong)puVar10;
            lVar9 = 0x1f;
            do {
              puVar3 = puVar10 + 0x20;
              *puVar10 = puVar3;
              lVar9 = lVar9 + -1;
              puVar10 = puVar3;
            } while (lVar9 != 0);
            *puVar3 = 0;
          }
          plVar11 = (longlong *)plVar8[1];
          iVar12 = 0x20;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
        else {
          iVar12 = 0x20;
          plVar8[1] = (longlong)plVar11;
          *(undefined4 *)(plVar8 + 2) = 0x20;
          *plVar8 = 0;
        }
      }
      else {
        iVar12 = (int)plVar8[2];
      }
      plVar8[1] = *plVar11;
      *(int *)(plVar8 + 2) = iVar12 + -1;
      *plVar11 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar11 + 1) = 0xff;
      local_res20 = 0;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_FUN_143f4ceb8;
      *(undefined1 *)(plVar11 + 3) = 0;
      plVar11[4] = 0;
      plVar11[2] = lVar4;
      lVar4 = plVar11[4];
      piVar1 = (int *)(lVar4 + 0x48);
      if (lVar4 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res10 = lVar4;
      FUN_140445100(plVar11,0,0xff,1,0);
      if (lVar4 != 0) {
        LOCK();
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          FGraphEvent::Recycle(local_res10);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(plVar2,0);
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_140467c40(param_1 + 6,0);
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_14045b880(param_1 + 5,param_1[5]);
  param_1[1] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 140457dd0 FUN_140457dd0 body=295 status=ok
// SIG undefined FUN_140457dd0(void)

void FUN_140457dd0(longlong param_1)

{
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,*(undefined8 *)(param_1 + 0xa0),1);
  *(undefined ***)(param_1 + 0x88) = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,*(undefined8 *)(param_1 + 0x90),1);
  *(undefined ***)(param_1 + 0x78) = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,*(undefined8 *)(param_1 + 0x80),1);
  *(undefined ***)(param_1 + 0x68) = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,*(undefined8 *)(param_1 + 0x70),1);
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,*(undefined8 *)(param_1 + 0x60),1);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 8);
  return;
}



// FUNCTION 140457f00 FUN_140457f00 body=451 status=ok
// SIG undefined FUN_140457f00(void)

void FUN_140457f00(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 local_18;
  longlong *local_10;
  
  *param_1 = &PTR_FUN_143f4b6a0;
  *(undefined8 *)(param_1[3] + 8) = 0;
  if ((DAT_1469f4590 != 0) &&
     (plVar7 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd8))(), plVar7 != (longlong *)0x0)) {
    plVar4 = (longlong *)param_1[4];
    local_18 = param_1[3];
    local_10 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    }
    cVar6 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_18);
    if (cVar6 != '\0') {
      (**(code **)(*plVar7 + 0x28))(plVar7,&local_18);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_18);
    plVar7 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_10 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
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
  plVar7 = (longlong *)param_1[6];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  plVar7 = (longlong *)param_1[4];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  plVar7 = (longlong *)param_1[2];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar7 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001404580b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 8))(plVar7,1);
      return;
    }
  }
  return;
}



// FUNCTION 1404580d0 FUN_1404580d0 body=417 status=ok
// SIG undefined FUN_1404580d0(void)

void FUN_1404580d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 0x140);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x138);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  lVar5 = *(longlong *)(param_1 + 0xf0);
  if (lVar5 != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar5 + 0x10);
    FMemory::operator_delete(lVar5,0x18);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xe8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  plVar6 = *(longlong **)(param_1 + 0x60);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x50);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x40);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x30);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + 0x10) + 0x48);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return;
}



// FUNCTION 140458280 FUN_140458280 body=217 status=ok
// SIG undefined FUN_140458280(void)

void FUN_140458280(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__143f48690;
  plVar4 = (longlong *)param_1[0xc];
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
  plVar4 = (longlong *)param_1[9];
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
  plVar4 = (longlong *)param_1[6];
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
  *param_1 = &PTR_FUN_143f48658;
  return;
}



// FUNCTION 140458360 FUN_140458360 body=168 status=ok
// SIG undefined FUN_140458360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140458360(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar4 = 0;
  if (*param_1 != 0) {
    iVar2 = *(int *)(*param_1 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar6 = iVar2 >> 0x1f & 0xffff;
      uVar3 = iVar2 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) & 0xbfffffff;
    *param_1 = 0;
  }
  if (param_1[3] != 0) {
    iVar2 = *(int *)(param_1[3] + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar6 = iVar2 >> 0x1f & 0xffff;
      uVar3 = iVar2 + uVar6;
      lVar5 = (longlong)(int)((uVar3 & 0xffff) - uVar6);
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8);
      puVar1 = (uint *)(lVar4 + 8 + lVar5 * 0x18);
      *puVar1 = *puVar1 & 0xbfffffff;
      param_1[3] = 0;
      return lVar4 + lVar5 * 0x18;
    }
    _DAT_00000008 = _DAT_00000008 & 0xbfffffff;
    param_1[3] = 0;
  }
  return 0;
}



// FUNCTION 140458410 FUN_140458410 body=50 status=ok
// SIG undefined FUN_140458410(void)

void FUN_140458410(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 140458450 ~FSlateBrush body=152 status=ok
// SIG undefined ~FSlateBrush(void)

void FSlateBrush::~FSlateBrush(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__143f489a8;
  plVar4 = (longlong *)param_1[0xf];
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
  plVar4 = (longlong *)param_1[8];
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



// FUNCTION 1404584f0 FUN_1404584f0 body=120 status=ok
// SIG undefined FUN_1404584f0(void)

void FUN_1404584f0(undefined8 *param_1)

{
  if (param_1[0x53] != 0) {
    FMemory::Free();
  }
  if (param_1[0x51] != 0) {
    FMemory::Free();
  }
  if (param_1[0x4f] != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x40);
  FRichCurve::~FRichCurve(param_1 + 0x26);
  FRichCurve::~FRichCurve(param_1 + 0x17);
  *param_1 = &PTR_FUN_143f48bb8;
  FRichCurve::~FRichCurve(param_1 + 5);
  return;
}



// FUNCTION 140458570 FUN_140458570 body=235 status=ok
// SIG undefined FUN_140458570(void)

void FUN_140458570(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x16,0);
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 10,0);
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140458660 ~FURL body=158 status=ok
// SIG undefined ~FURL(void)

void FURL::~FURL(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  iVar2 = (int)param_1[10];
  plVar1 = (longlong *)param_1[9];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[9];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140458700 ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_> body=100 status=ok
// SIG undefined ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>(void)

void UE4Tuple_Private::
     TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
     ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
               (longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[3];
  plVar1 = (longlong *)param_1[2];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[2];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140458770 FUN_140458770 body=129 status=ok
// SIG undefined FUN_140458770(void)

void FUN_140458770(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x48);
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140458800 ~FIndexBuffer body=41 status=ok
// SIG undefined ~FIndexBuffer(void)

void FIndexBuffer::~FIndexBuffer(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 140458830 FUN_140458830 body=224 status=ok
// SIG undefined FUN_140458830(void)

void FUN_140458830(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x150);
  iVar6 = *(int *)(param_1 + 0x158);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x150);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  plVar7 = *(longlong **)(param_1 + 0x148);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  FUN_140456b10(param_1 + 8);
  return;
}



// FUNCTION 140458910 FUN_140458910 body=118 status=ok
// SIG undefined FUN_140458910(void)

void FUN_140458910(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = &PTR_FUN_143f4c618;
  lVar1 = param_1[0x24];
  if (lVar1 != 0) {
    uVar3 = param_1[0x26] - lVar1 & 0xffffffffffffffe0;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar3);
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
  }
  return;
}



// FUNCTION 140458990 FUN_140458990 body=114 status=ok
// SIG undefined FUN_140458990(void)

void FUN_140458990(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_143f4aa98;
  puVar1 = (undefined8 *)param_1[0x6f];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x6a);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x67);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 100);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x61);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x5e);
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 140458a10 FUN_140458a10 body=340 status=ok
// SIG undefined FUN_140458a10(void)

void FUN_140458a10(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR__scalar_deleting_destructor__143f4b718;
  TBaseMulticastDelegate<void>::Remove(&DAT_1465351a8,param_1[0x59]);
  if ((param_1[0x5a] != 0) && (DAT_146b19a68 != 0)) {
    if (*(longlong *)(DAT_146b19a68 + 400) == 0) {
      uVar7 = *(undefined8 *)(DAT_146b19a68 + 0x3f8);
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)(DAT_146b19a68 + 400) + 0x90);
    }
    FUN_142880530(uVar7,param_1 + 0x5a);
    param_1[0x5a] = 0;
  }
  lVar4 = param_1[0x48];
  if (lVar4 != 0) {
    FUN_14045f5a0(lVar4);
    FRenderCommandFence::Wait(lVar4 + 0x10,0);
    if (*(longlong **)(lVar4 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar4 + 8) + 8))();
      *(undefined8 *)(lVar4 + 8) = 0;
    }
    FUN_140465e20(lVar4);
  }
  puVar5 = (undefined8 *)param_1[0x4a];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  puVar5 = (undefined8 *)param_1[0x49];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  lVar4 = param_1[0x48];
  if (lVar4 != 0) {
    FUN_1404580d0(lVar4);
    FMemory::Free(lVar4);
  }
  plVar6 = (longlong *)param_1[0x47];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x41);
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 140458b70 FUN_140458b70 body=173 status=ok
// SIG undefined FUN_140458b70(void)

void FUN_140458b70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2e0);
  plVar4 = *(longlong **)(param_1 + 0x2d0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x278);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 600);
  FSlotBase::~FSlotBase(param_1 + 0x218);
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 140458c20 FUN_140458c20 body=173 status=ok
// SIG undefined FUN_140458c20(void)

void FUN_140458c20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140458cd0 FUN_140458cd0 body=352 status=ok
// SIG undefined FUN_140458cd0(void)

void FUN_140458cd0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_143f48f50;
  param_1[5] = &PTR_LAB_143f49360;
  if (param_1[0x3e] != 0) {
    *(undefined8 *)(param_1[0x3e] + 0x18) = 0;
  }
  puVar3 = (undefined8 *)param_1[0x43];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar4 = (longlong *)param_1[0x42];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  lVar6 = param_1[0x40];
  if (lVar6 != 0) {
    FUN_1404580d0(lVar6);
    FMemory::Free(lVar6);
  }
  plVar4 = (longlong *)param_1[0x3f];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x39);
  lVar6 = param_1[0x38];
  if (iVar5 != 0) {
    lVar6 = lVar6 + 8;
    do {
      TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
      ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(lVar6);
      lVar6 = lVar6 + 0x18;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar6 = param_1[0x38];
  }
  if (lVar6 != 0) {
    FMemory::Free();
  }
  if (param_1[0x33] != 0) {
    FMemory::Free();
  }
  if (param_1[0x31] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2f] != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140458e30 FUN_140458e30 body=191 status=ok
// SIG undefined FUN_140458e30(void)

void FUN_140458e30(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xe8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0xd8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x48);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140458ef0 operator= body=105 status=ok
// SIG undefined operator=(void)

longlong * TBaseDelegate<FSlateBrush_const_*>::operator=(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != param_1) {
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x30))(param_2,param_1);
      return param_1;
    }
    if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*param_1 != 0) {
        lVar2 = FMemory::Realloc(*param_1,0,0);
        *param_1 = lVar2;
      }
      *(undefined4 *)(param_1 + 1) = 0;
    }
  }
  return param_1;
}



// FUNCTION 140458f60 operator= body=219 status=ok
// SIG undefined operator=(void)

longlong * TRefCountPtr<FRHIIndexBuffer>::operator=(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_1 != param_2) {
    lVar6 = 0;
    puVar3 = (undefined8 *)*param_1;
    *param_1 = *param_2;
    *param_2 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar7) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar7) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 != 0) {
              lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar6 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            return param_1;
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 140459040 operator= body=227 status=ok
// SIG undefined operator=(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FKey::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  puVar1 = param_1 + 1;
  *param_1 = *param_2;
  uStack_30 = (longlong *)param_2[2];
  local_38 = param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar1;
    plVar6 = (longlong *)param_1[2];
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_38._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_30._4_4_;
    local_38 = uVar5;
    uStack_30 = plVar6;
  }
  plVar6 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_30 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 140459130 FUN_140459130 body=1408 status=ok
// SIG undefined FUN_140459130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_140459130(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  *param_1 = *param_2;
  puVar1 = (undefined8 *)(param_1 + 8);
  uStack_120 = *(longlong **)(param_2 + 0x10);
  local_128 = *(undefined8 *)(param_2 + 8);
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
    UNLOCK();
  }
  if (&local_128 != puVar1) {
    local_128._4_4_ = (undefined4)((ulonglong)local_128 >> 0x20);
    uStack_120._4_4_ = (undefined4)((ulonglong)uStack_120 >> 0x20);
    uVar6 = *puVar1;
    plVar5 = *(longlong **)(param_1 + 0x10);
    local_a8 = (undefined4)local_128;
    uStack_a4 = local_128._4_4_;
    uStack_a0 = (undefined4)uStack_120;
    uStack_9c = uStack_120._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_128;
    *(undefined4 *)(param_1 + 0xc) = local_128._4_4_;
    *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_120;
    *(undefined4 *)(param_1 + 0x14) = uStack_120._4_4_;
    local_128 = uVar6;
    uStack_120 = plVar5;
  }
  plVar5 = uStack_120;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_120 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_120)(uStack_120);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_120 + 8))(uStack_120,1);
      }
    }
  }
  if (param_2 + 0x18 != param_1 + 0x18) {
    if (param_1[0x20] != '\0') {
      param_1[0x20] = 0;
    }
    if (param_2[0x20] != '\0') {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      param_1[0x20] = 1;
    }
  }
  plVar5 = *(longlong **)(param_2 + 0x30);
  puVar1 = (undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_118 = uVar6;
  plStack_110 = plVar5;
  if (&local_118 != puVar1) {
    local_118 = *puVar1;
    plStack_110 = *(longlong **)(param_1 + 0x30);
    *puVar1 = uVar6;
    *(longlong **)(param_1 + 0x30) = plVar5;
    local_98 = uVar6;
    plStack_90 = plVar5;
  }
  plVar5 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_110 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_110 + 8))(plStack_110,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0x40);
  puVar1 = (undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_108 = uVar6;
  plStack_100 = plVar5;
  if (&local_108 != puVar1) {
    local_108 = *puVar1;
    plStack_100 = *(longlong **)(param_1 + 0x40);
    *puVar1 = uVar6;
    *(longlong **)(param_1 + 0x40) = plVar5;
    local_88 = uVar6;
    plStack_80 = plVar5;
  }
  plVar5 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_100 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_100 + 8))(plStack_100,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0x50);
  puVar1 = (undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_f8 = uVar6;
  plStack_f0 = plVar5;
  if (&local_f8 != puVar1) {
    local_f8 = *puVar1;
    plStack_f0 = *(longlong **)(param_1 + 0x50);
    *puVar1 = uVar6;
    *(longlong **)(param_1 + 0x50) = plVar5;
    local_78 = uVar6;
    plStack_70 = plVar5;
  }
  plVar5 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_f0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0x60);
  puVar1 = (undefined8 *)(param_1 + 0x58);
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_e8 = uVar6;
  plStack_e0 = plVar5;
  if (&local_e8 != puVar1) {
    local_e8 = *puVar1;
    plStack_e0 = *(longlong **)(param_1 + 0x60);
    *puVar1 = uVar6;
    *(longlong **)(param_1 + 0x60) = plVar5;
    local_68 = uVar6;
    plStack_60 = plVar5;
  }
  plVar5 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_e0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0x70);
  puVar1 = (undefined8 *)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_d8 = uVar6;
  plStack_d0 = plVar5;
  if (&local_d8 != puVar1) {
    local_d8 = *puVar1;
    plStack_d0 = *(longlong **)(param_1 + 0x70);
    *puVar1 = uVar6;
    *(longlong **)(param_1 + 0x70) = plVar5;
    local_58 = uVar6;
    plStack_50 = plVar5;
  }
  plVar5 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_d0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0x80);
  puVar1 = (undefined8 *)(param_1 + 0x78);
  uVar6 = *(undefined8 *)(param_2 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_c8 = uVar6;
  plStack_c0 = plVar5;
  if (&local_c8 != puVar1) {
    local_c8 = *puVar1;
    plStack_c0 = *(longlong **)(param_1 + 0x80);
    *puVar1 = uVar6;
    *(longlong **)(param_1 + 0x80) = plVar5;
    local_48 = uVar6;
    plStack_40 = plVar5;
  }
  plVar5 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_c0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  FKey::operator=(param_1 + 0x88,param_2 + 0x88);
  plVar5 = *(longlong **)(param_2 + 0xa8);
  puVar1 = (undefined8 *)(param_1 + 0xa0);
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_b8 = uVar6;
  plStack_b0 = plVar5;
  if (&local_b8 != puVar1) {
    local_b8 = *puVar1;
    plStack_b0 = *(longlong **)(param_1 + 0xa8);
    *puVar1 = uVar6;
    *(longlong **)(param_1 + 0xa8) = plVar5;
    local_38 = uVar6;
    plStack_30 = plVar5;
  }
  plVar5 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_b0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
      }
    }
  }
  param_1[0xb0] = param_2[0xb0];
  param_1[0xb1] = param_2[0xb1];
  param_1[0xb2] = param_2[0xb2];
  param_1[0xb3] = param_2[0xb3];
  *(uint *)(param_1 + 0xb4) =
       *(uint *)(param_1 + 0xb4) ^ (*(uint *)(param_1 + 0xb4) ^ *(uint *)(param_2 + 0xb4)) & 1;
  uVar8 = (*(uint *)(param_2 + 0xb4) ^ *(uint *)(param_1 + 0xb4)) & 2 ^ *(uint *)(param_1 + 0xb4);
  *(uint *)(param_1 + 0xb4) = uVar8;
  uVar8 = (*(uint *)(param_2 + 0xb4) ^ uVar8) & 4 ^ uVar8;
  *(uint *)(param_1 + 0xb4) = uVar8;
  uVar8 = (*(uint *)(param_2 + 0xb4) ^ uVar8) & 8 ^ uVar8;
  *(uint *)(param_1 + 0xb4) = uVar8;
  uVar8 = (*(uint *)(param_2 + 0xb4) ^ uVar8) & 0x10 ^ uVar8;
  *(uint *)(param_1 + 0xb4) = uVar8;
  uVar8 = (*(uint *)(param_2 + 0xb4) ^ uVar8) & 0x20 ^ uVar8;
  *(uint *)(param_1 + 0xb4) = uVar8;
  uVar8 = (*(uint *)(param_2 + 0xb4) ^ uVar8) & 0x40 ^ uVar8;
  *(uint *)(param_1 + 0xb4) = uVar8;
  *(uint *)(param_1 + 0xb4) = (*(uint *)(param_2 + 0xb4) ^ uVar8) & 0x80 ^ uVar8;
  return param_1;
}



// FUNCTION 1404596b0 operator= body=154 status=ok
// SIG undefined operator=(void)

longlong FRuntimeFloatCurve::operator=(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  if (puVar1 != (undefined8 *)(param_2 + 0x60)) {
    iVar2 = *(int *)(param_2 + 0x68);
    _Src = *(void **)(param_2 + 0x60);
    *(int *)(param_1 + 0x68) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x6c) == 0)) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else {
      TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x1c);
    }
  }
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  return param_1;
}



// FUNCTION 140459750 operator= body=976 status=ok
// SIG undefined operator=(void)

longlong FSoundAttenuationSettings::operator=(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  byte bVar3;
  undefined8 *puVar4;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FRuntimeFloatCurve::operator=(param_1 + 0x28,param_2 + 0x28);
  *(byte *)(param_1 + 0xa0) =
       *(byte *)(param_1 + 0xa0) ^ (*(byte *)(param_1 + 0xa0) ^ *(byte *)(param_2 + 0xa0)) & 1;
  bVar3 = (*(byte *)(param_1 + 0xa0) ^ *(byte *)(param_2 + 0xa0)) & 2 ^ *(byte *)(param_1 + 0xa0);
  *(byte *)(param_1 + 0xa0) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 0xa0)) & 4 ^ bVar3;
  *(byte *)(param_1 + 0xa0) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 0xa0)) & 8 ^ bVar3;
  *(byte *)(param_1 + 0xa0) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 0xa0)) & 0x10 ^ bVar3;
  *(byte *)(param_1 + 0xa0) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 0xa0)) & 0x20 ^ bVar3;
  *(byte *)(param_1 + 0xa0) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 0xa0)) & 0x40 ^ bVar3;
  *(byte *)(param_1 + 0xa0) = bVar3;
  *(byte *)(param_1 + 0xa0) = (bVar3 ^ *(byte *)(param_2 + 0xa0)) & 0x7f ^ *(byte *)(param_2 + 0xa0)
  ;
  *(byte *)(param_1 + 0xa1) =
       *(byte *)(param_1 + 0xa1) ^ (*(byte *)(param_1 + 0xa1) ^ *(byte *)(param_2 + 0xa1)) & 1;
  *(byte *)(param_1 + 0xa1) =
       (*(byte *)(param_1 + 0xa1) ^ *(byte *)(param_2 + 0xa1)) & 2 ^ *(byte *)(param_1 + 0xa1);
  *(undefined1 *)(param_1 + 0xa2) = *(undefined1 *)(param_2 + 0xa2);
  *(undefined1 *)(param_1 + 0xa3) = *(undefined1 *)(param_2 + 0xa3);
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  *(undefined1 *)(param_1 + 0xa5) = *(undefined1 *)(param_2 + 0xa5);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  FRuntimeFloatCurve::operator=(param_1 + 0xb8,param_2 + 0xb8);
  FRuntimeFloatCurve::operator=(param_1 + 0x130,param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  FRuntimeFloatCurve::operator=(param_1 + 0x200,param_2 + 0x200);
  puVar4 = (undefined8 *)(param_1 + 0x278);
  if (puVar4 != (undefined8 *)(param_2 + 0x278)) {
    iVar1 = *(int *)(param_2 + 0x280);
    pvVar2 = *(void **)(param_2 + 0x278);
    *(int *)(param_1 + 0x280) = iVar1;
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x284) == 0)) {
      *(undefined4 *)(param_1 + 0x284) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar4,iVar1);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar2,(longlong)iVar1 << 3);
    }
  }
  puVar4 = (undefined8 *)(param_1 + 0x288);
  if (puVar4 != (undefined8 *)(param_2 + 0x288)) {
    iVar1 = *(int *)(param_2 + 0x290);
    pvVar2 = *(void **)(param_2 + 0x288);
    *(int *)(param_1 + 0x290) = iVar1;
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x294) == 0)) {
      *(undefined4 *)(param_1 + 0x294) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar4,iVar1);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar2,(longlong)iVar1 << 3);
    }
  }
  puVar4 = (undefined8 *)(param_1 + 0x298);
  if (puVar4 != (undefined8 *)(param_2 + 0x298)) {
    iVar1 = *(int *)(param_2 + 0x2a0);
    pvVar2 = *(void **)(param_2 + 0x298);
    *(int *)(param_1 + 0x2a0) = iVar1;
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x2a4) == 0)) {
      *(undefined4 *)(param_1 + 0x2a4) = 0;
      return param_1;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar4,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 140459b20 FUN_140459b20 body=362 status=ok
// SIG undefined FUN_140459b20(void)

longlong * FUN_140459b20(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_14158ce90();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x10,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x10,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x14,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x14,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x14) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x18,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x18,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *(undefined4 *)(param_2 + 0x1c) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x1c,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 0x1c,4);
  }
  return param_1;
}



// FUNCTION 140459c90 FUN_140459c90 body=691 status=ok
// SIG undefined FUN_140459c90(void)

longlong * FUN_140459c90(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x38,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x38);
  iVar2 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar3 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
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
        lVar8 = (longlong)local_2c * 0x38 + *local_48;
        FUN_14158ce90(param_1,lVar8);
        FUN_140459b20(param_1,lVar8 + 0x10);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar2 = 0;
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
  TSparseArray<TSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar3);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar3 = (int)param_2[6];
        iVar4 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar5 = *(int *)((longlong)iVar3 * 0x38 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar5;
        *(int *)((longlong)param_2 + 0x34) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)((longlong)iVar5 * 0x38 + *param_2) = 0xffffffff;
        }
      }
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      iVar5 = iVar3;
      if (iVar3 < 0) {
        iVar5 = iVar3 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
      puVar7 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x38);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 6) = 0xffffffff;
      FUN_14158ce90(param_1);
      FUN_140459b20(param_1,puVar7 + 2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 140459f50 FUN_140459f50 body=118 status=ok
// SIG undefined FUN_140459f50(void)

longlong * FUN_140459f50(longlong *param_1,char *param_2)

{
  int *piVar1;
  uint local_res8 [2];
  
  piVar1 = *(int **)param_1[1];
  if (piVar1 + 1 <= (int *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  local_res8[0] = (uint)(*param_2 != '\0');
  (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
  *param_2 = local_res8[0] != 0;
  return param_1;
}



// FUNCTION 140459fd0 operator<< body=31 status=ok
// SIG undefined operator<<(void)

longlong FArchiveProxy::operator<<(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x30))();
  return param_1;
}



// FUNCTION 140459ff0 operator<< body=31 status=ok
// SIG undefined operator<<(void)

longlong FArchiveProxy::operator<<(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))();
  return param_1;
}



// FUNCTION 14045a010 operator<< body=31 status=ok
// SIG undefined operator<<(void)

longlong FArchiveProxy::operator<<(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
  return param_1;
}



// FUNCTION 14045a030 operator<< body=31 status=ok
// SIG undefined operator<<(void)

longlong FArchiveProxy::operator<<(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))();
  return param_1;
}



// FUNCTION 14045a050 operator<< body=31 status=ok
// SIG undefined operator<<(void)

longlong FArchiveProxy::operator<<(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
  return param_1;
}



// FUNCTION 14045a070 operator<< body=31 status=ok
// SIG undefined operator<<(void)

longlong FArchiveProxy::operator<<(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x38))();
  return param_1;
}



// FUNCTION 14045a090 operator<< body=4 status=ok
// SIG undefined operator<<(void)

undefined8 FArchive::operator<<(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 14045a0a0 operator<< body=136 status=ok
// SIG undefined operator<<(void)

longlong FMemoryArchive::operator<<(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 local_res8 [8];
  undefined2 *local_18;
  undefined8 local_10;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    FName::ToString(param_2,&local_18);
    FUN_14158ce90(param_1,&local_18);
  }
  else {
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    FUN_14158ce90();
    puVar2 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar2 = local_18;
    }
    puVar1 = (undefined8 *)FName::FName(local_res8,puVar2,1);
    *param_2 = *puVar1;
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14045a130 FUN_14045a130 body=497 status=ok
// SIG undefined FUN_14045a130(void)

void FUN_14045a130(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  
  lVar2 = *(longlong *)(param_1 + 2);
  uVar15 = param_1[8] + 1;
  uVar8 = param_1[6];
  if ((int)uVar15 < (int)(param_1[0x10] + uVar8)) {
    lVar14 = (longlong)(int)uVar15 * 8;
    do {
      if ((int)uVar15 < (int)uVar8) {
        lVar13 = *(longlong *)(lVar14 + *(longlong *)(param_1 + 4));
      }
      else {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0xe) + (longlong)(int)(uVar15 - uVar8) * 8);
      }
      param_1[10] = param_1[10] + 1;
      if ((lVar13 != 0) && (lVar9 = AActor::GetLevel(lVar13), lVar9 != 0)) {
        if ((*param_1 & 1) != 0) {
          iVar1 = *(int *)(lVar13 + 0xc);
          if (iVar1 < (int)DAT_1469e91c4) {
            uVar12 = iVar1 >> 0x1f & 0xffff;
            uVar8 = iVar1 + uVar12;
            lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                     (longlong)(int)((uVar8 & 0xffff) - uVar12) * 0x18;
          }
          else {
            lVar10 = 0;
          }
          if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_14045a2d6;
        }
        if (((*param_1 >> 1 & 1) == 0) ||
           (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(lVar13), cVar7 != '\0')) {
          if ((*param_1 >> 2 & 1) != 0) {
            if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) && ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)
               ) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            piVar3 = *(int **)(lVar9 + 600);
            if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                (piVar11 = (int *)UWorld::GetActiveLevelCollection(), piVar11 == (int *)0x0)) ||
               (piVar3 == piVar11)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if ((piVar3 == (int *)0x0) || (*piVar3 == 2)) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if ((bVar4) || (bVar4 = false, bVar5)) {
              bVar4 = true;
            }
            if ((!bVar6) || (!bVar4)) goto LAB_14045a2d6;
          }
          lVar9 = ULevel::GetWorld(lVar9);
          if (lVar9 == lVar2) {
            lVar9 = AActor::GetLevel(lVar13);
            if (lVar9 == *(longlong *)(lVar2 + 0x30)) {
LAB_14045a317:
              param_1[8] = uVar15;
              *(longlong *)(param_1 + 0xc) = lVar13;
              return;
            }
            lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_14045a317;
          }
        }
      }
LAB_14045a2d6:
      uVar15 = uVar15 + 1;
      uVar8 = param_1[6];
      lVar14 = lVar14 + 8;
    } while ((int)uVar15 < (int)(param_1[0x10] + uVar8));
  }
  *(byte *)(param_1 + 9) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



// FUNCTION 14045a330 FUN_14045a330 body=659 status=ok
// SIG undefined FUN_14045a330(void)

void FUN_14045a330(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint *puVar13;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 *local_res18 [2];
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
  
  lVar10 = *param_1;
  local_res10 = param_2;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(lVar10 + 8,local_res8,param_2);
  if ((local_res8[0] == -1) ||
     (lVar9 = *(longlong *)(lVar10 + 8) + (longlong)local_res8[0] * 0x18, lVar9 == 0)) {
    local_res18[0] = &local_res10;
    FUN_14044c8b0(lVar10 + 8,local_res8,local_res18,0);
    lVar9 = *(longlong *)(lVar10 + 8) + (longlong)local_res8[0] * 0x18;
  }
  cVar2 = *(char *)(lVar9 + 8);
  *(bool *)(lVar9 + 8) = cVar2 == '\0';
  puVar5 = (undefined1 *)*param_1;
  if (cVar2 == '\0') {
    *puVar5 = 1;
    return;
  }
  plVar11 = (longlong *)(puVar5 + 8);
  puVar1 = (uint *)(puVar5 + 0x18);
  uVar3 = *(uint *)(puVar5 + 0x30);
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(puVar5 + 0x28);
    if (*(uint **)(puVar5 + 0x28) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar4 = *puVar13;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar7 = local_a8 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar7;
      if (bVar6) goto LAB_14045a48d;
      uVar4 = puVar13[lVar10 + 1];
    }
    uStack_a4 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_94 = (iStack_90 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_14045a48d:
      uStack_94 = uVar3;
    }
  }
  uVar4 = *(uint *)(puVar5 + 0x30);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar12 = uVar4 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = puVar1;
  local_60 = plVar11;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_94 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = *(uint **)(puVar5 + 0x28);
    if (*(uint **)(puVar5 + 0x28) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar8 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14045a553;
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
    uStack_94 = (uVar12 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_14045a553:
      uStack_94 = uVar3;
    }
  }
  while ((uStack_6c != uStack_94 || (local_78 != puVar1))) {
    if (*(char *)(*plVar11 + 8 + (longlong)(int)uStack_6c * 0x18) != '\0') {
      return;
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  *(undefined1 *)*param_1 = 0;
  return;
}



// FUNCTION 14045a5d0 FUN_14045a5d0 body=673 status=ok
// SIG undefined FUN_14045a5d0(void)

undefined8
FUN_14045a5d0(longlong *param_1,undefined8 param_2,longlong *param_3,float param_4,float param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [208];
  
  uVar7 = (**(code **)(*param_3 + 0x58))(param_3);
  *(int *)*param_1 = (int)((float)uVar7 * param_4);
  uVar7 = (**(code **)(*param_3 + 0x60))(param_3);
  *(int *)(*param_1 + 4) = (int)((float)uVar7 * param_5);
  iVar11 = *(int *)param_1[1];
  if (iVar11 == 1) {
    FUN_1404815f0(param_1[2],param_2);
    puVar2 = (undefined4 *)*param_1;
    lVar10 = param_1[2];
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *(undefined4 *)(lVar10 + 0x3c0) = *puVar2;
    *(undefined4 *)(lVar10 + 0x3c4) = uVar4;
    *(undefined4 *)(lVar10 + 0x3c8) = uVar5;
    *(undefined4 *)(lVar10 + 0x3cc) = uVar6;
    *(undefined8 *)(lVar10 + 0x3d0) = *(undefined8 *)(puVar2 + 4);
    *(undefined1 *)(param_1[2] + 0x3d9) = 1;
    iVar11 = *(int *)param_1[1];
  }
  if (iVar11 == 2) {
    *(undefined1 *)(param_1[2] + 0x3d9) = 0;
  }
  FWeakObjectPtr::operator=(param_1[2] + 0x390,param_2);
  uVar8 = FUN_14046d3b0(param_2);
  uVar8 = FUN_140486c20(local_e8,param_3,*param_1,uVar8);
  FUN_140439160(param_1[3],uVar8);
  FUN_140438c20(local_e8);
  if (*(char *)param_1[3] != '\0') {
    puVar9 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1[2] + 8,local_100);
    plVar3 = (longlong *)puVar9[1];
    uVar8 = *puVar9;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_f8 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_f8 + 8))(local_f8,1);
        }
      }
    }
    plVar12 = plVar3 + 1;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar12 = (int)*plVar12 + 1;
      UNLOCK();
    }
    lVar10 = param_1[4];
    local_118 = *(undefined8 *)(lVar10 + 0x38);
    local_110 = *(undefined8 *)(lVar10 + 0x40);
    local_108 = *(longlong *)(lVar10 + 0x48);
    if (local_108 != 0) {
      LOCK();
      *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
      UNLOCK();
    }
    local_128 = uVar8;
    local_120 = plVar3;
    lVar10 = FUN_140466100(param_1[3],&local_128,&local_118);
    *(uint *)(lVar10 + 0xb4) = *(uint *)(lVar10 + 0xb4) | 0x40;
    FUN_140459130(param_1[3],lVar10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
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
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
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
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14045a880 FUN_14045a880 body=208 status=ok
// SIG undefined FUN_14045a880(void)

void FUN_14045a880(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int local_res10 [2];
  longlong *local_res18;
  longlong **local_res20;
  
  if ((param_2 != (longlong *)0x0) &&
     ((*(int *)*param_1 == *(int *)param_1[1] ||
      (iVar2 = (**(code **)(*param_2 + 0x38))(param_2), iVar2 == *(int *)*param_1)))) {
    lVar1 = *(longlong *)param_1[2];
    local_res18 = param_2;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 8,local_res10,param_2);
    if ((local_res10[0] == -1) ||
       (lVar3 = *(longlong *)(lVar1 + 8) + (longlong)local_res10[0] * 0x18, lVar3 == 0)) {
      local_res20 = &local_res18;
      FUN_14044c8b0(lVar1 + 8,local_res10,&local_res20,0);
      lVar3 = *(longlong *)(lVar1 + 8) + (longlong)local_res10[0] * 0x18;
    }
    *(bool *)(lVar3 + 9) = *(char *)(lVar3 + 9) == '\0';
    (**(code **)(*local_res18 + 0x80))();
    *(undefined1 *)param_1[3] = 1;
  }
  return;
}



// FUNCTION 14045a950 FUN_14045a950 body=188 status=ok
// SIG undefined FUN_14045a950(void)

void FUN_14045a950(undefined8 *param_1)

{
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  uint local_14;
  
  if (*(int *)param_1[2] != 0) {
    FUN_1404815f0(param_1[1],0);
  }
  local_14 = local_14 & 0xffffff00;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_c8[0] = 0;
  local_18 = 0x20702;
  FUN_140439160(*param_1,local_c8);
  FUN_140438c20(local_c8);
  return;
}



// FUNCTION 14045aa10 FUN_14045aa10 body=730 status=ok
// SIG undefined FUN_14045aa10(void)

undefined8
FUN_14045aa10(longlong *param_1,undefined8 param_2,longlong *param_3,float param_4,float param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined1 local_e8 [208];
  
  uVar7 = (**(code **)(*param_3 + 0x58))(param_3);
  *(int *)(*param_1 + 8) = (int)((float)uVar7 * param_4);
  uVar7 = (**(code **)(*param_3 + 0x60))(param_3);
  *(int *)(*param_1 + 0xc) = (int)((float)uVar7 * param_5);
  iVar11 = *(int *)param_1[1];
  if (iVar11 == 1) {
    FUN_1404815f0(param_1[2],param_2);
    puVar2 = (undefined4 *)*param_1;
    lVar10 = param_1[2];
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *(undefined4 *)(lVar10 + 0x39c) = *puVar2;
    *(undefined4 *)(lVar10 + 0x3a0) = uVar4;
    *(undefined4 *)(lVar10 + 0x3a4) = uVar5;
    *(undefined4 *)(lVar10 + 0x3a8) = uVar6;
    uVar8 = *(undefined8 *)(puVar2 + 6);
    *(undefined8 *)(lVar10 + 0x3ac) = *(undefined8 *)(puVar2 + 4);
    *(undefined8 *)(lVar10 + 0x3b4) = uVar8;
    *(undefined4 *)(lVar10 + 0x3bc) = puVar2[8];
    *(undefined1 *)(param_1[2] + 0x3d8) = 1;
    iVar11 = *(int *)param_1[1];
  }
  if (iVar11 == 2) {
    *(undefined1 *)(param_1[2] + 0x3d8) = 0;
  }
  FWeakObjectPtr::operator=(param_1[2] + 0x390,param_2);
  puVar2 = (undefined4 *)*param_1;
  local_118 = *puVar2;
  uStack_114 = puVar2[1];
  uStack_110 = puVar2[2];
  uStack_10c = puVar2[3];
  local_108 = puVar2[4];
  uStack_104 = puVar2[5];
  uStack_100 = puVar2[6];
  uStack_fc = puVar2[7];
  local_f8 = puVar2[8];
  (**(code **)(*(longlong *)param_1[2] + 0x210))((longlong *)param_1[2],param_2,param_3,&local_118);
  uVar8 = FUN_140486b60(local_e8,param_3,*param_1);
  FUN_140439160(param_1[3],uVar8);
  FUN_140438c20(local_e8);
  if (*(char *)param_1[3] != '\0') {
    puVar9 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1[2] + 8,local_130);
    plVar3 = (longlong *)puVar9[1];
    uVar8 = *puVar9;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_128 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    plVar12 = plVar3 + 1;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar12 = (int)*plVar12 + 1;
      UNLOCK();
    }
    lVar10 = param_1[4];
    local_148 = *(undefined8 *)(lVar10 + 0x38);
    local_140 = *(undefined8 *)(lVar10 + 0x40);
    local_138 = *(longlong *)(lVar10 + 0x48);
    if (local_138 != 0) {
      LOCK();
      *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
      UNLOCK();
    }
    local_158 = uVar8;
    local_150 = plVar3;
    lVar10 = FUN_140466100(param_1[3],&local_158,&local_148);
    *(uint *)(lVar10 + 0xb4) = *(uint *)(lVar10 + 0xb4) | 0x40;
    FUN_140459130(param_1[3],lVar10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
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
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
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
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14045acf0 FUN_14045acf0 body=620 status=ok
// SIG undefined FUN_14045acf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14045acf0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_208;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [64];
  longlong local_a0;
  undefined4 local_98;
  char local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  local_1b4 = param_3[1];
  local_1b0 = param_3[2];
  local_1ac = param_3[3];
  local_1b8 = *param_3;
  local_170 = _DAT_1468b5d78;
  uStack_168 = uRam00000001468b5d80;
  local_160 = _DAT_1468b5d78;
  uStack_158 = uRam00000001468b5d80;
  local_7c = 0xbf800000;
  local_150 = _DAT_1464aa6c0;
  uStack_148 = _DAT_1464aa6c8;
  local_138 = 0x42c80000;
  local_80 = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  local_2d8 = _DAT_1468b5d90;
  local_48 = 0;
  uStack_40 = 0;
  local_298 = _DAT_1464aa800;
  uStack_294 = uRam00000001464aa804;
  uStack_290 = uRam00000001464aa808;
  uStack_28c = _DAT_1464aa80c;
  local_258 = _DAT_1464aa800;
  uStack_254 = uRam00000001464aa804;
  uStack_250 = uRam00000001464aa808;
  uStack_24c = _DAT_1464aa80c;
  local_208 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0xffffffff;
  local_178 = 0;
  local_140 = 0;
  local_130 = 0;
  local_128 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0xffffffff;
  local_fc = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_90 = '\0';
  local_88 = 0xffffffffffffffff;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x100;
  local_68 = 0x42b40000;
  local_64 = 0x42b40000;
  local_60 = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 1;
  local_26 = 0;
  local_2d0 = DAT_1468b5d98;
  local_2c8 = DAT_1464aa7d0;
  uStack_2c4 = DAT_1464aa7d4;
  uStack_2c0 = DAT_1464aa7d8;
  uStack_2bc = uRam00000001464aa7dc;
  local_2b8 = DAT_1464aa7e0;
  uStack_2b4 = DAT_1464aa7e4;
  uStack_2b0 = DAT_1464aa7e8;
  uStack_2ac = uRam00000001464aa7ec;
  local_2a8 = DAT_1464aa7f0;
  uStack_2a4 = DAT_1464aa7f4;
  uStack_2a0 = DAT_1464aa7f8;
  uStack_29c = uRam00000001464aa7fc;
  local_288 = DAT_1464aa7d0;
  uStack_284 = DAT_1464aa7d4;
  uStack_280 = DAT_1464aa7d8;
  uStack_27c = uRam00000001464aa7dc;
  local_278 = DAT_1464aa7e0;
  uStack_274 = DAT_1464aa7e4;
  uStack_270 = DAT_1464aa7e8;
  uStack_26c = uRam00000001464aa7ec;
  local_268 = DAT_1464aa7f0;
  uStack_264 = DAT_1464aa7f4;
  uStack_260 = DAT_1464aa7f8;
  uStack_25c = uRam00000001464aa7fc;
  local_1a8 = local_1b8;
  local_1a4 = local_1b4;
  local_1a0 = local_1b0;
  local_19c = local_1ac;
  local_198 = param_4;
  FUN_142742170(param_2,&local_2d8);
  if (local_90 != '\0') {
    local_90 = '\0';
    local_98 = 0;
    if (local_a0 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_e0);
  }
  local_e8 = 0;
  if (local_f0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_130);
  return param_2;
}



// FUNCTION 14045af60 FUN_14045af60 body=223 status=ok
// SIG undefined FUN_14045af60(void)

void FUN_14045af60(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res8 [2];
  longlong *local_res18;
  undefined4 uStack_1c;
  
  lVar3 = *param_1;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x80,local_res8,param_1 + 1);
  if ((local_res8[0] == -1) ||
     (lVar6 = *(longlong *)(lVar3 + 0x80) + (longlong)local_res8[0] * 0x28, lVar6 == 0)) {
    local_res18 = param_1 + 1;
    FUN_14044cb70(lVar3 + 0x80,local_res8,&local_res18,0);
    lVar6 = *(longlong *)(lVar3 + 0x80) + (longlong)local_res8[0] * 0x28;
  }
  lVar3 = param_1[3];
  lVar5 = param_1[4];
  lVar4 = param_1[5];
  iVar2 = *(int *)(lVar6 + 0x18);
  *(int *)(lVar6 + 0x18) = iVar2 + 1;
  if (*(int *)(lVar6 + 0x1c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(lVar6 + 0x10),iVar2);
  }
  lVar6 = *(longlong *)(lVar6 + 0x10);
  plVar1 = (longlong *)(lVar6 + (longlong)iVar2 * 0x18);
  *plVar1 = lVar3;
  plVar1[1] = CONCAT44(uStack_1c,(int)lVar5);
  *(longlong *)(lVar6 + 0x10 + (longlong)iVar2 * 0x18) = lVar4;
  return;
}



// FUNCTION 14045b040 FUN_14045b040 body=142 status=ok
// SIG undefined FUN_14045b040(void)

void FUN_14045b040(undefined8 *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = *(undefined1 *)*param_1;
    uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    uVar3 = FUN_141592c20(local_18,uVar2);
    FString::RightPad(uVar3,local_28,uVar1);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(**(longlong **)param_1[1] + 0xc60))(*(longlong **)param_1[1],local_28,0,0);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14045b0d0 FUN_14045b0d0 body=494 status=ok
// SIG undefined FUN_14045b0d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14045b0d0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
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
  puVar5 = (undefined8 *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1[1] + 8,local_110);
  plVar3 = (longlong *)puVar5[1];
  uVar4 = *puVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_108 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar7 = plVar3 + 1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  lVar6 = param_1[2];
  local_128 = *(undefined8 *)(lVar6 + 0x38);
  local_120 = *(undefined8 *)(lVar6 + 0x40);
  local_118 = *(longlong *)(lVar6 + 0x48);
  if (local_118 != 0) {
    LOCK();
    *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
    UNLOCK();
  }
  local_44 = local_44 & 0xffffff00;
  local_f8[0] = 1;
  local_f0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_d0 = 0;
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
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x20702;
  local_138 = uVar4;
  local_130 = plVar3;
  lVar6 = FUN_140466100(local_f8,&local_138,&local_128);
  *(uint *)(lVar6 + 0xb4) = *(uint *)(lVar6 + 0xb4) | 0x40;
  FUN_140459130(*param_1,lVar6);
  FUN_140438c20(local_f8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
    LOCK();
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return;
}



// FUNCTION 14045b2c0 FUN_14045b2c0 body=604 status=ok
// SIG undefined FUN_14045b2c0(void)

undefined8 FUN_14045b2c0(longlong *param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [192];
  
  *(int *)*param_1 = (int)*param_2;
  *(int *)(*param_1 + 4) = (int)param_2[1];
  iVar10 = *(int *)param_1[1];
  if (iVar10 == 1) {
    FUN_1404815f0(param_1[2],param_3);
    puVar2 = (undefined4 *)*param_1;
    lVar9 = param_1[2];
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *(undefined4 *)(lVar9 + 0x3c0) = *puVar2;
    *(undefined4 *)(lVar9 + 0x3c4) = uVar4;
    *(undefined4 *)(lVar9 + 0x3c8) = uVar5;
    *(undefined4 *)(lVar9 + 0x3cc) = uVar6;
    *(undefined8 *)(lVar9 + 0x3d0) = *(undefined8 *)(puVar2 + 4);
    *(undefined1 *)(param_1[2] + 0x3d9) = 1;
    iVar10 = *(int *)param_1[1];
  }
  if (iVar10 == 2) {
    *(undefined1 *)(param_1[2] + 0x3d9) = 0;
  }
  FWeakObjectPtr::operator=(param_1[2] + 0x390,param_3);
  uVar7 = FUN_14046d3b0(param_3);
  uVar7 = FUN_140486c20(local_d8,param_4,*param_1,uVar7);
  FUN_140439160(param_1[3],uVar7);
  FUN_140438c20(local_d8);
  if (*(char *)param_1[3] != '\0') {
    puVar8 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1[2] + 8,local_f0);
    plVar3 = (longlong *)puVar8[1];
    uVar7 = *puVar8;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_e8 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    plVar11 = plVar3 + 1;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar11 = (int)*plVar11 + 1;
      UNLOCK();
    }
    lVar9 = param_1[4];
    local_108 = *(undefined8 *)(lVar9 + 0x38);
    local_100 = *(undefined8 *)(lVar9 + 0x40);
    local_f8 = *(longlong *)(lVar9 + 0x48);
    if (local_f8 != 0) {
      LOCK();
      *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
      UNLOCK();
    }
    local_118 = uVar7;
    local_110 = plVar3;
    lVar9 = FUN_140466100(param_1[3],&local_118,&local_108);
    *(uint *)(lVar9 + 0xb4) = *(uint *)(lVar9 + 0xb4) | 0x40;
    FUN_140459130(param_1[3],lVar9);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        lVar9 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14045b520 FUN_14045b520 body=661 status=ok
// SIG undefined FUN_14045b520(void)

undefined8 FUN_14045b520(longlong *param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined1 local_d8 [192];
  
  *(int *)(*param_1 + 8) = (int)*param_2;
  *(int *)(*param_1 + 0xc) = (int)param_2[1];
  iVar10 = *(int *)param_1[1];
  if (iVar10 == 1) {
    FUN_1404815f0(param_1[2],param_3);
    puVar2 = (undefined4 *)*param_1;
    lVar9 = param_1[2];
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *(undefined4 *)(lVar9 + 0x39c) = *puVar2;
    *(undefined4 *)(lVar9 + 0x3a0) = uVar4;
    *(undefined4 *)(lVar9 + 0x3a4) = uVar5;
    *(undefined4 *)(lVar9 + 0x3a8) = uVar6;
    uVar4 = puVar2[5];
    uVar5 = puVar2[6];
    uVar6 = puVar2[7];
    *(undefined4 *)(lVar9 + 0x3ac) = puVar2[4];
    *(undefined4 *)(lVar9 + 0x3b0) = uVar4;
    *(undefined4 *)(lVar9 + 0x3b4) = uVar5;
    *(undefined4 *)(lVar9 + 0x3b8) = uVar6;
    *(undefined4 *)(lVar9 + 0x3bc) = puVar2[8];
    *(undefined1 *)(param_1[2] + 0x3d9) = 1;
    iVar10 = *(int *)param_1[1];
  }
  if (iVar10 == 2) {
    *(undefined1 *)(param_1[2] + 0x3d9) = 0;
  }
  FWeakObjectPtr::operator=(param_1[2] + 0x390,param_3);
  puVar2 = (undefined4 *)*param_1;
  local_108 = *puVar2;
  uStack_104 = puVar2[1];
  uStack_100 = puVar2[2];
  uStack_fc = puVar2[3];
  local_f8 = puVar2[4];
  uStack_f4 = puVar2[5];
  uStack_f0 = puVar2[6];
  uStack_ec = puVar2[7];
  local_e8 = puVar2[8];
  (**(code **)(*(longlong *)param_1[2] + 0x208))((longlong *)param_1[2],param_3,param_4,&local_108);
  uVar7 = FUN_140486b60(local_d8,param_4,*param_1);
  FUN_140439160(param_1[3],uVar7);
  FUN_140438c20(local_d8);
  if (*(char *)param_1[3] != '\0') {
    puVar8 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1[2] + 8,local_120);
    plVar3 = (longlong *)puVar8[1];
    uVar7 = *puVar8;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_118 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    plVar11 = plVar3 + 1;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar11 = (int)*plVar11 + 1;
      UNLOCK();
    }
    lVar9 = param_1[4];
    local_138 = *(undefined8 *)(lVar9 + 0x38);
    local_130 = *(undefined8 *)(lVar9 + 0x40);
    local_128 = *(longlong *)(lVar9 + 0x48);
    if (local_128 != 0) {
      LOCK();
      *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
      UNLOCK();
    }
    local_148 = uVar7;
    local_140 = plVar3;
    lVar9 = FUN_140466100(param_1[3],&local_148,&local_138);
    *(uint *)(lVar9 + 0xb4) = *(uint *)(lVar9 + 0xb4) | 0x40;
    FUN_140459130(param_1[3],lVar9);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        lVar9 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14045b7c0 FUN_14045b7c0 body=185 status=ok
// SIG undefined FUN_14045b7c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14045b7c0(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_18;
  
  if ((param_2 != (longlong *)0x0) &&
     ((local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8, *(int *)*param_1 == *(int *)param_1[1] ||
      (iVar1 = (**(code **)(*param_2 + 0x38))(param_2), iVar1 == *(int *)*param_1)))) {
    if (*(int *)(*(undefined8 **)param_1[2] + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)**(undefined8 **)param_1[2];
    }
    lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_b8,puVar3);
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(lVar2 + 0x88));
    if (local_38 != 0) {
      FMemory::Free();
    }
    *(undefined1 *)param_1[3] = 1;
  }
  return;
}



// FUNCTION 14045b880 FUN_14045b880 body=127 status=ok
// SIG undefined FUN_14045b880(void)

void FUN_14045b880(undefined8 param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x30))(param_2);
    (**(code **)(param_2[8] + 0x30))(param_2 + 8);
    param_2[8] = (longlong)&PTR__scalar_deleting_destructor__143f48b30;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0xf);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0xe);
    FUN_141edd2d0(param_2 + 8);
    *param_2 = (longlong)&PTR_FUN_143f48ad0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 6);
    FUN_141edd2d0(param_2);
    FMemory::operator_delete(param_2,0x88);
  }
  return;
}



// FUNCTION 14045b950 FUN_14045b950 body=63 status=ok
// SIG undefined FUN_14045b950(void)

undefined8 * FUN_14045b950(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47cd8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      cohtml::IEventHandler::operator_delete(param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14045b990 FUN_14045b990 body=43 status=ok
// SIG undefined FUN_14045b990(void)

undefined8 * FUN_14045b990(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14045b9c0 FUN_14045b9c0 body=98 status=ok
// SIG undefined FUN_14045b9c0(void)

undefined8 * FUN_14045b9c0(undefined8 *param_1,uint param_2)

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



// FUNCTION 14045ba30 FUN_14045ba30 body=205 status=ok
// SIG undefined FUN_14045ba30(void)

IViewListener * FUN_14045ba30(IViewListener *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_143f48e50;
  *(undefined ***)(param_1 + 8) = &PTR_LAB_143f48f28;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8) = 0;
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  cohtml::ITextInputHandler::~ITextInputHandler((ITextInputHandler *)(param_1 + 8));
  cohtml::IViewListener::~IViewListener(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14045bb00 FUN_14045bb00 body=205 status=ok
// SIG undefined FUN_14045bb00(void)

IViewListener * FUN_14045bb00(IViewListener *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_143f4b928;
  *(undefined ***)(param_1 + 8) = &PTR_LAB_143f4ba00;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8) = 0;
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  cohtml::ITextInputHandler::~ITextInputHandler((ITextInputHandler *)(param_1 + 8));
  cohtml::IViewListener::~IViewListener(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14045bbd0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FRHIGPUFence::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f4bdc8;
  FUN_140467570();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14045bc10 FUN_14045bc10 body=43 status=ok
// SIG undefined FUN_14045bc10(void)

undefined8 * FUN_14045bc10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14045bc40 FUN_14045bc40 body=43 status=ok
// SIG undefined FUN_14045bc40(void)

undefined8 * FUN_14045bc40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14045bc70 FUN_14045bc70 body=97 status=ok
// SIG undefined FUN_14045bc70(void)

undefined8 * FUN_14045bc70(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143f4d088;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14045bce0 FUN_14045bce0 body=97 status=ok
// SIG undefined FUN_14045bce0(void)

undefined8 * FUN_14045bce0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143f4b3a0;
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


