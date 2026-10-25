// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1408ecde0 FUN_1408ecde0 body=47 status=ok
// SIG undefined FUN_1408ecde0(void)

longlong FUN_1408ecde0(void)

{
  if (DAT_1468626b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468626b8,&PTR_FUN_146285ac0);
  }
  return DAT_1468626b8;
}



// FUNCTION 1408ece10 FUN_1408ece10 body=47 status=ok
// SIG undefined FUN_1408ece10(void)

longlong FUN_1408ece10(void)

{
  if (DAT_146862658 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862658,&PTR_FUN_146285640);
  }
  return DAT_146862658;
}



// FUNCTION 1408ece40 FUN_1408ece40 body=47 status=ok
// SIG undefined FUN_1408ece40(void)

longlong FUN_1408ece40(void)

{
  if (DAT_146862708 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862708,&PTR_FUN_146286160);
  }
  return DAT_146862708;
}



// FUNCTION 1408ece70 FUN_1408ece70 body=47 status=ok
// SIG undefined FUN_1408ece70(void)

longlong FUN_1408ece70(void)

{
  if (DAT_146862648 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862648,&PTR_FUN_146285450);
  }
  return DAT_146862648;
}



// FUNCTION 1408ecea0 FUN_1408ecea0 body=47 status=ok
// SIG undefined FUN_1408ecea0(void)

longlong FUN_1408ecea0(void)

{
  if (DAT_1468625d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468625d8,&PTR_FUN_146284e40);
  }
  return DAT_1468625d8;
}



// FUNCTION 1408eced0 FUN_1408eced0 body=47 status=ok
// SIG undefined FUN_1408eced0(void)

longlong FUN_1408eced0(void)

{
  if (DAT_1468625c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468625c8,&PTR_FUN_146284dc0);
  }
  return DAT_1468625c8;
}



// FUNCTION 1408ecf00 FUN_1408ecf00 body=47 status=ok
// SIG undefined FUN_1408ecf00(void)

longlong FUN_1408ecf00(void)

{
  if (DAT_146862578 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862578,&PTR_FUN_146284740);
  }
  return DAT_146862578;
}



// FUNCTION 1408ecf30 FUN_1408ecf30 body=47 status=ok
// SIG undefined FUN_1408ecf30(void)

longlong FUN_1408ecf30(void)

{
  if (DAT_146862598 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862598,&PTR_FUN_1462849f0);
  }
  return DAT_146862598;
}



// FUNCTION 1408ecf60 FUN_1408ecf60 body=47 status=ok
// SIG undefined FUN_1408ecf60(void)

longlong FUN_1408ecf60(void)

{
  if (DAT_1468626f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468626f8,&PTR_FUN_146286070);
  }
  return DAT_1468626f8;
}



// FUNCTION 1408ecf90 FUN_1408ecf90 body=47 status=ok
// SIG undefined FUN_1408ecf90(void)

longlong FUN_1408ecf90(void)

{
  if (DAT_146862668 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862668,&PTR_FUN_146285700);
  }
  return DAT_146862668;
}



// FUNCTION 1408ecfc0 FUN_1408ecfc0 body=47 status=ok
// SIG undefined FUN_1408ecfc0(void)

longlong FUN_1408ecfc0(void)

{
  if (DAT_1468626c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468626c8,&PTR_FUN_146285b80);
  }
  return DAT_1468626c8;
}



// FUNCTION 1408ecff0 FUN_1408ecff0 body=47 status=ok
// SIG undefined FUN_1408ecff0(void)

longlong FUN_1408ecff0(void)

{
  if (DAT_146862688 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862688,&PTR_FUN_146285880);
  }
  return DAT_146862688;
}



// FUNCTION 1408ed020 FUN_1408ed020 body=128 status=ok
// SIG undefined FUN_1408ed020(void)

void FUN_1408ed020(undefined8 param_1,longlong param_2)

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
  FUN_1408e2bc0(param_1,local_res10);
  return;
}



// FUNCTION 1408ed0a0 FUN_1408ed0a0 body=175 status=ok
// SIG undefined FUN_1408ed0a0(void)

void FUN_1408ed0a0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_1408e2e00(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1408ed150 FUN_1408ed150 body=163 status=ok
// SIG undefined FUN_1408ed150(void)

void FUN_1408ed150(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408e37c0(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408ed200 FUN_1408ed200 body=129 status=ok
// SIG undefined FUN_1408ed200(void)

void FUN_1408ed200(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  uVar1 = FUN_1408e43e0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408ed290 FUN_1408ed290 body=127 status=ok
// SIG undefined FUN_1408ed290(void)

void FUN_1408ed290(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1408e4470(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408ed310 FUN_1408ed310 body=112 status=ok
// SIG undefined FUN_1408ed310(void)

void FUN_1408ed310(undefined8 param_1,longlong param_2)

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
  FUN_1408e6a10(local_res10[0]);
  return;
}



// FUNCTION 1408ed380 FUN_1408ed380 body=123 status=ok
// SIG undefined FUN_1408ed380(void)

void FUN_1408ed380(undefined8 param_1,longlong param_2)

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
  FUN_1408e7990(param_1,local_res10[0]);
  return;
}



// FUNCTION 1408ed400 FUN_1408ed400 body=180 status=ok
// SIG undefined FUN_1408ed400(void)

void FUN_1408ed400(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
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
  FUN_1408e7ad0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1408ed4c0 FUN_1408ed4c0 body=130 status=ok
// SIG undefined FUN_1408ed4c0(void)

void FUN_1408ed4c0(undefined8 param_1,longlong param_2)

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
  FUN_1408e7b30(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1408ed550 FUN_1408ed550 body=112 status=ok
// SIG undefined FUN_1408ed550(void)

void FUN_1408ed550(undefined8 param_1,longlong param_2)

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
  FUN_1408e7b70(local_res10[0]);
  return;
}



// FUNCTION 1408ed5c0 FUN_1408ed5c0 body=180 status=ok
// SIG undefined FUN_1408ed5c0(void)

void FUN_1408ed5c0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
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
  FUN_1408e8230(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1408ed680 FUN_1408ed680 body=338 status=ok
// SIG undefined FUN_1408ed680(void)

void FUN_1408ed680(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_1408e8aa0(local_res20,&local_18,local_res10[0]);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408ed7e0 FUN_1408ed7e0 body=180 status=ok
// SIG undefined FUN_1408ed7e0(void)

void FUN_1408ed7e0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
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
  FUN_1408e8cf0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1408ed8a0 CreatePlayer body=247 status=ok
// SIG undefined CreatePlayer(void)

longlong * FImgMediaModule::CreatePlayer(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(longlong **)(param_1 + 0x10);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  local_20 = (longlong *)
             SharedPointerInternals::
             NewIntrusiveReferenceController<FImgMediaPlayer,IMediaEventSink_&,TSharedRef<FImgMediaScheduler,1>_>
                       (param_3,&local_18);
  local_28 = local_20 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
  plVar5 = local_20;
  *param_2 = (longlong)local_28;
  param_2[1] = (longlong)local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
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
  return param_2;
}



// FUNCTION 1408ed9a0 StartupModule body=510 status=ok
// SIG undefined StartupModule(void)

void FImgMediaModule::StartupModule(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong **pplVar10;
  undefined1 local_res8 [8];
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *local_10;
  
  plStack_20 = (longlong *)
               SharedPointerInternals::NewIntrusiveReferenceController<FImgMediaScheduler>();
  local_28 = plStack_20 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
  local_38 = local_28;
  plStack_30 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  pplVar10 = (longlong **)(param_1 + 8);
  if (pplVar10 != &local_38) {
    *pplVar10 = local_28;
    local_38 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&plStack_30);
  }
  plVar9 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_30 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar9 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_20 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_20)(plStack_20);
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
  FUN_1408f32e0(*pplVar10);
  puVar7 = (undefined8 *)FName::FName(local_res8,"Media",1);
  uVar4 = *puVar7;
  uVar8 = FUN_14168dc80();
  plVar9 = (longlong *)FUN_141690010(uVar8,uVar4);
  if (plVar9 != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x10);
    local_18 = *pplVar10;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_10 = plVar5;
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x78))(plVar9);
    (**(code **)(*plVar9 + 0x10))(plVar9,&local_18);
    plVar9 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_10 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_10)(local_10);
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
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  FUN_1415bac00();
  return;
}



// FUNCTION 1408edba0 FUN_1408edba0 body=135 status=ok
// SIG undefined FUN_1408edba0(void)

void FUN_1408edba0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 8) != &local_18) {
    *(undefined8 *)(param_1 + 8) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_10);
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



// FUNCTION 1408edc50 FUN_1408edc50 body=1830 status=ok
// SIG undefined FUN_1408edc50(void)

undefined8 * FUN_1408edc50(undefined8 *param_1,int param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  DWORD *pDVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined2 *puVar14;
  longlong *local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78;
  undefined8 *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_70 = param_1;
  plVar5 = (longlong *)operator_new(0x70);
  plVar10 = (longlong *)0x0;
  local_d8 = plVar10;
  if (plVar5 == (longlong *)0x0) goto LAB_1408edcf9;
  plVar5[6] = 0;
  *(undefined4 *)(plVar5 + 8) = 0;
  if ((int)param_4[8] == 0) {
LAB_1408edcdf:
    pcVar7 = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar6 = (longlong *)param_4[6];
    if ((longlong *)param_4[6] == (longlong *)0x0) {
      plVar6 = param_4 + 2;
    }
    if (plVar6 == (longlong *)0x0) goto LAB_1408edcdf;
    plVar6 = (longlong *)(**(code **)*plVar6)(plVar6,plVar5 + 2);
    (**(code **)(*plVar6 + 8))(plVar6);
    pcVar7 = (code *)*param_4;
  }
  *plVar5 = (longlong)pcVar7;
  lVar8 = FUN_1415ab270(1);
  plVar5[10] = lVar8;
  *(undefined1 *)(plVar5 + 0xb) = 0;
  local_d8 = plVar5;
LAB_1408edcf9:
  plVar5 = (longlong *)operator_new(0x18);
  local_d0 = plVar10;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_144145d88;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)local_d8;
    local_d0 = plVar5;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_d8,local_d8,local_d8);
  local_68 = local_d8;
  local_c8 = 1;
  local_60 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  if (param_2 == 0) {
    pDVar11 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar5 = TlsGetValue(*pDVar11);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0x18);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        plVar10 = plVar5;
      }
      TlsSetValue(*pDVar11,plVar10);
      plVar5 = plVar10;
    }
    plVar10 = (longlong *)plVar5[1];
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)*plVar5;
      if (plVar10 == (longlong *)0x0) {
        lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar11 + 2);
        plVar5[1] = lVar8;
        if (lVar8 == 0) {
          puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar5[1] = (longlong)puVar12;
          lVar8 = 0x1f;
          do {
            puVar3 = puVar12 + 0x20;
            *puVar12 = puVar3;
            lVar8 = lVar8 + -1;
            puVar12 = puVar3;
          } while (lVar8 != 0);
          *puVar3 = 0;
        }
        plVar10 = (longlong *)plVar5[1];
        iVar13 = 0x20;
        *(undefined4 *)(plVar5 + 2) = 0x20;
      }
      else {
        iVar13 = 0x20;
        plVar5[1] = (longlong)plVar10;
        *(undefined4 *)(plVar5 + 2) = 0x20;
        *plVar5 = 0;
      }
    }
    else {
      iVar13 = (int)plVar5[2];
    }
    plVar5[1] = *plVar10;
    *(int *)(plVar5 + 2) = iVar13 + -1;
    *(undefined4 *)(plVar10 + 1) = 0xff;
    *plVar10 = (longlong)&PTR_FUN_143f3edd8;
    local_48 = 0;
    local_40 = 0;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR__scalar_deleting_destructor__144145d30;
    *(undefined1 *)(plVar10 + 0x10) = 0;
    plVar10[0x11] = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(plVar10 + 2,param_3);
    plVar10[0xc] = (longlong)local_d8;
    plVar10[0xd] = (longlong)local_d0;
    local_d0 = (longlong *)0x0;
    local_d8 = (longlong *)0x0;
    local_90 = (longlong *)0x0;
    local_98 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_90);
    plVar5 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_90 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    *(undefined1 *)(plVar10 + 0xe) = 0;
    lVar8 = plVar10[0x11];
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 0x48) = *(int *)(lVar8 + 0x48) + 1;
      UNLOCK();
    }
    FUN_1408f59c0(plVar10,0,0xff,1);
    if (lVar8 != 0) {
      LOCK();
      piVar1 = (int *)(lVar8 + 0x48);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        FGraphEvent::Recycle(lVar8);
      }
    }
  }
  else if (param_2 == 1) {
    cVar4 = FUN_1415bac00();
    if (cVar4 == '\0') {
      FUN_1408eeee0(&local_d8,param_3);
    }
    else {
      plVar6 = (longlong *)operator_new(0x70);
      plVar5 = plVar10;
      if (plVar6 != (longlong *)0x0) {
        plVar6[6] = 0;
        *(undefined4 *)(plVar6 + 8) = 0;
        *plVar6 = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
        lVar8 = FUN_1415ab270(1);
        plVar6[10] = lVar8;
        *(undefined1 *)(plVar6 + 0xb) = 0;
        plVar5 = plVar6;
      }
      plVar6 = (longlong *)operator_new(0x18);
      local_80 = plVar10;
      if (plVar6 != (longlong *)0x0) {
        *(undefined4 *)(plVar6 + 1) = 1;
        *plVar6 = (longlong)&PTR_DestroyObject_144145d88;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        plVar6[2] = (longlong)plVar5;
        local_80 = plVar6;
      }
      local_88 = plVar5;
      SharedPointerInternals::EnableSharedFromThis(&local_88,plVar5,plVar5);
      local_78 = 0;
      plVar9 = (longlong *)operator_new(0x90);
      plVar5 = local_80;
      plVar6 = plVar10;
      if (plVar9 != (longlong *)0x0) {
        local_78 = 1;
        local_c0 = local_88;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        *plVar9 = (longlong)&PTR_IsPromotedBuild_144145d40;
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(plVar9 + 2,param_3);
        plVar9[0xc] = (longlong)local_d8;
        plVar9[0xd] = (longlong)local_d0;
        local_d0 = (longlong *)0x0;
        local_d8 = (longlong *)0x0;
        local_a0 = (longlong *)0x0;
        local_a8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_a0);
        plVar6 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_a0 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
        }
        *(undefined1 *)(plVar9 + 0xe) = 0;
        plVar9[0xf] = (longlong)local_c0;
        plVar9[0x10] = (longlong)plVar5;
        plVar6 = plVar9;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146862724) &&
         (_Init_thread_header(&DAT_146862724), DAT_146862724 == -1)) {
        DAT_146862720 = 0;
        _Init_thread_footer(&DAT_146862724);
      }
      iVar13 = DAT_146862720;
      LOCK();
      DAT_146862720 = DAT_146862720 + 1;
      UNLOCK();
      FString::PrintfImpl(&local_58,L"TAsync %d",iVar13);
      puVar14 = &DAT_143f3eda8;
      if (local_50 != 0) {
        puVar14 = local_58;
      }
      lVar8 = FUN_1415d42a0(plVar6,puVar14,0,0xffffffff,0xffffffffffffffff);
      plVar5 = local_88;
      local_88[0xc] = lVar8;
      *(undefined1 *)(local_88 + 0xb) = 1;
      (**(code **)(*(longlong *)local_88[10] + 0x10))();
      if ((int)plVar5[8] != 0) {
        plVar6 = (longlong *)plVar5[6];
        if ((longlong *)plVar5[6] == (longlong *)0x0) {
          plVar6 = plVar5 + 2;
        }
        if (plVar6 != (longlong *)0x0) {
          if (plVar6 != (longlong *)0x0) {
            plVar10 = (longlong *)(**(code **)(*plVar6 + 8))();
          }
          (*(code *)*plVar5)(plVar10);
        }
      }
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      plVar10 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_80 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
  }
  else if (param_2 == 2) {
    plVar5 = (longlong *)operator_new(0x80);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_144145d70;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(plVar5 + 2,param_3);
      plVar5[0xc] = (longlong)local_d8;
      plVar5[0xd] = (longlong)local_d0;
      local_d0 = (longlong *)0x0;
      local_d8 = (longlong *)0x0;
      local_b0 = (longlong *)0x0;
      local_b8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_b0);
      plVar10 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_b0 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
      *(undefined1 *)(plVar5 + 0xe) = 0;
      plVar10 = plVar5;
    }
    (**(code **)(*DAT_1468b5010 + 0x10))(DAT_1468b5010,plVar10);
  }
  puVar12 = local_70;
  plVar10 = local_d0;
  *local_70 = local_68;
  local_70[1] = local_60;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_d0 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar10 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar10 = (longlong *)(param_3 + 0x10);
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  if ((int)param_4[8] != 0) {
    plVar10 = (longlong *)param_4[6];
    if ((longlong *)param_4[6] == (longlong *)0x0) {
      plVar10 = param_4 + 2;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (param_4[6] != 0) {
    FMemory::Free();
  }
  return puVar12;
}



// FUNCTION 1408ee380 FUN_1408ee380 body=524 status=ok
// SIG undefined FUN_1408ee380(void)

int * FUN_1408ee380(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 *_Src;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x10);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar10 = false;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar7 * 0x10 + *param_1);
  piVar3 = (int *)*param_3;
  *_Src = piVar3;
  *(undefined4 *)(_Src + 1) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    iVar2 = *piVar3;
    if (iVar9 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
      if (iVar6 != -1) {
        do {
          if (**(int **)(*param_1 + (longlong)iVar6 * 0x10) == iVar2) goto LAB_1408ee4be;
          iVar6 = *(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_1408ee4be:
    bVar10 = iVar6 != -1;
    if (bVar10) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar6 * 0x10 + *param_1),_Src,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar6;
      goto LAB_1408ee563;
    }
  }
  cVar4 = TSet<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*,TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FKeyFuncs,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar4 == '\0') {
    uVar8 = (int)param_1[9] - 1U & *(uint *)*_Src;
    *(uint *)((longlong)_Src + 0xc) = uVar8;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 1) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1408ee563:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1408ee590 HeapSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_> body=535 status=ok
// SIG undefined HeapSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar9 = iVar7 * 2 + 1;
    iVar1 = iVar9;
    iVar10 = iVar7;
joined_r0x0001408ee5c7:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar7 * 2;
        iVar13 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar13 * 2 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)param_1[(longlong)iVar13 * 2];
          }
          if (*(int *)(param_1 + ((longlong)iVar9 + 2) * 2 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)param_1[((longlong)iVar9 + 2) * 2];
          }
          iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
          if (iVar8 < 0) {
            iVar13 = iVar9;
          }
          iVar13 = iVar13 + 1;
        }
        puVar14 = param_1 + (longlong)iVar7 * 2;
        puVar16 = param_1 + (longlong)iVar13 * 2;
        if (*(int *)(puVar16 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar16;
        }
        if (*(int *)(puVar14 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar14;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
        if (iVar7 < 0) {
          if (puVar14 != puVar16) {
            uVar2 = *(undefined4 *)((longlong)puVar16 + 4);
            uVar3 = *(undefined4 *)(puVar16 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar16 + 0xc);
            uVar5 = *puVar14;
            uVar6 = puVar14[1];
            *(undefined4 *)puVar14 = *(undefined4 *)puVar16;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar2;
            *(undefined4 *)(puVar14 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
            *puVar16 = uVar5;
            puVar16[1] = uVar6;
          }
          iVar9 = iVar13 * 2 + 1;
          iVar7 = iVar13;
          goto joined_r0x0001408ee5c7;
        }
      }
      iVar9 = iVar1 + -2;
      iVar7 = iVar10 + -1;
      iVar1 = iVar9;
      iVar10 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar16 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar16) {
        uVar2 = *(undefined4 *)((longlong)puVar16 + 4);
        uVar3 = *(undefined4 *)(puVar16 + 1);
        uVar4 = *(undefined4 *)((longlong)puVar16 + 0xc);
        uVar5 = *param_1;
        uVar6 = param_1[1];
        *(undefined4 *)param_1 = *(undefined4 *)puVar16;
        *(undefined4 *)((longlong)param_1 + 4) = uVar2;
        *(undefined4 *)(param_1 + 1) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
        *puVar16 = uVar5;
        puVar16[1] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar7 * 2;
          iVar9 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar9 * 2 + 1) == 0) {
              puVar12 = &DAT_143f3eda8;
            }
            else {
              puVar12 = (undefined2 *)param_1[(longlong)iVar9 * 2];
            }
            if (*(int *)(param_1 + ((longlong)iVar1 + 2) * 2 + 1) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = (undefined2 *)param_1[((longlong)iVar1 + 2) * 2];
            }
            iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
            if (iVar10 < 0) {
              iVar9 = iVar1;
            }
            iVar9 = iVar9 + 1;
          }
          puVar15 = param_1 + (longlong)iVar7 * 2;
          puVar14 = param_1 + (longlong)iVar9 * 2;
          if (*(int *)(puVar14 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar14;
          }
          if (*(int *)(puVar15 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*puVar15;
          }
          iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
          if (-1 < iVar7) break;
          if (puVar15 != puVar14) {
            uVar2 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar3 = *(undefined4 *)(puVar14 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar5 = *puVar15;
            uVar6 = puVar15[1];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar2;
            *(undefined4 *)(puVar15 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar4;
            *puVar14 = uVar5;
            puVar14[1] = uVar6;
          }
          iVar7 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar16 = puVar16 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1408ee7b0 IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_> body=796 status=ok
// SIG undefined IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_2 * 0x10 + -0x10 + param_1;
    fVar18 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar18 = fVar18 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar18 = ::_guard_xfg_dispatch_icall_nop(fVar18);
    local_338 = (undefined4)(longlong)(fVar18 + fVar18);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar12 = &local_348;
    do {
      puVar17 = (undefined8 *)*plVar12;
      puVar13 = (undefined8 *)plVar12[1];
      local_358 = plVar12[2];
      lVar8 = ((longlong)puVar13 - (longlong)puVar17 >> 4) + 1;
      puVar16 = puVar17;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1408ee890:
        if (8 < lVar8) {
          puVar17 = puVar16 + (lVar8 / 2) * 2;
          if (puVar17 != puVar16) {
            uVar3 = *(undefined4 *)((longlong)puVar16 + 4);
            uVar4 = *(undefined4 *)(puVar16 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar16 + 0xc);
            uVar1 = *puVar17;
            uVar2 = puVar17[1];
            *(undefined4 *)puVar17 = *(undefined4 *)puVar16;
            *(undefined4 *)((longlong)puVar17 + 4) = uVar3;
            *(undefined4 *)(puVar17 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar17 + 0xc) = uVar5;
            *puVar16 = uVar1;
            puVar16[1] = uVar2;
          }
          puVar14 = puVar13 + 2;
          puVar17 = puVar16;
LAB_1408ee8c6:
          puVar11 = puVar17;
          puVar17 = puVar11 + 2;
          if (puVar17 <= puVar13) goto code_r0x0001408ee8cf;
          goto LAB_1408ee900;
        }
        for (; puVar14 = puVar16, puVar17 = puVar16, puVar16 < puVar13; puVar13 = puVar13 + -2) {
          while (puVar17 = puVar17 + 2, puVar17 <= puVar13) {
            if (*(int *)(puVar17 + 1) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar17;
            }
            if (*(int *)(puVar14 + 1) == 0) {
              puVar7 = &DAT_143f3eda8;
            }
            else {
              puVar7 = (undefined2 *)*puVar14;
            }
            iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
            if (iVar10 < 0) {
              puVar14 = puVar17;
            }
          }
          if (puVar14 != puVar13) {
            uVar3 = *(undefined4 *)((longlong)puVar13 + 4);
            uVar4 = *(undefined4 *)(puVar13 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar13 + 0xc);
            uVar1 = *puVar14;
            uVar2 = puVar14[1];
            *(undefined4 *)puVar14 = *(undefined4 *)puVar13;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
            *(undefined4 *)(puVar14 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar5;
            *puVar13 = uVar1;
            puVar13[1] = uVar2;
          }
        }
        goto LAB_1408ee9f7;
      }
LAB_1408ee9e8:
      HeapSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
                (puVar17,lVar8,param_3,param_4);
LAB_1408ee9f7:
      plVar12 = plVar12 + -3;
    } while (&local_348 <= plVar12);
  }
  return;
code_r0x0001408ee8cf:
  if (*(int *)(puVar11 + 3) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar17;
  }
  if (*(int *)(puVar16 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar16;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
  if (-1 < iVar6) goto LAB_1408ee8c6;
LAB_1408ee900:
  do {
    puVar15 = puVar14;
    puVar14 = puVar15 + -2;
    if (puVar14 <= puVar16) break;
    if (*(int *)(puVar16 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar16;
    }
    if (*(int *)(puVar15 + -1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar14;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
  } while (-1 < iVar6);
  if (puVar17 <= puVar14) {
    if (puVar17 != puVar14) {
      uVar3 = *(undefined4 *)((longlong)puVar15 + -0xc);
      uVar4 = *(undefined4 *)(puVar15 + -1);
      uVar5 = *(undefined4 *)((longlong)puVar15 + -4);
      uVar1 = *puVar17;
      uVar2 = puVar11[3];
      *(undefined4 *)puVar17 = *(undefined4 *)puVar14;
      *(undefined4 *)((longlong)puVar11 + 0x14) = uVar3;
      *(undefined4 *)(puVar11 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar5;
      *puVar14 = uVar1;
      puVar15[-1] = uVar2;
    }
    goto LAB_1408ee8c6;
  }
  if (puVar16 != puVar14) {
    uVar3 = *(undefined4 *)((longlong)puVar15 + -0xc);
    uVar4 = *(undefined4 *)(puVar15 + -1);
    uVar5 = *(undefined4 *)((longlong)puVar15 + -4);
    uVar1 = *puVar16;
    uVar2 = puVar16[1];
    *(undefined4 *)puVar16 = *(undefined4 *)puVar14;
    *(undefined4 *)((longlong)puVar16 + 4) = uVar3;
    *(undefined4 *)(puVar16 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar16 + 0xc) = uVar5;
    *puVar14 = uVar1;
    puVar15[-1] = uVar2;
  }
  iVar10 = iVar10 + -1;
  if ((longlong)((longlong)puVar14 + (-0x10 - (longlong)puVar16) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar13 - (longlong)puVar17 & 0xfffffffffffffff0U)) {
    if (puVar17 < puVar13) {
      *plVar12 = (longlong)puVar17;
      plVar12[1] = (longlong)puVar13;
      *(int *)(plVar12 + 2) = iVar10;
      plVar12 = plVar12 + 3;
    }
    if (puVar14 <= puVar16 + 2) goto LAB_1408ee9f7;
    puVar13 = puVar15 + -4;
    puVar17 = puVar16;
  }
  else {
    if (puVar16 + 2 < puVar14) {
      *plVar12 = (longlong)puVar16;
      plVar12[1] = (longlong)(puVar15 + -4);
      *(int *)(plVar12 + 2) = iVar10;
      plVar12 = plVar12 + 3;
    }
    if (puVar13 <= puVar17) goto LAB_1408ee9f7;
  }
  lVar8 = ((longlong)puVar13 - (longlong)puVar17 >> 4) + 1;
  puVar16 = puVar17;
  if (iVar10 == 0) goto LAB_1408ee9e8;
  goto LAB_1408ee890;
}



// FUNCTION 1408eead0 NewIntrusiveReferenceController<FImgMediaLoader,TSharedRef<FImgMediaScheduler,1>_> body=433 status=ok
// SIG undefined NewIntrusiveReferenceController<FImgMediaLoader,TSharedRef<FImgMediaScheduler,1>_>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
SharedPointerInternals::
NewIntrusiveReferenceController<FImgMediaLoader,TSharedRef<FImgMediaScheduler,1>_>
          (undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_res10 [8];
  
  puVar2 = (undefined8 *)operator_new(0x160);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_LAB_144146c08;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[2] = &PTR__scalar_deleting_destructor__144146a98;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 5));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 5),4000);
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    *(undefined4 *)(puVar2 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x84) = 0;
    puVar2[0x12] = 0;
    *(undefined4 *)(puVar2 + 0x13) = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    *(undefined4 *)(puVar2 + 0x16) = 1;
    TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::Empty(puVar2 + 10,1);
    puVar3 = (undefined8 *)FName::FName(local_res10,"ImageWrapper",1);
    uVar5 = *puVar3;
    uVar4 = FUN_14168dc80();
    uVar5 = FUN_141690010(uVar4,uVar5);
    puVar2[0x17] = uVar5;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    *(undefined1 *)(puVar2 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xe4) = 0;
    puVar2[0x1e] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x20] = *param_1;
    lVar1 = param_1[1];
    puVar2[0x21] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[0x22] = _DAT_1468b5ca0;
    puVar2[0x23] = 0;
    puVar2[0x24] = 0;
    *(undefined4 *)(puVar2 + 0x25) = 0xffffffff;
    puVar2[0x26] = 0;
    puVar2[0x27] = 0;
    puVar2[0x28] = 0;
    puVar2[0x29] = 0;
    puVar2[0x2a] = 0;
    puVar2[0x2b] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1408eec90 NewIntrusiveReferenceController<FImgMediaPlayer,IMediaEventSink_&,TSharedRef<FImgMediaScheduler,1>_> body=267 status=ok
// SIG undefined NewIntrusiveReferenceController<FImgMediaPlayer,IMediaEventSink_&,TSharedRef<FImgMediaScheduler,1>_>(void)

undefined8 *
SharedPointerInternals::
NewIntrusiveReferenceController<FImgMediaPlayer,IMediaEventSink_&,TSharedRef<FImgMediaScheduler,1>_>
          (undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xb0);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_LAB_144145d08;
    puVar2[2] = &PTR_Close_144146830;
    puVar2[3] = &PTR_QueryCacheState_1441468c8;
    puVar2[4] = &PTR_LAB_1441468e0;
    puVar2[5] = &PTR_CanBeUsedOnAnyThread_144146940;
    puVar2[6] = &PTR_CanBeUsedOnAnyThread_144146978;
    puVar2[7] = &PTR_CanBeUsedOnAnyThread_1441469e0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(undefined1 *)(puVar2 + 0xd) = 0;
    puVar2[0xe] = param_1;
    puVar2[0xf] = 0x8000000000000000;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    *(undefined1 *)(puVar2 + 0x12) = 0;
    puVar2[0x13] = *param_2;
    lVar1 = param_2[1];
    puVar2[0x14] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 0x15) = 0xffffffff;
    *(undefined1 *)((longlong)puVar2 + 0xac) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1408eeda0 NewIntrusiveReferenceController<FImgMediaScheduler> body=170 status=ok
// SIG undefined NewIntrusiveReferenceController<FImgMediaScheduler>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<FImgMediaScheduler>(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144145d18;
    puVar1[2] = &PTR_TickFetch_144146a60;
    puVar1[3] = &PTR_GetWorkOrReturnToPool_144146a88;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 8));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 8),4000);
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0xffffffff;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1408eee50 NewIntrusiveReferenceController<FImgMediaTextureSample> body=138 status=ok
// SIG undefined NewIntrusiveReferenceController<FImgMediaTextureSample>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<FImgMediaTextureSample>(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x90);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_DestroyObject_144146bf8;
    puVar1[2] = &PTR_Bytes_144146b38;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 60000;
    *(undefined4 *)((longlong)puVar1 + 100) = 1;
    puVar1[0x10] = _DAT_1468b5ca0;
    puVar1[0x11] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1408eeee0 FUN_1408eeee0 body=149 status=ok
