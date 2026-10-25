// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14195eac0 NewIntrusiveReferenceController<SNotificationItemImpl> body=106 status=ok
// SIG undefined NewIntrusiveReferenceController<SNotificationItemImpl>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SNotificationItemImpl>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x540);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d76480;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x530);
      SNotificationItemImpl::SNotificationItemImpl(_Dst);
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14195eb30 FUN_14195eb30 body=195 status=ok
// SIG undefined FUN_14195eb30(void)

undefined8 * FUN_14195eb30(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x448);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_FUN_144d6e640;
    if (puVar1 != (undefined8 *)0x0) {
      SBorder::SBorder(puVar1);
      *puVar1 = &PTR__scalar_deleting_destructor__144d725c0;
      *(undefined2 *)(puVar2 + 0x73) = 0x19;
      puVar2[0x74] = 0;
      *(undefined4 *)(puVar2 + 0x75) = 0;
      puVar2[0x76] = 0;
      puVar2[0x77] = 0;
      puVar2[0x78] = 0;
      puVar2[0x79] = 0;
      *(undefined1 *)(puVar2 + 0x7a) = 0;
      puVar2[0x7b] = 0;
      puVar2[0x7c] = 0;
      puVar2[0x7d] = 0;
      *(undefined4 *)(puVar2 + 0x7e) = 0;
      *(undefined4 *)(puVar2 + 0x7f) = 0;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14195ec00 FUN_14195ec00 body=144 status=ok
// SIG undefined FUN_14195ec00(void)

undefined8 * FUN_14195ec00(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x250);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_DestroyObject_144d76450;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1417f46d0(puVar1);
      *puVar1 = &PTR__scalar_deleting_destructor__144d73fe8;
      puVar2[0x44] = puVar1;
      puVar2[0x45] = 0;
      puVar2[0x46] = 0;
      puVar2[0x43] = &PTR_Count_144d73fc0;
      *(undefined1 *)(puVar2 + 0x47) = 0;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14195ec90 NewIntrusiveReferenceController<SScrollPanel> body=144 status=ok
// SIG undefined NewIntrusiveReferenceController<SScrollPanel>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SScrollPanel>(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x250);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_DestroyObject_144d76460;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1417f46d0(puVar1);
      *puVar1 = &PTR__scalar_deleting_destructor__144d74428;
      puVar2[0x45] = puVar1;
      puVar2[0x46] = 0;
      puVar2[0x47] = 0;
      puVar2[0x44] = &PTR_Count_144d74400;
      *(undefined1 *)(puVar2 + 0x48) = 0;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14195ed20 FUN_14195ed20 body=147 status=ok
// SIG undefined FUN_14195ed20(void)

undefined8 * FUN_14195ed20(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x238);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_FUN_143f4d490;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1417f46d0(puVar1);
      *puVar1 = &PTR_FUN_144d73338;
      puVar2[0x43] = &PTR_LAB_144d73310;
      puVar2[0x44] = puVar1;
      puVar2[0x45] = 0;
      puVar2[0x46] = 0;
      *(byte *)(puVar2 + 5) = *(byte *)(puVar2 + 5) & 0xfb;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14195edc0 FUN_14195edc0 body=379 status=ok
// SIG undefined FUN_14195edc0(void)

int FUN_14195edc0(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  ushort *puVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  
  iVar2 = (int)param_1[1];
  lVar4 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)*param_1;
  uVar6 = 0;
  uVar12 = uVar6;
  if (((((uVar1 & 0xffe0) == 0) && (uVar1 != 9)) && (*(char *)*param_2 == '\0')) &&
     ((((ushort)(uVar1 - 10) < 4 || (uVar1 == 0x85)) || ((ushort)(uVar1 + 0xdfd8) < 2)))) {
    bVar7 = 0;
    uVar10 = uVar6;
  }
  else {
    bVar7 = 1;
    uVar10 = uVar6;
  }
  do {
    iVar9 = (int)uVar10;
    uVar6 = uVar6 + 1;
    uVar10 = (ulonglong)(iVar9 + 1);
    if ((longlong)uVar6 < lVar4) {
      puVar5 = (ushort *)(*param_1 + uVar6 * 2);
      do {
        uVar1 = *puVar5;
        if ((((uVar1 & 0xffe0) == 0) && (uVar1 != 9)) &&
           ((*(char *)*param_2 == '\0' &&
            ((((ushort)(uVar1 - 10) < 4 || (uVar1 == 0x85)) || ((ushort)(uVar1 + 0xdfd8) < 2)))))) {
          bVar3 = 0;
        }
        else {
          bVar3 = 1;
        }
        if (bVar7 != bVar3) break;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while ((longlong)uVar6 < lVar4);
    }
    iVar8 = (int)uVar10 - iVar9;
    if (bVar7 != 0) {
      iVar11 = (int)uVar12;
      if (iVar11 != iVar9) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar11 * 2),
                   (void *)(*param_1 + (longlong)iVar9 * 2),(longlong)iVar8 * 2);
      }
      uVar12 = (ulonglong)(uint)(iVar11 + iVar8);
    }
    bVar7 = bVar7 ^ 1;
    if (lVar4 <= (longlong)uVar6) {
      *(int *)(param_1 + 1) = (int)uVar12;
      return iVar2 - (int)uVar12;
    }
  } while( true );
}



// FUNCTION 14195ef40 Visibility<SFlareCompanyInfo> body=203 status=ok
// SIG undefined Visibility<SFlareCompanyInfo>(void)

longlong TSlateBaseNamedArgs<SFlareButton>::Visibility<SFlareCompanyInfo>
                   (longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong *local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  uVar1 = FUN_1417dd840(&local_48,param_2,&local_38);
  local_28 = 0x119;
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,uVar1);
  *(undefined1 *)(param_1 + 0x78) = (undefined1)local_28;
  *(undefined1 *)(param_1 + 0x79) = local_28._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x80,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return param_1;
}



// FUNCTION 14195f010 FUN_14195f010 body=194 status=ok
// SIG undefined FUN_14195f010(void)

undefined8 * FUN_14195f010(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_144043248;
  SBorder::SBorder(param_1 + 1);
  *param_1 = &PTR_StartProfileThreadUsage_144d68b40;
  param_1[1] = &PTR_LAB_144043a48;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a4) = 1;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  return param_1;
}



// FUNCTION 14195f0e0 FUN_14195f0e0 body=768 status=ok
// SIG undefined FUN_14195f0e0(void)

longlong FUN_14195f0e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 local_58 [8];
  undefined1 local_50 [32];
  longlong *local_30;
  
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
  *(undefined8 *)(param_1 + 0x108) = DAT_1469eb218;
  lVar8 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar8 != 0) {
    LOCK();
    piVar1 = (int *)(lVar8 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar2 = DAT_1469eb140;
  puVar7 = (undefined8 *)FName::FName(local_res8,"ComboBox",1);
  local_res10 = *puVar7;
  local_res18 = local_res10;
  lVar8 = (**(code **)(*plVar2 + 0x80))(plVar2,DAT_1469eb170);
  if (lVar8 == 0) {
    lVar8 = FUN_141834a30();
  }
  *(longlong *)(param_1 + 0x118) = lVar8;
  *(undefined8 *)(param_1 + 0x120) = 0;
  plVar2 = DAT_1469eb140;
  puVar7 = (undefined8 *)FName::FName(local_res20,"TableView.Row",1);
  uVar10 = *puVar7;
  uVar11 = uVar10;
  lVar8 = (**(code **)(*plVar2 + 0x80))(plVar2,DAT_1469eb1e0);
  if (lVar8 == 0) {
    lVar8 = FUN_1418352d0();
  }
  *(longlong *)(param_1 + 0x128) = lVar8;
  *(undefined4 *)(param_1 + 0x130) = 0x40800000;
  *(undefined4 *)(param_1 + 0x134) = 0x40000000;
  *(undefined4 *)(param_1 + 0x138) = 0x40800000;
  *(undefined4 *)(param_1 + 0x13c) = 0x40000000;
  *(undefined1 *)(param_1 + 0x140) = 1;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  plVar2 = DAT_1469eb140;
  lVar8 = *DAT_1469eb140;
  puVar7 = (undefined8 *)FName::FName(local_58,"InvertedForeground",1);
  puVar9 = (undefined4 *)(**(code **)(lVar8 + 0x30))(plVar2,local_50,*puVar7,0,uVar10,uVar11);
  uVar4 = puVar9[1];
  uVar5 = puVar9[2];
  uVar6 = puVar9[3];
  *(undefined4 *)(param_1 + 0x158) = *puVar9;
  *(undefined4 *)(param_1 + 0x15c) = uVar4;
  *(undefined4 *)(param_1 + 0x160) = uVar5;
  *(undefined4 *)(param_1 + 0x164) = uVar6;
  *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(puVar9 + 4);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(puVar9 + 6);
  lVar8 = *(longlong *)(puVar9 + 8);
  *(longlong *)(param_1 + 0x178) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x180) = 1;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1f1) = 0;
  *(undefined4 *)(param_1 + 500) = 0x43e10000;
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined2 *)(param_1 + 0x238) = 1;
  *(undefined1 *)(param_1 + 0x23a) = 1;
  return param_1;
}



// FUNCTION 14195f3e0 FUN_14195f3e0 body=336 status=ok
// SIG undefined FUN_14195f3e0(void)

longlong FUN_14195f3e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
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
  plVar2 = DAT_1469eb140;
  puVar3 = (undefined8 *)FName::FName(local_res8,"TableView.Row",1);
  local_res10 = *puVar3;
  local_res18 = local_res10;
  lVar4 = (**(code **)(*plVar2 + 0x80))(plVar2,DAT_1469eb1e0);
  if (lVar4 == 0) {
    lVar4 = FUN_1418352d0();
  }
  *(longlong *)(param_1 + 0x108) = lVar4;
  *(undefined8 *)(param_1 + 0x110) = DAT_1469eb218;
  lVar4 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x118) = DAT_1469eb220;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14195f530 FUN_14195f530 body=405 status=ok
// SIG undefined FUN_14195f530(void)

longlong FUN_14195f530(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined1 local_res8 [8];
  
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
  FText::FText(param_1 + 0x108);
  plVar5 = DAT_1469eb140;
  lVar1 = *DAT_1469eb140;
  puVar6 = (undefined8 *)FName::FName(local_res8,"ErrorReporting.BackgroundColor",1);
  puVar7 = (undefined4 *)(**(code **)(lVar1 + 0x28))(plVar5,*puVar6,0);
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *(undefined4 *)(param_1 + 0x120) = *puVar7;
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  *(undefined4 *)(param_1 + 0x128) = uVar3;
  *(undefined4 *)(param_1 + 300) = uVar4;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x148) = 1;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  FUN_1417efd90(param_1 + 0x160);
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined2 *)(param_1 + 0x1c8) = 0x100;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  return param_1;
}



// FUNCTION 14195f6d0 FArguments body=317 status=ok
// SIG undefined FArguments(void)

longlong SNotificationItemExternalImpl::FArguments::FArguments(longlong param_1)

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
  *(undefined4 *)(param_1 + 0x108) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x10c) = 1;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0x40000000;
  *(undefined1 *)(param_1 + 0x124) = 1;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x13c) = 1;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  return param_1;
}



// FUNCTION 14195f810 FUN_14195f810 body=636 status=ok
// SIG undefined FUN_14195f810(void)

longlong FUN_14195f810(longlong param_1)

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
  FText::FText(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  FUN_1417efd90(param_1 + 0x138);
  *(undefined1 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0x40000000;
  *(undefined1 *)(param_1 + 0x204) = 1;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x21c) = 1;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined2 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined2 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  FText::FText(param_1 + 0x2a8);
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  FText::FText(param_1 + 0x2e8);
  *(undefined1 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  return param_1;
}



// FUNCTION 14195fa90 FArguments body=447 status=ok
// SIG undefined FArguments(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SProgressBar::FArguments::FArguments(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
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
  plVar2 = DAT_1469eb140;
  puVar3 = (undefined8 *)FName::FName(local_res8,"ProgressBar",1);
  local_res10 = *puVar3;
  local_res18 = local_res10;
  lVar4 = (**(code **)(*plVar2 + 0x80))(plVar2,DAT_1469eb198);
  if (lVar4 == 0) {
    lVar4 = FUN_141834f50();
  }
  *(longlong *)(param_1 + 0x108) = lVar4;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x120) = 1;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  uVar1 = _DAT_1464aa6c8;
  *(undefined8 *)(param_1 + 0x138) = _DAT_1464aa6c0;
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x160) = 1;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x180) = 1;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0x40000000;
  return param_1;
}



// FUNCTION 14195fc50 FUN_14195fc50 body=386 status=ok
// SIG undefined FUN_14195fc50(void)

longlong FUN_14195fc50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_20;
  undefined4 local_18;
  
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
  *(undefined8 *)(param_1 + 0x108) = DAT_1469eb218;
  lVar3 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x118) = DAT_1469eb218;
  lVar3 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x120) = DAT_1469eb220;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x128) = DAT_1469eb218;
  lVar3 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x130) = DAT_1469eb220;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x138) = 1;
  uVar2 = DAT_1464b9eec;
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9eec;
  *(undefined1 *)(param_1 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            ((undefined8 *)(param_1 + 0x80),&local_20,param_3,param_4,uVar2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 14195fde0 FArguments body=589 status=ok
// SIG undefined FArguments(void)

longlong SSlider::FArguments::FArguments(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
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
  *(undefined2 *)(param_1 + 0x108) = 0x101;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined2 *)(param_1 + 0x120) = 0x100;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  uVar1 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
  *(ulonglong *)(param_1 + 0x140) = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x168) = 1;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  uVar4 = DAT_1464aa6cc;
  uVar3 = DAT_1464aa6c8;
  uVar2 = DAT_1464aa6c4;
  *(undefined4 *)(param_1 + 0x180) = DAT_1464aa6c0;
  *(undefined4 *)(param_1 + 0x184) = uVar2;
  *(undefined4 *)(param_1 + 0x188) = uVar3;
  *(undefined4 *)(param_1 + 0x18c) = uVar4;
  *(undefined1 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  plVar5 = DAT_1469eb140;
  puVar6 = (undefined8 *)FName::FName(local_res8,"Slider",1);
  local_res10 = *puVar6;
  local_res18 = local_res10;
  lVar7 = (**(code **)(*plVar5 + 0x80))(plVar5,DAT_1469eb1b8);
  if (lVar7 == 0) {
    lVar7 = FUN_1418350d0();
  }
  *(longlong *)(param_1 + 0x1c0) = lVar7;
  *(undefined4 *)(param_1 + 0x1c8) = 0x3c23d70a;
  *(undefined1 *)(param_1 + 0x1cc) = 1;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)(param_1 + 0x1f8) = 1;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  return param_1;
}



// FUNCTION 141960030 FUN_141960030 body=302 status=ok
// SIG undefined FUN_141960030(void)

longlong FUN_141960030(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_20;
  undefined4 local_18;
  
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
  *(undefined8 *)(param_1 + 0x108) = DAT_1469eb218;
  lVar3 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = DAT_1464b9eeb;
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9eeb;
  *(undefined1 *)(param_1 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            ((undefined8 *)(param_1 + 0x80),&local_20,param_3,param_4,uVar2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 141960160 FUN_141960160 body=125 status=ok
// SIG undefined FUN_141960160(void)

undefined8 * FUN_141960160(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *param_2 = 0;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_2[3] = 0;
  param_2[2] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((param_2 + 4 != param_1 + 4) && (*(int *)(param_2 + 5) != 0)) &&
     (plVar1 = (longlong *)param_2[4], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))();
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 1419601e0 FUN_1419601e0 body=5583 status=ok
// SIG undefined FUN_1419601e0(void)

undefined8 *
FUN_1419601e0(undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined1 *param_5,undefined1 *param_6,longlong **param_7,undefined8 *param_8,
             undefined8 *param_9)

{
  longlong **pplVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined8 local_3b8;
  longlong *local_3b0;
  undefined8 local_3a8;
  longlong *local_3a0;
  undefined8 local_398;
  longlong *local_390;
  undefined8 local_388;
  longlong *local_380;
  undefined8 local_378;
  longlong *local_370;
  undefined8 local_368;
  longlong *local_360;
  undefined8 local_358;
  longlong *local_350;
  longlong *local_348;
  longlong *plStack_340;
  undefined8 local_338;
  longlong *plStack_330;
  longlong *local_328;
  longlong *plStack_320;
  longlong *local_318;
  longlong *plStack_310;
  longlong *local_308;
  longlong *plStack_300;
  longlong *local_2f8;
  longlong *local_2f0;
  undefined8 local_2e8;
  longlong *plStack_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined2 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined2 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_280;
  undefined1 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined1 local_264;
  undefined8 local_260;
  undefined4 local_258;
  undefined1 local_250;
  undefined1 local_24f;
  undefined8 local_248;
  undefined4 local_240;
  longlong local_238 [2];
  undefined1 local_228;
  longlong local_220;
  undefined4 local_218;
  longlong *local_210 [2];
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined8 local_118 [2];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  
  puVar10 = param_1 + 3;
  param_1[1] = 0;
  pplVar1 = (longlong **)(param_1 + 7);
  param_1[2] = 0;
  puVar2 = param_1 + 9;
  *puVar10 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *pplVar1 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 8) = 0;
  *puVar2 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_1417f2e90(param_1 + 0xc);
  FUN_1417f2e90(param_1 + 0x48);
  FText::FText(param_1 + 0x84);
  *(undefined1 *)(param_1 + 0x87) = 0;
  puVar4 = param_1 + 0x8a;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  FTextSnapshot::FTextSnapshot(puVar4);
  FText::FText(param_1 + 0x8e);
  *(undefined1 *)(param_1 + 0x91) = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  FText::FText(param_1 + 0x94);
  *(undefined1 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  FTextSnapshot::FTextSnapshot(param_1 + 0x9a);
  FText::FText();
  plVar15 = param_1 + 0xb5;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50c) = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  *(undefined2 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined2 *)(param_1 + 0xa7) = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x57c) = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x594) = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb6] = 0;
  *plVar15 = 0;
  param_1[0xb6] = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *(undefined1 *)((longlong)param_1 + 0x66c) = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  param_1[0xd0] = 0;
  *(undefined2 *)(param_1 + 0xd1) = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  *(undefined1 *)(param_1 + 0xde) = 0;
  FText::FText(param_1 + 0xdf);
  *(undefined1 *)(param_1 + 0xe3) = 0;
  param_1[0xe4] = 0;
  *(undefined2 *)(param_1 + 0xe5) = 0;
  param_1[0xe6] = 0;
  FText::FText(param_1 + 0xe8);
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  *(undefined1 *)(param_1 + 0xef) = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  if (param_7 == pplVar1) {
LAB_1419604f2:
    if (((*(int *)(param_1 + 8) == 0) || (*pplVar1 == (longlong *)0x0)) ||
       (cVar5 = (**(code **)(**pplVar1 + 0x18))(), cVar5 == '\0')) goto LAB_14196050e;
  }
  else {
    if ((*(int *)(param_7 + 1) != 0) && (plVar8 = *param_7, plVar8 != (longlong *)0x0)) {
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar1);
      goto LAB_1419604f2;
    }
    if (*(int *)(param_1 + 8) != 0) {
      plVar8 = *pplVar1;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar8 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar8;
        }
        *(undefined4 *)(param_1 + 8) = 0;
      }
      goto LAB_1419604f2;
    }
LAB_14196050e:
    plVar8 = (longlong *)FMemory::Realloc(0,0x20);
    local_210[0] = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_GetPoolName_144d763e0;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar8[2] = lVar9;
    }
    if (local_210 != pplVar1) {
      if (plVar8 == (longlong *)0x0) {
        if ((*(int *)(param_1 + 8) != 0) && (plVar12 = *pplVar1, plVar12 != (longlong *)0x0)) {
          (**(code **)(*plVar12 + 0x28))(plVar12,0);
          if (*pplVar1 != (longlong *)0x0) {
            plVar12 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
            *pplVar1 = plVar12;
          }
          *(undefined4 *)(param_1 + 8) = 0;
        }
      }
      else {
        (**(code **)(*plVar8 + 0x30))(plVar8,pplVar1);
      }
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      local_210[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
      if (local_210[0] != (longlong *)0x0) {
        FMemory::Free(local_210[0]);
      }
    }
  }
  *param_1 = param_2;
  local_3a0 = (longlong *)param_8[1];
  local_3a8 = *param_8;
  if (local_3a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3a0 + 1) = (int)local_3a0[1] + 1;
    UNLOCK();
  }
  if (puVar10 != &local_3a8) {
    *puVar10 = local_3a8;
    local_3a8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 4,&local_3a0);
  }
  plVar8 = local_3a0;
  if (local_3a0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_3a0 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_3a0)(local_3a0);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_3a0 + 8))(local_3a0,1);
      }
    }
  }
  local_390 = (longlong *)param_9[1];
  local_398 = *param_9;
  if (local_390 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_390 + 1) = (int)local_390[1] + 1;
    UNLOCK();
  }
  if (param_1 + 5 != &local_398) {
    param_1[5] = local_398;
    local_398 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 6,&local_390);
  }
  plVar8 = local_390;
  if (local_390 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_390 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_390)(local_390);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_390 + 8))(local_390,1);
      }
    }
  }
  FTextBlockStyle::operator=(param_1 + 0xc,param_4);
  puVar10 = (undefined8 *)(**(code **)(*param_2 + 0x80))(param_2,local_178);
  if (*(int *)(param_1 + 8) == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = *pplVar1;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,&local_2e8,*puVar10,param_1 + 0xc);
  local_338 = local_2e8;
  plStack_330 = plStack_2e0;
  if (plStack_2e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_2e0 + 1) = (int)plStack_2e0[1] + 1;
    UNLOCK();
  }
  if (puVar2 != &local_338) {
    *puVar2 = local_2e8;
    local_338 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 10,&plStack_330);
  }
  plVar8 = plStack_330;
  plVar12 = plStack_2e0;
  if (plStack_330 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_330 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_330)(plStack_330);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      plVar12 = plStack_2e0;
      if (iVar7 == 1) {
        (**(code **)(*plStack_330 + 8))(plStack_330,1);
        plVar12 = plStack_2e0;
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar12 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar3 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_170 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar3 = (int *)((longlong)local_170 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  local_2d4 = 1;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xa2,&local_2d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2d0);
  local_298 = 0x100;
  local_290 = 0;
  local_288 = 0;
  *(undefined2 *)(param_1 + 0xa4) = 0x100;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xa5,&local_290);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_290);
  local_2b0 = 0x100;
  local_2a8 = 0;
  local_2a0 = 0;
  *(undefined2 *)(param_1 + 0xa7) = 0x100;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xa8,&local_2a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2a8);
  local_190 = 1;
  local_188 = 0;
  local_180 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  *(undefined1 *)(param_1 + 0xac) = 1;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xad,&local_188);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_188);
  local_280 = 0;
  local_27c = 1;
  local_278 = 0;
  local_270 = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x57c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xb0,&local_278);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_278);
  local_268 = 0x3f800000;
  local_264 = 1;
  local_260 = 0;
  local_258 = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x594) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xb3,&local_260);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_260);
  local_238[0] = 0;
  local_238[1] = 0;
  local_228 = 1;
  local_220 = 0;
  local_218 = 0;
  if (plVar15 != local_238) {
    if (*plVar15 != 0) {
      FMemory::Free();
    }
    *plVar15 = 0;
    param_1[0xb6] = 0;
  }
  plVar15 = param_1 + 0xb8;
  *(undefined1 *)(param_1 + 0xb7) = 1;
  if (((&local_220 != plVar15) && (*(int *)(param_1 + 0xb9) != 0)) &&
     (plVar8 = (longlong *)*plVar15, plVar8 != (longlong *)0x0)) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    if (*plVar15 != 0) {
      lVar9 = FMemory::Realloc(*plVar15,0,0);
      *plVar15 = lVar9;
    }
    *(undefined4 *)(param_1 + 0xb9) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_220);
  if (local_238[0] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xa0) = 1;
  puVar10 = (undefined8 *)FUN_1415d4630(local_158);
  local_380 = (longlong *)puVar10[1];
  local_388 = *puVar10;
  if (local_380 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_380 + 1) = (int)local_380[1] + 1;
    UNLOCK();
  }
  if (param_1 + 1 != &local_388) {
    param_1[1] = local_388;
    local_388 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 2,&local_380);
  }
  plVar15 = local_380;
  if (local_380 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_380 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_380)(local_380);
      LOCK();
      piVar3 = (int *)((longlong)plVar15 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_380 + 8))(local_380,1);
      }
    }
  }
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_150 + 1;
    lVar9 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar3 = (int *)((longlong)local_150 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  FText::operator=(param_1 + 0x84,param_3);
  *(undefined1 *)(param_1 + 0x87) = *(undefined1 *)(param_3 + 0x18);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x88,param_3 + 0x20);
  uVar6 = (**(code **)(*(longlong *)*param_1 + 8))();
  local_24f = 1;
  local_248 = 0;
  local_240 = 0;
  local_250 = uVar6;
  FSlateTextLayout::SetIsPassword(*puVar2,&local_250);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_248);
  uVar11 = FUN_1404b03b0();
  if (*(char *)(param_1 + 0x87) != '\0') {
    uVar11 = TAttribute<FText>::Get(param_1 + 0x84);
  }
  FUN_1419a1d70(param_1,uVar11,1);
  puVar10 = (undefined8 *)FTextSnapshot::FTextSnapshot(local_108,uVar11);
  plVar15 = (longlong *)0x0;
  if (puVar4 != puVar10) {
    *puVar4 = *puVar10;
    *puVar10 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x8b,puVar10 + 1);
  }
  *(undefined2 *)(param_1 + 0x8c) = *(undefined2 *)(puVar10 + 2);
  *(undefined2 *)((longlong)param_1 + 0x462) = *(undefined2 *)((longlong)puVar10 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x464) = *(undefined4 *)((longlong)puVar10 + 0x14);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_100 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar3 = (int *)((longlong)local_100 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x8d) = uVar6;
  if (param_5[1] != '\0') {
    FTextLayout::SetTextShapingMethod(param_1[9],*param_5);
  }
  if (param_6[1] != '\0') {
    FTextLayout::SetTextFlowDirection(param_1[9],*param_6);
  }
  plVar8 = (longlong *)operator_new(0x10);
  local_318 = plVar15;
  if (plVar8 != (longlong *)0x0) {
    plVar8[1] = (longlong)param_1;
    *plVar8 = (longlong)&PTR_FUN_144d75e30;
    local_318 = plVar8;
  }
  plVar8 = (longlong *)operator_new(0x18);
  plStack_310 = plVar15;
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    plVar8[2] = (longlong)local_318;
    plStack_310 = plVar8;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_318,local_318,local_318);
  local_328 = local_318;
  plStack_320 = plStack_310;
  if (plStack_310 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_310 + 1) = (int)plStack_310[1] + 1;
    UNLOCK();
  }
  if ((longlong **)(param_1 + 0xba) != &local_328) {
    param_1[0xba] = local_318;
    local_328 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xbb,&plStack_320);
  }
  plVar8 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_320 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_320)(plStack_320);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_320 + 8))(plStack_320,1);
      }
    }
  }
  plVar8 = plStack_310;
  if (plStack_310 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_310 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_310)(plStack_310);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0xbc) = 0;
  plVar12 = (longlong *)operator_new(0x68);
  plVar8 = plVar15;
  if (plVar12 != (longlong *)0x0) {
    plVar12[1] = (longlong)param_1;
    *plVar12 = (longlong)&PTR_FUN_144d75e68;
    plVar12[2] = 0;
    plVar12[3] = 0;
    FGeometry::FGeometry(plVar12 + 4);
    *(undefined1 *)(plVar12 + 0xb) = 0;
    *(undefined4 *)((longlong)plVar12 + 0x5c) = 0xffffffff;
    *(undefined4 *)(plVar12 + 0xc) = 0;
    plVar8 = plVar12;
  }
  plVar12 = (longlong *)operator_new(0x18);
  plStack_340 = plVar15;
  if (plVar12 != (longlong *)0x0) {
    *(undefined4 *)(plVar12 + 1) = 1;
    *plVar12 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    plVar12[2] = (longlong)plVar8;
    plStack_340 = plVar12;
  }
  local_348 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_348,plVar8,plVar8);
  local_308 = local_348;
  plStack_300 = plStack_340;
  if (plStack_340 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_340 + 1) = (int)plStack_340[1] + 1;
    UNLOCK();
  }
  if ((longlong **)(param_1 + 0xbd) != &local_308) {
    param_1[0xbd] = local_348;
    local_308 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xbe,&plStack_300);
  }
  plVar8 = plStack_300;
  if (plStack_300 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_300 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_300)(plStack_300);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_300 + 8))(plStack_300,1);
      }
    }
  }
  plVar8 = plStack_340;
  if (plStack_340 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_340 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_340)(plStack_340);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  puVar10 = (undefined8 *)
            SlateEditableTextTypes::FCursorLineHighlighter::Create(local_168,param_1 + 0xd0);
  local_370 = (longlong *)puVar10[1];
  local_378 = *puVar10;
  if (local_370 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_370 + 1) = (int)local_370[1] + 1;
    UNLOCK();
  }
  if (param_1 + 0xc1 != &local_378) {
    param_1[0xc1] = local_378;
    local_378 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xc2,&local_370);
  }
  plVar8 = local_370;
  if (local_370 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_370 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_370)(local_370);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_370 + 8))(local_370,1);
      }
    }
  }
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_160 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar3 = (int *)((longlong)local_160 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
  puVar10 = (undefined8 *)SlateEditableTextTypes::FTextCompositionHighlighter::Create(local_148);
  local_360 = (longlong *)puVar10[1];
  local_368 = *puVar10;
  if (local_360 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_360 + 1) = (int)local_360[1] + 1;
    UNLOCK();
  }
  if (param_1 + 0xc3 != &local_368) {
    param_1[0xc3] = local_368;
    local_368 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xc4,&local_360);
  }
  plVar8 = local_360;
  if (local_360 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_360 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_360)(local_360);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_360 + 8))(local_360,1);
      }
    }
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_140 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar3 = (int *)((longlong)local_140 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  puVar10 = (undefined8 *)FUN_1419b2020(local_138);
  local_3b0 = (longlong *)puVar10[1];
  local_3b8 = *puVar10;
  if (local_3b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3b0 + 1) = (int)local_3b0[1] + 1;
    UNLOCK();
  }
  if (param_1 + 0xc5 != &local_3b8) {
    param_1[0xc5] = local_3b8;
    local_3b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xc6,&local_3b0);
  }
  plVar8 = local_3b0;
  if (local_3b0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_3b0 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_3b0)(local_3b0);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_3b0 + 8))(local_3b0,1);
      }
    }
  }
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_130 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar3 = (int *)((longlong)local_130 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  puVar10 = (undefined8 *)FUN_1419b1fa0(local_128);
  local_350 = (longlong *)puVar10[1];
  local_358 = *puVar10;
  if (local_350 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_350 + 1) = (int)local_350[1] + 1;
    UNLOCK();
  }
  if (param_1 + 199 != &local_358) {
    param_1[199] = local_358;
    local_358 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 200);
  }
  plVar8 = local_350;
  if (local_350 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_350 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_350)(local_350);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_350 + 8))();
      }
    }
  }
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_120 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar3 = (int *)((longlong)local_120 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_120 + 8))(local_120);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xcb) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x65c) = DAT_1468b5d88._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x67c) = 0;
  if ((local_118 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
    *(undefined1 *)(param_1 + 0xcf) = 0;
  }
  *(undefined4 *)(param_1 + 0xd5) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x73c) = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x75c) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xec) = DAT_1468b5d88._4_4_;
  plVar12 = (longlong *)operator_new(0xe8);
  plVar8 = plVar15;
  if (plVar12 != (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop(plVar12,0,0xe8);
    plVar12[2] = 0;
    *plVar12 = (longlong)&PTR_FUN_144d66b18;
    plVar12[3] = 0;
    plVar12[4] = 0;
    plVar12[7] = 0;
    plVar12[8] = 0;
    *(undefined4 *)(plVar12 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)plVar12 + 0x4c) = 0;
    plVar12[0xb] = 0;
    *(undefined4 *)(plVar12 + 0xc) = 0;
    plVar12[0xd] = 0;
    plVar12[0xe] = 0;
    plVar12[0x11] = 0;
    plVar12[0x12] = 0;
    *(undefined4 *)(plVar12 + 0x13) = 0xffffffff;
    *(undefined4 *)((longlong)plVar12 + 0x9c) = 0;
    plVar12[0x15] = 0;
    *(undefined4 *)(plVar12 + 0x16) = 0;
    plVar12[0x17] = 0;
    plVar12[0x18] = 0;
    plVar12[0x19] = 0;
    plVar12[0x1a] = 0;
    plVar12[0x1b] = 0;
    *(undefined4 *)(plVar12 + 0x1c) = 0;
    plVar8 = plVar12;
  }
  plVar13 = (longlong *)operator_new(0x18);
  plVar12 = plVar15;
  if (plVar13 != (longlong *)0x0) {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_FUN_143f3f2e0;
    plVar13[2] = (longlong)plVar8;
    plVar12 = plVar13;
  }
  plVar13 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar13 = plVar15;
  }
  local_2f8 = plVar8;
  local_2f0 = plVar12;
  if (plVar13 != (longlong *)0x0) {
    if ((*plVar13 != 0) && (plVar13[1] != 0)) {
      piVar3 = (int *)(plVar13[1] + 8);
      LOCK();
      iVar7 = *piVar3;
      if (iVar7 == 0) {
        *piVar3 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) goto LAB_141961419;
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    *plVar13 = (longlong)plVar8;
    SharedPointerInternals::FWeakReferencer<1>::AssignReferenceController(plVar13 + 1,plVar12);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar12 + 1;
      lVar9 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar3 = (int *)((longlong)plVar12 + 0xc);
        iVar7 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
LAB_141961419:
  pplVar1 = (longlong **)(param_1 + 0xed);
  if (pplVar1 != &local_2f8) {
    *pplVar1 = plVar8;
    local_2f8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xee,&local_2f0);
  }
  plVar15 = local_2f0;
  if (local_2f0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2f0 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_2f0)(local_2f0);
      LOCK();
      piVar3 = (int *)((longlong)plVar15 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_2f0 + 8))(local_2f0,1);
      }
    }
  }
  lVar9 = FUN_141983a60();
  local_200 = *(undefined8 *)(lVar9 + 0x88);
  local_1f8 = *(longlong *)(lVar9 + 0x90);
  if (local_1f8 != 0) {
    LOCK();
    *(int *)(local_1f8 + 8) = *(int *)(local_1f8 + 8) + 1;
    UNLOCK();
  }
  plVar15 = *pplVar1;
  uVar11 = TBaseDelegate<bool>::CreateRaw<FSlateEditableTextLayout>
                     (local_60,param_1,FSlateEditableTextLayout::CanExecuteUndo);
  uVar14 = TBaseDelegate<TTypeWrapper<void>_>::CreateRaw<FSlateEditableTextLayout>
                     (local_f0,param_1,FSlateEditableTextLayout::Undo);
  FUN_1418a9d80(plVar15,&local_200,uVar14,uVar11,1);
  lVar9 = FUN_141983a60();
  local_1f0 = *(undefined8 *)(lVar9 + 0x48);
  local_1e8 = *(longlong *)(lVar9 + 0x50);
  if (local_1e8 != 0) {
    LOCK();
    *(int *)(local_1e8 + 8) = *(int *)(local_1e8 + 8) + 1;
    UNLOCK();
  }
  plVar15 = *pplVar1;
  uVar11 = TBaseDelegate<bool>::CreateRaw<FSlateEditableTextLayout>
                     (local_e0,param_1,FSlateEditableTextLayout::CanExecuteCut);
  uVar14 = TBaseDelegate<TTypeWrapper<void>_>::CreateRaw<FSlateEditableTextLayout>
                     (local_d0,param_1,FSlateEditableTextLayout::CutSelectedTextToClipboard);
  FUN_1418a9d80(plVar15,&local_1f0,uVar14,uVar11,0);
  lVar9 = FUN_141983a60();
  local_1e0 = *(undefined8 *)(lVar9 + 0x68);
  local_1d8 = *(longlong *)(lVar9 + 0x70);
  if (local_1d8 != 0) {
    LOCK();
    *(int *)(local_1d8 + 8) = *(int *)(local_1d8 + 8) + 1;
    UNLOCK();
  }
  plVar15 = *pplVar1;
  uVar11 = TBaseDelegate<bool>::CreateRaw<FSlateEditableTextLayout>
                     (local_c0,param_1,FSlateEditableTextLayout::CanExecutePaste);
  uVar14 = TBaseDelegate<TTypeWrapper<void>_>::CreateRaw<FSlateEditableTextLayout>
                     (local_b0,param_1,FSlateEditableTextLayout::PasteTextFromClipboard);
  FUN_1418a9d80(plVar15,&local_1e0,uVar14,uVar11,1);
  lVar9 = FUN_141983a60();
  local_1d0 = *(undefined8 *)(lVar9 + 0x58);
  local_1c8 = *(longlong *)(lVar9 + 0x60);
  if (local_1c8 != 0) {
    LOCK();
    *(int *)(local_1c8 + 8) = *(int *)(local_1c8 + 8) + 1;
    UNLOCK();
  }
  plVar15 = *pplVar1;
  uVar11 = TBaseDelegate<bool>::CreateRaw<FSlateEditableTextLayout>
                     (local_a0,param_1,FSlateEditableTextLayout::CanExecuteCopy);
  uVar14 = TBaseDelegate<TTypeWrapper<void>_>::CreateRaw<FSlateEditableTextLayout>
                     (local_50,param_1,FUN_141980560);
  FUN_1418a9d80(plVar15,&local_1d0,uVar14,uVar11,0);
  local_2c0 = 0;
  local_2b8 = 0;
  puVar10 = (undefined8 *)operator_new(0x20,&local_2c0);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = param_1;
    *puVar10 = &PTR_GetPoolName_144d75ef8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[3] = uVar11;
    *puVar10 = &PTR_GetPoolName_144d75f40;
  }
  lVar9 = FUN_141983a60();
  local_1c0 = *(undefined8 *)(lVar9 + 0xa8);
  local_1b8 = *(longlong *)(lVar9 + 0xb0);
  if (local_1b8 != 0) {
    LOCK();
    *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + 1;
    UNLOCK();
  }
  plVar15 = *pplVar1;
  uVar11 = TBaseDelegate<bool>::CreateRaw<FSlateEditableTextLayout>
                     (local_90,param_1,FSlateEditableTextLayout::CanExecuteDelete);
  FUN_1418a9d80(plVar15,&local_1c0,&local_2c0,uVar11,0);
  lVar9 = FUN_141983a60();
  local_1b0 = *(undefined8 *)(lVar9 + 200);
  local_1a8 = *(longlong *)(lVar9 + 0xd0);
  if (local_1a8 != 0) {
    LOCK();
    *(int *)(local_1a8 + 8) = *(int *)(local_1a8 + 8) + 1;
    UNLOCK();
  }
  plVar15 = *pplVar1;
  uVar11 = TBaseDelegate<bool>::CreateRaw<FSlateEditableTextLayout>
                     (local_80,param_1,FSlateEditableTextLayout::CanExecuteSelectAll);
  uVar14 = TBaseDelegate<TTypeWrapper<void>_>::CreateRaw<FSlateEditableTextLayout>
                     (local_70,param_1,FUN_14199fd20);
  FUN_1418a9d80(plVar15,&local_1b0,uVar14,uVar11,0);
  FUN_140691580(param_4);
  if (param_5[1] != '\0') {
    param_5[1] = 0;
  }
  if (param_6[1] != '\0') {
    param_6[1] = 0;
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_9);
  return param_1;
}



// FUNCTION 1419617b0 SBorder body=240 status=ok
// SIG undefined SBorder(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * SBorder::SBorder(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  FUN_1417f4470();
  *param_1 = &PTR_FUN_144d721a8;
  plVar2 = DAT_1469eb140;
  lVar1 = *DAT_1469eb140;
  puVar3 = (undefined8 *)FName::FName(local_res8,"Border",1);
  uVar4 = (**(code **)(lVar1 + 0x40))(plVar2,*puVar3,0);
  param_1[0x5e] = uVar4;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  uVar4 = _DAT_1464aa6c8;
  param_1[0x62] = _DAT_1464aa6c0;
  param_1[99] = uVar4;
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined1 *)(param_1 + 0x67) = 1;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x6b) = 1;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return param_1;
}



// FUNCTION 1419618a0 FUN_1419618a0 body=401 status=ok
// SIG undefined FUN_1419618a0(void)

undefined8 * FUN_1419618a0(undefined8 *param_1)

{
  FUN_1417f46d0();
  *param_1 = &PTR__scalar_deleting_destructor__144d723b8;
  param_1[0x42] = param_1;
  param_1[0x41] = &PTR__purecall_143f48980;
  FSlotBase::FSlotBase();
  param_1[0x44] = param_1;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x41] = &PTR_SetMonitoring_144d4edf8;
  param_1[0x43] = &PTR_LAB_144d4ee20;
  *(undefined4 *)(param_1 + 0x4d) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0x53) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf9;
  return param_1;
}



// FUNCTION 141961a40 FUN_141961a40 body=81 status=ok
// SIG undefined FUN_141961a40(void)

undefined8 * FUN_141961a40(undefined8 *param_1)

{
  FUN_1417f46d0();
  *param_1 = &PTR__scalar_deleting_destructor__144d755d8;
  param_1[0x42] = param_1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = &PTR_Count_144d755b0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf9;
  return param_1;
}



// FUNCTION 141961aa0 FUN_141961aa0 body=81 status=ok
// SIG undefined FUN_141961aa0(void)

undefined8 * FUN_141961aa0(undefined8 *param_1)

{
  FUN_1417f46d0();
  *param_1 = &PTR__scalar_deleting_destructor__144d73568;
  param_1[0x42] = param_1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = &PTR_Count_144d73540;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf9;
  return param_1;
}



// FUNCTION 141961b00 FUN_141961b00 body=79 status=ok
// SIG undefined FUN_141961b00(void)

undefined8 * FUN_141961b00(undefined8 *param_1)

{
  FUN_1417f46d0();
  *param_1 = &PTR__scalar_deleting_destructor__144d73770;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  FSimpleSlot::FSimpleSlot(param_1 + 0x44,param_1);
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf9;
  return param_1;
}



// FUNCTION 141961b50 SGridPanel body=132 status=ok
// SIG undefined SGridPanel(void)

undefined8 * SGridPanel::SGridPanel(undefined8 *param_1)

{
  FUN_1417f46d0();
  *param_1 = &PTR__scalar_deleting_destructor__144d739a8;
  param_1[0x42] = param_1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = &PTR_Count_144d73980;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  return param_1;
}



// FUNCTION 141961be0 FUN_141961be0 body=402 status=ok
// SIG undefined FUN_141961be0(void)

undefined8 * FUN_141961be0(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  
  FUN_1417f4470();
  *(undefined1 *)(param_1 + 0x5f) = 0;
  lVar5 = 0;
  param_1[0x5e] = &PTR__scalar_deleting_destructor__143f73ca8;
  if (DAT_1468c217e == '\0') {
    if (DAT_1469e6880 == 0) {
      uVar3 = GetTransientPackage();
      FUN_1417846f0(uVar3,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar4 = UGCObjectReferencer::GetPrivateStaticClass();
      DAT_1469e6880 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
      iVar1 = *(int *)(DAT_1469e6880 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar6;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
      }
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x40000000;
    }
    UGCObjectReferencer::AddObject(DAT_1469e6880,param_1 + 0x5e);
    *(undefined1 *)(param_1 + 0x5f) = 1;
  }
  *param_1 = &PTR_FUN_144d757e0;
  param_1[0x5e] = &PTR_LAB_144d759e8;
  param_1[0x60] = &PTR_LAB_144d75a00;
  FGeometry::FGeometry(param_1 + 0x61);
  FSimpleSlot::FSimpleSlot(param_1 + 0x68,param_1);
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  return param_1;
}



// FUNCTION 141961d80 FUN_141961d80 body=522 status=ok
// SIG undefined FUN_141961d80(void)

undefined8 * FUN_141961d80(undefined8 *param_1)

{
  SBorder::SBorder();
  *param_1 = &PTR__scalar_deleting_destructor__144d75c20;
  param_1[0x71] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  FUN_1417efd90(param_1 + 0x82);
  *(undefined1 *)(param_1 + 0x8c) = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x8f] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x91) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  param_1[0x97] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0x9f] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined2 *)(param_1 + 0xa7) = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  return param_1;
}



// FUNCTION 141961f90 SNotificationItemImpl body=374 status=ok
// SIG undefined SNotificationItemImpl(void)

undefined8 * SNotificationItemImpl::SNotificationItemImpl(undefined8 *param_1)

{
  FUN_1417f4470();
  *param_1 = &PTR__scalar_deleting_destructor__144d74c80;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  FText::FText(param_1 + 0x60);
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined1 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34c) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  FCurveSequence::FCurveSequence(param_1 + 0x72);
  FCurveHandle::FCurveHandle(param_1 + 0x7d,0,0);
  FCurveSequence::FCurveSequence(param_1 + 0x7f);
  FCurveHandle::FCurveHandle(param_1 + 0x8a,0,0);
  FCurveHandle::FCurveHandle(param_1 + 0x8c,0,0);
  FCurveHandle::FCurveHandle(param_1 + 0x8e,0,0);
  FCurveSequence::FCurveSequence(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x9b) = 0xffffffff;
  *param_1 = &PTR__scalar_deleting_destructor__144d74f10;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  FText::FText(param_1 + 0xa0);
  *(undefined1 *)(param_1 + 0xa3) = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  return param_1;
}



// FUNCTION 141962110 SScrollBar body=124 status=ok
// SIG undefined SScrollBar(void)

undefined8 * SScrollBar::SScrollBar(undefined8 *param_1)

{
  SBorder::SBorder();
  *param_1 = &PTR__scalar_deleting_destructor__144d725c0;
  *(undefined2 *)(param_1 + 0x71) = 0x19;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  return param_1;
}



// FUNCTION 141962190 FUN_141962190 body=181 status=ok
// SIG undefined FUN_141962190(void)

undefined8 * FUN_141962190(undefined8 *param_1)

{
  FUN_1417f4470();
  *param_1 = &PTR_FUN_144d741f8;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  FInertialScrollManager::FInertialScrollManager(param_1 + 0x66,0x3fb99999a0000000);
  FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate(param_1 + 0x6a);
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  FGeometry::FGeometry((longlong)param_1 + 0x394);
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x7a] = AK::MemoryMgr::StartProfileThreadUsage;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x10;
  return param_1;
}



// FUNCTION 141962250 SSplitter body=131 status=ok
// SIG undefined SSplitter(void)

undefined8 * SSplitter::SSplitter(undefined8 *param_1)

{
  FUN_1417f46d0();
  *param_1 = &PTR__scalar_deleting_destructor__144d72810;
  param_1[0x42] = param_1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = &PTR_Count_144d727e8;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4e] = 0;
  return param_1;
}



// FUNCTION 1419622e0 SUniformGridPanel body=159 status=ok
// SIG undefined SUniformGridPanel(void)

undefined8 * SUniformGridPanel::SUniformGridPanel(undefined8 *param_1)

{
  FUN_1417f46d0();
  *param_1 = &PTR__scalar_deleting_destructor__144d74638;
  param_1[0x42] = param_1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = &PTR_Count_144d73fc0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  return param_1;
}



// FUNCTION 141962380 SViewport body=137 status=ok
// SIG undefined SViewport(void)

undefined8 * SViewport::SViewport(undefined8 *param_1)

{
  FUN_1417f4470();
  *param_1 = &PTR_FUN_144d73bb0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined2 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined1 *)((longlong)param_1 + 0x35a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x35c) = 0;
  *(undefined2 *)(param_1 + 0x6b) = 0x100;
  return param_1;
}



// FUNCTION 141962410 SWeakWidget body=70 status=ok
// SIG undefined SWeakWidget(void)

undefined8 * SWeakWidget::SWeakWidget(undefined8 *param_1)

{
  FUN_1417f46d0();
  *param_1 = &PTR_FUN_144d75a18;
  param_1[0x41] = &PTR_LAB_144d73310;
  param_1[0x42] = param_1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  return param_1;
}



// FUNCTION 141962460 FUN_141962460 body=126 status=ok
// SIG undefined FUN_141962460(void)

undefined8 * FUN_141962460(undefined8 *param_1)

{
  FUN_1417f46d0();
  *param_1 = &PTR__scalar_deleting_destructor__144d72ef0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x45] = param_1;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = &PTR_Count_144d72ea0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x4b] = param_1 + 0x44;
  param_1[0x49] = &PTR_FUN_144d72ec8;
  param_1[0x4a] = param_1;
  param_1[0x4c] = param_1 + 0x41;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfd;
  return param_1;
}



// FUNCTION 1419624e0 FUN_1419624e0 body=11388 status=ok
// SIG undefined FUN_1419624e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1419624e0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 *puVar15;
  ulonglong uVar16;
  longlong local_2158;
  undefined8 local_2150;
  longlong local_2148;
  undefined8 local_2140;
  longlong local_2138;
  undefined8 local_2130;
  longlong local_2128;
  undefined8 local_2120;
  longlong local_2118;
  undefined8 local_2110;
  longlong local_2108;
  int local_2100;
  int local_20fc;
  longlong local_20f8;
  int local_20f0;
  int local_20ec;
  longlong local_20e8;
  undefined8 local_20e0;
  longlong local_20d8;
  undefined8 local_20d0;
  longlong local_20c8;
  int local_20c0;
  int local_20bc;
  longlong local_20b8;
  undefined8 local_20b0;
  longlong local_20a8;
  int local_20a0;
  int local_209c;
  longlong local_2098;
  undefined8 local_2090;
  longlong local_2088;
  int local_2080;
  int local_207c;
  longlong local_2078;
  int local_2070;
  int local_206c;
  longlong local_2068;
  int local_2060;
  int local_205c;
  longlong local_2058;
  int local_2050;
  int local_204c;
  longlong local_2048;
  int local_2040;
  int local_203c;
  longlong local_2038;
  undefined8 local_2030;
  longlong local_2028;
  undefined8 local_2020;
  longlong local_2018;
  int local_2010;
  int local_200c;
  longlong local_2008;
  int local_2000;
  int local_1ffc;
  longlong local_1ff8;
  int local_1ff0;
  int local_1fec;
  longlong local_1fe8;
  undefined8 local_1fe0;
  longlong local_1fd8;
  undefined8 local_1fd0;
  longlong local_1fc8;
  int local_1fc0;
  int local_1fbc;
  longlong local_1fb8;
  int local_1fb0;
  int local_1fac;
  longlong local_1fa8;
  int local_1fa0;
  int local_1f9c;
  longlong local_1f98;
  undefined8 local_1f90;
  longlong local_1f88;
  int local_1f80;
  int local_1f7c;
  longlong local_1f78;
  undefined8 local_1f70;
  longlong local_1f68;
  undefined8 local_1f60;
  longlong local_1f58;
  undefined8 local_1f50;
  longlong local_1f48;
  int local_1f40;
  int local_1f3c;
  longlong local_1f38;
  int local_1f30;
  int local_1f2c;
  longlong local_1f28;
  int local_1f20;
  int local_1f1c;
  longlong local_1f18;
  undefined8 local_1f10;
  longlong local_1f08;
  undefined8 local_1f00;
  longlong local_1ef8;
  undefined8 local_1ef0;
  longlong local_1ee8;
  undefined8 local_1ee0;
  longlong local_1ed8;
  undefined8 local_1ed0;
  longlong local_1ec8;
  undefined8 local_1ec0;
  longlong local_1eb8;
  undefined8 local_1eb0;
  longlong local_1ea8;
  undefined8 local_1ea0;
  longlong local_1e98;
  undefined8 local_1e90;
  undefined4 local_1e88;
  undefined4 local_1e84;
  undefined4 local_1e80;
  undefined4 local_1e7c;
  undefined4 local_1e78;
  undefined4 local_1e74;
  undefined4 local_1e70;
  undefined4 local_1e6c;
  undefined4 local_1e68;
  undefined4 local_1e64;
  undefined4 local_1e60;
  undefined4 local_1e5c;
  undefined4 local_1e58;
  undefined4 local_1e54;
  undefined4 local_1e50;
  undefined4 local_1e4c;
  undefined4 local_1e48;
  undefined4 local_1e44;
  undefined4 local_1e40;
  undefined4 local_1e3c;
  undefined4 local_1e38;
  undefined4 local_1e34;
  undefined4 local_1e30;
  undefined4 local_1e2c;
  undefined4 local_1e28;
  undefined4 local_1e24;
  undefined4 local_1e20;
  undefined4 local_1e1c;
  longlong local_1e18;
  undefined8 local_1e10;
  longlong local_1e08;
  int local_1e00;
  longlong local_1df8;
  int local_1df0;
  longlong local_1de8;
  int local_1de0;
  longlong local_1dd8;
  int local_1dd0;
  longlong local_1dc8;
  int local_1dc0;
  longlong local_1db8;
  int local_1db0;
  longlong local_1da8;
  int local_1da0;
  longlong local_1d98;
  int local_1d90;
  longlong local_1d88;
  int local_1d80;
  longlong local_1d78;
  int local_1d70;
  longlong local_1d68;
  int local_1d60;
  longlong local_1d58;
  int local_1d50;
  longlong local_1d48;
  int local_1d40;
  longlong local_1d38;
  int local_1d30;
  longlong local_1d28;
  int local_1d20;
  longlong local_1d18;
  int local_1d10;
  longlong local_1d08;
  int local_1d00;
  longlong local_1cf8;
  int local_1cf0;
  longlong local_1ce8;
  int local_1ce0;
  longlong local_1cd8;
  int local_1cd0;
  longlong local_1cc8;
  int local_1cc0;
  longlong local_1cb8;
  int local_1cb0;
  longlong local_1ca8;
  int local_1ca0;
  longlong local_1c98;
  int local_1c90;
  longlong local_1c88;
  int local_1c80;
  longlong local_1c78;
  int local_1c70;
  longlong local_1c68;
  int local_1c60;
  int local_1c5c;
  longlong local_1c58;
  int local_1c50;
  int local_1c4c;
  longlong local_1c48;
  int local_1c40;
  int local_1c3c;
  longlong local_1c38;
  int local_1c30;
  longlong local_1c28;
  int local_1c20;
  longlong local_1c18;
  int local_1c10;
  longlong local_1c08;
  int local_1c00;
  int local_1bfc;
  longlong local_1bf8;
  int local_1bf0;
  longlong local_1be8;
  int local_1be0;
  longlong local_1bd8;
  int local_1bd0;
  longlong local_1bc8;
  int local_1bc0;
  longlong local_1bb8;
  int local_1bb0;
  longlong local_1ba8;
  int local_1ba0;
  longlong local_1b98;
  int local_1b90;
  longlong local_1b88;
  int local_1b80;
  longlong local_1b78;
  int local_1b70;
  longlong local_1b68;
  int local_1b60;
  longlong local_1b58;
  int local_1b50;
  undefined4 local_1b48;
  undefined4 uStack_1b44;
  undefined4 uStack_1b40;
  undefined4 uStack_1b3c;
  undefined4 local_1b38;
  undefined4 uStack_1b34;
  undefined4 uStack_1b30;
  undefined4 uStack_1b2c;
  undefined4 local_1b28;
  undefined4 uStack_1b24;
  undefined4 uStack_1b20;
  undefined4 uStack_1b1c;
  undefined4 local_1b18;
  undefined4 uStack_1b14;
  undefined4 uStack_1b10;
  undefined4 uStack_1b0c;
  undefined4 local_1b08;
  undefined4 uStack_1b04;
  undefined4 uStack_1b00;
  undefined4 uStack_1afc;
  undefined4 local_1af8;
  undefined4 uStack_1af4;
  undefined4 uStack_1af0;
  undefined4 uStack_1aec;
  longlong local_1ae8 [2];
  longlong local_1ad8 [2];
  longlong local_1ac8 [2];
  undefined4 local_1ab8;
  undefined4 uStack_1ab4;
  undefined4 uStack_1ab0;
  undefined4 uStack_1aac;
  undefined4 local_1aa8;
  undefined4 uStack_1aa4;
  undefined4 uStack_1aa0;
  undefined4 uStack_1a9c;
  undefined4 local_1a98;
  undefined4 uStack_1a94;
  undefined4 uStack_1a90;
  undefined4 uStack_1a8c;
  undefined4 local_1a88;
  undefined4 uStack_1a84;
  undefined4 uStack_1a80;
  undefined4 uStack_1a7c;
  longlong local_1a78 [2];
  longlong local_1a68 [2];
  longlong local_1a58 [2];
  longlong local_1a48 [2];
  undefined4 local_1a38;
  undefined4 uStack_1a34;
  undefined4 uStack_1a30;
  undefined4 uStack_1a2c;
  undefined4 local_1a28;
  undefined4 uStack_1a24;
  undefined4 uStack_1a20;
  undefined4 uStack_1a1c;
  undefined4 local_1a18;
  undefined4 uStack_1a14;
  undefined4 uStack_1a10;
  undefined4 uStack_1a0c;
  undefined4 local_1a08;
  undefined4 uStack_1a04;
  undefined4 uStack_1a00;
  undefined4 uStack_19fc;
  longlong local_19f8 [2];
  longlong local_19e8 [2];
  longlong local_19d8 [2];
  longlong local_19c8 [2];
  undefined4 local_19b8;
  undefined4 uStack_19b4;
  undefined4 uStack_19b0;
  undefined4 uStack_19ac;
  undefined4 local_19a8;
  undefined4 uStack_19a4;
  undefined4 uStack_19a0;
  undefined4 uStack_199c;
  undefined4 local_1998;
  undefined4 uStack_1994;
  undefined4 uStack_1990;
  undefined4 uStack_198c;
  undefined4 local_1988;
  undefined4 uStack_1984;
  undefined4 uStack_1980;
  undefined4 uStack_197c;
  longlong local_1978 [2];
  longlong local_1968 [2];
  longlong local_1958 [2];
  longlong local_1948 [2];
  undefined4 local_1938;
  undefined4 uStack_1934;
  undefined4 uStack_1930;
  undefined4 uStack_192c;
  undefined4 local_1928;
  undefined4 uStack_1924;
  undefined4 uStack_1920;
  undefined4 uStack_191c;
  undefined4 local_1918;
  undefined4 uStack_1914;
  undefined4 uStack_1910;
  undefined4 uStack_190c;
  longlong local_1908 [2];
  longlong local_18f8 [2];
  longlong local_18e8 [2];
  undefined **local_18d8 [8];
  longlong *local_1898;
  longlong *local_1860;
  undefined **local_1850 [8];
  longlong *local_1810;
  longlong *local_17d8;
  undefined **local_17c8 [8];
  longlong *local_1788;
  longlong *local_1750;
  undefined1 local_1740 [136];
  undefined1 local_16b8 [136];
  undefined1 local_1630 [136];
  undefined1 local_15a8 [136];
  undefined1 local_1520 [136];
  undefined1 local_1498 [136];
  undefined1 local_1410 [136];
  undefined1 local_1388 [136];
  undefined1 local_1300 [136];
  undefined1 local_1278 [136];
  undefined1 local_11f0 [136];
  undefined1 local_1168 [136];
  undefined1 local_10e0 [136];
  undefined1 local_1058 [136];
  undefined1 local_fd0 [136];
  undefined **local_f48;
  undefined1 local_f40 [136];
  undefined1 local_eb8 [136];
  undefined1 local_e30 [136];
  undefined1 local_da8 [216];
  undefined **local_cd0;
  undefined1 local_cc8 [136];
  undefined1 local_c40 [136];
  undefined1 local_bb8 [136];
  undefined1 local_b30 [216];
  undefined1 local_a58 [640];
  undefined1 local_7d8 [632];
  undefined1 local_560 [632];
  undefined1 local_2e8 [680];
  
  FUN_1417f46d0();
  *param_1 = &PTR__scalar_deleting_destructor__144d74840;
  param_1[0x42] = param_1;
  param_1[0x41] = &PTR__purecall_143f48980;
  FSlotBase::FSlotBase(param_1 + 0x43);
  param_1[0x44] = param_1;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  iVar9 = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x41] = &PTR_SetMonitoring_144d4edf8;
  param_1[0x43] = &PTR_LAB_144d4ee20;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x51) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x28a) = 1;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf9;
  if (DAT_1469f55c0 == '\0') {
    local_1af8 = 0x3e800000;
    uStack_1af4 = 0x3e800000;
    uStack_1af0 = 0x3e800000;
    uStack_1aec = 0x3e800000;
    local_1f58 = 0;
    local_1f50 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f58,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_1f58,0x16,"Common/Button_Pressed",0x16,0x3f)
    ;
    local_1f68 = 0;
    local_1b18 = 0x3e800000;
    uStack_1b14 = 0x3e800000;
    uStack_1b10 = 0x3e800000;
    uStack_1b0c = 0x3e800000;
    local_1f60 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f68,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_1f68,0x16,"Common/Button_Hovered",0x16,0x3f)
    ;
    local_1f78 = 0;
    local_1b38 = 0x3e800000;
    uStack_1b34 = 0x3e800000;
    uStack_1b30 = 0x3e800000;
    uStack_1b2c = 0x3e800000;
    local_1f70 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f78,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_1f78,0xe,"Common/Button",0xe,0x3f);
    local_1b08 = 0x3f800000;
    uStack_1b04 = 0x3f800000;
    uStack_1b00 = 0x3f800000;
    uStack_1afc = 0x3f800000;
    local_res18 = 0x42000000;
    local_res1c = 0x42000000;
    plVar2 = (longlong *)FPaths::EngineContentDir(local_1ac8);
    lVar5 = plVar2[1];
    local_2148 = *plVar2;
    *plVar2 = 0;
    local_2140._0_4_ = (int)plVar2[1];
    local_2140._4_4_ = *(int *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
    if (local_2140._4_4_ < (int)((7 - (uint)((int)lVar5 != 0)) + (int)local_2140)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2148);
    }
    FString::PathAppend(&local_2148,L"Slate",5);
    iVar10 = local_2140._4_4_;
    iVar8 = iVar9;
    if ((int)local_1f50 != 0) {
      iVar8 = (int)local_1f50 + -1;
    }
    iVar13 = 2;
    iVar12 = 2;
    if (((int)local_2140 != 0) || (iVar6 = 2, iVar8 == -1)) {
      iVar6 = 1;
    }
    local_20b8 = local_2148;
    iVar6 = iVar6 + iVar8 + (int)local_2140;
    local_2148 = 0;
    local_20b0._0_4_ = (int)local_2140;
    local_20b0._4_4_ = local_2140._4_4_;
    local_2140 = 0;
    if (iVar10 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_20b8);
    }
    FString::PathAppend(&local_20b8,local_1f58,iVar8);
    iVar8 = local_20b0._4_4_;
    iVar10 = (int)local_20b0;
    bVar14 = (int)local_20b0 != 0;
    local_20c8 = local_20b8;
    local_20b8 = 0;
    local_20c0 = (int)local_20b0;
    local_20bc = local_20b0._4_4_;
    local_20b0 = 0;
    if (iVar8 < (int)((5 - (uint)bVar14) + iVar10)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_20c8);
      iVar10 = local_20c0;
    }
    local_20c0 = (5 - (uint)(iVar10 != 0)) + iVar10;
    if (local_20bc < local_20c0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_20c8,iVar10);
    }
    lVar5 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
    local_1c48 = local_20c8;
    *(undefined8 *)(local_20c8 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_20c8 + 8 + lVar5 * 2) = 0;
    local_1b28 = 0x3f800000;
    uStack_1b24 = 0x3f800000;
    uStack_1b20 = 0x3f800000;
    uStack_1b1c = 0x3f800000;
    local_res10 = 0x42000000;
    local_res14 = 0x42000000;
    local_1c40 = local_20c0;
    local_1c3c = local_20bc;
    plVar2 = (longlong *)FPaths::EngineContentDir(local_1ad8);
    lVar5 = plVar2[1];
    local_2118 = *plVar2;
    *plVar2 = 0;
    local_2110._0_4_ = (int)plVar2[1];
    local_2110._4_4_ = *(int *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
    if (local_2110._4_4_ < (int)((7 - (uint)((int)lVar5 != 0)) + (int)local_2110)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2118);
    }
    FString::PathAppend(&local_2118,L"Slate",5);
    iVar10 = local_2110._4_4_;
    iVar8 = iVar9;
    if ((int)local_1f60 != 0) {
      iVar8 = (int)local_1f60 + -1;
    }
    if (((int)local_2110 != 0) || (iVar6 = 1, iVar8 + 1 == 0)) {
      iVar6 = 0;
    }
    iVar7 = iVar8 + 1 + (int)local_2110;
    local_20d8 = local_2118;
    local_2118 = 0;
    local_20d0._0_4_ = (int)local_2110;
    local_20d0._4_4_ = local_2110._4_4_;
    local_2110 = 0;
    if (iVar10 < iVar7 + iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_20d8);
    }
    FString::PathAppend(&local_20d8,local_1f68,iVar8);
    iVar8 = local_20d0._4_4_;
    iVar10 = (int)local_20d0;
    bVar14 = (int)local_20d0 != 0;
    local_20f8 = local_20d8;
    local_20d8 = 0;
    local_20f0 = (int)local_20d0;
    local_20ec = local_20d0._4_4_;
    local_20d0 = 0;
    if (iVar8 < (int)((5 - (uint)bVar14) + iVar10)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_20f8);
      iVar10 = local_20f0;
    }
    local_20f0 = (5 - (uint)(iVar10 != 0)) + iVar10;
    if (local_20ec < local_20f0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_20f8,iVar10);
    }
    lVar5 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
    local_1c58 = local_20f8;
    *(undefined8 *)(local_20f8 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_20f8 + 8 + lVar5 * 2) = 0;
    local_1b48 = 0x3f800000;
    uStack_1b44 = 0x3f800000;
    uStack_1b40 = 0x3f800000;
    uStack_1b3c = 0x3f800000;
    local_res8 = 0x42000000;
    local_resc = 0x42000000;
    local_1c50 = local_20f0;
    local_1c4c = local_20ec;
    plVar2 = (longlong *)FPaths::EngineContentDir(local_1ae8);
    lVar5 = plVar2[1];
    local_2158 = *plVar2;
    *plVar2 = 0;
    local_2150._0_4_ = (int)plVar2[1];
    local_2150._4_4_ = *(int *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
    if (local_2150._4_4_ < (int)((7 - (uint)((int)lVar5 != 0)) + (int)local_2150)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2158);
    }
    FString::PathAppend(&local_2158,L"Slate",5);
    iVar10 = local_2150._4_4_;
    iVar8 = iVar9;
    if ((int)local_1f70 != 0) {
      iVar8 = (int)local_1f70 + -1;
    }
    if (((int)local_2150 != 0) || (iVar6 = 2, iVar8 == -1)) {
      iVar6 = 1;
    }
    local_20e8 = local_2158;
    iVar6 = iVar6 + iVar8 + (int)local_2150;
    local_2158 = 0;
    local_20e0._0_4_ = (int)local_2150;
    local_20e0._4_4_ = local_2150._4_4_;
    local_2150 = 0;
    if (iVar10 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_20e8);
    }
    FString::PathAppend(&local_20e8,local_1f78,iVar8);
    iVar8 = local_20e0._4_4_;
    iVar10 = (int)local_20e0;
    bVar14 = (int)local_20e0 != 0;
    local_2108 = local_20e8;
    local_20e8 = 0;
    local_2100 = (int)local_20e0;
    local_20fc = local_20e0._4_4_;
    local_20e0 = 0;
    if (iVar8 < (int)((5 - (uint)bVar14) + iVar10)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2108);
      iVar10 = local_2100;
    }
    local_2100 = (5 - (uint)(iVar10 != 0)) + iVar10;
    if (local_20fc < local_2100) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2108,iVar10);
    }
    lVar5 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
    local_1c68 = local_2108;
    *(undefined8 *)(local_2108 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_2108 + 8 + lVar5 * 2) = 0;
    local_1c60 = local_2100;
    local_1c5c = local_20fc;
    uVar3 = FSlateBoxBrush::FSlateBoxBrush
                      (local_18d8,&local_1c68,&local_res8,&local_1b38,&local_1b48,1);
    lVar5 = FUN_1417e8800(&local_f48);
    FUN_1406922e0(lVar5 + 8,uVar3);
    uVar3 = FSlateBoxBrush::FSlateBoxBrush
                      (local_1850,&local_1c58,&local_res10,&local_1b18,&local_1b28,1);
    FUN_1406922e0(lVar5 + 0x90,uVar3);
    puVar15 = &local_1b08;
    uVar3 = FSlateBoxBrush::FSlateBoxBrush
                      (local_17c8,&local_1c48,&local_res18,&local_1af8,puVar15,1);
    FUN_1406922e0(lVar5 + 0x118,uVar3);
    *(undefined8 *)(lVar5 + 0x228) = 0x4000000040000000;
    *(undefined8 *)(lVar5 + 0x230) = 0x4000000040000000;
    *(undefined8 *)(lVar5 + 0x238) = 0x4040000040000000;
    *(undefined8 *)(lVar5 + 0x240) = 0x3f80000040000000;
    FButtonStyle::FButtonStyle(local_a58,lVar5);
    local_f48 = &PTR__scalar_deleting_destructor__144042bb0;
    FSlateBrush::~FSlateBrush(local_da8);
    FSlateBrush::~FSlateBrush(local_e30);
    FSlateBrush::~FSlateBrush(local_eb8);
    FSlateBrush::~FSlateBrush(local_f40);
    local_f48 = &PTR_FUN_144042b80;
    local_18d8[0] = &PTR__scalar_deleting_destructor__143f489a8;
    if (local_1860 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1860 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1860)(local_1860);
        LOCK();
        piVar1 = (int *)((longlong)local_1860 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_1860 + 8))(local_1860,1);
        }
      }
    }
    if (local_1898 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1898 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1898)(local_1898);
        LOCK();
        piVar1 = (int *)((longlong)local_1898 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_1898 + 8))(local_1898,1);
        }
      }
    }
    if (local_2108 != 0) {
      FMemory::Free(local_2108);
    }
    if (local_20e8 != 0) {
      FMemory::Free();
    }
    if (local_2158 != 0) {
      FMemory::Free();
    }
    if (local_1ae8[0] != 0) {
      FMemory::Free();
    }
    local_1850[0] = &PTR__scalar_deleting_destructor__143f489a8;
    if (local_17d8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_17d8 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_17d8)(local_17d8);
        LOCK();
        piVar1 = (int *)((longlong)local_17d8 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_17d8 + 8))(local_17d8,1);
        }
      }
    }
    if (local_1810 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1810 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1810)(local_1810);
        LOCK();
        piVar1 = (int *)((longlong)local_1810 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_1810 + 8))(local_1810,1);
        }
      }
    }
    if (local_20f8 != 0) {
      FMemory::Free(local_20f8);
    }
    if (local_20d8 != 0) {
      FMemory::Free();
    }
    if (local_2118 != 0) {
      FMemory::Free();
    }
    if (local_1ad8[0] != 0) {
      FMemory::Free();
    }
    local_17c8[0] = &PTR__scalar_deleting_destructor__143f489a8;
    if (local_1750 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1750 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1750)(local_1750);
        LOCK();
        piVar1 = (int *)((longlong)local_1750 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_1750 + 8))(local_1750,1);
        }
      }
    }
    if (local_1788 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1788 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1788)(local_1788);
        LOCK();
        piVar1 = (int *)((longlong)local_1788 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_1788 + 8))(local_1788,1);
        }
      }
    }
    if (local_20c8 != 0) {
      FMemory::Free(local_20c8);
    }
    if (local_20b8 != 0) {
      FMemory::Free();
    }
    if (local_2148 != 0) {
      FMemory::Free();
    }
    if (local_1ac8[0] != 0) {
      FMemory::Free();
    }
    if (local_1f78 != 0) {
      FMemory::Free();
    }
    if (local_1f68 != 0) {
      FMemory::Free();
    }
    if (local_1f58 != 0) {
      FMemory::Free();
    }
    local_1ee8 = 0;
    local_1ee0 = 0x2d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1ee8,0);
    lVar4 = local_1ee8;
    uVar3 = CONCAT62((int6)((ulonglong)puVar15 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1ee8,0x2d,"Common/Window/WindowButton_Minimize_Disabled",0x2d,uVar3);
    local_1ef8 = 0;
    local_1ef0 = 0x2c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1ef8,0);
    lVar11 = local_1ef8;
    uVar3 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1ef8,0x2c,"Common/Window/WindowButton_Minimize_Pressed",0x2c,uVar3);
    local_1f08 = 0;
    local_1f00 = 0x2c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f08,0);
    uVar3 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1f08,0x2c,"Common/Window/WindowButton_Minimize_Hovered",0x2c,uVar3);
    local_1f18 = 0;
    local_1f10 = 0x2b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f18,0);
    uVar16 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1f18,0x2b,"Common/Window/WindowButton_Minimize_Normal",0x2b,uVar16);
    local_1a88 = 0x3f800000;
    uStack_1a84 = 0x3f800000;
    uStack_1a80 = 0x3f800000;
    uStack_1a7c = 0x3f800000;
    local_1e80 = 0x41d80000;
    local_1e7c = 0x41900000;
    plVar2 = (longlong *)FPaths::EngineContentDir(local_1a48);
    lVar5 = plVar2[1];
    local_2128 = *plVar2;
    *plVar2 = 0;
    local_2120._0_4_ = (int)plVar2[1];
    local_2120._4_4_ = *(int *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
    if (local_2120._4_4_ < (int)((7 - (uint)((int)lVar5 != 0)) + (int)local_2120)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2128);
    }
    FString::PathAppend(&local_2128,L"Slate",5);
    iVar10 = local_2120._4_4_;
    iVar8 = iVar9;
    if ((int)local_1ee0 != 0) {
      iVar8 = (int)local_1ee0 + -1;
    }
    if (((int)local_2120 != 0) || (iVar6 = 2, iVar8 == -1)) {
      iVar6 = 1;
    }
    local_2098 = local_2128;
    iVar6 = iVar6 + iVar8 + (int)local_2120;
    local_2128 = 0;
    local_2090._0_4_ = (int)local_2120;
    local_2090._4_4_ = local_2120._4_4_;
    local_2120 = 0;
    if (iVar10 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2098);
    }
    FString::PathAppend(&local_2098,lVar4,iVar8);
    iVar8 = local_2090._4_4_;
    iVar10 = (int)local_2090;
    bVar14 = (int)local_2090 != 0;
    local_20a8 = local_2098;
    local_2098 = 0;
    local_20a0 = (int)local_2090;
    local_209c = local_2090._4_4_;
    local_2090 = 0;
    if (iVar8 < (int)((5 - (uint)bVar14) + iVar10)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_20a8);
      iVar10 = local_20a0;
    }
    local_20a0 = (5 - (uint)(iVar10 != 0)) + iVar10;
    if (local_209c < local_20a0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_20a8,iVar10);
    }
    lVar4 = local_20a8;
    lVar5 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
    *(undefined8 *)(local_20a8 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_20a8 + 8 + lVar5 * 2) = 0;
    local_1a98 = 0x3f800000;
    uStack_1a94 = 0x3f800000;
    uStack_1a90 = 0x3f800000;
    uStack_1a8c = 0x3f800000;
    local_1e88 = 0x41d80000;
    local_1e84 = 0x41900000;
    local_1c08 = local_20a8;
    local_1c00 = local_20a0;
    local_1bfc = local_209c;
    plVar2 = (longlong *)FPaths::EngineContentDir(local_1a58);
    lVar5 = plVar2[1];
    local_2138 = *plVar2;
    *plVar2 = 0;
    local_2130._0_4_ = (int)plVar2[1];
    local_2130._4_4_ = *(int *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
    if (local_2130._4_4_ < (int)((7 - (uint)((int)lVar5 != 0)) + (int)local_2130)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2138);
    }
    FString::PathAppend(&local_2138,L"Slate",5);
    iVar10 = local_2130._4_4_;
    if ((int)local_1ef0 != 0) {
      iVar9 = (int)local_1ef0 + -1;
    }
    if (((int)local_2130 != 0) || (iVar8 = 2, iVar9 == -1)) {
      iVar8 = 1;
    }
    local_1f28 = local_2138;
    iVar8 = iVar8 + iVar9 + (int)local_2130;
    local_2138 = 0;
    local_1f20 = (int)local_2130;
    local_1f1c = local_2130._4_4_;
    local_2130 = 0;
    if (iVar10 < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1f28);
    }
    FString::PathAppend(&local_1f28,lVar11,iVar9);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1f48,&local_1f28,5 - (uint)(local_1f20 != 0));
    iVar9 = local_1f40;
    lVar5 = (longlong)local_1f40;
    local_1f40 = (5 - (uint)(local_1f40 != 0)) + local_1f40;
    if (local_1f3c < local_1f40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f48,iVar9);
    }
    local_1c18 = local_1f48;
    lVar5 = lVar5 - (ulonglong)(iVar9 != 0);
    *(undefined8 *)(local_1f48 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_1f48 + 8 + lVar5 * 2) = 0;
    local_1aa8 = 0x3f800000;
    uStack_1aa4 = 0x3f800000;
    uStack_1aa0 = 0x3f800000;
    uStack_1a9c = 0x3f800000;
    local_1e20 = 0x41d80000;
    local_1e1c = 0x41900000;
    local_1c10 = local_1f40;
    lVar5 = FPaths::EngineContentDir(local_1a68);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1dd8,lVar5,7 - (uint)(*(int *)(lVar5 + 8) != 0));
    FString::PathAppend(&local_1dd8,L"Slate",5);
    iVar10 = 0;
    iVar9 = iVar10;
    if ((int)local_1f00 != 0) {
      iVar9 = (int)local_1f00 + -1;
    }
    if ((local_1dd0 != 0) || (iVar8 = iVar12, iVar9 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1de8,&local_1dd8,iVar9 + iVar8);
    FString::PathAppend(&local_1de8,local_1f08,iVar9);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1f38,&local_1de8,5 - (uint)(local_1de0 != 0));
    iVar9 = local_1f30;
    lVar5 = (longlong)local_1f30;
    local_1f30 = (5 - (uint)(local_1f30 != 0)) + local_1f30;
    if (local_1f2c < local_1f30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f38,iVar9);
    }
    local_1c28 = local_1f38;
    lVar5 = lVar5 - (ulonglong)(iVar9 != 0);
    *(undefined8 *)(local_1f38 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_1f38 + 8 + lVar5 * 2) = 0;
    local_1ab8 = 0x3f800000;
    uStack_1ab4 = 0x3f800000;
    uStack_1ab0 = 0x3f800000;
    uStack_1aac = 0x3f800000;
    local_res20 = 0x41d80000;
    local_res24 = 0x41900000;
    local_1c20 = local_1f30;
    lVar5 = FPaths::EngineContentDir(local_1a78);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1df8,lVar5,7 - (uint)(*(int *)(lVar5 + 8) != 0));
    FString::PathAppend(&local_1df8,L"Slate",5);
    if ((int)local_1f10 != 0) {
      iVar10 = (int)local_1f10 + -1;
    }
    if ((local_1df0 != 0) || (iVar9 = iVar12, iVar10 == -1)) {
      iVar9 = 1;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1e08,&local_1df8,iVar10 + iVar9);
    FString::PathAppend(&local_1e08,local_1f18,iVar10);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_2078,&local_1e08,5 - (uint)(local_1e00 != 0));
    iVar9 = local_2070;
    lVar5 = (longlong)local_2070;
    local_2070 = (5 - (uint)(local_2070 != 0)) + local_2070;
    if (local_206c < local_2070) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2078,iVar9);
    }
    uVar16 = uVar16 & 0xffffffff00000000;
    lVar5 = lVar5 - (ulonglong)(iVar9 != 0);
    local_1c38 = local_2078;
    *(undefined8 *)(local_2078 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_2078 + 8 + lVar5 * 2) = 0;
    local_1c30 = local_2070;
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_1740,&local_1c38,&local_res20,&local_1ab8,uVar16,1);
    lVar5 = FButtonStyle::FButtonStyle(&local_cd0,local_a58);
    FUN_1406922e0(lVar5 + 8,uVar3);
    uVar16 = uVar16 & 0xffffffff00000000;
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_16b8,&local_1c28,&local_1e20,&local_1aa8,uVar16,1);
    FUN_1406922e0(lVar5 + 0x90,uVar3);
    uVar16 = uVar16 & 0xffffffff00000000;
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_1630,&local_1c18,&local_1e88,&local_1a98,uVar16,1);
    FUN_1406922e0(lVar5 + 0x118,uVar3);
    uVar16 = uVar16 & 0xffffffff00000000;
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_15a8,&local_1c08,&local_1e80,&local_1a88,uVar16,1);
    FUN_1406922e0(lVar5 + 0x1a0,uVar3);
    FButtonStyle::operator=(&DAT_1469f4bb0,lVar5);
    local_cd0 = &PTR__scalar_deleting_destructor__144042bb0;
    FSlateBrush::~FSlateBrush(local_b30);
    FSlateBrush::~FSlateBrush(local_bb8);
    FSlateBrush::~FSlateBrush(local_c40);
    FSlateBrush::~FSlateBrush(local_cc8);
    local_cd0 = &PTR_FUN_144042b80;
    FSlateBrush::~FSlateBrush(local_1740);
    if (local_2078 != 0) {
      FMemory::Free();
    }
    if (local_1e08 != 0) {
      FMemory::Free();
    }
    if (local_1df8 != 0) {
      FMemory::Free();
    }
    if (local_1a78[0] != 0) {
      FMemory::Free();
    }
    FSlateBrush::~FSlateBrush(local_16b8);
    if (local_1f38 != 0) {
      FMemory::Free(local_1f38);
    }
    if (local_1de8 != 0) {
      FMemory::Free();
    }
    if (local_1dd8 != 0) {
      FMemory::Free();
    }
    if (local_1a68[0] != 0) {
      FMemory::Free();
    }
    FSlateBrush::~FSlateBrush(local_1630);
    if (local_1f48 != 0) {
      FMemory::Free(local_1f48);
    }
    if (local_1f28 != 0) {
      FMemory::Free();
    }
    if (local_2138 != 0) {
      FMemory::Free();
    }
    if (local_1a58[0] != 0) {
      FMemory::Free();
    }
    FSlateBrush::~FSlateBrush(local_15a8);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
    if (local_2098 != 0) {
      FMemory::Free();
    }
    if (local_2128 != 0) {
      FMemory::Free();
    }
    if (local_1a48[0] != 0) {
      FMemory::Free();
    }
    if (local_1f18 != 0) {
      FMemory::Free(local_1f18);
    }
    if (local_1f08 != 0) {
      FMemory::Free(local_1f08);
    }
    if (local_1ef8 != 0) {
      FMemory::Free();
    }
    if (local_1ee8 != 0) {
      FMemory::Free();
    }
    local_1ec0 = 0x2d;
    local_1ec8 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1ec8,0);
    lVar11 = local_1ec8;
    uVar3 = CONCAT62((int6)(uVar16 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1ec8,0x2d,"Common/Window/WindowButton_Maximize_Disabled",0x2d,uVar3);
    local_1ed8 = 0;
    local_1ed0 = 0x2c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1ed8,0);
    lVar5 = local_1ed8;
    uVar3 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1ed8,0x2c,"Common/Window/WindowButton_Maximize_Pressed",0x2c,uVar3);
    local_2028 = 0;
    local_2020 = 0x2c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2028,0);
    uVar3 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_2028,0x2c,"Common/Window/WindowButton_Maximize_Hovered",0x2c,uVar3);
    local_2038 = 0;
    local_2030 = 0x2b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2038,0);
    uVar16 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_2038,0x2b,"Common/Window/WindowButton_Maximize_Normal",0x2b,uVar16);
    local_1a08 = 0x3f800000;
    uStack_1a04 = 0x3f800000;
    uStack_1a00 = 0x3f800000;
    uStack_19fc = 0x3f800000;
    local_1e60 = 0x41d80000;
    local_1e5c = 0x41900000;
    lVar4 = FPaths::EngineContentDir(local_19c8);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1d58,lVar4,7 - (uint)(*(int *)(lVar4 + 8) != 0));
    FString::PathAppend(&local_1d58,L"Slate",5);
    iVar10 = 0;
    iVar9 = iVar10;
    if ((int)local_1ec0 != 0) {
      iVar9 = (int)local_1ec0 + -1;
    }
    if ((local_1d50 != 0) || (iVar8 = iVar12, iVar9 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1d68,&local_1d58,iVar8 + iVar9);
    FString::PathAppend(&local_1d68,lVar11,iVar9);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_2058,&local_1d68,5 - (uint)(local_1d60 != 0));
    iVar9 = local_2050;
    lVar11 = (longlong)local_2050;
    local_2050 = (5 - (uint)(local_2050 != 0)) + local_2050;
    if (local_204c < local_2050) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2058,iVar9);
    }
    local_1bc8 = local_2058;
    lVar11 = lVar11 - (ulonglong)(iVar9 != 0);
    *(undefined8 *)(local_2058 + lVar11 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_2058 + 8 + lVar11 * 2) = 0;
    local_1a18 = 0x3f800000;
    uStack_1a14 = 0x3f800000;
    uStack_1a10 = 0x3f800000;
    uStack_1a0c = 0x3f800000;
    local_1e68 = 0x41b80000;
    local_1e64 = 0x41900000;
    local_1bc0 = local_2050;
    lVar11 = FPaths::EngineContentDir(local_19d8);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1d78,lVar11,7 - (uint)(*(int *)(lVar11 + 8) != 0));
    FString::PathAppend(&local_1d78,L"Slate",5);
    if ((int)local_1ed0 != 0) {
      iVar10 = (int)local_1ed0 + -1;
    }
    if ((local_1d70 != 0) || (iVar9 = iVar12, iVar10 == -1)) {
      iVar9 = 1;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1d88,&local_1d78,iVar9 + iVar10);
    FString::PathAppend(&local_1d88,lVar5,iVar10);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_2048,&local_1d88,5 - (uint)(local_1d80 != 0));
    iVar9 = local_2040;
    lVar5 = (longlong)local_2040;
    local_2040 = (5 - (uint)(local_2040 != 0)) + local_2040;
    if (local_203c < local_2040) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2048,iVar9);
    }
    local_1bd8 = local_2048;
    lVar5 = lVar5 - (ulonglong)(iVar9 != 0);
    *(undefined8 *)(local_2048 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_2048 + 8 + lVar5 * 2) = 0;
    local_1a28 = 0x3f800000;
    uStack_1a24 = 0x3f800000;
    uStack_1a20 = 0x3f800000;
    uStack_1a1c = 0x3f800000;
    local_1e70 = 0x41b80000;
    local_1e6c = 0x41900000;
    local_1bd0 = local_2040;
    lVar5 = FPaths::EngineContentDir(local_19e8);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1d98,lVar5,7 - (uint)(*(int *)(lVar5 + 8) != 0));
    FString::PathAppend(&local_1d98,L"Slate",5);
    iVar10 = 0;
    iVar9 = iVar10;
    if ((int)local_2020 != 0) {
      iVar9 = (int)local_2020 + -1;
    }
    if ((local_1d90 != 0) || (iVar8 = iVar12, iVar9 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1da8,&local_1d98,iVar8 + iVar9);
    FString::PathAppend(&local_1da8,local_2028,iVar9);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1f88,&local_1da8,5 - (uint)(local_1da0 != 0));
    iVar9 = local_1f80;
    lVar5 = (longlong)local_1f80;
    local_1f80 = (5 - (uint)(local_1f80 != 0)) + local_1f80;
    if (local_1f7c < local_1f80) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f88,iVar9);
    }
    local_1be8 = local_1f88;
    lVar5 = lVar5 - (ulonglong)(iVar9 != 0);
    *(undefined8 *)(local_1f88 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_1f88 + 8 + lVar5 * 2) = 0;
    local_1a38 = 0x3f800000;
    uStack_1a34 = 0x3f800000;
    uStack_1a30 = 0x3f800000;
    uStack_1a2c = 0x3f800000;
    local_1e78 = 0x41b80000;
    local_1e74 = 0x41900000;
    local_1be0 = local_1f80;
    lVar5 = FPaths::EngineContentDir(local_19f8);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1db8,lVar5,7 - (uint)(*(int *)(lVar5 + 8) != 0));
    FString::PathAppend(&local_1db8,L"Slate",5);
    if ((int)local_2030 != 0) {
      iVar10 = (int)local_2030 + -1;
    }
    if ((local_1db0 != 0) || (iVar9 = iVar12, iVar10 == -1)) {
      iVar9 = 1;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1dc8,&local_1db8,iVar9 + iVar10);
    FString::PathAppend(&local_1dc8,local_2038,iVar10);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_2068,&local_1dc8,5 - (uint)(local_1dc0 != 0));
    iVar9 = local_2060;
    lVar5 = (longlong)local_2060;
    local_2060 = (5 - (uint)(local_2060 != 0)) + local_2060;
    if (local_205c < local_2060) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2068,iVar9);
    }
    uVar16 = uVar16 & 0xffffffff00000000;
    lVar5 = lVar5 - (ulonglong)(iVar9 != 0);
    local_1bf8 = local_2068;
    *(undefined8 *)(local_2068 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_2068 + 8 + lVar5 * 2) = 0;
    local_1bf0 = local_2060;
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_1520,&local_1bf8,&local_1e78,&local_1a38,uVar16,1);
    lVar5 = FButtonStyle::FButtonStyle(local_7d8,local_a58);
    FUN_1406922e0(lVar5 + 8,uVar3);
    uVar16 = uVar16 & 0xffffffff00000000;
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_1498,&local_1be8,&local_1e70,&local_1a28,uVar16,1);
    FUN_1406922e0(lVar5 + 0x90,uVar3);
    uVar16 = uVar16 & 0xffffffff00000000;
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_1410,&local_1bd8,&local_1e68,&local_1a18,uVar16,1);
    FUN_1406922e0(lVar5 + 0x118,uVar3);
    uVar16 = uVar16 & 0xffffffff00000000;
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_1388,&local_1bc8,&local_1e60,&local_1a08,uVar16,1);
    FUN_1406922e0(lVar5 + 0x1a0,uVar3);
    FButtonStyle::operator=(&DAT_1469f4e30,lVar5);
    FUN_140691380(local_7d8);
    FSlateBrush::~FSlateBrush(local_1520);
    if (local_2068 != 0) {
      FMemory::Free();
    }
    if (local_1dc8 != 0) {
      FMemory::Free();
    }
    if (local_1db8 != 0) {
      FMemory::Free();
    }
    if (local_19f8[0] != 0) {
      FMemory::Free();
    }
    FSlateBrush::~FSlateBrush(local_1498);
    if (local_1f88 != 0) {
      FMemory::Free(local_1f88);
    }
    if (local_1da8 != 0) {
      FMemory::Free();
    }
    if (local_1d98 != 0) {
      FMemory::Free();
    }
    if (local_19e8[0] != 0) {
      FMemory::Free();
    }
    FSlateBrush::~FSlateBrush(local_1410);
    if (local_2048 != 0) {
      FMemory::Free(local_2048);
    }
    if (local_1d88 != 0) {
      FMemory::Free();
    }
    if (local_1d78 != 0) {
      FMemory::Free();
    }
    if (local_19d8[0] != 0) {
      FMemory::Free();
    }
    FSlateBrush::~FSlateBrush(local_1388);
    if (local_2058 != 0) {
      FMemory::Free(local_2058);
    }
    if (local_1d68 != 0) {
      FMemory::Free();
    }
    if (local_1d58 != 0) {
      FMemory::Free();
    }
    if (local_19c8[0] != 0) {
      FMemory::Free();
    }
    if (local_2038 != 0) {
      FMemory::Free(local_2038);
    }
    if (local_2028 != 0) {
      FMemory::Free(local_2028);
    }
    if (local_1ed8 != 0) {
      FMemory::Free();
    }
    if (local_1ec8 != 0) {
      FMemory::Free();
    }
    local_1ea0 = 0x2d;
    local_1ea8 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1ea8,0);
    lVar11 = local_1ea8;
    uVar3 = CONCAT62((int6)(uVar16 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1ea8,0x2d,"Common/Window/WindowButton_Maximize_Disabled",0x2d,uVar3);
    local_1eb8 = 0;
    local_1eb0 = 0x2b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1eb8,0);
    lVar5 = local_1eb8;
    uVar3 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1eb8,0x2b,"Common/Window/WindowButton_Restore_Pressed",0x2b,uVar3);
    local_1fd8 = 0;
    local_1fd0 = 0x2b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1fd8,0);
    uVar3 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1fd8,0x2b,"Common/Window/WindowButton_Restore_Hovered",0x2b,uVar3);
    local_1fe8 = 0;
    local_1fe0 = 0x2a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1fe8,0);
    uVar16 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1fe8,0x2a,"Common/Window/WindowButton_Restore_Normal",0x2a,uVar16);
    local_1988 = 0x3f800000;
    uStack_1984 = 0x3f800000;
    uStack_1980 = 0x3f800000;
    uStack_197c = 0x3f800000;
    local_1e48 = 0x41d80000;
    local_1e44 = 0x41900000;
    lVar4 = FPaths::EngineContentDir(local_1948);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1cd8,lVar4,7 - (uint)(*(int *)(lVar4 + 8) != 0));
    FString::PathAppend(&local_1cd8,L"Slate",5);
    iVar10 = 0;
    iVar9 = iVar10;
    if ((int)local_1ea0 != 0) {
      iVar9 = (int)local_1ea0 + -1;
    }
    if ((local_1cd0 != 0) || (iVar8 = iVar12, iVar9 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1ce8,&local_1cd8,iVar8 + iVar9);
    FString::PathAppend(&local_1ce8,lVar11,iVar9);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_2018,&local_1ce8,5 - (uint)(local_1ce0 != 0));
    iVar9 = local_2010;
    lVar11 = (longlong)local_2010;
    local_2010 = (5 - (uint)(local_2010 != 0)) + local_2010;
    if (local_200c < local_2010) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2018,iVar9);
    }
    local_1b88 = local_2018;
    lVar11 = lVar11 - (ulonglong)(iVar9 != 0);
    *(undefined8 *)(local_2018 + lVar11 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_2018 + 8 + lVar11 * 2) = 0;
    local_1998 = 0x3f800000;
    uStack_1994 = 0x3f800000;
    uStack_1990 = 0x3f800000;
    uStack_198c = 0x3f800000;
    local_1e50 = 0x41b80000;
    local_1e4c = 0x41900000;
    local_1b80 = local_2010;
    lVar11 = FPaths::EngineContentDir(local_1958);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1cf8,lVar11,7 - (uint)(*(int *)(lVar11 + 8) != 0));
    FString::PathAppend(&local_1cf8,L"Slate",5);
    if ((int)local_1eb0 != 0) {
      iVar10 = (int)local_1eb0 + -1;
    }
    if ((local_1cf0 != 0) || (iVar9 = iVar12, iVar10 == -1)) {
      iVar9 = 1;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1d08,&local_1cf8,iVar9 + iVar10);
    FString::PathAppend(&local_1d08,lVar5,iVar10);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_2008,&local_1d08,5 - (uint)(local_1d00 != 0));
    iVar9 = local_2000;
    lVar5 = (longlong)local_2000;
    local_2000 = (5 - (uint)(local_2000 != 0)) + local_2000;
    if (local_1ffc < local_2000) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2008,iVar9);
    }
    local_1b98 = local_2008;
    lVar5 = lVar5 - (ulonglong)(iVar9 != 0);
    *(undefined8 *)(local_2008 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_2008 + 8 + lVar5 * 2) = 0;
    local_19a8 = 0x3f800000;
    uStack_19a4 = 0x3f800000;
    uStack_19a0 = 0x3f800000;
    uStack_199c = 0x3f800000;
    local_1e58 = 0x41b80000;
    local_1e54 = 0x41900000;
    local_1b90 = local_2000;
    lVar5 = FPaths::EngineContentDir(local_1968);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1d18,lVar5,7 - (uint)(*(int *)(lVar5 + 8) != 0));
    FString::PathAppend(&local_1d18,L"Slate",5);
    iVar10 = 0;
    iVar9 = iVar10;
    if ((int)local_1fd0 != 0) {
      iVar9 = (int)local_1fd0 + -1;
    }
    if ((local_1d10 != 0) || (iVar8 = iVar12, iVar9 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1d28,&local_1d18,iVar8 + iVar9);
    FString::PathAppend(&local_1d28,local_1fd8,iVar9);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1ff8,&local_1d28,5 - (uint)(local_1d20 != 0));
    iVar9 = local_1ff0;
    lVar5 = (longlong)local_1ff0;
    local_1ff0 = (5 - (uint)(local_1ff0 != 0)) + local_1ff0;
    if (local_1fec < local_1ff0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1ff8,iVar9);
    }
    local_1ba8 = local_1ff8;
    lVar5 = lVar5 - (ulonglong)(iVar9 != 0);
    *(undefined8 *)(local_1ff8 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_1ff8 + 8 + lVar5 * 2) = 0;
    local_19b8 = 0x3f800000;
    uStack_19b4 = 0x3f800000;
    uStack_19b0 = 0x3f800000;
    uStack_19ac = 0x3f800000;
    local_1e28 = 0x41b80000;
    local_1e24 = 0x41900000;
    local_1ba0 = local_1ff0;
    lVar5 = FPaths::EngineContentDir(local_1978);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1d38,lVar5,7 - (uint)(*(int *)(lVar5 + 8) != 0));
    FString::PathAppend(&local_1d38,L"Slate",5);
    if ((int)local_1fe0 != 0) {
      iVar10 = (int)local_1fe0 + -1;
    }
    if ((local_1d30 != 0) || (iVar9 = iVar12, iVar10 == -1)) {
      iVar9 = 1;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1d48,&local_1d38,iVar9 + iVar10);
    FString::PathAppend(&local_1d48,local_1fe8,iVar10);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_2088,&local_1d48,5 - (uint)(local_1d40 != 0));
    iVar9 = local_2080;
    lVar5 = (longlong)local_2080;
    local_2080 = (5 - (uint)(local_2080 != 0)) + local_2080;
    if (local_207c < local_2080) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2088,iVar9);
    }
    uVar16 = uVar16 & 0xffffffff00000000;
    lVar5 = lVar5 - (ulonglong)(iVar9 != 0);
    local_1bb8 = local_2088;
    *(undefined8 *)(local_2088 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_2088 + 8 + lVar5 * 2) = 0;
    local_1bb0 = local_2080;
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_1300,&local_1bb8,&local_1e28,&local_19b8,uVar16,1);
    lVar5 = FButtonStyle::FButtonStyle(local_560,local_a58);
    FUN_1406922e0(lVar5 + 8,uVar3);
    uVar16 = uVar16 & 0xffffffff00000000;
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_1278,&local_1ba8,&local_1e58,&local_19a8,uVar16,1);
    FUN_1406922e0(lVar5 + 0x90,uVar3);
    uVar16 = uVar16 & 0xffffffff00000000;
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_11f0,&local_1b98,&local_1e50,&local_1998,uVar16,1);
    FUN_1406922e0(lVar5 + 0x118,uVar3);
    uVar16 = uVar16 & 0xffffffff00000000;
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_1168,&local_1b88,&local_1e48,&local_1988,uVar16,1);
    FUN_1406922e0(lVar5 + 0x1a0,uVar3);
    FButtonStyle::operator=(&DAT_1469f50b0,lVar5);
    FUN_140691380(local_560);
    FSlateBrush::~FSlateBrush(local_1300);
    if (local_2088 != 0) {
      FMemory::Free();
    }
    if (local_1d48 != 0) {
      FMemory::Free();
    }
    if (local_1d38 != 0) {
      FMemory::Free();
    }
    if (local_1978[0] != 0) {
      FMemory::Free();
    }
    FSlateBrush::~FSlateBrush(local_1278);
    if (local_1ff8 != 0) {
      FMemory::Free(local_1ff8);
    }
    if (local_1d28 != 0) {
      FMemory::Free();
    }
    if (local_1d18 != 0) {
      FMemory::Free();
    }
    if (local_1968[0] != 0) {
      FMemory::Free();
    }
    FSlateBrush::~FSlateBrush(local_11f0);
    if (local_2008 != 0) {
      FMemory::Free(local_2008);
    }
    if (local_1d08 != 0) {
      FMemory::Free();
    }
    if (local_1cf8 != 0) {
      FMemory::Free();
    }
    if (local_1958[0] != 0) {
      FMemory::Free();
    }
    FSlateBrush::~FSlateBrush(local_1168);
    if (local_2018 != 0) {
      FMemory::Free(local_2018);
    }
    if (local_1ce8 != 0) {
      FMemory::Free();
    }
    if (local_1cd8 != 0) {
      FMemory::Free();
    }
    if (local_1948[0] != 0) {
      FMemory::Free();
    }
    if (local_1fe8 != 0) {
      FMemory::Free(local_1fe8);
    }
    if (local_1fd8 != 0) {
      FMemory::Free(local_1fd8);
    }
    if (local_1eb8 != 0) {
      FMemory::Free();
    }
    if (local_1ea8 != 0) {
      FMemory::Free();
    }
    local_1e10 = 0x29;
    local_1e18 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e18,0);
    lVar11 = local_1e18;
    uVar3 = CONCAT62((int6)(uVar16 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1e18,0x29,"Common/Window/WindowButton_Close_Pressed",0x29,uVar3);
    local_1e98 = 0;
    local_1e90 = 0x29;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e98,0);
    lVar5 = local_1e98;
    uVar3 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1e98,0x29,"Common/Window/WindowButton_Close_Hovered",0x29,uVar3);
    local_1f98 = 0;
    local_1f90 = 0x28;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f98,0);
    uVar16 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1f98,0x28,"Common/Window/WindowButton_Close_Normal",0x28,uVar16);
    local_1918 = 0x3f800000;
    uStack_1914 = 0x3f800000;
    uStack_1910 = 0x3f800000;
    uStack_190c = 0x3f800000;
    local_1e30 = 0x42300000;
    local_1e2c = 0x41900000;
    lVar4 = FPaths::EngineContentDir(local_18e8);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1c78,lVar4,7 - (uint)(*(int *)(lVar4 + 8) != 0));
    FString::PathAppend(&local_1c78,L"Slate",5);
    iVar10 = 0;
    iVar9 = iVar10;
    if ((int)local_1e10 != 0) {
      iVar9 = (int)local_1e10 + -1;
    }
    if ((local_1c70 != 0) || (iVar8 = iVar12, iVar9 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1c88,&local_1c78,iVar8 + iVar9);
    FString::PathAppend(&local_1c88,lVar11,iVar9);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1fc8,&local_1c88,5 - (uint)(local_1c80 != 0));
    iVar9 = local_1fc0;
    lVar4 = (longlong)local_1fc0;
    local_1fc0 = (5 - (uint)(local_1fc0 != 0)) + local_1fc0;
    if (local_1fbc < local_1fc0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1fc8,iVar9);
    }
    local_1b58 = local_1fc8;
    lVar4 = lVar4 - (ulonglong)(iVar9 != 0);
    *(undefined8 *)(local_1fc8 + lVar4 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_1fc8 + 8 + lVar4 * 2) = 0;
    local_1928 = 0x3f800000;
    uStack_1924 = 0x3f800000;
    uStack_1920 = 0x3f800000;
    uStack_191c = 0x3f800000;
    local_1e38 = 0x42300000;
    local_1e34 = 0x41900000;
    local_1b50 = local_1fc0;
    lVar4 = FPaths::EngineContentDir(local_18f8);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1c98,lVar4,7 - (uint)(*(int *)(lVar4 + 8) != 0));
    FString::PathAppend(&local_1c98,L"Slate",5);
    if ((int)local_1e90 != 0) {
      iVar10 = (int)local_1e90 + -1;
    }
    if ((local_1c90 != 0) || (iVar10 == -1)) {
      iVar12 = 1;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1ca8,&local_1c98,iVar10 + iVar12);
    FString::PathAppend(&local_1ca8,lVar5,iVar10);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1fb8,&local_1ca8,5 - (uint)(local_1ca0 != 0));
    iVar9 = local_1fb0;
    lVar5 = (longlong)local_1fb0;
    local_1fb0 = (5 - (uint)(local_1fb0 != 0)) + local_1fb0;
    if (local_1fac < local_1fb0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1fb8,iVar9);
    }
    local_1b68 = local_1fb8;
    lVar5 = lVar5 - (ulonglong)(iVar9 != 0);
    *(undefined8 *)(local_1fb8 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_1fb8 + 8 + lVar5 * 2) = 0;
    local_1938 = 0x3f800000;
    uStack_1934 = 0x3f800000;
    uStack_1930 = 0x3f800000;
    uStack_192c = 0x3f800000;
    local_1e40 = 0x42300000;
    local_1e3c = 0x41900000;
    local_1b60 = local_1fb0;
    lVar5 = FPaths::EngineContentDir(local_1908);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1cb8,lVar5,7 - (uint)(*(int *)(lVar5 + 8) != 0));
    FString::PathAppend(&local_1cb8,L"Slate",5);
    iVar9 = 0;
    if ((int)local_1f90 != 0) {
      iVar9 = (int)local_1f90 + -1;
    }
    if ((local_1cb0 != 0) || (iVar9 == -1)) {
      iVar13 = 1;
    }
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1cc8,&local_1cb8,iVar9 + iVar13);
    FString::PathAppend(&local_1cc8,local_1f98,iVar9);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_1fa8,&local_1cc8,5 - (uint)(local_1cc0 != 0));
    iVar9 = local_1fa0;
    lVar5 = (longlong)local_1fa0;
    local_1fa0 = (5 - (uint)(local_1fa0 != 0)) + local_1fa0;
    if (local_1f9c < local_1fa0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1fa8,iVar9);
    }
    local_1b78 = local_1fa8;
    lVar5 = lVar5 - (ulonglong)(iVar9 != 0);
    uVar16 = uVar16 & 0xffffffff00000000;
    *(undefined8 *)(local_1fa8 + lVar5 * 2) = 0x67006e0070002e;
    *(undefined2 *)(local_1fa8 + 8 + lVar5 * 2) = 0;
    local_1b70 = local_1fa0;
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_10e0,&local_1b78,&local_1e40,&local_1938,uVar16,1);
    lVar5 = FButtonStyle::FButtonStyle(local_2e8,local_a58);
    FUN_1406922e0(lVar5 + 8,uVar3);
    uVar16 = uVar16 & 0xffffffff00000000;
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_1058,&local_1b68,&local_1e38,&local_1928,uVar16,1);
    FUN_1406922e0(lVar5 + 0x90,uVar3);
    uVar3 = FSlateImageBrush::FSlateImageBrush
                      (local_fd0,&local_1b58,&local_1e30,&local_1918,uVar16 & 0xffffffff00000000,1);
    FUN_1406922e0(lVar5 + 0x118,uVar3);
    FButtonStyle::operator=(&DAT_1469f5330,lVar5);
    FUN_140691380(local_2e8);
    FSlateBrush::~FSlateBrush(local_10e0);
    if (local_1fa8 != 0) {
      FMemory::Free(local_1fa8);
    }
    if (local_1cc8 != 0) {
      FMemory::Free();
    }
    if (local_1cb8 != 0) {
      FMemory::Free();
    }
    if (local_1908[0] != 0) {
      FMemory::Free();
    }
    FSlateBrush::~FSlateBrush(local_1058);
    if (local_1fb8 != 0) {
      FMemory::Free(local_1fb8);
    }
    if (local_1ca8 != 0) {
      FMemory::Free();
    }
    if (local_1c98 != 0) {
      FMemory::Free();
    }
    if (local_18f8[0] != 0) {
      FMemory::Free();
    }
    FSlateBrush::~FSlateBrush(local_fd0);
    if (local_1fc8 != 0) {
      FMemory::Free(local_1fc8);
    }
    if (local_1c88 != 0) {
      FMemory::Free();
    }
    if (local_1c78 != 0) {
      FMemory::Free();
    }
    if (local_18e8[0] != 0) {
      FMemory::Free();
    }
    if (local_1f98 != 0) {
      FMemory::Free(local_1f98);
    }
    if (local_1e98 != 0) {
      FMemory::Free();
    }
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
    DAT_1469f55c0 = '\x01';
    FUN_140691380(local_a58);
  }
  return param_1;
}



// FUNCTION 141965160 SWrapBox body=102 status=ok
// SIG undefined SWrapBox(void)

undefined8 * SWrapBox::SWrapBox(undefined8 *param_1)

{
  FUN_1417f46d0();
  *param_1 = &PTR__scalar_deleting_destructor__144d74a78;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x45] = param_1;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = &PTR_Count_144d74a50;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1419651d0 FUN_1419651d0 body=249 status=ok
// SIG undefined FUN_1419651d0(void)

void FUN_1419651d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3d0);
  plVar4 = *(longlong **)(param_1 + 0x3c8);
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
  plVar4 = *(longlong **)(param_1 + 0x3b8);
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
  plVar4 = *(longlong **)(param_1 + 0x3a8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x390);
  FUN_1418d2ce0(param_1);
  return;
}



// FUNCTION 1419652d0 FUN_1419652d0 body=168 status=ok
// SIG undefined FUN_1419652d0(void)

void FUN_1419652d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    pcVar7 = (char *)(lVar5 + 0x20);
    do {
      if (*pcVar7 != '\0') {
        *pcVar7 = '\0';
      }
      plVar4 = *(longlong **)(pcVar7 + -0x18);
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
      pcVar7 = pcVar7 + 0x40;
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



// FUNCTION 141965380 ~TIndirectArray<SUniformGridPanel::FSlot,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TIndirectArray<SUniformGridPanel::FSlot,FDefaultAllocator>(void)

void TIndirectArray<SUniformGridPanel::FSlot,FDefaultAllocator>::
     ~TIndirectArray<SUniformGridPanel::FSlot,FDefaultAllocator>(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FSlotBase::~FSlotBase(*puVar1);
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419653f0 ~TIndirectArray<SSplitter::FSlot,FDefaultAllocator> body=168 status=ok
// SIG undefined ~TIndirectArray<SSplitter::FSlot,FDefaultAllocator>(void)

void TIndirectArray<SSplitter::FSlot,FDefaultAllocator>::
     ~TIndirectArray<SSplitter::FSlot,FDefaultAllocator>(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  plVar1 = (longlong *)*param_1;
  for (iVar3 = (int)param_1[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
    lVar2 = *plVar1;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x50);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x40);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x28);
    FSlotBase::~FSlotBase(lVar2);
    FMemory::Free(*plVar1);
    plVar1 = plVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1419654a0 ~TIndirectArray<SWidgetSwitcher::FSlot,FDefaultAllocator> body=150 status=ok
// SIG undefined ~TIndirectArray<SWidgetSwitcher::FSlot,FDefaultAllocator>(void)

void TIndirectArray<SWidgetSwitcher::FSlot,FDefaultAllocator>::
     ~TIndirectArray<SWidgetSwitcher::FSlot,FDefaultAllocator>(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  plVar1 = (longlong *)*param_1;
  for (iVar3 = (int)param_1[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
    lVar2 = *plVar1;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x40);
    FSlotBase::~FSlotBase(lVar2);
    FMemory::Free(*plVar1);
    plVar1 = plVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141965540 FUN_141965540 body=379 status=ok
// SIG undefined FUN_141965540(void)

void FUN_141965540(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x230) != '\0') {
    *(undefined1 *)(param_1 + 0x230) = 0;
  }
  if (*(char *)(param_1 + 0x210) != '\0') {
    *(undefined1 *)(param_1 + 0x210) = 0;
  }
  if (*(char *)(param_1 + 0x1f1) != '\0') {
    *(undefined1 *)(param_1 + 0x1f1) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x1e8);
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
  plVar4 = *(longlong **)(param_1 + 0x1d8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x188);
  plVar4 = *(longlong **)(param_1 + 0x178);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x148);
  plVar4 = *(longlong **)(param_1 + 0x110);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 1419656c0 FUN_1419656c0 body=249 status=ok
// SIG undefined FUN_1419656c0(void)

void FUN_1419656c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1b8);
  plVar4 = *(longlong **)(param_1 + 0x198);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x150);
  plVar4 = *(longlong **)(param_1 + 0x140);
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
  plVar4 = *(longlong **)(param_1 + 0x110);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 1419657c0 FUN_1419657c0 body=463 status=ok
// SIG undefined FUN_1419657c0(void)

void FUN_1419657c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x308);
  plVar4 = *(longlong **)(param_1 + 0x2f0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2c8);
  plVar4 = *(longlong **)(param_1 + 0x2b0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x298);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x288);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x268);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x250);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x238);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x220);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x208);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1b8);
  FUN_1408bbe10(param_1 + 0x1a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 400);
  plVar4 = *(longlong **)(param_1 + 0x170);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x128);
  plVar4 = *(longlong **)(param_1 + 0x110);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 141965990 FUN_141965990 body=2240 status=ok
// SIG undefined FUN_141965990(void)

void FUN_141965990(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38 [2];
  
  plVar8 = (longlong *)0x0;
  if (*(char *)(param_1 + 0x778) == '\0') {
    if ((*(longlong *)(param_1 + 0x780) == 0) || (*(longlong *)(param_1 + 0x788) == 0))
    goto LAB_141965ab6;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x788) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar7 < 1) goto LAB_141965ab6;
  }
  plVar2 = (longlong *)(param_1 + 0x780);
  if ((*plVar2 != 0) && (*(longlong *)(param_1 + 0x788) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x788) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      plVar3 = *(longlong **)(param_1 + 0x788);
      plVar9 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar7 = (int)plVar3[1];
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(plVar3 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (plVar9 = plVar8, !bVar10) {
          LOCK();
          bVar10 = iVar7 == (int)plVar3[1];
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar8 = (longlong *)0x0;
            plVar9 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              plVar8 = (longlong *)*plVar2;
            }
            break;
          }
          LOCK();
          iVar7 = (int)plVar3[1];
          bVar10 = iVar7 == 0;
          if (bVar10) {
            *(int *)(plVar3 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
      }
      (**(code **)(*plVar8 + 0x38))(plVar8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
  }
  *(undefined1 *)(param_1 + 0x778) = 0;
  if (plVar2 != local_38) {
    *plVar2 = 0;
    plVar8 = *(longlong **)(param_1 + 0x788);
    *(undefined8 *)(param_1 + 0x788) = 0;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
LAB_141965ab6:
  if (((DAT_1469f4590 != 0) &&
      (plVar8 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd8))(), plVar8 != (longlong *)0x0)) &&
     (*(char *)(param_1 + 0x5e0) != '\0')) {
    plVar2 = *(longlong **)(param_1 + 0x5f0);
    lVar4 = *(longlong *)(param_1 + 0x5e8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined1 *)(lVar4 + 0x58) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    local_68 = lVar4;
    local_60 = plVar2;
    cVar6 = (**(code **)(*plVar8 + 0x30))(plVar8,&local_68);
    plVar3 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_60 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (cVar6 != '\0') {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      local_58 = lVar4;
      local_50 = plVar2;
      (**(code **)(*plVar8 + 0x28))(plVar8,&local_58);
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_50 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    local_48 = lVar4;
    local_40 = plVar2;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_48);
    plVar8 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar2 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar2)(plVar2);
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
  plVar8 = *(longlong **)(param_1 + 0x788);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar7 == 1) && (plVar8 != (longlong *)0x0)) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x770);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x748);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (*(char *)(param_1 + 0x718) != '\0') {
    *(undefined1 *)(param_1 + 0x718) = 0;
  }
  plVar8 = *(longlong **)(param_1 + 0x700);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TOptional<SlateEditableTextTypes::FUndoState>::Reset(param_1 + 0x6b0);
  FUN_1419652d0(param_1 + 0x698);
  if (*(char *)(param_1 + 0x678) != '\0') {
    *(undefined1 *)(param_1 + 0x678) = 0;
  }
  if (*(char *)(param_1 + 0x66c) != '\0') {
    *(undefined1 *)(param_1 + 0x66c) = 0;
  }
  TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::
  ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>(param_1 + 0x648);
  plVar8 = *(longlong **)(param_1 + 0x640);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x630);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x620);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x610);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x600);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x5f0);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x5d8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5c0);
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x598);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x580);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x568);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x540);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x528);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x510);
  plVar8 = *(longlong **)(param_1 + 0x4f0);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x4d8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4c0);
  plVar8 = *(longlong **)(param_1 + 0x4a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x490);
  plVar8 = *(longlong **)(param_1 + 0x478);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x458);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x440);
  plVar8 = *(longlong **)(param_1 + 0x428);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  FUN_140691580(param_1 + 0x240);
  FUN_140691580(param_1 + 0x60);
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 != 0) {
    FUN_141966250(lVar4);
    FMemory::operator_delete(lVar4,0x68);
  }
  plVar8 = *(longlong **)(param_1 + 0x50);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x38);
  plVar8 = *(longlong **)(param_1 + 0x30);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x20);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x10);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 141966250 FUN_141966250 body=307 status=ok
// SIG undefined FUN_141966250(void)

void FUN_141966250(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x58);
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
  plVar4 = *(longlong **)(param_1 + 0x40);
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
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  plVar4 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 141966390 FUN_141966390 body=191 status=ok
// SIG undefined FUN_141966390(void)

void FUN_141966390(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_1417f61f0(param_1 + 0x420);
  plVar4 = *(longlong **)(param_1 + 0x418);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x400);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1000);
  plVar4 = *(longlong **)(param_1 + 0x3c8);
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
  FUN_140691710(param_1);
  return;
}



// FUNCTION 141966450 FUN_141966450 body=547 status=ok
// SIG undefined FUN_141966450(void)

void FUN_141966450(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  *param_1 = &PTR_FUN_144d757e0;
  iVar6 = 0;
  param_1[0x5e] = &PTR_LAB_144d759e8;
  param_1[0x60] = &PTR_LAB_144d75a00;
  if (0 < *(int *)(param_1 + 0x7e)) {
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar7 + param_1[0x7d]);
      if (lVar4 != 0) {
        plVar5 = *(longlong **)(lVar4 + 0x38);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        if (*(longlong *)(lVar4 + 0x20) != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(lVar4,0x88);
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar6 < *(int *)(param_1 + 0x7e));
  }
  if (DAT_1469f4590 != 0) {
    FUN_1418bd0a0(DAT_1469f4590,param_1 + 0x60);
  }
  if (*(char *)(param_1 + 0x8b) != '\0') {
    *(undefined1 *)(param_1 + 0x8b) = 0;
    if (param_1[0x89] != 0) {
      FMemory::Free();
    }
    if (*(char *)(param_1 + 0x88) != '\0') {
      *(undefined1 *)(param_1 + 0x88) = 0;
    }
  }
  if (param_1[0x7d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x7a] != 0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)param_1[0x79];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = (longlong *)param_1[0x77];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x72);
  FSlotBase::~FSlotBase(param_1 + 0x6a);
  param_1[0x68] = &PTR__purecall_143f48980;
  param_1[0x60] = &PTR_FUN_143f4c8e0;
  param_1[0x5e] = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 0x5f) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1 + 0x5e);
  }
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 141966680 FUN_141966680 body=773 status=ok
// SIG undefined FUN_141966680(void)

void FUN_141966680(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x5b8);
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
  plVar4 = *(longlong **)(param_1 + 0x5a8);
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
  plVar4 = *(longlong **)(param_1 + 0x598);
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
  plVar4 = *(longlong **)(param_1 + 0x580);
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
  plVar4 = *(longlong **)(param_1 + 0x570);
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
  plVar4 = *(longlong **)(param_1 + 0x558);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x540);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x528);
  plVar4 = *(longlong **)(param_1 + 0x518);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4e8);
  plVar4 = *(longlong **)(param_1 + 0x4d8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4a8);
  plVar4 = *(longlong **)(param_1 + 0x498);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x468);
  plVar4 = *(longlong **)(param_1 + 0x448);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x400);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3b0);
  plVar4 = *(longlong **)(param_1 + 0x390);
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
  FUN_140691710(param_1);
  return;
}



// FUNCTION 141966990 FUN_141966990 body=318 status=ok
// SIG undefined FUN_141966990(void)

void FUN_141966990(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d74c80;
  if (*(int *)(param_1 + 0x9b) != -1) {
    uVar6 = FSlateThrottleManager::Get();
    FSlateThrottleManager::LeaveResponsiveMode(uVar6,param_1 + 0x9b);
  }
  FUN_1417f61f0(param_1 + 0x90);
  FUN_1417f61f0(param_1 + 0x7f);
  FUN_1417f61f0(param_1 + 0x72);
  plVar4 = (longlong *)param_1[0x70];
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x6d);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x6a);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x67);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 100);
  plVar4 = (longlong *)param_1[0x61];
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
  plVar4 = (longlong *)param_1[0x5f];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 141966ad0 FUN_141966ad0 body=99 status=ok
// SIG undefined FUN_141966ad0(void)

void FUN_141966ad0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x538);
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
  SNotificationItemImpl::~SNotificationItemImpl(param_1);
  return;
}



// FUNCTION 141966b40 ~SNotificationItemImpl body=135 status=ok
// SIG undefined ~SNotificationItemImpl(void)

void SNotificationItemImpl::~SNotificationItemImpl(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x520);
  plVar4 = *(longlong **)(param_1 + 0x508);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4e0);
  FUN_141966990(param_1);
  return;
}



// FUNCTION 141966bd0 ~SSafeZone body=63 status=ok
// SIG undefined ~SSafeZone(void)

void SSafeZone::~SSafeZone(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1440437b0;
  TBaseMulticastDelegate<void>::Remove(&DAT_1464aef80,param_1[0x6c]);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x65);
  SBox::~SBox(param_1);
  return;
}



// FUNCTION 141966c10 ~SScaleBox body=131 status=ok
// SIG undefined ~SScaleBox(void)

void SScaleBox::~SScaleBox(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d73db8;
  TBaseMulticastDelegate<void>::Remove(&DAT_1464aef80,param_1[0x6b]);
  if (*(char *)(param_1 + 0x70) != '\0') {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x36c) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x36c) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x65);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x62);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5f);
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 141966ca0 FUN_141966ca0 body=287 status=ok
// SIG undefined FUN_141966ca0(void)

void FUN_141966ca0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x340);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x330);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 800);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x310);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x300);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2b8);
  plVar4 = *(longlong **)(param_1 + 0x2a8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x278);
  plVar4 = *(longlong **)(param_1 + 0x268);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x230);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x218);
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 141966dc0 FUN_141966dc0 body=379 status=ok
// SIG undefined FUN_141966dc0(void)

void FUN_141966dc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x2c8);
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
  plVar4 = *(longlong **)(param_1 + 0x2b8);
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
  plVar4 = *(longlong **)(param_1 + 0x2a8);
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
  plVar4 = *(longlong **)(param_1 + 0x298);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x278);
  plVar4 = *(longlong **)(param_1 + 0x270);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 600);
  FSlotBase::~FSlotBase(param_1 + 0x218);
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 141966f40 operator= body=279 status=ok
// SIG undefined operator=(void)

longlong *
TArray<FNotificationButtonInfo,FDefaultAllocator>::operator=(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    lVar5 = *param_1;
    iVar6 = (int)param_1[1];
    if (iVar6 != 0) {
      plVar7 = (longlong *)(lVar5 + 0x20);
      do {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar7 + 2);
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
        plVar4 = (longlong *)plVar7[-3];
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
        plVar7 = plVar7 + 9;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      lVar5 = *param_1;
    }
    if (lVar5 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 141967060 operator= body=202 status=ok
// SIG undefined operator=(void)

longlong *
TArray<TAttribute<float>,FDefaultAllocator>::operator=(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  if (param_1 != param_2) {
    iVar1 = (int)param_1[1];
    if (iVar1 != 0) {
      lVar2 = *param_1 + 8;
      do {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2);
        lVar2 = lVar2 + 0x18;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
      puVar3 = (undefined4 *)*param_1;
      if (iVar1 != 0) {
        lVar2 = lVar2 + 8;
        do {
          *puVar3 = *(undefined4 *)(lVar2 + -8);
          *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(lVar2 + -4);
          *(undefined8 *)(puVar3 + 2) = 0;
          puVar3[4] = 0;
          TBaseDelegate<FSlateBrush_const_*>::operator=(puVar3 + 2,lVar2);
          lVar2 = lVar2 + 0x18;
          puVar3 = puVar3 + 6;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 141967130 operator= body=35 status=ok
// SIG undefined operator=(void)

undefined8 * TOptional<FTextLocation>::operator=(undefined8 *param_1,undefined8 *param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_1 + 1) != '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (*(char *)(param_2 + 1) != '\0') {
      *param_1 = *param_2;
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return param_1;
}



// FUNCTION 141967160 operator== body=133 status=ok
// SIG undefined operator==(void)

undefined8 FSlateClippingZone::operator==(float *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 8);
  bVar2 = *(byte *)(param_1 + 8);
  if ((((((((bVar1 ^ bVar2) & 1) == 0) && (((bVar1 ^ bVar2) & 2) == 0)) &&
        (((bVar1 ^ bVar2) & 4) == 0)) && ((*param_2 == *param_1 && (param_2[1] == param_1[1])))) &&
      ((param_2[2] == param_1[2] && ((param_2[3] == param_1[3] && (param_2[4] == param_1[4])))))) &&
     ((param_2[5] == param_1[5] && ((param_2[6] == param_1[6] && (param_2[7] == param_1[7])))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1419671f0 FUN_1419671f0 body=256 status=ok
// SIG undefined FUN_1419671f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1419671f0(longlong param_1,undefined8 *param_2)

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
  puVar3 = (undefined8 *)(param_1 + 0x110);
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
    plVar5 = *(longlong **)(param_1 + 0x118);
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    *(undefined4 *)puVar3 = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x114) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x118) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x11c) = uStack_40._4_4_;
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
  return param_1;
}



// FUNCTION 1419672f0 FUN_1419672f0 body=434 status=ok
// SIG undefined FUN_1419672f0(void)

void FUN_1419672f0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(*param_1 + 8,local_28)
  ;
  local_48 = *puVar7;
  local_40 = (longlong *)puVar7[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  cVar6 = (**(code **)(*DAT_1469f4590 + 0xc0))
                    (DAT_1469f4590,&local_48,*(undefined4 *)(param_2 + 0x110));
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  if (cVar6 != '\0') {
    puVar7 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(*param_1 + 8,local_18);
    local_38 = *puVar7;
    local_30 = (longlong *)puVar7[1];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_1418c3710(DAT_1469f4590,*(undefined4 *)(param_2 + 0x110),&local_38,2);
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_10 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1419674b0 FUN_1419674b0 body=1130 status=ok
// SIG undefined FUN_1419674b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419674b0(undefined8 *param_1,longlong param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  longlong local_1d8;
  float local_1c8;
  float fStack_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  float fStack_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float fStack_188;
  undefined4 auStack_184 [5];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float local_154;
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar9 = (longlong *)0x0;
  if (((*(int *)(param_2 + 0x48) != 0) && (*(longlong **)(param_2 + 0x40) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x18))(), cVar3 != '\0')) {
    plVar8 = plVar9;
    if (*(int *)(param_2 + 0x48) != 0) {
      plVar8 = *(longlong **)(param_2 + 0x40);
    }
    (**(code **)(*plVar8 + 0x38))(plVar8,&local_140);
    *(undefined8 *)(param_2 + 0x28) = local_140;
    *(undefined8 *)(param_2 + 0x30) = uStack_138;
  }
  fVar15 = *(float *)(param_2 + 0x28);
  fVar13 = *(float *)(param_2 + 0x30);
  fVar14 = param_3[2];
  iVar2 = *(int *)(param_2 + 0x20);
  fVar16 = fVar14 - (fVar15 + fVar13);
  fVar17 = fVar16;
  if (iVar2 != 0) {
    pfVar4 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_2 + 0x10),local_150);
    fVar12 = *pfVar4;
    if (fVar16 <= *pfVar4) {
      fVar12 = fVar16;
    }
    fVar17 = fVar12;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        fVar14 = (fVar14 - fVar12) * 0.5 + fVar15;
      }
      else {
        fVar17 = fVar16;
        if (iVar2 != 3) goto LAB_1419675ba;
        fVar14 = fVar14 - fVar12;
      }
      fVar15 = fVar14 - fVar13;
      fVar17 = fVar12;
    }
  }
LAB_1419675ba:
  if (((*(int *)(param_2 + 0x48) != 0) && (*(longlong **)(param_2 + 0x40) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x18))(), cVar3 != '\0')) {
    plVar8 = plVar9;
    if (*(int *)(param_2 + 0x48) != 0) {
      plVar8 = *(longlong **)(param_2 + 0x40);
    }
    (**(code **)(*plVar8 + 0x38))(plVar8,&local_130);
    *(undefined8 *)(param_2 + 0x28) = local_130;
    *(undefined8 *)(param_2 + 0x30) = uStack_128;
  }
  fVar13 = *(float *)(param_2 + 0x2c);
  fVar14 = *(float *)(param_2 + 0x34);
  fVar16 = param_3[3];
  iVar2 = *(int *)(param_2 + 0x24);
  fVar12 = fVar16 - (fVar13 + fVar14);
  fStack_1c4 = fVar12;
  if (iVar2 != 0) {
    lVar5 = SWidget::GetDesiredSize(*(undefined8 *)(param_2 + 0x10),local_148);
    fVar10 = *(float *)(lVar5 + 4);
    if (fVar12 <= *(float *)(lVar5 + 4)) {
      fVar10 = fVar12;
    }
    fStack_1c4 = fVar10;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        fVar16 = (fVar16 - fVar10) * 0.5 + fVar13;
      }
      else {
        fStack_1c4 = fVar12;
        if (iVar2 != 3) goto LAB_14196766a;
        fVar16 = fVar16 - fVar10;
      }
      fVar13 = fVar16 - fVar14;
      fStack_1c4 = fVar10;
    }
  }
LAB_14196766a:
  fVar15 = fVar15 + *param_3;
  fVar13 = fVar13 + param_3[1];
  lVar5 = param_1[1];
  local_1b4 = 0x3f800000;
  local_1c8 = fVar17;
  local_1b0 = fVar15;
  local_1ac = fVar13;
  lVar6 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_2 + 0x10) + 0xd0);
  if (*(char *)(lVar6 + 0x18) == '\0') {
    local_1a0 = CONCAT44(fStack_1c4,local_1c8);
    fVar14 = *(float *)(lVar5 + 8);
    local_168 = 0x3f800000;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0x3f800000;
    local_158 = fVar15;
    local_154 = fVar13;
    Concatenate<FTransform2D>(auStack_184,&local_168,lVar5 + 0x1c);
    uStack_16c = CONCAT31(uStack_16c._1_3_,
                          (byte)uStack_16c ^ (*(byte *)(lVar5 + 0x34) ^ (byte)uStack_16c) & 1);
    fStack_194 = fVar14 * fVar15 + *(float *)(lVar5 + 0xc);
    local_b0 = *(undefined8 *)(param_2 + 0x10);
    local_190 = fVar14 * fVar13 + *(float *)(lVar5 + 0x10);
    plVar9 = *(longlong **)(param_2 + 0x18);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    uStack_e0 = CONCAT44(fStack_194,fVar14);
    local_d8 = CONCAT44(fVar15,local_190);
    uStack_d0 = CONCAT44(auStack_184[0],fVar13);
    local_e8 = local_1a0;
    uVar11 = uStack_16c;
    fStack_198 = fVar14;
    fStack_18c = fVar15;
    fStack_188 = fVar13;
  }
  else {
    lVar6 = *(longlong *)(param_2 + 0x10);
    if (((*(int *)(lVar6 + 0x118) != 0) && (*(longlong **)(lVar6 + 0x110) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x110) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(lVar6 + 0x118) != 0) {
        plVar9 = *(longlong **)(lVar6 + 0x110);
      }
      (**(code **)(*plVar9 + 0x38))(plVar9,&local_1a8);
      *(undefined8 *)(lVar6 + 0x100) = local_1a8;
    }
    uVar7 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_2 + 0x10) + 0xd0);
    local_1c0 = *(undefined4 *)(lVar5 + 8);
    local_1d8 = lVar5 + 0x1c;
    local_1bc = *(undefined4 *)(lVar5 + 0xc);
    local_1e0 = &local_1c0;
    local_1b8 = *(undefined4 *)(lVar5 + 0x10);
    local_1e8 = (undefined8 *)(lVar6 + 0x100);
    FGeometry::FGeometry(&local_120,&local_1c8,&local_1b4,uVar7);
    local_b0 = *(undefined8 *)(param_2 + 0x10);
    plVar9 = *(longlong **)(param_2 + 0x18);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_e8 = local_120;
    uStack_e0 = uStack_118;
    local_d8 = local_110;
    uStack_d0 = uStack_108;
    local_170 = (undefined4)local_f0;
    uVar11 = (int)((ulonglong)local_f0 >> 0x20);
  }
  local_b8 = CONCAT44(uVar11,local_170);
  local_a8 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  }
  FUN_141801ed0(*param_1,&local_e8);
  plVar9 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_a8 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a8)(local_a8);
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
  return;
}



// FUNCTION 141967920 FUN_141967920 body=409 status=ok
// SIG undefined FUN_141967920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141967920(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong local_250;
  undefined4 local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  undefined1 local_228;
  undefined1 local_220;
  longlong local_218;
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [448];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_218 = param_3 + 0xf8;
  local_238 = param_3 + 200;
  local_240 = param_3 + 0x98;
  local_230 = param_3 + 0xe8;
  local_220 = *(undefined1 *)(param_3 + 0xf1);
  local_250 = param_3 + 0x78;
  local_248 = *(undefined4 *)(param_3 + 0x90);
  local_258 = param_3 + 0x60;
  local_228 = *(undefined1 *)(param_3 + 0xf0);
  SWidget::SWidgetConstruct(*param_1 + 8,param_3,param_3 + 0x30,param_3 + 0x40);
  plVar1 = (longlong *)*param_1;
  uVar2 = *(undefined8 *)(param_3 + 0x108);
  plVar3 = *(longlong **)param_1[2];
  local_208 = FUN_14068ed70(local_1f8);
  *(undefined8 *)(local_208 + 0x108) = uVar2;
  local_200 = local_208 + 0x1a8;
  lVar6 = FUN_1418d3c80(&local_208,param_3 + 0x110);
  FUN_141935d90(plVar1,lVar6,plVar3);
  (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined4 *)(*plVar3 + 0x2f8),lVar6 + 0x178,lVar6 + 0x1a8)
  ;
  FUN_140690c40(local_1f8);
  lVar6 = *param_1;
  if (-1 < *(char *)(lVar6 + 0x20)) {
    cVar4 = (**(code **)(*(longlong *)(lVar6 + 8) + 0x1e8))(lVar6 + 8);
    if (cVar4 == '\0') {
      bVar5 = 0;
      goto LAB_141967a71;
    }
  }
  bVar5 = 1;
LAB_141967a71:
  *(byte *)(lVar6 + 0x21) = *(byte *)(lVar6 + 0x21) & 0xfe;
  *(byte *)(lVar6 + 0x21) = *(byte *)(lVar6 + 0x21) | bVar5;
  *param_2 = *param_1;
  lVar6 = param_1[1];
  param_2[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141967ac0 FUN_141967ac0 body=255 status=ok
// SIG undefined FUN_141967ac0(void)

longlong * FUN_141967ac0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_1419722f0(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_141967b84;
    }
  }
  bVar4 = 1;
LAB_141967b84:
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) | bVar4;
  *param_2 = *param_1;
  lVar2 = param_1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141967bc0 FUN_141967bc0 body=516 status=ok
// SIG undefined FUN_141967bc0(void)

longlong * FUN_141967bc0(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  lVar2 = *param_1;
  lVar8 = 3;
  *(undefined8 *)(lVar2 + 0x230) = 0;
  *(undefined4 *)(lVar2 + 0x238) = 0x420c0000;
  *(undefined4 *)(lVar2 + 0x23c) = *(undefined4 *)(param_3 + 0x138);
  do {
    puVar7 = (undefined8 *)operator_new(0x20);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      FSlotBase::FSlotBase(puVar7);
      *puVar7 = &PTR__scalar_deleting_destructor__144d4edf0;
    }
    if (*(char *)(lVar2 + 0x228) == '\0') {
      lVar3 = *(longlong *)(lVar2 + 0x210);
      if ((lVar3 != 0) && (puVar7[1] != lVar3)) {
        puVar7[1] = lVar3;
        FUN_141802340(puVar7);
      }
      iVar1 = *(int *)(lVar2 + 0x220);
      *(int *)(lVar2 + 0x220) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x224) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x218,iVar1);
      }
      *(undefined8 **)(*(longlong *)(lVar2 + 0x218) + (longlong)iVar1 * 8) = puVar7;
    }
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_140801a00(**(undefined8 **)(lVar2 + 0x218),param_3 + 0x108);
  FUN_140801a00(*(undefined8 *)(*(longlong *)(lVar2 + 0x218) + 8),param_3 + 0x128);
  FUN_140801a00(*(undefined8 *)(*(longlong *)(lVar2 + 0x218) + 0x10),param_3 + 0x118);
  plVar4 = (longlong *)*param_1;
  if (-1 < (char)plVar4[3]) {
    cVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4);
    if (cVar5 == '\0') {
      bVar6 = 0;
      goto LAB_141967d82;
    }
  }
  bVar6 = 1;
LAB_141967d82:
  *(byte *)((longlong)plVar4 + 0x19) = *(byte *)((longlong)plVar4 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar4 + 0x19) = *(byte *)((longlong)plVar4 + 0x19) | bVar6;
  *param_2 = *param_1;
  lVar2 = param_1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141967dd0 FUN_141967dd0 body=435 status=ok
// SIG undefined FUN_141967dd0(void)

longlong * FUN_141967dd0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  uVar10 = 0;
  lVar2 = *param_1;
  plVar3 = *(longlong **)param_1[2];
  *(undefined4 *)(lVar2 + 0x208) = 0;
  plVar1 = (longlong *)(lVar2 + 0x220);
  iVar8 = (int)plVar3[1];
  if (*(int *)(lVar2 + 0x22c) < iVar8) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,iVar8);
    iVar8 = (int)plVar3[1];
  }
  uVar11 = uVar10;
  if (0 < iVar8) {
    do {
      lVar4 = *(longlong *)(uVar11 + *plVar3);
      if (*(char *)(lVar2 + 0x230) == '\0') {
        lVar5 = *(longlong *)(lVar2 + 0x218);
        if ((lVar5 != 0) && (*(longlong *)(lVar4 + 8) != lVar5)) {
          *(longlong *)(lVar4 + 8) = lVar5;
          FUN_141802340(lVar4);
        }
        iVar8 = *(int *)(lVar2 + 0x228);
        *(int *)(lVar2 + 0x228) = iVar8 + 1;
        if (*(int *)(lVar2 + 0x22c) < iVar8 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
        }
        *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar4;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 8;
    } while ((int)uVar9 < (int)plVar3[1]);
  }
  *(undefined4 *)(lVar2 + 0x238) = *(undefined4 *)(param_3 + 0x108);
  plVar1 = (longlong *)*param_1;
  if (((char)plVar1[3] < '\0') || (cVar6 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar6 != '\0')) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) | bVar7;
  *param_2 = *param_1;
  lVar2 = param_1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141967fc0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SHeaderRow::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1419651d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x400);
  }
  return param_1;
}



// FUNCTION 141968010 FUN_141968010 body=107 status=ok
// SIG undefined FUN_141968010(void)

undefined8 * FUN_141968010(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 5);
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
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141968080 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SMenuEntryButton>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x488);
  }
  return param_1;
}



// FUNCTION 1419680b0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SWindow>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5f8);
  }
  return param_1;
}



// FUNCTION 1419680e0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<float>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x540);
  }
  return param_1;
}



// FUNCTION 141968110 FUN_141968110 body=43 status=ok
// SIG undefined FUN_141968110(void)

undefined8 * FUN_141968110(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 141968140 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TPanelChildren<SUniformGridPanel::FSlot>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  TIndirectArray<SUniformGridPanel::FSlot,FDefaultAllocator>::
  ~TIndirectArray<SUniformGridPanel::FSlot,FDefaultAllocator>(param_1 + 2);
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141968190 `scalar_deleting_destructor' body=93 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TPanelChildren<SCanvas::FSlot>::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  TIndirectArray<SCanvas::FSlot,FDefaultAllocator>::Empty(param_1 + 2,0);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1419681f0 `scalar_deleting_destructor' body=93 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TPanelChildren<SConstraintCanvas::FSlot>::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  TIndirectArray<SConstraintCanvas::FSlot,FDefaultAllocator>::Empty(param_1 + 2,0);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141968250 FUN_141968250 body=93 status=ok
// SIG undefined FUN_141968250(void)

undefined8 * FUN_141968250(undefined8 *param_1,uint param_2)

{
  FUN_141981460(param_1 + 2,0);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1419682b0 `scalar_deleting_destructor' body=93 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TPanelChildren<SScrollBox::FSlot>::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  TIndirectArray<SScrollBox::FSlot,FDefaultAllocator>::Empty(param_1 + 2,0);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141968310 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TPanelChildren<SSplitter::FSlot>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  TIndirectArray<SSplitter::FSlot,FDefaultAllocator>::
  ~TIndirectArray<SSplitter::FSlot,FDefaultAllocator>(param_1 + 2);
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141968360 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TPanelChildren<SWidgetSwitcher::FSlot>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  TIndirectArray<SWidgetSwitcher::FSlot,FDefaultAllocator>::
  ~TIndirectArray<SWidgetSwitcher::FSlot,FDefaultAllocator>(param_1 + 2);
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1419683b0 `scalar_deleting_destructor' body=93 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TPanelChildren<SWrapBox::FSlot>::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  TIndirectArray<SWrapBox::FSlot,FDefaultAllocator>::Empty(param_1 + 2,0);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141968410 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_5192e767e8f3717b0989d51deb824a50>,0>::
_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[3];
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
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141968480 FUN_141968480 body=43 status=ok
// SIG undefined FUN_141968480(void)

undefined8 * FUN_141968480(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1419684b0 FUN_1419684b0 body=105 status=ok
// SIG undefined FUN_1419684b0(void)

longlong FUN_1419684b0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x40);
  FSlotBase::~FSlotBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141968520 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SScrollBox::FSlot::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x38);
  FSlotBase::~FSlotBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141968560 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SSplitter::FSlot::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x50);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x28);
  FSlotBase::~FSlotBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1419685c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
SUniformGridPanel::FSlot::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FSlotBase::~FSlotBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141968600 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SWrapBox::FSlot::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(char *)(param_1 + 0x54) != '\0') {
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x40);
  FSlotBase::~FSlotBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141968650 FUN_141968650 body=98 status=ok
// SIG undefined FUN_141968650(void)

undefined8 * FUN_141968650(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[3];
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
  *param_1 = &PTR_FUN_143f4b628;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1419686c0 FUN_1419686c0 body=43 status=ok
// SIG undefined FUN_1419686c0(void)

undefined8 * FUN_1419686c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f48658;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1419686f0 FUN_1419686f0 body=78 status=ok
// SIG undefined FUN_1419686f0(void)

undefined8 FUN_1419686f0(undefined8 param_1,ulonglong param_2)

{
  FUN_140691710();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x388);
  }
  return param_1;
}



// FUNCTION 141968740 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SBox::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~SBox();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x310);
  }
  return param_1;
}



// FUNCTION 141968790 `scalar_deleting_destructor' body=141 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SCanvas::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  TIndirectArray<SCanvas::FSlot,FDefaultAllocator>::Empty(param_1 + 0x218,0);
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 141968820 `scalar_deleting_destructor' body=141 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SConstraintCanvas::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  TIndirectArray<SConstraintCanvas::FSlot,FDefaultAllocator>::Empty(param_1 + 0x218,0);
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 1419688b0 `scalar_deleting_destructor' body=131 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SDPIScaler::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x270);
  FSlotBase::~FSlotBase(param_1 + 0x230);
  *(undefined ***)(param_1 + 0x220) = &PTR__purecall_143f48980;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x210);
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 141968940 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SDefaultMovieBorder::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141966390();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    ~SDefaultMovieBorder(param_1,0x478);
  }
  return param_1;
}



// FUNCTION 141968990 `scalar_deleting_destructor' body=280 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SGridPanel::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x268);
  iVar2 = *(int *)(param_1 + 0x270);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x268);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x260);
  lVar1 = *(longlong *)(param_1 + 600);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 600);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  FUN_141981460(param_1 + 0x218,0);
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x278);
    }
  }
  return param_1;
}



// FUNCTION 141968ab0 FUN_141968ab0 body=78 status=ok
// SIG undefined FUN_141968ab0(void)

undefined8 FUN_141968ab0(undefined8 param_1,ulonglong param_2)

{
  FUN_141966450();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x470);
  }
  return param_1;
}



// FUNCTION 141968b00 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UAnimBlueprintGeneratedClass::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141966680();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x5e8);
  }
  return param_1;
}



// FUNCTION 141968b50 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SRetainerWidget::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141966990();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x4e0);
  }
  return param_1;
}



// FUNCTION 141968ba0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SComboButton::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141966ad0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x540);
  }
  return param_1;
}



// FUNCTION 141968bf0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SNotificationItemImpl::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~SNotificationItemImpl();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x530);
  }
  return param_1;
}



// FUNCTION 141968c40 `scalar_deleting_destructor' body=190 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * SScaleBox::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d73db8;
  TBaseMulticastDelegate<void>::Remove(&DAT_1464aef80,param_1[0x6b]);
  if (*(char *)(param_1 + 0x70) != '\0') {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x36c) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x36c) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x65);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x62);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5f);
  FUN_140458b70(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x398);
  }
  return param_1;
}



// FUNCTION 141968d00 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UEOSTShowcase_View::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1419256a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x438);
  }
  return param_1;
}



// FUNCTION 141968d50 `scalar_deleting_destructor' body=107 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SSplitter2x2::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TIndirectArray<SUniformGridPanel::FSlot,FDefaultAllocator>::
  ~TIndirectArray<SUniformGridPanel::FSlot,FDefaultAllocator>(param_1 + 0x218);
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x240);
  }
  return param_1;
}



// FUNCTION 141968dc0 FUN_141968dc0 body=362 status=ok
// SIG undefined FUN_141968dc0(void)

longlong FUN_141968dc0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x428);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)();
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
  if (*(int *)(param_1 + 0x410) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x400);
    if (*(longlong **)(param_1 + 0x400) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x3e0);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x368);
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 800) != '\0') {
    *(undefined1 *)(param_1 + 800) = 0;
  }
  plVar5 = *(longlong **)(param_1 + 0x310);
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
  plVar5 = *(longlong **)(param_1 + 0x300);
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
  FUN_140458b70(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x440);
    }
  }
  return param_1;
}



// FUNCTION 141968f30 `scalar_deleting_destructor' body=141 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SScrollPanel::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  TIndirectArray<SScrollBox::FSlot,FDefaultAllocator>::Empty(param_1 + 0x220,0);
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x210) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x240);
  }
  return param_1;
}



// FUNCTION 141968fc0 FUN_141968fc0 body=78 status=ok
// SIG undefined FUN_141968fc0(void)

undefined8 FUN_141968fc0(undefined8 param_1,ulonglong param_2)

{
  FUN_141966ca0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 141969010 `scalar_deleting_destructor' body=131 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SSplitter::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x250);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x240);
  TIndirectArray<SSplitter::FSlot,FDefaultAllocator>::
  ~TIndirectArray<SSplitter::FSlot,FDefaultAllocator>(param_1 + 0x218);
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 1419690a0 FUN_1419690a0 body=138 status=ok
// SIG undefined FUN_1419690a0(void)

longlong FUN_1419690a0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x220);
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
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x228);
  }
  return param_1;
}



// FUNCTION 141969130 `scalar_deleting_destructor' body=143 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SUniformGridPanel::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x280);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x268);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x248);
  TIndirectArray<SUniformGridPanel::FSlot,FDefaultAllocator>::
  ~TIndirectArray<SUniformGridPanel::FSlot,FDefaultAllocator>(param_1 + 0x218);
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x290);
  }
  return param_1;
}



// FUNCTION 1419691c0 FUN_1419691c0 body=249 status=ok
// SIG undefined FUN_1419691c0(void)

longlong FUN_1419691c0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x350);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x338);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x318);
  plVar4 = *(longlong **)(param_1 + 0x308);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x2f8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_140458b70(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x360);
    }
  }
  return param_1;
}



// FUNCTION 1419692c0 `scalar_deleting_destructor' body=141 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SWidgetSwitcher::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x248) = &PTR__purecall_143f48980;
  TIndirectArray<SWidgetSwitcher::FSlot,FDefaultAllocator>::
  ~TIndirectArray<SWidgetSwitcher::FSlot,FDefaultAllocator>(param_1 + 0x230);
  *(undefined ***)(param_1 + 0x220) = &PTR__purecall_143f48980;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x210);
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 141969350 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SDefaultMovieBorder::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141966dc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    ~SDefaultMovieBorder(param_1,0x2d0);
  }
  return param_1;
}



// FUNCTION 1419693a0 `scalar_deleting_destructor' body=153 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SWrapBox::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  TIndirectArray<SWrapBox::FSlot,FDefaultAllocator>::Empty(param_1 + 0x230,0);
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x220) = &PTR__purecall_143f48980;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x210);
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,600);
  }
  return param_1;
}



// FUNCTION 141969440 FUN_141969440 body=152 status=ok
// SIG undefined FUN_141969440(void)

undefined8 FUN_141969440(longlong param_1,double param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  lVar4 = (longlong)param_2;
  dVar5 = 0.0;
  dVar2 = param_2;
  if ((lVar4 != -0x8000000000000000) && (dVar5 = (double)lVar4, dVar5 != param_2)) {
    auVar1._8_4_ = SUB84(param_2,0);
    auVar1._0_8_ = param_2;
    auVar1._12_4_ = (int)((ulonglong)param_2 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar2 = (double)(longlong)(lVar4 - (ulonglong)(uVar3 & 1));
  }
  *(float *)(param_1 + 0x2b0) = (float)(param_2 - dVar2);
  lVar4 = TAttribute<TOptional<float>_>::Get(param_1 + 0x210,param_2 - dVar2,dVar5);
  if (*(char *)(lVar4 + 4) != '\0') {
    FUN_1419a01a0(param_1,*(undefined4 *)(param_1 + 0x2cc));
    return 1;
  }
  FUN_1419a01a0(param_1,0);
  return 1;
}



// FUNCTION 1419694e0 FUN_1419694e0 body=4471 status=ok
// SIG undefined FUN_1419694e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1419694e0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  longlong *plVar15;
  undefined1 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_af8 [32];
  ulonglong local_ad8;
  longlong local_ad0;
  undefined4 local_ac8;
  longlong local_ac0;
  longlong local_ab8;
  longlong local_ab0;
  undefined1 local_aa8;
  undefined1 local_aa0;
  longlong local_a98;
  undefined1 local_a88;
  undefined1 local_a87;
  undefined1 local_a86;
  undefined8 local_a78;
  undefined8 uStack_a70;
  longlong local_a68;
  longlong *plStack_a60;
  longlong *local_a58;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  longlong local_a48;
  longlong *local_a40;
  undefined8 local_a38;
  longlong *local_a30;
  undefined8 local_a28;
  longlong *local_a20;
  undefined8 local_a18;
  longlong *local_a10;
  longlong local_a08;
  int local_a00;
  undefined4 local_9fc;
  undefined1 local_9f8;
  undefined8 local_9f0;
  undefined4 local_9e8;
  undefined4 local_9e0;
  undefined1 local_9dc;
  undefined8 local_9d8;
  undefined4 local_9d0;
  undefined4 local_9c8;
  undefined1 local_9c4;
  undefined8 local_9c0;
  undefined4 local_9b8;
  undefined1 local_9b0;
  undefined1 local_9af;
  undefined8 local_9a8;
  undefined4 local_9a0;
  undefined1 local_998;
  undefined1 local_997;
  undefined8 local_990;
  undefined4 local_988;
  undefined1 local_980;
  undefined1 local_97f;
  undefined8 local_978;
  undefined4 local_970;
  undefined4 local_968;
  undefined1 local_964;
  undefined8 local_960;
  undefined4 local_958;
  undefined4 local_950;
  undefined1 local_94c;
  undefined8 local_948;
  undefined4 local_940;
  undefined4 local_938;
  undefined1 local_934;
  undefined8 local_930;
  undefined4 local_928;
  undefined4 local_920;
  undefined1 local_91c;
  undefined8 local_918;
  undefined4 local_910;
  longlong local_908;
  longlong local_900;
  longlong local_8f8;
  undefined1 local_8f0;
  undefined8 local_8e8;
  undefined4 local_8e0;
  undefined1 local_8d8 [8];
  longlong *local_8d0;
  undefined1 local_8c0;
  undefined8 local_8b8;
  undefined4 local_8b0;
  undefined1 local_8a8 [8];
  undefined1 local_8a0 [8];
  longlong *local_898;
  undefined4 local_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  longlong *local_878;
  longlong *local_870;
  longlong *local_860;
  longlong *local_858;
  longlong *local_848;
  longlong *local_840;
  longlong local_830;
  longlong *plStack_828;
  undefined1 local_818 [272];
  undefined1 local_708 [24];
  undefined1 local_6f0 [24];
  undefined1 local_6d8 [24];
  longlong *local_6c0;
  undefined1 local_6b8 [800];
  undefined1 local_398 [800];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_af8;
  uStack_a70 = (longlong *)0x0;
  local_a48 = param_1;
  local_a40 = param_2;
  lVar7 = FUN_1418fca90();
  if (*(char *)(lVar7 + 0x38) == '\0') {
    plVar9 = (longlong *)
             SharedPointerInternals::NewIntrusiveReferenceController<SNotificationItemImpl>();
    plVar15 = plVar9 + 2;
    local_848 = plVar15;
    local_840 = plVar9;
    FUN_14044f790(&local_848,plVar15);
    local_ad8 = 0x530;
    SWidget::SetDebugInfo
              (plVar15,"SNotificationItemImpl",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
               ,0x2e3);
    lVar7 = FUN_14195f810(local_398);
    local_ac8 = *(undefined4 *)(lVar7 + 0x90);
    local_a98 = lVar7 + 0xf8;
    local_ab0 = lVar7 + 0xe8;
    local_aa0 = *(undefined1 *)(lVar7 + 0xf1);
    local_ab8 = lVar7 + 200;
    local_ac0 = lVar7 + 0x98;
    local_aa8 = *(undefined1 *)(lVar7 + 0xf0);
    local_ad0 = lVar7 + 0x78;
    local_ad8 = lVar7 + 0x60;
    SWidget::SWidgetConstruct(plVar15,lVar7,lVar7 + 0x30,lVar7 + 0x40);
    FUN_141974e10(plVar15,lVar7);
    if (((char)plVar9[5] < '\0') ||
       (cVar5 = (**(code **)(*plVar15 + 0x1e8))(plVar15), cVar5 != '\0')) {
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
    local_a28 = 0;
    local_a78 = plVar15;
    local_a20 = plVar9;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_a70,&local_a20);
    plVar15 = local_a20;
    if (local_a20 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a20 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_a20)(local_a20);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*local_a20 + 8))(local_a20,1);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar9 + 1;
      lVar7 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      LOCK();
      plVar15 = plVar9 + 1;
      lVar7 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    FUN_1419657c0(local_398);
    plVar15 = uStack_a70;
  }
  else {
    lVar7 = *param_3;
    if (lVar7 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_1469f55d0) &&
         (_Init_thread_header(&DAT_1469f55d0), plVar15 = DAT_1469eb140, DAT_1469f55d0 == -1)) {
        lVar7 = *DAT_1469eb140;
        puVar12 = (undefined8 *)FName::FName(local_8a8,"NotificationList.DefaultMessage",1);
        DAT_1469f55c8 = (**(code **)(lVar7 + 0x40))(plVar15,*puVar12,0);
        _Init_thread_footer(&DAT_1469f55d0);
      }
      local_a88 = *(undefined1 *)((longlong)param_3 + 0x4e);
      lVar8 = 0;
      iVar17 = (int)param_3[6];
      uVar18 = *(undefined4 *)((longlong)param_3 + 0x44);
      uVar19 = (undefined4)param_3[9];
      uVar20 = (undefined4)param_3[8];
      lVar7 = param_3[5];
      local_a87 = *(undefined1 *)((longlong)param_3 + 0x4d);
      local_a86 = *(undefined1 *)((longlong)param_3 + 0x4c);
      local_900 = DAT_1469f55c8;
      if (param_3[7] != 0) {
        local_900 = param_3[7];
      }
      local_97f = 1;
      local_978 = 0;
      local_970 = 0;
      local_997 = 1;
      local_990 = 0;
      local_988 = 0;
      local_9af = 1;
      local_9a8 = 0;
      local_9a0 = 0;
      local_9c4 = 1;
      local_9c0 = 0;
      local_9b8 = 0;
      local_9dc = 1;
      local_9d8 = 0;
      local_9d0 = 0;
      local_91c = 1;
      local_918 = 0;
      local_910 = 0;
      local_8f0 = 1;
      local_8e8 = 0;
      local_8e0 = 0;
      local_a08 = 0;
      local_a00 = iVar17;
      local_9e0 = uVar19;
      local_9c8 = uVar18;
      local_9b0 = local_a86;
      local_998 = local_a87;
      local_980 = local_a88;
      local_920 = uVar20;
      local_8f8 = local_900;
      if (iVar17 == 0) {
        local_9fc = 0;
      }
      else {
        TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
                  (&local_a08,iVar17,0);
        lVar8 = local_a08;
        lVar7 = lVar7 - local_a08;
        puVar12 = (undefined8 *)(local_a08 + 0x30);
        do {
          FText::FText(puVar12 + -6,lVar7 + -0x30 + (longlong)puVar12);
          FText::FText(puVar12 + -3,lVar7 + -0x18 + (longlong)puVar12);
          *puVar12 = 0;
          *(undefined4 *)(puVar12 + 1) = 0;
          TBaseDelegate<FSlateBrush_const_*>::operator=(puVar12,lVar7 + (longlong)puVar12);
          *(undefined1 *)(puVar12 + 2) = *(undefined1 *)(lVar7 + 0x10 + (longlong)puVar12);
          *(undefined1 *)((longlong)puVar12 + 0x11) =
               *(undefined1 *)(lVar7 + 0x11 + (longlong)puVar12);
          *(undefined1 *)((longlong)puVar12 + 0x12) =
               *(undefined1 *)(lVar7 + 0x12 + (longlong)puVar12);
          *(undefined1 *)((longlong)puVar12 + 0x13) =
               *(undefined1 *)(lVar7 + 0x13 + (longlong)puVar12);
          puVar12 = puVar12 + 9;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      local_9f8 = 1;
      local_9f0 = 0;
      local_9e8 = 0;
      FText::FText(local_8d8,param_3 + 2);
      local_8c0 = 1;
      local_8b8 = 0;
      local_8b0 = 0;
      lVar10 = FUN_14195f810(local_6b8);
      local_908 = lVar10;
      FText::operator=(lVar10 + 0x108,local_8d8);
      *(undefined1 *)(lVar10 + 0x120) = local_8c0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x128,&local_8b8);
      lVar7 = local_a48;
      FUN_1417f9360(lVar10 + 0x138,local_a48 + 0x310);
      *(undefined1 *)(lVar10 + 0x188) = *(undefined1 *)(lVar7 + 0x360);
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 400,lVar7 + 0x368);
      plVar15 = (longlong *)(lVar10 + 0x1a0);
      uVar16 = local_a86;
      uVar14 = local_a87;
      uVar13 = local_a88;
      if (plVar15 != &local_a08) {
        iVar17 = *(int *)(lVar10 + 0x1a8);
        if (iVar17 != 0) {
          plVar9 = (longlong *)(*plVar15 + 0x20);
          do {
            TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar9 + 2);
            plVar4 = (longlong *)*plVar9;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar4 + 1;
              lVar7 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
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
            plVar4 = (longlong *)plVar9[-3];
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar4 + 1;
              lVar7 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
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
            plVar9 = plVar9 + 9;
            iVar17 = iVar17 + -1;
            lVar8 = local_a08;
            uVar18 = local_9c8;
            uVar19 = local_9e0;
            uVar20 = local_920;
            uVar16 = local_9b0;
            uVar14 = local_998;
            uVar13 = local_980;
          } while (iVar17 != 0);
        }
        local_ad8 = local_ad8 & 0xffffffff00000000;
        TArray<FNotificationButtonInfo,FDefaultAllocator>::CopyToEmpty<FNotificationButtonInfo>
                  (plVar15,lVar8,local_a00,*(undefined4 *)(lVar10 + 0x1ac));
      }
      *(undefined1 *)(lVar10 + 0x1b0) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x1b8,&local_9f0);
      lVar7 = local_908;
      *(longlong *)(local_908 + 0x1c8) = local_900;
      *(undefined1 *)(local_908 + 0x1d0) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(local_908 + 0x1d8,&local_8e8);
      *(undefined4 *)(lVar7 + 0x1e8) = uVar20;
      *(undefined1 *)(lVar7 + 0x1ec) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x1f0,&local_918);
      *(undefined4 *)(lVar7 + 0x218) = uVar19;
      *(undefined1 *)(lVar7 + 0x21c) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x220,&local_9d8);
      *(undefined4 *)(lVar7 + 0x200) = uVar18;
      *(undefined1 *)(lVar7 + 0x204) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x208,&local_9c0);
      *(undefined1 *)(lVar7 + 0x230) = uVar16;
      *(undefined1 *)(lVar7 + 0x231) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x238,&local_9a8);
      *(undefined1 *)(lVar7 + 0x248) = uVar14;
      *(undefined1 *)(lVar7 + 0x249) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x250,&local_990);
      *(undefined1 *)(lVar7 + 0x260) = uVar13;
      *(undefined1 *)(lVar7 + 0x261) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x268,&local_978);
      *(int *)(lVar7 + 0x278) = (int)param_3[10];
      *(char *)(lVar7 + 0x280) = (char)param_3[0xb];
      *(undefined1 *)(lVar7 + 0x281) = *(undefined1 *)((longlong)param_3 + 0x59);
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x288,param_3 + 0xc);
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x298,param_3 + 0xe);
      FText::operator=(lVar7 + 0x2a8,param_3 + 0x10);
      *(char *)(lVar7 + 0x2c0) = (char)param_3[0x13];
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x2c8,param_3 + 0x14);
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x2d8,param_3 + 0x16);
      FText::operator=(lVar7 + 0x2e8,param_3 + 0x18);
      *(char *)(lVar7 + 0x300) = (char)param_3[0x1b];
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x308,param_3 + 0x1c);
      plVar9 = (longlong *)
               SharedPointerInternals::NewIntrusiveReferenceController<SNotificationItemImpl>();
      plVar15 = plVar9 + 2;
      local_860 = plVar15;
      local_858 = plVar9;
      FUN_14044f790(&local_860,plVar15);
      local_ad8 = 0x530;
      SWidget::SetDebugInfo
                (plVar15,"SNotificationItemImpl",
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                 ,0x2bd);
      local_ac8 = *(undefined4 *)(lVar7 + 0x90);
      local_a98 = lVar7 + 0xf8;
      local_ab0 = lVar7 + 0xe8;
      local_aa0 = *(undefined1 *)(lVar7 + 0xf1);
      local_ab8 = lVar7 + 200;
      local_ac0 = lVar7 + 0x98;
      local_aa8 = *(undefined1 *)(lVar7 + 0xf0);
      local_ad0 = lVar7 + 0x78;
      local_ad8 = lVar7 + 0x60;
      SWidget::SWidgetConstruct(plVar15,lVar7,lVar7 + 0x30,lVar7 + 0x40);
      FUN_141974e10(plVar15,lVar7);
      if (((char)plVar9[5] < '\0') ||
         (cVar5 = (**(code **)(*plVar15 + 0x1e8))(plVar15), cVar5 != '\0')) {
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
      local_a38 = 0;
      local_a78 = plVar15;
      local_a30 = plVar9;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_a70,&local_a30);
      plVar15 = local_a30;
      if (local_a30 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a30 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_a30)(local_a30);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_a30 + 8))(local_a30,1);
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar9 + 1;
        lVar7 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
        LOCK();
        plVar15 = plVar9 + 1;
        lVar7 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      FUN_1419657c0(local_6b8);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_8b8);
      if (local_8d0 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_8d0 + 1;
        lVar7 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_8d0)(local_8d0);
          LOCK();
          piVar1 = (int *)((longlong)local_8d0 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_8d0 + 8))(local_8d0,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_9f0);
      FUN_1408bbe10(&local_a08);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_8e8);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_918);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_9d8);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_9c0);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_9a8);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_990);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_978);
      param_1 = local_a48;
    }
    else {
      local_938 = *(undefined4 *)((longlong)param_3 + 0x44);
      local_950 = (undefined4)param_3[9];
      local_930 = 0;
      local_928 = 0;
      local_948 = 0;
      local_940 = 0;
      local_960 = 0;
      local_958 = 0;
      plVar15 = (longlong *)param_3[1];
      local_968 = (undefined4)param_3[8];
      local_934 = 1;
      local_94c = 1;
      local_964 = 1;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
      }
      lVar8 = SNotificationItemExternalImpl::FArguments::FArguments(local_818);
      plVar9 = (longlong *)(lVar8 + 0x150);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
      }
      local_a68 = lVar7;
      plStack_a60 = plVar15;
      if (&local_a68 != plVar9) {
        local_a68 = *plVar9;
        plStack_a60 = *(longlong **)(lVar8 + 0x158);
        *plVar9 = lVar7;
        *(longlong **)(lVar8 + 0x158) = plVar15;
        local_830 = lVar7;
        plStack_828 = plVar15;
      }
      plVar9 = plStack_a60;
      if (plStack_a60 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_a60 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_a60)(plStack_a60);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*plStack_a60 + 8))(plStack_a60,1);
          }
        }
      }
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar15 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      *(undefined4 *)(lVar8 + 0x108) = local_968;
      *(undefined1 *)(lVar8 + 0x10c) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x110,&local_960);
      *(undefined4 *)(lVar8 + 0x138) = local_950;
      *(undefined1 *)(lVar8 + 0x13c) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x140,&local_948);
      *(undefined4 *)(lVar8 + 0x120) = local_938;
      *(undefined1 *)(lVar8 + 0x124) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x128,&local_930);
      plVar9 = (longlong *)
               SharedPointerInternals::
               NewIntrusiveReferenceController<SNotificationItemExternalImpl>();
      plVar15 = plVar9 + 2;
      local_878 = plVar15;
      local_870 = plVar9;
      FUN_14044f790(&local_878,plVar15);
      local_ad8 = 0x540;
      SWidget::SetDebugInfo
                (plVar15,"SNotificationItemExternalImpl",
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                 ,0x2b2);
      local_ac8 = *(undefined4 *)(lVar8 + 0x90);
      local_a98 = lVar8 + 0xf8;
      local_ab0 = lVar8 + 0xe8;
      local_aa0 = *(undefined1 *)(lVar8 + 0xf1);
      local_ab8 = lVar8 + 200;
      local_ac0 = lVar8 + 0x98;
      local_aa8 = *(undefined1 *)(lVar8 + 0xf0);
      local_ad0 = lVar8 + 0x78;
      local_ad8 = lVar8 + 0x60;
      SWidget::SWidgetConstruct(plVar15,lVar8,lVar8 + 0x30,lVar8 + 0x40);
      FUN_141974170(plVar15,lVar8);
      if (((char)plVar9[5] < '\0') ||
         (cVar5 = (**(code **)(*plVar15 + 0x1e8))(plVar15), cVar5 != '\0')) {
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
      local_a18 = 0;
      local_a78 = plVar15;
      local_a10 = plVar9;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_a70,&local_a10);
      plVar15 = local_a10;
      if (local_a10 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a10 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_a10)(local_a10);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_a10 + 8))(local_a10,1);
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar9 + 1;
        lVar7 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
        LOCK();
        plVar15 = plVar9 + 1;
        lVar7 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      if (local_6c0 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_6c0 + 1;
        lVar7 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_6c0)(local_6c0);
          LOCK();
          piVar1 = (int *)((longlong)local_6c0 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_6c0 + 8))(local_6c0,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_6d8);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_6f0);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_708);
      FUN_140456c70(local_818);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_960);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_948);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_930);
    }
    plVar9 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_8a0)
    ;
    plVar15 = (longlong *)plVar9[1];
    lVar7 = *plVar9;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    if (local_898 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_898 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_898)(local_898);
        LOCK();
        piVar1 = (int *)((longlong)local_898 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*local_898 + 8))(local_898,1);
        }
      }
    }
    plVar4 = local_a78;
    local_a78[0x5e] = lVar7;
    plVar9 = (longlong *)local_a78[0x5f];
    if (plVar15 != plVar9) {
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
        UNLOCK();
        plVar9 = (longlong *)local_a78[0x5f];
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      plVar4[0x5f] = (longlong)plVar15;
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar15 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    plVar15 = uStack_a70;
    if (uStack_a70 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_a70 + 1) = (int)uStack_a70[1] + 1;
      UNLOCK();
    }
    local_888 = (undefined4)local_a78;
    uStack_884 = local_a78._4_4_;
    uStack_880 = (undefined4)uStack_a70;
    uStack_87c = uStack_a70._4_4_;
    if (uStack_a70 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_a70 + 1) = (int)uStack_a70[1] + 1;
      UNLOCK();
    }
    uVar11 = SVerticalBox::AddSlot(*(undefined8 *)(param_1 + 0x2f0));
    lVar7 = SVerticalBox::FSlot::AutoHeight(uVar11);
    *(undefined1 *)(lVar7 + 0x20) = 3;
    FUN_1417f9c30(lVar7,&local_888);
    plVar9 = uStack_a70;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar15 + 1;
      lVar7 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      plVar15 = uStack_a70;
      if ((int)lVar7 == 1) {
        (**(code **)*uStack_a70)(uStack_a70);
        plVar15 = uStack_a70;
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*uStack_a70 + 8))(uStack_a70,1);
        }
      }
    }
    plVar9 = local_a78;
    FUN_1419825d0(local_a78,(char)param_3[0x1e]);
    param_2 = local_a40;
    if (*(char *)((longlong)param_3 + 0x54) != '\0') {
      (**(code **)(*plVar9 + 0x240))(plVar9);
      param_2 = local_a40;
    }
  }
  local_a58 = local_a78;
  uStack_a50 = (undefined4)uStack_a70;
  uStack_a4c = uStack_a70._4_4_;
  plVar9 = (longlong *)0x0;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    plVar9 = uStack_a70;
  }
  if ((longlong **)(param_1 + 0x380) != &local_a58) {
    *(longlong **)(param_1 + 0x380) = local_a78;
    local_a58 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x388,&uStack_a50);
  }
  if (CONCAT44(uStack_a4c,uStack_a50) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_a4c,uStack_a50) + 8);
    iVar17 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    plVar9 = uStack_a70;
    if (iVar17 == 1) {
      puVar12 = (undefined8 *)CONCAT44(uStack_a4c,uStack_a50);
      (**(code **)*puVar12)(puVar12);
      LOCK();
      piVar1 = (int *)((longlong)puVar12 + 0xc);
      iVar17 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar9 = uStack_a70;
      if (iVar17 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_a4c,uStack_a50) + 8))
                  ((longlong *)CONCAT44(uStack_a4c,uStack_a50),1);
        plVar9 = uStack_a70;
      }
    }
  }
  plVar4 = uStack_a70;
  plVar15 = (longlong *)0x0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    plVar15 = uStack_a70;
  }
  *param_2 = (longlong)local_a78;
  param_2[1] = (longlong)plVar15;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar15 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_a70)(uStack_a70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar17 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*uStack_a70 + 8))(uStack_a70,1);
      }
    }
    plVar9 = uStack_a70;
    LOCK();
    plVar15 = plVar15 + 1;
    lVar7 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_a70)(uStack_a70);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar17 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*uStack_a70 + 8))(uStack_a70,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14196a660 AddReferencedObjects body=47 status=ok
// SIG undefined AddReferencedObjects(void)

void SInvalidationPanel::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8),0,0);
  return;
}



// FUNCTION 14196a690 AddSlot body=198 status=ok
// SIG undefined AddSlot(void)

void SGridPanel::AddSlot(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x80);
  if (puVar1 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar1);
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    *puVar1 = &PTR_FUN_144d73978;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = param_2;
    *(undefined4 *)((longlong)puVar1 + 100) = 1;
    *(undefined4 *)(puVar1 + 0xd) = param_3;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 1;
    *(undefined4 *)(puVar1 + 0xe) = param_4;
    *(undefined4 *)((longlong)puVar1 + 0x74) = (undefined4)DAT_1468b5d88;
    *(undefined4 *)(puVar1 + 0xf) = DAT_1468b5d88._4_4_;
  }
  FUN_14198ae20(param_1,puVar1);
  return;
}



// FUNCTION 14196a760 FUN_14196a760 body=114 status=ok
// SIG undefined FUN_14196a760(void)

undefined8 * FUN_14196a760(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar1);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d741f0;
    puVar1[9] = 0;
  }
  TPanelChildren<SOverlay::FOverlaySlot>::Add(*(longlong *)(param_1 + 0x2f8) + 0x210,puVar1);
  return puVar1;
}



// FUNCTION 14196a7e0 FUN_14196a7e0 body=292 status=ok
// SIG undefined FUN_14196a7e0(void)

undefined8 * FUN_14196a7e0(longlong param_1,int param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)operator_new(0x60);
  if (puVar3 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar3);
    *puVar3 = &PTR__scalar_deleting_destructor__144d727e0;
    *(undefined4 *)(puVar3 + 4) = 1;
    *(undefined1 *)((longlong)puVar3 + 0x24) = 1;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined4 *)(puVar3 + 7) = 0x3f800000;
    *(undefined1 *)((longlong)puVar3 + 0x3c) = 1;
    puVar3[8] = 0;
    *(undefined4 *)(puVar3 + 9) = 0;
    puVar3[10] = 0;
    *(undefined4 *)(puVar3 + 0xb) = 0;
  }
  if (param_2 != -1) {
    if (*(char *)(param_1 + 0x228) == '\0') {
      lVar2 = *(longlong *)(param_1 + 0x210);
      if ((lVar2 != 0) && (puVar3[1] != lVar2)) {
        puVar3[1] = lVar2;
        FUN_141802340(puVar3);
      }
      plVar4 = (longlong *)(param_1 + 0x218);
      iVar1 = *(int *)(param_1 + 0x220);
      *(int *)(param_1 + 0x220) = iVar1 + 1;
      if (*(int *)(param_1 + 0x224) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar1);
      }
      _Src = (void *)(*plVar4 + (longlong)param_2 * 8);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar1 - param_2) << 3);
      *(undefined8 **)(*plVar4 + (longlong)param_2 * 8) = puVar3;
    }
    return puVar3;
  }
  TPanelChildren<SOverlay::FOverlaySlot>::Add(param_1 + 0x208,puVar3);
  return puVar3;
}



// FUNCTION 14196a910 AddSlot body=121 status=ok
// SIG undefined AddSlot(void)

undefined8 * SUniformGridPanel::AddSlot(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FSlotBase::FSlotBase(puVar1);
    puVar1[4] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d74630;
    *(undefined4 *)(puVar1 + 5) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = param_3;
  }
  TPanelChildren<SOverlay::FOverlaySlot>::Add(param_1 + 0x208,puVar1);
  return puVar1;
}



// FUNCTION 14196a990 FUN_14196a990 body=421 status=ok
// SIG undefined FUN_14196a990(void)

undefined8 * FUN_14196a990(longlong param_1,int param_2)

{
  longlong *plVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 local_30;
  undefined4 local_28;
  
  puVar5 = (undefined8 *)operator_new(0x50);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    FSlotBase::FSlotBase(puVar5);
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    *(undefined1 *)(puVar5 + 7) = 0;
    puVar5[8] = 0;
    *(undefined4 *)(puVar5 + 9) = 0;
    *puVar5 = &PTR__scalar_deleting_destructor__144d6e098;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x238) <= param_2)) {
    TPanelChildren<SOverlay::FOverlaySlot>::Add(param_1 + 0x220,puVar5);
  }
  else {
    if (*(char *)(param_1 + 0x240) == '\0') {
      lVar3 = *(longlong *)(param_1 + 0x228);
      if ((lVar3 != 0) && (puVar5[1] != lVar3)) {
        puVar5[1] = lVar3;
        FUN_141802340(puVar5);
      }
      plVar1 = (longlong *)(param_1 + 0x230);
      iVar2 = *(int *)(param_1 + 0x238);
      *(int *)(param_1 + 0x238) = iVar2 + 1;
      if (*(int *)(param_1 + 0x23c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      _Src = (void *)(*plVar1 + (longlong)param_2 * 8);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar2 - param_2) << 3);
      *(undefined8 **)(*plVar1 + (longlong)param_2 * 8) = puVar5;
    }
    if (((*(int *)(param_1 + 0x218) != 0) && (*(longlong **)(param_1 + 0x210) != (longlong *)0x0))
       && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))(), cVar4 != '\0')) {
      return puVar5;
    }
    piVar6 = (int *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x208);
    if (param_2 <= *piVar6) {
      piVar6 = (int *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x208);
      local_30 = 0;
      local_28 = 0;
      iVar2 = *piVar6;
      *(undefined1 *)(param_1 + 0x20c) = 1;
      *(int *)(param_1 + 0x208) = iVar2 + 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x210,&local_30);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
      return puVar5;
    }
  }
  return puVar5;
}



// FUNCTION 14196ab40 AddSlot body=115 status=ok
// SIG undefined AddSlot(void)

undefined8 * SWrapBox::AddSlot(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar1);
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d74a48;
    *(undefined1 *)((longlong)puVar1 + 0x54) = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0;
  }
  TPanelChildren<SOverlay::FOverlaySlot>::Add(param_1 + 0x220,puVar1);
  return puVar1;
}



// FUNCTION 14196abc0 FUN_14196abc0 body=497 status=ok
// SIG undefined FUN_14196abc0(void)

void FUN_14196abc0(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  undefined8 local_res8;
  
  cVar2 = FText::IsEmpty(param_1 + 0x4e8);
  if (cVar2 == '\0') {
    local_res8._0_4_ = *(int *)(param_1 + 0x680);
    iVar6 = (uint)(*(char *)(param_1 + 0x688) == '\x01') + *(int *)(param_1 + 0x684);
    puVar11 = (ulonglong *)(param_1 + 0x670);
    local_res8._4_4_ = 0;
    if (-1 < iVar6) {
      local_res8._4_4_ = iVar6;
    }
    if (*(char *)(param_1 + 0x678) == '\0') {
      puVar11 = &local_res8;
    }
    uVar7 = *puVar11;
    iVar6 = (int)(uVar7 >> 0x20);
    iVar8 = (int)uVar7;
    uVar12 = uVar7;
    if (param_2 == '\0') {
      if (iVar8 == (int)local_res8) {
        if (iVar6 <= local_res8._4_4_) {
          uVar12 = CONCAT44(local_res8._4_4_,(int)local_res8);
        }
      }
      else if (iVar8 <= (int)local_res8) {
        uVar12 = CONCAT44(local_res8._4_4_,(int)local_res8);
      }
    }
    else if (iVar8 == (int)local_res8) {
      if (local_res8._4_4_ <= iVar6) {
        uVar12 = CONCAT44(local_res8._4_4_,(int)local_res8);
      }
    }
    else {
      uVar12 = CONCAT44(local_res8._4_4_,(int)local_res8);
      if (iVar8 < (int)local_res8) {
        uVar12 = uVar7;
      }
    }
    puVar4 = (undefined8 *)FText::ToString(param_1 + 0x4e8);
    uVar7 = uVar12 >> 0x20;
    uVar10 = uVar12 & 0xffffffff;
    iVar6 = *(int *)(puVar4 + 1) + -1;
    if (*(int *)(puVar4 + 1) == 0) {
      iVar6 = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x48);
    do {
      iVar8 = (int)uVar10;
      if (*(int *)(puVar4 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar4;
      }
      iVar3 = FUN_141592950(*(undefined8 *)((longlong)iVar8 * 0x70 + *(longlong *)(lVar1 + 0x18)),
                            puVar5,*(undefined4 *)(param_1 + 0x500),param_2,(int)uVar7);
      if (iVar3 != -1) {
        if (&local_res8 != (undefined8 *)(param_1 + 0x670)) {
          *(undefined8 *)(param_1 + 0x670) = CONCAT44(iVar3,iVar8);
          *(undefined1 *)(param_1 + 0x678) = 1;
        }
        local_res8._4_4_ = iVar3 + iVar6;
        local_res8._0_4_ = iVar8;
        FUN_1419bc080(param_1 + 0x680,*(undefined8 *)(param_1 + 0x48),&local_res8);
        break;
      }
      if (param_2 == '\0') {
        uVar7 = 0;
        uVar10 = 0;
        if (iVar8 + 1U != *(uint *)(lVar1 + 0x20)) {
          uVar10 = (ulonglong)(iVar8 + 1U);
        }
      }
      else {
        uVar9 = iVar8 - 1;
        if ((int)uVar9 < 0) {
          uVar9 = *(int *)(lVar1 + 0x20) - 1;
        }
        uVar10 = (ulonglong)uVar9;
        iVar8 = *(int *)(*(longlong *)((longlong)(int)uVar9 * 0x70 + *(longlong *)(lVar1 + 0x18)) +
                        8);
        uVar7 = (ulonglong)(iVar8 - 1);
        if (iVar8 == 0) {
          uVar7 = 0;
        }
      }
    } while ((int)uVar10 != (int)uVar12);
  }
  FUN_1419a7100(param_1);
  return;
}



// FUNCTION 14196adc0 AlignBoxIntoScreen body=203 status=ok
// SIG undefined AlignBoxIntoScreen(void)

void SVirtualJoystick::AlignBoxIntoScreen
               (undefined8 param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_3;
  fVar2 = *param_4;
  if ((fVar1 <= fVar2) && (param_3[1] <= param_4[1])) {
    fVar4 = fVar1 * 0.5;
    fVar3 = *param_2;
    if (*param_2 - fVar4 < 0.0) {
      *param_2 = fVar4;
      fVar1 = *param_3;
      fVar2 = *param_4;
      fVar3 = fVar4;
    }
    if (fVar2 < fVar1 * 0.5 + fVar3) {
      *param_2 = fVar2 - fVar1 * 0.5;
    }
    fVar1 = param_3[1];
    fVar3 = fVar1 * 0.5;
    fVar2 = param_2[1];
    if (param_2[1] - fVar3 < 0.0) {
      param_2[1] = fVar3;
      fVar1 = param_3[1];
      fVar2 = fVar3;
    }
    if (param_4[1] < fVar1 * 0.5 + fVar2) {
      param_2[1] = param_4[1] - fVar1 * 0.5;
    }
  }
  return;
}



// FUNCTION 14196ae90 AnyTextSelected body=82 status=ok
// SIG undefined AnyTextSelected(void)

longlong FSlateEditableTextLayout::AnyTextSelected(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  int local_res8;
  int iStackX_c;
  
  local_res8 = *(int *)(param_1 + 0x680);
  iVar2 = (uint)(*(char *)(param_1 + 0x688) == '\x01') + *(int *)(param_1 + 0x684);
  iStackX_c = 0;
  if (-1 < iVar2) {
    iStackX_c = iVar2;
  }
  puVar3 = (ulonglong *)(param_1 + 0x670);
  if (*(char *)(param_1 + 0x678) == '\0') {
    puVar3 = (ulonglong *)&local_res8;
  }
  uVar1 = *puVar3;
  uVar4 = uVar1;
  if (((int)uVar1 == *(int *)(param_1 + 0x680)) &&
     (uVar4 = uVar1 >> 0x20, (int)(uVar1 >> 0x20) == iStackX_c)) {
    return (uVar1 >> 0x28) << 8;
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 14196aef0 FUN_14196aef0 body=914 status=ok
// SIG undefined FUN_14196aef0(void)

void FUN_14196aef0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  float *pfVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  char local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  int *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  local_res10[0] = 0;
  iVar8 = (*(code *)**(undefined8 **)(*param_1 + 0x220))();
  if (local_res10[0] < iVar8) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x230) + (longlong)local_res10[0] * 8);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      if (((*(int *)(lVar4 + 0xc0) != 0) && (*(longlong **)(lVar4 + 0xb8) != (longlong *)0x0)) &&
         (cVar7 = (**(code **)(**(longlong **)(lVar4 + 0xb8) + 0x18))(), cVar7 != '\0')) {
        if (*(int *)(lVar4 + 0xc0) == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = *(longlong **)(lVar4 + 0xb8);
        }
        (**(code **)(*plVar10 + 0x38))(plVar10,local_res8);
        *(char *)(lVar4 + 0xb0) = local_res8[0];
      }
      if (*(char *)(lVar4 + 0xb0) != DAT_1464b9ee9) {
        local_a8 = 0;
        local_a0 = 0;
        local_98 = local_res10;
        local_90 = &local_a8;
        FUN_14195da70(param_1 + 4,local_res18,&local_98,0);
        lVar4 = param_1[4];
        lVar11 = (longlong)local_res18[0] * 0x1c;
        iVar8 = *(int *)((longlong)param_1 + 0x1c);
        if (*(int *)((longlong)param_1 + 0x1c) == -1) {
          *(int *)((longlong)param_1 + 0x1c) = local_res10[0];
          iVar8 = local_res10[0];
        }
        if (local_res10[0] != iVar8) {
          *(float *)(param_1 + 2) = *(float *)(*param_1 + 0x248) + *(float *)(param_1 + 2);
        }
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        if (((*(int *)(lVar3 + 0x48) != 0) && (*(longlong **)(lVar3 + 0x40) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(lVar3 + 0x40) + 0x18))(), cVar7 != '\0')) {
          if (*(int *)(lVar3 + 0x48) == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)(lVar3 + 0x40);
          }
          (**(code **)(*plVar10 + 0x38))(plVar10,&local_88);
          *(undefined4 *)(lVar3 + 0x28) = local_88;
          *(undefined4 *)(lVar3 + 0x2c) = uStack_84;
          *(undefined4 *)(lVar3 + 0x30) = uStack_80;
          *(undefined4 *)(lVar3 + 0x34) = uStack_7c;
        }
        fVar12 = *(float *)(lVar3 + 0x30);
        fVar14 = *(float *)(lVar3 + 0x28);
        fVar1 = *(float *)(lVar3 + 0x34);
        fVar2 = *(float *)(lVar3 + 0x2c);
        pfVar9 = (float *)SWidget::GetDesiredSize(uVar5,local_res20);
        fVar13 = *(float *)(param_1 + 2);
        fVar14 = fVar14 + fVar12 + *pfVar9;
        fVar12 = pfVar9[1];
        *(float *)(lVar11 + 4 + lVar4) = fVar13;
        *(undefined4 *)(lVar11 + 8 + lVar4) = *(undefined4 *)((longlong)param_1 + 0x14);
        *(float *)(lVar11 + 0xc + lVar4) = fVar14;
        fVar13 = fVar13 + fVar14;
        *(float *)(lVar11 + 0x10 + lVar4) = fVar2 + fVar1 + fVar12;
        if (*(char *)(lVar3 + 0x54) == '\0') {
LAB_14196b185:
          lVar3 = *param_1;
          pfVar9 = (float *)(lVar3 + 0x208);
          if (((*(int *)(lVar3 + 0x218) != 0) && (*(longlong **)(lVar3 + 0x210) != (longlong *)0x0))
             && (cVar7 = (**(code **)(**(longlong **)(lVar3 + 0x210) + 0x18))(), cVar7 != '\0')) {
            if (*(int *)(lVar3 + 0x218) == 0) {
              plVar10 = (longlong *)0x0;
            }
            else {
              plVar10 = *(longlong **)(lVar3 + 0x210);
            }
            fVar12 = (float)(**(code **)(*plVar10 + 0x38))();
            *pfVar9 = fVar12;
          }
          if ((*pfVar9 <= fVar13 && fVar13 != *pfVar9) &&
             (local_res10[0] != *(int *)((longlong)param_1 + 0x1c))) {
            FUN_141982c60(param_1,local_res10[0] + -1);
            *(int *)((longlong)param_1 + 0x1c) = local_res10[0];
            *(int *)(lVar11 + 4 + lVar4) = (int)param_1[2];
            *(undefined4 *)(lVar11 + 8 + lVar4) = *(undefined4 *)((longlong)param_1 + 0x14);
          }
        }
        else {
          lVar6 = *param_1;
          pfVar9 = (float *)(lVar6 + 0x208);
          if (((*(int *)(lVar6 + 0x218) != 0) && (*(longlong **)(lVar6 + 0x210) != (longlong *)0x0))
             && (cVar7 = (**(code **)(**(longlong **)(lVar6 + 0x210) + 0x18))(), cVar7 != '\0')) {
            if (*(int *)(lVar6 + 0x218) == 0) {
              plVar10 = (longlong *)0x0;
            }
            else {
              plVar10 = *(longlong **)(lVar6 + 0x210);
            }
            fVar12 = (float)(**(code **)(*plVar10 + 0x38))();
            *pfVar9 = fVar12;
          }
          if (*(float *)(lVar3 + 0x50) < *pfVar9 || *(float *)(lVar3 + 0x50) == *pfVar9)
          goto LAB_14196b185;
          if (local_res10[0] != *(int *)((longlong)param_1 + 0x1c)) {
            FUN_141982c60(param_1,local_res10[0] + -1);
            *(int *)((longlong)param_1 + 0x1c) = local_res10[0];
            *(int *)(lVar11 + 4 + lVar4) = (int)param_1[2];
            *(undefined4 *)(lVar11 + 8 + lVar4) = *(undefined4 *)((longlong)param_1 + 0x14);
          }
          lVar3 = *param_1;
          if (((*(int *)(lVar3 + 0x218) != 0) && (*(longlong **)(lVar3 + 0x210) != (longlong *)0x0))
             && (cVar7 = (**(code **)(**(longlong **)(lVar3 + 0x210) + 0x18))(), cVar7 != '\0')) {
            if (*(int *)(lVar3 + 0x218) == 0) {
              plVar10 = (longlong *)0x0;
            }
            else {
              plVar10 = *(longlong **)(lVar3 + 0x210);
            }
            fVar12 = (float)(**(code **)(*plVar10 + 0x38))();
            *(float *)(lVar3 + 0x208) = fVar12;
          }
          *(float *)(lVar11 + 0xc + lVar4) = *(float *)(lVar3 + 0x208) - *(float *)(param_1 + 2);
        }
        fVar12 = *(float *)(lVar11 + 0x10 + lVar4);
        fVar14 = *(float *)(param_1 + 3);
        if (*(float *)(param_1 + 3) <= fVar12) {
          fVar14 = fVar12;
        }
        *(float *)(param_1 + 3) = fVar14;
        *(float *)(param_1 + 2) = *(float *)(lVar11 + 0xc + lVar4) + *(float *)(lVar11 + 4 + lVar4);
      }
      local_res10[0] = local_res10[0] + 1;
      iVar8 = (*(code *)**(undefined8 **)(*param_1 + 0x220))();
    } while (local_res10[0] < iVar8);
  }
  if (*(int *)((longlong)param_1 + 0x1c) != -1) {
    FUN_141982c60(param_1,local_res10[0] + -1);
  }
  return;
}



// FUNCTION 14196b290 Arrange body=227 status=ok
// SIG undefined Arrange(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void SWrapBox::FChildArranger::Arrange(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  int local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_78 = (undefined4)DAT_1468b5d88;
  local_70 = 0;
  local_74 = DAT_1468b5d88._4_4_;
  local_6c = 0xffffffff;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = param_1;
  local_80 = param_2;
  iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x220))();
  if ((int)local_60 - local_34 < iVar1) {
    FUN_14199f410(&local_68,iVar1);
  }
  FUN_14196aef0(&local_88);
  local_20 = 0;
  if (local_28 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_68);
  return;
}



// FUNCTION 14196b380 FUN_14196b380 body=1029 status=ok
// SIG undefined FUN_14196b380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_14196b380(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                   float param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined4 *local_1d0;
  longlong local_1c8;
  float local_1b8;
  float fStack_1b4;
  float local_1b0 [2];
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  undefined8 local_190;
  undefined8 local_188;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  undefined4 auStack_16c [5];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  float local_140;
  float local_13c;
  undefined1 local_138 [8];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  plVar7 = (longlong *)0x0;
  if (((*(int *)(param_4 + 0x40) != 0) && (*(longlong **)(param_4 + 0x38) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_4 + 0x38) + 0x18))(), cVar3 != '\0')) {
    plVar6 = plVar7;
    if (*(int *)(param_4 + 0x40) != 0) {
      plVar6 = *(longlong **)(param_4 + 0x38);
    }
    (**(code **)(*plVar6 + 0x38))(plVar6,&local_130);
    *(undefined4 *)(param_4 + 0x20) = local_130;
    *(undefined4 *)(param_4 + 0x24) = uStack_12c;
    *(undefined4 *)(param_4 + 0x28) = uStack_128;
    *(undefined4 *)(param_4 + 0x2c) = uStack_124;
  }
  SWidget::GetDesiredSize(*(undefined8 *)(param_4 + 0x10),local_1b0);
  fVar12 = *(float *)(param_4 + 0x24);
  fVar13 = *(float *)(param_4 + 0x2c);
  fVar11 = *(float *)(param_2 + 4);
  iVar2 = *(int *)(param_4 + 0x4c);
  fVar14 = *(float *)(param_4 + 0x28) + *(float *)(param_4 + 0x20) + local_1b0[0];
  fVar10 = fVar11 - (fVar12 + fVar13);
  fStack_1b4 = fVar10;
  if (iVar2 != 0) {
    lVar4 = SWidget::GetDesiredSize(*(undefined8 *)(param_4 + 0x10),local_138);
    fVar8 = *(float *)(lVar4 + 4);
    if (fVar10 <= *(float *)(lVar4 + 4)) {
      fVar8 = fVar10;
    }
    fStack_1b4 = fVar8;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        fVar11 = (fVar11 - fVar8) * 0.5 + fVar12;
      }
      else {
        fStack_1b4 = fVar10;
        if (iVar2 != 3) goto LAB_14196b4a7;
        fVar11 = fVar11 - fVar8;
      }
      fVar12 = fVar11 - fVar13;
      fStack_1b4 = fVar8;
    }
  }
LAB_14196b4a7:
  local_1b8 = local_1b0[0];
  fVar13 = param_5 + *(float *)(param_4 + 0x20);
  local_19c = 0x3f800000;
  local_198 = fVar13;
  local_194 = fVar12;
  lVar4 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_4 + 0x10) + 0xd0);
  if (*(char *)(lVar4 + 0x18) == '\0') {
    local_188 = CONCAT44(fStack_1b4,local_1b8);
    fVar11 = *(float *)(param_2 + 8);
    local_150 = 0x3f800000;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0x3f800000;
    local_140 = fVar13;
    local_13c = fVar12;
    Concatenate<FTransform2D>(auStack_16c,&local_150,param_2 + 0x1c);
    uStack_154 = CONCAT31(uStack_154._1_3_,
                          (byte)uStack_154 ^ (*(byte *)(param_2 + 0x34) ^ (byte)uStack_154) & 1);
    fStack_17c = fVar11 * fVar13 + *(float *)(param_2 + 0xc);
    local_b0 = *(undefined8 *)(param_4 + 0x10);
    local_178 = fVar11 * fVar12 + *(float *)(param_2 + 0x10);
    plVar7 = *(longlong **)(param_4 + 0x18);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    uStack_e0 = CONCAT44(fStack_17c,fVar11);
    local_d8 = CONCAT44(fVar13,local_178);
    uStack_d0 = CONCAT44(auStack_16c[0],fVar12);
    local_e8 = local_188;
    uVar9 = uStack_154;
    fStack_180 = fVar11;
    fStack_174 = fVar13;
    fStack_170 = fVar12;
  }
  else {
    lVar4 = *(longlong *)(param_4 + 0x10);
    if (((*(int *)(lVar4 + 0x118) != 0) && (*(longlong **)(lVar4 + 0x110) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(lVar4 + 0x110) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(lVar4 + 0x118) != 0) {
        plVar7 = *(longlong **)(lVar4 + 0x110);
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_190);
      *(undefined8 *)(lVar4 + 0x100) = local_190;
    }
    uVar5 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_4 + 0x10) + 0xd0);
    local_1a8 = *(undefined4 *)(param_2 + 8);
    local_1c8 = param_2 + 0x1c;
    local_1a4 = *(undefined4 *)(param_2 + 0xc);
    local_1d0 = &local_1a8;
    local_1a0 = *(undefined4 *)(param_2 + 0x10);
    local_1d8 = (undefined8 *)(lVar4 + 0x100);
    FGeometry::FGeometry(&local_120,&local_1b8,&local_19c,uVar5);
    local_b0 = *(undefined8 *)(param_4 + 0x10);
    plVar7 = *(longlong **)(param_4 + 0x18);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_e8 = local_120;
    uStack_e0 = uStack_118;
    local_d8 = local_110;
    uStack_d0 = uStack_108;
    local_158 = (undefined4)local_f0;
    uVar9 = (int)((ulonglong)local_f0 >> 0x20);
  }
  local_b8 = CONCAT44(uVar9,local_158);
  local_a8 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
  FUN_141801ed0(param_3,&local_e8);
  plVar7 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_a8 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_a8)(local_a8);
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
  return fVar14 + param_5;
}



// FUNCTION 14196b790 FUN_14196b790 body=1027 status=ok
// SIG undefined FUN_14196b790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_14196b790(undefined8 param_1,float *param_2,undefined8 param_3,longlong param_4,
                   float param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float local_1b8;
  float fStack_1b4;
  undefined1 local_1b0 [4];
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  undefined8 local_190;
  undefined8 local_188;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  undefined4 auStack_16c [5];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  float local_140;
  float local_13c;
  undefined1 local_138 [8];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  plVar8 = (longlong *)0x0;
  if (((*(int *)(param_4 + 0x40) != 0) && (*(longlong **)(param_4 + 0x38) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_4 + 0x38) + 0x18))(), cVar3 != '\0')) {
    plVar7 = plVar8;
    if (*(int *)(param_4 + 0x40) != 0) {
      plVar7 = *(longlong **)(param_4 + 0x38);
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_130);
    *(undefined4 *)(param_4 + 0x20) = local_130;
    *(undefined4 *)(param_4 + 0x24) = uStack_12c;
    *(undefined4 *)(param_4 + 0x28) = uStack_128;
    *(undefined4 *)(param_4 + 0x2c) = uStack_124;
  }
  SWidget::GetDesiredSize(*(undefined8 *)(param_4 + 0x10),local_1b0);
  fVar13 = *(float *)(param_4 + 0x20);
  fVar14 = *(float *)(param_4 + 0x28);
  fVar12 = *param_2;
  iVar2 = *(int *)(param_4 + 0x48);
  fVar15 = *(float *)(param_4 + 0x2c) + *(float *)(param_4 + 0x24) + local_1ac;
  fVar11 = fVar12 - (fVar13 + fVar14);
  local_1b8 = fVar11;
  if (iVar2 != 0) {
    pfVar4 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_4 + 0x10),local_138);
    fVar9 = *pfVar4;
    if (fVar11 <= *pfVar4) {
      fVar9 = fVar11;
    }
    local_1b8 = fVar9;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        fVar12 = (fVar12 - fVar9) * 0.5 + fVar13;
      }
      else {
        local_1b8 = fVar11;
        if (iVar2 != 3) goto LAB_14196b8b5;
        fVar12 = fVar12 - fVar9;
      }
      fVar13 = fVar12 - fVar14;
      local_1b8 = fVar9;
    }
  }
LAB_14196b8b5:
  fStack_1b4 = local_1ac;
  fVar14 = param_5 + *(float *)(param_4 + 0x24);
  local_19c = 0x3f800000;
  local_198 = fVar13;
  local_194 = fVar14;
  lVar5 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_4 + 0x10) + 0xd0);
  if (*(char *)(lVar5 + 0x18) == '\0') {
    local_188 = CONCAT44(fStack_1b4,local_1b8);
    fVar12 = param_2[2];
    local_150 = 0x3f800000;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0x3f800000;
    local_140 = fVar13;
    local_13c = fVar14;
    Concatenate<FTransform2D>(auStack_16c,&local_150,param_2 + 7);
    uStack_154 = CONCAT31(uStack_154._1_3_,
                          (byte)uStack_154 ^ (*(byte *)(param_2 + 0xd) ^ (byte)uStack_154) & 1);
    fStack_17c = fVar12 * fVar13 + param_2[3];
    local_b0 = *(undefined8 *)(param_4 + 0x10);
    local_178 = fVar12 * fVar14 + param_2[4];
    plVar8 = *(longlong **)(param_4 + 0x18);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    uStack_e0 = CONCAT44(fStack_17c,fVar12);
    local_d8 = CONCAT44(fVar13,local_178);
    uStack_d0 = CONCAT44(auStack_16c[0],fVar14);
    local_e8 = local_188;
    uVar10 = uStack_154;
    fStack_180 = fVar12;
    fStack_174 = fVar13;
    fStack_170 = fVar14;
  }
  else {
    lVar5 = *(longlong *)(param_4 + 0x10);
    if (((*(int *)(lVar5 + 0x118) != 0) && (*(longlong **)(lVar5 + 0x110) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x110) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(lVar5 + 0x118) != 0) {
        plVar8 = *(longlong **)(lVar5 + 0x110);
      }
      (**(code **)(*plVar8 + 0x38))(plVar8,&local_190);
      *(undefined8 *)(lVar5 + 0x100) = local_190;
    }
    uVar6 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_4 + 0x10) + 0xd0);
    local_1a8 = param_2[2];
    local_1c8 = param_2 + 7;
    local_1a4 = param_2[3];
    local_1d0 = &local_1a8;
    local_1a0 = param_2[4];
    local_1d8 = (undefined8 *)(lVar5 + 0x100);
    FGeometry::FGeometry(&local_120,&local_1b8,&local_19c,uVar6);
    local_b0 = *(undefined8 *)(param_4 + 0x10);
    plVar8 = *(longlong **)(param_4 + 0x18);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_e8 = local_120;
    uStack_e0 = uStack_118;
    local_d8 = local_110;
    uStack_d0 = uStack_108;
    local_158 = (undefined4)local_f0;
    uVar10 = (int)((ulonglong)local_f0 >> 0x20);
  }
  local_b8 = CONCAT44(uVar10,local_158);
  local_a8 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  }
  FUN_141801ed0(param_3,&local_e8);
  plVar8 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_a8 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a8)(local_a8);
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
  return fVar15 + param_5;
}



// FUNCTION 14196bba0 FUN_14196bba0 body=1255 status=ok
// SIG undefined FUN_14196bba0(void)

longlong * FUN_14196bba0(longlong param_1,longlong *param_2,float *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_res8;
  float local_resc;
  int local_res10;
  float *local_res18;
  float local_res20;
  int local_res24;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined1 local_e8 [8];
  undefined4 local_e0;
  float fStack_dc;
  float local_d8;
  
  puVar1 = (undefined8 *)(param_1 + 0x208);
  uVar15 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_res18 = param_3;
  iVar8 = (**(code **)*puVar1)(puVar1);
  iVar11 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar8) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              (param_2,iVar8);
  }
  iVar8 = *(int *)(param_1 + 0x238);
  fVar22 = 0.0;
  fVar23 = 0.0;
  fVar20 = 0.0;
  local_res10 = iVar8;
  iVar9 = (**(code **)*puVar1)();
  uVar16 = uVar15;
  uVar19 = uVar15;
  if (0 < iVar9) {
    do {
      lVar17 = *(longlong *)(*(longlong *)(uVar16 + *(longlong *)(param_1 + 0x218)) + 0x10);
      if (((*(int *)(lVar17 + 0xc0) != 0) && (*(longlong **)(lVar17 + 0xb8) != (longlong *)0x0)) &&
         (cVar7 = (**(code **)(**(longlong **)(lVar17 + 0xb8) + 0x18))(), cVar7 != '\0')) {
        if (*(int *)(lVar17 + 0xc0) == 0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = *(longlong **)(lVar17 + 0xb8);
        }
        (**(code **)(*plVar14 + 0x38))(plVar14,&local_res8);
        *(char *)(lVar17 + 0xb0) = local_res8._0_1_;
      }
      if (*(char *)(lVar17 + 0xb0) != DAT_1464b9ee9) {
        uVar19 = (ulonglong)((int)uVar19 + 1);
        lVar17 = *(longlong *)(uVar16 + *(longlong *)(param_1 + 0x218));
        if (((*(int *)(lVar17 + 0x30) != 0) && (*(longlong **)(lVar17 + 0x28) != (longlong *)0x0))
           && (cVar7 = (**(code **)(**(longlong **)(lVar17 + 0x28) + 0x18))(), cVar7 != '\0')) {
          if (*(int *)(lVar17 + 0x30) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(lVar17 + 0x28);
          }
          uVar10 = (**(code **)(*plVar14 + 0x38))();
          *(undefined4 *)(lVar17 + 0x20) = uVar10;
        }
        lVar6 = *(longlong *)(uVar16 + *(longlong *)(param_1 + 0x218));
        if (*(int *)(lVar17 + 0x20) == 0) {
          pfVar12 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(lVar6 + 0x10),&local_res20);
          if (local_res10 != 0) {
            pfVar12 = pfVar12 + 1;
          }
          fVar20 = fVar20 + *pfVar12;
          iVar8 = local_res10;
        }
        else {
          if (((*(int *)(lVar6 + 0x48) != 0) && (*(longlong **)(lVar6 + 0x40) != (longlong *)0x0))
             && (cVar7 = (**(code **)(**(longlong **)(lVar6 + 0x40) + 0x18))(), cVar7 != '\0')) {
            if (*(int *)(lVar6 + 0x48) == 0) {
              plVar14 = (longlong *)0x0;
            }
            else {
              plVar14 = *(longlong **)(lVar6 + 0x40);
            }
            uVar10 = (**(code **)(*plVar14 + 0x38))();
            *(undefined4 *)(lVar6 + 0x38) = uVar10;
          }
          fVar23 = fVar23 + *(float *)(lVar6 + 0x38);
          iVar8 = local_res10;
        }
      }
      iVar11 = (int)uVar19;
      uVar18 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar18;
      iVar9 = (**(code **)*puVar1)();
      uVar16 = uVar16 + 8;
    } while ((int)uVar18 < iVar9);
  }
  pfVar12 = local_res18;
  uVar16 = 0;
  uVar15 = (ulonglong)(iVar11 - 1U);
  if ((int)(iVar11 - 1U) < 1) {
    uVar15 = uVar16;
  }
  fVar2 = *(float *)((ulonglong)(-(uint)(iVar8 != 0) & 4) + (longlong)local_res18);
  fVar3 = *(float *)(param_1 + 0x264);
  iVar11 = (**(code **)*puVar1)(puVar1);
  if (0 < iVar11) {
    local_e0 = 0x3f800000;
    uVar19 = uVar16;
    do {
      lVar17 = *(longlong *)(uVar19 + *(longlong *)(param_1 + 0x218));
      if (((*(int *)(lVar17 + 0x30) != 0) && (*(longlong **)(lVar17 + 0x28) != (longlong *)0x0)) &&
         (cVar7 = (**(code **)(**(longlong **)(lVar17 + 0x28) + 0x18))(), cVar7 != '\0')) {
        if (*(int *)(lVar17 + 0x30) == 0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = *(longlong **)(lVar17 + 0x28);
        }
        uVar10 = (**(code **)(*plVar14 + 0x38))();
        *(undefined4 *)(lVar17 + 0x20) = uVar10;
      }
      if (*(int *)(lVar17 + 0x20) == 0) {
        pfVar13 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(lVar17 + 0x10),local_e8);
        if (iVar8 != 0) {
          pfVar13 = pfVar13 + 1;
        }
        fVar21 = *pfVar13;
      }
      else {
        if (((*(int *)(lVar17 + 0x48) != 0) && (*(longlong **)(lVar17 + 0x40) != (longlong *)0x0))
           && (cVar7 = (**(code **)(**(longlong **)(lVar17 + 0x40) + 0x18))(), cVar7 != '\0')) {
          if (*(int *)(lVar17 + 0x48) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(lVar17 + 0x40);
          }
          uVar10 = (**(code **)(*plVar14 + 0x38))();
          *(undefined4 *)(lVar17 + 0x38) = uVar10;
        }
        fVar21 = (((fVar2 - (float)(int)uVar15 * fVar3) - fVar20) * *(float *)(lVar17 + 0x38)) /
                 fVar23;
      }
      lVar17 = *(longlong *)(lVar17 + 0x10);
      if (((*(int *)(lVar17 + 0xc0) != 0) && (*(longlong **)(lVar17 + 0xb8) != (longlong *)0x0)) &&
         (cVar7 = (**(code **)(**(longlong **)(lVar17 + 0xb8) + 0x18))(), cVar7 != '\0')) {
        if (*(int *)(lVar17 + 0xc0) == 0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = *(longlong **)(lVar17 + 0xb8);
        }
        (**(code **)(*plVar14 + 0x38))(plVar14,&local_res18);
        *(char *)(lVar17 + 0xb0) = (char)local_res18;
      }
      iVar8 = *(int *)(param_1 + 0x238);
      cVar7 = *(char *)(lVar17 + 0xb0);
      if (iVar8 == 0) {
        local_res20 = fVar22;
        local_res24 = iVar8;
      }
      else {
        local_resc = fVar22;
        local_res8 = 0.0;
      }
      pfVar13 = &local_res8;
      if (iVar8 == 0) {
        pfVar13 = &local_res20;
      }
      fStack_dc = *pfVar13;
      local_d8 = pfVar13[1];
      if (iVar8 != 0) {
        pfVar13 = &local_f0;
        local_f0 = *pfVar12;
        local_ec = fVar21;
      }
      else {
        pfVar13 = &local_f8;
        local_f4 = pfVar12[1];
        local_f8 = fVar21;
      }
      iVar8 = (int)param_2[1];
      lVar17 = (longlong)iVar8;
      fVar4 = *pfVar13;
      fVar5 = pfVar13[1];
      *(int *)(param_2 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar8);
      }
      lVar6 = *param_2;
      *(ulonglong *)(lVar6 + lVar17 * 0x14) = CONCAT44(fStack_dc,local_e0);
      *(float *)(lVar6 + 8 + lVar17 * 0x14) = local_d8;
      *(float *)(lVar6 + 0xc + lVar17 * 0x14) = fVar4;
      *(float *)(lVar6 + 0x10 + lVar17 * 0x14) = fVar5;
      if (cVar7 != DAT_1464b9ee9) {
        fVar22 = fVar22 + (float)((int)ROUND(*(float *)(param_1 + 0x264) * 2.0 + fVar21 * 2.0 + 0.5)
                                 >> 1);
      }
      uVar18 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar18;
      uVar19 = uVar19 + 8;
      iVar11 = (**(code **)*puVar1)(puVar1);
      iVar8 = local_res10;
    } while ((int)uVar18 < iVar11);
  }
  return param_2;
}



// FUNCTION 14196c090 FUN_14196c090 body=2386 status=ok
// SIG undefined FUN_14196c090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14196c090(longlong param_1,float *param_2,byte *param_3,longlong param_4)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  bool bVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  uint uVar25;
  longlong *plVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_4d8 [32];
  undefined8 *local_4b8;
  float *local_4b0;
  float *local_4a8;
  byte local_498;
  byte local_497;
  undefined1 local_496 [6];
  undefined8 local_490;
  uint local_488;
  float local_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  longlong local_468;
  float local_460;
  float fStack_45c;
  byte *local_458;
  float *local_450;
  float local_448;
  float local_444;
  float local_440;
  undefined4 local_43c;
  float local_438;
  float local_434;
  float local_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  float local_3c0;
  float local_3bc;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined1 local_368 [8];
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 local_310;
  undefined1 local_308 [512];
  undefined1 *local_108;
  undefined8 local_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  puVar3 = (undefined8 *)(param_1 + 0x208);
  local_468 = param_1;
  local_458 = param_3;
  local_450 = param_2;
  iVar13 = (**(code **)*puVar3)(puVar3);
  if (0 < iVar13) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469f55bc) &&
       (_Init_thread_header(&DAT_1469f55bc), DAT_1469f55bc == -1)) {
      plVar22 = (longlong *)USlateSettings::GetPrivateStaticClass();
      lVar23 = plVar22[0x1f];
      if (lVar23 == 0) {
        (**(code **)(*plVar22 + 0x368))(plVar22);
        lVar23 = plVar22[0x1f];
      }
      DAT_1469f55b8 = *(char *)(lVar23 + 0x28);
      _Init_thread_footer(&DAT_1469f55bc);
    }
    plVar22 = (longlong *)0x0;
    local_108 = (undefined1 *)0x0;
    local_100 = 0;
    iVar13 = (**(code **)*puVar3)(puVar3);
    if (local_100._4_4_ < iVar13) {
      FUN_1405f0d80(local_308,iVar13);
    }
    iVar13 = (**(code **)*puVar3)(puVar3);
    lVar23 = local_468;
    plVar24 = plVar22;
    plVar26 = plVar22;
    if (0 < iVar13) {
      do {
        local_490 = (longlong *)CONCAT44(local_490._4_4_,(int)plVar26);
        lVar15 = *(longlong *)((longlong)plVar24 + *(longlong *)(lVar23 + 0x218));
        if (((*(int *)(lVar15 + 0xb8) != 0) && (*(longlong **)(lVar15 + 0xb0) != (longlong *)0x0))
           && (cVar11 = (**(code **)(**(longlong **)(lVar15 + 0xb0) + 0x18))(), cVar11 != '\0')) {
          plVar17 = plVar22;
          if (*(int *)(lVar15 + 0xb8) != 0) {
            plVar17 = *(longlong **)(lVar15 + 0xb0);
          }
          uVar27 = (**(code **)(*plVar17 + 0x38))();
          *(undefined4 *)(lVar15 + 0xa8) = uVar27;
        }
        uVar10 = local_100;
        lVar21 = (longlong)(int)local_100;
        local_490 = (longlong *)CONCAT44(*(undefined4 *)(lVar15 + 0xa8),(undefined4)local_490);
        iVar13 = (int)local_100 + 1;
        local_100 = CONCAT44(local_100._4_4_,iVar13);
        if (local_100._4_4_ < iVar13) {
          TArray<FChildZOrder,TInlineAllocator<64,FDefaultAllocator>_>::ResizeGrow
                    (local_308,uVar10 & 0xffffffff);
        }
        puVar18 = local_308;
        if (local_108 != (undefined1 *)0x0) {
          puVar18 = local_108;
        }
        uVar25 = (int)plVar26 + 1;
        *(longlong **)(puVar18 + lVar21 * 8) = local_490;
        iVar13 = (**(code **)*puVar3)(puVar3);
        plVar24 = plVar24 + 1;
        plVar26 = (longlong *)(ulonglong)uVar25;
        param_2 = local_450;
      } while ((int)uVar25 < iVar13);
    }
    puVar18 = local_308;
    if (local_108 != (undefined1 *)0x0) {
      puVar18 = local_108;
    }
    AlgoImpl::
    IntroSortInternal<FChildZOrder,FIdentityFunctor,TDereferenceWrapper<FChildZOrder,FSortSlotsByZOrder>_>
              (puVar18,(longlong)(int)local_100,local_496[0],local_496);
    fVar33 = -3.4028235e+38;
    local_488 = 0;
    iVar13 = (**(code **)*puVar3)(puVar3);
    if (0 < iVar13) {
      local_490 = (longlong *)0x0;
      plVar24 = plVar22;
      do {
        puVar18 = local_308;
        if (local_108 != (undefined1 *)0x0) {
          puVar18 = local_108;
        }
        lVar23 = *(longlong *)
                  (*(longlong *)(local_468 + 0x218) +
                  (longlong)*(int *)(puVar18 + (longlong)plVar22 * 8) * 8);
        lVar15 = *(longlong *)(lVar23 + 0x10);
        if (((*(int *)(lVar15 + 0xc0) != 0) && (*(longlong **)(lVar15 + 0xb8) != (longlong *)0x0))
           && (cVar11 = (**(code **)(**(longlong **)(lVar15 + 0xb8) + 0x18))(), cVar11 != '\0')) {
          if (*(int *)(lVar15 + 0xc0) == 0) {
            plVar22 = (longlong *)0x0;
          }
          else {
            plVar22 = *(longlong **)(lVar15 + 0xb8);
          }
          (**(code **)(*plVar22 + 0x38))(plVar22,&local_498);
          *(byte *)(lVar15 + 0xb0) = local_498;
        }
        local_497 = *(byte *)(lVar15 + 0xb0);
        uVar25 = (uint)plVar24;
        if ((*local_458 & local_497) != 0) {
          if (((*(int *)(lVar23 + 0x40) != 0) && (*(longlong **)(lVar23 + 0x38) != (longlong *)0x0))
             && (cVar11 = (**(code **)(**(longlong **)(lVar23 + 0x38) + 0x18))(), cVar11 != '\0')) {
            if (*(int *)(lVar23 + 0x40) == 0) {
              plVar22 = (longlong *)0x0;
            }
            else {
              plVar22 = *(longlong **)(lVar23 + 0x38);
            }
            (**(code **)(*plVar22 + 0x38))(plVar22,&local_360);
            *(undefined8 *)(lVar23 + 0x20) = local_360;
            *(undefined8 *)(lVar23 + 0x28) = uStack_358;
          }
          local_478 = *(float *)(lVar23 + 0x20);
          fStack_474 = *(float *)(lVar23 + 0x24);
          fStack_470 = *(float *)(lVar23 + 0x28);
          fStack_46c = *(float *)(lVar23 + 0x2c);
          if (((*(int *)(lVar23 + 0x88) != 0) && (*(longlong **)(lVar23 + 0x80) != (longlong *)0x0))
             && (cVar11 = (**(code **)(**(longlong **)(lVar23 + 0x80) + 0x18))(), cVar11 != '\0')) {
            if (*(int *)(lVar23 + 0x88) == 0) {
              plVar22 = (longlong *)0x0;
            }
            else {
              plVar22 = *(longlong **)(lVar23 + 0x80);
            }
            (**(code **)(*plVar22 + 0x38))(plVar22,&local_420);
            *(undefined8 *)(lVar23 + 0x70) = local_420;
          }
          fVar5 = *(float *)(lVar23 + 0x70);
          fVar6 = *(float *)(lVar23 + 0x74);
          if (((*(int *)(lVar23 + 0x68) != 0) && (*(longlong **)(lVar23 + 0x60) != (longlong *)0x0))
             && (cVar11 = (**(code **)(**(longlong **)(lVar23 + 0x60) + 0x18))(), cVar11 != '\0')) {
            if (*(int *)(lVar23 + 0x68) == 0) {
              plVar22 = (longlong *)0x0;
            }
            else {
              plVar22 = *(longlong **)(lVar23 + 0x60);
            }
            (**(code **)(*plVar22 + 0x38))(plVar22,&local_350);
            *(undefined8 *)(lVar23 + 0x48) = local_350;
            *(undefined8 *)(lVar23 + 0x50) = uStack_348;
          }
          local_430 = *(float *)(lVar23 + 0x48);
          fStack_42c = *(float *)(lVar23 + 0x4c);
          fStack_428 = *(float *)(lVar23 + 0x50);
          fStack_424 = *(float *)(lVar23 + 0x54);
          if (((*(int *)(lVar23 + 0xa0) != 0) && (*(longlong **)(lVar23 + 0x98) != (longlong *)0x0))
             && (cVar11 = (**(code **)(**(longlong **)(lVar23 + 0x98) + 0x18))(), cVar11 != '\0')) {
            if (*(int *)(lVar23 + 0xa0) == 0) {
              plVar22 = (longlong *)0x0;
            }
            else {
              plVar22 = *(longlong **)(lVar23 + 0x98);
            }
            uVar12 = (**(code **)(*plVar22 + 0x38))();
            *(undefined1 *)(lVar23 + 0x90) = uVar12;
          }
          fVar9 = fStack_46c;
          fVar8 = fStack_470;
          bVar20 = local_430 == fStack_428;
          fVar31 = local_430 * *param_2;
          fVar30 = fStack_42c * param_2[1];
          fVar32 = fStack_428 * *param_2;
          fVar29 = fStack_424 * param_2[1];
          bVar7 = fStack_42c == fStack_424;
          local_460 = fStack_470;
          fStack_45c = fStack_46c;
          if (*(char *)(lVar23 + 0x90) == '\0') {
            pfVar14 = (float *)&local_418;
            local_418 = CONCAT44(fStack_46c,fStack_470);
          }
          else {
            pfVar14 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(lVar23 + 0x10),local_368);
          }
          local_480 = *pfVar14;
          fStack_47c = pfVar14[1];
          fVar31 = fVar31 + local_478;
          if (bVar20) {
            fVar31 = fVar31 - fVar5 * local_480;
          }
          else {
            local_480 = (fVar32 - fVar31) - fVar8;
          }
          fVar30 = fVar30 + fStack_474;
          if (bVar7) {
            fVar30 = fVar30 - fVar6 * fStack_47c;
          }
          else {
            fStack_47c = (fVar29 - fVar30) - fVar9;
          }
          local_43c = 0x3f800000;
          local_438 = fVar31;
          local_434 = fVar30;
          lVar15 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar23 + 0x10) + 0xd0);
          if (*(char *)(lVar15 + 0x18) == '\0') {
            local_408 = CONCAT44(fStack_47c,local_480);
            fVar5 = param_2[2];
            local_3d0 = 0x3f800000;
            uStack_3cc = 0;
            uStack_3c8 = 0;
            uStack_3c4 = 0x3f800000;
            local_3c0 = fVar31;
            local_3bc = fVar30;
            Concatenate<FTransform2D>(&uStack_3ec,&local_3d0,param_2 + 7);
            uStack_3d4 = CONCAT31(uStack_3d4._1_3_,
                                  (byte)uStack_3d4 ^
                                  (*(byte *)(param_2 + 0xd) ^ (byte)uStack_3d4) & 1);
            fStack_3fc = fVar31 * fVar5 + param_2[3];
            fStack_400 = fVar5;
            local_3f8 = fVar30 * fVar5 + param_2[4];
            uVar16 = *(undefined8 *)(lVar23 + 0x10);
            plVar22 = *(longlong **)(lVar23 + 0x18);
            fStack_3f4 = fVar31;
            fStack_3f0 = fVar30;
            if (plVar22 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
              UNLOCK();
            }
            local_3b8 = local_408;
            uStack_3b0 = CONCAT44(fStack_3fc,fVar5);
            local_3a8 = CONCAT44(fVar31,local_3f8);
            uStack_3a0 = CONCAT44(uStack_3ec,fVar30);
            local_398 = local_3e8;
            uStack_394 = uStack_3e4;
            uStack_390 = uStack_3e0;
            uStack_38c = uStack_3dc;
            uVar27 = local_3d8;
            uVar28 = uStack_3d4;
          }
          else {
            lVar15 = *(longlong *)(lVar23 + 0x10);
            if (((*(int *)(lVar15 + 0x118) != 0) &&
                (*(longlong **)(lVar15 + 0x110) != (longlong *)0x0)) &&
               (cVar11 = (**(code **)(**(longlong **)(lVar15 + 0x110) + 0x18))(), cVar11 != '\0')) {
              if (*(int *)(lVar15 + 0x118) == 0) {
                plVar22 = (longlong *)0x0;
              }
              else {
                plVar22 = *(longlong **)(lVar15 + 0x110);
              }
              (**(code **)(*plVar22 + 0x38))(plVar22,&local_410);
              *(undefined8 *)(lVar15 + 0x100) = local_410;
            }
            uVar16 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar23 + 0x10) + 0xd0);
            local_448 = param_2[2];
            local_4a8 = param_2 + 7;
            local_444 = param_2[3];
            local_4b0 = &local_448;
            local_440 = param_2[4];
            local_4b8 = (undefined8 *)(lVar15 + 0x100);
            FGeometry::FGeometry(&local_340,&local_480,&local_43c,uVar16);
            uVar16 = *(undefined8 *)(lVar23 + 0x10);
            plVar22 = *(longlong **)(lVar23 + 0x18);
            if (plVar22 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
              UNLOCK();
            }
            local_3b8 = local_340;
            uStack_3b0 = uStack_338;
            local_3a8 = local_330;
            uStack_3a0 = uStack_328;
            local_398 = local_320;
            uStack_394 = uStack_31c;
            uStack_390 = uStack_318;
            uStack_38c = uStack_314;
            uVar27 = (int)local_310;
            uVar28 = (int)((ulonglong)local_310 >> 0x20);
          }
          local_388 = CONCAT44(uVar28,uVar27);
          if (plVar22 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
            UNLOCK();
            LOCK();
            plVar24 = plVar22 + 1;
            lVar23 = *plVar24;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)lVar23 == 1) {
              (**(code **)*plVar22)(plVar22);
              LOCK();
              piVar1 = (int *)((longlong)plVar22 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar22 + 8))(plVar22,1);
              }
            }
          }
          pbVar4 = local_458;
          if ((local_497 & *local_458) == 0) {
LAB_14196c818:
            if (plVar22 != (longlong *)0x0) {
              LOCK();
              plVar24 = plVar22 + 1;
              lVar23 = *plVar24;
              *(int *)plVar24 = (int)*plVar24 + -1;
              UNLOCK();
              if ((int)lVar23 == 1) {
                (**(code **)*plVar22)();
                LOCK();
                piVar1 = (int *)((longlong)plVar22 + 0xc);
                iVar13 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar22 + 8))(plVar22,1);
                }
              }
            }
          }
          else {
            pbVar2 = local_458 + 8;
            iVar13 = *(int *)(local_458 + 0x130);
            lVar23 = (longlong)iVar13;
            *(int *)(local_458 + 0x130) = iVar13 + 1;
            if (*(int *)(local_458 + 0x134) < iVar13 + 1) {
              TArray<FArrangedWidget,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (pbVar2,iVar13);
            }
            pbVar19 = *(byte **)(pbVar4 + 0x128);
            if (*(byte **)(pbVar4 + 0x128) == (byte *)0x0) {
              pbVar19 = pbVar2;
            }
            *(undefined8 *)(pbVar19 + lVar23 * 0x48) = local_3b8;
            *(undefined8 *)(pbVar19 + lVar23 * 0x48 + 8) = uStack_3b0;
            *(undefined8 *)(pbVar19 + lVar23 * 0x48 + 0x10) = local_3a8;
            *(undefined8 *)(pbVar19 + lVar23 * 0x48 + 0x10 + 8) = uStack_3a0;
            pbVar4 = pbVar19 + lVar23 * 0x48 + 0x20;
            *(undefined4 *)pbVar4 = local_398;
            *(undefined4 *)(pbVar4 + 4) = uStack_394;
            *(undefined4 *)(pbVar4 + 8) = uStack_390;
            *(undefined4 *)(pbVar4 + 0xc) = uStack_38c;
            *(undefined8 *)(pbVar19 + lVar23 * 0x48 + 0x30) = local_388;
            *(undefined8 *)(pbVar19 + lVar23 * 0x48 + 0x38) = uVar16;
            *(longlong **)(pbVar19 + lVar23 * 0x48 + 0x40) = plVar22;
            if (plVar22 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
              UNLOCK();
              goto LAB_14196c818;
            }
          }
          bVar20 = true;
          if (DAT_1469f55b8 != '\0') {
            bVar20 = false;
            if (fVar33 + 1e-05 < *(float *)(puVar18 + (longlong)local_490 * 8 + 4)) {
              bVar20 = 0 < *(int *)(param_4 + 0x18);
              fVar33 = *(float *)(puVar18 + (longlong)local_490 * 8 + 4);
            }
          }
          iVar13 = *(int *)(param_4 + 0x18);
          *(int *)(param_4 + 0x18) = iVar13 + 1;
          if (*(int *)(param_4 + 0x1c) < iVar13 + 1) {
            TArray<bool,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_4,iVar13);
          }
          lVar23 = *(longlong *)(param_4 + 0x10);
          if (*(longlong *)(param_4 + 0x10) == 0) {
            lVar23 = param_4;
          }
          *(bool *)(lVar23 + iVar13) = bVar20;
          param_2 = local_450;
          uVar25 = local_488;
        }
        uVar25 = uVar25 + 1;
        plVar24 = (longlong *)(ulonglong)uVar25;
        plVar22 = (longlong *)((longlong)local_490 + 1);
        local_490 = plVar22;
        local_488 = uVar25;
        iVar13 = (**(code **)*puVar3)(puVar3);
      } while ((int)uVar25 < iVar13);
    }
    if (local_108 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14196c9f0 FUN_14196c9f0 body=220 status=ok
// SIG undefined FUN_14196c9f0(void)

undefined8 * FUN_14196c9f0(longlong param_1,undefined8 *param_2)

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
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + -0x380,local_28);
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



// FUNCTION 14196cad0 FUN_14196cad0 body=220 status=ok
// SIG undefined FUN_14196cad0(void)

undefined8 * FUN_14196cad0(longlong param_1,undefined8 *param_2)

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
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + -0x350,local_28);
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



// FUNCTION 14196cbb0 FUN_14196cbb0 body=267 status=ok
// SIG undefined FUN_14196cbb0(void)

void FUN_14196cbb0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(longlong *)(param_1 + 0x10) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar6 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != plVar6) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x18);
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
    *(longlong **)(param_1 + 0x18) = plVar3;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_141847700();
    if (((*(longlong *)(param_1 + 8) != 0) && (*param_2 != 0)) && (*param_2 != DAT_1469eb218)) {
      puVar5 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared
                         (*(longlong *)(param_1 + 8) + 8,local_18);
      local_28 = *puVar5;
      local_20 = puVar5[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      FUN_1418034a0(*param_2,&local_28);
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_10 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar1 = (int *)((longlong)local_10 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14196ccc0 BeginComposition body=53 status=ok
// SIG undefined BeginComposition(void)

void FSlateEditableTextLayout::FTextInputMethodContext::BeginComposition(longlong param_1)

{
  if ((*(longlong *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x58) == '\0')) {
    *(undefined1 *)(param_1 + 0x58) = 1;
    FUN_14196cd00();
    FUN_1419a7100(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 14196cd00 FUN_14196cd00 body=325 status=ok
// SIG undefined FUN_14196cd00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14196cd00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x6f0) == '\0') {
    local_58 = 0;
    local_50 = (longlong *)0x0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    FText::FText(&local_58);
    local_38 = local_38 & 0xffffffffffffff00;
    local_30 = 0;
    puVar3 = (undefined8 *)(param_1 + 0x6b0);
    uStack_28 = uStack_28 & 0xffffffffffff0000;
    local_20 = 0;
    if (&local_58 != puVar3) {
      TOptional<SlateEditableTextTypes::FUndoState>::Reset(puVar3);
      FText::FText(puVar3,&local_58);
      *(undefined1 *)(param_1 + 0x6d0) = 0;
      if ((char)local_38 != '\0') {
        *(undefined8 *)(param_1 + 0x6c8) = local_40;
        *(undefined1 *)(param_1 + 0x6d0) = 1;
      }
      local_38 = local_38 & 0xffffffffffffff00;
      *(undefined4 *)(param_1 + 0x6d8) = (undefined4)local_30;
      *(undefined4 *)(param_1 + 0x6dc) = local_30._4_4_;
      *(undefined4 *)(param_1 + 0x6e0) = (undefined4)uStack_28;
      *(undefined4 *)(param_1 + 0x6e4) = uStack_28._4_4_;
      *(undefined8 *)(param_1 + 0x6e8) = local_20;
      *(undefined1 *)(param_1 + 0x6f0) = 1;
    }
    plVar6 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
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
    FSlateEditableTextLayout::MakeUndoState(param_1,puVar3);
  }
  return;
}



// FUNCTION 14196ce50 FUN_14196ce50 body=314 status=ok
// SIG undefined FUN_14196ce50(void)

void FUN_14196ce50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code **ppcVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  code *local_48;
  longlong *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [16];
  
  ppcVar3 = (code **)(param_1 + 0x420);
  if (*ppcVar3 == (code *)0x0) {
    *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) | 0x24;
    local_48 = FUN_1419a7de0;
    uStack_2c = (undefined4)((ulonglong)plStack_40 >> 0x20);
    plStack_40 = (longlong *)((ulonglong)plStack_40 & 0xffffffff00000000);
    local_38 = 0x419a7de0;
    uStack_34 = 1;
    uStack_30 = 0;
    uVar6 = FUN_1417ddb00(local_18,param_1,&local_38);
    plVar7 = (longlong *)FUN_141853de0(param_1,local_28,0,uVar6);
    plStack_40 = (longlong *)plVar7[1];
    local_48 = (code *)*plVar7;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    if (ppcVar3 != &local_48) {
      *ppcVar3 = local_48;
      local_48 = (code *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x428,&plStack_40);
    }
    plVar7 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
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
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    FUN_1418475e0(param_1,5);
  }
  return;
}



// FUNCTION 14196cfa0 BeginSearch body=70 status=ok
// SIG undefined BeginSearch(void)

void FSlateEditableTextLayout::BeginSearch
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  FText::operator=(param_1 + 0x4e8);
  *(undefined4 *)(param_1 + 0x500) = param_3;
  FUN_14196abc0(param_1,param_4);
  return;
}



// FUNCTION 14196cff0 FUN_14196cff0 body=2854 status=ok
// SIG undefined FUN_14196cff0(void)

undefined8 FUN_14196cff0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined **local_4e8 [9];
  undefined8 local_4a0;
  undefined1 local_498 [8];
  longlong *local_490;
  undefined1 local_480;
  undefined8 local_478;
  longlong local_470;
  undefined8 local_468;
  longlong local_460;
  undefined8 local_458;
  longlong *local_450;
  undefined8 local_448;
  longlong *local_440;
  undefined8 local_438;
  longlong local_430;
  undefined8 local_428;
  longlong local_420;
  undefined8 local_418;
  longlong local_410;
  undefined8 local_408;
  longlong local_400;
  undefined1 local_3f8 [8];
  longlong *local_3f0;
  undefined1 local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined1 local_3c8 [8];
  longlong *local_3c0;
  undefined1 local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined1 local_398 [8];
  longlong *local_390;
  undefined1 local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined1 local_368 [8];
  longlong *local_360;
  undefined1 local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined1 local_338 [8];
  longlong *local_330;
  undefined1 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined1 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [40];
  
  uVar6 = DAT_1469eb140;
  plVar4 = (longlong *)param_3[1];
  local_458 = *param_3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x770);
  local_448 = *(undefined8 *)(param_1 + 0x768);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_450 = plVar4;
  local_440 = plVar5;
  FUN_1418cf9d0(local_4e8,3,1,&local_448,1,&local_458,uVar6,0);
  local_4a0 = 0;
  local_4e8[0] = &PTR__scalar_deleting_destructor__144d67110;
  FText::FText(local_498);
  local_480 = 0;
  FUN_1418d8fc0(local_4e8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_110,L"Modify Text",L"EditableTextContextMenu",L"Heading");
  FText::FText(local_338,uVar6);
  local_320 = 1;
  local_318 = 0;
  local_310 = 0;
  puVar7 = (undefined8 *)FName::FName(local_128,"EditText",1);
  FMenuBuilder::BeginSection(local_4e8,*puVar7,local_338);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_318);
  if (local_330 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_330 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_330)(local_330);
      LOCK();
      piVar2 = (int *)((longlong)local_330 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_330 + 8))(local_330,1);
      }
    }
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_108 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  FText::FText(local_2d8);
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  FText::FText(local_308);
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  lVar8 = FUN_141983a60();
  local_438 = *(undefined8 *)(lVar8 + 0x88);
  local_430 = *(longlong *)(lVar8 + 0x90);
  if (local_430 != 0) {
    LOCK();
    *(int *)(local_430 + 8) = *(int *)(local_430 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FSlateIcon::FSlateIcon(local_d8);
  FUN_1418d8510(local_4e8,&local_438,0,local_308,local_2d8,uVar6,0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2e8);
  if (local_300 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_300 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_300)(local_300);
      LOCK();
      piVar2 = (int *)((longlong)local_300 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_300 + 8))(local_300,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2b8);
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2d0 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar2 = (int *)((longlong)local_2d0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_2d0 + 8))(local_2d0,1);
      }
    }
  }
  FMenuBuilder::EndSection(local_4e8);
  FText::FText(local_2a8);
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  puVar7 = (undefined8 *)FName::FName(local_120,"EditableTextModify2",1);
  FMenuBuilder::BeginSection(local_4e8,*puVar7,local_2a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_288);
  if (local_2a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2a0 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_2a0)(local_2a0);
      LOCK();
      piVar2 = (int *)((longlong)local_2a0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_2a0 + 8))(local_2a0,1);
      }
    }
  }
  FText::FText(local_368);
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  FText::FText(local_278);
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  lVar8 = FUN_141983a60();
  local_428 = *(undefined8 *)(lVar8 + 0x48);
  local_420 = *(longlong *)(lVar8 + 0x50);
  if (local_420 != 0) {
    LOCK();
    *(int *)(local_420 + 8) = *(int *)(local_420 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FSlateIcon::FSlateIcon(local_98);
  FUN_1418d8510(local_4e8,&local_428,0,local_278,local_368,uVar6,0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_258);
  if (local_270 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_270 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_270)(local_270);
      LOCK();
      piVar2 = (int *)((longlong)local_270 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_270 + 8))(local_270,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_348);
  if (local_360 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_360 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_360)(local_360);
      LOCK();
      piVar2 = (int *)((longlong)local_360 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_360 + 8))(local_360,1);
      }
    }
  }
  FText::FText(local_218);
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  FText::FText(local_248);
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  lVar8 = FUN_141983a60();
  local_418 = *(undefined8 *)(lVar8 + 0x58);
  local_410 = *(longlong *)(lVar8 + 0x60);
  if (local_410 != 0) {
    LOCK();
    *(int *)(local_410 + 8) = *(int *)(local_410 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FSlateIcon::FSlateIcon(local_78);
  FUN_1418d8510(local_4e8,&local_418,0,local_248,local_218,uVar6,0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_228);
  if (local_240 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_240 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_240)(local_240);
      LOCK();
      piVar2 = (int *)((longlong)local_240 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_240 + 8))(local_240,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1f8);
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_210 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar2 = (int *)((longlong)local_210 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_210 + 8))(local_210,1);
      }
    }
  }
  FText::FText(local_1b8);
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  FText::FText(local_1e8);
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  lVar8 = FUN_141983a60();
  local_408 = *(undefined8 *)(lVar8 + 0x68);
  local_400 = *(longlong *)(lVar8 + 0x70);
  if (local_400 != 0) {
    LOCK();
    *(int *)(local_400 + 8) = *(int *)(local_400 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FSlateIcon::FSlateIcon(local_58);
  FUN_1418d8510(local_4e8,&local_408,0,local_1e8,local_1b8,uVar6,0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1c8);
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1e0 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1e0)(local_1e0);
      LOCK();
      piVar2 = (int *)((longlong)local_1e0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1e0 + 8))(local_1e0,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_198);
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1b0 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar2 = (int *)((longlong)local_1b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1b0 + 8))(local_1b0,1);
      }
    }
  }
  FText::FText(local_188);
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  FText::FText(local_398);
  local_380 = 0;
  local_378 = 0;
  local_370 = 0;
  lVar8 = FUN_141983a60();
  local_478 = *(undefined8 *)(lVar8 + 0xa8);
  local_470 = *(longlong *)(lVar8 + 0xb0);
  if (local_470 != 0) {
    LOCK();
    *(int *)(local_470 + 8) = *(int *)(local_470 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FSlateIcon::FSlateIcon(local_f8);
  FUN_1418d8510(local_4e8,&local_478,0,local_398,local_188,uVar6,0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_378);
  if (local_390 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_390 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_390)(local_390);
      LOCK();
      piVar2 = (int *)((longlong)local_390 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_390 + 8))(local_390,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_168);
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_180 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar2 = (int *)((longlong)local_180 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_180 + 8))(local_180,1);
      }
    }
  }
  FMenuBuilder::EndSection(local_4e8);
  FText::FText(local_158);
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  puVar7 = (undefined8 *)FName::FName(local_118,"EditableTextModify3",1);
  FMenuBuilder::BeginSection(local_4e8,*puVar7,local_158);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_138);
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_150 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)local_150 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  FText::FText(local_3c8);
  local_3b0 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  FText::FText(local_3f8);
  local_3e0 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  lVar8 = FUN_141983a60();
  local_468 = *(undefined8 *)(lVar8 + 200);
  local_460 = *(longlong *)(lVar8 + 0xd0);
  if (local_460 != 0) {
    LOCK();
    *(int *)(local_460 + 8) = *(int *)(local_460 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FSlateIcon::FSlateIcon(local_b8);
  FUN_1418d8510(local_4e8,&local_468,0,local_3f8,local_3c8,uVar6,0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3d8);
  if (local_3f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_3f0 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_3f0)(local_3f0);
      LOCK();
      piVar2 = (int *)((longlong)local_3f0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3f0 + 8))(local_3f0,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3a8);
  if (local_3c0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_3c0 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_3c0)(local_3c0);
      LOCK();
      piVar2 = (int *)((longlong)local_3c0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3c0 + 8))(local_3c0,1);
      }
    }
  }
  FMenuBuilder::EndSection(local_4e8);
  FUN_1419052f0(local_4e8,param_2,0);
  if (local_490 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_490 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_490)(local_490);
      LOCK();
      piVar2 = (int *)((longlong)local_490 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_490 + 8))(local_490,1);
      }
    }
  }
  FMultiBoxBuilder::~FMultiBoxBuilder(local_4e8);
  return param_2;
}



// FUNCTION 14196db20 CacheDesiredSize body=721 status=ok
// SIG undefined CacheDesiredSize(void)

void FSlateEditableTextLayout::CacheDesiredSize(longlong param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float local_res8;
  float local_resc;
  float local_58;
  undefined4 uStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FUN_1419401f0(param_1 + 0x68);
  fVar7 = (float)FTextEditHelper::CalculateCaretWidth();
  plVar6 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x518) != 0) && (*(longlong **)(param_1 + 0x510) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x18))(), cVar3 != '\0')) {
    plVar5 = plVar6;
    if (*(int *)(param_1 + 0x518) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x510);
    }
    uVar8 = (**(code **)(*plVar5 + 0x38))();
    *(undefined4 *)(param_1 + 0x508) = uVar8;
  }
  fVar1 = *(float *)(param_1 + 0x508);
  if (((*(int *)(param_1 + 0x530) != 0) && (*(longlong **)(param_1 + 0x528) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x528) + 0x18))(), cVar3 != '\0')) {
    plVar5 = plVar6;
    if (*(int *)(param_1 + 0x530) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x528);
    }
    uVar4 = (**(code **)(*plVar5 + 0x38))();
    *(undefined1 *)(param_1 + 0x520) = uVar4;
  }
  fVar9 = fVar1;
  if (((*(char *)(param_1 + 0x520) != '\0') && (fVar2 = *(float *)(param_1 + 0x75c), 1.0 <= fVar2))
     && ((fVar9 = fVar2, 1.0 <= fVar1 && (fVar1 <= fVar2)))) {
    fVar9 = fVar1;
  }
  if (((*(int *)(param_1 + 0x570) != 0) && (*(longlong **)(param_1 + 0x568) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x18))(), cVar3 != '\0')) {
    plVar5 = plVar6;
    if (*(int *)(param_1 + 0x570) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x568);
    }
    (**(code **)(*plVar5 + 0x38))(plVar5,&local_48);
    *(undefined8 *)(param_1 + 0x550) = local_48;
    *(undefined8 *)(param_1 + 0x558) = uStack_40;
  }
  uStack_54 = *(undefined4 *)(param_1 + 0x554);
  uStack_4c = *(undefined4 *)(param_1 + 0x55c);
  local_58 = *(float *)(param_1 + 0x550) + fVar7;
  fStack_50 = *(float *)(param_1 + 0x558) + fVar7;
  FTextLayout::SetScale(*(undefined8 *)(param_1 + 0x48),param_2);
  FTextLayout::SetWrappingWidth(*(undefined8 *)(param_1 + 0x48),fVar9);
  if (((*(int *)(param_1 + 0x548) != 0) && (*(longlong **)(param_1 + 0x540) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x540) + 0x18))(), cVar3 != '\0')) {
    plVar5 = plVar6;
    if (*(int *)(param_1 + 0x548) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x540);
    }
    uVar4 = (**(code **)(*plVar5 + 0x38))();
    *(undefined1 *)(param_1 + 0x538) = uVar4;
  }
  FTextLayout::SetWrappingPolicy(*(undefined8 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x538));
  FTextLayout::SetMargin(*(undefined8 *)(param_1 + 0x48),&local_58);
  if (((*(int *)(param_1 + 0x5a0) != 0) && (*(longlong **)(param_1 + 0x598) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x598) + 0x18))(), cVar3 != '\0')) {
    plVar5 = plVar6;
    if (*(int *)(param_1 + 0x5a0) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x598);
    }
    uVar8 = (**(code **)(*plVar5 + 0x38))();
    *(undefined4 *)(param_1 + 0x590) = uVar8;
  }
  FTextLayout::SetLineHeightPercentage
            (*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x590));
  if (((*(int *)(param_1 + 0x588) != 0) && (*(longlong **)(param_1 + 0x580) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x580) + 0x18))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + 0x588) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x580);
    }
    uVar8 = (**(code **)(*plVar6 + 0x38))(plVar6);
    *(undefined4 *)(param_1 + 0x578) = uVar8;
  }
  FTextLayout::SetJustification(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x578));
  local_res8 = *(float *)(*(longlong *)(param_1 + 0x48) + 0x8c);
  local_resc = local_res8 * *(float *)(param_1 + 0x65c);
  local_res8 = local_res8 * *(float *)(param_1 + 0x658);
  FTextLayout::SetVisibleRegion(*(longlong *)(param_1 + 0x48),param_1 + 0x75c,&local_res8);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
  return;
}



// FUNCTION 14196de00 CacheDesiredSize body=197 status=ok
// SIG undefined CacheDesiredSize(void)

void SGridPanel::CacheDesiredSize(longlong param_1,undefined4 param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  
  FUN_14196eaa0(param_1,param_1 + 0x230,param_1 + 0x240);
  fVar3 = (float)DAT_1468b5d88;
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x238);
  *(float *)(param_1 + 0x250) = (float)DAT_1468b5d88;
  fVar4 = DAT_1468b5d88._4_4_;
  *(float *)(param_1 + 0x254) = DAT_1468b5d88._4_4_;
  if (0 < (int)*(uint *)(param_1 + 0x238)) {
    pfVar1 = *(float **)(param_1 + 0x230);
    do {
      fVar3 = fVar3 + *pfVar1;
      pfVar1 = pfVar1 + 1;
      *(float *)(param_1 + 0x250) = fVar3;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x248);
  if (0 < (int)*(uint *)(param_1 + 0x248)) {
    pfVar1 = *(float **)(param_1 + 0x240);
    do {
      fVar4 = fVar4 + *pfVar1;
      pfVar1 = pfVar1 + 1;
      *(float *)(param_1 + 0x254) = fVar4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  SWidget::CacheDesiredSize(param_1,param_2);
  return;
}



// FUNCTION 14196ded0 FUN_14196ded0 body=409 status=ok
// SIG undefined FUN_14196ded0(void)

void FUN_14196ded0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    plVar3 = (longlong *)**(undefined8 **)(param_1 + 8);
    puVar7 = (undefined8 *)(**(code **)(*plVar3 + 0x80))(plVar3,local_38);
    plVar3 = (longlong *)puVar7[1];
    uVar4 = *puVar7;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_30 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar9 = plVar3 + 1;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar9 = (int)*plVar9 + 1;
      UNLOCK();
    }
    local_48 = uVar4;
    local_40 = plVar3;
    puVar7 = (undefined8 *)FUN_141899f20(DAT_1469f4590,local_28,&local_48);
    *(undefined8 *)(param_1 + 0x10) = *puVar7;
    plVar5 = (longlong *)puVar7[1];
    plVar8 = *(longlong **)(param_1 + 0x18);
    if (plVar5 != plVar8) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(param_1 + 0x18);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      *(longlong **)(param_1 + 0x18) = plVar5;
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
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
  }
  return;
}



// FUNCTION 14196e070 FUN_14196e070 body=407 status=ok
// SIG undefined FUN_14196e070(void)

void FUN_14196e070(longlong *param_1,float param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  iVar4 = (int)param_3[1];
  iVar7 = 0;
  lVar2 = param_4[1];
  fVar11 = 0.0;
  if (0 < iVar4) {
    lVar8 = 0;
    lVar6 = 0;
    do {
      if (lVar8 < (int)lVar2) {
        lVar1 = *param_4;
        if (*(char *)(lVar6 + 4 + lVar1) == '\0') goto LAB_14196e123;
        if ((*(int *)(lVar6 + 0x10 + lVar1) != 0) &&
           (plVar5 = *(longlong **)(lVar6 + 8 + lVar1), plVar5 != (longlong *)0x0)) {
          cVar3 = (**(code **)(*plVar5 + 0x18))();
          if (cVar3 != '\0') {
            if (*(int *)(lVar6 + 0x10 + lVar1) == 0) {
              plVar5 = (longlong *)0x0;
            }
            else {
              plVar5 = *(longlong **)(lVar6 + 8 + lVar1);
            }
            uVar9 = (**(code **)(*plVar5 + 0x38))();
            *(undefined4 *)(lVar6 + lVar1) = uVar9;
          }
        }
        if (*(float *)(lVar6 + lVar1) == 0.0) goto LAB_14196e123;
        fVar11 = fVar11 + *(float *)(lVar6 + lVar1);
      }
      else {
LAB_14196e123:
        param_2 = param_2 - *(float *)(*param_3 + lVar8 * 4);
      }
      iVar4 = (int)param_3[1];
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0x18;
    } while (iVar7 < iVar4);
  }
  iVar7 = 0;
  if (0 < iVar4) {
    lVar8 = 0;
    lVar6 = 0;
    do {
      if (lVar8 < (int)lVar2) {
        lVar1 = *param_4;
        if (*(char *)(lVar6 + 4 + lVar1) == '\0') goto LAB_14196e1b6;
        if ((*(int *)(lVar6 + 0x10 + lVar1) != 0) &&
           (plVar5 = *(longlong **)(lVar6 + 8 + lVar1), plVar5 != (longlong *)0x0)) {
          cVar3 = (**(code **)(*plVar5 + 0x18))();
          if (cVar3 != '\0') {
            if (*(int *)(lVar6 + 0x10 + lVar1) == 0) {
              plVar5 = (longlong *)0x0;
            }
            else {
              plVar5 = *(longlong **)(lVar6 + 8 + lVar1);
            }
            uVar9 = (**(code **)(*plVar5 + 0x38))();
            *(undefined4 *)(lVar6 + lVar1) = uVar9;
          }
        }
        if (*(float *)(lVar6 + lVar1) == 0.0) goto LAB_14196e1b6;
        fVar10 = (*(float *)(lVar6 + lVar1) / fVar11) * param_2;
      }
      else {
LAB_14196e1b6:
        fVar10 = *(float *)(*param_3 + lVar8 * 4);
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 0x18;
      *(float *)(*param_1 + lVar8 * 4) = fVar10;
      lVar8 = lVar8 + 1;
    } while (iVar7 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 14196e290 FUN_14196e290 body=87 status=ok
// SIG undefined FUN_14196e290(void)

void FUN_14196e290(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  local_28 = param_2[4];
  uStack_20 = param_2[5];
  local_18 = param_2[6];
  FUN_14198b320(*param_1,&local_48,param_1 + 1,*(undefined1 *)(param_1 + 3),
                *(undefined1 *)((longlong)param_1 + 0x19),*(undefined4 *)((longlong)param_1 + 0x1c))
  ;
  return;
}



// FUNCTION 14196e2f0 FUN_14196e2f0 body=35 status=ok
// SIG undefined FUN_14196e2f0(void)

void FUN_14196e2f0(undefined4 *param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x120) == -1) {
    *(undefined4 *)(param_2 + 0x120) = *param_1;
    return;
  }
  *(int *)(param_2 + 0x120) = param_1[1] + *(int *)(param_2 + 0x120);
  return;
}



// FUNCTION 14196e320 CanExecuteCopy body=142 status=ok
// SIG undefined CanExecuteCopy(void)

ulonglong FSlateEditableTextLayout::CanExecuteCopy(undefined8 *param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulonglong *puVar4;
  int local_res8;
  int iStackX_c;
  
  cVar2 = (**(code **)(*(longlong *)*param_1 + 8))();
  local_res8 = *(int *)(param_1 + 0xd0);
  iVar3 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
  iStackX_c = 0;
  if (-1 < iVar3) {
    iStackX_c = iVar3;
  }
  puVar4 = param_1 + 0xce;
  if (*(char *)(param_1 + 0xcf) == '\0') {
    puVar4 = (ulonglong *)&local_res8;
  }
  uVar1 = *puVar4;
  if (((int)uVar1 == *(int *)(param_1 + 0xd0)) && ((int)(uVar1 >> 0x20) == iStackX_c)) {
    return (uVar1 >> 0x28) << 8;
  }
  return (ulonglong)(cVar2 == '\0');
}



// FUNCTION 14196e3b0 CanExecuteCut body=163 status=ok
// SIG undefined CanExecuteCut(void)

longlong FSlateEditableTextLayout::CanExecuteCut(undefined8 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  int local_res8;
  uint uStackX_c;
  
  cVar3 = (*(code *)**(undefined8 **)*param_1)();
  cVar4 = (**(code **)(*(longlong *)*param_1 + 8))();
  uVar2 = (uint)(cVar3 == '\0');
  if (cVar4 != '\0') {
    uVar2 = 0;
  }
  local_res8 = *(int *)(param_1 + 0xd0);
  uVar5 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
  uStackX_c = 0;
  if (-1 < (int)uVar5) {
    uStackX_c = uVar5;
  }
  puVar6 = param_1 + 0xce;
  if (*(char *)(param_1 + 0xcf) == '\0') {
    puVar6 = (ulonglong *)&local_res8;
  }
  uVar1 = *puVar6;
  uVar7 = uVar1;
  if (((int)uVar1 == *(int *)(param_1 + 0xd0)) &&
     (uVar7 = uVar1 >> 0x20, (uint)(uVar1 >> 0x20) == uStackX_c)) {
    return (uVar1 >> 0x28) << 8;
  }
  return CONCAT71((int7)(uVar7 >> 8),(char)uVar2);
}



// FUNCTION 14196e460 CanExecuteDelete body=141 status=ok
// SIG undefined CanExecuteDelete(void)

ulonglong FSlateEditableTextLayout::CanExecuteDelete(undefined8 *param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulonglong *puVar4;
  int local_res8;
  int iStackX_c;
  
  cVar2 = (*(code *)**(undefined8 **)*param_1)();
  local_res8 = *(int *)(param_1 + 0xd0);
  iVar3 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
  iStackX_c = 0;
  if (-1 < iVar3) {
    iStackX_c = iVar3;
  }
  puVar4 = param_1 + 0xce;
  if (*(char *)(param_1 + 0xcf) == '\0') {
    puVar4 = (ulonglong *)&local_res8;
  }
  uVar1 = *puVar4;
  if (((int)uVar1 == *(int *)(param_1 + 0xd0)) && ((int)(uVar1 >> 0x20) == iStackX_c)) {
    return (uVar1 >> 0x28) << 8;
  }
  return (ulonglong)(cVar2 == '\0');
}



// FUNCTION 14196e4f0 CanExecutePaste body=87 status=ok
// SIG undefined CanExecutePaste(void)

bool FSlateEditableTextLayout::CanExecutePaste(undefined8 *param_1)

{
  bool bVar1;
  char cVar2;
  longlong local_18;
  undefined8 local_10;
  
  cVar2 = (*(code *)**(undefined8 **)*param_1)();
  local_18 = 0;
  local_10 = 0;
  FWindowsPlatformApplicationMisc::ClipboardPaste(&local_18);
  bVar1 = 1 < (int)local_10;
  if (local_18 != 0) {
    FMemory::Free();
  }
  return bVar1 && cVar2 == '\0';
}



// FUNCTION 14196e550 CanExecuteSelectAll body=174 status=ok
// SIG undefined CanExecuteSelectAll(void)

bool FSlateEditableTextLayout::CanExecuteSelectAll(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = FTextLayout::IsEmpty(*(undefined8 *)(param_1 + 0x48));
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x20);
  iVar2 = (uint)(*(char *)(param_1 + 0x688) == '\x01') + *(int *)(param_1 + 0x684);
  iVar4 = 0;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  if ((((*(char *)(param_1 + 0x678) != '\0') && (*(int *)(param_1 + 0x670) == 0)) &&
      (*(int *)(param_1 + 0x674) == 0)) &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)iVar3 * 0x70 + -0x70 +
                        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18)) + 8),
     *(int *)(param_1 + 0x680) == iVar3 + -1)) {
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    return iVar4 != iVar3 && cVar1 == '\0';
  }
  return cVar1 == '\0';
}



// FUNCTION 14196e600 CanExecuteUndo body=63 status=ok
// SIG undefined CanExecuteUndo(void)

undefined8 FSlateEditableTextLayout::CanExecuteUndo(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = (*(code *)**(undefined8 **)*param_1)();
  if ((cVar1 == '\0') && (0 < *(int *)(param_1 + 0xd4))) {
    cVar1 = (**(code **)(*(longlong *)param_1[0xbd] + 8))();
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14196e660 ClearChildren body=52 status=ok
// SIG undefined ClearChildren(void)

void SCanvas::ClearChildren(longlong param_1)

{
  if (*(char *)(param_1 + 0x228) == '\0') {
    *(undefined1 *)(param_1 + 0x228) = 1;
    TIndirectArray<SCanvas::FSlot,FDefaultAllocator>::Empty(param_1 + 0x218,0);
    *(undefined1 *)(param_1 + 0x228) = 0;
  }
  return;
}



// FUNCTION 14196e6a0 ClearChildren body=52 status=ok
// SIG undefined ClearChildren(void)

void SWrapBox::ClearChildren(longlong param_1)

{
  if (*(char *)(param_1 + 0x240) == '\0') {
    *(undefined1 *)(param_1 + 0x240) = 1;
    TIndirectArray<SWrapBox::FSlot,FDefaultAllocator>::Empty(param_1 + 0x230,0);
    *(undefined1 *)(param_1 + 0x240) = 0;
  }
  return;
}



// FUNCTION 14196e6e0 ClearFill body=42 status=ok
// SIG undefined ClearFill(void)

void SGridPanel::ClearFill(longlong param_1)

{
  TArray<TAttribute<float>,FDefaultAllocator>::Reset(param_1 + 600,0);
  TArray<TAttribute<float>,FDefaultAllocator>::Reset(param_1 + 0x268,0);
  return;
}



// FUNCTION 14196e710 FUN_14196e710 body=146 status=ok
// SIG undefined FUN_14196e710(void)

void FUN_14196e710(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3c8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x3c0);
      }
      uVar2 = (**(code **)(*plVar3 + 0x38))();
      *(undefined4 *)(param_1 + 0x3b8) = uVar2;
    }
  }
  if ((*(int *)(param_1 + 0x3b8) != 0) && (*(int *)(param_1 + 0x550) != *(int *)(param_1 + 0x57c)))
  {
    (**(code **)(*(longlong *)(param_1 + 0x420) + 0x20))(param_1 + 0x420);
                    /* WARNING: Could not recover jumptable at 0x00014196e798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x420) + 0x30))(param_1 + 0x420,3);
    return;
  }
  return;
}



// FUNCTION 14196e7b0 ClearUndoStates body=184 status=ok
// SIG undefined ClearUndoStates(void)

void FSlateEditableTextLayout::ClearUndoStates(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  
  *(undefined4 *)(param_1 + 0x6a8) = 0xffffffff;
  iVar6 = *(int *)(param_1 + 0x6a0);
  if (iVar6 != 0) {
    pcVar7 = (char *)(*(longlong *)(param_1 + 0x698) + 0x20);
    do {
      if (*pcVar7 != '\0') {
        *pcVar7 = '\0';
      }
      plVar4 = *(longlong **)(pcVar7 + -0x18);
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
      pcVar7 = pcVar7 + 0x40;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x6a0) = 0;
  if (*(int *)(param_1 + 0x6a4) == 0) {
    return;
  }
  TArray<FBoneTransform,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0x698),0);
  return;
}



// FUNCTION 14196e870 FUN_14196e870 body=243 status=ok
// SIG undefined FUN_14196e870(void)

undefined1 * FUN_14196e870(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (DAT_1464bfecc != '\0') {
    if ((DAT_1469f4b90 != 0) && (DAT_1469f4b88 != (longlong *)0x0)) {
      cVar1 = (**(code **)(*DAT_1469f4b88 + 0x18))();
      if (cVar1 != '\0') {
        plVar2 = (longlong *)0x0;
        if (DAT_1469f4b90 != 0) {
          plVar2 = DAT_1469f4b88;
        }
        (**(code **)(*plVar2 + 0x38))();
        goto LAB_14196e8d7;
      }
    }
    if (*(longlong *)(param_1 + 0x268) != 0) {
      FUN_141856430();
    }
  }
LAB_14196e8d7:
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



// FUNCTION 14196e970 FUN_14196e970 body=302 status=ok
// SIG undefined FUN_14196e970(void)

void FUN_14196e970(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined8 local_18 [2];
  
  plVar5 = (longlong *)FUN_141984b00(param_1,local_28);
  lVar2 = *plVar5;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (lVar2 != 0) {
    puVar7 = (undefined8 *)(param_1 + 0x2f0);
    plVar5 = *(longlong **)(param_1 + 0x2f8);
    plVar6 = plVar5;
    plVar8 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar5[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar6 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar9) {
        LOCK();
        bVar9 = iVar4 == (int)plVar5[1];
        if (bVar9) {
          *(int *)(plVar5 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar6 = plVar5;
          if (plVar5 != (longlong *)0x0) {
            plVar8 = (longlong *)*puVar7;
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar5[1];
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(plVar5 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    (**(code **)(*plVar8 + 0x210))(plVar8,0,1,0);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
    if (puVar7 != local_18) {
      *puVar7 = 0;
      plVar5 = *(longlong **)(param_1 + 0x2f8);
      *(undefined8 *)(param_1 + 0x2f8) = 0;
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
    }
  }
  return;
}



// FUNCTION 14196eaa0 FUN_14196eaa0 body=521 status=ok
// SIG undefined FUN_14196eaa0(void)

void FUN_14196eaa0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  char local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  
  _guard_xfg_dispatch_icall_nop((void *)*param_2,0,(longlong)*(int *)(param_2 + 1) << 2);
  _guard_xfg_dispatch_icall_nop((void *)*param_3,0,(longlong)*(int *)(param_3 + 1) << 2);
  iVar6 = 0;
  iVar4 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x218));
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (((*(int *)(lVar2 + 0xc0) != 0) && (*(longlong **)(lVar2 + 0xb8) != (longlong *)0x0)) &&
         (cVar3 = (**(code **)(**(longlong **)(lVar2 + 0xb8) + 0x18))(), cVar3 != '\0')) {
        if (*(int *)(lVar2 + 0xc0) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(lVar2 + 0xb8);
        }
        (**(code **)(*plVar5 + 0x38))(plVar5,local_res8);
        *(char *)(lVar2 + 0xb0) = local_res8[0];
      }
      if (*(char *)(lVar2 + 0xb0) != DAT_1464b9ee9) {
        if (((*(int *)(lVar1 + 0x48) != 0) && (*(longlong **)(lVar1 + 0x40) != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x18))(), cVar3 != '\0')) {
          if (*(int *)(lVar1 + 0x48) == 0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = *(longlong **)(lVar1 + 0x40);
          }
          (**(code **)(*plVar5 + 0x38))(plVar5,&local_88);
          *(undefined8 *)(lVar1 + 0x28) = local_88;
          *(undefined8 *)(lVar1 + 0x30) = uStack_80;
        }
        SWidget::GetDesiredSize(*(undefined8 *)(lVar1 + 0x10),local_res10);
        SGridPanel::DistributeSizeContributions
                  (*(int *)(lVar1 + 100),param_2,*(int *)(lVar1 + 0x60),
                   *(int *)(lVar1 + 0x60) + *(int *)(lVar1 + 100));
        SGridPanel::DistributeSizeContributions();
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
      iVar4 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
    } while (iVar6 < iVar4);
  }
  return;
}



// FUNCTION 14196ecb0 FUN_14196ecb0 body=686 status=ok
// SIG undefined FUN_14196ecb0(void)

float * FUN_14196ecb0(longlong param_1,float *param_2,undefined4 param_3)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_res8;
  float local_res10;
  float local_res14;
  undefined1 local_res20 [8];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  float *local_e0;
  longlong local_d8;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined8 local_c8;
  undefined4 local_c0;
  float *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  fVar10 = (float)FUN_1419401f0(param_1 + 0x68);
  fVar11 = (float)FTextEditHelper::CalculateCaretWidth();
  pfVar2 = (float *)(param_1 + 0x508);
  plVar9 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x518) != 0) && (*(longlong **)(param_1 + 0x510) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x18))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0x518) != 0) {
      plVar9 = *(longlong **)(param_1 + 0x510);
    }
    fVar12 = (float)(**(code **)(*plVar9 + 0x38))();
    *pfVar2 = fVar12;
  }
  fVar12 = *pfVar2;
  cVar5 = FTextLayout::IsEmpty(*(undefined8 *)(param_1 + 0x48));
  if ((cVar5 == '\0') || (*(longlong *)(param_1 + 0x58) == 0)) {
    FTextLayout::GetSize(*(undefined8 *)(param_1 + 0x48),&local_res8);
    if ((0.0 < fVar12) && (fVar12 < (float)local_res8)) {
      puVar8 = (undefined8 *)
               FTextLayout::GetWrappedSize(*(undefined8 *)(param_1 + 0x48),local_res20);
      local_res8 = *puVar8;
    }
    fVar12 = (float)local_res8;
  }
  else {
    pfVar6 = (float *)TAttribute<FLinearColor>::Get(param_1 + 0x550);
    local_108 = 1;
    local_100 = 0;
    local_f8 = 0;
    local_114 = pfVar6[1];
    local_10c = pfVar6[3];
    local_118 = *pfVar6 + fVar11;
    local_110 = pfVar6[2] + fVar11;
    uVar7 = FUN_1404b03b0();
    FText::FText(local_a0,uVar7);
    local_f0 = param_1 + 0x470;
    local_88 = 1;
    local_e8 = local_a0;
    local_80 = 0;
    local_d8 = param_1 + 0x520;
    local_78 = 0;
    local_d0 = *(undefined1 *)(param_1 + 0x538);
    local_cf = *(undefined1 *)(param_1 + 0x539);
    local_c8 = 0;
    local_c0 = 0;
    local_e0 = pfVar2;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_c8,param_1 + 0x540);
    local_b8 = &local_118;
    local_b0 = param_1 + 0x590;
    local_a8 = param_1 + 0x578;
    FUN_1419aad70(*(undefined8 *)(param_1 + 0x58),&local_res10,&local_f0,param_3,param_1 + 0x240);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_80);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_98 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_100);
    local_res8._4_4_ = local_res14;
    if (fVar12 <= 0.0) {
      fVar12 = local_res10;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  fVar13 = *(float *)(lVar4 + 0x98) + *(float *)(lVar4 + 0xa0);
  fVar11 = *(float *)(lVar4 + 0x9c) + *(float *)(lVar4 + 0xa4);
  if (fVar13 <= fVar12) {
    fVar13 = fVar12;
  }
  if (fVar11 <= local_res8._4_4_) {
    fVar11 = local_res8._4_4_;
  }
  *param_2 = fVar13;
  if (fVar11 <= fVar10) {
    fVar11 = fVar10;
  }
  param_2[1] = fVar11;
  return param_2;
}



// FUNCTION 14196ef60 FUN_14196ef60 body=169 status=ok
// SIG undefined FUN_14196ef60(void)

float * FUN_14196ef60(longlong param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  longlong *plVar5;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  if ((*(int *)(param_1 + 0x368) != 0) && (*(longlong **)(param_1 + 0x360) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x360) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x368) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x360);
      }
      (**(code **)(*plVar5 + 0x38))(plVar5,&local_res8);
      *(undefined8 *)(param_1 + 0x350) = local_res8;
    }
  }
  pfVar4 = (float *)FUN_1418054a0(param_1,local_res10,param_3);
  fVar1 = pfVar4[1];
  fVar2 = *(float *)(param_1 + 0x354);
  *param_2 = *pfVar4 * *(float *)(param_1 + 0x350);
  param_2[1] = fVar1 * fVar2;
  return param_2;
}



// FUNCTION 14196f010 FUN_14196f010 body=1112 status=ok
// SIG undefined FUN_14196f010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14196f010(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  float *pfVar5;
  longlong *plVar6;
  longlong *plVar7;
  char *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  undefined1 local_78 [8];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  plVar7 = (longlong *)0x0;
  lVar4 = *(longlong *)(param_1 + 0x228);
  pcVar8 = (char *)(lVar4 + 0xb0);
  if (((*(int *)(lVar4 + 0xc0) == 0) || (*(longlong **)(lVar4 + 0xb8) == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(**(longlong **)(lVar4 + 0xb8) + 0x18))(), cVar3 == '\0')) {
    cVar3 = *pcVar8;
  }
  else if (*(int *)(lVar4 + 0xc0) == 0) {
    (**(code **)(_DAT_00000000 + 0x38))(0,local_res8);
    *pcVar8 = (char)local_res8[0];
    cVar3 = (char)local_res8[0];
  }
  else {
    (**(code **)(**(longlong **)(lVar4 + 0xb8) + 0x38))(*(longlong **)(lVar4 + 0xb8),local_res8);
    *pcVar8 = (char)local_res8[0];
    cVar3 = (char)local_res8[0];
  }
  if (cVar3 == DAT_1464b9ee9) {
    *(undefined8 *)param_2 = DAT_1468b5d88;
    return param_2;
  }
  if (((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x18))(), cVar3 != '\0')) {
    plVar6 = plVar7;
    if (*(int *)(param_1 + 0x278) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x270);
    }
    (**(code **)(*plVar6 + 0x38))(plVar6,local_res8);
    *(undefined4 *)(param_1 + 0x268) = local_res8[0];
  }
  fVar10 = *(float *)(param_1 + 0x268);
  if (((*(int *)(param_1 + 0x290) != 0) && (*(longlong **)(param_1 + 0x288) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x288) + 0x18))(), cVar3 != '\0')) {
    plVar6 = plVar7;
    if (*(int *)(param_1 + 0x290) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x288);
    }
    (**(code **)(*plVar6 + 0x38))(plVar6,local_res8);
    *(undefined4 *)(param_1 + 0x280) = local_res8[0];
  }
  fVar9 = *(float *)(param_1 + 0x280);
  if (*(float *)(param_1 + 0x280) == -1.0) {
    if (((*(int *)(param_1 + 0x260) != 0) && (*(longlong **)(param_1 + 600) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 600) + 0x18))(), cVar3 != '\0')) {
      plVar6 = plVar7;
      if (*(int *)(param_1 + 0x260) != 0) {
        plVar6 = *(longlong **)(param_1 + 600);
      }
      (**(code **)(*plVar6 + 0x38))(plVar6,&local_70);
      *(undefined4 *)(param_1 + 0x240) = local_70;
      *(undefined4 *)(param_1 + 0x244) = uStack_6c;
      *(undefined4 *)(param_1 + 0x248) = uStack_68;
      *(undefined4 *)(param_1 + 0x24c) = uStack_64;
    }
    fVar9 = *(float *)(param_1 + 0x24c);
    fVar1 = *(float *)(param_1 + 0x244);
    lVar4 = SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_78);
    fVar9 = fVar9 + fVar1 + *(float *)(lVar4 + 4);
    if (((*(int *)(param_1 + 0x2c0) != 0) && (*(longlong **)(param_1 + 0x2b8) != (longlong *)0x0))
       && (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2b8) + 0x18))(), cVar3 != '\0')) {
      plVar6 = plVar7;
      if (*(int *)(param_1 + 0x2c0) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x2b8);
      }
      (**(code **)(*plVar6 + 0x38))(plVar6,local_res8);
      *(undefined4 *)(param_1 + 0x2b0) = local_res8[0];
    }
    fVar1 = *(float *)(param_1 + 0x2b0);
    if (((*(int *)(param_1 + 0x2f0) != 0) && (*(longlong **)(param_1 + 0x2e8) != (longlong *)0x0))
       && (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x18))(), cVar3 != '\0')) {
      plVar6 = plVar7;
      if (*(int *)(param_1 + 0x2f0) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x2e8);
      }
      (**(code **)(*plVar6 + 0x38))(plVar6,local_res20);
      *(undefined4 *)(param_1 + 0x2e0) = local_res20[0];
    }
    fVar2 = *(float *)(param_1 + 0x2e0);
    fVar11 = fVar9;
    if ((fVar1 != -1.0) && (fVar11 = fVar1, fVar1 <= fVar9)) {
      fVar11 = fVar9;
    }
    fVar9 = fVar11;
    if ((fVar2 != -1.0) && (fVar9 = fVar2, fVar11 <= fVar2)) {
      fVar9 = fVar11;
    }
  }
  if (fVar10 == -1.0) {
    if (((*(int *)(param_1 + 0x260) != 0) && (*(longlong **)(param_1 + 600) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 600) + 0x18))(), cVar3 != '\0')) {
      plVar6 = plVar7;
      if (*(int *)(param_1 + 0x260) != 0) {
        plVar6 = *(longlong **)(param_1 + 600);
      }
      (**(code **)(*plVar6 + 0x38))(plVar6,&local_70);
      *(undefined4 *)(param_1 + 0x240) = local_70;
      *(undefined4 *)(param_1 + 0x244) = uStack_6c;
      *(undefined4 *)(param_1 + 0x248) = uStack_68;
      *(undefined4 *)(param_1 + 0x24c) = uStack_64;
    }
    fVar10 = *(float *)(param_1 + 0x248);
    fVar1 = *(float *)(param_1 + 0x240);
    pfVar5 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_78);
    fVar10 = fVar10 + fVar1 + *pfVar5;
    if (((*(int *)(param_1 + 0x2a8) != 0) && (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0))
       && (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x18))(), cVar3 != '\0')) {
      plVar6 = plVar7;
      if (*(int *)(param_1 + 0x2a8) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x2a0);
      }
      (**(code **)(*plVar6 + 0x38))(plVar6,local_res8);
      *(undefined4 *)(param_1 + 0x298) = local_res8[0];
    }
    fVar1 = *(float *)(param_1 + 0x298);
    if (((*(int *)(param_1 + 0x2d8) != 0) && (*(longlong **)(param_1 + 0x2d0) != (longlong *)0x0))
       && (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(param_1 + 0x2d8) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x2d0);
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,local_res20);
      *(undefined4 *)(param_1 + 0x2c8) = local_res20[0];
    }
    fVar2 = *(float *)(param_1 + 0x2c8);
    fVar11 = fVar10;
    if ((fVar1 != -1.0) && (fVar11 = fVar1, fVar1 <= fVar10)) {
      fVar11 = fVar10;
    }
    fVar10 = fVar11;
    if ((fVar2 != -1.0) && (fVar10 = fVar2, fVar11 <= fVar2)) {
      fVar10 = fVar11;
    }
  }
  *param_2 = fVar10;
  param_2[1] = fVar9;
  return param_2;
}



// FUNCTION 14196f470 FUN_14196f470 body=757 status=ok
// SIG undefined FUN_14196f470(void)

float * FUN_14196f470(longlong param_1,float *param_2)

{
  float fVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  float *pfVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  char local_res8 [8];
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined8 local_res20;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar2 = *(undefined8 **)(param_1 + 0x208);
  uVar12 = 0;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  iVar9 = (*(code *)*puVar2)();
  uVar14 = uVar12;
  if (0 < iVar9) {
    do {
      lVar3 = *(longlong *)(uVar14 + *(longlong *)(param_1 + 0x218));
      lVar4 = *(longlong *)(lVar3 + 0x10);
      if (((*(int *)(lVar4 + 0xc0) != 0) && (*(longlong **)(lVar4 + 0xb8) != (longlong *)0x0)) &&
         (cVar7 = (**(code **)(**(longlong **)(lVar4 + 0xb8) + 0x18))(), cVar7 != '\0')) {
        if (*(int *)(lVar4 + 0xc0) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(lVar4 + 0xb8);
        }
        (**(code **)(*plVar11 + 0x38))(plVar11,local_res8);
        *(char *)(lVar4 + 0xb0) = local_res8[0];
      }
      if (*(char *)(lVar4 + 0xb0) != DAT_1464b9ee9) {
        if (((*(int *)(lVar3 + 0x40) != 0) && (*(longlong **)(lVar3 + 0x38) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(lVar3 + 0x38) + 0x18))(), cVar7 != '\0')) {
          if (*(int *)(lVar3 + 0x40) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(lVar3 + 0x38);
          }
          (**(code **)(*plVar11 + 0x38))(plVar11,&local_88);
          *(undefined8 *)(lVar3 + 0x20) = local_88;
          *(undefined8 *)(lVar3 + 0x28) = uStack_80;
        }
        local_98 = *(float *)(lVar3 + 0x20);
        fStack_94 = *(float *)(lVar3 + 0x24);
        uStack_90 = *(undefined4 *)(lVar3 + 0x28);
        uStack_8c = *(undefined4 *)(lVar3 + 0x2c);
        if (((*(int *)(lVar3 + 0x88) != 0) && (*(longlong **)(lVar3 + 0x80) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(lVar3 + 0x80) + 0x18))(), cVar7 != '\0')) {
          if (*(int *)(lVar3 + 0x88) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(lVar3 + 0x80);
          }
          (**(code **)(*plVar11 + 0x38))(plVar11,&local_res20);
          *(undefined8 *)(lVar3 + 0x70) = local_res20;
        }
        if (((*(int *)(lVar3 + 0x68) != 0) && (*(longlong **)(lVar3 + 0x60) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(lVar3 + 0x60) + 0x18))(), cVar7 != '\0')) {
          if (*(int *)(lVar3 + 0x68) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(lVar3 + 0x60);
          }
          (**(code **)(*plVar11 + 0x38))(plVar11,&local_78);
          *(undefined8 *)(lVar3 + 0x48) = local_78;
          *(undefined8 *)(lVar3 + 0x50) = uStack_70;
        }
        local_a8 = *(undefined8 *)(lVar3 + 0x48);
        uStack_a0 = *(undefined8 *)(lVar3 + 0x50);
        uStackX_14 = uStack_8c;
        local_res10 = uStack_90;
        if (((*(int *)(lVar3 + 0xa0) != 0) && (*(longlong **)(lVar3 + 0x98) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(lVar3 + 0x98) + 0x18))(), cVar7 != '\0')) {
          if (*(int *)(lVar3 + 0xa0) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(lVar3 + 0x98);
          }
          uVar8 = (**(code **)(*plVar11 + 0x38))();
          *(undefined1 *)(lVar3 + 0x90) = uVar8;
        }
        if (*(char *)(lVar3 + 0x90) == '\0') {
          pfVar10 = (float *)&local_b8;
          local_b8 = CONCAT44(uStackX_14,local_res10);
        }
        else {
          pfVar10 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(lVar3 + 0x10),local_b0);
        }
        fVar1 = pfVar10[1];
        if (((float)local_a8 == (float)uStack_a0) &&
           (((float)local_a8 == 0.0 || ((float)local_a8 == 1.0)))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((local_a8._4_4_ == uStack_a0._4_4_) &&
           ((local_a8._4_4_ == 0.0 || (local_a8._4_4_ == 1.0)))) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (bVar5) {
          fVar15 = ABS(local_98);
        }
        else {
          fVar15 = 0.0;
        }
        fVar16 = *pfVar10 + fVar15;
        if (*pfVar10 + fVar15 <= *param_2) {
          fVar16 = *param_2;
        }
        *param_2 = fVar16;
        if (bVar6) {
          fVar15 = ABS(fStack_94);
        }
        else {
          fVar15 = 0.0;
        }
        fVar16 = fVar1 + fVar15;
        if (fVar1 + fVar15 <= param_2[1]) {
          fVar16 = param_2[1];
        }
        param_2[1] = fVar16;
      }
      uVar13 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar13;
      iVar9 = (*(code *)**(undefined8 **)(param_1 + 0x208))();
      uVar14 = uVar14 + 8;
    } while ((int)uVar13 < iVar9);
  }
  return param_2;
}



// FUNCTION 14196f770 FUN_14196f770 body=154 status=ok
// SIG undefined FUN_14196f770(void)

float * FUN_14196f770(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  char cVar4;
  float *pfVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  
  uVar3 = *(undefined8 *)(param_1 + 0x240);
  if ((*(int *)(param_1 + 0x218) != 0) && (*(longlong **)(param_1 + 0x210) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))();
    if (cVar4 != '\0') {
      if (*(int *)(param_1 + 0x218) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x210);
      }
      uVar7 = (**(code **)(*plVar6 + 0x38))();
      *(undefined4 *)(param_1 + 0x208) = uVar7;
    }
  }
  pfVar5 = (float *)SWidget::GetDesiredSize(uVar3,local_res8);
  fVar1 = *(float *)(param_1 + 0x208);
  fVar2 = pfVar5[1];
  *param_2 = fVar1 * *pfVar5;
  param_2[1] = fVar1 * fVar2;
  return param_2;
}



// FUNCTION 14196f810 FUN_14196f810 body=473 status=ok
// SIG undefined FUN_14196f810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14196f810(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  char cVar7;
  float *pfVar8;
  char *pcVar9;
  longlong *plVar10;
  float local_res8;
  float fStackX_c;
  undefined1 local_res20 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  plVar10 = (longlong *)0x0;
  lVar6 = *(longlong *)(param_1 + 0x228);
  pcVar9 = (char *)(lVar6 + 0xb0);
  if ((*(int *)(lVar6 + 0xc0) != 0) && (*(longlong **)(lVar6 + 0xb8) != (longlong *)0x0)) {
    cVar7 = (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x18))();
    if (cVar7 != '\0') {
      if (*(int *)(lVar6 + 0xc0) == 0) {
        (**(code **)(_DAT_00000000 + 0x38))(0,&local_res8);
        *pcVar9 = local_res8._0_1_;
      }
      else {
        (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x38))
                  (*(longlong **)(lVar6 + 0xb8),&local_res8);
        *pcVar9 = local_res8._0_1_;
      }
      goto LAB_14196f895;
    }
  }
  local_res8._0_1_ = *pcVar9;
LAB_14196f895:
  if (local_res8._0_1_ != DAT_1464b9ee9) {
    if ((*(int *)(param_1 + 0x260) != 0) && (*(longlong **)(param_1 + 600) != (longlong *)0x0)) {
      cVar7 = (**(code **)(**(longlong **)(param_1 + 600) + 0x18))();
      if (cVar7 != '\0') {
        if (*(int *)(param_1 + 0x260) != 0) {
          plVar10 = *(longlong **)(param_1 + 600);
        }
        (**(code **)(*plVar10 + 0x38))(plVar10,&local_68);
        *(undefined4 *)(param_1 + 0x240) = local_68;
        *(undefined4 *)(param_1 + 0x244) = uStack_64;
        *(undefined4 *)(param_1 + 0x248) = uStack_60;
        *(undefined4 *)(param_1 + 0x24c) = uStack_5c;
      }
    }
    fVar1 = *(float *)(param_1 + 0x248);
    fVar2 = *(float *)(param_1 + 0x240);
    fVar3 = *(float *)(param_1 + 0x24c);
    fVar4 = *(float *)(param_1 + 0x244);
    pfVar8 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_res20);
    fVar5 = *(float *)(param_1 + 0x368);
    local_res8 = fVar1 + fVar2 + *pfVar8;
    fStackX_c = fVar4 + fVar3 + pfVar8[1];
    if ((0.0 < fVar5) && (local_res8 <= fVar5)) {
      local_res8 = fVar5;
    }
    fVar1 = *(float *)(param_1 + 0x36c);
    if ((0.0 < fVar1) && (fVar1 <= fStackX_c)) {
      fStackX_c = fVar1;
    }
    *param_2 = CONCAT44(fStackX_c,local_res8);
    return param_2;
  }
  *param_2 = DAT_1468b5d88;
  return param_2;
}



// FUNCTION 14196fa30 FUN_14196fa30 body=241 status=ok
// SIG undefined FUN_14196fa30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14196fa30(longlong param_1,float *param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  float local_res8;
  float local_resc;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  lVar1 = *(longlong *)(param_1 + 0x228);
  pcVar3 = (char *)(lVar1 + 0xb0);
  if ((*(int *)(lVar1 + 0xc0) != 0) && (*(longlong **)(lVar1 + 0xb8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xb8) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(lVar1 + 0xc0) == 0) {
        (**(code **)(_DAT_00000000 + 0x38))(0,&local_res8);
        *pcVar3 = local_res8._0_1_;
        cVar2 = local_res8._0_1_;
      }
      else {
        (**(code **)(**(longlong **)(lVar1 + 0xb8) + 0x38))
                  (*(longlong **)(lVar1 + 0xb8),&local_res8);
        *pcVar3 = local_res8._0_1_;
        cVar2 = local_res8._0_1_;
      }
      goto LAB_14196faab;
    }
  }
  cVar2 = *pcVar3;
LAB_14196faab:
  if (cVar2 == DAT_1464b9ee9) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
  }
  else {
    FUN_141984de0(param_1,&local_28,param_3);
    FUN_14196f010(param_1,&local_res8,param_3);
    *param_2 = local_28 + local_20 + local_res8;
    param_2[1] = local_1c + local_24 + local_resc;
  }
  return param_2;
}



// FUNCTION 14196fb30 FUN_14196fb30 body=399 status=ok
// SIG undefined FUN_14196fb30(void)

float * FUN_14196fb30(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  longlong *plVar6;
  longlong *plVar7;
  float fVar8;
  undefined1 local_res8 [8];
  float local_res20;
  float local_res24;
  
  fVar8 = (float)FUN_141984770();
  plVar7 = (longlong *)0x0;
  local_res8[0] = 0;
  if (*(char *)(param_1 + 0x339) != '\0') {
    if (((*(int *)(param_1 + 0x348) != 0) && (*(longlong **)(param_1 + 0x340) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x18))(), cVar2 != '\0')) {
      plVar6 = plVar7;
      if (*(int *)(param_1 + 0x348) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x340);
      }
      uVar3 = (**(code **)(*plVar6 + 0x38))();
      *(undefined1 *)(param_1 + 0x338) = uVar3;
    }
    if (*(char *)(param_1 + 0x338) != '\0') {
      pfVar5 = (float *)FUN_1418054a0(param_1,local_res8,param_3);
      fVar1 = pfVar5[1];
      *param_2 = fVar8 * *pfVar5 * (1.0 / param_3);
      param_2[1] = fVar8 * fVar1 * (1.0 / param_3);
      return param_2;
    }
  }
  FUN_1418054a0(param_1,&local_res20,param_3);
  if (((*(int *)(param_1 + 0x318) != 0) && (*(longlong **)(param_1 + 0x310) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x18))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x318) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x310);
    }
    uVar4 = (**(code **)(*plVar7 + 0x38))(plVar7);
    *(undefined4 *)(param_1 + 0x308) = uVar4;
  }
  if (*(int *)(param_1 + 0x308) == 3) {
    if (local_res20 == 0.0) {
LAB_14196fc76:
      fVar8 = 1.0;
      goto LAB_14196fc91;
    }
    fVar8 = *(float *)(param_1 + 0x4c) / local_res20;
  }
  else {
    if (*(int *)(param_1 + 0x308) != 4) goto LAB_14196fc91;
    if (local_res24 == 0.0) goto LAB_14196fc76;
    fVar8 = *(float *)(param_1 + 0x50) / local_res24;
  }
  if (fVar8 <= 1.0) {
    fVar8 = 1.0;
  }
LAB_14196fc91:
  *param_2 = local_res20 * fVar8;
  param_2[1] = local_res24 * fVar8;
  return param_2;
}



// FUNCTION 14196fcc0 FUN_14196fcc0 body=246 status=ok
// SIG undefined FUN_14196fcc0(void)

float * FUN_14196fcc0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [48];
  
  plVar3 = *(longlong **)(param_1 + 0x218);
  uVar4 = *(undefined8 *)(plVar3[1] + 0x10);
  uVar5 = *(undefined8 *)(*plVar3 + 0x10);
  if (*(int *)(param_1 + 0x23c) == 0) {
    lVar6 = SWidget::GetDesiredSize(*(undefined8 *)(plVar3[2] + 0x10),local_res8);
    fVar1 = *(float *)(lVar6 + 4);
    lVar6 = SWidget::GetDesiredSize(uVar4,local_res20);
    fVar2 = *(float *)(lVar6 + 4);
    lVar6 = SWidget::GetDesiredSize(uVar5,local_48);
    fVar8 = *(float *)(lVar6 + 4);
    if (*(float *)(lVar6 + 4) <= fVar2) {
      fVar8 = fVar2;
    }
    *param_2 = *(float *)(param_1 + 0x238);
    if (fVar8 <= fVar1) {
      fVar8 = fVar1;
    }
    param_2[1] = fVar8;
  }
  else {
    pfVar7 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(plVar3[2] + 0x10),local_res8);
    fVar1 = *pfVar7;
    pfVar7 = (float *)SWidget::GetDesiredSize(uVar4,local_res20);
    fVar2 = *pfVar7;
    pfVar7 = (float *)SWidget::GetDesiredSize(uVar5,local_48);
    fVar8 = *pfVar7;
    if (*pfVar7 <= fVar2) {
      fVar8 = fVar2;
    }
    param_2[1] = *(float *)(param_1 + 0x238);
    if (fVar8 <= fVar1) {
      fVar8 = fVar1;
    }
    *param_2 = fVar8;
  }
  return param_2;
}



// FUNCTION 14196fdc0 FUN_14196fdc0 body=474 status=ok
// SIG undefined FUN_14196fdc0(void)

float * FUN_14196fdc0(longlong param_1,float *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  char local_res8 [8];
  float local_res10;
  float local_res14;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  fVar9 = DAT_1468b5d88._4_4_;
  puVar1 = *(undefined8 **)(param_1 + 0x210);
  *param_2 = (float)DAT_1468b5d88;
  iVar7 = 0;
  param_2[1] = fVar9;
  iVar5 = (*(code *)*puVar1)(param_1 + 0x210);
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(lVar8 + *(longlong *)(param_1 + 0x220));
      lVar3 = *(longlong *)(lVar2 + 0x10);
      if (((*(int *)(lVar3 + 0xc0) != 0) && (*(longlong **)(lVar3 + 0xb8) != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(**(longlong **)(lVar3 + 0xb8) + 0x18))(), cVar4 != '\0')) {
        if (*(int *)(lVar3 + 0xc0) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(lVar3 + 0xb8);
        }
        (**(code **)(*plVar6 + 0x38))(plVar6,local_res8);
        *(char *)(lVar3 + 0xb0) = local_res8[0];
      }
      if (*(char *)(lVar3 + 0xb0) != DAT_1464b9ee9) {
        SWidget::GetDesiredSize(*(undefined8 *)(lVar2 + 0x10),&local_res10);
        if (*(int *)(param_1 + 0x238) == 1) {
          iVar5 = *(int *)(lVar2 + 0x40);
          fVar9 = *param_2;
          if (*param_2 <= local_res10) {
            fVar9 = local_res10;
          }
          *param_2 = fVar9;
          if (((iVar5 != 0) && (*(longlong **)(lVar2 + 0x38) != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(**(longlong **)(lVar2 + 0x38) + 0x18))(), cVar4 != '\0')) {
            if (*(int *)(lVar2 + 0x40) == 0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = *(longlong **)(lVar2 + 0x38);
            }
            (**(code **)(*plVar6 + 0x38))(plVar6,&local_48);
            *(undefined8 *)(lVar2 + 0x20) = local_48;
            *(undefined8 *)(lVar2 + 0x28) = uStack_40;
          }
          fVar9 = *(float *)(lVar2 + 0x2c) + *(float *)(lVar2 + 0x24) + local_res14 + param_2[1];
        }
        else {
          if (((*(int *)(lVar2 + 0x40) != 0) && (*(longlong **)(lVar2 + 0x38) != (longlong *)0x0))
             && (cVar4 = (**(code **)(**(longlong **)(lVar2 + 0x38) + 0x18))(), cVar4 != '\0')) {
            if (*(int *)(lVar2 + 0x40) == 0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = *(longlong **)(lVar2 + 0x38);
            }
            (**(code **)(*plVar6 + 0x38))(plVar6,&local_38);
            *(undefined8 *)(lVar2 + 0x20) = local_38;
            *(undefined8 *)(lVar2 + 0x28) = uStack_30;
          }
          *param_2 = *(float *)(lVar2 + 0x28) + *(float *)(lVar2 + 0x20) + local_res10 + *param_2;
          fVar9 = param_2[1];
          if (param_2[1] <= local_res14) {
            fVar9 = local_res14;
          }
        }
        param_2[1] = fVar9;
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
      iVar5 = (*(code *)**(undefined8 **)(param_1 + 0x210))(param_1 + 0x210);
    } while (iVar7 < iVar5);
  }
  return param_2;
}



// FUNCTION 14196ffa0 FUN_14196ffa0 body=118 status=ok
// SIG undefined FUN_14196ffa0(void)

undefined8 * FUN_14196ffa0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_res8;
  
  if ((*(int *)(param_1 + 0x220) != 0) && (*(longlong **)(param_1 + 0x218) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x220) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x218);
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_res8);
      *(undefined8 *)(param_1 + 0x208) = local_res8;
    }
  }
  *param_2 = *(undefined8 *)(param_1 + 0x208);
  return param_2;
}



// FUNCTION 141970020 FUN_141970020 body=619 status=ok
// SIG undefined FUN_141970020(void)

undefined8 * FUN_141970020(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  char local_res8 [8];
  float local_res10;
  float fStackX_14;
  float local_res20;
  float local_res24;
  
  puVar1 = (undefined8 *)(param_1 + 0x208);
  plVar13 = (longlong *)0x0;
  iVar12 = 0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar2 = *(float *)(param_1 + 0x264);
  if (*(int *)(param_1 + 0x238) == 0) {
    fStackX_14 = 0.0;
    iVar7 = (**(code **)*puVar1)();
    plVar10 = plVar13;
    plVar11 = plVar13;
    plVar14 = plVar13;
    fVar5 = fStackX_14;
    if (0 < iVar7) {
      do {
        lVar3 = *(longlong *)((longlong)plVar11 + *(longlong *)(param_1 + 0x218));
        lVar4 = *(longlong *)(lVar3 + 0x10);
        if (((*(int *)(lVar4 + 0xc0) != 0) && (*(longlong **)(lVar4 + 0xb8) != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(**(longlong **)(lVar4 + 0xb8) + 0x18))(), cVar6 != '\0')) {
          plVar8 = plVar13;
          if (*(int *)(lVar4 + 0xc0) != 0) {
            plVar8 = *(longlong **)(lVar4 + 0xb8);
          }
          (**(code **)(*plVar8 + 0x38))(plVar8,local_res8);
          *(char *)(lVar4 + 0xb0) = local_res8[0];
        }
        if (*(char *)(lVar4 + 0xb0) != DAT_1464b9ee9) {
          plVar14 = (longlong *)(ulonglong)((int)plVar14 + 1);
          SWidget::GetDesiredSize(*(undefined8 *)(lVar3 + 0x10),&local_res20);
          fVar16 = fVar16 + local_res20;
          if (fVar15 <= local_res24) {
            fVar15 = local_res24;
          }
        }
        iVar12 = (int)plVar14;
        uVar9 = (int)plVar10 + 1;
        iVar7 = (**(code **)*puVar1)(puVar1);
        plVar10 = (longlong *)(ulonglong)uVar9;
        plVar11 = plVar11 + 1;
        fVar5 = fVar15;
      } while ((int)uVar9 < iVar7);
    }
    fStackX_14 = fVar5;
    iVar7 = iVar12 + -1;
    if (iVar12 + -1 < 1) {
      iVar7 = 0;
    }
    local_res10 = fVar16 + (float)iVar7 * fVar2;
  }
  else {
    local_res10 = 0.0;
    iVar7 = (**(code **)*puVar1)(puVar1);
    plVar10 = plVar13;
    plVar11 = plVar13;
    plVar14 = plVar13;
    fVar5 = local_res10;
    if (0 < iVar7) {
      do {
        lVar3 = *(longlong *)((longlong)plVar11 + *(longlong *)(param_1 + 0x218));
        lVar4 = *(longlong *)(lVar3 + 0x10);
        if (((*(int *)(lVar4 + 0xc0) != 0) && (*(longlong **)(lVar4 + 0xb8) != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(**(longlong **)(lVar4 + 0xb8) + 0x18))(), cVar6 != '\0')) {
          plVar8 = plVar13;
          if (*(int *)(lVar4 + 0xc0) != 0) {
            plVar8 = *(longlong **)(lVar4 + 0xb8);
          }
          (**(code **)(*plVar8 + 0x38))(plVar8,local_res8);
          *(char *)(lVar4 + 0xb0) = local_res8[0];
        }
        if (*(char *)(lVar4 + 0xb0) != DAT_1464b9ee9) {
          plVar14 = (longlong *)(ulonglong)((int)plVar14 + 1);
          SWidget::GetDesiredSize(*(undefined8 *)(lVar3 + 0x10),&local_res20);
          if (fVar15 <= local_res20) {
            fVar15 = local_res20;
          }
          fVar16 = fVar16 + local_res24;
        }
        iVar12 = (int)plVar14;
        uVar9 = (int)plVar10 + 1;
        iVar7 = (**(code **)*puVar1)(puVar1);
        plVar10 = (longlong *)(ulonglong)uVar9;
        plVar11 = plVar11 + 1;
        fVar5 = fVar15;
      } while ((int)uVar9 < iVar7);
    }
    local_res10 = fVar5;
    iVar7 = iVar12 + -1;
    if (iVar12 + -1 < 1) {
      iVar7 = 0;
    }
    fStackX_14 = fVar16 + (float)iVar7 * fVar2;
  }
  *param_2 = CONCAT44(fStackX_14,local_res10);
  return param_2;
}



// FUNCTION 141970290 FUN_141970290 body=135 status=ok
// SIG undefined FUN_141970290(void)

undefined8 FUN_141970290(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_141985e30(param_1 + 0x208,local_18);
  SWidget::GetDesiredSize(*puVar5,param_2);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 141970320 FUN_141970320 body=769 status=ok
// SIG undefined FUN_141970320(void)

float * FUN_141970320(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  char local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  fVar19 = DAT_1468b5d88._4_4_;
  fVar20 = (float)DAT_1468b5d88;
  if (((*(int *)(param_1 + 0x250) != 0) && (*(longlong **)(param_1 + 0x248) != (longlong *)0x0)) &&
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x248) + 0x18))(), cVar9 != '\0')) {
    if (*(int *)(param_1 + 0x250) == 0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = *(longlong **)(param_1 + 0x248);
    }
    (**(code **)(*plVar13 + 0x38))(plVar13,&local_98);
    *(undefined4 *)(param_1 + 0x230) = local_98;
    *(undefined4 *)(param_1 + 0x234) = uStack_94;
    *(undefined4 *)(param_1 + 0x238) = uStack_90;
    *(undefined4 *)(param_1 + 0x23c) = uStack_8c;
  }
  fVar1 = *(float *)(param_1 + 0x238);
  fVar2 = *(float *)(param_1 + 0x23c);
  fVar3 = *(float *)(param_1 + 0x230);
  fVar4 = *(float *)(param_1 + 0x234);
  if (((*(int *)(param_1 + 0x270) != 0) && (*(longlong **)(param_1 + 0x268) != (longlong *)0x0)) &&
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x18))(), cVar9 != '\0')) {
    if (*(int *)(param_1 + 0x270) == 0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = *(longlong **)(param_1 + 0x268);
    }
    uVar16 = (**(code **)(*plVar13 + 0x38))();
    *(undefined4 *)(param_1 + 0x260) = uVar16;
  }
  fVar5 = *(float *)(param_1 + 0x260);
  if (((*(int *)(param_1 + 0x288) != 0) && (*(longlong **)(param_1 + 0x280) != (longlong *)0x0)) &&
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x18))(), cVar9 != '\0')) {
    if (*(int *)(param_1 + 0x288) == 0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = *(longlong **)(param_1 + 0x280);
    }
    uVar16 = (**(code **)(*plVar13 + 0x38))();
    *(undefined4 *)(param_1 + 0x278) = uVar16;
  }
  fVar6 = *(float *)(param_1 + 0x278);
  iVar14 = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  iVar10 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
  if (0 < iVar10) {
    lVar15 = 0;
    do {
      lVar7 = *(longlong *)(lVar15 + *(longlong *)(param_1 + 0x218));
      lVar8 = *(longlong *)(lVar7 + 0x10);
      if (((*(int *)(lVar8 + 0xc0) != 0) && (*(longlong **)(lVar8 + 0xb8) != (longlong *)0x0)) &&
         (cVar9 = (**(code **)(**(longlong **)(lVar8 + 0xb8) + 0x18))(), cVar9 != '\0')) {
        if (*(int *)(lVar8 + 0xc0) == 0) {
          plVar13 = (longlong *)0x0;
        }
        else {
          plVar13 = *(longlong **)(lVar8 + 0xb8);
        }
        (**(code **)(*plVar13 + 0x38))(plVar13,local_res8);
        *(char *)(lVar8 + 0xb0) = local_res8[0];
      }
      if (*(char *)(lVar8 + 0xb0) != DAT_1464b9ee9) {
        iVar11 = *(int *)(lVar7 + 0x28) + 1;
        iVar10 = *(int *)(param_1 + 600);
        if (*(int *)(param_1 + 600) <= iVar11) {
          iVar10 = iVar11;
        }
        *(int *)(param_1 + 600) = iVar10;
        iVar11 = *(int *)(lVar7 + 0x2c) + 1;
        iVar10 = *(int *)(param_1 + 0x25c);
        if (*(int *)(param_1 + 0x25c) <= iVar11) {
          iVar10 = iVar11;
        }
        *(int *)(param_1 + 0x25c) = iVar10;
        pfVar12 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(lVar7 + 0x10),local_res10);
        fVar17 = fVar1 + fVar3 + *pfVar12;
        fVar18 = fVar2 + fVar4 + pfVar12[1];
        if (fVar17 <= fVar5) {
          fVar17 = fVar5;
        }
        if (fVar18 <= fVar6) {
          fVar18 = fVar6;
        }
        if (fVar20 < fVar17) {
          fVar20 = fVar17;
        }
        if (fVar19 < fVar18) {
          fVar19 = fVar18;
        }
      }
      iVar14 = iVar14 + 1;
      lVar15 = lVar15 + 8;
      iVar10 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
    } while (iVar14 < iVar10);
  }
  iVar10 = *(int *)(param_1 + 0x25c);
  *param_2 = (float)*(int *)(param_1 + 600) * fVar20;
  param_2[1] = (float)iVar10 * fVar19;
  return param_2;
}



// FUNCTION 141970630 FUN_141970630 body=118 status=ok
// SIG undefined FUN_141970630(void)

undefined8 * FUN_141970630(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_res8;
  
  if ((*(int *)(param_1 + 0x340) != 0) && (*(longlong **)(param_1 + 0x338) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x338) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x340) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x338);
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_res8);
      *(undefined8 *)(param_1 + 0x328) = local_res8;
    }
  }
  *param_2 = *(undefined8 *)(param_1 + 0x328);
  return param_2;
}



// FUNCTION 1419706b0 FUN_1419706b0 body=23 status=ok
// SIG undefined FUN_1419706b0(void)

undefined8 FUN_1419706b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1418054a0();
  return param_2;
}



// FUNCTION 1419706d0 FUN_1419706d0 body=246 status=ok
// SIG undefined FUN_1419706d0(void)

undefined8 * FUN_1419706d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  char local_res8 [8];
  longlong local_18;
  longlong *local_10;
  
  FUN_141985e30(param_1 + 0x208,&local_18);
  if (local_18 != DAT_1469eb218) {
    if ((*(int *)(local_18 + 0xc0) == 0) || (*(longlong **)(local_18 + 0xb8) == (longlong *)0x0)) {
LAB_14197074c:
      local_res8[0] = *(char *)(local_18 + 0xb0);
    }
    else {
      cVar5 = (**(code **)(**(longlong **)(local_18 + 0xb8) + 0x18))();
      if (cVar5 == '\0') goto LAB_14197074c;
      if (*(int *)(local_18 + 0xc0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(local_18 + 0xb8);
      }
      (**(code **)(*plVar6 + 0x38))(plVar6,local_res8);
      *(char *)(local_18 + 0xb0) = local_res8[0];
    }
    if (local_res8[0] != DAT_1464b9ee9) {
      SWidget::GetDesiredSize(local_18,param_2);
      goto LAB_141970774;
    }
  }
  *param_2 = DAT_1468b5d88;
LAB_141970774:
  plVar6 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1419707d0 ComputeDesiredSize body=97 status=ok
// SIG undefined ComputeDesiredSize(void)

undefined8 * SWidgetSwitcher::ComputeDesiredSize(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x220))();
  if (0 < iVar1) {
    lVar2 = FUN_141983af0(param_1);
    if (lVar2 != 0) {
      SWidget::GetDesiredSize(*(undefined8 *)(lVar2 + 0x10),param_2);
      return param_2;
    }
  }
  *param_2 = DAT_1468b5d88;
  return param_2;
}



// FUNCTION 141970840 ComputeDesiredSize body=80 status=ok
// SIG undefined ComputeDesiredSize(void)

undefined4 * SWrapBox::ComputeDesiredSize(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *local_res10 [3];
  undefined1 *local_18;
  undefined4 **local_10;
  
  uVar1 = (undefined4)DAT_1468b5d88;
  local_10 = local_res10;
  *param_2 = (undefined4)DAT_1468b5d88;
  param_2[1] = DAT_1468b5d88._4_4_;
  local_18 = &LAB_14196e210;
  local_res10[0] = param_2;
  FChildArranger::Arrange(uVar1,&local_18);
  return param_2;
}



// FUNCTION 141970890 ComputeVolatility body=269 status=ok
// SIG undefined ComputeVolatility(void)

undefined1 FSlateEditableTextLayout::ComputeVolatility(longlong param_1)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 0x448) != 0) && (*(longlong **)(param_1 + 0x440) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x440) + 0x18))(), cVar1 != '\0')) {
    return 1;
  }
  if (((*(int *)(param_1 + 0x498) != 0) && (*(longlong **)(param_1 + 0x490) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x490) + 0x18))(), cVar1 != '\0')) {
    return 1;
  }
  if (((*(int *)(param_1 + 0x4c8) != 0) && (*(longlong **)(param_1 + 0x4c0) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x18))(), cVar1 != '\0')) {
    return 1;
  }
  if (((*(int *)(param_1 + 0x518) != 0) && (*(longlong **)(param_1 + 0x510) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x18))(), cVar1 != '\0')) {
    return 1;
  }
  cVar1 = TAttribute<float>::IsBound(param_1 + 0x520);
  if (cVar1 == '\0') {
    if (((*(int *)(param_1 + 0x548) != 0) && (*(longlong **)(param_1 + 0x540) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x540) + 0x18))(), cVar1 != '\0')) {
      return 1;
    }
    cVar1 = TAttribute<FMargin>::IsBound(param_1 + 0x550);
    if (cVar1 == '\0') {
      if (((*(int *)(param_1 + 0x588) != 0) && (*(longlong **)(param_1 + 0x580) != (longlong *)0x0))
         && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x580) + 0x18))(), cVar1 != '\0')) {
        return 1;
      }
      cVar1 = TAttribute<float>::IsBound(param_1 + 0x590);
      if (cVar1 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1419709a0 FUN_1419709a0 body=149 status=ok
// SIG undefined FUN_1419709a0(void)

undefined8 FUN_1419709a0(longlong param_1)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 0xc0) != 0) && (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))(), cVar1 != '\0')) {
    return 1;
  }
  if (((*(int *)(param_1 + 0xa8) != 0) && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))(), cVar1 != '\0')) {
    return 1;
  }
  if (((*(int *)(param_1 + 0xf8) != 0) && (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))(), cVar1 != '\0')) {
    return 1;
  }
  if (((*(int *)(param_1 + 0x228) != 0) && (*(longlong **)(param_1 + 0x220) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x220) + 0x18))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 141970a40 FUN_141970a40 body=91 status=ok
// SIG undefined FUN_141970a40(void)

undefined8 FUN_141970a40(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  
  if ((*(byte *)(param_1 + 0x438) & 4) != 0) {
    return 1;
  }
  if (((DAT_1469f4590 != 0) &&
      (fVar2 = (float)FUN_14189c9c0(),
      fVar2 < *(float *)(param_1 + 0x324) || fVar2 == *(float *)(param_1 + 0x324))) &&
     (pfVar1 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x308) + 0x3c8) + 0x234),
     *pfVar1 <= 0.9999 && *pfVar1 != 0.9999)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141970aa0 FUN_141970aa0 body=4794 status=ok
// SIG undefined FUN_141970aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141970aa0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  char cVar10;
  byte bVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined1 auStack_da8 [32];
  longlong local_d88;
  longlong local_d80;
  undefined4 local_d78;
  longlong local_d70;
  longlong local_d68;
  longlong local_d60;
  undefined1 local_d58;
  undefined1 local_d50;
  longlong local_d48;
  undefined1 local_d38 [2];
  undefined1 local_d36 [14];
  undefined8 local_d28;
  undefined8 uStack_d20;
  longlong *local_d18;
  longlong *plStack_d10;
  undefined8 local_d08;
  longlong *plStack_d00;
  undefined8 local_cf8;
  longlong *plStack_cf0;
  longlong *local_ce8;
  longlong *local_ce0;
  longlong local_cd8;
  longlong *plStack_cd0;
  undefined8 local_cc8;
  longlong *plStack_cc0;
  longlong *local_cb8;
  int local_cb0;
  longlong *local_ca8;
  int local_ca0;
  undefined4 local_c98;
  undefined4 uStack_c94;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  longlong *local_c88;
  int local_c80;
  undefined8 local_c78;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  longlong local_c68;
  undefined8 local_c60;
  longlong *local_c58 [2];
  undefined8 local_c48;
  undefined4 uStack_c40;
  undefined4 uStack_c3c;
  longlong *local_c38;
  longlong *local_c30;
  undefined1 *local_c28;
  undefined4 local_c20;
  undefined1 local_c1c;
  longlong local_c18;
  undefined4 local_c10;
  longlong local_c08;
  longlong local_c00;
  undefined1 local_bf8 [8];
  longlong *local_bf0;
  undefined4 local_be8;
  undefined1 local_be4;
  longlong local_be0;
  undefined4 local_bd8;
  undefined4 local_bd0;
  undefined4 uStack_bcc;
  undefined4 uStack_bc8;
  undefined4 uStack_bc4;
  undefined1 local_bc0;
  undefined8 local_bb8;
  longlong *plStack_bb0;
  undefined1 local_ba8;
  undefined8 local_ba0;
  undefined4 local_b98;
  longlong *local_b90;
  longlong *local_b88;
  undefined1 local_b80 [8];
  longlong *local_b78;
  undefined1 local_b68;
  undefined8 local_b60;
  undefined4 local_b58;
  longlong local_b50;
  longlong local_b48;
  undefined4 local_b38;
  undefined4 uStack_b34;
  undefined4 uStack_b30;
  undefined4 uStack_b2c;
  undefined4 local_b28;
  undefined4 uStack_b24;
  undefined4 uStack_b20;
  undefined4 uStack_b1c;
  undefined4 local_b18;
  undefined4 uStack_b14;
  undefined4 uStack_b10;
  undefined4 uStack_b0c;
  longlong *local_b08;
  longlong *local_b00;
  longlong *local_af0;
  longlong *local_ae8;
  undefined1 local_ad8 [8];
  longlong *local_ad0;
  undefined4 local_ac0;
  undefined4 uStack_abc;
  undefined4 uStack_ab8;
  undefined4 uStack_ab4;
  longlong *local_ab0;
  longlong *plStack_aa8;
  undefined8 local_aa0;
  longlong *plStack_a98;
  longlong local_a90;
  longlong *plStack_a88;
  undefined8 local_a80;
  longlong *plStack_a78;
  undefined8 local_a70;
  longlong *plStack_a68;
  undefined1 local_a58 [264];
  undefined1 local_950 [16];
  undefined1 local_940 [16];
  undefined1 local_930 [16];
  undefined1 local_920 [32];
  undefined1 local_900 [16];
  undefined1 local_8f0 [16];
  undefined1 local_8e0 [16];
  undefined1 local_8d0 [16];
  undefined1 local_8c0 [24];
  undefined1 local_8a8 [24];
  longlong *local_890;
  longlong *local_878;
  undefined1 local_868 [40];
  undefined1 local_840 [16];
  undefined1 local_830 [16];
  undefined1 local_820 [24];
  undefined1 local_808 [496];
  undefined1 local_618 [576];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_da8;
  *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_2 + 0x128);
  local_c68 = *(longlong *)(param_2 + 0x120);
  lVar12 = *(longlong *)(param_2 + 0x118);
  local_c08 = lVar12 + 8;
  if (local_c68 == 0) {
    local_c68 = lVar12 + 0x10;
  }
  bVar20 = *(char *)(param_2 + 0x210) == '\0';
  puVar19 = (undefined8 *)(param_2 + 0x1f8);
  if (bVar20) {
    puVar19 = (undefined8 *)(lVar12 + 0x3a8);
  }
  *(undefined8 *)(param_1 + 0x358) = *puVar19;
  puVar19 = (undefined8 *)(param_2 + 0x200);
  if (bVar20) {
    puVar19 = (undefined8 *)(lVar12 + 0x3b0);
  }
  *(undefined8 *)(param_1 + 0x360) = *puVar19;
  puVar18 = (undefined4 *)(param_2 + 0x208);
  if (bVar20) {
    puVar18 = (undefined4 *)(lVar12 + 0x3b8);
  }
  *(undefined4 *)(param_1 + 0x368) = *puVar18;
  *(undefined4 *)(param_1 + 0x36c) = puVar18[1];
  if (*(char *)(param_2 + 0x230) == '\0') {
    puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x118) + 0x3c0);
  }
  else {
    puVar19 = (undefined8 *)(param_2 + 0x218);
  }
  *(undefined8 *)(param_1 + 0x370) = *puVar19;
  *(undefined8 *)(param_1 + 0x378) = puVar19[1];
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(puVar19 + 2);
  *(undefined4 *)(param_1 + 900) = *(undefined4 *)((longlong)puVar19 + 0x14);
  local_c00 = param_1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3d0,param_2 + 0x1c0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x390,param_2 + 0x1a0);
  plVar15 = (longlong *)(param_1 + 0x3e0);
  if ((longlong *)(param_2 + 0x1b0) != plVar15) {
    if ((*(int *)(param_2 + 0x1b8) == 0) ||
       (plVar5 = *(longlong **)(param_2 + 0x1b0), plVar5 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 1000) != 0) &&
         (plVar5 = (longlong *)*plVar15, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*plVar15 != 0) {
          lVar12 = FMemory::Realloc(*plVar15,0,0);
          *plVar15 = lVar12;
        }
        *(undefined4 *)(param_1 + 1000) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar15);
    }
  }
  puVar19 = (undefined8 *)(param_1 + 0x3c0);
  *(undefined1 *)(param_1 + 0x3f0) = *(undefined1 *)(param_2 + 0x239);
  *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_2 + 0x198);
  plVar15 = *(longlong **)(param_2 + 0x1d8);
  uVar17 = *(undefined8 *)(param_2 + 0x1d0);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_d08 = uVar17;
  plStack_d00 = plVar15;
  if (&local_d08 != puVar19) {
    local_d08 = *puVar19;
    plStack_d00 = *(longlong **)(param_1 + 0x3c8);
    *puVar19 = uVar17;
    *(longlong **)(param_1 + 0x3c8) = plVar15;
    local_a80 = uVar17;
    plStack_a78 = plVar15;
  }
  plVar15 = plStack_d00;
  if (plStack_d00 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_d00 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_d00)(plStack_d00);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_d00 + 8))(plStack_d00,1);
      }
    }
  }
  local_c20 = *(undefined4 *)(param_2 + 500);
  uVar17 = *(undefined8 *)(param_2 + 0x1d0);
  local_be0 = 0;
  local_bd8 = 0;
  uStack_c40 = 0;
  uStack_c70 = 0;
  local_c18 = 0;
  local_c10 = 0;
  plVar15 = *(longlong **)(param_2 + 0x1d8);
  local_c48 = FUN_14199c920;
  local_c78 = FUN_141983340;
  local_be8 = 1;
  local_be4 = 1;
  local_c1c = 1;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  uVar13 = *(undefined8 *)(param_2 + 0x198);
  lVar12 = FUN_14068eb10(local_a58);
  local_b38 = (undefined4)local_c78;
  uStack_b34 = local_c78._4_4_;
  uStack_b30 = uStack_c70;
  uStack_b2c = uStack_c6c;
  *(undefined8 *)(lVar12 + 0x148) = uVar13;
  uVar13 = FUN_1418ca130(&local_cb8,param_1,&local_b38);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x108,uVar13);
  if (local_cb0 == 0) {
LAB_141970dec:
    if (local_cb8 != (longlong *)0x0) {
      FMemory::Free(local_cb8);
    }
  }
  else if (local_cb8 != (longlong *)0x0) {
    (**(code **)(*local_cb8 + 0x28))(local_cb8,0);
    if (local_cb8 != (longlong *)0x0) {
      local_cb8 = (longlong *)FMemory::Realloc(local_cb8,0,0);
    }
    local_cb0 = 0;
    goto LAB_141970dec;
  }
  local_b28 = (undefined4)local_c48;
  uStack_b24 = local_c48._4_4_;
  uStack_b20 = uStack_c40;
  uStack_b1c = uStack_c3c;
  uVar13 = FUN_14195d430(&local_ca8,param_1,&local_b28);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x198,uVar13);
  if (local_ca0 == 0) {
LAB_141970e65:
    if (local_ca8 != (longlong *)0x0) {
      FMemory::Free(local_ca8);
    }
  }
  else if (local_ca8 != (longlong *)0x0) {
    (**(code **)(*local_ca8 + 0x28))(local_ca8,0);
    if (local_ca8 != (longlong *)0x0) {
      local_ca8 = (longlong *)FMemory::Realloc(local_ca8,0,0);
    }
    local_ca0 = 0;
    goto LAB_141970e65;
  }
  plVar5 = (longlong *)(lVar12 + 0x1b0);
  *(undefined4 *)(lVar12 + 0x1a8) = 1;
  *(undefined1 *)(lVar12 + 0x1ac) = 1;
  if (((&local_be0 != plVar5) && (*(int *)(lVar12 + 0x1b8) != 0)) &&
     (plVar16 = (longlong *)*plVar5, plVar16 != (longlong *)0x0)) {
    (**(code **)(*plVar16 + 0x28))(plVar16,0);
    if (*plVar5 != 0) {
      lVar14 = FMemory::Realloc(*plVar5,0,0);
      *plVar5 = lVar14;
    }
    *(undefined4 *)(lVar12 + 0x1b8) = 0;
  }
  puVar19 = (undefined8 *)(lVar12 + 0x1d8);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_cf8 = uVar17;
  plStack_cf0 = plVar15;
  if (&local_cf8 != puVar19) {
    local_cf8 = *puVar19;
    plStack_cf0 = *(longlong **)(lVar12 + 0x1e0);
    *puVar19 = uVar17;
    *(longlong **)(lVar12 + 0x1e0) = plVar15;
    local_a70 = uVar17;
    plStack_a68 = plVar15;
  }
  plVar5 = plStack_cf0;
  if (plStack_cf0 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_cf0 + 1;
    lVar14 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_cf0)(plStack_cf0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_cf0 + 8))(plStack_cf0,1);
      }
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar15 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  plVar15 = (longlong *)operator_new(0x648);
  if (plVar15 == (longlong *)0x0) {
    plVar15 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar15 + 1) = 1;
    *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
    *plVar15 = (longlong)&PTR_FUN_144044af8;
    if (plVar15 + 2 != (longlong *)0x0) {
      FUN_141920820(plVar15 + 2,0);
    }
  }
  plVar5 = plVar15 + 2;
  local_b08 = plVar5;
  local_b00 = plVar15;
  FUN_14044f790(&local_b08,plVar5);
  local_d88 = 0x638;
  SWidget::SetDebugInfo
            (plVar5,"SComboListType",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",0xc5
            );
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_ce8 = plVar5;
  local_ce0 = plVar15;
  if ((longlong **)(param_1 + 0x3b0) != &local_ce8) {
    *(longlong **)(param_1 + 0x3b0) = plVar5;
    local_ce8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3b8,&local_ce0);
  }
  plVar16 = local_ce0;
  if (local_ce0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_ce0 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_ce0)(local_ce0);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_ce0 + 8))(local_ce0,1);
      }
    }
  }
  local_d78 = *(undefined4 *)(lVar12 + 0x90);
  local_d48 = lVar12 + 0xf8;
  local_d60 = lVar12 + 0xe8;
  local_d50 = *(undefined1 *)(lVar12 + 0xf1);
  local_d68 = lVar12 + 200;
  local_d70 = lVar12 + 0x98;
  local_d58 = *(undefined1 *)(lVar12 + 0xf0);
  local_d80 = lVar12 + 0x78;
  local_d88 = lVar12 + 0x60;
  SWidget::SWidgetConstruct(plVar5,lVar12,lVar12 + 0x30,lVar12 + 0x40);
  FUN_14192b750(plVar5,lVar12);
  if (((char)plVar15[5] < '\0') || (cVar10 = (**(code **)(*plVar5 + 0x1e8))(plVar5), cVar10 != '\0')
     ) {
    bVar11 = 1;
  }
  else {
    bVar11 = 0;
  }
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) | bVar11;
  local_c78 = (code *)(plVar15 + 1);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)local_c78 = (int)*(longlong *)local_c78 + 1;
    UNLOCK();
    LOCK();
    *(int *)local_c78 = (int)*(longlong *)local_c78 + 1;
    UNLOCK();
  }
  local_b90 = plVar5;
  local_b88 = plVar15;
  lVar12 = FUN_14068f180(local_808);
  plVar5 = (longlong *)(lVar12 + 0x1c8);
  *(undefined4 *)(lVar12 + 0x1c0) = local_c20;
  *(undefined1 *)(lVar12 + 0x1c4) = 1;
  if (((&local_c18 != plVar5) && (*(int *)(lVar12 + 0x1d0) != 0)) &&
     (plVar16 = (longlong *)*plVar5, plVar16 != (longlong *)0x0)) {
    (**(code **)(*plVar16 + 0x28))(plVar16,0);
    if (*plVar5 != 0) {
      lVar14 = FMemory::Realloc(*plVar5,0,0);
      *plVar5 = lVar14;
    }
    *(undefined4 *)(lVar12 + 0x1d0) = 0;
  }
  plVar16 = (longlong *)FUN_1418cc2a0();
  plVar5 = plVar16 + 2;
  local_af0 = plVar5;
  local_ae8 = plVar16;
  FUN_14044f790(&local_af0,plVar5);
  local_d88 = 0x310;
  SWidget::SetDebugInfo
            (plVar5,&DAT_144044860,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",0xc2
            );
  lVar12 = FUN_140692660(lVar12,&local_b90);
  local_d78 = *(undefined4 *)(lVar12 + 0x90);
  local_d48 = lVar12 + 0xf8;
  local_d60 = lVar12 + 0xe8;
  local_d50 = *(undefined1 *)(lVar12 + 0xf1);
  local_d68 = lVar12 + 200;
  local_d70 = lVar12 + 0x98;
  local_d58 = *(undefined1 *)(lVar12 + 0xf0);
  local_d80 = lVar12 + 0x78;
  local_d88 = lVar12 + 0x60;
  SWidget::SWidgetConstruct(plVar16 + 2,lVar12,lVar12 + 0x30,lVar12 + 0x40);
  FUN_141972160(plVar16 + 2,lVar12);
  if (((char)plVar16[5] < '\0') ||
     (cVar10 = (**(code **)(plVar16[2] + 0x1e8))(plVar16 + 2), cVar10 != '\0')) {
    bVar11 = 1;
  }
  else {
    bVar11 = 0;
  }
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) | bVar11;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar16 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
    LOCK();
    plVar5 = plVar16 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  FUN_140690ea0(local_808);
  plVar5 = (longlong *)local_c78;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    lVar12 = *(longlong *)local_c78;
    *(int *)local_c78 = (int)*(longlong *)local_c78 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
    LOCK();
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_820);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_830);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_840);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_868);
  if (local_878 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_878 + 1;
    lVar12 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_878)(local_878);
      LOCK();
      piVar1 = (int *)((longlong)local_878 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_878 + 8))(local_878,1);
      }
    }
  }
  if (local_890 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_890 + 1;
    lVar12 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_890)(local_890);
      LOCK();
      piVar1 = (int *)((longlong)local_890 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_890 + 8))(local_890,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_8a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_8c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_8d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_8e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_8f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_900);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_920);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_930);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_940);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_950);
  FUN_140456c70(local_a58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_be0);
  uStack_d20 = *(longlong **)(param_2 + 0x110);
  local_d28 = *(longlong **)(param_2 + 0x108);
  plVar15 = local_d28;
  if (uStack_d20 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_d20 + 1) = (int)uStack_d20[1] + 1;
    UNLOCK();
    plVar15 = *(longlong **)(param_2 + 0x108);
  }
  if (plVar15 == DAT_1469eb218) {
    local_bc0 = 0;
    local_ba8 = 1;
    local_ba0 = 0;
    local_b98 = 0;
    local_bd0 = _DAT_1464aa6f0;
    uStack_bcc = uRam00000001464aa6f4;
    uStack_bc8 = uRam00000001464aa6f8;
    uStack_bc4 = uRam00000001464aa6fc;
    local_bb8 = 0;
    plStack_bb0 = (longlong *)0x0;
    uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_ad8,L"No Content Provided",L"SComboBox",L"ContentWarning");
    FText::FText(local_b80,uVar17);
    local_b68 = 1;
    local_b60 = 0;
    local_b58 = 0;
    lVar12 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar12 + 0x108,local_b80);
    *(undefined1 *)(lVar12 + 0x120) = local_b68;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x128,&local_b60);
    FUN_140692440(lVar12 + 0x1a8,&local_bd0);
    *(undefined1 *)(lVar12 + 0x1d0) = local_ba8;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x1d8,&local_ba0);
    plVar15 = (longlong *)operator_new(0x660);
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar15 + 1) = 1;
      *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
      *plVar15 = (longlong)&PTR_FUN_144043520;
      if (plVar15 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar5 = plVar15 + 2;
    local_c38 = plVar5;
    local_c30 = plVar15;
    FUN_14044f790(&local_c38,plVar5);
    local_c28 = local_d36;
    local_d88 = 0x650;
    SWidget::SetDebugInfo
              (plVar5,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",
               0xd1);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    local_c60 = 0;
    local_d28 = plVar5;
    local_c58[0] = plVar15;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_d20,local_c58);
    plVar15 = local_c58[0];
    if (local_c58[0] != (longlong *)0x0) {
      LOCK();
      plVar5 = local_c58[0] + 1;
      lVar14 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_c58[0])(local_c58[0]);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c58[0] + 8))(local_c58[0],1);
        }
      }
    }
    FUN_140693250(&local_c38,local_bf8,lVar12);
    plVar15 = local_bf0;
    if (local_bf0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_bf0 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_bf0)(local_bf0);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_bf0 + 8))(local_bf0,1);
        }
      }
    }
    plVar15 = local_c30;
    if (local_c30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_c30 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_c30)(local_c30);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c30 + 8))(local_c30,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b60);
    if (local_b78 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_b78 + 1;
      lVar12 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_b78)(local_b78);
        LOCK();
        piVar1 = (int *)((longlong)local_b78 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b78 + 8))(local_b78,1);
        }
      }
    }
    if (local_ad0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_ad0 + 1;
      lVar12 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_ad0)(local_ad0);
        LOCK();
        piVar1 = (int *)((longlong)local_ad0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_ad0 + 8))(local_ad0,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_ba0);
    plVar15 = plStack_bb0;
    if (plStack_bb0 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_bb0 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_bb0)(plStack_bb0);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_bb0 + 8))(plStack_bb0,1);
        }
      }
    }
  }
  local_c48 = FUN_141994290;
  uStack_c40 = 0;
  if (uStack_d20 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_d20 + 1) = (int)uStack_d20[1] + 1;
    UNLOCK();
  }
  cVar10 = *(char *)(param_2 + 0x1f1);
  if (cVar10 != '\0') {
    local_d38[0] = *(undefined1 *)(param_2 + 0x1f0);
  }
  uVar9 = local_d38[0];
  lVar12 = FUN_1418ce0e0(local_618);
  *(longlong *)(lVar12 + 0x108) = local_c08;
  *(longlong *)(lVar12 + 0x110) = local_c68;
  if (local_d38 != (undefined1 *)(lVar12 + 0x238)) {
    if (*(char *)(lVar12 + 0x239) != '\0') {
      *(undefined1 *)(lVar12 + 0x239) = 0;
    }
    if (cVar10 != '\0') {
      *(undefined1 *)(lVar12 + 0x238) = uVar9;
      *(undefined1 *)(lVar12 + 0x239) = 1;
    }
  }
  puVar18 = (undefined4 *)(lVar12 + 0x118);
  local_c98 = (undefined4)local_d28;
  uStack_c94 = local_d28._4_4_;
  uStack_c90 = (undefined4)uStack_d20;
  uStack_c8c = uStack_d20._4_4_;
  if (uStack_d20 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_d20 + 1) = (int)uStack_d20[1] + 1;
    UNLOCK();
  }
  if (&local_c98 != puVar18) {
    local_c98 = *puVar18;
    uStack_c94 = *(undefined4 *)(lVar12 + 0x11c);
    uStack_c90 = *(undefined4 *)(lVar12 + 0x120);
    uStack_c8c = *(undefined4 *)(lVar12 + 0x124);
    local_ac0 = (undefined4)local_d28;
    uStack_abc = local_d28._4_4_;
    uStack_ab8 = (undefined4)uStack_d20;
    uStack_ab4 = uStack_d20._4_4_;
    *puVar18 = (undefined4)local_d28;
    *(undefined4 *)(lVar12 + 0x11c) = local_d28._4_4_;
    *(undefined4 *)(lVar12 + 0x120) = (undefined4)uStack_d20;
    *(undefined4 *)(lVar12 + 0x124) = uStack_d20._4_4_;
  }
  if (CONCAT44(uStack_c8c,uStack_c90) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_c8c,uStack_c90) + 8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      puVar19 = (undefined8 *)CONCAT44(uStack_c8c,uStack_c90);
      (**(code **)*puVar19)(puVar19);
      LOCK();
      piVar1 = (int *)((longlong)puVar19 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_c8c,uStack_c90) + 8))
                  ((longlong *)CONCAT44(uStack_c8c,uStack_c90),1);
      }
    }
  }
  plVar15 = plVar16 + 2;
  pplVar3 = (longlong **)(lVar12 + 0x128);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_d18 = plVar15;
  plStack_d10 = plVar16;
  if (&local_d18 != pplVar3) {
    local_d18 = *pplVar3;
    plStack_d10 = *(longlong **)(lVar12 + 0x130);
    *pplVar3 = plVar15;
    *(longlong **)(lVar12 + 0x130) = plVar16;
    local_ab0 = plVar15;
    plStack_aa8 = plVar16;
  }
  plVar15 = plStack_d10;
  if (plStack_d10 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_d10 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_d10)(plStack_d10);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_d10 + 8))(plStack_d10,1);
      }
    }
  }
  *(undefined1 *)(lVar12 + 0x169) = *(undefined1 *)(param_2 + 0x238);
  uVar6 = *(undefined4 *)(param_2 + 0x134);
  uVar7 = *(undefined4 *)(param_2 + 0x138);
  uVar8 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(lVar12 + 0x1f0) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(lVar12 + 500) = uVar6;
  *(undefined4 *)(lVar12 + 0x1f8) = uVar7;
  *(undefined4 *)(lVar12 + 0x1fc) = uVar8;
  *(undefined1 *)(lVar12 + 0x200) = *(undefined1 *)(param_2 + 0x140);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x208,param_2 + 0x148);
  FUN_140692440(lVar12 + 0x170,param_2 + 0x158);
  *(undefined1 *)(lVar12 + 0x198) = *(undefined1 *)(param_2 + 0x180);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x1a0,param_2 + 0x188);
  lVar14 = local_c00;
  local_b18 = (undefined4)local_c48;
  uStack_b14 = local_c48._4_4_;
  uStack_b10 = uStack_c40;
  uStack_b0c = uStack_c3c;
  uVar17 = FUN_1418c8b70(&local_c88,local_c00,&local_b18);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x148,uVar17);
  if (local_c80 != 0) {
    if (local_c88 == (longlong *)0x0) goto LAB_141971af6;
    (**(code **)(*local_c88 + 0x28))(local_c88,0);
    if (local_c88 != (longlong *)0x0) {
      local_c88 = (longlong *)FMemory::Realloc(local_c88,0,0);
    }
    local_c80 = 0;
  }
  if (local_c88 != (longlong *)0x0) {
    FMemory::Free(local_c88);
  }
LAB_141971af6:
  *(undefined1 *)(lVar12 + 0x168) = *(undefined1 *)(param_2 + 0x23a);
  FUN_14192e4e0(lVar14,lVar12);
  FUN_1418d1c60(local_618);
  plVar15 = uStack_d20;
  if (uStack_d20 != (longlong *)0x0) {
    LOCK();
    plVar5 = uStack_d20 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*uStack_d20)(uStack_d20);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_d20 + 8))(uStack_d20,1);
      }
    }
  }
  plVar15 = *(longlong **)(lVar14 + 0x3b8);
  uVar17 = *(undefined8 *)(lVar14 + 0x3b0);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
  }
  puVar19 = (undefined8 *)(lVar14 + 0x318);
  local_cc8 = uVar17;
  plStack_cc0 = plVar15;
  if (&local_cc8 != puVar19) {
    local_cc8 = *puVar19;
    plStack_cc0 = *(longlong **)(lVar14 + 800);
    *puVar19 = uVar17;
    *(longlong **)(lVar14 + 800) = plVar15;
    local_aa0 = uVar17;
    plStack_a98 = plVar15;
  }
  if (plStack_cc0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_cc0 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plStack_cc0 + 8))(plStack_cc0,1);
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar15 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar15 + 8))(plVar15,1);
    }
  }
  plVar5 = *(longlong **)(param_2 + 0x1e8);
  plVar15 = (longlong *)(lVar14 + 0x3a0);
  lVar12 = *(longlong *)(param_2 + 0x1e0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_cd8 = lVar12;
  plStack_cd0 = plVar5;
  if (&local_cd8 != plVar15) {
    local_cd8 = *plVar15;
    plStack_cd0 = *(longlong **)(lVar14 + 0x3a8);
    *plVar15 = lVar12;
    *(longlong **)(lVar14 + 0x3a8) = plVar5;
    local_a90 = lVar12;
    plStack_a88 = plVar5;
  }
  plVar5 = plStack_cd0;
  if (plStack_cd0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_cd0 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_cd0)(plStack_cd0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_cd0 + 8))(plStack_cd0,1);
      }
    }
  }
  lVar12 = *plVar15;
  if (lVar12 != 0) {
    plVar15 = (longlong *)(*(longlong *)(lVar14 + 0x3b0) + 0x420);
    local_b48 = *(longlong *)(lVar14 + 0x3a8);
    if (local_b48 != 0) {
      LOCK();
      *(int *)(local_b48 + 8) = *(int *)(local_b48 + 8) + 1;
      UNLOCK();
    }
    local_b50 = lVar12;
    (**(code **)(*plVar15 + 0x18))(plVar15,&local_b50,1,0);
  }
  plVar15 = uStack_d20;
  if (uStack_d20 != (longlong *)0x0) {
    LOCK();
    plVar5 = uStack_d20 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*uStack_d20)(uStack_d20);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_d20 + 8))(uStack_d20,1);
      }
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar16 + 1;
    lVar12 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  return;
}



// FUNCTION 141971d60 Construct body=305 status=ok
// SIG undefined Construct(void)

void SBackgroundBlur::Construct(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x2f0) = *(undefined1 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x2fc) = *(undefined1 *)(param_2 + 0x154);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x300,param_2 + 0x158);
  if ((undefined4 *)(param_2 + 0x168) != (undefined4 *)(param_1 + 0x310)) {
    if (*(char *)(param_1 + 0x314) != '\0') {
      *(undefined1 *)(param_1 + 0x314) = 0;
    }
    if (*(char *)(param_2 + 0x16c) != '\0') {
      *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x168);
      *(undefined1 *)(param_1 + 0x314) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x318) = *(undefined1 *)(param_2 + 0x170);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 800,param_2 + 0x178);
  uVar1 = *(undefined1 *)(param_2 + 0x130);
  uVar2 = *(undefined4 *)(param_2 + 0x120);
  uVar3 = *(undefined4 *)(param_2 + 0x124);
  uVar4 = *(undefined4 *)(param_2 + 0x128);
  uVar5 = *(undefined4 *)(param_2 + 300);
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined1 *)(param_1 + 0x250) = uVar1;
  *(undefined4 *)(param_1 + 0x240) = uVar2;
  *(undefined4 *)(param_1 + 0x244) = uVar3;
  *(undefined4 *)(param_1 + 0x248) = uVar4;
  *(undefined4 *)(param_1 + 0x24c) = uVar5;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 600,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,param_2 + 0x108);
  return;
}



// FUNCTION 141971ea0 FUN_141971ea0 body=698 status=ok
// SIG undefined FUN_141971ea0(void)

void FUN_141971ea0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  plVar4 = (longlong *)SWidget::GetType(param_1,local_res8);
  if (*plVar4 == DAT_1469f4b60) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xf9;
  }
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x1b0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x278,param_2 + 0x1b8);
  uVar1 = *(undefined4 *)(param_2 + 0x1ec);
  uVar2 = *(undefined4 *)(param_2 + 0x1f0);
  uVar3 = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x28c) = uVar1;
  *(undefined4 *)(param_1 + 0x290) = uVar2;
  *(undefined4 *)(param_1 + 0x294) = uVar3;
  *(undefined1 *)(param_1 + 0x298) = *(undefined1 *)(param_2 + 0x1f8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2a0,param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined1 *)(param_1 + 0x358) = *(undefined1 *)(param_2 + 0x1d0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x360,param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x370) = *(undefined1 *)(param_2 + 0x290);
  *(undefined1 *)(param_1 + 0x371) = *(undefined1 *)(param_2 + 0x291);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x378,param_2 + 0x298);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_2 + 0x188);
  *(undefined1 *)(param_1 + 0x2f8) = *(undefined1 *)(param_2 + 400);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x300,param_2 + 0x198);
  FUN_140692440(param_1 + 0x310,param_2 + 0x210);
  *(undefined1 *)(param_1 + 0x338) = *(undefined1 *)(param_2 + 0x238);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x340,param_2 + 0x240);
  FUN_140692440(param_1 + 0x2b0,param_2 + 0x250);
  *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(param_2 + 0x278);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2e0,param_2 + 0x280);
  local_58 = 0;
  local_50 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_58,param_2 + 0x148);
  FUN_14185b0f0(param_1,&local_58);
  local_58 = 0;
  local_50 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_58,param_2 + 0x158);
  FUN_14185b130(param_1,&local_58);
  local_58 = 0;
  local_50 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_58,param_2 + 0x168);
  FUN_14185b1b0(param_1,&local_58);
  local_58 = 0;
  local_50 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_58,param_2 + 0x178);
  FUN_14185b170(param_1,&local_58);
  local_48 = *(undefined4 *)(param_2 + 0x120);
  uStack_44 = *(undefined4 *)(param_2 + 0x124);
  uStack_40 = *(undefined4 *)(param_2 + 0x128);
  uStack_3c = *(undefined4 *)(param_2 + 300);
  local_38 = *(undefined1 *)(param_2 + 0x130);
  local_30 = 0;
  local_28 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_30,param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined1 *)(param_1 + 0x250) = local_38;
  *(undefined4 *)(param_1 + 0x240) = local_48;
  *(undefined4 *)(param_1 + 0x244) = uStack_44;
  *(undefined4 *)(param_1 + 0x248) = uStack_40;
  *(undefined4 *)(param_1 + 0x24c) = uStack_3c;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 600,&local_30);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,param_2 + 0x108);
  return;
}



// FUNCTION 141972160 FUN_141972160 body=304 status=ok
// SIG undefined FUN_141972160(void)

void FUN_141972160(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  FUN_1418d3b60(param_1 + 0x268,param_2 + 0x148);
  FUN_1418d3b60(param_1 + 0x280,param_2 + 0x160);
  FUN_1418d3b60(param_1 + 0x298,param_2 + 0x178);
  FUN_1418d3b60(param_1 + 0x2b0,param_2 + 400);
  FUN_1418d3b60(param_1 + 0x2c8,param_2 + 0x1a8);
  FUN_1418d3b60(param_1 + 0x2e0,param_2 + 0x1c0);
  FUN_1418d3b60(param_1 + 0x2f8,param_2 + 0x1d8);
  uVar1 = *(undefined1 *)(param_2 + 0x120);
  uVar2 = *(undefined4 *)(param_2 + 0x110);
  uVar3 = *(undefined4 *)(param_2 + 0x114);
  uVar4 = *(undefined4 *)(param_2 + 0x118);
  uVar5 = *(undefined4 *)(param_2 + 0x11c);
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined1 *)(param_1 + 0x250) = uVar1;
  *(undefined4 *)(param_1 + 0x240) = uVar2;
  *(undefined4 *)(param_1 + 0x244) = uVar3;
  *(undefined4 *)(param_1 + 0x248) = uVar4;
  *(undefined4 *)(param_1 + 0x24c) = uVar5;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 600,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,param_2 + 0x138);
  return;
}



// FUNCTION 141972290 Construct body=89 status=ok
// SIG undefined Construct(void)

void SDPIScaler::Construct(longlong param_1,longlong param_2)

{
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x230,param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x20c) = *(undefined1 *)(param_2 + 0x10c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x210,param_2 + 0x110);
  return;
}



// FUNCTION 1419722f0 FUN_1419722f0 body=1718 status=ok
// SIG undefined FUN_1419722f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419722f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_888 [32];
  undefined8 local_868;
  undefined1 local_858 [8];
  longlong *local_850;
  int local_848;
  undefined8 local_838;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined2 local_828;
  undefined8 local_820;
  undefined4 local_818;
  longlong *local_810;
  longlong *local_808;
  undefined1 *local_800;
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined1 local_7f0;
  undefined8 local_7e8;
  undefined4 local_7e0;
  undefined8 local_7d8;
  undefined1 local_7d0;
  undefined8 local_7c8;
  undefined4 local_7c0;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined1 local_7a8;
  undefined8 local_7a0;
  longlong *plStack_798;
  undefined1 local_790;
  undefined8 local_788;
  undefined4 local_780;
  undefined8 local_778;
  longlong local_770;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined1 local_758;
  undefined8 local_750;
  undefined4 local_748;
  undefined1 local_740 [8];
  undefined1 local_738 [8];
  undefined1 local_730 [8];
  longlong *local_728;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined1 local_708 [8];
  longlong *local_700;
  undefined1 local_6f8 [96];
  undefined1 local_698 [688];
  undefined1 local_3e8 [912];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_888;
  uVar5 = FCurveSequence::FCurveSequence(local_6f8,0,0x3e19999a,0);
  FUN_1417f8e00(param_1 + 0x420,uVar5);
  FUN_1417f61f0(local_6f8);
  *(undefined1 *)(param_1 + 0x3f8) = *(undefined1 *)(param_1 + 0xb0);
  *(undefined1 *)(param_1 + 0x3f9) = *(undefined1 *)(param_1 + 0xb1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x400,param_1 + 0xb8);
  uStack_830 = 0;
  local_838 = FUN_14198d480;
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_730)
  ;
  plVar4 = (longlong *)puVar6[1];
  uVar5 = *puVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_728 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_728)(local_728);
      LOCK();
      piVar2 = (int *)((longlong)local_728 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_728 + 8))(local_728,1);
      }
    }
  }
  local_828 = 0x119;
  local_820 = 0;
  local_818 = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar6 = (undefined8 *)operator_new(0x38,&local_820);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_GetPoolName_144d50130;
    puVar6[1] = uVar5;
    puVar6[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar6 + 3) = (undefined4)local_838;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = local_838._4_4_;
    *(undefined4 *)(puVar6 + 4) = uStack_830;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uStack_82c;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar6[6] = uVar5;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  *(undefined1 *)(param_1 + 0xb0) = (undefined1)local_828;
  *(undefined1 *)(param_1 + 0xb1) = local_828._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xb8,&local_820);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_820);
  plVar4 = DAT_1469eb140;
  lVar8 = *DAT_1469eb140;
  puVar6 = (undefined8 *)FName::FName(local_740,"ErrorReporting.ForegroundColor",1);
  puVar7 = (undefined4 *)(**(code **)(lVar8 + 0x28))(plVar4,*puVar6,0);
  plVar4 = DAT_1469eb140;
  local_7a8 = 0;
  local_7b8 = *puVar7;
  uStack_7b4 = puVar7[1];
  uStack_7b0 = puVar7[2];
  uStack_7ac = puVar7[3];
  lVar8 = *DAT_1469eb140;
  local_790 = 1;
  local_788 = 0;
  local_780 = 0;
  local_7a0 = 0;
  plStack_798 = (longlong *)0x0;
  local_758 = 1;
  local_768 = 0x40400000;
  uStack_764 = 0;
  uStack_760 = 0x40400000;
  uStack_75c = 0;
  local_750 = 0;
  local_748 = 0;
  local_838 = SDockingTabStack::GetTabWellScale;
  uStack_830 = 0;
  puVar6 = (undefined8 *)FName::FName(local_738,"ErrorReporting.Box",1);
  uVar5 = (**(code **)(lVar8 + 0x40))(plVar4,*puVar6,0);
  local_7d0 = 1;
  local_7c8 = 0;
  local_7c0 = 0;
  local_7d8 = uVar5;
  lVar8 = STextBlock::FArguments::FArguments(local_3e8);
  FUN_140692440(lVar8 + 0x1a8,&local_7b8);
  *(undefined1 *)(lVar8 + 0x1d0) = local_790;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x1d8,&local_788);
  FUN_1417f9360(lVar8 + 0x140,param_2 + 0x160);
  *(undefined1 *)(lVar8 + 400) = *(undefined1 *)(param_2 + 0x1b0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x198,param_2 + 0x1b8);
  *(undefined1 *)(lVar8 + 0x2c0) = *(undefined1 *)(param_2 + 0x1c8);
  *(undefined1 *)(lVar8 + 0x2c1) = *(undefined1 *)(param_2 + 0x1c9);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x2c8,param_2 + 0x1d0);
  local_808 = (longlong *)operator_new(0x660);
  if (local_808 == (longlong *)0x0) {
    local_808 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(local_808 + 1) = 1;
    *(undefined4 *)((longlong)local_808 + 0xc) = 1;
    *local_808 = (longlong)&PTR_FUN_144043520;
    if (local_808 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  local_810 = local_808 + 2;
  FUN_14044f790(&local_810);
  local_800 = local_858;
  local_868 = 0x650;
  SWidget::SetDebugInfo
            (local_810,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SErrorText.cpp"
             ,0x15);
  uVar9 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
          Expose<SListView<TSharedPtr<FString,1>_>_>(&local_810,param_1 + 0x410);
  puVar6 = (undefined8 *)FUN_140693250(uVar9,local_708,lVar8);
  local_778 = *puVar6;
  local_770 = puVar6[1];
  uVar10 = 0x40400000;
  uVar11 = 0;
  uVar12 = 0x40400000;
  uVar13 = 0;
  if (local_770 != 0) {
    LOCK();
    *(int *)(local_770 + 8) = *(int *)(local_770 + 8) + 1;
    UNLOCK();
    uVar5 = local_7d8;
    uVar10 = local_768;
    uVar11 = uStack_764;
    uVar12 = uStack_760;
    uVar13 = uStack_75c;
  }
  lVar8 = FUN_141886d30(local_698);
  FUN_140692440(lVar8 + 0x210,param_2 + 0x120);
  *(undefined1 *)(lVar8 + 0x238) = *(undefined1 *)(param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x240,param_2 + 0x150);
  *(undefined8 *)(lVar8 + 0x188) = uVar5;
  *(undefined1 *)(lVar8 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x198,&local_7c8);
  local_718 = (undefined4)local_838;
  uStack_714 = local_838._4_4_;
  uStack_710 = uStack_830;
  uStack_70c = uStack_82c;
  uVar5 = FUN_1418c8e30(&local_850,param_1,&local_718);
  local_7f0 = 1;
  local_7e8 = 0;
  local_7e0 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_7e8,uVar5);
  *(undefined4 *)(lVar8 + 0x1a8) = local_7f8;
  *(undefined4 *)(lVar8 + 0x1ac) = local_7f4;
  *(undefined1 *)(lVar8 + 0x1b0) = local_7f0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x1b8,&local_7e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_7e8);
  if (local_848 != 0) {
    if (local_850 == (longlong *)0x0) goto LAB_141972839;
    (**(code **)(*local_850 + 0x28))(local_850,0);
    if (local_850 != (longlong *)0x0) {
      local_850 = (longlong *)FMemory::Realloc(local_850,0,0);
    }
    local_848 = 0;
  }
  if (local_850 != (longlong *)0x0) {
    FMemory::Free(local_850);
  }
LAB_141972839:
  *(undefined4 *)(lVar8 + 0x118) = 2;
  *(undefined4 *)(lVar8 + 0x11c) = 2;
  *(undefined4 *)(lVar8 + 0x120) = uVar10;
  *(undefined4 *)(lVar8 + 0x124) = uVar11;
  *(undefined4 *)(lVar8 + 0x128) = uVar12;
  *(undefined4 *)(lVar8 + 300) = uVar13;
  *(undefined1 *)(lVar8 + 0x130) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x138,&local_750);
  uVar5 = FUN_14188d200(lVar8,&local_778);
  FUN_141971ea0(param_1,uVar5);
  FUN_14188af70(local_698);
  if (local_700 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_700 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_700)(local_700);
      LOCK();
      piVar2 = (int *)((longlong)local_700 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_700 + 8))(local_700,1);
      }
    }
  }
  plVar4 = local_808;
  if (local_808 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_808 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_808)(local_808);
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
  FUN_140691150(local_3e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_7c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_750);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_788);
  plVar4 = plStack_798;
  if (plStack_798 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_798 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_798)(plStack_798);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_798 + 8))(plStack_798,1);
      }
    }
  }
  (*(code *)**(undefined8 **)(param_1 + 0x388))((undefined8 *)(param_1 + 0x388),param_2 + 0x108);
  return;
}



// FUNCTION 1419729b0 FUN_1419729b0 body=5599 status=ok
// SIG undefined FUN_1419729b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419729b0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined1 auStack_15b8 [32];
  longlong local_1598;
  longlong local_1590;
  undefined4 local_1588;
  longlong local_1580;
  longlong local_1578;
  longlong local_1570;
  undefined1 local_1568;
  undefined1 local_1560;
  longlong local_1558;
  undefined1 local_1548;
  undefined1 local_1547;
  undefined1 local_1546;
  undefined1 local_1545;
  undefined1 local_1544 [12];
  longlong *local_1538;
  longlong *plStack_1530;
  ulonglong local_1528;
  longlong *local_1520;
  longlong *local_1518;
  int local_1510;
  longlong *local_1508;
  int local_1500;
  longlong *local_14f8;
  int local_14f0;
  undefined8 local_14e8;
  undefined8 *local_14d8;
  undefined4 uStack_14d0;
  undefined4 uStack_14cc;
  longlong *local_14c8;
  longlong *local_14c0;
  undefined2 local_14b8;
  undefined8 local_14b0;
  undefined4 local_14a8;
  undefined4 local_14a0;
  undefined4 local_1498;
  undefined1 local_1494;
  undefined8 local_1490;
  undefined4 local_1488;
  undefined4 local_1480;
  undefined4 local_147c;
  undefined1 local_1478;
  undefined8 local_1470;
  undefined4 local_1468;
  longlong *local_1460;
  undefined8 local_1458;
  undefined4 local_1450;
  undefined1 local_144c;
  undefined8 local_1448;
  undefined4 local_1440;
  longlong local_1438;
  longlong local_1430;
  undefined1 *local_1428;
  longlong local_1420;
  longlong local_1418;
  undefined1 *local_1410;
  undefined4 local_1408;
  undefined4 local_1404;
  undefined1 local_1400;
  undefined8 local_13f8;
  undefined4 local_13f0;
  undefined8 local_13e8;
  undefined1 local_13e0;
  undefined8 local_13d8;
  undefined4 local_13d0;
  longlong *local_13c8;
  longlong *local_13c0;
  undefined1 *local_13b8;
  longlong *local_13b0;
  longlong *local_13a8;
  undefined1 *local_13a0;
  longlong *local_1398;
  longlong *local_1390;
  undefined1 *local_1388;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined1 local_1368;
  undefined8 local_1360;
  longlong local_1358;
  undefined1 local_1350;
  undefined8 local_1348;
  undefined4 local_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined1 local_1328;
  undefined8 local_1320;
  longlong local_1318;
  undefined1 local_1310;
  undefined8 local_1308;
  undefined4 local_1300;
  longlong *local_12f8;
  longlong *local_12f0;
  undefined8 local_12e8;
  longlong *local_12e0;
  undefined8 local_12d8;
  longlong local_12d0;
  undefined1 *local_12c8;
  undefined4 uStack_12c0;
  undefined4 uStack_12bc;
  undefined8 local_12b8;
  longlong local_12b0;
  code *local_12a8;
  undefined4 uStack_12a0;
  undefined4 uStack_129c;
  undefined8 local_1298;
  undefined1 local_1290;
  undefined8 local_1288;
  undefined4 local_1280;
  undefined8 local_1278;
  undefined1 local_1270;
  undefined8 local_1268;
  undefined4 local_1260;
  longlong *local_1258;
  longlong *local_1250;
  longlong *local_1248;
  longlong *local_1240;
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined1 local_1228;
  undefined8 local_1220;
  undefined4 local_1218;
  undefined8 local_1210;
  undefined8 uStack_1208;
  undefined1 local_1200;
  undefined8 local_11f8;
  undefined4 local_11f0;
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  undefined1 local_11d8;
  undefined8 local_11d0;
  longlong *plStack_11c8;
  undefined1 local_11c0;
  undefined8 local_11b8;
  undefined4 local_11b0;
  undefined8 local_11a8;
  undefined8 uStack_11a0;
  undefined1 local_1198;
  undefined8 local_1190;
  longlong *plStack_1188;
  undefined1 local_1180;
  undefined8 local_1178;
  undefined4 local_1170;
  undefined4 local_1168;
  undefined4 uStack_1164;
  undefined4 uStack_1160;
  undefined4 uStack_115c;
  undefined1 local_1158;
  undefined8 local_1150;
  undefined8 uStack_1148;
  undefined1 local_1140;
  undefined8 local_1138;
  undefined4 local_1130;
  undefined8 local_1128;
  longlong *local_1120;
  longlong *local_1118;
  undefined8 local_1108;
  undefined1 local_1100 [8];
  longlong *local_10f8;
  longlong *local_10e8;
  longlong *plStack_10e0;
  code *local_10d8;
  undefined8 uStack_10d0;
  undefined1 *local_10c8;
  undefined8 uStack_10c0;
  undefined1 *local_10b8;
  undefined8 uStack_10b0;
  undefined1 local_10a8 [8];
  longlong *local_10a0;
  undefined4 local_1098;
  undefined4 uStack_1094;
  undefined4 uStack_1090;
  undefined4 uStack_108c;
  undefined1 local_1088;
  undefined8 local_1080;
  undefined8 uStack_1078;
  undefined1 local_1070 [16];
  undefined1 local_1060 [88];
  undefined1 local_1008 [264];
  longlong local_f00;
  undefined1 local_ee8 [688];
  undefined1 local_c38 [688];
  undefined1 local_988 [688];
  undefined1 local_6d8 [768];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1419729d2;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_15b8;
  *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x1f0);
  bVar5 = false;
  *(undefined4 *)(param_1 + 0x6d) = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)((longlong)param_1 + 0x36c) = *(undefined4 *)(param_2 + 0x1f8);
  local_1528 = local_1528 & 0xffffffff00000000;
  local_1520 = param_1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x6b,param_2 + 0x278);
  param_1[0x6f] = *(longlong *)(param_2 + 0x108) + 8;
  param_1[0x70] = *(longlong *)(param_2 + 0x108) + 0x90;
  uVar9 = FCurveSequence::FCurveSequence
                    (local_1060,0,*(undefined4 *)(*(longlong *)(param_2 + 0x108) + 0x118),5);
  FUN_1417f8e00(param_1 + 0x60,uVar9);
  FUN_1417f61f0(local_1060);
  if ((char)param_1[0x6e] == '\0') {
    FCurveSequence::JumpToEnd(param_1 + 0x60);
  }
  plStack_1530 = *(longlong **)(param_2 + 0x1a8);
  local_1538 = *(longlong **)(param_2 + 0x1a0);
  if (plStack_1530 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_1530 + 1) = (int)plStack_1530[1] + 1;
    UNLOCK();
  }
  if (local_1538 == DAT_1469eb218) {
    local_1408 = 0x3f800000;
    local_1404 = 0x3f800000;
    local_1400 = 1;
    local_13f8 = 0;
    local_13f0 = 0;
    lVar10 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar10 + 0x108,param_2 + 0x1c0);
    *(undefined1 *)(lVar10 + 0x120) = *(undefined1 *)(param_2 + 0x1d8);
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x128,param_2 + 0x1e0);
    FUN_1417f9360(lVar10 + 0x140,param_2 + 0x288);
    *(undefined1 *)(lVar10 + 400) = *(undefined1 *)(param_2 + 0x2d8);
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x198,param_2 + 0x2e0);
    *(undefined4 *)(lVar10 + 0x1e8) = 0x3f800000;
    *(undefined4 *)(lVar10 + 0x1ec) = 0x3f800000;
    *(undefined1 *)(lVar10 + 0x1f0) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x1f8,&local_13f8);
    plVar11 = (longlong *)operator_new(0x660);
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar11 + 1) = 1;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_FUN_144043520;
      if (plVar11 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar16 = plVar11 + 2;
    local_1120 = plVar16;
    local_1118 = plVar11;
    FUN_14044f790(&local_1120,plVar16);
    local_1598 = 0x650;
    SWidget::SetDebugInfo
              (plVar16,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
               ,0x25);
    local_1588 = *(undefined4 *)(lVar10 + 0x90);
    local_1558 = lVar10 + 0xf8;
    local_1570 = lVar10 + 0xe8;
    local_1560 = *(undefined1 *)(lVar10 + 0xf1);
    local_1578 = lVar10 + 200;
    local_1580 = lVar10 + 0x98;
    local_1568 = *(undefined1 *)(lVar10 + 0xf0);
    local_1590 = lVar10 + 0x78;
    local_1598 = lVar10 + 0x60;
    SWidget::SWidgetConstruct(plVar16,lVar10,lVar10 + 0x30,lVar10 + 0x40);
    FUN_1419b0120(plVar16,lVar10);
    if (((char)plVar11[5] < '\0') ||
       (cVar7 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar7 != '\0')) {
      bVar8 = 1;
    }
    else {
      bVar8 = 0;
    }
    plVar4 = plStack_1530;
    *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar8;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_14c8 = local_1538;
    local_14c0 = plStack_1530;
    local_1538 = plVar16;
    plVar16 = plVar11;
    if (plStack_1530 != (longlong *)0x0) {
      LOCK();
      plVar15 = plStack_1530 + 1;
      lVar10 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        puVar13 = (undefined8 *)*plStack_1530;
        plStack_1530 = plVar11;
        (*(code *)*puVar13)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar16 = plStack_1530;
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
          plVar16 = plStack_1530;
        }
      }
    }
    plStack_1530 = plVar16;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar11 + 1;
      lVar10 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
      LOCK();
      plVar16 = plVar11 + 1;
      lVar10 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_13f8);
    param_1 = local_1520;
  }
  if ((*(longlong *)(param_2 + 0x198) == 0) && (*(char *)(param_2 + 0x180) == '\0')) {
    uVar9 = *(undefined8 *)(param_2 + 0x150);
    puVar13 = (undefined8 *)(param_2 + 0x110);
    bVar6 = false;
  }
  else {
    bVar6 = true;
    uVar9 = FUN_14183ac90();
    local_11d8 = 0;
    local_11c0 = 1;
    local_11e8 = _DAT_1468b5d78;
    uStack_11e0 = uRam00000001468b5d80;
    bVar5 = true;
    local_11b8 = 0;
    local_11d0 = 0;
    plStack_11c8 = (longlong *)0x0;
    local_11b0 = 0;
    puVar13 = &local_11e8;
  }
  local_1328 = *(undefined1 *)(puVar13 + 2);
  local_1338 = *puVar13;
  uStack_1330 = puVar13[1];
  local_1320 = puVar13[3];
  local_1318 = puVar13[4];
  if (local_1318 != 0) {
    LOCK();
    *(int *)(local_1318 + 8) = *(int *)(local_1318 + 8) + 1;
    UNLOCK();
  }
  local_1310 = *(undefined1 *)(puVar13 + 5);
  local_1308 = 0;
  local_1300 = 0;
  local_14e8 = uVar9;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1308,puVar13 + 6);
  if ((bVar5) &&
     (TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_11b8), plVar11 = plStack_11c8,
     plStack_11c8 != (longlong *)0x0)) {
    LOCK();
    plVar16 = plStack_11c8 + 1;
    lVar10 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_11c8)(plStack_11c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_11c8 + 8))(plStack_11c8,1);
      }
    }
  }
  if (bVar6) {
    uVar12 = *(undefined8 *)(param_2 + 0x150);
    puVar13 = (undefined8 *)(param_2 + 0x110);
  }
  else {
    uVar12 = FUN_14183ac90();
    local_1198 = 0;
    local_11a8 = _DAT_1468b5d78;
    uStack_11a0 = uRam00000001468b5d80;
    local_1180 = 1;
    local_1190 = 0;
    plStack_1188 = (longlong *)0x0;
    local_1178 = 0;
    puVar13 = &local_11a8;
    local_1170 = 0;
  }
  local_1368 = *(undefined1 *)(puVar13 + 2);
  local_1378 = *puVar13;
  uStack_1370 = puVar13[1];
  local_1360 = puVar13[3];
  local_1358 = puVar13[4];
  if (local_1358 != 0) {
    LOCK();
    *(int *)(local_1358 + 8) = *(int *)(local_1358 + 8) + 1;
    UNLOCK();
  }
  local_1350 = *(undefined1 *)(puVar13 + 5);
  local_1348 = 0;
  local_1340 = 0;
  local_1528 = uVar12;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1348,puVar13 + 6);
  if ((!bVar6) &&
     (TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1178), plVar11 = plStack_1188,
     plStack_1188 != (longlong *)0x0)) {
    LOCK();
    plVar16 = plStack_1188 + 1;
    lVar10 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_1188)(plStack_1188);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_1188 + 8))(plStack_1188,1);
      }
    }
  }
  uVar17 = *(undefined8 *)(param_2 + 0x198);
  local_12c8 = &LAB_141967f90;
  uStack_12c0 = 0;
  local_14d8 = (undefined8 *)&LAB_141967f84;
  local_13e0 = 1;
  local_12a8 = FUN_141993570;
  local_13d8 = 0;
  local_13d0 = 0;
  uStack_14d0 = 0;
  local_1450 = 0x3f800000;
  local_144c = 1;
  local_1448 = 0;
  local_1440 = 0;
  uStack_12a0 = 0;
  local_1098 = 0x3f800000;
  uStack_1094 = 0;
  uStack_1090 = 0x3f800000;
  uStack_108c = 0x3f800000;
  local_1088 = 2;
  local_1080 = 0;
  uStack_1078 = 0;
  local_1158 = 2;
  local_1168 = 0x3f800000;
  uStack_1164 = 0;
  uStack_1160 = 0x3f800000;
  uStack_115c = 0x3f800000;
  local_1140 = 1;
  local_1150 = 0;
  uStack_1148 = 0;
  local_1138 = 0;
  local_1130 = 0;
  local_13e8 = uVar17;
  FName::FName(&local_1458,"NoBorder",1);
  local_1200 = 1;
  local_11f8 = 0;
  local_1460 = (longlong *)(param_2 + 0x2f0);
  if (*(char *)(param_2 + 0x2f8) == '\0') {
    local_1460 = param_1 + 0x28;
  }
  local_11f0 = 0;
  local_12b8 = *(undefined8 *)(param_2 + 0x1b0);
  local_12b0 = *(longlong *)(param_2 + 0x1b8);
  local_1270 = 1;
  local_1268 = 0;
  local_1260 = 0;
  local_1228 = 1;
  local_1220 = 0;
  local_1218 = 0;
  local_1290 = 1;
  local_1288 = 0;
  local_1280 = 0;
  local_1210 = 0;
  uStack_1208 = 0;
  local_1238 = 0;
  uStack_1230 = 0;
  if (local_12b0 != 0) {
    LOCK();
    *(int *)(local_12b0 + 8) = *(int *)(local_12b0 + 8) + 1;
    UNLOCK();
    uVar17 = local_13e8;
  }
  local_1298 = uVar9;
  local_1278 = uVar12;
  lVar10 = FUN_141886d30(local_988);
  uStack_10b0 = CONCAT44(uStack_14cc,uStack_14d0);
  local_10b8 = (undefined1 *)local_14d8;
  uVar9 = FUN_1417dd840(&local_1518,param_1,&local_10b8);
  local_14b8 = 0x119;
  local_14b0 = 0;
  local_14a8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_14b0,uVar9);
  *(undefined1 *)(lVar10 + 0x78) = (undefined1)local_14b8;
  *(undefined1 *)(lVar10 + 0x79) = local_14b8._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x80,&local_14b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_14b0);
  if (local_1510 == 0) {
LAB_141973252:
    if (local_1518 != (longlong *)0x0) {
      FMemory::Free(local_1518);
    }
  }
  else if (local_1518 != (longlong *)0x0) {
    (**(code **)(*local_1518 + 0x28))(local_1518,0);
    if (local_1518 != (longlong *)0x0) {
      local_1518 = (longlong *)FMemory::Realloc(local_1518,0,0);
    }
    local_1510 = 0;
    goto LAB_141973252;
  }
  *(undefined8 *)(lVar10 + 0x188) = uVar17;
  *(undefined1 *)(lVar10 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x198,&local_13d8);
  FUN_140692440(lVar10 + 0x210,param_2 + 0x158);
  *(undefined1 *)(lVar10 + 0x238) = *(undefined1 *)(param_2 + 0x180);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x240,param_2 + 0x188);
  uVar9 = *(undefined8 *)(param_2 + 600);
  *(undefined8 *)(lVar10 + 0x120) = *(undefined8 *)(param_2 + 0x250);
  *(undefined8 *)(lVar10 + 0x128) = uVar9;
  *(undefined1 *)(lVar10 + 0x130) = *(undefined1 *)(param_2 + 0x260);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x138,param_2 + 0x268);
  uStack_10c0 = CONCAT44(uStack_12bc,uStack_12c0);
  local_10c8 = local_12c8;
  uVar9 = FUN_1418c8e30(&local_1508,param_1,&local_10c8);
  local_1478 = 1;
  local_1470 = 0;
  local_1468 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1470,uVar9);
  *(undefined4 *)(lVar10 + 0x1c8) = local_1480;
  *(undefined4 *)(lVar10 + 0x1cc) = local_147c;
  *(undefined1 *)(lVar10 + 0x1d0) = local_1478;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x1d8,&local_1470);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1470);
  if (local_1500 == 0) {
LAB_141973396:
    if (local_1508 != (longlong *)0x0) {
      FMemory::Free(local_1508);
    }
  }
  else if (local_1508 != (longlong *)0x0) {
    (**(code **)(*local_1508 + 0x28))(local_1508,0);
    if (local_1508 != (longlong *)0x0) {
      local_1508 = (longlong *)FMemory::Realloc(local_1508,0,0);
    }
    local_1500 = 0;
    goto LAB_141973396;
  }
  plVar11 = (longlong *)operator_new(0x398);
  if (plVar11 != (longlong *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_144d61068;
    if (plVar11 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar16 = plVar11 + 2;
  local_13c8 = plVar16;
  local_13c0 = plVar11;
  FUN_14044f790(&local_13c8,plVar16);
  local_13b8 = &local_1548;
  local_1598 = 0x388;
  SWidget::SetDebugInfo
            (plVar16,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
             ,0x53);
  lVar10 = FUN_14188d200(lVar10,&local_12b8);
  local_1588 = *(undefined4 *)(lVar10 + 0x90);
  local_1558 = lVar10 + 0xf8;
  local_1570 = lVar10 + 0xe8;
  local_1560 = *(undefined1 *)(lVar10 + 0xf1);
  local_1578 = lVar10 + 200;
  local_1580 = lVar10 + 0x98;
  local_1568 = *(undefined1 *)(lVar10 + 0xf0);
  local_1590 = lVar10 + 0x78;
  local_1598 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar16,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_141971ea0(plVar16,lVar10);
  if (((char)plVar11[5] < '\0') || (cVar7 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar8;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_1248 = plVar16;
  local_1240 = plVar11;
  puVar13 = (undefined8 *)operator_new(0x88);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    local_14d8 = (undefined8 *)0x0;
  }
  else {
    local_14d8 = puVar13;
    FUN_1417f13c0(puVar13);
    *puVar13 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  local_14a0 = 1;
  local_1498 = 0x3f800000;
  local_1494 = 1;
  local_1490 = 0;
  local_1488 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1490,&local_1448);
  *(undefined4 *)(puVar13 + 5) = local_14a0;
  *(undefined1 *)((longlong)puVar13 + 0x34) = local_1494;
  *(undefined4 *)(puVar13 + 6) = local_1498;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar13 + 7,&local_1490);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1490);
  local_10e8 = local_1538;
  plStack_10e0 = plStack_1530;
  if (plStack_1530 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_1530 + 1) = (int)plStack_1530[1] + 1;
    UNLOCK();
  }
  plVar16 = DAT_1469eb140;
  lVar10 = FUN_14068f3e0(local_6d8);
  if (local_1460 != (longlong *)(lVar10 + 0x40)) {
    if (*(char *)(lVar10 + 0x44) != '\0') {
      *(undefined1 *)(lVar10 + 0x44) = 0;
    }
    if (*(char *)((longlong)local_1460 + 4) != '\0') {
      *(int *)(lVar10 + 0x40) = (int)*local_1460;
      *(undefined1 *)(lVar10 + 0x44) = 1;
    }
  }
  *(char *)(lVar10 + 0x48) = (char)local_1460[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x50,local_1460 + 2);
  local_1108 = local_1458;
  local_1128 = local_1458;
  lVar14 = (**(code **)(*plVar16 + 0x80))(plVar16,DAT_1469eb160);
  if (lVar14 == 0) {
    lVar14 = FUN_141834930();
  }
  *(longlong *)(lVar10 + 0x118) = lVar14;
  uVar9 = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(lVar10 + 0x130) = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(lVar10 + 0x138) = uVar9;
  *(undefined1 *)(lVar10 + 0x140) = *(undefined1 *)(param_2 + 0x238);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x148,param_2 + 0x240);
  FUN_140692440(lVar10 + 0x268,&local_1168);
  *(undefined1 *)(lVar10 + 0x290) = local_1140;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x298,&local_1138);
  plVar16 = local_1520;
  uStack_10d0 = CONCAT44(uStack_129c,uStack_12a0);
  local_10d8 = local_12a8;
  uVar9 = FUN_14068c820(&local_14f8,local_1520,&local_10d8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x188,uVar9);
  if (local_14f0 != 0) {
    if (local_14f8 == (longlong *)0x0) goto LAB_141973724;
    (**(code **)(*local_14f8 + 0x28))(local_14f8,0);
    if (local_14f8 != (longlong *)0x0) {
      local_14f8 = (longlong *)FMemory::Realloc(local_14f8,0,0);
    }
    local_14f0 = 0;
  }
  if (local_14f8 != (longlong *)0x0) {
    FMemory::Free(local_14f8);
  }
LAB_141973724:
  plVar15 = (longlong *)FUN_141880af0();
  plVar4 = plVar15 + 2;
  local_13b0 = plVar4;
  local_13a8 = plVar15;
  FUN_14044f790(&local_13b0,plVar4);
  local_13a0 = &local_1547;
  local_1598 = 0x488;
  SWidget::SetDebugInfo
            (plVar4,"SButton",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
             ,0x45);
  uVar9 = (**(code **)(*plVar16 + 0x220))(plVar16,local_1070,param_2,&local_10e8);
  lVar10 = FUN_14188d200(lVar10,uVar9);
  local_1588 = *(undefined4 *)(lVar10 + 0x90);
  local_1558 = lVar10 + 0xf8;
  local_1570 = lVar10 + 0xe8;
  local_1560 = *(undefined1 *)(lVar10 + 0xf1);
  local_1590 = lVar10 + 0x78;
  local_1578 = lVar10 + 200;
  local_1568 = *(undefined1 *)(lVar10 + 0xf0);
  local_1580 = lVar10 + 0x98;
  local_1598 = lVar10 + 0x60;
  plVar16 = plVar15 + 2;
  SWidget::SWidgetConstruct(plVar16,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_14192dae0(plVar16,lVar10);
  if (((char)plVar15[5] < '\0') || (cVar7 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) | bVar8;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_1258 = plVar16;
  local_1250 = plVar15;
  lVar10 = FUN_141886d30(local_c38);
  *(ulonglong *)(lVar10 + 0x188) = local_1528;
  *(undefined1 *)(lVar10 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x198,&local_1268);
  FUN_140692440(lVar10 + 0x210,&local_1378);
  *(undefined1 *)(lVar10 + 0x238) = local_1350;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x240,&local_1348);
  *(undefined1 *)(lVar10 + 0x130) = 1;
  *(undefined8 *)(lVar10 + 0x120) = local_1210;
  *(undefined8 *)(lVar10 + 0x128) = uStack_1208;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x138,&local_11f8);
  plVar16 = (longlong *)operator_new(0x398);
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_144d61068;
    if (plVar16 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar4 = plVar16 + 2;
  local_1398 = plVar4;
  local_1390 = plVar16;
  FUN_14044f790(&local_1398,plVar4);
  local_1388 = &local_1546;
  local_1598 = 0x388;
  SWidget::SetDebugInfo
            (plVar4,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
             ,0x40);
  lVar10 = FUN_14188d200(lVar10,&local_1258);
  local_1588 = *(undefined4 *)(lVar10 + 0x90);
  local_1558 = lVar10 + 0xf8;
  local_1570 = lVar10 + 0xe8;
  local_1560 = *(undefined1 *)(lVar10 + 0xf1);
  local_1590 = lVar10 + 0x78;
  local_1578 = lVar10 + 200;
  local_1568 = *(undefined1 *)(lVar10 + 0xf0);
  local_1580 = lVar10 + 0x98;
  local_1598 = lVar10 + 0x60;
  plVar4 = plVar16 + 2;
  SWidget::SWidgetConstruct(plVar4,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_141971ea0(plVar4,lVar10);
  if (((char)plVar16[5] < '\0') || (cVar7 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar7 != '\0'))
  {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) | bVar8;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_12f8 = plVar4;
  local_12f0 = plVar16;
  puVar13 = (undefined8 *)operator_new(0x88);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar13);
    *puVar13 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  local_1430 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
  lVar10 = local_1430 + 0x10;
  local_1438 = lVar10;
  FUN_14044f790(&local_1438,lVar10);
  local_1428 = &local_1545;
  local_1598 = 0x238;
  SWidget::SetDebugInfo
            (lVar10,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
             ,0x3c);
  uVar9 = FUN_1417f9c30(local_14d8,&local_1248);
  uVar12 = SVerticalBox::FSlot::AutoHeight(puVar13);
  uVar12 = FUN_1417f9c30(uVar12,&local_12f8);
  uVar17 = SCanvas::FArguments::FArguments(local_1008);
  uVar12 = SOverlay::FArguments::operator+(uVar17,uVar12);
  uVar9 = SOverlay::FArguments::operator+(uVar12,uVar9);
  puVar13 = (undefined8 *)FUN_1417fd340(&local_1438,local_10a8,uVar9);
  local_12d8 = *puVar13;
  local_12d0 = puVar13[1];
  if (local_12d0 != 0) {
    LOCK();
    *(int *)(local_12d0 + 8) = *(int *)(local_12d0 + 8) + 1;
    UNLOCK();
  }
  lVar14 = FUN_141886d30(local_ee8);
  *(undefined8 *)(lVar14 + 0x188) = local_14e8;
  *(undefined1 *)(lVar14 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x198,&local_1288);
  FUN_140692440(lVar14 + 0x210,&local_1338);
  *(undefined1 *)(lVar14 + 0x238) = local_1310;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x240,&local_1308);
  *(undefined1 *)(lVar14 + 0x130) = 1;
  *(undefined8 *)(lVar14 + 0x120) = local_1238;
  *(undefined8 *)(lVar14 + 0x128) = uStack_1230;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x138,&local_1220);
  local_1418 = SharedPointerInternals::NewIntrusiveReferenceController<SBorder>();
  lVar10 = local_1418 + 0x10;
  local_1420 = lVar10;
  FUN_14044f790(&local_1420,lVar10);
  local_1410 = local_1544;
  local_1598 = 0x388;
  SWidget::SetDebugInfo
            (lVar10,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
             ,0x37);
  uVar9 = FUN_14188d200(lVar14,&local_12d8);
  puVar13 = (undefined8 *)FUN_1418d3ed0(&local_1420,local_1100,uVar9);
  plVar4 = (longlong *)puVar13[1];
  local_12e8 = *puVar13;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_12e0 = plVar4;
  TSlotBase<FSimpleSlot>::operator[](local_1520 + 0x43,&local_12e8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (local_10f8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10f8 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_10f8)(local_10f8);
      LOCK();
      piVar1 = (int *)((longlong)local_10f8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10f8 + 8))(local_10f8,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1420);
  FUN_14188af70(local_ee8);
  if (local_10a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10a0 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_10a0)(local_10a0);
      LOCK();
      piVar1 = (int *)((longlong)local_10a0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10a0 + 8))(local_10a0,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1438);
  if (local_f00 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1008);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar16 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1398);
  FUN_14188af70(local_c38);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar10 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_13b0);
  FUN_140690f70(local_6d8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar11 + 1;
    lVar10 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_13c8);
  FUN_14188af70(local_988);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1288);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1220);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1268);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_11f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1138);
  FUN_1417f7230(&local_1168);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1080);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1448);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_13d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1348);
  FUN_1417f7230(&local_1378);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1308);
  FUN_1417f7230(&local_1338);
  plVar11 = plStack_1530;
  if (plStack_1530 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_1530 + 1;
    lVar10 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_1530)(plStack_1530);
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
  return;
}



// FUNCTION 141973f90 Construct body=171 status=ok
// SIG undefined Construct(void)

void SGridPanel::Construct(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x250) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x254) = DAT_1468b5d88._4_4_;
  if (0 < *(int *)(param_2 + 0x110)) {
    lVar2 = 0;
    do {
      FUN_14198ae20(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x108) + lVar2));
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < *(int *)(param_2 + 0x110));
  }
  TArray<TAttribute<float>,FDefaultAllocator>::operator=(param_1 + 600,param_2 + 0x118);
  TArray<TAttribute<float>,FDefaultAllocator>::operator=(param_1 + 0x268,param_2 + 0x128);
  return;
}



// FUNCTION 141974040 FUN_141974040 body=303 status=ok
// SIG undefined FUN_141974040(void)

void FUN_141974040(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  longlong *local_28;
  int iStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  lVar1 = DAT_1469eaf38;
  local_28 = &DAT_1419933a0;
  iStack_20 = 0;
  local_18 = 0x419933a0;
  uStack_14 = 1;
  uStack_10 = 0;
  uVar2 = FUN_14044bb20(&local_28,param_1,&local_18);
  TBaseMulticastDelegate<void>::Add(lVar1 + 0x30,local_res8,uVar2);
  if (iStack_20 != 0) {
    if (local_28 == (longlong *)0x0) goto LAB_1419740ed;
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    iStack_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
LAB_1419740ed:
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0x1000101;
  *(undefined4 *)(param_1 + 0x408) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x40c) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0x46c) = *(undefined1 *)(param_2 + 0x118);
  *(bool *)(param_1 + 0x46d) = DAT_1464bfec8 != 0;
  return;
}



// FUNCTION 141974170 FUN_141974170 body=3232 status=ok
// SIG undefined FUN_141974170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141974170(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_998 [32];
  longlong local_978;
  longlong local_970;
  undefined4 local_968;
  longlong local_960;
  longlong local_958;
  longlong local_950;
  undefined1 local_948;
  undefined1 local_940;
  longlong local_938;
  undefined8 local_928;
  longlong *plStack_920;
  undefined8 local_918;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  longlong *local_908;
  int local_900;
  longlong *local_8f8;
  int local_8f0;
  undefined4 local_8e8;
  undefined4 local_8e4;
  undefined1 local_8e0;
  undefined8 local_8d8;
  undefined4 local_8d0;
  longlong local_8c8;
  undefined1 local_8c0;
  undefined1 local_8bf;
  undefined8 local_8b8;
  undefined4 local_8b0;
  undefined8 local_8a8;
  undefined1 local_8a0;
  undefined8 local_898;
  undefined4 local_890;
  undefined4 local_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined1 local_878;
  undefined8 local_870;
  undefined4 local_868;
  longlong *local_860;
  longlong *local_858;
  undefined8 local_848;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  undefined8 local_838;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  longlong *local_828;
  longlong *local_820;
  longlong *local_818;
  longlong *local_810;
  undefined8 local_808;
  undefined1 local_800;
  undefined8 local_7f8;
  undefined4 local_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined1 local_7d8;
  undefined8 local_7d0;
  undefined4 local_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined1 local_7b0;
  undefined8 local_7a8;
  undefined4 local_7a0;
  undefined1 local_798 [8];
  undefined1 local_790 [8];
  undefined4 local_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined1 local_748 [8];
  longlong *local_740;
  longlong *local_738;
  longlong *local_730;
  longlong *local_720;
  longlong *local_718;
  longlong *local_708;
  longlong *local_700;
  undefined8 local_6f0;
  longlong *plStack_6e8;
  undefined1 local_6d8 [264];
  longlong local_5d0;
  undefined1 local_5b8 [688];
  undefined1 local_308 [688];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_998;
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x334) = *(undefined1 *)(param_2 + 0x10c);
  local_8c8 = param_1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x338,param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x34c) = *(undefined1 *)(param_2 + 0x124);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x350,param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x364) = *(undefined1 *)(param_2 + 0x13c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x368,param_2 + 0x140);
  plVar10 = *(longlong **)(param_2 + 0x158);
  puVar11 = (undefined8 *)(param_1 + 0x530);
  uVar8 = *(undefined8 *)(param_2 + 0x150);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_928 = uVar8;
  plStack_920 = plVar10;
  if (&local_928 != puVar11) {
    local_928 = *puVar11;
    plStack_920 = *(longlong **)(param_1 + 0x538);
    *puVar11 = uVar8;
    *(longlong **)(param_1 + 0x538) = plVar10;
    local_6f0 = uVar8;
    plStack_6e8 = plVar10;
  }
  plVar10 = plStack_920;
  if (plStack_920 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_920 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_920)(plStack_920);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_920 + 8))(plStack_920,1);
      }
    }
  }
  plVar10 = DAT_1469eb140;
  uVar4 = DAT_1464b9eec;
  local_8c0 = DAT_1464b9eec;
  local_8bf = 1;
  lVar9 = *DAT_1469eb140;
  local_8b8 = 0;
  local_8b0 = 0;
  local_918 = SNotificationExtendable::GetGlowColor;
  uStack_910 = 0;
  puVar7 = (undefined8 *)
           FName::FName(local_798,"NotificationList.ItemBackground_Border_Transparent",1);
  uVar8 = (**(code **)(lVar9 + 0x40))(plVar10,*puVar7,0);
  local_788 = (undefined4)local_918;
  uStack_784 = local_918._4_4_;
  uStack_780 = uStack_910;
  uStack_77c = uStack_90c;
  local_800 = 1;
  local_7f8 = 0;
  local_7f0 = 0;
  local_7c0 = 0;
  uStack_7b8 = 0;
  local_7b0 = 1;
  local_7a8 = 0;
  local_7a0 = 0;
  local_808 = uVar8;
  lVar9 = FUN_141886d30(local_308);
  *(undefined1 *)(lVar9 + 0x130) = 1;
  *(undefined8 *)(lVar9 + 0x120) = 0;
  *(undefined8 *)(lVar9 + 0x128) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x138,&local_7a8);
  *(undefined8 *)(lVar9 + 0x188) = uVar8;
  *(undefined1 *)(lVar9 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x198,&local_7f8);
  lVar9 = FUN_14191ee50(lVar9,param_1,&local_788);
  *(undefined1 *)(lVar9 + 0x78) = uVar4;
  *(undefined1 *)(lVar9 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x80,&local_8b8);
  plVar10 = (longlong *)operator_new(0x398);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144d61068;
    if (plVar10 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar13 = plVar10 + 2;
  local_738 = plVar13;
  local_730 = plVar10;
  FUN_14044f790(&local_738,plVar13);
  local_978 = 0x388;
  SWidget::SetDebugInfo
            (plVar13,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x292);
  local_968 = *(undefined4 *)(lVar9 + 0x90);
  local_938 = lVar9 + 0xf8;
  local_950 = lVar9 + 0xe8;
  local_940 = *(undefined1 *)(lVar9 + 0xf1);
  local_958 = lVar9 + 200;
  local_960 = lVar9 + 0x98;
  local_948 = *(undefined1 *)(lVar9 + 0xf0);
  local_978 = lVar9 + 0x60;
  local_970 = lVar9 + 0x78;
  SWidget::SWidgetConstruct(plVar13,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_141971ea0(plVar13,lVar9);
  if (((char)plVar10[5] < '\0') || (cVar5 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar5 != '\0')
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
  plVar14 = DAT_1469eb140;
  local_838 = SNotificationExtendable::GetItemScale;
  uStack_830 = 0;
  local_848 = FUN_141984150;
  lVar9 = *DAT_1469eb140;
  local_918 = SNotificationExtendable::GetContentColor;
  uStack_840 = 0;
  uStack_910 = 0;
  local_860 = plVar13;
  local_858 = plVar10;
  puVar7 = (undefined8 *)FName::FName(local_790,"NoBorder",1);
  local_8a8 = (**(code **)(lVar9 + 0x40))(plVar14,*puVar7,0);
  local_898 = 0;
  local_7e8 = 0;
  uStack_7e0 = 0;
  local_890 = 0;
  local_7d0 = 0;
  local_7c8 = 0;
  plVar13 = (longlong *)*puVar11;
  local_778 = (undefined4)local_918;
  uStack_774 = local_918._4_4_;
  uStack_770 = uStack_910;
  uStack_76c = uStack_90c;
  local_8a0 = 1;
  local_7d8 = 1;
  puVar11 = (undefined8 *)operator_new(0x50);
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    FSlotBase::FSlotBase(puVar11);
    *puVar11 = &PTR_FUN_1444d5278;
    *(undefined4 *)(puVar11 + 4) = 0;
    *(undefined2 *)((longlong)puVar11 + 0x24) = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    *(undefined1 *)(puVar11 + 7) = 1;
    puVar11[8] = 0;
    *(undefined4 *)(puVar11 + 9) = 0;
  }
  puVar7 = (undefined8 *)0x0;
  puVar12 = (undefined8 *)operator_new(0x50);
  if (puVar12 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar12);
    *(undefined4 *)(puVar12 + 4) = 0;
    *puVar12 = &PTR_FUN_1444d5278;
    *(undefined2 *)((longlong)puVar12 + 0x24) = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    *(undefined1 *)(puVar12 + 7) = 1;
    puVar12[8] = 0;
    *(undefined4 *)(puVar12 + 9) = 0;
    puVar7 = puVar12;
  }
  uVar8 = (**(code **)(*plVar13 + 8))(plVar13,local_748);
  local_918 = (code *)FUN_140801a00(puVar7,uVar8);
  lVar9 = SOverlay::FArguments::FArguments(local_6d8);
  plVar13 = (longlong *)(lVar9 + 0x108);
  iVar3 = *(int *)(lVar9 + 0x110);
  *(int *)(lVar9 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar9 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar13,iVar3);
  }
  *(code **)(*plVar13 + (longlong)iVar3 * 8) = local_918;
  uVar8 = FUN_140801a00(puVar11,&local_860);
  iVar3 = *(int *)(lVar9 + 0x110);
  *(int *)(lVar9 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar9 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar13,iVar3);
  }
  *(undefined8 *)(*plVar13 + (longlong)iVar3 * 8) = uVar8;
  plVar13 = (longlong *)operator_new(0x240);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_FUN_1440f90d0;
    if (plVar13 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4610();
    }
  }
  plVar14 = plVar13 + 2;
  local_720 = plVar14;
  local_718 = plVar13;
  FUN_14044f790(&local_720,plVar14);
  local_978 = 0x230;
  SWidget::SetDebugInfo
            (plVar14,"SOverlay",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x28b);
  local_968 = *(undefined4 *)(lVar9 + 0x90);
  local_938 = lVar9 + 0xf8;
  local_950 = lVar9 + 0xe8;
  local_940 = *(undefined1 *)(lVar9 + 0xf1);
  local_958 = lVar9 + 200;
  local_960 = lVar9 + 0x98;
  local_948 = *(undefined1 *)(lVar9 + 0xf0);
  local_970 = lVar9 + 0x78;
  local_978 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar14,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  SOverlay::Construct(plVar14,lVar9);
  if (((char)plVar13[5] < '\0') || (cVar5 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar5 != '\0')
     ) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar6;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_828 = plVar14;
  local_820 = plVar13;
  lVar9 = FUN_141886d30(local_5b8);
  *(undefined1 *)(lVar9 + 0x130) = 1;
  *(undefined4 *)(lVar9 + 0x120) = (undefined4)local_7e8;
  *(undefined4 *)(lVar9 + 0x124) = local_7e8._4_4_;
  *(undefined4 *)(lVar9 + 0x128) = (undefined4)uStack_7e0;
  *(undefined4 *)(lVar9 + 300) = uStack_7e0._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x138,&local_7d0);
  *(undefined8 *)(lVar9 + 0x188) = local_8a8;
  *(undefined1 *)(lVar9 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x198,&local_898);
  lVar9 = FUN_14191ee50(lVar9,param_1,&local_778);
  local_768 = (undefined4)local_848;
  uStack_764 = local_848._4_4_;
  uStack_760 = uStack_840;
  uStack_75c = uStack_83c;
  uVar8 = FUN_1418c8cd0(&local_908,param_1,&local_768);
  local_878 = 1;
  local_870 = 0;
  local_868 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_870,uVar8);
  *(undefined1 *)(lVar9 + 0x1f8) = local_878;
  *(undefined4 *)(lVar9 + 0x1e8) = local_888;
  *(undefined4 *)(lVar9 + 0x1ec) = uStack_884;
  *(undefined4 *)(lVar9 + 0x1f0) = uStack_880;
  *(undefined4 *)(lVar9 + 500) = uStack_87c;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x200,&local_870);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_870);
  if (local_900 == 0) {
LAB_141974950:
    if (local_908 != (longlong *)0x0) {
      FMemory::Free(local_908);
    }
  }
  else if (local_908 != (longlong *)0x0) {
    (**(code **)(*local_908 + 0x28))(local_908,0);
    if (local_908 != (longlong *)0x0) {
      local_908 = (longlong *)FMemory::Realloc(local_908,0,0);
    }
    local_900 = 0;
    goto LAB_141974950;
  }
  local_758 = (undefined4)local_838;
  uStack_754 = local_838._4_4_;
  uStack_750 = uStack_830;
  uStack_74c = uStack_82c;
  uVar8 = FUN_1418c8e30(&local_8f8,param_1,&local_758);
  local_8e0 = 1;
  local_8d8 = 0;
  local_8d0 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_8d8,uVar8);
  *(undefined4 *)(lVar9 + 0x1c8) = local_8e8;
  *(undefined4 *)(lVar9 + 0x1cc) = local_8e4;
  *(undefined1 *)(lVar9 + 0x1d0) = local_8e0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x1d8,&local_8d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_8d8);
  if (local_8f0 != 0) {
    if (local_8f8 == (longlong *)0x0) goto LAB_141974a16;
    (**(code **)(*local_8f8 + 0x28))(local_8f8,0);
    if (local_8f8 != (longlong *)0x0) {
      local_8f8 = (longlong *)FMemory::Realloc(local_8f8,0,0);
    }
    local_8f0 = 0;
  }
  if (local_8f8 != (longlong *)0x0) {
    FMemory::Free(local_8f8);
  }
LAB_141974a16:
  plVar14 = (longlong *)operator_new(0x398);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_FUN_144d61068;
    if (plVar14 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar2 = plVar14 + 2;
  local_708 = plVar2;
  local_700 = plVar14;
  FUN_14044f790(&local_708,plVar2);
  local_978 = 0x388;
  SWidget::SetDebugInfo
            (plVar2,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x284);
  lVar9 = FUN_14188d200(lVar9,&local_828);
  local_968 = *(undefined4 *)(lVar9 + 0x90);
  local_938 = lVar9 + 0xf8;
  local_950 = lVar9 + 0xe8;
  local_940 = *(undefined1 *)(lVar9 + 0xf1);
  local_978 = lVar9 + 0x60;
  local_958 = lVar9 + 200;
  local_948 = *(undefined1 *)(lVar9 + 0xf0);
  local_960 = lVar9 + 0x98;
  local_970 = lVar9 + 0x78;
  plVar2 = plVar14 + 2;
  SWidget::SWidgetConstruct(plVar2,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_141971ea0(plVar2,lVar9);
  if (((char)plVar14[5] < '\0') || (cVar5 = (**(code **)(*plVar2 + 0x1e8))(plVar2), cVar5 != '\0'))
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
  local_818 = plVar2;
  local_810 = plVar14;
  TSlotBase<FSimpleSlot>::operator[](local_8c8 + 0x218,&local_818);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
    LOCK();
    plVar2 = plVar14 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
    LOCK();
    plVar2 = plVar14 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  FUN_14188af70(local_5b8);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar13 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    LOCK();
    plVar14 = plVar13 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (local_5d0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_6d8);
  if (local_740 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_740 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_740)(local_740);
      LOCK();
      piVar1 = (int *)((longlong)local_740 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_740 + 8))(local_740,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_7d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_898);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar10 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    LOCK();
    plVar13 = plVar10 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    LOCK();
    plVar13 = plVar10 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  FUN_14188af70(local_308);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_7a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_7f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_8b8);
  return;
}



// FUNCTION 141974e10 FUN_141974e10 body=2215 status=ok
// SIG undefined FUN_141974e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141974e10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_7e8 [32];
  longlong local_7c8;
  longlong local_7c0;
  undefined4 local_7b8;
  longlong local_7b0;
  longlong local_7a8;
  longlong local_7a0;
  undefined1 local_798;
  undefined1 local_790;
  longlong local_788;
  undefined8 local_778;
  int iStack_770;
  undefined4 uStack_76c;
  undefined8 local_768;
  int iStack_760;
  undefined4 uStack_75c;
  undefined4 local_758;
  undefined4 local_754;
  undefined1 local_750;
  undefined8 local_748;
  undefined4 local_740;
  undefined8 local_738;
  undefined1 local_730;
  undefined8 local_728;
  undefined4 local_720;
  undefined8 local_718;
  undefined1 local_710;
  undefined8 local_708;
  undefined4 local_700;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined1 local_6e8;
  undefined8 local_6e0;
  undefined4 local_6d8;
  undefined8 local_6d0;
  longlong local_6c8;
  undefined8 local_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined8 local_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  longlong *local_698;
  longlong *local_690;
  longlong *local_688;
  longlong *local_680;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined1 local_668;
  undefined8 local_660;
  undefined4 local_658;
  undefined1 local_650 [8];
  undefined1 local_648 [16];
  undefined4 local_638;
  undefined4 uStack_634;
  int iStack_630;
  undefined4 uStack_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  int iStack_620;
  undefined4 uStack_61c;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined1 local_5f8 [8];
  longlong *local_5f0;
  longlong *local_5e8;
  longlong *local_5e0;
  longlong *local_5d0;
  longlong *local_5c8;
  undefined1 local_5b8 [688];
  undefined1 local_308 [688];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_7e8;
  *(undefined4 *)(param_1 + 0x388) = 0;
  FText::operator=(param_1 + 0x300,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x318) = *(undefined1 *)(param_2 + 0x120);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 800,param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined1 *)(param_1 + 0x334) = *(undefined1 *)(param_2 + 0x1ec);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x338,param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x200);
  *(undefined1 *)(param_1 + 0x34c) = *(undefined1 *)(param_2 + 0x204);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x350,param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_2 + 0x218);
  *(undefined1 *)(param_1 + 0x364) = *(undefined1 *)(param_2 + 0x21c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x368,param_2 + 0x220);
  plVar9 = DAT_1469eb140;
  local_768 = SNotificationExtendable::GetGlowColor;
  iStack_760 = 0;
  lVar8 = *DAT_1469eb140;
  puVar6 = (undefined8 *)FName::FName(local_650,"NotificationList.ItemBackground_Border",1);
  uVar7 = (**(code **)(lVar8 + 0x40))(plVar9,*puVar6,0);
  plVar9 = DAT_1469eb140;
  local_710 = 1;
  lVar8 = *DAT_1469eb140;
  local_6a8 = SNotificationExtendable::GetItemScale;
  local_6b8 = FUN_141984150;
  local_778 = SNotificationExtendable::GetContentColor;
  local_708 = 0;
  local_700 = 0;
  local_678 = 0x40a00000;
  uStack_674 = 0x40a00000;
  uStack_670 = 0x40a00000;
  uStack_66c = 0x40a00000;
  local_668 = 1;
  local_660 = 0;
  local_658 = 0;
  uStack_6a0 = 0;
  uStack_6b0 = 0;
  iStack_770 = 0;
  local_718 = uVar7;
  puVar6 = (undefined8 *)FName::FName(local_648,"NotificationList.ItemBackground",1);
  local_738 = (**(code **)(lVar8 + 0x40))(plVar9,*puVar6,0);
  local_638 = (undefined4)local_768;
  uStack_634 = local_768._4_4_;
  iStack_630 = iStack_760;
  uStack_62c = uStack_75c;
  local_730 = 1;
  local_728 = 0;
  local_720 = 0;
  local_628 = (undefined4)local_778;
  uStack_624 = local_778._4_4_;
  iStack_620 = iStack_770;
  uStack_61c = uStack_76c;
  puVar6 = (undefined8 *)FUN_14197c970(param_1,local_5f8,param_2);
  local_6d0 = *puVar6;
  local_6c8 = puVar6[1];
  uVar11 = 0x40a00000;
  uVar12 = 0x40a00000;
  uVar13 = 0x40a00000;
  uVar14 = 0x40a00000;
  if (local_6c8 != 0) {
    LOCK();
    *(int *)(local_6c8 + 8) = *(int *)(local_6c8 + 8) + 1;
    UNLOCK();
    uVar7 = local_718;
    uVar11 = local_678;
    uVar12 = uStack_674;
    uVar13 = uStack_670;
    uVar14 = uStack_66c;
  }
  lVar8 = FUN_141886d30(local_308);
  *(undefined1 *)(lVar8 + 0x130) = 1;
  *(undefined4 *)(lVar8 + 0x120) = uVar11;
  *(undefined4 *)(lVar8 + 0x124) = uVar12;
  *(undefined4 *)(lVar8 + 0x128) = uVar13;
  *(undefined4 *)(lVar8 + 300) = uVar14;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x138,&local_660);
  *(undefined8 *)(lVar8 + 0x188) = uVar7;
  *(undefined1 *)(lVar8 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x198,&local_708);
  plVar9 = (longlong *)operator_new(0x398);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144d61068;
    if (plVar9 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar10 = plVar9 + 2;
  local_5e8 = plVar10;
  local_5e0 = plVar9;
  FUN_14044f790(&local_5e8,plVar10);
  local_7c8 = 0x388;
  SWidget::SetDebugInfo
            (plVar10,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x15a);
  uVar7 = FUN_14191ee50(lVar8,param_1,&local_638);
  lVar8 = FUN_14188d200(uVar7,&local_6d0);
  local_7b8 = *(undefined4 *)(lVar8 + 0x90);
  local_788 = lVar8 + 0xf8;
  local_7a0 = lVar8 + 0xe8;
  local_790 = *(undefined1 *)(lVar8 + 0xf1);
  local_7a8 = lVar8 + 200;
  local_7b0 = lVar8 + 0x98;
  local_798 = *(undefined1 *)(lVar8 + 0xf0);
  local_7c0 = lVar8 + 0x78;
  local_7c8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar10,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_141971ea0(plVar10,lVar8);
  if (((char)plVar9[5] < '\0') || (cVar4 = (**(code **)(*plVar10 + 0x1e8))(plVar10), cVar4 != '\0'))
  {
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
  local_698 = plVar10;
  local_690 = plVar9;
  lVar8 = FUN_141886d30(local_5b8);
  *(undefined8 *)(lVar8 + 0x188) = local_738;
  *(undefined1 *)(lVar8 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x198,&local_728);
  lVar8 = FUN_14191ee50(lVar8,param_1,&local_628);
  local_618 = (undefined4)local_6b8;
  uStack_614 = local_6b8._4_4_;
  uStack_610 = uStack_6b0;
  uStack_60c = uStack_6ac;
  uVar7 = FUN_1418c8cd0(&local_778,param_1,&local_618);
  local_6e8 = 1;
  local_6e0 = 0;
  local_6d8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_6e0,uVar7);
  *(undefined1 *)(lVar8 + 0x1f8) = local_6e8;
  *(undefined4 *)(lVar8 + 0x1e8) = local_6f8;
  *(undefined4 *)(lVar8 + 0x1ec) = uStack_6f4;
  *(undefined4 *)(lVar8 + 0x1f0) = uStack_6f0;
  *(undefined4 *)(lVar8 + 500) = uStack_6ec;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x200,&local_6e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6e0);
  if (iStack_770 == 0) {
LAB_1419752e4:
    if (local_778 != (code *)0x0) {
      FMemory::Free(local_778);
    }
  }
  else if (local_778 != (code *)0x0) {
    (**(code **)(*(longlong *)local_778 + 0x28))(local_778,0);
    if (local_778 != (code *)0x0) {
      local_778 = (code *)FMemory::Realloc(local_778,0,0);
    }
    iStack_770 = 0;
    goto LAB_1419752e4;
  }
  local_608 = (undefined4)local_6a8;
  uStack_604 = local_6a8._4_4_;
  uStack_600 = uStack_6a0;
  uStack_5fc = uStack_69c;
  uVar7 = FUN_1418c8e30(&local_768,param_1,&local_608);
  local_750 = 1;
  local_748 = 0;
  local_740 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_748,uVar7);
  *(undefined4 *)(lVar8 + 0x1c8) = local_758;
  *(undefined4 *)(lVar8 + 0x1cc) = local_754;
  *(undefined1 *)(lVar8 + 0x1d0) = local_750;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x1d8,&local_748);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_748);
  if (iStack_760 != 0) {
    if (local_768 == (code *)0x0) goto LAB_1419753ad;
    (**(code **)(*(longlong *)local_768 + 0x28))(local_768,0);
    if (local_768 != (code *)0x0) {
      local_768 = (code *)FMemory::Realloc(local_768,0,0);
    }
    iStack_760 = 0;
  }
  if (local_768 != (code *)0x0) {
    FMemory::Free(local_768);
  }
LAB_1419753ad:
  plVar10 = (longlong *)operator_new(0x398);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144d61068;
    if (plVar10 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar1 = plVar10 + 2;
  local_5d0 = plVar1;
  local_5c8 = plVar10;
  FUN_14044f790(&local_5d0,plVar1);
  local_7c8 = 0x388;
  SWidget::SetDebugInfo
            (plVar1,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x154);
  lVar8 = FUN_14188d200(lVar8,&local_698);
  local_7b8 = *(undefined4 *)(lVar8 + 0x90);
  local_788 = lVar8 + 0xf8;
  local_7a0 = lVar8 + 0xe8;
  local_790 = *(undefined1 *)(lVar8 + 0xf1);
  local_7a8 = lVar8 + 200;
  local_7b0 = lVar8 + 0x98;
  local_798 = *(undefined1 *)(lVar8 + 0xf0);
  local_7c0 = lVar8 + 0x78;
  local_7c8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_141971ea0(plVar1,lVar8);
  if (((char)plVar10[5] < '\0') || (cVar4 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar4 != '\0'))
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
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_688 = plVar1;
  local_680 = plVar10;
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_688);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar1 = plVar10 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar1 = plVar10 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  }
  FUN_14188af70(local_5b8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar10 = plVar9 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  FUN_14188af70(local_308);
  if (local_5f0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_5f0 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_5f0)(local_5f0);
      LOCK();
      piVar2 = (int *)((longlong)local_5f0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5f0 + 8))(local_5f0,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_728);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_660);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_708);
  return;
}



// FUNCTION 1419756c0 FUN_1419756c0 body=537 status=ok
// SIG undefined FUN_1419756c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419756c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  longlong *local_178;
  undefined1 *local_170;
  undefined8 local_168;
  longlong *local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_148 [264];
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined1 *)(param_1 + 0x378) = 0;
  FUN_1417f9360(param_1 + 0x310,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x360) = *(undefined1 *)(param_2 + 0x158);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x368,param_2 + 0x160);
  local_178 = (longlong *)operator_new(0x248);
  if (local_178 == (longlong *)0x0) {
    local_178 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(local_178 + 1) = 1;
    *(undefined4 *)((longlong)local_178 + 0xc) = 1;
    *local_178 = (longlong)&PTR_DestroyObject_144d503e8;
    if (local_178 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4670();
    }
  }
  local_180 = local_178 + 2;
  FUN_14044f790(&local_180);
  local_170 = local_188;
  local_198 = 0x238;
  SWidget::SetDebugInfo
            (local_180,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x304);
  uVar6 = SCanvas::FArguments::FArguments(local_148);
  uVar7 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
          Expose<SListView<TSharedPtr<FString,1>_>_>(&local_180,param_1 + 0x2f0);
  puVar8 = (undefined8 *)FUN_1417fd340(uVar7,local_158,uVar6);
  plVar4 = (longlong *)puVar8[1];
  local_168 = *puVar8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_160 = plVar4;
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_168);
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
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_150 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)local_150 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  plVar4 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_178 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_178)(local_178);
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
  if (local_40 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_148);
  return;
}



// FUNCTION 1419758e0 FUN_1419758e0 body=19 status=ok
// SIG undefined FUN_1419758e0(void)

void FUN_1419758e0(longlong param_1,longlong param_2)

{
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,param_2 + 0x108);
  return;
}



// FUNCTION 141975900 FUN_141975900 body=1445 status=ok
// SIG undefined FUN_141975900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141975900(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_7a8 [32];
  undefined8 local_788;
  undefined1 local_778;
  undefined1 local_777 [7];
  undefined8 local_770;
  longlong *plStack_768;
  undefined8 local_760;
  longlong *plStack_758;
  longlong *local_750;
  longlong *local_748;
  undefined1 *local_740;
  longlong *local_738;
  longlong *local_730;
  undefined1 *local_728;
  undefined8 local_720;
  undefined8 local_718;
  longlong local_710;
  undefined4 local_708;
  undefined1 local_704;
  undefined8 local_700;
  undefined4 local_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined1 local_6e0;
  undefined8 local_6d8;
  undefined4 local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined1 local_6b8 [8];
  longlong *local_6b0;
  undefined1 local_6a8 [8];
  longlong *local_6a0;
  undefined1 local_698 [24];
  undefined8 local_680;
  longlong *plStack_678;
  undefined8 local_670;
  longlong *plStack_668;
  undefined1 local_658 [480];
  undefined1 local_478 [480];
  undefined1 local_298 [576];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_7a8;
  local_710 = param_1;
  lVar7 = FUN_14195f530(local_478);
  FUN_1417f9360(lVar7 + 0x160,param_2 + 0x110);
  *(undefined1 *)(lVar7 + 0x1b0) = *(undefined1 *)(param_2 + 0x160);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x1b8,param_2 + 0x168);
  local_730 = (longlong *)FUN_14195e8d0();
  local_738 = local_730 + 2;
  FUN_14044f790(&local_738);
  local_728 = &local_778;
  local_788 = 0x478;
  SWidget::SetDebugInfo
            (local_738,"SErrorText",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SPopUpErrorText.cpp"
             ,0x15);
  uVar8 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
          Expose<SListView<TSharedPtr<FString,1>_>_>(&local_738,param_1 + 0x370);
  puVar9 = (undefined8 *)FUN_141967ac0(uVar8,local_6a8,lVar7);
  plVar5 = (longlong *)puVar9[1];
  local_718 = *puVar9;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_704 = 1;
  local_708 = 0;
  local_700 = 0;
  local_6f8 = 0;
  lVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_698,&DAT_144d6fb6c,L"UnrealEd",L"Error");
  lVar10 = FUN_14195f530(local_658);
  FText::operator=(lVar10 + 0x108,lVar7);
  plVar6 = *(longlong **)(lVar7 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  FUN_1417f9360(lVar10 + 0x160,param_2 + 0x110);
  *(undefined1 *)(lVar10 + 0x1b0) = *(undefined1 *)(param_2 + 0x160);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x1b8,param_2 + 0x168);
  local_748 = (longlong *)FUN_14195e8d0();
  local_750 = local_748 + 2;
  FUN_14044f790(&local_750);
  local_740 = local_777;
  local_788 = 0x478;
  SWidget::SetDebugInfo
            (local_750,"SErrorText",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SPopUpErrorText.cpp"
             ,0xe);
  uVar8 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
          Expose<SListView<TSharedPtr<FString,1>_>_>(&local_750,param_1 + 0x360);
  puVar9 = (undefined8 *)FUN_141967ac0(uVar8,local_6b8,lVar10);
  plVar6 = (longlong *)puVar9[1];
  uVar8 = *puVar9;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_6e0 = 1;
  local_6d8 = 0;
  local_6d0 = 0;
  local_6f0 = 0;
  uStack_6e8 = 0;
  FName::FName(&local_720,"MessageLogListingComboButton",1);
  plVar1 = DAT_1469eb140;
  lVar7 = FUN_1418ce0e0(local_298);
  local_6c8 = local_720;
  local_6c0 = local_720;
  lVar10 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb168);
  if (lVar10 == 0) {
    lVar10 = FUN_141834b00();
  }
  *(longlong *)(lVar7 + 0x108) = lVar10;
  *(undefined1 *)(lVar7 + 0x169) = 0;
  *(undefined8 *)(lVar7 + 0x1f0) = 0;
  *(undefined8 *)(lVar7 + 0x1f8) = 0;
  *(undefined1 *)(lVar7 + 0x200) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x208,&local_6d8);
  puVar9 = (undefined8 *)(lVar7 + 0x118);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_770 = uVar8;
  plStack_768 = plVar6;
  if (&local_770 != puVar9) {
    local_770 = *puVar9;
    plStack_768 = *(longlong **)(lVar7 + 0x120);
    *puVar9 = uVar8;
    *(longlong **)(lVar7 + 0x120) = plVar6;
    local_680 = uVar8;
    plStack_678 = plVar6;
  }
  plVar1 = plStack_768;
  if (plStack_768 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_768 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_768)(plStack_768);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_768 + 8))(plStack_768,1);
      }
    }
  }
  *(undefined4 *)(lVar7 + 0x218) = 0;
  *(undefined1 *)(lVar7 + 0x21c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x220,&local_700);
  puVar9 = (undefined8 *)(lVar7 + 0x128);
  local_760 = local_718;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  plStack_758 = plVar5;
  if (&local_760 != puVar9) {
    local_760 = *puVar9;
    plStack_758 = *(longlong **)(lVar7 + 0x130);
    local_670 = local_718;
    *puVar9 = local_718;
    *(longlong **)(lVar7 + 0x130) = plVar5;
    plStack_668 = plVar5;
  }
  plVar1 = plStack_758;
  if (plStack_758 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_758 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_758)(plStack_758);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_758 + 8))(plStack_758,1);
      }
    }
  }
  FUN_14192e4e0(local_710,lVar7);
  FUN_1418d1c60(local_298);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6d8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (local_6b0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_6b0 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_6b0)(local_6b0);
      LOCK();
      piVar2 = (int *)((longlong)local_6b0 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_6b0 + 8))(local_6b0,1);
      }
    }
  }
  plVar6 = local_748;
  if (local_748 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_748 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_748)(local_748);
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
  FUN_1419656c0(local_658);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_700);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  if (local_6a0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_6a0 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_6a0)(local_6a0);
      LOCK();
      piVar2 = (int *)((longlong)local_6a0 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_6a0 + 8))(local_6a0,1);
      }
    }
  }
  plVar5 = local_730;
  if (local_730 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_730 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_730)(local_730);
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
  FUN_1419656c0(local_478);
  return;
}



// FUNCTION 141975eb0 FUN_141975eb0 body=769 status=ok
// SIG undefined FUN_141975eb0(void)

void FUN_141975eb0(longlong param_1,longlong param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  code *local_78;
  undefined4 uStack_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [16];
  float local_48;
  char local_44;
  char local_40;
  longlong *local_38;
  int local_30;
  
  lVar7 = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x108);
  local_44 = *(char *)(param_2 + 0x11c) != '\0';
  if ((bool)local_44) {
    local_48 = *(float *)(param_2 + 0x118);
  }
  local_40 = *(char *)(param_2 + 0x120);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_38,param_2 + 0x128);
  pfVar2 = (float *)(param_1 + 0x210);
  if ((*(int *)(param_1 + 0x228) == 0) || (*(longlong **)(param_1 + 0x220) == (longlong *)0x0)) {
LAB_141975f4b:
    cVar4 = '\0';
  }
  else {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x220) + 0x18))();
    if (cVar4 == '\0') goto LAB_141975f4b;
    cVar4 = '\x01';
  }
  if ((local_30 == 0) || (local_38 == (longlong *)0x0)) {
LAB_141975f6e:
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*local_38 + 0x18))();
    if (cVar5 == '\0') goto LAB_141975f6e;
    cVar5 = '\x01';
  }
  if (cVar4 == cVar5) {
    if (cVar4 == '\0') {
      if ((*(char *)(param_1 + 0x218) != local_40) || (*(char *)(param_1 + 0x214) != local_44))
      goto LAB_141975fd5;
      if (*(char *)(param_1 + 0x214) == '\0') goto LAB_141976019;
      bVar11 = local_48 == *pfVar2;
    }
    else {
      lVar10 = lVar7;
      if ((local_30 != 0) && (local_38 != (longlong *)0x0)) {
        plVar6 = (longlong *)(**(code **)(*local_38 + 0x20))(local_38,local_res8);
        lVar10 = *plVar6;
      }
      if ((*(int *)(param_1 + 0x228) != 0) &&
         (plVar6 = *(longlong **)(param_1 + 0x220), plVar6 != (longlong *)0x0)) {
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res10);
        lVar7 = *plVar6;
      }
      bVar11 = lVar7 == lVar10;
    }
    if (bVar11) goto LAB_141976019;
  }
LAB_141975fd5:
  if (&local_48 != pfVar2) {
    if (*(char *)(param_1 + 0x214) != '\0') {
      *(undefined1 *)(param_1 + 0x214) = 0;
    }
    if (local_44 != '\0') {
      *pfVar2 = local_48;
      *(undefined1 *)(param_1 + 0x214) = 1;
    }
  }
  *(char *)(param_1 + 0x218) = local_40;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x220,&local_38);
  FUN_1418475e0(param_1,5);
LAB_141976019:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x1a8);
  FUN_140692440(param_1 + 0x250,param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x160);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x280,param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x178);
  *(undefined1 *)(param_1 + 0x298) = *(undefined1 *)(param_2 + 0x180);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2a0,param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_2 + 0x1b0);
  local_78 = FUN_141969440;
  uStack_70 = 0;
  uVar8 = FUN_1417ddb00(local_58,param_1,&local_78);
  puVar9 = (undefined8 *)FUN_141853de0(param_1,local_68,*(undefined4 *)(param_1 + 0x2c8),uVar8);
  *(undefined8 *)(param_1 + 0x2b8) = *puVar9;
  lVar7 = puVar9[1];
  if (lVar7 != *(longlong *)(param_1 + 0x2c0)) {
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(param_1 + 0x2c0);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong *)(param_1 + 0x2c0) = lVar7;
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 1419761c0 FUN_1419761c0 body=603 status=ok
// SIG undefined FUN_1419761c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419761c0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_278 [32];
  longlong *local_258;
  int local_250;
  undefined1 *local_248;
  ulonglong uStack_240;
  undefined1 local_238 [16];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 local_218 [496];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_248 = *(undefined1 **)(param_2 + 0x138);
  uStack_240 = *(ulonglong *)(param_2 + 0x140);
  if (uStack_240 != 0) {
    LOCK();
    *(int *)(uStack_240 + 8) = *(int *)(uStack_240 + 8) + 1;
    UNLOCK();
  }
  uVar1 = *(undefined4 *)(param_2 + 0x108);
  lVar5 = FUN_14068f180(local_218);
  *(undefined4 *)(lVar5 + 0x108) = uVar1;
  *(undefined4 *)(lVar5 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  uVar6 = FUN_140692660(lVar5,&local_248);
  FUN_141972160(param_1,uVar6);
  FUN_140690ea0(local_218);
  uVar1 = *(undefined4 *)(param_2 + 0x114);
  uVar2 = *(undefined4 *)(param_2 + 0x118);
  uVar3 = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x314) = uVar1;
  *(undefined4 *)(param_1 + 0x318) = uVar2;
  *(undefined4 *)(param_1 + 0x31c) = uVar3;
  *(undefined1 *)(param_1 + 800) = *(undefined1 *)(param_2 + 0x120);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x328,param_2 + 0x128);
  uVar1 = *(undefined4 *)(param_2 + 0x150);
  uVar2 = *(undefined4 *)(param_2 + 0x154);
  uVar3 = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x33c) = uVar1;
  *(undefined4 *)(param_1 + 0x340) = uVar2;
  *(undefined4 *)(param_1 + 0x344) = uVar3;
  *(undefined1 *)(param_1 + 0x348) = *(undefined1 *)(param_2 + 0x148);
  *(undefined1 *)(param_1 + 0x349) = *(undefined1 *)(param_2 + 0x15c);
  *(undefined1 *)(param_1 + 0x34a) = *(undefined1 *)(param_2 + 0x15d);
  *(undefined1 *)(param_1 + 0x34b) = *(undefined1 *)(param_2 + 0x15e);
  *(undefined1 *)(param_1 + 0x34c) = *(undefined1 *)(param_2 + 0x15f);
  FUN_1419a4dd0(param_1);
  local_248 = &LAB_14199f760;
  uStack_21c = (undefined4)(uStack_240 >> 0x20);
  uStack_240 = uStack_240 & 0xffffffff00000000;
  local_228 = 0x4199f760;
  uStack_224 = 1;
  uStack_220 = 0;
  plVar7 = (longlong *)FUN_14044bb20(&local_258,param_1,&local_228);
  uVar6 = 0;
  if (((int)plVar7[1] != 0) && (uVar6 = 0, *plVar7 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464aef80,1);
    uVar6 = 0;
    if (((int)plVar7[1] != 0) &&
       (plVar9 = (longlong *)*plVar7, uVar6 = 0, plVar9 != (longlong *)0x0)) {
      puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x20))(plVar9,local_238);
      uVar6 = *puVar8;
    }
    iVar4 = DAT_1464aef88;
    lVar5 = (longlong)DAT_1464aef88;
    DAT_1464aef88 = DAT_1464aef88 + 1;
    if (DAT_1464aef8c < DAT_1464aef88) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464aef80,iVar4);
    }
    plVar9 = (longlong *)(lVar5 * 0x10 + DAT_1464aef80);
    *plVar9 = 0;
    *plVar9 = *plVar7;
    *plVar7 = 0;
    *(int *)(plVar9 + 1) = (int)plVar7[1];
    *(undefined4 *)(plVar7 + 1) = 0;
  }
  if (local_250 != 0) {
    if (local_258 == (longlong *)0x0) goto LAB_1419763f8;
    (**(code **)(*local_258 + 0x28))(local_258,0);
    if (local_258 != (longlong *)0x0) {
      local_258 = (longlong *)FMemory::Realloc(local_258,0,0);
    }
    local_250 = 0;
  }
  if (local_258 != (longlong *)0x0) {
    FMemory::Free(local_258);
  }
LAB_1419763f8:
  *(undefined8 *)(param_1 + 0x360) = uVar6;
  return;
}



// FUNCTION 141976420 FUN_141976420 body=579 status=ok
// SIG undefined FUN_141976420(void)

void FUN_141976420(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  code *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x30c) = *(undefined1 *)(param_2 + 0x13c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x310,param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x2f4) = *(undefined1 *)(param_2 + 0x124);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2f8,param_2 + 0x128);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x324) = *(undefined1 *)(param_2 + 0x154);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x328,param_2 + 0x158);
  *(undefined1 *)(param_1 + 0x338) = *(undefined1 *)(param_2 + 0x168);
  *(undefined1 *)(param_1 + 0x339) = *(undefined1 *)(param_2 + 0x169);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x340,param_2 + 0x170);
  *(undefined1 *)(param_1 + 0x360) = *(undefined1 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x378) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 900) = 0;
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x11c);
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,param_2 + 0x108);
  FUN_14199e4f0(param_1);
  iStack_30 = 0;
  local_38 = FUN_14199e4f0;
  local_28 = 0x4199e4f0;
  uStack_24 = 1;
  uStack_20 = 0;
  uStack_1c = uStack_2c;
  plVar2 = (longlong *)FUN_14044bb20(&local_38,param_1,&local_28);
  uVar5 = 0;
  if (((int)plVar2[1] != 0) && (uVar5 = 0, *plVar2 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464aef80,1);
    uVar5 = 0;
    if (((int)plVar2[1] != 0) &&
       (plVar4 = (longlong *)*plVar2, uVar5 = 0, plVar4 != (longlong *)0x0)) {
      puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      uVar5 = *puVar3;
    }
    iVar1 = DAT_1464aef88;
    lVar6 = (longlong)DAT_1464aef88;
    DAT_1464aef88 = DAT_1464aef88 + 1;
    if (DAT_1464aef8c < DAT_1464aef88) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464aef80,iVar1);
    }
    plVar4 = (longlong *)(lVar6 * 0x10 + DAT_1464aef80);
    *plVar4 = 0;
    *plVar4 = *plVar2;
    *plVar2 = 0;
    *(int *)(plVar4 + 1) = (int)plVar2[1];
    *(undefined4 *)(plVar2 + 1) = 0;
  }
  if (iStack_30 != 0) {
    if (local_38 == (code *)0x0) goto LAB_141976653;
    (**(code **)(*(longlong *)local_38 + 0x28))(local_38,0);
    if (local_38 != (code *)0x0) {
      local_38 = (code *)FMemory::Realloc(local_38,0,0);
    }
    iStack_30 = 0;
  }
  if (local_38 != (code *)0x0) {
    FMemory::Free(local_38);
  }
LAB_141976653:
  *(undefined8 *)(param_1 + 0x358) = uVar5;
  return;
}



// FUNCTION 141976670 FUN_141976670 body=6977 status=ok
// SIG undefined FUN_141976670(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141976670(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong **pplVar4;
  undefined1 uVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined4 uVar18;
  longlong lVar19;
  undefined4 uVar20;
  bool bVar21;
  undefined1 auStack_1908 [32];
  longlong local_18e8;
  longlong local_18e0;
  undefined4 local_18d8;
  longlong local_18d0;
  longlong local_18c8;
  longlong local_18c0;
  undefined1 local_18b8;
  undefined1 local_18b0;
  longlong local_18a8;
  longlong local_1898;
  undefined1 local_1890;
  undefined1 local_188f;
  undefined1 local_188e;
  undefined1 local_188d;
  undefined1 local_188c;
  undefined1 local_188b;
  undefined1 local_188a [2];
  undefined4 local_1888;
  longlong *local_1880;
  longlong local_1878;
  undefined8 local_1870;
  longlong *plStack_1868;
  longlong *local_1860;
  longlong *local_1858;
  longlong *local_1850;
  longlong *local_1848;
  longlong *local_1840;
  longlong *local_1838;
  longlong *local_1830;
  longlong *plStack_1828;
  longlong *local_1820;
  longlong *plStack_1818;
  longlong local_1810;
  longlong *local_1808;
  int local_1800;
  longlong *local_17f8;
  int local_17f0;
  longlong *local_17e8;
  int local_17e0;
  longlong *local_17d8;
  longlong local_17d0;
  undefined2 local_17c8;
  undefined8 local_17c0;
  undefined4 local_17b8;
  undefined8 local_17a8;
  undefined4 uStack_17a0;
  undefined4 uStack_179c;
  undefined4 local_1798;
  undefined4 local_1790;
  undefined1 local_178c;
  undefined8 local_1788;
  undefined4 local_1780;
  undefined8 local_1778;
  undefined4 uStack_1770;
  undefined4 uStack_176c;
  undefined8 local_1768;
  undefined1 local_1760;
  undefined8 local_1758;
  undefined4 local_1750;
  longlong *local_1748;
  longlong *local_1740;
  longlong *local_1738;
  undefined1 *local_1730;
  longlong *local_1728;
  longlong *local_1720;
  undefined4 local_1718;
  undefined1 local_1714;
  undefined8 local_1710;
  undefined4 local_1708;
  longlong *local_1700;
  longlong *local_16f8;
  undefined1 *local_16f0;
  undefined8 local_16e8;
  undefined1 local_16e0;
  undefined8 local_16d8;
  undefined4 local_16d0;
  undefined8 local_16c8;
  undefined1 local_16c0;
  undefined8 local_16b8;
  undefined4 local_16b0;
  longlong *local_16a8;
  longlong *local_16a0;
  undefined1 *local_1698;
  longlong *local_1690;
  longlong *local_1688;
  undefined1 *local_1680;
  longlong *local_1678;
  longlong *local_1670;
  undefined1 *local_1668;
  longlong *local_1660;
  longlong *local_1658;
  undefined1 *local_1650;
  longlong *local_1648;
  longlong *local_1640;
  undefined1 *local_1638;
  undefined4 local_1630;
  undefined4 uStack_162c;
  undefined4 uStack_1628;
  undefined4 uStack_1624;
  undefined1 local_1620;
  undefined8 local_1618;
  undefined4 local_1610;
  longlong *local_1608;
  longlong *local_1600;
  undefined8 local_15f8;
  undefined4 uStack_15f0;
  undefined4 uStack_15ec;
  longlong *local_15e8;
  longlong *local_15e0;
  undefined8 local_15d8;
  longlong *local_15d0;
  longlong *local_15c8;
  longlong *local_15c0;
  longlong *local_15b8;
  longlong *local_15b0;
  longlong *local_15a8;
  longlong *local_15a0;
  undefined8 local_1598;
  undefined1 local_1590;
  undefined8 local_1588;
  undefined4 local_1580;
  undefined8 local_1578;
  undefined1 local_1570;
  undefined8 local_1568;
  undefined4 local_1560;
  undefined8 local_1558;
  longlong local_1550;
  undefined4 local_1548;
  undefined4 uStack_1544;
  undefined4 uStack_1540;
  undefined4 uStack_153c;
  undefined1 local_1538;
  undefined8 local_1530;
  longlong *plStack_1528;
  undefined1 local_1520;
  undefined8 local_1518;
  undefined4 local_1510;
  undefined8 local_1508;
  undefined8 uStack_1500;
  undefined1 local_14f8;
  undefined8 local_14f0;
  undefined4 local_14e8;
  longlong *local_14e0;
  longlong *local_14d8;
  longlong *local_14c8;
  longlong *local_14c0;
  undefined4 local_14a8;
  undefined4 uStack_14a4;
  undefined4 uStack_14a0;
  undefined4 uStack_149c;
  undefined1 local_1498 [16];
  undefined4 local_1488;
  undefined4 uStack_1484;
  undefined4 uStack_1480;
  undefined4 uStack_147c;
  undefined4 local_1478;
  undefined4 uStack_1474;
  undefined4 uStack_1470;
  undefined4 uStack_146c;
  undefined1 local_1468 [8];
  longlong *local_1460;
  undefined1 local_1458 [8];
  longlong *local_1450;
  undefined1 local_1448 [264];
  longlong local_1340;
  undefined1 local_1338 [48];
  undefined1 local_1308 [16];
  longlong *local_12f8;
  longlong *plStack_12f0;
  longlong *local_12e8;
  longlong *plStack_12e0;
  undefined8 local_12d8;
  longlong *plStack_12d0;
  undefined1 local_12c8 [264];
  undefined1 local_11c0 [16];
  undefined1 local_11b0 [16];
  undefined1 local_11a0 [24];
  undefined1 local_1188 [264];
  longlong local_1080;
  undefined1 local_1068 [280];
  undefined1 local_f50 [24];
  undefined1 local_f38 [384];
  undefined1 local_db8 [384];
  undefined1 local_c38 [496];
  undefined1 local_a48 [496];
  undefined1 local_858 [688];
  undefined1 local_5a8 [688];
  undefined1 local_2f8 [688];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x141976692;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1908;
  local_1810 = param_2;
  local_17d0 = param_1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3d8,param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_2 + 0x124);
  *(undefined1 *)(param_1 + 0x3f0) = *(undefined1 *)(param_2 + 0x128);
  *(undefined1 *)(param_1 + 0x388) = *(undefined1 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x389) = *(undefined1 *)(param_2 + 0x79);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x390,param_2 + 0x80);
  lVar11 = *(longlong *)(param_2 + 0x108);
  if (*(longlong *)(param_2 + 0x108) == 0) {
    SScrollBar::FArguments::FArguments(local_1448);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1308);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1338);
    FUN_140456c70(local_1448);
    lVar11 = local_1340;
  }
  iVar6 = *(int *)(param_1 + 0x3ec);
  *(longlong *)(param_1 + 0x408) = lVar11 + 0x338;
  *(longlong *)(param_1 + 0x410) = lVar11 + 0x3c0;
  lVar19 = 0x118;
  if (iVar6 != 1) {
    lVar19 = 0x1a0;
  }
  *(longlong *)(param_1 + 0x418) = lVar11 + 0x448;
  lVar9 = 0x228;
  if (iVar6 != 1) {
    lVar9 = 0x2b0;
  }
  lVar10 = 0x90;
  if (iVar6 != 1) {
    lVar10 = 8;
  }
  *(longlong *)(param_1 + 0x420) = lVar10 + lVar11;
  *(longlong *)(param_1 + 0x428) = lVar19 + lVar11;
  *(longlong *)(param_1 + 0x430) = lVar9 + lVar11;
  uVar5 = *(undefined1 *)(param_2 + 0x121);
  bVar21 = *(int *)(param_1 + 0x3ec) == 1;
  uVar18 = 0;
  uVar14 = *(undefined8 *)(param_1 + 0x430);
  uVar20 = 2;
  if (bVar21) {
    uVar20 = uVar18;
  }
  *(undefined1 *)(param_1 + 0x3f2) = 0;
  if (bVar21) {
    uVar18 = 2;
  }
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  local_1568 = 0;
  local_1560 = 0;
  local_1898 = CONCAT44(local_1898._4_4_,uVar20);
  *(undefined1 *)(param_1 + 0x3f1) = uVar5;
  local_1570 = 1;
  local_1888 = uVar18;
  local_1578 = uVar14;
  lVar11 = SImage::FArguments::FArguments(local_db8);
  *(undefined8 *)(lVar11 + 0x108) = uVar14;
  *(undefined1 *)(lVar11 + 0x110) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x118,&local_1568);
  plVar12 = (longlong *)FUN_140c61c00();
  plVar15 = plVar12 + 2;
  local_1720 = plVar12;
  local_1648 = plVar15;
  local_1640 = plVar12;
  FUN_14044f790(&local_1648,plVar15);
  local_1638 = &local_1890;
  local_18e8 = 0x278;
  SWidget::SetDebugInfo
            (plVar15,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x49);
  local_18a8 = lVar11 + 0xf8;
  local_18c0 = lVar11 + 0xe8;
  local_18b0 = *(undefined1 *)(lVar11 + 0xf1);
  local_18c8 = lVar11 + 200;
  local_18d0 = lVar11 + 0x98;
  local_18b8 = *(undefined1 *)(lVar11 + 0xf0);
  local_18e0 = lVar11 + 0x78;
  local_18e8 = lVar11 + 0x60;
  local_18d8 = *(undefined4 *)(lVar11 + 0x90);
  SWidget::SWidgetConstruct(plVar15,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  SImage::Construct(plVar15,lVar11);
  if (((char)plVar12[5] < '\0') || (cVar7 = (**(code **)(*plVar15 + 0x1e8))(plVar15), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar8;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_15b8 = plVar15;
  local_15b0 = plVar12;
  lVar11 = FUN_14068f180(local_a48);
  *(undefined4 *)(lVar11 + 0x108) = uVar18;
  *(undefined4 *)(lVar11 + 0x10c) = uVar20;
  plVar12 = (longlong *)FUN_1418cc2a0();
  plVar15 = plVar12 + 2;
  local_1660 = plVar15;
  local_1658 = plVar12;
  FUN_14044f790(&local_1660,plVar15);
  local_1650 = &local_188f;
  local_18e8 = 0x310;
  SWidget::SetDebugInfo
            (plVar15,&DAT_144d702a8,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x45);
  lVar11 = FUN_140692660(lVar11,&local_15b8);
  local_18d8 = *(undefined4 *)(lVar11 + 0x90);
  local_18a8 = lVar11 + 0xf8;
  local_18c0 = lVar11 + 0xe8;
  local_18b0 = *(undefined1 *)(lVar11 + 0xf1);
  local_18c8 = lVar11 + 200;
  local_18d0 = lVar11 + 0x98;
  local_18b8 = *(undefined1 *)(lVar11 + 0xf0);
  local_18e0 = lVar11 + 0x78;
  local_18e8 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(plVar15,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_141972160(plVar15,lVar11);
  if (((char)plVar12[5] < '\0') || (cVar7 = (**(code **)(*plVar15 + 0x1e8))(plVar15), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar8;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_1778 = FUN_141984420;
  uStack_1770 = 0;
  lVar11 = SSpacer::FArguments::FArguments(local_1068);
  *(undefined8 *)(lVar11 + 0x108) = *(undefined8 *)(local_1810 + 0x130);
  *(undefined1 *)(lVar11 + 0x110) = *(undefined1 *)(local_1810 + 0x138);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x118,local_1810 + 0x140);
  plVar13 = (longlong *)FUN_141880f80();
  plVar15 = plVar13 + 2;
  local_1728 = plVar13;
  local_1678 = plVar15;
  local_1670 = plVar13;
  FUN_14044f790(&local_1678,plVar15);
  local_1668 = &local_188e;
  local_18e8 = 0x228;
  SWidget::SetDebugInfo
            (plVar15,"SSpacer",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x3f);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_1860 = plVar15;
  local_1858 = plVar13;
  if ((longlong **)(param_1 + 0x3b0) != &local_1860) {
    *(longlong **)(param_1 + 0x3b0) = plVar15;
    local_1860 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3b8,&local_1858);
  }
  plVar17 = local_1858;
  if (local_1858 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1858 + 1;
    lVar19 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_1858)(local_1858);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1858 + 8))(local_1858,1);
      }
    }
  }
  local_18d8 = *(undefined4 *)(lVar11 + 0x90);
  local_18a8 = lVar11 + 0xf8;
  local_18c0 = lVar11 + 0xe8;
  local_18b0 = *(undefined1 *)(lVar11 + 0xf1);
  local_18c8 = lVar11 + 200;
  local_18d0 = lVar11 + 0x98;
  local_18b8 = *(undefined1 *)(lVar11 + 0xf0);
  local_18e0 = lVar11 + 0x78;
  local_18e8 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(plVar15,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  plVar13[0x43] = *(longlong *)(lVar11 + 0x108);
  *(undefined1 *)(plVar13 + 0x44) = *(undefined1 *)(lVar11 + 0x110);
  TBaseDelegate<FSlateBrush_const_*>::operator=(plVar13 + 0x45,lVar11 + 0x118);
  if (((char)plVar13[5] < '\0') || (cVar7 = (**(code **)(*plVar15 + 0x1e8))(plVar15), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar8;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_15c8 = plVar15;
  local_15c0 = plVar13;
  lVar11 = FUN_141886d30(local_2f8);
  local_14a8 = (undefined4)local_1778;
  uStack_14a4 = local_1778._4_4_;
  uStack_14a0 = uStack_1770;
  uStack_149c = uStack_176c;
  uVar14 = FUN_1417dd6e0(&local_17f8,param_1,&local_14a8);
  local_1760 = 1;
  local_1768 = 0;
  local_1758 = 0;
  local_1750 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1758,uVar14);
  *(undefined8 *)(lVar11 + 0x188) = local_1768;
  *(undefined1 *)(lVar11 + 400) = local_1760;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x198,&local_1758);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1758);
  if (local_17f0 == 0) {
LAB_141976dcf:
    if (local_17f8 != (longlong *)0x0) {
      FMemory::Free(local_17f8);
    }
  }
  else if (local_17f8 != (longlong *)0x0) {
    (**(code **)(*local_17f8 + 0x28))(local_17f8,0);
    if (local_17f8 != (longlong *)0x0) {
      local_17f8 = (longlong *)FMemory::Realloc(local_17f8,0,0);
    }
    local_17f0 = 0;
    goto LAB_141976dcf;
  }
  *(undefined4 *)(lVar11 + 0x118) = 2;
  *(undefined4 *)(lVar11 + 0x11c) = 2;
  plVar15 = (longlong *)operator_new(0x398);
  if (plVar15 == (longlong *)0x0) {
    plVar15 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar15 + 1) = 1;
    *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
    *plVar15 = (longlong)&PTR_FUN_144d61068;
    if (plVar15 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar13 = plVar15 + 2;
  local_1700 = plVar13;
  local_16f8 = plVar15;
  FUN_14044f790(&local_1700,plVar13);
  local_16f0 = &local_188d;
  local_18e8 = 0x388;
  SWidget::SetDebugInfo
            (plVar13,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x3a);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_1850 = plVar13;
  local_1848 = plVar15;
  if ((longlong **)(param_1 + 0x3a0) != &local_1850) {
    *(longlong **)(param_1 + 0x3a0) = plVar13;
    local_1850 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3a8,&local_1848);
  }
  plVar15 = local_1848;
  if (local_1848 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1848 + 1;
    lVar19 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_1848)(local_1848);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1848 + 8))(local_1848,1);
      }
    }
  }
  uVar14 = FUN_14188d200(lVar11,&local_15c8);
  puVar16 = (undefined8 *)FUN_1418d3ed0(&local_1700,local_1458,uVar14);
  plVar15 = (longlong *)puVar16[1];
  local_1878 = *puVar16;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  uVar14 = *(undefined8 *)(param_1 + 0x428);
  local_1588 = 0;
  local_1580 = 0;
  local_1590 = 1;
  local_1778 = (code *)plVar15;
  local_1598 = uVar14;
  lVar11 = SImage::FArguments::FArguments(local_f38);
  *(undefined8 *)(lVar11 + 0x108) = uVar14;
  *(undefined1 *)(lVar11 + 0x110) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x118,&local_1588);
  plVar17 = (longlong *)FUN_140c61c00();
  plVar13 = plVar17 + 2;
  local_1748 = plVar17;
  local_1690 = plVar13;
  local_1688 = plVar17;
  FUN_14044f790(&local_1690,plVar13);
  local_1680 = &local_188c;
  local_18e8 = 0x278;
  SWidget::SetDebugInfo
            (plVar13,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x34);
  local_18d8 = *(undefined4 *)(lVar11 + 0x90);
  local_18a8 = lVar11 + 0xf8;
  local_18c0 = lVar11 + 0xe8;
  local_18b0 = *(undefined1 *)(lVar11 + 0xf1);
  local_18c8 = lVar11 + 200;
  local_18d0 = lVar11 + 0x98;
  local_18b8 = *(undefined1 *)(lVar11 + 0xf0);
  local_18e0 = lVar11 + 0x78;
  local_18e8 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(plVar13,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  SImage::Construct(plVar13,lVar11);
  if (((char)plVar17[5] < '\0') || (cVar7 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar17 + 0x29) = *(byte *)((longlong)plVar17 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar17 + 0x29) = *(byte *)((longlong)plVar17 + 0x29) | bVar8;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
  }
  local_15a8 = plVar13;
  local_15a0 = plVar17;
  lVar11 = FUN_14068f180(local_c38);
  *(undefined4 *)(lVar11 + 0x108) = local_1888;
  *(undefined4 *)(lVar11 + 0x10c) = (undefined4)local_1898;
  plVar17 = (longlong *)FUN_1418cc2a0();
  plVar13 = plVar17 + 2;
  local_16a8 = plVar13;
  local_16a0 = plVar17;
  FUN_14044f790(&local_16a8,plVar13);
  local_1698 = &local_188b;
  local_18e8 = 0x310;
  SWidget::SetDebugInfo
            (plVar13,&DAT_144d6fc08,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x30);
  lVar11 = FUN_140692660(lVar11,&local_15a8);
  local_18d8 = *(undefined4 *)(lVar11 + 0x90);
  local_18a8 = lVar11 + 0xf8;
  local_18c0 = lVar11 + 0xe8;
  local_18b0 = *(undefined1 *)(lVar11 + 0xf1);
  local_18c8 = lVar11 + 200;
  local_18d0 = lVar11 + 0x98;
  local_18b8 = *(undefined1 *)(lVar11 + 0xf0);
  local_18e0 = lVar11 + 0x78;
  local_18e8 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(plVar17 + 2,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_141972160(plVar17 + 2,lVar11);
  if (((char)plVar17[5] < '\0') || (cVar7 = (**(code **)(plVar17[2] + 0x1e8))(), cVar7 != '\0')) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  lVar11 = local_17d0;
  *(byte *)((longlong)plVar17 + 0x29) = *(byte *)((longlong)plVar17 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar17 + 0x29) = *(byte *)((longlong)plVar17 + 0x29) | bVar8;
  local_17d8 = plVar17 + 1;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)local_17d8 = (int)*local_17d8 + 1;
    UNLOCK();
    LOCK();
    *(int *)local_17d8 = (int)*local_17d8 + 1;
    UNLOCK();
  }
  plVar13 = DAT_1469eb140;
  local_14f0 = 0;
  local_14e8 = 0;
  lVar19 = *DAT_1469eb140;
  local_16c8 = *(undefined8 *)(local_17d0 + 0x420);
  local_17a8 = FUN_141985990;
  local_16b8 = 0;
  local_16b0 = 0;
  local_1710 = 0;
  local_1708 = 0;
  uStack_17a0 = 0;
  uStack_15f0 = 0;
  local_15f8 = FUN_141985ac0;
  local_1508 = 0;
  uStack_1500 = 0;
  local_14f8 = 1;
  local_16c0 = 1;
  local_1718 = 0x3f800000;
  local_1714 = 1;
  puVar16 = (undefined8 *)FName::FName(local_1498,"NoBorder",1);
  local_16e8 = (**(code **)(lVar19 + 0x40))(plVar13,*puVar16,0);
  local_16e0 = 1;
  local_16d8 = 0;
  local_16d0 = 0;
  uVar20 = *(undefined4 *)(local_1810 + 0x124);
  local_1880 = (longlong *)FUN_14195fc50(local_12c8);
  plVar13 = plVar17 + 2;
  *(undefined4 *)((longlong)local_1880 + 0x138) = uVar20;
  pplVar4 = (longlong **)((longlong)local_1880 + 0x108);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)local_17d8 = (int)*local_17d8 + 1;
    UNLOCK();
  }
  local_1830 = plVar13;
  plStack_1828 = plVar17;
  if (&local_1830 != pplVar4) {
    local_1830 = *pplVar4;
    plStack_1828 = *(longlong **)((longlong)local_1880 + 0x110);
    *pplVar4 = plVar13;
    *(longlong **)((longlong)local_1880 + 0x110) = plVar17;
    local_12e8 = plVar13;
    plStack_12e0 = plVar17;
  }
  plVar13 = plStack_1828;
  if (plStack_1828 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_1828 + 1;
    lVar19 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plStack_1828)(plStack_1828);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_1828 + 8))(plStack_1828,1);
      }
    }
  }
  plVar13 = local_1880;
  local_1870 = local_1878;
  puVar16 = (undefined8 *)((longlong)local_1880 + 0x118);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  plStack_1868 = plVar15;
  if (&local_1870 != puVar16) {
    local_1870 = *puVar16;
    plStack_1868 = *(longlong **)((longlong)local_1880 + 0x120);
    local_12d8 = local_1878;
    *puVar16 = local_1878;
    *(longlong **)((longlong)local_1880 + 0x120) = plVar15;
    plStack_12d0 = plVar15;
  }
  plVar15 = plStack_1868;
  if (plStack_1868 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_1868 + 1;
    lVar19 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plStack_1868)(plStack_1868);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_1868 + 8))(plStack_1868,1);
      }
    }
  }
  plVar15 = plVar12 + 2;
  pplVar4 = (longlong **)((longlong)plVar13 + 0x128);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_1820 = plVar15;
  plStack_1818 = plVar12;
  if (&local_1820 != pplVar4) {
    local_1820 = *pplVar4;
    plStack_1818 = *(longlong **)((longlong)plVar13 + 0x130);
    *pplVar4 = plVar15;
    *(longlong **)((longlong)plVar13 + 0x130) = plVar12;
    local_12f8 = plVar15;
    plStack_12f0 = plVar12;
  }
  plVar15 = plStack_1818;
  if (plStack_1818 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_1818 + 1;
    lVar19 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plStack_1818)(plStack_1818);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_1818 + 8))(plStack_1818,1);
      }
    }
  }
  plVar13 = (longlong *)FUN_14195ec00();
  plVar15 = plVar13 + 2;
  local_1740 = plVar15;
  local_1738 = plVar13;
  FUN_14044f790(&local_1740,plVar15);
  local_1730 = local_188a;
  local_18e8 = 0x240;
  SWidget::SetDebugInfo
            (plVar15,"SScrollBarTrack",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x2c);
  pplVar4 = (longlong **)(lVar11 + 0x3c8);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_1840 = plVar15;
  local_1838 = plVar13;
  if (pplVar4 != &local_1840) {
    *pplVar4 = plVar15;
    local_1840 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar11 + 0x3d0,&local_1838);
  }
  plVar15 = local_1838;
  if (local_1838 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1838 + 1;
    lVar11 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_1838)(local_1838);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1838 + 8))(local_1838,1);
      }
    }
  }
  puVar16 = (undefined8 *)FUN_141967bc0(&local_1740,local_1468,local_1880);
  local_1558 = *puVar16;
  local_1550 = puVar16[1];
  if (local_1550 != 0) {
    LOCK();
    *(int *)(local_1550 + 8) = *(int *)(local_1550 + 8) + 1;
    UNLOCK();
  }
  lVar11 = FUN_141886d30(local_5a8);
  *(undefined8 *)(lVar11 + 0x188) = local_16c8;
  *(undefined1 *)(lVar11 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x198,&local_16b8);
  *(undefined4 *)(lVar11 + 0x118) = local_1888;
  *(undefined4 *)(lVar11 + 0x11c) = (undefined4)local_1898;
  *(undefined4 *)(lVar11 + 0x120) = (undefined4)local_1508;
  *(undefined4 *)(lVar11 + 0x124) = local_1508._4_4_;
  *(undefined4 *)(lVar11 + 0x128) = (undefined4)uStack_1500;
  *(undefined4 *)(lVar11 + 300) = uStack_1500._4_4_;
  *(undefined1 *)(lVar11 + 0x130) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x138,&local_14f0);
  plVar15 = (longlong *)operator_new(0x398);
  if (plVar15 == (longlong *)0x0) {
    plVar15 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar15 + 1) = 1;
    *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
    *plVar15 = (longlong)&PTR_FUN_144d61068;
    if (plVar15 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar13 = plVar15 + 2;
  local_14e0 = plVar13;
  local_14d8 = plVar15;
  FUN_14044f790(&local_14e0,plVar13);
  local_18e8 = 0x388;
  SWidget::SetDebugInfo
            (plVar13,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x26);
  lVar11 = FUN_14188d200(lVar11,&local_1558);
  local_18d8 = *(undefined4 *)(lVar11 + 0x90);
  local_18a8 = lVar11 + 0xf8;
  local_18c0 = lVar11 + 0xe8;
  local_18b0 = *(undefined1 *)(lVar11 + 0xf1);
  local_18e0 = lVar11 + 0x78;
  local_18c8 = lVar11 + 200;
  local_18b8 = *(undefined1 *)(lVar11 + 0xf0);
  local_18d0 = lVar11 + 0x98;
  local_18e8 = lVar11 + 0x60;
  plVar13 = plVar15 + 2;
  SWidget::SWidgetConstruct(plVar13,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_141971ea0(plVar13,lVar11);
  if (((char)plVar15[5] < '\0') || (cVar7 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) | bVar8;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_1608 = plVar13;
  local_1600 = plVar15;
  puVar16 = (undefined8 *)operator_new(0x88);
  if (puVar16 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar16);
    *puVar16 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  local_1798 = 1;
  local_1790 = 0x3f800000;
  local_178c = 1;
  local_1788 = 0;
  local_1780 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1788,&local_1710);
  *(undefined4 *)(puVar16 + 5) = local_1798;
  *(undefined1 *)((longlong)puVar16 + 0x34) = local_178c;
  *(undefined4 *)(puVar16 + 6) = local_1790;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar16 + 7,&local_1788);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1788);
  local_1878 = FUN_1417f9c30(puVar16,&local_1608);
  lVar11 = SCanvas::FArguments::FArguments(local_1188);
  iVar6 = *(int *)(lVar11 + 0x110);
  *(int *)(lVar11 + 0x110) = iVar6 + 1;
  local_1898 = lVar11;
  if (*(int *)(lVar11 + 0x114) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar11 + 0x108,iVar6);
  }
  *(longlong *)(*(longlong *)(lVar11 + 0x108) + (longlong)iVar6 * 8) = local_1878;
  plVar13 = (longlong *)operator_new(0x248);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_DestroyObject_144d503e8;
    if (plVar13 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4670();
    }
  }
  plVar1 = plVar13 + 2;
  local_14c8 = plVar1;
  local_14c0 = plVar13;
  FUN_14044f790(&local_14c8,plVar1);
  local_18e8 = 0x238;
  SWidget::SetDebugInfo
            (plVar1,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x21);
  local_18a8 = lVar11 + 0xf8;
  local_18c0 = lVar11 + 0xe8;
  local_18c8 = lVar11 + 200;
  local_18d0 = lVar11 + 0x98;
  local_18e0 = lVar11 + 0x78;
  local_18e8 = lVar11 + 0x60;
  local_18b0 = *(undefined1 *)(local_1898 + 0xf1);
  local_18b8 = *(undefined1 *)(local_1898 + 0xf0);
  local_18d8 = *(undefined4 *)(local_1898 + 0x90);
  SWidget::SWidgetConstruct(plVar1,local_1898,local_1898 + 0x30,local_1898 + 0x40);
  SHorizontalBox::Construct(plVar1,local_1898);
  if (((char)plVar13[5] < '\0') || (cVar7 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar7 != '\0'))
  {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar8;
  local_1880 = plVar13 + 1;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)local_1880 = (int)*local_1880 + 1;
    UNLOCK();
    LOCK();
    *(int *)local_1880 = (int)*local_1880 + 1;
    UNLOCK();
  }
  local_15e8 = plVar1;
  local_15e0 = plVar13;
  lVar19 = FUN_141886d30(local_858);
  *(undefined8 *)(lVar19 + 0x188) = local_16e8;
  *(undefined1 *)(lVar19 + 400) = 1;
  local_1878 = lVar19;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar19 + 0x198,&local_16d8);
  lVar11 = local_17d0;
  local_1488 = (undefined4)local_15f8;
  uStack_1484 = local_15f8._4_4_;
  uStack_1480 = uStack_15f0;
  uStack_147c = uStack_15ec;
  uVar14 = FUN_14187cd30(&local_1808,local_17d0,&local_1488);
  local_1518 = 0;
  local_1510 = 0;
  local_1538 = 0;
  local_1548 = 0x3f800000;
  uStack_1544 = 0;
  uStack_1540 = 0x3f800000;
  uStack_153c = 0x3f800000;
  local_1520 = 1;
  local_1530 = 0;
  plStack_1528 = (longlong *)0x0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1518,uVar14);
  FUN_140692440(lVar19 + 0x210,&local_1548);
  *(undefined1 *)(lVar19 + 0x238) = local_1520;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar19 + 0x240,&local_1518);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1518);
  plVar1 = plStack_1528;
  if (plStack_1528 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_1528 + 1;
    lVar19 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plStack_1528)(plStack_1528);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  if (local_1800 == 0) {
LAB_141977b1d:
    if (local_1808 != (longlong *)0x0) {
      FMemory::Free(local_1808);
    }
  }
  else if (local_1808 != (longlong *)0x0) {
    (**(code **)(*local_1808 + 0x28))(local_1808,0);
    if (local_1808 != (longlong *)0x0) {
      local_1808 = (longlong *)FMemory::Realloc(local_1808,0,0);
    }
    local_1800 = 0;
    goto LAB_141977b1d;
  }
  local_1478 = (undefined4)local_17a8;
  uStack_1474 = local_17a8._4_4_;
  uStack_1470 = uStack_17a0;
  uStack_146c = uStack_179c;
  uVar14 = FUN_1418c8cd0(&local_17e8,lVar11,&local_1478);
  local_1620 = 1;
  local_1618 = 0;
  local_1610 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1618,uVar14);
  lVar19 = local_1878;
  *(undefined1 *)(local_1878 + 0x1f8) = local_1620;
  *(undefined4 *)(local_1878 + 0x1e8) = local_1630;
  *(undefined4 *)(local_1878 + 0x1ec) = uStack_162c;
  *(undefined4 *)(local_1878 + 0x1f0) = uStack_1628;
  *(undefined4 *)(local_1878 + 500) = uStack_1624;
  TBaseDelegate<FSlateBrush_const_*>::operator=(local_1878 + 0x200,&local_1618);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1618);
  if (local_17e0 != 0) {
    if (local_17e8 == (longlong *)0x0) goto LAB_141977bf7;
    (**(code **)(*local_17e8 + 0x28))(local_17e8,0);
    if (local_17e8 != (longlong *)0x0) {
      local_17e8 = (longlong *)FMemory::Realloc(local_17e8,0,0);
    }
    local_17e0 = 0;
  }
  if (local_17e8 != (longlong *)0x0) {
    FMemory::Free(local_17e8);
  }
LAB_141977bf7:
  uVar14 = FUN_14188d200(lVar19,&local_15e8);
  FUN_141971ea0(lVar11,uVar14);
  FUN_14188af70(local_858);
  plVar1 = local_1880;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    lVar19 = *local_1880;
    *(int *)local_1880 = (int)*local_1880 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    lVar19 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (local_1080 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1188);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar15 + 1;
    lVar19 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
    LOCK();
    plVar13 = plVar15 + 1;
    lVar19 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  FUN_14188af70(local_5a8);
  if (local_1460 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1460 + 1;
    lVar19 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_1460)(local_1460);
      LOCK();
      piVar2 = (int *)((longlong)local_1460 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1460 + 8))(local_1460,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1740);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_11a0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_11b0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_11c0);
  FUN_140456c70(local_12c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_16d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1710);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_16b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_14f0);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar17 + 1;
    lVar19 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
    LOCK();
    plVar15 = plVar17 + 1;
    lVar19 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_16a8);
  FUN_140690ea0(local_c38);
  plVar15 = local_1748;
  if (local_1748 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1748 + 1;
    lVar19 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_1748)(local_1748);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1690);
  FUN_14188b0e0(local_f38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1588);
  plVar15 = (longlong *)local_1778;
  if (local_1778 != (code *)0x0) {
    LOCK();
    plVar13 = (longlong *)((longlong)local_1778 + 8);
    lVar19 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (*(code *)**(undefined8 **)local_1778)(local_1778);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  if (local_1450 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1450 + 1;
    lVar19 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_1450)(local_1450);
      LOCK();
      piVar2 = (int *)((longlong)local_1450 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1450 + 8))(local_1450,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1700);
  FUN_14188af70(local_2f8);
  plVar15 = local_1728;
  if (local_1728 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1728 + 1;
    lVar19 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_1728)(local_1728);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1678);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_f50);
  FUN_140456c70(local_1068);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar12 + 1;
    lVar19 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    plVar15 = plVar12 + 1;
    lVar19 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1660);
  FUN_140690ea0(local_a48);
  plVar15 = local_1720;
  if (local_1720 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1720 + 1;
    lVar19 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_1720)(local_1720);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1648);
  FUN_14188b0e0(local_db8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1568);
  plVar15 = *(longlong **)(lVar11 + 0x3d0);
  uVar14 = *(undefined8 *)(lVar11 + 0x3c8);
  local_17a8 = (code *)&LAB_14198bf10;
  uStack_17a0 = 0;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_17c8 = 0x100;
  local_17c0 = 0;
  local_17b8 = 0;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_15d8 = uVar14;
  local_15d0 = plVar15;
  puVar16 = (undefined8 *)operator_new(0x38,&local_17c0);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &PTR_GetPoolName_144d69d18;
    puVar16[1] = uVar14;
    puVar16[2] = plVar15;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar16 + 3) = (undefined4)local_17a8;
    *(undefined4 *)((longlong)puVar16 + 0x1c) = local_17a8._4_4_;
    *(undefined4 *)(puVar16 + 4) = uStack_17a0;
    *(undefined4 *)((longlong)puVar16 + 0x24) = uStack_179c;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar16[6] = uVar14;
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar15 + 1;
    lVar19 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_15d8);
  *(undefined1 *)(lVar11 + 0x98) = (undefined1)local_17c8;
  *(undefined1 *)(lVar11 + 0x99) = local_17c8._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0xa0,&local_17c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_17c0);
  FUN_1419a3760(lVar11,*(undefined1 *)(local_1810 + 0x120));
  return;
}



// FUNCTION 1419781c0 FUN_1419781c0 body=1380 status=ok
// SIG undefined FUN_1419781c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419781c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  longlong local_228;
  longlong *plStack_220;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  int local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  code *local_1d8;
  undefined4 uStack_1d0;
  longlong local_1c8;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1b0;
  undefined1 local_1af;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_178 [8];
  longlong *local_170;
  longlong local_168;
  longlong *plStack_160;
  undefined1 local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_2 + 0x118);
  uVar7 = *(undefined8 *)(param_2 + 0x120);
  *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) & 0xf2;
  *(undefined8 *)(param_1 + 0x388) = uVar7;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x360) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x364) = DAT_1468b5d88._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x368,param_2 + 0x150);
  uVar5 = *(undefined4 *)(param_2 + 0x138);
  plVar2 = (longlong *)(param_1 + 0x308);
  *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) & 0xcf;
  *(undefined4 *)(param_1 + 0x378) = uVar5;
  *(undefined1 *)(param_1 + 0x390) = *(undefined1 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined1 *)(param_1 + 0x354) = *(undefined1 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_2 + 0x14c);
  uVar4 = *(undefined1 *)(param_2 + 0x149);
  *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) & 0x7f;
  *(undefined1 *)(param_1 + 0x35c) = uVar4;
  lVar9 = *(longlong *)(param_2 + 0x128);
  if (lVar9 == 0) {
    plVar8 = (longlong *)FUN_14197f480(param_1,local_178);
    if (plVar2 != plVar8) {
      *plVar2 = *plVar8;
      *plVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x310,plVar8 + 1);
    }
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_170 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)local_170 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
    local_190 = 1;
    local_188 = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x308) + 0x3f0) = *(undefined1 *)(param_2 + 0x13e);
    local_198 = *(undefined8 *)(param_2 + 0x140);
    local_180 = 0;
    FUN_1419a4d40(*(undefined8 *)(param_1 + 0x308),&local_198);
    lVar9 = *(longlong *)(param_1 + 0x308);
    local_1b0 = *(undefined1 *)(param_2 + 0x13c);
    local_1af = 1;
    *(undefined1 *)(lVar9 + 0x388) = local_1b0;
    *(undefined1 *)(lVar9 + 0x389) = 1;
    local_1a8 = 0;
    local_1a0 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x390,&local_1a8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1a8);
    FUN_1419a3760(*(undefined8 *)(param_1 + 0x308),*(undefined1 *)(param_2 + 0x13d));
    *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) & 0xfd;
    goto LAB_1419784ec;
  }
  plVar8 = *(longlong **)(param_2 + 0x130);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_228 = lVar9;
  plStack_220 = plVar8;
  if (&local_228 != plVar2) {
    local_228 = *plVar2;
    plStack_220 = *(longlong **)(param_1 + 0x310);
    *plVar2 = lVar9;
    *(longlong **)(param_1 + 0x310) = plVar8;
    local_168 = lVar9;
    plStack_160 = plVar8;
  }
  plVar8 = plStack_220;
  if (plStack_220 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_220 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_220)(plStack_220);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_220 + 8))(plStack_220,1);
      }
    }
  }
  lVar9 = *plVar2;
  local_1d8 = FUN_14199f800;
  uStack_1d0 = 0;
  uVar7 = FUN_14195d910(&local_208,param_1,&local_1d8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x3d8,uVar7);
  if (local_200 == 0) {
LAB_1419783d4:
    if (local_208 != (longlong *)0x0) {
      FMemory::Free(local_208);
    }
  }
  else if (local_208 != (longlong *)0x0) {
    (**(code **)(*local_208 + 0x28))(local_208,0);
    if (local_208 != (longlong *)0x0) {
      local_208 = (longlong *)FMemory::Realloc(local_208,0,0);
    }
    local_200 = 0;
    goto LAB_1419783d4;
  }
  *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) | 2;
LAB_1419784ec:
  uVar4 = *(undefined1 *)(param_2 + 0xf1);
  lVar9 = SNullWidgetContent::FArguments::FArguments(local_158);
  *(undefined1 *)(lVar9 + 0xf1) = uVar4;
  *(undefined4 *)(lVar9 + 0x108) = *(undefined4 *)(param_1 + 0x378);
  local_1c8 = param_2 + 0x108;
  plVar10 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SScrollPanel>();
  plVar8 = plVar10 + 2;
  local_1f8 = plVar8;
  local_1f0 = plVar10;
  FUN_14044f790(&local_1f8,plVar8);
  local_1e8 = &local_1c8;
  local_238 = 0x240;
  SWidget::SetDebugInfo
            (plVar8,"SScrollPanel",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0xc9);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_218 = plVar8;
  local_210 = plVar10;
  if ((longlong **)(param_1 + 0x2f8) != &local_218) {
    *(longlong **)(param_1 + 0x2f8) = plVar8;
    local_218 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x300,&local_210);
  }
  plVar8 = local_210;
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_210 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_210 + 8))(local_210,1);
      }
    }
  }
  FUN_141967dd0(&local_1f8,local_1c0,lVar9);
  plVar8 = local_1b8;
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1b8 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1b8 + 8))(local_1b8,1);
      }
    }
  }
  plVar8 = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1f0 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
  }
  FUN_140456c70(local_158);
  if (*(int *)(param_1 + 0x378) == 1) {
    FUN_14197f730();
  }
  else {
    FUN_14197bb40(param_1);
  }
  lVar9 = *plVar2;
  lVar6 = *(longlong *)(lVar9 + 0x3c8);
  if ((*(float *)(lVar6 + 0x230) != 0.0) || (*(float *)(lVar6 + 0x234) != 1.0)) {
    *(undefined4 *)(lVar6 + 0x230) = 0;
    *(undefined4 *)(lVar6 + 0x234) = 0x3f800000;
    uVar7 = (**(code **)(*DAT_1469f4590 + 0x40))();
    *(undefined8 *)(lVar9 + 0x3f8) = uVar7;
  }
  return;
}



// FUNCTION 141978730 Construct body=48 status=ok
// SIG undefined Construct(void)

void SSpacer::Construct(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x210) = *(undefined1 *)(param_2 + 0x110);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x218,param_2 + 0x118);
  return;
}



// FUNCTION 141978760 FUN_141978760 body=401 status=ok
// SIG undefined FUN_141978760(void)

void FUN_141978760(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x240,param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x124);
  plVar1 = (longlong *)(param_1 + 0x250);
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x234) = 0;
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x118);
  if ((longlong *)(param_2 + 0x148) != plVar1) {
    if ((*(int *)(param_2 + 0x150) == 0) ||
       (plVar3 = *(longlong **)(param_2 + 0x148), plVar3 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 600) != 0) &&
         (plVar3 = (longlong *)*plVar1, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        if (*plVar1 != 0) {
          lVar5 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar5;
        }
        *(undefined4 *)(param_1 + 600) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x130);
  uVar8 = uVar7;
  if (0 < *(int *)(param_2 + 0x110)) {
    do {
      lVar5 = *(longlong *)(uVar8 + *(longlong *)(param_2 + 0x108));
      if (*(char *)(param_1 + 0x228) == '\0') {
        lVar4 = *(longlong *)(param_1 + 0x210);
        if ((lVar4 != 0) && (*(longlong *)(lVar5 + 8) != lVar4)) {
          *(longlong *)(lVar5 + 8) = lVar4;
          FUN_141802340(lVar5);
        }
        iVar2 = *(int *)(param_1 + 0x220);
        *(int *)(param_1 + 0x220) = iVar2 + 1;
        if (*(int *)(param_1 + 0x224) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x218,iVar2);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x218) + (longlong)iVar2 * 8) = lVar5;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = uVar8 + 8;
    } while ((int)uVar6 < *(int *)(param_2 + 0x110));
  }
  return;
}



// FUNCTION 141978900 FUN_141978900 body=357 status=ok
// SIG undefined FUN_141978900(void)

void FUN_141978900(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FText::operator=(param_1 + 0x2f8,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x310) = *(undefined1 *)(param_2 + 0x120);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x318,param_2 + 0x128);
  *(undefined1 *)(param_1 + 0x438) = *(undefined1 *)(param_2 + 0x238);
  *(undefined1 *)(param_1 + 0x439) = *(undefined1 *)(param_2 + 0x239);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x440,param_2 + 0x240);
  FUN_1417f9360(param_1 + 0x348,param_2 + 0x148);
  *(undefined1 *)(param_1 + 0x398) = *(undefined1 *)(param_2 + 0x198);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3a0,param_2 + 0x1a0);
  FUN_140692440(param_1 + 0x3b0,param_2 + 0x1b0);
  *(undefined1 *)(param_1 + 0x3d8) = *(undefined1 *)(param_2 + 0x1d8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3e0,param_2 + 0x1e0);
  uVar1 = *(undefined4 *)(param_2 + 500);
  uVar2 = *(undefined4 *)(param_2 + 0x1f8);
  uVar3 = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 0x3f4) = uVar1;
  *(undefined4 *)(param_1 + 0x3f8) = uVar2;
  *(undefined4 *)(param_1 + 0x3fc) = uVar3;
  *(undefined1 *)(param_1 + 0x400) = *(undefined1 *)(param_2 + 0x200);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x408,param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(param_2 + 0x218);
  *(undefined1 *)(param_1 + 0x420) = *(undefined1 *)(param_2 + 0x220);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x428,param_2 + 0x228);
                    /* WARNING: Could not recover jumptable at 0x000141978a61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x2f0) + 0x10))
            ((longlong *)(param_1 + 0x2f0),param_2 + 0x138);
  return;
}



// FUNCTION 141978a70 FUN_141978a70 body=169 status=ok
// SIG undefined FUN_141978a70(void)

void FUN_141978a70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong *local_10;
  
  plVar4 = *(longlong **)(param_2 + 0x110);
  local_18 = *(undefined8 *)(param_2 + 0x108);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_10 = plVar4;
  FUN_14196cbb0(param_1 + 0x208,&local_18);
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
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfd;
    return;
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfd;
  return;
}



// FUNCTION 141978b20 FUN_141978b20 body=545 status=ok
// SIG undefined FUN_141978b20(void)

void FUN_141978b20(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined8 local_30;
  undefined4 local_28;
  
  uVar11 = *(undefined4 *)(param_2 + 0x11c);
  uVar3 = *(undefined4 *)(param_2 + 0x120);
  uVar4 = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x234) = uVar11;
  *(undefined4 *)(param_1 + 0x238) = uVar3;
  *(undefined4 *)(param_1 + 0x23c) = uVar4;
  *(undefined1 *)(param_1 + 0x240) = *(undefined1 *)(param_2 + 0x128);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x248,param_2 + 0x130);
  plVar9 = (longlong *)0x0;
  *(undefined8 *)(param_1 + 600) = 0;
  if (((*(int *)(param_2 + 0x150) != 0) && (*(longlong **)(param_2 + 0x148) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_2 + 0x148) + 0x18))(), cVar5 != '\0')) {
    plVar7 = plVar9;
    if (*(int *)(param_2 + 0x150) != 0) {
      plVar7 = *(longlong **)(param_2 + 0x148);
    }
    uVar11 = (**(code **)(*plVar7 + 0x38))();
    *(undefined4 *)(param_2 + 0x140) = uVar11;
  }
  uVar11 = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x260) = uVar11;
  local_30 = 0;
  local_28 = 0;
  *(undefined1 *)(param_1 + 0x264) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x268,&local_30,param_3,param_4,uVar11);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
  if (((*(int *)(param_2 + 0x168) != 0) && (*(longlong **)(param_2 + 0x160) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_2 + 0x160) + 0x18))(), cVar5 != '\0')) {
    plVar7 = plVar9;
    if (*(int *)(param_2 + 0x168) != 0) {
      plVar7 = *(longlong **)(param_2 + 0x160);
    }
    uVar11 = (**(code **)(*plVar7 + 0x38))();
    *(undefined4 *)(param_2 + 0x158) = uVar11;
  }
  uVar11 = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x278) = uVar11;
  local_30 = 0;
  local_28 = 0;
  *(undefined1 *)(param_1 + 0x27c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x280,&local_30,param_3,param_4,uVar11);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
  iVar6 = *(int *)(param_2 + 0x110);
  plVar7 = (longlong *)(param_1 + 0x218);
  if (*(int *)(param_1 + 0x224) < iVar6) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7,iVar6);
    iVar6 = *(int *)(param_2 + 0x110);
  }
  plVar10 = plVar9;
  if (0 < iVar6) {
    do {
      lVar1 = *(longlong *)((longlong)plVar10 + *(longlong *)(param_2 + 0x108));
      if (*(char *)(param_1 + 0x228) == '\0') {
        lVar2 = *(longlong *)(param_1 + 0x210);
        if ((lVar2 != 0) && (*(longlong *)(lVar1 + 8) != lVar2)) {
          *(longlong *)(lVar1 + 8) = lVar2;
          FUN_141802340(lVar1);
        }
        iVar6 = *(int *)(param_1 + 0x220);
        *(int *)(param_1 + 0x220) = iVar6 + 1;
        if (*(int *)(param_1 + 0x224) < iVar6 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar6);
        }
        *(longlong *)(*plVar7 + (longlong)iVar6 * 8) = lVar1;
      }
      uVar8 = (int)plVar9 + 1;
      plVar9 = (longlong *)(ulonglong)uVar8;
      plVar10 = plVar10 + 1;
    } while ((int)uVar8 < *(int *)(param_2 + 0x110));
  }
  return;
}



// FUNCTION 141978d50 FUN_141978d50 body=326 status=ok
// SIG undefined FUN_141978d50(void)

void FUN_141978d50(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined1 *)(param_1 + 0x310) = *(undefined1 *)(param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x311) = *(undefined1 *)(param_2 + 0x119);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x318,param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x358) = *(undefined1 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x359) = *(undefined1 *)(param_2 + 0x131);
  *(undefined1 *)(param_1 + 0x35a) = *(undefined1 *)(param_2 + 0x132);
  *(undefined1 *)(param_1 + 0x35b) = *(undefined1 *)(param_2 + 0x133);
  *(undefined1 *)(param_1 + 0x35c) = *(undefined1 *)(param_2 + 0x134);
  *(undefined1 *)(param_1 + 0x35d) = *(undefined1 *)(param_2 + 0x136);
  *(undefined1 *)(param_1 + 0x35e) = *(undefined1 *)(param_2 + 0x135);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_2 + 0x138);
  plVar3 = *(longlong **)(param_2 + 0x140);
  plVar4 = *(longlong **)(param_1 + 0x2f8);
  if (plVar3 != plVar4) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x2f8);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    *(longlong **)(param_1 + 0x2f8) = plVar3;
  }
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_2 + 0x148);
  *(undefined1 *)(param_1 + 0x330) = *(undefined1 *)(param_2 + 0x150);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x338,param_2 + 0x158);
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,param_2 + 0x108);
  return;
}



// FUNCTION 141978ea0 FUN_141978ea0 body=441 status=ok
// SIG undefined FUN_141978ea0(void)

void FUN_141978ea0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  longlong *local_48;
  int local_40;
  undefined1 *local_38;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  *(undefined4 *)(param_1 + 0x230) = 3;
  *(uint *)(param_1 + 0x234) = *(uint *)(param_1 + 0x234) & 0xfffffffb | 1;
  *(undefined4 *)(param_1 + 0x218) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x220) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x224) = 0x40000000;
  *(undefined4 *)(param_1 + 0x238) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  plVar4 = DAT_1469eaf50;
  lVar3 = DAT_1469eaf48;
  local_38 = &LAB_141967f9c;
  uStack_30 = 0;
  if (DAT_1469eaf50 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eaf50 + 1) = (int)DAT_1469eaf50[1] + 1;
    UNLOCK();
  }
  local_28 = 0x41967f9c;
  uStack_24 = 1;
  uStack_20 = 0;
  plVar5 = (longlong *)FUN_1418c8b70(&local_48,param_1,&local_28);
  if (((int)plVar5[1] != 0) && (*plVar5 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0x28,1);
    if (((int)plVar5[1] != 0) && (plVar6 = (longlong *)*plVar5, plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
    }
    iVar2 = *(int *)(lVar3 + 0x30);
    *(int *)(lVar3 + 0x30) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x34) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 0x28,iVar2);
    }
    plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x28));
    *plVar6 = 0;
    *plVar6 = *plVar5;
    *plVar5 = 0;
    *(int *)(plVar6 + 1) = (int)plVar5[1];
    *(undefined4 *)(plVar5 + 1) = 0;
  }
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) goto LAB_14197901a;
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
LAB_14197901a:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 141979060 FUN_141979060 body=1685 status=ok
// SIG undefined FUN_141979060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141979060(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong **pplVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  longlong local_380;
  undefined4 local_378;
  longlong local_370;
  longlong local_368;
  longlong local_360;
  undefined1 local_358;
  undefined1 local_350;
  longlong local_348;
  longlong *local_338;
  longlong *local_330;
  longlong *local_328;
  longlong *plStack_320;
  longlong local_318;
  undefined8 local_310;
  undefined8 *local_308;
  undefined8 local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a0;
  longlong *plStack_298;
  undefined1 local_288 [272];
  longlong *local_178;
  undefined1 local_168 [272];
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  *(byte *)(param_1 + 0x350) = *(byte *)(param_1 + 0x350) | 2;
  *(byte *)(param_1 + 0x351) = *(byte *)(param_1 + 0x351) | 2;
  *(undefined2 *)(param_1 + 0x600) = 0x100;
  SWindow::SetCachedSize(param_1,*(undefined8 *)(param_2 + 0x108));
  lVar8 = operator_new(0x18);
  if (lVar8 == 0) {
    local_310 = 0;
  }
  else {
    local_310 = FReferenceCollector::FReferenceCollector(lVar8);
  }
  local_308 = (undefined8 *)operator_new(0x18);
  if (local_308 != (undefined8 *)0x0) {
    *(undefined4 *)(local_308 + 1) = 1;
    *local_308 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_308 + 0xc) = 1;
    local_308[2] = local_310;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_310,local_310,local_310);
  FUN_14185af20(param_1,&local_310);
  FUN_141807ad0(param_1);
  plVar9 = (longlong *)FUN_14195ed20();
  plVar1 = plVar9 + 2;
  local_2d0 = plVar1;
  local_2c8 = plVar9;
  FUN_14044f790(&local_2d0,plVar1);
  local_388 = 0x228;
  SWidget::SetDebugInfo
            (plVar1,"STooltipPresenter",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SVirtualWindow.cpp",
             0x1b);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_338 = plVar1;
  local_330 = plVar9;
  if ((longlong **)(param_1 + 0x5f0) != &local_338) {
    *(longlong **)(param_1 + 0x5f0) = plVar1;
    local_338 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x5f8,&local_330);
  }
  plVar11 = local_330;
  if (local_330 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_330 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_330)(local_330);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_330 + 8))(local_330,1);
      }
    }
  }
  lVar8 = FUN_141960030(local_168);
  local_378 = *(undefined4 *)(lVar8 + 0x90);
  local_348 = lVar8 + 0xf8;
  local_360 = lVar8 + 0xe8;
  local_350 = *(undefined1 *)(lVar8 + 0xf1);
  local_368 = lVar8 + 200;
  local_370 = lVar8 + 0x98;
  local_358 = *(undefined1 *)(lVar8 + 0xf0);
  local_380 = lVar8 + 0x78;
  local_388 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  plVar11 = *(longlong **)(lVar8 + 0x110);
  local_300 = *(undefined8 *)(lVar8 + 0x108);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_2f8 = plVar11;
  FUN_14196cbb0(plVar9 + 0x43,&local_300);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  pbVar4 = (byte *)(plVar9 + 5);
  *pbVar4 = *pbVar4 & 0xfd;
  if (((char)*pbVar4 < '\0') || (cVar6 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar6 != '\0')) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar7;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_318 = FUN_141887340(local_288);
  pplVar10 = (longlong **)(local_318 + 0x108);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_328 = plVar1;
  plStack_320 = plVar9;
  if (&local_328 != pplVar10) {
    local_328 = *pplVar10;
    plStack_320 = *(longlong **)(local_318 + 0x110);
    *pplVar10 = plVar1;
    *(longlong **)(local_318 + 0x110) = plVar9;
    local_2a0 = plVar1;
    plStack_298 = plVar9;
  }
  plVar1 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_320 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_320)(plStack_320);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_320 + 8))(plStack_320,1);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar11 = (longlong *)FUN_141880f10();
  plVar1 = plVar11 + 2;
  local_2b8 = plVar1;
  local_2b0 = plVar11;
  FUN_14044f790(&local_2b8,plVar1);
  local_388 = 0x2f0;
  SWidget::SetDebugInfo
            (plVar1,"SPopup",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SVirtualWindow.cpp",
             0x19);
  local_378 = *(undefined4 *)(local_318 + 0x90);
  local_348 = local_318 + 0xf8;
  local_360 = local_318 + 0xe8;
  local_350 = *(undefined1 *)(local_318 + 0xf1);
  local_368 = local_318 + 200;
  local_370 = local_318 + 0x98;
  local_358 = *(undefined1 *)(local_318 + 0xf0);
  local_380 = local_318 + 0x78;
  local_388 = local_318 + 0x60;
  SWidget::SWidgetConstruct(plVar1,local_318,local_318 + 0x30,local_318 + 0x40);
  TSlotBase<FSimpleSlot>::operator[](plVar11 + 0x45,local_318 + 0x108);
  if (((char)plVar11[5] < '\0') || (cVar6 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar7;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_2f0 = plVar1;
  local_2e8 = plVar11;
  uVar12 = FUN_141801800(*(undefined8 *)(param_1 + 0x538),0xffffffff);
  FUN_140801a00(uVar12,&local_2f0);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    LOCK();
    plVar1 = plVar11 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    LOCK();
    plVar1 = plVar11 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_178 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar3 = (int *)((longlong)local_178 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_178 + 8))(local_178,1);
      }
    }
  }
  FUN_140456c70(local_288);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    LOCK();
    plVar1 = plVar9 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)local_58 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  FUN_140456c70(local_168);
  local_2e0 = DAT_1469eb218;
  local_2d8 = DAT_1469eb220;
  if (DAT_1469eb220 != 0) {
    LOCK();
    *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
    UNLOCK();
  }
  FUN_14185a760(param_1,&local_2e0);
  return;
}



// FUNCTION 141979700 FUN_141979700 body=23 status=ok
// SIG undefined FUN_141979700(void)

void FUN_141979700(longlong param_1,longlong param_2)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfd;
  FUN_14196cbb0(param_1 + 0x208,param_2 + 0x108);
  return;
}



// FUNCTION 141979720 Construct body=254 status=ok
// SIG undefined Construct(void)

void SWidgetSwitcher::Construct(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x110)) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar5 + *(longlong *)(param_2 + 0x108));
      if (*(char *)(param_1 + 0x240) == '\0') {
        lVar3 = *(longlong *)(param_1 + 0x228);
        if ((lVar3 != 0) && (*(longlong *)(lVar2 + 8) != lVar3)) {
          *(longlong *)(lVar2 + 8) = lVar3;
          FUN_141802340(lVar2);
        }
        iVar1 = *(int *)(param_1 + 0x238);
        *(int *)(param_1 + 0x238) = iVar1 + 1;
        if (*(int *)(param_1 + 0x23c) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x230,iVar1);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x230) + (longlong)iVar1 * 8) = lVar2;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(param_2 + 0x110));
  }
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x20c) = *(undefined1 *)(param_2 + 0x11c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x210,param_2 + 0x120);
  return;
}



// FUNCTION 141979820 FUN_141979820 body=6763 status=ok
// SIG undefined FUN_141979820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141979820(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_19c8 [32];
  longlong local_19a8;
  longlong local_19a0;
  undefined4 local_1998;
  longlong local_1990;
  longlong local_1988;
  longlong local_1980;
  undefined1 local_1978;
  undefined1 local_1970;
  longlong local_1968;
  undefined1 local_1958;
  undefined1 local_1957;
  undefined1 local_1956;
  undefined1 local_1955;
  undefined1 local_1954;
  undefined1 local_1953;
  undefined1 local_1952;
  undefined1 local_1951;
  undefined1 local_1950 [8];
  undefined8 local_1948;
  undefined4 uStack_1940;
  undefined4 uStack_193c;
  longlong *local_1938;
  longlong *local_1930;
  longlong *local_1928;
  longlong *local_1920;
  undefined8 local_1918;
  longlong *local_1910;
  undefined8 local_1908;
  undefined4 uStack_1900;
  undefined4 uStack_18fc;
  undefined8 local_18f8;
  undefined8 uStack_18f0;
  longlong *local_18e8;
  int local_18e0;
  longlong *local_18d8;
  int local_18d0;
  longlong local_18c8;
  longlong local_18c0;
  undefined8 local_18b8;
  longlong *local_18b0;
  undefined8 local_18a8;
  undefined4 uStack_18a0;
  undefined4 uStack_189c;
  code *local_1898;
  undefined4 uStack_1890;
  undefined1 local_1888;
  undefined1 local_1887;
  undefined8 local_1880;
  undefined4 local_1878;
  undefined1 local_1870;
  undefined1 local_186f;
  undefined8 local_1868;
  undefined4 local_1860;
  longlong local_1858;
  longlong local_1850;
  undefined1 *local_1848;
  undefined1 local_1840;
  undefined1 local_183f;
  undefined8 local_1838;
  undefined4 local_1830;
  undefined1 local_1828;
  undefined1 local_1827;
  undefined8 local_1820;
  undefined4 local_1818;
  undefined1 local_1810;
  undefined1 local_180f;
  undefined8 local_1808;
  undefined4 local_1800;
  undefined8 local_17f8;
  undefined8 local_17f0;
  undefined8 local_17e8;
  longlong local_17e0;
  longlong local_17d8;
  undefined1 *local_17d0;
  longlong local_17c8;
  longlong local_17c0;
  undefined1 *local_17b8;
  longlong local_17b0;
  longlong local_17a8;
  undefined1 *local_17a0;
  longlong local_1798;
  longlong local_1790;
  undefined1 *local_1788;
  longlong local_1780;
  longlong local_1778;
  undefined1 *local_1770;
  longlong local_1768;
  longlong local_1760;
  undefined1 *local_1758;
  undefined4 local_1750;
  undefined4 uStack_174c;
  undefined4 uStack_1748;
  undefined4 uStack_1744;
  undefined1 local_1740;
  undefined8 local_1738;
  undefined4 local_1730;
  longlong *local_1728;
  longlong *local_1720;
  undefined1 *local_1718;
  longlong *local_1710;
  longlong *local_1708;
  undefined1 *local_1700;
  undefined1 local_16f8;
  undefined1 local_16f7;
  undefined8 local_16f0;
  undefined4 local_16e8;
  undefined8 local_16e0;
  longlong local_16d8;
  undefined8 local_16d0;
  longlong local_16c8;
  undefined8 local_16c0;
  longlong *local_16b8;
  longlong *local_16b0;
  longlong *local_16a8;
  longlong *local_16a0;
  longlong *local_1698;
  undefined8 local_1690;
  longlong local_1688;
  longlong *local_1680;
  longlong *local_1678;
  longlong *local_1670;
  longlong *local_1668;
  undefined8 local_1660;
  longlong local_1658;
  undefined8 local_1650;
  undefined8 uStack_1648;
  undefined1 local_1640;
  undefined8 local_1638;
  undefined4 local_1630;
  undefined8 local_1628;
  undefined8 uStack_1620;
  undefined1 local_1618;
  undefined8 local_1610;
  undefined4 local_1608;
  undefined8 local_1600;
  undefined8 uStack_15f8;
  undefined1 local_15f0;
  undefined8 local_15e8;
  undefined4 local_15e0;
  undefined8 local_15d8;
  undefined8 uStack_15d0;
  undefined1 local_15c8;
  undefined8 local_15c0;
  undefined4 local_15b8;
  undefined1 local_15b0 [8];
  longlong *local_15a8;
  undefined4 local_1598;
  undefined4 uStack_1594;
  undefined4 uStack_1590;
  undefined4 uStack_158c;
  undefined4 local_1588;
  undefined4 uStack_1584;
  undefined4 uStack_1580;
  undefined4 uStack_157c;
  undefined4 local_1578;
  undefined4 uStack_1574;
  undefined4 uStack_1570;
  undefined4 uStack_156c;
  undefined4 local_1568;
  undefined4 uStack_1564;
  undefined4 uStack_1560;
  undefined4 uStack_155c;
  undefined4 local_1558;
  undefined4 uStack_1554;
  undefined4 uStack_1550;
  undefined4 uStack_154c;
  undefined1 local_1548 [8];
  undefined8 local_1540;
  undefined8 local_1538;
  undefined8 local_1530;
  undefined8 local_1528;
  undefined1 local_1520 [8];
  longlong *local_1518;
  undefined1 local_1510 [8];
  longlong *local_1508;
  undefined1 local_1500 [8];
  longlong *local_14f8;
  undefined1 local_14f0 [8];
  longlong *local_14e8;
  undefined1 local_14e0 [8];
  longlong *local_14d8;
  longlong *local_14d0;
  longlong *local_14c8;
  longlong *local_14b8;
  longlong *local_14b0;
  undefined1 local_14a0 [8];
  longlong *local_1498;
  undefined4 local_1490;
  undefined1 local_148c;
  undefined1 local_1488;
  undefined8 local_1480;
  undefined4 local_1478;
  undefined4 local_1470;
  undefined1 local_146c;
  undefined1 local_1468;
  undefined8 local_1460;
  undefined4 local_1458;
  undefined4 local_1450;
  undefined1 local_144c;
  undefined1 local_1448;
  undefined8 local_1440;
  undefined4 local_1438;
  undefined1 local_1428 [280];
  undefined1 local_1310 [48];
  longlong *local_12e0;
  undefined1 local_12d0 [16];
  undefined1 local_12c0 [24];
  undefined1 local_12a8 [264];
  longlong local_11a0;
  undefined1 local_1188 [264];
  longlong local_1080;
  undefined1 local_1068 [264];
  longlong local_f60;
  undefined1 local_f48 [264];
  longlong local_e40;
  undefined1 local_e28 [384];
  undefined1 local_ca8 [384];
  undefined1 local_b28 [496];
  undefined1 local_938 [760];
  undefined1 local_640 [760];
  undefined1 local_348 [760];
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_19c8;
  uStack_18f0 = (longlong *)((ulonglong)uStack_18f0 & 0xffffffff00000000);
  local_18f8 = FUN_141984a10;
  local_18c8 = param_1;
  local_18c0 = param_2;
  FName::FName(&local_17f8,"NoBorder",1);
  local_1470 = 1;
  local_18a8 = FUN_14198cbb0;
  local_1810 = *(undefined1 *)(param_1 + 0x288);
  local_1650 = 0;
  uStack_1648 = 0;
  local_1558 = (undefined4)local_18f8;
  uStack_1554 = local_18f8._4_4_;
  uStack_1550 = (undefined4)uStack_18f0;
  uStack_154c = uStack_18f0._4_4_;
  local_146c = 1;
  local_1468 = 1;
  local_1460 = 0;
  local_1458 = 0;
  uStack_18a0 = 0;
  local_1640 = 1;
  local_1638 = 0;
  local_1630 = 0;
  local_180f = 1;
  local_1808 = 0;
  local_1800 = 0;
  plVar8 = (longlong *)FUN_140c61c00();
  plVar4 = plVar8 + 2;
  local_14d0 = plVar4;
  local_14c8 = plVar8;
  FUN_14044f790(&local_14d0,plVar4);
  local_19a8 = 0x278;
  SWidget::SetDebugInfo
            (plVar4,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x50);
  uVar9 = SImage::FArguments::FArguments(local_1428);
  lVar10 = SImage::FArguments::Image<SFlareButton>(uVar9,param_1,&local_1558);
  local_1998 = *(undefined4 *)(lVar10 + 0x90);
  local_1968 = lVar10 + 0xf8;
  local_1980 = lVar10 + 0xe8;
  local_1970 = *(undefined1 *)(lVar10 + 0xf1);
  local_1988 = lVar10 + 200;
  local_1990 = lVar10 + 0x98;
  local_1978 = *(undefined1 *)(lVar10 + 0xf0);
  local_19a0 = lVar10 + 0x78;
  local_19a8 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar4,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  SImage::Construct(plVar4,lVar10);
  if (((char)plVar8[5] < '\0') || (cVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar6 != '\0')) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar12 = DAT_1469eb140;
  local_16b0 = plVar4;
  local_16a8 = plVar8;
  lVar10 = FUN_14068f3e0(local_938);
  *(undefined1 *)(lVar10 + 0x2a8) = 0;
  *(undefined1 *)(lVar10 + 0x60) = local_1810;
  *(undefined1 *)(lVar10 + 0x61) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x68,&local_1808);
  *(undefined1 *)(lVar10 + 0x140) = 1;
  *(undefined4 *)(lVar10 + 0x130) = (undefined4)local_1650;
  *(undefined4 *)(lVar10 + 0x134) = local_1650._4_4_;
  *(undefined4 *)(lVar10 + 0x138) = (undefined4)uStack_1648;
  *(undefined4 *)(lVar10 + 0x13c) = uStack_1648._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x148,&local_1638);
  local_1568 = (undefined4)local_18a8;
  uStack_1564 = local_18a8._4_4_;
  uStack_1560 = uStack_18a0;
  uStack_155c = uStack_189c;
  uVar9 = FUN_14068c820(&local_18e8,param_1,&local_1568);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x188,uVar9);
  if (local_18e0 == 0) {
LAB_141979b1b:
    if (local_18e8 != (longlong *)0x0) {
      FMemory::Free(local_18e8);
    }
  }
  else if (local_18e8 != (longlong *)0x0) {
    (**(code **)(*local_18e8 + 0x28))(local_18e8,0);
    if (local_18e8 != (longlong *)0x0) {
      local_18e8 = (longlong *)FMemory::Realloc(local_18e8,0,0);
    }
    local_18e0 = 0;
    goto LAB_141979b1b;
  }
  if (&local_1470 != (undefined4 *)(lVar10 + 0x40)) {
    *(undefined4 *)(lVar10 + 0x40) = 1;
    *(undefined1 *)(lVar10 + 0x44) = 1;
  }
  *(undefined1 *)(lVar10 + 0x48) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x50,&local_1460);
  local_1528 = local_17f8;
  local_1530 = local_17f8;
  lVar11 = (**(code **)(*plVar12 + 0x80))(plVar12,DAT_1469eb160);
  if (lVar11 == 0) {
    lVar11 = FUN_141834930();
  }
  *(longlong *)(lVar10 + 0x118) = lVar11;
  plVar12 = (longlong *)FUN_141880af0();
  plVar4 = plVar12 + 2;
  local_14b8 = plVar4;
  local_14b0 = plVar12;
  FUN_14044f790(&local_14b8,plVar4);
  local_19a8 = 0x488;
  SWidget::SetDebugInfo
            (plVar4,"SButton",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x48);
  lVar10 = FUN_14188d200(lVar10,&local_16b0);
  local_1998 = *(undefined4 *)(lVar10 + 0x90);
  local_1968 = lVar10 + 0xf8;
  local_1980 = lVar10 + 0xe8;
  local_1970 = *(undefined1 *)(lVar10 + 0xf1);
  local_1988 = lVar10 + 200;
  local_1990 = lVar10 + 0x98;
  local_1978 = *(undefined1 *)(lVar10 + 0xf0);
  local_19a0 = lVar10 + 0x78;
  local_19a8 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar4,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_14192dae0(plVar4,lVar10);
  if (((char)plVar12[5] < '\0') || (cVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar7;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_18a8 = (code *)(param_1 + 0x290);
  local_1938 = plVar4;
  local_1930 = plVar12;
  if ((longlong **)local_18a8 != &local_1938) {
    *(longlong **)local_18a8 = plVar4;
    local_1938 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x298,&local_1930);
  }
  plVar4 = local_1930;
  if (local_1930 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1930 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_1930)(local_1930);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1930 + 8))(local_1930,1);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar12 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    plVar4 = plVar12 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  FUN_140690f70(local_938);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar4 = plVar8 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_12c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_12d0);
  if (local_12e0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_12e0 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_12e0)(local_12e0);
      LOCK();
      piVar1 = (int *)((longlong)local_12e0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_12e0 + 8))(local_12e0,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1310);
  FUN_140456c70(local_1428);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1808);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1638);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1460);
  uStack_1900 = 0;
  local_1908 = FUN_141984890;
  FName::FName(&local_17f0,"NoBorder",1);
  local_1450 = 1;
  local_1948 = FUN_14198ca30;
  local_1840 = *(undefined1 *)(param_1 + 0x289);
  local_1628 = 0;
  uStack_1620 = 0;
  local_1588 = (undefined4)local_1908;
  uStack_1584 = local_1908._4_4_;
  uStack_1580 = uStack_1900;
  uStack_157c = uStack_18fc;
  local_144c = 1;
  local_1448 = 1;
  local_1440 = 0;
  local_1438 = 0;
  uStack_1940 = 0;
  local_1618 = 1;
  local_1610 = 0;
  local_1608 = 0;
  local_183f = 1;
  local_1838 = 0;
  local_1830 = 0;
  plVar8 = (longlong *)FUN_140c61c00();
  plVar4 = plVar8 + 2;
  local_1710 = plVar4;
  local_1708 = plVar8;
  FUN_14044f790(&local_1710,plVar4);
  local_1700 = &local_1958;
  local_19a8 = 0x278;
  SWidget::SetDebugInfo
            (plVar4,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x5c);
  uVar9 = SImage::FArguments::FArguments(local_e28);
  lVar10 = SImage::FArguments::Image<SFlareButton>(uVar9,param_1,&local_1588);
  local_1998 = *(undefined4 *)(lVar10 + 0x90);
  local_1968 = lVar10 + 0xf8;
  local_1980 = lVar10 + 0xe8;
  local_1970 = *(undefined1 *)(lVar10 + 0xf1);
  local_1988 = lVar10 + 200;
  local_1990 = lVar10 + 0x98;
  local_1978 = *(undefined1 *)(lVar10 + 0xf0);
  local_19a0 = lVar10 + 0x78;
  local_19a8 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar4,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  SImage::Construct(plVar4,lVar10);
  if (((char)plVar8[5] < '\0') || (cVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar6 != '\0')) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar12 = DAT_1469eb140;
  local_16a0 = plVar4;
  local_1698 = plVar8;
  lVar10 = FUN_14068f3e0(local_640);
  *(undefined1 *)(lVar10 + 0x2a8) = 0;
  *(undefined1 *)(lVar10 + 0x60) = local_1840;
  *(undefined1 *)(lVar10 + 0x61) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x68,&local_1838);
  *(undefined1 *)(lVar10 + 0x140) = 1;
  *(undefined4 *)(lVar10 + 0x130) = (undefined4)local_1628;
  *(undefined4 *)(lVar10 + 0x134) = local_1628._4_4_;
  *(undefined4 *)(lVar10 + 0x138) = (undefined4)uStack_1620;
  *(undefined4 *)(lVar10 + 0x13c) = uStack_1620._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x148,&local_1610);
  local_1598 = (undefined4)local_1948;
  uStack_1594 = local_1948._4_4_;
  uStack_1590 = uStack_1940;
  uStack_158c = uStack_193c;
  uVar9 = FUN_14068c820(&local_18d8,param_1,&local_1598);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x188,uVar9);
  if (local_18d0 != 0) {
    if (local_18d8 == (longlong *)0x0) goto LAB_14197a16e;
    (**(code **)(*local_18d8 + 0x28))(local_18d8,0);
    if (local_18d8 != (longlong *)0x0) {
      local_18d8 = (longlong *)FMemory::Realloc(local_18d8,0,0);
    }
    local_18d0 = 0;
  }
  if (local_18d8 != (longlong *)0x0) {
    FMemory::Free(local_18d8);
  }
LAB_14197a16e:
  if (&local_1450 != (undefined4 *)(lVar10 + 0x40)) {
    *(undefined4 *)(lVar10 + 0x40) = 1;
    *(undefined1 *)(lVar10 + 0x44) = 1;
  }
  *(undefined1 *)(lVar10 + 0x48) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x50,&local_1440);
  local_1538 = local_17f0;
  local_1540 = local_17f0;
  lVar11 = (**(code **)(*plVar12 + 0x80))(plVar12,DAT_1469eb160);
  if (lVar11 == 0) {
    lVar11 = FUN_141834930();
  }
  *(longlong *)(lVar10 + 0x118) = lVar11;
  plVar12 = (longlong *)FUN_141880af0();
  plVar4 = plVar12 + 2;
  local_1728 = plVar4;
  local_1720 = plVar12;
  FUN_14044f790(&local_1728,plVar4);
  local_1718 = &local_1957;
  local_19a8 = 0x488;
  SWidget::SetDebugInfo
            (plVar4,"SButton",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x54);
  lVar10 = FUN_14188d200(lVar10,&local_16a0);
  local_1998 = *(undefined4 *)(lVar10 + 0x90);
  local_1968 = lVar10 + 0xf8;
  local_1980 = lVar10 + 0xe8;
  local_1970 = *(undefined1 *)(lVar10 + 0xf1);
  local_1988 = lVar10 + 200;
  local_1990 = lVar10 + 0x98;
  local_1978 = *(undefined1 *)(lVar10 + 0xf0);
  local_19a0 = lVar10 + 0x78;
  local_19a8 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar4,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_14192dae0(plVar4,lVar10);
  if (((char)plVar12[5] < '\0') || (cVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  lVar10 = local_18c8;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  plVar5 = plVar12 + 1;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar7;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar5 = (int)*plVar5 + 1;
    UNLOCK();
    LOCK();
    *(int *)plVar5 = (int)*plVar5 + 1;
    UNLOCK();
  }
  local_1908 = (code *)(local_18c8 + 0x2a0);
  local_1928 = plVar4;
  local_1920 = plVar12;
  if ((longlong **)local_1908 != &local_1928) {
    *(longlong **)local_1908 = plVar4;
    local_1928 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_18c8 + 0x2a8,&local_1920);
  }
  plVar4 = local_1920;
  if (local_1920 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1920 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_1920)(local_1920);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1920 + 8))(local_1920,1);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1728);
  FUN_140690f70(local_640);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1710);
  FUN_14188b0e0(local_e28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1838);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1610);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1440);
  puVar17 = (undefined8 *)0x0;
  local_1948 = FUN_141984020;
  uStack_1940 = 0;
  FName::FName(&local_17e8,"NoBorder",1);
  uVar18 = *(undefined1 *)(lVar10 + 0x28a);
  local_1898 = FUN_14196e870;
  uStack_1890 = 0;
  local_1490 = 1;
  local_148c = 1;
  local_1488 = 1;
  local_1480 = 0;
  local_1478 = 0;
  local_1600 = 0;
  uStack_15f8 = 0;
  local_15f0 = 1;
  local_15e8 = 0;
  local_15e0 = 0;
  local_1827 = 1;
  local_1820 = 0;
  local_1818 = 0;
  local_1578 = (undefined4)local_1948;
  uStack_1574 = local_1948._4_4_;
  uStack_1570 = uStack_1940;
  uStack_156c = uStack_193c;
  local_1828 = uVar18;
  local_17a8 = FUN_140c61c00();
  lVar11 = local_17a8 + 0x10;
  local_17b0 = lVar11;
  FUN_14044f790(&local_17b0,lVar11);
  local_17a0 = &local_1956;
  local_19a8 = 0x278;
  SWidget::SetDebugInfo
            (lVar11,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x68);
  uVar9 = SImage::FArguments::FArguments(local_ca8);
  uVar9 = SImage::FArguments::Image<SFlareButton>(uVar9,lVar10,&local_1578);
  puVar13 = (undefined8 *)FUN_14188e090(&local_17b0,local_1510,uVar9);
  local_1690 = *puVar13;
  local_1688 = puVar13[1];
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  if (local_1688 != 0) {
    LOCK();
    *(int *)(local_1688 + 8) = *(int *)(local_1688 + 8) + 1;
    UNLOCK();
    uVar19 = (undefined4)local_1600;
    uVar20 = local_1600._4_4_;
    uVar21 = (undefined4)uStack_15f8;
    uVar22 = uStack_15f8._4_4_;
    uVar18 = local_1828;
  }
  plVar4 = DAT_1469eb140;
  lVar11 = FUN_14068f3e0(local_348);
  *(undefined1 *)(lVar11 + 0x2a8) = 0;
  *(undefined1 *)(lVar11 + 0x60) = uVar18;
  *(undefined1 *)(lVar11 + 0x61) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x68,&local_1820);
  *(undefined1 *)(lVar11 + 0x140) = 1;
  *(undefined4 *)(lVar11 + 0x130) = uVar19;
  *(undefined4 *)(lVar11 + 0x134) = uVar20;
  *(undefined4 *)(lVar11 + 0x138) = uVar21;
  *(undefined4 *)(lVar11 + 0x13c) = uVar22;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x148,&local_15e8);
  lVar11 = SButton::FArguments::OnClicked<SWindowTitleBar>(lVar11,lVar10,&local_1898);
  if (&local_1490 != (undefined4 *)(lVar11 + 0x40)) {
    *(undefined4 *)(lVar11 + 0x40) = 1;
    *(undefined1 *)(lVar11 + 0x44) = 1;
  }
  *(undefined1 *)(lVar11 + 0x48) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x50,&local_1480);
  lVar14 = *plVar4;
  puVar13 = (undefined8 *)ISlateStyle::Join(local_1548,local_17e8,0);
  lVar14 = (**(code **)(lVar14 + 0x80))(plVar4,DAT_1469eb160,*puVar13);
  if (lVar14 == 0) {
    lVar14 = FUN_141834930();
  }
  *(longlong *)(lVar11 + 0x118) = lVar14;
  local_1790 = FUN_141880af0();
  lVar14 = local_1790 + 0x10;
  local_1798 = lVar14;
  FUN_14044f790(&local_1798,lVar14);
  local_1788 = &local_1955;
  local_19a8 = 0x488;
  SWidget::SetDebugInfo
            (lVar14,"SButton",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x60);
  uVar9 = FUN_14188d200(lVar11,&local_1690);
  puVar13 = (undefined8 *)FUN_14188de80(&local_1798,local_1520,uVar9);
  local_1910 = (longlong *)puVar13[1];
  local_1918 = *puVar13;
  if (local_1910 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1910 + 1) = (int)local_1910[1] + 1;
    UNLOCK();
  }
  puVar13 = (undefined8 *)(lVar10 + 0x2b0);
  if (puVar13 != &local_1918) {
    *puVar13 = local_1918;
    local_1918 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar10 + 0x2b8,&local_1910);
  }
  plVar4 = local_1910;
  if (local_1910 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1910 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_1910)(local_1910);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1910 + 8))(local_1910,1);
      }
    }
  }
  if (local_1518 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1518 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_1518)(local_1518);
      LOCK();
      piVar1 = (int *)((longlong)local_1518 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1518 + 8))(local_1518,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1798);
  FUN_140690f70(local_348);
  if (local_1508 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1508 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_1508)(local_1508);
      LOCK();
      piVar1 = (int *)((longlong)local_1508 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1508 + 8))(local_1508,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_17b0);
  FUN_14188b0e0(local_ca8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1820);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_15e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1480);
  local_1888 = DAT_1464b9eec;
  plVar4 = *(longlong **)(lVar10 + 0x2b8);
  local_16c0 = *puVar13;
  local_1870 = DAT_1464b9eec;
  local_1887 = 1;
  local_1880 = 0;
  local_1878 = 0;
  local_15c8 = 1;
  local_15c0 = 0;
  local_15b8 = 0;
  local_186f = 1;
  local_1868 = 0;
  local_1860 = 0;
  local_15d8 = 0;
  uStack_15d0 = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_16b8 = plVar4;
  puVar13 = (undefined8 *)operator_new(0x88);
  if (puVar13 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar13);
    *puVar13 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar17 = puVar13;
  }
  local_1680 = *(longlong **)local_1908;
  plVar8 = *(longlong **)((longlong)local_1908 + 8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_1678 = plVar8;
  puVar13 = (undefined8 *)operator_new(0x88);
  if (puVar13 == (undefined8 *)0x0) {
    local_1948 = (code *)0x0;
  }
  else {
    local_1948 = (code *)puVar13;
    FUN_1417f13c0(puVar13);
    *puVar13 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  local_1670 = *(longlong **)local_18a8;
  plVar12 = *(longlong **)((longlong)local_18a8 + 8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_1668 = plVar12;
  puVar13 = (undefined8 *)operator_new(0x88);
  if (puVar13 == (undefined8 *)0x0) {
    local_1908 = (code *)0x0;
  }
  else {
    local_1908 = (code *)puVar13;
    FUN_1417f13c0(puVar13);
    *puVar13 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  lVar11 = SCanvas::FArguments::FArguments(local_f48);
  *(undefined1 *)(lVar11 + 0x78) = local_1888;
  *(undefined1 *)(lVar11 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x80,&local_1880);
  local_1760 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
  lVar10 = local_1760 + 0x10;
  local_1768 = lVar10;
  FUN_14044f790(&local_1768,lVar10);
  local_1758 = &local_1954;
  local_19a8 = 0x238;
  SWidget::SetDebugInfo
            (lVar10,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x8a);
  uVar9 = SVerticalBox::FSlot::AutoHeight(puVar17);
  uVar9 = FUN_140692760(uVar9,&local_16c0);
  uVar15 = SVerticalBox::FSlot::AutoHeight(local_1948);
  uVar15 = FUN_140692760(uVar15,&local_1680);
  uVar16 = SVerticalBox::FSlot::AutoHeight(local_1908);
  uVar16 = FUN_140692760(uVar16,&local_1670);
  uVar16 = SOverlay::FArguments::operator+(lVar11,uVar16);
  uVar15 = SOverlay::FArguments::operator+(uVar16,uVar15);
  uVar9 = SOverlay::FArguments::operator+(uVar15,uVar9);
  puVar17 = (undefined8 *)FUN_140693150(&local_1768,local_15b0,uVar9);
  local_1660 = *puVar17;
  local_1658 = puVar17[1];
  if (local_1658 != 0) {
    LOCK();
    *(int *)(local_1658 + 8) = *(int *)(local_1658 + 8) + 1;
    UNLOCK();
  }
  lVar11 = FUN_14068f180(local_b28);
  *(undefined1 *)(lVar11 + 0x78) = local_1870;
  *(undefined1 *)(lVar11 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x80,&local_1868);
  *(undefined1 *)(lVar11 + 0x120) = 1;
  *(undefined4 *)(lVar11 + 0x110) = (undefined4)local_15d8;
  *(undefined4 *)(lVar11 + 0x114) = local_15d8._4_4_;
  *(undefined4 *)(lVar11 + 0x118) = (undefined4)uStack_15d0;
  *(undefined4 *)(lVar11 + 0x11c) = uStack_15d0._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x128,&local_15c0);
  local_1778 = FUN_1418cc2a0();
  lVar10 = local_1778 + 0x10;
  local_1780 = lVar10;
  FUN_14044f790(&local_1780,lVar10);
  local_1770 = &local_1953;
  local_19a8 = 0x310;
  SWidget::SetDebugInfo
            (lVar10,&DAT_144d6ea48,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x85);
  uVar9 = FUN_140692660(lVar11,&local_1660);
  puVar17 = (undefined8 *)FUN_14188dd80(&local_1780,local_14a0,uVar9);
  local_16e0 = *puVar17;
  local_16d8 = puVar17[1];
  if (local_16d8 != 0) {
    LOCK();
    *(int *)(local_16d8 + 8) = *(int *)(local_16d8 + 8) + 1;
    UNLOCK();
  }
  puVar17 = (undefined8 *)operator_new(0x88);
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar17);
    *puVar17 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  *(undefined2 *)(puVar17 + 4) = 0x103;
  local_17d8 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
  lVar10 = local_17d8 + 0x10;
  local_17e0 = lVar10;
  FUN_14044f790(&local_17e0,lVar10);
  local_17d0 = &local_1952;
  local_19a8 = 0x238;
  SWidget::SetDebugInfo
            (lVar10,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x7f);
  uVar9 = SVerticalBox::FSlot::AutoHeight(puVar17);
  uVar9 = FUN_140692760(uVar9,&local_16e0);
  uVar15 = SCanvas::FArguments::FArguments(local_1068);
  uVar9 = SOverlay::FArguments::operator+(uVar15,uVar9);
  puVar17 = (undefined8 *)FUN_140693150(&local_17e0,local_14e0,uVar9);
  local_16d0 = *puVar17;
  local_16c8 = puVar17[1];
  if (local_16c8 != 0) {
    LOCK();
    *(int *)(local_16c8 + 8) = *(int *)(local_16c8 + 8) + 1;
    UNLOCK();
  }
  puVar17 = (undefined8 *)operator_new(0x88);
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar17);
    *puVar17 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  local_1850 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
  local_1858 = local_1850 + 0x10;
  FUN_14044f790(&local_1858);
  local_1848 = &local_1951;
  local_19a8 = 0x238;
  SWidget::SetDebugInfo
            (local_1858,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x7b);
  lVar10 = local_18c8;
  uVar9 = SVerticalBox::FSlot::AutoHeight(puVar17);
  uVar9 = FUN_1417f9c30(uVar9,&local_16d0);
  uVar15 = SCanvas::FArguments::FArguments(local_1188);
  uVar9 = SOverlay::FArguments::operator+(uVar15,uVar9);
  uVar15 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_1858,lVar10 + 0x2c0);
  puVar17 = (undefined8 *)FUN_1417fd340(uVar15,local_14f0,uVar9);
  local_18b8 = *puVar17;
  local_18b0 = (longlong *)puVar17[1];
  if (local_18b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18b0 + 1) = (int)local_18b0[1] + 1;
    UNLOCK();
  }
  lVar14 = FUN_14185c7c0();
  *(undefined2 *)(lVar14 + 0x24) = 0x103;
  local_17c0 = FUN_1417e5b60();
  lVar11 = local_17c0 + 0x10;
  local_17c8 = lVar11;
  FUN_14044f790(&local_17c8,lVar11);
  local_17b8 = local_1950;
  local_19a8 = 0x230;
  SWidget::SetDebugInfo
            (lVar11,"SOverlay",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x71);
  uVar9 = FUN_140801a00(lVar14,&local_18b8);
  lVar11 = local_18c0;
  uVar15 = FUN_14185c7c0();
  uVar15 = FUN_140801a00(uVar15,lVar11 + 0x138);
  uVar16 = SOverlay::FArguments::FArguments(local_12a8);
  uVar15 = SOverlay::FArguments::operator+(uVar16,uVar15);
  uVar9 = SOverlay::FArguments::operator+(uVar15,uVar9);
  puVar17 = (undefined8 *)FUN_1417fcf70(&local_17c8,local_1500,uVar9);
  lVar11 = local_18c0;
  plVar5 = (longlong *)puVar17[1];
  local_18f8 = (code *)*puVar17;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_1740 = *(undefined1 *)(local_18c0 + 0x120);
  local_1750 = *(undefined4 *)(local_18c0 + 0x110);
  uStack_174c = *(undefined4 *)(local_18c0 + 0x114);
  uStack_1748 = *(undefined4 *)(local_18c0 + 0x118);
  uStack_1744 = *(undefined4 *)(local_18c0 + 0x11c);
  local_1738 = 0;
  local_1730 = 0;
  uStack_18f0 = plVar5;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1738,local_18c0 + 0x128);
  *(undefined4 *)(lVar10 + 0x238) = *(undefined4 *)(lVar11 + 0x108);
  *(undefined4 *)(lVar10 + 0x23c) = *(undefined4 *)(lVar11 + 0x10c);
  *(undefined1 *)(lVar10 + 0x250) = local_1740;
  *(undefined4 *)(lVar10 + 0x240) = local_1750;
  *(undefined4 *)(lVar10 + 0x244) = uStack_174c;
  *(undefined4 *)(lVar10 + 0x248) = uStack_1748;
  *(undefined4 *)(lVar10 + 0x24c) = uStack_1744;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 600,&local_1738);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1738);
  TSlotBase<FSimpleSlot>::operator[](lVar10 + 0x218,&local_18f8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*uStack_18f0)();
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_18f0 + 8))(uStack_18f0,1);
      }
    }
  }
  if (local_14f8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_14f8 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_14f8)(local_14f8);
      LOCK();
      piVar1 = (int *)((longlong)local_14f8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_14f8 + 8))(local_14f8,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_17c8);
  if (local_11a0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_12a8);
  plVar5 = local_18b0;
  if (local_18b0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_18b0 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_18b0)(local_18b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18b0 + 8))(local_18b0,1);
      }
    }
  }
  if (local_14e8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_14e8 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_14e8)(local_14e8);
      LOCK();
      piVar1 = (int *)((longlong)local_14e8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_14e8 + 8))(local_14e8,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1858);
  if (local_1080 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1188);
  if (local_14d8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_14d8 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_14d8)(local_14d8);
      LOCK();
      piVar1 = (int *)((longlong)local_14d8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_14d8 + 8))(local_14d8,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_17e0);
  if (local_f60 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1068);
  if (local_1498 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1498 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1498)(local_1498);
      LOCK();
      piVar1 = (int *)((longlong)local_1498 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1498 + 8))(local_1498,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1780);
  FUN_140690ea0(local_b28);
  if (local_15a8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_15a8 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_15a8)(local_15a8);
      LOCK();
      piVar1 = (int *)((longlong)local_15a8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_15a8 + 8))(local_15a8,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1768);
  if (local_e40 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_f48);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar12 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar8 + 1;
    lVar14 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    lVar14 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1868);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_15c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1880);
  local_16f8 = DAT_1464b9ee9;
  local_16f0 = 0;
  local_16e8 = 0;
  local_16f7 = 1;
  SLeafWidget::SetVisibility(*(undefined8 *)(lVar10 + 0x2c0),&local_16f8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x278,lVar11 + 0x148);
  return;
}



// FUNCTION 14197b290 Construct body=291 status=ok
// SIG undefined Construct(void)

void SWrapBox::Construct(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x20c) = *(undefined1 *)(param_2 + 0x11c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x210,param_2 + 0x120);
  iVar4 = 0;
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x250) = *(undefined1 *)(param_2 + 0x138);
  if (0 < *(int *)(param_2 + 0x110)) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar5 + *(longlong *)(param_2 + 0x108));
      if (*(char *)(param_1 + 0x240) == '\0') {
        lVar3 = *(longlong *)(param_1 + 0x228);
        if ((lVar3 != 0) && (*(longlong *)(lVar2 + 8) != lVar3)) {
          *(longlong *)(lVar2 + 8) = lVar3;
          FUN_141802340(lVar2);
        }
        iVar1 = *(int *)(param_1 + 0x238);
        *(int *)(param_1 + 0x238) = iVar1 + 1;
        if (*(int *)(param_1 + 0x23c) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x230,iVar1);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x230) + (longlong)iVar1 * 8) = lVar2;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(param_2 + 0x110));
  }
  return;
}



// FUNCTION 14197b3c0 FUN_14197b3c0 body=1907 status=ok
// SIG undefined FUN_14197b3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14197b3c0(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined1 auStack_4e8 [32];
  longlong local_4c8;
  longlong local_4c0;
  undefined4 local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  undefined1 local_498;
  undefined1 local_490;
  longlong local_488;
  longlong *local_478;
  int local_470;
  undefined4 local_468;
  undefined4 local_460;
  undefined1 local_45c;
  undefined8 local_458;
  undefined4 local_450;
  undefined8 local_448;
  undefined1 local_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined8 *local_428;
  undefined4 local_420;
  undefined1 local_41c;
  undefined8 local_418;
  undefined4 local_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined1 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined1 local_3d0;
  undefined8 local_3c8;
  longlong *plStack_3c0;
  undefined1 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined8 local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  longlong *local_388;
  longlong *local_380;
  undefined8 local_378;
  longlong local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  longlong *local_358;
  longlong *local_350;
  longlong *local_340;
  longlong *local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_2f8 [280];
  undefined1 local_1e0 [48];
  longlong *local_1b0;
  undefined1 local_1a0 [16];
  undefined1 local_190 [24];
  undefined1 local_178 [264];
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_4e8;
  puVar12 = (undefined8 *)0x0;
  local_398 = &LAB_1418d48f0;
  local_378 = *param_4;
  local_370 = param_4[1];
  local_420 = 0x3f800000;
  local_41c = 1;
  local_418 = 0;
  local_410 = 0;
  local_3d0 = 2;
  local_3b8 = 1;
  local_3b0 = 0;
  local_3a8 = 0;
  uStack_390 = 0;
  local_328 = 0x3f800000;
  uStack_320 = 0x3f8000003f800000;
  local_3e0 = 0x3f800000;
  uStack_3d8 = 0x3f8000003f800000;
  local_3c8 = 0;
  plStack_3c0 = (longlong *)0x0;
  if (local_370 != 0) {
    LOCK();
    *(int *)(local_370 + 8) = *(int *)(local_370 + 8) + 1;
    UNLOCK();
  }
  local_428 = param_4;
  puVar6 = (undefined8 *)operator_new(0x88);
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar6);
    *puVar6 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar12 = puVar6;
  }
  local_468 = 1;
  local_460 = 0x3f800000;
  local_45c = 1;
  local_458 = 0;
  local_450 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_458,&local_418);
  *(undefined4 *)(puVar12 + 5) = local_468;
  *(undefined1 *)((longlong)puVar12 + 0x34) = local_45c;
  *(undefined4 *)(puVar12 + 6) = local_460;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar12 + 7,&local_458);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_458);
  *(undefined1 *)((longlong)puVar12 + 0x21) = 2;
  lVar7 = SImage::FArguments::FArguments(local_2f8);
  local_368 = (undefined4)local_398;
  uStack_364 = local_398._4_4_;
  uStack_360 = uStack_390;
  uStack_35c = uStack_38c;
  uVar8 = FUN_1417dd6e0(&local_478,param_1,&local_368);
  local_448 = 0;
  local_440 = 1;
  local_438 = 0;
  local_430 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_438,uVar8);
  *(undefined8 *)(lVar7 + 0x108) = local_448;
  *(undefined1 *)(lVar7 + 0x110) = local_440;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x118,&local_438);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_438);
  if (local_470 != 0) {
    if (local_478 == (longlong *)0x0) goto LAB_14197b5a6;
    (**(code **)(*local_478 + 0x28))(local_478,0);
    if (local_478 != (longlong *)0x0) {
      local_478 = (longlong *)FMemory::Realloc(local_478,0,0);
    }
    local_470 = 0;
  }
  if (local_478 != (longlong *)0x0) {
    FMemory::Free(local_478);
  }
LAB_14197b5a6:
  FUN_140692440(lVar7 + 0x128,&local_3e0);
  *(undefined1 *)(lVar7 + 0x150) = local_3b8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x158,&local_3b0);
  plVar9 = (longlong *)FUN_140c61c00();
  plVar11 = plVar9 + 2;
  local_358 = plVar11;
  local_350 = plVar9;
  FUN_14044f790(&local_358,plVar11);
  local_4c8 = 0x278;
  SWidget::SetDebugInfo
            (plVar11,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
             ,0x95);
  local_4b8 = *(undefined4 *)(lVar7 + 0x90);
  local_488 = lVar7 + 0xf8;
  local_4a0 = lVar7 + 0xe8;
  local_490 = *(undefined1 *)(lVar7 + 0xf1);
  local_4a8 = lVar7 + 200;
  local_4b0 = lVar7 + 0x98;
  local_498 = *(undefined1 *)(lVar7 + 0xf0);
  local_4c0 = lVar7 + 0x78;
  local_4c8 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar11,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  SImage::Construct(plVar11,lVar7);
  if (((char)plVar9[5] < '\0') || (cVar4 = (**(code **)(*plVar11 + 0x1e8))(plVar11), cVar4 != '\0'))
  {
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
  local_408 = *(undefined4 *)(param_3 + 0x200);
  uStack_404 = *(undefined4 *)(param_3 + 0x204);
  uStack_400 = *(undefined4 *)(param_3 + 0x208);
  uStack_3fc = *(undefined4 *)(param_3 + 0x20c);
  local_3f8 = *(undefined1 *)(param_3 + 0x210);
  puVar6 = (undefined8 *)0x0;
  local_3f0 = 0;
  local_3e8 = 0;
  local_388 = plVar11;
  local_380 = plVar9;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_3f0,param_3 + 0x218);
  puVar10 = (undefined8 *)operator_new(0x88);
  if (puVar10 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar10);
    *puVar10 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar6 = puVar10;
  }
  lVar7 = SVerticalBox::FSlot::AutoHeight(puVar6);
  *(undefined4 *)(lVar7 + 0x48) = local_408;
  *(undefined4 *)(lVar7 + 0x4c) = uStack_404;
  *(undefined4 *)(lVar7 + 0x50) = uStack_400;
  *(undefined4 *)(lVar7 + 0x54) = uStack_3fc;
  *(undefined1 *)(lVar7 + 0x58) = local_3f8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x60,&local_3f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3f0);
  *(undefined1 *)(lVar7 + 0x21) = 2;
  uVar8 = FUN_140692760(lVar7,&local_388);
  lVar7 = SCanvas::FArguments::FArguments(local_178);
  plVar11 = (longlong *)(lVar7 + 0x108);
  iVar3 = *(int *)(lVar7 + 0x110);
  *(int *)(lVar7 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar7 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar3);
  }
  *(undefined8 *)(*plVar11 + (longlong)iVar3 * 8) = uVar8;
  uVar8 = FUN_140692760(puVar12,&local_378);
  iVar3 = *(int *)(lVar7 + 0x110);
  *(int *)(lVar7 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar7 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar3);
  }
  *(undefined8 *)(*plVar11 + (longlong)iVar3 * 8) = uVar8;
  plVar11 = (longlong *)operator_new(0x248);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_144044b58;
    if (plVar11 != (longlong *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  plVar1 = plVar11 + 2;
  local_340 = plVar1;
  local_338 = plVar11;
  FUN_14044f790(&local_340,plVar1);
  local_4c8 = 0x238;
  SWidget::SetDebugInfo
            (plVar1,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SExpandableArea.cpp"
             ,0x8f);
  local_4b8 = *(undefined4 *)(lVar7 + 0x90);
  local_488 = lVar7 + 0xf8;
  local_4a0 = lVar7 + 0xe8;
  local_490 = *(undefined1 *)(lVar7 + 0xf1);
  local_4a8 = lVar7 + 200;
  local_4b0 = lVar7 + 0x98;
  local_498 = *(undefined1 *)(lVar7 + 0xf0);
  local_4c0 = lVar7 + 0x78;
  local_4c8 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  SHorizontalBox::Construct(plVar1,lVar7);
  if (((char)plVar11[5] < '\0') || (cVar4 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar5;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar11 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    LOCK();
    plVar1 = plVar11 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_178);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
    LOCK();
    plVar11 = plVar9 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_190);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1a0);
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_1b0 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar2 = (int *)((longlong)local_1b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1b0 + 8))(local_1b0,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1e0);
  FUN_140456c70(local_2f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3b0);
  plVar11 = plStack_3c0;
  if (plStack_3c0 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_3c0 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_3c0)(plStack_3c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_3c0 + 8))(plStack_3c0,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_418);
  plVar11 = (longlong *)local_428[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar11 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14197bb40 FUN_14197bb40 body=3622 status=ok
// SIG undefined FUN_14197bb40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14197bb40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined1 auStack_818 [32];
  longlong local_7f8;
  longlong local_7f0;
  undefined4 local_7e8;
  longlong local_7e0;
  longlong local_7d8;
  longlong local_7d0;
  undefined1 local_7c8;
  undefined1 local_7c0;
  longlong local_7b8;
  undefined1 local_7a8 [16];
  code *local_798;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  code *local_788;
  longlong *plStack_780;
  int local_778;
  longlong *local_770;
  longlong *local_768;
  undefined8 local_760;
  longlong *local_758;
  undefined4 local_750;
  undefined4 local_748;
  undefined1 local_744;
  undefined8 local_740;
  undefined4 local_738;
  longlong *local_730;
  longlong *local_728;
  undefined1 *local_720;
  longlong local_718;
  undefined4 local_710;
  undefined1 local_70c;
  undefined8 local_708;
  undefined4 local_700;
  undefined1 local_6f8;
  undefined1 local_6f7;
  undefined8 local_6f0;
  undefined4 local_6e8;
  undefined1 local_6e0;
  undefined1 local_6df;
  undefined8 local_6d8;
  undefined4 local_6d0;
  longlong *local_6c8;
  longlong *local_6c0;
  longlong *local_6b8;
  longlong *local_6b0;
  longlong *local_6a8;
  longlong *local_6a0;
  undefined8 local_698;
  longlong *local_690;
  undefined8 local_688;
  longlong *local_680;
  longlong local_678;
  undefined1 local_670;
  undefined8 local_668;
  undefined4 local_660;
  longlong local_658;
  undefined1 local_650;
  undefined8 local_648;
  undefined4 local_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined1 local_628;
  undefined8 local_620;
  undefined4 local_618;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined1 local_5e8 [8];
  longlong *local_5e0;
  longlong *local_5d8;
  longlong *local_5d0;
  longlong *local_5c0;
  longlong *local_5b8;
  longlong *local_5a8;
  longlong *local_5a0;
  undefined1 local_588 [280];
  undefined1 local_470 [48];
  longlong *local_440;
  undefined1 local_430 [16];
  undefined1 local_420 [24];
  undefined1 local_408 [280];
  undefined1 local_2f0 [48];
  longlong *local_2c0;
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [24];
  undefined1 local_288 [264];
  longlong local_180;
  undefined1 local_168 [264];
  longlong local_60;
  ulonglong local_48;
  
  uVar5 = DAT_1464b9eeb;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_818;
  local_6e0 = DAT_1464b9eeb;
  local_788 = FUN_141984470;
  lVar17 = *(longlong *)(param_1 + 0x380) + 0x1a0;
  uStack_5fc = (undefined4)((ulonglong)plStack_780 >> 0x20);
  plStack_780 = (longlong *)((ulonglong)plStack_780 & 0xffffffff00000000);
  local_608 = 0x41984470;
  uStack_604 = 1;
  uStack_600 = 0;
  local_768 = (longlong *)0x0;
  local_650 = 1;
  local_648 = 0;
  local_640 = 0;
  local_6df = 1;
  local_6d8 = 0;
  local_6d0 = 0;
  local_718 = param_1;
  local_658 = lVar17;
  lVar8 = SImage::FArguments::FArguments(local_408);
  *(undefined1 *)(lVar8 + 0x78) = uVar5;
  *(undefined1 *)(lVar8 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x80,&local_6d8);
  lVar8 = FUN_14187ca80(lVar8,param_1,&local_608);
  *(longlong *)(lVar8 + 0x108) = lVar17;
  *(undefined1 *)(lVar8 + 0x110) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x118,&local_648);
  plVar9 = (longlong *)FUN_140c61c00();
  plVar14 = plVar9 + 2;
  local_5d8 = plVar14;
  local_5d0 = plVar9;
  FUN_14044f790(&local_5d8,plVar14);
  local_7f8 = 0x278;
  SWidget::SetDebugInfo
            (plVar14,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0x13e);
  local_7e8 = *(undefined4 *)(lVar8 + 0x90);
  local_7b8 = lVar8 + 0xf8;
  local_7d0 = lVar8 + 0xe8;
  local_7c0 = *(undefined1 *)(lVar8 + 0xf1);
  local_7d8 = lVar8 + 200;
  local_7e0 = lVar8 + 0x98;
  local_7c8 = *(undefined1 *)(lVar8 + 0xf0);
  local_7f0 = lVar8 + 0x78;
  local_7f8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar14,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  SImage::Construct(plVar14,lVar8);
  if (((char)plVar9[5] < '\0') || (cVar6 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar7;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  uVar5 = DAT_1464b9eeb;
  local_6f8 = DAT_1464b9eeb;
  local_798 = SScrollBox::GetStartShadowOpacity;
  lVar17 = *(longlong *)(param_1 + 0x380) + 0x118;
  uStack_790 = 0;
  local_5f8 = 0x41985410;
  uStack_5f4 = 1;
  uStack_5f0 = 0;
  uStack_5ec = uStack_78c;
  local_670 = 1;
  local_668 = 0;
  local_660 = 0;
  local_6f7 = 1;
  local_6f0 = 0;
  local_6e8 = 0;
  local_6b8 = plVar14;
  local_6b0 = plVar9;
  local_678 = lVar17;
  lVar8 = SImage::FArguments::FArguments(local_588);
  *(undefined1 *)(lVar8 + 0x78) = uVar5;
  *(undefined1 *)(lVar8 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x80,&local_6f0);
  lVar8 = FUN_14187ca80(lVar8,param_1,&local_5f8);
  *(longlong *)(lVar8 + 0x108) = lVar17;
  *(undefined1 *)(lVar8 + 0x110) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x118,&local_668);
  plVar10 = (longlong *)FUN_140c61c00();
  plVar14 = plVar10 + 2;
  local_5c0 = plVar14;
  local_5b8 = plVar10;
  FUN_14044f790(&local_5c0,plVar14);
  local_7f8 = 0x278;
  SWidget::SetDebugInfo
            (plVar14,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0x133);
  local_7e8 = *(undefined4 *)(lVar8 + 0x90);
  local_7b8 = lVar8 + 0xf8;
  local_7d0 = lVar8 + 0xe8;
  local_7c0 = *(undefined1 *)(lVar8 + 0xf1);
  local_7d8 = lVar8 + 200;
  local_7e0 = lVar8 + 0x98;
  local_7c8 = *(undefined1 *)(lVar8 + 0xf0);
  local_7f0 = lVar8 + 0x78;
  local_7f8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar14,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  SImage::Construct(plVar14,lVar8);
  if (((char)plVar10[5] < '\0') || (cVar6 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar6 != '\0')
     ) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar7;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x300);
  local_788 = *(code **)(param_1 + 0x2f8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar15 = (undefined8 *)0x0;
  local_710 = 0x3f800000;
  local_70c = 1;
  local_708 = 0;
  local_700 = 0;
  plStack_780 = plVar4;
  local_6c8 = plVar14;
  local_6c0 = plVar10;
  puVar11 = (undefined8 *)operator_new(0x50);
  puVar18 = puVar15;
  if (puVar11 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar11);
    *puVar11 = &PTR_FUN_1444d5278;
    *(undefined4 *)(puVar11 + 4) = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    *(undefined1 *)(puVar11 + 7) = 1;
    puVar11[8] = 0;
    *(undefined4 *)(puVar11 + 9) = 0;
    puVar18 = puVar11;
  }
  *(undefined2 *)((longlong)puVar18 + 0x24) = 3;
  puVar12 = (undefined8 *)operator_new(0x50);
  puVar11 = puVar15;
  if (puVar12 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar12);
    *puVar12 = &PTR_FUN_1444d5278;
    *(undefined4 *)(puVar12 + 4) = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    *(undefined1 *)(puVar12 + 7) = 1;
    puVar12[8] = 0;
    *(undefined4 *)(puVar12 + 9) = 0;
    puVar11 = puVar12;
  }
  local_638 = 0;
  uStack_630 = 0x3f800000;
  *(undefined2 *)((longlong)puVar11 + 0x24) = 1;
  local_628 = 1;
  local_620 = 0;
  local_618 = 0;
  puVar12 = (undefined8 *)operator_new(0x50);
  if (puVar12 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar12);
    *(undefined4 *)(puVar12 + 4) = 0;
    *puVar12 = &PTR_FUN_1444d5278;
    *(undefined2 *)((longlong)puVar12 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar12 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar12 + 0x34) = 0;
    *(undefined1 *)(puVar12 + 7) = 1;
    puVar12[8] = 0;
    *(undefined4 *)(puVar12 + 9) = 0;
    puVar15 = puVar12;
  }
  *(undefined1 *)(puVar15 + 7) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0x3f800000;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar15 + 8,&local_620);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_620);
  local_798 = (code *)FUN_140801a00(puVar15,&local_788);
  lVar8 = SOverlay::FArguments::FArguments(local_168);
  plVar14 = (longlong *)(lVar8 + 0x108);
  local_778 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = local_778 + 1;
  if (*(int *)(lVar8 + 0x114) < local_778 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,local_778);
  }
  *(code **)(*plVar14 + (longlong)local_778 * 8) = local_798;
  local_798 = (code *)FUN_140801a00(puVar11,&local_6c8);
  iVar3 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar3);
  }
  *(code **)(*plVar14 + (longlong)iVar3 * 8) = local_798;
  uVar13 = FUN_140801a00(puVar18,&local_6b8);
  iVar3 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar3);
  }
  *(undefined8 *)(*plVar14 + (longlong)iVar3 * 8) = uVar13;
  plVar14 = (longlong *)operator_new(0x240);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_FUN_1440f90d0;
    if (plVar14 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4610();
    }
  }
  plVar16 = plVar14 + 2;
  local_5a8 = plVar16;
  local_5a0 = plVar14;
  FUN_14044f790(&local_5a8,plVar16);
  local_7f8 = 0x230;
  SWidget::SetDebugInfo
            (plVar16,"SOverlay",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0x125);
  local_7e8 = *(undefined4 *)(lVar8 + 0x90);
  local_7b8 = lVar8 + 0xf8;
  local_7d0 = lVar8 + 0xe8;
  local_7c0 = *(undefined1 *)(lVar8 + 0xf1);
  local_7d8 = lVar8 + 200;
  local_7e0 = lVar8 + 0x98;
  local_7c8 = *(undefined1 *)(lVar8 + 0xf0);
  local_7f0 = lVar8 + 0x78;
  local_7f8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar16,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  SOverlay::Construct(plVar16,lVar8);
  if (((char)plVar14[5] < '\0') || (cVar6 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar6 != '\0')
     ) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar7;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_6a8 = plVar16;
  local_6a0 = plVar14;
  puVar15 = (undefined8 *)operator_new(0x88);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar15);
    *puVar15 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  local_750 = 1;
  local_748 = 0x3f800000;
  local_744 = 1;
  local_740 = 0;
  local_738 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_740,&local_708);
  *(undefined4 *)(puVar15 + 5) = local_750;
  *(undefined1 *)((longlong)puVar15 + 0x34) = local_744;
  *(undefined4 *)(puVar15 + 6) = local_748;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar15 + 7,&local_740);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_740);
  local_798 = (code *)FUN_1417f9c30(puVar15,&local_6a8);
  lVar8 = SCanvas::FArguments::FArguments(local_288);
  iVar3 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 0x108,iVar3);
  }
  *(code **)(*(longlong *)(lVar8 + 0x108) + (longlong)iVar3 * 8) = local_798;
  plVar16 = (longlong *)operator_new(0x248);
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_DestroyObject_144d503e8;
    if (plVar16 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4670();
    }
  }
  plVar1 = plVar16 + 2;
  local_730 = plVar1;
  local_728 = plVar16;
  FUN_14044f790(&local_730,plVar1);
  local_720 = local_7a8;
  local_7f8 = 0x238;
  SWidget::SetDebugInfo
            (plVar1,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0x120);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_760 = 0;
  local_770 = plVar1;
  local_758 = plVar16;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_768,&local_758);
  plVar16 = local_758;
  if (local_758 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_758 + 1;
    lVar17 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_758)(local_758);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_758 + 8))(local_758,1);
      }
    }
  }
  puVar15 = (undefined8 *)FUN_1417fd340(&local_730,local_5e8,lVar8);
  lVar8 = local_718;
  plVar16 = (longlong *)puVar15[1];
  local_698 = *puVar15;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_690 = plVar16;
  TSlotBase<FSimpleSlot>::operator[](local_718 + 0x218,&local_698);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar16 + 1;
    lVar17 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  if (local_5e0 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_5e0 + 1;
    lVar17 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_5e0)(local_5e0);
      LOCK();
      piVar2 = (int *)((longlong)local_5e0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5e0 + 8))(local_5e0,1);
      }
    }
  }
  plVar16 = local_728;
  if (local_728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_728 + 1;
    lVar17 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_728)(local_728);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_728 + 8))(local_728,1);
      }
    }
  }
  if (local_180 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_288);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar14 + 1;
    lVar17 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
    plVar16 = plVar14 + 1;
    lVar17 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
  if (local_60 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_168);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_708);
  plVar14 = plStack_780;
  if (plStack_780 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_780 + 1;
    lVar17 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plStack_780)(plStack_780);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_780 + 8))(plStack_780,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar4 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar10 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
    LOCK();
    plVar14 = plVar10 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
    LOCK();
    plVar14 = plVar10 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_420);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_430);
  if (local_440 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_440 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_440)(local_440);
      LOCK();
      piVar2 = (int *)((longlong)local_440 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_440 + 8))(local_440,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_470);
  FUN_140456c70(local_588);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_668);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar9 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
    LOCK();
    plVar14 = plVar9 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
    LOCK();
    plVar14 = plVar9 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2b0);
  if (local_2c0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_2c0 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_2c0)(local_2c0);
      LOCK();
      piVar2 = (int *)((longlong)local_2c0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_2c0 + 8))(local_2c0,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2f0);
  FUN_140456c70(local_408);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_648);
  if ((*(byte *)(lVar8 + 0x438) & 2) == 0) {
    plVar14 = *(longlong **)(lVar8 + 0x310);
    local_688 = *(undefined8 *)(lVar8 + 0x308);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    local_680 = plVar14;
    uVar13 = SVerticalBox::AddSlot(local_770);
    uVar13 = SVerticalBox::FSlot::AutoHeight(uVar13);
    FUN_1417f9c30(uVar13,&local_688);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar14 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  plVar14 = local_768;
  if (local_768 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_768 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_768)(local_768);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_768 + 8))(local_768,1);
      }
    }
  }
  return;
}



// FUNCTION 14197c970 FUN_14197c970 body=11024 status=ok
// SIG undefined FUN_14197c970(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14197c970(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  char *pcVar19;
  longlong lVar20;
  int iVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_2a98 [32];
  undefined1 *local_2a78;
  undefined1 *local_2a70;
  undefined1 *local_2a68;
  longlong local_2a60;
  longlong local_2a58;
  longlong local_2a50;
  undefined1 local_2a48;
  undefined1 local_2a40;
  longlong local_2a38;
  undefined1 local_2a28;
  undefined1 local_2a27;
  undefined1 local_2a26;
  undefined1 local_2a25;
  undefined1 local_2a24;
  undefined1 local_2a23;
  undefined1 local_2a22;
  undefined1 local_2a21;
  undefined1 local_2a20;
  undefined1 local_2a1f;
  undefined1 local_2a1e;
  undefined1 local_2a1d;
  undefined1 local_2a1c;
  undefined1 local_2a1b;
  undefined1 local_2a1a;
  undefined1 local_2a19;
  undefined1 local_2a18;
  undefined1 local_2a17;
  undefined1 local_2a16;
  undefined1 local_2a15;
  int local_2a14;
  undefined8 local_2a08;
  undefined4 uStack_2a00;
  undefined4 uStack_29fc;
  longlong local_29f8;
  longlong local_29f0;
  longlong *local_29e8;
  undefined8 local_29e0;
  longlong *plStack_29d8;
  undefined8 local_29c8;
  undefined4 uStack_29c0;
  undefined4 uStack_29bc;
  longlong *local_29b8;
  int local_29b0;
  longlong *local_29a8;
  int local_29a0;
  longlong local_2998;
  longlong *local_2990;
  longlong *local_2988;
  longlong *local_2980;
  undefined8 local_2978;
  undefined8 local_2970;
  undefined4 local_2968;
  undefined4 uStack_2964;
  undefined4 uStack_2960;
  undefined4 uStack_295c;
  undefined4 local_2958;
  undefined4 uStack_2954;
  undefined4 uStack_2950;
  undefined4 uStack_294c;
  undefined8 local_2948;
  longlong *local_2940;
  undefined8 local_2938;
  undefined4 local_2930;
  undefined1 local_292c;
  undefined2 local_2928;
  undefined8 local_2920;
  undefined4 local_2918;
  undefined4 local_2910;
  undefined4 local_2908;
  undefined1 local_2904;
  undefined8 local_2900;
  undefined4 local_28f8;
  longlong *local_28f0;
  longlong *local_28e8;
  undefined1 *local_28e0;
  undefined8 local_28d8;
  undefined4 local_28d0;
  undefined8 local_28c8;
  undefined4 uStack_28c0;
  undefined4 uStack_28bc;
  undefined4 local_28b8;
  undefined1 local_28b4;
  longlong local_28b0;
  undefined4 local_28a8;
  longlong *local_28a0;
  longlong *local_2898;
  undefined1 *local_2890;
  undefined8 local_2888;
  undefined1 local_2880;
  undefined8 local_2878;
  undefined4 local_2870;
  undefined1 local_2868 [24];
  undefined1 local_2850 [24];
  longlong *local_2838;
  int local_2830;
  undefined1 local_2828;
  undefined1 local_2827;
  undefined1 local_2826;
  undefined1 local_2825;
  longlong *local_2818;
  undefined8 local_2810;
  undefined4 local_2808;
  longlong *local_2800;
  longlong *local_27f8;
  undefined1 local_27f0;
  undefined1 local_27ef;
  undefined8 local_27e8;
  undefined4 local_27e0;
  longlong local_27d8;
  longlong local_27d0;
  undefined1 *local_27c8;
  longlong local_27c0;
  longlong local_27b8;
  undefined1 *local_27b0;
  undefined4 local_27a8;
  undefined1 local_27a4;
  undefined8 local_27a0;
  undefined4 local_2798;
  longlong local_2790;
  longlong local_2788;
  undefined1 *local_2780;
  longlong local_2778;
  longlong local_2770;
  undefined1 *local_2768;
  longlong *local_2760;
  longlong *local_2758;
  longlong local_2750;
  longlong local_2748;
  undefined1 *local_2740;
  longlong local_2738;
  longlong local_2730;
  undefined1 *local_2728;
  longlong *local_2720;
  longlong *local_2718;
  undefined1 *local_2710;
  longlong *local_2708;
  longlong *local_2700;
  undefined1 *local_26f8;
  longlong *local_26f0;
  longlong *local_26e8;
  undefined1 *local_26e0;
  undefined1 local_26d8 [24];
  undefined1 local_26c0;
  undefined8 local_26b8;
  undefined4 local_26b0;
  longlong *local_26a8;
  longlong *local_26a0;
  undefined1 *local_2698;
  longlong *local_2690;
  longlong *local_2688;
  undefined8 local_2680;
  longlong local_2678;
  longlong *local_2670;
  longlong *local_2668;
  undefined8 local_2660;
  longlong local_2658;
  undefined8 local_2650;
  longlong local_2648;
  undefined8 local_2640;
  longlong local_2638;
  longlong *local_2630;
  longlong *local_2628;
  longlong *local_2620;
  longlong *local_2618;
  longlong *local_2610;
  longlong *local_2608;
  undefined8 local_2600;
  longlong local_25f8;
  longlong *local_25f0;
  longlong *local_25e8;
  longlong *local_25e0;
  longlong *local_25d8;
  undefined1 local_25d0 [16];
  undefined1 local_25c0 [16];
  longlong *local_25b0;
  longlong *local_25a8;
  undefined1 local_25a0 [24];
  undefined1 local_2588;
  undefined8 local_2580;
  undefined4 local_2578;
  undefined1 local_2570 [24];
  undefined1 local_2558;
  undefined8 local_2550;
  undefined4 local_2548;
  undefined8 local_2540;
  longlong *local_2538;
  undefined8 local_2530;
  longlong local_2528;
  undefined8 local_2520;
  undefined8 local_2518;
  undefined4 local_2510;
  undefined4 uStack_250c;
  undefined4 uStack_2508;
  undefined4 uStack_2504;
  undefined4 local_2500;
  undefined4 uStack_24fc;
  undefined4 uStack_24f8;
  undefined4 uStack_24f4;
  undefined8 local_24f0;
  longlong *local_24e8;
  undefined8 local_24e0;
  undefined4 local_24d8;
  undefined1 local_24d4;
  undefined1 local_24d0;
  undefined8 local_24c8;
  undefined4 local_24c0;
  undefined8 local_24b8;
  undefined8 uStack_24b0;
  undefined1 local_24a8;
  undefined8 local_24a0;
  undefined4 local_2498;
  undefined4 local_2490;
  undefined4 uStack_248c;
  undefined4 uStack_2488;
  undefined4 uStack_2484;
  undefined1 local_2480;
  undefined8 local_2478;
  undefined4 local_2470;
  undefined8 local_2468;
  undefined8 uStack_2460;
  undefined1 local_2458;
  undefined8 local_2450;
  undefined4 local_2448;
  undefined8 local_2440;
  undefined8 uStack_2438;
  undefined1 local_2430;
  undefined8 local_2428;
  undefined4 local_2420;
  undefined4 local_2418;
  undefined4 uStack_2414;
  undefined4 uStack_2410;
  undefined4 uStack_240c;
  undefined1 local_2408;
  undefined8 local_2400;
  undefined4 local_23f8;
  undefined4 local_23f0;
  undefined4 uStack_23ec;
  undefined4 uStack_23e8;
  undefined4 uStack_23e4;
  undefined1 local_23e0;
  undefined8 local_23d8;
  undefined4 local_23d0;
  undefined4 local_23c8;
  undefined4 uStack_23c4;
  undefined4 uStack_23c0;
  undefined4 uStack_23bc;
  undefined1 local_23b8;
  undefined8 local_23b0;
  undefined4 local_23a8;
  undefined1 local_23a0 [8];
  longlong *local_2398;
  undefined4 local_2388;
  undefined4 uStack_2384;
  undefined4 uStack_2380;
  undefined4 uStack_237c;
  undefined4 local_2378;
  undefined4 uStack_2374;
  undefined4 uStack_2370;
  undefined4 uStack_236c;
  undefined4 local_2368;
  undefined4 uStack_2364;
  undefined4 uStack_2360;
  undefined4 uStack_235c;
  undefined4 local_2358;
  undefined4 uStack_2354;
  undefined4 uStack_2350;
  undefined4 uStack_234c;
  undefined1 local_2348 [8];
  longlong *local_2340;
  undefined1 local_2338 [8];
  undefined1 local_2330 [8];
  undefined1 local_2328 [16];
  undefined4 local_2318;
  undefined4 uStack_2314;
  undefined4 uStack_2310;
  undefined4 uStack_230c;
  undefined1 local_2308 [8];
  longlong *local_2300;
  undefined4 local_22f8;
  undefined4 uStack_22f4;
  undefined4 uStack_22f0;
  undefined4 uStack_22ec;
  undefined1 local_22e8 [8];
  longlong *local_22e0;
  longlong *local_22d8;
  longlong *local_22d0;
  longlong *local_22c0;
  longlong *local_22b8;
  longlong *local_22a8;
  longlong *local_22a0;
  longlong *local_2290;
  longlong *local_2288;
  longlong *local_2278;
  longlong *local_2270;
  undefined4 local_2258;
  undefined4 uStack_2254;
  undefined4 uStack_2250;
  undefined4 uStack_224c;
  undefined1 local_2248 [16];
  undefined4 local_2238;
  undefined4 uStack_2234;
  undefined4 uStack_2230;
  undefined4 uStack_222c;
  undefined4 local_2228;
  undefined4 uStack_2224;
  undefined4 uStack_2220;
  undefined4 uStack_221c;
  undefined1 local_2218 [8];
  longlong *local_2210;
  undefined1 local_2208 [8];
  longlong *local_2200;
  undefined1 local_21f8 [16];
  undefined1 local_21e8 [8];
  longlong *local_21e0;
  undefined1 local_21d8 [56];
  longlong *local_21a0;
  undefined1 local_2188 [56];
  longlong *local_2150;
  undefined8 local_2138;
  longlong *plStack_2130;
  undefined1 local_2128 [264];
  undefined1 local_2020 [96];
  undefined1 local_1fc0 [16];
  undefined1 local_1fb0 [17];
  undefined1 local_1f9f;
  undefined1 local_1f9d;
  undefined1 local_1f98 [280];
  undefined1 local_1e80 [48];
  longlong *local_1e50;
  undefined1 local_1e40 [16];
  undefined1 local_1e30 [24];
  undefined1 local_1e18 [264];
  longlong local_1d10;
  undefined1 local_1cf8 [264];
  longlong local_1bf0;
  undefined1 local_1bd8 [264];
  longlong local_1ad0;
  undefined1 local_1ab8 [264];
  longlong local_19b0;
  undefined1 local_1998 [288];
  undefined1 local_1878 [384];
  undefined1 local_16f8 [496];
  undefined1 local_1508 [496];
  undefined1 local_1318 [496];
  undefined1 local_1128 [496];
  undefined1 local_f38 [496];
  undefined1 local_d48 [728];
  undefined1 local_a70 [760];
  undefined1 local_778 [912];
  undefined1 local_3e8 [912];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2a98;
  local_28c8 = (code *)(param_1 + 0x4e0);
  local_2a14 = 0;
  local_29f8 = param_1;
  local_29f0 = param_3;
  local_29e8 = param_2;
  TBaseDelegate<FSlateBrush_const_*>::operator=(local_28c8,param_3 + 0x298);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4f0,param_3 + 0x2d8);
  FText::operator=(param_1 + 0x500,param_3 + 0x2e8);
  *(undefined1 *)(param_1 + 0x518) = *(undefined1 *)(param_3 + 0x300);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x520,param_3 + 0x308);
  local_28e8 = (longlong *)operator_new(0x248);
  if (local_28e8 != (longlong *)0x0) {
    *(undefined4 *)(local_28e8 + 1) = 1;
    *(undefined4 *)((longlong)local_28e8 + 0xc) = 1;
    *local_28e8 = (longlong)&PTR_FUN_144044b58;
    if (local_28e8 != (longlong *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  plVar14 = local_28e8 + 2;
  local_28f0 = plVar14;
  FUN_14044f790(&local_28f0,plVar14);
  local_28e0 = &local_2a24;
  local_2a78 = (undefined1 *)0x238;
  SWidget::SetDebugInfo
            (plVar14,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x16e);
  uVar10 = SCanvas::FArguments::FArguments(local_1e18);
  FUN_140693150(&local_28f0,param_2,uVar10);
  plVar14 = local_28e8;
  if (local_28e8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_28e8 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_28e8)(local_28e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar21 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (**(code **)(*local_28e8 + 8))(local_28e8,1);
      }
    }
  }
  if (local_1d10 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1e18);
  lVar11 = SImage::FArguments::FArguments(local_1f98);
  *(undefined8 *)(lVar11 + 0x108) = *(undefined8 *)(param_3 + 0x1c8);
  *(undefined1 *)(lVar11 + 0x110) = *(undefined1 *)(param_3 + 0x1d0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x118,param_3 + 0x1d8);
  plVar12 = (longlong *)FUN_140c61c00();
  plVar14 = plVar12 + 2;
  local_22d8 = plVar14;
  local_22d0 = plVar12;
  FUN_14044f790(&local_22d8,plVar14);
  local_2a78 = (undefined1 *)0x278;
  SWidget::SetDebugInfo
            (plVar14,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x177);
  local_2a38 = lVar11 + 0xf8;
  local_2a50 = lVar11 + 0xe8;
  local_2a40 = *(undefined1 *)(lVar11 + 0xf1);
  local_2a58 = lVar11 + 200;
  local_2a60 = lVar11 + 0x98;
  local_2a48 = *(undefined1 *)(lVar11 + 0xf0);
  local_2a70 = (undefined1 *)(lVar11 + 0x78);
  local_2a78 = (undefined1 *)(lVar11 + 0x60);
  local_2a68 = (undefined1 *)CONCAT44(local_2a68._4_4_,*(undefined4 *)(lVar11 + 0x90));
  SWidget::SWidgetConstruct(plVar14,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  SImage::Construct(plVar14,lVar11);
  if (((char)plVar12[5] < '\0') || (cVar7 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar8;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  lVar11 = *param_2;
  local_2620 = plVar14;
  local_2618 = plVar12;
  puVar13 = (undefined8 *)operator_new(0x88);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar13);
    *puVar13 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  TPanelChildren<SOverlay::FOverlaySlot>::Add(lVar11 + 0x208,puVar13);
  FUN_1418475e0(lVar11,1);
  lVar11 = SVerticalBox::FSlot::AutoHeight(puVar13);
  plVar14 = (longlong *)0x0;
  local_2408 = 1;
  local_2400 = 0;
  local_23f8 = 0;
  local_2418 = 0x41200000;
  uStack_2414 = 0;
  uStack_2410 = 0;
  uStack_240c = 0;
  *(undefined1 *)(lVar11 + 0x58) = 1;
  *(undefined4 *)(lVar11 + 0x48) = 0x41200000;
  *(undefined4 *)(lVar11 + 0x4c) = 0;
  *(undefined4 *)(lVar11 + 0x50) = 0;
  *(undefined4 *)(lVar11 + 0x54) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x60,&local_2400);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2400);
  *(undefined2 *)(lVar11 + 0x20) = 0x201;
  FUN_140692760(lVar11,&local_2620);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar12 + 1;
    lVar11 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar21 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    plVar18 = plVar12 + 1;
    lVar11 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar21 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1e30);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1e40);
  if (local_1e50 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1e50 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_1e50)(local_1e50);
      LOCK();
      piVar1 = (int *)((longlong)local_1e50 + 0xc);
      iVar21 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (**(code **)(*local_1e50 + 8))(local_1e50,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1e80);
  FUN_140456c70(local_1f98);
  puVar13 = (undefined8 *)FUN_14193e860(param_3 + 0x138);
  local_2978 = *puVar13;
  local_2970 = puVar13[1];
  local_2968 = *(undefined4 *)(puVar13 + 2);
  uStack_2964 = *(undefined4 *)((longlong)puVar13 + 0x14);
  uStack_2960 = *(undefined4 *)(puVar13 + 3);
  uStack_295c = *(undefined4 *)((longlong)puVar13 + 0x1c);
  local_2958 = *(undefined4 *)(puVar13 + 4);
  uStack_2954 = *(undefined4 *)((longlong)puVar13 + 0x24);
  uStack_2950 = *(undefined4 *)(puVar13 + 5);
  uStack_294c = *(undefined4 *)((longlong)puVar13 + 0x2c);
  local_2948 = puVar13[6];
  local_2940 = (longlong *)puVar13[7];
  if (local_2940 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2940 + 1) = (int)local_2940[1] + 1;
    UNLOCK();
  }
  local_2938 = puVar13[8];
  local_2930 = *(undefined4 *)(puVar13 + 9);
  local_292c = *(undefined1 *)((longlong)puVar13 + 0x4c);
  cVar7 = FSlateFontInfo::HasValidFont(&local_2978);
  if (cVar7 == '\0') {
    if (((*(int *)(param_3 + 0x270) != 0) && (*(longlong **)(param_3 + 0x268) != (longlong *)0x0))
       && (cVar7 = (**(code **)(**(longlong **)(param_3 + 0x268) + 0x18))(), cVar7 != '\0')) {
      if (*(int *)(param_3 + 0x270) != 0) {
        plVar14 = *(longlong **)(param_3 + 0x268);
      }
      uVar9 = (**(code **)(*plVar14 + 0x38))();
      *(undefined1 *)(param_3 + 0x260) = uVar9;
    }
    plVar14 = DAT_1469eb140;
    lVar11 = *DAT_1469eb140;
    bVar22 = *(char *)(param_3 + 0x260) == '\0';
    if (bVar22) {
      puVar13 = (undefined8 *)FName::FName(local_2338,L"NotificationList.FontLight",1);
      puVar13 = (undefined8 *)(**(code **)(lVar11 + 0x78))(plVar14,local_21d8,*puVar13,0);
    }
    else {
      puVar13 = (undefined8 *)FName::FName(local_2330,L"NotificationList.FontBold",1);
      puVar13 = (undefined8 *)(**(code **)(lVar11 + 0x78))(plVar14,local_2188,*puVar13,0);
    }
    local_2978 = *puVar13;
    local_2970 = puVar13[1];
    puVar15 = puVar13 + 6;
    local_2968 = *(undefined4 *)(puVar13 + 2);
    uStack_2964 = *(undefined4 *)((longlong)puVar13 + 0x14);
    uStack_2960 = *(undefined4 *)(puVar13 + 3);
    uStack_295c = *(undefined4 *)((longlong)puVar13 + 0x1c);
    local_2958 = *(undefined4 *)(puVar13 + 4);
    uStack_2954 = *(undefined4 *)((longlong)puVar13 + 0x24);
    uStack_2950 = *(undefined4 *)(puVar13 + 5);
    uStack_294c = *(undefined4 *)((longlong)puVar13 + 0x2c);
    if (&local_2948 != puVar15) {
      local_2948 = *puVar15;
      *puVar15 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_2940,puVar13 + 7);
    }
    local_2938 = puVar13[8];
    local_2930 = *(undefined4 *)(puVar13 + 9);
    local_292c = *(undefined1 *)((longlong)puVar13 + 0x4c);
    if ((bVar22) && (local_21a0 != (longlong *)0x0)) {
      LOCK();
      plVar14 = local_21a0 + 1;
      lVar11 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_21a0)(local_21a0);
        LOCK();
        piVar1 = (int *)((longlong)local_21a0 + 0xc);
        iVar21 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*local_21a0 + 8))(local_21a0,1);
        }
      }
    }
    if ((!bVar22) && (local_2150 != (longlong *)0x0)) {
      LOCK();
      plVar14 = local_2150 + 1;
      lVar11 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_2150)(local_2150);
        LOCK();
        piVar1 = (int *)((longlong)local_2150 + 0xc);
        iVar21 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*local_2150 + 8))(local_2150,1);
        }
      }
    }
  }
  plVar14 = (longlong *)operator_new(0x248);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    local_2980 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_DestroyObject_144d503e8;
    local_2980 = plVar14;
    if (plVar14 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4670();
    }
  }
  puVar13 = (undefined8 *)0x0;
  plVar12 = plVar14 + 2;
  local_22c0 = plVar12;
  local_22b8 = plVar14;
  FUN_14044f790(&local_22c0,plVar12);
  local_2a78 = (undefined1 *)0x238;
  SWidget::SetDebugInfo
            (plVar12,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x186);
  lVar11 = SCanvas::FArguments::FArguments(local_1cf8);
  local_2a38 = lVar11 + 0xf8;
  local_2a40 = *(undefined1 *)(lVar11 + 0xf1);
  local_2a50 = lVar11 + 0xe8;
  local_2a58 = lVar11 + 200;
  local_2a60 = lVar11 + 0x98;
  local_2a48 = *(undefined1 *)(lVar11 + 0xf0);
  local_2a70 = (undefined1 *)(lVar11 + 0x78);
  local_2a78 = (undefined1 *)(lVar11 + 0x60);
  local_2a68 = (undefined1 *)CONCAT44(local_2a68._4_4_,*(undefined4 *)(lVar11 + 0x90));
  SWidget::SWidgetConstruct(plVar12,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  SHorizontalBox::Construct(plVar12,lVar11);
  if (((char)plVar14[5] < '\0') || (cVar7 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar8;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar18 = plVar14 + 1;
    lVar11 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar21 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (local_1bf0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1cf8);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  lVar11 = *local_29e8;
  local_2610 = plVar12;
  local_2608 = plVar14;
  puVar15 = (undefined8 *)operator_new(0x88);
  if (puVar15 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar15);
    *puVar15 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar13 = puVar15;
  }
  TPanelChildren<SOverlay::FOverlaySlot>::Add(lVar11 + 0x208,puVar13);
  FUN_1418475e0(lVar11,1);
  lVar11 = SVerticalBox::FSlot::AutoHeight(puVar13);
  local_23e0 = 1;
  local_23f0 = 0x41200000;
  uStack_23ec = 0;
  uStack_23e8 = 0x41700000;
  uStack_23e4 = 0;
  local_23d8 = 0;
  local_23d0 = 0;
  *(undefined4 *)(lVar11 + 0x48) = 0x41200000;
  *(undefined4 *)(lVar11 + 0x4c) = 0;
  *(undefined4 *)(lVar11 + 0x50) = 0x41700000;
  *(undefined4 *)(lVar11 + 0x54) = 0;
  *(undefined1 *)(lVar11 + 0x58) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x60,&local_23d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_23d8);
  *(undefined2 *)(lVar11 + 0x20) = 0x201;
  FUN_140692760(lVar11,&local_2610);
  lVar11 = local_29f8;
  bVar22 = *(float *)(param_3 + 0x278) != -1.0;
  local_2520 = local_2978;
  local_2518 = local_2970;
  local_24f0 = local_2948;
  local_27ef = 1;
  local_27e8 = 0;
  local_27e0 = 0;
  local_24e8 = local_2940;
  local_2510 = local_2968;
  uStack_250c = uStack_2964;
  uStack_2508 = uStack_2960;
  uStack_2504 = uStack_295c;
  local_2500 = local_2958;
  uStack_24fc = uStack_2954;
  uStack_24f8 = uStack_2950;
  uStack_24f4 = uStack_294c;
  if (local_2940 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2940 + 1) = (int)local_2940[1] + 1;
    UNLOCK();
  }
  local_24e0 = local_2938;
  local_24d8 = local_2930;
  local_24d4 = local_292c;
  local_24d0 = 1;
  local_24c8 = 0;
  local_24c0 = 0;
  uVar23 = *(undefined4 *)(local_29f0 + 0x278);
  local_28b4 = 1;
  local_28b0 = 0;
  local_28a8 = 0;
  local_28b8 = uVar23;
  local_27f0 = bVar22;
  lVar16 = STextBlock::FArguments::FArguments(local_778);
  FText::operator=(lVar16 + 0x108,lVar11 + 0x300);
  *(undefined1 *)(lVar16 + 0x120) = *(undefined1 *)(lVar11 + 0x318);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x128,lVar11 + 800);
  FUN_1417f9360(lVar16 + 0x140,&local_2520);
  *(undefined1 *)(lVar16 + 400) = local_24d0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x198,&local_24c8);
  *(bool *)(lVar16 + 0x2c0) = bVar22;
  *(undefined1 *)(lVar16 + 0x2c1) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x2c8,&local_27e8);
  local_2898 = (longlong *)operator_new(0x660);
  if (local_2898 == (longlong *)0x0) {
    local_2898 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(local_2898 + 1) = 1;
    *(undefined4 *)((longlong)local_2898 + 0xc) = 1;
    *local_2898 = (longlong)&PTR_FUN_144043520;
    if (local_2898 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  local_28a0 = local_2898 + 2;
  FUN_14044f790(&local_28a0);
  local_2890 = &local_2a23;
  local_2a78 = (undefined1 *)0x650;
  SWidget::SetDebugInfo
            (local_28a0,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x198);
  uVar10 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_28a0,lVar11 + 0x378);
  puVar13 = (undefined8 *)FUN_140693250(uVar10,local_2348,lVar16);
  local_2600 = *puVar13;
  local_25f8 = puVar13[1];
  if (local_25f8 != 0) {
    LOCK();
    *(int *)(local_25f8 + 8) = *(int *)(local_25f8 + 8) + 1;
    UNLOCK();
    uVar23 = local_28b8;
  }
  lVar11 = FUN_14068f180(local_16f8);
  plVar18 = (longlong *)(lVar11 + 0x150);
  *(undefined4 *)(lVar11 + 0x148) = uVar23;
  *(undefined1 *)(lVar11 + 0x14c) = 1;
  if (((&local_28b0 != plVar18) && (*(int *)(lVar11 + 0x158) != 0)) &&
     (plVar17 = (longlong *)*plVar18, plVar17 != (longlong *)0x0)) {
    (**(code **)(*plVar17 + 0x28))(plVar17,0);
    if (*plVar18 != 0) {
      lVar16 = FMemory::Realloc(*plVar18,0,0);
      *plVar18 = lVar16;
    }
    *(undefined4 *)(lVar11 + 0x158) = 0;
  }
  plVar17 = (longlong *)FUN_1418cc2a0();
  plVar18 = plVar17 + 2;
  local_22a8 = plVar18;
  local_22a0 = plVar17;
  FUN_14044f790(&local_22a8,plVar18);
  local_2a78 = (undefined1 *)0x310;
  SWidget::SetDebugInfo
            (plVar18,&DAT_144044860,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x195);
  lVar11 = FUN_140692660(lVar11,&local_2600);
  local_2a38 = lVar11 + 0xf8;
  local_2a40 = *(undefined1 *)(lVar11 + 0xf1);
  local_2a50 = lVar11 + 0xe8;
  local_2a58 = lVar11 + 200;
  local_2a60 = lVar11 + 0x98;
  local_2a48 = *(undefined1 *)(lVar11 + 0xf0);
  local_2a70 = (undefined1 *)(lVar11 + 0x78);
  local_2a78 = (undefined1 *)(lVar11 + 0x60);
  local_2a68 = (undefined1 *)CONCAT44(local_2a68._4_4_,*(undefined4 *)(lVar11 + 0x90));
  SWidget::SWidgetConstruct(plVar18,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_141972160(plVar18,lVar11);
  if (((char)plVar17[5] < '\0') || (cVar7 = (**(code **)(*plVar18 + 0x1e8))(plVar18), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar17 + 0x29) = *(byte *)((longlong)plVar17 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar17 + 0x29) = *(byte *)((longlong)plVar17 + 0x29) | bVar8;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
  }
  local_25f0 = plVar18;
  local_25e8 = plVar17;
  puVar13 = (undefined8 *)operator_new(0x88);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar13);
    *puVar13 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  TPanelChildren<SOverlay::FOverlaySlot>::Add(plVar14 + 0x43,puVar13);
  FUN_1418475e0(plVar12,1);
  uVar10 = SVerticalBox::FSlot::AutoHeight(puVar13);
  FUN_1417f9c30(uVar10,&local_25f0);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar17 + 1;
    lVar11 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar21 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
    LOCK();
    plVar18 = plVar17 + 1;
    lVar11 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar21 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
  }
  FUN_140690ea0(local_16f8);
  if (local_2340 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_2340 + 1;
    lVar11 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_2340)(local_2340);
      LOCK();
      piVar1 = (int *)((longlong)local_2340 + 0xc);
      iVar21 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (**(code **)(*local_2340 + 8))(local_2340,1);
      }
    }
  }
  plVar18 = local_2898;
  if (local_2898 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_2898 + 1;
    lVar11 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_2898)(local_2898);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar21 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18,1);
      }
    }
  }
  FUN_140691150(local_778);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_24c8);
  plVar18 = local_24e8;
  if (local_24e8 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_24e8 + 1;
    lVar11 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_24e8)(local_24e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar21 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (**(code **)(*local_24e8 + 8))(local_24e8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_27e8);
  plVar18 = (longlong *)operator_new(0x248);
  if (plVar18 == (longlong *)0x0) {
    plVar18 = (longlong *)0x0;
    local_2988 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar18 + 1) = 1;
    *(undefined4 *)((longlong)plVar18 + 0xc) = 1;
    *plVar18 = (longlong)&PTR_FUN_144044b58;
    local_2988 = plVar18;
    if (plVar18 != (longlong *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  plVar17 = plVar18 + 2;
  local_2818 = plVar17;
  local_2290 = plVar17;
  local_2288 = plVar18;
  FUN_14044f790(&local_2290,plVar17);
  local_2a78 = (undefined1 *)0x238;
  SWidget::SetDebugInfo
            (plVar17,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x19f);
  lVar11 = SCanvas::FArguments::FArguments(local_1bd8);
  local_2a38 = lVar11 + 0xf8;
  local_2a40 = *(undefined1 *)(lVar11 + 0xf1);
  local_2a50 = lVar11 + 0xe8;
  local_2a58 = lVar11 + 200;
  local_2a60 = lVar11 + 0x98;
  local_2a48 = *(undefined1 *)(lVar11 + 0xf0);
  local_2a70 = (undefined1 *)(lVar11 + 0x78);
  local_2a78 = (undefined1 *)(lVar11 + 0x60);
  local_2a68 = (undefined1 *)CONCAT44(local_2a68._4_4_,*(undefined4 *)(lVar11 + 0x90));
  SWidget::SWidgetConstruct(plVar17,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  SHorizontalBox::Construct(plVar17,lVar11);
  if (((char)plVar18[5] < '\0') || (cVar7 = (**(code **)(*plVar17 + 0x1e8))(plVar17), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar18 + 0x29) = *(byte *)((longlong)plVar18 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar18 + 0x29) = *(byte *)((longlong)plVar18 + 0x29) | bVar8;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar18 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar21 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18,1);
      }
    }
  }
  if (local_1ad0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1bd8);
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  local_25e0 = plVar17;
  local_25d8 = plVar18;
  puVar13 = (undefined8 *)operator_new(0x88);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar13);
    *puVar13 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  iVar21 = 0;
  TPanelChildren<SOverlay::FOverlaySlot>::Add(plVar14 + 0x43,puVar13);
  FUN_1418475e0(plVar12,1);
  uVar10 = SVerticalBox::FSlot::AutoHeight(puVar13);
  FUN_1417f9c30(uVar10,&local_25e0);
  plVar14 = (longlong *)operator_new(0x248);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    local_2990 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_FUN_144044b58;
    local_2990 = plVar14;
    if (plVar14 != (longlong *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  plVar12 = plVar14 + 2;
  local_2758 = plVar12;
  local_2278 = plVar12;
  local_2270 = plVar14;
  FUN_14044f790(&local_2278,plVar12);
  local_2a78 = (undefined1 *)0x238;
  SWidget::SetDebugInfo
            (plVar12,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x1a8);
  lVar11 = SCanvas::FArguments::FArguments(local_1ab8);
  local_2a38 = lVar11 + 0xf8;
  local_2a40 = *(undefined1 *)(lVar11 + 0xf1);
  local_2a50 = lVar11 + 0xe8;
  local_2a58 = lVar11 + 200;
  local_2a60 = lVar11 + 0x98;
  local_2a48 = *(undefined1 *)(lVar11 + 0xf0);
  local_2a70 = (undefined1 *)(lVar11 + 0x78);
  local_2a78 = (undefined1 *)(lVar11 + 0x60);
  local_2a68 = (undefined1 *)CONCAT44(local_2a68._4_4_,*(undefined4 *)(lVar11 + 0x90));
  SWidget::SWidgetConstruct(plVar12,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  SHorizontalBox::Construct(plVar12,lVar11);
  if (((char)plVar14[5] < '\0') || (cVar7 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar8;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar18 = plVar14 + 1;
    lVar11 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (local_19b0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1ab8);
  local_2760 = (longlong *)(local_29f0 + 0x1a0);
  local_2998 = 0;
  do {
    plVar18 = local_2760;
    lVar11 = local_2998;
    plVar14 = (longlong *)0x0;
    local_2a14 = iVar21;
    if ((((int)local_2760[4] != 0) && ((longlong *)local_2760[3] != (longlong *)0x0)) &&
       (cVar7 = (**(code **)(*(longlong *)local_2760[3] + 0x18))(), cVar7 != '\0')) {
      plVar17 = plVar14;
      if ((int)plVar18[4] != 0) {
        plVar17 = (longlong *)plVar18[3];
      }
      (**(code **)(*plVar17 + 0x38))(plVar17,local_25d0);
      TArray<FNotificationButtonInfo,FDefaultAllocator>::operator=(plVar18,local_25d0);
      FUN_1408bbe10(local_25d0);
    }
    plVar2 = local_2818;
    plVar17 = local_2990;
    if ((int)plVar18[1] <= iVar21) {
      local_25a8 = local_2990;
      if (local_2990 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2990 + 1) = (int)local_2990[1] + 1;
        UNLOCK();
      }
      local_25b0 = plVar12;
      uVar10 = FUN_140693c40(local_2818);
      uVar10 = SVerticalBox::FSlot::AutoHeight(uVar10);
      local_2a78 = (undefined1 *)((ulonglong)local_2a78 & 0xffffffff00000000);
      lVar11 = SVerticalBox::FSlot::Padding(uVar10,0,0x40000000,0);
      *(undefined2 *)(lVar11 + 0x20) = 0x201;
      FUN_140692760(lVar11,&local_25b0);
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar17 + 1;
        lVar11 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          iVar21 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
      }
      local_2a08 = FUN_141983c80;
      local_2468 = 0x4000000000000000;
      uStack_2460 = 0x40800000;
      uStack_2a00 = 0;
      local_2378 = 0x41983c80;
      uStack_2374 = 1;
      uStack_2370 = 0;
      uStack_236c = uStack_29fc;
      local_2458 = 1;
      local_2450 = 0;
      local_2448 = 0;
      local_27d0 = SharedPointerInternals::NewIntrusiveReferenceController<SBorder>();
      lVar11 = local_27d0 + 0x10;
      local_27d8 = lVar11;
      FUN_14044f790(&local_27d8,lVar11);
      local_27c8 = &local_2a1d;
      local_2a78 = (undefined1 *)0x650;
      SWidget::SetDebugInfo
                (lVar11,"STextBlock",
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                 ,0x1d4);
      lVar11 = local_29f0;
      uVar10 = STextBlock::FArguments::FArguments(local_3e8);
      uVar10 = STextBlock::FArguments::Text(uVar10,lVar11 + 0x2a8);
      puVar13 = (undefined8 *)FUN_140693250(&local_27d8,local_21e8,uVar10);
      plVar14 = (longlong *)puVar13[1];
      uVar10 = *puVar13;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_2540 = uVar10;
      local_2538 = plVar14;
      lVar16 = FUN_1418cdb90(local_d48);
      *(undefined1 *)(lVar16 + 0x138) = *(undefined1 *)(lVar11 + 0x280);
      *(undefined1 *)(lVar16 + 0x139) = *(undefined1 *)(lVar11 + 0x281);
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x140,lVar11 + 0x288);
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x128,local_28c8);
      puVar13 = (undefined8 *)(lVar16 + 0x108);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_29e0 = uVar10;
      plStack_29d8 = plVar14;
      if (&local_29e0 != puVar13) {
        local_29e0 = *puVar13;
        plStack_29d8 = *(longlong **)(lVar16 + 0x110);
        *puVar13 = uVar10;
        *(longlong **)(lVar16 + 0x110) = plVar14;
        local_2138 = uVar10;
        plStack_2130 = plVar14;
      }
      plVar14 = plStack_29d8;
      if (plStack_29d8 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_29d8 + 1;
        lVar11 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_29d8)(plStack_29d8);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar21 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*plStack_29d8 + 8))(plStack_29d8,1);
          }
        }
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2540);
      plVar12 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SCheckBox>();
      plVar14 = plVar12 + 2;
      local_26a8 = plVar14;
      local_26a0 = plVar12;
      FUN_14044f790(&local_26a8,plVar14);
      local_2698 = &local_2a1c;
      local_2a78 = (undefined1 *)0x498;
      SWidget::SetDebugInfo
                (plVar14,"SCheckBox",
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                 ,0x1d0);
      local_2a38 = lVar16 + 0xf8;
      local_2a50 = lVar16 + 0xe8;
      local_2a40 = *(undefined1 *)(lVar16 + 0xf1);
      local_2a58 = lVar16 + 200;
      local_2a60 = lVar16 + 0x98;
      local_2a48 = *(undefined1 *)(lVar16 + 0xf0);
      local_2a70 = (undefined1 *)(lVar16 + 0x78);
      local_2a78 = (undefined1 *)(lVar16 + 0x60);
      local_2a68 = (undefined1 *)CONCAT44(local_2a68._4_4_,*(undefined4 *)(lVar16 + 0x90));
      SWidget::SWidgetConstruct(plVar14,lVar16,lVar16 + 0x30,lVar16 + 0x40);
      FUN_14192dfa0(plVar14,lVar16);
      if (((char)plVar12[5] < '\0') ||
         (cVar7 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar7 != '\0')) {
        bVar8 = 1;
      }
      else {
        bVar8 = 0;
      }
      *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
      *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar8;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_2630 = plVar14;
      local_2628 = plVar12;
      lVar16 = FUN_14068f180(local_1508);
      *(undefined1 *)(lVar16 + 0x120) = 1;
      *(undefined4 *)(lVar16 + 0x110) = (undefined4)local_2468;
      *(undefined4 *)(lVar16 + 0x114) = local_2468._4_4_;
      *(undefined4 *)(lVar16 + 0x118) = (undefined4)uStack_2460;
      *(undefined4 *)(lVar16 + 0x11c) = uStack_2460._4_4_;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x128,&local_2450);
      *(undefined4 *)(lVar16 + 0x10c) = 2;
      *(undefined4 *)(lVar16 + 0x108) = 1;
      local_27b8 = FUN_1418cc2a0();
      lVar11 = local_27b8 + 0x10;
      local_27c0 = lVar11;
      FUN_14044f790(&local_27c0,lVar11);
      local_27b0 = &local_2a1b;
      local_2a78 = (undefined1 *)0x310;
      SWidget::SetDebugInfo
                (lVar11,&DAT_144044860,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                 ,0x1ca);
      lVar11 = local_29f8;
      uVar10 = TSlateBaseNamedArgs<SFlareButton>::Visibility<SFlareCompanyInfo>
                         (lVar16,local_29f8,&local_2378);
      uVar10 = FUN_140692660(uVar10,&local_2630);
      puVar13 = (undefined8 *)FUN_14188dd80(&local_27c0,local_23a0,uVar10);
      local_2530 = *puVar13;
      local_2528 = puVar13[1];
      if (local_2528 != 0) {
        LOCK();
        *(int *)(local_2528 + 8) = *(int *)(local_2528 + 8) + 1;
        UNLOCK();
      }
      uVar10 = FUN_140693c40(plVar2);
      lVar16 = SVerticalBox::FSlot::AutoHeight(uVar10);
      *(undefined2 *)(lVar16 + 0x20) = 0x201;
      FUN_140692760(lVar16,&local_2530);
      if (local_2398 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_2398 + 1;
        lVar16 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_2398)(local_2398);
          LOCK();
          piVar1 = (int *)((longlong)local_2398 + 0xc);
          iVar21 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*local_2398 + 8))(local_2398,1);
          }
        }
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_27c0);
      FUN_140690ea0(local_1508);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar12 + 1;
        lVar16 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar21 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_26a8);
      FUN_1418d1af0(local_d48);
      if (local_21e0 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_21e0 + 1;
        lVar16 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_21e0)(local_21e0);
          LOCK();
          piVar1 = (int *)((longlong)local_21e0 + 0xc);
          iVar21 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*local_21e0 + 8))(local_21e0,1);
          }
        }
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_27d8);
      FUN_140691150(local_3e8);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2450);
      local_28c8 = FUN_141993610;
      uStack_2a00 = 0;
      local_29c8 = SNotificationItemImpl::GetHyperlinkText;
      uStack_28c0 = 0;
      local_2a08 = FUN_1419846d0;
      local_2440 = 0x4000000000000000;
      uStack_2438 = 0x4000000000000000;
      uStack_29c0 = 0;
      local_2318 = 0x419846d0;
      uStack_2314 = 1;
      uStack_2310 = 0;
      uStack_230c = uStack_29fc;
      local_2430 = 1;
      local_2428 = 0;
      local_2420 = 0;
      lVar16 = SHyperlink::FArguments::FArguments(local_2128);
      local_2238 = (undefined4)local_29c8;
      uStack_2234 = local_29c8._4_4_;
      uStack_2230 = uStack_29c0;
      uStack_222c = uStack_29bc;
      uVar10 = FUN_14187ce90(local_21f8,lVar11,&local_2238);
      FText::FText(local_26d8);
      local_26c0 = 1;
      local_26b8 = 0;
      local_26b0 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_26b8,uVar10);
      FText::operator=(lVar16 + 0x108,local_26d8);
      *(undefined1 *)(lVar16 + 0x120) = local_26c0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x128,&local_26b8);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_26b8);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_26d8);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_21f8);
      local_2388 = (undefined4)local_28c8;
      uStack_2384 = local_28c8._4_4_;
      uStack_2380 = uStack_28c0;
      uStack_237c = uStack_28bc;
      uVar10 = FUN_14044bb20(local_2328,lVar11,&local_2388);
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x178,uVar10);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2328);
      plVar12 = (longlong *)FUN_14068e460();
      plVar14 = plVar12 + 2;
      local_2708 = plVar14;
      local_2700 = plVar12;
      FUN_14044f790(&local_2708,plVar14);
      local_26f8 = &local_2a1a;
      local_2a78 = (undefined1 *)0x498;
      SWidget::SetDebugInfo
                (plVar14,"SHyperlink",
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                 ,0x1e5);
      local_2a38 = lVar16 + 0xf8;
      local_2a50 = lVar16 + 0xe8;
      local_2a40 = *(undefined1 *)(lVar16 + 0xf1);
      local_2a58 = lVar16 + 200;
      local_2a60 = lVar16 + 0x98;
      local_2a48 = *(undefined1 *)(lVar16 + 0xf0);
      local_2a70 = (undefined1 *)(lVar16 + 0x78);
      local_2a78 = (undefined1 *)(lVar16 + 0x60);
      local_2a68 = (undefined1 *)CONCAT44(local_2a68._4_4_,*(undefined4 *)(lVar16 + 0x90));
      SWidget::SWidgetConstruct(plVar14,lVar16,lVar16 + 0x30,lVar16 + 0x40);
      FUN_140695090(plVar14,lVar16);
      if (((char)plVar12[5] < '\0') ||
         (cVar7 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar7 != '\0')) {
        bVar8 = 1;
      }
      else {
        bVar8 = 0;
      }
      *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
      *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar8;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_2690 = plVar14;
      local_2688 = plVar12;
      lVar16 = FUN_14068f180(local_1318);
      *(undefined1 *)(lVar16 + 0x120) = 1;
      *(undefined4 *)(lVar16 + 0x110) = (undefined4)local_2440;
      *(undefined4 *)(lVar16 + 0x114) = local_2440._4_4_;
      *(undefined4 *)(lVar16 + 0x118) = (undefined4)uStack_2438;
      *(undefined4 *)(lVar16 + 0x11c) = uStack_2438._4_4_;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x128,&local_2428);
      *(undefined4 *)(lVar16 + 0x10c) = 2;
      *(undefined4 *)(lVar16 + 0x108) = 1;
      local_2748 = FUN_1418cc2a0();
      lVar11 = local_2748 + 0x10;
      local_2750 = lVar11;
      FUN_14044f790(&local_2750,lVar11);
      local_2740 = &local_2a19;
      local_2a78 = (undefined1 *)0x310;
      SWidget::SetDebugInfo
                (lVar11,&DAT_144044860,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                 ,0x1df);
      lVar11 = local_29f8;
      uVar10 = TSlateBaseNamedArgs<SFlareButton>::Visibility<SFlareCompanyInfo>
                         (lVar16,local_29f8,&local_2318);
      uVar10 = FUN_140692660(uVar10,&local_2690);
      puVar13 = (undefined8 *)FUN_14188dd80(&local_2750,local_2308,uVar10);
      local_2680 = *puVar13;
      local_2678 = puVar13[1];
      if (local_2678 != 0) {
        LOCK();
        *(int *)(local_2678 + 8) = *(int *)(local_2678 + 8) + 1;
        UNLOCK();
      }
      lVar16 = FUN_140693c40(plVar2);
      *(undefined2 *)(lVar16 + 0x20) = 0x303;
      FUN_140692760(lVar16,&local_2680);
      if (local_2300 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_2300 + 1;
        lVar16 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_2300)(local_2300);
          LOCK();
          piVar1 = (int *)((longlong)local_2300 + 0xc);
          iVar21 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*local_2300 + 8))(local_2300,1);
          }
        }
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2750);
      FUN_140690ea0(local_1318);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar12 + 1;
        lVar16 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar21 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2708);
      local_1f9d = 0;
      local_1f9f = 0;
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1fb0);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1fc0);
      TAttribute<FText>::~TAttribute<FText>(local_2020);
      FUN_140456c70(local_2128);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2428);
      plVar14 = local_2988;
      if (local_2988 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_2988 + 1;
        lVar16 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_2988)(local_2988);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar21 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      plVar14 = local_2980;
      if (local_2980 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_2980 + 1;
        lVar16 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_2980)(local_2980);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar21 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2948);
      lVar16 = local_29f0;
      pcVar19 = (char *)TAttribute<bool>::Get(local_29f0 + 0x230);
      plVar14 = local_29e8;
      if (*pcVar19 != '\0') {
        local_2a08 = (code *)&LAB_141985960;
        uStack_2a00 = 0;
        local_24b8 = 0x40a00000;
        uStack_24b0 = 0x41200000;
        local_24a8 = 1;
        local_22f8 = 0x41985960;
        uStack_22f4 = 1;
        uStack_22f0 = 0;
        uStack_22ec = uStack_29fc;
        local_24a0 = 0;
        local_2498 = 0;
        plVar12 = (longlong *)FUN_140c61d80();
        plVar14 = plVar12 + 2;
        local_26f0 = plVar14;
        local_26e8 = plVar12;
        FUN_14044f790(&local_26f0,plVar14);
        local_26e0 = &local_2a18;
        local_2a78 = (undefined1 *)0x3a8;
        SWidget::SetDebugInfo
                  (plVar14,"SThrobber",
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                   ,0x1f8);
        lVar11 = SThrobber::FArguments::FArguments(local_1998);
        local_2a38 = lVar11 + 0xf8;
        local_2a40 = *(undefined1 *)(lVar11 + 0xf1);
        local_2a50 = lVar11 + 0xe8;
        local_2a58 = lVar11 + 200;
        local_2a60 = lVar11 + 0x98;
        local_2a48 = *(undefined1 *)(lVar11 + 0xf0);
        local_2a70 = (undefined1 *)(lVar11 + 0x78);
        local_2a78 = (undefined1 *)(lVar11 + 0x60);
        local_2a68 = (undefined1 *)CONCAT44(local_2a68._4_4_,*(undefined4 *)(lVar11 + 0x90));
        SWidget::SWidgetConstruct(plVar14,lVar11,lVar11 + 0x30,lVar11 + 0x40);
        FUN_141935a10(plVar14,lVar11);
        if (((char)plVar12[5] < '\0') ||
           (cVar7 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar7 != '\0')) {
          bVar8 = 1;
        }
        else {
          bVar8 = 0;
        }
        *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
        *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar8;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_2670 = plVar14;
        local_2668 = plVar12;
        lVar20 = FUN_14068f180(local_1128);
        *(undefined1 *)(lVar20 + 0x120) = 1;
        *(undefined4 *)(lVar20 + 0x110) = (undefined4)local_24b8;
        *(undefined4 *)(lVar20 + 0x114) = local_24b8._4_4_;
        *(undefined4 *)(lVar20 + 0x118) = (undefined4)uStack_24b0;
        *(undefined4 *)(lVar20 + 0x11c) = uStack_24b0._4_4_;
        TBaseDelegate<FSlateBrush_const_*>::operator=(lVar20 + 0x128,&local_24a0);
        *(undefined4 *)(lVar20 + 0x108) = 2;
        *(undefined4 *)(lVar20 + 0x10c) = 2;
        local_2770 = FUN_1418cc2a0();
        lVar11 = local_2770 + 0x10;
        local_2778 = lVar11;
        FUN_14044f790(&local_2778,lVar11);
        local_2768 = &local_2a17;
        local_2a78 = (undefined1 *)0x310;
        SWidget::SetDebugInfo
                  (lVar11,&DAT_144044860,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                   ,0x1f2);
        lVar11 = local_29f8;
        uVar10 = TSlateBaseNamedArgs<SFlareButton>::Visibility<SFlareCompanyInfo>
                           (lVar20,local_29f8,&local_22f8);
        uVar10 = FUN_140692660(uVar10,&local_2670);
        puVar13 = (undefined8 *)FUN_14188dd80(&local_2778,local_22e8,uVar10);
        plVar14 = local_29e8;
        local_2660 = *puVar13;
        local_2658 = puVar13[1];
        if (local_2658 != 0) {
          LOCK();
          *(int *)(local_2658 + 8) = *(int *)(local_2658 + 8) + 1;
          UNLOCK();
        }
        uVar10 = FUN_140693c40(*local_29e8);
        uVar10 = SVerticalBox::FSlot::AutoHeight(uVar10);
        FUN_140692760(uVar10,&local_2660);
        if (local_22e0 != (longlong *)0x0) {
          LOCK();
          plVar18 = local_22e0 + 1;
          lVar20 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)*local_22e0)(local_22e0);
            LOCK();
            piVar1 = (int *)((longlong)local_22e0 + 0xc);
            iVar21 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar21 == 1) {
              (**(code **)(*local_22e0 + 8))(local_22e0,1);
            }
          }
        }
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2778);
        FUN_140690ea0(local_1128);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar18 = plVar12 + 1;
          lVar20 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar21 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar21 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_26f0);
        FUN_140456c70(local_1998);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_24a0);
      }
      pcVar19 = (char *)TAttribute<bool>::Get(lVar16 + 0x248);
      if (*pcVar19 != '\0') {
        local_29c8 = SNotificationExtendable::GetSuccessFailImage;
        uStack_2a00 = 0;
        local_2a08 = (code *)&LAB_1419854e0;
        local_2228 = 0x419854e0;
        uStack_2224 = 1;
        uStack_2220 = 0;
        uStack_221c = uStack_29fc;
        uStack_29c0 = 0;
        local_2490 = 0x41000000;
        uStack_248c = 0;
        uStack_2488 = 0x41200000;
        uStack_2484 = 0;
        local_2480 = 1;
        local_2478 = 0;
        local_2470 = 0;
        lVar20 = SImage::FArguments::FArguments(local_1878);
        local_2258 = (undefined4)local_29c8;
        uStack_2254 = local_29c8._4_4_;
        uStack_2250 = uStack_29c0;
        uStack_224c = uStack_29bc;
        uVar10 = FUN_1417dd6e0(local_2248,lVar11,&local_2258);
        local_2888 = 0;
        local_2880 = 1;
        local_2878 = 0;
        local_2870 = 0;
        TBaseDelegate<FSlateBrush_const_*>::operator=(&local_2878,uVar10);
        *(undefined8 *)(lVar20 + 0x108) = local_2888;
        *(undefined1 *)(lVar20 + 0x110) = local_2880;
        TBaseDelegate<FSlateBrush_const_*>::operator=(lVar20 + 0x118,&local_2878);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2878);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2248);
        local_2730 = FUN_140c61c00();
        lVar16 = local_2730 + 0x10;
        local_2738 = lVar16;
        FUN_14044f790(&local_2738,lVar16);
        local_2728 = &local_2a16;
        local_2a78 = (undefined1 *)0x278;
        SWidget::SetDebugInfo
                  (lVar16,"SImage",
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                   ,0x209);
        puVar13 = (undefined8 *)FUN_14188e090(&local_2738,local_2208,lVar20);
        local_2650 = *puVar13;
        local_2648 = puVar13[1];
        uVar23 = 0x41000000;
        uVar24 = 0;
        uVar25 = 0x41200000;
        uVar26 = 0;
        if (local_2648 != 0) {
          LOCK();
          *(int *)(local_2648 + 8) = *(int *)(local_2648 + 8) + 1;
          UNLOCK();
          uVar23 = local_2490;
          uVar24 = uStack_248c;
          uVar25 = uStack_2488;
          uVar26 = uStack_2484;
        }
        lVar20 = FUN_14068f180(local_f38);
        *(undefined1 *)(lVar20 + 0x120) = 1;
        *(undefined4 *)(lVar20 + 0x110) = uVar23;
        *(undefined4 *)(lVar20 + 0x114) = uVar24;
        *(undefined4 *)(lVar20 + 0x118) = uVar25;
        *(undefined4 *)(lVar20 + 0x11c) = uVar26;
        TBaseDelegate<FSlateBrush_const_*>::operator=(lVar20 + 0x128,&local_2478);
        *(undefined4 *)(lVar20 + 0x108) = 2;
        *(undefined4 *)(lVar20 + 0x10c) = 2;
        local_2788 = FUN_1418cc2a0();
        lVar16 = local_2788 + 0x10;
        local_2790 = lVar16;
        FUN_14044f790(&local_2790,lVar16);
        local_2780 = &local_2a15;
        local_2a78 = (undefined1 *)0x310;
        SWidget::SetDebugInfo
                  (lVar16,&DAT_144044860,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                   ,0x203);
        uVar10 = TSlateBaseNamedArgs<SFlareButton>::Visibility<SFlareCompanyInfo>
                           (lVar20,lVar11,&local_2228);
        uVar10 = FUN_140692660(uVar10,&local_2650);
        puVar13 = (undefined8 *)FUN_14188dd80(&local_2790,local_2218,uVar10);
        plVar14 = local_29e8;
        local_2640 = *puVar13;
        local_2638 = puVar13[1];
        if (local_2638 != 0) {
          LOCK();
          *(int *)(local_2638 + 8) = *(int *)(local_2638 + 8) + 1;
          UNLOCK();
        }
        uVar10 = FUN_140693c40(*local_29e8);
        uVar10 = SVerticalBox::FSlot::AutoHeight(uVar10);
        FUN_140692760(uVar10,&local_2640);
        if (local_2210 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_2210 + 1;
          lVar11 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_2210)(local_2210);
            LOCK();
            piVar1 = (int *)((longlong)local_2210 + 0xc);
            iVar21 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar21 == 1) {
              (**(code **)(*local_2210 + 8))(local_2210,1);
            }
          }
        }
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2790);
        FUN_140690ea0(local_f38);
        if (local_2200 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_2200 + 1;
          lVar11 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_2200)(local_2200);
            LOCK();
            piVar1 = (int *)((longlong)local_2200 + 0xc);
            iVar21 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar21 == 1) {
              (**(code **)(*local_2200 + 8))(local_2200,1);
            }
          }
        }
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2738);
        FUN_14188b0e0(local_1878);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2478);
      }
      return plVar14;
    }
    if ((((int)plVar18[4] != 0) && ((longlong *)plVar18[3] != (longlong *)0x0)) &&
       (cVar7 = (**(code **)(*(longlong *)plVar18[3] + 0x18))(), cVar7 != '\0')) {
      if ((int)plVar18[4] != 0) {
        plVar14 = (longlong *)plVar18[3];
      }
      (**(code **)(*plVar14 + 0x38))(plVar14,local_25c0);
      TArray<FNotificationButtonInfo,FDefaultAllocator>::operator=(plVar18,local_25c0);
      FUN_1408bbe10(local_25c0);
    }
    lVar11 = *plVar18 + lVar11;
    FText::FText(local_2868,lVar11);
    FText::FText(local_2850,lVar11 + 0x18);
    local_2838 = (longlong *)0x0;
    local_2830 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_2838,lVar11 + 0x30);
    local_2828 = *(undefined1 *)(lVar11 + 0x40);
    local_2827 = *(undefined1 *)(lVar11 + 0x41);
    local_2826 = *(undefined1 *)(lVar11 + 0x42);
    local_2825 = *(undefined1 *)(lVar11 + 0x43);
    local_29c8 = FUN_1419928c0;
    local_2a08 = (code *)&LAB_141983b80;
    uStack_2a00 = 0;
    uStack_29c0 = 0;
    FText::FText(local_2570,local_2850);
    local_2558 = 1;
    local_2550 = 0;
    local_2548 = 0;
    FText::FText(local_25a0,local_2868);
    uVar6 = local_2825;
    uVar5 = local_2826;
    uVar4 = local_2827;
    uVar9 = local_2828;
    local_2a22 = local_2825;
    local_2a21 = local_2826;
    local_2a20 = local_2827;
    local_2a1f = local_2828;
    local_2588 = 1;
    local_2580 = 0;
    local_2578 = 0;
    local_28d8 = 0;
    local_28d0 = 0;
    if ((local_2830 != 0) && (local_2838 != (longlong *)0x0)) {
      (**(code **)(*local_2838 + 0x30))(local_2838,&local_28d8);
    }
    lVar16 = FUN_14068f3e0(local_a70);
    FText::operator=(lVar16 + 0x158,local_25a0);
    *(undefined1 *)(lVar16 + 0x170) = local_2588;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x178,&local_2580);
    FText::operator=(lVar16,local_2570);
    *(undefined1 *)(lVar16 + 0x18) = local_2558;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x20,&local_2550);
    local_2358 = (undefined4)local_29c8;
    uStack_2354 = local_29c8._4_4_;
    uStack_2350 = uStack_29c0;
    uStack_234c = uStack_29bc;
    local_2810 = 0;
    local_2808 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_2810,&local_28d8);
    lVar11 = local_29f8;
    uVar10 = FUN_14195d730(&local_29b8,local_29f8,&local_2358,&local_2810);
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x188,uVar10);
    if (local_29b0 == 0) {
LAB_14197ded7:
      if (local_29b8 != (longlong *)0x0) {
        FMemory::Free(local_29b8);
      }
    }
    else if (local_29b8 != (longlong *)0x0) {
      (**(code **)(*local_29b8 + 0x28))(local_29b8,0);
      if (local_29b8 != (longlong *)0x0) {
        local_29b8 = (longlong *)FMemory::Realloc(local_29b8,0,0);
      }
      local_29b0 = 0;
      goto LAB_14197ded7;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28d8);
    local_2a68 = &local_2a28;
    local_2a70 = &local_2a27;
    local_2368 = (undefined4)local_2a08;
    uStack_2364 = local_2a08._4_4_;
    uStack_2360 = uStack_2a00;
    uStack_235c = uStack_29fc;
    local_2a78 = &local_2a26;
    local_2a28 = uVar6;
    local_2a27 = uVar5;
    local_2a26 = uVar4;
    local_2a25 = uVar9;
    uVar10 = FUN_14195d590(&local_29a8,lVar11,&local_2368,&local_2a25);
    puVar13 = (undefined8 *)0x0;
    local_2928 = 0x119;
    local_2920 = 0;
    local_2918 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_2920,uVar10);
    *(undefined1 *)(lVar16 + 0x78) = (undefined1)local_2928;
    *(undefined1 *)(lVar16 + 0x79) = local_2928._1_1_;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x80,&local_2920);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2920);
    if (local_29a0 == 0) {
LAB_14197dfc7:
      if (local_29a8 != (longlong *)0x0) {
        FMemory::Free(local_29a8);
      }
    }
    else if (local_29a8 != (longlong *)0x0) {
      (**(code **)(*local_29a8 + 0x28))(local_29a8,0);
      if (local_29a8 != (longlong *)0x0) {
        local_29a8 = (longlong *)FMemory::Realloc(local_29a8,0,0);
      }
      local_29a0 = 0;
      goto LAB_14197dfc7;
    }
    plVar18 = (longlong *)FUN_141880af0();
    plVar14 = plVar18 + 2;
    local_2720 = plVar14;
    local_2718 = plVar18;
    FUN_14044f790(&local_2720,plVar14);
    local_2710 = &local_2a1e;
    local_2a78 = (undefined1 *)0x488;
    SWidget::SetDebugInfo
              (plVar14,"SButton",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
               ,0x1b3);
    local_2a38 = lVar16 + 0xf8;
    local_2a50 = lVar16 + 0xe8;
    local_2a40 = *(undefined1 *)(lVar16 + 0xf1);
    local_2a58 = lVar16 + 200;
    local_2a60 = lVar16 + 0x98;
    local_2a48 = *(undefined1 *)(lVar16 + 0xf0);
    local_2a78 = (undefined1 *)(lVar16 + 0x60);
    local_2a68 = (undefined1 *)CONCAT44(local_2a68._4_4_,*(undefined4 *)(lVar16 + 0x90));
    local_2a70 = (undefined1 *)(lVar16 + 0x78);
    SWidget::SWidgetConstruct(plVar14,lVar16,lVar16 + 0x30,lVar16 + 0x40);
    FUN_14192dae0(plVar14,lVar16);
    if (((char)plVar18[5] < '\0') ||
       (cVar7 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar7 != '\0')) {
      bVar8 = 1;
    }
    else {
      bVar8 = 0;
    }
    *(byte *)((longlong)plVar18 + 0x29) = *(byte *)((longlong)plVar18 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar18 + 0x29) = *(byte *)((longlong)plVar18 + 0x29) | bVar8;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
    local_2800 = plVar14;
    local_27f8 = plVar18;
    puVar15 = (undefined8 *)operator_new(0x88);
    if (puVar15 != (undefined8 *)0x0) {
      FUN_1417f13c0(puVar15);
      *puVar15 = &PTR__scalar_deleting_destructor__144042bf8;
      puVar13 = puVar15;
    }
    plVar12 = local_2758;
    TPanelChildren<SOverlay::FOverlaySlot>::Add(local_2758 + 0x41,puVar13);
    FUN_1418475e0(plVar12,1);
    local_27a8 = 0;
    local_27a4 = 1;
    local_27a0 = 0;
    local_2798 = 0;
    local_2910 = 0;
    local_2908 = 0;
    local_2904 = 1;
    local_2900 = 0;
    local_28f8 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_2900,&local_27a0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_27a0);
    *(undefined4 *)(puVar13 + 5) = local_2910;
    *(undefined1 *)((longlong)puVar13 + 0x34) = local_2904;
    *(undefined4 *)(puVar13 + 6) = local_2908;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar13 + 7,&local_2900);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2900);
    *(undefined2 *)(puVar13 + 4) = 0x201;
    local_23c8 = 0;
    uStack_23c4 = 0;
    uStack_23c0 = 0x40800000;
    uStack_23bc = 0;
    local_23b8 = 1;
    *(undefined4 *)(puVar13 + 9) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x4c) = 0;
    *(undefined4 *)(puVar13 + 10) = 0x40800000;
    *(undefined4 *)((longlong)puVar13 + 0x54) = 0;
    local_23b0 = 0;
    local_23a8 = 0;
    *(undefined1 *)(puVar13 + 0xb) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar13 + 0xc,&local_23b0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_23b0);
    FUN_140801a00(puVar13,&local_2800);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2800);
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar18 + 1;
      lVar11 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar21 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2720);
    FUN_140690f70(local_a70);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2580);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_25a0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2550);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_2570);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2838);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_2850);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_2868);
    iVar21 = local_2a14 + 1;
    local_2998 = local_2998 + 0x48;
  } while( true );
}



// FUNCTION 14197f480 FUN_14197f480 body=677 status=ok
// SIG undefined FUN_14197f480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14197f480(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  longlong local_1c8;
  undefined8 local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_178 [272];
  undefined1 local_68 [48];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  uVar7 = *(undefined8 *)(param_1 + 0x388);
  local_1b8 = FUN_14199f800;
  iStack_1b0 = 0;
  lVar6 = SScrollBar::FArguments::FArguments(local_178);
  local_1a8 = (undefined4)local_1b8;
  uStack_1a4 = local_1b8._4_4_;
  iStack_1a0 = iStack_1b0;
  uStack_19c = uStack_1ac;
  *(undefined8 *)(lVar6 + 0x108) = uVar7;
  *(undefined4 *)(lVar6 + 0x124) = *(undefined4 *)(param_1 + 0x378);
  uVar7 = FUN_14195d910(&local_1b8,param_1,&local_1a8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x110,uVar7);
  if (iStack_1b0 != 0) {
    if (local_1b8 == (code *)0x0) goto LAB_14197f567;
    (**(code **)(*(longlong *)local_1b8 + 0x28))(local_1b8,0);
    if (local_1b8 != (code *)0x0) {
      local_1b8 = (code *)FMemory::Realloc(local_1b8,0,0);
    }
    iStack_1b0 = 0;
  }
  if (local_1b8 != (code *)0x0) {
    FMemory::Free(local_1b8);
  }
LAB_14197f567:
  plVar8 = (longlong *)FUN_14195eb30();
  plVar1 = plVar8 + 2;
  local_198 = plVar1;
  local_190 = plVar8;
  FUN_14044f790(&local_198,plVar1);
  local_208 = 0x438;
  SWidget::SetDebugInfo
            (plVar1,"SScrollBar",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0xe0);
  local_1f8 = *(undefined4 *)(lVar6 + 0x90);
  local_1c8 = lVar6 + 0xf8;
  local_1e0 = lVar6 + 0xe8;
  local_1d0 = *(undefined1 *)(lVar6 + 0xf1);
  local_1e8 = lVar6 + 200;
  local_1f0 = lVar6 + 0x98;
  local_1d8 = *(undefined1 *)(lVar6 + 0xf0);
  local_200 = lVar6 + 0x78;
  local_208 = lVar6 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar6,lVar6 + 0x30,lVar6 + 0x40);
  FUN_141976670(plVar1,lVar6);
  if (((char)plVar8[5] < '\0') || (cVar4 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar4 != '\0')) {
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
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar1 = plVar8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  FUN_140456c70(local_178);
  return param_2;
}



// FUNCTION 14197f730 FUN_14197f730 body=3619 status=ok
// SIG undefined FUN_14197f730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14197f730(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined1 auStack_818 [32];
  longlong local_7f8;
  longlong local_7f0;
  undefined4 local_7e8;
  longlong local_7e0;
  longlong local_7d8;
  longlong local_7d0;
  undefined1 local_7c8;
  undefined1 local_7c0;
  longlong local_7b8;
  undefined1 local_7a8 [16];
  code *local_798;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  code *local_788;
  longlong *plStack_780;
  int local_778;
  longlong *local_770;
  longlong *local_768;
  undefined8 local_760;
  longlong *local_758;
  undefined4 local_750;
  undefined4 local_748;
  undefined1 local_744;
  undefined8 local_740;
  undefined4 local_738;
  longlong *local_730;
  longlong *local_728;
  undefined1 *local_720;
  longlong local_718;
  undefined4 local_710;
  undefined1 local_70c;
  undefined8 local_708;
  undefined4 local_700;
  undefined1 local_6f8;
  undefined1 local_6f7;
  undefined8 local_6f0;
  undefined4 local_6e8;
  undefined1 local_6e0;
  undefined1 local_6df;
  undefined8 local_6d8;
  undefined4 local_6d0;
  longlong *local_6c8;
  longlong *local_6c0;
  longlong *local_6b8;
  longlong *local_6b0;
  longlong *local_6a8;
  longlong *local_6a0;
  undefined8 local_698;
  longlong *local_690;
  undefined8 local_688;
  longlong *local_680;
  longlong local_678;
  undefined1 local_670;
  undefined8 local_668;
  undefined4 local_660;
  longlong local_658;
  undefined1 local_650;
  undefined8 local_648;
  undefined4 local_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined1 local_628;
  undefined8 local_620;
  undefined4 local_618;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined1 local_5e8 [8];
  longlong *local_5e0;
  longlong *local_5d8;
  longlong *local_5d0;
  longlong *local_5c0;
  longlong *local_5b8;
  longlong *local_5a8;
  longlong *local_5a0;
  undefined1 local_588 [280];
  undefined1 local_470 [48];
  longlong *local_440;
  undefined1 local_430 [16];
  undefined1 local_420 [24];
  undefined1 local_408 [280];
  undefined1 local_2f0 [48];
  longlong *local_2c0;
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [24];
  undefined1 local_288 [264];
  longlong local_180;
  undefined1 local_168 [264];
  longlong local_60;
  ulonglong local_48;
  
  uVar5 = DAT_1464b9eeb;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_818;
  local_6e0 = DAT_1464b9eeb;
  local_788 = FUN_141984470;
  lVar17 = *(longlong *)(param_1 + 0x380) + 0x90;
  uStack_5fc = (undefined4)((ulonglong)plStack_780 >> 0x20);
  plStack_780 = (longlong *)((ulonglong)plStack_780 & 0xffffffff00000000);
  local_608 = 0x41984470;
  uStack_604 = 1;
  uStack_600 = 0;
  local_768 = (longlong *)0x0;
  local_650 = 1;
  local_648 = 0;
  local_640 = 0;
  local_6df = 1;
  local_6d8 = 0;
  local_6d0 = 0;
  local_718 = param_1;
  local_658 = lVar17;
  lVar8 = SImage::FArguments::FArguments(local_408);
  *(undefined1 *)(lVar8 + 0x78) = uVar5;
  *(undefined1 *)(lVar8 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x80,&local_6d8);
  lVar8 = FUN_14187ca80(lVar8,param_1,&local_608);
  *(longlong *)(lVar8 + 0x108) = lVar17;
  *(undefined1 *)(lVar8 + 0x110) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x118,&local_648);
  plVar9 = (longlong *)FUN_140c61c00();
  plVar14 = plVar9 + 2;
  local_5d8 = plVar14;
  local_5d0 = plVar9;
  FUN_14044f790(&local_5d8,plVar14);
  local_7f8 = 0x278;
  SWidget::SetDebugInfo
            (plVar14,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0x109);
  local_7e8 = *(undefined4 *)(lVar8 + 0x90);
  local_7b8 = lVar8 + 0xf8;
  local_7d0 = lVar8 + 0xe8;
  local_7c0 = *(undefined1 *)(lVar8 + 0xf1);
  local_7d8 = lVar8 + 200;
  local_7e0 = lVar8 + 0x98;
  local_7c8 = *(undefined1 *)(lVar8 + 0xf0);
  local_7f0 = lVar8 + 0x78;
  local_7f8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar14,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  SImage::Construct(plVar14,lVar8);
  if (((char)plVar9[5] < '\0') || (cVar6 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar7;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  uVar5 = DAT_1464b9eeb;
  local_6f8 = DAT_1464b9eeb;
  local_798 = SScrollBox::GetStartShadowOpacity;
  lVar17 = *(longlong *)(param_1 + 0x380) + 8;
  uStack_790 = 0;
  local_5f8 = 0x41985410;
  uStack_5f4 = 1;
  uStack_5f0 = 0;
  uStack_5ec = uStack_78c;
  local_670 = 1;
  local_668 = 0;
  local_660 = 0;
  local_6f7 = 1;
  local_6f0 = 0;
  local_6e8 = 0;
  local_6b8 = plVar14;
  local_6b0 = plVar9;
  local_678 = lVar17;
  lVar8 = SImage::FArguments::FArguments(local_588);
  *(undefined1 *)(lVar8 + 0x78) = uVar5;
  *(undefined1 *)(lVar8 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x80,&local_6f0);
  lVar8 = FUN_14187ca80(lVar8,param_1,&local_5f8);
  *(longlong *)(lVar8 + 0x108) = lVar17;
  *(undefined1 *)(lVar8 + 0x110) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x118,&local_668);
  plVar10 = (longlong *)FUN_140c61c00();
  plVar14 = plVar10 + 2;
  local_5c0 = plVar14;
  local_5b8 = plVar10;
  FUN_14044f790(&local_5c0,plVar14);
  local_7f8 = 0x278;
  SWidget::SetDebugInfo
            (plVar14,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0xfe);
  local_7e8 = *(undefined4 *)(lVar8 + 0x90);
  local_7b8 = lVar8 + 0xf8;
  local_7d0 = lVar8 + 0xe8;
  local_7c0 = *(undefined1 *)(lVar8 + 0xf1);
  local_7d8 = lVar8 + 200;
  local_7e0 = lVar8 + 0x98;
  local_7c8 = *(undefined1 *)(lVar8 + 0xf0);
  local_7f0 = lVar8 + 0x78;
  local_7f8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar14,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  SImage::Construct(plVar14,lVar8);
  if (((char)plVar10[5] < '\0') || (cVar6 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar6 != '\0')
     ) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar7;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x300);
  local_788 = *(code **)(param_1 + 0x2f8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar15 = (undefined8 *)0x0;
  local_710 = 0x3f800000;
  local_70c = 1;
  local_708 = 0;
  local_700 = 0;
  plStack_780 = plVar4;
  local_6c8 = plVar14;
  local_6c0 = plVar10;
  puVar11 = (undefined8 *)operator_new(0x50);
  puVar18 = puVar15;
  if (puVar11 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar11);
    *puVar11 = &PTR_FUN_1444d5278;
    *(undefined4 *)(puVar11 + 4) = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    *(undefined1 *)(puVar11 + 7) = 1;
    puVar11[8] = 0;
    *(undefined4 *)(puVar11 + 9) = 0;
    puVar18 = puVar11;
  }
  *(undefined2 *)((longlong)puVar18 + 0x24) = 0x300;
  puVar12 = (undefined8 *)operator_new(0x50);
  puVar11 = puVar15;
  if (puVar12 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar12);
    *puVar12 = &PTR_FUN_1444d5278;
    *(undefined4 *)(puVar12 + 4) = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    *(undefined1 *)(puVar12 + 7) = 1;
    puVar12[8] = 0;
    *(undefined4 *)(puVar12 + 9) = 0;
    puVar11 = puVar12;
  }
  local_638 = 0;
  uStack_630 = 0x3f80000000000000;
  *(undefined2 *)((longlong)puVar11 + 0x24) = 0x100;
  local_628 = 1;
  local_620 = 0;
  local_618 = 0;
  puVar12 = (undefined8 *)operator_new(0x50);
  if (puVar12 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar12);
    *(undefined4 *)(puVar12 + 4) = 0;
    *puVar12 = &PTR_FUN_1444d5278;
    *(undefined2 *)((longlong)puVar12 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar12 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar12 + 0x34) = 0;
    *(undefined1 *)(puVar12 + 7) = 1;
    puVar12[8] = 0;
    *(undefined4 *)(puVar12 + 9) = 0;
    puVar15 = puVar12;
  }
  *(undefined1 *)(puVar15 + 7) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0x3f80000000000000;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar15 + 8,&local_620);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_620);
  local_798 = (code *)FUN_140801a00(puVar15,&local_788);
  lVar8 = SOverlay::FArguments::FArguments(local_168);
  plVar14 = (longlong *)(lVar8 + 0x108);
  local_778 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = local_778 + 1;
  if (*(int *)(lVar8 + 0x114) < local_778 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,local_778);
  }
  *(code **)(*plVar14 + (longlong)local_778 * 8) = local_798;
  local_798 = (code *)FUN_140801a00(puVar11,&local_6c8);
  iVar3 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar3);
  }
  *(code **)(*plVar14 + (longlong)iVar3 * 8) = local_798;
  uVar13 = FUN_140801a00(puVar18,&local_6b8);
  iVar3 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar3);
  }
  *(undefined8 *)(*plVar14 + (longlong)iVar3 * 8) = uVar13;
  plVar14 = (longlong *)operator_new(0x240);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_FUN_1440f90d0;
    if (plVar14 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4610();
    }
  }
  plVar16 = plVar14 + 2;
  local_5a8 = plVar16;
  local_5a0 = plVar14;
  FUN_14044f790(&local_5a8,plVar16);
  local_7f8 = 0x230;
  SWidget::SetDebugInfo
            (plVar16,"SOverlay",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0xf0);
  local_7e8 = *(undefined4 *)(lVar8 + 0x90);
  local_7b8 = lVar8 + 0xf8;
  local_7d0 = lVar8 + 0xe8;
  local_7c0 = *(undefined1 *)(lVar8 + 0xf1);
  local_7d8 = lVar8 + 200;
  local_7e0 = lVar8 + 0x98;
  local_7c8 = *(undefined1 *)(lVar8 + 0xf0);
  local_7f0 = lVar8 + 0x78;
  local_7f8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar16,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  SOverlay::Construct(plVar16,lVar8);
  if (((char)plVar14[5] < '\0') || (cVar6 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar6 != '\0')
     ) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar7;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_6a8 = plVar16;
  local_6a0 = plVar14;
  puVar15 = (undefined8 *)operator_new(0x88);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar15);
    *puVar15 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  local_750 = 1;
  local_748 = 0x3f800000;
  local_744 = 1;
  local_740 = 0;
  local_738 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_740,&local_708);
  *(undefined4 *)(puVar15 + 5) = local_750;
  *(undefined1 *)((longlong)puVar15 + 0x34) = local_744;
  *(undefined4 *)(puVar15 + 6) = local_748;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar15 + 7,&local_740);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_740);
  local_798 = (code *)FUN_140692760(puVar15,&local_6a8);
  lVar8 = SCanvas::FArguments::FArguments(local_288);
  iVar3 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 0x108,iVar3);
  }
  *(code **)(*(longlong *)(lVar8 + 0x108) + (longlong)iVar3 * 8) = local_798;
  plVar16 = (longlong *)operator_new(0x248);
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_144044b58;
    if (plVar16 != (longlong *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  plVar1 = plVar16 + 2;
  local_730 = plVar1;
  local_728 = plVar16;
  FUN_14044f790(&local_730,plVar1);
  local_720 = local_7a8;
  local_7f8 = 0x238;
  SWidget::SetDebugInfo
            (plVar1,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0xeb);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_760 = 0;
  local_770 = plVar1;
  local_758 = plVar16;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_768,&local_758);
  plVar16 = local_758;
  if (local_758 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_758 + 1;
    lVar17 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_758)(local_758);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_758 + 8))(local_758,1);
      }
    }
  }
  puVar15 = (undefined8 *)FUN_140693150(&local_730,local_5e8,lVar8);
  lVar8 = local_718;
  plVar16 = (longlong *)puVar15[1];
  local_698 = *puVar15;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_690 = plVar16;
  TSlotBase<FSimpleSlot>::operator[](local_718 + 0x218,&local_698);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar16 + 1;
    lVar17 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  if (local_5e0 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_5e0 + 1;
    lVar17 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_5e0)(local_5e0);
      LOCK();
      piVar2 = (int *)((longlong)local_5e0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5e0 + 8))(local_5e0,1);
      }
    }
  }
  plVar16 = local_728;
  if (local_728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_728 + 1;
    lVar17 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_728)(local_728);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_728 + 8))(local_728,1);
      }
    }
  }
  if (local_180 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_288);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar14 + 1;
    lVar17 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
    plVar16 = plVar14 + 1;
    lVar17 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
  if (local_60 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_168);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_708);
  plVar14 = plStack_780;
  if (plStack_780 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_780 + 1;
    lVar17 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plStack_780)(plStack_780);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_780 + 8))(plStack_780,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar4 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar10 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
    LOCK();
    plVar14 = plVar10 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
    LOCK();
    plVar14 = plVar10 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_420);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_430);
  if (local_440 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_440 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_440)(local_440);
      LOCK();
      piVar2 = (int *)((longlong)local_440 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_440 + 8))(local_440,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_470);
  FUN_140456c70(local_588);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_668);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar9 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
    LOCK();
    plVar14 = plVar9 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
    LOCK();
    plVar14 = plVar9 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2b0);
  if (local_2c0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_2c0 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_2c0)(local_2c0);
      LOCK();
      piVar2 = (int *)((longlong)local_2c0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_2c0 + 8))(local_2c0,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2f0);
  FUN_140456c70(local_408);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_648);
  if ((*(byte *)(lVar8 + 0x438) & 2) == 0) {
    plVar14 = *(longlong **)(lVar8 + 0x310);
    local_688 = *(undefined8 *)(lVar8 + 0x308);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    local_680 = plVar14;
    uVar13 = FUN_140693c40(local_770);
    uVar13 = SVerticalBox::FSlot::AutoHeight(uVar13);
    FUN_140692760(uVar13,&local_688);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar14 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  plVar14 = local_768;
  if (local_768 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_768 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_768)(local_768);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_768 + 8))(local_768,1);
      }
    }
  }
  return;
}



// FUNCTION 141980560 FUN_141980560 body=230 status=ok
// SIG undefined FUN_141980560(void)

void FUN_141980560(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  int local_res8;
  int iStackX_c;
  undefined2 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  cVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (cVar1 == '\0') {
    local_res8 = *(int *)(param_1 + 0xd0);
    iVar2 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    iStackX_c = 0;
    if (-1 < iVar2) {
      iStackX_c = iVar2;
    }
    piVar3 = (int *)(param_1 + 0xce);
    if (*(char *)(param_1 + 0xcf) == '\0') {
      piVar3 = &local_res8;
    }
    if (((int)*(undefined8 *)piVar3 != local_res8) ||
       ((int)((ulonglong)*(undefined8 *)piVar3 >> 0x20) != iStackX_c)) {
      local_28 = (undefined2 *)0x0;
      piVar3 = &local_res8;
      if (*(char *)(param_1 + 0xcf) != '\0') {
        piVar3 = (int *)(param_1 + 0xce);
      }
      local_20 = 0;
      local_18 = *(undefined8 *)piVar3;
      local_10 = CONCAT44(iStackX_c,local_res8);
      FTextLayout::GetSelectionAsText(param_1[9],&local_28,&local_18);
      puVar4 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar4 = local_28;
      }
      FUN_1416cf5b0(puVar4);
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 141980650 FUN_141980650 body=108 status=ok
// SIG undefined FUN_141980650(void)

undefined8 * FUN_141980650(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144d75ee0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_1 + 0x20);
    *(undefined1 *)((longlong)puVar2 + 0x21) = *(undefined1 *)(param_1 + 0x21);
    *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1419806c0 CreateCacheNode body=238 status=ok
// SIG undefined CreateCacheNode(void)

undefined8 SInvalidationPanel::CreateCacheNode(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0xf8);
  if (*(int *)(param_1 + 0xf0) <= iVar3) {
    lVar5 = 10;
    do {
      _Dst = (void *)operator_new(0x88);
      pvVar4 = (void *)0x0;
      if (_Dst != (void *)0x0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x88);
        *(undefined8 *)((longlong)_Dst + 0x38) = 0;
        FGeometry::FGeometry((longlong)_Dst + 0x40);
        *(undefined1 *)((longlong)_Dst + 0x80) = 0x19;
        pvVar4 = _Dst;
      }
      iVar3 = *(int *)(param_1 + 0xf0);
      iVar2 = iVar3 + 1;
      *(int *)(param_1 + 0xf0) = iVar2;
      if (*(int *)(param_1 + 0xf4) < iVar2) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe8);
      }
      *(void **)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar3 * 8) = pvVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar3 = *(int *)(param_1 + 0xf8);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar3 * 8);
  *(int *)(param_1 + 0xf8) = iVar3 + 1;
  return uVar1;
}



// FUNCTION 1419807b0 FUN_1419807b0 body=66 status=ok
// SIG undefined FUN_1419807b0(void)

void FUN_1419807b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144d75ef8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144d75f40;
  }
  return;
}



// FUNCTION 141980800 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144d763e0;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 141980830 FUN_141980830 body=117 status=ok
// SIG undefined FUN_141980830(void)

void FUN_141980830(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144d75248;
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
    *(undefined1 *)(puVar3 + 5) = *(undefined1 *)(param_1 + 0x28);
    *(undefined1 *)((longlong)puVar3 + 0x29) = *(undefined1 *)(param_1 + 0x29);
    *(undefined1 *)((longlong)puVar3 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    *(undefined1 *)((longlong)puVar3 + 0x2b) = *(undefined1 *)(param_1 + 0x2b);
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 1419808b0 FUN_1419808b0 body=95 status=ok
// SIG undefined FUN_1419808b0(void)

void FUN_1419808b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144d75f88;
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
    *puVar3 = &PTR_GetPoolName_144d75fd0;
  }
  return;
}



// FUNCTION 141980910 FUN_141980910 body=114 status=ok
// SIG undefined FUN_141980910(void)

void FUN_141980910(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)operator_new(0x40);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_GetPoolName_144d75208;
    puVar5[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar5[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar2;
    *(undefined4 *)(puVar5 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x24) = uVar4;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar5 + 5,param_1 + 0x28);
    puVar5[7] = *(undefined8 *)(param_1 + 0x38);
  }
  return;
}



// FUNCTION 141980990 FUN_141980990 body=56 status=ok
// SIG undefined FUN_141980990(void)

void FUN_141980990(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144d72168;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 1419809d0 CutSelectedTextToClipboard body=240 status=ok
// SIG undefined CutSelectedTextToClipboard(void)

void FSlateEditableTextLayout::CutSelectedTextToClipboard(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 local_res8;
  int iStackX_c;
  undefined2 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  cVar1 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
    if (cVar1 == '\0') {
      cVar1 = AnyTextSelected(param_1);
      if (cVar1 != '\0') {
        FUN_14196cd00(param_1);
        local_res8 = *(undefined4 *)(param_1 + 0xd0);
        iVar3 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
        iStackX_c = 0;
        if (-1 < iVar3) {
          iStackX_c = iVar3;
        }
        puVar2 = param_1 + 0xce;
        if (*(char *)(param_1 + 0xcf) == '\0') {
          puVar2 = (undefined8 *)&local_res8;
        }
        local_18 = *puVar2;
        local_10 = CONCAT44(iStackX_c,*(undefined4 *)(param_1 + 0xd0));
        local_28 = (undefined2 *)0x0;
        local_20 = 0;
        FTextLayout::GetSelectionAsText(param_1[9],&local_28,&local_18);
        puVar4 = &DAT_143f3eda8;
        if ((int)local_20 != 0) {
          puVar4 = local_28;
        }
        FUN_1416cf5b0(puVar4);
        FUN_141980ac0(param_1);
        FUN_1419a7100(param_1);
        if (local_28 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        EndEditTransaction(param_1);
      }
    }
  }
  return;
}



// FUNCTION 141980ac0 FUN_141980ac0 body=1487 status=ok
// SIG undefined FUN_141980ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141980ac0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 local_170;
  int local_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int local_158;
  int local_154;
  int local_150;
  undefined4 local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  longlong *local_138;
  longlong *plStack_130;
  longlong *local_128;
  longlong *plStack_120;
  undefined8 *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8 [2];
  undefined8 local_a8;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_8c [4];
  longlong local_88;
  undefined8 local_80;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  cVar3 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar3 == '\0') {
    plVar7 = (longlong *)0x0;
    local_160 = *(int *)(param_1 + 0xd0);
    iVar4 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
    iStack_15c = 0;
    if (-1 < iVar4) {
      iStack_15c = iVar4;
    }
    piVar5 = (int *)(param_1 + 0xce);
    if (*(char *)(param_1 + 0xcf) == '\0') {
      piVar5 = &local_160;
    }
    if (((int)*(undefined8 *)piVar5 != local_160) ||
       ((int)((ulonglong)*(undefined8 *)piVar5 >> 0x20) != iStack_15c)) {
      local_168 = local_160;
      piVar5 = &local_168;
      if (*(char *)(param_1 + 0xcf) != '\0') {
        piVar5 = (int *)(param_1 + 0xce);
      }
      iStack_164 = iStack_15c;
      local_a8 = *(undefined8 *)piVar5;
      iVar4 = (int)local_a8;
      iVar11 = (int)((ulonglong)local_a8 >> 0x20);
      if (iVar4 == local_160) {
        iVar15 = local_160;
        if (iVar11 < iStack_15c) {
          iVar15 = iVar4;
        }
      }
      else {
        iVar15 = iVar4;
        if (local_160 <= iVar4) {
          iVar15 = local_160;
        }
      }
      iVar13 = iStack_15c;
      if (iVar4 == local_160) {
        if (iVar11 < iStack_15c) {
          iVar13 = iVar11;
        }
      }
      else if (iVar4 < local_160) {
        iVar13 = iVar11;
      }
      bVar16 = SBORROW4(iVar4,local_160);
      iVar10 = iVar4 - local_160;
      if (iVar4 == local_160) {
        bVar16 = SBORROW4(iVar11,iStack_15c);
        iVar10 = iVar11 - iStack_15c;
      }
      iVar12 = local_160;
      if ((iVar4 != local_160 || iVar11 != iStack_15c) && bVar16 == iVar10 < 0) {
        iVar12 = iVar4;
      }
      iVar10 = iStack_15c;
      if (iVar4 == local_160) {
        if (iStack_15c < iVar11) {
          iVar10 = iVar11;
        }
      }
      else if (local_160 < iVar4) {
        iVar10 = iVar11;
      }
      lVar2 = param_1[9];
      if (iVar15 == iVar12) {
        local_158 = iVar15;
        local_154 = iVar13;
        FUN_141954f70(lVar2,&local_158,iVar10 - iVar13);
      }
      else {
        iVar4 = *(int *)(*(longlong *)((longlong)iVar12 * 0x70 + *(longlong *)(lVar2 + 0x18)) + 8);
        iVar11 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar11 = 0;
        }
        if (iVar11 == iVar10) {
          FTextLayout::RemoveLine(lVar2,iVar12);
        }
        else {
          local_14c = 0;
          local_150 = iVar12;
          FUN_141954f70(lVar2,&local_150,iVar10);
        }
        while (iVar12 = iVar12 + -1, iVar15 < iVar12) {
          FTextLayout::RemoveLine(param_1[9],iVar12);
        }
        iVar11 = *(int *)(*(longlong *)((longlong)iVar15 * 0x70 + *(longlong *)(lVar2 + 0x18)) + 8);
        iVar4 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar4 = 0;
        }
        local_148 = iVar15;
        local_144 = iVar13;
        FUN_141954f70(param_1[9],&local_148,iVar4 - iVar13);
        FUN_141945550(param_1[9],iVar15);
        if (*(int *)(lVar2 + 0x20) == 0) {
          plVar6 = (longlong *)operator_new(0x20);
          if (plVar6 != (longlong *)0x0) {
            *(undefined4 *)(plVar6 + 1) = 1;
            *plVar6 = (longlong)&PTR_FUN_144cb51c0;
            *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
            plVar6[2] = 0;
            plVar6[3] = 0;
            plVar7 = plVar6;
          }
          local_138 = plVar7 + 2;
          plStack_130 = plVar7;
          SharedPointerInternals::EnableSharedFromThis(&local_138,local_138,local_138);
          local_128 = local_138;
          plStack_120 = plStack_130;
          local_178 = (undefined8 *)0x0;
          local_170 = (ulonglong)(uint)local_170;
          if (plStack_130 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
            UNLOCK();
          }
          local_98 = 0;
          local_90 = 0;
          _guard_xfg_dispatch_icall_nop(local_8c,0,0x54);
          local_88 = 0;
          local_80 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0xffffffff;
          local_54 = 0;
          local_48 = 0;
          local_40 = 0;
          cVar3 = (**(code **)(*(longlong *)*param_1 + 8))();
          if (cVar3 == '\0') {
            puVar8 = (undefined8 *)FUN_141937ec0(local_f8,&local_98,&local_128,param_1 + 0xc);
            plVar7 = (longlong *)puVar8[1];
            uVar14 = *puVar8;
            plVar6 = local_f0;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
          }
          else {
            puVar8 = (undefined8 *)FUN_141937a10(local_108);
            plVar7 = (longlong *)puVar8[1];
            uVar14 = *puVar8;
            plVar6 = local_100;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            lVar2 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar5 = (int *)((longlong)plVar6 + 0xc);
              iVar4 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          local_170 = CONCAT44(local_170._4_4_,1);
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_178,0);
          *local_178 = uVar14;
          local_178[1] = plVar7;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            LOCK();
            plVar6 = plVar7 + 1;
            lVar2 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar5 = (int *)((longlong)plVar7 + 0xc);
              iVar4 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          local_40 = 0;
          if (local_48 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Empty(&local_88,0);
          if (local_68 != 0) {
            FMemory::Free();
          }
          if (local_88 != 0) {
            FMemory::Free();
          }
          if (local_98 != 0) {
            FMemory::Free();
          }
          plVar7 = plStack_120;
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            plVar6 = plStack_120 + 1;
            lVar2 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*plStack_120)(plStack_120);
              LOCK();
              piVar5 = (int *)((longlong)plVar7 + 0xc);
              iVar4 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          local_118 = local_178;
          local_110 = (uint)local_170;
          local_e8 = local_138;
          plStack_e0 = plStack_130;
          local_10c = local_170._4_4_;
          local_178 = (undefined8 *)0x0;
          local_170 = 0;
          if (plStack_130 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
            UNLOCK();
          }
          uVar14 = param_1[9];
          uVar9 = FUN_1418d0570(local_d8,&local_e8,&local_118);
          FUN_1419270e0(uVar14,uVar9);
          TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
          ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_c8);
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_d0 + 1;
            lVar2 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar5 = (int *)((longlong)local_d0 + 0xc);
              iVar4 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_d0 + 8))(local_d0,1);
              }
            }
          }
          TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
          ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_178);
          plVar7 = plStack_130;
          if (plStack_130 != (longlong *)0x0) {
            LOCK();
            plVar6 = plStack_130 + 1;
            lVar2 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*plStack_130)(plStack_130);
              LOCK();
              piVar5 = (int *)((longlong)plVar7 + 0xc);
              iVar4 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
        }
      }
      if ((local_b8 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
        *(undefined1 *)(param_1 + 0xcf) = 0;
      }
      local_140 = iVar15;
      local_13c = iVar13;
      FUN_1419bc080(param_1 + 0xd0,param_1[9],&local_140);
      FUN_1419a7100(param_1);
    }
  }
  return;
}



// FUNCTION 1419810e0 DestroyObject body=49 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<SScrollBarTrack>::DestroyObject
               (longlong param_1)

{
  TIndirectArray<SUniformGridPanel::FSlot,FDefaultAllocator>::
  ~TIndirectArray<SUniformGridPanel::FSlot,FDefaultAllocator>(param_1 + 0x228);
  *(undefined ***)(param_1 + 0x218) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1 + 0x10);
  return;
}



// FUNCTION 141981120 DestroyObject body=77 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<SScrollPanel>::DestroyObject
               (longlong param_1)

{
  TIndirectArray<SScrollBox::FSlot,FDefaultAllocator>::Empty(param_1 + 0x230,0);
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x220) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1 + 0x10);
  return;
}



// FUNCTION 141981180 FUN_141981180 body=36 status=ok
// SIG undefined FUN_141981180(void)

float FUN_141981180(longlong param_1)

{
  return 1.0 - (*(float *)(*(longlong *)(param_1 + 0x3c8) + 0x234) +
               *(float *)(*(longlong *)(param_1 + 0x3c8) + 0x230));
}



// FUNCTION 1419811b0 FUN_1419811b0 body=16 status=ok
// SIG undefined FUN_1419811b0(void)

undefined4 FUN_1419811b0(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x3c8) + 0x230);
}



// FUNCTION 1419811c0 DistributeSizeContributions body=308 status=ok
// SIG undefined DistributeSizeContributions(void)

void SGridPanel::DistributeSizeContributions
               (float param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((param_3 < param_4) && (0xf < (uint)(param_4 - param_3))) {
    lVar6 = (longlong)param_3;
    uVar4 = param_4 - param_3 & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    pauVar2 = (undefined1 (*) [16])(*param_2 + (lVar6 + 8) * 4);
    do {
      param_3 = param_3 + 0x10;
      auVar9._4_4_ = param_1;
      auVar9._0_4_ = param_1;
      auVar9._8_4_ = param_1;
      auVar9._12_4_ = param_1;
      lVar6 = lVar6 + 0x10;
      auVar9 = maxps(auVar9,pauVar2[-2]);
      pauVar2[-2] = auVar9;
      auVar10._4_4_ = param_1;
      auVar10._0_4_ = param_1;
      auVar10._8_4_ = param_1;
      auVar10._12_4_ = param_1;
      auVar9 = maxps(auVar10,pauVar2[-1]);
      pauVar2[-1] = auVar9;
      auVar11._4_4_ = param_1;
      auVar11._0_4_ = param_1;
      auVar11._8_4_ = param_1;
      auVar11._12_4_ = param_1;
      auVar9 = maxps(auVar11,*pauVar2);
      *pauVar2 = auVar9;
      auVar12._4_4_ = param_1;
      auVar12._0_4_ = param_1;
      auVar12._8_4_ = param_1;
      auVar12._12_4_ = param_1;
      auVar9 = maxps(auVar12,pauVar2[1]);
      pauVar2[1] = auVar9;
      pauVar2 = pauVar2 + 4;
    } while (lVar6 < (int)(param_4 - uVar4));
  }
  lVar6 = (longlong)param_3;
  lVar7 = (longlong)param_4;
  if (lVar6 < lVar7) {
    if (3 < lVar7 - lVar6) {
      lVar3 = ((lVar7 - lVar6) - 4U >> 2) + 1;
      lVar1 = lVar6 * 4;
      lVar6 = lVar6 + lVar3 * 4;
      pfVar5 = (float *)(*param_2 + 8 + lVar1);
      do {
        fVar8 = param_1;
        if (param_1 <= pfVar5[-2]) {
          fVar8 = pfVar5[-2];
        }
        pfVar5[-2] = fVar8;
        fVar8 = pfVar5[-1];
        if (pfVar5[-1] <= param_1) {
          fVar8 = param_1;
        }
        pfVar5[-1] = fVar8;
        fVar8 = *pfVar5;
        if (*pfVar5 <= param_1) {
          fVar8 = param_1;
        }
        *pfVar5 = fVar8;
        fVar8 = pfVar5[1];
        if (pfVar5[1] <= param_1) {
          fVar8 = param_1;
        }
        pfVar5[1] = fVar8;
        lVar3 = lVar3 + -1;
        pfVar5 = pfVar5 + 4;
      } while (lVar3 != 0);
    }
    if (lVar6 < lVar7) {
      lVar1 = *param_2;
      do {
        fVar8 = *(float *)(lVar1 + lVar6 * 4);
        if (fVar8 <= param_1) {
          fVar8 = param_1;
        }
        *(float *)(lVar1 + lVar6 * 4) = fVar8;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar7);
    }
  }
  return;
}



// FUNCTION 141981300 Empty body=145 status=ok
// SIG undefined Empty(void)

void TIndirectArray<SCanvas::FSlot,FDefaultAllocator>::Empty(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  plVar1 = (longlong *)*param_1;
  for (iVar3 = *(int *)(param_1 + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
    lVar2 = *plVar1;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x50);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x30);
    FSlotBase::~FSlotBase(lVar2);
    FMemory::Free(*plVar1);
    plVar1 = plVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 1419813a0 Empty body=181 status=ok
// SIG undefined Empty(void)

void TIndirectArray<SConstraintCanvas::FSlot,FDefaultAllocator>::Empty
               (undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  plVar1 = (longlong *)*param_1;
  for (iVar3 = *(int *)(param_1 + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
    lVar2 = *plVar1;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0xb0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x98);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x80);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x60);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x38);
    FSlotBase::~FSlotBase(lVar2);
    FMemory::Free(*plVar1);
    plVar1 = plVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 141981460 FUN_141981460 body=176 status=ok
// SIG undefined FUN_141981460(void)

void FUN_141981460(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)*param_1;
  for (iVar5 = *(int *)(param_1 + 1); iVar5 != 0; iVar5 = iVar5 + -1) {
    lVar3 = *plVar6;
    plVar4 = *(longlong **)(lVar3 + 0x58);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3 + 0x40);
    FSlotBase::~FSlotBase(lVar3);
    FMemory::Free(*plVar6);
    plVar6 = plVar6 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 141981510 Empty body=136 status=ok
// SIG undefined Empty(void)

void TIndirectArray<SScrollBox::FSlot,FDefaultAllocator>::Empty(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  plVar1 = (longlong *)*param_1;
  for (iVar3 = *(int *)(param_1 + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
    lVar2 = *plVar1;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2 + 0x38);
    FSlotBase::~FSlotBase(lVar2);
    FMemory::Free(*plVar1);
    plVar1 = plVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 1419815a0 Empty body=146 status=ok
// SIG undefined Empty(void)

void TIndirectArray<SWrapBox::FSlot,FDefaultAllocator>::Empty(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    lVar1 = *plVar3;
    if (*(char *)(lVar1 + 0x54) != '\0') {
      *(undefined1 *)(lVar1 + 0x54) = 0;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + 0x40);
    FSlotBase::~FSlotBase(lVar1);
    FMemory::Free(*plVar3);
    plVar3 = plVar3 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 141981640 FUN_141981640 body=576 status=ok
// SIG undefined FUN_141981640(void)

void FUN_141981640(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar4 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = *puVar11;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar8 == 0) {
      lVar9 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar10 = local_78 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar10;
      if (bVar6) goto LAB_141981714;
      uVar8 = puVar11[lVar9 + 1];
    }
    uStack_74 = -uVar8 & uVar8;
    iVar10 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_64 = (iStack_60 - iVar10) + 0x1f;
    if (iVar4 < iStack_64) {
LAB_141981714:
      iStack_64 = iVar4;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar4) {
    do {
      lVar9 = (longlong)iStack_3c * 0x60 + *param_1;
      plVar5 = *(longlong **)(lVar9 + 0x50);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = *(longlong **)(lVar9 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar8 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar8) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar8;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141981880 EndComposition body=48 status=ok
// SIG undefined EndComposition(void)

void FSlateEditableTextLayout::FTextInputMethodContext::EndComposition(longlong param_1)

{
  if ((*(longlong *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x58) != '\0')) {
    EndEditTransaction();
    FUN_1419a7100(*(undefined8 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1419818b0 EndEditTransaction body=508 status=ok
// SIG undefined EndEditTransaction(void)

void FSlateEditableTextLayout::EndEditTransaction(undefined8 *param_1)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  short *psVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined4 local_res8;
  int local_resc;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(char *)(param_1 + 0xde) != '\0') {
    local_38[0] = 0;
    local_38[1] = 0;
    (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],local_38,param_1[9]);
    FText::FromString(local_28,local_38);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    puVar7 = (undefined8 *)FText::ToString(param_1 + 0xd6);
    puVar8 = (undefined8 *)FText::ToString(local_28);
    psVar10 = &DAT_143f3eda8;
    if (*(int *)(puVar7 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar7;
    }
    if (*(int *)(puVar8 + 1) != 0) {
      psVar10 = (short *)*puVar8;
    }
    lVar12 = (longlong)puVar11 - (longlong)psVar10;
    do {
      sVar2 = *psVar10;
      sVar3 = *(short *)((longlong)psVar10 + lVar12);
      if (sVar2 != sVar3) break;
      psVar10 = psVar10 + 1;
    } while (sVar3 != 0);
    if (sVar2 != sVar3) {
      if (((*(int *)(param_1 + 0x89) == 0) || ((longlong *)param_1[0x88] == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*(longlong *)param_1[0x88] + 0x18))(), cVar5 == '\0')) {
        if ((*(int *)(param_1 + 0x89) != 0) &&
           (plVar4 = (longlong *)param_1[0x88], plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (param_1[0x88] != 0) {
            uVar9 = FMemory::Realloc(param_1[0x88],0,0);
            param_1[0x88] = uVar9;
          }
          *(undefined4 *)(param_1 + 0x89) = 0;
        }
        FText::operator=(param_1 + 0x84,local_28);
        *(undefined1 *)(param_1 + 0x87) = 1;
      }
      PushUndoState(param_1,param_1 + 0xd6);
      (**(code **)(*(longlong *)param_1[9] + 8))();
      (**(code **)(*(longlong *)*param_1 + 0x98))((longlong *)*param_1,local_28);
      local_res8 = *(undefined4 *)(param_1 + 0xd0);
      iVar6 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
      local_resc = 0;
      if (-1 < iVar6) {
        local_resc = iVar6;
      }
      (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,&local_res8);
      UpdatePreferredCursorScreenOffsetInLine(param_1);
      cVar5 = (**(code **)(*(longlong *)param_1[3] + 0x18))();
      if (cVar5 != '\0') {
        FUN_141983270(param_1,local_28);
      }
    }
    TOptional<SlateEditableTextTypes::FUndoState>::Reset(param_1 + 0xd6);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_20 + 1;
      lVar12 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141981ab0 FUN_141981ab0 body=43 status=ok
// SIG undefined FUN_141981ab0(void)

void FUN_141981ab0(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x3f2) = 0;
  uVar1 = (**(code **)(*DAT_1469f4590 + 0x40))();
  *(undefined8 *)(param_1 + 0x3f8) = uVar1;
  return;
}



// FUNCTION 141981ae0 Execute body=60 status=ok
// SIG undefined Execute(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_f4bfa535afaf2b21df39634d76d571e3>_>
     ::Execute(longlong param_1)

{
  char cVar1;
  
  cVar1 = FSlateEditableTextLayout::CanExecuteDelete(*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_14196cd00(*(undefined8 *)(param_1 + 8));
    FUN_141980ac0(*(undefined8 *)(param_1 + 8));
    FSlateEditableTextLayout::EndEditTransaction(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 141981b20 Execute body=66 status=ok
// SIG undefined Execute(void)

undefined8
TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,0>___cdecl(SWidget_*,FTextBlockStyle_const_&),<lambda_a084689d316b0c6af45a3b46a515fbd4>_>
::Execute(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 local_1e8 [480];
  
  uVar1 = FTextBlockStyle::FTextBlockStyle(local_1e8,param_4);
  FUN_141937d50(param_2,param_3,uVar1);
  return param_2;
}



// FUNCTION 141981b70 FUN_141981b70 body=269 status=ok
// SIG undefined FUN_141981b70(void)

undefined1 * FUN_141981b70(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  code *local_28;
  undefined8 uStack_20;
  
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
  local_res8[0] = *(undefined1 *)(param_1 + 0x2b);
  local_28 = *(code **)(param_1 + 0x18);
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  local_res10[0] = *(undefined1 *)(param_1 + 0x2a);
  local_res18[0] = *(undefined1 *)(param_1 + 0x29);
  local_res20[0] = *(undefined1 *)(param_1 + 0x28);
  puVar5 = (undefined1 *)
           (*local_28)((longlong)(int)uStack_20 + (longlong)plVar7,local_38,local_res20,local_res18,
                       local_res10,local_res8);
  *param_2 = *puVar5;
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 141981c80 FUN_141981c80 body=255 status=ok
// SIG undefined FUN_141981c80(void)

void FUN_141981c80(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
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
          plVar7 = *(longlong **)(param_1 + 8);
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
  local_38 = *param_2;
  local_20 = *(undefined4 *)(param_1 + 0x18);
  uStack_1c = *(undefined4 *)(param_1 + 0x1c);
  pcVar3 = *(code **)(param_1 + 0x18);
  iStack_18 = *(int *)(param_1 + 0x20);
  uStack_14 = *(undefined4 *)(param_1 + 0x24);
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)((longlong)iStack_18 + (longlong)plVar7,&local_38);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 141981d80 FUN_141981d80 body=293 status=ok
// SIG undefined FUN_141981d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141981d80(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined4 local_108;
  code *local_100;
  undefined8 uStack_f8;
  code *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = plVar2;
  plVar7 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar8) {
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
  local_100 = *(code **)(param_1 + 0x18);
  uStack_f8 = *(undefined8 *)(param_1 + 0x20);
  local_110 = 0;
  local_108 = 0;
  local_e8 = local_100;
  uStack_e0 = uStack_f8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_110,param_1 + 0x28);
  uVar5 = (*local_100)((longlong)(int)uStack_f8 + (longlong)plVar7,local_d8,&local_110);
  FReply::FReply(param_2,uVar5);
  FUN_140438c20(local_d8);
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


