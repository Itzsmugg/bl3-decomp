// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142164390 FUN_142164390 body=598 status=ok
// SIG undefined FUN_142164390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142164390(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong *plStack_180;
  undefined **local_178;
  ushort local_170;
  undefined1 local_16e;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined2 local_11c;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_16e = 0;
  local_16c = 0;
  local_170 = local_170 & 0xfe00;
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  local_178 = &PTR__scalar_deleting_destructor__144d565c0;
  local_120 = 0x3f800000;
  local_148 = &DAT_1469eb010;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_140 = 0;
  local_128 = 0;
  local_11c = 0;
  local_118 = 0;
  local_110 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_178);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_178);
  }
  local_198 = 0;
  pppuVar7 = &local_178;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar7 = *(undefined ****)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_198);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_198);
  }
  local_190 = 0;
  local_188 = 0;
  plStack_180 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_190);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_190);
  }
  local_108 = local_190;
  local_100 = local_188;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_f8 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_1420f1ad0(local_e8,pppuVar7,local_198,&local_108);
  FUN_140439160(param_3,uVar6);
  FUN_140438c20(local_e8);
  plVar5 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_180 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_180)(plStack_180);
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
  plVar5 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_130 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_130)(plStack_130);
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
  return;
}



// FUNCTION 142164610 execDrawBox body=427 status=ok
// SIG undefined execDrawBox(void)