// SIG undefined FUN_1408eeee0(void)

void FUN_1408eeee0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = 0;
  uVar2 = uVar3;
  if (*(int *)(param_2 + 8) != 0) {
    plVar4 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar4 = param_2 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 8))();
    }
  }
  (*(code *)*param_2)(uVar2);
  puVar1 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined1 *)(puVar1 + 0xb) = 1;
  (**(code **)(*(longlong *)puVar1[10] + 0x10))();
  if (*(int *)(puVar1 + 8) != 0) {
    plVar4 = (longlong *)puVar1[6];
    if ((longlong *)puVar1[6] == (longlong *)0x0) {
      plVar4 = puVar1 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 8))();
      }
      (*(code *)*puVar1)(uVar3);
    }
  }
  return;
}



// FUNCTION 1408eef80 UImgMediaSource body=81 status=ok
// SIG undefined UImgMediaSource(void)

undefined8 * UImgMediaSource::UImgMediaSource(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1441463c8;
  param_1[5] = &PTR_FUN_144146650;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 1408eefe0 ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator> body=121 status=ok
// SIG undefined ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(void)

void TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
     ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(longlong *param_1)

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
      plVar5 = plVar5 + 2;
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



// FUNCTION 1408ef060 ~FImgMediaFrame body=108 status=ok
// SIG undefined ~FImgMediaFrame(void)

void FImgMediaFrame::~FImgMediaFrame(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
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



// FUNCTION 1408ef0d0 ~FImgMediaLoader body=547 status=ok
// SIG undefined ~FImgMediaLoader(void)

void FImgMediaLoader::~FImgMediaLoader(undefined8 *param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144146a98;
  puVar2 = param_1 + 0x28;
  plVar5 = (longlong *)*puVar2;
  uVar8 = (longlong)*(int *)(param_1 + 0x29) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x29) < plVar5) {
    uVar8 = uVar7;
  }
  if (uVar8 != 0) {
    do {
      plVar3 = (longlong *)*plVar5;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,1);
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar8);
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (*(int *)((longlong)param_1 + 0x14c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar2,0);
  }
  TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::Empty(param_1 + 8,0);
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (*(int *)((longlong)param_1 + 300) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x24,0);
  }
  if (*puVar2 != 0) {
    FMemory::Free();
  }
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)param_1[0x1f];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = (longlong *)param_1[0x1d];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x17);
  plVar5 = (longlong *)param_1[0x16];
  if (iVar6 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar5 = (longlong *)param_1[0x16];
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::Empty(param_1 + 8,0);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 8);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}



// FUNCTION 1408ef300 ~FImgMediaPlayer body=294 status=ok
// SIG undefined ~FImgMediaPlayer(void)

void FImgMediaPlayer::~FImgMediaPlayer(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_Close_144146830;
  param_1[1] = &PTR_QueryCacheState_1441468c8;
  param_1[2] = &PTR_LAB_1441468e0;
  param_1[3] = &PTR_CanBeUsedOnAnyThread_144146940;
  param_1[4] = &PTR_CanBeUsedOnAnyThread_144146978;
  param_1[5] = &PTR_CanBeUsedOnAnyThread_1441469e0;
  Close();
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
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  param_1[5] = &PTR_CanBeUsedOnAnyThread_1441467d8;
  param_1[4] = &PTR__purecall_144146770;
  param_1[3] = &PTR_CanBeUsedOnAnyThread_144146738;
  param_1[2] = &PTR__purecall_144136680;
  param_1[1] = &PTR_CanBeUsedOnAnyThread_144146688;
  *param_1 = &PTR__purecall_1441466a0;
  return;
}



// FUNCTION 1408ef430 ~FImgMediaScheduler body=310 status=ok
// SIG undefined ~FImgMediaScheduler(void)

void FImgMediaScheduler::~FImgMediaScheduler(undefined8 *param_1)

{
  longlong *plVar1;
  BOOL BVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  *param_1 = &PTR_TickFetch_144146a60;
  param_1[1] = &PTR_GetWorkOrReturnToPool_144146a88;
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  uVar3 = 0;
  plVar4 = (longlong *)param_1[2];
  uVar5 = (longlong)*(int *)(param_1 + 3) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 3) < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar4;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1,1);
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0xb);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR__purecall_143f3ef70;
  *param_1 = &PTR_StartProfileThreadUsage_144146a38;
  return;
}



// FUNCTION 1408ef570 operator() body=403 status=ok
// SIG undefined operator()(void)

void <lambda_b2d4fc15defc385a545b1e0a7da1fcc0>::operator()(longlong param_1)

{
  void **ppvVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  void *_Src;
  char cVar6;
  int iVar7;
  bool bVar8;
  void *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar4[1];
    bVar8 = iVar7 == 0;
    if (bVar8) {
      *(int *)(plVar4 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (!bVar8) {
      while( true ) {
        LOCK();
        bVar8 = iVar7 == (int)plVar4[1];
        if (bVar8) {
          *(int *)(plVar4 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar8) break;
        LOCK();
        iVar7 = (int)plVar4[1];
        bVar8 = iVar7 == 0;
        if (bVar8) {
          *(int *)(plVar4 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar8) {
          return;
        }
      }
      if (plVar4 != (longlong *)0x0) {
        lVar5 = *(longlong *)(param_1 + 8);
        if (lVar5 != 0) {
          ppvVar1 = (void **)(param_1 + 0x28);
          if (*(int *)(param_1 + 0x30) == 0) {
            local_28 = &DAT_143f3eda8;
          }
          else {
            local_28 = *ppvVar1;
          }
          if (*(int *)(param_1 + 0x20) == 0) {
            local_20 = &DAT_143f3eda8;
          }
          else {
            local_20 = *(undefined2 **)(param_1 + 0x18);
          }
          local_38 = (void *)0x0;
          local_30 = 0;
          FPaths::CombineInternal(&local_38,&local_28,2);
          cVar6 = FPaths::DirectoryExists(&local_38);
          if ((cVar6 == '\0') && (&local_38 != ppvVar1)) {
            iVar7 = *(int *)(param_1 + 0x30);
            _Src = *ppvVar1;
            local_30 = CONCAT44(local_30._4_4_,iVar7);
            if ((iVar7 == 0) && (local_30._4_4_ == 0)) {
              local_30 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar7);
              ::_guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar7 * 2);
            }
          }
          FUN_1408f39a0(lVar5,&local_38,param_1,*(undefined1 *)(param_1 + 0x38));
          *(undefined1 *)(lVar5 + 0xd0) = 1;
          if (local_38 != (void *)0x0) {
            FMemory::Free();
          }
        }
        LOCK();
        plVar2 = plVar4 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          iVar7 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1408ef760 `scalar_deleting_destructor' body=184 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TAsyncQueuedWork<void>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)param_1[0xd];
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
  if (*(int *)(param_1 + 10) != 0) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 4;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1408ef820 `scalar_deleting_destructor' body=239 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TAsyncRunnable<void>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)param_1[0x10];
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
  plVar5 = (longlong *)param_1[0xd];
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
  if (*(int *)(param_1 + 10) != 0) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 4;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1408ef910 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_b2d4fc15defc385a545b1e0a7da1fcc0>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
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
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1408ef990 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`FSlateRHIRenderer::DrawWindows_Private'::`37'::DrawWidgetRendererImmediateName,<lambda_3d188f92baafc49f2858efe92aeedc7f>_>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144145d30;
  if (param_1[0x11] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x11] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1408efa00 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FImgMediaLoader>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 1408efa30 FUN_1408efa30 body=43 status=ok
// SIG undefined FUN_1408efa30(void)

undefined8 * FUN_1408efa30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1408efa60 FUN_1408efa60 body=43 status=ok
// SIG undefined FUN_1408efa60(void)

undefined8 * FUN_1408efa60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1408efa90 FUN_1408efa90 body=43 status=ok
// SIG undefined FUN_1408efa90(void)

undefined8 * FUN_1408efa90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408efac0 FUN_1408efac0 body=43 status=ok
// SIG undefined FUN_1408efac0(void)

undefined8 * FUN_1408efac0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1408efaf0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FImgMediaLoader::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FImgMediaLoader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 1408efb30 `scalar_deleting_destructor' body=182 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FImgMediaLoaderWork::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

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
  plVar4 = (longlong *)param_1[5];
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
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1408efbf0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FImgMediaPlayer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FImgMediaPlayer();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1408efc30 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FImgMediaScheduler::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FImgMediaScheduler();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1408efc70 `scalar_deleting_destructor' body=175 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FImgMediaSchedulerThread::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_IsPromotedBuild_144146bb8;
  param_1[1] = &PTR_LAB_144146be8;
  LOCK();
  *(undefined1 *)(param_1 + 4) = 1;
  UNLOCK();
  (**(code **)(*(longlong *)param_1[6] + 0x10))();
  (**(code **)(*(longlong *)param_1[5] + 0x20))();
  (**(code **)(*(longlong *)param_1[5] + 0x18))((longlong *)param_1[5],1);
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  param_1[5] = 0;
  FUN_1415b5910(param_1[6]);
  param_1[6] = 0;
  param_1[1] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1408efd20 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FImgMediaTextureSample::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FImgMediaFrame::~FImgMediaFrame(param_1 + 2);
  *param_1 = &PTR__purecall_144146aa0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1408efd70 FUN_1408efd70 body=43 status=ok
// SIG undefined FUN_1408efd70(void)

undefined8 * FUN_1408efd70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_CanBeUsedOnAnyThread_144146688;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408efda0 FUN_1408efda0 body=43 status=ok
// SIG undefined FUN_1408efda0(void)

undefined8 * FUN_1408efda0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_144146a38;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408efdd0 FUN_1408efdd0 body=43 status=ok
// SIG undefined FUN_1408efdd0(void)

undefined8 * FUN_1408efdd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_1441466a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408efe00 FUN_1408efe00 body=43 status=ok
// SIG undefined FUN_1408efe00(void)

undefined8 * FUN_1408efe00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_CanBeUsedOnAnyThread_144146738;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408efe30 FUN_1408efe30 body=43 status=ok
// SIG undefined FUN_1408efe30(void)

undefined8 * FUN_1408efe30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144146aa0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408efe60 FUN_1408efe60 body=43 status=ok
// SIG undefined FUN_1408efe60(void)

undefined8 * FUN_1408efe60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144146770;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408efe90 FUN_1408efe90 body=43 status=ok
// SIG undefined FUN_1408efe90(void)

undefined8 * FUN_1408efe90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_CanBeUsedOnAnyThread_1441467d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408efec0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UImgMediaSource::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1408eff30 Add body=722 status=ok
// SIG undefined Add(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::Add
               (longlong *param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  int *local_58;
  undefined1 local_50 [8];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  piVar8 = (int *)0x0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar5 != -1) {
      lVar2 = *param_1;
      do {
        lVar9 = (longlong)iVar5;
        piVar7 = *(int **)(lVar2 + lVar9 * 0x10);
        if (*piVar7 == *param_2) {
          if ((iVar5 != -1) && (lVar9 * 0x10 + lVar2 != 0)) {
            uStack_60 = (longlong *)param_3[1];
            piVar8 = piVar7 + 6;
            local_68 = *param_3;
            if (uStack_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
              UNLOCK();
            }
            if ((int *)&local_68 != piVar8) {
              local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
              uVar4 = *(undefined8 *)piVar8;
              plVar6 = *(longlong **)(piVar7 + 8);
              local_48 = (int)local_68;
              iStack_44 = local_68._4_4_;
              iStack_40 = (int)uStack_60;
              iStack_3c = uStack_60._4_4_;
              *piVar8 = (int)local_68;
              piVar7[7] = local_68._4_4_;
              piVar7[8] = (int)uStack_60;
              piVar7[9] = uStack_60._4_4_;
              local_68 = uVar4;
              uStack_60 = plVar6;
            }
            plVar6 = uStack_60;
            if (uStack_60 != (longlong *)0x0) {
              LOCK();
              plVar1 = uStack_60 + 1;
              lVar2 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar2 == 1) {
                (**(code **)*uStack_60)(uStack_60);
                LOCK();
                piVar8 = (int *)((longlong)plVar6 + 0xc);
                iVar5 = *piVar8;
                *piVar8 = *piVar8 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*uStack_60 + 8))(uStack_60,1);
                }
              }
            }
            if ((piVar7 == (int *)param_1[10]) &&
               (lVar2 = *(longlong *)((int *)param_1[10] + 4), lVar2 != 0)) {
              param_1[10] = lVar2;
            }
            if (piVar7 == (int *)param_1[0xb]) {
              return;
            }
            if (*(longlong *)(piVar7 + 2) != 0) {
              *(undefined8 *)(*(longlong *)(piVar7 + 2) + 0x10) = *(undefined8 *)(piVar7 + 4);
            }
            if (*(longlong *)(piVar7 + 4) != 0) {
              *(undefined8 *)(*(longlong *)(piVar7 + 4) + 8) = *(undefined8 *)(piVar7 + 2);
            }
            piVar7[2] = 0;
            piVar7[3] = 0;
            piVar7[4] = 0;
            piVar7[5] = 0;
            lVar2 = param_1[0xb];
            *(longlong *)(piVar7 + 2) = lVar2;
            if (lVar2 != 0) {
              *(int **)(lVar2 + 0x10) = piVar7;
            }
            param_1[0xb] = (longlong)piVar7;
            return;
          }
          break;
        }
        iVar5 = *(int *)(lVar2 + 8 + lVar9 * 0x10);
      } while (iVar5 != -1);
    }
  }
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == (int)param_1[0xc]) &&
     (puVar3 = (undefined4 *)param_1[10], puVar3 != (undefined4 *)0x0)) {
    TSet<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*,TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FKeyFuncs,FDefaultSetAllocator>
    ::Remove(param_1,*puVar3);
    if (puVar3 == (undefined4 *)param_1[10]) {
      param_1[10] = *(longlong *)(puVar3 + 4);
    }
    if (puVar3 == (undefined4 *)param_1[0xb]) {
      param_1[0xb] = *(longlong *)(puVar3 + 2);
    }
    if (*(longlong *)(puVar3 + 2) != 0) {
      *(undefined8 *)(*(longlong *)(puVar3 + 2) + 0x10) = *(undefined8 *)(puVar3 + 4);
    }
    if (*(longlong *)(puVar3 + 4) != 0) {
      *(undefined8 *)(*(longlong *)(puVar3 + 4) + 8) = *(undefined8 *)(puVar3 + 2);
    }
    *(undefined8 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    plVar6 = *(longlong **)(puVar3 + 8);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar7 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    FMemory::operator_delete(puVar3,0x28);
  }
  piVar7 = (int *)operator_new(0x28);
  if (piVar7 != (int *)0x0) {
    *piVar7 = *param_2;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[4] = 0;
    piVar7[5] = 0;
    *(undefined8 *)(piVar7 + 6) = *param_3;
    lVar2 = param_3[1];
    *(longlong *)(piVar7 + 8) = lVar2;
    piVar8 = piVar7;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  lVar2 = param_1[0xb];
  *(longlong *)(piVar8 + 2) = lVar2;
  if (lVar2 != 0) {
    *(int **)(lVar2 + 0x10) = piVar8;
  }
  param_1[0xb] = (longlong)piVar8;
  if (param_1[10] == 0) {
    param_1[10] = (longlong)piVar8;
  }
  local_58 = piVar8;
  FUN_1408ee380(param_1,local_50,&local_58,0);
  return;
}



// FUNCTION 1408f0210 Add body=948 status=ok
// SIG undefined Add(void)

void TRangeSet<float>::Add(longlong *param_1,char *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  char *pcVar12;
  char cVar13;
  longlong lVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  char local_res8 [4];
  float local_resc;
  char local_res10 [4];
  float local_res14;
  
  iVar10 = (int)param_1[1];
  iVar9 = 0;
  if (0 < iVar10) {
    lVar14 = 0;
    do {
      pcVar6 = (char *)(lVar14 * 0x10 + *param_1);
      cVar7 = *pcVar6;
      cVar13 = '\x01';
      if ((cVar7 == '\x02') || (pcVar6[8] == '\x02')) {
LAB_1408f0292:
        cVar11 = *param_2;
        if ((cVar11 != '\x02') && (param_2[8] != '\x02')) {
          fVar16 = *(float *)(param_2 + 4);
          if (fVar16 <= *(float *)(param_2 + 0xc)) {
            if ((fVar16 != *(float *)(param_2 + 0xc)) ||
               ((cVar5 = cVar13, cVar11 != '\0' && (param_2[8] != '\0')))) {
              cVar5 = '\0';
            }
            if (cVar5 == '\0') goto LAB_1408f02d4;
          }
          goto LAB_1408f032e;
        }
        fVar16 = *(float *)(param_2 + 4);
LAB_1408f02d4:
        cVar5 = pcVar6[8];
        if (((cVar5 == '\x02') || (cVar11 == '\x02')) || (fVar16 != *(float *)(pcVar6 + 0xc))) {
          cVar5 = param_2[8];
          if (cVar5 == '\x02') goto LAB_1408f032e;
          if (cVar7 != '\x02') {
            if (*(float *)(pcVar6 + 4) == *(float *)(param_2 + 0xc)) {
              if (cVar5 == '\x01') {
                bVar15 = cVar7 == '\0';
              }
              else {
                if (cVar5 != '\0') goto LAB_1408f032e;
                bVar15 = cVar7 == '\x01';
              }
LAB_1408f0328:
              if (bVar15) goto LAB_1408f0453;
            }
            goto LAB_1408f032e;
          }
          goto LAB_1408f0363;
        }
        if (cVar5 == '\x01') {
          bVar15 = cVar11 == '\0';
          goto LAB_1408f0328;
        }
        if ((cVar5 != '\0') || (cVar11 != '\x01')) goto LAB_1408f032e;
LAB_1408f0453:
        local_res8[0] = pcVar6[8];
        local_res14 = *(float *)(param_2 + 0xc);
        local_resc = *(float *)(pcVar6 + 0xc);
        local_res10[0] = param_2[8];
        if (local_res8[0] == '\x02') {
          pcVar12 = local_res8;
        }
        else if (param_2[8] == '\x02') {
          pcVar12 = local_res10;
        }
        else if (local_resc <= local_res14) {
          if (local_res14 <= local_resc) {
            pcVar12 = local_res8;
            if (local_res8[0] != '\x01') {
              pcVar12 = local_res10;
            }
          }
          else {
            pcVar12 = local_res10;
          }
        }
        else {
          pcVar12 = local_res8;
        }
        fVar16 = *(float *)(param_2 + 4);
        fVar17 = *(float *)(pcVar6 + 4);
        if ((cVar7 != '\x02') &&
           ((cVar11 == '\x02' ||
            ((fVar16 <= fVar17 &&
             ((fVar16 < fVar17 || (bVar15 = cVar7 != '\x01', cVar7 = cVar13, bVar15)))))))) {
          fVar17 = fVar16;
          cVar7 = cVar11;
        }
        cVar13 = *pcVar12;
        uVar1 = *(undefined4 *)(pcVar12 + 4);
        *param_2 = cVar7;
        *(float *)(param_2 + 4) = fVar17;
        param_2[8] = cVar13;
        *(undefined4 *)(param_2 + 0xc) = uVar1;
        iVar10 = (int)param_1[1];
        iVar8 = (iVar10 - iVar9) + -1;
        if (0 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x10 + *param_1),
                     (void *)((longlong)(iVar10 - iVar8) * 0x10 + *param_1),(longlong)iVar8 << 4);
          iVar10 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar10 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
        iVar9 = iVar9 + -1;
        lVar14 = lVar14 + -1;
      }
      else {
        if ((*(float *)(pcVar6 + 4) <= *(float *)(pcVar6 + 0xc)) &&
           ((*(float *)(pcVar6 + 4) != *(float *)(pcVar6 + 0xc) ||
            ((cVar7 != '\0' && (pcVar6[8] != '\0')))))) goto LAB_1408f0292;
LAB_1408f032e:
        if ((cVar7 == '\x02') || (pcVar6[8] == '\x02')) {
LAB_1408f0363:
          cVar11 = *param_2;
          if ((cVar11 != '\x02') && (param_2[8] != '\x02')) {
            if ((*(float *)(param_2 + 0xc) < *(float *)(param_2 + 4)) ||
               ((*(float *)(param_2 + 4) == *(float *)(param_2 + 0xc) &&
                ((cVar11 == '\0' || (param_2[8] == '\0')))))) goto LAB_1408f055d;
          }
          bVar3 = true;
          bVar15 = bVar3;
          if ((pcVar6[8] != '\x02') && (cVar11 != '\x02')) {
            bVar15 = false;
          }
          bVar2 = bVar3;
          if ((cVar7 != '\x02') && (param_2[8] != '\x02')) {
            bVar2 = false;
          }
          bVar4 = true;
          if (!bVar15) {
            fVar16 = *(float *)(pcVar6 + 0xc);
            bVar15 = *(float *)(param_2 + 4) <= fVar16;
            if ((pcVar6[8] != '\x01') || (cVar5 = cVar13, cVar11 != '\x01')) {
              cVar5 = '\0';
            }
            bVar4 = bVar15 && fVar16 != *(float *)(param_2 + 4);
            if (cVar5 != '\0') {
              bVar4 = bVar15;
            }
          }
          bVar15 = true;
          if (!bVar2) {
            fVar16 = *(float *)(param_2 + 0xc);
            bVar2 = *(float *)(pcVar6 + 4) <= fVar16;
            if ((cVar7 != '\x01') || (param_2[8] != '\x01')) {
              bVar3 = false;
            }
            bVar15 = bVar2 && fVar16 != *(float *)(pcVar6 + 4);
            if (bVar3) {
              bVar15 = bVar2;
            }
          }
          if ((bVar4) && (bVar15)) goto LAB_1408f0453;
        }
        else if ((*(float *)(pcVar6 + 4) <= *(float *)(pcVar6 + 0xc)) &&
                ((*(float *)(pcVar6 + 4) != *(float *)(pcVar6 + 0xc) ||
                 ((cVar7 != '\0' && (pcVar6[8] != '\0')))))) goto LAB_1408f0363;
      }
LAB_1408f055d:
      iVar10 = (int)param_1[1];
      iVar9 = iVar9 + 1;
      lVar14 = lVar14 + 1;
    } while (iVar9 < iVar10);
  }
  *(int *)(param_1 + 1) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar10);
  }
  pcVar6 = (char *)((longlong)iVar10 * 0x10 + *param_1);
  *pcVar6 = *param_2;
  *(undefined4 *)(pcVar6 + 4) = *(undefined4 *)(param_2 + 4);
  pcVar6[8] = param_2[8];
  *(undefined4 *)(pcVar6 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return;
}



// FUNCTION 1408f05d0 Add body=928 status=ok
// SIG undefined Add(void)

void TRangeSet<FTimespan>::Add(longlong *param_1,char *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  char cVar12;
  char *pcVar13;
  char cVar14;
  longlong lVar15;
  bool bVar16;
  char local_38 [8];
  longlong local_30;
  char local_28 [8];
  longlong local_20;
  
  iVar10 = (int)param_1[1];
  iVar9 = 0;
  if (0 < iVar10) {
    lVar15 = 0;
    do {
      pcVar8 = (char *)(lVar15 * 0x20 + *param_1);
      cVar11 = *pcVar8;
      cVar14 = '\x01';
      if (((cVar11 == '\x02') || (pcVar8[0x10] == '\x02')) ||
         ((*(longlong *)(pcVar8 + 8) <= *(longlong *)(pcVar8 + 0x18) &&
          ((*(longlong *)(pcVar8 + 8) != *(longlong *)(pcVar8 + 0x18) ||
           ((cVar11 != '\0' && (pcVar8[0x10] != '\0')))))))) {
        cVar12 = *param_2;
        if ((cVar12 != '\x02') && (param_2[0x10] != '\x02')) {
          lVar5 = *(longlong *)(param_2 + 8);
          if (lVar5 <= *(longlong *)(param_2 + 0x18)) {
            if ((lVar5 == *(longlong *)(param_2 + 0x18)) &&
               ((cVar12 == '\0' || (param_2[0x10] == '\0')))) {
              bVar16 = true;
            }
            else {
              bVar16 = false;
            }
            if (!bVar16) goto LAB_1408f068d;
          }
          goto LAB_1408f06ea;
        }
        lVar5 = *(longlong *)(param_2 + 8);
LAB_1408f068d:
        cVar4 = pcVar8[0x10];
        if (((cVar4 == '\x02') || (cVar12 == '\x02')) || (*(longlong *)(pcVar8 + 0x18) != lVar5)) {
          cVar4 = param_2[0x10];
          if (cVar4 == '\x02') goto LAB_1408f06ea;
          if (cVar11 != '\x02') {
            if (*(longlong *)(param_2 + 0x18) == *(longlong *)(pcVar8 + 8)) {
              if (cVar4 == '\x01') {
                bVar16 = cVar11 == '\0';
              }
              else {
                if (cVar4 != '\0') goto LAB_1408f06ea;
                bVar16 = cVar11 == '\x01';
              }
LAB_1408f06e4:
              if (bVar16) goto LAB_1408f0805;
            }
            goto LAB_1408f06ea;
          }
          goto LAB_1408f071c;
        }
        if (cVar4 == '\x01') {
          bVar16 = cVar12 == '\0';
          goto LAB_1408f06e4;
        }
        if ((cVar4 != '\0') || (cVar12 != '\x01')) goto LAB_1408f06ea;
LAB_1408f0805:
        local_38[0] = pcVar8[0x10];
        local_20 = *(longlong *)(param_2 + 0x18);
        local_30 = *(longlong *)(pcVar8 + 0x18);
        local_28[0] = param_2[0x10];
        if (local_38[0] == '\x02') {
          pcVar13 = local_38;
        }
        else if (param_2[0x10] == '\x02') {
          pcVar13 = local_28;
        }
        else if (local_20 < local_30) {
          pcVar13 = local_38;
        }
        else if (local_30 < local_20) {
          pcVar13 = local_28;
        }
        else {
          pcVar13 = local_38;
          if (local_38[0] != '\x01') {
            pcVar13 = local_28;
          }
        }
        lVar5 = *(longlong *)(param_2 + 8);
        lVar6 = *(longlong *)(pcVar8 + 8);
        if ((cVar11 != '\x02') &&
           ((cVar12 == '\x02' ||
            ((lVar5 <= lVar6 &&
             ((lVar5 < lVar6 || (bVar16 = cVar11 != '\x01', cVar11 = cVar14, bVar16)))))))) {
          lVar6 = lVar5;
          cVar11 = cVar12;
        }
        cVar14 = *pcVar13;
        uVar1 = *(undefined8 *)(pcVar13 + 8);
        *param_2 = cVar11;
        *(longlong *)(param_2 + 8) = lVar6;
        param_2[0x10] = cVar14;
        *(undefined8 *)(param_2 + 0x18) = uVar1;
        iVar10 = (int)param_1[1];
        iVar7 = (iVar10 - iVar9) + -1;
        if (0 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x20 + *param_1),
                     (void *)((longlong)(iVar10 - iVar7) * 0x20 + *param_1),(longlong)iVar7 << 5);
          iVar10 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar10 + -1;
        TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
        iVar9 = iVar9 + -1;
        lVar15 = lVar15 + -1;
      }
      else {
LAB_1408f06ea:
        if (((cVar11 == '\x02') || (pcVar8[0x10] == '\x02')) ||
           ((*(longlong *)(pcVar8 + 8) <= *(longlong *)(pcVar8 + 0x18) &&
            ((*(longlong *)(pcVar8 + 8) != *(longlong *)(pcVar8 + 0x18) ||
             ((cVar11 != '\0' && (pcVar8[0x10] != '\0')))))))) {
LAB_1408f071c:
          cVar12 = *param_2;
          if (((cVar12 == '\x02') || (param_2[0x10] == '\x02')) ||
             ((*(longlong *)(param_2 + 8) <= *(longlong *)(param_2 + 0x18) &&
              ((*(longlong *)(param_2 + 8) != *(longlong *)(param_2 + 0x18) ||
               ((cVar12 != '\0' && (param_2[0x10] != '\0')))))))) {
            cVar4 = cVar14;
            if ((pcVar8[0x10] != '\x02') && (cVar12 != '\x02')) {
              cVar4 = '\0';
            }
            if ((cVar11 == '\x02') || (param_2[0x10] == '\x02')) {
              bVar16 = true;
            }
            else {
              bVar16 = false;
            }
            bVar3 = true;
            if (cVar4 == '\0') {
              if ((pcVar8[0x10] == '\x01') && (cVar12 == '\x01')) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              bVar3 = *(longlong *)(param_2 + 8) < *(longlong *)(pcVar8 + 0x18);
              if (bVar2) {
                bVar3 = *(longlong *)(param_2 + 8) <= *(longlong *)(pcVar8 + 0x18);
              }
            }
            bVar2 = true;
            if (!bVar16) {
              if ((cVar11 == '\x01') && (param_2[0x10] == '\x01')) {
                bVar16 = true;
              }
              else {
                bVar16 = false;
              }
              bVar2 = *(longlong *)(pcVar8 + 8) < *(longlong *)(param_2 + 0x18);
              if (bVar16) {
                bVar2 = *(longlong *)(pcVar8 + 8) <= *(longlong *)(param_2 + 0x18);
              }
            }
            if ((bVar3) && (bVar2)) goto LAB_1408f0805;
          }
        }
      }
      iVar10 = (int)param_1[1];
      iVar9 = iVar9 + 1;
      lVar15 = lVar15 + 1;
    } while (iVar9 < iVar10);
  }
  *(int *)(param_1 + 1) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar10);
  }
  pcVar8 = (char *)((longlong)iVar10 * 0x20 + *param_1);
  *pcVar8 = *param_2;
  *(undefined8 *)(pcVar8 + 8) = *(undefined8 *)(param_2 + 8);
  pcVar8[0x10] = param_2[0x10];
  *(undefined8 *)(pcVar8 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



// FUNCTION 1408f0970 Call body=60 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_95246997226aefcd78e735d32b755d1a>,void___cdecl(void)>::Call
               (longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001408f09a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1408f0a10 Close body=476 status=ok
// SIG undefined Close(void)

void FImgMediaPlayer::Close(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  BOOL BVar7;
  undefined4 uVar8;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  lVar4 = *(longlong *)(param_1 + 0x70);
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x78);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    lVar6 = *(longlong *)(param_1 + 0x88);
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x30));
    if (BVar7 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x30));
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
    }
    local_38 = lVar4;
    local_30 = plVar5;
    uVar8 = TArray<TWeakPtr<FImgMediaLoader,1>,FDefaultAllocator>::Find(lVar6 + 0x58,&local_38);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
    FImgMediaScheduler::RemoveLoader(lVar6,uVar8);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x30));
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    local_40 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x70) != &local_48) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      local_48 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_40);
      plVar5 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0x8000000000000000;
    *(undefined1 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
    (**(code **)**(undefined8 **)(param_1 + 0x60))(*(undefined8 **)(param_1 + 0x60),9);
    (**(code **)**(undefined8 **)(param_1 + 0x60))(*(undefined8 **)(param_1 + 0x60),1);
  }
  return;
}



