// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141887200 FUN_141887200 body=308 status=ok
// SIG undefined FUN_141887200(void)

longlong FUN_141887200(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
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
  lVar2 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0xbf800000;
  return param_1;
}



// FUNCTION 141887340 FUN_141887340 body=302 status=ok
// SIG undefined FUN_141887340(void)

longlong FUN_141887340(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 141887470 FArguments body=317 status=ok
// SIG undefined FArguments(void)

longlong SSpacer::FArguments::FArguments
                   (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
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
  *(undefined4 *)(param_1 + 0x108) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x10c) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0x110) = 1;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  uVar1 = DAT_1464b9eec;
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9eec;
  *(undefined1 *)(param_1 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            ((undefined8 *)(param_1 + 0x80),&local_20,param_3,param_4,uVar1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 1418875b0 FUN_1418875b0 body=723 status=ok
// SIG undefined FUN_1418875b0(void)

longlong FUN_1418875b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_68 [56];
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
  FText::FText(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = DAT_1469eb218;
  lVar4 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x140) = DAT_1469eb220;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar2 = DAT_1469eb140;
  lVar4 = *DAT_1469eb140;
  puVar8 = (undefined8 *)FName::FName(local_res8,"ToolTip.Font",1);
  puVar8 = (undefined8 *)(**(code **)(lVar4 + 0x78))(plVar2,local_68,*puVar8,0);
  *(undefined8 *)(param_1 + 0x148) = *puVar8;
  *(undefined8 *)(param_1 + 0x150) = puVar8[1];
  uVar5 = *(undefined4 *)((longlong)puVar8 + 0x14);
  uVar6 = *(undefined4 *)(puVar8 + 3);
  uVar7 = *(undefined4 *)((longlong)puVar8 + 0x1c);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(puVar8 + 2);
  *(undefined4 *)(param_1 + 0x15c) = uVar5;
  *(undefined4 *)(param_1 + 0x160) = uVar6;
  *(undefined4 *)(param_1 + 0x164) = uVar7;
  uVar5 = *(undefined4 *)((longlong)puVar8 + 0x24);
  uVar6 = *(undefined4 *)(puVar8 + 5);
  uVar7 = *(undefined4 *)((longlong)puVar8 + 0x2c);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(puVar8 + 4);
  *(undefined4 *)(param_1 + 0x16c) = uVar5;
  *(undefined4 *)(param_1 + 0x170) = uVar6;
  *(undefined4 *)(param_1 + 0x174) = uVar7;
  *(undefined8 *)(param_1 + 0x178) = puVar8[6];
  lVar4 = puVar8[7];
  *(longlong *)(param_1 + 0x180) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x188) = puVar8[8];
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(puVar8 + 9);
  *(undefined1 *)(param_1 + 0x194) = *(undefined1 *)((longlong)puVar8 + 0x4c);
  *(undefined1 *)(param_1 + 0x198) = 1;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  *(undefined8 *)(param_1 + 0x1b0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1b8) = 0x3f8000003f800000;
  *(undefined1 *)(param_1 + 0x1c0) = 2;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x1d8) = 1;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0x41000000;
  *(undefined4 *)(param_1 + 500) = 0x41000000;
  *(undefined4 *)(param_1 + 0x1f8) = 0x41000000;
  *(undefined4 *)(param_1 + 0x1fc) = 0x41000000;
  *(undefined1 *)(param_1 + 0x200) = 1;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  plVar2 = DAT_1469eb140;
  lVar4 = *DAT_1469eb140;
  puVar8 = (undefined8 *)FName::FName(local_res10,"ToolTip.Background",1);
  uVar9 = (**(code **)(lVar4 + 0x40))(plVar2,*puVar8,0);
  *(undefined8 *)(param_1 + 0x218) = uVar9;
  *(undefined1 *)(param_1 + 0x220) = 1;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined2 *)(param_1 + 0x238) = 0x100;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  return param_1;
}



// FUNCTION 141887890 FArguments body=336 status=ok
// SIG undefined FArguments(void)

longlong SWindowTitleBar::FArguments::FArguments(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
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
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"Window",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb210);
  if (lVar3 == 0) {
    lVar3 = FUN_141835510();
  }
  *(longlong *)(param_1 + 0x108) = lVar3;
  *(undefined1 *)(param_1 + 0x110) = 1;
  FText::FText(param_1 + 0x118);
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  return param_1;
}



// FUNCTION 1418879e0 FArrangedChildren body=189 status=ok
// SIG undefined FArrangedChildren(void)

undefined1 * FArrangedChildren::FArrangedChildren(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x128) = 0;
  if (*(longlong *)(param_2 + 0x128) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 8,param_2 + 8,0x120);
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined8 *)(param_2 + 0x130) = 0;
  param_1[0x138] = param_2[0x138];
  return param_1;
}



// FUNCTION 141887aa0 FUN_141887aa0 body=271 status=ok
// SIG undefined FUN_141887aa0(void)

undefined8 * FUN_141887aa0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=();
  param_1[10] = 0;
  iVar4 = *(int *)(param_2 + 0x58);
  lVar2 = *(longlong *)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy(param_1 + 10,iVar4,0);
    puVar3 = (undefined8 *)param_1[10];
    lVar1 = (longlong)puVar3 + 0x2c;
    do {
      *puVar3 = 0;
      *(undefined8 *)(lVar1 + -0x24) = 0;
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0xffffffff;
      *(undefined4 *)(lVar1 + 8) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
      ::operator=(puVar3,lVar2);
      puVar3 = puVar3 + 10;
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + 0x50;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  lVar2 = *(longlong *)(param_2 + 0x68);
  param_1[0xd] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 141887bb0 FContextEntry body=447 status=ok
// SIG undefined FContextEntry(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FInputBindingManager::FContextEntry::FContextEntry(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  local_68 = 0;
  uStack_60 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  iVar3 = *(int *)(param_1 + 0xb);
  plVar2 = (longlong *)param_1[10];
  local_40 = 0;
  local_30 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)(plVar2 + 9) = 0;
    if (plVar2[8] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,EKeys::FCategoryDisplayInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(plVar2,0);
    if (plVar2[4] != 0) {
      FMemory::Free();
    }
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 10;
  }
  lVar4 = 2;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 2) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 10,2);
  }
  do {
    iVar3 = *(int *)(param_1 + 0xb);
    *(int *)(param_1 + 0xb) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x5c) < iVar3 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 10,iVar3);
    }
    puVar1 = (undefined8 *)((longlong)iVar3 * 0x50 + param_1[10]);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
      puVar1[8] = 0;
      *(undefined4 *)(puVar1 + 9) = 0;
      TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
      ::operator=(puVar1,&local_78);
    }
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  local_30 = local_30 & 0xffffffff00000000;
  if (local_38 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,EKeys::FCategoryDisplayInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&local_78,0);
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141887d70 FUN_141887d70 body=2743 status=ok
// SIG undefined FUN_141887d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141887d70(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_748 [32];
  longlong local_728;
  longlong local_720;
  undefined4 local_718;
  longlong local_710;
  longlong local_708;
  longlong local_700;
  undefined1 local_6f8;
  undefined1 local_6f0;
  longlong local_6e8;
  longlong *local_6d8;
  undefined8 local_6d0;
  longlong *local_6c8;
  longlong *local_6c0;
  longlong *local_6b8;
  undefined8 local_6b0;
  longlong *local_6a8;
  longlong *local_6a0;
  longlong *local_698;
  undefined8 *local_690;
  undefined8 local_688;
  longlong *local_680;
  undefined8 *local_678;
  undefined8 local_670;
  longlong *local_668;
  undefined8 local_660;
  undefined1 local_658;
  undefined8 local_650;
  undefined4 local_648;
  undefined8 local_640;
  longlong local_638;
  longlong *local_630;
  longlong *local_628;
  longlong *local_620;
  longlong *local_618;
  undefined8 local_610;
  longlong *plStack_608;
  undefined1 local_600 [8];
  undefined1 local_5f8 [8];
  longlong *local_5f0;
  undefined1 local_5e8 [8];
  longlong *local_5e0;
  undefined1 local_5d8 [8];
  longlong *local_5d0;
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  undefined1 local_5b8 [8];
  longlong *local_5b0;
  undefined1 local_5a8 [8];
  longlong *local_5a0;
  undefined1 local_598 [8];
  longlong *local_590;
  longlong *local_588;
  longlong *local_580;
  longlong *local_570;
  longlong *local_568;
  undefined1 local_558 [16];
  undefined1 local_548 [272];
  longlong *local_438;
  longlong *local_420;
  undefined1 local_418 [272];
  undefined1 local_308 [688];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_748;
  local_678 = param_4;
  FDragDropOperation::FDragDropOperation();
  *param_1 = &PTR_FUN_144d60e30;
  param_1[8] = *param_2;
  lVar11 = param_2[1];
  param_1[9] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  param_1[10] = param_3;
  param_1[0xb] = *param_4;
  lVar11 = param_4[1];
  param_1[0xc] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  puVar6 = (undefined8 *)FUN_1419410f0(*param_2,local_5e8);
  puVar6 = (undefined8 *)FUN_1418fec60(*puVar6,local_5f8);
  param_1[0xd] = *puVar6;
  lVar11 = puVar6[1];
  param_1[0xe] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 0xc) = *(int *)(lVar11 + 0xc) + 1;
    UNLOCK();
  }
  if (local_5f0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_5f0 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_5f0)(local_5f0);
      LOCK();
      piVar1 = (int *)((longlong)local_5f0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5f0 + 8))(local_5f0,1);
      }
    }
  }
  if (local_5e0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_5e0 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_5e0)(local_5e0);
      LOCK();
      piVar1 = (int *)((longlong)local_5e0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5e0 + 8))(local_5e0,1);
      }
    }
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = *param_5;
  plVar12 = DAT_1469f4590;
  lVar11 = *DAT_1469f4590;
  uVar7 = FUN_141849900(local_558);
  puVar6 = (undefined8 *)(**(code **)(lVar11 + 0x10))(plVar12,local_5d8,uVar7,0);
  local_6c8 = (longlong *)puVar6[1];
  local_6d0 = *puVar6;
  if (local_6c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6c8 + 1) = (int)local_6c8[1] + 1;
    UNLOCK();
  }
  puVar6 = param_1 + 4;
  if (puVar6 != &local_6d0) {
    *puVar6 = local_6d0;
    local_6d0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 5,&local_6c8);
  }
  plVar12 = local_6c8;
  if (local_6c8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_6c8 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_6c8)(local_6c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_6c8 + 8))(local_6c8,1);
      }
    }
  }
  if (local_5d0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_5d0 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_5d0)(local_5d0);
      LOCK();
      piVar1 = (int *)((longlong)local_5d0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5d0 + 8))(local_5d0,1);
      }
    }
  }
  FUN_1407eef00(*puVar6,0);
  SWindow::SetOpacity(*puVar6,0x3ee66666);
  plVar12 = DAT_1469eb140;
  local_6b8 = (longlong *)0x0;
  lVar11 = *DAT_1469eb140;
  puVar6 = (undefined8 *)FName::FName(local_600,"Docking.Background",1);
  local_660 = (**(code **)(lVar11 + 0x40))(plVar12,*puVar6,0);
  local_658 = 1;
  local_650 = 0;
  local_648 = 0;
  local_688 = FUN_1418aaad0(local_598);
  plVar8 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SDockingTabStack>();
  plVar12 = plVar8 + 2;
  local_6a0 = plVar12;
  local_698 = plVar8;
  FUN_14044f790(&local_6a0,plVar12);
  local_690 = &local_688;
  local_728 = 0x428;
  SWidget::SetDebugInfo
            (plVar12,"SDockingTabStack",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\FDockingDragOperation.cpp"
             ,0x104);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_6b0 = 0;
  local_6c0 = plVar12;
  local_6a8 = plVar8;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_6b8,&local_6a8);
  plVar12 = local_6a8;
  if (local_6a8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_6a8 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_6a8)(local_6a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_6a8 + 8))(local_6a8,1);
      }
    }
  }
  uVar7 = SDockingTabStack::FArguments::FArguments(local_418);
  puVar6 = (undefined8 *)FUN_14188df80(&local_6a0,local_5a8,uVar7);
  local_640 = *puVar6;
  local_638 = puVar6[1];
  if (local_638 != 0) {
    LOCK();
    *(int *)(local_638 + 8) = *(int *)(local_638 + 8) + 1;
    UNLOCK();
  }
  uVar7 = param_1[8];
  uVar9 = FUN_1418aa950(local_5b8);
  uVar7 = FUN_141942440(uVar7,local_5c8);
  local_680 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SDockingArea>();
  plVar12 = local_680 + 2;
  local_6d8 = plVar12;
  local_588 = plVar12;
  local_580 = local_680;
  FUN_14044f790(&local_588,plVar12);
  local_728 = 0x360;
  SWidget::SetDebugInfo
            (plVar12,"SDockingArea",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\FDockingDragOperation.cpp"
             ,0x100);
  uVar10 = SDockingArea::FArguments::FArguments(local_548);
  lVar11 = FUN_1418a0f40(uVar10,&local_640);
  plVar12 = local_6d8;
  local_718 = *(undefined4 *)(lVar11 + 0x90);
  local_6e8 = lVar11 + 0xf8;
  local_700 = lVar11 + 0xe8;
  local_6f0 = *(undefined1 *)(lVar11 + 0xf1);
  local_720 = lVar11 + 0x78;
  local_708 = lVar11 + 200;
  local_6f8 = *(undefined1 *)(lVar11 + 0xf0);
  local_710 = lVar11 + 0x98;
  local_728 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(local_6d8,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_1418ec8e0(plVar12,lVar11,uVar7,uVar9);
  if (((char)plVar12[3] < '\0') || (cVar4 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  plVar8 = local_680;
  *(byte *)((longlong)plVar12 + 0x19) = *(byte *)((longlong)plVar12 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x19) = *(byte *)((longlong)plVar12 + 0x19) | bVar5;
  local_6d8 = local_680 + 1;
  if (local_680 != (longlong *)0x0) {
    LOCK();
    *(int *)local_6d8 = (int)*local_6d8 + 1;
    UNLOCK();
  }
  local_630 = plVar12;
  local_628 = local_680;
  if (local_680 != (longlong *)0x0) {
    LOCK();
    *(int *)local_6d8 = (int)*local_6d8 + 1;
    UNLOCK();
  }
  lVar11 = FUN_141886d30(local_308);
  *(undefined8 *)(lVar11 + 0x188) = local_660;
  *(undefined1 *)(lVar11 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x198,&local_650);
  plVar12 = (longlong *)operator_new(0x398);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar12 + 1) = 1;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_144d61068;
    if (plVar12 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar2 = plVar12 + 2;
  local_570 = plVar2;
  local_568 = plVar12;
  FUN_14044f790(&local_570,plVar2);
  local_728 = 0x388;
  SWidget::SetDebugInfo
            (plVar2,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\FDockingDragOperation.cpp"
             ,0xfd);
  lVar11 = FUN_14188d200(lVar11,&local_630);
  local_718 = *(undefined4 *)(lVar11 + 0x90);
  local_6e8 = lVar11 + 0xf8;
  local_700 = lVar11 + 0xe8;
  local_6f0 = *(undefined1 *)(lVar11 + 0xf1);
  local_728 = lVar11 + 0x60;
  local_708 = lVar11 + 200;
  local_6f8 = *(undefined1 *)(lVar11 + 0xf0);
  local_710 = lVar11 + 0x98;
  local_720 = lVar11 + 0x78;
  plVar2 = plVar12 + 2;
  SWidget::SWidgetConstruct(plVar2,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_141971ea0(plVar2,lVar11);
  if (((char)plVar12[5] < '\0') || (cVar4 = (**(code **)(*plVar2 + 0x1e8))(plVar2), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar5;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_620 = plVar2;
  local_618 = plVar12;
  FUN_14185a760(param_1[4],&local_620);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
    LOCK();
    plVar2 = plVar12 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
  FUN_14188af70(local_308);
  plVar12 = local_6d8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    lVar11 = *local_6d8;
    *(int *)local_6d8 = (int)*local_6d8 + -1;
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
    LOCK();
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
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
  if (local_5c0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_5c0 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_5c0)(local_5c0);
      LOCK();
      piVar1 = (int *)((longlong)local_5c0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5c0 + 8))(local_5c0,1);
      }
    }
  }
  if (local_5b0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_5b0 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_5b0)(local_5b0);
      LOCK();
      piVar1 = (int *)((longlong)local_5b0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5b0 + 8))(local_5b0,1);
      }
    }
  }
  if (local_420 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_420 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_420)(local_420);
      LOCK();
      piVar1 = (int *)((longlong)local_420 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_420 + 8))(local_420,1);
      }
    }
  }
  if (local_438 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_438 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_438)(local_438);
      LOCK();
      piVar1 = (int *)((longlong)local_438 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_438 + 8))(local_438,1);
      }
    }
  }
  FUN_140456c70(local_548);
  if (local_5a0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_5a0 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_5a0)(local_5a0);
      LOCK();
      piVar1 = (int *)((longlong)local_5a0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5a0 + 8))(local_5a0,1);
      }
    }
  }
  plVar12 = local_698;
  if (local_698 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_698 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_698)(local_698);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_698 + 8))(local_698,1);
      }
    }
  }
  if (local_590 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_590 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_590)(local_590);
      LOCK();
      piVar1 = (int *)((longlong)local_590 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_590 + 8))(local_590,1);
      }
    }
  }
  FUN_140456c70(local_418);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_650);
  local_670 = param_1[8];
  local_668 = (longlong *)param_1[9];
  if (local_668 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_668 + 1) = (int)local_668[1] + 1;
    UNLOCK();
  }
  FUN_141910330(local_6c0,&local_670,0xffffffff);
  plVar12 = local_668;
  if (local_668 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_668 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_668)(local_668);
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
  cVar4 = FUN_141944e10(param_1[8]);
  if (cVar4 != '\0') {
    local_610 = 0;
    plStack_608 = (longlong *)0x0;
    puVar6 = (undefined8 *)FUN_1418fc990();
    FUN_141918400(*puVar6,&local_610);
    plVar12 = plStack_608;
    if (plStack_608 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_608 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_608)(plStack_608);
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
  }
  plVar12 = local_6b8;
  if (local_6b8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_6b8 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_6b8)(local_6b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_6b8 + 8))(local_6b8,1);
      }
    }
  }
  plVar12 = (longlong *)local_678[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar12 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return param_1;
}



// FUNCTION 141888830 FDragDropEvent body=148 status=ok
// SIG undefined FDragDropEvent(void)

undefined8 *
FDragDropEvent::FDragDropEvent(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_1418890d0();
  *param_1 = &PTR__scalar_deleting_destructor__144d5efe0;
  param_1[0xe] = *param_3;
  lVar4 = param_3[1];
  param_1[0xf] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 1418888d0 FHardwareCursor body=146 status=ok
// SIG undefined FHardwareCursor(void)

undefined8 *
FHardwareCursor::FHardwareCursor(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 local_res8;
  
  local_res8._0_4_ = (float)param_3;
  *param_1 = 0;
  local_res8._4_4_ = (float)(param_3 >> 0x20);
  if (0.0 <= (float)local_res8) {
    uVar1 = param_3;
    if (1.0 <= (float)local_res8) {
      local_res8 = CONCAT44(local_res8._4_4_,0x3f800000);
      uVar1 = local_res8;
    }
  }
  else {
    local_res8 = (ulonglong)(uint)local_res8._4_4_ << 0x20;
    uVar1 = local_res8;
  }
  local_res8 = uVar1;
  if (0.0 <= local_res8._4_4_) {
    if (1.0 <= local_res8._4_4_) {
      local_res8 = CONCAT44(0x3f800000,(float)local_res8);
    }
  }
  else {
    local_res8 = local_res8 & 0xffffffff;
  }
  cVar2 = LoadCursorFromAniOrCur();
  if (cVar2 == '\0') {
    FUN_1418a4110(param_1,param_2,local_res8);
  }
  return param_1;
}



// FUNCTION 141888970 FInputChord body=176 status=ok
// SIG undefined FInputChord(void)

undefined8 * FInputChord::FInputChord(undefined8 *param_1,byte param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  lVar4 = param_3[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfffffff0;
  *(uint *)(param_1 + 3) =
       *(uint *)(param_1 + 3) | (param_2 & 1 | param_2 & 2) * 2 | param_2 >> 2 & 1 | param_2 & 8;
  plVar5 = (longlong *)param_3[2];
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



// FUNCTION 141888a20 FInputChord body=180 status=ok
// SIG undefined FInputChord(void)

undefined8 * FInputChord::FInputChord(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfffffff0;
  *(uint *)(param_1 + 3) =
       *(uint *)(param_1 + 3) | (param_3 & 1 | param_3 & 2) * 2 | param_3 >> 2 & 1 | param_3 & 8;
  plVar5 = (longlong *)param_2[2];
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



// FUNCTION 141888ae0 FKeyEvent body=98 status=ok
// SIG undefined FKeyEvent(void)

undefined8 * FKeyEvent::FKeyEvent(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_144d56560;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR__scalar_deleting_destructor__144d56578;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  return param_1;
}



// FUNCTION 141888b50 FKeyEvent body=200 status=ok
// SIG undefined FKeyEvent(void)

undefined8 *
FKeyEvent::FKeyEvent
          (undefined8 *param_1,undefined8 *param_2,undefined2 *param_3,undefined4 param_4,
          undefined1 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_144d56560;
  *(undefined2 *)(param_1 + 1) = *param_3;
  *(undefined1 *)((longlong)param_1 + 10) = param_5;
  *param_1 = &PTR__scalar_deleting_destructor__144d56578;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
  param_1[2] = 0;
  param_1[3] = *param_2;
  param_1[4] = param_2[1];
  lVar4 = param_2[2];
  param_1[5] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 6) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_7;
  plVar5 = (longlong *)param_2[2];
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



// FUNCTION 141888c20 FMenuBase body=173 status=ok
// SIG undefined FMenuBase(void)

undefined8 * FMenuBase::FMenuBase(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144d5f3f8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  param_1[6] = *param_2;
  lVar4 = param_2[1];
  param_1[7] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41) = param_3;
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



// FUNCTION 141888cd0 FMenuInHostWidget body=183 status=ok
// SIG undefined FMenuInHostWidget(void)

undefined8 *
FMenuInHostWidget::FMenuInHostWidget
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_3;
  local_10 = param_3[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FMenuBase::FMenuBase(param_1,&local_18,param_4);
  *param_1 = &PTR_FUN_144d5f4b8;
  param_1[9] = *param_2;
  lVar4 = param_2[1];
  param_1[10] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
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



// FUNCTION 141888d90 FMenuInWindow body=237 status=ok
// SIG undefined FMenuInWindow(void)

undefined8 *
FMenuInWindow::FMenuInWindow
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_3;
  local_10 = param_3[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FMenuBase::FMenuBase(param_1,&local_18,param_4);
  *param_1 = &PTR_FUN_144d5f438;
  param_1[9] = *param_2;
  lVar4 = param_2[1];
  param_1[10] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
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
  return param_1;
}



// FUNCTION 141888e80 FUN_141888e80 body=582 status=ok
// SIG undefined FUN_141888e80(void)

undefined8 * FUN_141888e80(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 *local_28;
  undefined1 *local_20;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144d5fb68;
  *(undefined2 *)(param_1 + 3) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 4) = 0x3f000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FKey::operator=(param_1 + 5,&DAT_1469ea3d8);
  FKey::operator=(param_1 + 8,&DAT_1469ea3f0);
  local_res8[0] = 0;
  local_28 = &DAT_1469e99e8;
  local_20 = local_res8;
  FUN_14187fb10(param_1 + 0xb,local_res10,&local_28,0);
  local_res8[0] = 0;
  local_28 = &DAT_1469ea600;
  local_20 = local_res8;
  FUN_14187fb10(param_1 + 0xb,local_res10,&local_28,0);
  local_res8[0] = 1;
  local_28 = &DAT_1469e9a18;
  local_20 = local_res8;
  FUN_14187fb10(param_1 + 0xb,local_res10,&local_28,0);
  local_res8[0] = 1;
  local_28 = &DAT_1469ea5e8;
  local_20 = local_res8;
  FUN_14187fb10(param_1 + 0xb,local_res10,&local_28,0);
  local_res8[0] = 2;
  local_28 = &DAT_1469e9a00;
  local_20 = local_res8;
  FUN_14187fb10(param_1 + 0xb,local_res10,&local_28,0);
  local_res8[0] = 2;
  local_28 = &DAT_1469ea5b8;
  local_20 = local_res8;
  FUN_14187fb10(param_1 + 0xb,local_res10,&local_28,0);
  local_res8[0] = 3;
  local_28 = &DAT_1469e9a30;
  local_20 = local_res8;
  FUN_14187fb10(param_1 + 0xb,local_res10,&local_28,0);
  local_res8[0] = 3;
  local_28 = &DAT_1469ea5d0;
  local_20 = local_res8;
  FUN_14187fb10(param_1 + 0xb,local_res10,&local_28,0);
  return param_1;
}



// FUNCTION 1418890d0 FUN_1418890d0 body=173 status=ok
// SIG undefined FUN_1418890d0(void)

undefined8 * FUN_1418890d0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_144d56560;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR__scalar_deleting_destructor__144d565c0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  lVar1 = *(longlong *)(param_2 + 0x48);
  param_1[9] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)((longlong)param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
  *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)(param_2 + 0x5d);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 141889180 FUN_141889180 body=285 status=ok
// SIG undefined FUN_141889180(void)

undefined8 *
FUN_141889180(undefined8 *param_1,undefined4 param_2,float *param_3,float *param_4,
             undefined8 param_5,undefined8 *param_6,undefined4 param_7,undefined2 *param_8)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  *param_1 = &PTR_FUN_144d56560;
  *(undefined2 *)(param_1 + 1) = *param_8;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d565c0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = *(undefined8 *)param_3;
  param_1[4] = *(undefined8 *)param_4;
  fVar3 = *param_3;
  fVar4 = *param_4;
  *(float *)((longlong)param_1 + 0x2c) = param_3[1] - param_4[1];
  *(float *)(param_1 + 5) = fVar3 - fVar4;
  param_1[6] = param_5;
  param_1[7] = *param_6;
  param_1[8] = param_6[1];
  lVar6 = param_6[2];
  param_1[9] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 10) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = param_7;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  plVar7 = (longlong *)param_6[2];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1418892a0 FUN_1418892a0 body=288 status=ok
// SIG undefined FUN_1418892a0(void)

undefined8 *
FUN_1418892a0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,float *param_4,
             float *param_5,undefined8 param_6,undefined8 *param_7,undefined4 param_8,
             undefined2 *param_9)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined2 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_144d56560;
  uVar6 = *param_9;
  *param_1 = &PTR__scalar_deleting_destructor__144d565c0;
  *(undefined2 *)(param_1 + 1) = uVar6;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2;
  param_1[2] = 0;
  param_1[3] = *(undefined8 *)param_4;
  param_1[4] = *(undefined8 *)param_5;
  fVar3 = *param_4;
  fVar4 = *param_5;
  *(float *)((longlong)param_1 + 0x2c) = param_4[1] - param_5[1];
  *(float *)(param_1 + 5) = fVar3 - fVar4;
  param_1[6] = param_6;
  param_1[7] = *param_7;
  param_1[8] = param_7[1];
  lVar7 = param_7[2];
  param_1[9] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 10) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = param_8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  plVar8 = (longlong *)param_7[2];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1418893c0 FUN_1418893c0 body=3087 status=ok
// SIG undefined FUN_1418893c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1418893c0(undefined8 *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  double dVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined1 local_1f8 [4];
  undefined1 local_1f4 [4];
  LARGE_INTEGER local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined4 *local_1d8;
  undefined8 *local_1d0;
  undefined4 *local_1c8;
  undefined8 *local_1c0;
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  longlong local_1a8 [2];
  undefined1 local_198 [8];
  undefined1 local_190 [320];
  longlong *local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  FUN_1417edce0();
  *param_1 = &PTR__scalar_deleting_destructor__144d5f020;
  param_1[0xf] = &PTR_LAB_144d5f1c8;
  uVar7 = FWidgetPath::FWidgetPath(local_198);
  FUN_1417f3670(param_1 + 0x10,uVar7);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_48);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_50 + 1;
    lVar13 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  FUN_140456b10(local_190);
  plVar14 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x14) = 0xbf800000;
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x15) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0xbf800000;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x104) = 0x101;
  param_1[0x21] = 0x3f800000;
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
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0x100;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0xffffffffffffffff;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 2;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  plVar8 = (longlong *)operator_new(8);
  plVar11 = plVar14;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_StartProfileThreadUsage_144d5fba8;
    plVar11 = plVar8;
  }
  plVar9 = (longlong *)operator_new(0x18);
  plVar8 = plVar14;
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *plVar9 = (longlong)&PTR_FUN_144146c40;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    plVar9[2] = (longlong)plVar11;
    plVar8 = plVar9;
  }
  param_1[0x8e] = plVar11;
  param_1[0x8f] = plVar8;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0x8e,plVar11,plVar11);
  QueryPerformanceCounter(&local_1f0);
  dVar4 = (double)local_1f0.QuadPart * DAT_1468b02f8;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0x3d088889;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0x3d088889;
  param_1[0x90] = dVar4 + 16777216.0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0xab) = 0x3dcccccd;
  param_1[0xac] = 0;
  param_1[0xad] = DAT_1468b5d88;
  *(undefined1 *)(param_1 + 0xae) = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  *(undefined2 *)(param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0xb5) = 0;
  param_1[0xb6] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  local_228 = (undefined8 *)((ulonglong)local_228._4_4_ << 0x20);
  uVar7 = (**(code **)(*DAT_1468b1f88 + 0x28))
                    (DAT_1468b1f88,L"Slate.AllowToolTips",param_1 + 0xaa,
                     L"Whether to allow tool-tips to spawn at all.");
  param_1[0xb9] = uVar7;
  param_1[0xb8] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  local_228 = (undefined8 *)((ulonglong)local_228 & 0xffffffff00000000);
  uVar7 = (**(code **)(*DAT_1468b1f88 + 0x20))
                    (DAT_1468b1f88,L"Slate.ToolTipDelay",(longlong)param_1 + 0x554,
                     L"Delay in seconds before a tool-tip is displayed near the mouse cursor when hovering over widgets that supply tool-tip data."
                    );
  param_1[0xbb] = uVar7;
  param_1[0xba] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  local_228 = (undefined8 *)((ulonglong)local_228 & 0xffffffff00000000);
  uVar7 = (**(code **)(*DAT_1468b1f88 + 0x20))
                    (DAT_1468b1f88,L"Slate.ToolTipFadeInDuration",param_1 + 0xab,
                     L"How long it takes for a tool-tip to fade in, in seconds.");
  param_1[0xbd] = uVar7;
  param_1[0xbc] = &PTR_FUN_143f3ecf0;
  param_1[0xbe] = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x614) = 0xffffffff;
  param_1[0xc4] = 0;
  uVar7 = FCommandLine::Get();
  cVar5 = FParse::Param(uVar7,L"simmobile");
  if (cVar5 == '\0') {
    uVar7 = FCommandLine::Get();
    cVar5 = FParse::Param(uVar7,L"faketouches");
    uVar6 = 0;
    if (cVar5 == '\0') goto LAB_141889a89;
  }
  uVar6 = 1;
LAB_141889a89:
  *(undefined1 *)(param_1 + 0xc5) = uVar6;
  *(undefined2 *)((longlong)param_1 + 0x629) = 0;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  *(undefined4 *)(param_1 + 200) = 0x1000001;
  plVar11 = DAT_1469eb140;
  lVar13 = *DAT_1469eb140;
  puVar10 = (undefined8 *)FName::FName(local_1b8,"DefaultAppIcon",1);
  uVar7 = (**(code **)(lVar13 + 0x40))(plVar11,*puVar10,0);
  param_1[0xc9] = uVar7;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 2;
  param_1[0xcf] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xd0] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = 0;
  param_1[0xd7] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  plVar8 = (longlong *)operator_new(0x108);
  plVar11 = plVar14;
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_LAB_144d60ec8;
    FUN_141888e80(plVar8 + 2);
    plVar11 = plVar8;
  }
  param_1[0xdb] = plVar11 + 2;
  param_1[0xdc] = plVar11;
  FUN_14044f790(param_1 + 0xdb);
  puVar2 = (uint *)(param_1 + 0xdd);
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0x20;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar2,0);
  *(undefined4 *)(param_1 + 0xe0) = 6;
  puVar15 = (uint *)param_1[0xdf];
  if ((uint *)param_1[0xdf] == (uint *)0x0) {
    puVar15 = puVar2;
  }
  *puVar15 = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 2;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 2;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 2;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xed));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xed),4000);
  *(undefined4 *)(param_1 + 0xf2) = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  plVar11 = (longlong *)operator_new(0x18);
  uStack_210 = plVar14;
  if (plVar11 != (longlong *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 1;
    *plVar11 = (longlong)&PTR_StartProfileThreadUsage_144051100;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    plVar11[2] = (longlong)&PTR_GetPoolName_144d5f008;
    uStack_210 = plVar11;
  }
  local_218 = (code *)(uStack_210 + 2);
  SharedPointerInternals::EnableSharedFromThis(&local_218,local_218,local_218);
  plVar11 = uStack_210;
  param_1[0xf5] = local_218;
  param_1[0xf6] = uStack_210;
  if (uStack_210 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_210 + 1) = (int)uStack_210[1] + 1;
    UNLOCK();
    if (uStack_210 != (longlong *)0x0) {
      LOCK();
      plVar8 = uStack_210 + 1;
      lVar13 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*uStack_210)(uStack_210);
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
  }
  uVar16 = FUN_140a23120(0x3f800000,1,5);
  FGenericPlatformApplicationMisc::ConvertInchesToPixels(uVar16,(longlong)param_1 + 0x10c);
  _DAT_1469f4508 = *(float *)((longlong)param_1 + 0x10c);
  if (_DAT_1469f4508 <= 5.0) {
    _DAT_1469f4508 = 5.0;
  }
  *(float *)((longlong)param_1 + 0x10c) = _DAT_1469f4508;
  if (DAT_1468b6148 != 0) {
    local_228 = &DAT_1468e2360;
    FConfigCacheIni::GetBool(DAT_1468b6148,L"MobileSlateUI",L"bTouchFallbackToMouse",param_1 + 200);
    local_228 = &DAT_1468e2360;
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"CursorControl",L"bAllowSoftwareCursor",(longlong)param_1 + 0x641);
  }
  puVar10 = (undefined8 *)FName::FName(local_1b0,L"InputCore",1);
  uVar7 = *puVar10;
  uVar12 = FUN_14168dc80();
  FUN_141690010(uVar12,uVar7);
  FUN_1418ba3d0();
  FUN_1418ba840();
  uStack_210 = (longlong *)((ulonglong)uStack_210 & 0xffffffff00000000);
  *(undefined1 *)((longlong)param_1 + 0x5a9) = 1;
  local_218 = BuildSettings::IsPromotedBuild;
  plVar11 = param_1 + 0xb6;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar8 != (longlong *)0x0) {
    plVar8[1] = (longlong)param_1;
    *plVar8 = (longlong)&PTR_GetPoolName_1440f9090;
    *(undefined4 *)(plVar8 + 2) = (undefined4)local_218;
    *(undefined4 *)((longlong)plVar8 + 0x14) = local_218._4_4_;
    *(undefined4 *)(plVar8 + 3) = (undefined4)uStack_210;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_210._4_4_;
    lVar13 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar13;
  }
  if (local_1a8 != plVar11) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0xb7) != 0) &&
         (plVar9 = (longlong *)*plVar11, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*plVar11 != 0) {
          lVar13 = FMemory::Realloc(*plVar11,0,0);
          *plVar11 = lVar13;
        }
        *(undefined4 *)(param_1 + 0xb7) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,plVar11);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar13 = FMemory::Realloc(plVar8,0,0);
    if (lVar13 != 0) {
      FMemory::Free(lVar13);
    }
  }
  local_204 = 10;
  local_1d8 = &local_208;
  local_208 = 0;
  local_1d0 = &DAT_1468b5d88;
  TSet<TTuple<FSlateApplication::FUserAndPointer,FVector2D>,TDefaultMapHashableKeyFuncs<FSlateApplication::FUserAndPointer,FVector2D,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FSlateApplication::FUserAndPointer_&&,FVector2D_const_&>_>
            (param_1 + 0x52,local_1f8,&local_1d8,0);
  local_1fc = 10;
  local_1c8 = &local_200;
  local_200 = 0;
  local_1c0 = &DAT_1468b5d88;
  TSet<TTuple<FSlateApplication::FUserAndPointer,FVector2D>,TDefaultMapHashableKeyFuncs<FSlateApplication::FUserAndPointer,FVector2D,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FSlateApplication::FUserAndPointer_&&,FVector2D_const_&>_>
            (param_1 + 0x5c,local_1f4,&local_1c8,0);
  lVar13 = operator_new(0x150);
  if (lVar13 != 0) {
    plVar14 = (longlong *)FUN_141889fd0(lVar13,0,0);
  }
  local_1e0 = FUN_1404f6ae0(plVar14);
  local_1e8 = plVar14;
  SharedPointerInternals::EnableSharedFromThis(&local_1e8,plVar14,plVar14);
  FUN_1418bbd00(param_1,&local_1e8);
  (**(code **)(*(longlong *)param_1[0xdb] + 0x18))();
  puVar15 = (uint *)param_1[0xdf];
  if ((uint *)param_1[0xdf] == (uint *)0x0) {
    puVar15 = puVar2;
  }
  *puVar15 = *puVar15 | 0x20;
  return param_1;
}



// FUNCTION 141889fd0 FUN_141889fd0 body=546 status=ok
// SIG undefined FUN_141889fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141889fd0(undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_328 [32];
  undefined1 local_308 [24];
  longlong *local_2f0;
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [320];
  longlong *local_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [8];
  undefined1 local_180 [320];
  longlong *local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  *param_1 = &PTR_FUN_144d5f000;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x114) = param_3;
  uVar5 = FWidgetPath::FWidgetPath(local_2e8);
  FUN_1417f3670(param_1 + 0x23,uVar5);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_198);
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1a0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar2 = (int *)((longlong)local_1a0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
  FUN_140456b10(local_2e0);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  uVar5 = FWidgetPath::FWidgetPath(local_188);
  FUN_1417f3670(local_308,uVar5);
  FUN_14188ce90(param_1 + 0x23,local_308);
  if (local_2f0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_2f0 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (local_2f0 != (longlong *)0x0)) {
      (**(code **)(*local_2f0 + 8))(local_2f0,1);
    }
  }
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(local_308);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_38);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  FUN_140456b10(local_180);
  *(undefined2 *)(param_1 + 0x29) = 3;
  return param_1;
}



// FUNCTION 14188a200 FUIAction body=135 status=ok
// SIG undefined FUIAction(void)

undefined8 *
FUIAction::FUIAction(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=();
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 2,param_3);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = param_4;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return param_1;
}



// FUNCTION 14188a290 FUIAction body=36 status=ok
// SIG undefined FUIAction(void)

undefined8 * FUIAction::FUIAction(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 14188a2c0 FUN_14188a2c0 body=1143 status=ok
// SIG undefined FUN_14188a2c0(void)

longlong * FUN_14188a2c0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50 [16];
  longlong *local_40;
  
  plVar11 = (longlong *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  FText::FText(param_1 + 2);
  FText::FText(param_1 + 5);
  param_1[8] = 0;
  param_1[9] = 0;
  FSlateIcon::FSlateIcon(param_1 + 10);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_2;
  *(undefined4 *)(param_1 + 0x11) = 1;
  iVar12 = (int)param_1[1];
  if (iVar12 != 0) {
    plVar10 = (longlong *)(*param_1 + 8);
    do {
      plVar5 = (longlong *)*plVar10;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
      plVar10 = plVar10 + 2;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  lVar9 = 2;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,2);
  }
  plVar5 = (longlong *)operator_new(0x20);
  plVar10 = plVar11;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = DAT_1469eae28;
    plVar5[1] = DAT_1469eae30;
    lVar4 = DAT_1469eae38;
    plVar5[2] = DAT_1469eae38;
    if (lVar4 != 0) {
      LOCK();
      piVar2 = (int *)(lVar4 + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    *(uint *)(plVar5 + 3) = *(uint *)(plVar5 + 3) & 0xfffffff0;
    plVar10 = plVar5;
  }
  local_88 = plVar10;
  plVar5 = (longlong *)operator_new(0x18);
  local_80 = plVar11;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_144d5f3e8;
    plVar5[2] = (longlong)plVar10;
    local_80 = plVar5;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_88,plVar10,plVar10);
  iVar12 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar12 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar12);
  }
  plVar10 = local_80;
  puVar7 = (undefined8 *)((longlong)iVar12 * 0x10 + *param_1);
  *puVar7 = local_88;
  puVar7[1] = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_80 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  plVar5 = (longlong *)operator_new(0x20);
  plVar10 = plVar11;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = DAT_1469eae28;
    plVar5[1] = DAT_1469eae30;
    lVar4 = DAT_1469eae38;
    plVar5[2] = DAT_1469eae38;
    if (lVar4 != 0) {
      LOCK();
      piVar2 = (int *)(lVar4 + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    *(uint *)(plVar5 + 3) = *(uint *)(plVar5 + 3) & 0xfffffff0;
    plVar10 = plVar5;
  }
  local_78 = plVar10;
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_144d5f3e8;
    plVar5[2] = (longlong)plVar10;
    plVar11 = plVar5;
  }
  local_70 = plVar11;
  SharedPointerInternals::EnableSharedFromThis(&local_78,plVar10,plVar10);
  iVar12 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar12 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar12);
  }
  plVar11 = local_70;
  puVar7 = (undefined8 *)((longlong)iVar12 * 0x10 + *param_1);
  *puVar7 = local_78;
  puVar7[1] = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_70 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
  }
  local_68 = DAT_1469eae28;
  local_60 = DAT_1469eae30;
  local_58 = DAT_1469eae38;
  if (DAT_1469eae38 != 0) {
    LOCK();
    *(int *)(DAT_1469eae38 + 8) = *(int *)(DAT_1469eae38 + 8) + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FInputChord::FInputChord(local_50,&local_68,0);
  iVar12 = (int)param_1[9];
  if (iVar12 != 0) {
    plVar11 = (longlong *)(param_1[8] + 0x10);
    do {
      plVar10 = (longlong *)*plVar11;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar10 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      plVar11 = plVar11 + 4;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 8,2);
  }
  do {
    iVar12 = (int)param_1[9];
    *(int *)(param_1 + 9) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0x4c) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 8,iVar12);
    }
    puVar8 = (undefined8 *)((longlong)iVar12 * 0x20 + param_1[8]);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = *puVar7;
      puVar8[1] = puVar7[1];
      lVar4 = puVar7[2];
      puVar8[2] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      *(uint *)(puVar8 + 3) =
           *(uint *)(puVar8 + 3) ^ (*(uint *)(puVar8 + 3) ^ *(uint *)(puVar7 + 3)) & 1;
      uVar6 = (*(uint *)(puVar8 + 3) ^ *(uint *)(puVar7 + 3)) & 2 ^ *(uint *)(puVar8 + 3);
      *(uint *)(puVar8 + 3) = uVar6;
      uVar6 = (*(uint *)(puVar7 + 3) ^ uVar6) & 4 ^ uVar6;
      *(uint *)(puVar8 + 3) = uVar6;
      *(uint *)(puVar8 + 3) = (*(uint *)(puVar7 + 3) ^ uVar6) & 8 ^ uVar6;
    }
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14188a740 FWeakWidgetPath body=150 status=ok
// SIG undefined FWeakWidgetPath(void)

undefined8 * FWeakWidgetPath::FWeakWidgetPath(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  *param_1 = 0;
  iVar4 = *(int *)(param_2 + 1);
  puVar3 = (undefined8 *)*param_2;
  *(int *)(param_1 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar4,0);
    puVar2 = (undefined8 *)*param_1;
    do {
      *puVar2 = *puVar3;
      lVar1 = puVar3[1];
      puVar2[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
        UNLOCK();
      }
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[2] = param_2[2];
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14188a7e0 FWidgetPath body=138 status=ok
// SIG undefined FWidgetPath(void)

longlong FWidgetPath::FWidgetPath(longlong param_1,longlong param_2)

{
  FArrangedChildren::FArrangedChildren();
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  *(undefined8 *)(param_2 + 0x158) = 0;
  return param_1;
}



// FUNCTION 14188a870 UAnimNotifyState body=37 status=ok
// SIG undefined UAnimNotifyState(void)

undefined8 * UAnimNotifyState::UAnimNotifyState(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_143fca7c0;
  return param_1;
}



// FUNCTION 14188a8a0 FUN_14188a8a0 body=130 status=ok
// SIG undefined FUN_14188a8a0(void)

void FUN_14188a8a0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar4 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar5 = (longlong *)(lVar4 + 8);
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar5 + 1);
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar4 = *param_1;
  }
  if (lVar4 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14188a930 FUN_14188a930 body=175 status=ok
// SIG undefined FUN_14188a930(void)

void FUN_14188a930(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  plVar4 = (longlong *)*param_1;
  iVar5 = *(int *)(param_1 + 1);
  if (iVar5 != 0) {
    do {
      if ((int)plVar4[1] == 0) {
        plVar3 = (longlong *)*plVar4;
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*plVar4;
        plVar2 = plVar3;
      }
      if (plVar2 == (longlong *)0x0) {
        if (((int)plVar4[1] != 0) && (plVar3 != (longlong *)0x0)) {
          lVar1 = *plVar3;
          goto LAB_14188a982;
        }
      }
      else {
        lVar1 = *plVar2;
        plVar3 = plVar2;
LAB_14188a982:
        (**(code **)(lVar1 + 0x28))(plVar3,0);
        if (*plVar4 != 0) {
          lVar1 = FMemory::Realloc(*plVar4,0,0);
          *plVar4 = lVar1;
        }
        *(undefined4 *)(plVar4 + 1) = 0;
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
    return;
  }
  return;
}



// FUNCTION 14188a9e0 ~TArray<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,TSizedDefaultAllocator<32>_> body=141 status=ok
// SIG undefined ~TArray<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,TSizedDefaultAllocator<32>_>(void)

void TArray<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,TSizedDefaultAllocator<32>_>
     ::
     ~TArray<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,TSizedDefaultAllocator<32>_>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *(undefined4 *)(plVar1 + 9) = 0;
      if (plVar1[8] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,EKeys::FCategoryDisplayInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(plVar1,0);
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar1);
  return;
}



// FUNCTION 14188aa70 FUN_14188aa70 body=183 status=ok
// SIG undefined FUN_14188aa70(void)

void FUN_14188aa70(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x148);
    do {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(plVar7 + 1);
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
      FUN_140456b10(plVar7 + -0x28);
      plVar7 = plVar7 + 0x2c;
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



// FUNCTION 14188ab30 FUN_14188ab30 body=89 status=ok
// SIG undefined FUN_14188ab30(void)

void FUN_14188ab30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x30);
  plVar4 = *(longlong **)(param_1 + 0x20);
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



// FUNCTION 14188ab90 ~TSparseArray<TSetElement<TTuple<int,FUserNavigationState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=244 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<int,FUserNavigationState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<int,FUserNavigationState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<int,FUserNavigationState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar1 = (longlong)local_1c * 0x60 + *local_38;
      *(undefined4 *)(lVar1 + 0x50) = 0;
      if (*(longlong *)(lVar1 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar1 + 8);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14188ac90 ~TSparseArray<TSetElement<TTuple<FSlateApplication::FUserAndPointer,FSlateApplication::FDragDetector::FDragDetectionState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=196 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FSlateApplication::FUserAndPointer,FSlateApplication::FDragDetector::FDragDetectionState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FSlateApplication::FUserAndPointer,FSlateApplication::FDragDetector::FDragDetectionState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FSlateApplication::FUserAndPointer,FSlateApplication::FDragDetector::FDragDetectionState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_14188b400((longlong)local_1c * 0x58 + 8 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1,0);
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



// FUNCTION 14188ad60 ~TSparseArray<TSetElement<TTuple<FName,FInputBindingManager::FContextEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FName,FInputBindingManager::FContextEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FName,FInputBindingManager::FContextEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FName,FInputBindingManager::FContextEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_14188ae21;
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
LAB_14188ae21:
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
      FInputBindingManager::FContextEntry::~FContextEntry((longlong)iStack_1c * 0x80 + 8 + *param_1)
      ;
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
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



// FUNCTION 14188aef0 ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction> body=115 status=ok
// SIG undefined ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>(void)

void UE::Core::Private::Tuple::
     TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>
     ::
     ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>
               (longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x30);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x10);
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



// FUNCTION 14188af70 FUN_14188af70 body=357 status=ok
// SIG undefined FUN_14188af70(void)

void FUN_14188af70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x298);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x280);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x240);
  plVar4 = *(longlong **)(param_1 + 0x230);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x200);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x198);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x178);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x168);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x158);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x148);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x138);
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



// FUNCTION 14188b0e0 FUN_14188b0e0 body=135 status=ok
// SIG undefined FUN_14188b0e0(void)

void FUN_14188b0e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x168);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x158);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x118);
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 14188b170 FUN_14188b170 body=343 status=ok
// SIG undefined FUN_14188b170(void)

void FUN_14188b170(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x240);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x228);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x208);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1e0);
  plVar4 = *(longlong **)(param_1 + 0x1d0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1a0);
  plVar4 = *(longlong **)(param_1 + 0x180);
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



// FUNCTION 14188b2d0 FUN_14188b2d0 body=124 status=ok
// SIG undefined FUN_14188b2d0(void)

void FUN_14188b2d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  plVar4 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 14188b350 ~FContextEntry body=168 status=ok
// SIG undefined ~FContextEntry(void)

void FInputBindingManager::FContextEntry::~FContextEntry(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[0xd];
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
  TArray<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,TSizedDefaultAllocator<32>_>
  ::
  ~TArray<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,TSizedDefaultAllocator<32>_>
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
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14188b400 FUN_14188b400 body=131 status=ok
// SIG undefined FUN_14188b400(void)

void FUN_14188b400(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1);
  return;
}



// FUNCTION 14188b490 ~FDragDropEvent body=96 status=ok
// SIG undefined ~FDragDropEvent(void)

void FDragDropEvent::~FDragDropEvent(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x78);
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
  FPointerEvent::~FPointerEvent(param_1);
  return;
}



// FUNCTION 14188b4f0 FUN_14188b4f0 body=573 status=ok
// SIG undefined FUN_14188b4f0(void)

void FUN_14188b4f0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d605a8;
  plVar4 = (longlong *)param_1[0x1a];
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
  plVar4 = (longlong *)param_1[0x18];
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
  plVar4 = (longlong *)param_1[0x16];
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
  plVar4 = (longlong *)param_1[0x14];
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
  plVar4 = (longlong *)param_1[0x12];
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
  plVar4 = (longlong *)param_1[0x10];
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
  plVar4 = (longlong *)param_1[0xe];
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
  plVar4 = (longlong *)param_1[10];
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
  *param_1 = &PTR__scalar_deleting_destructor__144d60598;
  FUN_14188b2d0(param_1 + 1);
  return;
}



// FUNCTION 14188b730 FUN_14188b730 body=147 status=ok
// SIG undefined FUN_14188b730(void)

void FUN_14188b730(longlong param_1)

{
  if (*(char *)(param_1 + 0xf8) != '\0') {
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  if (*(char *)(param_1 + 0xe0) != '\0') {
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  if (*(char *)(param_1 + 200) != '\0') {
    *(undefined1 *)(param_1 + 200) = 0;
  }
  if (*(char *)(param_1 + 0xb0) != '\0') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  if (*(char *)(param_1 + 0x98) != '\0') {
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  if (*(char *)(param_1 + 0x80) != '\0') {
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  if (*(char *)(param_1 + 0x68) != '\0') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 14188b7d0 FUN_14188b7d0 body=16 status=ok
// SIG undefined FUN_14188b7d0(void)

void FUN_14188b7d0(longlong *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014188b7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DestroyCursor();
    return;
  }
  return;
}



// FUNCTION 14188b7e0 FUN_14188b7e0 body=143 status=ok
// SIG undefined FUN_14188b7e0(void)

void FUN_14188b7e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[7];
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 3);
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = &PTR_FUN_14410aec8;
  return;
}



// FUNCTION 14188b870 ~FMenuStack body=446 status=ok
// SIG undefined ~FMenuStack(void)

void FMenuStack::~FMenuStack(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xd0);
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
  plVar4 = *(longlong **)(param_1 + 0xc0);
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
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x60,0);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 14188ba30 FUN_14188ba30 body=288 status=ok
// SIG undefined FUN_14188ba30(void)

void FUN_14188ba30(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d5fb68;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FUserNavigationState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FUserNavigationState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xb,0);
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[10];
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
  plVar4 = (longlong *)param_1[7];
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
  plVar4 = (longlong *)param_1[2];
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
  return;
}



// FUNCTION 14188bb50 FUN_14188bb50 body=151 status=ok
// SIG undefined FUN_14188bb50(void)

void FUN_14188bb50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x20);
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



// FUNCTION 14188bbf0 FUN_14188bbf0 body=1738 status=ok
// SIG undefined FUN_14188bbf0(void)

void FUN_14188bbf0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d5f020;
  param_1[0xf] = &PTR_LAB_144d5f1c8;
  FUN_1418c6880();
  FUN_1418c6710();
  puVar4 = (undefined8 *)param_1[0xc4];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
    param_1[0xc4] = 0;
  }
  plVar5 = (longlong *)param_1[0xf6];
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xf3);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xed));
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xea);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xe7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xe4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xe1);
  if (param_1[0xdf] != 0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)param_1[0xdc];
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xd9);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (param_1[0xd7] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xcf,0);
  if (param_1[0xd3] != 0) {
    FMemory::Free();
  }
  if (param_1[0xcf] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xca);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc6);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xbe);
  param_1[0xbc] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0xbd],1);
  param_1[0xba] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0xbb],1);
  param_1[0xb8] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0xb9],1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb6);
  plVar5 = (longlong *)param_1[0xb3];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  plVar5 = (longlong *)param_1[0xb1];
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
  plVar5 = (longlong *)param_1[0xa9];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  plVar5 = (longlong *)param_1[0xa7];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  plVar5 = (longlong *)param_1[0xa5];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  plVar5 = (longlong *)param_1[0xa3];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  FUN_14188a930(param_1 + 0xa0);
  plVar5 = (longlong *)param_1[0x9e];
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x9b);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x99);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x97);
  plVar5 = (longlong *)param_1[0x96];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x93);
  plVar5 = (longlong *)param_1[0x8f];
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
  plVar5 = (longlong *)param_1[0x8d];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  FUN_14188a8a0(param_1 + 0x8a);
  *(undefined4 *)(param_1 + 0x89) = 0;
  if (param_1[0x88] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FSlateApplication::FUserAndPointer,FSlateApplication::FDragDetector::FDragDetectionState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FSlateApplication::FUserAndPointer,FSlateApplication::FDragDetector::FDragDetectionState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x80);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x7c);
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0x77);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x75);
  plVar5 = (longlong *)param_1[0x73];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  plVar5 = (longlong *)param_1[0x71];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  *(undefined4 *)(param_1 + 0x6f) = 0;
  if (param_1[0x6e] != 0) {
    FMemory::Free();
  }
  FUN_141898170(param_1 + 0x66,0);
  if (param_1[0x6a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x66] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (param_1[100] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5b) = 0;
  if (param_1[0x5a] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x52);
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FMemory::Free();
  }
  FUN_141898170(param_1 + 0x48,0);
  if (param_1[0x4c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x48] != 0) {
    FMemory::Free();
  }
  FMenuStack::~FMenuStack(param_1 + 0x2c);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x2a);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x28);
  plVar5 = (longlong *)param_1[0x27];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x24);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x16,0);
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)param_1[0x13];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0x10);
  param_1[0xf] = &PTR_FUN_144316150;
  FUN_1417f70b0(param_1);
  return;
}



// FUNCTION 14188c2c0 FUN_14188c2c0 body=160 status=ok
// SIG undefined FUN_14188c2c0(void)

void FUN_14188c2c0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d5f000;
  plVar4 = (longlong *)param_1[0x28];
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
  plVar4 = (longlong *)param_1[0x26];
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
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0x23);
  FUN_14188b730(param_1 + 1);
  return;
}



// FUNCTION 14188c360 FUN_14188c360 body=109 status=ok
// SIG undefined FUN_14188c360(void)

void FUN_14188c360(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x350);
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
  plVar3 = *(longlong **)(param_1 + 0x330);
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
  FUN_14188c3d0(param_1);
  return;
}



// FUNCTION 14188c3d0 FUN_14188c3d0 body=149 status=ok
// SIG undefined FUN_14188c3d0(void)

void FUN_14188c3d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x318);
  plVar4 = *(longlong **)(param_1 + 0x310);
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
  return;
}



// FUNCTION 14188c470 FUN_14188c470 body=398 status=ok
// SIG undefined FUN_14188c470(void)

void FUN_14188c470(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x420);
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
  FUN_1417f61f0(param_1 + 0x3c0);
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
  plVar4 = *(longlong **)(param_1 + 0x398);
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
  plVar4 = *(longlong **)(param_1 + 0x388);
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
  plVar4 = *(longlong **)(param_1 + 0x358);
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
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
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
  return;
}



// FUNCTION 14188c600 FUN_14188c600 body=397 status=ok
// SIG undefined FUN_14188c600(void)

void FUN_14188c600(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x440);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x428);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x408);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3e0);
  plVar4 = *(longlong **)(param_1 + 0x3d0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3a0);
  plVar4 = *(longlong **)(param_1 + 0x380);
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
  plVar4 = *(longlong **)(param_1 + 0x340);
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
  plVar4 = *(longlong **)(param_1 + 0x330);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x318);
  plVar4 = *(longlong **)(param_1 + 0x300);
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
  *(undefined ***)(param_1 + 0x2f0) = &PTR__purecall_1441594e8;
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 14188c790 FUN_14188c790 body=393 status=ok
// SIG undefined FUN_14188c790(void)

void FUN_14188c790(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3d0);
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
  plVar4 = *(longlong **)(param_1 + 0x3a0);
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
  plVar4 = *(longlong **)(param_1 + 0x380);
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
  FUN_1417f61f0(param_1 + 800);
  plVar4 = *(longlong **)(param_1 + 0x318);
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
  plVar4 = *(longlong **)(param_1 + 0x300);
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



// FUNCTION 14188c920 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<FName,EKeys::FCategoryDisplayInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14188ca5d;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_14188ca5d:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        FUN_14187de40(param_1,local_res8,(longlong)iStack_3c * 0x30 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 14188cb00 operator= body=158 status=ok
// SIG undefined operator=(void)

undefined1 * FCursorReply::operator=(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)(param_2 + 8);
  if ((undefined8 *)(param_1 + 8) != puVar1) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    *puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,param_2 + 0x10);
  }
  puVar1 = (undefined8 *)(param_2 + 0x18);
  if ((undefined8 *)(param_1 + 0x18) != puVar1) {
    *(undefined8 *)(param_1 + 0x18) = *puVar1;
    *puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,param_2 + 0x20);
  }
  puVar1 = (undefined8 *)(param_2 + 0x28);
  if ((undefined8 *)(param_1 + 0x28) != puVar1) {
    *(undefined8 *)(param_1 + 0x28) = *puVar1;
    *puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,param_2 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 14188cba0 operator= body=88 status=ok
// SIG undefined operator=(void)

longlong FInputChord::operator=(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  FKey::operator=();
  *(uint *)(param_1 + 0x18) =
       *(uint *)(param_1 + 0x18) ^ (*(uint *)(param_1 + 0x18) ^ *(uint *)(param_2 + 0x18)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x18) ^ *(uint *)(param_2 + 0x18)) & 2 ^ *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x18)) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x18) = uVar1;
  *(uint *)(param_1 + 0x18) = (uVar1 ^ *(uint *)(param_2 + 0x18)) & 8 ^ uVar1;
  return param_1;
}



// FUNCTION 14188cc00 FUN_14188cc00 body=416 status=ok
// SIG undefined FUN_14188cc00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14188cc00(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  uStack_60 = (longlong *)param_2[1];
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
    UNLOCK();
  }
  if (&local_68 != param_1) {
    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uVar5 = *param_1;
    plVar4 = (longlong *)param_1[1];
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = (undefined4)uStack_60;
    uStack_3c = uStack_60._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 4) = local_68._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
    local_68 = uVar5;
    uStack_60 = plVar4;
  }
  plVar4 = uStack_60;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = uStack_60 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_60 + 8))(uStack_60,1);
      }
    }
  }
  plVar4 = (longlong *)param_2[3];
  puVar2 = param_1 + 2;
  uVar5 = param_2[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_58 = uVar5;
  plStack_50 = plVar4;
  if (&local_58 != puVar2) {
    local_58 = *puVar2;
    plStack_50 = (longlong *)param_1[3];
    *puVar2 = uVar5;
    param_1[3] = plVar4;
    local_38 = uVar5;
    plStack_30 = plVar4;
  }
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_50 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar4 = param_1 + 4;
  if (param_2 + 4 != plVar4) {
    if ((*(int *)(param_2 + 5) == 0) || (plVar6 = (longlong *)param_2[4], plVar6 == (longlong *)0x0)
       ) {
      if ((*(int *)(param_1 + 5) != 0) && (plVar6 = (longlong *)*plVar4, plVar6 != (longlong *)0x0))
      {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar4 != 0) {
          lVar7 = FMemory::Realloc(*plVar4,0,0);
          *plVar4 = lVar7;
        }
        *(undefined4 *)(param_1 + 5) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar4);
    }
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 14188cda0 FUN_14188cda0 body=226 status=ok
// SIG undefined FUN_14188cda0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14188cda0(undefined1 *param_1,undefined1 *param_2)

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
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_1 = *param_2;
  uStack_30 = *(longlong **)(param_2 + 0x10);
  local_38 = *(undefined8 *)(param_2 + 8);
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar1;
    plVar6 = *(longlong **)(param_1 + 0x10);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0xc) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x14) = uStack_30._4_4_;
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



// FUNCTION 14188ce90 FUN_14188ce90 body=237 status=ok
// SIG undefined FUN_14188ce90(void)

longlong * FUN_14188ce90(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  
  if (param_1 != param_2) {
    lVar4 = *param_1;
    iVar5 = (int)param_1[1];
    if (iVar5 != 0) {
      plVar6 = (longlong *)(lVar4 + 8);
      do {
        plVar3 = (longlong *)*plVar6;
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
        plVar6 = plVar6 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      lVar4 = *param_1;
    }
    if (lVar4 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  plVar6 = param_2 + 2;
  if (param_1 + 2 != plVar6) {
    param_1[2] = *plVar6;
    *plVar6 = 0;
    plVar6 = (longlong *)param_1[3];
    param_1[3] = param_2[3];
    param_2[3] = 0;
    if (plVar6 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 14188cf80 FUN_14188cf80 body=341 status=ok
// SIG undefined FUN_14188cf80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14188cf80(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_1 != param_2) {
    iVar8 = (int)param_1[1];
    if (iVar8 != 0) {
      plVar6 = (longlong *)(*param_1 + 8);
      do {
        plVar3 = (longlong *)*plVar6;
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
        plVar6 = plVar6 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = (int)param_2[1];
    puVar7 = (undefined8 *)*param_2;
    *(int *)(param_1 + 1) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar8);
      puVar5 = (undefined8 *)*param_1;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar5 = *puVar7;
        lVar4 = puVar7[1];
        puVar5[1] = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
          UNLOCK();
        }
        puVar5 = puVar5 + 2;
        puVar7 = puVar7 + 2;
      }
    }
  }
  lVar4 = param_2[2];
  plVar6 = param_1 + 2;
  plVar3 = (longlong *)param_2[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_48 = lVar4;
  plStack_40 = plVar3;
  if (&local_48 != plVar6) {
    local_48 = *plVar6;
    plStack_40 = (longlong *)param_1[3];
    *plVar6 = lVar4;
    param_1[3] = (longlong)plVar3;
    local_38 = lVar4;
    plStack_30 = plVar3;
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plStack_40 + 8))(plStack_40,1);
    }
  }
  return param_1;
}



// FUNCTION 14188d0e0 FUN_14188d0e0 body=277 status=ok
// SIG undefined FUN_14188d0e0(void)

ulonglong FUN_14188d0e0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong in_RAX;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  plVar3 = (longlong *)param_1[1];
  plVar8 = (longlong *)0x0;
  plVar7 = plVar3;
  plVar10 = plVar8;
  if (plVar3 != (longlong *)0x0) {
    in_RAX = 0;
    LOCK();
    uVar6 = *(uint *)(plVar3 + 1);
    bVar11 = uVar6 == 0;
    if (bVar11) {
      *(uint *)(plVar3 + 1) = 0;
    }
    else {
      in_RAX = (ulonglong)uVar6;
    }
    UNLOCK();
    while (plVar7 = plVar8, plVar10 = (longlong *)0x0, !bVar11) {
      uVar4 = (uint)in_RAX;
      LOCK();
      uVar6 = *(uint *)(plVar3 + 1);
      if (uVar4 == uVar6) {
        *(uint *)(plVar3 + 1) = uVar4 + 1;
      }
      else {
        in_RAX = (ulonglong)uVar6;
      }
      UNLOCK();
      if (uVar4 == uVar6) {
        plVar7 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          plVar10 = (longlong *)*param_1;
        }
        break;
      }
      in_RAX = 0;
      LOCK();
      uVar6 = *(uint *)(plVar3 + 1);
      bVar11 = uVar6 == 0;
      if (bVar11) {
        *(uint *)(plVar3 + 1) = 0;
      }
      else {
        in_RAX = (ulonglong)uVar6;
      }
      UNLOCK();
    }
  }
  plVar3 = (longlong *)param_2[1];
  plVar9 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    in_RAX = 0;
    LOCK();
    uVar6 = *(uint *)(plVar3 + 1);
    bVar11 = uVar6 == 0;
    if (bVar11) {
      *(uint *)(plVar3 + 1) = 0;
    }
    else {
      in_RAX = (ulonglong)uVar6;
    }
    UNLOCK();
    while (plVar9 = plVar8, !bVar11) {
      uVar4 = (uint)in_RAX;
      LOCK();
      uVar6 = *(uint *)(plVar3 + 1);
      if (uVar4 == uVar6) {
        *(uint *)(plVar3 + 1) = uVar4 + 1;
      }
      else {
        in_RAX = (ulonglong)uVar6;
      }
      UNLOCK();
      if (uVar4 == uVar6) {
        plVar9 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          plVar8 = (longlong *)*param_2;
        }
        break;
      }
      in_RAX = 0;
      LOCK();
      uVar6 = *(uint *)(plVar3 + 1);
      bVar11 = uVar6 == 0;
      if (bVar11) {
        *(uint *)(plVar3 + 1) = 0;
      }
      else {
        in_RAX = (ulonglong)uVar6;
      }
      UNLOCK();
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    uVar6 = (int)lVar5 - 1;
    in_RAX = (ulonglong)uVar6;
    if (uVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      in_RAX = (ulonglong)(iVar2 - 1U);
      if (iVar2 - 1U == 0) {
        in_RAX = (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    uVar6 = (int)lVar5 - 1;
    in_RAX = (ulonglong)uVar6;
    if (uVar6 == 0) {
      in_RAX = (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        in_RAX = (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (plVar10 == plVar8) {
    uVar6 = *(uint *)(param_2 + 2);
    in_RAX = (ulonglong)uVar6;
    if (*(uint *)(param_1 + 2) == uVar6) {
      return CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14188d200 FUN_14188d200 body=256 status=ok
// SIG undefined FUN_14188d200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14188d200(longlong param_1,undefined8 *param_2)

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
  puVar3 = (undefined8 *)(param_1 + 0x108);
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
    plVar5 = *(longlong **)(param_1 + 0x110);
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    *(undefined4 *)puVar3 = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x10c) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x110) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x114) = uStack_40._4_4_;
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



// FUNCTION 14188d300 operator() body=215 status=ok
// SIG undefined operator()(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void <lambda_ddd4cc22511892b2d026e99d74d8b95d>::operator()(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  byte *pbVar3;
  char *pcVar4;
  longlong lVar5;
  LARGE_INTEGER local_res8;
  
  lVar1 = *param_1;
  pbVar3 = *(byte **)(lVar1 + 0x6f8);
  if (*(byte **)(lVar1 + 0x6f8) == (byte *)0x0) {
    pbVar3 = (byte *)(lVar1 + 0x6e8);
  }
  if ((*pbVar3 & 0x20) != 0) {
    QueryPerformanceCounter(&local_res8);
    lVar5 = 0xb;
    pcVar4 = (char *)(param_2 + 0x10);
    dVar2 = (double)local_res8.QuadPart * DAT_1468b02f8;
    do {
      if ((*pcVar4 != '\0') && (_DAT_1464bfca8 <= (dVar2 + 16777216.0) - *(double *)(pcVar4 + -8)))
      {
        local_res8.QuadPart = 0;
        (**(code **)(*(longlong *)(lVar1 + 0x78) + 0xa0))
                  ((longlong *)(lVar1 + 0x78),5,&local_res8,0,0);
        if (*pcVar4 != '\0') {
          *pcVar4 = '\0';
        }
        pcVar4[8] = '\0';
        pcVar4[9] = '\0';
        pcVar4[10] = '\0';
        pcVar4[0xb] = '\0';
        pcVar4[0xc] = '\0';
        pcVar4[0xd] = '\0';
        pcVar4[0xe] = '\0';
        pcVar4[0xf] = '\0';
      }
      pcVar4 = pcVar4 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14188d3e0 FUN_14188d3e0 body=627 status=ok
// SIG undefined FUN_14188d3e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14188d3e0(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_328 [32];
  undefined **local_308 [9];
  longlong *local_2c0;
  undefined8 local_298;
  longlong *local_290;
  char local_288 [8];
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
  undefined1 local_1c8 [192];
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  if (*(char *)*param_1 != '\0') {
    plVar4 = *(longlong **)(param_3 + 0x38);
    plVar5 = (longlong *)((undefined8 *)param_1[1])[1];
    uVar7 = *(undefined8 *)param_1[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    FUN_1418890d0(local_308,param_4);
    local_308[0] = &PTR__scalar_deleting_destructor__144d5efe0;
    local_298 = uVar7;
    local_290 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
    (**(code **)(*plVar4 + 0xd8))(plVar4,param_2,param_3,local_308);
    plVar4 = local_290;
    if (local_290 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_290 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_290)(local_290);
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
    if (local_2c0 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar4 = local_2c0 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) {
      return param_2;
    }
    (**(code **)*local_2c0)(local_2c0);
    LOCK();
    piVar2 = (int *)((longlong)local_2c0 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return param_2;
    }
    (**(code **)(*local_2c0 + 8))(local_2c0,1);
    return param_2;
  }
  local_1d4 = local_1d4 & 0xffffff00;
  local_280 = 0;
  local_278 = 0;
  local_260 = 0;
  local_208 = 0;
  local_200 = 0;
  local_288[0] = '\0';
  local_268 = 0;
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
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0x20702;
  if (*(char *)(param_4 + 0x5c) != '\0') {
    uVar7 = (**(code **)(**(longlong **)(param_3 + 0x38) + 0xf8))
                      (*(longlong **)(param_3 + 0x38),local_1c8);
    FUN_140439160(local_288,uVar7);
    FUN_140438c20(local_1c8);
    if ((*(char *)(param_4 + 0x5c) != '\0') &&
       ((local_288[0] != '\0' || (*(char *)(param_1[2] + 0x640) == '\0')))) goto LAB_14188d61d;
  }
  uVar7 = (**(code **)(**(longlong **)(param_3 + 0x38) + 0x68))
                    (*(longlong **)(param_3 + 0x38),local_108,param_3,param_4);
  FUN_140439160(local_288,uVar7);
  FUN_140438c20(local_108);
LAB_14188d61d:
  FReply::FReply(param_2,local_288);
  FUN_140438c20(local_288);
  return param_2;
}



// FUNCTION 14188d660 FUN_14188d660 body=344 status=ok
// SIG undefined FUN_14188d660(void)

void FUN_14188d660(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  bool bVar9;
  longlong local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar4 = (longlong *)((longlong *)*param_1)[1];
  lVar5 = *(longlong *)*param_1;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)(param_2 + 0x138);
  bVar9 = false;
  if (*plVar2 != 0) {
    cVar7 = FWidgetPath::IsValid();
    bVar9 = false;
    if (cVar7 != '\0') {
      plVar8 = (longlong *)FUN_141845450(*plVar2,local_28);
      bVar9 = true;
      if (lVar5 == *plVar8) {
        bVar6 = true;
        goto LAB_14188d6c2;
      }
    }
  }
  bVar6 = false;
LAB_14188d6c2:
  if ((bVar9) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_20 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  if ((bVar6) && (local_30 = (longlong *)0x0, plVar2 != &local_38)) {
    *plVar2 = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x140,&local_30);
    plVar2 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_30 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
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
  return;
}



// FUNCTION 14188d7c0 FUN_14188d7c0 body=640 status=ok
// SIG undefined FUN_14188d7c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_14188d7c0(longlong *param_1,char *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_328 [32];
  undefined **local_308 [9];
  longlong *local_2c0;
  longlong local_298;
  longlong *local_290;
  undefined1 local_288 [192];
  undefined1 local_1c8 [192];
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  *param_2 = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x20] = '\0';
  param_2[0x28] = '\0';
  param_2[0x29] = '\0';
  param_2[0x2a] = '\0';
  param_2[0x2b] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  param_2[0x40] = '\0';
  param_2[0x41] = '\0';
  param_2[0x42] = '\0';
  param_2[0x43] = '\0';
  param_2[0x44] = '\0';
  param_2[0x45] = '\0';
  param_2[0x46] = '\0';
  param_2[0x47] = '\0';
  param_2[0x48] = '\0';
  param_2[0x49] = '\0';
  param_2[0x4a] = '\0';
  param_2[0x4b] = '\0';
  param_2[0x4c] = '\0';
  param_2[0x4d] = '\0';
  param_2[0x4e] = '\0';
  param_2[0x4f] = '\0';
  param_2[0x50] = '\0';
  param_2[0x51] = '\0';
  param_2[0x52] = '\0';
  param_2[0x53] = '\0';
  param_2[0x54] = '\0';
  param_2[0x55] = '\0';
  param_2[0x56] = '\0';
  param_2[0x57] = '\0';
  param_2[0x58] = '\0';
  param_2[0x59] = '\0';
  param_2[0x5a] = '\0';
  param_2[0x5b] = '\0';
  param_2[0x5c] = '\0';
  param_2[0x5d] = '\0';
  param_2[0x5e] = '\0';
  param_2[0x5f] = '\0';
  param_2[0x60] = '\0';
  param_2[0x61] = '\0';
  param_2[0x62] = '\0';
  param_2[99] = '\0';
  param_2[100] = '\0';
  param_2[0x65] = '\0';
  param_2[0x66] = '\0';
  param_2[0x67] = '\0';
  param_2[0x68] = '\0';
  param_2[0x69] = '\0';
  param_2[0x6a] = '\0';
  param_2[0x6b] = '\0';
  param_2[0x6c] = '\0';
  param_2[0x6d] = '\0';
  param_2[0x6e] = '\0';
  param_2[0x6f] = '\0';
  param_2[0x70] = '\0';
  param_2[0x71] = '\0';
  param_2[0x72] = '\0';
  param_2[0x73] = '\0';
  param_2[0x74] = '\0';
  param_2[0x75] = '\0';
  param_2[0x76] = '\0';
  param_2[0x77] = '\0';
  param_2[0x78] = '\0';
  param_2[0x79] = '\0';
  param_2[0x7a] = '\0';
  param_2[0x7b] = '\0';
  param_2[0x7c] = '\0';
  param_2[0x7d] = '\0';
  param_2[0x7e] = '\0';
  param_2[0x7f] = '\0';
  param_2[0x80] = '\0';
  param_2[0x81] = '\0';
  param_2[0x82] = '\0';
  param_2[0x83] = '\0';
  param_2[0x84] = '\0';
  param_2[0x85] = '\0';
  param_2[0x86] = '\0';
  param_2[0x87] = '\0';
  param_2[0x88] = '\0';
  param_2[0x89] = '\0';
  param_2[0x8a] = '\0';
  param_2[0x8b] = '\0';
  param_2[0x8c] = '\0';
  param_2[0x8d] = '\0';
  param_2[0x8e] = '\0';
  param_2[0x8f] = '\0';
  param_2[0x90] = '\0';
  param_2[0x91] = '\0';
  param_2[0x92] = '\0';
  param_2[0x93] = '\0';
  param_2[0x94] = '\0';
  param_2[0x95] = '\0';
  param_2[0x96] = '\0';
  param_2[0x97] = '\0';
  param_2[0x98] = '\0';
  param_2[0x99] = '\0';
  param_2[0x9a] = '\0';
  param_2[0x9b] = '\0';
  param_2[0x9c] = '\0';
  param_2[0x9d] = '\0';
  param_2[0x9e] = '\0';
  param_2[0x9f] = '\0';
  param_2[0xa0] = '\0';
  param_2[0xa1] = '\0';
  param_2[0xa2] = '\0';
  param_2[0xa3] = '\0';
  param_2[0xa4] = '\0';
  param_2[0xa5] = '\0';
  param_2[0xa6] = '\0';
  param_2[0xa7] = '\0';
  param_2[0xa8] = '\0';
  param_2[0xa9] = '\0';
  param_2[0xaa] = '\0';
  param_2[0xab] = '\0';
  param_2[0xac] = '\0';
  param_2[0xad] = '\0';
  param_2[0xae] = '\0';
  param_2[0xaf] = '\0';
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  lVar4 = *(longlong *)(*param_1 + 0x580);
  if (lVar4 == 0) {
    if (*(char *)(param_4 + 0x5c) != '\0') {
      uVar7 = (**(code **)(**(longlong **)(param_3 + 0x38) + 0xf0))
                        (*(longlong **)(param_3 + 0x38),local_1c8);
      FUN_140439160(param_2,uVar7);
      FUN_140438c20(local_1c8);
    }
    if (*param_2 == '\0') {
      uVar7 = (**(code **)(**(longlong **)(param_3 + 0x38) + 0x70))
                        (*(longlong **)(param_3 + 0x38),local_108,param_3,param_4);
      FUN_140439160(param_2,uVar7);
      FUN_140438c20(local_108);
    }
  }
  else {
    plVar5 = *(longlong **)(*param_1 + 0x588);
    plVar6 = *(longlong **)(param_3 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    FUN_1418890d0(local_308,param_4);
    local_308[0] = &PTR__scalar_deleting_destructor__144d5efe0;
    local_298 = lVar4;
    local_290 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
    uVar7 = (**(code **)(*plVar6 + 0xd0))(plVar6,local_288,param_3,local_308);
    FUN_140439160(param_2,uVar7);
    FUN_140438c20(local_288);
    plVar5 = local_290;
    if (local_290 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_290 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_290)(local_290);
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
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_2c0 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  return param_2;
}



// FUNCTION 14188da40 FUN_14188da40 body=260 status=ok
// SIG undefined FUN_14188da40(void)

void FUN_14188da40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_2 + 0x118);
  plVar6 = plVar7 + (longlong)*(int *)(param_2 + 0x120) * 2;
  if (plVar7 != plVar6) {
    while (plVar3 = (longlong *)plVar7[1], plVar3 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while( true ) {
        if (bVar8) {
          return;
        }
        LOCK();
        bVar8 = iVar5 == (int)plVar3[1];
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar8) break;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
      if ((longlong *)*plVar7 == (longlong *)0x0) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar7 = plVar3 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 != 1) {
          return;
        }
        (**(code **)(*plVar3 + 8))(plVar3,1);
        return;
      }
      (**(code **)(*(longlong *)*plVar7 + 0x128))();
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
      plVar7 = plVar7 + 2;
      if (plVar7 == plVar6) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 14188db50 FUN_14188db50 body=138 status=ok
// SIG undefined FUN_14188db50(void)

void FUN_14188db50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_2 + 0x138) != &local_18) {
    *(undefined8 *)(param_2 + 0x138) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x140,&local_10);
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



// FUNCTION 14188dbe0 FUN_14188dbe0 body=200 status=ok
// SIG undefined FUN_14188dbe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14188dbe0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  undefined1 local_170 [320];
  longlong *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  uVar4 = *(undefined1 *)(param_1[1] + 0xb0);
  uVar6 = FWidgetPath::FWidgetPath(local_178);
  FUN_1418c2ac0(*param_1,param_2,uVar6,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_28);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  FUN_140456b10(local_170);
  return;
}



// FUNCTION 14188dcb0 FUN_14188dcb0 body=196 status=ok
// SIG undefined FUN_14188dcb0(void)

void FUN_14188dcb0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = *(undefined8 *)*param_1;
  local_10 = (longlong *)((undefined8 *)*param_1)[1];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  cVar6 = FUN_1418090f0(param_2 + 0x118,&local_18);
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (cVar6 == '\0') {
    FUN_1418c2ac0(param_1[1],param_2,param_1[2],*(undefined1 *)param_1[3]);
  }
  return;
}



// FUNCTION 14188dd80 FUN_14188dd80 body=255 status=ok
// SIG undefined FUN_14188dd80(void)

longlong * FUN_14188dd80(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_141972160(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_14188de44;
    }
  }
  bVar4 = 1;
LAB_14188de44:
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



// FUNCTION 14188de80 FUN_14188de80 body=255 status=ok
// SIG undefined FUN_14188de80(void)

longlong * FUN_14188de80(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_14192dae0(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_14188df44;
    }
  }
  bVar4 = 1;
LAB_14188df44:
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



// FUNCTION 14188df80 FUN_14188df80 body=262 status=ok
// SIG undefined FUN_14188df80(void)

longlong * FUN_14188df80(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_1418ee400(*param_1,param_3,*(undefined8 *)param_1[2]);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_14188e04b;
    }
  }
  bVar4 = 1;
LAB_14188e04b:
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



// FUNCTION 14188e090 FUN_14188e090 body=255 status=ok
// SIG undefined FUN_14188e090(void)

longlong * FUN_14188e090(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  SImage::Construct(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_14188e154;
    }
  }
  bVar4 = 1;
LAB_14188e154:
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



// FUNCTION 14188e190 FUN_14188e190 body=255 status=ok
// SIG undefined FUN_14188e190(void)

longlong * FUN_14188e190(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  SSpacer::Construct(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_14188e254;
    }
  }
  bVar4 = 1;
LAB_14188e254:
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



// FUNCTION 14188e290 FUN_14188e290 body=255 status=ok
// SIG undefined FUN_14188e290(void)

longlong * FUN_14188e290(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_141978900(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_14188e354;
    }
  }
  bVar4 = 1;
LAB_14188e354:
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



// FUNCTION 14188e3b0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TCommands<FGenericCommands>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d60598;
  FUN_14188b2d0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14188e400 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SUGLoadingScreen>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 14188e430 FUN_14188e430 body=43 status=ok
// SIG undefined FUN_14188e430(void)

undefined8 * FUN_14188e430(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x398);
  }
  return param_1;
}



// FUNCTION 14188e460 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SSubMenuButton>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x498);
  }
  return param_1;
}



// FUNCTION 14188e490 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SComboRow<TSharedPtr<FString,0>_>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x438);
  }
  return param_1;
}



// FUNCTION 14188e4c0 `scalar_deleting_destructor' body=43 status=ok
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



// FUNCTION 14188e4f0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SUniformGridPanel>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x460);
  }
  return param_1;
}



// FUNCTION 14188e520 FUN_14188e520 body=117 status=ok
// SIG undefined FUN_14188e520(void)

undefined8 * FUN_14188e520(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144d5f398;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 5);
  *param_1 = &PTR_FUN_144d5f358;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14188e5a0 FUN_14188e5a0 body=323 status=ok
// SIG undefined FUN_14188e5a0(void)

undefined8 * FUN_14188e5a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d60e30;
  if (param_1[8] != 0) {
    FUN_141897210();
  }
  plVar4 = (longlong *)param_1[0x12];
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
  plVar4 = (longlong *)param_1[0x10];
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
  plVar4 = (longlong *)param_1[0xe];
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
  plVar4 = (longlong *)param_1[0xc];
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
  plVar4 = (longlong *)param_1[9];
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
  FUN_1417f65a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14188e6f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FDragDropEvent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FDragDropEvent();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14188e730 FUN_14188e730 body=52 status=ok
// SIG undefined FUN_14188e730(void)

undefined8 FUN_14188e730(undefined8 param_1,ulonglong param_2)

{
  FUN_14188b4f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14188e770 FUN_14188e770 body=208 status=ok
// SIG undefined FUN_14188e770(void)

undefined8 * FUN_14188e770(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d5f3d8;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x17);
  plVar4 = (longlong *)param_1[0x16];
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
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FInputBindingManager::FContextEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FInputBindingManager::FContextEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14188e840 FUN_14188e840 body=98 status=ok
// SIG undefined FUN_14188e840(void)

undefined8 * FUN_14188e840(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144d5f358;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14188e8b0 FUN_14188e8b0 body=52 status=ok
// SIG undefined FUN_14188e8b0(void)

undefined8 FUN_14188e8b0(undefined8 param_1,ulonglong param_2)

{
  FUN_14188b7e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14188e8f0 FUN_14188e8f0 body=106 status=ok
// SIG undefined FUN_14188e8f0(void)

undefined8 * FUN_14188e8f0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144d5f4b8;
  plVar3 = (longlong *)param_1[10];
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
  FUN_14188b7e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14188e960 FUN_14188e960 body=62 status=ok
// SIG undefined FUN_14188e960(void)

undefined8 * FUN_14188e960(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144d5f478;
  FUN_14188b7e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14188e9a0 FUN_14188e9a0 body=106 status=ok
// SIG undefined FUN_14188e9a0(void)

undefined8 * FUN_14188e9a0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144d5f438;
  plVar3 = (longlong *)param_1[10];
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
  FUN_14188b7e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14188ea10 FUN_14188ea10 body=52 status=ok
// SIG undefined FUN_14188ea10(void)

undefined8 FUN_14188ea10(undefined8 param_1,ulonglong param_2)

{
  FUN_14188ba30();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 14188ea50 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FExec::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FExec();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14188ea90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FSlateApplication::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14188bbf0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7b8);
  }
  return param_1;
}



// FUNCTION 14188ead0 FUN_14188ead0 body=52 status=ok
// SIG undefined FUN_14188ead0(void)

undefined8 FUN_14188ead0(undefined8 param_1,ulonglong param_2)

{
  FUN_14188c2c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 14188eb10 FUN_14188eb10 body=427 status=ok
// SIG undefined FUN_14188eb10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14188eb10(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong *local_190;
  undefined1 local_188 [8];
  undefined1 local_180 [320];
  longlong *local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *param_1 = &PTR_FUN_144d5f018;
  plVar7 = DAT_1469f4590;
  if (DAT_1469f4590 != (longlong *)0x0) {
    iVar5 = *(int *)(param_1 + 1);
    if (iVar5 < (int)DAT_1469f4590[0x76]) {
      lVar6 = *DAT_1469f4590;
      uVar8 = FWidgetPath::FWidgetPath(local_188);
      (**(code **)(lVar6 + 0x118))(plVar7,iVar5,uVar8,2);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_38);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40);
          }
        }
      }
      FUN_140456b10(local_180);
      local_190 = (longlong *)0x0;
      puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + plVar7[0x75]);
      if (puVar9 != &local_198) {
        *puVar9 = 0;
        local_198 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(puVar9 + 1,&local_190);
        plVar1 = local_190;
        if (local_190 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_190 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_190)(local_190);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_190 + 8))(local_190,1);
            }
          }
        }
      }
      (**(code **)(*(longlong *)plVar7[0xdb] + 0x28))((longlong *)plVar7[0xdb],iVar5);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14188ecc0 FUN_14188ecc0 body=117 status=ok
// SIG undefined FUN_14188ecc0(void)

undefined8 * FUN_14188ecc0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144d5f398;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 5);
  *param_1 = &PTR_FUN_144d5f358;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14188ed40 FUN_14188ed40 body=122 status=ok
// SIG undefined FUN_14188ed40(void)

undefined8 * FUN_14188ed40(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144d5f378;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144d5f358;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14188edc0 FUN_14188edc0 body=205 status=ok
// SIG undefined FUN_14188edc0(void)

undefined8 * FUN_14188edc0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d60620;
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
  plVar4 = (longlong *)param_1[10];
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
  *param_1 = &PTR__scalar_deleting_destructor__144d60598;
  FUN_14188b2d0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14188ee90 FUN_14188ee90 body=193 status=ok
// SIG undefined FUN_14188ee90(void)

longlong FUN_14188ee90(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x70);
  plVar4 = *(longlong **)(param_1 + 0x60);
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
  FUN_1417f65a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14188ef60 `scalar_deleting_destructor' body=193 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FUICommandInfo::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_14099a700(param_1 + 0x40);
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14188f030 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 STableColumnHeader::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14188c360();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 14188f080 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SHorizontalBox::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14188c3d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x328);
  }
  return param_1;
}



// FUNCTION 14188f0d0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
SComboRow<TSharedPtr<FString,0>_>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_14188c470();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x428);
  }
  return param_1;
}



// FUNCTION 14188f120 `scalar_deleting_destructor' body=105 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong `anonymous_namespace'::SMenuContentWrapper::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x300);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f0);
  FUN_140458b70(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x310);
  }
  return param_1;
}



// FUNCTION 14188f190 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SMenuPanel::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  SOverlay::~SOverlay();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 14188f1e0 FUN_14188f1e0 body=93 status=ok
// SIG undefined FUN_14188f1e0(void)

longlong FUN_14188f1e0(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x218);
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



// FUNCTION 14188f240 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SUniformGridPanel::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14188c600();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x450);
  }
  return param_1;
}



// FUNCTION 14188f290 FUN_14188f290 body=78 status=ok
// SIG undefined FUN_14188f290(void)

undefined8 FUN_14188f290(undefined8 param_1,ulonglong param_2)

{
  FUN_14188c790();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x3e0);
  }
  return param_1;
}



// FUNCTION 14188f2e0 FUN_14188f2e0 body=869 status=ok
// SIG undefined FUN_14188f2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14188f2e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined1 local_2b8 [8];
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined4 local_298 [2];
  undefined8 local_290;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  undefined1 local_270 [8];
  longlong *local_268;
  char local_258 [192];
  undefined1 local_198 [8];
  undefined1 local_190 [320];
  longlong *local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  if (((*(char *)(param_1 + 0x104) != '\0') && (*(longlong *)(param_1 + 0x460) != 0)) &&
     (*(longlong *)(param_1 + 0x468) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x468) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar3 = *(longlong **)(param_1 + 0x468);
      plVar8 = plVar3;
      plVar9 = (longlong *)0x0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(plVar3 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (plVar8 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar10) {
          LOCK();
          bVar10 = iVar6 == (int)plVar3[1];
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar8 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              plVar9 = *(longlong **)(param_1 + 0x460);
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
              LOCK();
              plVar8 = plVar3 + 1;
              lVar4 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              plVar8 = plVar3;
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar6 = (int)plVar3[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(plVar3 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
      }
      FWidgetPath::FWidgetPath(local_198);
      local_2b8[0] = DAT_1464b9eed;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_280 = plVar9;
      local_278 = plVar8;
      cVar5 = FUN_14182fe50(param_1 + 0x110,&local_280,local_198,local_2b8);
      if (cVar5 != '\0') {
        FUN_141845450(local_198,&local_2b0);
        puVar7 = (undefined8 *)FUN_14183ac60(local_2b0,local_270);
        (**(code **)(*(longlong *)*puVar7 + 0x90))();
        if (local_268 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_268 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_268)(local_268);
            LOCK();
            piVar1 = (int *)((longlong)local_268 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_268 + 8))(local_268,1);
            }
          }
        }
        plVar3 = local_2a8;
        if (local_2a8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2a8 + 1) = (int)local_2a8[1] + 1;
          UNLOCK();
        }
        local_298[0] = 0;
        local_290 = local_2b0;
        local_288 = local_2a8;
        if (local_2a8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2a8 + 1) = (int)local_2a8[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = local_2a8 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_2a8)(local_2a8);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        FUN_14199db10(plVar9,local_258,local_298);
        if (local_258[0] != '\0') {
          local_2c0 = 0;
          local_2c8 = 0;
          FUN_1418b5000(param_1,local_198,local_258,0);
        }
        FUN_140438c20(local_258);
        plVar3 = local_288;
        if (local_288 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_288 + 1;
          lVar4 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_288)(local_288);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if (local_2a8 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_2a8 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_2a8)(local_2a8);
            LOCK();
            piVar1 = (int *)((longlong)local_2a8 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_2a8 + 8))(local_2a8,1);
            }
          }
        }
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_48);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      FUN_140456b10(local_190);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar8 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14188f650 FUN_14188f650 body=182 status=ok
// SIG undefined FUN_14188f650(void)

longlong FUN_14188f650(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  iVar3 = *(int *)(param_1 + 0x100);
  *(int *)(param_1 + 0x100) = iVar3 + 1;
  if (*(int *)(param_1 + 0x104) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xf8,iVar3);
  }
  puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xf8));
  *puVar6 = *param_2;
  lVar4 = param_2[1];
  puVar6[1] = lVar4;
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
  }
  return param_1;
}



// FUNCTION 14188f710 FUN_14188f710 body=372 status=ok
// SIG undefined FUN_14188f710(void)

longlong * FUN_14188f710(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong local_38;
  longlong local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_141803320(param_1 + 0x110,param_3);
  local_38 = *param_3;
  local_30 = param_3[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1418a9160(param_1,local_18,&local_38,param_4);
  if (param_4 != '\0') {
    FUN_14185c3e0(*param_3);
    cVar6 = (**(code **)(*(longlong *)*param_3 + 0x178))();
    if ((cVar6 != '\0') && (*(char *)(*param_3 + 0x350) < '\0')) {
      puVar7 = (undefined8 *)FUN_14183ac60(*param_3,local_28);
      (**(code **)(*(longlong *)*puVar7 + 0x90))();
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
    }
  }
  *param_2 = *param_3;
  lVar5 = param_3[1];
  param_2[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = (longlong *)param_3[1];
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
  return param_2;
}



// FUNCTION 14188f890 FUN_14188f890 body=687 status=ok
// SIG undefined FUN_14188f890(void)

longlong *
FUN_14188f890(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
             char param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_1417ff0c0(*param_4,param_3);
  puVar7 = (undefined8 *)FUN_14183ac60(*param_4,local_48);
  lVar8 = (**(code **)(*(longlong *)*puVar7 + 0xc0))();
  if (lVar8 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_1468509e4) {
      _Init_thread_header(&DAT_1468509e4);
      if (DAT_1468509e4 == -1) {
        uVar9 = FCommandLine::Get();
        DAT_1468509e0 = FParse::Param(uVar9,L"nullrhi");
        _Init_thread_footer(&DAT_1468509e4);
      }
    }
    if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
      bVar5 = false;
      goto LAB_14188f92e;
    }
  }
  bVar5 = true;
LAB_14188f92e:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (bVar5) {
    local_58 = *param_3;
    local_50 = param_3[1];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    FUN_1418a9160(param_1,local_28,&local_58,param_5);
    if (param_5 != '\0') {
      FUN_14185c3e0(*param_3);
      cVar6 = (**(code **)(*(longlong *)*param_3 + 0x178))();
      if ((cVar6 != '\0') && (*(char *)(*param_3 + 0x350) < '\0')) {
        puVar7 = (undefined8 *)FUN_14183ac60(*param_3,local_38);
        (**(code **)(*(longlong *)*puVar7 + 0x90))();
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_30 + 1;
          lVar8 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
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
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_20 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  }
  *param_2 = *param_3;
  lVar8 = param_3[1];
  param_2[1] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return param_2;
}



// FUNCTION 14188fb40 AllowMoveCursor body=89 status=ok
// SIG undefined AllowMoveCursor(void)

void FSlateApplication::AllowMoveCursor(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x620);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = (longlong)&PTR_FUN_144d5fbc0;
      *(longlong **)(param_1 + 0x620) = plVar1;
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
    plVar1 = (longlong *)0x0;
    *(undefined8 *)(param_1 + 0x620) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014188fb95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))();
  return;
}



// FUNCTION 14188fbc0 FUN_14188fbc0 body=217 status=ok
// SIG undefined FUN_14188fbc0(void)

undefined8 * FUN_14188fbc0(longlong param_1,undefined8 *param_2)

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
  
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
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



// FUNCTION 14188fca0 AsWidget body=30 status=ok
// SIG undefined AsWidget(void)

undefined8 SToolTip::AsWidget(longlong param_1,undefined8 param_2)

{
  TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + -0x2e8);
  return param_2;
}



// FUNCTION 14188fcc0 FUN_14188fcc0 body=1252 status=ok
// SIG undefined FUN_14188fcc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014188fd8b) */
/* WARNING: Removing unreachable block (ram,0x00014188fd97) */
/* WARNING: Removing unreachable block (ram,0x00014188fdb0) */

ulonglong FUN_14188fcc0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  longlong local_280;
  undefined8 local_278;
  longlong *plStack_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  longlong *local_248;
  undefined8 local_240;
  longlong *local_238;
  longlong local_230;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined8 local_1f8;
  longlong *plStack_1f0;
  undefined1 local_1e8 [24];
  longlong *local_1d0;
  undefined8 local_1c8;
  longlong *plStack_1c0;
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [288];
  undefined1 *local_90;
  int local_88;
  longlong *local_70;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_260 = param_5;
  local_268 = param_1;
  local_230 = param_3;
  uVar8 = FWidgetPath::IsValid(param_2);
  if ((char)uVar8 != '\0') {
    uVar14 = 0;
    uVar13 = 0;
    cVar4 = *(char *)(param_3 + 0x18);
    local_278 = 0;
    plStack_270 = (longlong *)0x0;
    if (*(char *)(param_4 + 0x30) == '\x01') {
      local_278 = *(undefined8 *)(param_4 + 0x10);
      plStack_270 = *(longlong **)(param_4 + 0x18);
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_270 + 1) = (int)plStack_270[1] + 1;
        UNLOCK();
      }
      uStack_258 = 0;
      local_260 = 0;
      uVar14 = 1;
      local_1c8 = local_278;
      plStack_1c0 = plStack_270;
    }
    else if (*(char *)(param_4 + 0x30) == '\x04') {
      uVar14 = uVar13;
      if (((*(int *)(param_4 + 0x28) != 0) && (*(longlong **)(param_4 + 0x20) != (longlong *)0x0))
         && (cVar6 = (**(code **)(**(longlong **)(param_4 + 0x20) + 0x18))(), cVar6 != '\0')) {
        plVar10 = (longlong *)0x0;
        if (*(int *)(param_4 + 0x28) != 0) {
          plVar10 = *(longlong **)(param_4 + 0x20);
        }
        (**(code **)(*plVar10 + 0x38))(plVar10,&local_240,cVar4);
        local_278 = local_240;
        local_240 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_270,&local_238);
        if (local_238 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_238 + 1;
          lVar11 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_238)(local_238);
            LOCK();
            piVar2 = (int *)((longlong)local_238 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_238 + 8))(local_238,1);
            }
          }
        }
        uVar14 = 1;
        param_1 = local_268;
      }
    }
    else if ((byte)(cVar4 - 4U) < 2) {
      FUN_1417f3670(local_1e8,param_2);
      local_288 = param_5;
      FUN_14185d330(local_1e8,local_1b8,cVar4,param_4);
      puVar12 = local_1b0;
      if (local_90 != (undefined1 *)0x0) {
        puVar12 = local_90;
      }
      local_248 = *(longlong **)(puVar12 + (longlong)local_88 * 0x48 + -8);
      local_278 = *(undefined8 *)(puVar12 + (longlong)local_88 * 0x48 + -0x10);
      if (local_248 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_248 + 1) = (int)local_248[1] + 1;
        UNLOCK();
      }
      local_250 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_270,&local_248);
      plVar10 = local_248;
      if (local_248 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_248 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_248)(local_248);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_248 + 8))(local_248,1);
          }
        }
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_68);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_70 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
      FUN_140456b10(local_1b0);
      if (local_1d0 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_1d0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (local_1d0 != (longlong *)0x0)) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
      TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
      ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(local_1e8);
      param_1 = local_268;
    }
    else {
      lVar11 = *(longlong *)(param_2 + 0x128);
      if (*(longlong *)(param_2 + 0x128) == 0) {
        lVar11 = param_2 + 8;
      }
      iVar3 = *(int *)(param_2 + 0x130);
      puVar9 = (undefined8 *)FUN_141845450(param_2,local_208);
      puVar9 = (undefined8 *)FUN_141839450(*puVar9,local_218);
      local_280 = local_260;
      local_288 = param_4;
      puVar9 = (undefined8 *)
               FUN_14182ecd0(*puVar9,local_228,lVar11 + (longlong)iVar3 * 0x48 + -0x48,cVar4);
      if (&local_278 != puVar9) {
        local_278 = *puVar9;
        *puVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_270,puVar9 + 1);
      }
      if (local_220 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_220 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_220)(local_220);
          LOCK();
          piVar2 = (int *)((longlong)local_220 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_220 + 8))(local_220,1);
          }
        }
      }
      if (local_210 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_210 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
      param_1 = local_268;
      if (local_200 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_200 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_200)(local_200);
          LOCK();
          piVar2 = (int *)((longlong)local_200 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          param_1 = local_268;
          if (iVar3 == 1) {
            (**(code **)(*local_200 + 8))(local_200,1);
            param_1 = local_268;
          }
        }
      }
    }
    plVar10 = plStack_270;
    local_1f8 = local_278;
    plStack_1f0 = plStack_270;
    uVar5 = *(undefined4 *)(local_230 + 0xc);
    if (plStack_270 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_270 + 1) = (int)plStack_270[1] + 1;
      UNLOCK();
    }
    local_288 = CONCAT71(local_288._1_7_,uVar14);
    bVar7 = FUN_141898d20(param_1,param_2,&local_1f8,uVar5);
    plVar1 = plStack_270;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar10 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_270)(plStack_270);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_270 + 8))(plStack_270,1);
        }
      }
    }
    uVar8 = (ulonglong)bVar7;
  }
  return uVar8;
}



// FUNCTION 1418901b0 BeginReshapingWindow body=78 status=ok
// SIG undefined BeginReshapingWindow(void)

undefined8 FSlateApplication::BeginReshapingWindow(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 local_res8 [32];
  
  cVar1 = (**(code **)(*(longlong *)(param_1 + -0x78) + 0xd0))(param_1 + -0x78);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x59c) == -1) {
      uVar2 = FSlateThrottleManager::Get();
      puVar3 = (undefined4 *)FSlateThrottleManager::EnterResponsiveMode(uVar2,local_res8);
      *(undefined4 *)(param_1 + 0x59c) = *puVar3;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 141890200 FUN_141890200 body=243 status=ok
// SIG undefined FUN_141890200(void)

void FUN_141890200(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_18;
  longlong local_10;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar7 = *(int *)((longlong)param_1 + 0x14);
  bVar4 = false;
  iVar6 = (int)param_1[1] + -1;
  lVar9 = (longlong)iVar6;
  if (-1 < iVar6) {
    lVar8 = lVar9 << 4;
    bVar4 = false;
    do {
      if ((*(int *)(lVar8 + 8 + *param_1) == 0) ||
         (plVar3 = *(longlong **)(lVar8 + *param_1), plVar3 == (longlong *)0x0)) {
LAB_14189027c:
        bVar4 = true;
      }
      else {
        local_18 = *param_2;
        local_10 = param_2[1];
        if (local_10 != 0) {
          LOCK();
          *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
          UNLOCK();
        }
        cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,&local_18);
        if (cVar5 == '\0') goto LAB_14189027c;
      }
      lVar8 = lVar8 + -0x10;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
    iVar7 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar7 + -1;
  if (bVar4) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 141890300 CalculatePopupWindowPosition body=561 status=ok
// SIG BOOL CalculatePopupWindowPosition(POINT * anchorPoint, SIZE * windowSize, UINT flags, RECT * excludeRect, RECT * popupWindowPosition)

BOOL __stdcall
FSlateApplication::CalculatePopupWindowPosition
          (POINT *anchorPoint,SIZE *windowSize,UINT flags,RECT *excludeRect,
          RECT *popupWindowPosition)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  int iVar4;
  char cVar5;
  float *pfVar6;
  undefined4 in_register_00000084;
  ulonglong uVar7;
  float fVar8;
  undefined8 local_res18;
  float local_res20;
  float local_res24;
  ulonglong *in_stack_00000030;
  int in_stack_00000038;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar9;
  undefined8 local_b8;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  int iStack_64;
  undefined8 uStack_60;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  pfVar6 = (float *)CONCAT44(in_register_00000084,flags);
  fVar8 = 1.0;
  local_res18 = 0;
  if ((char)popupWindowPosition != '\0') {
    fVar8 = (float)FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint();
  }
  local_a8 = (int)*pfVar6;
  local_res20 = fVar8 * (float)excludeRect->left;
  iStack_a4 = (int)pfVar6[1];
  local_res24 = fVar8 * (float)excludeRect->top;
  iStack_a0 = (int)pfVar6[2];
  iStack_9c = (int)pfVar6[3];
  cVar5 = (**(code **)(*DAT_1469eaf48 + 0xa8))
                    (DAT_1469eaf48,&local_a8,&local_res20,in_stack_00000030,
                     CONCAT44(uVar9,(uint)(in_stack_00000038 == 1)),&local_res18);
  if (cVar5 == '\0') {
    auVar3._4_4_ = iStack_a4;
    auVar3._0_4_ = local_a8;
    auVar3._8_4_ = iStack_a0;
    auVar3._12_4_ = iStack_9c;
    uStack_60 = auVar3._8_8_;
    iStack_64 = iStack_a4 + 1;
    local_68 = local_a8 + 1;
    (**(code **)(*DAT_1469eaf48 + 0xa0))(DAT_1469eaf48,&local_98,&local_68);
    uVar1 = *in_stack_00000030;
    local_b8._4_4_ = (float)(uVar1 >> 0x20);
    local_88 = (float)local_98;
    local_84 = (float)local_94;
    local_80 = (float)local_90;
    local_7c = (float)local_8c;
    uVar7 = uVar1;
    local_74 = local_b8._4_4_;
    if (((float)uVar1 == 0.0) && (local_b8._4_4_ == 0.0)) {
      iVar2 = iStack_9c;
      iVar4 = local_a8;
      if (in_stack_00000038 == 0) {
        iVar2 = iStack_a4;
        iVar4 = iStack_a0;
      }
      uVar7 = (ulonglong)(uint)(float)iVar4;
      local_74 = (float)iVar2;
    }
    local_78 = (float)uVar7;
    local_70 = local_78 + local_res20;
    local_6c = local_74 + local_res24;
    local_b8 = uVar1;
    pfVar6 = (float *)ComputePopupFitInRect(&local_b8,pfVar6,&local_78,in_stack_00000038,&local_88);
    local_res18._0_4_ = (1.0 / fVar8) * *pfVar6;
    windowSize->cy = (LONG)((1.0 / fVar8) * pfVar6[1]);
  }
  else {
    local_res18._0_4_ = (1.0 / fVar8) * (float)local_res18;
    windowSize->cy = (LONG)(local_res18._4_4_ * (1.0 / fVar8));
  }
  windowSize->cx = (LONG)(float)local_res18;
  return (BOOL)windowSize;
}



// FUNCTION 141890540 CalculateTooltipWindowPosition body=464 status=ok
// SIG undefined CalculateTooltipWindowPosition(void)

undefined8 *
FSlateApplication::CalculateTooltipWindowPosition
          (longlong *param_1,undefined8 *param_2,undefined8 param_3,float *param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float local_res8;
  float local_resc;
  float local_78;
  float fStack_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  
  (**(code **)(*param_1 + 400))(param_1,&local_78,param_3,param_4,param_5,&DAT_1468b5d88,1);
  (**(code **)(*param_1 + 0x48))(param_1,&local_res8);
  if ((((local_78 <= local_res8) && (local_res8 <= local_78 + *param_4)) &&
      (fStack_74 <= local_resc)) && (local_resc <= fStack_74 + param_4[1])) {
    local_70 = (int)local_res8;
    fVar2 = 1.0;
    local_6c = (int)local_resc;
    local_68 = (int)(local_res8 + 1.0);
    local_64 = (int)(local_resc + 1.0);
    (**(code **)(*DAT_1469eaf48 + 0xa0))(DAT_1469eaf48,&local_60,&local_70);
    if (param_5 != '\0') {
      fVar2 = (float)FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint
                               (local_res8,local_resc);
    }
    fVar1 = fVar2 * 16.0;
    fVar2 = fVar2 * 12.0;
    local_78 = (local_res8 - fVar1) - *param_4;
    fStack_74 = (local_resc - fVar2) - param_4[1];
    if (local_78 < (float)local_60) {
      local_78 = fVar1 + fVar1 + *param_4 + local_78;
    }
    if (fStack_74 < (float)local_5c) {
      fStack_74 = fVar2 + fVar2 + param_4[1] + fStack_74;
    }
  }
  *param_2 = CONCAT44(fStack_74,local_78);
  return param_2;
}



// FUNCTION 141890710 FUN_141890710 body=8 status=ok
// SIG undefined FUN_141890710(void)

void FUN_141890710(undefined8 param_1,undefined8 *param_2)

{
  <lambda_ddd4cc22511892b2d026e99d74d8b95d>::operator()(param_1,*param_2);
  return;
}



// FUNCTION 141890720 Call body=23 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_13bf0d009691add86a57156b84c4445c>_const_,void___cdecl(FSlateUser_*)>
     ::Call(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1418c2ac0(*param_1,*param_2,param_1[1],*(undefined1 *)param_1[2]);
  return;
}



// FUNCTION 141890740 FUN_141890740 body=33 status=ok
// SIG undefined FUN_141890740(void)

void FUN_141890740(undefined8 *param_1,longlong *param_2)

{
  FUN_1418c3710(*param_1,*(undefined4 *)(*param_2 + 0x110),param_1[1],
                *(undefined1 *)(param_1[2] + 0xb0));
  return;
}



// FUNCTION 141890770 FUN_141890770 body=8 status=ok
// SIG undefined FUN_141890770(void)

void FUN_141890770(undefined8 param_1,undefined8 *param_2)

{
  FUN_14188d660(param_1,*param_2);
  return;
}



// FUNCTION 141890780 FUN_141890780 body=8 status=ok
// SIG undefined FUN_141890780(void)

void FUN_141890780(undefined8 param_1,undefined8 *param_2)

{
  FUN_14188da40(param_1,*param_2);
  return;
}



// FUNCTION 141890790 FUN_141890790 body=8 status=ok
// SIG undefined FUN_141890790(void)

void FUN_141890790(undefined8 param_1,undefined8 *param_2)

{
  FUN_14188db50(param_1,*param_2);
  return;
}



// FUNCTION 1418907a0 FUN_1418907a0 body=8 status=ok
// SIG undefined FUN_1418907a0(void)

void FUN_1418907a0(undefined8 param_1,undefined8 *param_2)

{
  FUN_14188dbe0(param_1,*param_2);
  return;
}



// FUNCTION 1418907b0 FUN_1418907b0 body=8 status=ok
// SIG undefined FUN_1418907b0(void)

void FUN_1418907b0(undefined8 param_1,undefined8 *param_2)

{
  FUN_14188dcb0(param_1,*param_2);
  return;
}



// FUNCTION 1418907c0 FUN_1418907c0 body=506 status=ok
// SIG undefined FUN_1418907c0(void)

bool FUN_1418907c0(longlong param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  uint uStackX_c;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  bVar10 = false;
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x220))((longlong *)*param_2,local_28)
  ;
  FUN_1418ff8c0(*puVar7,&local_48);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_20 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  FUN_1418ff8c0(*(undefined8 *)(param_1 + 0x58),&local_38);
  cVar5 = FUN_1419425c0(*(undefined8 *)(param_1 + 0x40));
  if (cVar5 == '\x02') {
    if (param_3 == 0) {
      bVar10 = true;
    }
    else {
      plVar8 = (longlong *)FUN_1418fc990();
      bVar10 = local_48 != *plVar8;
    }
    goto LAB_141890930;
  }
  cVar5 = FUN_1419425c0(*(undefined8 *)(param_1 + 0x40));
  if (cVar5 != '\0') {
    bVar10 = local_48 == local_38;
    goto LAB_141890930;
  }
  iVar6 = (**(code **)(*(longlong *)*param_2 + 0x208))();
  if (iVar6 == 2) {
    plVar8 = (longlong *)param_2[1];
    uVar3 = *param_2;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    lVar9 = FUN_141227920(uVar3);
    bVar10 = true;
    if (*(int *)(lVar9 + 8) != 0) goto LAB_1418908d5;
    bVar4 = true;
  }
  else {
    plVar8 = (longlong *)((ulonglong)uStackX_c << 0x20);
LAB_1418908d5:
    bVar4 = false;
  }
  if ((bVar10) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if ((local_48 == local_38) && ((param_3 == 0 || (bVar4)))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
LAB_141890930:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return bVar10;
}



// FUNCTION 1418909c0 CanExecute body=78 status=ok
// SIG undefined CanExecute(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUIAction::CanExecute(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418909f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
        return uVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000141890a02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 141890a10 FUN_141890a10 body=271 status=ok
// SIG undefined FUN_141890a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_141890a10(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  lVar7 = FUN_14189aff0(param_1,&local_18);
  if (lVar7 == 0) {
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  if ((*(int *)(lVar7 + 0x18) != 0) && (*(longlong **)(lVar7 + 0x10) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x18))();
    if (cVar5 != '\0') {
      if (*(int *)(lVar7 + 0x18) == 0) {
        uVar6 = (**(code **)(_DAT_00000000 + 0x38))();
      }
      else {
        uVar6 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x38))();
      }
      goto LAB_141890a90;
    }
  }
  uVar6 = 1;
LAB_141890a90:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return uVar6;
}



// FUNCTION 141890b20 FUN_141890b20 body=1158 status=ok
// SIG undefined FUN_141890b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141890b20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  undefined1 auStack_348 [32];
  undefined1 *local_328;
  undefined1 local_318 [8];
  longlong local_310;
  longlong *local_308;
  int local_300;
  uint uStack_2fc;
  uint *puStack_2f8;
  undefined4 local_2f0;
  int iStack_2ec;
  int iStack_2e8;
  longlong *local_2e0;
  undefined8 uStack_2d8;
  uint *local_2d0;
  uint uStack_2c8;
  int iStack_2c4;
  int local_2c0;
  int local_2b8;
  longlong *local_2b0;
  undefined **local_2a8;
  ushort local_2a0;
  undefined1 local_29e;
  undefined4 local_29c;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 *local_278;
  undefined8 local_270;
  undefined8 local_268;
  longlong *plStack_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined2 local_24c;
  undefined8 local_248;
  undefined1 local_240;
  longlong local_238;
  longlong *local_230;
  longlong *local_228;
  undefined8 uStack_220;
  uint *puStack_218;
  undefined4 uStack_210;
  int iStack_20c;
  int iStack_208;
  ushort local_1f8;
  undefined8 local_1c8;
  undefined1 local_190 [8];
  undefined1 local_188 [288];
  undefined1 *local_68;
  int local_60;
  longlong *local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  plVar3 = (longlong *)(param_1 + 0x580);
  if (*plVar3 != 0) {
    local_2e0 = (longlong *)(param_1 + 0x240);
    uStack_2fc = 1;
    iVar4 = *(int *)(param_1 + 0x268);
    puStack_2f8 = (uint *)(param_1 + 0x250);
    local_300 = 0;
    iStack_2ec = 0;
    iStack_2e8 = 0;
    if (iVar4 != 0) {
      puVar13 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar13 = puStack_2f8;
      }
      uVar5 = *puVar13;
      iStack_2e8 = 0;
      local_300 = 0;
      while (uVar5 == 0) {
        lVar11 = (longlong)local_300;
        iStack_2e8 = iStack_2e8 + 0x20;
        iVar9 = local_300 + 1;
        bVar7 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_300;
        local_300 = iVar9;
        if (bVar7) goto LAB_141890c27;
        uVar5 = puVar13[lVar11 + 1];
      }
      uStack_2fc = -uVar5 & uVar5;
      local_2b8 = 0x1f;
      if (uStack_2fc != 0) {
        for (; uStack_2fc >> local_2b8 == 0; local_2b8 = local_2b8 + -1) {
        }
      }
      if (uStack_2fc == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - local_2b8;
      }
      iStack_2ec = (iStack_2e8 - iVar9) + 0x1f;
      if (iVar4 < iStack_2ec) {
LAB_141890c27:
        iStack_2ec = iVar4;
      }
    }
    local_2f0 = 0xffffffff;
    uStack_2d8 = CONCAT44(uStack_2fc,local_300);
    uStack_210 = 0xffffffff;
    iStack_20c = iStack_2ec;
    iStack_208 = iStack_2e8;
    uStack_2c8 = 0xffffffff;
    iStack_2c4 = iStack_2ec;
    local_2c0 = iStack_2e8;
    local_2d0 = puStack_2f8;
    local_2b0 = local_2e0;
    local_228 = local_2e0;
    uStack_220 = uStack_2d8;
    puStack_218 = puStack_2f8;
    if (iStack_2ec < iVar4) {
      do {
        local_318[0] = DAT_1464b9ee8;
        local_328 = local_318;
        FWeakWidgetPath::ToWidgetPath(*local_2e0 + 8 + (longlong)iStack_2c4 * 0x30,local_190,0,0);
        cVar8 = FWidgetPath::IsValid(local_190);
        if (cVar8 != '\0') {
          plVar6 = *(longlong **)(param_1 + 0x588);
          local_238 = *plVar3;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          local_2a0 = local_1f8 & 0xfe00;
          local_1c8 = 0;
          local_270 = 0;
          local_29e = 0;
          local_29c = 0;
          local_298 = 0;
          local_290 = 0;
          local_288 = 0;
          uStack_280 = 0;
          local_278 = &DAT_1469eb010;
          local_268 = 0;
          plStack_260 = (longlong *)0x0;
          local_258 = 0;
          local_250 = 0x3f800000;
          local_24c = 0;
          local_248 = 0;
          local_240 = 0;
          local_2a8 = &PTR__scalar_deleting_destructor__144d5efe0;
          local_230 = plVar6;
          local_1f8 = local_2a0;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar6 + 1;
              lVar11 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((iVar4 == 1) && (plVar6 != (longlong *)0x0)) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
          lVar11 = (longlong)(local_60 + -1);
          if (-1 < local_60 + -1) {
            lVar12 = lVar11 * 0x48;
            do {
              puVar10 = local_188;
              if (local_68 != (undefined1 *)0x0) {
                puVar10 = local_68;
              }
              (**(code **)(**(longlong **)(puVar10 + lVar12 + 0x38) + 200))
                        (*(longlong **)(puVar10 + lVar12 + 0x38),&local_2a8);
              lVar11 = lVar11 + -1;
              lVar12 = lVar12 + -0x48;
            } while (-1 < lVar11);
          }
          plVar6 = local_230;
          if (local_230 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_230 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_230)(local_230);
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
          plVar6 = plStack_260;
          if (plStack_260 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_260 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plStack_260)(plStack_260);
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
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_40);
        plVar6 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_48)(local_48);
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
        FUN_140456b10(local_188);
        uStack_2c8 = uStack_2c8 & ~uStack_2d8._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_2d8);
      } while (iStack_2c4 < (int)local_2d0[6]);
    }
    TSet<TTuple<FSlateApplication::FUserAndPointer,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<FSlateApplication::FUserAndPointer,FWeakWidgetPath,0>,FDefaultSetAllocator>
    ::Empty(local_2b0,0);
    local_308 = (longlong *)0x0;
    if (plVar3 != &local_310) {
      *plVar3 = 0;
      local_310 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x588,&local_308);
      plVar3 = local_308;
      if (local_308 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_308 + 1;
        lVar11 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_308)(local_308);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_308 + 8))(local_308,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141890fb0 FUN_141890fb0 body=190 status=ok
// SIG undefined FUN_141890fb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141890fb0(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  undefined1 local_170 [320];
  longlong *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar4 = *param_1;
  uVar5 = FWidgetPath::FWidgetPath(local_178);
  (**(code **)(lVar4 + 0x120))(param_1,uVar5,param_2);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_28);
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
  FUN_140456b10(local_170);
  return;
}



// FUNCTION 141891070 FUN_141891070 body=203 status=ok
// SIG undefined FUN_141891070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141891070(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  undefined1 local_180 [320];
  longlong *local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar5 = (*(code *)**(undefined8 **)param_1[0xf5])();
  lVar4 = *param_1;
  uVar6 = FWidgetPath::FWidgetPath(local_188);
  (**(code **)(lVar4 + 0x118))(param_1,uVar5,uVar6,param_2);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_38);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  FUN_140456b10(local_180);
  return;
}



// FUNCTION 141891140 FUN_141891140 body=190 status=ok
// SIG undefined FUN_141891140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141891140(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  undefined1 local_180 [320];
  longlong *local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar4 = *param_1;
  uVar5 = FWidgetPath::FWidgetPath(local_188);
  (**(code **)(lVar4 + 0x118))(param_1,param_2,uVar5,param_3);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_38);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  FUN_140456b10(local_180);
  return;
}



// FUNCTION 141891200 FUN_141891200 body=414 status=ok
// SIG undefined FUN_141891200(void)

void FUN_141891200(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28 [2];
  
  plVar7 = (longlong *)0x0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  if (param_1 + 0xb0 != &local_48) {
    param_1[0xb0] = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb1,&plStack_40);
    plVar8 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_40 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
  }
  plVar8 = param_1 + 0xa2;
  plVar2 = (longlong *)param_1[0xa3];
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar7, !bVar9) {
      LOCK();
      bVar9 = iVar4 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar5 = plVar2;
        if (((plVar2 != (longlong *)0x0) && (*plVar8 != 0)) && (FUN_141856430(), plVar8 != local_28)
           ) {
          *plVar8 = 0;
          plVar8 = (longlong *)param_1[0xa3];
          param_1[0xa3] = 0;
          if (plVar8 != (longlong *)0x0) {
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
  plVar8 = plVar7;
  if (0 < (int)param_1[0x23]) {
    do {
      local_38 = *(undefined8 *)(param_1[0x22] + (longlong)plVar8);
      local_30 = *(longlong *)(param_1[0x22] + 8 + (longlong)plVar8);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*param_1 + 0x108))(param_1,&local_38);
      uVar6 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar6;
      plVar8 = plVar8 + 2;
    } while ((int)uVar6 < (int)param_1[0x23]);
  }
  FUN_141894dc0(param_1);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  }
  return;
}



// FUNCTION 1418913a0 FUN_1418913a0 body=285 status=ok
// SIG undefined FUN_1418913a0(void)

undefined1 * FUN_1418913a0(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x300);
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar6 = iVar4 == 0;
    if (bVar6) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = (longlong *)0x0, !bVar6) {
      LOCK();
      bVar6 = iVar4 == (int)plVar2[1];
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar6) {
        plVar5 = plVar2;
        if ((plVar2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
          FUN_141856430();
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar4 == 0;
      if (bVar6) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
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
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
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
  }
  return param_2;
}



// FUNCTION 1418914c0 FUN_1418914c0 body=568 status=ok
// SIG undefined FUN_1418914c0(void)

void FUN_1418914c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong local_48 [2];
  longlong local_38 [2];
  
  plVar2 = (longlong *)(param_1 + 0x540);
  plVar3 = *(longlong **)(param_1 + 0x548);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar10 = iVar7 == 0;
    if (bVar10) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar10) {
      LOCK();
      bVar10 = iVar7 == (int)plVar3[1];
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar10) {
        if (plVar3 != (longlong *)0x0) {
          if ((longlong *)*plVar2 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar2 + 0x1a0))();
          }
          LOCK();
          plVar4 = plVar3 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
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
  plVar3 = (longlong *)(param_1 + 0x530);
  plVar4 = *(longlong **)(param_1 + 0x538);
  plVar8 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar4[1];
    bVar10 = iVar7 == 0;
    if (bVar10) {
      *(int *)(plVar4 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (plVar8 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar7 == (int)plVar4[1];
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar8 = plVar4;
        if ((plVar4 != (longlong *)0x0) && ((longlong *)*plVar3 != (longlong *)0x0)) {
          (**(code **)(*(longlong *)*plVar3 + 0x30))();
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar10 = iVar7 == 0;
      if (bVar10) {
        *(int *)(plVar4 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x518);
  plVar9 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar4[1];
    bVar10 = iVar7 == 0;
    if (bVar10) {
      *(int *)(plVar4 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (plVar9 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar7 == (int)plVar4[1];
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar9 = plVar4;
        if (((plVar4 != (longlong *)0x0) && (lVar5 = *(longlong *)(param_1 + 0x510), lVar5 != 0)) &&
           (cVar6 = SWindow::IsVisible(lVar5), cVar6 != '\0')) {
          SWindow::HideWindow(lVar5);
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar10 = iVar7 == 0;
      if (bVar10) {
        *(int *)(plVar4 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar3 != local_48) {
    *plVar3 = 0;
    plVar3 = *(longlong **)(param_1 + 0x538);
    *(undefined8 *)(param_1 + 0x538) = 0;
    if (plVar3 != (longlong *)0x0) {
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
  if (plVar2 != local_38) {
    *plVar2 = 0;
    plVar2 = *(longlong **)(param_1 + 0x548);
    *(undefined8 *)(param_1 + 0x548) = 0;
    if (plVar2 != (longlong *)0x0) {
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
  *(undefined1 *)(param_1 + 0x570) = 0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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



// FUNCTION 141891700 FUN_141891700 body=1653 status=ok
// SIG undefined FUN_141891700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141891700(undefined8 param_1,undefined8 *param_2,byte param_3,char param_4,char param_5,
             char param_6,char param_7)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  longlong *local_1d8;
  longlong *plStack_1d0;
  int local_1c8;
  uint uStack_1c4;
  uint *puStack_1c0;
  undefined4 local_1b8;
  undefined8 uStack_1b4;
  undefined4 uStack_1ac;
  longlong local_1a8 [2];
  longlong *local_198;
  uint local_190;
  longlong *local_188;
  undefined8 uStack_180;
  uint *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int local_160;
  longlong local_158;
  longlong *local_148;
  uint local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  longlong *local_118;
  longlong *plStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  uint *puStack_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_d8 [2];
  uint local_c8 [4];
  uint *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong local_88 [4];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if (*(longlong *)(DAT_1469f4590 + 0x580) == 0) {
    bVar12 = param_3 | 2;
    if (param_4 == '\0') {
      bVar12 = param_3;
    }
    bVar11 = bVar12 | 4;
    if (param_5 == '\0') {
      bVar11 = bVar12;
    }
    local_138 = *param_2;
    bVar12 = bVar11 | 8;
    if (param_6 == '\0') {
      bVar12 = bVar11;
    }
    local_130 = param_2[1];
    local_128 = param_2[2];
    if (local_128 != 0) {
      LOCK();
      *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
      UNLOCK();
    }
    FInputChord::FInputChord(local_1a8,&local_138,bVar12);
    cVar7 = FKey::IsValid(local_1a8);
    if ((cVar7 != '\0') && (cVar7 = FKey::IsModifierKey(local_1a8), cVar7 == '\0')) {
      local_a8 = 0xffffffff;
      local_d8[0] = 0;
      local_d8[1] = 0;
      local_b8 = (uint *)0x0;
      local_b0 = 0;
      uVar15 = 0;
      local_a4 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      local_68 = 0;
      local_60 = 0;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      local_58 = 0xffffffff;
      FUN_14189aa90(param_1,local_d8,local_88);
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(local_88,0);
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_88[0] != 0) {
        FMemory::Free();
      }
      puStack_1c0 = local_c8;
      local_1c8 = 0;
      uStack_1c4 = 1;
      uStack_1b4 = 0;
      if ((int)local_b0 != 0) {
        puVar16 = local_c8;
        if (local_b8 != (uint *)0x0) {
          puVar16 = local_b8;
        }
        uVar3 = *puVar16;
        iVar13 = 0;
        while (uVar3 == 0) {
          uVar15 = uVar15 + 0x20;
          local_1c8 = iVar13 + 1;
          uStack_1b4 = (ulonglong)uVar15 << 0x20;
          if ((int)((int)local_b0 + -1 + ((int)local_b0 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar13) {
            uStack_1b4 = CONCAT44(uVar15,(int)local_b0);
            goto LAB_141891960;
          }
          uVar3 = puVar16[(longlong)iVar13 + 1];
          iVar13 = local_1c8;
        }
        uStack_1c4 = -uVar3 & uVar3;
        local_160 = 0x1f;
        if (uStack_1c4 != 0) {
          for (; uStack_1c4 >> local_160 == 0; local_160 = local_160 + -1) {
          }
        }
        if (uStack_1c4 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - local_160;
        }
        iVar8 = (uVar15 - iVar8) + 0x1f;
        if ((int)local_b0 < iVar8) {
          iVar8 = (int)local_b0;
        }
        uStack_1b4._4_4_ = (undefined4)((ulonglong)uStack_1b4 >> 0x20);
        uStack_1b4 = CONCAT44(uStack_1b4._4_4_,iVar8);
        local_1c8 = iVar13;
      }
LAB_141891960:
      local_1b8 = 0xffffffff;
      local_188 = local_d8;
      uStack_180 = CONCAT44(uStack_1c4,local_1c8);
      uStack_f0 = 0xffffffff;
      iStack_ec = (int)uStack_1b4;
      uStack_e8 = uStack_1b4._4_4_;
      uStack_e4 = uStack_1ac;
      uStack_170 = CONCAT44((int)uStack_1b4,0xffffffff);
      auVar5._4_8_ = uStack_180;
      auVar5._0_4_ = (int)uStack_1b4;
      auVar17._0_8_ = auVar5._0_8_ << 0x20;
      auVar17._8_4_ = uStack_1b4._4_4_;
      auVar17._12_4_ = uStack_1ac;
      local_168 = auVar17._8_8_;
      iVar13 = (int)uStack_1b4;
      local_178 = puStack_1c0;
      local_108 = local_188;
      uStack_100 = uStack_180;
      puStack_f8 = puStack_1c0;
      if ((int)uStack_1b4 < (int)local_b0) {
        do {
          uVar4 = *(undefined8 *)(*local_188 + (longlong)iVar13 * 0x10);
          uVar9 = FInputBindingManager::Get();
          local_1e8 = 0;
          FUN_141899180(uVar9,&local_1d8,uVar4,local_1a8);
          plVar2 = local_198;
          plVar14 = plStack_1d0;
          if (local_1d8 != (longlong *)0x0) {
            local_158 = local_1a8[0];
            local_148 = local_198;
            if (local_198 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_198 + 1) = (int)local_198[1] + 1;
              UNLOCK();
            }
            local_140 = (local_140 ^ local_190) & 0xf ^ local_140;
            plVar14 = *(longlong **)*local_1d8;
            if (((((*plVar14 == local_1a8[0]) &&
                  (uVar15 = *(uint *)(plVar14 + 3), ((local_140 ^ uVar15) & 1) == 0)) &&
                 (((uVar15 ^ local_140) & 2) == 0)) &&
                ((((uVar15 ^ local_140) & 4) == 0 && (((uVar15 ^ local_140) & 8) == 0)))) ||
               ((((plVar14 = (longlong *)((longlong *)*local_1d8)[2], *plVar14 == local_1a8[0] &&
                  ((uVar15 = *(uint *)(plVar14 + 3), ((local_140 ^ uVar15) & 1) == 0 &&
                   (((local_140 ^ uVar15) & 2) == 0)))) && (((local_140 ^ uVar15) & 4) == 0)) &&
                (((local_140 ^ uVar15) & 8) == 0)))) {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            if (local_198 != (longlong *)0x0) {
              LOCK();
              plVar14 = local_198 + 1;
              lVar10 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_198)(local_198);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                iVar13 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*local_148 + 8))(local_148,1);
                }
              }
            }
            plVar14 = plStack_1d0;
            if (bVar6) {
              local_118 = local_1d8;
              plStack_110 = plStack_1d0;
              if (plStack_1d0 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_1d0 + 1) = (int)plStack_1d0[1] + 1;
                UNLOCK();
              }
              lVar10 = FUN_14189aff0(param_1,&local_118);
              if (lVar10 != 0) {
                cVar7 = FUIAction::CanExecute(lVar10);
                plVar2 = plStack_1d0;
                if ((cVar7 != '\0') && ((param_7 == '\0' || (*(int *)(lVar10 + 0x40) == 1)))) {
                  FUIAction::Execute(lVar10);
                  plVar2 = plStack_1d0;
                  if (plVar14 != (longlong *)0x0) {
                    LOCK();
                    plVar14 = plVar14 + 1;
                    lVar10 = *plVar14;
                    *(int *)plVar14 = (int)*plVar14 + -1;
                    UNLOCK();
                    if ((int)lVar10 == 1) {
                      (**(code **)*plStack_1d0)(plStack_1d0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar2 + 0xc);
                      iVar13 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar13 == 1) {
                        (**(code **)(*plStack_1d0 + 8))(plStack_1d0,1);
                      }
                    }
                  }
                  local_90 = 0;
                  if (local_98 != 0) {
                    FMemory::Free();
                  }
                  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  ::
                  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                            (local_d8);
                  if (local_198 != (longlong *)0x0) {
                    LOCK();
                    plVar14 = local_198 + 1;
                    lVar10 = *plVar14;
                    *(int *)plVar14 = (int)*plVar14 + -1;
                    UNLOCK();
                    if ((int)lVar10 == 1) {
                      (**(code **)*local_198)(local_198);
                      LOCK();
                      piVar1 = (int *)((longlong)local_198 + 0xc);
                      iVar13 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar13 == 1) {
                        (**(code **)(*local_198 + 8))(local_198,1);
                      }
                    }
                  }
                  FKey::~FKey(param_2);
                  return 1;
                }
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar14 = plVar14 + 1;
                  lVar10 = *plVar14;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plStack_1d0)(plStack_1d0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar2 + 0xc);
                    iVar13 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar13 == 1) {
                      (**(code **)(*plStack_1d0 + 8))(plStack_1d0,1);
                    }
                  }
                }
                local_90 = 0;
                if (local_98 != 0) {
                  FMemory::Free();
                }
                TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                          (local_d8);
                if (local_198 != (longlong *)0x0) {
                  LOCK();
                  plVar14 = local_198 + 1;
                  lVar10 = *plVar14;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*local_198)(local_198);
                    LOCK();
                    piVar1 = (int *)((longlong)local_198 + 0xc);
                    iVar13 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar13 == 1) {
                      (**(code **)(*local_198 + 8))(local_198,1);
                    }
                  }
                }
                FKey::~FKey(param_2);
                return 0;
              }
            }
          }
          plVar2 = plStack_1d0;
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar14 + 1;
            lVar10 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plStack_1d0)(plStack_1d0);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plStack_1d0 + 8))(plStack_1d0,1);
              }
            }
          }
          uStack_170 = CONCAT44(uStack_170._4_4_,(uint)uStack_170 & ~uStack_180._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_180);
          iVar13 = uStack_170._4_4_;
        } while (uStack_170._4_4_ < (int)local_178[6]);
      }
      local_90 = 0;
      if (local_98 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_d8);
    }
    if (local_198 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_198 + 1;
      lVar10 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar1 = (int *)((longlong)local_198 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_198 + 8))(local_198,1);
        }
      }
    }
  }
  plVar14 = (longlong *)param_2[2];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  return 0;
}



// FUNCTION 141891d80 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
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



// FUNCTION 141891e30 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FSlateApplication::FUserAndPointer,FVector2D>,TDefaultMapHashableKeyFuncs<FSlateApplication::FUserAndPointer,FVector2D,0>,FDefaultSetAllocator>
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



// FUNCTION 141891ee0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FSlateApplication::FUserAndPointer,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<FSlateApplication::FUserAndPointer,FWeakWidgetPath,0>,FDefaultSetAllocator>
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



// FUNCTION 141891f90 FUN_141891f90 body=902 status=ok
// SIG undefined FUN_141891f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141891f90(longlong param_1,longlong param_2)

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
  undefined8 *puVar10;
  undefined1 auStack_278 [32];
  undefined1 *local_258;
  longlong local_250;
  undefined4 local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  undefined1 local_228;
  undefined1 local_220;
  longlong local_218;
  undefined1 local_208;
  undefined1 local_207;
  undefined8 local_200;
  undefined4 local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_180 [24];
  undefined1 local_168 [264];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_208 = DAT_1464b9eeb;
  puVar10 = (undefined8 *)0x0;
  local_207 = 1;
  local_200 = 0;
  local_1f8 = 0;
  local_1e0 = (**(code **)(*DAT_1469eaf38 + 0x30))();
  plVar9 = DAT_1469eaf38;
  local_1c0 = 0;
  uStack_1b8 = 0x40000000;
  local_1d8 = 1;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1b0 = 1;
  local_1a8 = 0;
  local_1a0 = 0;
  puVar6 = (undefined8 *)operator_new(0x88);
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar6);
    *puVar6 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar10 = puVar6;
  }
  *(undefined1 *)(puVar10 + 0xb) = 1;
  puVar10[9] = 0;
  puVar10[10] = 0x40000000;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar10 + 0xc,&local_1a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1a8);
  local_258 = &local_208;
  uVar7 = (**(code **)(*plVar9 + 0xe8))(plVar9,local_180,&local_1e0,param_2 + 0x108);
  uVar7 = FUN_1417f9c30(puVar10,uVar7);
  lVar8 = SCanvas::FArguments::FArguments(local_168);
  iVar3 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 0x108,iVar3);
  }
  *(undefined8 *)(*(longlong *)(lVar8 + 0x108) + (longlong)iVar3 * 8) = uVar7;
  plVar9 = (longlong *)operator_new(0x248);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_DestroyObject_144d503e8;
    if (plVar9 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4670();
    }
  }
  plVar1 = plVar9 + 2;
  local_198 = plVar1;
  local_190 = plVar9;
  FUN_14044f790(&local_198,plVar1);
  local_258 = (undefined1 *)0x238;
  SWidget::SetDebugInfo
            (plVar1,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Framework/Application/SWindowTitleBar.h"
             ,0x39);
  local_248 = *(undefined4 *)(lVar8 + 0x90);
  local_218 = lVar8 + 0xf8;
  local_230 = lVar8 + 0xe8;
  local_220 = *(undefined1 *)(lVar8 + 0xf1);
  local_238 = lVar8 + 200;
  local_240 = lVar8 + 0x98;
  local_228 = *(undefined1 *)(lVar8 + 0xf0);
  local_250 = lVar8 + 0x78;
  local_258 = (undefined1 *)(lVar8 + 0x60);
  SWidget::SWidgetConstruct(plVar1,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  SHorizontalBox::Construct(plVar1,lVar8);
  if (((char)plVar9[5] < '\0') || (cVar4 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar4 != '\0')) {
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
  local_1f0 = plVar1;
  local_1e8 = plVar9;
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_1f0);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
    plVar1 = plVar9 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
    plVar1 = plVar9 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  if (local_60 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_168);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_200);
  return;
}



// FUNCTION 141892320 FUN_141892320 body=1135 status=ok
// SIG undefined FUN_141892320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141892320(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  undefined4 local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  undefined1 local_2d8;
  undefined1 local_2d0;
  longlong local_2c8;
  undefined4 local_2b8;
  undefined1 local_2b4;
  longlong local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined1 local_29c;
  longlong local_298;
  undefined4 local_290;
  undefined8 local_288;
  longlong local_280;
  longlong *local_278;
  longlong *local_270;
  longlong *local_268;
  longlong *local_260;
  undefined1 local_248 [496];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  lVar8 = *(longlong *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(lVar8 + 0xb0);
  *(undefined1 *)(param_1 + 0xb1) = *(undefined1 *)(lVar8 + 0xb1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xb8,lVar8 + 0xb8);
  plVar10 = (longlong *)(param_1 + 0x2f0);
  if ((longlong *)(param_2 + 0x118) != plVar10) {
    if ((*(int *)(param_2 + 0x120) == 0) ||
       (plVar5 = *(longlong **)(param_2 + 0x118), plVar5 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x2f8) != 0) &&
         (plVar5 = (longlong *)*plVar10, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*plVar10 != 0) {
          lVar8 = FMemory::Realloc(*plVar10,0,0);
          *plVar10 = lVar8;
        }
        *(undefined4 *)(param_1 + 0x2f8) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar10);
    }
  }
  plVar10 = (longlong *)(param_1 + 0x300);
  if ((longlong *)(param_2 + 0x128) != plVar10) {
    if ((*(int *)(param_2 + 0x130) == 0) ||
       (plVar5 = *(longlong **)(param_2 + 0x128), plVar5 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x308) != 0) &&
         (plVar5 = (longlong *)*plVar10, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*plVar10 != 0) {
          lVar8 = FMemory::Realloc(*plVar10,0,0);
          *plVar10 = lVar8;
        }
        *(undefined4 *)(param_1 + 0x308) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar10);
    }
  }
  local_288 = *(undefined8 *)(param_2 + 0x108);
  uVar2 = *(undefined4 *)(param_2 + 0x13c);
  uVar3 = *(undefined4 *)(param_2 + 0x138);
  local_280 = *(longlong *)(param_2 + 0x110);
  local_29c = 1;
  local_298 = 0;
  local_290 = 0;
  local_2b4 = 1;
  local_2b0 = 0;
  local_2a8 = 0;
  if (local_280 != 0) {
    LOCK();
    *(int *)(local_280 + 8) = *(int *)(local_280 + 8) + 1;
    UNLOCK();
  }
  local_2b8 = uVar3;
  local_2a0 = uVar2;
  lVar8 = FUN_14068f180(local_248);
  plVar10 = (longlong *)(lVar8 + 0x180);
  *(undefined4 *)(lVar8 + 0x178) = uVar3;
  *(undefined1 *)(lVar8 + 0x17c) = 1;
  if (((&local_2b0 != plVar10) && (*(int *)(lVar8 + 0x188) != 0)) &&
     (plVar5 = (longlong *)*plVar10, plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    if (*plVar10 != 0) {
      lVar9 = FMemory::Realloc(*plVar10,0,0);
      *plVar10 = lVar9;
    }
    *(undefined4 *)(lVar8 + 0x188) = 0;
  }
  plVar10 = (longlong *)(lVar8 + 0x1c8);
  *(undefined4 *)(lVar8 + 0x1c0) = uVar2;
  *(undefined1 *)(lVar8 + 0x1c4) = 1;
  if (((&local_298 != plVar10) && (*(int *)(lVar8 + 0x1d0) != 0)) &&
     (plVar5 = (longlong *)*plVar10, plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    if (*plVar10 != 0) {
      lVar9 = FMemory::Realloc(*plVar10,0,0);
      *plVar10 = lVar9;
    }
    *(undefined4 *)(lVar8 + 0x1d0) = 0;
  }
  plVar10 = (longlong *)operator_new(800);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144044b78;
    if (plVar10 != (longlong *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
  }
  plVar5 = plVar10 + 2;
  local_268 = plVar5;
  local_260 = plVar10;
  FUN_14044f790(&local_268,plVar5);
  local_308 = 0x310;
  SWidget::SetDebugInfo
            (plVar5,&DAT_144044860,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
             ,0x66);
  lVar8 = FUN_140692660(lVar8,&local_288);
  local_2f8 = *(undefined4 *)(lVar8 + 0x90);
  local_2c8 = lVar8 + 0xf8;
  local_2e0 = lVar8 + 0xe8;
  local_2d0 = *(undefined1 *)(lVar8 + 0xf1);
  local_2e8 = lVar8 + 200;
  local_2f0 = lVar8 + 0x98;
  local_2d8 = *(undefined1 *)(lVar8 + 0xf0);
  local_300 = lVar8 + 0x78;
  local_308 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar5,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_141972160(plVar5,lVar8);
  if (((char)plVar10[5] < '\0') || (cVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5), cVar6 != '\0'))
  {
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
  local_278 = plVar5;
  local_270 = plVar10;
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_278);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar10 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
    plVar5 = plVar10 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
    plVar5 = plVar10 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  FUN_140690ea0(local_248);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_298);
  return;
}



// FUNCTION 141892790 FUN_141892790 body=3261 status=ok
// SIG undefined FUN_141892790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141892790(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 auStack_838 [32];
  longlong local_818;
  longlong local_810;
  undefined4 local_808;
  longlong local_800;
  longlong local_7f8;
  longlong local_7f0;
  undefined1 local_7e8;
  undefined1 local_7e0;
  longlong local_7d8;
  undefined4 local_7c8;
  undefined8 *local_7c0;
  longlong *local_7b8;
  int local_7b0;
  longlong *local_7a8;
  int local_7a0;
  longlong *local_798;
  int local_790;
  code *local_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined8 local_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined2 local_768;
  undefined8 local_760;
  undefined4 local_758;
  undefined1 local_750;
  undefined1 local_74f;
  undefined8 local_748;
  undefined4 local_740;
  undefined1 local_738;
  undefined1 local_737;
  undefined8 local_730;
  undefined4 local_728;
  undefined8 local_720;
  undefined1 local_718;
  undefined8 local_710;
  undefined4 local_708;
  longlong local_700;
  undefined1 local_6f8 [8];
  longlong *local_6f0;
  undefined1 local_6e0;
  undefined8 local_6d8;
  undefined4 local_6d0;
  longlong *local_6c8;
  longlong *local_6c0;
  undefined8 local_6b8;
  longlong local_6b0;
  longlong *local_6a8;
  longlong *local_6a0;
  longlong *local_698;
  longlong *local_690;
  longlong local_688;
  undefined1 local_680;
  undefined8 local_678;
  undefined4 local_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined1 local_658;
  undefined8 local_650;
  undefined4 local_648;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
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
  longlong *local_5b8;
  longlong *local_5b0;
  undefined1 local_598 [280];
  undefined1 local_480 [48];
  longlong *local_450;
  undefined1 local_440 [16];
  undefined1 local_430 [24];
  undefined1 local_418 [264];
  longlong local_310;
  undefined1 local_2f8 [688];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_838;
  local_7c8 = param_5;
  *(undefined8 *)(param_1 + 0x2f8) = *param_3;
  plVar11 = (longlong *)param_3[1];
  plVar9 = *(longlong **)(param_1 + 0x300);
  local_7c0 = param_4;
  local_700 = param_1;
  if (plVar11 != plVar9) {
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(param_1 + 0x300);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    *(longlong **)(param_1 + 0x300) = plVar11;
  }
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x3a8) = *(undefined1 *)(param_2 + 0x110);
  FText::operator=(param_1 + 0x3b0,param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x3c8) = *(undefined1 *)(param_2 + 0x130);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3d0,param_2 + 0x138);
  if ((*(char *)(param_1 + 0x3c8) == '\0') &&
     (((*(int *)(param_1 + 0x3d8) == 0 || (*(longlong **)(param_1 + 0x3d0) == (longlong *)0x0)) ||
      (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x18))(), cVar5 == '\0')))) {
    uStack_780 = 0;
    local_788 = FUN_14189fec0;
    local_638 = 0x4189fec0;
    uStack_634 = 1;
    uStack_630 = 0;
    uStack_62c = uStack_77c;
    uVar7 = FUN_14187ce90(&local_7b8,param_1,&local_638);
    FText::FText(local_6f8);
    local_6e0 = 1;
    local_6d8 = 0;
    local_6d0 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_6d8,uVar7);
    FText::operator=(param_1 + 0x3b0,local_6f8);
    *(undefined1 *)(param_1 + 0x3c8) = local_6e0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3d0,&local_6d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6d8);
    if (local_6f0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_6f0 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_6f0)(local_6f0);
        LOCK();
        piVar1 = (int *)((longlong)local_6f0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_6f0 + 8))(local_6f0,1);
        }
      }
    }
    if (local_7b0 != 0) {
      if (local_7b8 == (longlong *)0x0) goto LAB_1418929a5;
      (**(code **)(*local_7b8 + 0x28))(local_7b8,0);
      if (local_7b8 != (longlong *)0x0) {
        local_7b8 = (longlong *)FMemory::Realloc(local_7b8,0,0);
      }
      local_7b0 = 0;
    }
    if (local_7b8 != (longlong *)0x0) {
      FMemory::Free(local_7b8);
    }
  }
LAB_1418929a5:
  local_788 = SWindowTitleBar::GetWindowTitleAreaColor;
  uStack_780 = 0;
  lVar14 = *(longlong *)(param_1 + 0x308) + 0xcd8;
  local_778 = SWindowTitleBar::GetWindowFlashVisibility;
  local_618 = 0x4189fa00;
  uStack_614 = 1;
  uStack_610 = 0;
  uStack_60c = uStack_77c;
  local_680 = 1;
  local_678 = 0;
  local_670 = 0;
  uStack_770 = 0;
  local_688 = lVar14;
  lVar8 = SImage::FArguments::FArguments(local_598);
  local_628 = (undefined4)local_778;
  uStack_624 = local_778._4_4_;
  uStack_620 = uStack_770;
  uStack_61c = uStack_76c;
  uVar7 = FUN_1417dd840(&local_7a8,param_1,&local_628);
  local_768 = 0x119;
  local_760 = 0;
  local_758 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_760,uVar7);
  *(undefined1 *)(lVar8 + 0x78) = (undefined1)local_768;
  *(undefined1 *)(lVar8 + 0x79) = local_768._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x80,&local_760);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_760);
  if (local_7a0 == 0) {
LAB_141892aa3:
    if (local_7a8 != (longlong *)0x0) {
      FMemory::Free(local_7a8);
    }
  }
  else if (local_7a8 != (longlong *)0x0) {
    (**(code **)(*local_7a8 + 0x28))(local_7a8,0);
    if (local_7a8 != (longlong *)0x0) {
      local_7a8 = (longlong *)FMemory::Realloc(local_7a8,0,0);
    }
    local_7a0 = 0;
    goto LAB_141892aa3;
  }
  *(longlong *)(lVar8 + 0x108) = lVar14;
  *(undefined1 *)(lVar8 + 0x110) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x118,&local_678);
  plVar9 = (longlong *)FUN_140c61c00();
  plVar11 = plVar9 + 2;
  local_5e8 = plVar11;
  local_5e0 = plVar9;
  FUN_14044f790(&local_5e8,plVar11);
  local_818 = 0x278;
  SWidget::SetDebugInfo
            (plVar11,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Framework/Application/SWindowTitleBar.h"
             ,0x81);
  lVar8 = FUN_14187ca80(lVar8,param_1,&local_618);
  local_808 = *(undefined4 *)(lVar8 + 0x90);
  local_7d8 = lVar8 + 0xf8;
  local_7f0 = lVar8 + 0xe8;
  local_7e0 = *(undefined1 *)(lVar8 + 0xf1);
  local_7f8 = lVar8 + 200;
  local_800 = lVar8 + 0x98;
  local_7e8 = *(undefined1 *)(lVar8 + 0xf0);
  local_810 = lVar8 + 0x78;
  local_818 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar11,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  SImage::Construct(plVar11,lVar8);
  if (((char)plVar9[5] < '\0') || (cVar5 = (**(code **)(*plVar11 + 0x1e8))(plVar11), cVar5 != '\0'))
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
  uVar4 = DAT_1464b9eec;
  local_738 = DAT_1464b9eec;
  puVar13 = (undefined8 *)0x0;
  local_778 = FUN_14189fb30;
  local_6b8 = *local_7c0;
  local_6b0 = local_7c0[1];
  local_737 = 1;
  local_730 = 0;
  local_728 = 0;
  uStack_770 = 0;
  local_750 = DAT_1464b9eec;
  local_74f = 1;
  local_748 = 0;
  local_740 = 0;
  local_658 = 1;
  local_650 = 0;
  local_648 = 0;
  local_668 = 0;
  uStack_660 = 0;
  if (local_6b0 != 0) {
    LOCK();
    *(int *)(local_6b0 + 8) = *(int *)(local_6b0 + 8) + 1;
    UNLOCK();
  }
  local_6c8 = plVar11;
  local_6c0 = plVar9;
  puVar10 = (undefined8 *)operator_new(0x50);
  puVar15 = puVar13;
  if (puVar10 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar10);
    *puVar10 = &PTR_FUN_1444d5278;
    *(undefined4 *)(puVar10 + 4) = 0;
    *(undefined2 *)((longlong)puVar10 + 0x24) = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    *(undefined1 *)(puVar10 + 7) = 1;
    puVar10[8] = 0;
    *(undefined4 *)(puVar10 + 9) = 0;
    puVar15 = puVar10;
  }
  puVar10 = (undefined8 *)operator_new(0x50);
  if (puVar10 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar10);
    *(undefined4 *)(puVar10 + 4) = 0;
    *puVar10 = &PTR_FUN_1444d5278;
    *(undefined2 *)((longlong)puVar10 + 0x24) = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    *(undefined1 *)(puVar10 + 7) = 1;
    puVar10[8] = 0;
    *(undefined4 *)(puVar10 + 9) = 0;
    puVar13 = puVar10;
  }
  lVar8 = SOverlay::FArguments::FArguments(local_418);
  *(undefined1 *)(lVar8 + 0x78) = uVar4;
  *(undefined1 *)(lVar8 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x80,&local_730);
  local_7c0 = (undefined8 *)FUN_140801a00(puVar13,&local_6c8);
  plVar11 = (longlong *)(lVar8 + 0x108);
  iVar3 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar3);
  }
  *(undefined8 **)(*plVar11 + (longlong)iVar3 * 8) = local_7c0;
  uVar7 = FUN_1418a57f0(param_1,local_5f8,&local_6b8,local_7c8);
  uVar7 = FUN_140801a00(puVar15,uVar7);
  iVar3 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar3);
  }
  *(undefined8 *)(*plVar11 + (longlong)iVar3 * 8) = uVar7;
  plVar11 = (longlong *)operator_new(0x240);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_1440f90d0;
    if (plVar11 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4610();
    }
  }
  plVar12 = plVar11 + 2;
  local_5d0 = plVar12;
  local_5c8 = plVar11;
  FUN_14044f790(&local_5d0,plVar12);
  local_818 = 0x230;
  SWidget::SetDebugInfo
            (plVar12,"SOverlay",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Framework/Application/SWindowTitleBar.h"
             ,0x7d);
  local_808 = *(undefined4 *)(lVar8 + 0x90);
  local_7d8 = lVar8 + 0xf8;
  local_7f0 = lVar8 + 0xe8;
  local_7e0 = *(undefined1 *)(lVar8 + 0xf1);
  local_7f8 = lVar8 + 200;
  local_800 = lVar8 + 0x98;
  local_7e8 = *(undefined1 *)(lVar8 + 0xf0);
  local_818 = lVar8 + 0x60;
  local_810 = lVar8 + 0x78;
  SWidget::SWidgetConstruct(plVar12,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  SOverlay::Construct(plVar12,lVar8);
  if (((char)plVar11[5] < '\0') || (cVar5 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar5 != '\0')
     ) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar6;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_6a8 = plVar12;
  local_6a0 = plVar11;
  lVar8 = FUN_141886d30(local_2f8);
  *(undefined1 *)(lVar8 + 0x130) = 1;
  *(undefined4 *)(lVar8 + 0x120) = (undefined4)local_668;
  *(undefined4 *)(lVar8 + 0x124) = local_668._4_4_;
  *(undefined4 *)(lVar8 + 0x128) = (undefined4)uStack_660;
  *(undefined4 *)(lVar8 + 300) = uStack_660._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x138,&local_650);
  *(undefined1 *)(lVar8 + 0x78) = local_750;
  *(undefined1 *)(lVar8 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x80,&local_748);
  local_608 = (undefined4)local_778;
  uStack_604 = local_778._4_4_;
  uStack_600 = uStack_770;
  uStack_5fc = uStack_76c;
  uVar7 = FUN_1417dd6e0(&local_798,param_1,&local_608);
  local_718 = 1;
  local_720 = 0;
  local_710 = 0;
  local_708 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_710,uVar7);
  *(undefined8 *)(lVar8 + 0x188) = local_720;
  *(undefined1 *)(lVar8 + 400) = local_718;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x198,&local_710);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_710);
  if (local_790 != 0) {
    if (local_798 == (longlong *)0x0) goto LAB_141893003;
    (**(code **)(*local_798 + 0x28))(local_798,0);
    if (local_798 != (longlong *)0x0) {
      local_798 = (longlong *)FMemory::Realloc(local_798,0,0);
    }
    local_790 = 0;
  }
  if (local_798 != (longlong *)0x0) {
    FMemory::Free(local_798);
  }
LAB_141893003:
  plVar12 = (longlong *)operator_new(0x398);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar12 + 1) = 1;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_144d61068;
    if (plVar12 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar2 = plVar12 + 2;
  local_5b8 = plVar2;
  local_5b0 = plVar12;
  FUN_14044f790(&local_5b8,plVar2);
  local_818 = 0x388;
  SWidget::SetDebugInfo
            (plVar2,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Framework/Application/SWindowTitleBar.h"
             ,0x78);
  lVar8 = FUN_14188d200(lVar8,&local_6a8);
  local_808 = *(undefined4 *)(lVar8 + 0x90);
  local_7d8 = lVar8 + 0xf8;
  local_7f0 = lVar8 + 0xe8;
  local_7e0 = *(undefined1 *)(lVar8 + 0xf1);
  local_818 = lVar8 + 0x60;
  local_7f8 = lVar8 + 200;
  local_7e8 = *(undefined1 *)(lVar8 + 0xf0);
  local_800 = lVar8 + 0x98;
  local_810 = lVar8 + 0x78;
  plVar2 = plVar12 + 2;
  SWidget::SWidgetConstruct(plVar2,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_141971ea0(plVar2,lVar8);
  if (((char)plVar12[5] < '\0') || (cVar5 = (**(code **)(*plVar2 + 0x1e8))(plVar2), cVar5 != '\0'))
  {
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
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_698 = plVar2;
  local_690 = plVar12;
  TSlotBase<FSimpleSlot>::operator[](local_700 + 0x218,&local_698);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    plVar2 = plVar12 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    plVar2 = plVar12 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  FUN_14188af70(local_2f8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    plVar12 = plVar11 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (local_310 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_418);
  if (local_5f0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_5f0 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_5f0)(local_5f0);
      LOCK();
      piVar1 = (int *)((longlong)local_5f0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5f0 + 8))(local_5f0,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_650);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_748);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_730);
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
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    LOCK();
    plVar11 = plVar9 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    LOCK();
    plVar11 = plVar9 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_430);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_440);
  if (local_450 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_450 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_450)(local_450);
      LOCK();
      piVar1 = (int *)((longlong)local_450 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_450 + 8))(local_450,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_480);
  FUN_140456c70(local_598);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_678);
  return;
}



// FUNCTION 141893450 FUN_141893450 body=1240 status=ok
// SIG undefined FUN_141893450(void)

undefined8 * FUN_141893450(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  longlong *local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  float fStack_10c;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  EKeys::Initialize();
  FCoreStyle::ResetToDefault();
  lVar3 = operator_new(0x7b8);
  plVar6 = (longlong *)0x0;
  plVar4 = plVar6;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_1418893c0(lVar3);
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)plVar4;
    plVar6 = plVar5;
  }
  local_f0 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_f8,plVar4,plVar4);
  local_f8 = 0;
  DAT_1469f4590 = plVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_1469f4598,&local_f0);
  plVar6 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_f0)(local_f0);
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
  DAT_1469eaf38 = DAT_1469f4590;
  local_120 = DAT_1469f4598;
  if (DAT_1469f4598 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469f4598 + 1) = (int)DAT_1469f4598[1] + 1;
    UNLOCK();
  }
  SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_1469eaf40,&local_120);
  plVar6 = local_120;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_120 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  local_100 = (longlong *)param_2[1];
  DAT_1469eaf48 = (longlong *)*param_2;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  local_108 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_1469eaf50,&local_100);
  plVar6 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_100 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  plVar6 = DAT_1469f4598;
  local_e8 = DAT_1469f4590;
  if (DAT_1469f4598 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469f4598 + 1) = (int)DAT_1469f4598[1] + 1;
    UNLOCK();
  }
  if (local_e8 == (longlong *)0x0) {
    local_e8 = (longlong *)0x0;
  }
  else {
    local_e8 = local_e8 + 0xf;
  }
  local_e0 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  (**(code **)(*DAT_1469eaf48 + 8))(DAT_1469eaf48,&local_e8);
  plVar4 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_e0 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e0)(local_e0);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  local_c0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_b8 = 0;
  FUN_1416d23c0(DAT_1469eaf38,local_c8);
  FUN_141189610(&local_c0);
  plVar6 = DAT_1469f4590;
  *(float *)(DAT_1469f4590 + 0xcd) = (float)local_a0;
  *(float *)((longlong)plVar6 + 0x66c) = (float)local_9c;
  *(float *)(plVar6 + 0xce) = (float)local_98;
  *(float *)((longlong)plVar6 + 0x674) = (float)local_94;
  plVar5 = DAT_1469f4598;
  plVar4 = DAT_1469f4590;
  local_118 = FSlateApplication::OnVirtualDesktopSizeChanged;
  uStack_110 = 0;
  plVar6 = DAT_1469eaf48;
  if (DAT_1469f4598 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469f4598 + 1) = (int)DAT_1469f4598[1] + 1;
    plVar6 = DAT_1469eaf48;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  fStack_10c = (float)local_94;
  plVar7 = (longlong *)FMemory::Realloc(0,0x40);
  local_d8 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_GetPoolName_143f77e98;
    plVar7[1] = (longlong)plVar4;
    plVar7[2] = (longlong)plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar7 + 3) = (undefined4)local_118;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = local_118._4_4_;
    *(undefined4 *)(plVar7 + 4) = uStack_110;
    *(float *)((longlong)plVar7 + 0x24) = fStack_10c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar7[6] = lVar3;
    *plVar7 = (longlong)&PTR_GetPoolName_143f77ee0;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar7 = local_d8;
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = local_d8;
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
        plVar7 = local_d8;
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6 + 5,1);
    (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
    iVar2 = (int)plVar6[6];
    *(int *)(plVar6 + 6) = iVar2 + 1;
    if (*(int *)((longlong)plVar6 + 0x34) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6 + 5,iVar2);
    }
    puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + plVar6[5]);
    *puVar8 = plVar7;
    *(undefined4 *)(puVar8 + 1) = 4;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  *param_1 = DAT_1469f4590;
  plVar6 = DAT_1469f4598;
  param_1[1] = DAT_1469f4598;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar6 + 1;
    *(int *)plVar6 = (int)*plVar6 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 141893930 FUN_141893930 body=240 status=ok
// SIG undefined FUN_141893930(void)

void FUN_141893930(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  DAT_1469eaf34 = 1;
  lVar5 = FWindowsPlatformApplicationMisc::CreateApplication();
  local_20 = (longlong *)operator_new(0x18);
  if (local_20 != (longlong *)0x0) {
    *(undefined4 *)(local_20 + 1) = 1;
    *local_20 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_20 + 0xc) = 1;
    local_20[2] = lVar5;
  }
  local_28 = lVar5;
  SharedPointerInternals::EnableSharedFromThis(&local_28,lVar5,lVar5);
  FUN_141893450(local_18,&local_28);
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
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
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



// FUNCTION 141893a20 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144d60ee8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_144d60f30;
  }
  return;
}



// FUNCTION 141893a70 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144d60fb8;
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



// FUNCTION 141893ad0 FUN_141893ad0 body=95 status=ok
// SIG undefined FUN_141893ad0(void)

void FUN_141893ad0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144d610d8;
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
    *puVar3 = &PTR_GetPoolName_144d61120;
  }
  return;
}



// FUNCTION 141893b30 FUN_141893b30 body=56 status=ok
// SIG undefined FUN_141893b30(void)

void FUN_141893b30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144d60f78;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 141893b70 FUN_141893b70 body=465 status=ok
// SIG undefined FUN_141893b70(void)

void FUN_141893b70(undefined8 *param_1,longlong param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined1 *lpBits;
  HBITMAP ho;
  HBITMAP ho_00;
  HICON pHVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *lpBits_00;
  uint uVar5;
  ulonglong uVar6;
  undefined4 local_res18;
  undefined1 *local_58;
  uint local_50;
  undefined4 local_4c;
  ICONINFO local_48;
  
  uVar4 = param_3 * param_4;
  local_58 = (undefined1 *)0x0;
  local_4c = 0;
  lpBits_00 = (undefined1 *)0x0;
  uVar5 = uVar4;
  if (0 < (int)uVar4) {
    local_50 = uVar4;
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_58,0);
    lpBits_00 = local_58;
    uVar5 = local_50;
  }
  local_58 = (undefined1 *)0x0;
  local_4c = 0;
  local_50 = uVar4;
  if (0 < (int)uVar4) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_58,0);
  }
  lpBits = local_58;
  if (0 < (int)uVar5) {
    uVar6 = (ulonglong)uVar5;
    puVar2 = (undefined1 *)(param_2 + 2);
    puVar3 = local_58;
    do {
      local_res18 = CONCAT13(puVar2[1],CONCAT21(CONCAT11(puVar2[-2],puVar2[-1]),*puVar2));
      *(undefined4 *)(puVar2 + 4 + (longlong)(lpBits_00 + (-6 - param_2))) = local_res18;
      *puVar3 = 0xff;
      uVar6 = uVar6 - 1;
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 1;
    } while (uVar6 != 0);
  }
  ho = CreateBitmap(param_3,param_4,1,0x20,lpBits_00);
  ho_00 = CreateBitmap(param_3,param_4,1,8,lpBits);
  local_48._12_4_ = 0;
  local_48.fIcon = 0;
  local_48.xHotspot =
       (int)ROUND((float)param_3 * (float)param_5 + (float)param_3 * (float)param_5 + 0.5) >> 1;
  local_48.yHotspot =
       (int)ROUND((float)param_4 * param_5._4_4_ + (float)param_4 * param_5._4_4_ + 0.5) >> 1;
  local_48.hbmMask = ho;
  local_48.hbmColor = ho;
  pHVar1 = CreateIconIndirect(&local_48);
  *param_1 = pHVar1;
  DeleteObject(ho);
  DeleteObject(ho_00);
  if (lpBits != (undefined1 *)0x0) {
    FMemory::Free(lpBits);
  }
  if (lpBits_00 != (undefined1 *)0x0) {
    FMemory::Free(lpBits_00);
  }
  return;
}



// FUNCTION 141893d50 FUN_141893d50 body=3190 status=ok
// SIG undefined FUN_141893d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141893d50(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 (*pauVar11) [16];
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  uint local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  uint local_198;
  longlong *local_190;
  longlong local_188;
  longlong *local_180;
  longlong local_178;
  longlong *local_170;
  int local_168;
  int local_164;
  longlong local_160;
  longlong local_158;
  undefined8 *local_148;
  longlong *plStack_140;
  longlong *local_138;
  longlong *plStack_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_108 = *(longlong *)(*param_2 + 0x10);
  local_1c0 = param_3;
  local_100 = param_1;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar14 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar14 = param_1 + 0x40;
    }
    iVar7 = *(int *)(lVar14 + ((longlong)((int)((ulonglong)local_108 >> 0x20) + (int)local_108) &
                              (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar7 != -1) {
      do {
        plVar13 = (longlong *)((longlong)iVar7 * 0x80 + *(longlong *)(param_1 + 8));
        if (*plVar13 == local_108) {
          if ((iVar7 != -1) && (plVar13 != (longlong *)0x0)) goto LAB_141893e2b;
          break;
        }
        iVar7 = (int)plVar13[0xf];
      } while (iVar7 != -1);
    }
  }
  local_d0 = &local_108;
  FUN_14187e800(param_1 + 8,&local_168,&local_d0,0);
  plVar13 = (longlong *)((longlong)local_168 * 0x80 + *(longlong *)(param_1 + 8));
LAB_141893e2b:
  local_190 = plVar13 + 1;
  plVar10 = plVar13 + 0xd;
  if (*plVar10 == 0) {
    local_170 = (longlong *)param_2[1];
    local_178 = *param_2;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_170 + 1) = (int)local_170[1] + 1;
      UNLOCK();
    }
    if (plVar10 != &local_178) {
      *plVar10 = local_178;
      local_178 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(plVar13 + 0xe,&local_170);
    }
    plVar13 = local_170;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_170 + 1;
      lVar14 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
  }
  local_1b8 = 0;
  lVar14 = *(longlong *)(*param_2 + 0x18);
  if (lVar14 != 0) {
    local_c8 = *(undefined8 *)(*param_2 + 0x10);
    local_c0 = lVar14;
    TMultiMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,1>_>::
    EmplaceUnique<FName,FName>(param_1 + 0x58,&local_c0,&local_c8);
  }
  lVar14 = *param_3;
  local_180 = (longlong *)param_3[1];
  if (local_180 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_180 + 1) = (int)local_180[1] + 1;
    UNLOCK();
  }
  lVar20 = *param_2;
  uVar16 = 0;
  do {
    lVar19 = *(longlong *)(lVar14 + 0x40) + (longlong)(int)uVar16 * 0x20;
    cVar6 = FKey::IsValid(lVar19);
    if ((cVar6 != '\0') && (cVar6 = FKey::IsModifierKey(lVar19), cVar6 == '\0')) {
      local_1d8 = (longlong *)CONCAT71(local_1d8._1_7_,1);
      FUN_14189bcf0(param_1,local_b0,*(undefined8 *)(lVar20 + 0x10),
                    *(longlong *)(lVar14 + 0x40) + (longlong)(int)uVar16 * 0x20);
      plVar13 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_a8 + 1;
        lVar19 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
          }
        }
      }
    }
    plVar13 = local_180;
    uVar16 = uVar16 + 1;
  } while (uVar16 < 2);
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_180 + 1;
    lVar14 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  plVar10 = local_190;
  plVar13 = local_1c0;
  lVar14 = *(longlong *)(*local_1c0 + 0x78);
  if ((int)local_190[1] != *(int *)((longlong)local_190 + 0x34)) {
    plVar9 = (longlong *)local_190[8];
    if ((longlong *)local_190[8] == (longlong *)0x0) {
      plVar9 = local_190 + 7;
    }
    iVar7 = *(int *)((longlong)plVar9 +
                    ((longlong)((int)((ulonglong)lVar14 >> 0x20) + (int)lVar14) &
                    (longlong)(int)local_190[9] - 1U) * 4);
    if (iVar7 != -1) {
      lVar20 = *local_190;
      do {
        lVar19 = (longlong)iVar7 * 0x20;
        if (*(longlong *)(lVar19 + lVar20) == lVar14) {
          if ((iVar7 != -1) && (lVar20 = (longlong)iVar7 * 0x20 + lVar20, lVar20 != 0)) {
            local_180 = *(longlong **)(lVar20 + 0x10);
            if (local_180 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_180 + 1) = (int)local_180[1] + 1;
              UNLOCK();
            }
            goto LAB_141894055;
          }
          break;
        }
        iVar7 = *(int *)(lVar19 + 0x18 + lVar20);
      } while (iVar7 != -1);
    }
  }
  local_180 = (longlong *)0x0;
LAB_141894055:
  local_98 = (longlong *)local_1c0[1];
  local_a0 = *local_1c0;
  local_90 = local_a0;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_98 + 1) = (int)local_98[1] + 1;
    UNLOCK();
    local_90 = *local_1c0;
  }
  local_90 = local_90 + 0x78;
  local_88 = &local_a0;
  FUN_1418800e0(local_190,local_d8,&local_90,0);
  plVar9 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_98 + 1;
    lVar14 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_98)(local_98);
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
  uVar15 = 0;
  local_1c8 = 0;
  do {
    local_1b0 = DAT_1469eae28;
    local_1a8 = DAT_1469eae30;
    local_1a0 = DAT_1469eae38;
    if (DAT_1469eae38 != 0) {
      LOCK();
      *(int *)(DAT_1469eae38 + 8) = *(int *)(DAT_1469eae38 + 8) + 1;
      UNLOCK();
    }
    local_1d8 = &local_1b0;
    local_198 = local_198 & 0xfffffff0;
    cVar6 = FUN_14189f680(local_100,local_108,*(undefined8 *)(*plVar13 + 0x78),uVar15 & 0xff);
    uVar16 = local_198;
    lVar14 = local_1b0;
    if (cVar6 == '\0') {
      uVar21 = (ulonglong)(int)uVar15;
      lVar20 = uVar21 * 0x20;
      lVar14 = *(longlong *)(*plVar13 + 0x40) + lVar20;
      cVar6 = FKey::IsValid(lVar14);
      if ((cVar6 != '\0') &&
         (cVar6 = FKey::IsModifierKey(lVar14), plVar9 = local_1c0, cVar6 == '\0')) {
        uVar16 = 0;
        local_1b8 = 0;
        local_f8 = 0;
        do {
          if (local_1b8 != 0) break;
          plVar13 = (longlong *)((longlong)(int)uVar16 * 0x50 + plVar10[10]);
          TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
          ::FindId(plVar13,&local_164,*(longlong *)(*plVar9 + 0x40) + lVar20);
          if ((local_164 == -1) || (lVar14 = (longlong)local_164 * 0x30 + *plVar13, lVar14 == 0)) {
            local_160 = 0;
          }
          else {
            local_160 = *(longlong *)(lVar14 + 0x20);
          }
          uVar16 = uVar16 + 1;
          local_1b8 = local_160;
        } while (uVar16 < 2);
        puVar18 = (undefined8 *)0x0;
        local_f0 = 0;
        plVar13 = local_1c0;
        if (local_1b8 == 0) {
          puVar8 = (undefined8 *)operator_new(0x20);
          plVar13 = local_1c0;
          if (puVar8 != (undefined8 *)0x0) {
            puVar18 = (undefined8 *)(*(longlong *)(*local_1c0 + 0x40) + lVar20);
            *puVar8 = *puVar18;
            puVar8[1] = puVar18[1];
            lVar14 = puVar18[2];
            puVar8[2] = lVar14;
            if (lVar14 != 0) {
              LOCK();
              *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
              UNLOCK();
            }
            *(uint *)(puVar8 + 3) =
                 *(uint *)(puVar8 + 3) ^ (*(uint *)(puVar8 + 3) ^ *(uint *)(puVar18 + 3)) & 1;
            uVar16 = (*(uint *)(puVar8 + 3) ^ *(uint *)(puVar18 + 3)) & 2 ^ *(uint *)(puVar8 + 3);
            *(uint *)(puVar8 + 3) = uVar16;
            uVar16 = (uVar16 ^ *(uint *)(puVar18 + 3)) & 4 ^ uVar16;
            *(uint *)(puVar8 + 3) = uVar16;
            *(uint *)(puVar8 + 3) = (uVar16 ^ *(uint *)(puVar18 + 3)) & 8 ^ uVar16;
            puVar18 = puVar8;
          }
          plStack_140 = (longlong *)operator_new(0x18);
          if (plStack_140 != (longlong *)0x0) {
            *(undefined4 *)(plStack_140 + 1) = 1;
            *plStack_140 = (longlong)&PTR_DestroyObject_144d5f3e8;
            *(undefined4 *)((longlong)plStack_140 + 0xc) = 1;
            plStack_140[2] = (longlong)puVar18;
          }
          local_148 = puVar18;
          SharedPointerInternals::EnableSharedFromThis(&local_148,puVar18,puVar18);
          local_128._8_8_ = plStack_140;
          local_128._0_8_ = local_148;
          uVar4 = (undefined4)((ulonglong)local_148 >> 0x20);
          uVar5 = (undefined4)((ulonglong)plStack_140 >> 0x20);
          pauVar11 = (undefined1 (*) [16])(uVar21 * 0x10 + *(longlong *)*plVar13);
          if (plStack_140 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
            UNLOCK();
          }
          if (&local_128 != pauVar11) {
            local_128 = *pauVar11;
            *(int *)*pauVar11 = (int)local_148;
            *(undefined4 *)(*pauVar11 + 4) = uVar4;
            *(int *)(*pauVar11 + 8) = (int)plStack_140;
            *(undefined4 *)(*pauVar11 + 0xc) = uVar5;
            local_60 = (int)local_148;
            uStack_5c = uVar4;
            uStack_58 = (int)plStack_140;
            uStack_54 = uVar5;
          }
          uVar3 = local_128._8_8_;
          if ((undefined8 *)local_128._8_8_ != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_128._8_8_ + 8);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (*(code *)**(undefined8 **)local_128._8_8_)(local_128._8_8_);
              LOCK();
              piVar1 = (int *)(uVar3 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*(longlong *)local_128._8_8_ + 8))(local_128._8_8_,1);
              }
            }
          }
          plVar9 = plStack_140;
          if (plStack_140 != (longlong *)0x0) {
            LOCK();
            plVar12 = plStack_140 + 1;
            lVar14 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*plStack_140)(plStack_140);
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
        uVar15 = (ulonglong)local_1c8;
      }
    }
    else {
      uVar17 = 0;
      local_188 = 0;
      local_e8 = 0;
      do {
        if (local_188 != 0) break;
        plVar13 = (longlong *)((longlong)(int)uVar17 * 0x50 + plVar10[10]);
        if ((int)plVar13[1] != *(int *)((longlong)plVar13 + 0x34)) {
          plVar9 = (longlong *)plVar13[8];
          if ((longlong *)plVar13[8] == (longlong *)0x0) {
            plVar9 = plVar13 + 7;
          }
          iVar7 = *(int *)((longlong)plVar9 +
                          (((longlong)((int)((ulonglong)local_1b0 >> 0x20) + (int)local_1b0) ^
                           (ulonglong)(local_198 & 1)) & (longlong)(int)plVar13[9] - 1U) * 4);
          if (iVar7 != -1) {
            lVar20 = *plVar13;
            do {
              lVar19 = (longlong)iVar7;
              if ((((*(longlong *)(lVar20 + lVar19 * 0x30) == local_1b0) &&
                   (uVar2 = *(uint *)(lVar20 + 0x18 + lVar19 * 0x30), ((local_198 ^ uVar2) & 1) == 0
                   )) && (((local_198 ^ uVar2) & 2) == 0)) &&
                 ((((local_198 ^ uVar2) & 4) == 0 && (((local_198 ^ uVar2) & 8) == 0)))) {
                if ((iVar7 != -1) && (lVar20 = lVar20 + lVar19 * 0x30, lVar20 != 0)) {
                  local_158 = *(longlong *)(lVar20 + 0x20);
                  goto LAB_1418944cd;
                }
                break;
              }
              iVar7 = *(int *)(lVar20 + 0x28 + lVar19 * 0x30);
            } while (iVar7 != -1);
          }
        }
        local_158 = 0;
LAB_1418944cd:
        uVar17 = uVar17 + 1;
        local_188 = local_158;
      } while (uVar17 < 2);
      plVar13 = (longlong *)0x0;
      local_e0 = 0;
      if (local_188 != 0) {
        plVar9 = plVar13;
        if ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34)) {
          plVar12 = (longlong *)plVar10[8];
          if ((longlong *)plVar10[8] == (longlong *)0x0) {
            plVar12 = plVar10 + 7;
          }
          iVar7 = *(int *)((longlong)plVar12 +
                          ((longlong)((int)((ulonglong)local_188 >> 0x20) + (int)local_188) &
                          (longlong)(int)plVar10[9] - 1U) * 4);
          if (iVar7 != -1) {
            lVar20 = *plVar10;
            do {
              lVar19 = (longlong)iVar7 * 0x20;
              if (*(longlong *)(lVar19 + lVar20) == local_188) {
                if ((iVar7 != -1) && (lVar20 = (longlong)iVar7 * 0x20 + lVar20, lVar20 != 0)) {
                  plVar13 = *(longlong **)(lVar20 + 8);
                  plVar9 = *(longlong **)(lVar20 + 0x10);
                  if (plVar9 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
                    UNLOCK();
                  }
                }
                break;
              }
              iVar7 = *(int *)(lVar19 + 0x18 + lVar20);
            } while (iVar7 != -1);
          }
        }
        lVar20 = (longlong)(int)local_1c8 * 0x10;
        FUN_1418bd300((longlong)(int)local_1c8 * 0x50 + local_190[10],
                      *(undefined8 *)(*plVar13 + lVar20));
        plVar10 = (longlong *)operator_new(0x20);
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          *plVar10 = DAT_1469eae28;
          plVar10[1] = DAT_1469eae30;
          lVar19 = DAT_1469eae38;
          plVar10[2] = DAT_1469eae38;
          if (lVar19 != 0) {
            LOCK();
            piVar1 = (int *)(lVar19 + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            lVar14 = local_1b0;
            uVar16 = local_198;
          }
          *(uint *)(plVar10 + 3) = *(uint *)(plVar10 + 3) & 0xfffffff0;
        }
        puVar18 = (undefined8 *)operator_new(0x18);
        if (puVar18 == (undefined8 *)0x0) {
          puVar18 = (undefined8 *)0x0;
        }
        else {
          *(undefined4 *)(puVar18 + 1) = 1;
          *(undefined4 *)((longlong)puVar18 + 0xc) = 1;
          *puVar18 = &PTR_DestroyObject_144d5f3e8;
          puVar18[2] = plVar10;
        }
        puVar8 = (undefined8 *)(*plVar13 + lVar20);
        SharedPointerInternals::EnableSharedFromThis(&local_80,plVar10,plVar10);
        local_80 = *puVar8;
        *puVar8 = plVar10;
        plVar13 = (longlong *)puVar8[1];
        puVar8[1] = puVar18;
        local_78 = plVar13;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar13 + 1;
          lVar20 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          lVar14 = local_1b0;
          uVar16 = local_198;
          if ((int)lVar20 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            lVar14 = local_1b0;
            uVar16 = local_198;
            if (iVar7 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
              lVar14 = local_1b0;
              uVar16 = local_198;
            }
          }
        }
        plVar10 = local_190;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar9 + 1;
          lVar20 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          lVar14 = local_1b0;
          uVar16 = local_198;
          if ((int)lVar20 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            lVar14 = local_1b0;
            plVar10 = local_190;
            uVar16 = local_198;
            if (iVar7 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
              lVar14 = local_1b0;
              plVar10 = local_190;
              uVar16 = local_198;
            }
          }
        }
      }
      plVar13 = (longlong *)operator_new(0x20);
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        *plVar13 = lVar14;
        plVar13[1] = local_1a8;
        plVar13[2] = local_1a0;
        if (local_1a0 != 0) {
          LOCK();
          *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
          UNLOCK();
          uVar16 = local_198;
        }
        *(uint *)(plVar13 + 3) = *(uint *)(plVar13 + 3) & 0xfffffff0;
        *(uint *)(plVar13 + 3) = *(uint *)(plVar13 + 3) | uVar16 & 0xf;
      }
      plStack_130 = (longlong *)operator_new(0x18);
      if (plStack_130 != (longlong *)0x0) {
        *(undefined4 *)(plStack_130 + 1) = 1;
        *plStack_130 = (longlong)&PTR_DestroyObject_144d5f3e8;
        *(undefined4 *)((longlong)plStack_130 + 0xc) = 1;
        plStack_130[2] = (longlong)plVar13;
      }
      local_138 = plVar13;
      SharedPointerInternals::EnableSharedFromThis(&local_138,plVar13,plVar13);
      plVar13 = local_1c0;
      uVar15 = (ulonglong)(int)local_1c8;
      local_118._8_8_ = plStack_130;
      local_118._0_8_ = local_138;
      uVar4 = (undefined4)((ulonglong)local_138 >> 0x20);
      uVar5 = (undefined4)((ulonglong)plStack_130 >> 0x20);
      pauVar11 = (undefined1 (*) [16])(uVar15 * 0x10 + *(longlong *)*local_1c0);
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
        UNLOCK();
      }
      if (&local_118 != pauVar11) {
        local_118 = *pauVar11;
        *(int *)*pauVar11 = (int)local_138;
        *(undefined4 *)(*pauVar11 + 4) = uVar4;
        *(int *)(*pauVar11 + 8) = (int)plStack_130;
        *(undefined4 *)(*pauVar11 + 0xc) = uVar5;
        local_50 = (int)local_138;
        uStack_4c = uVar4;
        uStack_48 = (int)plStack_130;
        uStack_44 = uVar5;
      }
      uVar3 = local_118._8_8_;
      if ((undefined8 *)local_118._8_8_ != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_118._8_8_ + 8);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (*(code *)**(undefined8 **)local_118._8_8_)(local_118._8_8_);
          LOCK();
          piVar1 = (int *)(uVar3 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*(longlong *)local_118._8_8_ + 8))(local_118._8_8_,1);
          }
        }
      }
      plVar9 = plStack_130;
      uVar21 = uVar15;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_130 + 1;
        lVar14 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_130)(plStack_130);
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
    uVar3 = *(undefined8 *)(*(longlong *)*plVar13 + uVar21 * 0x10);
    cVar6 = FKey::IsValid(uVar3);
    if ((cVar6 != '\0') && (cVar6 = FKey::IsModifierKey(uVar3), cVar6 == '\0')) {
      local_b8 = ((longlong *)*plVar13)[0xf];
      puVar18 = (undefined8 *)((uVar15 & 0xff) * 0x10 + *(longlong *)*plVar13);
      plVar9 = (longlong *)puVar18[1];
      local_70 = *puVar18;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_68 = &local_b8;
      FUN_14187f950(uVar21 * 0x50 + plVar10[10],local_d4,&local_70,0);
      plVar13 = local_1c0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar9 + 1;
        lVar14 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar13 = local_1c0;
          if (iVar7 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
            plVar13 = local_1c0;
          }
        }
      }
    }
    FKey::~FKey(&local_1b0);
    plVar9 = local_180;
    local_1c8 = (int)uVar15 + 1;
    uVar15 = (ulonglong)local_1c8;
    if (1 < local_1c8) {
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_180 + 1;
        lVar14 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_180)(local_180);
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
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(plVar13);
      return;
    }
  } while( true );
}



// FUNCTION 1418949d0 Cursor body=172 status=ok
// SIG undefined Cursor(void)

longlong TSlateBaseNamedArgs<SButton>::Cursor(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != (undefined4 *)(param_1 + 0x40)) {
    if (*(char *)(param_1 + 0x44) != '\0') {
      *(undefined1 *)(param_1 + 0x44) = 0;
    }
    if (*(char *)(param_2 + 1) != '\0') {
      *(undefined4 *)(param_1 + 0x40) = *param_2;
      *(undefined1 *)(param_1 + 0x44) = 1;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 2);
  if ((longlong *)(param_2 + 4) != plVar1) {
    if ((param_2[6] != 0) && (plVar2 = *(longlong **)(param_2 + 4), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
      return param_1;
    }
    if ((*(int *)(param_1 + 0x58) != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*plVar1 != 0) {
        lVar3 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar3;
      }
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  return param_1;
}



// FUNCTION 141894a80 DestroyObject body=48 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FHardwareCursor::FPngFileData>::
     DestroyObject(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141894ac0 FUN_141894ac0 body=9 status=ok
// SIG undefined FUN_141894ac0(void)

void FUN_141894ac0(longlong param_1)

{
  FUN_14188c2c0(param_1 + 0x10);
  return;
}



// FUNCTION 141894ae0 FUN_141894ae0 body=9 status=ok
// SIG undefined FUN_141894ae0(void)

void FUN_141894ae0(longlong param_1)

{
  FUN_140691710(param_1 + 0x10);
  return;
}



// FUNCTION 141894af0 FUN_141894af0 body=95 status=ok
// SIG undefined FUN_141894af0(void)

void FUN_141894af0(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x450);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x440);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x430);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x420);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x410);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3b0);
  FUN_140691710(param_1 + 0x10);
  return;
}



// FUNCTION 141894b70 FUN_141894b70 body=47 status=ok
// SIG undefined FUN_141894b70(void)

void FUN_141894b70(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x310);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x300);
  FUN_140458b70(param_1 + 0x10);
  return;
}



// FUNCTION 141894ba0 FUN_141894ba0 body=35 status=ok
// SIG undefined FUN_141894ba0(void)

void FUN_141894ba0(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x228);
  FUN_1417f85e0(param_1 + 0x10);
  return;
}



// FUNCTION 141894bf0 DestroyObject body=93 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FGenericWindowDefinition,SharedPointerInternals::DefaultDeleter<FGenericWindowDefinition>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x6c) != '\0') {
      *(undefined1 *)(lVar1 + 0x6c) = 0;
    }
    if (*(char *)(lVar1 + 100) != '\0') {
      *(undefined1 *)(lVar1 + 100) = 0;
    }
    if (*(char *)(lVar1 + 0x5c) != '\0') {
      *(undefined1 *)(lVar1 + 0x5c) = 0;
    }
    if (*(char *)(lVar1 + 0x54) != '\0') {
      *(undefined1 *)(lVar1 + 0x54) = 0;
    }
    if (*(longlong *)(lVar1 + 0x38) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x70);
    return;
  }
  return;
}



// FUNCTION 141894c50 DestroyObject body=109 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FInputChord,SharedPointerInternals::DefaultDeleter<FInputChord>_>
     ::DestroyObject(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(lVar4 + 0x10);
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
    FMemory::operator_delete(lVar4,0x20);
  }
  return;
}



// FUNCTION 141894cc0 FUN_141894cc0 body=97 status=ok
// SIG undefined FUN_141894cc0(void)

void FUN_141894cc0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 9) = 0;
    if (plVar1[8] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FTextId,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(plVar1,0);
    if (plVar1[4] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x50);
    return;
  }
  return;
}



// FUNCTION 141894d30 DestroyObject body=56 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FSlateApplication::FCacheElementPools,SharedPointerInternals::DefaultDeleter<FSlateApplication::FCacheElementPools>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar1 + 0x10);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar1);
    FMemory::operator_delete(lVar1,0x20);
    return;
  }
  return;
}



// FUNCTION 141894d70 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FSlateWindowElementList,SharedPointerInternals::DefaultDeleter<FSlateWindowElementList>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1417f7e40(lVar1);
    FMemory::operator_delete(lVar1,0xab0);
    return;
  }
  return;
}



// FUNCTION 141894da0 FUN_141894da0 body=20 status=ok
// SIG undefined FUN_141894da0(void)

void FUN_141894da0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUICommandInfo::_scalar_deleting_destructor_(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 141894dc0 FUN_141894dc0 body=1643 status=ok
// SIG undefined FUN_141894dc0(void)

/* WARNING: Removing unreachable block (ram,0x0001418951b3) */
/* WARNING: Removing unreachable block (ram,0x0001418951c3) */
/* WARNING: Removing unreachable block (ram,0x0001418951d3) */
/* WARNING: Removing unreachable block (ram,0x0001418951eb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141894dc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  int local_res10;
  int local_res18;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  iVar11 = *(int *)(param_1 + 0x158);
  do {
    if (iVar11 < 1) {
      iVar11 = *(int *)(param_1 + 0x158);
      if (iVar11 != 0) {
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x150) + 8);
        do {
          plVar8 = (longlong *)*plVar7;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar8 + 1;
            lVar15 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          plVar7 = plVar7 + 2;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      *(undefined4 *)(param_1 + 0x158) = 0;
      if (*(int *)(param_1 + 0x15c) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0x150),0);
      }
      return;
    }
    lVar15 = **(longlong **)(param_1 + 0x150);
    uStack_60 = (longlong *)(*(longlong **)(param_1 + 0x150))[1];
    if (uStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
      UNLOCK();
    }
    lVar6 = (longlong)*(int *)(param_1 + 0x158);
    local_68 = lVar15;
    if (*(int *)(param_1 + 0x158) != 0) {
      iVar11 = 0;
      local_res10 = 0;
      lVar12 = 0;
      bVar16 = **(longlong **)(param_1 + 0x150) != lVar15;
      iVar13 = 0;
      do {
        lVar12 = lVar12 + 1;
        iVar14 = iVar13 + 1;
        if (lVar12 < lVar6) {
          plVar7 = (longlong *)(lVar12 * 0x10 + *(longlong *)(param_1 + 0x150));
          do {
            if (bVar16 != (*plVar7 != lVar15)) break;
            iVar14 = iVar14 + 1;
            lVar12 = lVar12 + 1;
            plVar7 = plVar7 + 2;
          } while (lVar12 < lVar6);
        }
        iVar10 = iVar14 - iVar13;
        if (bVar16 == false) {
          if (iVar10 != 0) {
            plVar7 = (longlong *)((longlong)iVar13 * 0x10 + 8 + *(longlong *)(param_1 + 0x150));
            do {
              plVar8 = (longlong *)*plVar7;
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                plVar9 = plVar8 + 1;
                lVar15 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar15 == 1) {
                  (**(code **)*plVar8)(plVar8);
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
              plVar7 = plVar7 + 2;
              iVar10 = iVar10 + -1;
              lVar15 = local_68;
              iVar11 = local_res10;
            } while (iVar10 != 0);
          }
        }
        else {
          if (iVar11 != iVar13) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0x150)),
                       (void *)((longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x150)),
                       (longlong)iVar10 << 4);
            lVar15 = local_68;
          }
          local_res10 = iVar11 + iVar10;
          iVar11 = local_res10;
        }
        bVar16 = (bool)(bVar16 ^ 1);
        iVar13 = iVar14;
      } while (lVar12 < lVar6);
      *(int *)(param_1 + 0x158) = iVar11;
    }
    plVar7 = uStack_60;
    if (0 < *(int *)(param_1 + 0x148)) {
      plVar8 = *(longlong **)(param_1 + 0x140);
      plVar9 = plVar8 + (longlong)*(int *)(param_1 + 0x148) * 2;
      if (plVar8 != plVar9) {
LAB_141894fa7:
        if ((*plVar8 == 0) || (*plVar8 != lVar15)) break;
        if (uStack_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
          UNLOCK();
        }
        lVar6 = (longlong)*(int *)(param_1 + 0x148);
        if (*(int *)(param_1 + 0x148) != 0) {
          iVar11 = 0;
          local_res18 = 0;
          lVar12 = 0;
          bVar16 = **(longlong **)(param_1 + 0x140) != lVar15;
          iVar13 = 0;
          do {
            lVar12 = lVar12 + 1;
            iVar14 = iVar13 + 1;
            if (lVar12 < lVar6) {
              plVar8 = (longlong *)(lVar12 * 0x10 + *(longlong *)(param_1 + 0x140));
              do {
                if (bVar16 != (*plVar8 != lVar15)) break;
                iVar14 = iVar14 + 1;
                lVar12 = lVar12 + 1;
                plVar8 = plVar8 + 2;
              } while (lVar12 < lVar6);
            }
            iVar10 = iVar14 - iVar13;
            if (bVar16 == false) {
              if (iVar10 != 0) {
                plVar8 = (longlong *)((longlong)iVar13 * 0x10 + 8 + *(longlong *)(param_1 + 0x140));
                do {
                  plVar9 = (longlong *)*plVar8;
                  if (plVar9 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plVar9 + 1;
                    lVar4 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar4 == 1) {
                      (**(code **)*plVar9)(plVar9);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar9 + 0xc);
                      iVar11 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar11 == 1) {
                        (**(code **)(*plVar9 + 8))(plVar9,1);
                      }
                    }
                  }
                  plVar8 = plVar8 + 2;
                  iVar10 = iVar10 + -1;
                  iVar11 = local_res18;
                } while (iVar10 != 0);
              }
            }
            else {
              if (iVar11 != iVar13) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0x140)),
                           (void *)((longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x140)),
                           (longlong)iVar10 << 4);
              }
              local_res18 = iVar11 + iVar10;
              iVar11 = local_res18;
            }
            bVar16 = (bool)(bVar16 ^ 1);
            iVar13 = iVar14;
          } while (lVar12 < lVar6);
          *(int *)(param_1 + 0x148) = iVar11;
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar7 + 1;
          lVar15 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        if (*(int *)(param_1 + 0x148) < 1) {
          for (iVar11 = 0; (-1 < iVar11 && (iVar11 < *(int *)(param_1 + 0x118)));
              iVar11 = iVar11 + 1) {
            FUN_14182c7c0(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar11 * 0x10),
                          1);
          }
          if (((*(int *)(param_1 + 0x608) != 0) &&
              (*(longlong **)(param_1 + 0x600) != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x600) + 0x18))(), cVar5 != '\0')) {
            if (*(int *)(param_1 + 0x608) == 0) {
              (**(code **)(_DAT_00000000 + 0x40))();
            }
            else {
              (**(code **)(**(longlong **)(param_1 + 0x600) + 0x40))();
            }
          }
        }
        else {
          plVar7 = *(longlong **)
                    (*(longlong *)(param_1 + 0x140) + -8 +
                    (longlong)*(int *)(param_1 + 0x148) * 0x10);
          uVar3 = *(undefined8 *)
                   (*(longlong *)(param_1 + 0x140) + -0x10 +
                   (longlong)*(int *)(param_1 + 0x148) * 0x10);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
          }
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar7 + 1;
            lVar15 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          FUN_14182c7c0(uVar3,1);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar7 + 1;
            lVar15 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
        }
      }
    }
LAB_141895287:
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = (undefined4)uStack_60;
    uStack_4c = uStack_60._4_4_;
    if (uStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
      UNLOCK();
    }
    FUN_1418afdb0(param_1 + 0x160,&local_58);
    FUN_1418b1860(param_1,&local_68);
    plVar7 = uStack_60;
    if (uStack_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = uStack_60 + 1;
      lVar15 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*uStack_60)(uStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    iVar11 = *(int *)(param_1 + 0x158);
  } while( true );
  plVar8 = plVar8 + 2;
  if (plVar8 == plVar9) goto LAB_141895287;
  goto LAB_141894fa7;
}



// FUNCTION 141895430 FUN_141895430 body=272 status=ok
// SIG undefined FUN_141895430(void)

void FUN_141895430(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    plVar2 = *(longlong **)(param_1 + 0x50);
    plVar6 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar7) {
        LOCK();
        bVar7 = iVar4 == (int)plVar2[1];
        if (bVar7) {
          *(int *)(plVar2 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar7) {
          plVar6 = plVar2;
          if ((plVar2 != (longlong *)0x0) && (*(longlong **)(param_1 + 0x48) != (longlong *)0x0)) {
            (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
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
    puVar5 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
    local_28 = *puVar5;
    local_20 = puVar5[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_141890200(param_1 + 0x18,&local_28);
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
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
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
  }
  return;
}



// FUNCTION 141895540 FUN_141895540 body=145 status=ok
// SIG undefined FUN_141895540(void)

void FUN_141895540(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    puVar5 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
    local_20 = puVar5[1];
    local_28 = *puVar5;
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_141890200(param_1 + 0x18,&local_28);
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
    }
  }
  return;
}



// FUNCTION 1418955e0 FUN_1418955e0 body=277 status=ok
// SIG undefined FUN_1418955e0(void)

void FUN_1418955e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    lVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
    if (*(longlong *)(lVar5 + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(lVar5 + 8) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_141890200(param_1 + 0x18);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_10 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)local_10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10);
        }
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x50);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar4 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (!bVar6) {
        while( true ) {
          LOCK();
          bVar6 = iVar4 == (int)plVar3[1];
          if (bVar6) {
            *(int *)(plVar3 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar6) break;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar6 = iVar4 == 0;
          if (bVar6) {
            *(int *)(plVar3 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar6) {
            return;
          }
        }
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x48) != 0) {
            FUN_141856430();
          }
          LOCK();
          plVar2 = plVar3 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
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
      }
    }
  }
  return;
}



// FUNCTION 141895700 DismissAllMenus body=14 status=ok
// SIG undefined DismissAllMenus(void)

void FSlateApplication::DismissAllMenus(longlong param_1)

{
  FMenuStack::DismissInternal(param_1 + 0x160,0);
  return;
}



// FUNCTION 141895710 DismissInternal body=117 status=ok
// SIG undefined DismissInternal(void)

void FMenuStack::DismissInternal(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x58) + -1;
  lVar1 = (longlong)iVar3;
  if (param_2 <= lVar1) {
    lVar2 = lVar1 << 4;
    do {
      if ((-1 < lVar1) && (iVar3 < *(int *)(param_1 + 0x58))) {
        (**(code **)(**(longlong **)(lVar2 + *(longlong *)(param_1 + 0x50)) + 0x38))();
      }
      iVar3 = iVar3 + -1;
      lVar1 = lVar1 + -1;
      lVar2 = lVar2 + -0x10;
    } while (param_2 <= lVar1);
  }
  return;
}



// FUNCTION 141895790 FUN_141895790 body=410 status=ok
// SIG undefined FUN_141895790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141895790(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  longlong local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined1 local_170 [8];
  undefined1 local_168 [320];
  longlong *local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  FWidgetPath::FWidgetPath(local_170);
  local_198[0] = DAT_1464b9ee8;
  local_180 = *param_2;
  local_178 = param_2[1];
  if (local_178 != 0) {
    LOCK();
    *(int *)(local_178 + 8) = *(int *)(local_178 + 8) + 1;
    UNLOCK();
  }
  cVar5 = FUN_14189ada0(param_1,&local_180,local_170,local_198);
  if (cVar5 != '\0') {
    FUN_1418998c0(param_1 + 0x160,&local_190,local_170);
    if (local_190 != 0) {
      plVar3 = *(longlong **)(param_1 + 0x1b0);
      for (plVar6 = plVar3; plVar6 != plVar3 + (longlong)*(int *)(param_1 + 0x1b8) * 2;
          plVar6 = plVar6 + 2) {
        if (*plVar6 == local_190) {
          uVar7 = (longlong)plVar6 - (longlong)plVar3 >> 4;
          if ((int)uVar7 != -1) {
            FMenuStack::DismissInternal(param_1 + 0x160,uVar7 & 0xffffffff);
          }
          break;
        }
      }
    }
    plVar3 = local_188;
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_188 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_188 + 8))(local_188,1);
        }
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_20);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  FUN_140456b10(local_168);
  return;
}



// FUNCTION 141895930 FUN_141895930 body=154 status=ok
// SIG undefined FUN_141895930(void)

undefined1 FUN_141895930(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_1418959d0(param_1 + 0x330,&local_18);
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 1418959d0 FUN_1418959d0 body=867 status=ok
// SIG undefined FUN_1418959d0(void)

undefined8 FUN_1418959d0(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  bool bVar14;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  uVar3 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  uStack_a4 = 1;
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = *puVar13;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar12 == 0) {
      lVar6 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar11 = local_a8 + 1;
      bVar14 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar11;
      if (bVar14) goto LAB_141895aa1;
      uVar12 = puVar13[lVar6 + 1];
    }
    uStack_a4 = -uVar12 & uVar12;
    iVar11 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_94 = (iStack_90 - iVar11) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_141895aa1:
      uStack_94 = uVar3;
    }
  }
  uStack_74 = *(uint *)(param_1 + 5);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  local_40 = CONCAT44(uStack_8c,iStack_90);
  uVar12 = uStack_74 & 0xffffffe0;
  iStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_50 = puVar1;
  if (uStack_74 != uVar3) {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar7 = puVar13[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
    iVar11 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_141895b7d;
      uVar7 = puVar13[(longlong)iVar11 + 1];
      iVar11 = iVar11 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar11 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_74 = (uVar12 - iVar11) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_141895b7d:
      uStack_74 = uVar3;
    }
  }
  do {
    if ((uStack_44 == uStack_74) && (local_50 == puVar1)) {
      plVar4 = (longlong *)param_2[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar4 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      return 0;
    }
    lVar8 = (longlong)*(int *)(*param_1 + 0x10 + (longlong)(int)uStack_44 * 0x30);
    lVar6 = *(longlong *)(*param_1 + 8 + (longlong)(int)uStack_44 * 0x30);
    plVar4 = *(longlong **)(lVar6 + -8 + lVar8 * 0x10);
    plVar5 = *(longlong **)(lVar6 + -0x10 + lVar8 * 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    plVar9 = (longlong *)0x0;
    if (plVar4 == (longlong *)0x0) {
LAB_141895c09:
      plVar9 = plVar4;
      plVar10 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        plVar10 = plVar5;
      }
    }
    else {
      LOCK();
      iVar11 = (int)plVar4[1];
      bVar14 = iVar11 == 0;
      if (bVar14) {
        *(int *)(plVar4 + 1) = 0;
        iVar11 = 0;
      }
      UNLOCK();
      while (plVar10 = plVar9, !bVar14) {
        LOCK();
        bVar14 = iVar11 == (int)plVar4[1];
        if (bVar14) {
          *(int *)(plVar4 + 1) = iVar11 + 1;
        }
        UNLOCK();
        if (bVar14) goto LAB_141895c09;
        LOCK();
        iVar11 = (int)plVar4[1];
        bVar14 = iVar11 == 0;
        if (bVar14) {
          *(int *)(plVar4 + 1) = 0;
          iVar11 = 0;
        }
        UNLOCK();
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    if (plVar10 == (longlong *)*param_2) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar9 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar4 = (longlong *)param_2[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar4 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      return 1;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar9 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  } while( true );
}



// FUNCTION 141895d40 FUN_141895d40 body=191 status=ok
// SIG undefined FUN_141895d40(void)

undefined1
FUN_141895d40(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined4 local_res8;
  undefined1 local_resc;
  undefined8 local_18;
  longlong local_10;
  
  local_resc = *(char *)(param_4 + 1) != '\0';
  if ((bool)local_resc) {
    local_res8 = *param_4;
  }
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_141895e00(param_1 + 0x330,&local_18,param_3,&local_res8);
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
  if (*(char *)(param_4 + 1) != '\0') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  return uVar6;
}



// FUNCTION 141895e00 FUN_141895e00 body=939 status=ok
// SIG undefined FUN_141895e00(void)

undefined8 FUN_141895e00(longlong *param_1,undefined8 *param_2,int param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  bool bVar13;
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  uint uStack_84;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  uVar2 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  uStack_b4 = 1;
  local_b8 = 0;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar2 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar10 = *puVar11;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar10 == 0) {
      lVar5 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar12 = local_b8 + 1;
      bVar13 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar12;
      if (bVar13) goto LAB_141895ed2;
      uVar10 = puVar11[lVar5 + 1];
    }
    uStack_b4 = -uVar10 & uVar10;
    iVar12 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_a4 = (iStack_a0 - iVar12) + 0x1f;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_141895ed2:
      uStack_a4 = uVar2;
    }
  }
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_a4;
  local_40 = CONCAT44(uStack_9c,iStack_a0);
  uStack_84 = *(uint *)(param_1 + 5);
  uVar10 = uStack_84 & 0xffffffe0;
  iStack_58 = local_b8;
  uStack_54 = uStack_b4;
  local_50 = puVar1;
  if (uStack_84 != uVar2) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar6 = puVar11[(int)uStack_84 >> 5] & -1 << ((byte)uStack_84 & 0x1f);
    iVar12 = (int)uStack_84 >> 5;
    while (uVar6 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
      goto LAB_141895fac;
      uVar6 = puVar11[(longlong)iVar12 + 1];
      iVar12 = iVar12 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_84 = (uVar10 - iVar12) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_141895fac:
      uStack_84 = uVar2;
    }
  }
  do {
    if ((uStack_44 == uStack_84) && (local_50 == puVar1)) {
      plVar3 = (longlong *)param_2[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar7 = (int *)((longlong)plVar3 + 0xc);
          iVar12 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      if ((char)param_4[1] != '\0') {
        *(undefined1 *)(param_4 + 1) = 0;
      }
      return 0;
    }
    piVar7 = (int *)((longlong)(int)uStack_44 * 0x30 + *param_1);
    if ((*piVar7 == param_3) &&
       ((((char)param_4[1] == '\0' || (piVar7[1] == *param_4)) && (0 < piVar7[4])))) {
      plVar3 = *(longlong **)(*(longlong *)(piVar7 + 2) + -0x10 + (longlong)piVar7[4] * 0x10);
      plVar4 = *(longlong **)(*(longlong *)(piVar7 + 2) + -8 + (longlong)piVar7[4] * 0x10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      plVar8 = (longlong *)0x0;
      if (plVar4 == (longlong *)0x0) {
LAB_14189605f:
        plVar8 = plVar4;
        plVar9 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          plVar9 = plVar3;
        }
      }
      else {
        LOCK();
        iVar12 = (int)plVar4[1];
        bVar13 = iVar12 == 0;
        if (bVar13) {
          *(int *)(plVar4 + 1) = 0;
          iVar12 = 0;
        }
        UNLOCK();
        while (plVar9 = plVar8, !bVar13) {
          LOCK();
          bVar13 = iVar12 == (int)plVar4[1];
          if (bVar13) {
            *(int *)(plVar4 + 1) = iVar12 + 1;
          }
          UNLOCK();
          if (bVar13) goto LAB_14189605f;
          LOCK();
          iVar12 = (int)plVar4[1];
          bVar13 = iVar12 == 0;
          if (bVar13) {
            *(int *)(plVar4 + 1) = 0;
            iVar12 = 0;
          }
          UNLOCK();
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar7 = (int *)((longlong)plVar4 + 0xc);
        iVar12 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      if (plVar9 == (longlong *)*param_2) {
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar8 + 1;
          lVar5 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar7 = (int *)((longlong)plVar8 + 0xc);
            iVar12 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        plVar3 = (longlong *)param_2[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar3 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar7 = (int *)((longlong)plVar3 + 0xc);
            iVar12 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if ((char)param_4[1] != '\0') {
          *(undefined1 *)(param_4 + 1) = 0;
        }
        return 1;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar8 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar7 = (int *)((longlong)plVar8 + 0xc);
          iVar12 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  } while( true );
}



// FUNCTION 1418961b0 FUN_1418961b0 body=534 status=ok
// SIG undefined FUN_1418961b0(void)

void FUN_1418961b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong *plStack_20;
  
  FUN_14189b6a0(param_1,&local_78);
  if (local_78 == 0) {
    lVar4 = *param_2;
    if (lVar4 == 0) {
      puVar8 = *(undefined8 **)(param_1 + 0x110);
      puVar10 = puVar8 + (longlong)*(int *)(param_1 + 0x118) * 2;
      for (; puVar8 != puVar10; puVar8 = puVar8 + 2) {
        local_38 = *puVar8;
        local_30 = puVar8[1];
        if (local_30 != 0) {
          LOCK();
          *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
          UNLOCK();
        }
        FUN_1418b15f0(&local_38);
      }
    }
    else {
      local_40 = param_2[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      local_48 = lVar4;
      FUN_1418b15f0(&local_48);
    }
  }
  else {
    local_28 = local_78;
    plStack_20 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    FUN_1418b15f0(&local_28);
    iVar7 = 0;
    for (iVar9 = iVar7; (-1 < iVar9 && (iVar9 < *(int *)(param_1 + 0x118))); iVar9 = iVar9 + 1) {
      puVar8 = (undefined8 *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x110));
      cVar5 = FUN_141848330(*puVar8);
      if (cVar5 != '\0') {
        local_68 = *puVar8;
        local_60 = puVar8[1];
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        FUN_1418b15f0(&local_68);
      }
    }
    local_88 = 0;
    local_80 = 0;
    uVar6 = FUN_1418fca90();
    FUN_141900130(uVar6,&local_88);
    for (; (-1 < iVar7 && (iVar7 < (int)local_80)); iVar7 = iVar7 + 1) {
      puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + local_88);
      local_58 = *puVar8;
      local_50 = puVar8[1];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      FUN_1418b15f0(&local_58);
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_88);
  }
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
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
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1418963d0 FUN_1418963d0 body=3648 status=ok
// SIG undefined FUN_1418963d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1418963d0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float *pfVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  uint uVar24;
  longlong *plVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_528 [32];
  undefined8 local_508;
  float local_500;
  float *local_4f8;
  undefined1 local_4f0;
  byte local_4e8 [4];
  int local_4e4;
  longlong *local_4e0;
  longlong *local_4d8;
  undefined8 local_4c8;
  longlong *local_4c0;
  undefined8 *local_4b8;
  undefined8 *local_4b0;
  uint local_4a8;
  undefined4 local_4a4;
  longlong *local_4a0;
  longlong *local_498;
  longlong *local_490;
  longlong *local_488;
  undefined1 local_480;
  undefined1 local_47f;
  undefined8 local_478;
  undefined4 local_470;
  float local_468;
  float local_464;
  float local_460;
  float local_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  float local_448;
  float local_444;
  float local_440;
  float local_43c;
  float local_438;
  float local_434;
  float local_430;
  float local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  float local_418;
  float local_414;
  float local_410;
  float local_40c;
  float local_408;
  float local_404;
  float local_400;
  float local_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  longlong local_3d8;
  longlong local_3d0;
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  undefined1 local_3b8 [8];
  undefined1 local_3b0 [8];
  undefined1 local_3a8 [8];
  longlong *local_3a0;
  undefined1 local_398 [8];
  longlong *local_390;
  undefined1 local_388 [8];
  longlong *local_380;
  undefined1 local_378 [8];
  longlong *local_370;
  undefined1 local_368 [8];
  longlong *local_360;
  undefined1 local_358 [16];
  undefined1 local_348 [8];
  undefined1 local_340 [8];
  undefined1 local_338 [8];
  undefined1 local_330 [8];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined1 local_2f8 [16];
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined1 local_2d8 [56];
  longlong *local_2a0;
  undefined1 local_290 [56];
  longlong *local_258;
  undefined1 local_248 [56];
  longlong *local_210;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  float local_1d4;
  float local_1d0;
  byte local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  float local_19c;
  float local_198;
  byte local_194;
  undefined1 local_190 [56];
  undefined1 local_158 [56];
  undefined1 local_120 [56];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_528;
  plVar20 = (longlong *)param_2[1];
  local_4e0 = param_1;
  local_4c0 = param_2;
  local_4b8 = param_3;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
    LOCK();
    plVar21 = plVar20 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20,1);
      }
    }
  }
  local_3d8 = *param_2;
  local_3d0 = param_2[1];
  if (local_3d0 != 0) {
    LOCK();
    *(int *)(local_3d0 + 8) = *(int *)(local_3d0 + 8) + 1;
    UNLOCK();
  }
  local_4c8 = FUN_141801fe0(*local_4b8,&local_3d8);
  SWindow::GetWindowGeometryInWindow(*param_2,local_190);
  puVar14 = (undefined8 *)FUN_141839450(*param_2,local_3a8);
  FUN_141804f90(*puVar14,param_1 + 0xcd);
  if (local_3a0 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_3a0 + 1;
    lVar18 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_3a0)(local_3a0);
      LOCK();
      piVar1 = (int *)((longlong)local_3a0 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_3a0 + 8))(local_3a0,1);
      }
    }
  }
  lVar18 = *param_2;
  plVar20 = (longlong *)0x0;
  if (((*(int *)(lVar18 + 0xa8) != 0) && (*(longlong **)(lVar18 + 0xa0) != (longlong *)0x0)) &&
     (cVar11 = (**(code **)(**(longlong **)(lVar18 + 0xa0) + 0x18))(), cVar11 != '\0')) {
    plVar21 = plVar20;
    if (*(int *)(lVar18 + 0xa8) != 0) {
      plVar21 = *(longlong **)(lVar18 + 0xa0);
    }
    uVar12 = (**(code **)(*plVar21 + 0x38))();
    *(undefined1 *)(lVar18 + 0x98) = uVar12;
  }
  uVar12 = *(undefined1 *)(lVar18 + 0x98);
  local_458 = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
  uStack_450 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
  lVar18 = *param_2;
  local_448 = DAT_1464aa6c0 * 0.6;
  local_444 = DAT_1464aa6c4 * 0.6;
  local_43c = DAT_1464aa6cc * 0.6;
  dVar7 = (double)param_1[0x90];
  dVar8 = (double)param_1[0x91];
  local_440 = DAT_1464aa6c8 * 0.6;
  local_45c = DAT_1464aa6cc;
  local_468 = DAT_1464aa6c0;
  local_464 = DAT_1464aa6c4;
  local_460 = DAT_1464aa6c8;
  puVar14 = (undefined8 *)FUN_141839450(lVar18,local_398);
  lVar9 = *param_2;
  lVar10 = *param_1;
  uVar16 = *puVar14;
  puVar14 = (undefined8 *)FUN_14183b310(lVar18,local_348);
  uVar15 = SWindow::GetClippingRectangleInWindow(lVar18,local_318);
  local_508 = (**(code **)(lVar10 + 0x40))(local_4e0);
  local_500 = (float)(dVar7 - dVar8);
  uVar16 = FPaintArgs::FPaintArgs(local_290,lVar9,uVar16,*puVar14);
  local_4f8 = &local_468;
  local_500 = 0.0;
  local_508 = local_4c8;
  local_4f0 = uVar12;
  local_4e4 = UKismetAnimationLibrary::K2_TwoBoneIK(lVar9,uVar16,local_190,uVar15);
  if (local_258 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_258 + 0xc);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar13 == 1) && (local_258 != (longlong *)0x0)) {
      (**(code **)(*local_258 + 8))();
    }
  }
  if (local_390 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_390 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_390)(local_390);
      LOCK();
      piVar1 = (int *)((longlong)local_390 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_390 + 8))(local_390,1);
      }
    }
  }
  plVar21 = local_4e0;
  if ((((longlong *)local_4e0[0xb0] != (longlong *)0x0) &&
      (cVar11 = (**(code **)(*(longlong *)local_4e0[0xb0] + 0x40))(), plVar23 = local_4c0,
      cVar11 != '\0')) &&
     (plVar25 = (longlong *)plVar21[0xb3], local_4d8 = plVar25, plVar25 != (longlong *)0x0)) {
    LOCK();
    iVar13 = (int)plVar25[1];
    bVar28 = iVar13 == 0;
    if (bVar28) {
      *(int *)(plVar25 + 1) = 0;
      iVar13 = 0;
    }
    UNLOCK();
    while (!bVar28) {
      LOCK();
      bVar28 = iVar13 == (int)plVar25[1];
      if (bVar28) {
        *(int *)(plVar25 + 1) = iVar13 + 1;
      }
      UNLOCK();
      if (bVar28) {
        if (plVar25 != (longlong *)0x0) {
          lVar18 = plVar21[0xb2];
          if ((lVar18 != 0) && (lVar18 == *local_4c0)) {
            (**(code **)(*(longlong *)plVar21[0xb0] + 0x20))((longlong *)plVar21[0xb0],&local_4a0);
            plVar2 = local_4a0;
            if (local_4a0 != (longlong *)0x0) {
              if ((((int)local_4a0[0x18] == 0) || ((longlong *)local_4a0[0x17] == (longlong *)0x0))
                 || (cVar11 = (**(code **)(*(longlong *)local_4a0[0x17] + 0x18))(), cVar11 == '\0'))
              {
                local_4e8[0] = *(byte *)(plVar2 + 0x16);
              }
              else {
                plVar22 = plVar20;
                if ((int)plVar2[0x18] != 0) {
                  plVar22 = (longlong *)plVar2[0x17];
                }
                (**(code **)(*plVar22 + 0x38))(plVar22,local_4e8);
                *(byte *)(plVar2 + 0x16) = local_4e8[0];
              }
              if ((local_4e8[0] & 0x19) != 0) {
                puVar14 = (undefined8 *)FUN_14183ac60(lVar18,local_388);
                fVar29 = (float)(**(code **)(*(longlong *)*puVar14 + 0xf0))();
                fVar30 = (float)(**(code **)(*plVar21 + 0x38))(plVar21);
                fVar29 = fVar29 * fVar30;
                if (local_380 != (longlong *)0x0) {
                  LOCK();
                  plVar25 = local_380 + 1;
                  lVar18 = *plVar25;
                  *(int *)plVar25 = (int)*plVar25 + -1;
                  UNLOCK();
                  if ((int)lVar18 == 1) {
                    (**(code **)*local_380)(local_380);
                    LOCK();
                    piVar1 = (int *)((longlong)local_380 + 0xc);
                    iVar13 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar13 == 1) {
                      (**(code **)(*local_380 + 8))(local_380,1);
                    }
                  }
                }
                local_480 = DAT_1464b9eeb;
                local_47f = 1;
                local_478 = 0;
                local_470 = 0;
                (**(code **)(*local_4a0 + 0x1b8))(local_4a0,&local_480);
                FUN_14185c5d0(local_4a0,fVar29);
                lVar18 = *plVar23;
                pfVar17 = (float *)(**(code **)(*(longlong *)plVar21[0xb0] + 0x28))
                                             ((longlong *)plVar21[0xb0],local_340);
                fVar30 = *pfVar17;
                fVar3 = pfVar17[1];
                lVar18 = SWindow::GetWindowGeometryInScreen(lVar18,local_158);
                fVar31 = 1.0 / (*(float *)(lVar18 + 0x1c) * *(float *)(lVar18 + 0x28) -
                               *(float *)(lVar18 + 0x20) * *(float *)(lVar18 + 0x24));
                fVar32 = ((fVar30 - *(float *)(lVar18 + 0x2c)) * *(float *)(lVar18 + 0x28) * fVar31
                         - (fVar3 - *(float *)(lVar18 + 0x30)) * *(float *)(lVar18 + 0x24) * fVar31)
                         * fVar29;
                fVar29 = ((fVar3 - *(float *)(lVar18 + 0x30)) * *(float *)(lVar18 + 0x1c) * fVar31 -
                         (fVar30 - *(float *)(lVar18 + 0x2c)) * *(float *)(lVar18 + 0x20) * fVar31)
                         * fVar29;
                puVar19 = (undefined4 *)SWidget::GetDesiredSize(local_4a0,local_338);
                lVar18 = *plVar23;
                local_4e4 = local_4e4 + 1;
                local_200 = *puVar19;
                local_1fc = puVar19[1];
                local_1cc = local_1cc & 0xfe;
                local_1e4 = 0x3f800000;
                uStack_1e0 = 0;
                uStack_1dc = 0;
                uStack_1d8 = 0x3f800000;
                local_1f8 = 0x3f800000;
                local_308 = 0x3f800000;
                uStack_304 = 0;
                uStack_300 = 0;
                uStack_2fc = 0x3f800000;
                local_1f4 = fVar32;
                local_1f0 = fVar29;
                local_1ec = fVar32;
                local_1e8 = fVar29;
                local_1d4 = fVar32;
                local_1d0 = fVar29;
                if (((*(int *)(lVar18 + 0xa8) != 0) &&
                    (*(longlong **)(lVar18 + 0xa0) != (longlong *)0x0)) &&
                   (cVar11 = (**(code **)(**(longlong **)(lVar18 + 0xa0) + 0x18))(), cVar11 != '\0')
                   ) {
                  if (*(int *)(lVar18 + 0xa8) != 0) {
                    plVar20 = *(longlong **)(lVar18 + 0xa0);
                  }
                  uVar12 = (**(code **)(*plVar20 + 0x38))();
                  *(undefined1 *)(lVar18 + 0x98) = uVar12;
                }
                uVar12 = *(undefined1 *)(lVar18 + 0x98);
                local_428 = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
                uStack_420 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
                lVar18 = *plVar23;
                local_418 = DAT_1464aa6c0 * 0.6;
                local_414 = DAT_1464aa6c4 * 0.6;
                local_40c = DAT_1464aa6cc * 0.6;
                dVar7 = (double)plVar21[0x90];
                dVar8 = (double)plVar21[0x91];
                local_410 = DAT_1464aa6c8 * 0.6;
                local_42c = DAT_1464aa6cc;
                local_438 = DAT_1464aa6c0;
                local_434 = DAT_1464aa6c4;
                local_430 = DAT_1464aa6c8;
                puVar14 = (undefined8 *)FUN_141839450(lVar18,local_378);
                lVar9 = *plVar23;
                uVar16 = *puVar14;
                lVar10 = *local_4e0;
                puVar14 = (undefined8 *)FUN_14183b310(lVar18,local_330);
                uVar15 = SWindow::GetClippingRectangleInWindow(lVar18,local_2f8);
                local_508 = (**(code **)(lVar10 + 0x40))(local_4e0);
                local_500 = (float)(dVar7 - dVar8);
                uVar16 = FPaintArgs::FPaintArgs(local_248,lVar9,uVar16,*puVar14);
                local_4f8 = &local_438;
                local_500 = (float)local_4e4;
                local_508 = local_4c8;
                local_4f0 = uVar12;
                FUN_14184f6c0(local_4a0,uVar16,&local_200,uVar15);
                if (local_210 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)local_210 + 0xc);
                  iVar13 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if ((iVar13 == 1) && (local_210 != (longlong *)0x0)) {
                    (**(code **)(*local_210 + 8))(local_210,1);
                  }
                }
                plVar25 = local_4d8;
                plVar21 = local_4e0;
                if (local_370 != (longlong *)0x0) {
                  LOCK();
                  plVar20 = local_370 + 1;
                  lVar18 = *plVar20;
                  *(int *)plVar20 = (int)*plVar20 + -1;
                  UNLOCK();
                  if ((int)lVar18 == 1) {
                    (**(code **)*local_370)(local_370);
                    LOCK();
                    piVar1 = (int *)((longlong)local_370 + 0xc);
                    iVar13 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    plVar25 = local_4d8;
                    plVar21 = local_4e0;
                    if (iVar13 == 1) {
                      (**(code **)(*local_370 + 8))(local_370,1);
                      plVar25 = local_4d8;
                      plVar21 = local_4e0;
                    }
                  }
                }
              }
            }
            if (local_498 != (longlong *)0x0) {
              LOCK();
              plVar20 = local_498 + 1;
              lVar18 = *plVar20;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              if ((int)lVar18 == 1) {
                (**(code **)*local_498)(local_498);
                LOCK();
                piVar1 = (int *)((longlong)local_498 + 0xc);
                iVar13 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*local_498 + 8))(local_498,1);
                }
              }
            }
          }
          LOCK();
          plVar20 = plVar25 + 1;
          lVar18 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plVar25)(plVar25);
            LOCK();
            piVar1 = (int *)((longlong)plVar25 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar25 + 8))(plVar25,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar13 = (int)plVar25[1];
      bVar28 = iVar13 == 0;
      if (bVar28) {
        *(int *)(plVar25 + 1) = 0;
        iVar13 = 0;
      }
      UNLOCK();
    }
  }
  plVar25 = local_4c0;
  plVar23 = (longlong *)0x0;
  plVar20 = (longlong *)plVar21[0x71];
  local_490 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    iVar13 = (int)plVar20[1];
    bVar28 = iVar13 == 0;
    if (bVar28) {
      *(int *)(plVar20 + 1) = 0;
      iVar13 = 0;
    }
    UNLOCK();
    while (!bVar28) {
      LOCK();
      bVar28 = iVar13 == (int)plVar20[1];
      if (bVar28) {
        *(int *)(plVar20 + 1) = iVar13 + 1;
      }
      UNLOCK();
      if (bVar28) {
        if (plVar20 != (longlong *)0x0) {
          lVar18 = plVar21[0x70];
          if (((lVar18 == 0) || (lVar18 != *local_4c0)) ||
             (local_488 = (longlong *)plVar21[0x73], local_488 == (longlong *)0x0))
          goto LAB_1418970ca;
          LOCK();
          iVar13 = (int)local_488[1];
          bVar28 = iVar13 == 0;
          if (bVar28) {
            *(int *)(local_488 + 1) = 0;
            iVar13 = 0;
          }
          UNLOCK();
          goto joined_r0x000141896c9d;
        }
        break;
      }
      LOCK();
      iVar13 = (int)plVar20[1];
      bVar28 = iVar13 == 0;
      if (bVar28) {
        *(int *)(plVar20 + 1) = 0;
        iVar13 = 0;
      }
      UNLOCK();
    }
  }
LAB_1418970f3:
  plVar20 = (longlong *)SWindow::GetChildWindows(*local_4c0);
  uVar24 = *(uint *)(plVar20 + 1);
  lVar18 = *plVar20;
  local_4b0 = (undefined8 *)0x0;
  local_4a8 = uVar24;
  if (uVar24 == 0) {
    local_4a4 = 0;
    uVar26 = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_4b0,uVar24,0);
    puVar14 = local_4b0;
    do {
      *puVar14 = *(undefined8 *)((lVar18 - (longlong)local_4b0) + (longlong)puVar14);
      lVar9 = *(longlong *)((lVar18 - (longlong)local_4b0) + 8 + (longlong)puVar14);
      puVar14[1] = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      puVar14 = puVar14 + 2;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
    uVar26 = (ulonglong)local_4a8;
  }
  puVar14 = local_4b8;
  puVar27 = local_4b0;
  if (0 < (int)uVar26) {
    do {
      FUN_1418963d0(plVar21,puVar27,puVar14);
      uVar26 = uVar26 - 1;
      puVar27 = puVar27 + 2;
    } while (uVar26 != 0);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_4b0);
  return;
joined_r0x000141896c9d:
  if (bVar28) goto LAB_1418970ca;
  LOCK();
  bVar28 = iVar13 == (int)local_488[1];
  if (bVar28) {
    *(int *)(local_488 + 1) = iVar13 + 1;
  }
  UNLOCK();
  if (bVar28) {
    if (local_488 != (longlong *)0x0) {
      plVar20 = (longlong *)plVar21[0x72];
      local_4d8 = plVar20;
      if (plVar20 != (longlong *)0x0) {
        puVar14 = (undefined8 *)FUN_14183ac60(lVar18,local_368);
        fVar29 = (float)(**(code **)(*(longlong *)*puVar14 + 0xf0))();
        fVar30 = (float)(**(code **)(*plVar21 + 0x38))(plVar21);
        FUN_14185c5d0(plVar20,fVar29 * fVar30);
        if (local_360 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_360 + 1;
          lVar18 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*local_360)(local_360);
            LOCK();
            piVar1 = (int *)((longlong)local_360 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*local_360 + 8))(local_360,1);
            }
          }
        }
        lVar18 = *plVar25;
        pfVar17 = (float *)(**(code **)(*plVar21 + 0x48))(plVar21,local_3c8);
        fVar29 = *pfVar17;
        fVar30 = pfVar17[1];
        lVar18 = SWindow::GetWindowGeometryInScreen(lVar18,local_120);
        fVar3 = *(float *)(lVar18 + 0x1c);
        fVar31 = *(float *)(lVar18 + 0x20);
        fVar32 = *(float *)(lVar18 + 0x28);
        fVar4 = *(float *)(lVar18 + 0x24);
        fVar5 = *(float *)(lVar18 + 0x2c);
        fVar6 = *(float *)(lVar18 + 0x30);
        fVar33 = 1.0 / (fVar3 * fVar32 - fVar31 * fVar4);
        pfVar17 = (float *)SWidget::GetDesiredSize(plVar20,local_3c0);
        fVar32 = (fVar29 - fVar5) * fVar33 * fVar32 -
                 ((fVar30 - fVar6) * fVar33 * fVar4 + *pfVar17 * 0.5);
        fVar29 = (fVar30 - fVar6) * fVar33 * fVar3 -
                 ((fVar29 - fVar5) * fVar33 * fVar31 + pfVar17[1] * 0.5);
        puVar19 = (undefined4 *)SWidget::GetDesiredSize(plVar20,local_3b8);
        lVar18 = *plVar25;
        local_4e4 = local_4e4 + 1;
        local_1c8 = *puVar19;
        local_1c4 = puVar19[1];
        local_194 = local_194 & 0xfe;
        local_1ac = 0x3f800000;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1a0 = 0x3f800000;
        local_1c0 = 0x3f800000;
        local_2e8 = 0x3f800000;
        uStack_2e4 = 0;
        uStack_2e0 = 0;
        uStack_2dc = 0x3f800000;
        local_1bc = fVar32;
        local_1b8 = fVar29;
        local_1b4 = fVar32;
        local_1b0 = fVar29;
        local_19c = fVar32;
        local_198 = fVar29;
        if (((*(int *)(lVar18 + 0xa8) != 0) && (*(longlong **)(lVar18 + 0xa0) != (longlong *)0x0))
           && (cVar11 = (**(code **)(**(longlong **)(lVar18 + 0xa0) + 0x18))(), cVar11 != '\0')) {
          if (*(int *)(lVar18 + 0xa8) != 0) {
            plVar23 = *(longlong **)(lVar18 + 0xa0);
          }
          uVar12 = (**(code **)(*plVar23 + 0x38))();
          *(undefined1 *)(lVar18 + 0x98) = uVar12;
        }
        uVar12 = *(undefined1 *)(lVar18 + 0x98);
        local_3f8 = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
        uStack_3f0 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
        lVar18 = *plVar25;
        local_3e8 = DAT_1464aa6c0 * 0.6;
        local_3e4 = DAT_1464aa6c4 * 0.6;
        local_3dc = DAT_1464aa6cc * 0.6;
        dVar7 = (double)plVar21[0x90];
        dVar8 = (double)plVar21[0x91];
        local_3e0 = DAT_1464aa6c8 * 0.6;
        local_3fc = DAT_1464aa6cc;
        local_408 = DAT_1464aa6c0;
        local_404 = DAT_1464aa6c4;
        local_400 = DAT_1464aa6c8;
        puVar14 = (undefined8 *)FUN_141839450(lVar18,local_358);
        lVar9 = *plVar25;
        uVar16 = *puVar14;
        lVar10 = *local_4e0;
        puVar14 = (undefined8 *)FUN_14183b310(lVar18,local_3b0);
        uVar15 = SWindow::GetClippingRectangleInWindow(lVar18,local_328);
        local_508 = (**(code **)(lVar10 + 0x40))(local_4e0);
        local_500 = (float)(dVar7 - dVar8);
        uVar16 = FPaintArgs::FPaintArgs(local_2d8,lVar9,uVar16,*puVar14);
        local_4f8 = &local_408;
        local_500 = (float)local_4e4;
        local_508 = local_4c8;
        local_4f0 = uVar12;
        FUN_14184f6c0(local_4d8,uVar16,&local_1c8,uVar15);
        if (local_2a0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_2a0 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar13 == 1) && (local_2a0 != (longlong *)0x0)) {
            (**(code **)(*local_2a0 + 8))(local_2a0,1);
          }
        }
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_358);
        plVar21 = local_4e0;
      }
      plVar25 = local_488;
      plVar20 = local_490;
      LOCK();
      plVar23 = local_488 + 1;
      lVar18 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_488)(local_488);
        LOCK();
        piVar1 = (int *)((longlong)plVar25 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar25 + 8))(plVar25,1);
        }
      }
    }
    goto LAB_1418970ca;
  }
  LOCK();
  iVar13 = (int)local_488[1];
  bVar28 = iVar13 == 0;
  if (bVar28) {
    *(int *)(local_488 + 1) = 0;
    iVar13 = 0;
  }
  UNLOCK();
  goto joined_r0x000141896c9d;
LAB_1418970ca:
  LOCK();
  plVar23 = plVar20 + 1;
  lVar18 = *plVar23;
  *(int *)plVar23 = (int)*plVar23 + -1;
  UNLOCK();
  if ((int)lVar18 == 1) {
    (**(code **)*plVar20)(plVar20);
    LOCK();
    piVar1 = (int *)((longlong)plVar20 + 0xc);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      (**(code **)(*plVar20 + 8))(plVar20,1);
    }
  }
  goto LAB_1418970f3;
}



// FUNCTION 141897210 FUN_141897210 body=3678 status=ok
// SIG undefined FUN_141897210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141897210(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_7a8 [32];
  longlong local_788;
  longlong local_780;
  undefined4 local_778;
  longlong local_770;
  longlong local_768;
  longlong local_760;
  undefined1 local_758;
  undefined1 local_750;
  longlong local_748;
  float local_738;
  float local_734;
  longlong *local_730;
  longlong *plStack_728;
  longlong *local_720;
  longlong *local_718;
  longlong *local_710;
  longlong *local_708;
  undefined8 local_700;
  longlong *local_6f8;
  longlong *local_6f0;
  longlong *local_6e8;
  undefined8 *local_6e0;
  float local_6d8;
  float local_6d4;
  float local_6d0;
  float local_6cc;
  undefined8 local_6c8;
  longlong local_6c0;
  longlong local_6b8;
  longlong *plStack_6b0;
  longlong local_6a8;
  undefined8 local_6a0;
  longlong *local_698;
  longlong local_688;
  longlong *plStack_680;
  undefined8 local_678;
  longlong *local_670;
  undefined8 local_668;
  longlong *local_660;
  longlong *local_658;
  longlong *local_650;
  undefined1 local_648 [8];
  longlong *local_640;
  undefined1 local_630;
  undefined8 local_628;
  undefined4 local_620;
  undefined8 local_618;
  longlong local_610;
  longlong *local_608;
  longlong *local_600;
  longlong *local_5f8;
  longlong *local_5f0;
  longlong *local_5e8;
  longlong *local_5e0;
  longlong *local_5d8;
  longlong *local_5d0;
  longlong *local_5c8;
  longlong *local_5c0;
  longlong *local_5b8;
  longlong *local_5b0;
  longlong *local_5a8;
  longlong *local_5a0;
  longlong *local_598;
  longlong *local_590;
  undefined8 local_588;
  longlong *local_580;
  undefined1 local_578 [8];
  undefined1 local_570 [8];
  longlong *local_568;
  undefined1 local_560 [8];
  longlong *local_558;
  undefined1 local_550 [8];
  longlong *local_548;
  longlong local_538;
  longlong *plStack_530;
  undefined1 local_528 [8];
  longlong *local_520;
  undefined1 local_518 [8];
  longlong *local_510;
  longlong local_508;
  longlong *plStack_500;
  undefined1 local_4f8 [8];
  longlong *local_4f0;
  undefined1 local_4e8 [8];
  longlong *local_4e0;
  undefined1 local_4d8 [8];
  longlong *local_4d0;
  undefined1 local_4c8 [8];
  longlong *local_4c0;
  longlong *local_4b8;
  longlong *local_4a8;
  longlong *local_4a0;
  undefined1 local_490 [8];
  longlong *local_488;
  longlong *local_480;
  longlong *plStack_478;
  undefined1 local_468 [272];
  longlong *local_358;
  longlong *local_340;
  undefined1 local_338 [272];
  undefined1 local_228 [464];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_7a8;
  local_6a8 = param_1;
  FUN_14183b310(*(undefined8 *)(param_1 + 0x20),&local_738);
  fVar18 = (float)FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint();
  FUN_141942440(*(undefined8 *)(param_1 + 0x40),&local_588);
  uVar9 = FDuplicateDataWriter::GetSerializeContext(local_588);
  FUN_1418fedf0(uVar9,&local_6b8);
  cVar7 = FUN_141847f40(*(undefined8 *)(param_1 + 0x20));
  if (cVar7 != '\0') {
    FUN_14183ac50(*(undefined8 *)(param_1 + 0x20),&local_6d8);
    FUN_141857b30(*(undefined8 *)(param_1 + 0x20),
                  CONCAT44(local_6cc - local_6d4,local_6d0 - local_6d8));
  }
  puVar10 = (undefined8 *)FUN_1418fc990();
  uVar9 = FUN_1418fce90(*puVar10);
  FText::FText(local_648,uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  local_630 = 1;
  local_628 = 0;
  local_620 = 0;
  lVar11 = FUN_1417e8330(local_228);
  FText::operator=(lVar11 + 0x118,local_648);
  *(undefined1 *)(lVar11 + 0x130) = local_630;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x138,&local_628);
  *(float *)(lVar11 + 0x14c) = (1.0 / fVar18) * local_738;
  *(float *)(lVar11 + 0x150) = (1.0 / fVar18) * local_734;
  *(undefined1 *)(lVar11 + 0x149) = 0;
  puVar10 = (undefined8 *)FUN_14183dbb0(uVar9,local_578);
  puVar12 = (undefined4 *)SWindow::ComputeWindowSizeForContent(local_4c8,*puVar10);
  uVar4 = puVar12[1];
  *(undefined4 *)(lVar11 + 0x154) = *puVar12;
  *(undefined4 *)(lVar11 + 0x158) = uVar4;
  *(undefined1 *)(lVar11 + 0x19c) = 0;
  plVar13 = (longlong *)operator_new(0x600);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_FUN_144d503d8;
    if (plVar13 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4890();
    }
  }
  plVar17 = plVar13 + 2;
  local_4c0 = plVar17;
  local_4b8 = plVar13;
  FUN_14044f790(&local_4c0,plVar17);
  local_788 = 0x5f0;
  SWidget::SetDebugInfo
            (plVar17,"SWindow",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\FDockingDragOperation.cpp"
             ,0x13d);
  local_778 = *(undefined4 *)(lVar11 + 0x90);
  local_748 = lVar11 + 0xf8;
  local_760 = lVar11 + 0xe8;
  local_750 = *(undefined1 *)(lVar11 + 0xf1);
  local_768 = lVar11 + 200;
  local_770 = lVar11 + 0x98;
  local_758 = *(undefined1 *)(lVar11 + 0xf0);
  local_780 = lVar11 + 0x78;
  local_788 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(plVar17,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_141806bd0(plVar17,lVar11);
  if (((char)plVar13[5] < '\0') || (cVar7 = (**(code **)(*plVar17 + 0x1e8))(plVar17), cVar7 != '\0')
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
    plVar16 = plVar13 + 1;
    lVar11 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  FUN_1417f5da0(local_228);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_628);
  if (local_640 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_640 + 1;
    lVar11 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_640)(local_640);
      LOCK();
      piVar1 = (int *)((longlong)local_640 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_640 + 8))(local_640,1);
      }
    }
  }
  local_710 = (longlong *)0x0;
  cVar7 = FUN_1419425c0(*(undefined8 *)(param_1 + 0x40));
  if (cVar7 == '\x02') {
    puVar10 = (undefined8 *)FUN_1418fc990();
    local_6a0 = *puVar10;
    local_698 = (longlong *)puVar10[1];
    if (local_698 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_698 + 1) = (int)local_698[1] + 1;
      UNLOCK();
    }
    FUN_14195a120(*(undefined8 *)(param_1 + 0x40),&local_6a0);
    plVar16 = local_698;
    if (local_698 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_698 + 1;
      lVar11 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_698)(local_698);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
  }
  local_6c8 = FUN_1418aaad0(local_550);
  plVar14 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SDockingTabStack>();
  plVar16 = plVar14 + 2;
  local_6f0 = plVar16;
  local_6e8 = plVar14;
  FUN_14044f790(&local_6f0,plVar16);
  local_6e0 = &local_6c8;
  local_788 = 0x428;
  SWidget::SetDebugInfo
            (plVar16,"SDockingTabStack",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\FDockingDragOperation.cpp"
             ,0x153);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_700 = 0;
  local_718 = plVar16;
  local_6f8 = plVar14;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_710,&local_6f8);
  plVar16 = local_6f8;
  if (local_6f8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_6f8 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_6f8)(local_6f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_6f8 + 8))(local_6f8,1);
      }
    }
  }
  uVar9 = SDockingTabStack::FArguments::FArguments(local_338);
  puVar10 = (undefined8 *)FUN_14188df80(&local_6f0,local_560,uVar9);
  local_618 = *puVar10;
  local_610 = puVar10[1];
  if (local_610 != 0) {
    LOCK();
    *(int *)(local_610 + 8) = *(int *)(local_610 + 8) + 1;
    UNLOCK();
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_6c0 = SDockingArea::FArguments::FArguments(local_468);
  pplVar3 = (longlong **)(local_6c0 + 0x108);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_730 = plVar17;
  plStack_728 = plVar13;
  if (&local_730 != pplVar3) {
    local_730 = *pplVar3;
    plStack_728 = *(longlong **)(local_6c0 + 0x110);
    *pplVar3 = plVar17;
    *(longlong **)(local_6c0 + 0x110) = plVar13;
    local_480 = plVar17;
    plStack_478 = plVar13;
  }
  plVar17 = plStack_728;
  if (plStack_728 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_728 + 1;
    lVar11 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_728)(plStack_728);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_728 + 8))(plStack_728,1);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar13 + 1;
    lVar11 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar15 = FUN_1418aa950(local_570);
  uVar9 = FUN_141942440(uVar9,local_490);
  local_720 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SDockingArea>();
  plVar17 = local_720 + 2;
  local_708 = plVar17;
  local_4a8 = plVar17;
  local_4a0 = local_720;
  FUN_14044f790(&local_4a8,plVar17);
  local_788 = 0x360;
  SWidget::SetDebugInfo
            (plVar17,"SDockingArea",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\FDockingDragOperation.cpp"
             ,0x14f);
  lVar11 = FUN_1418a0f40(local_6c0,&local_618);
  local_778 = *(undefined4 *)(lVar11 + 0x90);
  local_748 = lVar11 + 0xf8;
  local_760 = lVar11 + 0xe8;
  local_750 = *(undefined1 *)(lVar11 + 0xf1);
  local_768 = lVar11 + 200;
  local_770 = lVar11 + 0x98;
  local_758 = *(undefined1 *)(lVar11 + 0xf0);
  local_780 = lVar11 + 0x78;
  local_788 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(local_708,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  plVar17 = local_708;
  FUN_1418ec8e0(local_708,lVar11,uVar9,uVar15);
  if (((char)plVar17[3] < '\0') || (cVar7 = (**(code **)(*plVar17 + 0x1e8))(plVar17), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  plVar16 = local_720;
  *(byte *)((longlong)plVar17 + 0x19) = *(byte *)((longlong)plVar17 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar17 + 0x19) = *(byte *)((longlong)plVar17 + 0x19) | bVar8;
  if (local_720 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_720 + 1) = (int)local_720[1] + 1;
    UNLOCK();
    LOCK();
    plVar14 = local_720 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_720)(local_720);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  if (local_488 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_488 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_488)(local_488);
      LOCK();
      piVar1 = (int *)((longlong)local_488 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_488 + 8))(local_488,1);
      }
    }
  }
  if (local_568 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_568 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_568)(local_568);
      LOCK();
      piVar1 = (int *)((longlong)local_568 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_568 + 8))(local_568,1);
      }
    }
  }
  if (local_340 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_340 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_340)(local_340);
      LOCK();
      piVar1 = (int *)((longlong)local_340 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_340 + 8))(local_340,1);
      }
    }
  }
  if (local_358 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_358 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_358)(local_358);
      LOCK();
      piVar1 = (int *)((longlong)local_358 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_358 + 8))(local_358,1);
      }
    }
  }
  FUN_140456c70(local_468);
  if (local_558 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_558 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_558)(local_558);
      LOCK();
      piVar1 = (int *)((longlong)local_558 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_558 + 8))(local_558,1);
      }
    }
  }
  plVar14 = local_6e8;
  if (local_6e8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6e8 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_6e8)(local_6e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar16 = local_720;
      if (iVar5 == 1) {
        (**(code **)(*local_6e8 + 8))(local_6e8,1);
        plVar16 = local_720;
      }
    }
  }
  if (local_548 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_548 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_548)(local_548);
      LOCK();
      piVar1 = (int *)((longlong)local_548 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_548 + 8))(local_548,1);
      }
    }
  }
  FUN_140456c70(local_338);
  lVar11 = local_6a8;
  cVar7 = FUN_1419425c0(*(undefined8 *)(local_6a8 + 0x40));
  if ((cVar7 == '\0') ||
     (cVar7 = FUN_1419425c0(*(undefined8 *)(lVar11 + 0x40)), plVar14 = DAT_1469f4590,
     cVar7 == '\x02')) {
    puVar10 = (undefined8 *)FUN_1418fc990();
    FUN_1418ff490(*puVar10,&local_688);
    plVar14 = DAT_1469f4590;
    if (local_688 == 0) {
      local_598 = plVar17;
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      local_5a8 = plVar13 + 2;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_5a0 = plVar13;
      local_590 = plVar16;
      puVar10 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,local_4e8,&local_5a8,1);
      FUN_14185a760(*puVar10,&local_598);
      plVar14 = local_4e0;
    }
    else {
      local_5b8 = plVar17;
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      local_508 = local_688;
      plStack_500 = plStack_680;
      if (plStack_680 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_680 + 1) = (int)plStack_680[1] + 1;
        UNLOCK();
      }
      local_5c8 = plVar13 + 2;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_788 = CONCAT71(local_788._1_7_,1);
      local_5c0 = plVar13;
      local_5b0 = plVar16;
      puVar10 = (undefined8 *)FUN_14188f890(DAT_1469f4590,local_4f8,&local_5c8,&local_508);
      FUN_14185a760(*puVar10,&local_5b8);
      plVar14 = local_4f0;
    }
    plVar17 = plStack_680;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar14 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar17 = plStack_680;
        if (iVar5 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
          plVar17 = plStack_680;
        }
      }
    }
  }
  else if (local_6b8 == 0) {
    local_5d8 = plVar17;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    local_5e8 = plVar13 + 2;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_5e0 = plVar13;
    local_5d0 = plVar16;
    puVar10 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,local_518,&local_5e8,1);
    FUN_14185a760(*puVar10,&local_5d8);
    plVar17 = local_510;
  }
  else {
    local_5f8 = plVar17;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    local_538 = local_6b8;
    plStack_530 = plStack_6b0;
    if (plStack_6b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_6b0 + 1) = (int)plStack_6b0[1] + 1;
      UNLOCK();
    }
    local_608 = plVar13 + 2;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_788 = CONCAT71(local_788._1_7_,1);
    local_600 = plVar13;
    local_5f0 = plVar16;
    puVar10 = (undefined8 *)FUN_14188f890(DAT_1469f4590,local_528,&local_608,&local_538);
    FUN_14185a760(*puVar10,&local_5f8);
    plVar17 = local_520;
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar17 + 1;
    lVar6 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
  }
  local_678 = *(undefined8 *)(lVar11 + 0x40);
  local_670 = *(longlong **)(lVar11 + 0x48);
  if (local_670 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_670 + 1) = (int)local_670[1] + 1;
    UNLOCK();
  }
  FUN_141910330(local_718,&local_678,0xffffffff);
  plVar17 = local_670;
  if (local_670 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_670 + 1;
    lVar6 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_670)(local_670);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_668 = *(undefined8 *)(lVar11 + 0x40);
  local_660 = *(longlong **)(lVar11 + 0x48);
  if (local_660 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_660 + 1) = (int)local_660[1] + 1;
    UNLOCK();
  }
  local_658 = plVar13 + 2;
  local_650 = plVar13;
  puVar10 = (undefined8 *)FUN_1418ff8c0(*(undefined8 *)(lVar11 + 0x58),local_4d8);
  uVar9 = FDuplicateDataWriter::GetSerializeContext(*puVar10);
  FTabManager::FPrivateApi::OnTabRelocated(uVar9,&local_668,&local_658);
  if (local_4d0 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_4d0 + 1;
    lVar11 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_4d0)(local_4d0);
      LOCK();
      piVar1 = (int *)((longlong)local_4d0 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_4d0 + 8))(local_4d0,1);
      }
    }
  }
  plVar17 = local_660;
  if (local_660 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_660 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_660)(local_660);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
  }
  plVar17 = local_650;
  if (local_650 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_650 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_650)(local_650);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar16 + 1;
    lVar11 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  plVar17 = local_710;
  if (local_710 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_710 + 1;
    lVar11 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_710)(local_710);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_710 + 8))(local_710,1);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar13 + 1;
    lVar11 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (plStack_6b0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar11 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_6b0)(plStack_6b0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_6b0 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_6b0 + 8))(plStack_6b0,1);
      }
    }
  }
  if (local_580 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_580 + 1;
    lVar11 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_580)(local_580);
      LOCK();
      piVar1 = (int *)((longlong)local_580 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_580 + 8))(local_580,1);
      }
    }
  }
  return;
}



// FUNCTION 141898070 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FSlateApplication::FUserAndPointer,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<FSlateApplication::FUserAndPointer,FWeakWidgetPath,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_141898170();
  cVar1 = ConditionalRehash(param_1,param_2);
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



// FUNCTION 1418980f0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
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



// FUNCTION 141898170 FUN_141898170 body=473 status=ok
// SIG undefined FUN_141898170(void)

void FUN_141898170(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
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
  
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = *puVar9;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar8 = local_68 + 1;
      bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar8;
      if (bVar5) goto LAB_141898244;
      uVar6 = puVar9[lVar7 + 1];
    }
    uStack_64 = -uVar6 & uVar6;
    iVar8 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_54 = (iStack_50 - iVar8) + 0x1f;
    if (iVar3 < iStack_54) {
LAB_141898244:
      iStack_54 = iVar3;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar3) {
    do {
      lVar7 = (longlong)iStack_2c * 0x30 + *param_1;
      plVar4 = *(longlong **)(lVar7 + 0x20);
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
      TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
      ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(lVar7 + 8);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar6 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar6) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141898350 Empty body=481 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FTextId,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar4 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar6) goto LAB_141898424;
      uVar7 = puVar10[lVar8 + 1];
    }
    uStack_64 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_54 = (iStack_50 - iVar9) + 0x1f;
    if (iVar4 < iStack_54) {
LAB_141898424:
      iStack_54 = iVar4;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar4) {
    do {
      plVar5 = *(longlong **)((longlong)iStack_2c * 0x40 + *param_1 + 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar7 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141898540 FUN_141898540 body=125 status=ok
// SIG undefined FUN_141898540(void)

void FUN_141898540(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  uVar4 = *(undefined8 *)(param_1 + 8);
  pcVar5 = *(code **)(param_1 + 0x10);
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar5)(uVar4,&local_18);
  plVar6 = (longlong *)param_2[1];
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 1418985c0 FUN_1418985c0 body=262 status=ok
// SIG undefined FUN_1418985c0(void)

undefined8 FUN_1418985c0(longlong param_1,undefined8 param_2)

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



// FUNCTION 1418986d0 FUN_1418986d0 body=255 status=ok
// SIG undefined FUN_1418986d0(void)

void FUN_1418986d0(longlong param_1,undefined8 *param_2)

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



// FUNCTION 1418987d0 FUN_1418987d0 body=213 status=ok
// SIG undefined FUN_1418987d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1418987d0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_108 = *param_3;
  local_100 = param_3[1];
  local_f8 = param_3[2];
  if (local_f8 != 0) {
    LOCK();
    *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
    UNLOCK();
  }
  uVar6 = (**(code **)(param_1 + 8))(local_e8,&local_108);
  FReply::FReply(param_2,uVar6);
  FUN_140438c20(local_e8);
  plVar4 = (longlong *)param_3[2];
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
  return param_2;
}



// FUNCTION 1418988b0 Execute body=127 status=ok
// SIG undefined Execute(void)

ulonglong FUIAction::Execute(longlong *param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)0x0;
  if ((((int)param_1[3] != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) &&
     (in_RAX = (**(code **)(*(longlong *)param_1[2] + 0x18))(), (char)in_RAX != '\0')) {
    plVar2 = plVar3;
    if ((int)param_1[3] != 0) {
      plVar2 = (longlong *)param_1[2];
    }
    in_RAX = (**(code **)(*plVar2 + 0x38))();
    if ((char)in_RAX == '\0') goto LAB_141898922;
  }
  if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
     (in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))(), (char)in_RAX != '\0')) {
    if ((int)param_1[1] != 0) {
      plVar3 = (longlong *)*param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014189891e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    return uVar1;
  }
LAB_141898922:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141898930 FUN_141898930 body=199 status=ok
// SIG undefined FUN_141898930(void)

undefined8 FUN_141898930(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  lVar5 = FUN_14189aff0(param_1,&local_18);
  if (lVar5 != 0) {
    FUIAction::Execute(lVar5);
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
    return 1;
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
  return 0;
}



// FUNCTION 141898a00 FUN_141898a00 body=206 status=ok
// SIG undefined FUN_141898a00(void)

undefined8 FUN_141898a00(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  pcVar6 = *(code **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_10 = plVar4;
  (*pcVar6)(uVar5,&local_18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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



// FUNCTION 141898ad0 FUN_141898ad0 body=580 status=ok
// SIG undefined FUN_141898ad0(void)

undefined8 FUN_141898ad0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar9 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar2[1];
    bVar10 = iVar7 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar10) {
      LOCK();
      bVar10 = iVar7 == (int)plVar2[1];
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar10) {
        if (plVar2 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 8) != 0) {
            local_48 = *param_2;
            plVar3 = (longlong *)param_2[1];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            plVar4 = *(longlong **)(param_1 + 0x10);
            plVar8 = plVar4;
            if (plVar4 == (longlong *)0x0) goto LAB_141898b92;
            LOCK();
            iVar7 = (int)plVar4[1];
            bVar10 = iVar7 == 0;
            if (bVar10) {
              *(int *)(plVar4 + 1) = 0;
              iVar7 = 0;
            }
            UNLOCK();
            goto joined_r0x000141898b65;
          }
          LOCK();
          plVar9 = plVar2 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        break;
      }
      LOCK();
      iVar7 = (int)plVar2[1];
      bVar10 = iVar7 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar2 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return 0;
joined_r0x000141898b65:
  plVar8 = plVar9;
  if (bVar10) {
LAB_141898b92:
    local_30 = *(undefined4 *)(param_1 + 0x18);
    uStack_2c = *(undefined4 *)(param_1 + 0x1c);
    pcVar5 = *(code **)(param_1 + 0x18);
    iStack_28 = *(int *)(param_1 + 0x20);
    uStack_24 = *(undefined4 *)(param_1 + 0x24);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_40 = plVar3;
    (*pcVar5)((longlong)iStack_28 + (longlong)plVar9,&local_48);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar3)(plVar3);
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
    LOCK();
    plVar9 = plVar2 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
    plVar2 = (longlong *)param_2[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar2 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    return 1;
  }
  LOCK();
  bVar10 = iVar7 == (int)plVar4[1];
  if (bVar10) {
    *(int *)(plVar4 + 1) = iVar7 + 1;
  }
  UNLOCK();
  if (bVar10) {
    plVar8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_1 + 8);
    }
    goto LAB_141898b92;
  }
  LOCK();
  iVar7 = (int)plVar4[1];
  bVar10 = iVar7 == 0;
  if (bVar10) {
    *(int *)(plVar4 + 1) = 0;
    iVar7 = 0;
  }
  UNLOCK();
  goto joined_r0x000141898b65;
}



// FUNCTION 141898d20 FUN_141898d20 body=727 status=ok
// SIG undefined FUN_141898d20(void)

char FUN_141898d20(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  char param_5)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  cVar4 = '\0';
  plVar6 = (longlong *)FUN_141845450(param_2,local_68);
  plVar11 = (longlong *)0x0;
  lVar2 = *plVar6;
  plVar6 = *(longlong **)(lVar2 + 0x390);
  plVar9 = plVar6;
  plVar10 = plVar11;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar6[1];
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(plVar6 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar11, plVar10 = (longlong *)0x0, !bVar12) {
      LOCK();
      bVar12 = iVar5 == (int)plVar6[1];
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar9 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          plVar10 = *(longlong **)(lVar2 + 0x388);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar6[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar6 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    puVar7 = (undefined8 *)(**(code **)(*plVar10 + 0x128))(plVar10,local_58);
    plVar6 = (longlong *)puVar7[1];
    plVar8 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar6[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar6 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar8 = plVar11, !bVar12) {
        LOCK();
        bVar12 = iVar5 == (int)plVar6[1];
        if (bVar12) {
          *(int *)(plVar6 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar12) {
          plVar8 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            plVar11 = (longlong *)*puVar7;
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar6[1];
        bVar12 = iVar5 == 0;
        if (bVar12) {
          *(int *)(plVar6 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar5 == 1) && (local_50 != (longlong *)0x0)) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
    cVar4 = '\0';
    if (plVar11 != (longlong *)0x0) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_88 = plVar11;
      local_80 = plVar8;
      cVar3 = FUN_1418091e0(param_2,&local_88);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar8 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
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
      if (cVar3 != '\0') {
        local_78 = *param_3;
        local_70 = param_3[1];
        if (local_70 != 0) {
          LOCK();
          *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
          UNLOCK();
        }
        cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10,param_4,&local_78);
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
    if (cVar4 != '\0') goto LAB_141898f63;
  }
  if (*param_3 == 0) {
    if (param_5 != '\0') {
      cVar4 = '\x01';
    }
  }
  else {
    FUN_1418c3710(param_1,param_4,param_3,1);
    cVar4 = '\x01';
  }
LAB_141898f63:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar6 + 1;
    lVar2 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  return cVar4;
}



// FUNCTION 141899000 FUN_141899000 body=380 status=ok
// SIG undefined FUN_141899000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141899000(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar3 = param_1 + 0x40;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 8));
        if (*plVar4 == param_3) {
          if ((iVar1 != -1) && (plVar4 != (longlong *)0x0)) {
            FUN_141887aa0(&local_88,plVar4 + 1);
            goto LAB_141899091;
          }
          break;
        }
        iVar1 = (int)plVar4[0xf];
      } while (iVar1 != -1);
    }
  }
  FInputBindingManager::FContextEntry::FContextEntry(&local_88);
LAB_141899091:
  if (local_80 != local_54) {
    puVar2 = local_50;
    if (local_48 != (undefined1 *)0x0) {
      puVar2 = local_48;
    }
    iVar1 = *(int *)(puVar2 + ((longlong)((int)((ulonglong)param_4 >> 0x20) + (int)param_4) &
                              (longlong)local_40 - 1U) * 4);
    while (iVar1 != -1) {
      lVar3 = (longlong)iVar1 * 0x20;
      if (*(longlong *)(lVar3 + local_88) == param_4) {
        lVar3 = lVar3 + local_88;
        if (iVar1 != -1) goto LAB_141899124;
        break;
      }
      iVar1 = *(int *)(lVar3 + local_88 + 0x18);
    }
  }
  lVar3 = 0;
LAB_141899124:
  if (lVar3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *(undefined8 *)(lVar3 + 8);
    lVar3 = *(longlong *)(lVar3 + 0x10);
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  FInputBindingManager::FContextEntry::~FContextEntry(&local_88);
  return param_2;
}



// FUNCTION 141899180 FUN_141899180 body=1363 status=ok
// SIG undefined FUN_141899180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141899180(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,char param_5)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong *plStack_170;
  longlong local_168;
  longlong *plStack_160;
  int local_158 [2];
  uint local_150;
  uint uStack_14c;
  uint *puStack_148;
  undefined4 local_140;
  int iStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  int iStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined8 uStack_100;
  uint *local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  undefined4 uStack_e4;
  longlong local_d8;
  int local_d0;
  uint local_c8 [4];
  uint *local_b8;
  int local_b0;
  int local_a4;
  undefined1 local_a0 [8];
  undefined1 *local_98;
  int local_90;
  longlong local_88;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar8 = 0;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar7 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar7 = param_1 + 0x40;
    }
    iVar6 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar6 != -1) {
      do {
        plVar9 = (longlong *)((longlong)iVar6 * 0x80 + *(longlong *)(param_1 + 8));
        if (*plVar9 == param_3) {
          if ((iVar6 != -1) && (plVar9 != (longlong *)0x0)) {
            FUN_141887aa0(&local_d8,plVar9 + 1);
            goto LAB_141899214;
          }
          break;
        }
        iVar6 = (int)plVar9[0xf];
      } while (iVar6 != -1);
    }
  }
  FInputBindingManager::FContextEntry::FContextEntry(&local_d8);
LAB_141899214:
  *param_2 = 0;
  param_2[1] = 0;
  if (param_5 == '\0') {
    local_180 = 0;
    uVar11 = uVar8;
    do {
      if (local_180 != 0) break;
      plVar9 = (longlong *)((longlong)(int)uVar11 * 0x50 + local_88);
      local_188 = local_180;
      TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
      ::FindId(plVar9,local_158,param_4);
      if ((local_158[0] == -1) || (lVar7 = (longlong)local_158[0] * 0x30 + *plVar9, lVar7 == 0)) {
        local_188 = 0;
      }
      else {
        local_188 = *(longlong *)(lVar7 + 0x20);
      }
      uVar13 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar13;
      local_180 = local_188;
    } while (uVar13 < 2);
    local_178 = 0;
    local_188 = local_180;
    if (local_180 != 0) {
      if (local_d0 != local_a4) {
        puVar10 = local_a0;
        if (local_98 != (undefined1 *)0x0) {
          puVar10 = local_98;
        }
        iVar6 = *(int *)(puVar10 +
                        ((longlong)((int)((ulonglong)local_180 >> 0x20) + (int)local_180) &
                        (longlong)local_90 - 1U) * 4);
        while (iVar6 != -1) {
          lVar7 = (longlong)iVar6 * 0x20;
          if (*(longlong *)(local_d8 + lVar7) == local_180) {
            uVar8 = 0;
            if (iVar6 != -1) {
              uVar8 = local_d8 + lVar7;
            }
            break;
          }
          iVar6 = *(int *)(local_d8 + lVar7 + 0x18);
        }
      }
      plVar9 = *(longlong **)(uVar8 + 0x10);
      lVar7 = *(longlong *)(uVar8 + 8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_168 = lVar7;
      plStack_160 = plVar9;
      if (&local_168 != param_2) {
        local_168 = *param_2;
        plStack_160 = (longlong *)param_2[1];
        *param_2 = lVar7;
        param_2[1] = (longlong)plVar9;
        local_58 = lVar7;
        plStack_50 = plVar9;
      }
      plVar9 = plStack_160;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_160 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_160)(plStack_160);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          iVar6 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_160 + 8))(plStack_160,1);
          }
        }
      }
    }
  }
  else {
    puStack_148 = local_c8;
    local_150 = 0;
    uStack_14c = 1;
    iStack_13c = 0;
    uStack_138 = 0;
    if (local_b0 != 0) {
      puVar12 = local_c8;
      if (local_b8 != (uint *)0x0) {
        puVar12 = local_b8;
      }
      uVar13 = *puVar12;
      uVar11 = uVar8;
      while (uVar13 == 0) {
        iVar6 = (int)uVar11;
        uStack_138 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_138;
        local_150 = iVar6 + 1;
        uVar11 = (ulonglong)local_150;
        if ((int)((local_b0 + -1 >> 0x1f & 0x1fU) + local_b0 + -1) >> 5 <= iVar6) {
          iStack_13c = local_b0;
          goto LAB_141899322;
        }
        uVar13 = puVar12[(longlong)iVar6 + 1];
      }
      uStack_14c = -uVar13 & uVar13;
      iVar6 = 0x1f;
      if (uStack_14c != 0) {
        for (; uStack_14c >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      local_180 = CONCAT44(local_180._4_4_,iVar6);
      if (uStack_14c == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      iStack_13c = (uStack_138 - iVar6) + 0x1f;
      if (local_b0 < iStack_13c) {
        iStack_13c = local_b0;
      }
    }
LAB_141899322:
    local_140 = 0xffffffff;
    local_130 = &local_d8;
    uStack_128 = CONCAT44(uStack_14c,local_150);
    uStack_118 = 0xffffffff;
    iStack_114 = iStack_13c;
    uStack_110 = uStack_138;
    uStack_10c = uStack_134;
    uStack_f0 = CONCAT44(iStack_13c,0xffffffff);
    local_e8 = uStack_138;
    uStack_e4 = uStack_134;
    iVar6 = iStack_13c;
    puStack_120 = puStack_148;
    local_108 = local_130;
    uStack_100 = uStack_128;
    local_f8 = puStack_148;
    if (iStack_13c < local_b0) {
      do {
        if (*param_2 != 0) break;
        puVar12 = (uint *)param_4[2];
        local_130 = (longlong *)*param_4;
        lVar14 = (longlong)iVar6 * 0x20;
        lVar7 = *(longlong *)(lVar14 + 8 + *local_108);
        if (puVar12 != (uint *)0x0) {
          LOCK();
          puVar12[2] = puVar12[2] + 1;
          UNLOCK();
        }
        puVar4 = *(undefined8 **)(lVar7 + 0x40);
        uStack_118 = (uStack_118 ^ *(uint *)(param_4 + 3)) & 0xf ^ uStack_118;
        if ((((((longlong *)*puVar4 == local_130) &&
              (uVar13 = *(uint *)(puVar4 + 3), ((uStack_118 ^ uVar13) & 1) == 0)) &&
             (((uVar13 ^ uStack_118) & 2) == 0)) &&
            ((((uVar13 ^ uStack_118) & 4) == 0 && (((uVar13 ^ uStack_118) & 8) == 0)))) ||
           (((((longlong *)puVar4[4] == local_130 &&
              ((uVar13 = *(uint *)(puVar4 + 7), ((uStack_118 ^ uVar13) & 1) == 0 &&
               (((uStack_118 ^ uVar13) & 2) == 0)))) && (((uStack_118 ^ uVar13) & 4) == 0)) &&
            (((uStack_118 ^ uVar13) & 8) == 0)))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        puStack_120 = puVar12;
        if (puVar12 != (uint *)0x0) {
          LOCK();
          puVar1 = puVar12 + 2;
          uVar13 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if (uVar13 == 1) {
            (*(code *)**(undefined8 **)puVar12)(puVar12);
            LOCK();
            puVar12 = puVar12 + 3;
            uVar13 = *puVar12;
            *puVar12 = *puVar12 - 1;
            UNLOCK();
            if (uVar13 == 1) {
              (**(code **)(*(longlong *)puStack_120 + 8))(puStack_120,1);
            }
          }
        }
        if (bVar5) {
          plVar9 = *(longlong **)(lVar14 + 0x10 + *local_108);
          lVar7 = *(longlong *)(lVar14 + 8 + *local_108);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          local_178 = lVar7;
          plStack_170 = plVar9;
          if (&local_178 != param_2) {
            local_178 = *param_2;
            plStack_170 = (longlong *)param_2[1];
            *param_2 = lVar7;
            param_2[1] = (longlong)plVar9;
            local_68 = lVar7;
            plStack_60 = plVar9;
          }
          plVar9 = plStack_170;
          if (plStack_170 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_170 + 1;
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_170)(plStack_170);
              LOCK();
              piVar3 = (int *)((longlong)plVar9 + 0xc);
              iVar6 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plStack_170 + 8))(plStack_170,1);
              }
            }
          }
        }
        uStack_f0 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0 & ~uStack_100._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
        iVar6 = uStack_f0._4_4_;
      } while (uStack_f0._4_4_ < (int)local_f8[6]);
    }
  }
  FInputBindingManager::FContextEntry::~FContextEntry(&local_d8);
  return param_2;
}



// FUNCTION 1418996e0 FindId body=223 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_3;
    uVar1 = *(uint *)(param_3 + 3);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) ^
                     (ulonglong)(uVar1 & 1)) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      lVar4 = *param_1;
      do {
        lVar7 = (longlong)iVar5;
        if ((((*(longlong *)(lVar4 + lVar7 * 0x30) == lVar3) &&
             (uVar2 = *(uint *)(lVar4 + 0x18 + lVar7 * 0x30), ((uVar2 ^ uVar1) & 1) == 0)) &&
            (((uVar2 ^ uVar1) & 2) == 0)) &&
           ((((uVar2 ^ uVar1) & 4) == 0 && (((uVar2 ^ uVar1) & 8) == 0)))) {
          *param_2 = iVar5;
          return param_2;
        }
        iVar5 = *(int *)(lVar4 + 0x28 + lVar7 * 0x30);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1418997c0 FUN_1418997c0 body=253 status=ok
// SIG undefined FUN_1418997c0(void)

undefined8 * FUN_1418997c0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  longlong *local_20;
  
  plVar4 = (longlong *)param_3[1];
  local_28 = *param_3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_20 = plVar4;
  puVar6 = (undefined8 *)
           TArray<TSharedPtr<FMenuBase,1>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<<lambda_a55abd0d2a1b91c2f22229df71733f2c>_>(param_1 + 0x50,&local_28);
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
  if (puVar6 == (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *puVar6;
    lVar5 = puVar6[1];
    param_2[1] = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
  plVar4 = (longlong *)param_3[1];
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
  return param_2;
}



// FUNCTION 1418998c0 FUN_1418998c0 body=397 status=ok
// SIG undefined FUN_1418998c0(void)

undefined8 * FUN_1418998c0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res18 [2];
  undefined8 local_38;
  longlong *local_30;
  
  iVar3 = *(int *)(param_3 + 0x130) + -1;
  lVar7 = (longlong)iVar3;
  if (-1 < iVar3) {
    lVar8 = lVar7 * 0x48;
    do {
      lVar4 = *(longlong *)(param_3 + 0x128);
      if (*(longlong *)(param_3 + 0x128) == 0) {
        lVar4 = param_3 + 8;
      }
      plVar6 = *(longlong **)(lVar4 + 0x40 + lVar8);
      local_38 = *(undefined8 *)(lVar4 + 0x38 + lVar8);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_30 = plVar6;
      TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x60),local_res18,&local_38);
      plVar2 = local_30;
      if (local_res18[0] == -1) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x60) + (longlong)local_res18[0] * 0x28;
      }
      puVar5 = (undefined8 *)(lVar4 + 0x10);
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      if (puVar5 != (undefined8 *)0x0) {
        *param_2 = *puVar5;
        lVar7 = puVar5[1];
        param_2[1] = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
          plVar6 = local_30;
        }
        if (plVar6 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar6 = plVar6 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return param_2;
        }
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 != 1) {
          return param_2;
        }
        (**(code **)(*local_30 + 8))(local_30,1);
        return param_2;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar6 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))();
          }
        }
      }
      lVar8 = lVar8 + -0x48;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141899a50 FUN_141899a50 body=886 status=ok
// SIG undefined FUN_141899a50(void)

longlong * FUN_141899a50(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *plStack_30;
  
  if (*(int *)(param_1 + 0x3c0) <= param_3) {
    plVar4 = (longlong *)(param_1 + 0x3b8);
    iVar7 = *(int *)(param_1 + 0x3c0);
    iVar6 = param_3 + 1;
    if (iVar7 < iVar6) {
      *(int *)(param_1 + 0x3c0) = iVar6;
      if (*(int *)(param_1 + 0x3c4) < iVar6) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar7 * 0x10 + *plVar4),0,(longlong)(iVar6 - iVar7) << 4);
    }
    else if (iVar6 < iVar7) {
      FUN_1418bdba0(plVar4,iVar6,iVar7 - iVar6,1);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x3b8);
  plVar4 = (longlong *)0x0;
  lVar8 = (longlong)param_3 * 0x10;
  local_60 = *(longlong **)(lVar5 + 8 + lVar8);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)local_60[1];
    bVar9 = iVar7 == 0;
    if (bVar9) {
      *(int *)(local_60 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar7 == (int)local_60[1];
      if (bVar9) {
        *(int *)(local_60 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if ((local_60 == (longlong *)0x0) || (lVar5 = *(longlong *)(lVar5 + lVar8), lVar5 == 0))
        goto LAB_141899b17;
        *param_2 = lVar5;
        param_2[1] = (longlong)local_60;
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
        LOCK();
        plVar4 = local_60 + 1;
        iVar7 = (int)*plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        goto LAB_141899d83;
      }
      LOCK();
      iVar7 = (int)local_60[1];
      bVar9 = iVar7 == 0;
      if (bVar9) {
        *(int *)(local_60 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
    local_60 = (longlong *)0x0;
  }
LAB_141899b17:
  iVar7 = 8;
  for (lVar5 = 0x80;
      ((-1 < lVar5 && (iVar7 < *(int *)(param_1 + 0x3b0))) &&
      (*(longlong *)(lVar5 + *(longlong *)(param_1 + 0x3a8)) != 0)); lVar5 = lVar5 + 0x10) {
    iVar7 = iVar7 + 1;
  }
  lVar5 = operator_new(0x150);
  plVar2 = plVar4;
  if (lVar5 != 0) {
    plVar2 = (longlong *)FUN_141889fd0(lVar5,iVar7,1);
  }
  plVar3 = (longlong *)operator_new(0x18);
  plStack_50 = plVar4;
  if (plVar3 != (longlong *)0x0) {
    *(undefined4 *)(plVar3 + 1) = 1;
    *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
    plVar3[2] = (longlong)plVar2;
    plStack_50 = plVar3;
  }
  local_58 = plVar2;
  SharedPointerInternals::EnableSharedFromThis(&local_58,plVar2,plVar2);
  local_38 = local_58;
  plStack_30 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
  }
  FUN_1418bbd00(param_1,&local_38);
  plVar3 = (longlong *)operator_new(0x10);
  plVar2 = plVar4;
  if (plVar3 != (longlong *)0x0) {
    lVar5 = local_58[0x22];
    *plVar3 = (longlong)&PTR_FUN_144d5f018;
    *(int *)(plVar3 + 1) = (int)lVar5;
    *(int *)((longlong)plVar3 + 0xc) = param_3;
    plVar2 = plVar3;
  }
  plVar3 = (longlong *)operator_new(0x18);
  if (plVar3 != (longlong *)0x0) {
    *(undefined4 *)(plVar3 + 1) = 1;
    *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
    plVar3[2] = (longlong)plVar2;
    plVar4 = plVar3;
  }
  local_40 = plVar4;
  SharedPointerInternals::EnableSharedFromThis(&local_48,plVar2,plVar2);
  local_48 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_60,&local_40);
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x3b8) + lVar8);
  *plVar3 = (longlong)plVar2;
  plVar4 = (longlong *)plVar3[1];
  if (local_60 != plVar4) {
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_60 + 0xc) = *(int *)((longlong)local_60 + 0xc) + 1;
      UNLOCK();
      plVar4 = (longlong *)plVar3[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    plVar3[1] = (longlong)local_60;
  }
  plVar4 = plStack_50;
  *param_2 = (longlong)plVar2;
  param_2[1] = (longlong)local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_50 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    iVar7 = (int)*plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
LAB_141899d83:
    plVar4 = local_60;
    if (iVar7 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141899dd0 FUN_141899dd0 body=323 status=ok
// SIG undefined FUN_141899dd0(void)

undefined1
FUN_141899dd0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined1 local_28 [16];
  
  local_res10[0] = *param_4;
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  uVar8 = FUN_14189d7d0(param_1,local_28);
  cVar6 = FUN_14182fe50(uVar8,&local_48,param_3,local_res10);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_28);
  if (cVar6 == '\0') {
    local_res20[0] = *param_4;
    local_38 = *param_2;
    local_30 = param_2[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    uVar7 = FUN_14182fe50(param_1 + 0x120,&local_38,param_3,local_res20);
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
  }
  else {
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
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 141899f20 FUN_141899f20 body=486 status=ok
// SIG undefined FUN_141899f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141899f20(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined1 local_1a0 [8];
  undefined1 local_198 [312];
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  FWidgetPath::FWidgetPath(local_1a0);
  plVar4 = (longlong *)param_3[1];
  uVar5 = *param_3;
  local_1d8 = DAT_1464b9eed;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    local_1d8 = DAT_1464b9eed;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_1d0 = uVar5;
  local_1c8 = plVar4;
  local_1b0 = uVar5;
  local_1a8 = plVar4;
  cVar7 = FUN_14182fe50(param_1 + 0x110,&local_1d0,local_1a0,&local_1d8);
  if (cVar7 == '\0') {
    local_1d7[0] = DAT_1464b9eed;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_1c0 = uVar5;
    local_1b8 = plVar4;
    cVar7 = FUN_14182fe50(param_1 + 0x120,&local_1c0,local_1a0,local_1d7);
    if (cVar7 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1b0);
      goto LAB_14189a05a;
    }
  }
  *param_2 = local_60;
  param_2[1] = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
LAB_14189a05a:
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_50);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_58 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  FUN_140456b10(local_198);
  plVar4 = (longlong *)param_3[1];
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14189a110 FUN_14189a110 body=290 status=ok
// SIG undefined FUN_14189a110(void)

undefined8 *
FUN_14189a110(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_res8[0] = DAT_1464b9eed;
  local_38 = *param_3;
  local_30 = param_3[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  cVar6 = FUN_14182fe50(param_1 + 0x110,&local_38,param_4,local_res8);
  if (cVar6 == '\0') {
    local_res18[0] = DAT_1464b9eed;
    local_28 = *param_3;
    local_20 = param_3[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    cVar6 = FUN_14182fe50(param_1 + 0x120,&local_28,param_4,local_res18);
    if (cVar6 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
      return param_2;
    }
  }
  *param_2 = *(undefined8 *)(param_4 + 0x140);
  lVar4 = *(longlong *)(param_4 + 0x148);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
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



// FUNCTION 14189a240 FUN_14189a240 body=1334 status=ok
// SIG undefined FUN_14189a240(void)

void FUN_14189a240(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint *puVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  bool bVar22;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  uint local_118;
  uint uStack_114;
  int iStack_104;
  uint uStack_100;
  longlong *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  uint *local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  int local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  undefined4 uStack_68;
  int iStack_64;
  uint uStack_60;
  
  dVar3 = *(double *)(param_1 + 0x480);
  dVar4 = *(double *)(param_1 + 0x488);
  lVar5 = *(longlong *)(DAT_1469eaf48 + 8);
  if (lVar5 != 0) {
    plVar12 = *(longlong **)(DAT_1469eaf48 + 0x10);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    puVar15 = *(undefined8 **)(param_1 + 0x798);
    puVar20 = puVar15 + (longlong)*(int *)(param_1 + 0x7a0) * 2;
    for (; puVar15 != puVar20; puVar15 = puVar15 + 2) {
      plVar21 = (longlong *)puVar15[1];
      plVar6 = (longlong *)*puVar15;
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_90 = lVar5;
      local_88 = plVar12;
      (**(code **)(*plVar6 + 8))(plVar6,(float)(dVar3 - dVar4),param_1,&local_90);
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar21 + 1;
        lVar17 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar21 + 8))(plVar21,1);
          }
        }
      }
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar21 = plVar12 + 1;
      lVar5 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
  cVar8 = FUN_1418a00c0(param_1 + 0x330);
  uVar14 = 0;
  if (cVar8 == '\0') {
    local_d8 = (longlong *)(param_1 + 0x240);
    uStack_114 = 1;
    iVar13 = *(int *)(param_1 + 0x268);
    local_c8 = (uint *)(param_1 + 0x250);
    local_118 = 0;
    iStack_104 = 0;
    uStack_100 = 0;
    if (iVar13 != 0) {
      puVar19 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar19 = local_c8;
      }
      uVar16 = *puVar19;
      uVar11 = uVar14;
      uVar18 = uVar14;
      while (uVar16 == 0) {
        iVar9 = (int)uVar11;
        uStack_100 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_100;
        local_118 = iVar9 + 1;
        uVar11 = (ulonglong)local_118;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_14189a497;
        uVar16 = puVar19[(longlong)iVar9 + 1];
      }
      uStack_114 = -uVar16 & uVar16;
      local_res18 = 0x1f;
      if (uStack_114 != 0) {
        for (; uStack_114 >> local_res18 == 0; local_res18 = local_res18 + -1) {
        }
      }
      if (uStack_114 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - local_res18;
      }
      iStack_104 = (uStack_100 - iVar9) + 0x1f;
      if (iVar13 < iStack_104) {
LAB_14189a497:
        iStack_104 = iVar13;
      }
    }
    uStack_d0 = CONCAT44(uStack_114,local_118);
    uStack_68 = 0xffffffff;
    iStack_64 = iStack_104;
    uStack_60 = uStack_100;
    uStack_c0 = CONCAT44(iStack_104,0xffffffff);
    local_b8 = uStack_100;
    local_80 = local_d8;
    uStack_78 = uStack_d0;
    puStack_70 = local_c8;
    if (iStack_104 < iVar13) {
      do {
        lVar10 = (longlong)iStack_104;
        local_f8 = (longlong *)0x0;
        lVar5 = *local_d8;
        iVar13 = *(int *)(lVar5 + 0x10 + lVar10 * 0x30);
        lVar17 = *(longlong *)(lVar5 + 8 + lVar10 * 0x30);
        local_f0 = iVar13;
        if (iVar13 == 0) {
          local_ec = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_f8,iVar13,0);
          lVar17 = lVar17 - (longlong)local_f8;
          plVar12 = local_f8;
          do {
            *plVar12 = *(longlong *)(lVar17 + (longlong)plVar12);
            lVar7 = *(longlong *)(lVar17 + 8 + (longlong)plVar12);
            plVar12[1] = lVar7;
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
              UNLOCK();
            }
            plVar12 = plVar12 + 2;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        local_e8 = *(undefined8 *)(lVar5 + 0x18 + lVar10 * 0x30);
        local_e0 = *(longlong **)(lVar5 + 0x20 + lVar10 * 0x30);
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_e0 + 0xc) = *(int *)((longlong)local_e0 + 0xc) + 1;
          UNLOCK();
        }
        plVar21 = local_f8 + (longlong)local_f0 * 2;
        plVar12 = local_f8;
        if (local_f8 != plVar21) {
          while (plVar6 = (longlong *)plVar12[1], plVar6 != (longlong *)0x0) {
            LOCK();
            iVar13 = (int)plVar6[1];
            bVar22 = iVar13 == 0;
            if (bVar22) {
              *(int *)(plVar6 + 1) = 0;
              iVar13 = 0;
            }
            UNLOCK();
            while( true ) {
              if (bVar22) goto LAB_14189a660;
              LOCK();
              bVar22 = iVar13 == (int)plVar6[1];
              if (bVar22) {
                *(int *)(plVar6 + 1) = iVar13 + 1;
              }
              UNLOCK();
              if (bVar22) break;
              LOCK();
              iVar13 = (int)plVar6[1];
              bVar22 = iVar13 == 0;
              if (bVar22) {
                *(int *)(plVar6 + 1) = 0;
                iVar13 = 0;
              }
              UNLOCK();
            }
            if ((longlong *)*plVar12 == (longlong *)0x0) {
              LOCK();
              plVar12 = plVar6 + 1;
              lVar5 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar13 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
              break;
            }
            (**(code **)(*(longlong *)*plVar12 + 0x120))();
            LOCK();
            plVar2 = plVar6 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
            plVar12 = plVar12 + 2;
            if (plVar12 == plVar21) break;
          }
        }
LAB_14189a660:
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
        TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
        ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(&local_f8);
        uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d0);
        iStack_104 = uStack_c0._4_4_;
      } while (uStack_c0._4_4_ < (int)local_c8[6]);
    }
  }
  else {
    FUN_1418c5be0(param_1 + 0x330,&local_a0);
    for (puVar15 = local_a0; puVar15 != local_a0 + (longlong)local_98 * 2; puVar15 = puVar15 + 2) {
      (**(code **)(*(longlong *)*puVar15 + 0x120))();
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_a0);
  }
  iVar13 = *(int *)(param_1 + 0x3b0);
  local_res8[0] = 0;
  uVar11 = uVar14;
  uVar18 = uVar14;
  if (0 < iVar13) {
    do {
      lVar5 = *(longlong *)(uVar11 + *(longlong *)(param_1 + 0x3a8));
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0x114) == '\0')) {
        local_b0 = lVar5;
        FUN_141890780(local_res8,&local_b0);
      }
      iVar13 = *(int *)(param_1 + 0x3b0);
      uVar16 = (int)uVar18 + 1;
      uVar11 = uVar11 + 0x10;
      uVar18 = (ulonglong)uVar16;
    } while ((int)uVar16 < iVar13);
  }
  local_res10[0] = 0;
  uVar11 = uVar14;
  if (0 < iVar13) {
    do {
      local_a8 = *(longlong *)(uVar14 + *(longlong *)(param_1 + 0x3a8));
      if ((local_a8 != 0) && (*(char *)(local_a8 + 0x114) == '\0')) {
        FUN_141890790(local_res10,&local_a8);
      }
      uVar16 = (int)uVar11 + 1;
      uVar14 = uVar14 + 0x10;
      uVar11 = (ulonglong)uVar16;
    } while ((int)uVar16 < *(int *)(param_1 + 0x3b0));
  }
  return;
}



// FUNCTION 14189a780 FinishedReshapingWindow body=45 status=ok
// SIG undefined FinishedReshapingWindow(void)

void FSlateApplication::FinishedReshapingWindow(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x59c) != -1) {
    uVar1 = FSlateThrottleManager::Get();
    FSlateThrottleManager::LeaveResponsiveMode(uVar1,(int *)(param_1 + 0x59c));
    return;
  }
  return;
}



// FUNCTION 14189a7b0 FUN_14189a7b0 body=170 status=ok
// SIG undefined FUN_14189a7b0(void)

void FUN_14189a7b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [96];
  
  uVar5 = FCurveSequence::FCurveSequence(local_68,0,0x3f800000,0);
  FUN_1417f8e00(param_1 + 0x30,uVar5);
  FUN_1417f61f0(local_68);
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + -0x2e8,local_78);
  FUN_141852100(param_1 + 0x30,uVar5,0,0);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 14189a860 FUN_14189a860 body=22 status=ok
// SIG undefined FUN_14189a860(void)

void FUN_14189a860(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014189a86e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x100))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14189a880 FUN_14189a880 body=128 status=ok
// SIG undefined FUN_14189a880(void)

void FUN_14189a880(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong local_res8;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x3b0)) {
    lVar2 = 0;
    do {
      local_res8 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x3a8));
      if ((local_res8 != 0) && ((param_3 != '\0' || (*(char *)(local_res8 + 0x114) == '\0')))) {
        (*(code *)*param_2)(param_2[1],&local_res8);
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (iVar1 < *(int *)(param_1 + 0x3b0));
  }
  return;
}



// FUNCTION 14189a900 FUN_14189a900 body=387 status=ok
// SIG undefined FUN_14189a900(void)

longlong * FUN_14189a900(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong local_28;
  int local_20;
  
  *param_1 = 0;
  iVar10 = (int)param_2[1];
  puVar9 = (undefined8 *)*param_2;
  *(int *)(param_1 + 1) = iVar10;
  if (iVar10 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar10,0);
    puVar8 = (undefined8 *)*param_1;
    do {
      *puVar8 = *puVar9;
      lVar4 = puVar9[1];
      puVar8[1] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      puVar8 = puVar8 + 2;
      puVar9 = puVar9 + 2;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  puVar9 = (undefined8 *)*param_2;
  puVar8 = puVar9 + (longlong)(int)param_2[1] * 2;
  for (; puVar9 != puVar8; puVar9 = puVar9 + 2) {
    uVar5 = SWindow::GetChildWindows(*puVar9);
    puVar6 = (undefined8 *)FUN_14189a900(&local_28,uVar5);
    iVar10 = *(int *)(puVar6 + 1);
    if (iVar10 != 0) {
      iVar7 = (int)param_1[1];
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + iVar10) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1);
        iVar7 = (int)param_1[1];
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar7 * 0x10 + *param_1),(void *)*puVar6,(longlong)iVar10 << 4);
      *(undefined4 *)(puVar6 + 1) = 0;
      *(int *)(param_1 + 1) = (int)param_1[1] + iVar10;
    }
    if (local_20 != 0) {
      plVar11 = (longlong *)(local_28 + 8);
      iVar10 = local_20;
      do {
        plVar3 = (longlong *)*plVar11;
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
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        plVar11 = plVar11 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 14189aa90 FUN_14189aa90 body=546 status=ok
// SIG undefined FUN_14189aa90(void)

void FUN_14189aa90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_50 [8];
  longlong *local_48;
  
  TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_50);
  piVar3 = (int *)TSet<TSharedRef<SWidget,0>,DefaultKeyFuncs<TSharedRef<SWidget,0>,0>,FDefaultSetAllocator>
                  ::FindId(param_3,local_res8,local_50);
  plVar6 = local_48;
  if (*piVar3 == -1) {
    FUN_1417ddfa0(param_3,local_res20,local_50,0);
    plVar6 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_48 + 1;
      lVar1 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
    Append<FDefaultSetAllocator>(param_2,param_1 + 0x18);
    plVar9 = (longlong *)0x0;
    plVar6 = plVar9;
    while ((iVar5 = (int)plVar6, -1 < iVar5 && (iVar5 < *(int *)(param_1 + 0xc0)))) {
      plVar4 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0xb8));
      plVar6 = (longlong *)*plVar4;
      plVar4 = (longlong *)plVar4[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      if (plVar6 == (longlong *)0x0) {
LAB_14189ac68:
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      else if (plVar4 != (longlong *)0x0) {
        LOCK();
        iVar2 = (int)plVar4[1];
        if (iVar2 == 0) {
          *(int *)(plVar4 + 1) = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) {
          plVar7 = plVar4;
          plVar8 = plVar9;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            iVar2 = (int)plVar4[1];
            bVar10 = iVar2 == 0;
            if (bVar10) {
              *(int *)(plVar4 + 1) = 0;
              iVar2 = 0;
            }
            UNLOCK();
            while (plVar7 = plVar9, plVar8 = plVar9, !bVar10) {
              LOCK();
              bVar10 = iVar2 == (int)plVar4[1];
              if (bVar10) {
                *(int *)(plVar4 + 1) = iVar2 + 1;
              }
              UNLOCK();
              plVar7 = plVar4;
              plVar8 = plVar6;
              if (bVar10) break;
              LOCK();
              iVar2 = (int)plVar4[1];
              bVar10 = iVar2 == 0;
              if (bVar10) {
                *(int *)(plVar4 + 1) = 0;
                iVar2 = 0;
              }
              UNLOCK();
            }
          }
          FUN_14189aa90(plVar8,param_2,param_3);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar7 + 1;
            lVar1 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar1 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar3 = (int *)((longlong)plVar7 + 0xc);
              iVar2 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
        }
        goto LAB_14189ac68;
      }
      plVar6 = (longlong *)(ulonglong)(iVar5 + 1);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_48 + 1;
    lVar1 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014189ab22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*local_48 + 8))(local_48,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14189acc0 FUN_14189acc0 body=213 status=ok
// SIG undefined FUN_14189acc0(void)

void FUN_14189acc0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_res8[0] = *param_4;
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  cVar6 = FUN_14182fe50(param_1 + 0x110,&local_38,param_3,local_res8);
  if (cVar6 == '\0') {
    local_res10[0] = *param_4;
    local_28 = *param_2;
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_14182fe50(param_1 + 0x120,&local_28,param_3,local_res10);
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
  return;
}



// FUNCTION 14189ada0 FUN_14189ada0 body=291 status=ok
// SIG undefined FUN_14189ada0(void)

undefined1
FUN_14189ada0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_res8[0] = *param_4;
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  cVar6 = FUN_14182fe50(param_1 + 0x110,&local_38,param_3,local_res8);
  if (cVar6 == '\0') {
    local_res10[0] = *param_4;
    local_28 = *param_2;
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    uVar7 = FUN_14182fe50(param_1 + 0x120,&local_28,param_3,local_res10);
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
    return uVar7;
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
  return 1;
}



// FUNCTION 14189aed0 Get body=80 status=ok
// SIG undefined Get(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * TAttribute<bool>::Get(undefined1 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
        *param_1 = uVar2;
        return param_1;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *param_1 = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 14189af20 Get body=199 status=ok
// SIG undefined Get(void)

undefined8 * FInputBindingManager::Get(void)

{
  undefined8 *puVar1;
  
  if (DAT_1469f45f0 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new();
    if (puVar1 != (undefined8 *)0x0) {
      DAT_1469f45f0 = puVar1;
      *puVar1 = &PTR_FUN_144d5f3d8;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
      puVar1[9] = 0;
      *(undefined4 *)(puVar1 + 10) = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      *(undefined4 *)(puVar1 + 0x11) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x8c) = 0;
      puVar1[0x13] = 0;
      *(undefined4 *)(puVar1 + 0x14) = 0;
      puVar1[0x15] = 0;
      puVar1[0x16] = 0;
      puVar1[0x17] = 0;
      puVar1[0x18] = 0;
      puVar1[0x19] = 2;
      return puVar1;
    }
    DAT_1469f45f0 = (undefined8 *)0x0;
  }
  return DAT_1469f45f0;
}



// FUNCTION 14189aff0 FUN_14189aff0 body=524 status=ok
// SIG undefined FUN_14189aff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14189aff0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  int local_a8 [2];
  longlong local_a0;
  longlong *local_98;
  longlong local_88 [4];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar4 = *param_2;
  if (lVar4 == 0) {
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
    }
    lVar7 = 0;
  }
  else {
    TSet<TTuple<TSharedRef<SWidget,0>,FArrangedWidget>,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,0>,FArrangedWidget,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x68,local_a8,param_2);
    lVar6 = 0;
    if (local_a8[0] != -1) {
      lVar6 = (longlong)local_a8[0] * 0x60 + *(longlong *)(param_1 + 0x68);
    }
    lVar7 = lVar6 + 0x10;
    if (lVar6 == 0) {
      lVar7 = 0;
    }
    if (lVar7 == 0) {
      local_98 = (longlong *)param_2[1];
      local_88[0] = 0;
      local_88[1] = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      local_b8 = local_88;
      local_a0 = lVar4;
      lVar7 = FUN_14189b200(param_1,&local_a0,1);
      plVar5 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_98)(local_98);
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
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(local_88,0);
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_88[0] != 0) {
        FMemory::Free();
      }
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
    }
  }
  return lVar7;
}



// FUNCTION 14189b200 FUN_14189b200 body=1169 status=ok
// SIG undefined FUN_14189b200(void)

longlong FUN_14189b200(longlong param_1,undefined8 *param_2,char param_3,char param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  int local_res8 [2];
  undefined8 *local_res10;
  undefined1 local_68 [4];
  undefined1 local_64 [12];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  
  local_res10 = param_2;
  TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_58);
  piVar4 = (int *)TSet<TSharedRef<SWidget,0>,DefaultKeyFuncs<TSharedRef<SWidget,0>,0>,FDefaultSetAllocator>
                  ::FindId(param_5,local_68,local_58);
  plVar7 = local_50;
  if (*piVar4 != -1) {
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar4 = (int *)((longlong)plVar7 + 0xc);
        iVar8 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    return 0;
  }
  FUN_1417ddfa0(param_5,local_64,local_58,0);
  plVar7 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar4 = (int *)((longlong)plVar7 + 0xc);
      iVar8 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      param_2 = local_res10;
      if (iVar8 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
        param_2 = local_res10;
      }
    }
  }
  if (((*(int *)(param_1 + 0xe0) != 0) && (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0xd8);
    }
    cVar2 = (**(code **)(*plVar7 + 0x38))(plVar7,param_2);
    if (cVar2 == '\0') goto LAB_14189b52d;
  }
  local_48 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_40 = plVar7;
  TSet<TTuple<TSharedRef<SWidget,0>,FArrangedWidget>,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,0>,FArrangedWidget,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x68,local_res8);
  if (local_res8[0] == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)local_res8[0] * 0x60 + *(longlong *)(param_1 + 0x68);
  }
  lVar11 = lVar5 + 0x10;
  if (lVar5 == 0) {
    lVar11 = 0;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar4 = (int *)((longlong)plVar7 + 0xc);
      iVar8 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (lVar11 != 0) {
    return lVar11;
  }
  lVar5 = 0;
  if (param_3 == '\0') {
LAB_14189b52d:
    if (param_4 == '\0') {
      return 0;
    }
    iVar8 = 0;
    do {
      plVar7 = (longlong *)0x0;
      if (iVar8 < 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0xc0) <= iVar8) {
        return 0;
      }
      plVar6 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0xb8));
      plVar1 = (longlong *)plVar6[1];
      plVar6 = (longlong *)*plVar6;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
        UNLOCK();
      }
      if (plVar6 == (longlong *)0x0) {
LAB_14189b629:
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          piVar4 = (int *)((longlong)plVar1 + 0xc);
          iVar3 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      else if (plVar1 != (longlong *)0x0) {
        LOCK();
        iVar3 = (int)plVar1[1];
        if (iVar3 == 0) {
          *(int *)(plVar1 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          plVar9 = plVar1;
          plVar10 = plVar7;
          if (plVar1 != (longlong *)0x0) {
            LOCK();
            iVar3 = (int)plVar1[1];
            bVar12 = iVar3 == 0;
            if (bVar12) {
              *(int *)(plVar1 + 1) = 0;
              iVar3 = 0;
            }
            UNLOCK();
            while (plVar9 = plVar7, plVar10 = plVar7, !bVar12) {
              LOCK();
              bVar12 = iVar3 == (int)plVar1[1];
              if (bVar12) {
                *(int *)(plVar1 + 1) = iVar3 + 1;
              }
              UNLOCK();
              plVar9 = plVar1;
              plVar10 = plVar6;
              if (bVar12) break;
              LOCK();
              iVar3 = (int)plVar1[1];
              bVar12 = iVar3 == 0;
              if (bVar12) {
                *(int *)(plVar1 + 1) = 0;
                iVar3 = 0;
              }
              UNLOCK();
            }
          }
          lVar5 = FUN_14189b200(plVar10,local_res10,0,1,param_5);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar9 + 1;
            lVar11 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar4 = (int *)((longlong)plVar9 + 0xc);
              iVar3 = *piVar4;
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          if (lVar5 != 0) {
            if (plVar1 == (longlong *)0x0) {
              return lVar5;
            }
            LOCK();
            piVar4 = (int *)((longlong)plVar1 + 0xc);
            iVar8 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar8 != 1) {
              return lVar5;
            }
            (**(code **)(*plVar1 + 8))(plVar1,1);
            return lVar5;
          }
        }
        goto LAB_14189b629;
      }
      iVar8 = iVar8 + 1;
    } while( true );
  }
  iVar8 = 0;
LAB_14189b3f6:
  plVar7 = (longlong *)0x0;
  if ((iVar8 < 0) || (*(int *)(param_1 + 0xd0) <= iVar8)) goto LAB_14189b524;
  plVar6 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 200));
  plVar1 = (longlong *)plVar6[1];
  plVar6 = (longlong *)*plVar6;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  if (plVar6 != (longlong *)0x0) {
    if (plVar1 == (longlong *)0x0) goto LAB_14189b4f3;
    LOCK();
    iVar3 = (int)plVar1[1];
    if (iVar3 == 0) {
      *(int *)(plVar1 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      plVar9 = plVar1;
      plVar10 = plVar7;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        iVar3 = (int)plVar1[1];
        bVar12 = iVar3 == 0;
        if (bVar12) {
          *(int *)(plVar1 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (plVar9 = plVar7, plVar10 = plVar7, !bVar12) {
          LOCK();
          bVar12 = iVar3 == (int)plVar1[1];
          if (bVar12) {
            *(int *)(plVar1 + 1) = iVar3 + 1;
          }
          UNLOCK();
          plVar9 = plVar1;
          plVar10 = plVar6;
          if (bVar12) break;
          LOCK();
          iVar3 = (int)plVar1[1];
          bVar12 = iVar3 == 0;
          if (bVar12) {
            *(int *)(plVar1 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
      }
      lVar5 = FUN_14189b200(plVar10,local_res10,1,0,param_5);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar9 + 1;
        lVar11 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar4 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
      if (lVar5 == 0) goto LAB_14189b4d4;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        piVar4 = (int *)((longlong)plVar1 + 0xc);
        iVar8 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
LAB_14189b524:
      if (lVar5 != 0) {
        return lVar5;
      }
      goto LAB_14189b52d;
    }
  }
LAB_14189b4d4:
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar4 = (int *)((longlong)plVar1 + 0xc);
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
  }
LAB_14189b4f3:
  iVar8 = iVar8 + 1;
  goto LAB_14189b3f6;
}



// FUNCTION 14189b6a0 FUN_14189b6a0 body=202 status=ok
// SIG undefined FUN_14189b6a0(void)

undefined8 * FUN_14189b6a0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uStackX_c;
  
  plVar5 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x148) < 1) {
    plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
    bVar3 = false;
    plVar6 = plVar5;
  }
  else {
    plVar5 = *(longlong **)
              (*(longlong *)(param_1 + 0x140) + -8 + (longlong)*(int *)(param_1 + 0x148) * 0x10);
    plVar6 = *(longlong **)
              (*(longlong *)(param_1 + 0x140) + -0x10 + (longlong)*(int *)(param_1 + 0x148) * 0x10);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    bVar3 = true;
    plVar7 = plVar5;
  }
  *param_2 = plVar6;
  param_2[1] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((bVar3) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 14189b7d0 GetAllChildContexts body=175 status=ok
// SIG undefined GetAllChildContexts(void)

void FInputBindingManager::GetAllChildContexts
               (longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *local_18;
  ulonglong local_10;
  
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
  }
  *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = param_2;
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  TMultiMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,1>_>::
  MultiFind<FDefaultAllocator>(param_1 + 0x58,param_2,&local_18,0);
  if (0 < (int)local_10) {
    uVar3 = local_10 & 0xffffffff;
    puVar2 = local_18;
    do {
      GetAllChildContexts(param_1,*puVar2,param_3);
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (local_18 != (undefined8 *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 14189b8a0 FUN_14189b8a0 body=485 status=ok
// SIG undefined FUN_14189b8a0(void)

undefined8 *
FUN_14189b8a0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_res20;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong **local_30;
  
  plVar2 = (longlong *)(param_1 + 0x678);
  local_res20 = param_4;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(plVar2,local_res8,param_4);
  if ((local_res8[0] == -1) || (lVar5 = (longlong)local_res8[0] * 0x20 + *plVar2, lVar5 == 0)) {
    plStack_50 = (longlong *)0x0;
  }
  else {
    local_58 = *(longlong **)(lVar5 + 8);
    plStack_50 = *(longlong **)(lVar5 + 0x10);
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    if (local_58 != (longlong *)0x0) goto LAB_14189ba21;
  }
  local_58 = (longlong *)0x0;
  plVar4 = (longlong *)operator_new(0x20);
  local_40 = (longlong *)0x0;
  plVar6 = local_40;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar6 = plVar4;
  }
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *plVar4 = (longlong)&PTR_DestroyObject_144d61028;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    plVar4[2] = (longlong)plVar6;
    local_40 = plVar4;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_48,plVar6,plVar6);
  local_48 = 0;
  local_58 = plVar6;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_50,&local_40);
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
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
  local_38 = &local_res20;
  local_30 = &local_58;
  FUN_14068d230(plVar2,local_res10,&local_38,0);
LAB_14189ba21:
  FUN_14189e570(local_58,param_2,param_3);
  FSlateWindowElementList::SetShouldReportReferencesToGC(*param_2,0);
  plVar2 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_50 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14189ba90 FUN_14189ba90 body=271 status=ok
// SIG undefined FUN_14189ba90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14189ba90(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  lVar8 = FUN_14189aff0(param_1,&local_18);
  if (lVar8 == 0) {
    plVar4 = (longlong *)param_2[1];
    uVar9 = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar7 = (int)lVar8 - 1;
      uVar9 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        uVar9 = (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          uVar9 = (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return uVar9 & 0xffffffffffffff00;
  }
  if ((*(int *)(lVar8 + 0x28) != 0) && (*(longlong **)(lVar8 + 0x20) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar8 + 0x20) + 0x18))();
    if (cVar5 != '\0') {
      if (*(int *)(lVar8 + 0x28) == 0) {
        bVar6 = (**(code **)(_DAT_00000000 + 0x38))();
      }
      else {
        bVar6 = (**(code **)(**(longlong **)(lVar8 + 0x20) + 0x38))();
      }
      goto LAB_14189bb10;
    }
  }
  bVar6 = 0;
LAB_14189bb10:
  plVar4 = (longlong *)param_2[1];
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
  return (ulonglong)bVar6;
}



// FUNCTION 14189bba0 FUN_14189bba0 body=333 status=ok
// SIG undefined FUN_14189bba0(void)

longlong * FUN_14189bba0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar2 = *(longlong **)(param_1 + 0x300);
  plVar7 = (longlong *)0x0;
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
        if (plVar2 == (longlong *)0x0) {
          return (longlong *)0x0;
        }
        plVar6 = plVar2;
        if (*(longlong *)(param_1 + 0x2f8) != 0) {
          FUN_14183ac60(*(longlong *)(param_1 + 0x2f8),local_18);
          cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x218))();
          if (cVar4 == '\0') {
            cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x1a8))();
            if (cVar4 == '\0') {
              plVar7 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x778);
            }
            else {
              plVar7 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x800);
            }
          }
          else {
            plVar7 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x888);
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
    }
  }
  return plVar7;
}



// FUNCTION 14189bcf0 FUN_14189bcf0 body=967 status=ok
// SIG undefined FUN_14189bcf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_14189bcf0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined8 local_138;
  longlong local_130;
  longlong *plStack_128;
  longlong local_120;
  longlong *plStack_118;
  longlong local_110;
  undefined8 local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  longlong local_d8 [4];
  longlong local_b8;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  iVar7 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = param_3;
  while (lVar2 != 0) {
    local_138 = 0;
    if (*param_2 != 0) {
      return param_2;
    }
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
      lVar4 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar4 = param_1 + 0x40;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                               (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar6 = (longlong *)((longlong)iVar3 * 0x80 + *(longlong *)(param_1 + 8));
          if (*plVar6 == lVar2) {
            if ((iVar3 != -1) && (plVar6 != (longlong *)0x0)) {
              FUN_141887aa0(local_d8,plVar6 + 1);
              goto LAB_14189bdb4;
            }
            break;
          }
          iVar3 = (int)plVar6[0xf];
        } while (iVar3 != -1);
      }
    }
    FInputBindingManager::FContextEntry::FContextEntry(local_d8);
LAB_14189bdb4:
    local_148 = param_5;
    plVar5 = (longlong *)FUN_141899180(param_1,local_100,lVar2,param_4);
    plVar6 = (longlong *)plVar5[1];
    lVar2 = *plVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_130 = lVar2;
    plStack_128 = plVar6;
    if (&local_130 != param_2) {
      local_130 = *param_2;
      plStack_128 = (longlong *)param_2[1];
      *param_2 = lVar2;
      param_2[1] = (longlong)plVar6;
      local_68 = lVar2;
      plStack_60 = plVar6;
    }
    plVar6 = plStack_128;
    if (plStack_128 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_128 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plStack_128)(plStack_128);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_128 + 8))(plStack_128,1);
        }
      }
    }
    plVar6 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_f8 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_f8)(local_f8);
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
    plVar6 = local_70;
    lVar2 = *(longlong *)(local_78 + 0x18);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_70 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
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
    TArray<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,TSizedDefaultAllocator<32>_>
    ::
    ~TArray<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,TSizedDefaultAllocator<32>_>
              (local_88);
    local_90 = 0;
    if (local_98 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_d8,0);
    if (local_b8 != 0) {
      FMemory::Free();
    }
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
  }
  local_138 = 0;
  if (*param_2 == 0) {
    local_110 = 0;
    local_108 = 0;
    FInputBindingManager::GetAllChildContexts(param_1,param_3,&local_110);
    if (0 < (int)local_108) {
      do {
        if (*param_2 != 0) break;
        local_148 = param_5;
        plVar6 = (longlong *)
                 FUN_141899180(param_1,local_f0,*(undefined8 *)(local_110 + (longlong)iVar7 * 8),
                               param_4);
        lVar2 = *plVar6;
        plVar6 = (longlong *)plVar6[1];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        local_120 = lVar2;
        plStack_118 = plVar6;
        if (&local_120 != param_2) {
          local_120 = *param_2;
          plStack_118 = (longlong *)param_2[1];
          *param_2 = lVar2;
          param_2[1] = (longlong)plVar6;
          local_58 = lVar2;
          plStack_50 = plVar6;
        }
        plVar6 = plStack_118;
        if (plStack_118 != (longlong *)0x0) {
          LOCK();
          plVar5 = plStack_118 + 1;
          lVar2 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plStack_118)(plStack_118);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_118 + 8))(plStack_118,1);
            }
          }
        }
        plVar6 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_e8 + 1;
          lVar2 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_e8)(local_e8);
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
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)local_108);
    }
    if (local_110 != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 14189c0f0 GetCursorPos body=338 status=ok
// SIG BOOL GetCursorPos(LPPOINT lpPoint)

BOOL __stdcall FSlateApplication::GetCursorPos(LPPOINT lpPoint)

{
  BOOL BVar1;
  int iVar2;
  float *pfVar3;
  undefined8 *puVar4;
  tagPOINT tVar5;
  longlong lVar6;
  undefined8 *in_RDX;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  puVar4 = *(undefined8 **)(DAT_1469eaf48 + 8);
  BVar1 = (BOOL)in_RDX;
  if (puVar4 == (undefined8 *)0x0) {
    if (lpPoint[0x53].x != lpPoint[0x58].y) {
      tVar5 = lpPoint[0x5a];
      if (lpPoint[0x5a] == (tagPOINT)0x0) {
        tVar5 = (tagPOINT)(lpPoint + 0x59);
      }
      iVar2 = *(int *)((longlong)tVar5 + ((longlong)lpPoint[0x5b].x - 1U & 10) * 4);
      if (iVar2 != -1) {
        tVar5 = lpPoint[0x52];
        while ((lVar6 = (longlong)iVar2, *(int *)((longlong)tVar5 + lVar6 * 0x18) != 0 ||
               (*(int *)((longlong)tVar5 + 4 + lVar6 * 0x18) != 10))) {
          iVar2 = *(int *)((longlong)tVar5 + 0x10 + lVar6 * 0x18);
          if (iVar2 == -1) {
            return BVar1;
          }
        }
        if ((iVar2 != -1) && (lVar6 = (longlong)tVar5 + lVar6 * 0x18, lVar6 != 0)) {
          *in_RDX = *(undefined8 *)(lVar6 + 8);
        }
      }
    }
    return BVar1;
  }
  pfVar3 = (float *)(**(code **)*puVar4)(puVar4,local_res20);
  iVar2 = _finite((double)*pfVar3);
  if (iVar2 != 0) {
    iVar2 = _finite((double)pfVar3[1]);
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)(**(code **)*puVar4)(puVar4,local_18);
      *in_RDX = *puVar4;
      return BVar1;
    }
  }
  *in_RDX = DAT_1468b5d88;
  return BVar1;
}



// FUNCTION 14189c250 GetCursorSize body=99 status=ok
// SIG undefined GetCursorSize(void)

float * FSlateApplication::GetCursorSize(undefined8 param_1,float *param_2)

{
  longlong *plVar1;
  int local_res18 [2];
  int local_res20 [2];
  
  plVar1 = *(longlong **)(DAT_1469eaf48 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,local_res18,local_res20);
    *param_2 = (float)local_res18[0];
    param_2[1] = (float)local_res20[0];
    return param_2;
  }
  *param_2 = 1.0;
  param_2[1] = 1.0;
  return param_2;
}



// FUNCTION 14189c2c0 FUN_14189c2c0 body=1742 status=ok
// SIG undefined FUN_14189c2c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014189c34b) */
/* WARNING: Removing unreachable block (ram,0x00014189c35c) */
/* WARNING: Removing unreachable block (ram,0x00014189c379) */

longlong * FUN_14189c2c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
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
  longlong *local_778;
  longlong *plStack_770;
  longlong *local_768;
  longlong *plStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  longlong *local_740;
  undefined8 local_738;
  undefined1 local_730;
  undefined8 local_728;
  undefined4 local_720;
  undefined1 local_718 [8];
  longlong *local_710;
  undefined1 local_700;
  undefined8 local_6f8;
  undefined4 local_6f0;
  undefined1 local_6e8 [8];
  longlong *local_6e0;
  longlong *local_6d8;
  longlong *local_6c8;
  longlong *local_6c0;
  longlong *local_6b0;
  longlong *plStack_6a8;
  longlong *local_6a0;
  longlong *plStack_698;
  undefined1 local_688 [688];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_7e8;
  plVar8 = *(longlong **)(param_1 + 0x58);
  local_778 = (longlong *)0x0;
  plStack_770 = (longlong *)0x0;
  if (plVar8 == (longlong *)0x0) {
    FText::FText(local_718,*(longlong *)(param_1 + 0x40) + 0x10);
    local_700 = 1;
    local_6f8 = 0;
    local_6f0 = 0;
    lVar11 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar11 + 0x108,local_718);
    *(undefined1 *)(lVar11 + 0x120) = local_700;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x128,&local_6f8);
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
    plVar12 = plVar8 + 2;
    local_6e0 = plVar12;
    local_6d8 = plVar8;
    FUN_14044f790(&local_6e0,plVar12);
    local_7c8 = 0x650;
    SWidget::SetDebugInfo
              (plVar12,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\UICommandDragDropOp.cpp"
               ,0x2c);
    local_7b8 = *(undefined4 *)(lVar11 + 0x90);
    local_788 = lVar11 + 0xf8;
    local_7a0 = lVar11 + 0xe8;
    local_790 = *(undefined1 *)(lVar11 + 0xf1);
    local_7a8 = lVar11 + 200;
    local_7b0 = lVar11 + 0x98;
    local_798 = *(undefined1 *)(lVar11 + 0xf0);
    local_7c0 = lVar11 + 0x78;
    local_7c8 = lVar11 + 0x60;
    SWidget::SWidgetConstruct(plVar12,lVar11,lVar11 + 0x30,lVar11 + 0x40);
    FUN_1419b0120(plVar12,lVar11);
    if (((char)plVar8[5] < '\0') ||
       (cVar7 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar7 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar6;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_748 = 0;
    local_778 = plVar12;
    local_740 = plVar8;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_770,&local_740);
    plVar12 = local_740;
    if (local_740 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_740 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_740)(local_740);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_740 + 8))(local_740,1);
        }
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar8 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      LOCK();
      plVar12 = plVar8 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6f8);
    if (local_710 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_710 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_710)(local_710);
        LOCK();
        piVar2 = (int *)((longlong)local_710 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_710 + 8))(local_710,1);
        }
      }
    }
  }
  else {
    plStack_770 = *(longlong **)(param_1 + 0x60);
    if (plStack_770 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_770 + 1) = (int)plStack_770[1] + 1;
      UNLOCK();
    }
    local_758 = 0;
    uStack_750 = 0;
    local_778 = plVar8;
    local_6b0 = plVar8;
    plStack_6a8 = plStack_770;
  }
  plVar8 = DAT_1469eb140;
  lVar11 = *DAT_1469eb140;
  puVar9 = (undefined8 *)FName::FName(local_6e8,"ToolPanel.GroupBorder",1);
  uVar10 = (**(code **)(lVar11 + 0x40))(plVar8,*puVar9,0);
  plVar8 = plStack_770;
  local_730 = 1;
  local_728 = 0;
  local_720 = 0;
  if (plStack_770 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_770 + 1) = (int)plStack_770[1] + 1;
    UNLOCK();
  }
  local_738 = uVar10;
  lVar11 = FUN_141886d30(local_688);
  *(undefined8 *)(lVar11 + 0x188) = uVar10;
  *(undefined1 *)(lVar11 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x198,&local_728);
  pplVar3 = (longlong **)(lVar11 + 0x108);
  local_768 = local_778;
  plStack_760 = plStack_770;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    plVar8 = plStack_770;
  }
  if (&local_768 != pplVar3) {
    local_768 = *pplVar3;
    plStack_760 = *(longlong **)(lVar11 + 0x110);
    local_6a0 = local_778;
    plStack_698 = plStack_770;
    *pplVar3 = local_778;
    *(longlong **)(lVar11 + 0x110) = plStack_770;
  }
  plVar12 = plStack_760;
  if (plStack_760 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_760 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = plStack_770;
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_760)(plStack_760);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar8 = plStack_770;
      if (iVar4 == 1) {
        (**(code **)(*plStack_760 + 8))(plStack_760,1);
        plVar8 = plStack_770;
      }
    }
  }
  plVar12 = (longlong *)operator_new(0x398);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar12 + 1) = 1;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_144d61068;
    if (plVar12 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar1 = plVar12 + 2;
  local_6c8 = plVar1;
  local_6c0 = plVar12;
  FUN_14044f790(&local_6c8,plVar1);
  local_7c8 = 0x388;
  SWidget::SetDebugInfo
            (plVar1,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\UICommandDragDropOp.cpp"
             ,0x31);
  local_7b8 = *(undefined4 *)(lVar11 + 0x90);
  local_788 = lVar11 + 0xf8;
  local_7a0 = lVar11 + 0xe8;
  local_790 = *(undefined1 *)(lVar11 + 0xf1);
  local_7a8 = lVar11 + 200;
  local_7b0 = lVar11 + 0x98;
  local_798 = *(undefined1 *)(lVar11 + 0xf0);
  local_7c0 = lVar11 + 0x78;
  local_7c8 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_141971ea0(plVar1,lVar11);
  if (((char)plVar12[5] < '\0') || (cVar7 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar7 != '\0'))
  {
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
    plVar8 = plStack_770;
  }
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar12 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
    LOCK();
    plVar8 = plVar12 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = plStack_770;
    if ((int)lVar11 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar8 = plStack_770;
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
        plVar8 = plStack_770;
      }
    }
  }
  FUN_14188af70(local_688);
  plVar1 = plStack_770;
  plVar12 = (longlong *)0x0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar12 = plStack_770;
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_770)(plStack_770);
      plVar12 = plStack_770;
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_770 + 8))(plStack_770,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_728);
  plVar8 = plStack_770;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar12 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_770)(plStack_770);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_770 + 8))(plStack_770,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14189c990 FUN_14189c990 body=34 status=ok
// SIG undefined FUN_14189c990(void)

undefined8 * FUN_14189c990(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x580);
  lVar1 = *(longlong *)(param_1 + 0x588);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14189c9c0 FUN_14189c9c0 body=9 status=ok
// SIG undefined FUN_14189c9c0(void)

undefined4 FUN_14189c9c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10c);
}



// FUNCTION 14189c9d0 GetFlashValue body=102 status=ok
// SIG undefined GetFlashValue(void)

float SWindowTitleBar::GetFlashValue(longlong param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  cVar1 = FCurveSequence::EnsureSlateTickDuringAnimation(param_1 + 800);
  if (cVar1 != '\0') {
    fVar2 = (float)FUN_141839e50(param_1 + 800);
    fVar3 = ::_guard_xfg_dispatch_icall_nop(fVar2 * 34.55752);
    return (fVar3 + 1.0) * 0.5 * (1.0 - fVar2);
  }
  return 0.0;
}



// FUNCTION 14189ca40 FUN_14189ca40 body=200 status=ok
// SIG undefined FUN_14189ca40(void)

undefined8 * FUN_14189ca40(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*(int *)(param_1 + 0x120) < 1) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar2 = *(longlong **)
              (*(longlong *)(param_1 + 0x118) + -8 + (longlong)*(int *)(param_1 + 0x120) * 0x10);
    uVar3 = *(undefined8 *)
             (*(longlong *)(param_1 + 0x118) + -0x10 + (longlong)*(int *)(param_1 + 0x120) * 0x10);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
    }
    *param_2 = 0;
    param_2[1] = plVar2;
    lVar5 = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar4 == 0;
      if (bVar6) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar6) {
        LOCK();
        bVar6 = iVar4 == (int)plVar2[1];
        if (bVar6) {
          *(int *)(plVar2 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar6) {
          lVar5 = param_2[1];
          goto LAB_14189cabc;
        }
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar6 = iVar4 == 0;
        if (bVar6) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
      param_2[1] = 0;
      lVar5 = 0;
    }
LAB_14189cabc:
    if (lVar5 != 0) {
      *param_2 = uVar3;
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
        return param_2;
      }
    }
  }
  return param_2;
}



// FUNCTION 14189cb10 FUN_14189cb10 body=88 status=ok
// SIG undefined FUN_14189cb10(void)

undefined8 * FUN_14189cb10(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x468);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    iVar2 = *(int *)(lVar1 + 8);
    bVar4 = iVar2 == 0;
    if (bVar4) {
      *(int *)(lVar1 + 8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    while (!bVar4) {
      LOCK();
      bVar4 = iVar2 == *(int *)(lVar1 + 8);
      if (bVar4) {
        *(int *)(lVar1 + 8) = iVar2 + 1;
      }
      UNLOCK();
      if (bVar4) {
        lVar3 = param_2[1];
        goto LAB_14189cb4f;
      }
      LOCK();
      iVar2 = *(int *)(lVar1 + 8);
      bVar4 = iVar2 == 0;
      if (bVar4) {
        *(int *)(lVar1 + 8) = 0;
        iVar2 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
LAB_14189cb4f:
    if (lVar3 != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x460);
    }
  }
  return param_2;
}



// FUNCTION 14189cb90 FUN_14189cb90 body=2920 status=ok
// SIG undefined FUN_14189cb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14189cb90(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_478 [32];
  undefined4 local_458 [2];
  longlong local_450 [2];
  undefined1 local_440 [4];
  undefined1 local_43c [4];
  undefined1 local_438 [4];
  undefined1 local_434 [4];
  undefined1 local_430 [4];
  undefined1 local_42c [4];
  longlong *local_428;
  undefined8 local_420;
  undefined1 local_418 [8];
  longlong *local_410;
  undefined4 *local_408;
  longlong local_400 [2];
  longlong *local_3f0;
  undefined4 *local_3e8;
  longlong local_3e0 [2];
  longlong *local_3d0;
  undefined4 *local_3c8;
  longlong local_3c0 [2];
  longlong *local_3b0;
  undefined4 *local_3a8;
  longlong local_3a0 [2];
  longlong *local_390;
  undefined4 *local_388;
  longlong local_380 [2];
  longlong *local_370;
  undefined4 *local_368;
  longlong local_360 [2];
  longlong *local_350;
  undefined4 *local_348;
  longlong local_340 [2];
  longlong *local_330;
  undefined4 *local_328;
  undefined1 local_320 [8];
  longlong *local_318;
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined1 local_230 [24];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8 [4];
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  char local_1a0;
  undefined4 local_198 [4];
  undefined1 local_188 [8];
  longlong *local_180;
  char local_170;
  undefined4 local_168 [4];
  undefined1 local_158 [8];
  longlong *local_150;
  char local_140;
  undefined4 local_138 [4];
  undefined1 local_128 [8];
  longlong *local_120;
  char local_110;
  undefined4 local_108 [4];
  undefined1 local_f8 [8];
  longlong *local_f0;
  char local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  iVar12 = 0;
  local_458[0] = 0;
  local_428 = param_1;
  local_420 = param_2;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_2a8,L"Ctrl",L"FInputChord",L"KeyName_Control");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_2c0,&DAT_144d5e790,L"FInputChord",L"KeyName_Command");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_2d8,&DAT_144d5e7c8,L"FInputChord",L"KeyName_Alt");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_2f0,L"Shift",L"FInputChord",L"KeyName_Shift");
  bVar13 = *param_1 == DAT_1469eae28;
  if (bVar13) {
    uVar7 = FUN_1404b03b0();
    uVar7 = FText::FText(local_290,uVar7);
  }
  else {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_278,&DAT_144d5c2cc,L"FInputChord",L"ModAppender");
  }
  FText::FText(local_308,uVar7);
  if (bVar13) {
    if (local_288 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_288 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_288)(local_288);
        LOCK();
        piVar11 = (int *)((longlong)local_288 + 0xc);
        iVar9 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_288 + 8))(local_288,1);
        }
      }
    }
  }
  if ((!bVar13) && (local_270 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_270 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_270)(local_270);
      LOCK();
      piVar11 = (int *)((longlong)local_270 + 0xc);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_270 + 8))(local_270,1);
      }
    }
  }
  local_218 = 0;
  local_210 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0xffffffff;
  local_1e4 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  if ((*(byte *)(param_1 + 3) & 2) != 0) {
    local_1c8[0] = 4;
    FText::FText(local_1b8,local_2a8);
    iVar12 = 1;
    local_1a0 = '\x01';
    FString::PrintfImpl(local_400,L"Mod%d",1);
    local_410 = local_400;
    local_408 = local_1c8;
    FUN_1407484b0(&local_218,local_458,&local_410,0);
    if (local_400[0] != 0) {
      FMemory::Free();
    }
    if (local_1a0 != '\0') {
      local_1a0 = '\0';
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_1b0 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar11 = (int *)((longlong)local_1b0 + 0xc);
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_1b0 + 8))(local_1b0,1);
          }
        }
      }
    }
  }
  if ((*(byte *)(param_1 + 3) & 8) != 0) {
    local_198[0] = 4;
    FText::FText(local_188,local_2c0);
    iVar12 = iVar12 + 1;
    local_170 = '\x01';
    FString::PrintfImpl(local_3e0,L"Mod%d",iVar12);
    local_3f0 = local_3e0;
    local_3e8 = local_198;
    FUN_1407484b0(&local_218,local_440,&local_3f0,0);
    if (local_3e0[0] != 0) {
      FMemory::Free();
    }
    if (local_170 != '\0') {
      local_170 = '\0';
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_180 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar11 = (int *)((longlong)local_180 + 0xc);
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_180 + 8))(local_180,1);
          }
        }
      }
    }
  }
  if ((*(byte *)(param_1 + 3) & 4) != 0) {
    local_168[0] = 4;
    FText::FText(local_158,local_2d8);
    iVar12 = iVar12 + 1;
    local_140 = '\x01';
    FString::PrintfImpl(local_3c0,L"Mod%d",iVar12);
    local_3d0 = local_3c0;
    local_3c8 = local_168;
    FUN_1407484b0(&local_218,local_43c,&local_3d0,0);
    if (local_3c0[0] != 0) {
      FMemory::Free();
    }
    if (local_140 != '\0') {
      local_140 = '\0';
      if (local_150 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_150 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_150)(local_150);
          LOCK();
          piVar11 = (int *)((longlong)local_150 + 0xc);
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_150 + 8))(local_150,1);
          }
        }
      }
    }
  }
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    local_78[0] = 4;
    FText::FText(local_68,local_2f0);
    iVar12 = iVar12 + 1;
    local_50 = '\x01';
    FString::PrintfImpl(local_3a0,L"Mod%d",iVar12);
    local_3b0 = local_3a0;
    local_3a8 = local_78;
    FUN_1407484b0(&local_218,local_438,&local_3b0,0);
    if (local_3a0[0] != 0) {
      FMemory::Free();
    }
    if (local_50 != '\0') {
      local_50 = '\0';
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar11 = (int *)((longlong)local_60 + 0xc);
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
  }
  iVar9 = 1;
  plVar3 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  do {
    if (iVar12 < iVar9) {
      piVar11 = (int *)(*plVar3 + 0x38);
      if (*piVar11 < DAT_146852c50) {
        _Init_thread_header(&DAT_146852c50);
        if (DAT_146852c50 == -1) {
          FText::FText(&DAT_146852c38,0);
          atexit(FUN_143e3e8f0);
          _Init_thread_footer(&DAT_146852c50);
        }
      }
      local_138[0] = 4;
      FText::FText(local_128,&DAT_146852c38);
      local_110 = '\x01';
      FString::PrintfImpl(local_380,L"Mod%d",iVar9);
      local_390 = local_380;
      local_388 = local_138;
      FUN_1407484b0(&local_218,local_434,&local_390,0);
      if (local_380[0] != 0) {
        FMemory::Free();
      }
      plVar10 = local_120;
      if (local_110 != '\0') {
        local_110 = '\0';
        if (local_120 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_120 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_120)(local_120);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
      if (*piVar11 < DAT_146852c50) {
        _Init_thread_header(&DAT_146852c50);
        if (DAT_146852c50 == -1) {
          FText::FText(&DAT_146852c38,0);
          atexit(FUN_143e3e8f0);
          _Init_thread_footer(&DAT_146852c50);
        }
      }
      local_108[0] = 4;
      FText::FText(local_f8,&DAT_146852c38);
      local_e0 = '\x01';
      FString::PrintfImpl(local_360,L"Appender%d",iVar9);
      local_370 = local_360;
      local_368 = local_108;
      FUN_1407484b0(&local_218,local_418,&local_370,0);
      if (local_360[0] != 0) {
        FMemory::Free();
      }
      if (local_e0 != '\0') {
        local_e0 = '\0';
        plVar10 = local_f0;
LAB_14189d2bc:
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar10 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar11 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          }
        }
      }
    }
    else {
      local_d8[0] = 4;
      FText::FText(local_c8,local_308);
      local_b0 = '\x01';
      FString::PrintfImpl(local_340,L"Appender%d",iVar9);
      local_350 = local_340;
      local_348 = local_d8;
      FUN_1407484b0(&local_218,local_430,&local_350,0);
      if (local_340[0] != 0) {
        FMemory::Free();
      }
      if (local_b0 != '\0') {
        local_b0 = '\0';
        plVar10 = local_c0;
        goto LAB_14189d2bc;
      }
    }
    iVar9 = iVar9 + 1;
    if (4 < iVar9) {
      FText::FText(local_320);
      plVar3 = local_428;
      cVar6 = FKey::IsValid(local_428);
      if (cVar6 != '\0') {
        cVar6 = FKey::IsModifierKey(plVar3);
        if (cVar6 == '\0') {
          uVar7 = FUN_1417ad2a0(plVar3,local_260);
          FText::operator=(local_320,uVar7);
          if (local_258 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_258 + 1;
            lVar5 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_258)(local_258);
              LOCK();
              piVar11 = (int *)((longlong)local_258 + 0xc);
              iVar12 = *piVar11;
              *piVar11 = *piVar11 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*local_258 + 8))(local_258,1);
              }
            }
          }
        }
      }
      local_a8[0] = 4;
      FText::FText(local_98,local_320);
      local_80 = '\x01';
      local_450[0] = 0;
      local_450[1] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_450,0);
      FGenericPlatformString::Memcpy(local_450[0],&DAT_144d5e8c8,8);
      local_330 = local_450;
      local_328 = local_a8;
      FUN_1407484b0(&local_218,local_42c,&local_330,0);
      if (local_450[0] != 0) {
        FMemory::Free();
      }
      if (local_80 != '\0') {
        local_80 = '\0';
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_90 + 1;
          lVar5 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar11 = (int *)((longlong)local_90 + 0xc);
            iVar12 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_90 + 8))(local_90,1);
            }
          }
        }
      }
      if (local_318 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_318 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_318)(local_318);
          LOCK();
          piVar11 = (int *)((longlong)local_318 + 0xc);
          iVar12 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_318 + 8))(local_318,1);
          }
        }
      }
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_248,
                         L"{Mod1}{Appender1}{Mod2}{Appender2}{Mod3}{Appender3}{Mod4}{Appender4}{Key}"
                         ,L"FInputChord",L"FourModifiers");
      uVar8 = FTextFormat::FTextFormat(local_230,uVar7);
      uVar7 = local_420;
      FText::Format(local_420,uVar8,&local_218);
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_240 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar11 = (int *)((longlong)local_240 + 0xc);
          iVar12 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_240 + 8))(local_240,1);
          }
        }
      }
      local_1d0 = 0;
      if (local_1d8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_218);
      if (local_300 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_300 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_300)(local_300);
          LOCK();
          piVar11 = (int *)((longlong)local_300 + 0xc);
          iVar12 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_300 + 8))(local_300,1);
          }
        }
      }
      if (local_2e8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_2e8 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_2e8)(local_2e8);
          LOCK();
          piVar11 = (int *)((longlong)local_2e8 + 0xc);
          iVar12 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_2e8 + 8))(local_2e8,1);
          }
        }
      }
      if (local_2d0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_2d0 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_2d0)(local_2d0);
          LOCK();
          piVar11 = (int *)((longlong)local_2d0 + 0xc);
          iVar12 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_2d0 + 8))(local_2d0,1);
          }
        }
      }
      if (local_2b8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_2b8 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_2b8)(local_2b8);
          LOCK();
          piVar11 = (int *)((longlong)local_2b8 + 0xc);
          iVar12 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_2b8 + 8))(local_2b8,1);
          }
        }
      }
      if (local_2a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_2a0 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_2a0)(local_2a0);
          LOCK();
          piVar11 = (int *)((longlong)local_2a0 + 0xc);
          iVar12 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_2a0 + 8))(local_2a0,1);
          }
        }
      }
      return uVar7;
    }
  } while( true );
}



// FUNCTION 14189d700 FUN_14189d700 body=196 status=ok
// SIG undefined FUN_14189d700(void)

undefined8 FUN_14189d700(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  
  uVar4 = *(undefined8 *)*param_1;
  cVar8 = FKey::IsValid(uVar4);
  if (cVar8 != '\0') {
    cVar8 = FKey::IsModifierKey(uVar4);
    if (cVar8 == '\0') {
      bVar6 = true;
      goto LAB_14189d739;
    }
  }
  bVar6 = false;
LAB_14189d739:
  puVar9 = (undefined8 *)*param_1;
  if (!bVar6) {
    puVar9 = (undefined8 *)*param_1 + 2;
  }
  plVar5 = (longlong *)puVar9[1];
  uVar4 = *puVar9;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FUN_14189cb90(uVar4,param_2);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 14189d7d0 FUN_14189d7d0 body=590 status=ok
// SIG undefined FUN_14189d7d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14189d7d0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58 [2];
  undefined8 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x148) < 1) {
    *param_2 = 0;
    iVar11 = *(int *)(param_1 + 0x118);
    puVar7 = *(undefined8 **)(param_1 + 0x110);
    *(int *)(param_2 + 1) = iVar11;
    if (iVar11 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar11,0);
      puVar9 = (undefined8 *)*param_2;
      do {
        *puVar9 = *puVar7;
        lVar6 = puVar7[1];
        puVar9[1] = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        puVar9 = puVar9 + 2;
        puVar7 = puVar7 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  else {
    local_48 = (undefined8 *)0x0;
    plVar10 = *(longlong **)
               (*(longlong *)(param_1 + 0x140) + -8 + (longlong)*(int *)(param_1 + 0x148) * 0x10);
    uVar4 = *(undefined8 *)
             (*(longlong *)(param_1 + 0x140) + -0x10 + (longlong)*(int *)(param_1 + 0x148) * 0x10);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_40 = 1;
    TArray<FCachedTypefaceData::FCachedFontData,TInlineAllocator<1,FDefaultAllocator>_>::ResizeGrow
              (local_58,0);
    puVar7 = local_58;
    if (local_48 != (undefined8 *)0x0) {
      puVar7 = local_48;
    }
    *puVar7 = uVar4;
    puVar7[1] = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar10 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    puVar7 = local_48;
    iVar11 = (int)local_40;
    *param_2 = 0;
    *(int *)(param_2 + 1) = (int)local_40;
    if ((int)local_40 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      iVar11 = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,local_40 & 0xffffffff,0);
      puVar9 = (undefined8 *)*param_2;
      puVar8 = local_58;
      if (puVar7 != (undefined8 *)0x0) {
        puVar8 = puVar7;
      }
      do {
        *puVar9 = *puVar8;
        lVar6 = puVar8[1];
        puVar9[1] = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        puVar9 = puVar9 + 2;
        iVar11 = iVar11 + -1;
        puVar8 = puVar8 + 2;
      } while (iVar11 != 0);
      iVar11 = (int)local_40;
    }
    puVar7 = local_58;
    if (local_48 != (undefined8 *)0x0) {
      puVar7 = local_48;
    }
    if (iVar11 != 0) {
      plVar10 = puVar7 + 1;
      do {
        plVar5 = (longlong *)*plVar10;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        plVar10 = plVar10 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if (local_48 != (undefined8 *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return param_2;
}



// FUNCTION 14189da20 FUN_14189da20 body=113 status=ok
// SIG undefined FUN_14189da20(void)

undefined8 * FUN_14189da20(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x7a8))();
  lVar2 = 0;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x3b0))) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3a8) + (longlong)iVar1 * 0x10);
  }
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  FUN_14189ca40(lVar2,param_2);
  return param_2;
}



// FUNCTION 14189daa0 GetLastCursorPos body=162 status=ok
// SIG undefined GetLastCursorPos(void)

undefined8 * FSlateApplication::GetLastCursorPos(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
    lVar3 = *(longlong *)(param_1 + 800);
    if (*(longlong *)(param_1 + 800) == 0) {
      lVar3 = param_1 + 0x318;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x328) - 1U & 10) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x2e0);
      while ((lVar1 = (longlong)iVar2 * 0x18, *(int *)(lVar1 + lVar3) != 0 ||
             (*(int *)(lVar1 + 4 + lVar3) != 10))) {
        iVar2 = *(int *)(lVar1 + 0x10 + lVar3);
        if (iVar2 == -1) {
          return param_2;
        }
      }
      if ((iVar2 != -1) && (lVar1 + lVar3 != 0)) {
        *param_2 = *(undefined8 *)(lVar1 + lVar3 + 8);
      }
    }
  }
  return param_2;
}



// FUNCTION 14189db50 FUN_14189db50 body=485 status=ok
// SIG undefined FUN_14189db50(void)

longlong * FUN_14189db50(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *local_28;
  longlong *local_20;
  
  plVar2 = *(longlong **)(param_1 + 0x300);
  plVar6 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar6, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar7 = plVar2;
        if ((plVar2 != (longlong *)0x0) && (lVar3 = *(longlong *)(param_1 + 0x2f8), lVar3 != 0)) {
          FUN_14183ac60(lVar3,&local_28);
          if ((local_28 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*local_28 + 0x70))(), cVar4 == '\0')) {
            cVar4 = SWindow::HasMaximizeBox(lVar3);
            if (cVar4 == '\0') {
              plVar6 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x420);
            }
            else {
              cVar4 = (**(code **)(**(longlong **)(param_1 + 0x388) + 0x218))();
              if (cVar4 == '\0') {
                cVar4 = (**(code **)(**(longlong **)(param_1 + 0x388) + 0x1a8))();
                if (cVar4 == '\0') {
                  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x288);
                }
                else {
                  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x310);
                }
              }
              else {
                plVar6 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x398);
              }
            }
          }
          else {
            cVar4 = SWindow::HasMaximizeBox(lVar3);
            if (cVar4 == '\0') {
              plVar6 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x420);
            }
            else {
              cVar4 = (**(code **)(**(longlong **)(param_1 + 0x388) + 0x218))();
              if (cVar4 == '\0') {
                cVar4 = (**(code **)(**(longlong **)(param_1 + 0x388) + 0x1a8))();
                if (cVar4 == '\0') {
                  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x500);
                }
                else {
                  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x588);
                }
              }
              else {
                plVar6 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x610);
              }
            }
          }
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_20 + 1;
            lVar3 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            plVar7 = plVar2;
            if ((int)lVar3 == 1) {
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
  return plVar6;
}



// FUNCTION 14189dd40 FUN_14189dd40 body=347 status=ok
// SIG undefined FUN_14189dd40(void)

longlong * FUN_14189dd40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar2 = *(longlong **)(param_1 + 0x300);
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
        if ((plVar2 != (longlong *)0x0) && (lVar3 = *(longlong *)(param_1 + 0x2f8), lVar3 != 0)) {
          FUN_14183ac60(lVar3,local_28);
          cVar4 = SWindow::HasMinimizeBox(lVar3);
          if (cVar4 == '\0') {
            plVar7 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x1a8);
          }
          else {
            cVar4 = (**(code **)(**(longlong **)(param_1 + 0x378) + 0x218))();
            if (cVar4 == '\0') {
              cVar4 = (**(code **)(**(longlong **)(param_1 + 0x378) + 0x1a8))();
              if (cVar4 == '\0') {
                plVar7 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x10);
              }
              else {
                plVar7 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x98);
              }
            }
            else {
              plVar7 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x120);
            }
          }
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_20 + 1;
            lVar3 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            plVar6 = plVar2;
            if ((int)lVar3 == 1) {
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
  }
  return plVar7;
}



// FUNCTION 14189dea0 GetModifierKeys body=31 status=ok
// SIG undefined GetModifierKeys(void)

undefined8 FSlateApplication::GetModifierKeys(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*DAT_1469eaf48 + 0x50))();
  return param_2;
}



// FUNCTION 14189dec0 GetMouseCaptorImpl body=44 status=ok
// SIG undefined GetMouseCaptorImpl(void)

undefined8 FSlateApplication::GetMouseCaptorImpl(longlong param_1,undefined8 param_2)

{
  FUN_1418c5a10(param_1 + 0x330,param_2,0,10);
  return param_2;
}



// FUNCTION 14189df00 GetNavigationDirectionFromAnalog body=467 status=ok
// SIG undefined GetNavigationDirectionFromAnalog(void)

byte FNavigationConfig::GetNavigationDirectionFromAnalog(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  int *piVar6;
  byte *pbVar7;
  float fVar8;
  byte local_res8 [16];
  int local_res18 [2];
  int local_res20 [2];
  byte *local_38 [2];
  
  if ((*(char *)((longlong)param_1 + 0x1a) != '\0') &&
     (local_res8[0] = (**(code **)(*param_1 + 0x38))(), local_res8[0] != 7)) {
    local_res18[0] = *(int *)(param_2 + 0xc);
    plVar1 = param_1 + 0x15;
    if ((int)param_1[0x16] != *(int *)((longlong)param_1 + 0xdc)) {
      plVar4 = (longlong *)param_1[0x1d];
      if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
        plVar4 = param_1 + 0x1c;
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[0x1e] - 1U & (longlong)local_res18[0]) * 4);
      if (iVar3 != -1) {
        do {
          piVar6 = (int *)((longlong)iVar3 * 0x60 + *plVar1);
          if (*piVar6 == local_res18[0]) {
            if ((iVar3 != -1) && (piVar6 != (int *)0x0)) goto LAB_14189dfdc;
            break;
          }
          iVar3 = piVar6[0x16];
        } while (iVar3 != -1);
      }
    }
    local_38[0] = (byte *)local_res18;
    FUN_14187e200(plVar1,local_res20,local_38,0);
    piVar6 = (int *)((longlong)local_res20[0] * 0x60 + *plVar1);
LAB_14189dfdc:
    plVar1 = (longlong *)(piVar6 + 2);
    if (piVar6[4] != piVar6[0xf]) {
      piVar5 = *(int **)(piVar6 + 0x12);
      if (*(int **)(piVar6 + 0x12) == (int *)0x0) {
        piVar5 = piVar6 + 0x10;
      }
      iVar3 = piVar5[(longlong)piVar6[0x14] - 1U & (ulonglong)local_res8[0]];
      if (iVar3 != -1) {
        do {
          pbVar7 = (byte *)((longlong)iVar3 * 0x20 + *plVar1);
          if (*pbVar7 == local_res8[0]) {
            if ((iVar3 != -1) && (pbVar7 != (byte *)0x0)) goto LAB_14189e06e;
            break;
          }
          iVar3 = *(int *)(pbVar7 + 0x18);
        } while (iVar3 != -1);
      }
    }
    local_38[0] = local_res8;
    TSet<TTuple<enum_EUINavigation,FAnalogNavigationState>,TDefaultMapHashableKeyFuncs<enum_EUINavigation,FAnalogNavigationState,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<enum_EUINavigation_const_&>_>(plVar1,local_res20,local_38,0);
    pbVar7 = (byte *)((longlong)local_res20[0] * 0x20 + *plVar1);
LAB_14189e06e:
    iVar3 = 0;
    if (-1 < *(int *)(pbVar7 + 0x10) + -1) {
      iVar3 = *(int *)(pbVar7 + 0x10) + -1;
    }
    fVar8 = (float)(**(code **)(*param_1 + 0x30))
                             (param_1,*(uint *)(param_2 + 0x38) & 0x7fffffff,iVar3);
    dVar2 = DAT_1468b5a78;
    if ((double)fVar8 < DAT_1468b5a78 - *(double *)(pbVar7 + 8)) {
      *(int *)(pbVar7 + 0x10) = *(int *)(pbVar7 + 0x10) + 1;
      *(double *)(pbVar7 + 8) = dVar2;
      return local_res8[0];
    }
  }
  return 7;
}



// FUNCTION 14189e0f0 FUN_14189e0f0 body=692 status=ok
// SIG undefined FUN_14189e0f0(void)

undefined8 FUN_14189e0f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined1 **ppuVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8 [4];
  int local_f4;
  int local_f0;
  undefined1 local_ec [4];
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  undefined1 local_e0 [8];
  int *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  
  if (*(char *)(param_1 + 0x1a) != '\0') {
    local_f4 = *(int *)(param_2 + 0xc);
    plVar3 = (longlong *)(param_1 + 0xa8);
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
      lVar7 = *(longlong *)(param_1 + 0xe8);
      if (*(longlong *)(param_1 + 0xe8) == 0) {
        lVar7 = param_1 + 0xe0;
      }
      iVar4 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0xf0) - 1U & (longlong)local_f4) * 4);
      if (iVar4 != -1) {
        do {
          piVar8 = (int *)((longlong)iVar4 * 0x60 + *plVar3);
          if (*piVar8 == local_f4) {
            if ((iVar4 != -1) && (piVar8 != (int *)0x0)) goto LAB_14189e1c4;
            break;
          }
          iVar4 = piVar8[0x16];
        } while (iVar4 != -1);
      }
    }
    local_d8 = &local_f4;
    FUN_14187e200(plVar3,&local_f0,&local_d8,0);
    piVar8 = (int *)((longlong)local_f0 * 0x60 + *plVar3);
LAB_14189e1c4:
    plVar3 = *(longlong **)(param_2 + 0x28);
    piVar8 = piVar8 + 2;
    lVar7 = *(longlong *)(param_2 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    lVar5 = *(longlong *)(param_1 + 0x28);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar3)(plVar3);
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
    if (lVar7 == lVar5) {
      if (*(float *)(param_2 + 0x38) < -*(float *)(param_1 + 0x1c)) {
        return 0;
      }
      if (*(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x38)) {
        return 1;
      }
      local_c0 = local_res8;
      local_res8[0] = 0;
      local_b8 = &local_d0;
      local_d0 = 0;
      local_c8 = 0;
      TSet<TTuple<enum_EUINavigation,FAnalogNavigationState>,TDefaultMapHashableKeyFuncs<enum_EUINavigation,FAnalogNavigationState,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EUINavigation_&&,FAnalogNavigationState_&&>_>
                (piVar8,local_ec,&local_c0,0);
      local_a0 = local_res18;
      local_b0 = 0;
      ppuVar10 = &local_a0;
      local_98 = &local_b0;
      local_res18[0] = 1;
      puVar9 = local_e8;
      local_a8 = 0;
    }
    else {
      plVar3 = *(longlong **)(param_2 + 0x28);
      lVar7 = *(longlong *)(param_2 + 0x18);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      if (lVar7 != lVar5) {
        return 7;
      }
      if (*(float *)(param_1 + 0x20) < *(float *)(param_2 + 0x38)) {
        return 2;
      }
      if (*(float *)(param_2 + 0x38) < -*(float *)(param_1 + 0x20)) {
        return 3;
      }
      local_80 = local_res20;
      local_res20[0] = 2;
      local_78 = &local_90;
      local_90 = 0;
      local_88 = 0;
      TSet<TTuple<enum_EUINavigation,FAnalogNavigationState>,TDefaultMapHashableKeyFuncs<enum_EUINavigation,FAnalogNavigationState,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EUINavigation_&&,FAnalogNavigationState_&&>_>
                (piVar8,local_e4,&local_80,0);
      local_60 = local_f8;
      local_70 = 0;
      ppuVar10 = &local_60;
      local_58 = &local_70;
      local_f8[0] = 3;
      puVar9 = local_e0;
      local_68 = 0;
    }
    TSet<TTuple<enum_EUINavigation,FAnalogNavigationState>,TDefaultMapHashableKeyFuncs<enum_EUINavigation,FAnalogNavigationState,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EUINavigation_&&,FAnalogNavigationState_&&>_>
              (piVar8,puVar9,ppuVar10,0);
  }
  return 7;
}