void UWidgetBlueprintLibrary::execDrawBox(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [48];
  
  FUN_1420cf100(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_48 = local_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  DrawBox(puVar1,local_68,local_res20,local_res10,&local_48);
  return;
}



// FUNCTION 1421647c0 execDrawLine body=428 status=ok
// SIG undefined execDrawLine(void)

void UWidgetBlueprintLibrary::execDrawLine(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [48];
  
  FUN_1420cf100(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_48 = local_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  DrawLine(puVar1,local_68,local_res20,&local_48,local_res10[0] != 0);
  return;
}



// FUNCTION 142164970 execDrawLines body=410 status=ok
// SIG undefined execDrawLines(void)

void UWidgetBlueprintLibrary::execDrawLines(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int local_res10 [2];
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [48];
  
  FUN_1420cf100(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar2 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_48 = local_58;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  DrawLines(puVar1,plVar2,&local_48,local_res10[0] != 0);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142164b10 execDrawText body=372 status=ok
// SIG undefined execDrawText(void)

void UWidgetBlueprintLibrary::execDrawText(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [48];
  
  FUN_1420cf100(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_48 = local_58;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1420f2e00(puVar1,local_68,local_res10,&local_48);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142164c90 execDrawTextFormatted body=605 status=ok
// SIG undefined execDrawTextFormatted(void)

void UWidgetBlueprintLibrary::execDrawTextFormatted(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [48];
  
  FUN_1420cf100(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar6 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  FText::FText(local_88);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  puVar5 = local_88;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_58 = local_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1420f3060(puVar6,puVar5,local_90,local_98,local_res10[0],local_res20,&local_58);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 142164ef0 execEndDragDrop body=325 status=ok
// SIG undefined execEndDragDrop(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UWidgetBlueprintLibrary::execEndDragDrop
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1c8 [32];
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
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_f4 = local_f4 & 0xffffff00;
  local_1a8[0] = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_188 = 0;
  local_180 = 0;
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
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0x20702;
  FReply::FReply(local_e8,local_1a8);
  FUN_140438c20(local_1a8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar2 = local_e8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = EndDragDrop(local_1a8,puVar2);
  FUN_140439160(param_3,uVar1);
  FUN_140438c20(local_1a8);
  FUN_140438c20(local_e8);
  return;
}



// FUNCTION 142165060 FUN_142165060 body=130 status=ok
// SIG undefined FUN_142165060(void)

void FUN_142165060(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
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
  FUN_1420f6c70(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1421650f0 FUN_1421650f0 body=352 status=ok
// SIG undefined FUN_1421650f0(void)

void FUN_1421650f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28;
  longlong local_20 [3];
  
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_20[0] = 0;
  local_20[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  local_res20 = 0;
  plVar1 = local_20;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
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
  FUN_1420f8a60(local_28,plVar1,local_res20,local_res10[0] != 0);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142165250 FUN_142165250 body=352 status=ok
// SIG undefined FUN_142165250(void)

void FUN_142165250(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28;
  longlong local_20 [3];
  
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_20[0] = 0;
  local_20[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  local_res10[0] = 0;
  plVar1 = local_20;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1420f8c70(local_28,local_res20,plVar1,local_res10[0] != 0);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421653b0 FUN_1421653b0 body=391 status=ok
// SIG undefined FUN_1421653b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1421653b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined4 uStackX_14;
  undefined **local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  byte local_28;
  
  local_28 = local_28 & 0xfc;
  local_a8 = &PTR__scalar_deleting_destructor__143f489a8;
  local_88 = _DAT_1464aa6c0;
  uStack_80 = _DAT_1464aa6c8;
  local_98 = 0;
  uStack_90 = 0;
  local_50 = (undefined4)DAT_1468b5d88;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  uStackX_14 = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
  local_44 = uStackX_14;
  local_4c = uStackX_14;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_a0 = 0x42000000;
  local_9c = 0x42000000;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_40 = 0;
  local_3c = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_48 = local_50;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  pppuVar7 = &local_a8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar7 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar6 = FBackChannelConnection::GetSocket(pppuVar7);
  plVar5 = plStack_30;
  *param_3 = uVar6;
  local_a8 = &PTR__scalar_deleting_destructor__143f489a8;
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
  plVar5 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_68)(local_68);
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
  return;
}



// FUNCTION 142165540 FUN_142165540 body=391 status=ok
// SIG undefined FUN_142165540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142165540(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined4 uStackX_14;
  undefined **local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  byte local_28;
  
  local_28 = local_28 & 0xfc;
  local_a8 = &PTR__scalar_deleting_destructor__143f489a8;
  local_88 = _DAT_1464aa6c0;
  uStack_80 = _DAT_1464aa6c8;
  local_98 = 0;
  uStack_90 = 0;
  local_50 = (undefined4)DAT_1468b5d88;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  uStackX_14 = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
  local_44 = uStackX_14;
  local_4c = uStackX_14;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_a0 = 0x42000000;
  local_9c = 0x42000000;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_40 = 0;
  local_3c = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_48 = local_50;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  pppuVar7 = &local_a8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar7 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar6 = UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(pppuVar7);
  plVar5 = plStack_30;
  *param_3 = uVar6;
  local_a8 = &PTR__scalar_deleting_destructor__143f489a8;
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
  plVar5 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_68)(local_68);
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
  return;
}



// FUNCTION 1421656d0 FUN_1421656d0 body=391 status=ok
// SIG undefined FUN_1421656d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1421656d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined4 uStackX_14;
  undefined **local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  byte local_28;
  
  local_28 = local_28 & 0xfc;
  local_a8 = &PTR__scalar_deleting_destructor__143f489a8;
  local_88 = _DAT_1464aa6c0;
  uStack_80 = _DAT_1464aa6c8;
  local_98 = 0;
  uStack_90 = 0;
  local_50 = (undefined4)DAT_1468b5d88;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  uStackX_14 = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
  local_44 = uStackX_14;
  local_4c = uStackX_14;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_a0 = 0x42000000;
  local_9c = 0x42000000;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_40 = 0;
  local_3c = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_48 = local_50;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  pppuVar7 = &local_a8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar7 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar6 = UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(pppuVar7);
  plVar5 = plStack_30;
  *param_3 = uVar6;
  local_a8 = &PTR__scalar_deleting_destructor__143f489a8;
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
  plVar5 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_68)(local_68);
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
  return;
}



// FUNCTION 142165860 FUN_142165860 body=51 status=ok
// SIG undefined FUN_142165860(void)

void FUN_142165860(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420f97a0();
  FGeometry::operator=(param_3,uVar1);
  return;
}



// FUNCTION 1421658a0 FUN_1421658a0 body=43 status=ok
// SIG undefined FUN_1421658a0(void)

void FUN_1421658a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420f9a70();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421658d0 execGetDesiredSize body=54 status=ok
// SIG undefined execGetDesiredSize(void)

void UWidget::execGetDesiredSize(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetDesiredSize(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142165910 FUN_142165910 body=42 status=ok
// SIG undefined FUN_142165910(void)

void FUN_142165910(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420fa8d0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142165940 FUN_142165940 body=391 status=ok
// SIG undefined FUN_142165940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142165940(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined4 uStackX_14;
  undefined **local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  byte local_28;
  
  local_28 = local_28 & 0xfc;
  local_a8 = &PTR__scalar_deleting_destructor__143f489a8;
  local_88 = _DAT_1464aa6c0;
  uStack_80 = _DAT_1464aa6c8;
  local_98 = 0;
  uStack_90 = 0;
  local_50 = (undefined4)DAT_1468b5d88;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  uStackX_14 = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
  local_44 = uStackX_14;
  local_4c = uStackX_14;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_a0 = 0x42000000;
  local_9c = 0x42000000;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_40 = 0;
  local_3c = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_48 = local_50;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  pppuVar7 = &local_a8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar7 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar6 = UWidgetBlueprintLibrary::GetDynamicMaterial(pppuVar7);
  plVar5 = plStack_30;
  *param_3 = uVar6;
  local_a8 = &PTR__scalar_deleting_destructor__143f489a8;
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
  plVar5 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_68)(local_68);
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
  return;
}



// FUNCTION 142165ad0 execGetEndTime body=45 status=ok
// SIG undefined execGetEndTime(void)

void UWidgetAnimation::execGetEndTime(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetEndTime();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142165b00 execGetInputEventFromCharacterEvent body=221 status=ok
// SIG undefined execGetInputEventFromCharacterEvent(void)

void UWidgetBlueprintLibrary::execGetInputEventFromCharacterEvent
               (undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined ***pppuVar2;
  ushort local_res10;
  undefined1 local_48 [24];
  undefined **local_30;
  ushort local_28;
  undefined1 local_26;
  undefined4 local_24;
  undefined8 local_20;
  undefined2 local_18;
  
  local_26 = 0;
  local_28 = local_res10 & 0xfe00;
  local_24 = 0;
  local_30 = &PTR_FUN_144d565a8;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  pppuVar2 = &local_30;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar2 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = GetInputEventFromCharacterEvent(local_48,pppuVar2);
  *(undefined2 *)(param_3 + 8) = *(undefined2 *)(lVar1 + 8);
  *(undefined1 *)(param_3 + 10) = *(undefined1 *)(lVar1 + 10);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
  return;
}



// FUNCTION 142165be0 FUN_142165be0 body=286 status=ok
// SIG undefined FUN_142165be0(void)

void FUN_142165be0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined ***pppuVar6;
  ushort local_res10;
  undefined1 local_58 [24];
  undefined **local_40;
  ushort local_38;
  undefined1 local_36;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong *plStack_18;
  undefined8 local_10;
  
  local_36 = 0;
  local_38 = local_res10 & 0xfe00;
  local_34 = 0;
  local_30 = 0;
  local_40 = &PTR__scalar_deleting_destructor__144d56578;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  pppuVar6 = &local_40;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar6 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar5 = UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(local_58,pppuVar6);
  plVar4 = plStack_18;
  *(undefined2 *)(param_3 + 8) = *(undefined2 *)(lVar5 + 8);
  *(undefined1 *)(param_3 + 10) = *(undefined1 *)(lVar5 + 10);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(lVar5 + 0xc);
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar5 + 0x10);
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 142165d00 execGetInputEventFromNavigationEvent body=212 status=ok
// SIG undefined execGetInputEventFromNavigationEvent(void)

void UWidgetBlueprintLibrary::execGetInputEventFromNavigationEvent
               (undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 local_48 [24];
  undefined **local_30;
  ushort local_28;
  undefined1 local_26;
  undefined4 local_24;
  undefined8 local_20;
  undefined2 local_18;
  
  local_26 = 0;
  local_24 = 0;
  local_28 = local_28 & 0xfe00;
  local_30 = &PTR_FUN_144d565f0;
  local_20 = 0;
  local_18 = 0x207;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  pppuVar2 = &local_30;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar2 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = GetInputEventFromCharacterEvent(local_48,pppuVar2);
  *(undefined2 *)(param_3 + 8) = *(undefined2 *)(lVar1 + 8);
  *(undefined1 *)(param_3 + 10) = *(undefined1 *)(lVar1 + 10);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
  return;
}



// FUNCTION 142165de0 FUN_142165de0 body=336 status=ok
// SIG undefined FUN_142165de0(void)

void FUN_142165de0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined ***pppuVar6;
  undefined **local_98;
  ushort local_90;
  undefined1 local_8e;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_28 [32];
  
  local_8e = 0;
  local_8c = 0;
  local_90 = local_90 & 0xfe00;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_98 = &PTR__scalar_deleting_destructor__144d565c0;
  local_40 = 0x3f800000;
  local_68 = &DAT_1469eb010;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = 0;
  local_48 = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  pppuVar6 = &local_98;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar6 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar5 = UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(local_28,pppuVar6);
  plVar4 = plStack_50;
  *(undefined2 *)(param_3 + 8) = *(undefined2 *)(lVar5 + 8);
  *(undefined1 *)(param_3 + 10) = *(undefined1 *)(lVar5 + 10);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(lVar5 + 0xc);
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar5 + 0x10);
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_50)(plStack_50);
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



// FUNCTION 142165f30 FUN_142165f30 body=43 status=ok
// SIG undefined FUN_142165f30(void)

void FUN_142165f30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420fc2f0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142165f60 FUN_142165f60 body=424 status=ok
// SIG undefined FUN_142165f60(void)

void FUN_142165f60(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  ushort local_res10;
  undefined **local_98;
  ushort local_90;
  undefined1 local_8e;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_40 [40];
  longlong *local_18;
  
  local_8e = 0;
  local_90 = local_res10 & 0xfe00;
  local_8c = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  local_68 = 0;
  local_60 = 0;
  local_98 = &PTR__scalar_deleting_destructor__144d56590;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  pppuVar7 = &local_98;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar7 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar6 = FKeyEvent::FKeyEvent(local_40,pppuVar7);
  puVar1 = (undefined8 *)(lVar6 + 0x20);
  *(undefined2 *)(param_3 + 8) = *(undefined2 *)(lVar6 + 8);
  *(undefined1 *)(param_3 + 10) = *(undefined1 *)(lVar6 + 10);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(lVar6 + 0xc);
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(lVar6 + 0x18);
  if ((undefined8 *)(param_3 + 0x20) != puVar1) {
    *(undefined8 *)(param_3 + 0x20) = *puVar1;
    *puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_3 + 0x28,lVar6 + 0x28);
  }
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(lVar6 + 0x30);
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(lVar6 + 0x34);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_18 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar3 = (int *)((longlong)local_18 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  plVar2 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_70 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 142166110 FUN_142166110 body=48 status=ok
// SIG undefined FUN_142166110(void)

void FUN_142166110(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x2a8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142166140 execGetOwningLocalPlayer body=48 status=ok
// SIG undefined execGetOwningLocalPlayer(void)

void UWidget::execGetOwningLocalPlayer(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142166170 execGetParent body=44 status=ok
// SIG undefined execGetParent(void)

void UWidget::execGetParent(HWND param_1,longlong param_2,undefined8 *param_3)

{
  HWND pHVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  pHVar1 = GetParent(param_1);
  *param_3 = pHVar1;
  return;
}



// FUNCTION 1421661a0 FUN_1421661a0 body=45 status=ok
// SIG undefined FUN_1421661a0(void)

void FUN_1421661a0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420fdf40();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421661d0 execGetSafeZonePadding body=365 status=ok
// SIG undefined execGetSafeZonePadding(void)

void UWidgetBlueprintLibrary::execGetSafeZonePadding(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 local_res10 [2];
  undefined1 local_res20 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = &local_38;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  puVar1 = local_res20;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar3 = &local_28;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1420fe010(local_res10[0],puVar2,puVar1,puVar3);
  return;
}



// FUNCTION 142166340 execGetStartTime body=45 status=ok
// SIG undefined execGetStartTime(void)

void UWidgetAnimation::execGetStartTime(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetStartTime();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142166370 execGetValue body=43 status=ok
// SIG undefined execGetValue(void)

void UVisibilityBinding::execGetValue(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetValue();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421663a0 execGetValue body=44 status=ok
// SIG undefined execGetValue(void)

void UWidgetBinding::execGetValue(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetValue();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421663d0 FUN_1421663d0 body=60 status=ok
// SIG undefined FUN_1421663d0(void)

void FUN_1421663d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1420ffe80(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142166410 FUN_142166410 body=60 status=ok
// SIG undefined FUN_142166410(void)

void FUN_142166410(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1420fffc0(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142166450 FUN_142166450 body=44 status=ok
// SIG undefined FUN_142166450(void)

void FUN_142166450(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1421003d0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142166480 FUN_142166480 body=43 status=ok
// SIG undefined FUN_142166480(void)

void FUN_142166480(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1421003f0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421664b0 execHandled body=107 status=ok
// SIG undefined execHandled(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UWidgetBlueprintLibrary::execHandled(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = Handled(local_d8);
  FUN_140439160(param_3,uVar1);
  FUN_140438c20(local_d8);
  return;
}



// FUNCTION 142166520 FUN_142166520 body=43 status=ok
// SIG undefined FUN_142166520(void)

void FUN_142166520(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142103e10();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142166550 FUN_142166550 body=43 status=ok
// SIG undefined FUN_142166550(void)

void FUN_142166550(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142103f00();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142166580 FUN_142166580 body=43 status=ok
// SIG undefined FUN_142166580(void)

void FUN_142166580(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142103f90();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421665b0 FUN_1421665b0 body=43 status=ok
// SIG undefined FUN_1421665b0(void)

void FUN_1421665b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142104030();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421665e0 FUN_1421665e0 body=187 status=ok
// SIG undefined FUN_1421665e0(void)

void FUN_1421665e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  uVar1 = FUN_1421040c0(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421666a0 FUN_1421666a0 body=143 status=ok
// SIG undefined FUN_1421666a0(void)

void FUN_1421666a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1421041d0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142166730 FUN_142166730 body=143 status=ok
// SIG undefined FUN_142166730(void)

void FUN_142166730(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1421042d0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421667e0 FUN_1421667e0 body=41 status=ok
// SIG undefined FUN_1421667e0(void)

void FUN_1421667e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1421059b0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142166810 FUN_142166810 body=47 status=ok
// SIG undefined FUN_142166810(void)

void FUN_142166810(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x290))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142166840 FUN_142166840 body=43 status=ok
// SIG undefined FUN_142166840(void)

void FUN_142166840(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1421068d0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142166870 execCaptureMouse body=401 status=ok
// SIG undefined execCaptureMouse(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UWidgetBlueprintLibrary::execCaptureMouse
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8 [2];
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
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_f4 = local_f4 & 0xffffff00;
  local_1a8[0] = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_188 = 0;
  local_180 = 0;
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
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0x20702;
  FReply::FReply(local_e8,local_1a8);
  FUN_140438c20(local_1a8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  local_1b8[0] = 0;
  puVar2 = local_e8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_1b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_1b8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142106ec0(local_1a8,puVar2,local_1b8[0]);
  FUN_140439160(param_3,uVar1);
  FUN_140438c20(local_1a8);
  FUN_140438c20(local_e8);
  return;
}



// FUNCTION 142166a10 FUN_142166a10 body=279 status=ok
// SIG undefined FUN_142166a10(void)

void FUN_142166a10(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res10;
  undefined **local_98 [8];
  longlong *local_58;
  longlong *local_20;
  
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
  uVar5 = FUN_142107050(local_98,local_res10);
  FUN_1406922e0(param_3,uVar5);
  local_98[0] = &PTR__scalar_deleting_destructor__143f489a8;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 142166b30 FUN_142166b30 body=422 status=ok
// SIG undefined FUN_142166b30(void)

void FUN_142166b30(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_98;
  undefined **local_90 [8];
  longlong *local_50;
  longlong *local_18;
  
  local_98 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
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
  uVar5 = FUN_142107140(local_90,local_98,local_res20[0],local_res10[0]);
  FUN_1406922e0(param_3,uVar5);
  local_90[0] = &PTR__scalar_deleting_destructor__143f489a8;
  if (local_18 != (longlong *)0x0) {
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
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 142166ce0 FUN_142166ce0 body=422 status=ok
// SIG undefined FUN_142166ce0(void)

void FUN_142166ce0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_98;
  undefined **local_90 [8];
  longlong *local_50;
  longlong *local_18;
  
  local_98 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
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
  uVar5 = FUN_142107340(local_90,local_98,local_res20[0],local_res10[0]);
  FUN_1406922e0(param_3,uVar5);
  local_90[0] = &PTR__scalar_deleting_destructor__143f489a8;
  if (local_18 != (longlong *)0x0) {
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
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 142166e90 execNoResourceBrush body=198 status=ok
// SIG undefined execNoResourceBrush(void)

void UWidgetBlueprintLibrary::execNoResourceBrush
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined **local_98 [8];
  longlong *local_58;
  longlong *local_20;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = NoResourceBrush(local_98);
  FUN_1406922e0(param_3,uVar5);
  local_98[0] = &PTR__scalar_deleting_destructor__143f489a8;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 142166f60 execReleaseMouseCapture body=325 status=ok
// SIG undefined execReleaseMouseCapture(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UWidgetBlueprintLibrary::execReleaseMouseCapture
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1c8 [32];
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
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_f4 = local_f4 & 0xffffff00;
  local_1a8[0] = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_188 = 0;
  local_180 = 0;
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
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0x20702;
  FReply::FReply(local_e8,local_1a8);
  FUN_140438c20(local_1a8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar2 = local_e8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = ReleaseMouseCapture(local_1a8,puVar2);
  FUN_140439160(param_3,uVar1);
  FUN_140438c20(local_1a8);
  FUN_140438c20(local_e8);
  return;
}



// FUNCTION 142167110 execSetAllNavigationRules body=192 status=ok
// SIG undefined execSetAllNavigationRules(void)

void UWidget::execSetAllNavigationRules(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetAllNavigationRules(param_1,local_res10[0],local_res20);
  return;
}



// FUNCTION 1421671d0 FUN_1421671d0 body=447 status=ok
// SIG undefined FUN_1421671d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1421671d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined ***pppuVar7;
  undefined8 local_res10;
  undefined **local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  byte local_28;
  
  local_28 = local_28 & 0xfc;
  local_a8 = &PTR__scalar_deleting_destructor__143f489a8;
  local_88 = _DAT_1464aa6c0;
  uStack_80 = _DAT_1464aa6c8;
  local_98 = 0;
  uStack_90 = 0;
  local_50 = (undefined4)DAT_1468b5d88;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  local_res10 = DAT_1468b5d88;
  uVar5 = local_res10;
  local_res10._4_4_ = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
  local_44 = local_res10._4_4_;
  local_4c = local_res10._4_4_;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_a0 = 0x42000000;
  local_9c = 0x42000000;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_40 = 0;
  local_3c = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_res10 = uVar5;
  local_48 = local_50;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_res10 = 0;
  pppuVar7 = &local_a8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar7 = *(undefined ****)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FSlateBrush::SetResourceObject(pppuVar7,local_res10);
  plVar6 = plStack_30;
  local_a8 = &PTR__scalar_deleting_destructor__143f489a8;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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
  plVar6 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_68)(local_68);
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



// FUNCTION 142167390 FUN_142167390 body=118 status=ok
// SIG undefined FUN_142167390(void)

void FUN_142167390(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  FUN_1421301d0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142167410 FUN_142167410 body=118 status=ok
// SIG undefined FUN_142167410(void)

void FUN_142167410(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  FUN_142130c10(param_1,local_res10[0]);
  return;
}



// FUNCTION 1421674b0 execSetHardwareCursor body=296 status=ok
// SIG undefined execSetHardwareCursor(void)

void UWidgetBlueprintLibrary::execSetHardwareCursor
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_28 [2];
  
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
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = SetHardwareCursor(local_res20,local_res10[0],local_res18,local_28[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421675e0 execSetInputMode_GameAndUI body=320 status=ok
// SIG undefined execSetInputMode_GameAndUI(void)

void UWidgetBlueprintLibrary::execSetInputMode_GameAndUI(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [2];
  int local_res20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_142132010(local_10,local_18,bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 142167720 FUN_142167720 body=305 status=ok
// SIG undefined FUN_142167720(void)

void FUN_142167720(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  int local_res20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142132010(local_10,local_18,local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 142167860 execSetInputMode_GameOnly body=112 status=ok
// SIG undefined execSetInputMode_GameOnly(void)

void UWidgetBlueprintLibrary::execSetInputMode_GameOnly(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  SetInputMode_GameOnly(local_res10[0]);
  return;
}



// FUNCTION 1421678d0 execSetBoolPropertyByName body=241 status=ok
// SIG undefined execSetBoolPropertyByName(void)

void UKismetSystemLibrary::execSetBoolPropertyByName(undefined8 param_1,longlong param_2)

{
  int local_res10 [4];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
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
  thunk_FUN_142132240(local_18[0],local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 1421679d0 FUN_1421679d0 body=239 status=ok
// SIG undefined FUN_1421679d0(void)

void FUN_1421679d0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
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
  FUN_142132240(local_18[0],local_res20,local_res10[0]);
  return;
}



// FUNCTION 142167ac0 FUN_142167ac0 body=134 status=ok
// SIG undefined FUN_142167ac0(void)

void FUN_142167ac0(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x280))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 142167b70 execSetMousePosition body=396 status=ok
// SIG undefined execSetMousePosition(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UWidgetBlueprintLibrary::execSetMousePosition
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8 [2];
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
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_f4 = local_f4 & 0xffffff00;
  local_1a8[0] = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_188 = 0;
  local_180 = 0;
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
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0x20702;
  FReply::FReply(local_e8,local_1a8);
  FUN_140438c20(local_1a8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar2 = local_e8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_1b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_1b8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = SetMousePosition(local_1a8,puVar2,local_1b8[0]);
  FUN_140439160(param_3,uVar1);
  FUN_140438c20(local_1a8);
  FUN_140438c20(local_e8);
  return;
}



// FUNCTION 142167d00 execSetNavigationRule body=257 status=ok
// SIG undefined execSetNavigationRule(void)

void UWidget::execSetNavigationRule(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined8 local_18 [2];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetNavigationRule(param_1,local_res20[0],local_res10[0],local_18[0]);
  return;
}



// FUNCTION 142167e10 execSetRenderAngle body=123 status=ok
// SIG undefined execSetRenderAngle(void)

void UWidget::execSetRenderAngle(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
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
  SetRenderAngle(param_1,local_res10[0]);
  return;
}



// FUNCTION 142167e90 FUN_142167e90 body=123 status=ok
// SIG undefined FUN_142167e90(void)

void FUN_142167e90(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
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
  FUN_1421344c0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142167f10 execSetRenderScale body=113 status=ok
// SIG undefined execSetRenderScale(void)

void UWidget::execSetRenderScale(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetRenderScale(param_1,local_res10[0]);
  return;
}



// FUNCTION 142167f90 execSetRenderShear body=113 status=ok
// SIG undefined execSetRenderShear(void)

void UWidget::execSetRenderShear(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetRenderShear(param_1,local_res10[0]);
  return;
}



// FUNCTION 142168010 execSetRenderTransform body=214 status=ok
// SIG undefined execSetRenderTransform(void)

void UWidget::execSetRenderTransform(undefined8 param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  uStack_40 = DAT_1464aa770;
  local_30 = 0;
  local_48 = (undefined4)DAT_1468b5d88;
  uStack_44 = DAT_1468b5d88._4_4_;
  uStack_3c = DAT_1464aa774;
  local_38 = (undefined4)DAT_1468b5d88;
  uStack_34 = DAT_1468b5d88._4_4_;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_18 = CONCAT44(uStack_34,local_38);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_30;
  SetRenderTransform(param_1,&local_28);
  return;
}



// FUNCTION 1421680f0 FUN_1421680f0 body=113 status=ok
// SIG undefined FUN_1421680f0(void)

void FUN_1421680f0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1421345b0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142168170 execSetRenderTranslation body=113 status=ok
// SIG undefined execSetRenderTranslation(void)

void UWidget::execSetRenderTranslation(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetRenderTranslation(param_1,local_res10[0]);
  return;
}



// FUNCTION 1421681f0 FUN_1421681f0 body=128 status=ok
// SIG undefined FUN_1421681f0(void)

void FUN_1421681f0(undefined8 param_1,longlong param_2)

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
  FUN_142136090(param_1,local_res10);
  return;
}



// FUNCTION 142168270 FUN_142168270 body=204 status=ok
// SIG undefined FUN_142168270(void)

void FUN_142168270(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar5 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142136480(param_1,puVar5);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 142168340 FUN_142168340 body=128 status=ok
// SIG undefined FUN_142168340(void)

void FUN_142168340(undefined8 param_1,longlong param_2)

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
  FUN_142136530(param_1,local_res10);
  return;
}



// FUNCTION 1421683c0 execSetActorScale3D body=133 status=ok
// SIG undefined execSetActorScale3D(void)

void AActor::execSetActorScale3D(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_1421368a0(param_1,&local_18);
  return;
}



// FUNCTION 142168450 execSetActorScale3D body=133 status=ok
// SIG undefined execSetActorScale3D(void)

void AActor::execSetActorScale3D(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_1421368e0(param_1,&local_18);
  return;
}



// FUNCTION 1421684e0 FUN_1421684e0 body=122 status=ok
// SIG undefined FUN_1421684e0(void)

void FUN_1421684e0(longlong *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x288))(param_1,local_res8[0]);
  return;
}



// FUNCTION 142168560 execSetWindowTitleBarCloseButtonActive body=114 status=ok
// SIG undefined execSetWindowTitleBarCloseButtonActive(void)

void UWidgetBlueprintLibrary::execSetWindowTitleBarCloseButtonActive
               (undefined8 param_1,longlong param_2)

{
  int local_res10 [6];
  
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
  SetWindowTitleBarCloseButtonActive(local_res10[0] != 0);
  return;
}



// FUNCTION 1421685e0 FUN_1421685e0 body=150 status=ok
// SIG undefined FUN_1421685e0(void)

void FUN_1421685e0(undefined8 param_1,longlong param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  local_14 = local_24;
  local_10 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142136c30(&local_18);
  return;
}



// FUNCTION 142168680 execSetWindowTitleBarState body=386 status=ok
// SIG undefined execSetWindowTitleBarState(void)

void UWidgetBlueprintLibrary::execSetWindowTitleBarState(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res10 [16];
  int local_res20 [2];
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar1 = local_res20[0] != 0;
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  bVar2 = local_28 != 0;
  local_24 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142136d30(local_20,local_res10[0],bVar1,bVar2,local_24 != 0);
  return;
}



// FUNCTION 142168810 FUN_142168810 body=144 status=ok
// SIG undefined FUN_142168810(void)

void FUN_142168810(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_142137a60(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421688a0 execUnhandled body=107 status=ok
// SIG undefined execUnhandled(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UWidgetBlueprintLibrary::execUnhandled(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = Unhandled(local_d8);
  FUN_140439160(param_3,uVar1);
  FUN_140438c20(local_d8);
  return;
}



// FUNCTION 142168910 FUN_142168910 body=325 status=ok
// SIG undefined FUN_142168910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142168910(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1c8 [32];
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
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_f4 = local_f4 & 0xffffff00;
  local_1a8[0] = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_188 = 0;
  local_180 = 0;
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
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0x20702;
  FReply::FReply(local_e8,local_1a8);
  FUN_140438c20(local_1a8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar2 = local_e8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142142120(local_1a8,puVar2);
  FUN_140439160(param_3,uVar1);
  FUN_140438c20(local_1a8);
  FUN_140438c20(local_e8);
  return;
}



// FUNCTION 142168a60 FUN_142168a60 body=53 status=ok
// SIG undefined FUN_142168a60(void)

void FUN_142168a60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144fd3670;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142168ab0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGDungeon::GetPrivateStaticClass(void)

{
  if (DAT_146aea970 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"WidgetComponent",&DAT_146aea970,FUN_14216a310,0x850,0x10000000,0,
                  L"Engine",&LAB_142169ed0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429bed90,&LAB_140447700,0);
  }
  return DAT_146aea970;
}



// FUNCTION 142168b60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWidgetSwitcher::GetPrivateStaticClass(void)

{
  if (DAT_146aeaaf8 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"WidgetSwitcher",&DAT_146aeaaf8,
                  StaticRegisterNativesUWidgetSwitcher,0x130,0x10000000,0,L"Engine",&LAB_142169f30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPanelWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146aeaaf8;
}



// FUNCTION 142168c10 FUN_142168c10 body=47 status=ok
// SIG undefined FUN_142168c10(void)

longlong FUN_142168c10(void)

{
  if (DAT_146aea968 == 0) {
    FUN_141786440(&DAT_146aea968,&PTR_GetPrivateStaticClass_144fd0d60);
  }
  return DAT_146aea968;
}



// FUNCTION 142168c40 FUN_142168c40 body=47 status=ok
// SIG undefined FUN_142168c40(void)

longlong FUN_142168c40(void)

{
  if (DAT_146aea908 == 0) {
    FUN_141786a30(&DAT_146aea908,&PTR_FUN_1465210f0);
  }
  return DAT_146aea908;
}



// FUNCTION 142168c70 FUN_142168c70 body=47 status=ok
// SIG undefined FUN_142168c70(void)

longlong FUN_142168c70(void)

{
  if (DAT_146aea910 == 0) {
    FUN_141786a30(&DAT_146aea910,&PTR_FUN_146521170);
  }
  return DAT_146aea910;
}



// FUNCTION 142168ca0 FUN_142168ca0 body=47 status=ok
// SIG undefined FUN_142168ca0(void)

longlong FUN_142168ca0(void)

{
  if (DAT_146aea918 == 0) {
    FUN_141786a30(&DAT_146aea918,&PTR_FUN_1465211f0);
  }
  return DAT_146aea918;
}



// FUNCTION 142168cd0 FUN_142168cd0 body=47 status=ok
// SIG undefined FUN_142168cd0(void)

longlong FUN_142168cd0(void)

{
  if (DAT_146aea920 == 0) {
    FUN_141786a30(&DAT_146aea920,&PTR_FUN_146521270);
  }
  return DAT_146aea920;
}



// FUNCTION 142168d00 FUN_142168d00 body=47 status=ok
// SIG undefined FUN_142168d00(void)

longlong FUN_142168d00(void)

{
  if (DAT_146aea928 == 0) {
    FUN_141786a30(&DAT_146aea928,&PTR_FUN_1465212f0);
  }
  return DAT_146aea928;
}



// FUNCTION 142168d30 FUN_142168d30 body=47 status=ok
// SIG undefined FUN_142168d30(void)

longlong FUN_142168d30(void)

{
  if (DAT_146aea930 == 0) {
    FUN_141786a30(&DAT_146aea930,&PTR_FUN_146521330);
  }
  return DAT_146aea930;
}



// FUNCTION 142168d60 FUN_142168d60 body=47 status=ok
// SIG undefined FUN_142168d60(void)

longlong FUN_142168d60(void)

{
  if (DAT_146aea938 == 0) {
    FUN_141786a30(&DAT_146aea938,&PTR_FUN_1465213b0);
  }
  return DAT_146aea938;
}



// FUNCTION 142168d90 FUN_142168d90 body=47 status=ok
// SIG undefined FUN_142168d90(void)

longlong FUN_142168d90(void)

{
  if (DAT_146aea940 == 0) {
    FUN_141786a30(&DAT_146aea940,&PTR_FUN_146521430);
  }
  return DAT_146aea940;
}



// FUNCTION 142168dc0 FUN_142168dc0 body=47 status=ok
// SIG undefined FUN_142168dc0(void)

longlong FUN_142168dc0(void)

{
  if (DAT_146aea948 == 0) {
    FUN_141786a30(&DAT_146aea948,&PTR_FUN_1465214c0);
  }
  return DAT_146aea948;
}



// FUNCTION 142168df0 FUN_142168df0 body=47 status=ok
// SIG undefined FUN_142168df0(void)

longlong FUN_142168df0(void)

{
  if (DAT_146aea950 == 0) {
    FUN_141786a30(&DAT_146aea950,&PTR_FUN_146521540);
  }
  return DAT_146aea950;
}



// FUNCTION 142168e20 FUN_142168e20 body=47 status=ok
// SIG undefined FUN_142168e20(void)

longlong FUN_142168e20(void)

{
  if (DAT_146aea958 == 0) {
    FUN_141786a30(&DAT_146aea958,&PTR_FUN_1465215c0);
  }
  return DAT_146aea958;
}



// FUNCTION 142168e50 FUN_142168e50 body=47 status=ok
// SIG undefined FUN_142168e50(void)

longlong FUN_142168e50(void)

{
  if (DAT_146aea960 == 0) {
    FUN_141786a30(&DAT_146aea960,&PTR_FUN_146521640);
  }
  return DAT_146aea960;
}



// FUNCTION 142168e80 FUN_142168e80 body=47 status=ok
// SIG undefined FUN_142168e80(void)

longlong FUN_142168e80(void)

{
  if (DAT_146aeaaf0 == 0) {
    FUN_141786440(&DAT_146aeaaf0,&PTR_GetPrivateStaticClass_144fd0860);
  }
  return DAT_146aeaaf0;
}



// FUNCTION 142168eb0 FUN_142168eb0 body=47 status=ok
// SIG undefined FUN_142168eb0(void)

longlong FUN_142168eb0(void)

{
  if (DAT_146aeaac0 == 0) {
    FUN_141786a30(&DAT_146aeaac0,&PTR_FUN_146524140);
  }
  return DAT_146aeaac0;
}



// FUNCTION 142168ee0 FUN_142168ee0 body=47 status=ok
// SIG undefined FUN_142168ee0(void)

longlong FUN_142168ee0(void)

{
  if (DAT_146aeaac8 == 0) {
    FUN_141786a30(&DAT_146aeaac8,&PTR_FUN_1465241c0);
  }
  return DAT_146aeaac8;
}



// FUNCTION 142168f10 FUN_142168f10 body=47 status=ok
// SIG undefined FUN_142168f10(void)

longlong FUN_142168f10(void)

{
  if (DAT_146aeaad0 == 0) {
    FUN_141786a30(&DAT_146aeaad0,&PTR_FUN_146524240);
  }
  return DAT_146aeaad0;
}



// FUNCTION 142168f40 FUN_142168f40 body=47 status=ok
// SIG undefined FUN_142168f40(void)

longlong FUN_142168f40(void)

{
  if (DAT_146aeaad8 == 0) {
    FUN_141786a30(&DAT_146aeaad8,&PTR_FUN_146524300);
  }
  return DAT_146aeaad8;
}



// FUNCTION 142168f70 FUN_142168f70 body=47 status=ok
// SIG undefined FUN_142168f70(void)

longlong FUN_142168f70(void)

{
  if (DAT_146aeaae0 == 0) {
    FUN_141786a30(&DAT_146aeaae0,&PTR_FUN_146524380);
  }
  return DAT_146aeaae0;
}



// FUNCTION 142168fa0 FUN_142168fa0 body=47 status=ok
// SIG undefined FUN_142168fa0(void)

longlong FUN_142168fa0(void)

{
  if (DAT_146aeaae8 == 0) {
    FUN_141786a30(&DAT_146aeaae8,&PTR_FUN_146524400);
  }
  return DAT_146aeaae8;
}



// FUNCTION 142168fe0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWidgetSwitcherSlot::GetPrivateStaticClass(void)

{
  if (DAT_146aeab20 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"WidgetSwitcherSlot",&DAT_146aeab20,
                  StaticRegisterNativesUWidgetSwitcherSlot,0x58,0x10000000,0,L"Engine",
                  &LAB_142169f50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPanelSlot::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146aeab20;
}



// FUNCTION 142169090 FUN_142169090 body=47 status=ok
// SIG undefined FUN_142169090(void)

longlong FUN_142169090(void)

{
  if (DAT_146aeab18 == 0) {
    FUN_141786440(&DAT_146aeab18,&PTR_GetPrivateStaticClass_144fd0fa0);
  }
  return DAT_146aeab18;
}



// FUNCTION 1421690c0 FUN_1421690c0 body=47 status=ok
// SIG undefined FUN_1421690c0(void)

longlong FUN_1421690c0(void)

{
  if (DAT_146aeab00 == 0) {
    FUN_141786a30(&DAT_146aeab00,&PTR_FUN_1465244e0);
  }
  return DAT_146aeab00;
}



// FUNCTION 1421690f0 FUN_1421690f0 body=47 status=ok
// SIG undefined FUN_1421690f0(void)

longlong FUN_1421690f0(void)

{
  if (DAT_146aeab08 == 0) {
    FUN_141786a30(&DAT_146aeab08,&PTR_FUN_146524560);
  }
  return DAT_146aeab08;
}



// FUNCTION 142169120 FUN_142169120 body=47 status=ok
// SIG undefined FUN_142169120(void)

longlong FUN_142169120(void)

{
  if (DAT_146aeab10 == 0) {
    FUN_141786a30(&DAT_146aeab10,&PTR_FUN_1465245e0);
  }
  return DAT_146aeab10;
}



// FUNCTION 142169160 FUN_142169160 body=53 status=ok
// SIG undefined FUN_142169160(void)

void FUN_142169160(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &PTR_FUN_144fd3820;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1421691b0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWidgetTree::GetPrivateStaticClass(void)

{
  if (DAT_146aeab40 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"WidgetTree",&DAT_146aeab40,FUN_140447710,0x30,0x10000000,0,
                  L"Engine",&LAB_142169f70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aeab40;
}



// FUNCTION 142169260 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AFGPoleHologram::GetPrivateStaticClass(void)

{
  if (DAT_146aeaa00 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"WidgetInteractionComponent",&DAT_146aeaa00,FUN_14216a340,0x4d0,
                  0x10000000,0,L"Engine",&LAB_142169ef0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_146aeaa00;
}



// FUNCTION 142169310 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWindowTitleBarArea::GetPrivateStaticClass(void)

{
  if (DAT_146aeab68 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"WindowTitleBarArea",&DAT_146aeab68,
                  StaticRegisterNativesUWindowTitleBarArea,0x138,0x10000000,0,L"Engine",
                  &LAB_142169f90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UContentWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146aeab68;
}



// FUNCTION 1421693c0 FUN_1421693c0 body=47 status=ok
// SIG undefined FUN_1421693c0(void)

longlong FUN_1421693c0(void)

{
  if (DAT_146aeab60 == 0) {
    FUN_141786440(&DAT_146aeab60,&PTR_GetPrivateStaticClass_144fd1790);
  }
  return DAT_146aeab60;
}



// FUNCTION 1421693f0 FUN_1421693f0 body=47 status=ok
// SIG undefined FUN_1421693f0(void)

longlong FUN_1421693f0(void)

{
  if (DAT_146aeab48 == 0) {
    FUN_141786a30(&DAT_146aeab48,&PTR_FUN_146524900);
  }
  return DAT_146aeab48;
}



// FUNCTION 142169420 FUN_142169420 body=47 status=ok
// SIG undefined FUN_142169420(void)

longlong FUN_142169420(void)

{
  if (DAT_146aeab50 == 0) {
    FUN_141786a30(&DAT_146aeab50,&PTR_FUN_146524980);
  }
  return DAT_146aeab50;
}



// FUNCTION 142169450 FUN_142169450 body=47 status=ok
// SIG undefined FUN_142169450(void)

longlong FUN_142169450(void)

{
  if (DAT_146aeab58 == 0) {
    FUN_141786a30(&DAT_146aeab58,&PTR_FUN_146524a00);
  }
  return DAT_146aeab58;
}



// FUNCTION 142169480 FUN_142169480 body=47 status=ok
// SIG undefined FUN_142169480(void)

longlong FUN_142169480(void)

{
  if (DAT_146aea9f8 == 0) {
    FUN_141786440(&DAT_146aea9f8,&PTR_GetPrivateStaticClass_144fd2200);
  }
  return DAT_146aea9f8;
}



// FUNCTION 1421694b0 FUN_1421694b0 body=47 status=ok
// SIG undefined FUN_1421694b0(void)

longlong FUN_1421694b0(void)

{
  if (DAT_146aea988 == 0) {
    FUN_141786a30(&DAT_146aea988,&PTR_FUN_146522250);
  }
  return DAT_146aea988;
}



// FUNCTION 1421694e0 FUN_1421694e0 body=47 status=ok
// SIG undefined FUN_1421694e0(void)

longlong FUN_1421694e0(void)

{
  if (DAT_146aea990 == 0) {
    FUN_141786a30(&DAT_146aea990,&PTR_FUN_1465222d0);
  }
  return DAT_146aea990;
}



// FUNCTION 142169510 FUN_142169510 body=47 status=ok
// SIG undefined FUN_142169510(void)

longlong FUN_142169510(void)

{
  if (DAT_146aea998 == 0) {
    FUN_141786a30(&DAT_146aea998,&PTR_FUN_146522350);
  }
  return DAT_146aea998;
}



// FUNCTION 142169540 FUN_142169540 body=47 status=ok
// SIG undefined FUN_142169540(void)

longlong FUN_142169540(void)

{
  if (DAT_146aea9a0 == 0) {
    FUN_141786a30(&DAT_146aea9a0,&PTR_FUN_1465223e0);
  }
  return DAT_146aea9a0;
}



// FUNCTION 142169570 FUN_142169570 body=47 status=ok
// SIG undefined FUN_142169570(void)

longlong FUN_142169570(void)

{
  if (DAT_146aea9a8 == 0) {
    FUN_141786a30(&DAT_146aea9a8,&PTR_FUN_146522470);
  }
  return DAT_146aea9a8;
}



// FUNCTION 1421695a0 FUN_1421695a0 body=47 status=ok
// SIG undefined FUN_1421695a0(void)

longlong FUN_1421695a0(void)

{
  if (DAT_146aea9b0 == 0) {
    FUN_141786a30(&DAT_146aea9b0,&PTR_FUN_146522500);
  }
  return DAT_146aea9b0;
}



// FUNCTION 1421695d0 FUN_1421695d0 body=47 status=ok
// SIG undefined FUN_1421695d0(void)

longlong FUN_1421695d0(void)

{
  if (DAT_146aea9b8 == 0) {
    FUN_141786a30(&DAT_146aea9b8,&PTR_FUN_1465225d0);
  }
  return DAT_146aea9b8;
}



// FUNCTION 142169600 FUN_142169600 body=47 status=ok
// SIG undefined FUN_142169600(void)

longlong FUN_142169600(void)

{
  if (DAT_146aea9c0 == 0) {
    FUN_141786a30(&DAT_146aea9c0,&PTR_FUN_1465226f0);
  }
  return DAT_146aea9c0;
}



// FUNCTION 142169630 FUN_142169630 body=47 status=ok
// SIG undefined FUN_142169630(void)

longlong FUN_142169630(void)

{
  if (DAT_146aea9c8 == 0) {
    FUN_141786a30(&DAT_146aea9c8,&PTR_FUN_146522770);
  }
  return DAT_146aea9c8;
}



// FUNCTION 142169660 FUN_142169660 body=47 status=ok
// SIG undefined FUN_142169660(void)

longlong FUN_142169660(void)

{
  if (DAT_146aea9d0 == 0) {
    FUN_141786a30(&DAT_146aea9d0,&PTR_FUN_146522840);
  }
  return DAT_146aea9d0;
}



// FUNCTION 142169690 FUN_142169690 body=47 status=ok
// SIG undefined FUN_142169690(void)

longlong FUN_142169690(void)

{
  if (DAT_146aea9d8 == 0) {
    FUN_141786a30(&DAT_146aea9d8,&PTR_FUN_1465228c0);
  }
  return DAT_146aea9d8;
}



// FUNCTION 1421696c0 FUN_1421696c0 body=47 status=ok
// SIG undefined FUN_1421696c0(void)

longlong FUN_1421696c0(void)

{
  if (DAT_146aea9e0 == 0) {
    FUN_141786a30(&DAT_146aea9e0,&PTR_FUN_146522940);
  }
  return DAT_146aea9e0;
}



// FUNCTION 1421696f0 FUN_1421696f0 body=47 status=ok
// SIG undefined FUN_1421696f0(void)

longlong FUN_1421696f0(void)

{
  if (DAT_146aea9e8 == 0) {
    FUN_141786a30(&DAT_146aea9e8,&PTR_FUN_146522a50);
  }
  return DAT_146aea9e8;
}



// FUNCTION 142169720 FUN_142169720 body=47 status=ok
// SIG undefined FUN_142169720(void)

longlong FUN_142169720(void)

{
  if (DAT_146aea9f0 == 0) {
    FUN_141786a30(&DAT_146aea9f0,&PTR_FUN_146522ad0);
  }
  return DAT_146aea9f0;
}



// FUNCTION 142169760 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWindowTitleBarAreaSlot::GetPrivateStaticClass(void)

{
  if (DAT_146aeab90 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"WindowTitleBarAreaSlot",&DAT_146aeab90,
                  StaticRegisterNativesUWindowTitleBarAreaSlot,0x60,0x10000000,0,L"Engine",
                  &LAB_142169fb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPanelSlot::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146aeab90;
}



// FUNCTION 142169810 FUN_142169810 body=47 status=ok
// SIG undefined FUN_142169810(void)

longlong FUN_142169810(void)

{
  if (DAT_146aeab88 == 0) {
    FUN_141786440(&DAT_146aeab88,&PTR_GetPrivateStaticClass_144fd1da0);
  }
  return DAT_146aeab88;
}



// FUNCTION 142169840 FUN_142169840 body=47 status=ok
// SIG undefined FUN_142169840(void)

longlong FUN_142169840(void)

{
  if (DAT_146aeab70 == 0) {
    FUN_141786a30(&DAT_146aeab70,&PTR_FUN_146524b40);
  }
  return DAT_146aeab70;
}



// FUNCTION 142169870 FUN_142169870 body=47 status=ok
// SIG undefined FUN_142169870(void)

longlong FUN_142169870(void)

{
  if (DAT_146aeab78 == 0) {
    FUN_141786a30(&DAT_146aeab78,&PTR_FUN_146524bc0);
  }
  return DAT_146aeab78;
}



// FUNCTION 1421698a0 FUN_1421698a0 body=47 status=ok
// SIG undefined FUN_1421698a0(void)

longlong FUN_1421698a0(void)

{
  if (DAT_146aeab80 == 0) {
    FUN_141786a30(&DAT_146aeab80,&PTR_FUN_146524c40);
  }
  return DAT_146aeab80;
}



// FUNCTION 1421698f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWidgetLayoutLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146aeaa90 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"WidgetLayoutLibrary",&DAT_146aeaa90,
                  StaticRegisterNativesUWidgetLayoutLibrary,0x28,0x10000000,0,L"Engine",
                  &LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146aeaa90;
}



// FUNCTION 1421699a0 FUN_1421699a0 body=47 status=ok
// SIG undefined FUN_1421699a0(void)

longlong FUN_1421699a0(void)

{
  if (DAT_146aeaa88 == 0) {
    FUN_141786440(&DAT_146aeaa88,&PTR_GetPrivateStaticClass_144fd2dc0);
  }
  return DAT_146aeaa88;
}



// FUNCTION 1421699d0 FUN_1421699d0 body=47 status=ok
// SIG undefined FUN_1421699d0(void)

longlong FUN_1421699d0(void)

{
  if (DAT_146aeaa08 == 0) {
    FUN_141786a30(&DAT_146aeaa08,&PTR_FUN_146523040);
  }
  return DAT_146aeaa08;
}



// FUNCTION 142169a00 FUN_142169a00 body=47 status=ok
// SIG undefined FUN_142169a00(void)

longlong FUN_142169a00(void)

{
  if (DAT_146aeaa10 == 0) {
    FUN_141786a30(&DAT_146aeaa10,&PTR_FUN_146523100);
  }
  return DAT_146aeaa10;
}



// FUNCTION 142169a30 FUN_142169a30 body=47 status=ok
// SIG undefined FUN_142169a30(void)

longlong FUN_142169a30(void)

{
  if (DAT_146aeaa18 == 0) {
    FUN_141786a30(&DAT_146aeaa18,&PTR_FUN_146523240);
  }
  return DAT_146aeaa18;
}



// FUNCTION 142169a60 FUN_142169a60 body=47 status=ok
// SIG undefined FUN_142169a60(void)

longlong FUN_142169a60(void)

{
  if (DAT_146aeaa20 == 0) {
    FUN_141786a30(&DAT_146aeaa20,&PTR_FUN_146523300);
  }
  return DAT_146aeaa20;
}



// FUNCTION 142169a90 FUN_142169a90 body=47 status=ok
// SIG undefined FUN_142169a90(void)

longlong FUN_142169a90(void)

{
  if (DAT_146aeaa28 == 0) {
    FUN_141786a30(&DAT_146aeaa28,&PTR_FUN_1465233c0);
  }
  return DAT_146aeaa28;
}



// FUNCTION 142169ac0 FUN_142169ac0 body=47 status=ok
// SIG undefined FUN_142169ac0(void)

longlong FUN_142169ac0(void)

{
  if (DAT_146aeaa30 == 0) {
    FUN_141786a30(&DAT_146aeaa30,&PTR_FUN_146523480);
  }
  return DAT_146aeaa30;
}



// FUNCTION 142169af0 FUN_142169af0 body=47 status=ok
// SIG undefined FUN_142169af0(void)

longlong FUN_142169af0(void)

{
  if (DAT_146aeaa38 == 0) {
    FUN_141786a30(&DAT_146aeaa38,&PTR_FUN_146523540);
  }
  return DAT_146aeaa38;
}



// FUNCTION 142169b20 FUN_142169b20 body=47 status=ok
// SIG undefined FUN_142169b20(void)

longlong FUN_142169b20(void)

{
  if (DAT_146aeaa40 == 0) {
    FUN_141786a30(&DAT_146aeaa40,&PTR_FUN_146523690);
  }
  return DAT_146aeaa40;
}



// FUNCTION 142169b50 FUN_142169b50 body=47 status=ok
// SIG undefined FUN_142169b50(void)

longlong FUN_142169b50(void)

{
  if (DAT_146aeaa48 == 0) {
    FUN_141786a30(&DAT_146aeaa48,&PTR_FUN_146523710);
  }
  return DAT_146aeaa48;
}



// FUNCTION 142169b80 FUN_142169b80 body=47 status=ok
// SIG undefined FUN_142169b80(void)

longlong FUN_142169b80(void)

{
  if (DAT_146aeaa50 == 0) {
    FUN_141786a30(&DAT_146aeaa50,&PTR_FUN_1465237d0);
  }
  return DAT_146aeaa50;
}



// FUNCTION 142169bb0 FUN_142169bb0 body=47 status=ok
// SIG undefined FUN_142169bb0(void)

longlong FUN_142169bb0(void)

{
  if (DAT_146aeaa58 == 0) {
    FUN_141786a30(&DAT_146aeaa58,&PTR_FUN_146523890);
  }
  return DAT_146aeaa58;
}



// FUNCTION 142169be0 FUN_142169be0 body=47 status=ok
// SIG undefined FUN_142169be0(void)

longlong FUN_142169be0(void)

{
  if (DAT_146aeaa60 == 0) {
    FUN_141786a30(&DAT_146aeaa60,&PTR_FUN_146523950);
  }
  return DAT_146aeaa60;
}



// FUNCTION 142169c10 FUN_142169c10 body=47 status=ok
// SIG undefined FUN_142169c10(void)

longlong FUN_142169c10(void)

{
  if (DAT_146aeaa68 == 0) {
    FUN_141786a30(&DAT_146aeaa68,&PTR_FUN_146523a10);
  }
  return DAT_146aeaa68;
}



// FUNCTION 142169c40 FUN_142169c40 body=47 status=ok
// SIG undefined FUN_142169c40(void)

longlong FUN_142169c40(void)

{
  if (DAT_146aeaa70 == 0) {
    FUN_141786a30(&DAT_146aeaa70,&PTR_FUN_146523ad0);
  }
  return DAT_146aeaa70;
}



// FUNCTION 142169c70 FUN_142169c70 body=47 status=ok
// SIG undefined FUN_142169c70(void)

longlong FUN_142169c70(void)

{
  if (DAT_146aeaa78 == 0) {
    FUN_141786a30(&DAT_146aeaa78,&PTR_FUN_146523b90);
  }
  return DAT_146aeaa78;
}



// FUNCTION 142169ca0 FUN_142169ca0 body=47 status=ok
// SIG undefined FUN_142169ca0(void)

longlong FUN_142169ca0(void)

{
  if (DAT_146aeaa80 == 0) {
    FUN_141786a30(&DAT_146aeaa80,&PTR_FUN_146523c50);
  }
  return DAT_146aeaa80;
}



// FUNCTION 142169cd0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWrapBox::GetPrivateStaticClass(void)

{
  if (DAT_146aeabb0 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"WrapBox",&DAT_146aeabb0,StaticRegisterNativesUWrapBox,0x138,
                  0x10000000,0,L"Engine",&LAB_142169fd0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPanelWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146aeabb0;
}



// FUNCTION 142169d80 FUN_142169d80 body=47 status=ok
// SIG undefined FUN_142169d80(void)

longlong FUN_142169d80(void)

{
  if (DAT_146aeaba8 == 0) {
    FUN_141786440(&DAT_146aeaba8,&PTR_GetPrivateStaticClass_144fd3030);
  }
  return DAT_146aeaba8;
}



// FUNCTION 142169db0 FUN_142169db0 body=47 status=ok
// SIG undefined FUN_142169db0(void)

longlong FUN_142169db0(void)

{
  if (DAT_146aeab98 == 0) {
    FUN_141786a30(&DAT_146aeab98,&PTR_FUN_146524df0);
  }
  return DAT_146aeab98;
}



// FUNCTION 142169de0 FUN_142169de0 body=47 status=ok
// SIG undefined FUN_142169de0(void)

longlong FUN_142169de0(void)

{
  if (DAT_146aeaba0 == 0) {
    FUN_141786a30(&DAT_146aeaba0,&PTR_FUN_146524e70);
  }
  return DAT_146aeaba0;
}



// FUNCTION 142169e30 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWidgetNavigation::GetPrivateStaticClass(void)

{
  if (DAT_146aeaab8 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"WidgetNavigation",&DAT_146aeaab8,FUN_140447710,0x118,0x10000000,0
                  ,L"Engine",&LAB_142169f10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aeaab8;
}



// FUNCTION 142169ff0 Construct body=75 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FWidgetNavigationData>::Construct
               (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  FWeakObjectPtr::operator=(param_2 + 3,0);
  param_2[4] = 0;
  return;
}



// FUNCTION 14216a100 EWidgetBlendMode_StaticEnum body=55 status=ok
// SIG undefined EWidgetBlendMode_StaticEnum(void)

void EWidgetBlendMode_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146aea7c8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_UMG();
    DAT_146aea7c8 = GetStaticEnum(FUN_14216a640,uVar1,L"EWidgetBlendMode");
  }
  return;
}



// FUNCTION 14216a140 EWidgetGeometryMode_StaticEnum body=55 status=ok
// SIG undefined EWidgetGeometryMode_StaticEnum(void)

void EWidgetGeometryMode_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146aea7c0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_UMG();
    DAT_146aea7c0 = GetStaticEnum(FUN_14216a670,uVar1,L"EWidgetGeometryMode");
  }
  return;
}



// FUNCTION 14216a180 EWidgetInteractionSource_StaticEnum body=55 status=ok
// SIG undefined EWidgetInteractionSource_StaticEnum(void)

void EWidgetInteractionSource_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146aea7e0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_UMG();
    DAT_146aea7e0 = GetStaticEnum(FUN_14216a6a0,uVar1,L"EWidgetInteractionSource");
  }
  return;
}



// FUNCTION 14216a1c0 EWidgetSpace_StaticEnum body=55 status=ok
// SIG undefined EWidgetSpace_StaticEnum(void)

void EWidgetSpace_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146aea7d8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_UMG();
    DAT_146aea7d8 = GetStaticEnum(FUN_14216a6d0,uVar1,L"EWidgetSpace");
  }
  return;
}



// FUNCTION 14216a200 EWidgetTimingPolicy_StaticEnum body=55 status=ok
// SIG undefined EWidgetTimingPolicy_StaticEnum(void)

void EWidgetTimingPolicy_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146aea7d0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_UMG();
    DAT_146aea7d0 = GetStaticEnum(FUN_14216a700,uVar1,L"EWidgetTimingPolicy");
  }
  return;
}



// FUNCTION 14216a240 Get_Z_Construct_UScriptStruct_FWidgetNavigationData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FWidgetNavigationData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FWidgetNavigationData_CRC(void)

{
  return 0x74612685;
}



// FUNCTION 14216a250 Get_Z_Construct_UScriptStruct_FWidgetTransform_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FWidgetTransform_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FWidgetTransform_CRC(void)

{
  return 0x8a6de213;
}



// FUNCTION 14216a310 FUN_14216a310 body=34 status=ok
// SIG undefined FUN_14216a310(void)

void FUN_14216a310(void)

{
  undefined8 uVar1;
  
  uVar1 = AUGDungeon::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetDrawSize_144fd3390,0xc);
  return;
}



// FUNCTION 14216a340 FUN_14216a340 body=34 status=ok
// SIG undefined FUN_14216a340(void)

void FUN_14216a340(void)

{
  undefined8 uVar1;
  
  uVar1 = AFGPoleHologram::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Get2DHitLocation_144fd3490,0xe);
  return;
}



// FUNCTION 14216a370 StaticRegisterNativesUWidgetLayoutLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUWidgetLayoutLibrary(void)

void UWidgetLayoutLibrary::StaticRegisterNativesUWidgetLayoutLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetMousePositionOnPlatform_144fd3570,0x10);
  return;
}



// FUNCTION 14216a3a0 StaticRegisterNativesUWidgetSwitcher body=34 status=ok
// SIG undefined StaticRegisterNativesUWidgetSwitcher(void)

void UWidgetSwitcher::StaticRegisterNativesUWidgetSwitcher(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetActiveWidget_144fd3790,6);
  return;
}



// FUNCTION 14216a3d0 StaticRegisterNativesUWidgetSwitcherSlot body=34 status=ok
// SIG undefined StaticRegisterNativesUWidgetSwitcherSlot(void)

void UWidgetSwitcherSlot::StaticRegisterNativesUWidgetSwitcherSlot(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetHorizontalAlignment_144fd37f0,3);
  return;
}



// FUNCTION 14216a400 StaticRegisterNativesUWindowTitleBarArea body=34 status=ok
// SIG undefined StaticRegisterNativesUWindowTitleBarArea(void)

void UWindowTitleBarArea::StaticRegisterNativesUWindowTitleBarArea(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetHorizontalAlignment_144fd3938,3);
  return;
}



// FUNCTION 14216a430 StaticRegisterNativesUWindowTitleBarAreaSlot body=34 status=ok
// SIG undefined StaticRegisterNativesUWindowTitleBarAreaSlot(void)

void UWindowTitleBarAreaSlot::StaticRegisterNativesUWindowTitleBarAreaSlot(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetHorizontalAlignment_144fd3968,3);
  return;
}



// FUNCTION 14216a460 StaticRegisterNativesUWrapBox body=34 status=ok
// SIG undefined StaticRegisterNativesUWrapBox(void)

void UWrapBox::StaticRegisterNativesUWrapBox(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddChildWrapBox_144fd3998,2);
  return;
}



// FUNCTION 14216a490 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FWidgetNavigationData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146aeaaa0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FWidgetNavigationData_CRC();
    uVar2 = Z_Construct_UPackage__Script_UMG();
    DAT_146aeaaa0 = GetStaticStruct(FUN_14216a730,uVar2,L"WidgetNavigationData",0x28,uVar1);
  }
  return;
}



// FUNCTION 14216a4f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FWidgetTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146aeab28 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FWidgetTransform_CRC();
    uVar2 = Z_Construct_UPackage__Script_UMG();
    DAT_146aeab28 = GetStaticStruct(FUN_14216a760,uVar2,L"WidgetTransform",0x1c,uVar1);
  }
  return;
}



// FUNCTION 14216a550 FUN_14216a550 body=47 status=ok
// SIG undefined FUN_14216a550(void)

longlong FUN_14216a550(void)

{
  if (DAT_146aeaab0 == 0) {
    FUN_141786440(&DAT_146aeaab0,&PTR_GetPrivateStaticClass_144fcffc0);
  }
  return DAT_146aeaab0;
}



// FUNCTION 14216a580 FUN_14216a580 body=47 status=ok
// SIG undefined FUN_14216a580(void)

longlong FUN_14216a580(void)

{
  if (DAT_146aeab38 == 0) {
    FUN_141786440(&DAT_146aeab38,&PTR_GetPrivateStaticClass_144fd14b0);
  }
  return DAT_146aeab38;
}



// FUNCTION 14216a5b0 FUN_14216a5b0 body=47 status=ok
// SIG undefined FUN_14216a5b0(void)

longlong FUN_14216a5b0(void)

{
  if (DAT_146aeaa98 == 0) {
    FUN_141786a30(&DAT_146aeaa98,&PTR_Z_Construct_UPackage__Script_UMG_146523d80);
  }
  return DAT_146aeaa98;
}



// FUNCTION 14216a5e0 FUN_14216a5e0 body=47 status=ok
// SIG undefined FUN_14216a5e0(void)

longlong FUN_14216a5e0(void)

{
  if (DAT_146aea978 == 0) {
    FUN_141786a30(&DAT_146aea978,&PTR_Z_Construct_UPackage__Script_UMG_1465221d0);
  }
  return DAT_146aea978;
}



// FUNCTION 14216a610 FUN_14216a610 body=47 status=ok
// SIG undefined FUN_14216a610(void)

longlong FUN_14216a610(void)

{
  if (DAT_146aea8e0 == 0) {
    FUN_141786a30(&DAT_146aea8e0,&PTR_Z_Construct_UPackage__Script_UMG_146521070);
  }
  return DAT_146aea8e0;
}



// FUNCTION 14216a640 FUN_14216a640 body=47 status=ok
// SIG undefined FUN_14216a640(void)

longlong FUN_14216a640(void)

{
  if (DAT_146aea8f0 == 0) {
    FUN_1417866a0(&DAT_146aea8f0,&PTR_Z_Construct_UPackage__Script_UMG_146524ff0);
  }
  return DAT_146aea8f0;
}



// FUNCTION 14216a670 FUN_14216a670 body=47 status=ok
// SIG undefined FUN_14216a670(void)

longlong FUN_14216a670(void)

{
  if (DAT_146aea8e8 == 0) {
    FUN_1417866a0(&DAT_146aea8e8,&PTR_Z_Construct_UPackage__Script_UMG_146524fa0);
  }
  return DAT_146aea8e8;
}



// FUNCTION 14216a6a0 FUN_14216a6a0 body=47 status=ok
// SIG undefined FUN_14216a6a0(void)

longlong FUN_14216a6a0(void)

{
  if (DAT_146aea980 == 0) {
    FUN_1417866a0(&DAT_146aea980,&PTR_Z_Construct_UPackage__Script_UMG_1465250e0);
  }
  return DAT_146aea980;
}



// FUNCTION 14216a6d0 FUN_14216a6d0 body=47 status=ok
// SIG undefined FUN_14216a6d0(void)

longlong FUN_14216a6d0(void)

{
  if (DAT_146aea900 == 0) {
    FUN_1417866a0(&DAT_146aea900,&PTR_Z_Construct_UPackage__Script_UMG_146525090);
  }
  return DAT_146aea900;
}



// FUNCTION 14216a700 FUN_14216a700 body=47 status=ok
// SIG undefined FUN_14216a700(void)

longlong FUN_14216a700(void)

{
  if (DAT_146aea8f8 == 0) {
    FUN_1417866a0(&DAT_146aea8f8,&PTR_Z_Construct_UPackage__Script_UMG_146525040);
  }
  return DAT_146aea8f8;
}



// FUNCTION 14216a730 FUN_14216a730 body=47 status=ok
// SIG undefined FUN_14216a730(void)

longlong FUN_14216a730(void)

{
  if (DAT_146aeaaa8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146aeaaa8,&PTR_Z_Construct_UPackage__Script_UMG_146523f00);
  }
  return DAT_146aeaaa8;
}



// FUNCTION 14216a760 FUN_14216a760 body=47 status=ok
// SIG undefined FUN_14216a760(void)

longlong FUN_14216a760(void)

{
  if (DAT_146aeab30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146aeab30,&PTR_Z_Construct_UPackage__Script_UMG_146524800);
  }
  return DAT_146aeab30;
}



// FUNCTION 14216a790 execAddChildWrapBox body=144 status=ok
// SIG undefined execAddChildWrapBox(void)

void UWrapBox::execAddChildWrapBox(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = AddChildWrapBox(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216a820 FUN_14216a820 body=54 status=ok
// SIG undefined FUN_14216a820(void)

void FUN_14216a820(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)SWindow::GetInitialDesiredPositionInScreen(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 14216a860 FUN_14216a860 body=44 status=ok
// SIG undefined FUN_14216a860(void)

void FUN_14216a860(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420f8840();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216a890 FUN_14216a890 body=43 status=ok
// SIG undefined FUN_14216a890(void)

void FUN_14216a890(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420f88e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216a8c0 FUN_14216a8c0 body=54 status=ok
// SIG undefined FUN_14216a8c0(void)

void FUN_14216a8c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1420fa9b0(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 14216a900 FUN_14216a900 body=44 status=ok
// SIG undefined FUN_14216a900(void)

void FUN_14216a900(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420fc090();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216a930 execGetInventoryEquipments body=51 status=ok
// SIG undefined execGetInventoryEquipments(void)

void AMWInventoryModel::execGetInventoryEquipments
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetInventoryEquipments();
  FUN_140729f20(param_3,uVar1);
  return;
}



// FUNCTION 14216a970 FUN_14216a970 body=44 status=ok
// SIG undefined FUN_14216a970(void)

void FUN_14216a970(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420fcb40();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216a9a0 execGetMousePositionOnPlatform body=52 status=ok
// SIG undefined execGetMousePositionOnPlatform(void)

void UWidgetLayoutLibrary::execGetMousePositionOnPlatform
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetMousePositionOnPlatform(local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 14216a9e0 FUN_14216a9e0 body=138 status=ok
// SIG undefined FUN_14216a9e0(void)

void FUN_14216a9e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  
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
  puVar1 = (undefined8 *)FUN_1420fcda0(local_res18,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 14216aa70 execGetMousePositionScaledByDPI body=281 status=ok
// SIG undefined execGetMousePositionScaledByDPI(void)

void UWidgetLayoutLibrary::execGetMousePositionScaledByDPI
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_res18[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_res10;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  puVar3 = local_res18;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetMousePositionScaledByDPI(local_res20,puVar2,puVar3);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216ab90 FUN_14216ab90 body=43 status=ok
// SIG undefined FUN_14216ab90(void)

void FUN_14216ab90(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420fd0e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216abc0 FUN_14216abc0 body=44 status=ok
// SIG undefined FUN_14216abc0(void)

void FUN_14216abc0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420fd490();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216abf0 FUN_14216abf0 body=171 status=ok
// SIG undefined FUN_14216abf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14216abf0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420fd760(local_50,local_58);
  FGeometry::operator=(param_3,uVar1);
  return;
}



// FUNCTION 14216aca0 FUN_14216aca0 body=44 status=ok
// SIG undefined FUN_14216aca0(void)

void FUN_14216aca0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420fdfe0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216acd0 execBPF_GetTargetDB body=44 status=ok
// SIG undefined execBPF_GetTargetDB(void)

void UAttackComponent::execBPF_GetTargetDB(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = BPF_GetTargetDB();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216ad00 FUN_14216ad00 body=129 status=ok
// SIG undefined FUN_14216ad00(void)

void FUN_14216ad00(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_1420ffff0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216ad90 FUN_14216ad90 body=138 status=ok
// SIG undefined FUN_14216ad90(void)

void FUN_14216ad90(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  
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
  puVar1 = (undefined8 *)FUN_142100130(local_res18,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 14216ae20 FUN_14216ae20 body=171 status=ok
// SIG undefined FUN_14216ae20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14216ae20(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142100270(local_50,local_58);
  FGeometry::operator=(param_3,uVar1);
  return;
}



// FUNCTION 14216aed0 execGetWidgetAtIndex body=142 status=ok
// SIG undefined execGetWidgetAtIndex(void)

void UWidgetSwitcher::execGetWidgetAtIndex(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_res10 [2];
  
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
  uVar1 = GetWidgetAtIndex(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216af60 execIsClosedLoop body=43 status=ok
// SIG undefined execIsClosedLoop(void)

void USplineComponent::execIsClosedLoop(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = IsClosedLoop();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216af90 execIsSearchingForJoin body=43 status=ok
// SIG undefined execIsSearchingForJoin(void)

void ALOTF2WorldGameSession::execIsSearchingForJoin
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = IsSearchingForJoin();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216afc0 FUN_14216afc0 body=43 status=ok
// SIG undefined FUN_14216afc0(void)

void FUN_14216afc0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = SDockTab::ShouldAutosize();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216aff0 FUN_14216aff0 body=254 status=ok
// SIG undefined FUN_14216aff0(void)

void FUN_14216aff0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_38 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_20 = local_38;
  local_18 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  uVar6 = (**(code **)(*param_1 + 0x568))(param_1,&local_20);
  plVar5 = plStack_28;
  *param_3 = uVar6;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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
  return;
}



// FUNCTION 14216b0f0 FUN_14216b0f0 body=319 status=ok
// SIG undefined FUN_14216b0f0(void)

void FUN_14216b0f0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  int local_res8 [2];
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_38 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_20 = local_38;
  local_18 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  uVar6 = (**(code **)(*param_1 + 0x558))(param_1,&local_20,local_res8[0] != 0);
  plVar5 = plStack_28;
  *param_3 = uVar6;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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
  return;
}



// FUNCTION 14216b230 FUN_14216b230 body=236 status=ok
// SIG undefined FUN_14216b230(void)

void FUN_14216b230(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_38 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_20 = local_38;
  local_18 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x548))(param_1,&local_20);
  plVar5 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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
  return;
}



// FUNCTION 14216b320 execProjectWorldLocationToWidgetPosition body=278 status=ok
// SIG undefined execProjectWorldLocationToWidgetPosition(void)

void UWidgetLayoutLibrary::execProjectWorldLocationToWidgetPosition
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_18 = local_28;
  puVar2 = local_res18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  uVar1 = ProjectWorldLocationToWidgetPosition(local_res10,&local_18,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216b440 FUN_14216b440 body=254 status=ok
// SIG undefined FUN_14216b440(void)

void FUN_14216b440(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_38 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_20 = local_38;
  local_18 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  uVar6 = (**(code **)(*param_1 + 0x560))(param_1,&local_20);
  plVar5 = plStack_28;
  *param_3 = uVar6;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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
  return;
}



// FUNCTION 14216b540 FUN_14216b540 body=236 status=ok
// SIG undefined FUN_14216b540(void)

void FUN_14216b540(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_38 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_20 = local_38;
  local_18 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x550))(param_1,&local_20);
  plVar5 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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
  return;
}



// FUNCTION 14216b630 execRemoveAllWidgets body=112 status=ok
// SIG undefined execRemoveAllWidgets(void)

void UWidgetLayoutLibrary::execRemoveAllWidgets(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  RemoveAllWidgets(local_res10[0]);
  return;
}



// FUNCTION 14216b6c0 FUN_14216b6c0 body=127 status=ok
// SIG undefined FUN_14216b6c0(void)

void FUN_14216b6c0(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x578))(param_1,local_res8[0]);
  return;
}



// FUNCTION 14216b740 FUN_14216b740 body=314 status=ok
// SIG undefined FUN_14216b740(void)

void FUN_14216b740(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  longlong lVar2;
  bool bVar3;
  int local_res8 [2];
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  _Src = local_38;
  bVar3 = local_res8[0] != 0;
  local_28 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_30;
  local_20 = (int)local_30;
  if ((int)local_30 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_30 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar2 * 2);
  }
  uVar1 = (**(code **)(*param_1 + 0x570))(param_1,&local_28,bVar3);
  *param_3 = uVar1;
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14216b880 FUN_14216b880 body=130 status=ok
// SIG undefined FUN_14216b880(void)

void FUN_14216b880(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x2e8))(param_1,local_res8[0]);
  return;
}



// FUNCTION 14216b910 FUN_14216b910 body=124 status=ok
// SIG undefined FUN_14216b910(void)

void FUN_14216b910(undefined8 param_1,longlong param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  uStack_14 = uStack_24;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14212f690(param_1,&local_18);
  return;
}



// FUNCTION 14216b990 FUN_14216b990 body=178 status=ok
// SIG undefined FUN_14216b990(void)

void FUN_14216b990(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142130ce0(param_1,puVar1);
  return;
}



// FUNCTION 14216ba50 FUN_14216ba50 body=113 status=ok
// SIG undefined FUN_14216ba50(void)

void FUN_14216ba50(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142130d70(param_1,local_res10[0]);
  return;
}



// FUNCTION 14216bad0 execSetHorizontalAlignment body=118 status=ok
// SIG undefined execSetHorizontalAlignment(void)

void UWidgetSwitcherSlot::execSetHorizontalAlignment(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  SetHorizontalAlignment(param_1,local_res10[0]);
  return;
}



// FUNCTION 14216bb50 FUN_14216bb50 body=118 status=ok
// SIG undefined FUN_14216bb50(void)

void FUN_14216bb50(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  FUN_142131ec0(param_1,local_res10[0]);
  return;
}



// FUNCTION 14216bbd0 FUN_14216bbd0 body=118 status=ok
// SIG undefined FUN_14216bbd0(void)

void FUN_14216bbd0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  FUN_142131ee0(param_1,local_res10[0]);
  return;
}



// FUNCTION 14216bc50 FUN_14216bc50 body=113 status=ok
// SIG undefined FUN_14216bc50(void)

void FUN_14216bc50(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142131f80(param_1,local_res10[0]);
  return;
}



// FUNCTION 14216bcd0 FUN_14216bcd0 body=130 status=ok
// SIG undefined FUN_14216bcd0(void)

void FUN_14216bcd0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
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
  FUN_142132cf0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14216bd60 FUN_14216bd60 body=128 status=ok
// SIG undefined FUN_14216bd60(void)

void FUN_14216bd60(undefined8 param_1,longlong param_2)

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
  FUN_142133be0(param_1,local_res10);
  return;
}



// FUNCTION 14216bde0 execSetPadding body=131 status=ok
// SIG undefined execSetPadding(void)

void UWidgetSwitcherSlot::execSetPadding(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetPadding(param_1,&local_18);
  return;
}



// FUNCTION 14216be70 execSetPadding body=131 status=ok
// SIG undefined execSetPadding(void)

void UWindowTitleBarArea::execSetPadding(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetPadding(param_1,&local_18);
  return;
}



// FUNCTION 14216bf00 execSetPadding body=131 status=ok
// SIG undefined execSetPadding(void)

void UWindowTitleBarAreaSlot::execSetPadding(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetPadding(param_1,&local_18);
  return;
}



// FUNCTION 14216bf90 FUN_14216bf90 body=124 status=ok
// SIG undefined FUN_14216bf90(void)

void FUN_14216bf90(undefined8 param_1,longlong param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  uStack_14 = uStack_24;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142136040(param_1,&local_18);
  return;
}



// FUNCTION 14216c010 execSetVerticalAlignment body=118 status=ok
// SIG undefined execSetVerticalAlignment(void)

void UWidgetSwitcherSlot::execSetVerticalAlignment(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  SetVerticalAlignment(param_1,local_res10[0]);
  return;
}



// FUNCTION 14216c090 FUN_14216c090 body=118 status=ok
// SIG undefined FUN_14216c090(void)

void FUN_14216c090(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  FUN_142136850(param_1,local_res10[0]);
  return;
}



// FUNCTION 14216c110 FUN_14216c110 body=118 status=ok
// SIG undefined FUN_14216c110(void)

void FUN_14216c110(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  FUN_142136870(param_1,local_res10[0]);
  return;
}



// FUNCTION 14216c190 execClientGotoState body=132 status=ok
// SIG undefined execClientGotoState(void)

void APlayerController::execClientGotoState(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x950))(param_1,local_res8);
  return;
}



// FUNCTION 14216c220 execSlotAsBorderSlot body=128 status=ok
// SIG undefined execSlotAsBorderSlot(void)

void UWidgetLayoutLibrary::execSlotAsBorderSlot
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = SlotAsBorderSlot(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216c2a0 execSlotAsCanvasSlot body=128 status=ok
// SIG undefined execSlotAsCanvasSlot(void)

void UWidgetLayoutLibrary::execSlotAsCanvasSlot
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = SlotAsCanvasSlot(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216c320 execSlotAsGridSlot body=128 status=ok
// SIG undefined execSlotAsGridSlot(void)

void UWidgetLayoutLibrary::execSlotAsGridSlot
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = SlotAsGridSlot(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216c3a0 execSlotAsHorizontalBoxSlot body=128 status=ok
// SIG undefined execSlotAsHorizontalBoxSlot(void)

void UWidgetLayoutLibrary::execSlotAsHorizontalBoxSlot
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = SlotAsHorizontalBoxSlot(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216c420 execSlotAsOverlaySlot body=128 status=ok
// SIG undefined execSlotAsOverlaySlot(void)

void UWidgetLayoutLibrary::execSlotAsOverlaySlot
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = SlotAsOverlaySlot(local_res10);
  *param_3 = uVar1;
  return;
}