// FUNCTION 1408f0bf0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*,TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FKeyFuncs,FDefaultSetAllocator>
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



// FUNCTION 1408f0ca0 CopyToEmptyStorage body=132 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_f9137097983a92580ae4faefa4f1a59d>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_144146c18;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    FString::FString(puVar2 + 4,param_1 + 0x20);
    FString::FString(puVar2 + 6,param_1 + 0x30);
    *(undefined1 *)(puVar2 + 8) = *(undefined1 *)(param_1 + 0x40);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1408f0d40 DestroyObject body=35 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FImgMediaTextureSample>::DestroyObject
               (longlong param_1)

{
  FImgMediaFrame::~FImgMediaFrame(param_1 + 0x20);
  *(undefined ***)(param_1 + 0x10) = &PTR__purecall_144146aa0;
  return;
}



// FUNCTION 1408f0d70 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FImgMediaFrame,SharedPointerInternals::DefaultDeleter<FImgMediaFrame>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FImgMediaFrame::~FImgMediaFrame(lVar1);
    FMemory::operator_delete(lVar1,0x60);
    return;
  }
  return;
}



// FUNCTION 1408f0da0 DestroyObject body=101 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<TFutureState<int>,SharedPointerInternals::DefaultDeleter<TFutureState<int>_>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1415b5910();
    *(undefined8 *)(lVar1 + 0x50) = 0;
    if (*(int *)(lVar1 + 0x40) != 0) {
      plVar2 = *(longlong **)(lVar1 + 0x30);
      if (*(longlong **)(lVar1 + 0x30) == (longlong *)0x0) {
        plVar2 = (longlong *)(lVar1 + 0x10);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x70);
    return;
  }
  return;
}



// FUNCTION 1408f0e10 FUN_1408f0e10 body=22 status=ok
// SIG undefined FUN_1408f0e10(void)

void FUN_1408f0e10(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001408f0e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1408f0e30 FUN_1408f0e30 body=9 status=ok
// SIG undefined FUN_1408f0e30(void)

void FUN_1408f0e30(longlong param_1)

{
  FMemory::Free(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1408f0e40 FUN_1408f0e40 body=9 status=ok
// SIG undefined FUN_1408f0e40(void)

void FUN_1408f0e40(longlong param_1)

{
  FMemory::Free(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1408f0e50 FUN_1408f0e50 body=53 status=ok
// SIG undefined FUN_1408f0e50(void)

void FUN_1408f0e50(longlong *param_1)

{
  FUN_1408eeee0(param_1 + 0xc,param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001408f0e7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1408f0e90 DoThreadedWork body=169 status=ok
// SIG undefined DoThreadedWork(void)

void FImgMediaLoaderWork::DoThreadedWork(longlong param_1)

{
  char cVar1;
  void *_Dst;
  
  if ((*(int *)(param_1 + 8) != -1) && (1 < *(int *)(param_1 + 0x18))) {
    _Dst = (void *)operator_new(0x60);
    if (_Dst == (void *)0x0) {
      _Dst = (void *)0x0;
    }
    else {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
      *(undefined8 *)((longlong)_Dst + 0x20) = 0;
      *(undefined8 *)((longlong)_Dst + 0x30) = 0;
      *(undefined8 *)((longlong)_Dst + 0x38) = 0;
      *(undefined4 *)((longlong)_Dst + 0x40) = 60000;
      *(undefined4 *)((longlong)_Dst + 0x44) = 1;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 8))
                      (*(longlong **)(param_1 + 0x30),param_1 + 0x10,_Dst);
    if (cVar1 != '\0') goto LAB_1408f0f24;
    if (_Dst != (void *)0x0) {
      FImgMediaFrame::~FImgMediaFrame(_Dst);
      FMemory::operator_delete(_Dst,0x60);
    }
  }
  _Dst = (void *)0x0;
LAB_1408f0f24:
  Finalize(param_1,_Dst);
  return;
}



// FUNCTION 1408f0f40 Empty body=782 status=ok
// SIG undefined Empty(void)

void TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::Empty
               (longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  uint local_a8;
  uint uStack_a4;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  uVar12 = 0;
  uStack_a4 = 1;
  uVar8 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  local_a8 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar8 != 0) {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = *puVar14;
    uVar15 = uVar12;
    uVar11 = uVar12;
    while (uVar13 == 0) {
      iVar7 = (int)uVar15;
      uStack_90 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uStack_90;
      local_a8 = iVar7 + 1;
      uVar15 = (ulonglong)local_a8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1408f100f;
      uVar13 = puVar14[(longlong)iVar7 + 1];
    }
    uStack_a4 = -uVar13 & uVar13;
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
    uStack_94 = (uStack_90 - iVar7) + 0x1f;
    if ((int)uVar8 < (int)uStack_94) {
LAB_1408f100f:
      uStack_94 = uVar8;
    }
  }
  uStack_74 = *(uint *)(param_1 + 5);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  local_40 = CONCAT44(uStack_8c,uStack_90);
  uVar13 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_50 = puVar1;
  if (uStack_74 != uVar8) {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar10 = puVar14[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
    iVar7 = (int)uStack_74 >> 5;
    while (uVar10 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1408f10ec;
      uVar10 = puVar14[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar7 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar13 - iVar7) + 0x1f;
    if ((int)uVar8 < (int)uStack_74) {
LAB_1408f10ec:
      uStack_74 = uVar8;
    }
  }
  while ((uStack_44 != uStack_74 || (local_50 != puVar1))) {
    lVar4 = *(longlong *)(*param_1 + (longlong)(int)uStack_44 * 0x10);
    if (lVar4 != 0) {
      plVar9 = *(longlong **)(lVar4 + 0x20);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          iVar7 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      FMemory::operator_delete(lVar4,0x28);
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  *(int *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar8 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar8) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar8;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  cVar6 = TSet<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*,TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FKeyFuncs,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2,1);
  if ((cVar6 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
    uVar15 = (ulonglong)*(uint *)(param_1 + 9);
    do {
      uVar11 = (longlong)(int)param_1[9] - 1U & uVar12;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      uVar12 = uVar12 + 1;
      *(undefined4 *)((longlong)plVar9 + uVar11 * 4) = 0xffffffff;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  param_1[0xb] = 0;
  param_1[10] = 0;
  return;
}



// FUNCTION 1408f1250 FUN_1408f1250 body=336 status=ok
// SIG undefined FUN_1408f1250(void)

void FUN_1408f1250(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  FUN_1408eeee0(param_1 + 0xc,param_1 + 2);
  plVar7 = (longlong *)param_1[0xd];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar7 = (longlong *)0x0;
  if (*(int *)(param_1 + 10) != 0) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 4;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144145d30;
  if (param_1[0x11] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x11] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar5 = TlsGetValue(*pDVar4);
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar5 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar5 = plVar6;
    }
    TlsSetValue(*pDVar4,plVar5);
  }
  if ((int)plVar5[2] < 0x20) {
    plVar7 = (longlong *)plVar5[1];
  }
  else {
    if (*plVar5 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *plVar5 = plVar5[1];
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  plVar5[1] = (longlong)param_1;
  return;
}



// FUNCTION 1408f13a0 FetchVideo body=437 status=ok
// SIG undefined FetchVideo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FImgMediaPlayer::FetchVideo(longlong param_1,undefined8 param_2,longlong **param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  longlong *local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar6 = *(int *)(param_1 + 0x24) - 2;
  if ((uVar6 < 2) && (*(int *)(param_1 + 0x80) == 0)) {
    plVar7 = (longlong *)
             FImgMediaLoader::GetFrameSample
                       (*(undefined8 *)(param_1 + 0x58),local_50,*(undefined8 *)(param_1 + 0x28));
    plVar4 = (longlong *)plVar7[1];
    plVar7 = (longlong *)*plVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    if ((plVar7 == (longlong *)0x0) ||
       ((**(code **)(*plVar7 + 0x38))(plVar7,&local_58), local_58 == *(longlong *)(param_1 + 0x50)))
    {
      lVar8 = 0;
    }
    else {
      *(longlong *)(param_1 + 0x50) = local_58;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_68 = plVar7;
      plStack_60 = plVar4;
      if (&local_68 != param_3) {
        local_68 = *param_3;
        plStack_60 = param_3[1];
        *param_3 = plVar7;
        param_3[1] = plVar4;
        local_40 = plVar7;
        plStack_38 = plVar4;
      }
      plVar7 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      lVar8 = 1;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar4 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
    lVar8 = (ulonglong)(uint3)(uVar6 >> 8) << 8;
  }
  return lVar8;
}



// FUNCTION 1408f1560 Finalize body=768 status=ok
// SIG undefined Finalize(void)

void FImgMediaLoaderWork::Finalize(longlong *param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  int iVar3;
  BOOL BVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  bool bVar15;
  int local_68 [2];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  
  plVar14 = (longlong *)param_1[5];
  plVar10 = (longlong *)0x0;
  plVar5 = plVar14;
  local_58 = plVar14;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar14[1];
    bVar15 = iVar3 == 0;
    if (bVar15) {
      *(int *)(plVar14 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar10, !bVar15) {
      LOCK();
      bVar15 = iVar3 == (int)plVar14[1];
      if (bVar15) {
        *(int *)(plVar14 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar15) {
        plVar5 = plVar14;
        if ((plVar14 != (longlong *)0x0) && (lVar2 = param_1[4], local_60 = lVar2, lVar2 != 0)) {
          plVar5 = (longlong *)operator_new(0x18);
          local_48 = plVar10;
          if (plVar5 != (longlong *)0x0) {
            *(undefined4 *)(plVar5 + 1) = 1;
            *plVar5 = (longlong)&PTR_DestroyObject_144146c30;
            *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
            plVar5[2] = param_2;
            local_48 = plVar5;
          }
          local_50 = param_2;
          SharedPointerInternals::EnableSharedFromThis(&local_50,param_2);
          iVar3 = (int)param_1[1];
          lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x18);
          local_68[0] = iVar3;
          BVar4 = TryEnterCriticalSection(lpCriticalSection);
          if (BVar4 == 0) {
            EnterCriticalSection(lpCriticalSection);
          }
          iVar1 = *(int *)(lVar2 + 0x138);
          lVar6 = (longlong)iVar1;
          lVar12 = lVar2;
          if (iVar1 != 0) {
            iVar13 = 0;
            lVar11 = 0;
            bVar15 = **(int **)(lVar2 + 0x130) != iVar3;
            do {
              iVar9 = (int)plVar10;
              lVar11 = lVar11 + 1;
              plVar10 = (longlong *)(ulonglong)(iVar9 + 1);
              if (lVar11 < lVar6) {
                piVar7 = (int *)(*(longlong *)(lVar2 + 0x130) + lVar11 * 4);
                do {
                  if (bVar15 != (*piVar7 != iVar3)) break;
                  plVar10 = (longlong *)(ulonglong)((int)plVar10 + 1);
                  lVar11 = lVar11 + 1;
                  piVar7 = piVar7 + 1;
                } while (lVar11 < lVar6);
              }
              iVar8 = (int)plVar10 - iVar9;
              if (bVar15 != false) {
                if (iVar13 != iVar9) {
                  ::_guard_xfg_dispatch_icall_nop
                            ((void *)(*(longlong *)(lVar2 + 0x130) + (longlong)iVar13 * 4),
                             (void *)(*(longlong *)(lVar2 + 0x130) + (longlong)iVar9 * 4),
                             (longlong)iVar8 << 2);
                }
                iVar13 = iVar13 + iVar8;
              }
              plVar14 = local_58;
              lVar12 = local_60;
              bVar15 = (bool)(bVar15 ^ 1);
            } while (lVar11 < lVar6);
            *(int *)(lVar2 + 0x138) = iVar13;
            if ((0 < iVar1 - iVar13) && (local_50 != 0)) {
              TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::Add
                        (local_60 + 0x40,local_68,&local_50);
            }
          }
          iVar3 = *(int *)(lVar12 + 0x148);
          *(int *)(lVar12 + 0x148) = iVar3 + 1;
          if (*(int *)(lVar12 + 0x14c) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar12 + 0x140,iVar3);
          }
          *(longlong **)(*(longlong *)(lVar12 + 0x140) + (longlong)iVar3 * 8) = param_1;
          LeaveCriticalSection(lpCriticalSection);
          plVar5 = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_48 + 1;
            lVar2 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar7 = (int *)((longlong)plVar5 + 0xc);
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          goto LAB_1408f15fa;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar14[1];
      bVar15 = iVar3 == 0;
      if (bVar15) {
        *(int *)(plVar14 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  if (param_2 != 0) {
    FImgMediaFrame::~FImgMediaFrame(param_2);
    FMemory::operator_delete(param_2,0x60);
  }
  plVar14 = plVar5;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1,1);
  }
LAB_1408f15fa:
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar14 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar7 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  return;
}



// FUNCTION 1408f1860 Find body=341 status=ok
// SIG undefined Find(void)

ulonglong TArray<TWeakPtr<FImgMediaLoader,1>,FDefaultAllocator>::Find
                    (longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  bool bVar12;
  
  puVar3 = (undefined8 *)*param_1;
  lVar5 = param_1[1];
  puVar10 = puVar3;
  do {
    if (puVar10 == puVar3 + (longlong)(int)lVar5 * 2) {
      return 0xffffffff;
    }
    plVar8 = (longlong *)0x0;
    plVar4 = (longlong *)puVar10[1];
    plVar9 = plVar4;
    plVar11 = plVar8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(plVar4 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (plVar9 = plVar8, !bVar12) {
        LOCK();
        bVar12 = iVar7 == (int)plVar4[1];
        if (bVar12) {
          *(int *)(plVar4 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar12) {
          plVar9 = plVar4;
          plVar11 = (longlong *)*puVar10;
          break;
        }
        LOCK();
        iVar7 = (int)plVar4[1];
        bVar12 = iVar7 == 0;
        if (bVar12) {
          *(int *)(plVar4 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
    }
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(plVar4 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (plVar8 = (longlong *)0x0, !bVar12) {
        LOCK();
        bVar12 = iVar7 == (int)plVar4[1];
        if (bVar12) {
          *(int *)(plVar4 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar12) {
          plVar8 = (longlong *)0x0;
          if (plVar4 != (longlong *)0x0) {
            plVar8 = (longlong *)*param_2;
            LOCK();
            plVar1 = plVar4 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          break;
        }
        LOCK();
        iVar7 = (int)plVar4[1];
        bVar12 = iVar7 == 0;
        if (bVar12) {
          *(int *)(plVar4 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
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
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (plVar11 == plVar8) {
      return (longlong)puVar10 - (longlong)puVar3 >> 4 & 0xffffffff;
    }
    puVar10 = puVar10 + 2;
  } while( true );
}



// FUNCTION 1408f19c0 FindAndTouch body=216 status=ok
// SIG undefined FindAndTouch(void)

longlong TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FindAndTouch
                   (longlong *param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar3;
        piVar2 = *(int **)(lVar1 + lVar4 * 0x10);
        if (*piVar2 == *param_2) {
          if (iVar3 == -1) {
            return 0;
          }
          plVar5 = (longlong *)(lVar4 * 0x10 + lVar1);
          if (plVar5 == (longlong *)0x0) {
            return 0;
          }
          if ((piVar2 == (int *)param_1[10]) &&
             (lVar1 = *(longlong *)((int *)param_1[10] + 4), lVar1 != 0)) {
            param_1[10] = lVar1;
          }
          if (piVar2 != (int *)param_1[0xb]) {
            if (*(longlong *)(piVar2 + 2) != 0) {
              *(undefined8 *)(*(longlong *)(piVar2 + 2) + 0x10) = *(undefined8 *)(piVar2 + 4);
            }
            if (*(longlong *)(piVar2 + 4) != 0) {
              *(undefined8 *)(*(longlong *)(piVar2 + 4) + 8) = *(undefined8 *)(piVar2 + 2);
            }
            piVar2[2] = 0;
            piVar2[3] = 0;
            piVar2[4] = 0;
            piVar2[5] = 0;
            lVar1 = param_1[0xb];
            *(longlong *)(piVar2 + 2) = lVar1;
            if (lVar1 != 0) {
              *(int **)(lVar1 + 0x10) = piVar2;
            }
            param_1[0xb] = (longlong)piVar2;
          }
          return *plVar5 + 0x18;
        }
        iVar3 = *(int *)(lVar1 + 8 + lVar4 * 0x10);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1408f1ab0 FrameNumbersToTimeRanges body=265 status=ok
// SIG undefined FrameNumbersToTimeRanges(void)

void FImgMediaLoader::FrameNumbersToTimeRanges
               (longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong local_20;
  undefined1 local_18;
  longlong local_10;
  
  if ((0 < *(int *)(param_1 + 0x114)) && (0 < *(int *)(param_1 + 0x110))) {
    uVar1 = 0;
    piVar3 = (int *)*param_2;
    uVar2 = (longlong)*(int *)(param_2 + 1) & 0x3fffffffffffffff;
    if (piVar3 + *(int *)(param_2 + 1) < piVar3) {
      uVar2 = uVar1;
    }
    if (uVar2 != 0) {
      do {
        local_10 = (longlong)*(int *)(param_1 + 0x110);
        lVar4 = local_10;
        if (local_10 < 0) {
          lVar4 = local_10 + 1;
        }
        local_28[0] = 1;
        local_18 = 0;
        local_20 = (longlong)
                   ((lVar4 >> 1) + (ulonglong)(uint)(*(int *)(param_1 + 0x114) * *piVar3) * 10000000
                   ) / local_10;
        local_10 = (longlong)
                   ((ulonglong)(uint)((*piVar3 + 1) * *(int *)(param_1 + 0x114)) * 10000000 +
                   (lVar4 >> 1)) / local_10;
        TRangeSet<FTimespan>::Add(param_3,local_28);
        piVar3 = piVar3 + 1;
        uVar1 = uVar1 + 1;
      } while (uVar1 != uVar2);
    }
  }
  return;
}



// FUNCTION 1408f1bc0 GetNumIndices body=4 status=ok
// SIG undefined GetNumIndices(void)

undefined4 TMeshAttributeArraySet<int>::GetNumIndices(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// FUNCTION 1408f1bd0 GetFrameInfo body=75 status=ok
// SIG undefined GetFrameInfo(void)

undefined1
FExrImgMediaReader::GetFrameInfo(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 local_res20 [8];
  
  FRgbaInputFile::FRgbaInputFile(local_res20,param_2,2);
  uVar1 = GetInfo(param_1,local_res20,param_3);
  FRgbaInputFile::~FRgbaInputFile(local_res20);
  return uVar1;
}



// FUNCTION 1408f1c20 FUN_1408f1c20 body=161 status=ok
// SIG undefined FUN_1408f1c20(void)

bool FUN_1408f1c20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_28;
  longlong *local_20;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  FUN_1408f3550(&local_28,param_2,*(undefined8 *)(param_1 + 8),local_18,param_3);
  plVar5 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return local_28 != 0;
}



// FUNCTION 1408f1cd0 GetFrameSample body=756 status=ok
// SIG undefined GetFrameSample(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FImgMediaLoader::GetFrameSample(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  BOOL BVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *plStack_80;
  int local_78 [2];
  longlong *local_70;
  longlong *local_68;
  longlong *local_58;
  longlong local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if ((param_3 < 0) || (*(longlong *)(param_1 + 0x108) < param_3)) {
    iVar5 = -1;
  }
  else {
    iVar5 = (int)((*(int *)(param_1 + 0x110) * param_3) /
                 ((longlong)*(int *)(param_1 + 0x114) * 10000000));
  }
  if (iVar5 == -1) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_78[0] = iVar5;
    BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (BVar6 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    plVar7 = (longlong *)
             TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FindAndTouch
                       (param_1 + 0x40,local_78);
    if (plVar7 == (longlong *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    else {
      lVar11 = (longlong)*(int *)(param_1 + 0x110);
      lVar8 = (longlong)
              (lVar11 / 2 + (ulonglong)(uint)(*(int *)(param_1 + 0x114) * iVar5) * 10000000) /
              lVar11;
      uVar10 = (ulonglong)(uint)((iVar5 + 1) * *(int *)(param_1 + 0x114));
      lVar9 = uVar10 * 10000000 + lVar11 / 2;
      local_68 = (longlong *)
                 SharedPointerInternals::NewIntrusiveReferenceController<FImgMediaTextureSample>
                           (uVar10,lVar9 % lVar11);
      local_70 = local_68 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_70,local_70,local_70);
      plVar4 = local_70;
      plVar7 = (longlong *)*plVar7;
      local_58 = local_70;
      local_70[1] = lVar9 / lVar11 - lVar8;
      plVar1 = local_70 + 2;
      plVar3 = (longlong *)plVar7[1];
      lVar9 = *plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_88 = lVar9;
      plStack_80 = plVar3;
      if (&local_88 != plVar1) {
        local_88 = *plVar1;
        plStack_80 = (longlong *)local_70[3];
        *plVar1 = lVar9;
        local_70[3] = (longlong)plVar3;
        local_50 = lVar9;
        plStack_48 = plVar3;
      }
      plVar1 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_80 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
      }
      *(int *)(plVar4 + 4) = (int)plVar7[2];
      FString::operator=(plVar4 + 5,plVar7 + 3);
      *(int *)(plVar4 + 7) = (int)plVar7[5];
      *(undefined4 *)((longlong)plVar4 + 0x3c) = *(undefined4 *)((longlong)plVar7 + 0x2c);
      FString::operator=(plVar4 + 8,plVar7 + 6);
      plVar1 = local_68;
      plVar4[10] = plVar7[8];
      *(char *)(plVar4 + 0xb) = (char)plVar7[9];
      plVar4[0xc] = plVar7[10];
      *(int *)(plVar4 + 0xd) = (int)plVar7[0xb];
      *(undefined4 *)(local_58 + 0xe) = *(undefined4 *)(param_1 + 0x100);
      *(undefined4 *)((longlong)local_58 + 0x74) = *(undefined4 *)(param_1 + 0x104);
      local_58[0xf] = lVar8;
      *param_2 = local_70;
      param_2[1] = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_68 + 1;
          lVar9 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
            }
          }
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
  }
  return param_2;
}



// FUNCTION 1408f1fd0 GetFullPath body=346 status=ok
// SIG undefined GetFullPath(void)

undefined8 UImgMediaSource::GetFullPath(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)(param_1 + 0x50);
  cVar3 = FPaths::IsRelative(puVar1);
  if (cVar3 == '\0') {
    FString::FString(param_2,puVar1);
    return param_2;
  }
  cVar3 = FString::StartsWith(puVar1,&DAT_144144c20,1);
  if (cVar3 == '\0') {
    FPaths::ConvertRelativePathToFull(param_2,puVar1);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x58);
    lVar8 = -1;
    if (iVar6 == 0) {
      puVar9 = &DAT_143f3eda8;
      iVar5 = -1;
    }
    else {
      puVar9 = (undefined2 *)*puVar1;
      iVar5 = iVar6 + -1;
    }
    iVar10 = 0;
    if (iVar6 == 0) {
      iVar5 = iVar10;
    }
    iVar6 = iVar5 + -2;
    if ((-1 < iVar6) && (iVar10 = iVar5, iVar6 < iVar5)) {
      iVar10 = iVar6;
    }
    local_28 = 0;
    local_20 = 0;
    psVar2 = puVar9 + ((longlong)iVar5 - (longlong)iVar10);
    if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
      do {
        lVar8 = lVar8 + 1;
      } while (psVar2[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_20 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Memcpy(local_28,psVar2,(longlong)(int)uVar7 * 2);
    }
    uVar4 = FPaths::ProjectContentDir(local_18);
    FPaths::ConvertRelativePathToFull(param_2,uVar4,&local_28);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1408f2130 GetInfo body=333 status=ok
// SIG undefined GetInfo(void)

ulonglong FExrImgMediaReader::GetInfo(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  short *_Src;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_res18 [16];
  int iVar9;
  
  _Src = (short *)FUN_1408f7590(param_2);
  iVar9 = 0;
  iVar8 = 0;
  if ((short *)*param_3 != _Src) {
    iVar6 = iVar9;
    if ((_Src != (short *)0x0) && (*_Src != 0)) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (_Src[lVar7] != 0);
      iVar6 = (int)lVar7 + 1;
    }
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,iVar6);
      iVar9 = *(int *)(param_3 + 1);
    }
    *(int *)(param_3 + 1) = iVar9 + iVar6;
    if (*(int *)((longlong)param_3 + 0xc) < iVar9 + iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
    }
    if (iVar6 != 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)*param_3,_Src,(longlong)iVar6 * 2);
    }
  }
  puVar2 = (undefined4 *)FRgbaInputFile::GetDataWindow(param_2,local_res18);
  *(undefined4 *)(param_3 + 2) = *puVar2;
  *(undefined4 *)((longlong)param_3 + 0x14) = puVar2[1];
  if ((undefined8 *)param_3[3] != &DAT_144145cb8) {
    *(undefined4 *)(param_3 + 4) = 0;
    if (*(int *)((longlong)param_3 + 0x24) != 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3 + 3,4);
      iVar8 = *(int *)(param_3 + 4);
    }
    *(int *)(param_3 + 4) = iVar8 + 4;
    if (*(int *)((longlong)param_3 + 0x24) < iVar8 + 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3 + 3,iVar8);
    }
    *(undefined8 *)param_3[3] = 0x5200580045;
  }
  puVar3 = (undefined8 *)FRgbaInputFile::GetFrameRate(param_2,local_res18,&DAT_146286488);
  param_3[5] = *puVar3;
  *(undefined1 *)(param_3 + 6) = 0;
  uVar4 = FRgbaInputFile::GetUncompressedSize(param_2);
  param_3[7] = (longlong)(int)uVar4;
  if ((int)uVar4 != 0) {
    uVar1 = *(uint *)(param_3 + 2);
    uVar4 = (ulonglong)uVar1;
    uVar5 = *(uint *)((longlong)param_3 + 0x14);
    if ((int)uVar1 <= (int)*(uint *)((longlong)param_3 + 0x14)) {
      uVar5 = uVar1;
    }
    if (0 < (int)uVar5) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1408f2280 GetInfo body=249 status=ok
// SIG undefined GetInfo(void)

undefined8 * FImgMediaPlayer::GetInfo(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  void **ppvVar6;
  void *pvVar7;
  void *local_38;
  int local_30;
  undefined4 uStack_2c;
  void *local_28;
  undefined8 local_20;
  
  lVar3 = *(longlong *)(param_1 + 0x70);
  pvVar7 = (void *)0x0;
  if (lVar3 == 0) {
    local_20 = 0;
    ppvVar6 = &local_28;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    iVar1 = *(int *)(lVar3 + 200);
    _Src = *(void **)(lVar3 + 0xc0);
    local_38 = (void *)0x0;
    local_30 = iVar1;
    if (iVar1 == 0) {
      ppvVar6 = &local_38;
      uStack_2c = 0;
      bVar5 = true;
      bVar4 = false;
      pvVar7 = (void *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar1,0);
      pvVar7 = local_38;
      ::_guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar1 * 2);
      ppvVar6 = &local_38;
      bVar5 = true;
      bVar4 = false;
    }
  }
  *ppvVar6 = (void *)0x0;
  uVar2 = *(undefined4 *)(ppvVar6 + 1);
  *param_2 = pvVar7;
  *(undefined4 *)(param_2 + 1) = uVar2;
  ppvVar6[1] = (void *)0x0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppvVar6 + 0xc);
  if (bVar4) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar5) && (local_38 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408f2380 GetKeys body=535 status=ok
// SIG undefined GetKeys(void)

void TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::GetKeys
               (longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
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
  
  uVar2 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  uStack_84 = 1;
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar2 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar3 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar8 = local_88 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar8;
      if (bVar5) goto LAB_1408f244d;
      uVar3 = puVar10[lVar6 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
    iVar8 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_74 = (iStack_70 - iVar8) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_1408f244d:
      uStack_74 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 5);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar3 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = param_1;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar3;
  if (uVar3 != uVar2) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar8 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1408f2510;
      uVar7 = puVar10[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar8 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_74 = (uVar9 - iVar8) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_1408f2510:
      uStack_74 = uVar2;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    iVar8 = (int)param_2[1];
    puVar4 = *(undefined4 **)(*param_1 + (longlong)(int)uStack_4c * 0x10);
    *(int *)(param_2 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
    }
    *(undefined4 *)(*param_2 + (longlong)iVar8 * 4) = *puVar4;
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 1408f25a0 GetMediaName body=113 status=ok
// SIG undefined GetMediaName(void)

undefined8 IMediaPlayer::GetMediaName(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong local_28;
  int local_20;
  longlong local_18 [2];
  
  (**(code **)(*param_1 + 0x40))(param_1,&local_28);
  if (local_20 < 2) {
    uVar1 = FUN_1404b03b0();
    FText::FText(param_2,uVar1);
  }
  else {
    uVar1 = FUN_141671940(local_18,&local_28,1);
    FText::FromString(param_2,uVar1);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408f2620 GetMediaOption body=56 status=ok
// SIG undefined GetMediaOption(void)

undefined8 UImgMediaSource::GetMediaOption(longlong param_1,undefined8 param_2,longlong *param_3)

{
  if (*param_3 == DAT_146862738) {
    FString::FString(param_2,param_1 + 0x18);
    return param_2;
  }
  UMediaSource::GetMediaOption();
  return param_2;
}



// FUNCTION 1408f2690 GetNumTrackFormats body=36 status=ok
// SIG undefined GetNumTrackFormats(void)

undefined8 FImgMediaPlayer::GetNumTrackFormats(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = (**(code **)(*param_1 + 8))();
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1408f26f0 FUN_1408f26f0 body=123 status=ok
// SIG undefined FUN_1408f26f0(void)

undefined8 * FUN_1408f26f0(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146862750) {
    _Init_thread_header(&DAT_146862750);
    if (DAT_146862750 == -1) {
      FName::FName(&DAT_146862748,L"ImgMedia",1);
      _Init_thread_footer(&DAT_146862750);
    }
  }
  *param_2 = DAT_146862748;
  return param_2;
}



// FUNCTION 1408f2770 GetProxies body=193 status=ok
// SIG undefined GetProxies(void)

void UImgMediaSource::GetProxies(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined *local_20;
  longlong local_18 [2];
  
  plVar1 = (longlong *)FUN_1415c3d50();
  puVar2 = (undefined8 *)GetFullPath(param_1,local_18);
  if (*(int *)(puVar2 + 1) == 0) {
    local_28 = &DAT_143f3eda8;
  }
  else {
    local_28 = (undefined2 *)*puVar2;
  }
  local_20 = &DAT_1441448ec;
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  FPaths::CombineInternal(&local_38,&local_28,2);
  puVar3 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar3 = local_38;
  }
  (**(code **)(*plVar1 + 0x78))(plVar1,param_2,puVar3,0,1);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408f2880 GetState body=4 status=ok
// SIG undefined GetState(void)

undefined4 FImgMediaPlayer::GetState(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// FUNCTION 1408f2890 GetStats body=176 status=ok
// SIG undefined GetStats(void)

longlong * FImgMediaPlayer::GetStats(undefined8 param_1,longlong *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  *param_2 = 0;
  param_2[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  builtin_wcsncpy((wchar_t *)*param_2,L"not implemented yet",0x14);
  iVar2 = (int)param_2[1];
  iVar3 = (2 - (uint)(iVar2 != 0)) + iVar2;
  *(int *)(param_2 + 1) = iVar3;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
  *puVar1 = 10;
  puVar1[1] = 0;
  return param_2;
}



// FUNCTION 1408f2940 GetNumVariants body=4 status=ok
// SIG undefined GetNumVariants(void)

undefined4 UVariantSet::GetNumVariants(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// FUNCTION 1408f2950 GetSupportedRates body=93 status=ok
// SIG undefined GetSupportedRates(void)

undefined8 * FImgMediaPlayer::GetSupportedRates(longlong param_1,undefined8 *param_2)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(uint *)(param_1 + 0x2c) & 0xfffffffa) != 0) || (*(uint *)(param_1 + 0x2c) == 5)) {
    local_14 = 0xc7c35000;
    local_c = 0x47c35000;
    local_18[0] = 1;
    local_10 = 1;
    TRangeSet<float>::Add(param_2,local_18);
  }
  return param_2;
}



// FUNCTION 1408f29c0 GetTrackDisplayName body=98 status=ok
// SIG undefined GetTrackDisplayName(void)

undefined8
FImgMediaPlayer::GetTrackDisplayName(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  if (((((*(uint *)(param_1 + 0x1c) & 0xfffffffa) != 0) || (*(uint *)(param_1 + 0x1c) == 5)) &&
      (param_3 == 6)) && (param_4 == 0)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"Video Track",L"FImgMediaPlayer",L"DefaultVideoTrackName");
    return param_2;
  }
  uVar1 = FUN_1404b03b0();
  FText::FText(param_2,uVar1);
  return param_2;
}



// FUNCTION 1408f2a30 GetTrackFormat body=26 status=ok
// SIG undefined GetTrackFormat(void)

int FImgMediaPlayer::GetTrackFormat(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  return (iVar1 != -1) - 1;
}



// FUNCTION 1408f2a50 GetTrackLanguage body=106 status=ok
// SIG undefined GetTrackLanguage(void)

undefined8 *
FImgMediaPlayer::GetTrackLanguage(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  if (((((*(uint *)(param_1 + 0x1c) & 0xfffffffa) != 0) || (*(uint *)(param_1 + 0x1c) == 5)) &&
      (param_3 == 6)) && (param_4 == 0)) {
    *param_2 = 0;
    param_2[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,&DAT_144145c88,8);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1408f2ac0 GetTrackName body=106 status=ok
// SIG undefined GetTrackName(void)

undefined8 *
FImgMediaPlayer::GetTrackName(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  if (((((*(uint *)(param_1 + 0x1c) & 0xfffffffa) != 0) || (*(uint *)(param_1 + 0x1c) == 5)) &&
      (param_3 == 6)) && (param_4 == 0)) {
    *param_2 = 0;
    param_2[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"VideoTrack",0x16);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1408f2b30 FUN_1408f2b30 body=30 status=ok
// SIG undefined FUN_1408f2b30(void)

undefined8 FUN_1408f2b30(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x48);
  return param_2;
}



// FUNCTION 1408f2b50 GetUrl body=432 status=ok
// SIG undefined GetUrl(void)

longlong * UImgMediaSource::GetUrl(undefined8 param_1,longlong *param_2)

{
  void *_Dst;
  void *_Src;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  local_48 = 0;
  local_40 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  lVar6 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"img://",0xe);
  plVar2 = (longlong *)GetFullPath(param_1,local_38);
  if ((int)local_40 < 2) {
    *param_2 = 0;
    *param_2 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_2 + 1) = (int)plVar2[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  else {
    iVar7 = (int)plVar2[1] + -1;
    if ((int)plVar2[1] == 0) {
      iVar7 = 0;
    }
    if (((int)local_40 != 0) || (iVar1 = 1, iVar7 == 0)) {
      iVar1 = 0;
    }
    local_58 = lVar6;
    local_50 = (int)local_40;
    local_4c = local_40._4_4_;
    if (local_40._4_4_ < iVar7 + iVar1 + (int)local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    }
    iVar1 = local_50;
    _Src = (void *)*plVar2;
    lVar6 = local_58;
    iVar4 = local_50;
    iVar5 = local_4c;
    if (iVar7 != 0) {
      lVar3 = (longlong)local_50;
      local_50 = iVar7 + (uint)(local_50 == 0) + local_50;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar1);
      }
      iVar5 = local_4c;
      iVar4 = local_50;
      lVar6 = local_58;
      _Dst = (void *)(local_58 + (lVar3 - (ulonglong)(iVar1 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)_Dst) = 0;
    }
    *param_2 = lVar6;
    *(int *)((longlong)param_2 + 0xc) = iVar5;
    *(int *)(param_2 + 1) = iVar4;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408f2d00 GetUrl body=107 status=ok
// SIG undefined GetUrl(void)

undefined8 * UMediaSource::GetUrl(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\mediaassets\\public\\MediaSource.h",0x28,
             L"Pure virtual not implemented (%s)",L"UMediaSource::GetUrl");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\mediaassets\\public\\MediaSource.h",0x28,
             L"Pure virtual not implemented (%s)",L"UMediaSource::GetUrl");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1408f2d70 GetVideoTrackFormat body=240 status=ok
// SIG undefined GetVideoTrackFormat(void)

longlong FImgMediaPlayer::GetVideoTrackFormat
                   (longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float fVar6;
  wchar_t *pwVar7;
  int iVar8;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  if (((((uVar2 & 0xfffffffa) != 0) || (uVar2 == 5)) && (param_2 == 0)) && (param_3 == 0)) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    plVar1 = (longlong *)(param_4 + 8);
    *param_4 = *(undefined4 *)(lVar3 + 0x100);
    param_4[1] = *(undefined4 *)(lVar3 + 0x104);
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x110);
    pwVar7 = L"Image";
    fVar6 = (float)(int)uVar4 / (float)(int)((ulonglong)uVar4 >> 0x20);
    param_4[2] = fVar6;
    *(undefined1 *)(param_4 + 3) = 1;
    param_4[4] = fVar6;
    *(undefined1 *)(param_4 + 5) = 1;
    param_4[6] = fVar6;
    if ((wchar_t *)*plVar1 != L"Image") {
      param_4[10] = 0;
      iVar8 = 0;
      if (param_4[0xb] != 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,6);
        iVar8 = param_4[10];
      }
      param_4[10] = iVar8 + 6;
      if ((int)param_4[0xb] < iVar8 + 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      puVar5 = (undefined8 *)*plVar1;
      *puVar5 = 0x670061006d0049;
      pwVar7 = (wchar_t *)0x0;
      *(undefined4 *)(puVar5 + 1) = 0x65;
    }
    return CONCAT71((int7)((ulonglong)pwVar7 >> 8),1);
  }
  return (ulonglong)(uint3)(uVar2 >> 8) << 8;
}



// FUNCTION 1408f2e60 GetWork body=665 status=ok
// SIG undefined GetWork(void)

longlong * FImgMediaLoader::GetWork(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  BOOL BVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined4 uStackX_c;
  
  plVar9 = (longlong *)0x0;
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  plVar8 = plVar9;
  if (*(int *)(param_1 + 0x128) == 0) goto LAB_1408f30e3;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x120) + -4 + (longlong)*(int *)(param_1 + 0x128) * 4);
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
  if (*(int *)(param_1 + 0x148) < 1) {
    plVar8 = (longlong *)operator_new(0x40);
    plVar12 = plVar9;
    if (plVar8 == (longlong *)0x0) goto LAB_1408f2ff6;
    plVar10 = *(longlong **)(param_1 + 0xe8);
    lVar5 = *(longlong *)(param_1 + 0xe0);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    plVar11 = *(longlong **)(param_1 + 0x10);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar13 = iVar7 == 0;
      if (bVar13) {
        *(int *)(plVar11 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (!bVar13) {
        LOCK();
        bVar13 = iVar7 == (int)plVar11[1];
        if (bVar13) {
          *(int *)(plVar11 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar13) {
          if (plVar11 == (longlong *)0x0) goto LAB_1408f2faf;
          plVar9 = plVar11;
          plVar12 = *(longlong **)(param_1 + 8);
          break;
        }
        LOCK();
        iVar7 = (int)plVar11[1];
        bVar13 = iVar7 == 0;
        if (bVar13) {
          *(int *)(plVar11 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
      plVar11 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar9 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
LAB_1408f2faf:
    *(undefined4 *)(plVar8 + 1) = 0xffffffff;
    *plVar8 = (longlong)&PTR_DoThreadedWork_144146b20;
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar8[4] = (longlong)plVar12;
    plVar8[5] = (longlong)plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
    }
    plVar8[6] = lVar5;
    plVar8[7] = (longlong)plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    plVar9 = (longlong *)0x3;
  }
  else {
    plVar12 = *(longlong **)
               (*(longlong *)(param_1 + 0x140) + -8 + (longlong)*(int *)(param_1 + 0x148) * 8);
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
LAB_1408f2ff6:
    plVar11 = (longlong *)CONCAT44(uStackX_c,iVar3);
    plVar10 = (longlong *)CONCAT44(uStackX_c,iVar3);
    plVar8 = plVar12;
  }
  if ((((ulonglong)plVar9 & 2) != 0) &&
     (plVar9 = (longlong *)(ulonglong)((uint)plVar9 & 0xfffffffd), plVar11 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar5 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if ((((ulonglong)plVar9 & 1) != 0) && (plVar10 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar10 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xb0);
  *(int *)(plVar8 + 1) = iVar3;
  FString::operator=(plVar8 + 2,(longlong)iVar3 * 0x10 + lVar5);
  iVar7 = *(int *)(param_1 + 0x138);
  *(int *)(param_1 + 0x138) = iVar7 + 1;
  if (*(int *)(param_1 + 0x13c) < iVar7 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x130,iVar7);
  }
  *(int *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar7 * 4) = iVar3;
LAB_1408f30e3:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return plVar8;
}



// FUNCTION 1408f3100 GetWorkOrReturnToPool body=418 status=ok
// SIG undefined GetWorkOrReturnToPool(void)

longlong FImgMediaScheduler::GetWorkOrReturnToPool(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  BOOL BVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  if ((param_2 == 0) || (cVar4 = FUN_1415bac00(), cVar4 != '\0')) {
    iVar11 = 0;
    iVar2 = *(int *)(param_1 + 0x58);
    if (0 < iVar2) {
      do {
        iVar11 = iVar11 + 1;
        iVar7 = (*(int *)(param_1 + 0x60) + 1) % iVar2;
        plVar10 = (longlong *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x50));
        *(int *)(param_1 + 0x60) = iVar7;
        plVar9 = (longlong *)plVar10[1];
        plVar8 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          iVar7 = (int)plVar9[1];
          bVar12 = iVar7 == 0;
          if (bVar12) {
            *(int *)(plVar9 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
          while (plVar8 = (longlong *)0x0, !bVar12) {
            LOCK();
            bVar12 = iVar7 == (int)plVar9[1];
            if (bVar12) {
              *(int *)(plVar9 + 1) = iVar7 + 1;
            }
            UNLOCK();
            if (bVar12) {
              plVar8 = plVar9;
              if ((plVar9 != (longlong *)0x0) && (*plVar10 != 0)) {
                lVar6 = FImgMediaLoader::GetWork();
                if (lVar6 == 0) goto LAB_1408f31c3;
                LOCK();
                plVar8 = plVar9 + 1;
                lVar3 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
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
                goto LAB_1408f3277;
              }
              break;
            }
            LOCK();
            iVar7 = (int)plVar9[1];
            bVar12 = iVar7 == 0;
            if (bVar12) {
              *(int *)(plVar9 + 1) = 0;
              iVar7 = 0;
            }
            UNLOCK();
          }
        }
        RemoveLoader(param_1 + -8,*(undefined4 *)(param_1 + 0x60));
        plVar9 = plVar8;
LAB_1408f31c3:
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar9 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
      } while (iVar11 < iVar2);
    }
  }
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar2 + 1;
    if (*(int *)(param_1 + 0x24) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,iVar2);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 8) = param_2;
  }
  lVar6 = 0;
LAB_1408f3277:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return lVar6;
}



// FUNCTION 1408f32e0 FUN_1408f32e0 body=536 status=ok
// SIG undefined FUN_1408f32e0(void)

void FUN_1408f32e0(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  undefined2 *local_38;
  int local_30;
  
  if (*(int *)(param_1 + 0x18) < 1) {
    plVar5 = (longlong *)UImgMediaSettings::GetPrivateStaticClass();
    lVar6 = plVar5[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar6 = plVar5[0x1f];
    }
    iVar3 = *(int *)(lVar6 + 0x38);
    if (iVar3 < 1) {
      iVar3 = FUN_1416a58c0();
    }
    plVar5 = (longlong *)UImgMediaSettings::GetPrivateStaticClass();
    lVar6 = plVar5[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar6 = plVar5[0x1f];
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30);
    uVar2 = *(uint *)(lVar6 + 0x3c);
    if (*(uint *)(lVar6 + 0x3c) < 0x20000) {
      uVar2 = 0x20000;
    }
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      puVar7 = (undefined8 *)operator_new(0x38);
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        *puVar7 = &PTR_IsPromotedBuild_144146bb8;
        puVar7[1] = &PTR_LAB_144146be8;
        puVar7[2] = param_1 + 8;
        puVar7[3] = 0;
        *(undefined1 *)(puVar7 + 4) = 0;
        uVar8 = FUN_1415ab270(0);
        puVar7[6] = uVar8;
        DAT_146862754 = DAT_146862754 + 1;
        FString::PrintfImpl(&local_38,L"FImgMediaSchedulerThread %d");
        puVar9 = &DAT_143f3eda8;
        if (local_30 != 0) {
          puVar9 = local_38;
        }
        uVar8 = FUN_1415d42a0(puVar7,puVar9,uVar2,0,0xffffffffffffffff);
        puVar7[5] = uVar8;
        if (local_38 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      iVar1 = *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x28) = iVar1 + 1;
      if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar1);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = puVar7;
      iVar1 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar1);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar7;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 1408f3500 FUN_1408f3500 body=55 status=ok
// SIG undefined FUN_1408f3500(void)

void FUN_1408f3500(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144145cc0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    return;
  }
  return;
}



// FUNCTION 1408f3550 FUN_1408f3550 body=1091 status=ok
// SIG undefined FUN_1408f3550(void)

undefined8 *
FUN_1408f3550(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  wint_t wVar7;
  wint_t wVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  undefined2 *puVar13;
  wint_t *pwVar14;
  undefined2 *local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48 [2];
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*param_2;
  }
  cVar6 = FUN_141676460(param_4,puVar13,0);
  if (cVar6 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  uVar11 = FUN_141672300(local_48,param_2,0);
  FString::ToLower(uVar11,&local_68);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  pwVar14 = &DAT_1441449c0;
  puVar13 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar13 = local_68;
  }
  do {
    wVar7 = *(wint_t *)((longlong)(puVar13 + -0xa20a24e0) + (longlong)pwVar14);
    iVar10 = 0;
    if ((wVar7 == 0) && (*pwVar14 == 0)) goto LAB_1408f3631;
    if (wVar7 != *pwVar14) {
      wVar7 = towlower(wVar7);
      wVar8 = towlower(*pwVar14);
      if (wVar7 != wVar8) break;
    }
    pwVar14 = pwVar14 + 1;
  } while( true );
  if (wVar7 != wVar8) {
    pwVar14 = &DAT_1441449d0;
    puVar13 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar13 = local_68;
    }
    do {
      wVar7 = *(wint_t *)((longlong)(puVar13 + -0xa20a24e8) + (longlong)pwVar14);
      if ((wVar7 == 0) && (*pwVar14 == 0)) goto LAB_1408f3803;
      if (wVar7 != *pwVar14) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*pwVar14);
        if (wVar7 != wVar8) goto LAB_1408f36d9;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_1408f3631:
  uVar11 = 3;
  if ((undefined8 *)param_5[3] != &DAT_1441449c8) {
    *(undefined4 *)(param_5 + 4) = 0;
    iVar12 = iVar10;
    if (*(int *)((longlong)param_5 + 0x24) != 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5 + 3,4);
      iVar12 = *(int *)(param_5 + 4);
    }
    *(int *)(param_5 + 4) = iVar12 + 4;
    if (*(int *)((longlong)param_5 + 0x24) < iVar12 + 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5 + 3);
    }
    *(undefined8 *)param_5[3] = 0x50004d0042;
  }
  goto LAB_1408f3862;
LAB_1408f36d9:
  if (wVar7 != wVar8) {
    pwVar14 = &DAT_1441449d8;
    puVar13 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar13 = local_68;
    }
    do {
      wVar7 = *(wint_t *)((longlong)(puVar13 + -0xa20a24ec) + (longlong)pwVar14);
      if ((wVar7 == 0) && (*pwVar14 == 0)) break;
      if (wVar7 != *pwVar14) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*pwVar14);
        if (wVar7 != wVar8) goto LAB_1408f3736;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
  goto LAB_1408f3803;
LAB_1408f3791:
  if (wVar7 != wVar8) {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_1408f3963;
  }
LAB_1408f379b:
  uVar11 = 0;
  if ((undefined8 *)param_5[3] != &DAT_144144a00) {
    *(undefined4 *)(param_5 + 4) = 0;
    iVar12 = iVar10;
    if (*(int *)((longlong)param_5 + 0x24) != 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5 + 3,4);
      iVar12 = *(int *)(param_5 + 4);
    }
    *(int *)(param_5 + 4) = iVar12 + 4;
    if (*(int *)((longlong)param_5 + 0x24) < iVar12 + 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5 + 3);
    }
    *(undefined8 *)param_5[3] = 0x47004e0050;
  }
  goto LAB_1408f3862;
LAB_1408f3736:
  if (wVar7 != wVar8) {
    pwVar14 = &DAT_1441449f8;
    puVar13 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar13 = local_68;
    }
    do {
      wVar7 = *(wint_t *)((longlong)(puVar13 + -0xa20a24fc) + (longlong)pwVar14);
      if ((wVar7 == 0) && (*pwVar14 == 0)) goto LAB_1408f379b;
      if (wVar7 != *pwVar14) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*pwVar14);
        if (wVar7 != wVar8) goto LAB_1408f3791;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_1408f3803:
  uVar11 = 1;
  if ((undefined *)param_5[3] != &DAT_1441449e8) {
    *(undefined4 *)(param_5 + 4) = 0;
    iVar12 = iVar10;
    if (*(int *)((longlong)param_5 + 0x24) != 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5 + 3,5);
      iVar12 = *(int *)(param_5 + 4);
    }
    *(int *)(param_5 + 4) = iVar12 + 5;
    if (*(int *)((longlong)param_5 + 0x24) < iVar12 + 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5 + 3);
    }
    puVar3 = (undefined8 *)param_5[3];
    *puVar3 = 0x4700450050004a;
    *(undefined2 *)(puVar3 + 1) = 0;
  }
LAB_1408f3862:
  (**(code **)(*param_3 + 0x40))(param_3,&local_58,uVar11,2,0);
  if ((local_58 == (longlong *)0x0) ||
     (cVar6 = (**(code **)*local_58)(local_58,*param_4,*(undefined4 *)(param_4 + 1)), cVar6 == '\0')
     ) {
    plVar5 = local_50;
    *param_1 = 0;
    param_1[1] = 0;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  else {
    if ((undefined *)*param_5 != &DAT_144144944) {
      *(undefined4 *)(param_5 + 1) = 0;
      if (*(int *)((longlong)param_5 + 0xc) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5);
        iVar10 = *(int *)(param_5 + 1);
      }
      *(int *)(param_5 + 1) = iVar10;
      if (*(int *)((longlong)param_5 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5);
      }
    }
    uVar9 = (**(code **)(*local_58 + 0x20))();
    *(undefined4 *)(param_5 + 2) = uVar9;
    iVar10 = (**(code **)(*local_58 + 0x28))();
    *(int *)((longlong)param_5 + 0x14) = iVar10;
    param_5[5] = DAT_146286488;
    *(undefined1 *)(param_5 + 6) = 1;
    param_5[7] = (longlong)(iVar10 * *(int *)(param_5 + 2) * 4);
    *param_1 = local_58;
    param_1[1] = local_50;
    local_50 = (longlong *)0x0;
    local_58 = (longlong *)0x0;
  }
LAB_1408f3963:
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1408f39a0 FUN_1408f39a0 body=2469 status=ok
// SIG undefined FUN_1408f39a0(void)

/* WARNING: Removing unreachable block (ram,0x0001408f3b10) */

void FUN_1408f39a0(longlong param_1,undefined8 *param_2,ulonglong *param_3,undefined1 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  wint_t *pwVar20;
  undefined2 *puVar21;
  float fVar22;
  undefined1 local_res10 [8];
  ulonglong *local_res18;
  undefined1 local_res20;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  ulonglong local_1d0;
  undefined8 *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined2 *local_1a8;
  undefined2 *local_1a0;
  undefined2 *local_198;
  undefined8 local_190;
  int local_188;
  int local_184;
  undefined2 *local_180;
  undefined8 local_178;
  ulonglong uStack_170;
  ulonglong local_160;
  void *local_150;
  int local_148;
  void *local_140;
  int local_138;
  void *local_130;
  int local_128;
  void *local_120;
  int local_118;
  void *local_110;
  int local_108;
  undefined2 *local_100;
  int local_f8;
  undefined1 local_e8 [64];
  ulonglong local_a8;
  
  if (*(int *)(param_2 + 1) < 2) {
    return;
  }
  local_1d8 = (longlong *)0x0;
  local_1d0 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  plVar10 = (longlong *)FUN_1415c3d50();
  if (*(int *)(param_2 + 1) == 0) {
    puVar21 = &DAT_143f3eda8;
  }
  else {
    puVar21 = (undefined2 *)*param_2;
  }
  (**(code **)(*plVar10 + 0x70))(plVar10,&local_1d8,puVar21,&DAT_1441449e4);
  uVar19 = (ulonglong)(int)local_1d0;
  if ((int)local_1d0 != 0) {
    AlgoImpl::
    IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
              (local_1d8,uVar19,local_res10[0],local_res10);
    plVar10 = local_1d8 + (longlong)(int)local_1d0 * 2;
    if (local_1d8 != plVar10) {
      plVar16 = local_1d8;
      do {
        if (*(int *)(param_2 + 1) == 0) {
          local_1a8 = &DAT_143f3eda8;
        }
        else {
          local_1a8 = (undefined2 *)*param_2;
        }
        if ((int)plVar16[1] == 0) {
          local_1a0 = &DAT_143f3eda8;
        }
        else {
          local_1a0 = (undefined2 *)*plVar16;
        }
        local_1e8 = 0;
        local_1e0 = 0;
        FPaths::CombineInternal(&local_1e8,&local_1a8,2);
        iVar18 = *(int *)(param_1 + 0xb8);
        *(int *)(param_1 + 0xb8) = iVar18 + 1;
        if (*(int *)(param_1 + 0xbc) < iVar18 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0xb0),iVar18);
        }
        puVar15 = (undefined8 *)((longlong)iVar18 * 0x10 + *(longlong *)(param_1 + 0xb0));
        *puVar15 = 0;
        *puVar15 = local_1e8;
        *(undefined4 *)(puVar15 + 1) = (undefined4)local_1e0;
        *(undefined4 *)((longlong)puVar15 + 0xc) = local_1e0._4_4_;
        local_1e0 = 0;
        local_1e8 = 0;
        plVar16 = plVar16 + 2;
      } while (plVar16 != plVar10);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
    BVar7 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar7 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    FUN_141672300(&local_100,*(undefined8 *)(param_1 + 0xb0),0);
    pwVar20 = &DAT_1441453a0;
    puVar21 = &DAT_143f3eda8;
    if (local_f8 != 0) {
      puVar21 = local_100;
    }
    do {
      wVar5 = *(wint_t *)((longlong)(puVar21 + -0xa20a29d0) + (longlong)pwVar20);
      if ((wVar5 == 0) && (*pwVar20 == 0)) goto LAB_1408f3baf;
      if (wVar5 != *pwVar20) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar20);
        if (wVar5 != wVar6) goto LAB_1408f3ba1;
      }
      pwVar20 = pwVar20 + 1;
    } while( true );
  }
LAB_1408f42ee:
  uVar8 = (uint)uVar19;
  plVar10 = local_1d8;
  while (uVar8 != 0) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
    uVar8 = (int)uVar19 - 1;
    uVar19 = (ulonglong)uVar8;
  }
  if (local_1d8 != (longlong *)0x0) {
    FMemory::Free(local_1d8);
  }
  return;
LAB_1408f3ba1:
  if (wVar5 == wVar6) {
LAB_1408f3baf:
    puVar15 = (undefined8 *)operator_new(8);
    if (puVar15 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      *puVar15 = &PTR_GetFrameInfo_144146ba0;
      plVar10 = (longlong *)UImgMediaSettings::GetPrivateStaticClass();
      lVar11 = plVar10[0x1f];
      if (lVar11 == 0) {
        (**(code **)(*plVar10 + 0x368))(plVar10);
        lVar11 = plVar10[0x1f];
      }
      uVar8 = *(uint *)(lVar11 + 0x40);
      if (uVar8 == 0) {
        uVar8 = FUN_1416a5810();
      }
      FOpenExr::SetGlobalThreadCount(uVar8 & 0xffff);
    }
    plVar16 = (longlong *)0x0;
    plVar10 = (longlong *)operator_new(0x18);
    if (plVar10 != (longlong *)0x0) {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_144146c40;
      plVar10[2] = (longlong)puVar15;
      plVar16 = plVar10;
    }
    local_1c8 = puVar15;
    local_1c0 = plVar16;
    SharedPointerInternals::EnableSharedFromThis(&local_1c8,puVar15,puVar15);
    if ((undefined8 **)(param_1 + 0xe0) != &local_1c8) {
      *(undefined8 **)(param_1 + 0xe0) = puVar15;
      local_1c8 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xe8,&local_1c0);
      plVar16 = local_1c0;
    }
  }
  else {
    plVar12 = (longlong *)operator_new(0x10);
    plVar16 = (longlong *)0x0;
    plVar10 = plVar16;
    if (plVar12 != (longlong *)0x0) {
      lVar11 = *(longlong *)(param_1 + 0xa8);
      *plVar12 = (longlong)&PTR_FUN_144146b08;
      plVar12[1] = lVar11;
      plVar10 = plVar12;
    }
    plVar12 = (longlong *)operator_new(0x18);
    if (plVar12 != (longlong *)0x0) {
      *(undefined4 *)(plVar12 + 1) = 1;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      *plVar12 = (longlong)&PTR_FUN_144146c40;
      plVar12[2] = (longlong)plVar10;
      plVar16 = plVar12;
    }
    local_1b8 = plVar10;
    local_1b0 = plVar16;
    SharedPointerInternals::EnableSharedFromThis(&local_1b8,plVar10,plVar10);
    if ((longlong **)(param_1 + 0xe0) != &local_1b8) {
      *(longlong **)(param_1 + 0xe0) = plVar10;
      local_1b8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xe8,&local_1b0);
      plVar16 = local_1b0;
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar16 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  iVar18 = 0;
  local_198 = (undefined2 *)0x0;
  local_190 = 0;
  local_180 = (undefined2 *)0x0;
  local_178 = 0;
  uStack_170 = 0x10000ea60;
  cVar4 = (**(code **)**(undefined8 **)(param_1 + 0xe0))
                    (*(undefined8 **)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xb0),&local_198);
  if ((cVar4 != '\0') && (local_160 != 0)) {
    iVar17 = local_184;
    if (local_188 <= local_184) {
      iVar17 = local_188;
    }
    if (0 < iVar17) {
      *(int *)(param_1 + 0x100) = local_188;
      *(int *)(param_1 + 0x104) = local_184;
      iVar17 = 0;
      if ((*(int *)((longlong)local_res18 + 4) < 1) || ((int)*local_res18 < 1)) {
        *(ulonglong *)(param_1 + 0x110) = uStack_170;
        uVar19 = uStack_170 & 0xffffffff;
        iVar9 = *(int *)(param_1 + 0x114);
      }
      else {
        uVar19 = *local_res18;
        *(ulonglong *)(param_1 + 0x110) = uVar19;
        iVar9 = (int)(uVar19 >> 0x20);
      }
      *(longlong *)(param_1 + 0x108) =
           (longlong)
           ((longlong)(int)uVar19 / 2 +
           (ulonglong)(uint)(iVar9 * *(int *)(param_1 + 0xb8)) * 10000000) / (longlong)(int)uVar19;
      plVar10 = (longlong *)UImgMediaSettings::GetPrivateStaticClass();
      lVar11 = plVar10[0x1f];
      if (lVar11 == 0) {
        (**(code **)(*plVar10 + 0x368))(plVar10);
        lVar11 = plVar10[0x1f];
      }
      FUN_1416a13c0(local_e8);
      lVar13 = 0;
      fVar22 = *(float *)(lVar11 + 0x34) * 1.0737418e+09;
      if ((9.223372e+18 <= fVar22) && (fVar22 = fVar22 - 9.223372e+18, fVar22 < 9.223372e+18)) {
        lVar13 = -0x8000000000000000;
      }
      if ((ulonglong)((longlong)fVar22 + lVar13) < local_a8) {
        local_a8 = (longlong)fVar22 + lVar13;
      }
      iVar14 = (int)(local_a8 / local_160);
      iVar9 = iVar18;
      if ((-1 < iVar14) && (iVar9 = *(int *)(param_1 + 0xb8), iVar14 < *(int *)(param_1 + 0xb8))) {
        iVar9 = iVar14;
      }
      fVar22 = *(float *)(lVar11 + 0x30);
      if (0.0 <= fVar22) {
        if (100.0 <= fVar22) {
          fVar22 = 100.0;
        }
      }
      else {
        fVar22 = 0.0;
      }
      iVar14 = (int)(fVar22 * 0.01 * (float)iVar9);
      *(int *)(param_1 + 0xd8) = iVar14;
      *(int *)(param_1 + 0xd4) = iVar9 - iVar14;
      TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::Empty(param_1 + 0x40);
      FImgMediaLoader::Update(param_1,0);
      plVar10 = (longlong *)(param_1 + 0xc0);
      if ((wchar_t *)*plVar10 != L"Image Sequence\n") {
        *(undefined4 *)(param_1 + 200) = 0;
        if (*(int *)(param_1 + 0xcc) != 0x10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar10,0x10);
          iVar18 = *(int *)(param_1 + 200);
        }
        *(int *)(param_1 + 200) = iVar18 + 0x10;
        if (*(int *)(param_1 + 0xcc) < iVar18 + 0x10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar10);
        }
        builtin_wcsncpy((wchar_t *)*plVar10,L"Image Sequence\n",0x10);
      }
      FString::PrintfImpl(&local_150,L"    Dimension: %i x %i\n",*(undefined4 *)(param_1 + 0x100),
                          *(undefined4 *)(param_1 + 0x104));
      pvVar3 = local_150;
      if (local_148 != 0) {
        iVar17 = local_148 + -1;
      }
      if (iVar17 != 0) {
        iVar18 = *(int *)(param_1 + 200);
        iVar9 = (uint)(iVar18 == 0) + iVar17 + iVar18;
        *(int *)(param_1 + 200) = iVar9;
        if (*(int *)(param_1 + 0xcc) < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar10,iVar18);
        }
        pvVar2 = (void *)(*plVar10 + ((longlong)iVar18 - (ulonglong)(iVar18 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar17 * 2);
        *(undefined2 *)((longlong)pvVar2 + (longlong)iVar17 * 2) = 0;
      }
      if (local_150 != (void *)0x0) {
        FMemory::Free(local_150);
      }
      puVar21 = &DAT_143f3eda8;
      if ((int)local_178 != 0) {
        puVar21 = local_180;
      }
      FString::PrintfImpl(&local_140,L"    Format: %s\n",puVar21);
      pvVar3 = local_140;
      if (local_138 == 0) {
        iVar18 = 0;
      }
      else {
        iVar18 = local_138 + -1;
      }
      if (iVar18 != 0) {
        iVar17 = *(int *)(param_1 + 200);
        iVar9 = (uint)(iVar17 == 0) + iVar18 + iVar17;
        *(int *)(param_1 + 200) = iVar9;
        if (*(int *)(param_1 + 0xcc) < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar10,iVar17);
        }
        pvVar2 = (void *)(*plVar10 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar18 * 2);
        *(undefined2 *)((longlong)pvVar2 + (longlong)iVar18 * 2) = 0;
      }
      if (local_140 != (void *)0x0) {
        FMemory::Free(local_140);
      }
      puVar21 = &DAT_143f3eda8;
      if ((int)local_190 != 0) {
        puVar21 = local_198;
      }
      FString::PrintfImpl(&local_130,L"    Compression: %s\n",puVar21);
      pvVar3 = local_130;
      if (local_128 == 0) {
        iVar18 = 0;
      }
      else {
        iVar18 = local_128 + -1;
      }
      iVar17 = 0;
      if (iVar18 != 0) {
        iVar9 = *(int *)(param_1 + 200);
        iVar14 = (uint)(iVar9 == 0) + iVar18 + iVar9;
        *(int *)(param_1 + 200) = iVar14;
        if (*(int *)(param_1 + 0xcc) < iVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar10,iVar9);
        }
        pvVar2 = (void *)(*plVar10 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar18 * 2);
        *(undefined2 *)((longlong)pvVar2 + (longlong)iVar18 * 2) = 0;
      }
      if (local_130 != (void *)0x0) {
        FMemory::Free(local_130);
      }
      FString::PrintfImpl(&local_120,L"    Frames: %i\n",*(undefined4 *)(param_1 + 0xb8));
      pvVar3 = local_120;
      iVar18 = iVar17;
      if (local_118 != 0) {
        iVar18 = local_118 + -1;
      }
      if (iVar18 != 0) {
        iVar9 = *(int *)(param_1 + 200);
        iVar14 = (uint)(iVar9 == 0) + iVar18 + iVar9;
        *(int *)(param_1 + 200) = iVar14;
        if (*(int *)(param_1 + 0xcc) < iVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar10,iVar9);
        }
        pvVar2 = (void *)(*plVar10 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar18 * 2);
        *(undefined2 *)((longlong)pvVar2 + (longlong)iVar18 * 2) = 0;
      }
      if (local_120 != (void *)0x0) {
        FMemory::Free(local_120);
      }
      FString::PrintfImpl(&local_110,L"    Frame Rate: %.2f (%i/%i)\n",
                          (double)*(int *)(param_1 + 0x110) / (double)*(int *)(param_1 + 0x114),
                          *(int *)(param_1 + 0x110),*(int *)(param_1 + 0x114));
      pvVar3 = local_110;
      if (local_108 != 0) {
        iVar17 = local_108 + -1;
      }
      if (iVar17 != 0) {
        iVar18 = *(int *)(param_1 + 200);
        iVar9 = (uint)(iVar18 == 0) + iVar17 + iVar18;
        *(int *)(param_1 + 200) = iVar9;
        if (*(int *)(param_1 + 0xcc) < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar10,iVar18);
        }
        pvVar2 = (void *)(*plVar10 + ((longlong)iVar18 - (ulonglong)(iVar18 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar17 * 2);
        *(undefined2 *)((longlong)pvVar2 + (longlong)iVar17 * 2) = 0;
      }
      if (local_110 != (void *)0x0) {
        FMemory::Free(local_110);
      }
    }
  }
  if (local_180 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_198 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_100 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  LeaveCriticalSection(lpCriticalSection);
  uVar19 = local_1d0 & 0xffffffff;
  goto LAB_1408f42ee;
}



// FUNCTION 1408f4350 FUN_1408f4350 body=1689 status=ok
// SIG undefined FUN_1408f4350(void)

undefined8 FUN_1408f4350(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong **pplVar1;
  int *piVar2;
  short *psVar3;
  undefined1 uVar4;
  void *_Src;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  BOOL BVar8;
  int iVar9;
  void **ppvVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  void *pvVar21;
  undefined2 *puVar22;
  undefined8 local_res8;
  void *local_1a8;
  int local_1a0;
  void *local_198;
  ulonglong local_190;
  longlong *local_188;
  longlong *local_180;
  undefined8 local_178;
  longlong *local_170;
  longlong *local_168;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  uint local_148;
  undefined4 local_144;
  undefined1 local_140;
  void *local_138;
  int local_130;
  undefined8 local_128;
  longlong *local_120;
  longlong local_118 [2];
  undefined1 local_108 [8];
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8 [2];
  undefined1 *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  code *local_88 [6];
  undefined8 local_58;
  undefined4 local_48;
  
  (**(code **)*param_1)();
  if ((*(int *)(param_2 + 1) < 2) ||
     (cVar5 = FString::StartsWith(param_2,L"img://",1), cVar5 == '\0')) {
    return 0;
  }
  *(undefined4 *)((longlong)param_1 + 0x3c) = 4;
  FString::operator=(param_1 + 9,param_2);
  local_1a8 = (void *)0x0;
  local_1a0 = 0;
  if (param_3 != (longlong *)0x0) {
    local_118[0] = 0;
    local_118[1] = 0;
    ppvVar10 = (void **)(**(code **)(*param_3 + 0x10))(param_3,local_e8,&DAT_146862738,local_118);
    if (&local_1a8 != ppvVar10) {
      local_1a8 = *ppvVar10;
      *ppvVar10 = (void *)0x0;
      local_1a0 = *(int *)(ppvVar10 + 1);
      ppvVar10[1] = (void *)0x0;
    }
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
    if (local_118[0] != 0) {
      FMemory::Free();
    }
    pvVar21 = local_1a8;
    iVar15 = local_1a0;
    if (1 < local_1a0) goto LAB_1408f44d4;
  }
  plVar11 = (longlong *)UImgMediaSettings::GetPrivateStaticClass();
  lVar19 = plVar11[0x1f];
  if (lVar19 == 0) {
    (**(code **)(*plVar11 + 0x368))(plVar11);
    lVar19 = plVar11[0x1f];
  }
  pvVar21 = (void *)0x0;
  local_138 = (void *)0x0;
  if (*(char *)(lVar19 + 0x58) == '\0') {
    local_130 = 0;
  }
  else {
    local_130 = *(int *)(lVar19 + 0x50);
    lVar18 = (longlong)local_130;
    _Src = *(void **)(lVar19 + 0x48);
    pvVar21 = (void *)0x0;
    if (local_130 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_138,local_130,0);
      pvVar21 = local_138;
      _guard_xfg_dispatch_icall_nop(local_138,_Src,lVar18 * 2);
    }
  }
  iVar15 = local_130;
  if (local_1a8 != (void *)0x0) {
    FMemory::Free();
  }
LAB_1408f44d4:
  local_1a0 = iVar15;
  local_1a8 = pvVar21;
  local_res8 = 0;
  if (param_3 != (longlong *)0x0) {
    uVar6 = (**(code **)(*param_3 + 0x18))(param_3,&DAT_146862728,0);
    uVar7 = (**(code **)(*param_3 + 0x18))(param_3,&DAT_146862730,0);
    local_res8 = CONCAT44(uVar6,uVar7);
  }
  local_128 = param_1[0x11];
  local_120 = (longlong *)param_1[0x12];
  if (local_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_120 + 1) = (int)local_120[1] + 1;
    UNLOCK();
  }
  plVar12 = (longlong *)
            SharedPointerInternals::
            NewIntrusiveReferenceController<FImgMediaLoader,TSharedRef<FImgMediaScheduler,1>_>
                      (&local_128);
  plVar11 = plVar12 + 2;
  local_f8 = plVar11;
  local_f0 = plVar12;
  FUN_14044f790(&local_f8,plVar11);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  pplVar1 = (longlong **)(param_1 + 0xe);
  local_188 = plVar11;
  local_180 = plVar12;
  if (pplVar1 != &local_188) {
    *pplVar1 = plVar11;
    local_188 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf,&local_180);
  }
  plVar11 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_180 + 1;
    lVar19 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_180 + 8))(local_180,1);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar12 + 1;
    lVar19 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  plVar11 = local_120;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_120 + 1;
    lVar19 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  plVar11 = (longlong *)param_1[0xf];
  plVar12 = *pplVar1;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  lVar19 = param_1[0x11];
  BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar19 + 0x30));
  if (BVar8 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar19 + 0x30));
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
  }
  iVar15 = *(int *)(lVar19 + 0x60);
  *(int *)(lVar19 + 0x60) = iVar15 + 1;
  if (*(int *)(lVar19 + 100) < iVar15 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar19 + 0x58,iVar15);
  }
  plVar13 = (longlong *)((longlong)iVar15 * 0x10 + *(longlong *)(lVar19 + 0x58));
  *plVar13 = (longlong)plVar12;
  plVar13[1] = (longlong)plVar11;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar19 + 0x30));
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar19 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar22 = &DAT_143f3eda8;
    iVar15 = 0;
  }
  else {
    puVar22 = (undefined2 *)*param_2;
    iVar15 = *(int *)(param_2 + 1) + -1;
  }
  iVar16 = iVar15 + -6;
  if (iVar16 < 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar15;
    if (iVar16 < iVar15) {
      iVar9 = iVar16;
    }
  }
  uVar20 = 0;
  local_198 = (void *)0x0;
  local_190 = 0;
  psVar3 = puVar22 + ((longlong)iVar15 - (longlong)iVar9);
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    lVar19 = -1;
    do {
      lVar19 = lVar19 + 1;
    } while (psVar3[lVar19] != 0);
    uVar17 = (int)lVar19 + 1;
    local_190 = (ulonglong)uVar17;
    uVar20 = uVar17;
    if (0 < (int)uVar17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
      uVar20 = (uint)local_190;
    }
    FGenericPlatformString::Memcpy(local_198,psVar3,(longlong)(int)uVar17 * 2);
  }
  local_168 = (longlong *)param_1[0xf];
  local_170 = *pplVar1;
  local_58 = 0;
  local_48 = 0;
  local_88[0] = AK::MemoryMgr::StartProfileThreadUsage;
  if (local_168 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_168 + 0xc) = *(int *)((longlong)local_168 + 0xc) + 1;
    UNLOCK();
    uVar20 = (uint)local_190;
  }
  uVar4 = *(undefined1 *)((longlong)param_1 + 0x9c);
  local_178 = local_res8;
  local_160 = (void *)0x0;
  local_158 = CONCAT44(local_158._4_4_,local_1a0);
  if (local_1a0 == 0) {
    local_158 = 0;
  }
  else {
    lVar19 = (longlong)local_1a0;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_160,local_1a0,0);
    _guard_xfg_dispatch_icall_nop(local_160,local_1a8,lVar19 * 2);
  }
  local_150 = (void *)0x0;
  local_148 = uVar20;
  if (uVar20 == 0) {
    local_144 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_150,uVar20,0);
    _guard_xfg_dispatch_icall_nop(local_150,local_198,(longlong)(int)uVar20 * 2);
  }
  local_a8 = 0;
  local_98 = 0;
  local_140 = uVar4;
  puVar14 = (undefined8 *)FUN_140438ef0(0x48,local_c8);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &PTR_CopyToEmptyStorage_144146c18;
    puVar14[1] = local_178;
    puVar14[2] = local_170;
    puVar14[3] = local_168;
    puVar14[4] = local_160;
    *(undefined4 *)(puVar14 + 5) = (undefined4)local_158;
    *(undefined4 *)((longlong)puVar14 + 0x2c) = local_158._4_4_;
    local_158 = 0;
    local_168 = (longlong *)0x0;
    local_170 = (longlong *)0x0;
    local_160 = (void *)0x0;
    FString::FString(puVar14 + 6,&local_150);
    *(undefined1 *)(puVar14 + 8) = local_140;
  }
  local_d8[0] = &LAB_1408f09b0;
  FUN_1408edc50(local_108,2,local_d8,local_88);
  plVar11 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_100 + 1;
    lVar19 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  if (local_150 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_160 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_168 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_168 + 0xc);
    iVar15 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar15 == 1) {
      (**(code **)(*local_168 + 8))(local_168,1);
    }
  }
  if (local_198 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_1a8 != (void *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1408f49f0 QueryCacheState body=279 status=ok
// SIG undefined QueryCacheState(void)

undefined8 FImgMediaPlayer::QueryCacheState(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 == 0) {
    return 0;
  }
  if (param_2 == 2) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    }
    lVar3 = lVar1 + 0x130;
  }
  else {
    if (param_2 == 1) {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
      if (BVar2 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
      }
      local_18[0] = 0;
      local_18[1] = 0;
      TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::GetKeys
                (lVar1 + 0x40,local_18);
      FImgMediaLoader::FrameNumbersToTimeRanges(lVar1,local_18,param_3);
      if (local_18[0] != 0) {
        FMemory::Free();
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
        return 1;
      }
      goto LAB_1408f4ad9;
    }
    if (param_2 != 3) {
      return 0;
    }
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    }
    lVar3 = lVar1 + 0x120;
  }
  FImgMediaLoader::FrameNumbersToTimeRanges(lVar1,lVar3,param_3);
LAB_1408f4ad9:
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
  return 1;
}



// FUNCTION 1408f4b10 ReadFrame body=375 status=ok
// SIG undefined ReadFrame(void)

undefined8 FExrImgMediaReader::ReadFrame(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 local_res18 [16];
  longlong local_28;
  longlong *local_20;
  
  FRgbaInputFile::FRgbaInputFile(local_res18,param_2,2);
  cVar5 = GetInfo(param_1,local_res18,param_3 + 3);
  if (cVar5 != '\0') {
    iVar3 = *(int *)((longlong)param_3 + 0x2c);
    iVar4 = (int)param_3[5];
    iVar6 = iVar3;
    if (iVar4 <= iVar3) {
      iVar6 = iVar4;
    }
    if (0 < iVar6) {
      lVar10 = (longlong)(iVar4 * iVar3) << 3;
      lVar7 = FMemory::Malloc(lVar10,0x80);
      FRgbaInputFile::SetFrameBuffer(local_res18,lVar7,param_3 + 5);
      FRgbaInputFile::ReadPixels(local_res18,0,*(int *)((longlong)param_3 + 0x2c) + -1);
      plVar8 = (longlong *)operator_new(0x20);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8[2] = lVar10;
        *(undefined4 *)(plVar8 + 1) = 1;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        *plVar8 = (longlong)&PTR_FUN_144146c50;
        plVar8[3] = lVar7;
      }
      local_28 = lVar7;
      local_20 = plVar8;
      SharedPointerInternals::EnableSharedFromThis(&local_28,lVar7,lVar7);
      if (param_3 != &local_28) {
        *param_3 = lVar7;
        local_28 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_3 + 1,&local_20);
        plVar8 = local_20;
      }
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
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      uVar9 = 1;
      *(undefined4 *)(param_3 + 2) = 10;
      *(int *)(param_3 + 0xb) = (int)param_3[5] << 3;
      goto LAB_1408f4c71;
    }
  }
  uVar9 = 0;
LAB_1408f4c71:
  FRgbaInputFile::~FRgbaInputFile(local_res18);
  return uVar9;
}



// FUNCTION 1408f4c90 FUN_1408f4c90 body=465 status=ok
// SIG undefined FUN_1408f4c90(void)

undefined8 FUN_1408f4c90(longlong param_1,undefined8 param_2,void **param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  void *_Dst;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *local_res8;
  void *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28 [2];
  
  plVar6 = (longlong *)0x0;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1408f3550(&local_38,param_2,*(undefined8 *)(param_1 + 8),local_28,param_3 + 3);
  if (local_38 != (longlong *)0x0) {
    local_res8 = (undefined8 *)0x0;
    cVar4 = (**(code **)(*local_38 + 0x18))(local_38,2,8,&local_res8);
    if (cVar4 != '\0') {
      iVar2 = *(int *)(local_res8 + 1);
      _Dst = (void *)FMemory::Malloc((longlong)iVar2,0);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)*local_res8,(longlong)iVar2);
      plVar5 = (longlong *)operator_new(0x18);
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
        *plVar5 = (longlong)&PTR_FUN_144146c60;
        plVar5[2] = (longlong)_Dst;
        plVar6 = plVar5;
      }
      local_48 = _Dst;
      local_40 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_48,_Dst,_Dst);
      if (param_3 != &local_48) {
        *param_3 = _Dst;
        local_48 = (void *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_3 + 1,&local_40);
        plVar6 = local_40;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar6 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
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
      *(int *)(param_3 + 0xb) = *(int *)(param_3 + 5) << 2;
      *(undefined4 *)(param_3 + 2) = 2;
      uVar7 = 1;
      goto LAB_1408f4dfb;
    }
  }
  uVar7 = 0;
LAB_1408f4dfb:
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 1408f4e70 Rehash body=518 status=ok
// SIG undefined Rehash(void)

void TSet<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*,TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FKeyFuncs,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_1408f4faf;
        uVar8 = puVar13[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1408f4faf:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0x10 + *param_1);
        uVar8 = (int)*plVar2 - 1U & *(uint *)*puVar11;
        *(uint *)((longlong)puVar11 + 0xc) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 1) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1408f5080 Remove body=306 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*,TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FKeyFuncs,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  iVar7 = *(int *)((longlong)plVar9 + ((longlong)param_2 & uVar8) * 4);
  if (iVar7 != -1) {
    lVar3 = *param_1;
    do {
      lVar10 = (longlong)iVar7;
      if (**(int **)(lVar3 + lVar10 * 0x10) == param_2) {
        uVar8 = (longlong)*(int *)(lVar3 + 0xc + lVar10 * 0x10) & uVar8;
        piVar6 = (int *)((longlong)plVar9 + uVar8 * 4);
        iVar2 = *(int *)((longlong)plVar9 + uVar8 * 4);
        goto joined_r0x0001408f5113;
      }
      iVar7 = *(int *)(lVar3 + 8 + lVar10 * 0x10);
    } while (iVar7 != -1);
  }
  return 0;
joined_r0x0001408f5113:
  if (iVar2 == -1) {
LAB_1408f5134:
    bVar4 = (byte)iVar7 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar7;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar10 * 0x10) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar3 + 4 + lVar10 * 0x10) = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar7;
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar7) {
    *piVar6 = *(int *)(lVar3 + lVar10 * 0x10 + 8);
    goto LAB_1408f5134;
  }
  piVar6 = (int *)(lVar3 + 8 + (longlong)iVar2 * 0x10);
  iVar2 = *piVar6;
  goto joined_r0x0001408f5113;
}



// FUNCTION 1408f51c0 RemoveLoader body=190 status=ok
// SIG undefined RemoveLoader(void)

void FImgMediaScheduler::RemoveLoader(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x60))) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8 + (longlong)param_2 * 0x10);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
    iVar4 = *(int *)(param_1 + 0x60);
    iVar3 = (iVar4 - param_2) + -1;
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x58) + (longlong)param_2 * 0x10),
                 (void *)((longlong)(param_2 + 1) * 0x10 + *(longlong *)(param_1 + 0x58)),
                 (longlong)iVar3 << 4);
      iVar4 = *(int *)(param_1 + 0x60);
    }
    *(int *)(param_1 + 0x60) = iVar4 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x58);
    if (param_2 <= *(int *)(param_1 + 0x68)) {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    }
  }
  return;
}



// FUNCTION 1408f5280 RequestFrame body=112 status=ok
// SIG undefined RequestFrame(void)

undefined8 FImgMediaLoader::RequestFrame(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if ((-1 < param_2) && (param_2 <= *(longlong *)(param_1 + 0x108))) {
    uVar2 = (*(int *)(param_1 + 0x110) * param_2) / ((longlong)*(int *)(param_1 + 0x114) * 10000000)
    ;
    iVar1 = (int)uVar2;
    if ((iVar1 != -1) && (iVar1 != *(int *)(param_1 + 0x118))) {
      Update(param_1,uVar2 & 0xffffffff);
      *(int *)(param_1 + 0x118) = iVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1408f52f0 FUN_1408f52f0 body=322 status=ok
// SIG undefined FUN_1408f52f0(void)

undefined8 FUN_1408f52f0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  code *local_58 [6];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_1408eeee0(param_1 + 0xc,param_1 + 2);
  lVar5 = param_1[0xf];
  cVar4 = *(char *)(lVar5 + 0x58);
  while (cVar4 == '\0') {
    (**(code **)(**(longlong **)(lVar5 + 0x50) + 0x20))(*(longlong **)(lVar5 + 0x50),0x5d638865,0);
    cVar4 = *(char *)(lVar5 + 0x58);
  }
  local_28 = 0;
  local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
  local_b8 = *(undefined8 *)(lVar5 + 0x60);
  local_18 = 0;
  local_78 = 0;
  local_68 = 0;
  uStack_b0 = param_1;
  puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_98);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar7 + 1) = (undefined4)local_b8;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_b8._4_4_;
    *(undefined4 *)(puVar7 + 2) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_b0._4_4_;
  }
  local_a8[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_95246997226aefcd78e735d32b755d1a>,void___cdecl(void)>::
                Call;
  FUN_1408edc50(&local_b8,0,local_a8,local_58);
  plVar6 = uStack_b0;
  if (uStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_b0 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_b0)(uStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_b0 + 8))(uStack_b0,1);
      }
    }
  }
  return 0;
}



// FUNCTION 1408f5440 Run body=104 status=ok
// SIG undefined Run(void)

undefined8 FImgMediaSchedulerThread::Run(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  while (*(char *)(param_1 + 0x20) == '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))(*(longlong **)(param_1 + 0x30),10)
    ;
    if (cVar1 != '\0') {
      puVar2 = *(undefined8 **)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      while (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2);
        puVar2 = (undefined8 *)
                 (**(code **)**(undefined8 **)(param_1 + 0x10))
                           (*(undefined8 **)(param_1 + 0x10),param_1);
      }
    }
  }
  return 0;
}



// FUNCTION 1408f54b0 Seek body=178 status=ok
// SIG undefined Seek(void)

undefined8 FImgMediaPlayer::Seek(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (((((uVar1 & 0xfffffffa) != 0) || (uVar1 == 5)) && (lVar2 = *param_2, -1 < lVar2)) &&
     (lVar2 < *(longlong *)(param_1 + 0x20))) {
    if (uVar1 == 5) {
      uVar1 = 2;
      *(undefined4 *)(param_1 + 0x2c) = 2;
      lVar2 = *param_2;
    }
    lVar2 = DAT_146286490 + lVar2;
    *(undefined1 *)(param_1 + 0x48) = 1;
    *(longlong *)(param_1 + 0x30) = lVar2;
    if (lVar2 == *(longlong *)(param_1 + 0x20)) {
      *(longlong *)(param_1 + 0x30) = lVar2 - DAT_146286490;
      uVar1 = *(uint *)(param_1 + 0x2c);
    }
    if (uVar1 == 2) {
      FImgMediaLoader::RequestFrame
                (*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x30),
                 *(undefined4 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x8c));
    }
    *(undefined8 *)(param_1 + 0x58) = 0x8000000000000000;
    (**(code **)**(undefined8 **)(param_1 + 0x50))(*(undefined8 **)(param_1 + 0x50),8);
    return 1;
  }
  return 0;
}



// FUNCTION 1408f55b0 SetRate body=163 status=ok
// SIG undefined SetRate(void)

undefined8 FImgMediaPlayer::SetRate(longlong param_1,float param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (((uVar1 & 0xfffffffa) == 0) && (uVar1 != 5)) {
    return 0;
  }
  if (param_2 != *(float *)(param_1 + 0x28)) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return 0;
    }
    if (*(float *)(param_1 + 0x28) == 0.0) {
      if (param_2 != 0.0) {
        if (uVar1 == 5) {
          if (param_2 < 0.0) {
            *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x20) + -1;
          }
          *(undefined1 *)(param_1 + 0x70) = 1;
        }
        *(float *)(param_1 + 0x28) = param_2;
        *(undefined4 *)(param_1 + 0x2c) = 3;
        (**(code **)**(undefined8 **)(param_1 + 0x50))(*(undefined8 **)(param_1 + 0x50),6);
        return 1;
      }
    }
    else if (param_2 == 0.0) {
      *(float *)(param_1 + 0x28) = param_2;
      *(undefined4 *)(param_1 + 0x2c) = 2;
      (**(code **)**(undefined8 **)(param_1 + 0x50))(*(undefined8 **)(param_1 + 0x50),7);
      return 1;
    }
    *(float *)(param_1 + 0x28) = param_2;
  }
  return 1;
}



// FUNCTION 1408f5660 SetSequencePath body=820 status=ok
// SIG undefined SetSequencePath(void)

void UImgMediaSource::SetSequencePath(longlong param_1)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  int iVar5;
  void *pvVar6;
  void **ppvVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  void *pvVar11;
  int iVar12;
  void *local_88;
  int local_80;
  int local_7c;
  void *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  
  FUN_141672d20(&local_58);
  iVar5 = local_50;
  if (1 < local_50) {
    cVar2 = FString::StartsWith(&local_58,&DAT_1441449a4,1);
    iVar5 = local_50;
    if (cVar2 == '\0') {
      FPaths::ConvertRelativePathToFull(&local_88,&local_58);
      uVar3 = FPaths::ProjectContentDir(&local_68);
      FPaths::ConvertRelativePathToFull(&local_48,uVar3);
      if (local_68 != (void *)0x0) {
        FMemory::Free();
      }
      cVar2 = FString::StartsWith(&local_88,&local_48,1);
      pvVar11 = (void *)0x0;
      if (cVar2 != '\0') {
        iVar5 = 0;
        puVar4 = &DAT_143f3eda8;
        if (local_40 != 0) {
          puVar4 = local_48;
        }
        FUN_141677bd0(&local_88,puVar4);
        local_68 = (void *)0x0;
        local_60 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        pvVar6 = local_68;
        FGenericPlatformString::Memcpy(local_68,&DAT_144144c08,6);
        pvVar1 = local_88;
        if ((int)local_60 < 2) {
          local_68 = (void *)0x0;
          local_60 = CONCAT44(local_60._4_4_,local_80);
          if (local_80 == 0) {
            iVar12 = 0;
            iVar8 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_80,0);
            pvVar11 = local_68;
            ::_guard_xfg_dispatch_icall_nop(local_68,pvVar1,(longlong)local_80 * 2);
            iVar12 = local_60._4_4_;
            iVar8 = (int)local_60;
          }
        }
        else {
          if (local_80 != 0) {
            iVar5 = local_80 + -1;
          }
          if (((int)local_60 != 0) || (iVar9 = 1, iVar5 == 0)) {
            iVar9 = 0;
          }
          local_78 = local_68;
          local_70 = (int)local_60;
          local_6c = local_60._4_4_;
          if (local_60._4_4_ < iVar9 + (int)local_60 + iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
          }
          iVar9 = local_70;
          pvVar6 = local_88;
          pvVar11 = local_78;
          iVar12 = local_6c;
          iVar8 = local_70;
          if (iVar5 != 0) {
            lVar10 = (longlong)local_70;
            local_70 = local_70 + (uint)(local_70 == 0) + iVar5;
            if (local_6c < local_70) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar9);
            }
            iVar12 = local_6c;
            iVar8 = local_70;
            pvVar11 = local_78;
            pvVar1 = (void *)((longlong)local_78 + (lVar10 - (ulonglong)(iVar9 != 0)) * 2);
            ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar6,(longlong)iVar5 * 2);
            *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
          }
          pvVar6 = (void *)0x0;
        }
        if (local_88 != (void *)0x0) {
          FMemory::Free(local_88);
        }
        local_88 = pvVar11;
        local_80 = iVar8;
        local_7c = iVar12;
        if (pvVar6 != (void *)0x0) {
          FMemory::Free(pvVar6);
        }
      }
      iVar5 = local_80;
      pvVar11 = local_88;
      ppvVar7 = (void **)(param_1 + 0x50);
      if (ppvVar7 != &local_88) {
        *(int *)(param_1 + 0x58) = local_80;
        if ((local_80 == 0) && (*(int *)(param_1 + 0x5c) == 0)) {
          *(undefined4 *)(param_1 + 0x5c) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar7,local_80);
          ::_guard_xfg_dispatch_icall_nop(*ppvVar7,pvVar11,(longlong)iVar5 * 2);
        }
      }
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free();
      }
      goto LAB_1408f5960;
    }
  }
  pvVar11 = local_58;
  ppvVar7 = (void **)(param_1 + 0x50);
  if (ppvVar7 != &local_58) {
    *(int *)(param_1 + 0x58) = iVar5;
    if ((iVar5 == 0) && (*(int *)(param_1 + 0x5c) == 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar7,iVar5);
      ::_guard_xfg_dispatch_icall_nop(*ppvVar7,pvVar11,(longlong)iVar5 * 2);
    }
  }
LAB_1408f5960:
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408f59c0 FUN_1408f59c0 body=614 status=ok
// SIG undefined FUN_1408f59c0(void)

void FUN_1408f59c0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 8) = 0xff;
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
          goto LAB_1408f5b77;
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
LAB_1408f5b77:
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



// FUNCTION 1408f5c30 Tick body=69 status=ok
// SIG undefined Tick(void)

void FImgMediaSchedulerThread::Tick(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  while (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    puVar1 = (undefined8 *)
             (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),param_1 + -8)
    ;
  }
  return;
}



// FUNCTION 1408f5c80 TickFetch body=171 status=ok
// SIG undefined TickFetch(void)

void FImgMediaScheduler::TickFetch(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  BOOL BVar3;
  longlong lVar4;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  iVar1 = *(int *)(param_1 + 0x28);
  while ((0 < iVar1 &&
         (lVar4 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1 + 8,0), lVar4 != 0))) {
    lVar2 = *(longlong *)
             (*(longlong *)(param_1 + 0x20) + -8 + (longlong)*(int *)(param_1 + 0x28) * 8);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
    *(longlong *)(lVar2 + 0x18) = lVar4;
    (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x10))();
    iVar1 = *(int *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x0001408f5d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 1408f5d30 TickInput body=368 status=ok
// SIG undefined TickInput(void)

void FImgMediaPlayer::TickInput(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x70);
  if ((lVar4 != 0) && (*(int *)(param_1 + 0x3c) != 1)) {
    if ((*(int *)(param_1 + 0x3c) == 4) && (*(char *)(lVar4 + 0xd0) != '\0')) {
      iVar1 = *(int *)(lVar4 + 0x104);
      if (*(int *)(lVar4 + 0x100) <= *(int *)(lVar4 + 0x104)) {
        iVar1 = *(int *)(lVar4 + 0x100);
      }
      puVar2 = *(undefined8 **)(param_1 + 0x60);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 1;
        uVar3 = 4;
      }
      else {
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar4 + 0x108);
        *(undefined4 *)(param_1 + 0x3c) = 5;
        (**(code **)*puVar2)(puVar2,9);
        puVar2 = *(undefined8 **)(param_1 + 0x60);
        uVar3 = 3;
      }
      (**(code **)*puVar2)(puVar2,uVar3);
    }
    if ((*(int *)(param_1 + 0x3c) == 3) && (*(longlong *)(param_1 + 0x30) != 0)) {
      if (*(char *)(param_1 + 0x80) == '\0') {
        *(longlong *)(param_1 + 0x40) =
             *(longlong *)(param_1 + 0x40) + (longlong)(*(float *)(param_1 + 0x38) * (float)param_2)
        ;
      }
      else {
        *(undefined1 *)(param_1 + 0x80) = 0;
      }
      if (*(char *)(param_1 + 0x58) == '\0') {
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + DAT_146286490;
        *(undefined1 *)(param_1 + 0x58) = 1;
      }
      if ((*(longlong *)(param_1 + 0x30) <= *(longlong *)(param_1 + 0x40)) ||
         (*(longlong *)(param_1 + 0x40) < 0)) {
        (**(code **)**(undefined8 **)(param_1 + 0x60))(*(undefined8 **)(param_1 + 0x60),5);
        if (*(char *)(param_1 + 0x9c) == '\0') {
          *(undefined4 *)(param_1 + 0x3c) = 5;
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(undefined1 *)(param_1 + 0x58) = 0;
          (**(code **)**(undefined8 **)(param_1 + 0x60))(*(undefined8 **)(param_1 + 0x60),7);
        }
        else {
          lVar4 = *(longlong *)(param_1 + 0x40) % *(longlong *)(param_1 + 0x30);
          *(longlong *)(param_1 + 0x40) = lVar4;
          if (lVar4 < 0) {
            *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x30) + lVar4;
          }
        }
      }
      if (*(int *)(param_1 + 0x98) == 0) {
        FImgMediaLoader::RequestFrame
                  (*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x9c));
      }
    }
  }
  return;
}



// FUNCTION 1408f5ea0 Update body=1214 status=ok
// SIG undefined Update(void)

void FImgMediaLoader::Update(longlong param_1,int param_2,float param_3,char param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  int *piVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  int *local_60;
  undefined8 local_58;
  
  iVar14 = *(int *)(param_1 + 0xd8);
  uVar20 = 0;
  iVar22 = *(int *)(param_1 + 0xd4);
  iVar5 = *(int *)(param_1 + 0xb8);
  local_60 = (int *)0x0;
  local_58 = 0;
  iVar19 = 0;
  uVar12 = uVar20;
  if (iVar22 + iVar14 != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_60);
    iVar22 = *(int *)(param_1 + 0xd4);
    iVar14 = *(int *)(param_1 + 0xd8);
    uVar12 = local_58 & 0xffffffff;
  }
  iVar7 = -1;
  if (0.0 <= param_3) {
    iVar7 = 1;
  }
  iVar9 = param_2 - iVar7;
  piVar15 = local_60;
LAB_1408f5f45:
  do {
    iVar10 = (int)uVar12;
    if (iVar22 < 1) {
      if (iVar14 < 1) {
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
        BVar4 = TryEnterCriticalSection(lpCriticalSection);
        if (BVar4 == 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        iVar14 = *(int *)(param_1 + 0x138) + -1;
        if (-1 < iVar14) {
          plVar1 = (longlong *)(param_1 + 0x130);
          lVar18 = (longlong)iVar14 * 4;
          piVar15 = local_60 + iVar10;
          piVar8 = local_60;
          lVar23 = lVar18;
          do {
            for (piVar6 = piVar8; piVar6 != piVar15; piVar6 = piVar6 + 1) {
              if (*piVar6 == *(int *)(lVar18 + *plVar1)) goto LAB_1408f6023;
            }
            iVar22 = *(int *)(param_1 + 0x138);
            iVar5 = (iVar22 - iVar14) + -1;
            if (0 < iVar5) {
              iVar5 = 1;
            }
            if (iVar5 != 0) {
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar1 + lVar23),
                         (void *)(*plVar1 + (longlong)(iVar22 - iVar5) * 4),(longlong)iVar5 << 2);
              iVar22 = *(int *)(param_1 + 0x138);
            }
            *(int *)(param_1 + 0x138) = iVar22 + -1;
            TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar1);
            piVar8 = local_60;
LAB_1408f6023:
            lVar23 = lVar23 + -4;
            lVar18 = lVar18 + -4;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
        }
        plVar1 = (longlong *)(param_1 + 0x120);
        *(undefined4 *)(param_1 + 0x128) = 0;
        if (*(int *)(param_1 + 300) != 0) {
          TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
        }
        uVar12 = (ulonglong)((longlong)(local_60 + iVar10) + (3 - (longlong)local_60)) >> 2;
        if (local_60 + iVar10 < local_60) {
          uVar12 = uVar20;
        }
        uVar13 = uVar20;
        piVar15 = local_60;
        if (uVar12 != 0) {
          do {
            iVar14 = *piVar15;
            if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
              lVar18 = *(longlong *)(param_1 + 0x80);
              if (*(longlong *)(param_1 + 0x80) == 0) {
                lVar18 = param_1 + 0x78;
              }
              iVar22 = *(int *)(lVar18 + ((longlong)*(int *)(param_1 + 0x88) - 1U & (longlong)iVar14
                                         ) * 4);
              if (iVar22 != -1) {
                lVar18 = *(longlong *)(param_1 + 0x40);
                do {
                  lVar23 = (longlong)iVar22;
                  piVar8 = *(int **)(lVar18 + lVar23 * 0x10);
                  if (*piVar8 == iVar14) {
                    if ((iVar22 != -1) &&
                       (plVar17 = (longlong *)(lVar23 * 0x10 + lVar18), plVar17 != (longlong *)0x0))
                    {
                      if ((piVar8 == *(int **)(param_1 + 0x90)) &&
                         (lVar18 = *(longlong *)(*(int **)(param_1 + 0x90) + 4), lVar18 != 0)) {
                        *(longlong *)(param_1 + 0x90) = lVar18;
                      }
                      if (piVar8 != *(int **)(param_1 + 0x98)) {
                        if (*(longlong *)(piVar8 + 2) != 0) {
                          *(undefined8 *)(*(longlong *)(piVar8 + 2) + 0x10) =
                               *(undefined8 *)(piVar8 + 4);
                        }
                        if (*(longlong *)(piVar8 + 4) != 0) {
                          *(undefined8 *)(*(longlong *)(piVar8 + 4) + 8) =
                               *(undefined8 *)(piVar8 + 2);
                        }
                        piVar8[2] = 0;
                        piVar8[3] = 0;
                        piVar8[4] = 0;
                        piVar8[5] = 0;
                        lVar18 = *(longlong *)(param_1 + 0x98);
                        *(longlong *)(piVar8 + 2) = lVar18;
                        if (lVar18 != 0) {
                          *(int **)(lVar18 + 0x10) = piVar8;
                        }
                        *(int **)(param_1 + 0x98) = piVar8;
                      }
                      if (*plVar17 != -0x18) goto LAB_1408f62dc;
                    }
                    break;
                  }
                  iVar22 = *(int *)(lVar18 + 8 + lVar23 * 0x10);
                } while (iVar22 != -1);
              }
            }
            piVar6 = *(int **)(param_1 + 0x130);
            piVar8 = piVar6 + *(int *)(param_1 + 0x138);
            for (; piVar6 != piVar8; piVar6 = piVar6 + 1) {
              if (*piVar6 == iVar14) goto LAB_1408f62dc;
            }
            iVar22 = *(int *)(param_1 + 0x128);
            *(int *)(param_1 + 0x128) = iVar22 + 1;
            if (*(int *)(param_1 + 300) < iVar22 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar22);
            }
            *(int *)(*plVar1 + (longlong)iVar22 * 4) = iVar14;
LAB_1408f62dc:
            piVar15 = piVar15 + 1;
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar12);
        }
        piVar15 = local_60;
        lVar18 = *plVar1;
        iVar14 = *(int *)(param_1 + 0x128) / 2;
        if (0 < iVar14) {
          puVar16 = (undefined4 *)(lVar18 + ((longlong)*(int *)(param_1 + 0x128) + -1) * 4);
          do {
            uVar2 = *(undefined4 *)(lVar18 + uVar20 * 4);
            *(undefined4 *)(lVar18 + uVar20 * 4) = *puVar16;
            uVar20 = uVar20 + 1;
            *puVar16 = uVar2;
            puVar16 = puVar16 + -1;
          } while ((longlong)uVar20 < (longlong)iVar14);
        }
        LeaveCriticalSection(lpCriticalSection);
        if (piVar15 != (int *)0x0) {
          FMemory::Free(piVar15);
        }
        return;
      }
      break;
    }
    iVar21 = iVar22;
    if (param_2 < 0) {
      iVar3 = param_2 + iVar5;
      if (param_4 == '\0') {
        iVar21 = iVar19;
        iVar3 = param_2;
      }
LAB_1408f6123:
      param_2 = iVar3;
      if (0 < iVar21) {
        uVar11 = iVar10 + 1;
        local_58 = CONCAT44(local_58._4_4_,uVar11);
        if (local_58._4_4_ < (int)uVar11) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_60,uVar12);
          piVar15 = local_60;
          uVar11 = (uint)local_58;
        }
        uVar12 = (ulonglong)uVar11;
        piVar15[iVar10] = param_2;
      }
    }
    else {
      iVar3 = param_2;
      if (param_2 < iVar5) goto LAB_1408f6123;
      iVar21 = iVar19;
      if (param_4 != '\0') {
        iVar21 = iVar22;
        iVar3 = param_2 - iVar5;
        goto LAB_1408f6123;
      }
    }
    param_2 = param_2 + iVar7;
    iVar22 = iVar21 + -1;
  } while (iVar14 < 1);
  if (iVar9 < 0) {
    iVar10 = iVar9 + iVar5;
    if (param_4 == '\0') {
      iVar14 = iVar19;
      iVar10 = iVar9;
    }
  }
  else {
    iVar10 = iVar9;
    if (iVar5 <= iVar9) {
      if (param_4 == '\0') {
        iVar9 = iVar9 - iVar7;
        iVar14 = -1;
        goto LAB_1408f5f45;
      }
      iVar10 = iVar9 - iVar5;
    }
  }
  if (0 < iVar14) {
    iVar9 = (int)uVar12;
    uVar11 = iVar9 + 1;
    local_58 = CONCAT44(local_58._4_4_,uVar11);
    if (local_58._4_4_ < (int)uVar11) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_60,uVar12);
      piVar15 = local_60;
      uVar11 = (uint)local_58;
    }
    uVar12 = (ulonglong)uVar11;
    piVar15[iVar9] = iVar10;
  }
  iVar9 = iVar10 - iVar7;
  iVar14 = iVar14 + -1;
  goto LAB_1408f5f45;
}



// FUNCTION 1408f6360 Validate body=51 status=ok
// SIG undefined Validate(void)

undefined1 UImgMediaSource::Validate(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  uVar2 = GetFullPath(param_1,local_18);
  uVar1 = FPaths::DirectoryExists(uVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1408f63a0 Validate body=85 status=ok
// SIG undefined Validate(void)

undefined1 UMediaSource::Validate(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\mediaassets\\public\\MediaSource.h",0x30,
             L"Pure virtual not implemented (%s)",L"UMediaSource::Validate");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\mediaassets\\public\\MediaSource.h",0x30,
             L"Pure virtual not implemented (%s)",L"UMediaSource::Validate");
  return 0;
}



// FUNCTION 1408f6400 FUN_1408f6400 body=47 status=ok
// SIG undefined FUN_1408f6400(void)

longlong FUN_1408f6400(void)

{
  if (DAT_146862758 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146862758,&PTR_s__Script_ImgMedia_144146f30);
  }
  return DAT_146862758;
}



// FUNCTION 1408f6430 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UImgMediaSource::GetPrivateStaticClass(void)

{
  if (DAT_146862780 == 0) {
    FUN_14171ccd0(L"/Script/ImgMedia",L"ImgMediaSource",&DAT_146862780,
                  StaticRegisterNativesUImgMediaSource,0x60,0x10000000,0,L"Engine",&LAB_1408f65c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBaseMediaSource::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146862780;
}



// FUNCTION 1408f64e0 FUN_1408f64e0 body=47 status=ok
// SIG undefined FUN_1408f64e0(void)

longlong FUN_1408f64e0(void)

{
  if (DAT_146862778 == 0) {
    FUN_141786440(&DAT_146862778,&PTR_GetPrivateStaticClass_144146df0);
  }
  return DAT_146862778;
}



// FUNCTION 1408f6510 FUN_1408f6510 body=47 status=ok
// SIG undefined FUN_1408f6510(void)

longlong FUN_1408f6510(void)

{
  if (DAT_146862760 == 0) {
    FUN_141786a30(&DAT_146862760,&PTR_FUN_146286510);
  }
  return DAT_146862760;
}



// FUNCTION 1408f6540 FUN_1408f6540 body=47 status=ok
// SIG undefined FUN_1408f6540(void)

longlong FUN_1408f6540(void)

{
  if (DAT_146862768 == 0) {
    FUN_141786a30(&DAT_146862768,&PTR_FUN_1462865c0);
  }
  return DAT_146862768;
}



// FUNCTION 1408f6570 FUN_1408f6570 body=47 status=ok
// SIG undefined FUN_1408f6570(void)

longlong FUN_1408f6570(void)

{
  if (DAT_146862770 == 0) {
    FUN_141786a30(&DAT_146862770,&PTR_FUN_146286600);
  }
  return DAT_146862770;
}



// FUNCTION 1408f65d0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UBaseMediaSource::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1408f65e0 StaticRegisterNativesUImgMediaSource body=34 status=ok
// SIG undefined StaticRegisterNativesUImgMediaSource(void)

void UImgMediaSource::StaticRegisterNativesUImgMediaSource(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetProxies_144146f80,3);
  return;
}



// FUNCTION 1408f6610 execGetProxies body=201 status=ok
// SIG undefined execGetProxies(void)

void UImgMediaSource::execGetProxies(undefined8 param_1,longlong param_2)

{
  longlong **pplVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  pplVar1 = &local_18;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  GetProxies(param_1,pplVar1);
  plVar2 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1408f66e0 execGetSequencePath body=194 status=ok
// SIG undefined execGetSequencePath(void)

void UImgMediaSource::execGetSequencePath(longlong param_1,longlong param_2,void **param_3)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  void *_Src_00;
  void *local_18;
  int local_10;
  
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = *(int *)(param_1 + 0x58);
  lVar2 = (longlong)local_10;
  _Src = *(void **)(param_1 + 0x50);
  if (local_10 == 0) {
    _Src_00 = (void *)0x0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    _Src_00 = local_18;
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar2 * 2);
  }
  iVar1 = local_10;
  if (param_3 != &local_18) {
    *(int *)(param_3 + 1) = local_10;
    if ((local_10 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_3,local_10);
      ::_guard_xfg_dispatch_icall_nop(*param_3,_Src_00,(longlong)iVar1 * 2);
    }
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return;
}



// FUNCTION 1408f67b0 execSetSequencePath body=148 status=ok
// SIG undefined execSetSequencePath(void)

void UImgMediaSource::execSetSequencePath(undefined8 param_1,longlong param_2)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetSequencePath(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408f6850 FUN_1408f6850 body=43 status=ok
// SIG undefined FUN_1408f6850(void)

undefined8 * FUN_1408f6850(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144147258;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408f6880 CanPlayUrl body=1025 status=ok
// SIG undefined CanPlayUrl(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FImgMediaFactoryModule::CanPlayUrl
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined2 *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined8 local_108;
  longlong local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_148 = (undefined2 *)0x0;
  local_140 = 0;
  local_128 = 0;
  local_120 = 0;
  local_138 = 0;
  local_130 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  lVar8 = local_138;
  FGenericPlatformString::Memcpy(local_138,&DAT_144147308,8);
  local_150 = 0;
  local_158 = 0;
  cVar5 = FUN_1404e14f0(param_2,&local_138,&local_148,&local_128);
  if (lVar8 != 0) {
    FMemory::Free(lVar8);
  }
  if (cVar5 == '\0') {
    if (param_5 == (longlong *)0x0) goto LAB_1408f6c37;
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d0,L"No URI scheme found",L"FImgMediaFactoryModule",L"NoSchemeFound");
    iVar6 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_5,iVar6);
    }
    FText::FText(*param_5 + (longlong)iVar6 * 0x18,uVar7);
    local_98 = local_c8;
  }
  else {
    puVar9 = *(undefined8 **)(param_1 + 0x30);
    puVar12 = puVar9 + (longlong)*(int *)(param_1 + 0x38) * 2;
    for (; puVar9 != puVar12; puVar9 = puVar9 + 2) {
      puVar11 = &DAT_143f3eda8;
      if ((int)local_140 != 0) {
        puVar11 = local_148;
      }
      if (*(int *)(puVar9 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar9;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      if (iVar6 == 0) {
        uVar7 = 1;
        goto LAB_1408f6c39;
      }
    }
    if (param_5 == (longlong *)0x0) goto LAB_1408f6c37;
    lVar8 = FText::FromString(local_78,&local_148);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"The URI scheme \'{0}\' is not supported",L"FImgMediaFactoryModule"
                       ,L"SchemeNotSupported");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar7);
    local_60[0] = 4;
    FText::FText(local_50,lVar8);
    local_108 = *puVar9;
    local_118 = local_60;
    puStack_110 = &local_30;
    local_100 = puVar9[1];
    local_38 = '\x01';
    if (local_100 != 0) {
      LOCK();
      *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_f8,&local_118);
    uVar7 = FText::Format(local_b8,&local_108,uVar7);
    FText::FText(local_e8,uVar7);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_b0 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_f8);
    if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_48 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    plVar3 = (longlong *)puVar9[1];
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
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    plVar3 = *(longlong **)(lVar8 + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    iVar6 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_5,iVar6);
    }
    FText::FText(*param_5 + (longlong)iVar6 * 0x18,local_e8);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_e0 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_98 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
LAB_1408f6c37:
  uVar7 = 0;
LAB_1408f6c39:
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (local_148 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 1408f6c90 CreatePlayer body=315 status=ok
// SIG undefined CreatePlayer(void)

undefined8 *
FImgMediaFactoryModule::CreatePlayer(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined4 local_res10 [2];
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  local_res10[0] = 0;
  puVar5 = (undefined8 *)FName::FName(local_res10,"ImgMedia",1);
  uVar8 = *puVar5;
  uVar6 = FUN_14168dc80();
  plVar7 = (longlong *)FUN_141690010(uVar6,uVar8);
  bVar9 = plVar7 == (longlong *)0x0;
  if (bVar9) {
    puVar5 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    uVar8 = 0;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*plVar7 + 0x40))(plVar7,local_18,param_3);
    uVar8 = *puVar5;
  }
  *param_2 = uVar8;
  param_2[1] = puVar5[1];
  puVar5[1] = 0;
  *puVar5 = 0;
  plVar7 = plStack_20;
  if (bVar9) {
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  if ((!bVar9) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_10 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return param_2;
}



// FUNCTION 1408f6dd0 GetDisplayName body=47 status=ok
// SIG undefined GetDisplayName(void)

undefined8 FImgMediaFactoryModule::GetDisplayName(undefined8 param_1,undefined8 param_2)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_2,L"Image Sequence",L"FImgMediaFactoryModule",L"MediaPlayerDisplayName");
  return param_2;
}



// FUNCTION 1408f6e00 FUN_1408f6e00 body=123 status=ok
// SIG undefined FUN_1408f6e00(void)

undefined8 * FUN_1408f6e00(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146862aa8) {
    _Init_thread_header(&DAT_146862aa8);
    if (DAT_146862aa8 == -1) {
      FName::FName(&DAT_146862aa0,L"ImgMedia",1);
      _Init_thread_footer(&DAT_146862aa8);
    }
  }
  *param_2 = DAT_146862aa0;
  return param_2;
}



// FUNCTION 1408f6e90 StartupModule body=516 status=ok
// SIG undefined StartupModule(void)

void FImgMediaFactoryModule::StartupModule(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 6;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Linux",0xc);
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x18,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x18));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144147488,8);
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x18,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x18));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Windows",0x10);
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x18,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x18));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_1441474a0,8);
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28));
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  puVar5 = (undefined8 *)FName::FName(local_res8,"Media",1);
  uVar2 = *puVar5;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar2);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x68))(plVar4,param_1 + -8);
  }
  return;
}



// FUNCTION 1408f70a0 ShutdownModule body=65 status=ok
// SIG undefined ShutdownModule(void)

void FAvfMediaFactoryModule::ShutdownModule(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined8 *)FName::FName(local_res10,"Media",1);
  plVar2 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x70))(plVar2,param_1 + -8);
  }
  return;
}



// FUNCTION 1408f70f0 `scalar_deleting_destructor' body=239 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FAvfMediaFactoryModule::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 7);
  plVar1 = (longlong *)param_1[6];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[6];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 5);
  plVar1 = (longlong *)param_1[4];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[4];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 3);
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
  param_1[1] = IModuleInterface::vftable;
  *param_1 = &PTR__purecall_144147258;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1408f71e0 UImgMediaSettings body=136 status=ok
// SIG undefined UImgMediaSettings(void)

undefined8 * UImgMediaSettings::UImgMediaSettings(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__1441474c8;
  *(undefined4 *)(param_1 + 5) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 6) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 8;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x80;
  param_1[9] = 0;
  param_1[10] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9,0);
  FGenericPlatformString::Memcpy(param_1[9],L"proxy",0xc);
  *(undefined1 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 1408f7270 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FVulkanTimingQueryPool::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1408f72c0 FUN_1408f72c0 body=104 status=ok
// SIG undefined FUN_1408f72c0(void)

undefined8 * FUN_1408f72c0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = &PTR_CanPlayUrl_144147290;
  puVar1[1] = &PTR_LAB_1441472c8;
  puVar1[2] = 0;
  puVar2 = puVar1 + 1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return puVar2;
}



// FUNCTION 1408f7330 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UImgMediaSettings::GetPrivateStaticClass(void)

{
  if (DAT_146862ac0 == 0) {
    FUN_14171ccd0(L"/Script/ImgMediaFactory",L"ImgMediaSettings",&DAT_146862ac0,FUN_140447710,0x60,
                  0x10000004,0,L"Engine",&LAB_1408f7420,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146862ac0;
}



// FUNCTION 1408f73d0 FUN_1408f73d0 body=47 status=ok
// SIG undefined FUN_1408f73d0(void)

longlong FUN_1408f73d0(void)

{
  if (DAT_146862ab0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146862ab0,&PTR_s__Script_ImgMediaFactory_144147968);
  }
  return DAT_146862ab0;
}



// FUNCTION 1408f7430 FUN_1408f7430 body=47 status=ok
// SIG undefined FUN_1408f7430(void)

longlong FUN_1408f7430(void)

{
  if (DAT_146862ab8 == 0) {
    FUN_141786440(&DAT_146862ab8,&PTR_GetPrivateStaticClass_1441477b0);
  }
  return DAT_146862ab8;
}



// FUNCTION 1408f7460 FRgbaInputFile body=200 status=ok
// SIG undefined FRgbaInputFile(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong *
FRgbaInputFile::FRgbaInputFile(ulonglong *param_1,undefined8 *param_2,undefined2 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_f0 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar2 = 0;
  local_f8 = 0;
  lVar1 = operator_new(0x38);
  uVar4 = uVar2;
  local_e8 = lVar1;
  if (lVar1 != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,puVar3);
    local_f8 = 3;
    uVar2 = FUN_143925830(lVar1,local_50,param_3);
    uVar4 = 3;
  }
  *param_1 = uVar2;
  if (((uVar4 & 1) != 0) && (local_58 != 0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1408f7530 FUN_1408f7530 body=11 status=ok
// SIG undefined FUN_1408f7530(void)

void FUN_1408f7530(undefined8 *param_1)

{
  *param_1 = IDelegateInstance::vftable;
  return;
}



// FUNCTION 1408f7540 ~TStringConversion<TStringConvert<wchar_t,char>,128> body=36 status=ok
// SIG undefined ~TStringConversion<TStringConvert<wchar_t,char>,128>(void)

void TStringConversion<TStringConvert<wchar_t,char>,128>::
     ~TStringConversion<TStringConvert<wchar_t,char>,128>(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408f7570 ~FRgbaInputFile body=20 status=ok
// SIG undefined ~FRgbaInputFile(void)

void FRgbaInputFile::~FRgbaInputFile(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001408f7580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1408f7590 FUN_1408f7590 body=396 status=ok
// SIG undefined FUN_1408f7590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * FUN_1408f7590(undefined8 *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar4 = (longlong *)Scaleform::Render::FilterState::GetFilter(*param_1);
  strncpy((char *)local_118,"compression",0xff);
  puVar3 = (undefined8 *)*plVar4;
  local_19 = 0;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar8 = puVar3;
  puVar7 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar5 = (byte *)(puVar7 + 4);
    lVar6 = -(longlong)pbVar5;
    do {
      bVar2 = *pbVar5;
      uVar9 = (uint)pbVar5[(longlong)(local_118 + lVar6)];
      if (bVar2 != uVar9) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar9 != 0);
    if ((int)(bVar2 - uVar9) < 0) {
      puVar10 = (undefined8 *)puVar7[2];
      puVar7 = puVar8;
    }
    else {
      puVar10 = (undefined8 *)*puVar7;
    }
    puVar8 = puVar7;
    puVar7 = puVar10;
    cVar1 = *(char *)((longlong)puVar10 + 0x19);
  }
  if (puVar8 != puVar3) {
    pbVar5 = local_118;
    lVar6 = 0x20 - (longlong)pbVar5;
    do {
      bVar2 = *pbVar5;
      uVar9 = (uint)pbVar5[(longlong)puVar8 + lVar6];
      if (bVar2 != uVar9) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar9 != 0);
    if (-1 < (int)(bVar2 - uVar9)) goto LAB_1408f765d;
  }
  puVar8 = puVar3;
LAB_1408f765d:
  if (puVar8 != puVar3) {
    local_128 = 0;
    lVar6 = _guard_xfg_dispatch_icall_nop
                      (puVar8[0x24],0,&Imf::Attribute::RTTI_Type_Descriptor,
                       &Imf::TypedAttribute<Imf::Compression>::RTTI_Type_Descriptor);
    if (lVar6 != 0) {
      switch(*(undefined4 *)(lVar6 + 8)) {
      case 0:
        return L"Uncompressed";
      case 1:
        return L"RLE";
      case 2:
        return L"ZIPS";
      case 3:
        return L"ZIP";
      case 4:
        return L"PIZ";
      case 5:
        return L"PXR24";
      case 6:
        return L"B44";
      case 7:
        return L"B44A";
      default:
        return L"Unknown";
      }
    }
  }
  return L"";
}



// FUNCTION 1408f7740 GetDataWindow body=50 status=ok
// SIG undefined GetDataWindow(void)

int * FRgbaInputFile::GetDataWindow(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)FLightningBallModelComponent::ShouldUsePath(*param_1);
  iVar1 = piVar3[3];
  iVar2 = piVar3[1];
  *param_2 = (piVar3[2] - *piVar3) + 1;
  param_2[1] = (iVar1 - iVar2) + 1;
  return param_2;
}



// FUNCTION 1408f7780 GetFrameRate body=326 status=ok
// SIG undefined GetFrameRate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FRgbaInputFile::GetFrameRate(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar5 = (longlong *)Scaleform::Render::FilterState::GetFilter(*param_1);
  strncpy((char *)local_118,"framesPerSecond",0xff);
  puVar4 = (undefined8 *)*plVar5;
  local_19 = 0;
  cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
  puVar9 = puVar4;
  puVar8 = (undefined8 *)puVar4[1];
  while (cVar1 == '\0') {
    pbVar6 = (byte *)(puVar8 + 4);
    lVar7 = -(longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar10 = (uint)pbVar6[(longlong)(local_118 + lVar7)];
      if (bVar2 != uVar10) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar10 != 0);
    if ((int)(bVar2 - uVar10) < 0) {
      puVar11 = (undefined8 *)puVar8[2];
      puVar8 = puVar9;
    }
    else {
      puVar11 = (undefined8 *)*puVar8;
    }
    puVar9 = puVar8;
    puVar8 = puVar11;
    cVar1 = *(char *)((longlong)puVar11 + 0x19);
  }
  if (puVar9 != puVar4) {
    pbVar6 = local_118;
    lVar7 = 0x20 - (longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar10 = (uint)pbVar6[(longlong)puVar9 + lVar7];
      if (bVar2 != uVar10) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar10 != 0);
    if (-1 < (int)(bVar2 - uVar10)) goto LAB_1408f785d;
  }
  puVar9 = puVar4;
LAB_1408f785d:
  if (puVar9 != puVar4) {
    local_128 = 0;
    lVar7 = ::_guard_xfg_dispatch_icall_nop
                      (puVar9[0x24],0,&Imf::Attribute::RTTI_Type_Descriptor,
                       &Imf::TypedAttribute<Imf::Rational>::RTTI_Type_Descriptor);
    if (lVar7 != 0) {
      uVar3 = *(undefined4 *)(lVar7 + 0xc);
      *(undefined4 *)param_2 = *(undefined4 *)(lVar7 + 8);
      *(undefined4 *)((longlong)param_2 + 4) = uVar3;
      return param_2;
    }
  }
  *param_2 = *param_3;
  return param_2;
}



// FUNCTION 1408f78d0 GetUncompressedSize body=39 status=ok
// SIG undefined GetUncompressedSize(void)

int FRgbaInputFile::GetUncompressedSize(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FLightningBallModelComponent::ShouldUsePath(*param_1);
  return ((piVar1[2] - *piVar1) + 1) * ((piVar1[3] - piVar1[1]) + 1) * 8;
}



// FUNCTION 1408f7900 ReadPixels body=37 status=ok
// SIG undefined ReadPixels(void)

void FRgbaInputFile::ReadPixels(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FLightningBallModelComponent::ShouldUsePath(*param_1);
  FUN_1439268e0(*param_1,*(undefined4 *)(lVar1 + 4),*(undefined4 *)(lVar1 + 0xc));
  return;
}



// FUNCTION 1408f7930 SetFrameBuffer body=94 status=ok
// SIG undefined SetFrameBuffer(void)

void FRgbaInputFile::SetFrameBuffer(undefined8 *param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FLightningBallModelComponent::ShouldUsePath(*param_1);
  FUN_1439271e0(*param_1,param_2 + ((longlong)(piVar1[1] * *param_3) + (longlong)*piVar1) * -8,1,
                (longlong)*param_3);
  return;
}



// FUNCTION 1408f7990 SetGlobalThreadCount body=8 status=ok
// SIG undefined SetGlobalThreadCount(void)

void FOpenExr::SetGlobalThreadCount(undefined2 param_1)

{
  UEngineTypes::ConvertToTraceType(param_1);
  return;
}



// FUNCTION 1408f79a0 FUN_1408f79a0 body=165 status=ok
// SIG undefined FUN_1408f79a0(void)

undefined8 * FUN_1408f79a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = &PTR_DestroyObject_144148628;
  puVar1[2] = &PTR_Enqueue_144148060;
  puVar1[3] = &PTR_Dequeue_144148080;
  puVar1[4] = 0;
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar1[7] = puVar2;
    puVar1[6] = puVar2;
    return puVar1;
  }
  puVar1[7] = 0;
  puVar1[6] = 0;
  return puVar1;
}



// FUNCTION 1408f7a50 FUN_1408f7a50 body=312 status=ok
// SIG undefined FUN_1408f7a50(void)

undefined8 * FUN_1408f7a50(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  FUN_14237f6c0();
  plVar5 = (longlong *)0x0;
  *param_1 = &PTR_FUN_1441480a0;
  param_1[5] = &PTR_LAB_1441485e8;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  plVar4 = (longlong *)operator_new(0x38);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *plVar4 = (longlong)&PTR_StartProfileThreadUsage_144148618;
    *(undefined8 *)((longlong)plVar4 + 0xc) = 1;
    *(undefined1 *)((longlong)plVar4 + 0x14) = 0;
    *(undefined1 *)(plVar4 + 4) = 0;
    plVar4[3] = 0;
    *(undefined8 *)((longlong)plVar4 + 0x24) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x2e) = 0;
    *(undefined2 *)((longlong)plVar4 + 0x2c) = 0;
    plVar5 = plVar4;
  }
  local_18 = plVar5 + 2;
  local_10 = plVar5;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar5 = local_10;
  param_1[0x65] = local_18;
  param_1[0x66] = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_10 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
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
  }
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  return param_1;
}



// FUNCTION 1408f7ba0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TMediaSampleQueue<IMediaAudioSample>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_Enqueue_144148060;
  param_1[1] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>(param_1 + 4)
  ;
  param_1[1] = &PTR__purecall_143fcfdf8;
  *param_1 = &PTR__purecall_143fcfdf8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1408f7c10 FUN_1408f7c10 body=247 status=ok
// SIG undefined FUN_1408f7c10(void)

longlong FUN_1408f7c10(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x330);
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
  plVar4 = *(longlong **)(param_1 + 800);
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
  plVar4 = *(longlong **)(param_1 + 0x310);
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
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x340);
  }
  return param_1;
}



// FUNCTION 1408f7d10 Activate body=69 status=ok
// SIG undefined Activate(void)

void UMediaSoundComponent::Activate(longlong *param_1,char param_2)

{
  char cVar1;
  
  if (param_2 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x2c8))();
    if (cVar1 == '\0') goto LAB_1408f7d3f;
  }
  (**(code **)(*param_1 + 0x358))(param_1,1);
LAB_1408f7d3f:
  FUN_14232c410(param_1,param_2);
  return;
}



// FUNCTION 1408f7d60 Conv_DropTimecodeToString body=286 status=ok
// SIG undefined Conv_DropTimecodeToString(void)

undefined8
UDropTimecodeToStringConversion::Conv_DropTimecodeToString(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_stack_ffffffffffffffc8;
  undefined2 uVar9;
  undefined2 *local_18;
  undefined8 local_10;
  
  uVar9 = (undefined2)((uint)in_stack_ffffffffffffffc8 >> 0x10);
  uVar8 = *param_2;
  if (-1 < (int)uVar8) {
    uVar5 = param_2[1];
    if (-1 < (int)uVar5) {
      uVar7 = param_2[2];
      if ((-1 < (int)uVar7) && (uVar1 = param_2[3], -1 < (int)uVar1)) {
        puVar4 = (undefined2 *)0x0;
        iVar2 = 0;
        goto LAB_1408f7df6;
      }
    }
  }
  local_10 = 3;
  local_18 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  puVar4 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,3,&DAT_144147ff8,3,CONCAT22(uVar9,0x3f));
  uVar1 = param_2[3];
  uVar7 = param_2[2];
  uVar5 = param_2[1];
  uVar8 = *param_2;
  iVar2 = (int)local_10;
LAB_1408f7df6:
  pwVar3 = L"%s%02d;%02d;%02d;%02d";
  if ((char)param_2[4] == '\0') {
    pwVar3 = L"%s%02d:%02d:%02d:%02d";
  }
  puVar6 = &DAT_143f3eda8;
  if (iVar2 != 0) {
    puVar6 = puVar4;
  }
  FString::PrintfImpl(param_1,pwVar3,puVar6,(uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f),
                      (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f),
                      (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f),
                      (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f));
  if (puVar4 != (undefined2 *)0x0) {
    FMemory::Free(puVar4);
  }
  return param_1;
}



// FUNCTION 1408f7e80 FUN_1408f7e80 body=49 status=ok
// SIG undefined FUN_1408f7e80(void)

void FUN_1408f7e80(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x358))(param_1,0);
  }
  FUN_142338f40(param_1);
  return;
}



// FUNCTION 1408f7ec0 FUN_1408f7ec0 body=383 status=ok
// SIG undefined FUN_1408f7ec0(void)

void FUN_1408f7ec0(longlong param_1,longlong param_2,int *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  param_5[0] = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[3] = 0;
  param_5[4] = 0;
  param_5[5] = 0;
  param_5[6] = 0;
  *(bool *)((longlong)param_5 + 0x19) = param_4 != 0;
  iVar3 = *param_3;
  if (iVar3 != 7) {
    param_3 = param_3 + 1;
    do {
      switch(iVar3) {
      case 0:
        if ((*(ushort *)(param_3 + 1) & *(ushort *)(param_2 + (longlong)*param_3 * 2)) == 0) {
          *param_5 = *param_5;
        }
        else {
          *param_5 = *param_5 + param_3[2];
        }
        break;
      case 1:
        if ((*(ushort *)(param_3 + 1) & *(ushort *)(param_2 + (longlong)*param_3 * 2)) == 0) {
          param_5[1] = param_5[1];
        }
        else {
          param_5[1] = param_5[1] + param_3[2];
        }
        break;
      case 2:
        if ((*(ushort *)(param_3 + 1) & *(ushort *)(param_2 + (longlong)*param_3 * 2)) == 0) {
          param_5[2] = param_5[2];
        }
        else {
          param_5[2] = param_5[2] + param_3[2];
        }
        break;
      case 3:
        if ((*(ushort *)(param_3 + 1) & *(ushort *)(param_2 + (longlong)*param_3 * 2)) == 0) {
          param_5[3] = param_5[3];
        }
        else {
          param_5[3] = param_5[3] + param_3[2];
        }
        break;
      case 4:
        *(bool *)(param_5 + 4) =
             (*(ushort *)(param_3 + 1) & *(ushort *)(param_2 + (longlong)*param_3 * 2)) != 0;
        break;
      case 5:
        *(bool *)(param_5 + 6) =
             (*(ushort *)(param_3 + 1) & *(ushort *)(param_2 + (longlong)*param_3 * 2)) != 0;
        break;
      case 6:
        if (param_4 == 0) {
          iVar3 = param_5[3];
          if ((*(int *)(param_1 + 0x14) < iVar3) && (*(int *)(param_1 + 0x18) < iVar3)) {
            *(int *)(param_1 + 0x18) = iVar3;
            iVar3 = param_5[3];
          }
          *(int *)(param_1 + 0x14) = iVar3;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x14);
          iVar1 = param_5[3];
          bVar5 = SBORROW4(iVar3,iVar1);
          iVar2 = iVar3 - iVar1;
          iVar4 = iVar3;
          if (iVar3 < iVar1) {
            *(int *)(param_1 + 0x14) = iVar1;
            iVar3 = param_5[3];
            bVar5 = SBORROW4(iVar1,iVar3);
            iVar2 = iVar1 - iVar3;
            iVar4 = iVar1;
          }
          if (iVar3 == iVar1 || bVar5 != iVar2 < 0) {
            param_5[5] = *(int *)(param_1 + 0x18);
          }
          else {
            *(int *)(param_1 + 0x18) = iVar4;
            param_5[5] = iVar4;
          }
        }
        param_5[5] = *(int *)(param_1 + 0x18);
      }
      iVar3 = param_3[3];
      param_3 = param_3 + 4;
    } while (iVar3 != 7);
  }
  return;
}



// FUNCTION 1408f8060 Dequeue body=342 status=ok
// SIG undefined Dequeue(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 TMediaSampleQueue<IMediaAudioSample>::Dequeue(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  DoPendingFlushes(param_1 + -8);
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  cVar6 = TQueue<TSharedPtr<IMediaAudioSample,1>,0>::Peek(param_1 + 0x18,&local_58);
  if ((cVar6 == '\0') || (local_58 == 0)) {
    uVar7 = 0;
  }
  else {
    TQueue<TSharedPtr<IMediaAudioSample,1>,0>::Pop(param_1 + 0x18);
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    UNLOCK();
    local_48 = local_58;
    plStack_40 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    if (&local_48 != param_2) {
      local_48 = *param_2;
      plStack_40 = (longlong *)param_2[1];
      local_38 = local_58;
      plStack_30 = plStack_50;
      *param_2 = local_58;
      param_2[1] = (longlong)plStack_50;
    }
    plVar5 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
    uVar7 = 1;
  }
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 1408f81c0 DestroyObject body=68 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<TMediaSampleQueue<IMediaAudioSample>_>::
     DestroyObject(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_Enqueue_144148060;
  *(undefined ***)(param_1 + 0x18) = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0x30);
  *(undefined ***)(param_1 + 0x18) = &PTR__purecall_143fcfdf8;
  *(undefined ***)(param_1 + 0x10) = &PTR__purecall_143fcfdf8;
  return;
}



// FUNCTION 1408f8210 DoPendingFlushes body=419 status=ok
// SIG undefined DoPendingFlushes(void)

void TMediaSampleQueue<IMediaAudioSample>::DoPendingFlushes(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      lVar4 = **(longlong **)(param_1 + 0x28);
      if (lVar4 == 0) break;
      plVar1 = (longlong *)(lVar4 + 8);
      if (&local_38 != plVar1) {
        local_38 = *plVar1;
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_30,lVar4 + 0x10);
      }
      lVar5 = *(longlong *)(param_1 + 0x28);
      *(longlong *)(param_1 + 0x28) = lVar4;
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
      if (plVar1 != &local_28) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar4 + 0x10,&plStack_20);
        plVar1 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_20 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_20)(plStack_20);
            LOCK();
            piVar6 = (int *)((longlong)plVar1 + 0xc);
            iVar3 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_20 + 8))(plStack_20,1);
            }
          }
        }
      }
      if (lVar5 != 0) {
        plVar1 = *(longlong **)(lVar5 + 0x10);
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar1 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar1)(plVar1);
            LOCK();
            piVar6 = (int *)((longlong)plVar1 + 0xc);
            iVar3 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
            }
          }
        }
        FMemory::operator_delete(lVar5,0x18);
      }
      piVar6 = (int *)(param_1 + 0x10);
      if (local_38 == 0) {
        piVar6 = (int *)(param_1 + 0x14);
      }
      LOCK();
      *piVar6 = *piVar6 + -1;
      UNLOCK();
    } while (0 < *(int *)(param_1 + 0x14));
    plVar1 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_30 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar6 = (int *)((longlong)plVar1 + 0xc);
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1408f83c0 Enqueue body=165 status=ok
// SIG undefined Enqueue(void)

ulonglong TMediaSampleQueue<IMediaAudioSample>::Enqueue(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  plVar5 = (longlong *)param_2[1];
  uVar6 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)operator_new(0x18);
  if (puVar9 == (undefined8 *)0x0) {
    uVar10 = 0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = (int)lVar7 - 1;
      uVar10 = (ulonglong)uVar8;
      if (uVar8 == 0) {
        uVar10 = (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          uVar10 = (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    uVar10 = uVar10 & 0xffffffffffffff00;
  }
  else {
    *puVar9 = 0;
    puVar9[1] = uVar6;
    puVar9[2] = plVar5;
    LOCK();
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x20) = puVar9;
    UNLOCK();
    LOCK();
    uVar6 = *puVar4;
    *puVar4 = puVar9;
    UNLOCK();
    uVar10 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  return uVar10;
}



// FUNCTION 1408f8470 FUN_1408f8470 body=91 status=ok
// SIG undefined FUN_1408f8470(void)

int FUN_1408f8470(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2d8) * 0x3c + *(int *)(param_1 + 0x2dc);
  iVar1 = (iVar2 * 0x3c + *(int *)(param_1 + 0x2e0)) * *(int *)(param_1 + 0x2ec) +
          *(int *)(param_1 + 0x2e4);
  if (*(char *)(param_1 + 0x2e8) != '\0') {
    return iVar1 + (iVar2 - iVar2 / 10) * -2;
  }
  return iVar1;
}



// FUNCTION 1408f84d0 GetDropTimeCodeFrameNumber body=75 status=ok
// SIG undefined GetDropTimeCodeFrameNumber(void)

void ULinearTimecodeComponent::GetDropTimeCodeFrameNumber(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1 * 0x3c + param_1[1];
  iVar1 = (iVar2 * 0x3c + param_1[2]) * param_1[5] + param_1[3];
  if ((char)param_1[4] != '\0') {
    *param_2 = iVar1 + (iVar2 - iVar2 / 10) * -2;
    return;
  }
  *param_2 = iVar1;
  return;
}



// FUNCTION 1408f8520 Peek body=334 status=ok
// SIG undefined Peek(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 TMediaSampleQueue<IMediaAudioSample>::Peek(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  DoPendingFlushes(param_1 + -8);
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  cVar6 = TQueue<TSharedPtr<IMediaAudioSample,1>,0>::Peek(param_1 + 0x18,&local_48);
  if ((cVar6 == '\0') || (local_48 == 0)) {
    uVar7 = 0;
  }
  else {
    local_38 = local_48;
    plStack_30 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    if (&local_38 != param_2) {
      local_38 = *param_2;
      plStack_30 = (longlong *)param_2[1];
      local_28 = local_48;
      plStack_20 = plStack_40;
      *param_2 = local_48;
      param_2[1] = (longlong)plStack_40;
    }
    plVar5 = plStack_30;
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
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
    uVar7 = 1;
  }
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 1408f8670 Peek body=229 status=ok
// SIG undefined Peek(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 TQueue<TSharedPtr<IMediaAudioSample,1>,0>::Peek(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (**(longlong **)(param_1 + 8) != 0) {
    uStack_30 = *(longlong **)(**(longlong **)(param_1 + 8) + 0x10);
    local_38 = *(undefined8 *)(**(longlong **)(param_1 + 8) + 8);
    if (uStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
      UNLOCK();
    }
    if (&local_38 != param_2) {
      local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
      uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
      uVar4 = *param_2;
      plVar5 = (longlong *)param_2[1];
      local_28 = (undefined4)local_38;
      uStack_24 = local_38._4_4_;
      uStack_20 = (undefined4)uStack_30;
      uStack_1c = uStack_30._4_4_;
      *(undefined4 *)param_2 = (undefined4)local_38;
      *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar4;
      uStack_30 = plVar5;
    }
    plVar5 = uStack_30;
    if (uStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_30 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*uStack_30)(uStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*uStack_30 + 8))(uStack_30,1);
        }
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1408f8760 Pop body=175 status=ok
// SIG undefined Pop(void)

undefined8 TMediaSampleQueue<IMediaAudioSample>::Pop(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong local_18;
  longlong *plStack_10;
  
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  cVar6 = TQueue<TSharedPtr<IMediaAudioSample,1>,0>::Peek(param_1 + 0x18,&local_18);
  if ((cVar6 == '\0') || (local_18 == 0)) {
    uVar7 = 0;
  }
  else {
    TQueue<TSharedPtr<IMediaAudioSample,1>,0>::Pop(param_1 + 0x18);
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    UNLOCK();
    uVar7 = 1;
  }
  plVar5 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 1408f8810 Pop body=245 status=ok
// SIG undefined Pop(void)

undefined8 TQueue<TSharedPtr<IMediaAudioSample,1>,0>::Pop(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_18;
  longlong *local_10;
  
  lVar4 = **(longlong **)(param_1 + 8);
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = lVar4;
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(lVar4 + 8) != &local_18) {
    *(undefined8 *)(lVar4 + 8) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar4 + 0x10,&local_10);
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
  }
  if (lVar5 != 0) {
    plVar6 = *(longlong **)(lVar5 + 0x10);
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
    FMemory::operator_delete(lVar5,0x18);
  }
  return 1;
}



// FUNCTION 1408f8910 FUN_1408f8910 body=694 status=ok
// SIG undefined FUN_1408f8910(void)

void FUN_1408f8910(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  
  *(undefined1 *)(param_1 + 0x2f2) = 0;
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x318) + 8);
  local_88 = (longlong *)0x0;
  plStack_80 = (longlong *)0x0;
  cVar4 = (**(code **)*puVar9)(puVar9,&local_88);
  plVar3 = plStack_80;
  do {
    plStack_80 = plVar3;
    if (cVar4 == '\0') {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      plVar3 = *(longlong **)(param_2 + 8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      return;
    }
    iVar5 = (**(code **)(*local_88 + 0x18))();
    lVar8 = (**(code **)*local_88)();
    if (iVar5 == 1) {
      iVar10 = 8;
    }
    else if (iVar5 == 2) {
LAB_1408f89e9:
      iVar10 = 4;
    }
    else if (iVar5 == 3) {
      iVar10 = 1;
    }
    else if (iVar5 == 4) {
      iVar10 = 2;
    }
    else {
      if (iVar5 == 5) goto LAB_1408f89e9;
      iVar10 = 0;
    }
    iVar6 = (**(code **)(*local_88 + 8))();
    iVar7 = (**(code **)(*local_88 + 0x20))();
    lVar11 = (ulonglong)(uint)(iVar7 * iVar6 * iVar10) + lVar8;
    while ((lVar8 != lVar11 &&
           ((((iVar5 == 1 || (iVar5 == 2)) || (iVar5 == 3)) || ((iVar5 == 4 || (iVar5 == 5))))))) {
      lVar8 = lVar8 + iVar6 * iVar10;
      cVar4 = FLinearTimecodeDecoder::Sample(*(undefined8 *)(param_1 + 0x328));
      if (cVar4 != '\0') {
        *(undefined1 *)(param_1 + 0x2f2) = 1;
        local_78 = *(undefined8 *)(param_1 + 0x2d8);
        uStack_70 = *(undefined8 *)(param_1 + 0x2e0);
        local_60 = *(undefined4 *)(param_1 + 0x2f0);
        local_68 = *(undefined8 *)(param_1 + 0x2e8);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x2f8,&local_78);
      }
    }
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x318) + 8);
    cVar4 = (**(code **)*puVar9)(puVar9,&local_88);
    plVar3 = plStack_80;
  } while( true );
}



// FUNCTION 1408f8bd0 RequestFlush body=57 status=ok
// SIG undefined RequestFlush(void)

undefined8 TMediaSampleQueue<IMediaAudioSample>::RequestFlush(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)operator_new();
  uVar3 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x20) = puVar2;
    UNLOCK();
    LOCK();
    uVar3 = *puVar1;
    *puVar1 = puVar2;
    UNLOCK();
  }
  LOCK();
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  UNLOCK();
  return uVar3;
}



// FUNCTION 1408f8c10 Sample body=475 status=ok
// SIG undefined Sample(void)

undefined8 FLinearTimecodeDecoder::Sample(float *param_1,float param_2,undefined8 param_3)

{
  short sVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = (float)((int)param_1[2] + 1);
  param_1[2] = fVar2;
  if (*(char *)(param_1 + 1) == '\0') {
    if (param_2 <= *param_1) {
      return 0;
    }
  }
  else if (*param_1 <= param_2) {
    return 0;
  }
  *(bool *)(param_1 + 1) = *(char *)(param_1 + 1) == '\0';
  if (*(char *)(param_1 + 4) == '\0') {
    iVar3 = (int)param_1[3] * 3;
    sVar1 = *(short *)((longlong)param_1 + 0x1e);
    if ((int)fVar2 < (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) {
      *(short *)(param_1 + 7) = *(short *)(param_1 + 7) * 2 - (sVar1 >> 0xf);
      *(short *)((longlong)param_1 + 0x1e) = sVar1 * 2 - (*(short *)(param_1 + 8) >> 0xf);
      *(short *)(param_1 + 8) =
           *(short *)(param_1 + 8) * 2 - (*(short *)((longlong)param_1 + 0x22) >> 0xf);
      *(short *)((longlong)param_1 + 0x22) =
           *(short *)((longlong)param_1 + 0x22) * 2 - (*(short *)(param_1 + 9) >> 0xf);
      *(short *)(param_1 + 9) = *(short *)(param_1 + 9) * 2 + 1;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(short *)(param_1 + 7) = *(short *)(param_1 + 7) * 2 - (sVar1 >> 0xf);
      *(short *)((longlong)param_1 + 0x1e) = sVar1 * 2 - (*(short *)(param_1 + 8) >> 0xf);
      sVar1 = *(short *)(param_1 + 9);
      *(short *)(param_1 + 8) =
           *(short *)(param_1 + 8) * 2 - (*(short *)((longlong)param_1 + 0x22) >> 0xf);
      *(short *)(param_1 + 9) = sVar1 * 2;
      *(short *)((longlong)param_1 + 0x22) =
           *(short *)((longlong)param_1 + 0x22) * 2 - (sVar1 >> 0xf);
      fVar2 = param_1[2];
      param_1[2] = 0.0;
      param_1[3] = (float)(((int)param_1[3] + (int)fVar2 * 4) / 5);
    }
    if (*(short *)(param_1 + 9) != 0x3ffd) {
      if (*(short *)(param_1 + 7) != -0x4004) {
        return 0;
      }
      FUN_1408f7ec0(param_1,param_1 + 7,&DAT_146286b20,0,param_3);
      return 1;
    }
    FUN_1408f7ec0(param_1,param_1 + 7,&DAT_146286940,1,param_3);
    return 1;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = 0.0;
  param_1[3] = (float)(((int)param_1[3] + (int)fVar2 * 4) / 5);
  return 0;
}



// FUNCTION 1408f8df0 SetDropTimecodeFrameNumber body=242 status=ok
// SIG undefined SetDropTimecodeFrameNumber(void)

void ULinearTimecodeComponent::SetDropTimecodeFrameNumber
               (undefined8 *param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  uVar1 = param_1[1];
  *(undefined8 *)param_3 = *param_1;
  *(undefined8 *)(param_3 + 2) = uVar1;
  *(undefined8 *)(param_3 + 4) = param_1[2];
  param_3[6] = *(int *)(param_1 + 3);
  if (*(char *)(param_1 + 2) != '\0') {
    dVar4 = (double)(*(int *)((longlong)param_1 + 0x14) * 1000);
    iVar2 = (int)(dVar4 * 0.5994005994005994);
    iVar3 = param_2 % iVar2;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    param_2 = param_2 + ((param_2 / iVar2) * 9 - (iVar3 + -2) / (int)(dVar4 * -0.05994005994005994))
                        * 2;
  }
  param_3[3] = param_2 % *(int *)((longlong)param_1 + 0x14);
  param_2 = param_2 / *(int *)((longlong)param_1 + 0x14);
  iVar2 = param_2 / 0x3c;
  param_3[2] = param_2 % 0x3c;
  param_3[1] = iVar2 % 0x3c;
  *param_3 = (iVar2 / 0x3c) % 0x18;
  return;
}



// FUNCTION 1408f8ef0 FUN_1408f8ef0 body=27 status=ok
// SIG undefined FUN_1408f8ef0(void)

void FUN_1408f8ef0(undefined8 param_1)

{
  FUN_142357eb0();
  FUN_1408f8f10(param_1);
  return;
}



// FUNCTION 1408f8f10 FUN_1408f8f10 body=891 status=ok
// SIG undefined FUN_1408f8f10(void)

void FUN_1408f8f10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  
  if (*(longlong *)(param_1 + 0x2d0) == 0) {
    local_60 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x318) == &local_68) {
      return;
    }
    *(undefined8 *)(param_1 + 0x318) = 0;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 800,&local_60);
    plVar6 = local_60;
    if (local_60 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = local_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return;
    }
    (**(code **)*local_60)(local_60);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 != 1) {
      return;
    }
    lVar5 = *local_60;
    local_50 = local_60;
  }
  else {
    FUN_142aa9c30(*(longlong *)(param_1 + 0x2d0),&local_58);
    plVar1 = local_58;
    plVar6 = *(longlong **)(param_1 + 0x310);
    plVar7 = plVar6;
    plVar8 = (longlong *)0x0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(plVar6 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar7 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar9) {
        LOCK();
        bVar9 = iVar4 == (int)plVar6[1];
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar7 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x308);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(plVar6 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if (plVar1 != plVar8) {
      plStack_70 = (longlong *)FUN_1408f79a0();
      local_78 = plStack_70 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
      local_88 = local_78;
      plStack_80 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
        UNLOCK();
      }
      pplVar3 = (longlong **)(param_1 + 0x318);
      if (pplVar3 != &local_88) {
        *pplVar3 = local_78;
        local_88 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 800,&plStack_80);
      }
      plVar6 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_80 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
      }
      plVar6 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_70)(plStack_70);
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
      plVar6 = *(longlong **)(param_1 + 800);
      local_48 = *pplVar3;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_40 = plVar6;
      FMediaPlayerFacade::AddAudioSampleSink(local_58,&local_48);
      plVar1 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_40 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
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
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      plVar1 = local_50;
      *(longlong **)(param_1 + 0x308) = local_58;
      plVar6 = *(longlong **)(param_1 + 0x310);
      if (local_50 != plVar6) {
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
          UNLOCK();
          plVar6 = *(longlong **)(param_1 + 0x310);
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        *(longlong **)(param_1 + 0x310) = plVar1;
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x318);
    if (lVar5 != 0) {
      local_30 = *(longlong *)(param_1 + 800);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      local_38 = lVar5;
      FUN_1408f8910(param_1,&local_38);
    }
    if (local_50 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar6 = local_50 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return;
    }
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar2 = (int *)((longlong)local_50 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 != 1) {
      return;
    }
    lVar5 = *local_50;
  }
  (**(code **)(lVar5 + 8))(local_50,1);
  return;
}



// FUNCTION 1408f9290 FUN_1408f9290 body=47 status=ok
// SIG undefined FUN_1408f9290(void)

longlong FUN_1408f9290(void)

{
  if (DAT_146862b50 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146862b50,&PTR_s__Script_LinearTimecode_144148e70);
  }
  return DAT_146862b50;
}



// FUNCTION 1408f92c0 FUN_1408f92c0 body=53 status=ok
// SIG undefined FUN_1408f92c0(void)

void FUN_1408f92c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &PTR_FUN_144148d50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1408f9300 FUN_1408f9300 body=162 status=ok
// SIG undefined FUN_1408f9300(void)

longlong FUN_1408f9300(void)

{
  if (DAT_146862b80 == 0) {
    FUN_14171ccd0(L"/Script/LinearTimecode",L"LinearTimecodeComponent",&DAT_146862b80,FUN_1408f9630,
                  0x340,0x10000000,0,L"Engine",&LAB_1408f95b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_146862b80;
}



// FUNCTION 1408f93b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDropTimecodeToStringConversion::GetPrivateStaticClass(void)

{
  if (DAT_146862b98 == 0) {
    FUN_14171ccd0(L"/Script/LinearTimecode",L"DropTimecodeToStringConversion",&DAT_146862b98,
                  StaticRegisterNativesUDropTimecodeToStringConversion,0x28,0x10000000,0,L"Engine",
                  FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146862b98;
}



// FUNCTION 1408f9460 FUN_1408f9460 body=47 status=ok
// SIG undefined FUN_1408f9460(void)

longlong FUN_1408f9460(void)

{
  if (DAT_146862b78 == 0) {
    FUN_141786440(&DAT_146862b78,&PTR_FUN_144148960);
  }
  return DAT_146862b78;
}



// FUNCTION 1408f9490 FUN_1408f9490 body=47 status=ok
// SIG undefined FUN_1408f9490(void)

longlong FUN_1408f9490(void)

{
  if (DAT_146862b60 == 0) {
    FUN_141786a30(&DAT_146862b60,&PTR_FUN_146286fc0);
  }
  return DAT_146862b60;
}



// FUNCTION 1408f94c0 FUN_1408f94c0 body=47 status=ok
// SIG undefined FUN_1408f94c0(void)

longlong FUN_1408f94c0(void)

{
  if (DAT_146862b68 == 0) {
    FUN_141786a30(&DAT_146862b68,&PTR_FUN_146287040);
  }
  return DAT_146862b68;
}



// FUNCTION 1408f94f0 FUN_1408f94f0 body=47 status=ok
// SIG undefined FUN_1408f94f0(void)

longlong FUN_1408f94f0(void)

{
  if (DAT_146862b70 == 0) {
    FUN_141786a30(&DAT_146862b70,&PTR_FUN_146287100);
  }
  return DAT_146862b70;
}



// FUNCTION 1408f9520 FUN_1408f9520 body=47 status=ok
// SIG undefined FUN_1408f9520(void)

longlong FUN_1408f9520(void)

{
  if (DAT_146862b90 == 0) {
    FUN_141786440(&DAT_146862b90,&PTR_GetPrivateStaticClass_144148ba0);
  }
  return DAT_146862b90;
}



// FUNCTION 1408f9550 FUN_1408f9550 body=47 status=ok
// SIG undefined FUN_1408f9550(void)

longlong FUN_1408f9550(void)

{
  if (DAT_146862b88 == 0) {
    FUN_141786a30(&DAT_146862b88,&PTR_FUN_1462872a0);
  }
  return DAT_146862b88;
}



// FUNCTION 1408f95f0 Get_Z_Construct_UScriptStruct_FDropTimecode_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDropTimecode_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDropTimecode_CRC(void)

{
  return 0xac28b699;
}



// FUNCTION 1408f9600 StaticRegisterNativesUDropTimecodeToStringConversion body=34 status=ok
// SIG undefined StaticRegisterNativesUDropTimecodeToStringConversion(void)

void UDropTimecodeToStringConversion::StaticRegisterNativesUDropTimecodeToStringConversion(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Conv_DropTimecodeToString_144148ef8,1);
  return;
}



// FUNCTION 1408f9630 FUN_1408f9630 body=34 status=ok
// SIG undefined FUN_1408f9630(void)

void FUN_1408f9630(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1408f9300();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetDropFrameNumber_144148ec8,3);
  return;
}



// FUNCTION 1408f9660 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDropTimecode::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862b40 == 0) {
    if (DAT_146862b50 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146862b50,&PTR_s__Script_LinearTimecode_144148e70);
    }
    lVar1 = DAT_146862b50;
    uVar2 = Get_Z_Construct_UScriptStruct_FDropTimecode_CRC();
    DAT_146862b40 = GetStaticStruct(FUN_1408f9710,lVar1,L"DropTimecode",0x1c,uVar2);
  }
  return;
}



// FUNCTION 1408f96e0 FUN_1408f96e0 body=47 status=ok
// SIG undefined FUN_1408f96e0(void)

longlong FUN_1408f96e0(void)

{
  if (DAT_146862b58 == 0) {
    FUN_141786a30(&DAT_146862b58,&PTR_FUN_146286f80);
  }
  return DAT_146862b58;
}



// FUNCTION 1408f9710 FUN_1408f9710 body=47 status=ok
// SIG undefined FUN_1408f9710(void)

longlong FUN_1408f9710(void)

{
  if (DAT_146862b48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862b48,&PTR_FUN_146286ec0);
  }
  return DAT_146862b48;
}



// FUNCTION 1408f9740 execConv_DropTimecodeToString body=217 status=ok
// SIG undefined execConv_DropTimecodeToString(void)

void UDropTimecodeToStringConversion::execConv_DropTimecodeToString
               (undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong local_38 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)Conv_DropTimecodeToString(local_38,puVar2);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408f9820 FUN_1408f9820 body=43 status=ok
// SIG undefined FUN_1408f9820(void)

void FUN_1408f9820(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1408f8470();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408f9850 execGetDropTimeCodeFrameNumber body=226 status=ok
// SIG undefined execGetDropTimeCodeFrameNumber(void)

void ULinearTimecodeComponent::execGetDropTimeCodeFrameNumber(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 local_res10 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  GetDropTimeCodeFrameNumber(puVar3,puVar2);
  return;
}



// FUNCTION 1408f9940 execSetDropTimecodeFrameNumber body=300 status=ok
// SIG undefined execSetDropTimecodeFrameNumber(void)

void ULinearTimecodeComponent::execSetDropTimecodeFrameNumber(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_res10 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res10[0] = 0;
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetDropTimecodeFrameNumber(puVar1,local_res10[0],puVar2);
  return;
}



// FUNCTION 1408f9a70 FUN_1408f9a70 body=53 status=ok
// SIG undefined FUN_1408f9a70(void)

undefined8 * FUN_1408f9a70(undefined8 *param_1)

{
  UMovieSceneSection::UMovieSceneSection();
  *param_1 = &PTR__scalar_deleting_destructor__144149430;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return param_1;
}



// FUNCTION 1408f9ab0 UMovieSceneMediaTrack body=51 status=ok
// SIG undefined UMovieSceneMediaTrack(void)

undefined8 * UMovieSceneMediaTrack::UMovieSceneMediaTrack(undefined8 *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack();
  *param_1 = &PTR__scalar_deleting_destructor__144149768;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xfffffffc;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) | 0xc;
  return param_1;
}



// FUNCTION 1408f9af0 FUN_1408f9af0 body=146 status=ok
// SIG undefined FUN_1408f9af0(void)

void FUN_1408f9af0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[2];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = &PTR_FUN_143fcdb88;
    return;
  }
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
    *param_1 = &PTR_FUN_143fcdb88;
    return;
  }
  *param_1 = &PTR_FUN_143fcdb88;
  return;
}



// FUNCTION 1408f9b90 FUN_1408f9b90 body=43 status=ok
// SIG undefined FUN_1408f9b90(void)

undefined8 * FUN_1408f9b90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1408f9bc0 FUN_1408f9bc0 body=43 status=ok
// SIG undefined FUN_1408f9bc0(void)

undefined8 * FUN_1408f9bc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1408f9bf0 FUN_1408f9bf0 body=165 status=ok
// SIG undefined FUN_1408f9bf0(void)

undefined8 * FUN_1408f9bf0(undefined8 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  *param_1 = &PTR_FUN_144149428;
  if (param_1[4] != 0) {
    FUN_140483870(param_1[4] + 0x108,param_1);
    FUN_142aa72a0(param_1[4]);
    iVar1 = *(int *)(param_1[4] + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) & 0xbfffffff;
  }
  FUN_1408f9af0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1408f9ca0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneMediaSectionTemplate::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1408f9cf0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong URemnantFlyCameraState::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 1408f9d50 FUN_1408f9d50 body=315 status=ok
// SIG undefined FUN_1408f9d50(void)

longlong * FUN_1408f9d50(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  
  uVar3 = UMovieScene::GetPrivateStaticClass();
  lVar4 = UObjectBaseUtility::GetTypedOuter(param_1,uVar3);
  uVar3 = *(undefined8 *)(lVar4 + 0xb8);
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = FUN_1408fab30();
  plVar6 = (longlong *)FUN_1417985e0(uVar5,param_1,0,0,0,0,0,0,0);
  auVar7._0_8_ = (double)(int)uVar3 / (double)(int)((ulonglong)uVar3 >> 0x20);
  lVar4 = (longlong)auVar7._0_8_;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != auVar7._0_8_)) {
    auVar7._8_8_ = auVar7._0_8_;
    uVar2 = movmskpd(0,auVar7);
    auVar7._0_8_ = (double)(longlong)(lVar4 - (ulonglong)(uVar2 & 1));
  }
  (**(code **)(*plVar6 + 0x2b8))(plVar6,param_1 + 0x58,param_3,(int)auVar7._0_8_,param_4);
  plVar6[0x20] = param_2;
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = plVar6;
  return plVar6;
}



// FUNCTION 1408f9e90 FUN_1408f9e90 body=114 status=ok
// SIG undefined FUN_1408f9e90(void)

void FUN_1408f9e90(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_1408fab30();
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 1408f9f10 FUN_1408f9f10 body=211 status=ok
// SIG undefined FUN_1408f9f10(void)

undefined8 * FUN_1408f9f10(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *(undefined8 *)(param_3 + 0xf0);
  uVar2 = *(undefined8 *)(param_3 + 0x100);
  uVar6 = 0;
  uVar3 = *(undefined8 *)(param_3 + 0xf8);
  uVar5 = uVar6;
  if (*(char *)(param_3 + 0x90) != '\x02') {
    uVar5 = *(undefined4 *)(param_3 + 0x94);
  }
  if (*(char *)(param_3 + 0x98) != '\x02') {
    uVar6 = *(undefined4 *)(param_3 + 0x9c);
  }
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar4 = (undefined8 *)FMemory::Malloc(0x50);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar4;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar4 = param_2;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *(undefined1 *)(puVar4 + 2) = 0;
  puVar4[3] = 0;
  *puVar4 = &PTR__scalar_deleting_destructor__144149718;
  puVar4[4] = uVar1;
  puVar4[5] = uVar2;
  puVar4[6] = uVar3;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined4 *)(puVar4 + 9) = uVar5;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uVar6;
  return param_2;
}



// FUNCTION 1408f9ff0 FUN_1408f9ff0 body=647 status=ok
// SIG undefined FUN_1408f9ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001408fa164) */

void FUN_1408f9ff0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 ******ppppppuVar7;
  longlong lVar8;
  undefined1 auStack_138 [32];
  undefined8 *****local_118;
  undefined8 *****local_108;
  longlong local_100;
  longlong local_f8;
  undefined4 local_f0;
  byte local_c8;
  undefined1 local_c0 [104];
  undefined8 *****local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_f8 = *(longlong *)(param_1 + 0x28);
  if ((local_f8 != 0) && (bVar1 = *(byte *)(param_3 + 0x40), (bVar1 & 0x28) == 0)) {
    if ((bVar1 & 0x14) == 0) {
      iVar2 = *(int *)(param_3 + 0x24);
      iVar5 = iVar2;
      if (iVar2 == -0x80000000) {
        lVar3 = 0x10;
        if (*(int *)(param_3 + 0x20) != 0) {
          lVar3 = 4;
        }
        iVar5 = (int)*(undefined8 *)(lVar3 + param_3);
      }
      if (*(int *)(param_1 + 0x4c) <= iVar5) {
        return;
      }
      if (iVar2 == -0x80000000) {
        lVar3 = 0x10;
        if (*(int *)(param_3 + 0x20) != 0) {
          lVar3 = 4;
        }
        iVar2 = (int)*(undefined8 *)(lVar3 + param_3);
      }
      lVar8 = (longlong)(int)*(undefined8 *)(param_3 + 0x18);
      lVar3 = (longlong)(iVar2 - *(int *)(param_1 + 0x48)) *
              (longlong)(int)((ulonglong)*(undefined8 *)(param_3 + 0x18) >> 0x20) * 10000000;
      lVar6 = lVar8 / 2;
      if (lVar3 < 0) {
        lVar3 = (lVar3 - lVar6) + 1;
      }
      else {
        lVar3 = lVar6 + lVar3;
      }
      local_108 = (undefined8 *****)&PTR_FUN_144149a98;
      local_100 = lVar6 / lVar8 + lVar3 / lVar8;
      local_f0 = 0x3f800000;
    }
    else {
      if ((bVar1 & 0x10) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_3 + 0x38) - *(int *)(param_1 + 0x48);
      }
      lVar8 = (longlong)(int)*(undefined8 *)(param_3 + 0x18);
      lVar6 = (longlong)(int)((ulonglong)*(undefined8 *)(param_3 + 0x18) >> 0x20) * (longlong)iVar2
              * 10000000;
      lVar3 = lVar8 / 2;
      if (lVar6 < 0) {
        lVar3 = (lVar6 - lVar3) + 1;
      }
      else {
        lVar3 = lVar3 + lVar6;
      }
      local_108 = (undefined8 *****)&PTR_FUN_144149a88;
      local_100 = local_f8;
      local_f8 = lVar3 / lVar8;
    }
    local_c8 = local_c8 | 3;
    local_118 = &local_108;
    uVar4 = FMovieSceneExecutionTokens::FEntry::FEntry
                      (local_c0,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
    iVar2 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
    }
    FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar2 * 0xb0 + *param_5,uVar4);
    if ((local_18 & 1) != 0) {
      ppppppuVar7 = local_58;
      if ((local_18 & 2) == 0) {
        ppppppuVar7 = (undefined8 ******)local_58[0];
      }
      local_18 = local_18 & 0xfe;
      (*(code *)**ppppppuVar7)(ppppppuVar7,0);
      if ((local_18 & 2) == 0) {
        FMemory::Free(local_58[0]);
      }
    }
    if ((local_c8 & 1) != 0) {
      ppppppuVar7 = &local_108;
      if ((local_c8 & 2) == 0) {
        ppppppuVar7 = (undefined8 ******)local_108;
      }
      local_c8 = local_c8 & 0xfe;
      (*(code *)**ppppppuVar7)(ppppppuVar7,0);
      if ((local_c8 & 2) == 0) {
        FMemory::Free(local_108);
      }
    }
  }
  return;
}



// FUNCTION 1408fa280 FUN_1408fa280 body=389 status=ok
// SIG undefined FUN_1408fa280(void)

void FUN_1408fa280(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_res20;
  longlong local_18;
  longlong local_10;
  
  plVar2 = *(longlong **)(param_4 + 8);
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::FindId(plVar2,&local_res20,param_4 + 0x24);
  puVar7 = (undefined8 *)0x0;
  puVar8 = puVar7;
  if ((int)local_res20 != -1) {
    puVar8 = (undefined8 *)((longlong)(int)local_res20 * 0x20 + *plVar2);
  }
  puVar5 = puVar8 + 2;
  if (puVar8 == (undefined8 *)0x0) {
    puVar5 = puVar7;
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar5;
  }
  lVar3 = puVar7[4];
  if (lVar3 != 0) {
    lVar6 = FUN_142aaa190(lVar3);
    if (*(int *)(lVar6 + 8) < 2) {
      puVar7[5] = *(undefined8 *)(param_1 + 8);
      FUN_142aab3c0(lVar3,*(undefined8 *)(param_1 + 0x10));
    }
    else {
      cVar4 = FUN_142aaac60(lVar3);
      if (cVar4 == '\0') {
        FD3D12DynamicRHI::RHICreateSamplerState(lVar3,&local_10);
        if (local_10 != 0) {
          iVar1 = *(int *)(param_2 + 0x34);
          local_18 = *(longlong *)(param_1 + 8) % local_10;
          cVar4 = FUN_142aaac50(lVar3);
          if (iVar1 == 1) {
            if (cVar4 == '\0') {
              FUN_142aac150(lVar3,&local_18);
              FUN_142aac6f0(lVar3,0x3f800000);
              puVar7 = (undefined8 *)FD3D12DynamicRHI::RHICreateSamplerState(lVar3,&local_res20);
            }
            else {
              if ((*(byte *)(param_2 + 0x40) & 1) != 0) {
                FUN_142aac150(lVar3,&local_18);
              }
              puVar7 = (undefined8 *)FD3D12DynamicRHI::RHICreateSamplerState(lVar3,&local_res20);
            }
          }
          else {
            if (cVar4 != '\0') {
              FUN_142aac6f0(lVar3,0);
            }
            FUN_142aac150(lVar3,&local_18);
            puVar7 = &local_res20;
            local_res20 = 0x8000000000000000;
          }
          FUN_142aac3a0(lVar3,puVar7);
        }
      }
      else {
        puVar7[5] = *(undefined8 *)(param_1 + 8);
      }
    }
  }
  return;
}



// FUNCTION 1408fa410 Execute body=144 status=ok
// SIG undefined Execute(void)

void FMediaSectionPreRollExecutionToken::Execute
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int local_res20 [2];
  
  plVar1 = *(longlong **)(param_4 + 8);
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res20,param_4 + 0x24);
  puVar6 = (undefined8 *)0x0;
  puVar5 = puVar6;
  if (local_res20[0] != -1) {
    puVar5 = (undefined8 *)((longlong)local_res20[0] * 0x20 + *plVar1);
  }
  puVar3 = puVar5 + 2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar3 = puVar6;
  }
  if (puVar3 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar3;
  }
  lVar2 = puVar6[4];
  if ((lVar2 != 0) && (lVar4 = FUN_142aaa190(lVar2), *(int *)(lVar4 + 8) < 2)) {
    puVar6[5] = *(undefined8 *)(param_1 + 0x10);
    FUN_142aab3c0(lVar2,*(undefined8 *)(param_1 + 8));
  }
  return;
}



// FUNCTION 1408fa4b0 HandleMediaPlayerEvent body=110 status=ok
// SIG undefined HandleMediaPlayerEvent(void)

void FMovieSceneMediaData::HandleMediaPlayerEvent(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong local_res18;
  undefined1 local_res20 [8];
  
  if (((param_2 == 3) && (-1 < *(longlong *)(param_1 + 0x28))) &&
     (cVar1 = FUN_142aac7b0(*(undefined8 *)(param_1 + 0x20)), cVar1 != '\0')) {
    plVar2 = (longlong *)
             FD3D12DynamicRHI::RHICreateSamplerState(*(undefined8 *)(param_1 + 0x20),local_res20);
    local_res18 = *(longlong *)(param_1 + 0x28) % *plVar2;
    FUN_142aac6f0(*(undefined8 *)(param_1 + 0x20),0);
    FUN_142aac150(*(undefined8 *)(param_1 + 0x20),&local_res18);
    *(undefined8 *)(param_1 + 0x28) = 0x8000000000000000;
  }
  return;
}



// FUNCTION 1408fa520 FUN_1408fa520 body=263 status=ok
// SIG undefined FUN_1408fa520(void)

void FUN_1408fa520(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int local_res20 [2];
  
  plVar1 = *(longlong **)(param_4 + 8);
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res20,param_4 + 0x24);
  puVar9 = (undefined8 *)0x0;
  puVar6 = puVar9;
  if (local_res20[0] != -1) {
    puVar6 = (undefined8 *)((longlong)local_res20[0] * 0x20 + *plVar1);
  }
  puVar4 = puVar6 + 2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar4 = puVar9;
  }
  if (puVar4 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*puVar4;
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  lVar8 = puVar9[4];
  if (lVar8 == 0) {
    return;
  }
  if (((*(byte *)(param_3 + 0x40) & 0x14) == 0) && ((*(byte *)(param_3 + 0x40) & 0x28) == 0)) {
    iVar3 = *(int *)(param_3 + 0x24);
    if (iVar3 == -0x80000000) {
      lVar5 = 0x10;
      if (*(int *)(param_3 + 0x20) != 0) {
        lVar5 = 4;
      }
      iVar3 = (int)*(undefined8 *)(lVar5 + param_3);
    }
    if (*(int *)(param_1 + 0x4c) <= iVar3) goto LAB_1408fa5c4;
    bVar2 = true;
  }
  else {
LAB_1408fa5c4:
    bVar2 = false;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    lVar7 = lVar8;
    if (!bVar2) {
      lVar5 = ULevelSequencePlayer::CanPlay();
      if (lVar5 != lVar8) goto LAB_1408fa5ef;
      lVar5 = *(longlong *)(param_1 + 0x20);
      lVar7 = 0;
    }
    ULevelSequencePlayer::CanPlay(lVar5,lVar7);
  }
LAB_1408fa5ef:
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 != 0) {
    if (!bVar2) {
      lVar5 = UCanvasRenderTarget2D::GetWorld();
      if (lVar5 != lVar8) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x30);
      lVar8 = 0;
    }
    UMediaTexture::SetMediaPlayer(lVar5,lVar8);
  }
  return;
}



// FUNCTION 1408fa630 PostInitProperties body=269 status=ok
// SIG undefined PostInitProperties(void)

void UMovieSceneMediaSection::PostInitProperties(longlong param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  
  FUN_141f5b9d0();
  uVar5 = UMovieScene::GetPrivateStaticClass();
  lVar6 = UObjectBaseUtility::GetTypedOuter(param_1,uVar5);
  if (lVar6 == 0) {
    uVar5 = 0x100000018;
  }
  else {
    uVar5 = *(undefined8 *)(lVar6 + 0xb8);
  }
  dVar8 = ((double)(int)uVar5 * 0.5) / (double)(int)((ulonglong)uVar5 >> 0x20);
  lVar6 = (longlong)dVar8;
  dVar9 = dVar8;
  if ((lVar6 != -0x8000000000000000) && ((double)lVar6 != dVar8)) {
    auVar1._8_4_ = SUB84(dVar8,0);
    auVar1._0_8_ = dVar8;
    auVar1._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar9 = (double)(longlong)(lVar6 - (ulonglong)(uVar3 & 1));
  }
  dVar8 = dVar8 - dVar9;
  iVar4 = (int)dVar9;
  dVar9 = dVar8;
  if ((0.0 < dVar8) && (dVar9 = 0.9999999403953552, dVar8 <= 0.9999999403953552)) {
    dVar9 = dVar8;
  }
  fVar10 = (float)dVar9;
  if (0.0 <= fVar10) {
    fVar7 = 0.99999994;
    if (fVar10 <= 0.99999994) {
      fVar7 = fVar10;
    }
    if (0.5 <= fVar7) {
      iVar4 = iVar4 + 1;
    }
  }
  cVar2 = UMovieSceneSection::TryModify(param_1,1);
  if (cVar2 != '\0') {
    *(int *)(param_1 + 0xa0) = iVar4;
  }
  return;
}



// FUNCTION 1408fa740 FUN_1408fa740 body=578 status=ok
// SIG undefined FUN_1408fa740(void)

void FUN_1408fa740(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar15 = 0;
    local_res8 = 0;
    uVar6 = UUGCampaignMap::GetPrivateStaticClass();
    uVar7 = GetTransientPackage();
    plVar8 = (longlong *)FUN_141791c20(local_res10,uVar7,uVar6,local_res8);
    lVar9 = *plVar8;
    uVar6 = GetTransientPackage();
    local_res8 = 0;
    if (lVar9 == 0) {
      FUN_1417846f0(uVar6,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar7 = UUGCampaignMap::GetPrivateStaticClass();
    lVar9 = FUN_1417985e0(uVar7,uVar6,lVar9,0,0,0,0,0,0);
    *(longlong *)(param_1 + 0x20) = lVar9;
    plVar8 = (longlong *)(lVar9 + 0x108);
    plVar10 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar10 != (longlong *)0x0) {
      plVar10[1] = param_1;
      *plVar10 = (longlong)&DAT_143f3ed00;
      plVar10[2] = (longlong)FMovieSceneMediaData::HandleMediaPlayerEvent;
      lVar11 = FDelegateHandle::GenerateNewID();
      plVar10[4] = lVar11;
      *plVar10 = (longlong)&PTR_GetPoolName_143f3ed48;
      if (*(int *)(lVar9 + 0x11c) < 1) {
        *(int *)(lVar9 + 0x118) = *(int *)(lVar9 + 0x118) + -1;
        iVar1 = *(int *)(lVar9 + 0x110);
        if (*(int *)(lVar9 + 0x118) <= iVar1) {
          uVar16 = uVar15;
          uVar17 = uVar15;
          iVar13 = iVar1;
          if (0 < iVar1) {
            do {
              if (((*(int *)(uVar16 + 8 + *plVar8) == 0) ||
                  (plVar2 = *(longlong **)(uVar16 + *plVar8), plVar2 == (longlong *)0x0)) ||
                 (cVar3 = (**(code **)(*plVar2 + 0x10))(), cVar3 != '\0')) {
                TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(plVar8,uVar17,1,1);
              }
              else {
                uVar17 = (ulonglong)((int)uVar17 + 1);
                uVar16 = uVar16 + 0x10;
              }
              iVar13 = *(int *)(lVar9 + 0x110);
            } while ((int)uVar17 < iVar13);
          }
          iVar4 = iVar13 * 2;
          if (iVar4 < 3) {
            iVar4 = 2;
          }
          *(int *)(lVar9 + 0x118) = iVar4;
          if ((iVar4 < iVar1) && (*(int *)(lVar9 + 0x114) != iVar13)) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar8);
          }
        }
      }
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_res8);
      iVar1 = *(int *)(lVar9 + 0x110);
      *(int *)(lVar9 + 0x110) = iVar1 + 1;
      if (*(int *)(lVar9 + 0x114) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
      }
      puVar12 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
      *puVar12 = plVar10;
      *(undefined4 *)(puVar12 + 1) = 3;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0xc1) = 0;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar14 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar14;
      uVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar14) * 0x18;
    }
    *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) | 0x40000000;
  }
  return;
}



// FUNCTION 1408fa990 Setup body=160 status=ok
// SIG undefined Setup(void)

void FMovieSceneMediaSectionTemplate::Setup(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_res10 [16];
  undefined8 *local_res20;
  longlong local_18;
  undefined8 **local_10;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    PropertyTemplate::FSectionData::FSectionData(puVar1);
    puVar1[4] = 0;
    *puVar1 = &PTR_FUN_144149428;
    puVar1[5] = 0x8000000000000000;
  }
  local_18 = param_2 + 0x24;
  local_10 = &local_res20;
  local_res20 = puVar1;
  FUN_14058dc00(*(undefined8 *)(param_2 + 8),local_res10,&local_18,0);
  if (local_res20 != (undefined8 *)0x0) {
    (**(code **)*local_res20)(local_res20,1);
  }
  FUN_1408fa740(puVar1);
  return;
}



// FUNCTION 1408faa40 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_1408faa66;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_1408faa66:
  lVar2 = FUN_1408fab30();
  return param_2 == lVar2;
}



// FUNCTION 1408faa80 TearDown body=166 status=ok
// SIG undefined TearDown(void)

void FMovieSceneMediaSectionTemplate::TearDown(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int local_res10 [6];
  
  plVar1 = *(longlong **)(param_2 + 8);
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res10);
  puVar6 = (undefined8 *)0x0;
  puVar5 = puVar6;
  if (local_res10[0] != -1) {
    puVar5 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *plVar1);
  }
  puVar3 = puVar5 + 2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar3 = puVar6;
  }
  if (puVar3 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar3;
  }
  if ((puVar6 != (undefined8 *)0x0) && (lVar2 = puVar6[4], lVar2 != 0)) {
    if ((*(longlong *)(param_1 + 0x20) != 0) &&
       (lVar4 = ULevelSequencePlayer::CanPlay(), lVar4 == lVar2)) {
      ULevelSequencePlayer::CanPlay(*(undefined8 *)(param_1 + 0x20),0);
    }
    if ((*(longlong *)(param_1 + 0x30) != 0) &&
       (lVar4 = UCanvasRenderTarget2D::GetWorld(), lVar4 == lVar2)) {
      UMediaTexture::SetMediaPlayer(*(undefined8 *)(param_1 + 0x30),0);
    }
  }
  return;
}



// FUNCTION 1408fab30 FUN_1408fab30 body=162 status=ok
// SIG undefined FUN_1408fab30(void)

longlong FUN_1408fab30(void)

{
  if (DAT_146862c10 == 0) {
    FUN_14171ccd0(L"/Script/MediaCompositing",L"MovieSceneMediaSection",&DAT_146862c10,FUN_140447710
                  ,0x108,0x10000000,0,L"Engine",&LAB_1408fad70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7840,&LAB_140447700,0);
  }
  return DAT_146862c10;
}



// FUNCTION 1408fac00 FUN_1408fac00 body=47 status=ok
// SIG undefined FUN_1408fac00(void)

longlong FUN_1408fac00(void)

{
  if (DAT_146862c00 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146862c00,&PTR_s__Script_MediaCompositing_14414a0c8);
  }
  return DAT_146862c00;
}



// FUNCTION 1408fac30 FUN_1408fac30 body=53 status=ok
// SIG undefined FUN_1408fac30(void)

void FUN_1408fac30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_14414a128;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408fac70 FUN_1408fac70 body=53 status=ok
// SIG undefined FUN_1408fac70(void)

void FUN_1408fac70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_14414a240;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408facb0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UMovieSceneMediaTrack::StaticClass(void)

{
  if (DAT_146862c40 == 0) {
    FUN_14171ccd0(L"/Script/MediaCompositing",L"MovieSceneMediaTrack",&DAT_146862c40,FUN_140447710,
                  0x68,0x10000000,0,L"Engine",&LAB_1408fad90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7830,&LAB_140447700,0);
  }
  return DAT_146862c40;
}



// FUNCTION 1408fadb0 FUN_1408fadb0 body=162 status=ok
// SIG undefined FUN_1408fadb0(void)

undefined8 * FUN_1408fadb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = param_1 + 3;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  if (puVar1 != param_2 + 3) {
    iVar2 = *(int *)(param_2 + 4);
    _Src = (void *)param_2[3];
    *(int *)(param_1 + 4) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x24) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 2);
    }
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  return param_1;
}



// FUNCTION 1408fae90 FUN_1408fae90 body=225 status=ok
// SIG undefined FUN_1408fae90(void)

undefined8 FUN_1408fae90(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined8 *)(param_3 + 8);
    do {
      *param_2 = puVar4[-1];
      puVar1 = param_2 + 3;
      param_2[1] = *puVar4;
      param_2[2] = puVar4[1];
      if (puVar1 != puVar4 + 2) {
        iVar3 = *(int *)(puVar4 + 3);
        _Src = (void *)puVar4[2];
        *(int *)(param_2 + 4) = iVar3;
        if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0x24) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x24) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 * 2);
        }
      }
      *(undefined4 *)(param_2 + 5) = *(undefined4 *)(puVar4 + 4);
      puVar2 = (undefined4 *)((longlong)puVar4 + 0x24);
      puVar4 = puVar4 + 6;
      *(undefined4 *)((longlong)param_2 + 0x2c) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 6;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408faf80 FUN_1408faf80 body=114 status=ok
// SIG undefined FUN_1408faf80(void)

undefined8 FUN_1408faf80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x10);
    do {
      puVar1[-8] = puVar1[param_3 + -8];
      *puVar1 = puVar1[param_3];
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar1 + param_3 + 8);
      FUN_1408fadb0(puVar1 + 0x10,puVar1 + param_3 + 0x10);
      puVar1 = puVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408fb000 FUN_1408fb000 body=6 status=ok
// SIG undefined FUN_1408fb000(void)

undefined8 FUN_1408fb000(void)

{
  return 0x86758b2a;
}


